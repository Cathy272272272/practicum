#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r4439080 = 1.0;
        float r4439081 = x;
        float r4439082 = r4439080 * r4439081;
        return r4439082;
}

double f_id(double x) {
        double r4439083 = 1.0;
        double r4439084 = x;
        double r4439085 = r4439083 * r4439084;
        return r4439085;
}


double f_of(float x) {
        float r4439086 = 1.0;
        float r4439087 = x;
        float r4439088 = r4439086 * r4439087;
        return r4439088;
}

double f_od(double x) {
        double r4439089 = 1.0;
        double r4439090 = x;
        double r4439091 = r4439089 * r4439090;
        return r4439091;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4439092, r4439093, r4439094;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4439092, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4439093);
        mpfr_init(r4439094);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4439093, x, MPFR_RNDN);
        mpfr_mul(r4439094, r4439092, r4439093, MPFR_RNDN);
        return mpfr_get_d(r4439094, MPFR_RNDN);
}

static mpfr_t r4439095, r4439096, r4439097;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4439095, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4439096);
        mpfr_init(r4439097);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4439096, x, MPFR_RNDN);
        mpfr_mul(r4439097, r4439095, r4439096, MPFR_RNDN);
        return mpfr_get_d(r4439097, MPFR_RNDN);
}

static mpfr_t r4439098, r4439099, r4439100;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4439098, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4439099);
        mpfr_init(r4439100);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4439099, x, MPFR_RNDN);
        mpfr_mul(r4439100, r4439098, r4439099, MPFR_RNDN);
        return mpfr_get_d(r4439100, MPFR_RNDN);
}

