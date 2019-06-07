#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r6767554 = 1.0;
        return r6767554;
}

double f_id(double __attribute__((unused)) x) {
        double r6767555 = 1.0;
        return r6767555;
}


double f_of(float __attribute__((unused)) x) {
        float r6767556 = 1.0;
        return r6767556;
}

double f_od(double __attribute__((unused)) x) {
        double r6767557 = 1.0;
        return r6767557;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6767558;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6767558, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6767558, MPFR_RNDN);
}

static mpfr_t r6767559;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6767559, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6767559, MPFR_RNDN);
}

static mpfr_t r6767560;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6767560, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6767560, MPFR_RNDN);
}

