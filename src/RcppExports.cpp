// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pqsfinder
SEXP pqsfinder(SEXP subject, int max_len, int min_score, int run_min_len, int run_max_len, int loop_min_len, int loop_max_len, int tetrad_bonus, int bulge_penalty, int mismatch_penalty, std::string run_re, SEXP custom_scoring_fn, bool use_default_scoring, bool verbose);
RcppExport SEXP pqsfinder_pqsfinder(SEXP subjectSEXP, SEXP max_lenSEXP, SEXP min_scoreSEXP, SEXP run_min_lenSEXP, SEXP run_max_lenSEXP, SEXP loop_min_lenSEXP, SEXP loop_max_lenSEXP, SEXP tetrad_bonusSEXP, SEXP bulge_penaltySEXP, SEXP mismatch_penaltySEXP, SEXP run_reSEXP, SEXP custom_scoring_fnSEXP, SEXP use_default_scoringSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type subject(subjectSEXP);
    Rcpp::traits::input_parameter< int >::type max_len(max_lenSEXP);
    Rcpp::traits::input_parameter< int >::type min_score(min_scoreSEXP);
    Rcpp::traits::input_parameter< int >::type run_min_len(run_min_lenSEXP);
    Rcpp::traits::input_parameter< int >::type run_max_len(run_max_lenSEXP);
    Rcpp::traits::input_parameter< int >::type loop_min_len(loop_min_lenSEXP);
    Rcpp::traits::input_parameter< int >::type loop_max_len(loop_max_lenSEXP);
    Rcpp::traits::input_parameter< int >::type tetrad_bonus(tetrad_bonusSEXP);
    Rcpp::traits::input_parameter< int >::type bulge_penalty(bulge_penaltySEXP);
    Rcpp::traits::input_parameter< int >::type mismatch_penalty(mismatch_penaltySEXP);
    Rcpp::traits::input_parameter< std::string >::type run_re(run_reSEXP);
    Rcpp::traits::input_parameter< SEXP >::type custom_scoring_fn(custom_scoring_fnSEXP);
    Rcpp::traits::input_parameter< bool >::type use_default_scoring(use_default_scoringSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(pqsfinder(subject, max_len, min_score, run_min_len, run_max_len, loop_min_len, loop_max_len, tetrad_bonus, bulge_penalty, mismatch_penalty, run_re, custom_scoring_fn, use_default_scoring, verbose));
    return __result;
END_RCPP
}
