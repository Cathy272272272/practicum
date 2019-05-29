#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r5023018 = 1.0;
        return r5023018;
}

double f_id(double __attribute__((unused)) x) {
        double r5023019 = 1.0;
        return r5023019;
}


double f_of(float __attribute__((unused)) x) {
        float r5023020 = 1.0;
        return r5023020;
}

double f_od(double __attribute__((unused)) x) {
        double r5023021 = 1.0;
        return r5023021;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5023022;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5023022, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5023022, MPFR_RNDN);
}

static mpfr_t r5023023;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5023023, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5023023, MPFR_RNDN);
}

static mpfr_t r5023024;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5023024, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5023024, MPFR_RNDN);
}

