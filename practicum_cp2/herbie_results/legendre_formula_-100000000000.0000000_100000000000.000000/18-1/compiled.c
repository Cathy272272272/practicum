#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6767533 = 1.0;
        float r6767534 = x;
        float r6767535 = r6767533 * r6767534;
        return r6767535;
}

double f_id(double x) {
        double r6767536 = 1.0;
        double r6767537 = x;
        double r6767538 = r6767536 * r6767537;
        return r6767538;
}


double f_of(float x) {
        float r6767539 = 1.0;
        float r6767540 = x;
        float r6767541 = r6767539 * r6767540;
        return r6767541;
}

double f_od(double x) {
        double r6767542 = 1.0;
        double r6767543 = x;
        double r6767544 = r6767542 * r6767543;
        return r6767544;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6767545, r6767546, r6767547;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6767545, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6767546);
        mpfr_init(r6767547);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6767546, x, MPFR_RNDN);
        mpfr_mul(r6767547, r6767545, r6767546, MPFR_RNDN);
        return mpfr_get_d(r6767547, MPFR_RNDN);
}

static mpfr_t r6767548, r6767549, r6767550;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6767548, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6767549);
        mpfr_init(r6767550);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6767549, x, MPFR_RNDN);
        mpfr_mul(r6767550, r6767548, r6767549, MPFR_RNDN);
        return mpfr_get_d(r6767550, MPFR_RNDN);
}

static mpfr_t r6767551, r6767552, r6767553;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6767551, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6767552);
        mpfr_init(r6767553);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6767552, x, MPFR_RNDN);
        mpfr_mul(r6767553, r6767551, r6767552, MPFR_RNDN);
        return mpfr_get_d(r6767553, MPFR_RNDN);
}

