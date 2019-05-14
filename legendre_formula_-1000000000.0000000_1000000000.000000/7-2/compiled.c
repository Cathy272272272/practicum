#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r5021274 = -0.5;
        float r5021275 = 1.5;
        float r5021276 = x;
        float r5021277 = r5021276 * r5021276;
        float r5021278 = r5021275 * r5021277;
        float r5021279 = r5021274 + r5021278;
        return r5021279;
}

double f_id(double x) {
        double r5021280 = -0.5;
        double r5021281 = 1.5;
        double r5021282 = x;
        double r5021283 = r5021282 * r5021282;
        double r5021284 = r5021281 * r5021283;
        double r5021285 = r5021280 + r5021284;
        return r5021285;
}


double f_of(float x) {
        float r5021286 = -0.5;
        float r5021287 = 1.5;
        float r5021288 = x;
        float r5021289 = r5021287 * r5021288;
        float r5021290 = r5021289 * r5021288;
        float r5021291 = r5021286 + r5021290;
        return r5021291;
}

double f_od(double x) {
        double r5021292 = -0.5;
        double r5021293 = 1.5;
        double r5021294 = x;
        double r5021295 = r5021293 * r5021294;
        double r5021296 = r5021295 * r5021294;
        double r5021297 = r5021292 + r5021296;
        return r5021297;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5021298, r5021299, r5021300, r5021301, r5021302, r5021303;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5021298, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021299, "1.5", 10, MPFR_RNDN);
        mpfr_init(r5021300);
        mpfr_init(r5021301);
        mpfr_init(r5021302);
        mpfr_init(r5021303);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5021300, x, MPFR_RNDN);
        mpfr_mul(r5021301, r5021300, r5021300, MPFR_RNDN);
        mpfr_mul(r5021302, r5021299, r5021301, MPFR_RNDN);
        mpfr_add(r5021303, r5021298, r5021302, MPFR_RNDN);
        return mpfr_get_d(r5021303, MPFR_RNDN);
}

static mpfr_t r5021304, r5021305, r5021306, r5021307, r5021308, r5021309;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5021304, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021305, "1.5", 10, MPFR_RNDN);
        mpfr_init(r5021306);
        mpfr_init(r5021307);
        mpfr_init(r5021308);
        mpfr_init(r5021309);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5021306, x, MPFR_RNDN);
        mpfr_mul(r5021307, r5021305, r5021306, MPFR_RNDN);
        mpfr_mul(r5021308, r5021307, r5021306, MPFR_RNDN);
        mpfr_add(r5021309, r5021304, r5021308, MPFR_RNDN);
        return mpfr_get_d(r5021309, MPFR_RNDN);
}

static mpfr_t r5021310, r5021311, r5021312, r5021313, r5021314, r5021315;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5021310, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021311, "1.5", 10, MPFR_RNDN);
        mpfr_init(r5021312);
        mpfr_init(r5021313);
        mpfr_init(r5021314);
        mpfr_init(r5021315);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5021312, x, MPFR_RNDN);
        mpfr_mul(r5021313, r5021311, r5021312, MPFR_RNDN);
        mpfr_mul(r5021314, r5021313, r5021312, MPFR_RNDN);
        mpfr_add(r5021315, r5021310, r5021314, MPFR_RNDN);
        return mpfr_get_d(r5021315, MPFR_RNDN);
}

