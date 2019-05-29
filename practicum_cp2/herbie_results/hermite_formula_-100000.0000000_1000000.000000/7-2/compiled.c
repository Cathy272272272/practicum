#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7639492 = -2.0;
        float r7639493 = 4.0;
        float r7639494 = x;
        float r7639495 = r7639494 * r7639494;
        float r7639496 = r7639493 * r7639495;
        float r7639497 = r7639492 + r7639496;
        return r7639497;
}

double f_id(double x) {
        double r7639498 = -2.0;
        double r7639499 = 4.0;
        double r7639500 = x;
        double r7639501 = r7639500 * r7639500;
        double r7639502 = r7639499 * r7639501;
        double r7639503 = r7639498 + r7639502;
        return r7639503;
}


double f_of(float x) {
        float r7639504 = -2.0;
        float r7639505 = 4.0;
        float r7639506 = x;
        float r7639507 = r7639506 * r7639506;
        float r7639508 = r7639505 * r7639507;
        float r7639509 = r7639504 + r7639508;
        return r7639509;
}

double f_od(double x) {
        double r7639510 = -2.0;
        double r7639511 = 4.0;
        double r7639512 = x;
        double r7639513 = r7639512 * r7639512;
        double r7639514 = r7639511 * r7639513;
        double r7639515 = r7639510 + r7639514;
        return r7639515;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7639516, r7639517, r7639518, r7639519, r7639520, r7639521;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7639516, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639517, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7639518);
        mpfr_init(r7639519);
        mpfr_init(r7639520);
        mpfr_init(r7639521);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7639518, x, MPFR_RNDN);
        mpfr_mul(r7639519, r7639518, r7639518, MPFR_RNDN);
        mpfr_mul(r7639520, r7639517, r7639519, MPFR_RNDN);
        mpfr_add(r7639521, r7639516, r7639520, MPFR_RNDN);
        return mpfr_get_d(r7639521, MPFR_RNDN);
}

static mpfr_t r7639522, r7639523, r7639524, r7639525, r7639526, r7639527;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7639522, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639523, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7639524);
        mpfr_init(r7639525);
        mpfr_init(r7639526);
        mpfr_init(r7639527);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7639524, x, MPFR_RNDN);
        mpfr_mul(r7639525, r7639524, r7639524, MPFR_RNDN);
        mpfr_mul(r7639526, r7639523, r7639525, MPFR_RNDN);
        mpfr_add(r7639527, r7639522, r7639526, MPFR_RNDN);
        return mpfr_get_d(r7639527, MPFR_RNDN);
}

static mpfr_t r7639528, r7639529, r7639530, r7639531, r7639532, r7639533;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7639528, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639529, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7639530);
        mpfr_init(r7639531);
        mpfr_init(r7639532);
        mpfr_init(r7639533);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7639530, x, MPFR_RNDN);
        mpfr_mul(r7639531, r7639530, r7639530, MPFR_RNDN);
        mpfr_mul(r7639532, r7639529, r7639531, MPFR_RNDN);
        mpfr_add(r7639533, r7639528, r7639532, MPFR_RNDN);
        return mpfr_get_d(r7639533, MPFR_RNDN);
}

