#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r9883477 = -2.0;
        float r9883478 = 4.0;
        float r9883479 = x;
        float r9883480 = r9883479 * r9883479;
        float r9883481 = r9883478 * r9883480;
        float r9883482 = r9883477 + r9883481;
        return r9883482;
}

double f_id(double x) {
        double r9883483 = -2.0;
        double r9883484 = 4.0;
        double r9883485 = x;
        double r9883486 = r9883485 * r9883485;
        double r9883487 = r9883484 * r9883486;
        double r9883488 = r9883483 + r9883487;
        return r9883488;
}


double f_of(float x) {
        float r9883489 = -2.0;
        float r9883490 = 4.0;
        float r9883491 = x;
        float r9883492 = r9883491 * r9883491;
        float r9883493 = r9883490 * r9883492;
        float r9883494 = r9883489 + r9883493;
        return r9883494;
}

double f_od(double x) {
        double r9883495 = -2.0;
        double r9883496 = 4.0;
        double r9883497 = x;
        double r9883498 = r9883497 * r9883497;
        double r9883499 = r9883496 * r9883498;
        double r9883500 = r9883495 + r9883499;
        return r9883500;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9883501, r9883502, r9883503, r9883504, r9883505, r9883506;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9883501, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883502, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9883503);
        mpfr_init(r9883504);
        mpfr_init(r9883505);
        mpfr_init(r9883506);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9883503, x, MPFR_RNDN);
        mpfr_mul(r9883504, r9883503, r9883503, MPFR_RNDN);
        mpfr_mul(r9883505, r9883502, r9883504, MPFR_RNDN);
        mpfr_add(r9883506, r9883501, r9883505, MPFR_RNDN);
        return mpfr_get_d(r9883506, MPFR_RNDN);
}

static mpfr_t r9883507, r9883508, r9883509, r9883510, r9883511, r9883512;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9883507, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883508, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9883509);
        mpfr_init(r9883510);
        mpfr_init(r9883511);
        mpfr_init(r9883512);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9883509, x, MPFR_RNDN);
        mpfr_mul(r9883510, r9883509, r9883509, MPFR_RNDN);
        mpfr_mul(r9883511, r9883508, r9883510, MPFR_RNDN);
        mpfr_add(r9883512, r9883507, r9883511, MPFR_RNDN);
        return mpfr_get_d(r9883512, MPFR_RNDN);
}

static mpfr_t r9883513, r9883514, r9883515, r9883516, r9883517, r9883518;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9883513, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883514, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9883515);
        mpfr_init(r9883516);
        mpfr_init(r9883517);
        mpfr_init(r9883518);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9883515, x, MPFR_RNDN);
        mpfr_mul(r9883516, r9883515, r9883515, MPFR_RNDN);
        mpfr_mul(r9883517, r9883514, r9883516, MPFR_RNDN);
        mpfr_add(r9883518, r9883513, r9883517, MPFR_RNDN);
        return mpfr_get_d(r9883518, MPFR_RNDN);
}

