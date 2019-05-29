#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r12292340 = 2.0;
        float r12292341 = x;
        float r12292342 = r12292340 * r12292341;
        return r12292342;
}

double f_id(double x) {
        double r12292343 = 2.0;
        double r12292344 = x;
        double r12292345 = r12292343 * r12292344;
        return r12292345;
}


double f_of(float x) {
        float r12292346 = 2.0;
        float r12292347 = x;
        float r12292348 = r12292346 * r12292347;
        return r12292348;
}

double f_od(double x) {
        double r12292349 = 2.0;
        double r12292350 = x;
        double r12292351 = r12292349 * r12292350;
        return r12292351;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12292352, r12292353, r12292354;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12292352, "2.0", 10, MPFR_RNDN);
        mpfr_init(r12292353);
        mpfr_init(r12292354);
}

double f_im(double x) {
        ;
        mpfr_set_d(r12292353, x, MPFR_RNDN);
        mpfr_mul(r12292354, r12292352, r12292353, MPFR_RNDN);
        return mpfr_get_d(r12292354, MPFR_RNDN);
}

static mpfr_t r12292355, r12292356, r12292357;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12292355, "2.0", 10, MPFR_RNDN);
        mpfr_init(r12292356);
        mpfr_init(r12292357);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r12292356, x, MPFR_RNDN);
        mpfr_mul(r12292357, r12292355, r12292356, MPFR_RNDN);
        return mpfr_get_d(r12292357, MPFR_RNDN);
}

static mpfr_t r12292358, r12292359, r12292360;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12292358, "2.0", 10, MPFR_RNDN);
        mpfr_init(r12292359);
        mpfr_init(r12292360);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r12292359, x, MPFR_RNDN);
        mpfr_mul(r12292360, r12292358, r12292359, MPFR_RNDN);
        return mpfr_get_d(r12292360, MPFR_RNDN);
}

