// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// poilog2
NumericVector poilog2(NumericVector x, NumericVector y, double my1, double my2, double sig1, double sig2, double ro, int nrN);
RcppExport SEXP _poilogcpp_poilog2(SEXP xSEXP, SEXP ySEXP, SEXP my1SEXP, SEXP my2SEXP, SEXP sig1SEXP, SEXP sig2SEXP, SEXP roSEXP, SEXP nrNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type my1(my1SEXP);
    Rcpp::traits::input_parameter< double >::type my2(my2SEXP);
    Rcpp::traits::input_parameter< double >::type sig1(sig1SEXP);
    Rcpp::traits::input_parameter< double >::type sig2(sig2SEXP);
    Rcpp::traits::input_parameter< double >::type ro(roSEXP);
    Rcpp::traits::input_parameter< int >::type nrN(nrNSEXP);
    rcpp_result_gen = Rcpp::wrap(poilog2(x, y, my1, my2, sig1, sig2, ro, nrN));
    return rcpp_result_gen;
END_RCPP
}
// poilog1
NumericVector poilog1(NumericVector x, double my, double sig, int nrN);
RcppExport SEXP _poilogcpp_poilog1(SEXP xSEXP, SEXP mySEXP, SEXP sigSEXP, SEXP nrNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type my(mySEXP);
    Rcpp::traits::input_parameter< double >::type sig(sigSEXP);
    Rcpp::traits::input_parameter< int >::type nrN(nrNSEXP);
    rcpp_result_gen = Rcpp::wrap(poilog1(x, my, sig, nrN));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_poilogcpp_poilog2", (DL_FUNC) &_poilogcpp_poilog2, 8},
    {"_poilogcpp_poilog1", (DL_FUNC) &_poilogcpp_poilog1, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_poilogcpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}