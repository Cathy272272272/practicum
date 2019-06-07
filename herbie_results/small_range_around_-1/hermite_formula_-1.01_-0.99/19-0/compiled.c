#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r60483165 = 1.0;
        return r60483165;
}

double f_id(double __attribute__((unused)) x) {
        double r60483166 = 1.0;
        return r60483166;
}


double f_of(float __attribute__((unused)) x) {
        float r60483167 = 1.0;
        return r60483167;
}

double f_od(double __attribute__((unused)) x) {
        double r60483168 = 1.0;
        return r60483168;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60483169;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60483169, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r60483169, MPFR_RNDN);
}

static mpfr_t r60483170;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60483170, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r60483170, MPFR_RNDN);
}

static mpfr_t r60483171;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60483171, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r60483171, MPFR_RNDN);
}

