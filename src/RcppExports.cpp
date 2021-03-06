// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// delongPlacementsCpp
List delongPlacementsCpp(List roc);
RcppExport SEXP pROC_delongPlacementsCpp(SEXP rocSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type roc(rocSEXP);
    __result = Rcpp::wrap(delongPlacementsCpp(roc));
    return __result;
END_RCPP
}
// rocUtilsPerfsAllC
List rocUtilsPerfsAllC(NumericVector thresholds, NumericVector controls, NumericVector cases, std::string direction);
RcppExport SEXP pROC_rocUtilsPerfsAllC(SEXP thresholdsSEXP, SEXP controlsSEXP, SEXP casesSEXP, SEXP directionSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type controls(controlsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cases(casesSEXP);
    Rcpp::traits::input_parameter< std::string >::type direction(directionSEXP);
    __result = Rcpp::wrap(rocUtilsPerfsAllC(thresholds, controls, cases, direction));
    return __result;
END_RCPP
}
