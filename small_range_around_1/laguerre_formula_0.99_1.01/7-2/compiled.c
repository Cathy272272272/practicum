#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r83191563 = 1.0;
        float r83191564 = -2.0;
        float r83191565 = x;
        float r83191566 = r83191564 * r83191565;
        float r83191567 = r83191563 + r83191566;
        float r83191568 = 0.5;
        float r83191569 = r83191565 * r83191565;
        float r83191570 = r83191568 * r83191569;
        float r83191571 = r83191567 + r83191570;
        return r83191571;
}

double f_id(double x) {
        double r83191572 = 1.0;
        double r83191573 = -2.0;
        double r83191574 = x;
        double r83191575 = r83191573 * r83191574;
        double r83191576 = r83191572 + r83191575;
        double r83191577 = 0.5;
        double r83191578 = r83191574 * r83191574;
        double r83191579 = r83191577 * r83191578;
        double r83191580 = r83191576 + r83191579;
        return r83191580;
}


double f_of(float x) {
        float r83191581 = 1.0;
        float r83191582 = -2.0;
        float r83191583 = x;
        float r83191584 = r83191582 * r83191583;
        float r83191585 = r83191581 + r83191584;
        float r83191586 = 0.5;
        float r83191587 = r83191583 * r83191583;
        float r83191588 = r83191586 * r83191587;
        float r83191589 = r83191585 + r83191588;
        return r83191589;
}

double f_od(double x) {
        double r83191590 = 1.0;
        double r83191591 = -2.0;
        double r83191592 = x;
        double r83191593 = r83191591 * r83191592;
        double r83191594 = r83191590 + r83191593;
        double r83191595 = 0.5;
        double r83191596 = r83191592 * r83191592;
        double r83191597 = r83191595 * r83191596;
        double r83191598 = r83191594 + r83191597;
        return r83191598;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83191599, r83191600, r83191601, r83191602, r83191603, r83191604, r83191605, r83191606, r83191607;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191599, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191600, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r83191601);
        mpfr_init(r83191602);
        mpfr_init(r83191603);
        mpfr_init_set_str(r83191604, "0.5", 10, MPFR_RNDN);
        mpfr_init(r83191605);
        mpfr_init(r83191606);
        mpfr_init(r83191607);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83191601, x, MPFR_RNDN);
        mpfr_mul(r83191602, r83191600, r83191601, MPFR_RNDN);
        mpfr_add(r83191603, r83191599, r83191602, MPFR_RNDN);
        ;
        mpfr_mul(r83191605, r83191601, r83191601, MPFR_RNDN);
        mpfr_mul(r83191606, r83191604, r83191605, MPFR_RNDN);
        mpfr_add(r83191607, r83191603, r83191606, MPFR_RNDN);
        return mpfr_get_d(r83191607, MPFR_RNDN);
}

static mpfr_t r83191608, r83191609, r83191610, r83191611, r83191612, r83191613, r83191614, r83191615, r83191616;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191608, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191609, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r83191610);
        mpfr_init(r83191611);
        mpfr_init(r83191612);
        mpfr_init_set_str(r83191613, "0.5", 10, MPFR_RNDN);
        mpfr_init(r83191614);
        mpfr_init(r83191615);
        mpfr_init(r83191616);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r83191610, x, MPFR_RNDN);
        mpfr_mul(r83191611, r83191609, r83191610, MPFR_RNDN);
        mpfr_add(r83191612, r83191608, r83191611, MPFR_RNDN);
        ;
        mpfr_mul(r83191614, r83191610, r83191610, MPFR_RNDN);
        mpfr_mul(r83191615, r83191613, r83191614, MPFR_RNDN);
        mpfr_add(r83191616, r83191612, r83191615, MPFR_RNDN);
        return mpfr_get_d(r83191616, MPFR_RNDN);
}

static mpfr_t r83191617, r83191618, r83191619, r83191620, r83191621, r83191622, r83191623, r83191624, r83191625;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191617, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191618, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r83191619);
        mpfr_init(r83191620);
        mpfr_init(r83191621);
        mpfr_init_set_str(r83191622, "0.5", 10, MPFR_RNDN);
        mpfr_init(r83191623);
        mpfr_init(r83191624);
        mpfr_init(r83191625);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r83191619, x, MPFR_RNDN);
        mpfr_mul(r83191620, r83191618, r83191619, MPFR_RNDN);
        mpfr_add(r83191621, r83191617, r83191620, MPFR_RNDN);
        ;
        mpfr_mul(r83191623, r83191619, r83191619, MPFR_RNDN);
        mpfr_mul(r83191624, r83191622, r83191623, MPFR_RNDN);
        mpfr_add(r83191625, r83191621, r83191624, MPFR_RNDN);
        return mpfr_get_d(r83191625, MPFR_RNDN);
}

