#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r3278473 = 1.0;
        float r3278474 = -2.0;
        float r3278475 = x;
        float r3278476 = r3278474 * r3278475;
        float r3278477 = r3278473 + r3278476;
        float r3278478 = 0.5;
        float r3278479 = r3278475 * r3278475;
        float r3278480 = r3278478 * r3278479;
        float r3278481 = r3278477 + r3278480;
        return r3278481;
}

double f_id(double x) {
        double r3278482 = 1.0;
        double r3278483 = -2.0;
        double r3278484 = x;
        double r3278485 = r3278483 * r3278484;
        double r3278486 = r3278482 + r3278485;
        double r3278487 = 0.5;
        double r3278488 = r3278484 * r3278484;
        double r3278489 = r3278487 * r3278488;
        double r3278490 = r3278486 + r3278489;
        return r3278490;
}


double f_of(float x) {
        float r3278491 = 1.0;
        float r3278492 = -2.0;
        float r3278493 = 0.5;
        float r3278494 = x;
        float r3278495 = r3278493 * r3278494;
        float r3278496 = r3278492 + r3278495;
        float r3278497 = r3278496 * r3278494;
        float r3278498 = r3278491 + r3278497;
        return r3278498;
}

double f_od(double x) {
        double r3278499 = 1.0;
        double r3278500 = -2.0;
        double r3278501 = 0.5;
        double r3278502 = x;
        double r3278503 = r3278501 * r3278502;
        double r3278504 = r3278500 + r3278503;
        double r3278505 = r3278504 * r3278502;
        double r3278506 = r3278499 + r3278505;
        return r3278506;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3278507, r3278508, r3278509, r3278510, r3278511, r3278512, r3278513, r3278514, r3278515;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278507, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278508, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r3278509);
        mpfr_init(r3278510);
        mpfr_init(r3278511);
        mpfr_init_set_str(r3278512, "0.5", 10, MPFR_RNDN);
        mpfr_init(r3278513);
        mpfr_init(r3278514);
        mpfr_init(r3278515);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3278509, x, MPFR_RNDN);
        mpfr_mul(r3278510, r3278508, r3278509, MPFR_RNDN);
        mpfr_add(r3278511, r3278507, r3278510, MPFR_RNDN);
        ;
        mpfr_mul(r3278513, r3278509, r3278509, MPFR_RNDN);
        mpfr_mul(r3278514, r3278512, r3278513, MPFR_RNDN);
        mpfr_add(r3278515, r3278511, r3278514, MPFR_RNDN);
        return mpfr_get_d(r3278515, MPFR_RNDN);
}

static mpfr_t r3278516, r3278517, r3278518, r3278519, r3278520, r3278521, r3278522, r3278523;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278516, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278517, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278518, "0.5", 10, MPFR_RNDN);
        mpfr_init(r3278519);
        mpfr_init(r3278520);
        mpfr_init(r3278521);
        mpfr_init(r3278522);
        mpfr_init(r3278523);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r3278519, x, MPFR_RNDN);
        mpfr_mul(r3278520, r3278518, r3278519, MPFR_RNDN);
        mpfr_add(r3278521, r3278517, r3278520, MPFR_RNDN);
        mpfr_mul(r3278522, r3278521, r3278519, MPFR_RNDN);
        mpfr_add(r3278523, r3278516, r3278522, MPFR_RNDN);
        return mpfr_get_d(r3278523, MPFR_RNDN);
}

static mpfr_t r3278524, r3278525, r3278526, r3278527, r3278528, r3278529, r3278530, r3278531;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278524, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278525, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278526, "0.5", 10, MPFR_RNDN);
        mpfr_init(r3278527);
        mpfr_init(r3278528);
        mpfr_init(r3278529);
        mpfr_init(r3278530);
        mpfr_init(r3278531);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r3278527, x, MPFR_RNDN);
        mpfr_mul(r3278528, r3278526, r3278527, MPFR_RNDN);
        mpfr_add(r3278529, r3278525, r3278528, MPFR_RNDN);
        mpfr_mul(r3278530, r3278529, r3278527, MPFR_RNDN);
        mpfr_add(r3278531, r3278524, r3278530, MPFR_RNDN);
        return mpfr_get_d(r3278531, MPFR_RNDN);
}

