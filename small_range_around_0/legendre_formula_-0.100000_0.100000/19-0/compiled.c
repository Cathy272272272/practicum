#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r4601769 = 1.0;
        return r4601769;
}

double f_id(double __attribute__((unused)) x) {
        double r4601770 = 1.0;
        return r4601770;
}


double f_of(float __attribute__((unused)) x) {
        float r4601771 = 1.0;
        return r4601771;
}

double f_od(double __attribute__((unused)) x) {
        double r4601772 = 1.0;
        return r4601772;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4601773;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601773, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4601773, MPFR_RNDN);
}

static mpfr_t r4601774;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601774, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4601774, MPFR_RNDN);
}

static mpfr_t r4601775;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601775, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4601775, MPFR_RNDN);
}

