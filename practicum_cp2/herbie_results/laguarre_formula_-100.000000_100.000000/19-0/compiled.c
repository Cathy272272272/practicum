#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r6297519 = 1.0;
        return r6297519;
}

double f_id(double __attribute__((unused)) x) {
        double r6297520 = 1.0;
        return r6297520;
}


double f_of(float __attribute__((unused)) x) {
        float r6297521 = 1.0;
        return r6297521;
}

double f_od(double __attribute__((unused)) x) {
        double r6297522 = 1.0;
        return r6297522;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6297523;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6297523, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6297523, MPFR_RNDN);
}

static mpfr_t r6297524;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6297524, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6297524, MPFR_RNDN);
}

static mpfr_t r6297525;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6297525, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6297525, MPFR_RNDN);
}

