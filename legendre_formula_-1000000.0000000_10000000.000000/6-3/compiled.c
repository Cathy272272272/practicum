#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6406379 = -1.5;
        float r6406380 = x;
        float r6406381 = r6406379 * r6406380;
        float r6406382 = 2.5;
        float r6406383 = r6406380 * r6406380;
        float r6406384 = r6406383 * r6406380;
        float r6406385 = r6406382 * r6406384;
        float r6406386 = r6406381 + r6406385;
        return r6406386;
}

double f_id(double x) {
        double r6406387 = -1.5;
        double r6406388 = x;
        double r6406389 = r6406387 * r6406388;
        double r6406390 = 2.5;
        double r6406391 = r6406388 * r6406388;
        double r6406392 = r6406391 * r6406388;
        double r6406393 = r6406390 * r6406392;
        double r6406394 = r6406389 + r6406393;
        return r6406394;
}


double f_of(float x) {
        float r6406395 = -1.5;
        float r6406396 = x;
        float r6406397 = r6406395 * r6406396;
        float r6406398 = 2.5;
        float r6406399 = r6406396 * r6406396;
        float r6406400 = r6406399 * r6406396;
        float r6406401 = r6406398 * r6406400;
        float r6406402 = r6406397 + r6406401;
        return r6406402;
}

double f_od(double x) {
        double r6406403 = -1.5;
        double r6406404 = x;
        double r6406405 = r6406403 * r6406404;
        double r6406406 = 2.5;
        double r6406407 = r6406404 * r6406404;
        double r6406408 = r6406407 * r6406404;
        double r6406409 = r6406406 * r6406408;
        double r6406410 = r6406405 + r6406409;
        return r6406410;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6406411, r6406412, r6406413, r6406414, r6406415, r6406416, r6406417, r6406418;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6406411, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6406412);
        mpfr_init(r6406413);
        mpfr_init_set_str(r6406414, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6406415);
        mpfr_init(r6406416);
        mpfr_init(r6406417);
        mpfr_init(r6406418);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6406412, x, MPFR_RNDN);
        mpfr_mul(r6406413, r6406411, r6406412, MPFR_RNDN);
        ;
        mpfr_mul(r6406415, r6406412, r6406412, MPFR_RNDN);
        mpfr_mul(r6406416, r6406415, r6406412, MPFR_RNDN);
        mpfr_mul(r6406417, r6406414, r6406416, MPFR_RNDN);
        mpfr_add(r6406418, r6406413, r6406417, MPFR_RNDN);
        return mpfr_get_d(r6406418, MPFR_RNDN);
}

static mpfr_t r6406419, r6406420, r6406421, r6406422, r6406423, r6406424, r6406425, r6406426;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6406419, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6406420);
        mpfr_init(r6406421);
        mpfr_init_set_str(r6406422, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6406423);
        mpfr_init(r6406424);
        mpfr_init(r6406425);
        mpfr_init(r6406426);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6406420, x, MPFR_RNDN);
        mpfr_mul(r6406421, r6406419, r6406420, MPFR_RNDN);
        ;
        mpfr_mul(r6406423, r6406420, r6406420, MPFR_RNDN);
        mpfr_mul(r6406424, r6406423, r6406420, MPFR_RNDN);
        mpfr_mul(r6406425, r6406422, r6406424, MPFR_RNDN);
        mpfr_add(r6406426, r6406421, r6406425, MPFR_RNDN);
        return mpfr_get_d(r6406426, MPFR_RNDN);
}

static mpfr_t r6406427, r6406428, r6406429, r6406430, r6406431, r6406432, r6406433, r6406434;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6406427, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6406428);
        mpfr_init(r6406429);
        mpfr_init_set_str(r6406430, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6406431);
        mpfr_init(r6406432);
        mpfr_init(r6406433);
        mpfr_init(r6406434);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6406428, x, MPFR_RNDN);
        mpfr_mul(r6406429, r6406427, r6406428, MPFR_RNDN);
        ;
        mpfr_mul(r6406431, r6406428, r6406428, MPFR_RNDN);
        mpfr_mul(r6406432, r6406431, r6406428, MPFR_RNDN);
        mpfr_mul(r6406433, r6406430, r6406432, MPFR_RNDN);
        mpfr_add(r6406434, r6406429, r6406433, MPFR_RNDN);
        return mpfr_get_d(r6406434, MPFR_RNDN);
}

