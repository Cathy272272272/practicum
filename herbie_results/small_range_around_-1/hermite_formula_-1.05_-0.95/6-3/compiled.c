#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r60543521 = -12.0;
        float r60543522 = x;
        float r60543523 = r60543521 * r60543522;
        float r60543524 = 8.0;
        float r60543525 = r60543522 * r60543522;
        float r60543526 = r60543525 * r60543522;
        float r60543527 = r60543524 * r60543526;
        float r60543528 = r60543523 + r60543527;
        return r60543528;
}

double f_id(double x) {
        double r60543529 = -12.0;
        double r60543530 = x;
        double r60543531 = r60543529 * r60543530;
        double r60543532 = 8.0;
        double r60543533 = r60543530 * r60543530;
        double r60543534 = r60543533 * r60543530;
        double r60543535 = r60543532 * r60543534;
        double r60543536 = r60543531 + r60543535;
        return r60543536;
}


double f_of(float x) {
        float r60543537 = -12.0;
        float r60543538 = exp(r60543537);
        float r60543539 = x;
        float r60543540 = pow(r60543538, r60543539);
        float r60543541 = 8.0;
        float r60543542 = exp(r60543541);
        float r60543543 = pow(r60543542, r60543539);
        float r60543544 = pow(r60543543, r60543539);
        float r60543545 = pow(r60543544, r60543539);
        float r60543546 = r60543540 * r60543545;
        float r60543547 = log(r60543546);
        return r60543547;
}

double f_od(double x) {
        double r60543548 = -12.0;
        double r60543549 = exp(r60543548);
        double r60543550 = x;
        double r60543551 = pow(r60543549, r60543550);
        double r60543552 = 8.0;
        double r60543553 = exp(r60543552);
        double r60543554 = pow(r60543553, r60543550);
        double r60543555 = pow(r60543554, r60543550);
        double r60543556 = pow(r60543555, r60543550);
        double r60543557 = r60543551 * r60543556;
        double r60543558 = log(r60543557);
        return r60543558;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60543559, r60543560, r60543561, r60543562, r60543563, r60543564, r60543565, r60543566;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543559, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r60543560);
        mpfr_init(r60543561);
        mpfr_init_set_str(r60543562, "8.0", 10, MPFR_RNDN);
        mpfr_init(r60543563);
        mpfr_init(r60543564);
        mpfr_init(r60543565);
        mpfr_init(r60543566);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60543560, x, MPFR_RNDN);
        mpfr_mul(r60543561, r60543559, r60543560, MPFR_RNDN);
        ;
        mpfr_mul(r60543563, r60543560, r60543560, MPFR_RNDN);
        mpfr_mul(r60543564, r60543563, r60543560, MPFR_RNDN);
        mpfr_mul(r60543565, r60543562, r60543564, MPFR_RNDN);
        mpfr_add(r60543566, r60543561, r60543565, MPFR_RNDN);
        return mpfr_get_d(r60543566, MPFR_RNDN);
}

static mpfr_t r60543567, r60543568, r60543569, r60543570, r60543571, r60543572, r60543573, r60543574, r60543575, r60543576, r60543577;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543567, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r60543568);
        mpfr_init(r60543569);
        mpfr_init(r60543570);
        mpfr_init_set_str(r60543571, "8.0", 10, MPFR_RNDN);
        mpfr_init(r60543572);
        mpfr_init(r60543573);
        mpfr_init(r60543574);
        mpfr_init(r60543575);
        mpfr_init(r60543576);
        mpfr_init(r60543577);
}

double f_fm(double x) {
        ;
        mpfr_exp(r60543568, r60543567, MPFR_RNDN);
        mpfr_set_d(r60543569, x, MPFR_RNDN);
        mpfr_pow(r60543570, r60543568, r60543569, MPFR_RNDN);
        ;
        mpfr_exp(r60543572, r60543571, MPFR_RNDN);
        mpfr_pow(r60543573, r60543572, r60543569, MPFR_RNDN);
        mpfr_pow(r60543574, r60543573, r60543569, MPFR_RNDN);
        mpfr_pow(r60543575, r60543574, r60543569, MPFR_RNDN);
        mpfr_mul(r60543576, r60543570, r60543575, MPFR_RNDN);
        mpfr_log(r60543577, r60543576, MPFR_RNDN);
        return mpfr_get_d(r60543577, MPFR_RNDN);
}

static mpfr_t r60543578, r60543579, r60543580, r60543581, r60543582, r60543583, r60543584, r60543585, r60543586, r60543587, r60543588;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543578, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r60543579);
        mpfr_init(r60543580);
        mpfr_init(r60543581);
        mpfr_init_set_str(r60543582, "8.0", 10, MPFR_RNDN);
        mpfr_init(r60543583);
        mpfr_init(r60543584);
        mpfr_init(r60543585);
        mpfr_init(r60543586);
        mpfr_init(r60543587);
        mpfr_init(r60543588);
}

double f_dm(double x) {
        ;
        mpfr_exp(r60543579, r60543578, MPFR_RNDN);
        mpfr_set_d(r60543580, x, MPFR_RNDN);
        mpfr_pow(r60543581, r60543579, r60543580, MPFR_RNDN);
        ;
        mpfr_exp(r60543583, r60543582, MPFR_RNDN);
        mpfr_pow(r60543584, r60543583, r60543580, MPFR_RNDN);
        mpfr_pow(r60543585, r60543584, r60543580, MPFR_RNDN);
        mpfr_pow(r60543586, r60543585, r60543580, MPFR_RNDN);
        mpfr_mul(r60543587, r60543581, r60543586, MPFR_RNDN);
        mpfr_log(r60543588, r60543587, MPFR_RNDN);
        return mpfr_get_d(r60543588, MPFR_RNDN);
}

