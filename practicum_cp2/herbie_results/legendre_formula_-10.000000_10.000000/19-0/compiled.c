#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r8102596 = 1.0;
        return r8102596;
}

double f_id(double __attribute__((unused)) x) {
        double r8102597 = 1.0;
        return r8102597;
}


double f_of(float __attribute__((unused)) x) {
        float r8102598 = 1.0;
        return r8102598;
}

double f_od(double __attribute__((unused)) x) {
        double r8102599 = 1.0;
        return r8102599;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8102600;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102600, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8102600, MPFR_RNDN);
}

static mpfr_t r8102601;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102601, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8102601, MPFR_RNDN);
}

static mpfr_t r8102602;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102602, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8102602, MPFR_RNDN);
}

