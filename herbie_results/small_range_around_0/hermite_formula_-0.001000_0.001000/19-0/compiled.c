#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r3819955 = 1.0;
        return r3819955;
}

double f_id(double __attribute__((unused)) x) {
        double r3819956 = 1.0;
        return r3819956;
}


double f_of(float __attribute__((unused)) x) {
        float r3819957 = 1.0;
        return r3819957;
}

double f_od(double __attribute__((unused)) x) {
        double r3819958 = 1.0;
        return r3819958;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3819959;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819959, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3819959, MPFR_RNDN);
}

static mpfr_t r3819960;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819960, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3819960, MPFR_RNDN);
}

static mpfr_t r3819961;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819961, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3819961, MPFR_RNDN);
}

