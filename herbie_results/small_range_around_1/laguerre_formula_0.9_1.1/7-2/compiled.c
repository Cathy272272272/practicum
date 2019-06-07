#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r98658529 = 1.0;
        float r98658530 = -2.0;
        float r98658531 = x;
        float r98658532 = r98658530 * r98658531;
        float r98658533 = r98658529 + r98658532;
        float r98658534 = 0.5;
        float r98658535 = r98658531 * r98658531;
        float r98658536 = r98658534 * r98658535;
        float r98658537 = r98658533 + r98658536;
        return r98658537;
}

double f_id(double x) {
        double r98658538 = 1.0;
        double r98658539 = -2.0;
        double r98658540 = x;
        double r98658541 = r98658539 * r98658540;
        double r98658542 = r98658538 + r98658541;
        double r98658543 = 0.5;
        double r98658544 = r98658540 * r98658540;
        double r98658545 = r98658543 * r98658544;
        double r98658546 = r98658542 + r98658545;
        return r98658546;
}


double f_of(float x) {
        float r98658547 = 1.0;
        float r98658548 = -2.0;
        float r98658549 = x;
        float r98658550 = r98658548 * r98658549;
        float r98658551 = r98658547 + r98658550;
        float r98658552 = 0.5;
        float r98658553 = r98658549 * r98658549;
        float r98658554 = r98658552 * r98658553;
        float r98658555 = r98658551 + r98658554;
        return r98658555;
}

double f_od(double x) {
        double r98658556 = 1.0;
        double r98658557 = -2.0;
        double r98658558 = x;
        double r98658559 = r98658557 * r98658558;
        double r98658560 = r98658556 + r98658559;
        double r98658561 = 0.5;
        double r98658562 = r98658558 * r98658558;
        double r98658563 = r98658561 * r98658562;
        double r98658564 = r98658560 + r98658563;
        return r98658564;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r98658565, r98658566, r98658567, r98658568, r98658569, r98658570, r98658571, r98658572, r98658573;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658565, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658566, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r98658567);
        mpfr_init(r98658568);
        mpfr_init(r98658569);
        mpfr_init_set_str(r98658570, "0.5", 10, MPFR_RNDN);
        mpfr_init(r98658571);
        mpfr_init(r98658572);
        mpfr_init(r98658573);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r98658567, x, MPFR_RNDN);
        mpfr_mul(r98658568, r98658566, r98658567, MPFR_RNDN);
        mpfr_add(r98658569, r98658565, r98658568, MPFR_RNDN);
        ;
        mpfr_mul(r98658571, r98658567, r98658567, MPFR_RNDN);
        mpfr_mul(r98658572, r98658570, r98658571, MPFR_RNDN);
        mpfr_add(r98658573, r98658569, r98658572, MPFR_RNDN);
        return mpfr_get_d(r98658573, MPFR_RNDN);
}

static mpfr_t r98658574, r98658575, r98658576, r98658577, r98658578, r98658579, r98658580, r98658581, r98658582;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658574, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658575, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r98658576);
        mpfr_init(r98658577);
        mpfr_init(r98658578);
        mpfr_init_set_str(r98658579, "0.5", 10, MPFR_RNDN);
        mpfr_init(r98658580);
        mpfr_init(r98658581);
        mpfr_init(r98658582);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r98658576, x, MPFR_RNDN);
        mpfr_mul(r98658577, r98658575, r98658576, MPFR_RNDN);
        mpfr_add(r98658578, r98658574, r98658577, MPFR_RNDN);
        ;
        mpfr_mul(r98658580, r98658576, r98658576, MPFR_RNDN);
        mpfr_mul(r98658581, r98658579, r98658580, MPFR_RNDN);
        mpfr_add(r98658582, r98658578, r98658581, MPFR_RNDN);
        return mpfr_get_d(r98658582, MPFR_RNDN);
}

static mpfr_t r98658583, r98658584, r98658585, r98658586, r98658587, r98658588, r98658589, r98658590, r98658591;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658583, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658584, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r98658585);
        mpfr_init(r98658586);
        mpfr_init(r98658587);
        mpfr_init_set_str(r98658588, "0.5", 10, MPFR_RNDN);
        mpfr_init(r98658589);
        mpfr_init(r98658590);
        mpfr_init(r98658591);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r98658585, x, MPFR_RNDN);
        mpfr_mul(r98658586, r98658584, r98658585, MPFR_RNDN);
        mpfr_add(r98658587, r98658583, r98658586, MPFR_RNDN);
        ;
        mpfr_mul(r98658589, r98658585, r98658585, MPFR_RNDN);
        mpfr_mul(r98658590, r98658588, r98658589, MPFR_RNDN);
        mpfr_add(r98658591, r98658587, r98658590, MPFR_RNDN);
        return mpfr_get_d(r98658591, MPFR_RNDN);
}

