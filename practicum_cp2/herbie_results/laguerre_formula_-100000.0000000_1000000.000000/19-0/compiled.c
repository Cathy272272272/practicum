#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r10220107 = 1.0;
        return r10220107;
}

double f_id(double __attribute__((unused)) x) {
        double r10220108 = 1.0;
        return r10220108;
}


double f_of(float __attribute__((unused)) x) {
        float r10220109 = 1.0;
        return r10220109;
}

double f_od(double __attribute__((unused)) x) {
        double r10220110 = 1.0;
        return r10220110;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10220111;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10220111, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10220111, MPFR_RNDN);
}

static mpfr_t r10220112;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10220112, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10220112, MPFR_RNDN);
}

static mpfr_t r10220113;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10220113, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10220113, MPFR_RNDN);
}

