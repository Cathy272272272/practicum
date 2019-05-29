#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7082499 = 2.0;
        float r7082500 = x;
        float r7082501 = r7082499 * r7082500;
        return r7082501;
}

double f_id(double x) {
        double r7082502 = 2.0;
        double r7082503 = x;
        double r7082504 = r7082502 * r7082503;
        return r7082504;
}


double f_of(float x) {
        float r7082505 = 2.0;
        float r7082506 = x;
        float r7082507 = r7082505 * r7082506;
        return r7082507;
}

double f_od(double x) {
        double r7082508 = 2.0;
        double r7082509 = x;
        double r7082510 = r7082508 * r7082509;
        return r7082510;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7082511, r7082512, r7082513;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7082511, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7082512);
        mpfr_init(r7082513);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7082512, x, MPFR_RNDN);
        mpfr_mul(r7082513, r7082511, r7082512, MPFR_RNDN);
        return mpfr_get_d(r7082513, MPFR_RNDN);
}

static mpfr_t r7082514, r7082515, r7082516;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7082514, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7082515);
        mpfr_init(r7082516);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7082515, x, MPFR_RNDN);
        mpfr_mul(r7082516, r7082514, r7082515, MPFR_RNDN);
        return mpfr_get_d(r7082516, MPFR_RNDN);
}

static mpfr_t r7082517, r7082518, r7082519;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7082517, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7082518);
        mpfr_init(r7082519);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7082518, x, MPFR_RNDN);
        mpfr_mul(r7082519, r7082517, r7082518, MPFR_RNDN);
        return mpfr_get_d(r7082519, MPFR_RNDN);
}

