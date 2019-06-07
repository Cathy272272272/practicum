#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r4439101 = 1.0;
        return r4439101;
}

double f_id(double __attribute__((unused)) x) {
        double r4439102 = 1.0;
        return r4439102;
}


double f_of(float __attribute__((unused)) x) {
        float r4439103 = 1.0;
        return r4439103;
}

double f_od(double __attribute__((unused)) x) {
        double r4439104 = 1.0;
        return r4439104;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4439105;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4439105, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4439105, MPFR_RNDN);
}

static mpfr_t r4439106;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4439106, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4439106, MPFR_RNDN);
}

static mpfr_t r4439107;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4439107, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r4439107, MPFR_RNDN);
}

