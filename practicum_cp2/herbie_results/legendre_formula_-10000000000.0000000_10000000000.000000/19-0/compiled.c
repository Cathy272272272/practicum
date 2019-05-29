#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r8927445 = 1.0;
        return r8927445;
}

double f_id(double __attribute__((unused)) x) {
        double r8927446 = 1.0;
        return r8927446;
}


double f_of(float __attribute__((unused)) x) {
        float r8927447 = 1.0;
        return r8927447;
}

double f_od(double __attribute__((unused)) x) {
        double r8927448 = 1.0;
        return r8927448;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8927449;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8927449, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8927449, MPFR_RNDN);
}

static mpfr_t r8927450;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8927450, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8927450, MPFR_RNDN);
}

static mpfr_t r8927451;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8927451, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8927451, MPFR_RNDN);
}

