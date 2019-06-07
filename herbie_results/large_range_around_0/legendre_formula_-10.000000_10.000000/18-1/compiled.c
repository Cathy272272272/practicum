#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r8102575 = 1.0;
        float r8102576 = x;
        float r8102577 = r8102575 * r8102576;
        return r8102577;
}

double f_id(double x) {
        double r8102578 = 1.0;
        double r8102579 = x;
        double r8102580 = r8102578 * r8102579;
        return r8102580;
}


double f_of(float x) {
        float r8102581 = 1.0;
        float r8102582 = x;
        float r8102583 = r8102581 * r8102582;
        return r8102583;
}

double f_od(double x) {
        double r8102584 = 1.0;
        double r8102585 = x;
        double r8102586 = r8102584 * r8102585;
        return r8102586;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8102587, r8102588, r8102589;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102587, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8102588);
        mpfr_init(r8102589);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8102588, x, MPFR_RNDN);
        mpfr_mul(r8102589, r8102587, r8102588, MPFR_RNDN);
        return mpfr_get_d(r8102589, MPFR_RNDN);
}

static mpfr_t r8102590, r8102591, r8102592;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102590, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8102591);
        mpfr_init(r8102592);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8102591, x, MPFR_RNDN);
        mpfr_mul(r8102592, r8102590, r8102591, MPFR_RNDN);
        return mpfr_get_d(r8102592, MPFR_RNDN);
}

static mpfr_t r8102593, r8102594, r8102595;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102593, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8102594);
        mpfr_init(r8102595);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8102594, x, MPFR_RNDN);
        mpfr_mul(r8102595, r8102593, r8102594, MPFR_RNDN);
        return mpfr_get_d(r8102595, MPFR_RNDN);
}

