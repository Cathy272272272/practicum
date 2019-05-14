#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r7517016 = 1.0;
        return r7517016;
}

double f_id(double __attribute__((unused)) x) {
        double r7517017 = 1.0;
        return r7517017;
}


double f_of(float __attribute__((unused)) x) {
        float r7517018 = 1.0;
        return r7517018;
}

double f_od(double __attribute__((unused)) x) {
        double r7517019 = 1.0;
        return r7517019;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7517020;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7517020, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7517020, MPFR_RNDN);
}

static mpfr_t r7517021;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7517021, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7517021, MPFR_RNDN);
}

static mpfr_t r7517022;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7517022, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7517022, MPFR_RNDN);
}

