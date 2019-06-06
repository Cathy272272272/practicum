#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r64040378 = 1.0;
        return r64040378;
}

double f_id(double __attribute__((unused)) x) {
        double r64040379 = 1.0;
        return r64040379;
}


double f_of(float __attribute__((unused)) x) {
        float r64040380 = 1.0;
        return r64040380;
}

double f_od(double __attribute__((unused)) x) {
        double r64040381 = 1.0;
        return r64040381;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64040382;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64040382, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r64040382, MPFR_RNDN);
}

static mpfr_t r64040383;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64040383, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r64040383, MPFR_RNDN);
}

static mpfr_t r64040384;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64040384, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r64040384, MPFR_RNDN);
}

