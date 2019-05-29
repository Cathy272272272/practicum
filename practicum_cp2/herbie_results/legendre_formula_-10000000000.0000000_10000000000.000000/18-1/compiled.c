#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r8927424 = 1.0;
        float r8927425 = x;
        float r8927426 = r8927424 * r8927425;
        return r8927426;
}

double f_id(double x) {
        double r8927427 = 1.0;
        double r8927428 = x;
        double r8927429 = r8927427 * r8927428;
        return r8927429;
}


double f_of(float x) {
        float r8927430 = 1.0;
        float r8927431 = x;
        float r8927432 = r8927430 * r8927431;
        return r8927432;
}

double f_od(double x) {
        double r8927433 = 1.0;
        double r8927434 = x;
        double r8927435 = r8927433 * r8927434;
        return r8927435;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8927436, r8927437, r8927438;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8927436, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8927437);
        mpfr_init(r8927438);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8927437, x, MPFR_RNDN);
        mpfr_mul(r8927438, r8927436, r8927437, MPFR_RNDN);
        return mpfr_get_d(r8927438, MPFR_RNDN);
}

static mpfr_t r8927439, r8927440, r8927441;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8927439, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8927440);
        mpfr_init(r8927441);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8927440, x, MPFR_RNDN);
        mpfr_mul(r8927441, r8927439, r8927440, MPFR_RNDN);
        return mpfr_get_d(r8927441, MPFR_RNDN);
}

static mpfr_t r8927442, r8927443, r8927444;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8927442, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8927443);
        mpfr_init(r8927444);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8927443, x, MPFR_RNDN);
        mpfr_mul(r8927444, r8927442, r8927443, MPFR_RNDN);
        return mpfr_get_d(r8927444, MPFR_RNDN);
}

