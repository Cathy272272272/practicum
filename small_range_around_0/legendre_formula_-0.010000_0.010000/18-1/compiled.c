#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r4488191 = 1.0;
        float r4488192 = x;
        float r4488193 = r4488191 * r4488192;
        return r4488193;
}

double f_id(double x) {
        double r4488194 = 1.0;
        double r4488195 = x;
        double r4488196 = r4488194 * r4488195;
        return r4488196;
}


double f_of(float x) {
        float r4488197 = 1.0;
        float r4488198 = x;
        float r4488199 = r4488197 * r4488198;
        return r4488199;
}

double f_od(double x) {
        double r4488200 = 1.0;
        double r4488201 = x;
        double r4488202 = r4488200 * r4488201;
        return r4488202;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4488203, r4488204, r4488205;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488203, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4488204);
        mpfr_init(r4488205);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4488204, x, MPFR_RNDN);
        mpfr_mul(r4488205, r4488203, r4488204, MPFR_RNDN);
        return mpfr_get_d(r4488205, MPFR_RNDN);
}

static mpfr_t r4488206, r4488207, r4488208;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488206, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4488207);
        mpfr_init(r4488208);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4488207, x, MPFR_RNDN);
        mpfr_mul(r4488208, r4488206, r4488207, MPFR_RNDN);
        return mpfr_get_d(r4488208, MPFR_RNDN);
}

static mpfr_t r4488209, r4488210, r4488211;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488209, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4488210);
        mpfr_init(r4488211);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4488210, x, MPFR_RNDN);
        mpfr_mul(r4488211, r4488209, r4488210, MPFR_RNDN);
        return mpfr_get_d(r4488211, MPFR_RNDN);
}

