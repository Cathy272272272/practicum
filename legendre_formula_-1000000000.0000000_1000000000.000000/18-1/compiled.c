#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r5022997 = 1.0;
        float r5022998 = x;
        float r5022999 = r5022997 * r5022998;
        return r5022999;
}

double f_id(double x) {
        double r5023000 = 1.0;
        double r5023001 = x;
        double r5023002 = r5023000 * r5023001;
        return r5023002;
}


double f_of(float x) {
        float r5023003 = 1.0;
        float r5023004 = x;
        float r5023005 = r5023003 * r5023004;
        return r5023005;
}

double f_od(double x) {
        double r5023006 = 1.0;
        double r5023007 = x;
        double r5023008 = r5023006 * r5023007;
        return r5023008;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5023009, r5023010, r5023011;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5023009, "1.0", 10, MPFR_RNDN);
        mpfr_init(r5023010);
        mpfr_init(r5023011);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5023010, x, MPFR_RNDN);
        mpfr_mul(r5023011, r5023009, r5023010, MPFR_RNDN);
        return mpfr_get_d(r5023011, MPFR_RNDN);
}

static mpfr_t r5023012, r5023013, r5023014;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5023012, "1.0", 10, MPFR_RNDN);
        mpfr_init(r5023013);
        mpfr_init(r5023014);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5023013, x, MPFR_RNDN);
        mpfr_mul(r5023014, r5023012, r5023013, MPFR_RNDN);
        return mpfr_get_d(r5023014, MPFR_RNDN);
}

static mpfr_t r5023015, r5023016, r5023017;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5023015, "1.0", 10, MPFR_RNDN);
        mpfr_init(r5023016);
        mpfr_init(r5023017);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5023016, x, MPFR_RNDN);
        mpfr_mul(r5023017, r5023015, r5023016, MPFR_RNDN);
        return mpfr_get_d(r5023017, MPFR_RNDN);
}

