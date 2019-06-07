#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r4485583 = -0.5;
        float r4485584 = 1.5;
        float r4485585 = x;
        float r4485586 = r4485585 * r4485585;
        float r4485587 = r4485584 * r4485586;
        float r4485588 = r4485583 + r4485587;
        return r4485588;
}

double f_id(double x) {
        double r4485589 = -0.5;
        double r4485590 = 1.5;
        double r4485591 = x;
        double r4485592 = r4485591 * r4485591;
        double r4485593 = r4485590 * r4485592;
        double r4485594 = r4485589 + r4485593;
        return r4485594;
}


double f_of(float x) {
        float r4485595 = -0.5;
        float r4485596 = 1.5;
        float r4485597 = x;
        float r4485598 = r4485597 * r4485597;
        float r4485599 = r4485596 * r4485598;
        float r4485600 = r4485595 + r4485599;
        return r4485600;
}

double f_od(double x) {
        double r4485601 = -0.5;
        double r4485602 = 1.5;
        double r4485603 = x;
        double r4485604 = r4485603 * r4485603;
        double r4485605 = r4485602 * r4485604;
        double r4485606 = r4485601 + r4485605;
        return r4485606;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4485607, r4485608, r4485609, r4485610, r4485611, r4485612;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485607, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485608, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4485609);
        mpfr_init(r4485610);
        mpfr_init(r4485611);
        mpfr_init(r4485612);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4485609, x, MPFR_RNDN);
        mpfr_mul(r4485610, r4485609, r4485609, MPFR_RNDN);
        mpfr_mul(r4485611, r4485608, r4485610, MPFR_RNDN);
        mpfr_add(r4485612, r4485607, r4485611, MPFR_RNDN);
        return mpfr_get_d(r4485612, MPFR_RNDN);
}

static mpfr_t r4485613, r4485614, r4485615, r4485616, r4485617, r4485618;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485613, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485614, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4485615);
        mpfr_init(r4485616);
        mpfr_init(r4485617);
        mpfr_init(r4485618);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4485615, x, MPFR_RNDN);
        mpfr_mul(r4485616, r4485615, r4485615, MPFR_RNDN);
        mpfr_mul(r4485617, r4485614, r4485616, MPFR_RNDN);
        mpfr_add(r4485618, r4485613, r4485617, MPFR_RNDN);
        return mpfr_get_d(r4485618, MPFR_RNDN);
}

static mpfr_t r4485619, r4485620, r4485621, r4485622, r4485623, r4485624;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485619, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485620, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4485621);
        mpfr_init(r4485622);
        mpfr_init(r4485623);
        mpfr_init(r4485624);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4485621, x, MPFR_RNDN);
        mpfr_mul(r4485622, r4485621, r4485621, MPFR_RNDN);
        mpfr_mul(r4485623, r4485620, r4485622, MPFR_RNDN);
        mpfr_add(r4485624, r4485619, r4485623, MPFR_RNDN);
        return mpfr_get_d(r4485624, MPFR_RNDN);
}

