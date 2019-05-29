#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r10043594 = -1.5;
        float r10043595 = x;
        float r10043596 = r10043594 * r10043595;
        float r10043597 = 2.5;
        float r10043598 = r10043595 * r10043595;
        float r10043599 = r10043598 * r10043595;
        float r10043600 = r10043597 * r10043599;
        float r10043601 = r10043596 + r10043600;
        return r10043601;
}

double f_id(double x) {
        double r10043602 = -1.5;
        double r10043603 = x;
        double r10043604 = r10043602 * r10043603;
        double r10043605 = 2.5;
        double r10043606 = r10043603 * r10043603;
        double r10043607 = r10043606 * r10043603;
        double r10043608 = r10043605 * r10043607;
        double r10043609 = r10043604 + r10043608;
        return r10043609;
}


double f_of(float x) {
        float r10043610 = -1.5;
        float r10043611 = x;
        float r10043612 = r10043610 * r10043611;
        float r10043613 = 2.5;
        float r10043614 = r10043611 * r10043611;
        float r10043615 = r10043614 * r10043611;
        float r10043616 = r10043613 * r10043615;
        float r10043617 = r10043612 + r10043616;
        return r10043617;
}

double f_od(double x) {
        double r10043618 = -1.5;
        double r10043619 = x;
        double r10043620 = r10043618 * r10043619;
        double r10043621 = 2.5;
        double r10043622 = r10043619 * r10043619;
        double r10043623 = r10043622 * r10043619;
        double r10043624 = r10043621 * r10043623;
        double r10043625 = r10043620 + r10043624;
        return r10043625;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10043626, r10043627, r10043628, r10043629, r10043630, r10043631, r10043632, r10043633;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10043626, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r10043627);
        mpfr_init(r10043628);
        mpfr_init_set_str(r10043629, "2.5", 10, MPFR_RNDN);
        mpfr_init(r10043630);
        mpfr_init(r10043631);
        mpfr_init(r10043632);
        mpfr_init(r10043633);
}

double f_im(double x) {
        ;
        mpfr_set_d(r10043627, x, MPFR_RNDN);
        mpfr_mul(r10043628, r10043626, r10043627, MPFR_RNDN);
        ;
        mpfr_mul(r10043630, r10043627, r10043627, MPFR_RNDN);
        mpfr_mul(r10043631, r10043630, r10043627, MPFR_RNDN);
        mpfr_mul(r10043632, r10043629, r10043631, MPFR_RNDN);
        mpfr_add(r10043633, r10043628, r10043632, MPFR_RNDN);
        return mpfr_get_d(r10043633, MPFR_RNDN);
}

static mpfr_t r10043634, r10043635, r10043636, r10043637, r10043638, r10043639, r10043640, r10043641;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10043634, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r10043635);
        mpfr_init(r10043636);
        mpfr_init_set_str(r10043637, "2.5", 10, MPFR_RNDN);
        mpfr_init(r10043638);
        mpfr_init(r10043639);
        mpfr_init(r10043640);
        mpfr_init(r10043641);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10043635, x, MPFR_RNDN);
        mpfr_mul(r10043636, r10043634, r10043635, MPFR_RNDN);
        ;
        mpfr_mul(r10043638, r10043635, r10043635, MPFR_RNDN);
        mpfr_mul(r10043639, r10043638, r10043635, MPFR_RNDN);
        mpfr_mul(r10043640, r10043637, r10043639, MPFR_RNDN);
        mpfr_add(r10043641, r10043636, r10043640, MPFR_RNDN);
        return mpfr_get_d(r10043641, MPFR_RNDN);
}

static mpfr_t r10043642, r10043643, r10043644, r10043645, r10043646, r10043647, r10043648, r10043649;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10043642, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r10043643);
        mpfr_init(r10043644);
        mpfr_init_set_str(r10043645, "2.5", 10, MPFR_RNDN);
        mpfr_init(r10043646);
        mpfr_init(r10043647);
        mpfr_init(r10043648);
        mpfr_init(r10043649);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10043643, x, MPFR_RNDN);
        mpfr_mul(r10043644, r10043642, r10043643, MPFR_RNDN);
        ;
        mpfr_mul(r10043646, r10043643, r10043643, MPFR_RNDN);
        mpfr_mul(r10043647, r10043646, r10043643, MPFR_RNDN);
        mpfr_mul(r10043648, r10043645, r10043647, MPFR_RNDN);
        mpfr_add(r10043649, r10043644, r10043648, MPFR_RNDN);
        return mpfr_get_d(r10043649, MPFR_RNDN);
}

