#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r6435582 = 1.0;
        return r6435582;
}

double f_id(double __attribute__((unused)) x) {
        double r6435583 = 1.0;
        return r6435583;
}


double f_of(float __attribute__((unused)) x) {
        float r6435584 = 1.0;
        return r6435584;
}

double f_od(double __attribute__((unused)) x) {
        double r6435585 = 1.0;
        return r6435585;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6435586;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435586, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6435586, MPFR_RNDN);
}

static mpfr_t r6435587;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435587, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6435587, MPFR_RNDN);
}

static mpfr_t r6435588;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435588, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6435588, MPFR_RNDN);
}

