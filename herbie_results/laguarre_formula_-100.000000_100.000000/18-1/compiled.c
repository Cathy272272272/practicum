#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6297484 = 1.0;
        float r6297485 = -1.0;
        float r6297486 = x;
        float r6297487 = r6297485 * r6297486;
        float r6297488 = r6297484 + r6297487;
        return r6297488;
}

double f_id(double x) {
        double r6297489 = 1.0;
        double r6297490 = -1.0;
        double r6297491 = x;
        double r6297492 = r6297490 * r6297491;
        double r6297493 = r6297489 + r6297492;
        return r6297493;
}


double f_of(float x) {
        float r6297494 = 1.0;
        float r6297495 = -1.0;
        float r6297496 = x;
        float r6297497 = r6297495 * r6297496;
        float r6297498 = r6297494 + r6297497;
        return r6297498;
}

double f_od(double x) {
        double r6297499 = 1.0;
        double r6297500 = -1.0;
        double r6297501 = x;
        double r6297502 = r6297500 * r6297501;
        double r6297503 = r6297499 + r6297502;
        return r6297503;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6297504, r6297505, r6297506, r6297507, r6297508;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6297504, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6297505, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r6297506);
        mpfr_init(r6297507);
        mpfr_init(r6297508);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6297506, x, MPFR_RNDN);
        mpfr_mul(r6297507, r6297505, r6297506, MPFR_RNDN);
        mpfr_add(r6297508, r6297504, r6297507, MPFR_RNDN);
        return mpfr_get_d(r6297508, MPFR_RNDN);
}

static mpfr_t r6297509, r6297510, r6297511, r6297512, r6297513;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6297509, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6297510, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r6297511);
        mpfr_init(r6297512);
        mpfr_init(r6297513);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6297511, x, MPFR_RNDN);
        mpfr_mul(r6297512, r6297510, r6297511, MPFR_RNDN);
        mpfr_add(r6297513, r6297509, r6297512, MPFR_RNDN);
        return mpfr_get_d(r6297513, MPFR_RNDN);
}

static mpfr_t r6297514, r6297515, r6297516, r6297517, r6297518;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6297514, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6297515, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r6297516);
        mpfr_init(r6297517);
        mpfr_init(r6297518);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6297516, x, MPFR_RNDN);
        mpfr_mul(r6297517, r6297515, r6297516, MPFR_RNDN);
        mpfr_add(r6297518, r6297514, r6297517, MPFR_RNDN);
        return mpfr_get_d(r6297518, MPFR_RNDN);
}

