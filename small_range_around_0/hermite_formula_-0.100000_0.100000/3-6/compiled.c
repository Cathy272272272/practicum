#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6326496 = -120.0;
        float r6326497 = 720.0;
        float r6326498 = x;
        float r6326499 = r6326498 * r6326498;
        float r6326500 = r6326497 * r6326499;
        float r6326501 = r6326496 + r6326500;
        float r6326502 = -480.0;
        float r6326503 = r6326499 * r6326498;
        float r6326504 = r6326503 * r6326498;
        float r6326505 = r6326502 * r6326504;
        float r6326506 = r6326501 + r6326505;
        float r6326507 = 64.0;
        float r6326508 = r6326504 * r6326498;
        float r6326509 = r6326508 * r6326498;
        float r6326510 = r6326507 * r6326509;
        float r6326511 = r6326506 + r6326510;
        return r6326511;
}

double f_id(double x) {
        double r6326512 = -120.0;
        double r6326513 = 720.0;
        double r6326514 = x;
        double r6326515 = r6326514 * r6326514;
        double r6326516 = r6326513 * r6326515;
        double r6326517 = r6326512 + r6326516;
        double r6326518 = -480.0;
        double r6326519 = r6326515 * r6326514;
        double r6326520 = r6326519 * r6326514;
        double r6326521 = r6326518 * r6326520;
        double r6326522 = r6326517 + r6326521;
        double r6326523 = 64.0;
        double r6326524 = r6326520 * r6326514;
        double r6326525 = r6326524 * r6326514;
        double r6326526 = r6326523 * r6326525;
        double r6326527 = r6326522 + r6326526;
        return r6326527;
}


double f_of(float x) {
        float r6326528 = -120.0;
        float r6326529 = 720.0;
        float r6326530 = x;
        float r6326531 = r6326530 * r6326530;
        float r6326532 = r6326529 * r6326531;
        float r6326533 = r6326528 + r6326532;
        float r6326534 = -480.0;
        float r6326535 = r6326531 * r6326530;
        float r6326536 = r6326535 * r6326530;
        float r6326537 = r6326534 * r6326536;
        float r6326538 = r6326533 + r6326537;
        float r6326539 = 64.0;
        float r6326540 = r6326536 * r6326530;
        float r6326541 = r6326540 * r6326530;
        float r6326542 = r6326539 * r6326541;
        float r6326543 = r6326538 + r6326542;
        return r6326543;
}

double f_od(double x) {
        double r6326544 = -120.0;
        double r6326545 = 720.0;
        double r6326546 = x;
        double r6326547 = r6326546 * r6326546;
        double r6326548 = r6326545 * r6326547;
        double r6326549 = r6326544 + r6326548;
        double r6326550 = -480.0;
        double r6326551 = r6326547 * r6326546;
        double r6326552 = r6326551 * r6326546;
        double r6326553 = r6326550 * r6326552;
        double r6326554 = r6326549 + r6326553;
        double r6326555 = 64.0;
        double r6326556 = r6326552 * r6326546;
        double r6326557 = r6326556 * r6326546;
        double r6326558 = r6326555 * r6326557;
        double r6326559 = r6326554 + r6326558;
        return r6326559;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6326560, r6326561, r6326562, r6326563, r6326564, r6326565, r6326566, r6326567, r6326568, r6326569, r6326570, r6326571, r6326572, r6326573, r6326574, r6326575;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326560, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326561, "720.0", 10, MPFR_RNDN);
        mpfr_init(r6326562);
        mpfr_init(r6326563);
        mpfr_init(r6326564);
        mpfr_init(r6326565);
        mpfr_init_set_str(r6326566, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r6326567);
        mpfr_init(r6326568);
        mpfr_init(r6326569);
        mpfr_init(r6326570);
        mpfr_init_set_str(r6326571, "64.0", 10, MPFR_RNDN);
        mpfr_init(r6326572);
        mpfr_init(r6326573);
        mpfr_init(r6326574);
        mpfr_init(r6326575);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6326562, x, MPFR_RNDN);
        mpfr_mul(r6326563, r6326562, r6326562, MPFR_RNDN);
        mpfr_mul(r6326564, r6326561, r6326563, MPFR_RNDN);
        mpfr_add(r6326565, r6326560, r6326564, MPFR_RNDN);
        ;
        mpfr_mul(r6326567, r6326563, r6326562, MPFR_RNDN);
        mpfr_mul(r6326568, r6326567, r6326562, MPFR_RNDN);
        mpfr_mul(r6326569, r6326566, r6326568, MPFR_RNDN);
        mpfr_add(r6326570, r6326565, r6326569, MPFR_RNDN);
        ;
        mpfr_mul(r6326572, r6326568, r6326562, MPFR_RNDN);
        mpfr_mul(r6326573, r6326572, r6326562, MPFR_RNDN);
        mpfr_mul(r6326574, r6326571, r6326573, MPFR_RNDN);
        mpfr_add(r6326575, r6326570, r6326574, MPFR_RNDN);
        return mpfr_get_d(r6326575, MPFR_RNDN);
}

static mpfr_t r6326576, r6326577, r6326578, r6326579, r6326580, r6326581, r6326582, r6326583, r6326584, r6326585, r6326586, r6326587, r6326588, r6326589, r6326590, r6326591;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326576, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326577, "720.0", 10, MPFR_RNDN);
        mpfr_init(r6326578);
        mpfr_init(r6326579);
        mpfr_init(r6326580);
        mpfr_init(r6326581);
        mpfr_init_set_str(r6326582, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r6326583);
        mpfr_init(r6326584);
        mpfr_init(r6326585);
        mpfr_init(r6326586);
        mpfr_init_set_str(r6326587, "64.0", 10, MPFR_RNDN);
        mpfr_init(r6326588);
        mpfr_init(r6326589);
        mpfr_init(r6326590);
        mpfr_init(r6326591);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6326578, x, MPFR_RNDN);
        mpfr_mul(r6326579, r6326578, r6326578, MPFR_RNDN);
        mpfr_mul(r6326580, r6326577, r6326579, MPFR_RNDN);
        mpfr_add(r6326581, r6326576, r6326580, MPFR_RNDN);
        ;
        mpfr_mul(r6326583, r6326579, r6326578, MPFR_RNDN);
        mpfr_mul(r6326584, r6326583, r6326578, MPFR_RNDN);
        mpfr_mul(r6326585, r6326582, r6326584, MPFR_RNDN);
        mpfr_add(r6326586, r6326581, r6326585, MPFR_RNDN);
        ;
        mpfr_mul(r6326588, r6326584, r6326578, MPFR_RNDN);
        mpfr_mul(r6326589, r6326588, r6326578, MPFR_RNDN);
        mpfr_mul(r6326590, r6326587, r6326589, MPFR_RNDN);
        mpfr_add(r6326591, r6326586, r6326590, MPFR_RNDN);
        return mpfr_get_d(r6326591, MPFR_RNDN);
}

static mpfr_t r6326592, r6326593, r6326594, r6326595, r6326596, r6326597, r6326598, r6326599, r6326600, r6326601, r6326602, r6326603, r6326604, r6326605, r6326606, r6326607;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326592, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326593, "720.0", 10, MPFR_RNDN);
        mpfr_init(r6326594);
        mpfr_init(r6326595);
        mpfr_init(r6326596);
        mpfr_init(r6326597);
        mpfr_init_set_str(r6326598, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r6326599);
        mpfr_init(r6326600);
        mpfr_init(r6326601);
        mpfr_init(r6326602);
        mpfr_init_set_str(r6326603, "64.0", 10, MPFR_RNDN);
        mpfr_init(r6326604);
        mpfr_init(r6326605);
        mpfr_init(r6326606);
        mpfr_init(r6326607);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6326594, x, MPFR_RNDN);
        mpfr_mul(r6326595, r6326594, r6326594, MPFR_RNDN);
        mpfr_mul(r6326596, r6326593, r6326595, MPFR_RNDN);
        mpfr_add(r6326597, r6326592, r6326596, MPFR_RNDN);
        ;
        mpfr_mul(r6326599, r6326595, r6326594, MPFR_RNDN);
        mpfr_mul(r6326600, r6326599, r6326594, MPFR_RNDN);
        mpfr_mul(r6326601, r6326598, r6326600, MPFR_RNDN);
        mpfr_add(r6326602, r6326597, r6326601, MPFR_RNDN);
        ;
        mpfr_mul(r6326604, r6326600, r6326594, MPFR_RNDN);
        mpfr_mul(r6326605, r6326604, r6326594, MPFR_RNDN);
        mpfr_mul(r6326606, r6326603, r6326605, MPFR_RNDN);
        mpfr_add(r6326607, r6326602, r6326606, MPFR_RNDN);
        return mpfr_get_d(r6326607, MPFR_RNDN);
}

