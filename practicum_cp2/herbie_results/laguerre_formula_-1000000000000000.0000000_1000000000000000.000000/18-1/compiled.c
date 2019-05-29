#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r10202329 = 1.0;
        float r10202330 = -1.0;
        float r10202331 = x;
        float r10202332 = r10202330 * r10202331;
        float r10202333 = r10202329 + r10202332;
        return r10202333;
}

double f_id(double x) {
        double r10202334 = 1.0;
        double r10202335 = -1.0;
        double r10202336 = x;
        double r10202337 = r10202335 * r10202336;
        double r10202338 = r10202334 + r10202337;
        return r10202338;
}


double f_of(float x) {
        float r10202339 = 1.0;
        float r10202340 = -1.0;
        float r10202341 = x;
        float r10202342 = r10202340 * r10202341;
        float r10202343 = r10202339 + r10202342;
        return r10202343;
}

double f_od(double x) {
        double r10202344 = 1.0;
        double r10202345 = -1.0;
        double r10202346 = x;
        double r10202347 = r10202345 * r10202346;
        double r10202348 = r10202344 + r10202347;
        return r10202348;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10202349, r10202350, r10202351, r10202352, r10202353;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10202349, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202350, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10202351);
        mpfr_init(r10202352);
        mpfr_init(r10202353);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10202351, x, MPFR_RNDN);
        mpfr_mul(r10202352, r10202350, r10202351, MPFR_RNDN);
        mpfr_add(r10202353, r10202349, r10202352, MPFR_RNDN);
        return mpfr_get_d(r10202353, MPFR_RNDN);
}

static mpfr_t r10202354, r10202355, r10202356, r10202357, r10202358;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10202354, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202355, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10202356);
        mpfr_init(r10202357);
        mpfr_init(r10202358);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10202356, x, MPFR_RNDN);
        mpfr_mul(r10202357, r10202355, r10202356, MPFR_RNDN);
        mpfr_add(r10202358, r10202354, r10202357, MPFR_RNDN);
        return mpfr_get_d(r10202358, MPFR_RNDN);
}

static mpfr_t r10202359, r10202360, r10202361, r10202362, r10202363;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10202359, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202360, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10202361);
        mpfr_init(r10202362);
        mpfr_init(r10202363);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10202361, x, MPFR_RNDN);
        mpfr_mul(r10202362, r10202360, r10202361, MPFR_RNDN);
        mpfr_add(r10202363, r10202359, r10202362, MPFR_RNDN);
        return mpfr_get_d(r10202363, MPFR_RNDN);
}

