#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r5396501 = 1.0;
        return r5396501;
}

double f_id(double __attribute__((unused)) x) {
        double r5396502 = 1.0;
        return r5396502;
}


double f_of(float __attribute__((unused)) x) {
        float r5396503 = 1.0;
        return r5396503;
}

double f_od(double __attribute__((unused)) x) {
        double r5396504 = 1.0;
        return r5396504;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5396505;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5396505, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5396505, MPFR_RNDN);
}

static mpfr_t r5396506;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5396506, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5396506, MPFR_RNDN);
}

static mpfr_t r5396507;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5396507, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r5396507, MPFR_RNDN);
}

