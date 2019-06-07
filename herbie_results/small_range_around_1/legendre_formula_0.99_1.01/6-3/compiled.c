#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r49140120 = -1.5;
        float r49140121 = x;
        float r49140122 = r49140120 * r49140121;
        float r49140123 = 2.5;
        float r49140124 = r49140121 * r49140121;
        float r49140125 = r49140124 * r49140121;
        float r49140126 = r49140123 * r49140125;
        float r49140127 = r49140122 + r49140126;
        return r49140127;
}

double f_id(double x) {
        double r49140128 = -1.5;
        double r49140129 = x;
        double r49140130 = r49140128 * r49140129;
        double r49140131 = 2.5;
        double r49140132 = r49140129 * r49140129;
        double r49140133 = r49140132 * r49140129;
        double r49140134 = r49140131 * r49140133;
        double r49140135 = r49140130 + r49140134;
        return r49140135;
}


double f_of(float x) {
        float r49140136 = x;
        float r49140137 = 2.5;
        float r49140138 = r49140136 * r49140136;
        float r49140139 = r49140137 * r49140138;
        float r49140140 = -1.5;
        float r49140141 = r49140139 + r49140140;
        float r49140142 = exp(r49140141);
        float r49140143 = log(r49140142);
        float r49140144 = r49140136 * r49140143;
        return r49140144;
}

double f_od(double x) {
        double r49140145 = x;
        double r49140146 = 2.5;
        double r49140147 = r49140145 * r49140145;
        double r49140148 = r49140146 * r49140147;
        double r49140149 = -1.5;
        double r49140150 = r49140148 + r49140149;
        double r49140151 = exp(r49140150);
        double r49140152 = log(r49140151);
        double r49140153 = r49140145 * r49140152;
        return r49140153;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49140154, r49140155, r49140156, r49140157, r49140158, r49140159, r49140160, r49140161;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49140154, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r49140155);
        mpfr_init(r49140156);
        mpfr_init_set_str(r49140157, "2.5", 10, MPFR_RNDN);
        mpfr_init(r49140158);
        mpfr_init(r49140159);
        mpfr_init(r49140160);
        mpfr_init(r49140161);
}

double f_im(double x) {
        ;
        mpfr_set_d(r49140155, x, MPFR_RNDN);
        mpfr_mul(r49140156, r49140154, r49140155, MPFR_RNDN);
        ;
        mpfr_mul(r49140158, r49140155, r49140155, MPFR_RNDN);
        mpfr_mul(r49140159, r49140158, r49140155, MPFR_RNDN);
        mpfr_mul(r49140160, r49140157, r49140159, MPFR_RNDN);
        mpfr_add(r49140161, r49140156, r49140160, MPFR_RNDN);
        return mpfr_get_d(r49140161, MPFR_RNDN);
}

static mpfr_t r49140162, r49140163, r49140164, r49140165, r49140166, r49140167, r49140168, r49140169, r49140170;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49140162);
        mpfr_init_set_str(r49140163, "2.5", 10, MPFR_RNDN);
        mpfr_init(r49140164);
        mpfr_init(r49140165);
        mpfr_init_set_str(r49140166, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r49140167);
        mpfr_init(r49140168);
        mpfr_init(r49140169);
        mpfr_init(r49140170);
}

double f_fm(double x) {
        mpfr_set_d(r49140162, x, MPFR_RNDN);
        ;
        mpfr_mul(r49140164, r49140162, r49140162, MPFR_RNDN);
        mpfr_mul(r49140165, r49140163, r49140164, MPFR_RNDN);
        ;
        mpfr_add(r49140167, r49140165, r49140166, MPFR_RNDN);
        mpfr_exp(r49140168, r49140167, MPFR_RNDN);
        mpfr_log(r49140169, r49140168, MPFR_RNDN);
        mpfr_mul(r49140170, r49140162, r49140169, MPFR_RNDN);
        return mpfr_get_d(r49140170, MPFR_RNDN);
}

static mpfr_t r49140171, r49140172, r49140173, r49140174, r49140175, r49140176, r49140177, r49140178, r49140179;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49140171);
        mpfr_init_set_str(r49140172, "2.5", 10, MPFR_RNDN);
        mpfr_init(r49140173);
        mpfr_init(r49140174);
        mpfr_init_set_str(r49140175, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r49140176);
        mpfr_init(r49140177);
        mpfr_init(r49140178);
        mpfr_init(r49140179);
}

double f_dm(double x) {
        mpfr_set_d(r49140171, x, MPFR_RNDN);
        ;
        mpfr_mul(r49140173, r49140171, r49140171, MPFR_RNDN);
        mpfr_mul(r49140174, r49140172, r49140173, MPFR_RNDN);
        ;
        mpfr_add(r49140176, r49140174, r49140175, MPFR_RNDN);
        mpfr_exp(r49140177, r49140176, MPFR_RNDN);
        mpfr_log(r49140178, r49140177, MPFR_RNDN);
        mpfr_mul(r49140179, r49140171, r49140178, MPFR_RNDN);
        return mpfr_get_d(r49140179, MPFR_RNDN);
}

