#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r10046565 = -0.5;
        float r10046566 = 1.5;
        float r10046567 = x;
        float r10046568 = r10046567 * r10046567;
        float r10046569 = r10046566 * r10046568;
        float r10046570 = r10046565 + r10046569;
        return r10046570;
}

double f_id(double x) {
        double r10046571 = -0.5;
        double r10046572 = 1.5;
        double r10046573 = x;
        double r10046574 = r10046573 * r10046573;
        double r10046575 = r10046572 * r10046574;
        double r10046576 = r10046571 + r10046575;
        return r10046576;
}


double f_of(float x) {
        float r10046577 = -0.5;
        float r10046578 = 1.5;
        float r10046579 = x;
        float r10046580 = r10046579 * r10046579;
        float r10046581 = r10046578 * r10046580;
        float r10046582 = r10046577 + r10046581;
        return r10046582;
}

double f_od(double x) {
        double r10046583 = -0.5;
        double r10046584 = 1.5;
        double r10046585 = x;
        double r10046586 = r10046585 * r10046585;
        double r10046587 = r10046584 * r10046586;
        double r10046588 = r10046583 + r10046587;
        return r10046588;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10046589, r10046590, r10046591, r10046592, r10046593, r10046594;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10046589, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10046590, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10046591);
        mpfr_init(r10046592);
        mpfr_init(r10046593);
        mpfr_init(r10046594);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10046591, x, MPFR_RNDN);
        mpfr_mul(r10046592, r10046591, r10046591, MPFR_RNDN);
        mpfr_mul(r10046593, r10046590, r10046592, MPFR_RNDN);
        mpfr_add(r10046594, r10046589, r10046593, MPFR_RNDN);
        return mpfr_get_d(r10046594, MPFR_RNDN);
}

static mpfr_t r10046595, r10046596, r10046597, r10046598, r10046599, r10046600;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10046595, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10046596, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10046597);
        mpfr_init(r10046598);
        mpfr_init(r10046599);
        mpfr_init(r10046600);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10046597, x, MPFR_RNDN);
        mpfr_mul(r10046598, r10046597, r10046597, MPFR_RNDN);
        mpfr_mul(r10046599, r10046596, r10046598, MPFR_RNDN);
        mpfr_add(r10046600, r10046595, r10046599, MPFR_RNDN);
        return mpfr_get_d(r10046600, MPFR_RNDN);
}

static mpfr_t r10046601, r10046602, r10046603, r10046604, r10046605, r10046606;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10046601, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10046602, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10046603);
        mpfr_init(r10046604);
        mpfr_init(r10046605);
        mpfr_init(r10046606);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10046603, x, MPFR_RNDN);
        mpfr_mul(r10046604, r10046603, r10046603, MPFR_RNDN);
        mpfr_mul(r10046605, r10046602, r10046604, MPFR_RNDN);
        mpfr_add(r10046606, r10046601, r10046605, MPFR_RNDN);
        return mpfr_get_d(r10046606, MPFR_RNDN);
}

