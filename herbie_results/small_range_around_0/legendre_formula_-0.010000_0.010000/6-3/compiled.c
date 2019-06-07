#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r4485527 = -1.5;
        float r4485528 = x;
        float r4485529 = r4485527 * r4485528;
        float r4485530 = 2.5;
        float r4485531 = r4485528 * r4485528;
        float r4485532 = r4485531 * r4485528;
        float r4485533 = r4485530 * r4485532;
        float r4485534 = r4485529 + r4485533;
        return r4485534;
}

double f_id(double x) {
        double r4485535 = -1.5;
        double r4485536 = x;
        double r4485537 = r4485535 * r4485536;
        double r4485538 = 2.5;
        double r4485539 = r4485536 * r4485536;
        double r4485540 = r4485539 * r4485536;
        double r4485541 = r4485538 * r4485540;
        double r4485542 = r4485537 + r4485541;
        return r4485542;
}


double f_of(float x) {
        float r4485543 = -1.5;
        float r4485544 = x;
        float r4485545 = r4485543 * r4485544;
        float r4485546 = 2.5;
        float r4485547 = r4485544 * r4485544;
        float r4485548 = r4485547 * r4485544;
        float r4485549 = r4485546 * r4485548;
        float r4485550 = r4485545 + r4485549;
        return r4485550;
}

double f_od(double x) {
        double r4485551 = -1.5;
        double r4485552 = x;
        double r4485553 = r4485551 * r4485552;
        double r4485554 = 2.5;
        double r4485555 = r4485552 * r4485552;
        double r4485556 = r4485555 * r4485552;
        double r4485557 = r4485554 * r4485556;
        double r4485558 = r4485553 + r4485557;
        return r4485558;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4485559, r4485560, r4485561, r4485562, r4485563, r4485564, r4485565, r4485566;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4485559, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4485560);
        mpfr_init(r4485561);
        mpfr_init_set_str(r4485562, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4485563);
        mpfr_init(r4485564);
        mpfr_init(r4485565);
        mpfr_init(r4485566);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4485560, x, MPFR_RNDN);
        mpfr_mul(r4485561, r4485559, r4485560, MPFR_RNDN);
        ;
        mpfr_mul(r4485563, r4485560, r4485560, MPFR_RNDN);
        mpfr_mul(r4485564, r4485563, r4485560, MPFR_RNDN);
        mpfr_mul(r4485565, r4485562, r4485564, MPFR_RNDN);
        mpfr_add(r4485566, r4485561, r4485565, MPFR_RNDN);
        return mpfr_get_d(r4485566, MPFR_RNDN);
}

static mpfr_t r4485567, r4485568, r4485569, r4485570, r4485571, r4485572, r4485573, r4485574;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4485567, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4485568);
        mpfr_init(r4485569);
        mpfr_init_set_str(r4485570, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4485571);
        mpfr_init(r4485572);
        mpfr_init(r4485573);
        mpfr_init(r4485574);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4485568, x, MPFR_RNDN);
        mpfr_mul(r4485569, r4485567, r4485568, MPFR_RNDN);
        ;
        mpfr_mul(r4485571, r4485568, r4485568, MPFR_RNDN);
        mpfr_mul(r4485572, r4485571, r4485568, MPFR_RNDN);
        mpfr_mul(r4485573, r4485570, r4485572, MPFR_RNDN);
        mpfr_add(r4485574, r4485569, r4485573, MPFR_RNDN);
        return mpfr_get_d(r4485574, MPFR_RNDN);
}

static mpfr_t r4485575, r4485576, r4485577, r4485578, r4485579, r4485580, r4485581, r4485582;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4485575, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4485576);
        mpfr_init(r4485577);
        mpfr_init_set_str(r4485578, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4485579);
        mpfr_init(r4485580);
        mpfr_init(r4485581);
        mpfr_init(r4485582);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4485576, x, MPFR_RNDN);
        mpfr_mul(r4485577, r4485575, r4485576, MPFR_RNDN);
        ;
        mpfr_mul(r4485579, r4485576, r4485576, MPFR_RNDN);
        mpfr_mul(r4485580, r4485579, r4485576, MPFR_RNDN);
        mpfr_mul(r4485581, r4485578, r4485580, MPFR_RNDN);
        mpfr_add(r4485582, r4485577, r4485581, MPFR_RNDN);
        return mpfr_get_d(r4485582, MPFR_RNDN);
}

