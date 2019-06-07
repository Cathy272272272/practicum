#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r5318009 = 2.0;
        float r5318010 = x;
        float r5318011 = r5318009 * r5318010;
        return r5318011;
}

double f_id(double x) {
        double r5318012 = 2.0;
        double r5318013 = x;
        double r5318014 = r5318012 * r5318013;
        return r5318014;
}


double f_of(float x) {
        float r5318015 = 2.0;
        float r5318016 = x;
        float r5318017 = r5318015 * r5318016;
        return r5318017;
}

double f_od(double x) {
        double r5318018 = 2.0;
        double r5318019 = x;
        double r5318020 = r5318018 * r5318019;
        return r5318020;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5318021, r5318022, r5318023;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5318021, "2.0", 10, MPFR_RNDN);
        mpfr_init(r5318022);
        mpfr_init(r5318023);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5318022, x, MPFR_RNDN);
        mpfr_mul(r5318023, r5318021, r5318022, MPFR_RNDN);
        return mpfr_get_d(r5318023, MPFR_RNDN);
}

static mpfr_t r5318024, r5318025, r5318026;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5318024, "2.0", 10, MPFR_RNDN);
        mpfr_init(r5318025);
        mpfr_init(r5318026);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5318025, x, MPFR_RNDN);
        mpfr_mul(r5318026, r5318024, r5318025, MPFR_RNDN);
        return mpfr_get_d(r5318026, MPFR_RNDN);
}

static mpfr_t r5318027, r5318028, r5318029;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5318027, "2.0", 10, MPFR_RNDN);
        mpfr_init(r5318028);
        mpfr_init(r5318029);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5318028, x, MPFR_RNDN);
        mpfr_mul(r5318029, r5318027, r5318028, MPFR_RNDN);
        return mpfr_get_d(r5318029, MPFR_RNDN);
}

