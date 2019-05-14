#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r12292361 = 1.0;
        return r12292361;
}

double f_id(double __attribute__((unused)) x) {
        double r12292362 = 1.0;
        return r12292362;
}


double f_of(float __attribute__((unused)) x) {
        float r12292363 = 1.0;
        return r12292363;
}

double f_od(double __attribute__((unused)) x) {
        double r12292364 = 1.0;
        return r12292364;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12292365;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12292365, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r12292365, MPFR_RNDN);
}

static mpfr_t r12292366;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12292366, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r12292366, MPFR_RNDN);
}

static mpfr_t r12292367;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12292367, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r12292367, MPFR_RNDN);
}

