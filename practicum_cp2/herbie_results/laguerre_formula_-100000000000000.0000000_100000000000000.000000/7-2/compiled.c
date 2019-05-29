#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r8830508 = 1.0;
        float r8830509 = -2.0;
        float r8830510 = x;
        float r8830511 = r8830509 * r8830510;
        float r8830512 = r8830508 + r8830511;
        float r8830513 = 0.5;
        float r8830514 = r8830510 * r8830510;
        float r8830515 = r8830513 * r8830514;
        float r8830516 = r8830512 + r8830515;
        return r8830516;
}

double f_id(double x) {
        double r8830517 = 1.0;
        double r8830518 = -2.0;
        double r8830519 = x;
        double r8830520 = r8830518 * r8830519;
        double r8830521 = r8830517 + r8830520;
        double r8830522 = 0.5;
        double r8830523 = r8830519 * r8830519;
        double r8830524 = r8830522 * r8830523;
        double r8830525 = r8830521 + r8830524;
        return r8830525;
}


double f_of(float x) {
        float r8830526 = 1.0;
        float r8830527 = -2.0;
        float r8830528 = 0.5;
        float r8830529 = x;
        float r8830530 = r8830528 * r8830529;
        float r8830531 = r8830527 + r8830530;
        float r8830532 = r8830531 * r8830529;
        float r8830533 = r8830526 + r8830532;
        return r8830533;
}

double f_od(double x) {
        double r8830534 = 1.0;
        double r8830535 = -2.0;
        double r8830536 = 0.5;
        double r8830537 = x;
        double r8830538 = r8830536 * r8830537;
        double r8830539 = r8830535 + r8830538;
        double r8830540 = r8830539 * r8830537;
        double r8830541 = r8830534 + r8830540;
        return r8830541;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8830542, r8830543, r8830544, r8830545, r8830546, r8830547, r8830548, r8830549, r8830550;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8830542, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830543, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r8830544);
        mpfr_init(r8830545);
        mpfr_init(r8830546);
        mpfr_init_set_str(r8830547, "0.5", 10, MPFR_RNDN);
        mpfr_init(r8830548);
        mpfr_init(r8830549);
        mpfr_init(r8830550);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8830544, x, MPFR_RNDN);
        mpfr_mul(r8830545, r8830543, r8830544, MPFR_RNDN);
        mpfr_add(r8830546, r8830542, r8830545, MPFR_RNDN);
        ;
        mpfr_mul(r8830548, r8830544, r8830544, MPFR_RNDN);
        mpfr_mul(r8830549, r8830547, r8830548, MPFR_RNDN);
        mpfr_add(r8830550, r8830546, r8830549, MPFR_RNDN);
        return mpfr_get_d(r8830550, MPFR_RNDN);
}

static mpfr_t r8830551, r8830552, r8830553, r8830554, r8830555, r8830556, r8830557, r8830558;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8830551, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830552, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830553, "0.5", 10, MPFR_RNDN);
        mpfr_init(r8830554);
        mpfr_init(r8830555);
        mpfr_init(r8830556);
        mpfr_init(r8830557);
        mpfr_init(r8830558);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r8830554, x, MPFR_RNDN);
        mpfr_mul(r8830555, r8830553, r8830554, MPFR_RNDN);
        mpfr_add(r8830556, r8830552, r8830555, MPFR_RNDN);
        mpfr_mul(r8830557, r8830556, r8830554, MPFR_RNDN);
        mpfr_add(r8830558, r8830551, r8830557, MPFR_RNDN);
        return mpfr_get_d(r8830558, MPFR_RNDN);
}

static mpfr_t r8830559, r8830560, r8830561, r8830562, r8830563, r8830564, r8830565, r8830566;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8830559, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830560, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830561, "0.5", 10, MPFR_RNDN);
        mpfr_init(r8830562);
        mpfr_init(r8830563);
        mpfr_init(r8830564);
        mpfr_init(r8830565);
        mpfr_init(r8830566);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r8830562, x, MPFR_RNDN);
        mpfr_mul(r8830563, r8830561, r8830562, MPFR_RNDN);
        mpfr_add(r8830564, r8830560, r8830563, MPFR_RNDN);
        mpfr_mul(r8830565, r8830564, r8830562, MPFR_RNDN);
        mpfr_add(r8830566, r8830559, r8830565, MPFR_RNDN);
        return mpfr_get_d(r8830566, MPFR_RNDN);
}

