\name{ASMC}
\alias{ASMC}
\title{run ASMC for MDS with a fixed dimension}
\arguments{
\item{model}{likelihood model, hyperparameters, and dimension}
\item{dist.mat}{distance matrix}
\item{tuningparList}{ASMC tuning parameters}
\item{n.core}{number of cores}
\item{cmds.result}{results from the classical MDS}
\item{metric}{distance metric used in the model}
}
\value{
results of weighted particles, marginal likelihood estimates
}
\description{
Perform annealed SMC algorithm for the multidimensional scaling problem with a fixed data dimension. Various models can be implemented.
}