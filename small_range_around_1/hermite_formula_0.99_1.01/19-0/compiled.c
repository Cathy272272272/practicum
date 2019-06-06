#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r61035197 = 1.0;
        return r61035197;
}

double f_id(double __attribute__((unused)) x) {
        double r61035198 = 1.0;
        return r61035198;
}


double f_of(float __attribute__((unused)) x) {
        float r61035199 = 1.0;
        return r61035199;
}

double f_od(double __attribute__((unused)) x) {
        double r61035200 = 1.0;
        return r61035200;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61035201;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r61035201, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r61035201, MPFR_RNDN);
}

static mpfr_t r61035202;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r61035202, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r61035202, MPFR_RNDN);
}

static mpfr_t r61035203;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r61035203, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r61035203, MPFR_RNDN);
}

