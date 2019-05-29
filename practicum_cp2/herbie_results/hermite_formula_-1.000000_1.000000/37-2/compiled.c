#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7996370 = -2.0;
        float r7996371 = 4.0;
        float r7996372 = x;
        float r7996373 = r7996372 * r7996372;
        float r7996374 = r7996371 * r7996373;
        float r7996375 = r7996370 + r7996374;
        return r7996375;
}

double f_id(double x) {
        double r7996376 = -2.0;
        double r7996377 = 4.0;
        double r7996378 = x;
        double r7996379 = r7996378 * r7996378;
        double r7996380 = r7996377 * r7996379;
        double r7996381 = r7996376 + r7996380;
        return r7996381;
}


double f_of(float x) {
        float r7996382 = -2.0;
        float r7996383 = 4.0;
        float r7996384 = x;
        float r7996385 = r7996384 * r7996384;
        float r7996386 = r7996383 * r7996385;
        float r7996387 = r7996382 + r7996386;
        return r7996387;
}

double f_od(double x) {
        double r7996388 = -2.0;
        double r7996389 = 4.0;
        double r7996390 = x;
        double r7996391 = r7996390 * r7996390;
        double r7996392 = r7996389 * r7996391;
        double r7996393 = r7996388 + r7996392;
        return r7996393;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7996394, r7996395, r7996396, r7996397, r7996398, r7996399;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7996394, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7996395, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7996396);
        mpfr_init(r7996397);
        mpfr_init(r7996398);
        mpfr_init(r7996399);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7996396, x, MPFR_RNDN);
        mpfr_mul(r7996397, r7996396, r7996396, MPFR_RNDN);
        mpfr_mul(r7996398, r7996395, r7996397, MPFR_RNDN);
        mpfr_add(r7996399, r7996394, r7996398, MPFR_RNDN);
        return mpfr_get_d(r7996399, MPFR_RNDN);
}

static mpfr_t r7996400, r7996401, r7996402, r7996403, r7996404, r7996405;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7996400, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7996401, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7996402);
        mpfr_init(r7996403);
        mpfr_init(r7996404);
        mpfr_init(r7996405);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7996402, x, MPFR_RNDN);
        mpfr_mul(r7996403, r7996402, r7996402, MPFR_RNDN);
        mpfr_mul(r7996404, r7996401, r7996403, MPFR_RNDN);
        mpfr_add(r7996405, r7996400, r7996404, MPFR_RNDN);
        return mpfr_get_d(r7996405, MPFR_RNDN);
}

static mpfr_t r7996406, r7996407, r7996408, r7996409, r7996410, r7996411;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7996406, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7996407, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7996408);
        mpfr_init(r7996409);
        mpfr_init(r7996410);
        mpfr_init(r7996411);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7996408, x, MPFR_RNDN);
        mpfr_mul(r7996409, r7996408, r7996408, MPFR_RNDN);
        mpfr_mul(r7996410, r7996407, r7996409, MPFR_RNDN);
        mpfr_add(r7996411, r7996406, r7996410, MPFR_RNDN);
        return mpfr_get_d(r7996411, MPFR_RNDN);
}

