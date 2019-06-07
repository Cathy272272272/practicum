#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r3817274 = -12.0;
        float r3817275 = x;
        float r3817276 = r3817274 * r3817275;
        float r3817277 = 8.0;
        float r3817278 = r3817275 * r3817275;
        float r3817279 = r3817278 * r3817275;
        float r3817280 = r3817277 * r3817279;
        float r3817281 = r3817276 + r3817280;
        return r3817281;
}

double f_id(double x) {
        double r3817282 = -12.0;
        double r3817283 = x;
        double r3817284 = r3817282 * r3817283;
        double r3817285 = 8.0;
        double r3817286 = r3817283 * r3817283;
        double r3817287 = r3817286 * r3817283;
        double r3817288 = r3817285 * r3817287;
        double r3817289 = r3817284 + r3817288;
        return r3817289;
}


double f_of(float x) {
        float r3817290 = -12.0;
        float r3817291 = x;
        float r3817292 = r3817290 * r3817291;
        float r3817293 = 8.0;
        float r3817294 = r3817291 * r3817291;
        float r3817295 = r3817294 * r3817291;
        float r3817296 = r3817293 * r3817295;
        float r3817297 = r3817292 + r3817296;
        return r3817297;
}

double f_od(double x) {
        double r3817298 = -12.0;
        double r3817299 = x;
        double r3817300 = r3817298 * r3817299;
        double r3817301 = 8.0;
        double r3817302 = r3817299 * r3817299;
        double r3817303 = r3817302 * r3817299;
        double r3817304 = r3817301 * r3817303;
        double r3817305 = r3817300 + r3817304;
        return r3817305;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3817306, r3817307, r3817308, r3817309, r3817310, r3817311, r3817312, r3817313;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r3817306, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3817307);
        mpfr_init(r3817308);
        mpfr_init_set_str(r3817309, "8.0", 10, MPFR_RNDN);
        mpfr_init(r3817310);
        mpfr_init(r3817311);
        mpfr_init(r3817312);
        mpfr_init(r3817313);
}

double f_im(double x) {
        ;
        mpfr_set_d(r3817307, x, MPFR_RNDN);
        mpfr_mul(r3817308, r3817306, r3817307, MPFR_RNDN);
        ;
        mpfr_mul(r3817310, r3817307, r3817307, MPFR_RNDN);
        mpfr_mul(r3817311, r3817310, r3817307, MPFR_RNDN);
        mpfr_mul(r3817312, r3817309, r3817311, MPFR_RNDN);
        mpfr_add(r3817313, r3817308, r3817312, MPFR_RNDN);
        return mpfr_get_d(r3817313, MPFR_RNDN);
}

static mpfr_t r3817314, r3817315, r3817316, r3817317, r3817318, r3817319, r3817320, r3817321;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r3817314, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3817315);
        mpfr_init(r3817316);
        mpfr_init_set_str(r3817317, "8.0", 10, MPFR_RNDN);
        mpfr_init(r3817318);
        mpfr_init(r3817319);
        mpfr_init(r3817320);
        mpfr_init(r3817321);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r3817315, x, MPFR_RNDN);
        mpfr_mul(r3817316, r3817314, r3817315, MPFR_RNDN);
        ;
        mpfr_mul(r3817318, r3817315, r3817315, MPFR_RNDN);
        mpfr_mul(r3817319, r3817318, r3817315, MPFR_RNDN);
        mpfr_mul(r3817320, r3817317, r3817319, MPFR_RNDN);
        mpfr_add(r3817321, r3817316, r3817320, MPFR_RNDN);
        return mpfr_get_d(r3817321, MPFR_RNDN);
}

static mpfr_t r3817322, r3817323, r3817324, r3817325, r3817326, r3817327, r3817328, r3817329;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r3817322, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3817323);
        mpfr_init(r3817324);
        mpfr_init_set_str(r3817325, "8.0", 10, MPFR_RNDN);
        mpfr_init(r3817326);
        mpfr_init(r3817327);
        mpfr_init(r3817328);
        mpfr_init(r3817329);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r3817323, x, MPFR_RNDN);
        mpfr_mul(r3817324, r3817322, r3817323, MPFR_RNDN);
        ;
        mpfr_mul(r3817326, r3817323, r3817323, MPFR_RNDN);
        mpfr_mul(r3817327, r3817326, r3817323, MPFR_RNDN);
        mpfr_mul(r3817328, r3817325, r3817327, MPFR_RNDN);
        mpfr_add(r3817329, r3817324, r3817328, MPFR_RNDN);
        return mpfr_get_d(r3817329, MPFR_RNDN);
}

