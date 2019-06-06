#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r31482433 = 1.0;
        float r31482434 = x;
        float r31482435 = r31482433 * r31482434;
        return r31482435;
}

double f_id(double x) {
        double r31482436 = 1.0;
        double r31482437 = x;
        double r31482438 = r31482436 * r31482437;
        return r31482438;
}


double f_of(float x) {
        float r31482439 = 1.0;
        float r31482440 = x;
        float r31482441 = r31482439 * r31482440;
        return r31482441;
}

double f_od(double x) {
        double r31482442 = 1.0;
        double r31482443 = x;
        double r31482444 = r31482442 * r31482443;
        return r31482444;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31482445, r31482446, r31482447;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r31482445, "1.0", 10, MPFR_RNDN);
        mpfr_init(r31482446);
        mpfr_init(r31482447);
}

double f_im(double x) {
        ;
        mpfr_set_d(r31482446, x, MPFR_RNDN);
        mpfr_mul(r31482447, r31482445, r31482446, MPFR_RNDN);
        return mpfr_get_d(r31482447, MPFR_RNDN);
}

static mpfr_t r31482448, r31482449, r31482450;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r31482448, "1.0", 10, MPFR_RNDN);
        mpfr_init(r31482449);
        mpfr_init(r31482450);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r31482449, x, MPFR_RNDN);
        mpfr_mul(r31482450, r31482448, r31482449, MPFR_RNDN);
        return mpfr_get_d(r31482450, MPFR_RNDN);
}

static mpfr_t r31482451, r31482452, r31482453;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r31482451, "1.0", 10, MPFR_RNDN);
        mpfr_init(r31482452);
        mpfr_init(r31482453);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r31482452, x, MPFR_RNDN);
        mpfr_mul(r31482453, r31482451, r31482452, MPFR_RNDN);
        return mpfr_get_d(r31482453, MPFR_RNDN);
}

