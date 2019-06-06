#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r61035176 = 2.0;
        float r61035177 = x;
        float r61035178 = r61035176 * r61035177;
        return r61035178;
}

double f_id(double x) {
        double r61035179 = 2.0;
        double r61035180 = x;
        double r61035181 = r61035179 * r61035180;
        return r61035181;
}


double f_of(float x) {
        float r61035182 = 2.0;
        float r61035183 = x;
        float r61035184 = r61035182 * r61035183;
        return r61035184;
}

double f_od(double x) {
        double r61035185 = 2.0;
        double r61035186 = x;
        double r61035187 = r61035185 * r61035186;
        return r61035187;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61035188, r61035189, r61035190;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r61035188, "2.0", 10, MPFR_RNDN);
        mpfr_init(r61035189);
        mpfr_init(r61035190);
}

double f_im(double x) {
        ;
        mpfr_set_d(r61035189, x, MPFR_RNDN);
        mpfr_mul(r61035190, r61035188, r61035189, MPFR_RNDN);
        return mpfr_get_d(r61035190, MPFR_RNDN);
}

static mpfr_t r61035191, r61035192, r61035193;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r61035191, "2.0", 10, MPFR_RNDN);
        mpfr_init(r61035192);
        mpfr_init(r61035193);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r61035192, x, MPFR_RNDN);
        mpfr_mul(r61035193, r61035191, r61035192, MPFR_RNDN);
        return mpfr_get_d(r61035193, MPFR_RNDN);
}

static mpfr_t r61035194, r61035195, r61035196;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r61035194, "2.0", 10, MPFR_RNDN);
        mpfr_init(r61035195);
        mpfr_init(r61035196);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r61035195, x, MPFR_RNDN);
        mpfr_mul(r61035196, r61035194, r61035195, MPFR_RNDN);
        return mpfr_get_d(r61035196, MPFR_RNDN);
}

