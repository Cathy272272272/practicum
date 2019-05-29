#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7606255 = 2.0;
        float r7606256 = x;
        float r7606257 = r7606255 * r7606256;
        return r7606257;
}

double f_id(double x) {
        double r7606258 = 2.0;
        double r7606259 = x;
        double r7606260 = r7606258 * r7606259;
        return r7606260;
}


double f_of(float x) {
        float r7606261 = 2.0;
        float r7606262 = x;
        float r7606263 = r7606261 * r7606262;
        return r7606263;
}

double f_od(double x) {
        double r7606264 = 2.0;
        double r7606265 = x;
        double r7606266 = r7606264 * r7606265;
        return r7606266;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7606267, r7606268, r7606269;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7606267, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7606268);
        mpfr_init(r7606269);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7606268, x, MPFR_RNDN);
        mpfr_mul(r7606269, r7606267, r7606268, MPFR_RNDN);
        return mpfr_get_d(r7606269, MPFR_RNDN);
}

static mpfr_t r7606270, r7606271, r7606272;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7606270, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7606271);
        mpfr_init(r7606272);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7606271, x, MPFR_RNDN);
        mpfr_mul(r7606272, r7606270, r7606271, MPFR_RNDN);
        return mpfr_get_d(r7606272, MPFR_RNDN);
}

static mpfr_t r7606273, r7606274, r7606275;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7606273, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7606274);
        mpfr_init(r7606275);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7606274, x, MPFR_RNDN);
        mpfr_mul(r7606275, r7606273, r7606274, MPFR_RNDN);
        return mpfr_get_d(r7606275, MPFR_RNDN);
}

