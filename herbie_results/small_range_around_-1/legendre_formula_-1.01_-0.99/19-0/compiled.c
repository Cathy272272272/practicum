#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r48610122 = 1.0;
        return r48610122;
}

double f_id(double __attribute__((unused)) x) {
        double r48610123 = 1.0;
        return r48610123;
}


double f_of(float __attribute__((unused)) x) {
        float r48610124 = 1.0;
        return r48610124;
}

double f_od(double __attribute__((unused)) x) {
        double r48610125 = 1.0;
        return r48610125;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48610126;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r48610126, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r48610126, MPFR_RNDN);
}

static mpfr_t r48610127;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r48610127, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r48610127, MPFR_RNDN);
}

static mpfr_t r48610128;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r48610128, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r48610128, MPFR_RNDN);
}

