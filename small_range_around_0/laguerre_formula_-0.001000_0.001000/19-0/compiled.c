#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r3752786 = 1.0;
        return r3752786;
}

double f_id(double __attribute__((unused)) x) {
        double r3752787 = 1.0;
        return r3752787;
}


double f_of(float __attribute__((unused)) x) {
        float r3752788 = 1.0;
        return r3752788;
}

double f_od(double __attribute__((unused)) x) {
        double r3752789 = 1.0;
        return r3752789;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3752790;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3752790, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3752790, MPFR_RNDN);
}

static mpfr_t r3752791;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3752791, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3752791, MPFR_RNDN);
}

static mpfr_t r3752792;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3752792, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3752792, MPFR_RNDN);
}

