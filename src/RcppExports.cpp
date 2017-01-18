// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// dnormC
double dnormC(double x);
RcppExport SEXP scoringRules_dnormC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(dnormC(x));
    return rcpp_result_gen;
END_RCPP
}
// pnormC
double pnormC(double x);
RcppExport SEXP scoringRules_pnormC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(pnormC(x));
    return rcpp_result_gen;
END_RCPP
}
// auxcrpsC
double auxcrpsC(double m, double s);
RcppExport SEXP scoringRules_auxcrpsC(SEXP mSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(auxcrpsC(m, s));
    return rcpp_result_gen;
END_RCPP
}
// crpsmixnC
double crpsmixnC(NumericVector w, NumericVector m, NumericVector s, double y);
RcppExport SEXP scoringRules_crpsmixnC(SEXP wSEXP, SEXP mSEXP, SEXP sSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(crpsmixnC(w, m, s, y));
    return rcpp_result_gen;
END_RCPP
}
// lsmixnC
NumericVector lsmixnC(NumericVector w, NumericVector m, NumericVector s, NumericVector y);
RcppExport SEXP scoringRules_lsmixnC(SEXP wSEXP, SEXP mSEXP, SEXP sSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(lsmixnC(w, m, s, y));
    return rcpp_result_gen;
END_RCPP
}
// dmixnC
NumericVector dmixnC(NumericVector m, NumericVector s, NumericVector y);
RcppExport SEXP scoringRules_dmixnC(SEXP mSEXP, SEXP sSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(dmixnC(m, s, y));
    return rcpp_result_gen;
END_RCPP
}
// pmixnC
NumericVector pmixnC(NumericVector m, NumericVector s, NumericVector y);
RcppExport SEXP scoringRules_pmixnC(SEXP mSEXP, SEXP sSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(pmixnC(m, s, y));
    return rcpp_result_gen;
END_RCPP
}
// mvndrawC
arma::colvec mvndrawC(arma::colvec mu, arma::mat sig);
RcppExport SEXP scoringRules_mvndrawC(SEXP muSEXP, SEXP sigSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sig(sigSEXP);
    rcpp_result_gen = Rcpp::wrap(mvndrawC(mu, sig));
    return rcpp_result_gen;
END_RCPP
}
// carterkohn
List carterkohn(arma::mat y, arma::mat Z, arma::mat Ht, arma::mat Qt, double m, double p, double t, arma::colvec B0, arma::mat V0);
RcppExport SEXP scoringRules_carterkohn(SEXP ySEXP, SEXP ZSEXP, SEXP HtSEXP, SEXP QtSEXP, SEXP mSEXP, SEXP pSEXP, SEXP tSEXP, SEXP B0SEXP, SEXP V0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ht(HtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Qt(QtSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type V0(V0SEXP);
    rcpp_result_gen = Rcpp::wrap(carterkohn(y, Z, Ht, Qt, m, p, t, B0, V0));
    return rcpp_result_gen;
END_RCPP
}
// drawsigmaC
arma::mat drawsigmaC(arma::colvec yts, arma::colvec qs, arma::colvec ms, arma::colvec u2s, arma::colvec Sigtdraw, arma::mat Zs, arma::mat Wdraw, arma::colvec sigma_prmean, arma::mat sigma_prvar);
RcppExport SEXP scoringRules_drawsigmaC(SEXP ytsSEXP, SEXP qsSEXP, SEXP msSEXP, SEXP u2sSEXP, SEXP SigtdrawSEXP, SEXP ZsSEXP, SEXP WdrawSEXP, SEXP sigma_prmeanSEXP, SEXP sigma_prvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type yts(ytsSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type qs(qsSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type ms(msSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type u2s(u2sSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type Sigtdraw(SigtdrawSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Zs(ZsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wdraw(WdrawSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type sigma_prmean(sigma_prmeanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma_prvar(sigma_prvarSEXP);
    rcpp_result_gen = Rcpp::wrap(drawsigmaC(yts, qs, ms, u2s, Sigtdraw, Zs, Wdraw, sigma_prmean, sigma_prvar));
    return rcpp_result_gen;
END_RCPP
}
// drawbetaC
arma::colvec drawbetaC(arma::colvec y, arma::mat Z, arma::colvec s2, arma::colvec betapriorm, arma::mat betaprioriv);
RcppExport SEXP scoringRules_drawbetaC(SEXP ySEXP, SEXP ZSEXP, SEXP s2SEXP, SEXP betapriormSEXP, SEXP betapriorivSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type betapriorm(betapriormSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type betaprioriv(betapriorivSEXP);
    rcpp_result_gen = Rcpp::wrap(drawbetaC(y, Z, s2, betapriorm, betaprioriv));
    return rcpp_result_gen;
END_RCPP
}
// makeregs_fcC
arma::mat makeregs_fcC(arma::mat ydat, double p);
RcppExport SEXP scoringRules_makeregs_fcC(SEXP ydatSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type ydat(ydatSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(makeregs_fcC(ydat, p));
    return rcpp_result_gen;
END_RCPP
}
// getfcsts
List getfcsts(arma::colvec beta, arma::colvec Sigt0, arma::mat Wdraw, arma::mat ydat, double nf, double p);
RcppExport SEXP scoringRules_getfcsts(SEXP betaSEXP, SEXP Sigt0SEXP, SEXP WdrawSEXP, SEXP ydatSEXP, SEXP nfSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type Sigt0(Sigt0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wdraw(WdrawSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ydat(ydatSEXP);
    Rcpp::traits::input_parameter< double >::type nf(nfSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(getfcsts(beta, Sigt0, Wdraw, ydat, nf, p));
    return rcpp_result_gen;
END_RCPP
}
// meye
arma::mat meye(double n);
RcppExport SEXP scoringRules_meye(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(meye(n));
    return rcpp_result_gen;
END_RCPP
}
// matmult
arma::mat matmult(arma::mat x, double nt);
RcppExport SEXP scoringRules_matmult(SEXP xSEXP, SEXP ntSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type nt(ntSEXP);
    rcpp_result_gen = Rcpp::wrap(matmult(x, nt));
    return rcpp_result_gen;
END_RCPP
}
// bvarFcstC
List bvarFcstC(arma::mat b, arma::mat sig, arma::mat y, double nf);
RcppExport SEXP scoringRules_bvarFcstC(SEXP bSEXP, SEXP sigSEXP, SEXP ySEXP, SEXP nfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sig(sigSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type nf(nfSEXP);
    rcpp_result_gen = Rcpp::wrap(bvarFcstC(b, sig, y, nf));
    return rcpp_result_gen;
END_RCPP
}
// drawMultinomC
double drawMultinomC(NumericVector probs);
RcppExport SEXP scoringRules_drawMultinomC(SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(drawMultinomC(probs));
    return rcpp_result_gen;
END_RCPP
}
// filterMarkovMixtureC
List filterMarkovMixtureC(arma::vec p, arma::mat P, arma::mat lnpdat);
RcppExport SEXP scoringRules_filterMarkovMixtureC(SEXP pSEXP, SEXP PSEXP, SEXP lnpdatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lnpdat(lnpdatSEXP);
    rcpp_result_gen = Rcpp::wrap(filterMarkovMixtureC(p, P, lnpdat));
    return rcpp_result_gen;
END_RCPP
}
// euclnormC
double euclnormC(arma::colvec x);
RcppExport SEXP scoringRules_euclnormC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(euclnormC(x));
    return rcpp_result_gen;
END_RCPP
}
// energyscoreC
double energyscoreC(arma::colvec y, arma::mat dat);
RcppExport SEXP scoringRules_energyscoreC(SEXP ySEXP, SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(energyscoreC(y, dat));
    return rcpp_result_gen;
END_RCPP
}
