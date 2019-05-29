#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r10744365 = 1.0;
        float r10744366 = -3.0;
        float r10744367 = x;
        float r10744368 = r10744366 * r10744367;
        float r10744369 = r10744365 + r10744368;
        float r10744370 = 1.5;
        float r10744371 = r10744367 * r10744367;
        float r10744372 = r10744370 * r10744371;
        float r10744373 = r10744369 + r10744372;
        float r10744374 = -0.166667;
        float r10744375 = r10744371 * r10744367;
        float r10744376 = r10744374 * r10744375;
        float r10744377 = r10744373 + r10744376;
        return r10744377;
}

double f_id(double x) {
        double r10744378 = 1.0;
        double r10744379 = -3.0;
        double r10744380 = x;
        double r10744381 = r10744379 * r10744380;
        double r10744382 = r10744378 + r10744381;
        double r10744383 = 1.5;
        double r10744384 = r10744380 * r10744380;
        double r10744385 = r10744383 * r10744384;
        double r10744386 = r10744382 + r10744385;
        double r10744387 = -0.166667;
        double r10744388 = r10744384 * r10744380;
        double r10744389 = r10744387 * r10744388;
        double r10744390 = r10744386 + r10744389;
        return r10744390;
}


double f_of(float x) {
        float r10744391 = x;
        float r10744392 = -3.0;
        float r10744393 = r10744391 * r10744392;
        float r10744394 = 1.0;
        float r10744395 = r10744393 + r10744394;
        float r10744396 = 1.5;
        float r10744397 = -0.166667;
        float r10744398 = r10744397 * r10744391;
        float r10744399 = r10744396 + r10744398;
        float r10744400 = r10744391 * r10744391;
        float r10744401 = r10744399 * r10744400;
        float r10744402 = cbrt(r10744401);
        float r10744403 = r10744402 * r10744402;
        float r10744404 = r10744403 * r10744402;
        float r10744405 = r10744395 + r10744404;
        return r10744405;
}

double f_od(double x) {
        double r10744406 = x;
        double r10744407 = -3.0;
        double r10744408 = r10744406 * r10744407;
        double r10744409 = 1.0;
        double r10744410 = r10744408 + r10744409;
        double r10744411 = 1.5;
        double r10744412 = -0.166667;
        double r10744413 = r10744412 * r10744406;
        double r10744414 = r10744411 + r10744413;
        double r10744415 = r10744406 * r10744406;
        double r10744416 = r10744414 * r10744415;
        double r10744417 = cbrt(r10744416);
        double r10744418 = r10744417 * r10744417;
        double r10744419 = r10744418 * r10744417;
        double r10744420 = r10744410 + r10744419;
        return r10744420;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10744421, r10744422, r10744423, r10744424, r10744425, r10744426, r10744427, r10744428, r10744429, r10744430, r10744431, r10744432, r10744433;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10744421, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744422, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10744423);
        mpfr_init(r10744424);
        mpfr_init(r10744425);
        mpfr_init_set_str(r10744426, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10744427);
        mpfr_init(r10744428);
        mpfr_init(r10744429);
        mpfr_init_set_str(r10744430, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10744431);
        mpfr_init(r10744432);
        mpfr_init(r10744433);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10744423, x, MPFR_RNDN);
        mpfr_mul(r10744424, r10744422, r10744423, MPFR_RNDN);
        mpfr_add(r10744425, r10744421, r10744424, MPFR_RNDN);
        ;
        mpfr_mul(r10744427, r10744423, r10744423, MPFR_RNDN);
        mpfr_mul(r10744428, r10744426, r10744427, MPFR_RNDN);
        mpfr_add(r10744429, r10744425, r10744428, MPFR_RNDN);
        ;
        mpfr_mul(r10744431, r10744427, r10744423, MPFR_RNDN);
        mpfr_mul(r10744432, r10744430, r10744431, MPFR_RNDN);
        mpfr_add(r10744433, r10744429, r10744432, MPFR_RNDN);
        return mpfr_get_d(r10744433, MPFR_RNDN);
}

static mpfr_t r10744434, r10744435, r10744436, r10744437, r10744438, r10744439, r10744440, r10744441, r10744442, r10744443, r10744444, r10744445, r10744446, r10744447, r10744448;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10744434);
        mpfr_init_set_str(r10744435, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10744436);
        mpfr_init_set_str(r10744437, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10744438);
        mpfr_init_set_str(r10744439, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744440, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10744441);
        mpfr_init(r10744442);
        mpfr_init(r10744443);
        mpfr_init(r10744444);
        mpfr_init(r10744445);
        mpfr_init(r10744446);
        mpfr_init(r10744447);
        mpfr_init(r10744448);
}

double f_fm(double x) {
        mpfr_set_d(r10744434, x, MPFR_RNDN);
        ;
        mpfr_mul(r10744436, r10744434, r10744435, MPFR_RNDN);
        ;
        mpfr_add(r10744438, r10744436, r10744437, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10744441, r10744440, r10744434, MPFR_RNDN);
        mpfr_add(r10744442, r10744439, r10744441, MPFR_RNDN);
        mpfr_mul(r10744443, r10744434, r10744434, MPFR_RNDN);
        mpfr_mul(r10744444, r10744442, r10744443, MPFR_RNDN);
        mpfr_cbrt(r10744445, r10744444, MPFR_RNDN);
        mpfr_mul(r10744446, r10744445, r10744445, MPFR_RNDN);
        mpfr_mul(r10744447, r10744446, r10744445, MPFR_RNDN);
        mpfr_add(r10744448, r10744438, r10744447, MPFR_RNDN);
        return mpfr_get_d(r10744448, MPFR_RNDN);
}

static mpfr_t r10744449, r10744450, r10744451, r10744452, r10744453, r10744454, r10744455, r10744456, r10744457, r10744458, r10744459, r10744460, r10744461, r10744462, r10744463;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10744449);
        mpfr_init_set_str(r10744450, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10744451);
        mpfr_init_set_str(r10744452, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10744453);
        mpfr_init_set_str(r10744454, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744455, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10744456);
        mpfr_init(r10744457);
        mpfr_init(r10744458);
        mpfr_init(r10744459);
        mpfr_init(r10744460);
        mpfr_init(r10744461);
        mpfr_init(r10744462);
        mpfr_init(r10744463);
}

double f_dm(double x) {
        mpfr_set_d(r10744449, x, MPFR_RNDN);
        ;
        mpfr_mul(r10744451, r10744449, r10744450, MPFR_RNDN);
        ;
        mpfr_add(r10744453, r10744451, r10744452, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10744456, r10744455, r10744449, MPFR_RNDN);
        mpfr_add(r10744457, r10744454, r10744456, MPFR_RNDN);
        mpfr_mul(r10744458, r10744449, r10744449, MPFR_RNDN);
        mpfr_mul(r10744459, r10744457, r10744458, MPFR_RNDN);
        mpfr_cbrt(r10744460, r10744459, MPFR_RNDN);
        mpfr_mul(r10744461, r10744460, r10744460, MPFR_RNDN);
        mpfr_mul(r10744462, r10744461, r10744460, MPFR_RNDN);
        mpfr_add(r10744463, r10744453, r10744462, MPFR_RNDN);
        return mpfr_get_d(r10744463, MPFR_RNDN);
}

