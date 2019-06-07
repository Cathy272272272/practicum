#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r63173635 = 2.0;
        float r63173636 = x;
        float r63173637 = r63173635 * r63173636;
        return r63173637;
}

double f_id(double x) {
        double r63173638 = 2.0;
        double r63173639 = x;
        double r63173640 = r63173638 * r63173639;
        return r63173640;
}


double f_of(float x) {
        float r63173641 = 2.0;
        float r63173642 = x;
        float r63173643 = r63173641 * r63173642;
        return r63173643;
}

double f_od(double x) {
        double r63173644 = 2.0;
        double r63173645 = x;
        double r63173646 = r63173644 * r63173645;
        return r63173646;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63173647, r63173648, r63173649;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r63173647, "2.0", 10, MPFR_RNDN);
        mpfr_init(r63173648);
        mpfr_init(r63173649);
}

double f_im(double x) {
        ;
        mpfr_set_d(r63173648, x, MPFR_RNDN);
        mpfr_mul(r63173649, r63173647, r63173648, MPFR_RNDN);
        return mpfr_get_d(r63173649, MPFR_RNDN);
}

static mpfr_t r63173650, r63173651, r63173652;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r63173650, "2.0", 10, MPFR_RNDN);
        mpfr_init(r63173651);
        mpfr_init(r63173652);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r63173651, x, MPFR_RNDN);
        mpfr_mul(r63173652, r63173650, r63173651, MPFR_RNDN);
        return mpfr_get_d(r63173652, MPFR_RNDN);
}

static mpfr_t r63173653, r63173654, r63173655;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r63173653, "2.0", 10, MPFR_RNDN);
        mpfr_init(r63173654);
        mpfr_init(r63173655);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r63173654, x, MPFR_RNDN);
        mpfr_mul(r63173655, r63173653, r63173654, MPFR_RNDN);
        return mpfr_get_d(r63173655, MPFR_RNDN);
}

