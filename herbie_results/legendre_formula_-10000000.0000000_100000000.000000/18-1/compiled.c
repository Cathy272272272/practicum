#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r5396480 = 1.0;
        float r5396481 = x;
        float r5396482 = r5396480 * r5396481;
        return r5396482;
}

double f_id(double x) {
        double r5396483 = 1.0;
        double r5396484 = x;
        double r5396485 = r5396483 * r5396484;
        return r5396485;
}


double f_of(float x) {
        float r5396486 = 1.0;
        float r5396487 = x;
        float r5396488 = r5396486 * r5396487;
        return r5396488;
}

double f_od(double x) {
        double r5396489 = 1.0;
        double r5396490 = x;
        double r5396491 = r5396489 * r5396490;
        return r5396491;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5396492, r5396493, r5396494;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5396492, "1.0", 10, MPFR_RNDN);
        mpfr_init(r5396493);
        mpfr_init(r5396494);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5396493, x, MPFR_RNDN);
        mpfr_mul(r5396494, r5396492, r5396493, MPFR_RNDN);
        return mpfr_get_d(r5396494, MPFR_RNDN);
}

static mpfr_t r5396495, r5396496, r5396497;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5396495, "1.0", 10, MPFR_RNDN);
        mpfr_init(r5396496);
        mpfr_init(r5396497);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5396496, x, MPFR_RNDN);
        mpfr_mul(r5396497, r5396495, r5396496, MPFR_RNDN);
        return mpfr_get_d(r5396497, MPFR_RNDN);
}

static mpfr_t r5396498, r5396499, r5396500;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5396498, "1.0", 10, MPFR_RNDN);
        mpfr_init(r5396499);
        mpfr_init(r5396500);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5396499, x, MPFR_RNDN);
        mpfr_mul(r5396500, r5396498, r5396499, MPFR_RNDN);
        return mpfr_get_d(r5396500, MPFR_RNDN);
}

