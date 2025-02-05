// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

#include "distRcpp.h"
#include "SSRFun_cpp.h"
#include "dinvgamma_cpp.h"
#include "dmvnrm_arma_fast.h"
#include "rCESSFun_cpp.h"
#include "bisectionFun_cpp.h"
#include "dproposalFun_cpp.h"
#include "rmvnorm_arma.h"
#include "logReferenceRatio_cpp.h"
#include "multinomialResampleFun_cpp.h"

#include "likelihoodFun_cpp.h"
#include "likelihoodFun_SN_cpp.h"
#include "likelihoodFun_SN_incr_cpp.h"
#include "likelihoodFun_T_cpp.h"
#include "likelihoodFun_T_incr_cpp.h"

#include "initialFun_cpp.h"
#include "initialFun_SN_cpp.h"
#include "initialFun_SN_incr_cpp.h"
#include "initialFun_T_cpp.h"
#include "initialFun_T_incr_cpp.h"

#include "proposalFun_cpp.h"
#include "proposalFun_SN_cpp.h"
#include "proposalFun_SN_incr_cpp.h"
#include "proposalFun_T_cpp.h"
#include "proposalFun_T_incr_cpp.h"


#include "mvnorm.h"

#include "psnorm_cpp.h"




using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// SSRFun_cpp
// Calculate the SSR value  double SSRFun_cpp(arma::mat d_mat, arma::mat delta_mat);
RcppExport SEXP _GBMDSpackage_SSRFun_cpp(SEXP d_matSEXP, SEXP delta_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type d_mat(d_matSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type delta_mat(delta_matSEXP);
    rcpp_result_gen = Rcpp::wrap(SSRFun_cpp(d_mat, delta_mat));
    return rcpp_result_gen;
END_RCPP
}
// bisectionFun_cpp
// Calculate the next annealing parameter  double bisectionFun_cpp(double low, double high, arma::vec W, arma::vec logL, double phi);
RcppExport SEXP _GBMDSpackage_bisectionFun_cpp(SEXP lowSEXP, SEXP highSEXP, SEXP WSEXP, SEXP logLSEXP, SEXP phiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type low(lowSEXP);
    Rcpp::traits::input_parameter< double >::type high(highSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type logL(logLSEXP);
    Rcpp::traits::input_parameter< double >::type phi(phiSEXP);
    rcpp_result_gen = Rcpp::wrap(bisectionFun_cpp(low, high, W, logL, phi));
    return rcpp_result_gen;
END_RCPP
}
// dinvgamma_cpp
Rcpp::NumericVector dinvgamma_cpp(Rcpp::NumericVector x, double shape, double rate, bool log);
RcppExport SEXP _GBMDSpackage_dinvgamma_cpp(SEXP xSEXP, SEXP shapeSEXP, SEXP rateSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< bool >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(dinvgamma_cpp(x, shape, rate, log));
    return rcpp_result_gen;
END_RCPP
}
// dmvnrm_arma_fast
arma::vec dmvnrm_arma_fast(arma::mat const& x, arma::rowvec const& mean, arma::mat const& sigma, bool const logd);
RcppExport SEXP _GBMDSpackage_dmvnrm_arma_fast(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma_fast(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// dproposalFun_cpp
// dproposal function double dproposalFun_cpp(arma::mat dist_mat, Rcpp::List para_result_l, Rcpp::List para_result_r, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_dproposalFun_cpp(SEXP dist_matSEXP, SEXP para_result_lSEXP, SEXP para_result_rSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type para_result_l(para_result_lSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type para_result_r(para_result_rSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(dproposalFun_cpp(dist_mat, para_result_l, para_result_r, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// initialFun_SN_cpp
// Initialize parameters Rcpp::List initialFun_SN_cpp(arma::mat cmds_result, arma::mat dist_mat, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_initialFun_SN_cpp(SEXP cmds_resultSEXP, SEXP dist_matSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type cmds_result(cmds_resultSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(initialFun_SN_cpp(cmds_result, dist_mat, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// initialFun_SN_incr_cpp
// Initialize parameters Rcpp::List initialFun_SN_incr_cpp(arma::mat prev_result, arma::mat dist_mat, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_initialFun_SN_incr_cpp(SEXP prev_resultSEXP, SEXP dist_matSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type prev_result(prev_resultSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(initialFun_SN_incr_cpp(prev_result, dist_mat, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// initialFun_T_cpp
// Initialize parameters Rcpp::List initialFun_T_cpp(arma::mat cmds_result, arma::mat dist_mat, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_initialFun_T_cpp(SEXP cmds_resultSEXP, SEXP dist_matSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type cmds_result(cmds_resultSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(initialFun_T_cpp(cmds_result, dist_mat, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// initialFun_T_incr_cpp
// Initialize parameters Rcpp::List initialFun_T_incr_cpp(arma::mat prev_result, arma::mat dist_mat, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_initialFun_T_incr_cpp(SEXP prev_resultSEXP, SEXP dist_matSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type prev_result(prev_resultSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(initialFun_T_incr_cpp(prev_result, dist_mat, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// initialFun_cpp
// Initialize parameters Rcpp::List initialFun_cpp(arma::mat cmds_result, arma::mat dist_mat, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_initialFun_cpp(SEXP cmds_resultSEXP, SEXP dist_matSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type cmds_result(cmds_resultSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(initialFun_cpp(cmds_result, dist_mat, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodFun_SN_cpp
// likelihood function Rcpp::List likelihoodFun_SN_cpp(arma::mat dist_mat, double upper_bound, Rcpp::List proposal_result, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_likelihoodFun_SN_cpp(SEXP dist_matSEXP, SEXP upper_boundSEXP, SEXP proposal_resultSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type proposal_result(proposal_resultSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodFun_SN_cpp(dist_mat, upper_bound, proposal_result, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodFun_SN_incr_cpp
// likelihood function Rcpp::List likelihoodFun_SN_incr_cpp(arma::mat dist_mat, double upper_bound, Rcpp::List proposal_result, String metric, Rcpp::List hyperparList, double n_incr);
RcppExport SEXP _GBMDSpackage_likelihoodFun_SN_incr_cpp(SEXP dist_matSEXP, SEXP upper_boundSEXP, SEXP proposal_resultSEXP, SEXP metricSEXP, SEXP hyperparListSEXP, SEXP n_incrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type proposal_result(proposal_resultSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    Rcpp::traits::input_parameter< double >::type n_incr(n_incrSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodFun_SN_incr_cpp(dist_mat, upper_bound, proposal_result, metric, hyperparList, n_incr));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodFun_T_cpp
// likelihood function Rcpp::List likelihoodFun_T_cpp(arma::mat dist_mat, double upper_bound, Rcpp::List proposal_result, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_likelihoodFun_T_cpp(SEXP dist_matSEXP, SEXP upper_boundSEXP, SEXP proposal_resultSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type proposal_result(proposal_resultSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodFun_T_cpp(dist_mat, upper_bound, proposal_result, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodFun_T_incr_cpp
// likelihood function Rcpp::List likelihoodFun_T_incr_cpp(arma::mat dist_mat, double upper_bound, Rcpp::List proposal_result, String metric, Rcpp::List hyperparList, double n_incr);
RcppExport SEXP _GBMDSpackage_likelihoodFun_T_incr_cpp(SEXP dist_matSEXP, SEXP upper_boundSEXP, SEXP proposal_resultSEXP, SEXP metricSEXP, SEXP hyperparListSEXP, SEXP n_incrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type proposal_result(proposal_resultSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    Rcpp::traits::input_parameter< double >::type n_incr(n_incrSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodFun_T_incr_cpp(dist_mat, upper_bound, proposal_result, metric, hyperparList, n_incr));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodFun_cpp
// likelihood function Rcpp::List likelihoodFun_cpp(arma::mat dist_mat, double upper_bound, Rcpp::List proposal_result, String metric, Rcpp::List hyperparList);
RcppExport SEXP _GBMDSpackage_likelihoodFun_cpp(SEXP dist_matSEXP, SEXP upper_boundSEXP, SEXP proposal_resultSEXP, SEXP metricSEXP, SEXP hyperparListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type proposal_result(proposal_resultSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodFun_cpp(dist_mat, upper_bound, proposal_result, metric, hyperparList));
    return rcpp_result_gen;
END_RCPP
}
// logReferenceRatio_cpp
// Calculate the reference ratio in log scale  double logReferenceRatio_cpp(arma::mat new_x, arma::mat current_x, arma::mat prev_x);
RcppExport SEXP _GBMDSpackage_logReferenceRatio_cpp(SEXP new_xSEXP, SEXP current_xSEXP, SEXP prev_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type new_x(new_xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type current_x(current_xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prev_x(prev_xSEXP);
    rcpp_result_gen = Rcpp::wrap(logReferenceRatio_cpp(new_x, current_x, prev_x));
    return rcpp_result_gen;
END_RCPP
}
// multinomialResampleFun_cpp
// Obtain resampling index using multinomial resampling Rcpp::NumericVector multinomialResampleFun_cpp(const std::vector<double>& W);
RcppExport SEXP _GBMDSpackage_multinomialResampleFun_cpp(SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(multinomialResampleFun_cpp(W));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_arma_stochvol
mat rmvnorm_arma_stochvol(int n, mat precision, vec location);
RcppExport SEXP _GBMDSpackage_rmvnorm_arma_stochvol(SEXP nSEXP, SEXP precisionSEXP, SEXP locationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< mat >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< vec >::type location(locationSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_arma_stochvol(n, precision, location));
    return rcpp_result_gen;
END_RCPP
}
// mypsnorm_cpp
double mypsnorm_cpp(double q, double mean, double sd, double psi);
RcppExport SEXP _GBMDSpackage_mypsnorm_cpp(SEXP qSEXP, SEXP meanSEXP, SEXP sdSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(mypsnorm_cpp(q, mean, sd, psi));
    return rcpp_result_gen;
END_RCPP
}
// proposalFun_SN_cpp
// proposal function Rcpp::List proposalFun_SN_cpp(arma::mat dist_mat, Rcpp::List currentVal, arma::mat prevX, double annealingPar, String metric, Rcpp::List hyperparList, double upper_bound, arma::vec update_list, arma::vec update_list_x);
RcppExport SEXP _GBMDSpackage_proposalFun_SN_cpp(SEXP dist_matSEXP, SEXP currentValSEXP, SEXP prevXSEXP, SEXP annealingParSEXP, SEXP metricSEXP, SEXP hyperparListSEXP, SEXP upper_boundSEXP, SEXP update_listSEXP, SEXP update_list_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type currentVal(currentValSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prevX(prevXSEXP);
    Rcpp::traits::input_parameter< double >::type annealingPar(annealingParSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list(update_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list_x(update_list_xSEXP);
    rcpp_result_gen = Rcpp::wrap(proposalFun_SN_cpp(dist_mat, currentVal, prevX, annealingPar, metric, hyperparList, upper_bound, update_list, update_list_x));
    return rcpp_result_gen;
END_RCPP
}
// proposalFun_SN_incr_cpp
// proposal function Rcpp::List proposalFun_SN_incr_cpp(arma::mat dist_mat, Rcpp::List currentVal, arma::mat prevX, double annealingPar, String metric, Rcpp::List hyperparList, double n_incr, double upper_bound, arma::vec update_list, arma::vec update_list_x);
RcppExport SEXP _GBMDSpackage_proposalFun_SN_incr_cpp(SEXP dist_matSEXP, SEXP currentValSEXP, SEXP prevXSEXP, SEXP annealingParSEXP, SEXP metricSEXP, SEXP hyperparListSEXP, SEXP n_incrSEXP, SEXP upper_boundSEXP, SEXP update_listSEXP, SEXP update_list_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type currentVal(currentValSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prevX(prevXSEXP);
    Rcpp::traits::input_parameter< double >::type annealingPar(annealingParSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    Rcpp::traits::input_parameter< double >::type n_incr(n_incrSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list(update_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list_x(update_list_xSEXP);
    rcpp_result_gen = Rcpp::wrap(proposalFun_SN_incr_cpp(dist_mat, currentVal, prevX, annealingPar, metric, hyperparList, n_incr, upper_bound, update_list, update_list_x));
    return rcpp_result_gen;
END_RCPP
}
// proposalFun_T_cpp
// proposal function Rcpp::List proposalFun_T_cpp(arma::mat dist_mat, Rcpp::List currentVal, arma::mat prevX, double annealingPar, String metric, Rcpp::List hyperparList, double upper_bound, arma::vec update_list, arma::vec update_list_x);
RcppExport SEXP _GBMDSpackage_proposalFun_T_cpp(SEXP dist_matSEXP, SEXP currentValSEXP, SEXP prevXSEXP, SEXP annealingParSEXP, SEXP metricSEXP, SEXP hyperparListSEXP, SEXP upper_boundSEXP, SEXP update_listSEXP, SEXP update_list_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type currentVal(currentValSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prevX(prevXSEXP);
    Rcpp::traits::input_parameter< double >::type annealingPar(annealingParSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list(update_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list_x(update_list_xSEXP);
    rcpp_result_gen = Rcpp::wrap(proposalFun_T_cpp(dist_mat, currentVal, prevX, annealingPar, metric, hyperparList, upper_bound, update_list, update_list_x));
    return rcpp_result_gen;
END_RCPP
}
// proposalFun_T_incr_cpp
// proposal function Rcpp::List proposalFun_T_incr_cpp(arma::mat dist_mat, Rcpp::List currentVal, arma::mat prevX, double annealingPar, String metric, Rcpp::List hyperparList, double n_incr, double upper_bound, arma::vec update_list, arma::vec update_list_x);
RcppExport SEXP _GBMDSpackage_proposalFun_T_incr_cpp(SEXP dist_matSEXP, SEXP currentValSEXP, SEXP prevXSEXP, SEXP annealingParSEXP, SEXP metricSEXP, SEXP hyperparListSEXP, SEXP n_incrSEXP, SEXP upper_boundSEXP, SEXP update_listSEXP, SEXP update_list_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type currentVal(currentValSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prevX(prevXSEXP);
    Rcpp::traits::input_parameter< double >::type annealingPar(annealingParSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    Rcpp::traits::input_parameter< double >::type n_incr(n_incrSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list(update_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list_x(update_list_xSEXP);
    rcpp_result_gen = Rcpp::wrap(proposalFun_T_incr_cpp(dist_mat, currentVal, prevX, annealingPar, metric, hyperparList, n_incr, upper_bound, update_list, update_list_x));
    return rcpp_result_gen;
END_RCPP
}
// proposalFun_cpp
// proposal function Rcpp::List proposalFun_cpp(arma::mat dist_mat, Rcpp::List currentVal, arma::mat prevX, double annealingPar, String metric, Rcpp::List hyperparList, double upper_bound, arma::vec update_list, arma::vec update_list_x);
RcppExport SEXP _GBMDSpackage_proposalFun_cpp(SEXP dist_matSEXP, SEXP currentValSEXP, SEXP prevXSEXP, SEXP annealingParSEXP, SEXP metricSEXP, SEXP hyperparListSEXP, SEXP upper_boundSEXP, SEXP update_listSEXP, SEXP update_list_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dist_mat(dist_matSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type currentVal(currentValSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prevX(prevXSEXP);
    Rcpp::traits::input_parameter< double >::type annealingPar(annealingParSEXP);
    Rcpp::traits::input_parameter< String >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type hyperparList(hyperparListSEXP);
    Rcpp::traits::input_parameter< double >::type upper_bound(upper_boundSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list(update_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type update_list_x(update_list_xSEXP);
    rcpp_result_gen = Rcpp::wrap(proposalFun_cpp(dist_mat, currentVal, prevX, annealingPar, metric, hyperparList, upper_bound, update_list, update_list_x));
    return rcpp_result_gen;
END_RCPP
}
// psnorm_cpp
SEXP psnorm_cpp(double q, double mean, double sd, double psi);
RcppExport SEXP _GBMDSpackage_psnorm_cpp(SEXP qSEXP, SEXP meanSEXP, SEXP sdSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(psnorm_cpp(q, mean, sd, psi));
    return rcpp_result_gen;
END_RCPP
}
// rCESSFun_cpp
// Calculate relative conditional effective sample size double rCESSFun_cpp(arma::vec W, arma::vec logL, double num, double phi);
RcppExport SEXP _GBMDSpackage_rCESSFun_cpp(SEXP WSEXP, SEXP logLSEXP, SEXP numSEXP, SEXP phiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type logL(logLSEXP);
    Rcpp::traits::input_parameter< double >::type num(numSEXP);
    Rcpp::traits::input_parameter< double >::type phi(phiSEXP);
    rcpp_result_gen = Rcpp::wrap(rCESSFun_cpp(W, logL, num, phi));
    return rcpp_result_gen;
END_RCPP
}
// rESSFun_cpp
// Calculate relative effective sample size double rESSFun_cpp(const std::vector<double>& logW);
RcppExport SEXP _GBMDSpackage_rESSFun_cpp(SEXP logWSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type logW(logWSEXP);
    rcpp_result_gen = Rcpp::wrap(rESSFun_cpp(logW));
    return rcpp_result_gen;
END_RCPP
}
// reference_d_x_cpp
// Calculate the density of x arma::vec reference_d_x_cpp(arma::mat x, arma::mat prev_x);
RcppExport SEXP _GBMDSpackage_reference_d_x_cpp(SEXP xSEXP, SEXP prev_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prev_x(prev_xSEXP);
    rcpp_result_gen = Rcpp::wrap(reference_d_x_cpp(x, prev_x));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_arma
arma::mat rmvnorm_arma(int n, arma::vec mu, arma::mat sigma);
RcppExport SEXP _GBMDSpackage_rmvnorm_arma(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_arma(n, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// stressFun_cpp
// Calculate the stress value  double stressFun_cpp(arma::mat d_mat, arma::mat delta_mat);
RcppExport SEXP _GBMDSpackage_stressFun_cpp(SEXP d_matSEXP, SEXP delta_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type d_mat(d_matSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type delta_mat(delta_matSEXP);
    rcpp_result_gen = Rcpp::wrap(stressFun_cpp(d_mat, delta_mat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GBMDSpackage_SSRFun_cpp", (DL_FUNC) &_GBMDSpackage_SSRFun_cpp, 2},
    {"_GBMDSpackage_bisectionFun_cpp", (DL_FUNC) &_GBMDSpackage_bisectionFun_cpp, 5},
    {"_GBMDSpackage_dinvgamma_cpp", (DL_FUNC) &_GBMDSpackage_dinvgamma_cpp, 4},
    {"_GBMDSpackage_dmvnrm_arma_fast", (DL_FUNC) &_GBMDSpackage_dmvnrm_arma_fast, 4},
    {"_GBMDSpackage_dproposalFun_cpp", (DL_FUNC) &_GBMDSpackage_dproposalFun_cpp, 5},
    {"_GBMDSpackage_initialFun_SN_cpp", (DL_FUNC) &_GBMDSpackage_initialFun_SN_cpp, 4},
    {"_GBMDSpackage_initialFun_SN_incr_cpp", (DL_FUNC) &_GBMDSpackage_initialFun_SN_incr_cpp, 4},
    {"_GBMDSpackage_initialFun_T_cpp", (DL_FUNC) &_GBMDSpackage_initialFun_T_cpp, 4},
    {"_GBMDSpackage_initialFun_T_incr_cpp", (DL_FUNC) &_GBMDSpackage_initialFun_T_incr_cpp, 4},
    {"_GBMDSpackage_initialFun_cpp", (DL_FUNC) &_GBMDSpackage_initialFun_cpp, 4},
    {"_GBMDSpackage_likelihoodFun_SN_cpp", (DL_FUNC) &_GBMDSpackage_likelihoodFun_SN_cpp, 5},
    {"_GBMDSpackage_likelihoodFun_SN_incr_cpp", (DL_FUNC) &_GBMDSpackage_likelihoodFun_SN_incr_cpp, 6},
    {"_GBMDSpackage_likelihoodFun_T_cpp", (DL_FUNC) &_GBMDSpackage_likelihoodFun_T_cpp, 5},
    {"_GBMDSpackage_likelihoodFun_T_incr_cpp", (DL_FUNC) &_GBMDSpackage_likelihoodFun_T_incr_cpp, 6},
    {"_GBMDSpackage_likelihoodFun_cpp", (DL_FUNC) &_GBMDSpackage_likelihoodFun_cpp, 5},
    {"_GBMDSpackage_logReferenceRatio_cpp", (DL_FUNC) &_GBMDSpackage_logReferenceRatio_cpp, 3},
    {"_GBMDSpackage_multinomialResampleFun_cpp", (DL_FUNC) &_GBMDSpackage_multinomialResampleFun_cpp, 1},
    {"_GBMDSpackage_rmvnorm_arma_stochvol", (DL_FUNC) &_GBMDSpackage_rmvnorm_arma_stochvol, 3},
    {"_GBMDSpackage_mypsnorm_cpp", (DL_FUNC) &_GBMDSpackage_mypsnorm_cpp, 4},
    {"_GBMDSpackage_proposalFun_SN_cpp", (DL_FUNC) &_GBMDSpackage_proposalFun_SN_cpp, 9},
    {"_GBMDSpackage_proposalFun_SN_incr_cpp", (DL_FUNC) &_GBMDSpackage_proposalFun_SN_incr_cpp, 10},
    {"_GBMDSpackage_proposalFun_T_cpp", (DL_FUNC) &_GBMDSpackage_proposalFun_T_cpp, 9},
    {"_GBMDSpackage_proposalFun_T_incr_cpp", (DL_FUNC) &_GBMDSpackage_proposalFun_T_incr_cpp, 10},
    {"_GBMDSpackage_proposalFun_cpp", (DL_FUNC) &_GBMDSpackage_proposalFun_cpp, 9},
    {"_GBMDSpackage_psnorm_cpp", (DL_FUNC) &_GBMDSpackage_psnorm_cpp, 4},
    {"_GBMDSpackage_rCESSFun_cpp", (DL_FUNC) &_GBMDSpackage_rCESSFun_cpp, 4},
    {"_GBMDSpackage_rESSFun_cpp", (DL_FUNC) &_GBMDSpackage_rESSFun_cpp, 1},
    {"_GBMDSpackage_reference_d_x_cpp", (DL_FUNC) &_GBMDSpackage_reference_d_x_cpp, 2},
    {"_GBMDSpackage_rmvnorm_arma", (DL_FUNC) &_GBMDSpackage_rmvnorm_arma, 3},
    {"_GBMDSpackage_stressFun_cpp", (DL_FUNC) &_GBMDSpackage_stressFun_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_GBMDSpackage(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
