#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6179319 = 1.0;
        float r6179320 = x;
        float r6179321 = r6179319 * r6179320;
        return r6179321;
}

double f_id(double x) {
        double r6179322 = 1.0;
        double r6179323 = x;
        double r6179324 = r6179322 * r6179323;
        return r6179324;
}


double f_of(float x) {
        float r6179325 = 1.0;
        float r6179326 = x;
        float r6179327 = r6179325 * r6179326;
        return r6179327;
}

double f_od(double x) {
        double r6179328 = 1.0;
        double r6179329 = x;
        double r6179330 = r6179328 * r6179329;
        return r6179330;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179331, r6179332, r6179333;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179331, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6179332);
        mpfr_init(r6179333);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6179332, x, MPFR_RNDN);
        mpfr_mul(r6179333, r6179331, r6179332, MPFR_RNDN);
        return mpfr_get_d(r6179333, MPFR_RNDN);
}

static mpfr_t r6179334, r6179335, r6179336;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179334, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6179335);
        mpfr_init(r6179336);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6179335, x, MPFR_RNDN);
        mpfr_mul(r6179336, r6179334, r6179335, MPFR_RNDN);
        return mpfr_get_d(r6179336, MPFR_RNDN);
}

static mpfr_t r6179337, r6179338, r6179339;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179337, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6179338);
        mpfr_init(r6179339);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6179338, x, MPFR_RNDN);
        mpfr_mul(r6179339, r6179337, r6179338, MPFR_RNDN);
        return mpfr_get_d(r6179339, MPFR_RNDN);
}

