#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r10002466 = 1.0;
        float r10002467 = -2.0;
        float r10002468 = x;
        float r10002469 = r10002467 * r10002468;
        float r10002470 = r10002466 + r10002469;
        float r10002471 = 0.5;
        float r10002472 = r10002468 * r10002468;
        float r10002473 = r10002471 * r10002472;
        float r10002474 = r10002470 + r10002473;
        return r10002474;
}

double f_id(double x) {
        double r10002475 = 1.0;
        double r10002476 = -2.0;
        double r10002477 = x;
        double r10002478 = r10002476 * r10002477;
        double r10002479 = r10002475 + r10002478;
        double r10002480 = 0.5;
        double r10002481 = r10002477 * r10002477;
        double r10002482 = r10002480 * r10002481;
        double r10002483 = r10002479 + r10002482;
        return r10002483;
}


double f_of(float x) {
        float r10002484 = 1.0;
        float r10002485 = -2.0;
        float r10002486 = 0.5;
        float r10002487 = x;
        float r10002488 = r10002486 * r10002487;
        float r10002489 = r10002485 + r10002488;
        float r10002490 = r10002489 * r10002487;
        float r10002491 = r10002484 + r10002490;
        return r10002491;
}

double f_od(double x) {
        double r10002492 = 1.0;
        double r10002493 = -2.0;
        double r10002494 = 0.5;
        double r10002495 = x;
        double r10002496 = r10002494 * r10002495;
        double r10002497 = r10002493 + r10002496;
        double r10002498 = r10002497 * r10002495;
        double r10002499 = r10002492 + r10002498;
        return r10002499;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10002500, r10002501, r10002502, r10002503, r10002504, r10002505, r10002506, r10002507, r10002508;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10002500, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002501, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10002502);
        mpfr_init(r10002503);
        mpfr_init(r10002504);
        mpfr_init_set_str(r10002505, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10002506);
        mpfr_init(r10002507);
        mpfr_init(r10002508);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10002502, x, MPFR_RNDN);
        mpfr_mul(r10002503, r10002501, r10002502, MPFR_RNDN);
        mpfr_add(r10002504, r10002500, r10002503, MPFR_RNDN);
        ;
        mpfr_mul(r10002506, r10002502, r10002502, MPFR_RNDN);
        mpfr_mul(r10002507, r10002505, r10002506, MPFR_RNDN);
        mpfr_add(r10002508, r10002504, r10002507, MPFR_RNDN);
        return mpfr_get_d(r10002508, MPFR_RNDN);
}

static mpfr_t r10002509, r10002510, r10002511, r10002512, r10002513, r10002514, r10002515, r10002516;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10002509, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002510, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002511, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10002512);
        mpfr_init(r10002513);
        mpfr_init(r10002514);
        mpfr_init(r10002515);
        mpfr_init(r10002516);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r10002512, x, MPFR_RNDN);
        mpfr_mul(r10002513, r10002511, r10002512, MPFR_RNDN);
        mpfr_add(r10002514, r10002510, r10002513, MPFR_RNDN);
        mpfr_mul(r10002515, r10002514, r10002512, MPFR_RNDN);
        mpfr_add(r10002516, r10002509, r10002515, MPFR_RNDN);
        return mpfr_get_d(r10002516, MPFR_RNDN);
}

static mpfr_t r10002517, r10002518, r10002519, r10002520, r10002521, r10002522, r10002523, r10002524;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10002517, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002518, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002519, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10002520);
        mpfr_init(r10002521);
        mpfr_init(r10002522);
        mpfr_init(r10002523);
        mpfr_init(r10002524);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r10002520, x, MPFR_RNDN);
        mpfr_mul(r10002521, r10002519, r10002520, MPFR_RNDN);
        mpfr_add(r10002522, r10002518, r10002521, MPFR_RNDN);
        mpfr_mul(r10002523, r10002522, r10002520, MPFR_RNDN);
        mpfr_add(r10002524, r10002517, r10002523, MPFR_RNDN);
        return mpfr_get_d(r10002524, MPFR_RNDN);
}

