#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r20717050 = 1.0;
        return r20717050;
}

double f_id(double __attribute__((unused)) x) {
        double r20717051 = 1.0;
        return r20717051;
}


double f_of(float __attribute__((unused)) x) {
        float r20717052 = 1.0;
        return r20717052;
}

double f_od(double __attribute__((unused)) x) {
        double r20717053 = 1.0;
        return r20717053;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20717054;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20717054, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r20717054, MPFR_RNDN);
}

static mpfr_t r20717055;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20717055, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r20717055, MPFR_RNDN);
}

static mpfr_t r20717056;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20717056, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r20717056, MPFR_RNDN);
}

