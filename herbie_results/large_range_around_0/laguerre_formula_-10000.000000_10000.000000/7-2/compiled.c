#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r10744464 = 1.0;
        float r10744465 = -2.0;
        float r10744466 = x;
        float r10744467 = r10744465 * r10744466;
        float r10744468 = r10744464 + r10744467;
        float r10744469 = 0.5;
        float r10744470 = r10744466 * r10744466;
        float r10744471 = r10744469 * r10744470;
        float r10744472 = r10744468 + r10744471;
        return r10744472;
}

double f_id(double x) {
        double r10744473 = 1.0;
        double r10744474 = -2.0;
        double r10744475 = x;
        double r10744476 = r10744474 * r10744475;
        double r10744477 = r10744473 + r10744476;
        double r10744478 = 0.5;
        double r10744479 = r10744475 * r10744475;
        double r10744480 = r10744478 * r10744479;
        double r10744481 = r10744477 + r10744480;
        return r10744481;
}


double f_of(float x) {
        float r10744482 = 1.0;
        float r10744483 = -2.0;
        float r10744484 = 0.5;
        float r10744485 = x;
        float r10744486 = r10744484 * r10744485;
        float r10744487 = r10744483 + r10744486;
        float r10744488 = r10744487 * r10744485;
        float r10744489 = r10744482 + r10744488;
        return r10744489;
}

double f_od(double x) {
        double r10744490 = 1.0;
        double r10744491 = -2.0;
        double r10744492 = 0.5;
        double r10744493 = x;
        double r10744494 = r10744492 * r10744493;
        double r10744495 = r10744491 + r10744494;
        double r10744496 = r10744495 * r10744493;
        double r10744497 = r10744490 + r10744496;
        return r10744497;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10744498, r10744499, r10744500, r10744501, r10744502, r10744503, r10744504, r10744505, r10744506;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744498, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744499, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10744500);
        mpfr_init(r10744501);
        mpfr_init(r10744502);
        mpfr_init_set_str(r10744503, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10744504);
        mpfr_init(r10744505);
        mpfr_init(r10744506);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10744500, x, MPFR_RNDN);
        mpfr_mul(r10744501, r10744499, r10744500, MPFR_RNDN);
        mpfr_add(r10744502, r10744498, r10744501, MPFR_RNDN);
        ;
        mpfr_mul(r10744504, r10744500, r10744500, MPFR_RNDN);
        mpfr_mul(r10744505, r10744503, r10744504, MPFR_RNDN);
        mpfr_add(r10744506, r10744502, r10744505, MPFR_RNDN);
        return mpfr_get_d(r10744506, MPFR_RNDN);
}

static mpfr_t r10744507, r10744508, r10744509, r10744510, r10744511, r10744512, r10744513, r10744514;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744507, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744508, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744509, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10744510);
        mpfr_init(r10744511);
        mpfr_init(r10744512);
        mpfr_init(r10744513);
        mpfr_init(r10744514);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r10744510, x, MPFR_RNDN);
        mpfr_mul(r10744511, r10744509, r10744510, MPFR_RNDN);
        mpfr_add(r10744512, r10744508, r10744511, MPFR_RNDN);
        mpfr_mul(r10744513, r10744512, r10744510, MPFR_RNDN);
        mpfr_add(r10744514, r10744507, r10744513, MPFR_RNDN);
        return mpfr_get_d(r10744514, MPFR_RNDN);
}

static mpfr_t r10744515, r10744516, r10744517, r10744518, r10744519, r10744520, r10744521, r10744522;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744515, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744516, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744517, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10744518);
        mpfr_init(r10744519);
        mpfr_init(r10744520);
        mpfr_init(r10744521);
        mpfr_init(r10744522);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r10744518, x, MPFR_RNDN);
        mpfr_mul(r10744519, r10744517, r10744518, MPFR_RNDN);
        mpfr_add(r10744520, r10744516, r10744519, MPFR_RNDN);
        mpfr_mul(r10744521, r10744520, r10744518, MPFR_RNDN);
        mpfr_add(r10744522, r10744515, r10744521, MPFR_RNDN);
        return mpfr_get_d(r10744522, MPFR_RNDN);
}

