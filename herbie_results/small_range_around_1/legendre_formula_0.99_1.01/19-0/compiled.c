#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r49140910 = 1.0;
        return r49140910;
}

double f_id(double __attribute__((unused)) x) {
        double r49140911 = 1.0;
        return r49140911;
}


double f_of(float __attribute__((unused)) x) {
        float r49140912 = 1.0;
        return r49140912;
}

double f_od(double __attribute__((unused)) x) {
        double r49140913 = 1.0;
        return r49140913;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49140914;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r49140914, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r49140914, MPFR_RNDN);
}

static mpfr_t r49140915;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r49140915, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r49140915, MPFR_RNDN);
}

static mpfr_t r49140916;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r49140916, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r49140916, MPFR_RNDN);
}

