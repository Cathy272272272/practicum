#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r46352747 = 1.0;
        return r46352747;
}

double f_id(double __attribute__((unused)) x) {
        double r46352748 = 1.0;
        return r46352748;
}


double f_of(float __attribute__((unused)) x) {
        float r46352749 = 1.0;
        return r46352749;
}

double f_od(double __attribute__((unused)) x) {
        double r46352750 = 1.0;
        return r46352750;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46352751;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r46352751, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r46352751, MPFR_RNDN);
}

static mpfr_t r46352752;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r46352752, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r46352752, MPFR_RNDN);
}

static mpfr_t r46352753;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r46352753, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r46352753, MPFR_RNDN);
}

