#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r8100229 = -1.5;
        float r8100230 = x;
        float r8100231 = r8100229 * r8100230;
        float r8100232 = 2.5;
        float r8100233 = r8100230 * r8100230;
        float r8100234 = r8100233 * r8100230;
        float r8100235 = r8100232 * r8100234;
        float r8100236 = r8100231 + r8100235;
        return r8100236;
}

double f_id(double x) {
        double r8100237 = -1.5;
        double r8100238 = x;
        double r8100239 = r8100237 * r8100238;
        double r8100240 = 2.5;
        double r8100241 = r8100238 * r8100238;
        double r8100242 = r8100241 * r8100238;
        double r8100243 = r8100240 * r8100242;
        double r8100244 = r8100239 + r8100243;
        return r8100244;
}


double f_of(float x) {
        float r8100245 = -1.5;
        float r8100246 = x;
        float r8100247 = r8100245 * r8100246;
        float r8100248 = 2.5;
        float r8100249 = r8100246 * r8100246;
        float r8100250 = r8100249 * r8100246;
        float r8100251 = r8100248 * r8100250;
        float r8100252 = r8100247 + r8100251;
        return r8100252;
}

double f_od(double x) {
        double r8100253 = -1.5;
        double r8100254 = x;
        double r8100255 = r8100253 * r8100254;
        double r8100256 = 2.5;
        double r8100257 = r8100254 * r8100254;
        double r8100258 = r8100257 * r8100254;
        double r8100259 = r8100256 * r8100258;
        double r8100260 = r8100255 + r8100259;
        return r8100260;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8100261, r8100262, r8100263, r8100264, r8100265, r8100266, r8100267, r8100268;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8100261, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8100262);
        mpfr_init(r8100263);
        mpfr_init_set_str(r8100264, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8100265);
        mpfr_init(r8100266);
        mpfr_init(r8100267);
        mpfr_init(r8100268);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8100262, x, MPFR_RNDN);
        mpfr_mul(r8100263, r8100261, r8100262, MPFR_RNDN);
        ;
        mpfr_mul(r8100265, r8100262, r8100262, MPFR_RNDN);
        mpfr_mul(r8100266, r8100265, r8100262, MPFR_RNDN);
        mpfr_mul(r8100267, r8100264, r8100266, MPFR_RNDN);
        mpfr_add(r8100268, r8100263, r8100267, MPFR_RNDN);
        return mpfr_get_d(r8100268, MPFR_RNDN);
}

static mpfr_t r8100269, r8100270, r8100271, r8100272, r8100273, r8100274, r8100275, r8100276;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8100269, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8100270);
        mpfr_init(r8100271);
        mpfr_init_set_str(r8100272, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8100273);
        mpfr_init(r8100274);
        mpfr_init(r8100275);
        mpfr_init(r8100276);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8100270, x, MPFR_RNDN);
        mpfr_mul(r8100271, r8100269, r8100270, MPFR_RNDN);
        ;
        mpfr_mul(r8100273, r8100270, r8100270, MPFR_RNDN);
        mpfr_mul(r8100274, r8100273, r8100270, MPFR_RNDN);
        mpfr_mul(r8100275, r8100272, r8100274, MPFR_RNDN);
        mpfr_add(r8100276, r8100271, r8100275, MPFR_RNDN);
        return mpfr_get_d(r8100276, MPFR_RNDN);
}

static mpfr_t r8100277, r8100278, r8100279, r8100280, r8100281, r8100282, r8100283, r8100284;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8100277, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8100278);
        mpfr_init(r8100279);
        mpfr_init_set_str(r8100280, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8100281);
        mpfr_init(r8100282);
        mpfr_init(r8100283);
        mpfr_init(r8100284);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8100278, x, MPFR_RNDN);
        mpfr_mul(r8100279, r8100277, r8100278, MPFR_RNDN);
        ;
        mpfr_mul(r8100281, r8100278, r8100278, MPFR_RNDN);
        mpfr_mul(r8100282, r8100281, r8100278, MPFR_RNDN);
        mpfr_mul(r8100283, r8100280, r8100282, MPFR_RNDN);
        mpfr_add(r8100284, r8100279, r8100283, MPFR_RNDN);
        return mpfr_get_d(r8100284, MPFR_RNDN);
}

