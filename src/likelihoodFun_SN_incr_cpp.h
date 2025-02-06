#ifndef LIKELIHOODFUN_SN_INCR_CPP_H
#define LIKELIHOODFUN_SN_INCR_CPP_H

#include <RcppArmadillo.h>

using namespace Rcpp;
using namespace arma;
// [[Rcpp::depends(RcppArmadillo)]]

// [[Rcpp::export]]

// likelihood function
Rcpp::List likelihoodFun_SN_incr_cpp(arma::mat dist_mat, double upper_bound,
                                     Rcpp::List proposal_result, 
                                     String metric, Rcpp::List hyperparList,
                                     double n_incr);

#endif