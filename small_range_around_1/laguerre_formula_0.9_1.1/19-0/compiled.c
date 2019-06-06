#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r98658978 = 1.0;
        return r98658978;
}

double f_id(double __attribute__((unused)) x) {
        double r98658979 = 1.0;
        return r98658979;
}


double f_of(float __attribute__((unused)) x) {
        float r98658980 = 1.0;
        return r98658980;
}

double f_od(double __attribute__((unused)) x) {
        double r98658981 = 1.0;
        return r98658981;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r98658982;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r98658982, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r98658982, MPFR_RNDN);
}

static mpfr_t r98658983;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r98658983, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r98658983, MPFR_RNDN);
}

static mpfr_t r98658984;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r98658984, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r98658984, MPFR_RNDN);
}

