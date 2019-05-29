#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r20880824 = 1.0;
        return r20880824;
}

double f_id(double __attribute__((unused)) x) {
        double r20880825 = 1.0;
        return r20880825;
}


double f_of(float __attribute__((unused)) x) {
        float r20880826 = 1.0;
        return r20880826;
}

double f_od(double __attribute__((unused)) x) {
        double r20880827 = 1.0;
        return r20880827;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20880828;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880828, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r20880828, MPFR_RNDN);
}

static mpfr_t r20880829;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880829, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r20880829, MPFR_RNDN);
}

static mpfr_t r20880830;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880830, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r20880830, MPFR_RNDN);
}

