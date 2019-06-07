#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6863380 = 1.0;
        float r6863381 = x;
        float r6863382 = r6863380 * r6863381;
        return r6863382;
}

double f_id(double x) {
        double r6863383 = 1.0;
        double r6863384 = x;
        double r6863385 = r6863383 * r6863384;
        return r6863385;
}


double f_of(float x) {
        float r6863386 = 1.0;
        float r6863387 = x;
        float r6863388 = r6863386 * r6863387;
        return r6863388;
}

double f_od(double x) {
        double r6863389 = 1.0;
        double r6863390 = x;
        double r6863391 = r6863389 * r6863390;
        return r6863391;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6863392, r6863393, r6863394;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863392, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6863393);
        mpfr_init(r6863394);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6863393, x, MPFR_RNDN);
        mpfr_mul(r6863394, r6863392, r6863393, MPFR_RNDN);
        return mpfr_get_d(r6863394, MPFR_RNDN);
}

static mpfr_t r6863395, r6863396, r6863397;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863395, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6863396);
        mpfr_init(r6863397);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6863396, x, MPFR_RNDN);
        mpfr_mul(r6863397, r6863395, r6863396, MPFR_RNDN);
        return mpfr_get_d(r6863397, MPFR_RNDN);
}

static mpfr_t r6863398, r6863399, r6863400;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863398, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6863399);
        mpfr_init(r6863400);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6863399, x, MPFR_RNDN);
        mpfr_mul(r6863400, r6863398, r6863399, MPFR_RNDN);
        return mpfr_get_d(r6863400, MPFR_RNDN);
}

