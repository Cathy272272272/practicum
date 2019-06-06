#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r4599188 = -0.5;
        float r4599189 = 1.5;
        float r4599190 = x;
        float r4599191 = r4599190 * r4599190;
        float r4599192 = r4599189 * r4599191;
        float r4599193 = r4599188 + r4599192;
        return r4599193;
}

double f_id(double x) {
        double r4599194 = -0.5;
        double r4599195 = 1.5;
        double r4599196 = x;
        double r4599197 = r4599196 * r4599196;
        double r4599198 = r4599195 * r4599197;
        double r4599199 = r4599194 + r4599198;
        return r4599199;
}


double f_of(float x) {
        float r4599200 = -0.5;
        float r4599201 = 1.5;
        float r4599202 = x;
        float r4599203 = r4599202 * r4599202;
        float r4599204 = r4599201 * r4599203;
        float r4599205 = r4599200 + r4599204;
        return r4599205;
}

double f_od(double x) {
        double r4599206 = -0.5;
        double r4599207 = 1.5;
        double r4599208 = x;
        double r4599209 = r4599208 * r4599208;
        double r4599210 = r4599207 * r4599209;
        double r4599211 = r4599206 + r4599210;
        return r4599211;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4599212, r4599213, r4599214, r4599215, r4599216, r4599217;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4599212, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599213, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4599214);
        mpfr_init(r4599215);
        mpfr_init(r4599216);
        mpfr_init(r4599217);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4599214, x, MPFR_RNDN);
        mpfr_mul(r4599215, r4599214, r4599214, MPFR_RNDN);
        mpfr_mul(r4599216, r4599213, r4599215, MPFR_RNDN);
        mpfr_add(r4599217, r4599212, r4599216, MPFR_RNDN);
        return mpfr_get_d(r4599217, MPFR_RNDN);
}

static mpfr_t r4599218, r4599219, r4599220, r4599221, r4599222, r4599223;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4599218, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599219, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4599220);
        mpfr_init(r4599221);
        mpfr_init(r4599222);
        mpfr_init(r4599223);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4599220, x, MPFR_RNDN);
        mpfr_mul(r4599221, r4599220, r4599220, MPFR_RNDN);
        mpfr_mul(r4599222, r4599219, r4599221, MPFR_RNDN);
        mpfr_add(r4599223, r4599218, r4599222, MPFR_RNDN);
        return mpfr_get_d(r4599223, MPFR_RNDN);
}

static mpfr_t r4599224, r4599225, r4599226, r4599227, r4599228, r4599229;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4599224, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599225, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4599226);
        mpfr_init(r4599227);
        mpfr_init(r4599228);
        mpfr_init(r4599229);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4599226, x, MPFR_RNDN);
        mpfr_mul(r4599227, r4599226, r4599226, MPFR_RNDN);
        mpfr_mul(r4599228, r4599225, r4599227, MPFR_RNDN);
        mpfr_add(r4599229, r4599224, r4599228, MPFR_RNDN);
        return mpfr_get_d(r4599229, MPFR_RNDN);
}

