#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r46352726 = 2.0;
        float r46352727 = x;
        float r46352728 = r46352726 * r46352727;
        return r46352728;
}

double f_id(double x) {
        double r46352729 = 2.0;
        double r46352730 = x;
        double r46352731 = r46352729 * r46352730;
        return r46352731;
}


double f_of(float x) {
        float r46352732 = 2.0;
        float r46352733 = x;
        float r46352734 = r46352732 * r46352733;
        return r46352734;
}

double f_od(double x) {
        double r46352735 = 2.0;
        double r46352736 = x;
        double r46352737 = r46352735 * r46352736;
        return r46352737;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46352738, r46352739, r46352740;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r46352738, "2.0", 10, MPFR_RNDN);
        mpfr_init(r46352739);
        mpfr_init(r46352740);
}

double f_im(double x) {
        ;
        mpfr_set_d(r46352739, x, MPFR_RNDN);
        mpfr_mul(r46352740, r46352738, r46352739, MPFR_RNDN);
        return mpfr_get_d(r46352740, MPFR_RNDN);
}

static mpfr_t r46352741, r46352742, r46352743;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r46352741, "2.0", 10, MPFR_RNDN);
        mpfr_init(r46352742);
        mpfr_init(r46352743);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r46352742, x, MPFR_RNDN);
        mpfr_mul(r46352743, r46352741, r46352742, MPFR_RNDN);
        return mpfr_get_d(r46352743, MPFR_RNDN);
}

static mpfr_t r46352744, r46352745, r46352746;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r46352744, "2.0", 10, MPFR_RNDN);
        mpfr_init(r46352745);
        mpfr_init(r46352746);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r46352745, x, MPFR_RNDN);
        mpfr_mul(r46352746, r46352744, r46352745, MPFR_RNDN);
        return mpfr_get_d(r46352746, MPFR_RNDN);
}

