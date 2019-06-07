#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r26950430 = 1.0;
        float r26950431 = x;
        float r26950432 = r26950430 * r26950431;
        return r26950432;
}

double f_id(double x) {
        double r26950433 = 1.0;
        double r26950434 = x;
        double r26950435 = r26950433 * r26950434;
        return r26950435;
}


double f_of(float x) {
        float r26950436 = 1.0;
        float r26950437 = x;
        float r26950438 = r26950436 * r26950437;
        return r26950438;
}

double f_od(double x) {
        double r26950439 = 1.0;
        double r26950440 = x;
        double r26950441 = r26950439 * r26950440;
        return r26950441;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26950442, r26950443, r26950444;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r26950442, "1.0", 10, MPFR_RNDN);
        mpfr_init(r26950443);
        mpfr_init(r26950444);
}

double f_im(double x) {
        ;
        mpfr_set_d(r26950443, x, MPFR_RNDN);
        mpfr_mul(r26950444, r26950442, r26950443, MPFR_RNDN);
        return mpfr_get_d(r26950444, MPFR_RNDN);
}

static mpfr_t r26950445, r26950446, r26950447;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r26950445, "1.0", 10, MPFR_RNDN);
        mpfr_init(r26950446);
        mpfr_init(r26950447);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r26950446, x, MPFR_RNDN);
        mpfr_mul(r26950447, r26950445, r26950446, MPFR_RNDN);
        return mpfr_get_d(r26950447, MPFR_RNDN);
}

static mpfr_t r26950448, r26950449, r26950450;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r26950448, "1.0", 10, MPFR_RNDN);
        mpfr_init(r26950449);
        mpfr_init(r26950450);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r26950449, x, MPFR_RNDN);
        mpfr_mul(r26950450, r26950448, r26950449, MPFR_RNDN);
        return mpfr_get_d(r26950450, MPFR_RNDN);
}

