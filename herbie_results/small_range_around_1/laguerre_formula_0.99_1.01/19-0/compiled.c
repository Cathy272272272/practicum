#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r83192686 = 1.0;
        return r83192686;
}

double f_id(double __attribute__((unused)) x) {
        double r83192687 = 1.0;
        return r83192687;
}


double f_of(float __attribute__((unused)) x) {
        float r83192688 = 1.0;
        return r83192688;
}

double f_od(double __attribute__((unused)) x) {
        double r83192689 = 1.0;
        return r83192689;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83192690;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83192690, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r83192690, MPFR_RNDN);
}

static mpfr_t r83192691;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83192691, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r83192691, MPFR_RNDN);
}

static mpfr_t r83192692;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83192692, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r83192692, MPFR_RNDN);
}

