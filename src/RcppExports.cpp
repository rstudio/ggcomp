// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// abs_max_
double abs_max_(const NumericVector& x, const bool finite = true);
RcppExport SEXP ggcomp_abs_max_(SEXP xSEXP, SEXP finiteSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< const bool >::type finite(finiteSEXP );
        double __result = abs_max_(x, finite);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// dp_distance
NumericVector dp_distance(const NumericVector& x, const NumericVector& y);
RcppExport SEXP ggcomp_dp_distance(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP );
        NumericVector __result = dp_distance(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// resolution_numeric
double resolution_numeric(NumericVector x, bool zero = true);
RcppExport SEXP ggcomp_resolution_numeric(SEXP xSEXP, SEXP zeroSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< bool >::type zero(zeroSEXP );
        double __result = resolution_numeric(x, zero);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// buildSkyline
List buildSkyline(NumericVector x1, NumericVector x2, NumericVector y);
RcppExport SEXP ggcomp_buildSkyline(SEXP x1SEXP, SEXP x2SEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x2(x2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        List __result = buildSkyline(x1, x2, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// stack
List stack(NumericVector x1, NumericVector x2, NumericVector y);
RcppExport SEXP ggcomp_stack(SEXP x1SEXP, SEXP x2SEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x1(x1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x2(x2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        List __result = stack(x1, x2, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ungroupNA
NumericVector ungroupNA(ListOf<NumericVector> x);
RcppExport SEXP ggcomp_ungroupNA(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< ListOf<NumericVector> >::type x(xSEXP );
        NumericVector __result = ungroupNA(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// as_data_frame
void as_data_frame(List x, int nrow);
RcppExport SEXP ggcomp_as_data_frame(SEXP xSEXP, SEXP nrowSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP );
        as_data_frame(x, nrow);
    }
    return R_NilValue;
END_RCPP
}
// v_distance
NumericVector v_distance(const NumericVector& x, const NumericVector& y);
RcppExport SEXP ggcomp_v_distance(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP );
        Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP );
        NumericVector __result = v_distance(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// warp
List warp(NumericVector x, NumericVector y, std::string f, double threshold = 0.01);
RcppExport SEXP ggcomp_warp(SEXP xSEXP, SEXP ySEXP, SEXP fSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< std::string >::type f(fSEXP );
        Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP );
        List __result = warp(x, y, f, threshold);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
