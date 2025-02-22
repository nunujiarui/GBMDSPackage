#' @description Perform annealed SMC algorithm for the multidimensional scaling problem with an incremental data dimension. Various models can be implemented.
#' @title run ASMC for MDS with an incremental dimension
#' @param model  likelihood model and hyperparameters
#' @param dist.mat      distance matrix
#' @param tuningparList  ASMC tuning parameters
#' @param n.core         number of cores
#' @param prev.result    results from the previous ASMC
#' @param metric         distance metric
#' @return results of weighted particles, marginal likelihood estimates
#' print(" ")
#' @export


ASMC_incr <- function(model, dist.mat, tuningparList, n.core, 
                      prev.result, metric){

  if( n.core > 1 )  cl = parallel::makeCluster(n.core, type="FORK", setup_timeout = 0.5)
  
  n <- nrow(dist.mat)
  K <- tuningparList$K

  ### setting

  x.mean <- list(rep(0, p))
  x.mean.list <- rep(x.mean, n)

  ### initialization
  # initialize SMC iteration index
  r <- 1

  # initialize annealing parameter
  tau <- numeric()
  tau[1] <- 0
  tauDiff <- numeric()
  tauDiff[1] <- 0

  # initialize marginal log likelihood estimate
  logZ <- 0

  # initialize the relative effective sample size
  rESS <- numeric()
  rESS[1] <- 0

  # initialize particles with independent samples
  theta <- list()
  xi <- list()
  sigma2 <- numeric()
  sigma2.list <- list()
  lambda <- list()
  psi <- numeric()

  if (any(class(model) %in% c("truncatedT_incr"))){
    g <- list()
  }

  theta <- lapply(1:K, function(i){initialFun(model, prev.result, dist.mat, metric)})
  xi <- lapply(1:K, function(k){theta[[k]]$x})
  sigma2 <- unlist(lapply(1:K, function(k){theta[[k]]$sigma2}))
  psi <- unlist(lapply(1:K, function(k){theta[[k]]$psi}))
  lambda <- lapply(1:K, function(k){theta[[k]]$lambda})
  if (any(class(model) %in% c("truncatedT_incr"))){
    g <- lapply(1:K, function(k){theta[[k]]$g})
  }

  sigma2.list[[r]] <- sigma2

  n.incr <- nrow(dist.mat) - nrow(prev.result$xi)
  reference.mean <- rep(list(rbind(prev.result$xi,
                                   matrix(data = 0, nrow = n.incr, ncol = model$p))), K)
  #reference.mean <- rep(list(prev.result$xi), K)


  # set initialize weights to unity
  W <- rep(1/K, K)
  logW <- log(W)

  ### Annealed SMC
  while (tau[r] < 1) {

    cat("iteration:",r,"\n")
    r <- r+1

    # evaluate the log-likelihood
    logL <- rep(NA, K)
    SSR <- rep(NA, K)

    logLFun <- function(k){

      n.incr <- nrow(dist.mat) - nrow(prev.result$xi)
      if (any(class(model) %in% c("truncatedT_incr"))){
        previousVal <- list(x = xi[[k]], sigma2 = sigma2[k], psi = psi[k],
                            lambda = lambda[[k]], SSR = SSR[k], g = g[[k]])
      } else{
        previousVal <- list(x = xi[[k]], sigma2 = sigma2[k], psi = psi[k],
                            lambda = lambda[[k]], SSR = SSR[k])
      }

      lik.result <- likelihoodFun(model,  dist.mat, proposal.result = previousVal, metric, n.incr)
      xi.list <- lapply(seq_len(nrow(xi[[k]])), function(i) xi[[k]][i,])
      xi.prev.list <- xi.list[1:(n-n.incr)]
      reference.mean.k <- lapply(seq_len(nrow(reference.mean[[k]])), function(i) reference.mean[[k]][i,])[1:(n-n.incr)]
      ref.d.x <- mapply(mvtnorm::dmvnorm, xi.prev.list, reference.mean.k, rep(list(reference.x.sd), n-n.incr), log = TRUE)
      logPriorRef <- sum(ref.d.x)
      logL <- lik.result$loglikelihood + sum(lik.result$logprior) - logPriorRef
      SSR <- lik.result$SSR

      result <- list(logL = logL, SSR = SSR)

      return(result)

    }

    if (n.core > 1){
      result <- parLapply(cl, 1:K, logLFun)
      logL <- unlist(lapply(1:K, function(k){result[[k]]$logL}))
      SSR <- unlist(lapply(1:K, function(k){result[[k]]$SSR}))
    } else{
      result <- sapply(1:K, logLFun)
      logL <- unlist(result[1, ])
      SSR <- unlist(result[2, ])
    }

    ## determine next annealing parameter
    tauDiff[r] <- bisectionFun(low = 0, high = 1, W, logL, phi = tuningparList$phi)
    tau[r] <- tau[r-1] + tauDiff[r]
    cat("annealing parameter:", tau[r],"\n")

    # if tau is set greater than 1, fix by setting to 1
    if(tau[r] > 1){
      tau[r] <- 1
      tauDiff[r] <- 1-tau[r-1]
    }

    ## compute pre-sampling unnormalized weights
    logw <- logW + tauDiff[r]*logL
    # normalize the weights
    logmax <- max(logw)
    W <- exp(logw-logmax)/sum(exp(logw-logmax))
    logW <- log(W)

    ## sample particles using invariant Metropolis-Hastings kernel
    MCMCmove <- function(k){

      n.incr <- nrow(dist.mat) - nrow(prev.result$xi)
      if (any(class(model) %in% c("truncatedT_incr"))){
        currentVal <- list(x = xi[[k]], sigma2 = sigma2[k],
                           lambda = lambda[[k]], SSR = SSR[k], g = g[[k]])
      } else if (any(class(model) %in% c("truncatedSkewedN_incr"))){
        currentVal <- list(x = xi[[k]], sigma2 = sigma2[k], psi = psi[k],
                           lambda = lambda[[k]], SSR = SSR[k])
      } else{
        currentVal <- list(x = xi[[k]], sigma2 = sigma2[k],
                           lambda = lambda[[k]], SSR = SSR[k])
      }

      if (r == 2){
        prevX <- reference.mean[[k]]
      } else{
        prevX <- xi.prev[[k]]
      }

      prop.result <- proposalFun(model, currentVal, n, dist.mat,
                                 prevX = prevX, metric, annealingPar = tau[r])

      xi <- prop.result$x
      sigma2 <- prop.result$sigma2
      lambda <-prop.result$lambda
      if (any(class(model) %in% c("truncatedT_incr"))){
        g <- prop.result$g
      }
      psi <- prop.result$psi

      # save the previous particles' coordinates x
      xi.prev <- currentVal$x

      if (any(class(model) %in% c("truncatedT_incr"))){
        result <- list(xi = xi, sigma2 = sigma2, lambda = lambda, xi.prev = xi.prev, g = g, psi = psi)
      } else{
        result <- list(xi = xi, sigma2 = sigma2, lambda = lambda, xi.prev = xi.prev, psi = psi)
      }

      return(result)

    }

    if (n.core > 1) clusterExport(cl, varlist = ls(), envir = environment())

    if (n.core > 1){
      result.MCMC <- parLapply(cl, 1:K, MCMCmove)
      xi <- lapply(1:K, function(k){result.MCMC[[k]]$xi})
      sigma2 <- unlist(lapply(1:K, function(k){result.MCMC[[k]]$sigma2}))
      lambda <- lapply(1:K, function(k){result.MCMC[[k]]$lambda})
      xi.prev <- lapply(1:K, function(k){result.MCMC[[k]]$xi.prev})
      psi <- unlist(lapply(1:K, function(k){result.MCMC[[k]]$psi}))
      if (any(class(model) %in% c("truncatedT_incr"))){
        g <- lapply(1:K, function(k){result.MCMC[[k]]$g})
      }
    } else{
      result.MCMC <- lapply(1:K, MCMCmove)
      xi <- lapply(1:K, function(k){result.MCMC[[k]]$xi})
      sigma2 <- unlist(lapply(1:K, function(k){result.MCMC[[k]]$sigma2}))
      lambda <- lapply(1:K, function(k){result.MCMC[[k]]$lambda})
      xi.prev <- lapply(1:K, function(k){result.MCMC[[k]]$xi.prev})
      psi <- unlist(lapply(1:K, function(k){result.MCMC[[k]]$psi}))
      if (any(class(model) %in% c("truncatedT_incr"))){
        g <- lapply(1:K, function(k){result.MCMC[[k]]$g})
      }
    }

    sigma2.list[[r]] <- sigma2

    ## update the log marginal likelihood estimate
    logZ <- logZ + log(sum(exp(logw - logmax))) + logmax

    ## compute the rESS
    rESS[r] <- rESSFun(logW)

    # check the value for tau_r
    if (tau[r] == 1){
      # can end the algorithm
      # return the current particle population
      if (any(class(model) %in% c("truncatedT"))){
        output.list <- list(xi.output = xi, sigma2.output = sigma2, psi.output = psi,
                            lambda.output = lambda, g = g,
                            weight.output = W,
                            SSR.output = SSR, logZ = logZ)
      } else{
        output.list <- list(xi.output = xi, sigma2.output = sigma2, psi.output = psi,
                            lambda.output = lambda,
                            weight.output = W,
                            SSR.output = SSR, logZ = logZ)
      }
    } else if (rESS[r] < tuningparList$eps){
      # particle degeneracy is too severe, resampling is needed
      index <- multinomialResampleFun(W)
      xi <- xi[index]
      sigma2 <- sigma2[index]
      lambda <- lambda[index]
      sigma2.list[[r]] <- sigma2

      # reset particle weights
      W <- rep(1/K, K)
      logW <- log(W)

    }

  }

  stopCluster(cl)

  ## Set the name for the class
  class(output.list) <- append(class(output.list),"BMDSParticles_incr")

  return(output.list)

}

