#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r20877404 = 1.0;
        float r20877405 = -2.0;
        float r20877406 = x;
        float r20877407 = r20877405 * r20877406;
        float r20877408 = r20877404 + r20877407;
        float r20877409 = 0.5;
        float r20877410 = r20877406 * r20877406;
        float r20877411 = r20877409 * r20877410;
        float r20877412 = r20877408 + r20877411;
        return r20877412;
}

double f_id(double x) {
        double r20877413 = 1.0;
        double r20877414 = -2.0;
        double r20877415 = x;
        double r20877416 = r20877414 * r20877415;
        double r20877417 = r20877413 + r20877416;
        double r20877418 = 0.5;
        double r20877419 = r20877415 * r20877415;
        double r20877420 = r20877418 * r20877419;
        double r20877421 = r20877417 + r20877420;
        return r20877421;
}


double f_of(float x) {
        float r20877422 = 1.0;
        float r20877423 = -2.0;
        float r20877424 = x;
        float r20877425 = r20877423 * r20877424;
        float r20877426 = r20877422 + r20877425;
        float r20877427 = 0.5;
        float r20877428 = r20877424 * r20877424;
        float r20877429 = r20877427 * r20877428;
        float r20877430 = r20877426 + r20877429;
        return r20877430;
}

double f_od(double x) {
        double r20877431 = 1.0;
        double r20877432 = -2.0;
        double r20877433 = x;
        double r20877434 = r20877432 * r20877433;
        double r20877435 = r20877431 + r20877434;
        double r20877436 = 0.5;
        double r20877437 = r20877433 * r20877433;
        double r20877438 = r20877436 * r20877437;
        double r20877439 = r20877435 + r20877438;
        return r20877439;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20877440, r20877441, r20877442, r20877443, r20877444, r20877445, r20877446, r20877447, r20877448;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20877440, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20877441, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r20877442);
        mpfr_init(r20877443);
        mpfr_init(r20877444);
        mpfr_init_set_str(r20877445, "0.5", 10, MPFR_RNDN);
        mpfr_init(r20877446);
        mpfr_init(r20877447);
        mpfr_init(r20877448);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20877442, x, MPFR_RNDN);
        mpfr_mul(r20877443, r20877441, r20877442, MPFR_RNDN);
        mpfr_add(r20877444, r20877440, r20877443, MPFR_RNDN);
        ;
        mpfr_mul(r20877446, r20877442, r20877442, MPFR_RNDN);
        mpfr_mul(r20877447, r20877445, r20877446, MPFR_RNDN);
        mpfr_add(r20877448, r20877444, r20877447, MPFR_RNDN);
        return mpfr_get_d(r20877448, MPFR_RNDN);
}

static mpfr_t r20877449, r20877450, r20877451, r20877452, r20877453, r20877454, r20877455, r20877456, r20877457;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20877449, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20877450, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r20877451);
        mpfr_init(r20877452);
        mpfr_init(r20877453);
        mpfr_init_set_str(r20877454, "0.5", 10, MPFR_RNDN);
        mpfr_init(r20877455);
        mpfr_init(r20877456);
        mpfr_init(r20877457);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r20877451, x, MPFR_RNDN);
        mpfr_mul(r20877452, r20877450, r20877451, MPFR_RNDN);
        mpfr_add(r20877453, r20877449, r20877452, MPFR_RNDN);
        ;
        mpfr_mul(r20877455, r20877451, r20877451, MPFR_RNDN);
        mpfr_mul(r20877456, r20877454, r20877455, MPFR_RNDN);
        mpfr_add(r20877457, r20877453, r20877456, MPFR_RNDN);
        return mpfr_get_d(r20877457, MPFR_RNDN);
}

static mpfr_t r20877458, r20877459, r20877460, r20877461, r20877462, r20877463, r20877464, r20877465, r20877466;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20877458, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20877459, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r20877460);
        mpfr_init(r20877461);
        mpfr_init(r20877462);
        mpfr_init_set_str(r20877463, "0.5", 10, MPFR_RNDN);
        mpfr_init(r20877464);
        mpfr_init(r20877465);
        mpfr_init(r20877466);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r20877460, x, MPFR_RNDN);
        mpfr_mul(r20877461, r20877459, r20877460, MPFR_RNDN);
        mpfr_add(r20877462, r20877458, r20877461, MPFR_RNDN);
        ;
        mpfr_mul(r20877464, r20877460, r20877460, MPFR_RNDN);
        mpfr_mul(r20877465, r20877463, r20877464, MPFR_RNDN);
        mpfr_add(r20877466, r20877462, r20877465, MPFR_RNDN);
        return mpfr_get_d(r20877466, MPFR_RNDN);
}

