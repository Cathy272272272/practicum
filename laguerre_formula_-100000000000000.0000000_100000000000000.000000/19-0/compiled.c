#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r8833972 = 1.0;
        return r8833972;
}

double f_id(double __attribute__((unused)) x) {
        double r8833973 = 1.0;
        return r8833973;
}


double f_of(float __attribute__((unused)) x) {
        float r8833974 = 1.0;
        return r8833974;
}

double f_od(double __attribute__((unused)) x) {
        double r8833975 = 1.0;
        return r8833975;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8833976;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8833976, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8833976, MPFR_RNDN);
}

static mpfr_t r8833977;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8833977, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8833977, MPFR_RNDN);
}

static mpfr_t r8833978;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8833978, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r8833978, MPFR_RNDN);
}

