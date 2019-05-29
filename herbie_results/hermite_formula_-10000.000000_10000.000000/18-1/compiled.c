#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r11629259 = 2.0;
        float r11629260 = x;
        float r11629261 = r11629259 * r11629260;
        return r11629261;
}

double f_id(double x) {
        double r11629262 = 2.0;
        double r11629263 = x;
        double r11629264 = r11629262 * r11629263;
        return r11629264;
}


double f_of(float x) {
        float r11629265 = 2.0;
        float r11629266 = x;
        float r11629267 = r11629265 * r11629266;
        return r11629267;
}

double f_od(double x) {
        double r11629268 = 2.0;
        double r11629269 = x;
        double r11629270 = r11629268 * r11629269;
        return r11629270;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11629271, r11629272, r11629273;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11629271, "2.0", 10, MPFR_RNDN);
        mpfr_init(r11629272);
        mpfr_init(r11629273);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11629272, x, MPFR_RNDN);
        mpfr_mul(r11629273, r11629271, r11629272, MPFR_RNDN);
        return mpfr_get_d(r11629273, MPFR_RNDN);
}

static mpfr_t r11629274, r11629275, r11629276;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11629274, "2.0", 10, MPFR_RNDN);
        mpfr_init(r11629275);
        mpfr_init(r11629276);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11629275, x, MPFR_RNDN);
        mpfr_mul(r11629276, r11629274, r11629275, MPFR_RNDN);
        return mpfr_get_d(r11629276, MPFR_RNDN);
}

static mpfr_t r11629277, r11629278, r11629279;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11629277, "2.0", 10, MPFR_RNDN);
        mpfr_init(r11629278);
        mpfr_init(r11629279);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11629278, x, MPFR_RNDN);
        mpfr_mul(r11629279, r11629277, r11629278, MPFR_RNDN);
        return mpfr_get_d(r11629279, MPFR_RNDN);
}

