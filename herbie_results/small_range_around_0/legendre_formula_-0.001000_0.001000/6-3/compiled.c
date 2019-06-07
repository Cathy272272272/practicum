#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r4436408 = -1.5;
        float r4436409 = x;
        float r4436410 = r4436408 * r4436409;
        float r4436411 = 2.5;
        float r4436412 = r4436409 * r4436409;
        float r4436413 = r4436412 * r4436409;
        float r4436414 = r4436411 * r4436413;
        float r4436415 = r4436410 + r4436414;
        return r4436415;
}

double f_id(double x) {
        double r4436416 = -1.5;
        double r4436417 = x;
        double r4436418 = r4436416 * r4436417;
        double r4436419 = 2.5;
        double r4436420 = r4436417 * r4436417;
        double r4436421 = r4436420 * r4436417;
        double r4436422 = r4436419 * r4436421;
        double r4436423 = r4436418 + r4436422;
        return r4436423;
}


double f_of(float x) {
        float r4436424 = -1.5;
        float r4436425 = x;
        float r4436426 = r4436424 * r4436425;
        float r4436427 = 2.5;
        float r4436428 = r4436425 * r4436425;
        float r4436429 = r4436428 * r4436425;
        float r4436430 = r4436427 * r4436429;
        float r4436431 = r4436426 + r4436430;
        return r4436431;
}

double f_od(double x) {
        double r4436432 = -1.5;
        double r4436433 = x;
        double r4436434 = r4436432 * r4436433;
        double r4436435 = 2.5;
        double r4436436 = r4436433 * r4436433;
        double r4436437 = r4436436 * r4436433;
        double r4436438 = r4436435 * r4436437;
        double r4436439 = r4436434 + r4436438;
        return r4436439;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4436440, r4436441, r4436442, r4436443, r4436444, r4436445, r4436446, r4436447;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4436440, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4436441);
        mpfr_init(r4436442);
        mpfr_init_set_str(r4436443, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4436444);
        mpfr_init(r4436445);
        mpfr_init(r4436446);
        mpfr_init(r4436447);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4436441, x, MPFR_RNDN);
        mpfr_mul(r4436442, r4436440, r4436441, MPFR_RNDN);
        ;
        mpfr_mul(r4436444, r4436441, r4436441, MPFR_RNDN);
        mpfr_mul(r4436445, r4436444, r4436441, MPFR_RNDN);
        mpfr_mul(r4436446, r4436443, r4436445, MPFR_RNDN);
        mpfr_add(r4436447, r4436442, r4436446, MPFR_RNDN);
        return mpfr_get_d(r4436447, MPFR_RNDN);
}

static mpfr_t r4436448, r4436449, r4436450, r4436451, r4436452, r4436453, r4436454, r4436455;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4436448, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4436449);
        mpfr_init(r4436450);
        mpfr_init_set_str(r4436451, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4436452);
        mpfr_init(r4436453);
        mpfr_init(r4436454);
        mpfr_init(r4436455);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4436449, x, MPFR_RNDN);
        mpfr_mul(r4436450, r4436448, r4436449, MPFR_RNDN);
        ;
        mpfr_mul(r4436452, r4436449, r4436449, MPFR_RNDN);
        mpfr_mul(r4436453, r4436452, r4436449, MPFR_RNDN);
        mpfr_mul(r4436454, r4436451, r4436453, MPFR_RNDN);
        mpfr_add(r4436455, r4436450, r4436454, MPFR_RNDN);
        return mpfr_get_d(r4436455, MPFR_RNDN);
}

static mpfr_t r4436456, r4436457, r4436458, r4436459, r4436460, r4436461, r4436462, r4436463;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4436456, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4436457);
        mpfr_init(r4436458);
        mpfr_init_set_str(r4436459, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4436460);
        mpfr_init(r4436461);
        mpfr_init(r4436462);
        mpfr_init(r4436463);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4436457, x, MPFR_RNDN);
        mpfr_mul(r4436458, r4436456, r4436457, MPFR_RNDN);
        ;
        mpfr_mul(r4436460, r4436457, r4436457, MPFR_RNDN);
        mpfr_mul(r4436461, r4436460, r4436457, MPFR_RNDN);
        mpfr_mul(r4436462, r4436459, r4436461, MPFR_RNDN);
        mpfr_add(r4436463, r4436458, r4436462, MPFR_RNDN);
        return mpfr_get_d(r4436463, MPFR_RNDN);
}

