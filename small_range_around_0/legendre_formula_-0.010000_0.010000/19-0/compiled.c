#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r4488212 = 1.0;
        return r4488212;
}

double f_id(double __attribute__((unused)) x) {
        double r4488213 = 1.0;
        return r4488213;
}


double f_of(float __attribute__((unused)) x) {
        float r4488214 = 1.0;
        return r4488214;
}

double f_od(double __attribute__((unused)) x) {
        double r4488215 = 1.0;
        return r4488215;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4488216;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488216, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4488216, MPFR_RNDN);
}

static mpfr_t r4488217;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488217, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4488217, MPFR_RNDN);
}

static mpfr_t r4488218;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488218, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4488218, MPFR_RNDN);
}

