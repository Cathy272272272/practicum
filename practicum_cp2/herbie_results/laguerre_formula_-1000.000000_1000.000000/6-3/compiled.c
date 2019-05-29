#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6513506 = 1.0;
        float r6513507 = -3.0;
        float r6513508 = x;
        float r6513509 = r6513507 * r6513508;
        float r6513510 = r6513506 + r6513509;
        float r6513511 = 1.5;
        float r6513512 = r6513508 * r6513508;
        float r6513513 = r6513511 * r6513512;
        float r6513514 = r6513510 + r6513513;
        float r6513515 = -0.166667;
        float r6513516 = r6513512 * r6513508;
        float r6513517 = r6513515 * r6513516;
        float r6513518 = r6513514 + r6513517;
        return r6513518;
}

double f_id(double x) {
        double r6513519 = 1.0;
        double r6513520 = -3.0;
        double r6513521 = x;
        double r6513522 = r6513520 * r6513521;
        double r6513523 = r6513519 + r6513522;
        double r6513524 = 1.5;
        double r6513525 = r6513521 * r6513521;
        double r6513526 = r6513524 * r6513525;
        double r6513527 = r6513523 + r6513526;
        double r6513528 = -0.166667;
        double r6513529 = r6513525 * r6513521;
        double r6513530 = r6513528 * r6513529;
        double r6513531 = r6513527 + r6513530;
        return r6513531;
}


double f_of(float x) {
        float r6513532 = 1.0;
        float r6513533 = -3.0;
        float r6513534 = 1.5;
        float r6513535 = x;
        float r6513536 = r6513534 * r6513535;
        float r6513537 = r6513533 + r6513536;
        float r6513538 = r6513537 * r6513535;
        float r6513539 = r6513532 + r6513538;
        float r6513540 = -0.166667;
        float r6513541 = r6513535 * r6513535;
        float r6513542 = r6513541 * r6513535;
        float r6513543 = r6513540 * r6513542;
        float r6513544 = r6513539 + r6513543;
        return r6513544;
}

double f_od(double x) {
        double r6513545 = 1.0;
        double r6513546 = -3.0;
        double r6513547 = 1.5;
        double r6513548 = x;
        double r6513549 = r6513547 * r6513548;
        double r6513550 = r6513546 + r6513549;
        double r6513551 = r6513550 * r6513548;
        double r6513552 = r6513545 + r6513551;
        double r6513553 = -0.166667;
        double r6513554 = r6513548 * r6513548;
        double r6513555 = r6513554 * r6513548;
        double r6513556 = r6513553 * r6513555;
        double r6513557 = r6513552 + r6513556;
        return r6513557;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6513558, r6513559, r6513560, r6513561, r6513562, r6513563, r6513564, r6513565, r6513566, r6513567, r6513568, r6513569, r6513570;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6513558, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513559, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r6513560);
        mpfr_init(r6513561);
        mpfr_init(r6513562);
        mpfr_init_set_str(r6513563, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6513564);
        mpfr_init(r6513565);
        mpfr_init(r6513566);
        mpfr_init_set_str(r6513567, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r6513568);
        mpfr_init(r6513569);
        mpfr_init(r6513570);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6513560, x, MPFR_RNDN);
        mpfr_mul(r6513561, r6513559, r6513560, MPFR_RNDN);
        mpfr_add(r6513562, r6513558, r6513561, MPFR_RNDN);
        ;
        mpfr_mul(r6513564, r6513560, r6513560, MPFR_RNDN);
        mpfr_mul(r6513565, r6513563, r6513564, MPFR_RNDN);
        mpfr_add(r6513566, r6513562, r6513565, MPFR_RNDN);
        ;
        mpfr_mul(r6513568, r6513564, r6513560, MPFR_RNDN);
        mpfr_mul(r6513569, r6513567, r6513568, MPFR_RNDN);
        mpfr_add(r6513570, r6513566, r6513569, MPFR_RNDN);
        return mpfr_get_d(r6513570, MPFR_RNDN);
}

static mpfr_t r6513571, r6513572, r6513573, r6513574, r6513575, r6513576, r6513577, r6513578, r6513579, r6513580, r6513581, r6513582, r6513583;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6513571, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513572, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513573, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6513574);
        mpfr_init(r6513575);
        mpfr_init(r6513576);
        mpfr_init(r6513577);
        mpfr_init(r6513578);
        mpfr_init_set_str(r6513579, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r6513580);
        mpfr_init(r6513581);
        mpfr_init(r6513582);
        mpfr_init(r6513583);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r6513574, x, MPFR_RNDN);
        mpfr_mul(r6513575, r6513573, r6513574, MPFR_RNDN);
        mpfr_add(r6513576, r6513572, r6513575, MPFR_RNDN);
        mpfr_mul(r6513577, r6513576, r6513574, MPFR_RNDN);
        mpfr_add(r6513578, r6513571, r6513577, MPFR_RNDN);
        ;
        mpfr_mul(r6513580, r6513574, r6513574, MPFR_RNDN);
        mpfr_mul(r6513581, r6513580, r6513574, MPFR_RNDN);
        mpfr_mul(r6513582, r6513579, r6513581, MPFR_RNDN);
        mpfr_add(r6513583, r6513578, r6513582, MPFR_RNDN);
        return mpfr_get_d(r6513583, MPFR_RNDN);
}

static mpfr_t r6513584, r6513585, r6513586, r6513587, r6513588, r6513589, r6513590, r6513591, r6513592, r6513593, r6513594, r6513595, r6513596;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6513584, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513585, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513586, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6513587);
        mpfr_init(r6513588);
        mpfr_init(r6513589);
        mpfr_init(r6513590);
        mpfr_init(r6513591);
        mpfr_init_set_str(r6513592, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r6513593);
        mpfr_init(r6513594);
        mpfr_init(r6513595);
        mpfr_init(r6513596);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r6513587, x, MPFR_RNDN);
        mpfr_mul(r6513588, r6513586, r6513587, MPFR_RNDN);
        mpfr_add(r6513589, r6513585, r6513588, MPFR_RNDN);
        mpfr_mul(r6513590, r6513589, r6513587, MPFR_RNDN);
        mpfr_add(r6513591, r6513584, r6513590, MPFR_RNDN);
        ;
        mpfr_mul(r6513593, r6513587, r6513587, MPFR_RNDN);
        mpfr_mul(r6513594, r6513593, r6513587, MPFR_RNDN);
        mpfr_mul(r6513595, r6513592, r6513594, MPFR_RNDN);
        mpfr_add(r6513596, r6513591, r6513595, MPFR_RNDN);
        return mpfr_get_d(r6513596, MPFR_RNDN);
}

