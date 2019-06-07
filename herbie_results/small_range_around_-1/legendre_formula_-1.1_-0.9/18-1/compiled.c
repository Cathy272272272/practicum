#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r29572255 = 1.0;
        float r29572256 = x;
        float r29572257 = r29572255 * r29572256;
        return r29572257;
}

double f_id(double x) {
        double r29572258 = 1.0;
        double r29572259 = x;
        double r29572260 = r29572258 * r29572259;
        return r29572260;
}


double f_of(float x) {
        float r29572261 = 1.0;
        float r29572262 = x;
        float r29572263 = r29572261 * r29572262;
        return r29572263;
}

double f_od(double x) {
        double r29572264 = 1.0;
        double r29572265 = x;
        double r29572266 = r29572264 * r29572265;
        return r29572266;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29572267, r29572268, r29572269;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r29572267, "1.0", 10, MPFR_RNDN);
        mpfr_init(r29572268);
        mpfr_init(r29572269);
}

double f_im(double x) {
        ;
        mpfr_set_d(r29572268, x, MPFR_RNDN);
        mpfr_mul(r29572269, r29572267, r29572268, MPFR_RNDN);
        return mpfr_get_d(r29572269, MPFR_RNDN);
}

static mpfr_t r29572270, r29572271, r29572272;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r29572270, "1.0", 10, MPFR_RNDN);
        mpfr_init(r29572271);
        mpfr_init(r29572272);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r29572271, x, MPFR_RNDN);
        mpfr_mul(r29572272, r29572270, r29572271, MPFR_RNDN);
        return mpfr_get_d(r29572272, MPFR_RNDN);
}

static mpfr_t r29572273, r29572274, r29572275;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r29572273, "1.0", 10, MPFR_RNDN);
        mpfr_init(r29572274);
        mpfr_init(r29572275);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r29572274, x, MPFR_RNDN);
        mpfr_mul(r29572275, r29572273, r29572274, MPFR_RNDN);
        return mpfr_get_d(r29572275, MPFR_RNDN);
}

