// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// computeAuc
double computeAuc(const std::vector<double>& se, const std::vector<double>& sp, const Rcpp::List& aucParamsList);
RcppExport SEXP pROC_computeAuc(SEXP seSEXP, SEXP spSEXP, SEXP aucParamsListSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::vector<double>& >::type se(seSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type sp(spSEXP );
        Rcpp::traits::input_parameter< const Rcpp::List& >::type aucParamsList(aucParamsListSEXP );
        double __result = computeAuc(se, sp, aucParamsList);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// bootstrapAucStratified
std::vector<double> bootstrapAucStratified(const size_t bootN, const NumericVector controls, const NumericVector cases, const Rcpp::List& aucParamsList);
RcppExport SEXP pROC_bootstrapAucStratified(SEXP bootNSEXP, SEXP controlsSEXP, SEXP casesSEXP, SEXP aucParamsListSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const size_t >::type bootN(bootNSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type controls(controlsSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type cases(casesSEXP );
        Rcpp::traits::input_parameter< const Rcpp::List& >::type aucParamsList(aucParamsListSEXP );
        std::vector<double> __result = bootstrapAucStratified(bootN, controls, cases, aucParamsList);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// bootstrapAucNonStratified
std::vector<double> bootstrapAucNonStratified(const int bootN, const NumericVector controls, const NumericVector cases, const Rcpp::List& aucParamsList);
RcppExport SEXP pROC_bootstrapAucNonStratified(SEXP bootNSEXP, SEXP controlsSEXP, SEXP casesSEXP, SEXP aucParamsListSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int >::type bootN(bootNSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type controls(controlsSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type cases(casesSEXP );
        Rcpp::traits::input_parameter< const Rcpp::List& >::type aucParamsList(aucParamsListSEXP );
        std::vector<double> __result = bootstrapAucNonStratified(bootN, controls, cases, aucParamsList);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// delongPlacementsCpp
List delongPlacementsCpp(List roc);
RcppExport SEXP pROC_delongPlacementsCpp(SEXP rocSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type roc(rocSEXP );
        List __result = delongPlacementsCpp(roc);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// computeSeSpList
List computeSeSpList(NumericVector thresholds, NumericVector controls, NumericVector cases, std::string direction);
RcppExport SEXP pROC_computeSeSpList(SEXP thresholdsSEXP, SEXP controlsSEXP, SEXP casesSEXP, SEXP directionSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type controls(controlsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type cases(casesSEXP );
        Rcpp::traits::input_parameter< std::string >::type direction(directionSEXP );
        List __result = computeSeSpList(thresholds, controls, cases, direction);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
