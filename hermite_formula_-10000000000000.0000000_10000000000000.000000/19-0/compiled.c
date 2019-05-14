#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r5318030 = 1.0;
        return r5318030;
}

double f_id(double __attribute__((unused)) x) {
        double r5318031 = 1.0;
        return r5318031;
}


double f_of(float __attribute__((unused)) x) {
        float r5318032 = 1.0;
        return r5318032;
}

double f_od(double __attribute__((unused)) x) {
        double r5318033 = 1.0;
        return r5318033;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5318034;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5318034, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5318034, MPFR_RNDN);
}

static mpfr_t r5318035;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5318035, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5318035, MPFR_RNDN);
}

static mpfr_t r5318036;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5318036, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5318036, MPFR_RNDN);
}

