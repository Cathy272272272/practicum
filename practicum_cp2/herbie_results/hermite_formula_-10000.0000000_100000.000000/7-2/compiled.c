#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r4211257 = -2.0;
        float r4211258 = 4.0;
        float r4211259 = x;
        float r4211260 = r4211259 * r4211259;
        float r4211261 = r4211258 * r4211260;
        float r4211262 = r4211257 + r4211261;
        return r4211262;
}

double f_id(double x) {
        double r4211263 = -2.0;
        double r4211264 = 4.0;
        double r4211265 = x;
        double r4211266 = r4211265 * r4211265;
        double r4211267 = r4211264 * r4211266;
        double r4211268 = r4211263 + r4211267;
        return r4211268;
}


double f_of(float x) {
        float r4211269 = -2.0;
        float r4211270 = 4.0;
        float r4211271 = x;
        float r4211272 = r4211271 * r4211271;
        float r4211273 = r4211270 * r4211272;
        float r4211274 = r4211269 + r4211273;
        return r4211274;
}

double f_od(double x) {
        double r4211275 = -2.0;
        double r4211276 = 4.0;
        double r4211277 = x;
        double r4211278 = r4211277 * r4211277;
        double r4211279 = r4211276 * r4211278;
        double r4211280 = r4211275 + r4211279;
        return r4211280;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4211281, r4211282, r4211283, r4211284, r4211285, r4211286;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4211281, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211282, "4.0", 10, MPFR_RNDN);
        mpfr_init(r4211283);
        mpfr_init(r4211284);
        mpfr_init(r4211285);
        mpfr_init(r4211286);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4211283, x, MPFR_RNDN);
        mpfr_mul(r4211284, r4211283, r4211283, MPFR_RNDN);
        mpfr_mul(r4211285, r4211282, r4211284, MPFR_RNDN);
        mpfr_add(r4211286, r4211281, r4211285, MPFR_RNDN);
        return mpfr_get_d(r4211286, MPFR_RNDN);
}

static mpfr_t r4211287, r4211288, r4211289, r4211290, r4211291, r4211292;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4211287, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211288, "4.0", 10, MPFR_RNDN);
        mpfr_init(r4211289);
        mpfr_init(r4211290);
        mpfr_init(r4211291);
        mpfr_init(r4211292);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4211289, x, MPFR_RNDN);
        mpfr_mul(r4211290, r4211289, r4211289, MPFR_RNDN);
        mpfr_mul(r4211291, r4211288, r4211290, MPFR_RNDN);
        mpfr_add(r4211292, r4211287, r4211291, MPFR_RNDN);
        return mpfr_get_d(r4211292, MPFR_RNDN);
}

static mpfr_t r4211293, r4211294, r4211295, r4211296, r4211297, r4211298;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4211293, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211294, "4.0", 10, MPFR_RNDN);
        mpfr_init(r4211295);
        mpfr_init(r4211296);
        mpfr_init(r4211297);
        mpfr_init(r4211298);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4211295, x, MPFR_RNDN);
        mpfr_mul(r4211296, r4211295, r4211295, MPFR_RNDN);
        mpfr_mul(r4211297, r4211294, r4211296, MPFR_RNDN);
        mpfr_add(r4211298, r4211293, r4211297, MPFR_RNDN);
        return mpfr_get_d(r4211298, MPFR_RNDN);
}

