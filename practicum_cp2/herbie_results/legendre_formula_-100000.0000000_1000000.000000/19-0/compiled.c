#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r6179340 = 1.0;
        return r6179340;
}

double f_id(double __attribute__((unused)) x) {
        double r6179341 = 1.0;
        return r6179341;
}


double f_of(float __attribute__((unused)) x) {
        float r6179342 = 1.0;
        return r6179342;
}

double f_od(double __attribute__((unused)) x) {
        double r6179343 = 1.0;
        return r6179343;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179344;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179344, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6179344, MPFR_RNDN);
}

static mpfr_t r6179345;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179345, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6179345, MPFR_RNDN);
}

static mpfr_t r6179346;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179346, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6179346, MPFR_RNDN);
}

