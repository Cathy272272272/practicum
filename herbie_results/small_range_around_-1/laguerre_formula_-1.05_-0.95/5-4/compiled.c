#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r10528475 = 1.0;
        float r10528476 = -4.0;
        float r10528477 = x;
        float r10528478 = r10528476 * r10528477;
        float r10528479 = r10528475 + r10528478;
        float r10528480 = 3.0;
        float r10528481 = r10528477 * r10528477;
        float r10528482 = r10528480 * r10528481;
        float r10528483 = r10528479 + r10528482;
        float r10528484 = -0.666667;
        float r10528485 = r10528481 * r10528477;
        float r10528486 = r10528484 * r10528485;
        float r10528487 = r10528483 + r10528486;
        float r10528488 = 0.041667;
        float r10528489 = r10528485 * r10528477;
        float r10528490 = r10528488 * r10528489;
        float r10528491 = r10528487 + r10528490;
        return r10528491;
}

double f_id(double x) {
        double r10528492 = 1.0;
        double r10528493 = -4.0;
        double r10528494 = x;
        double r10528495 = r10528493 * r10528494;
        double r10528496 = r10528492 + r10528495;
        double r10528497 = 3.0;
        double r10528498 = r10528494 * r10528494;
        double r10528499 = r10528497 * r10528498;
        double r10528500 = r10528496 + r10528499;
        double r10528501 = -0.666667;
        double r10528502 = r10528498 * r10528494;
        double r10528503 = r10528501 * r10528502;
        double r10528504 = r10528500 + r10528503;
        double r10528505 = 0.041667;
        double r10528506 = r10528502 * r10528494;
        double r10528507 = r10528505 * r10528506;
        double r10528508 = r10528504 + r10528507;
        return r10528508;
}


double f_of(float x) {
        float r10528509 = x;
        float r10528510 = 3;
        float r10528511 = pow(r10528509, r10528510);
        float r10528512 = 0.041667;
        float r10528513 = r10528512 * r10528509;
        float r10528514 = -0.666667;
        float r10528515 = r10528513 + r10528514;
        float r10528516 = r10528511 * r10528515;
        float r10528517 = exp(r10528516);
        float r10528518 = log(r10528517);
        float r10528519 = 3.0;
        float r10528520 = r10528509 * r10528519;
        float r10528521 = r10528520 * r10528509;
        float r10528522 = -4.0;
        float r10528523 = r10528509 * r10528522;
        float r10528524 = 1.0;
        float r10528525 = r10528523 + r10528524;
        float r10528526 = r10528521 + r10528525;
        float r10528527 = r10528518 + r10528526;
        return r10528527;
}

double f_od(double x) {
        double r10528528 = x;
        double r10528529 = 3;
        double r10528530 = pow(r10528528, r10528529);
        double r10528531 = 0.041667;
        double r10528532 = r10528531 * r10528528;
        double r10528533 = -0.666667;
        double r10528534 = r10528532 + r10528533;
        double r10528535 = r10528530 * r10528534;
        double r10528536 = exp(r10528535);
        double r10528537 = log(r10528536);
        double r10528538 = 3.0;
        double r10528539 = r10528528 * r10528538;
        double r10528540 = r10528539 * r10528528;
        double r10528541 = -4.0;
        double r10528542 = r10528528 * r10528541;
        double r10528543 = 1.0;
        double r10528544 = r10528542 + r10528543;
        double r10528545 = r10528540 + r10528544;
        double r10528546 = r10528537 + r10528545;
        return r10528546;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10528547, r10528548, r10528549, r10528550, r10528551, r10528552, r10528553, r10528554, r10528555, r10528556, r10528557, r10528558, r10528559, r10528560, r10528561, r10528562, r10528563;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528547, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528548, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10528549);
        mpfr_init(r10528550);
        mpfr_init(r10528551);
        mpfr_init_set_str(r10528552, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10528553);
        mpfr_init(r10528554);
        mpfr_init(r10528555);
        mpfr_init_set_str(r10528556, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10528557);
        mpfr_init(r10528558);
        mpfr_init(r10528559);
        mpfr_init_set_str(r10528560, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10528561);
        mpfr_init(r10528562);
        mpfr_init(r10528563);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10528549, x, MPFR_RNDN);
        mpfr_mul(r10528550, r10528548, r10528549, MPFR_RNDN);
        mpfr_add(r10528551, r10528547, r10528550, MPFR_RNDN);
        ;
        mpfr_mul(r10528553, r10528549, r10528549, MPFR_RNDN);
        mpfr_mul(r10528554, r10528552, r10528553, MPFR_RNDN);
        mpfr_add(r10528555, r10528551, r10528554, MPFR_RNDN);
        ;
        mpfr_mul(r10528557, r10528553, r10528549, MPFR_RNDN);
        mpfr_mul(r10528558, r10528556, r10528557, MPFR_RNDN);
        mpfr_add(r10528559, r10528555, r10528558, MPFR_RNDN);
        ;
        mpfr_mul(r10528561, r10528557, r10528549, MPFR_RNDN);
        mpfr_mul(r10528562, r10528560, r10528561, MPFR_RNDN);
        mpfr_add(r10528563, r10528559, r10528562, MPFR_RNDN);
        return mpfr_get_d(r10528563, MPFR_RNDN);
}

static mpfr_t r10528564, r10528565, r10528566, r10528567, r10528568, r10528569, r10528570, r10528571, r10528572, r10528573, r10528574, r10528575, r10528576, r10528577, r10528578, r10528579, r10528580, r10528581, r10528582;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10528564);
        mpfr_init_set_str(r10528565, "3", 10, MPFR_RNDN);
        mpfr_init(r10528566);
        mpfr_init_set_str(r10528567, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10528568);
        mpfr_init_set_str(r10528569, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10528570);
        mpfr_init(r10528571);
        mpfr_init(r10528572);
        mpfr_init(r10528573);
        mpfr_init_set_str(r10528574, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10528575);
        mpfr_init(r10528576);
        mpfr_init_set_str(r10528577, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10528578);
        mpfr_init_set_str(r10528579, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528580);
        mpfr_init(r10528581);
        mpfr_init(r10528582);
}

double f_fm(double x) {
        mpfr_set_d(r10528564, x, MPFR_RNDN);
        ;
        mpfr_pow(r10528566, r10528564, r10528565, MPFR_RNDN);
        ;
        mpfr_mul(r10528568, r10528567, r10528564, MPFR_RNDN);
        ;
        mpfr_add(r10528570, r10528568, r10528569, MPFR_RNDN);
        mpfr_mul(r10528571, r10528566, r10528570, MPFR_RNDN);
        mpfr_exp(r10528572, r10528571, MPFR_RNDN);
        mpfr_log(r10528573, r10528572, MPFR_RNDN);
        ;
        mpfr_mul(r10528575, r10528564, r10528574, MPFR_RNDN);
        mpfr_mul(r10528576, r10528575, r10528564, MPFR_RNDN);
        ;
        mpfr_mul(r10528578, r10528564, r10528577, MPFR_RNDN);
        ;
        mpfr_add(r10528580, r10528578, r10528579, MPFR_RNDN);
        mpfr_add(r10528581, r10528576, r10528580, MPFR_RNDN);
        mpfr_add(r10528582, r10528573, r10528581, MPFR_RNDN);
        return mpfr_get_d(r10528582, MPFR_RNDN);
}

static mpfr_t r10528583, r10528584, r10528585, r10528586, r10528587, r10528588, r10528589, r10528590, r10528591, r10528592, r10528593, r10528594, r10528595, r10528596, r10528597, r10528598, r10528599, r10528600, r10528601;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10528583);
        mpfr_init_set_str(r10528584, "3", 10, MPFR_RNDN);
        mpfr_init(r10528585);
        mpfr_init_set_str(r10528586, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10528587);
        mpfr_init_set_str(r10528588, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10528589);
        mpfr_init(r10528590);
        mpfr_init(r10528591);
        mpfr_init(r10528592);
        mpfr_init_set_str(r10528593, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10528594);
        mpfr_init(r10528595);
        mpfr_init_set_str(r10528596, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10528597);
        mpfr_init_set_str(r10528598, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528599);
        mpfr_init(r10528600);
        mpfr_init(r10528601);
}

double f_dm(double x) {
        mpfr_set_d(r10528583, x, MPFR_RNDN);
        ;
        mpfr_pow(r10528585, r10528583, r10528584, MPFR_RNDN);
        ;
        mpfr_mul(r10528587, r10528586, r10528583, MPFR_RNDN);
        ;
        mpfr_add(r10528589, r10528587, r10528588, MPFR_RNDN);
        mpfr_mul(r10528590, r10528585, r10528589, MPFR_RNDN);
        mpfr_exp(r10528591, r10528590, MPFR_RNDN);
        mpfr_log(r10528592, r10528591, MPFR_RNDN);
        ;
        mpfr_mul(r10528594, r10528583, r10528593, MPFR_RNDN);
        mpfr_mul(r10528595, r10528594, r10528583, MPFR_RNDN);
        ;
        mpfr_mul(r10528597, r10528583, r10528596, MPFR_RNDN);
        ;
        mpfr_add(r10528599, r10528597, r10528598, MPFR_RNDN);
        mpfr_add(r10528600, r10528595, r10528599, MPFR_RNDN);
        mpfr_add(r10528601, r10528592, r10528600, MPFR_RNDN);
        return mpfr_get_d(r10528601, MPFR_RNDN);
}

