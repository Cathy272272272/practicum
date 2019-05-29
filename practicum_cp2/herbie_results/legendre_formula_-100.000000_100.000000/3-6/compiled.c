#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6179497 = -0.3125;
        float r6179498 = 6.5625;
        float r6179499 = x;
        float r6179500 = r6179499 * r6179499;
        float r6179501 = r6179498 * r6179500;
        float r6179502 = r6179497 + r6179501;
        float r6179503 = -19.6875;
        float r6179504 = r6179500 * r6179499;
        float r6179505 = r6179504 * r6179499;
        float r6179506 = r6179503 * r6179505;
        float r6179507 = r6179502 + r6179506;
        float r6179508 = 14.4375;
        float r6179509 = r6179505 * r6179499;
        float r6179510 = r6179509 * r6179499;
        float r6179511 = r6179508 * r6179510;
        float r6179512 = r6179507 + r6179511;
        return r6179512;
}

double f_id(double x) {
        double r6179513 = -0.3125;
        double r6179514 = 6.5625;
        double r6179515 = x;
        double r6179516 = r6179515 * r6179515;
        double r6179517 = r6179514 * r6179516;
        double r6179518 = r6179513 + r6179517;
        double r6179519 = -19.6875;
        double r6179520 = r6179516 * r6179515;
        double r6179521 = r6179520 * r6179515;
        double r6179522 = r6179519 * r6179521;
        double r6179523 = r6179518 + r6179522;
        double r6179524 = 14.4375;
        double r6179525 = r6179521 * r6179515;
        double r6179526 = r6179525 * r6179515;
        double r6179527 = r6179524 * r6179526;
        double r6179528 = r6179523 + r6179527;
        return r6179528;
}


double f_of(float x) {
        float r6179529 = -0.3125;
        float r6179530 = 6.5625;
        float r6179531 = x;
        float r6179532 = r6179531 * r6179531;
        float r6179533 = r6179530 * r6179532;
        float r6179534 = r6179529 + r6179533;
        float r6179535 = -19.6875;
        float r6179536 = r6179532 * r6179531;
        float r6179537 = r6179536 * r6179531;
        float r6179538 = r6179535 * r6179537;
        float r6179539 = r6179534 + r6179538;
        float r6179540 = 14.4375;
        float r6179541 = r6179537 * r6179531;
        float r6179542 = r6179541 * r6179531;
        float r6179543 = r6179540 * r6179542;
        float r6179544 = r6179539 + r6179543;
        return r6179544;
}

double f_od(double x) {
        double r6179545 = -0.3125;
        double r6179546 = 6.5625;
        double r6179547 = x;
        double r6179548 = r6179547 * r6179547;
        double r6179549 = r6179546 * r6179548;
        double r6179550 = r6179545 + r6179549;
        double r6179551 = -19.6875;
        double r6179552 = r6179548 * r6179547;
        double r6179553 = r6179552 * r6179547;
        double r6179554 = r6179551 * r6179553;
        double r6179555 = r6179550 + r6179554;
        double r6179556 = 14.4375;
        double r6179557 = r6179553 * r6179547;
        double r6179558 = r6179557 * r6179547;
        double r6179559 = r6179556 * r6179558;
        double r6179560 = r6179555 + r6179559;
        return r6179560;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179561, r6179562, r6179563, r6179564, r6179565, r6179566, r6179567, r6179568, r6179569, r6179570, r6179571, r6179572, r6179573, r6179574, r6179575, r6179576;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179561, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179562, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6179563);
        mpfr_init(r6179564);
        mpfr_init(r6179565);
        mpfr_init(r6179566);
        mpfr_init_set_str(r6179567, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6179568);
        mpfr_init(r6179569);
        mpfr_init(r6179570);
        mpfr_init(r6179571);
        mpfr_init_set_str(r6179572, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6179573);
        mpfr_init(r6179574);
        mpfr_init(r6179575);
        mpfr_init(r6179576);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6179563, x, MPFR_RNDN);
        mpfr_mul(r6179564, r6179563, r6179563, MPFR_RNDN);
        mpfr_mul(r6179565, r6179562, r6179564, MPFR_RNDN);
        mpfr_add(r6179566, r6179561, r6179565, MPFR_RNDN);
        ;
        mpfr_mul(r6179568, r6179564, r6179563, MPFR_RNDN);
        mpfr_mul(r6179569, r6179568, r6179563, MPFR_RNDN);
        mpfr_mul(r6179570, r6179567, r6179569, MPFR_RNDN);
        mpfr_add(r6179571, r6179566, r6179570, MPFR_RNDN);
        ;
        mpfr_mul(r6179573, r6179569, r6179563, MPFR_RNDN);
        mpfr_mul(r6179574, r6179573, r6179563, MPFR_RNDN);
        mpfr_mul(r6179575, r6179572, r6179574, MPFR_RNDN);
        mpfr_add(r6179576, r6179571, r6179575, MPFR_RNDN);
        return mpfr_get_d(r6179576, MPFR_RNDN);
}

static mpfr_t r6179577, r6179578, r6179579, r6179580, r6179581, r6179582, r6179583, r6179584, r6179585, r6179586, r6179587, r6179588, r6179589, r6179590, r6179591, r6179592;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179577, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179578, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6179579);
        mpfr_init(r6179580);
        mpfr_init(r6179581);
        mpfr_init(r6179582);
        mpfr_init_set_str(r6179583, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6179584);
        mpfr_init(r6179585);
        mpfr_init(r6179586);
        mpfr_init(r6179587);
        mpfr_init_set_str(r6179588, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6179589);
        mpfr_init(r6179590);
        mpfr_init(r6179591);
        mpfr_init(r6179592);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6179579, x, MPFR_RNDN);
        mpfr_mul(r6179580, r6179579, r6179579, MPFR_RNDN);
        mpfr_mul(r6179581, r6179578, r6179580, MPFR_RNDN);
        mpfr_add(r6179582, r6179577, r6179581, MPFR_RNDN);
        ;
        mpfr_mul(r6179584, r6179580, r6179579, MPFR_RNDN);
        mpfr_mul(r6179585, r6179584, r6179579, MPFR_RNDN);
        mpfr_mul(r6179586, r6179583, r6179585, MPFR_RNDN);
        mpfr_add(r6179587, r6179582, r6179586, MPFR_RNDN);
        ;
        mpfr_mul(r6179589, r6179585, r6179579, MPFR_RNDN);
        mpfr_mul(r6179590, r6179589, r6179579, MPFR_RNDN);
        mpfr_mul(r6179591, r6179588, r6179590, MPFR_RNDN);
        mpfr_add(r6179592, r6179587, r6179591, MPFR_RNDN);
        return mpfr_get_d(r6179592, MPFR_RNDN);
}

static mpfr_t r6179593, r6179594, r6179595, r6179596, r6179597, r6179598, r6179599, r6179600, r6179601, r6179602, r6179603, r6179604, r6179605, r6179606, r6179607, r6179608;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179593, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179594, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6179595);
        mpfr_init(r6179596);
        mpfr_init(r6179597);
        mpfr_init(r6179598);
        mpfr_init_set_str(r6179599, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6179600);
        mpfr_init(r6179601);
        mpfr_init(r6179602);
        mpfr_init(r6179603);
        mpfr_init_set_str(r6179604, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6179605);
        mpfr_init(r6179606);
        mpfr_init(r6179607);
        mpfr_init(r6179608);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6179595, x, MPFR_RNDN);
        mpfr_mul(r6179596, r6179595, r6179595, MPFR_RNDN);
        mpfr_mul(r6179597, r6179594, r6179596, MPFR_RNDN);
        mpfr_add(r6179598, r6179593, r6179597, MPFR_RNDN);
        ;
        mpfr_mul(r6179600, r6179596, r6179595, MPFR_RNDN);
        mpfr_mul(r6179601, r6179600, r6179595, MPFR_RNDN);
        mpfr_mul(r6179602, r6179599, r6179601, MPFR_RNDN);
        mpfr_add(r6179603, r6179598, r6179602, MPFR_RNDN);
        ;
        mpfr_mul(r6179605, r6179601, r6179595, MPFR_RNDN);
        mpfr_mul(r6179606, r6179605, r6179595, MPFR_RNDN);
        mpfr_mul(r6179607, r6179604, r6179606, MPFR_RNDN);
        mpfr_add(r6179608, r6179603, r6179607, MPFR_RNDN);
        return mpfr_get_d(r6179608, MPFR_RNDN);
}

