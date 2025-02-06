#ifndef DISTRCPP_H
#define DISTRCPP_H

using namespace Rcpp;


// [[Rcpp::export]]

// Obtain resampling index using multinomial resampling
Rcpp::NumericVector multinomialResampleFun_cpp(const std::vector<double>& W);

#endif