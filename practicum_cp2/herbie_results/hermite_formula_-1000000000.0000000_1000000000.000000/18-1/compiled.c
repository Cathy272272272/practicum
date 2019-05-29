#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7033380 = 2.0;
        float r7033381 = x;
        float r7033382 = r7033380 * r7033381;
        return r7033382;
}

double f_id(double x) {
        double r7033383 = 2.0;
        double r7033384 = x;
        double r7033385 = r7033383 * r7033384;
        return r7033385;
}


double f_of(float x) {
        float r7033386 = 2.0;
        float r7033387 = x;
        float r7033388 = r7033386 * r7033387;
        return r7033388;
}

double f_od(double x) {
        double r7033389 = 2.0;
        double r7033390 = x;
        double r7033391 = r7033389 * r7033390;
        return r7033391;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7033392, r7033393, r7033394;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7033392, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7033393);
        mpfr_init(r7033394);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7033393, x, MPFR_RNDN);
        mpfr_mul(r7033394, r7033392, r7033393, MPFR_RNDN);
        return mpfr_get_d(r7033394, MPFR_RNDN);
}

static mpfr_t r7033395, r7033396, r7033397;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7033395, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7033396);
        mpfr_init(r7033397);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7033396, x, MPFR_RNDN);
        mpfr_mul(r7033397, r7033395, r7033396, MPFR_RNDN);
        return mpfr_get_d(r7033397, MPFR_RNDN);
}

static mpfr_t r7033398, r7033399, r7033400;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7033398, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7033399);
        mpfr_init(r7033400);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7033399, x, MPFR_RNDN);
        mpfr_mul(r7033400, r7033398, r7033399, MPFR_RNDN);
        return mpfr_get_d(r7033400, MPFR_RNDN);
}

