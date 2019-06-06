#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r4681650 = 1.0;
        return r4681650;
}

double f_id(double __attribute__((unused)) x) {
        double r4681651 = 1.0;
        return r4681651;
}


double f_of(float __attribute__((unused)) x) {
        float r4681652 = 1.0;
        return r4681652;
}

double f_od(double __attribute__((unused)) x) {
        double r4681653 = 1.0;
        return r4681653;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4681654;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4681654, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4681654, MPFR_RNDN);
}

static mpfr_t r4681655;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4681655, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4681655, MPFR_RNDN);
}

static mpfr_t r4681656;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4681656, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4681656, MPFR_RNDN);
}

