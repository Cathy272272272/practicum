#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r7514639 = -1.5;
        float r7514640 = x;
        float r7514641 = r7514639 * r7514640;
        float r7514642 = 2.5;
        float r7514643 = r7514640 * r7514640;
        float r7514644 = r7514643 * r7514640;
        float r7514645 = r7514642 * r7514644;
        float r7514646 = r7514641 + r7514645;
        return r7514646;
}

double f_id(double x) {
        double r7514647 = -1.5;
        double r7514648 = x;
        double r7514649 = r7514647 * r7514648;
        double r7514650 = 2.5;
        double r7514651 = r7514648 * r7514648;
        double r7514652 = r7514651 * r7514648;
        double r7514653 = r7514650 * r7514652;
        double r7514654 = r7514649 + r7514653;
        return r7514654;
}


double f_of(float x) {
        float r7514655 = -1.5;
        float r7514656 = x;
        float r7514657 = r7514655 * r7514656;
        float r7514658 = 2.5;
        float r7514659 = r7514656 * r7514656;
        float r7514660 = r7514659 * r7514656;
        float r7514661 = r7514658 * r7514660;
        float r7514662 = r7514657 + r7514661;
        return r7514662;
}

double f_od(double x) {
        double r7514663 = -1.5;
        double r7514664 = x;
        double r7514665 = r7514663 * r7514664;
        double r7514666 = 2.5;
        double r7514667 = r7514664 * r7514664;
        double r7514668 = r7514667 * r7514664;
        double r7514669 = r7514666 * r7514668;
        double r7514670 = r7514665 + r7514669;
        return r7514670;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7514671, r7514672, r7514673, r7514674, r7514675, r7514676, r7514677, r7514678;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7514671, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7514672);
        mpfr_init(r7514673);
        mpfr_init_set_str(r7514674, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7514675);
        mpfr_init(r7514676);
        mpfr_init(r7514677);
        mpfr_init(r7514678);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7514672, x, MPFR_RNDN);
        mpfr_mul(r7514673, r7514671, r7514672, MPFR_RNDN);
        ;
        mpfr_mul(r7514675, r7514672, r7514672, MPFR_RNDN);
        mpfr_mul(r7514676, r7514675, r7514672, MPFR_RNDN);
        mpfr_mul(r7514677, r7514674, r7514676, MPFR_RNDN);
        mpfr_add(r7514678, r7514673, r7514677, MPFR_RNDN);
        return mpfr_get_d(r7514678, MPFR_RNDN);
}

static mpfr_t r7514679, r7514680, r7514681, r7514682, r7514683, r7514684, r7514685, r7514686;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7514679, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7514680);
        mpfr_init(r7514681);
        mpfr_init_set_str(r7514682, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7514683);
        mpfr_init(r7514684);
        mpfr_init(r7514685);
        mpfr_init(r7514686);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7514680, x, MPFR_RNDN);
        mpfr_mul(r7514681, r7514679, r7514680, MPFR_RNDN);
        ;
        mpfr_mul(r7514683, r7514680, r7514680, MPFR_RNDN);
        mpfr_mul(r7514684, r7514683, r7514680, MPFR_RNDN);
        mpfr_mul(r7514685, r7514682, r7514684, MPFR_RNDN);
        mpfr_add(r7514686, r7514681, r7514685, MPFR_RNDN);
        return mpfr_get_d(r7514686, MPFR_RNDN);
}

static mpfr_t r7514687, r7514688, r7514689, r7514690, r7514691, r7514692, r7514693, r7514694;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7514687, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7514688);
        mpfr_init(r7514689);
        mpfr_init_set_str(r7514690, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7514691);
        mpfr_init(r7514692);
        mpfr_init(r7514693);
        mpfr_init(r7514694);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7514688, x, MPFR_RNDN);
        mpfr_mul(r7514689, r7514687, r7514688, MPFR_RNDN);
        ;
        mpfr_mul(r7514691, r7514688, r7514688, MPFR_RNDN);
        mpfr_mul(r7514692, r7514691, r7514688, MPFR_RNDN);
        mpfr_mul(r7514693, r7514690, r7514692, MPFR_RNDN);
        mpfr_add(r7514694, r7514689, r7514693, MPFR_RNDN);
        return mpfr_get_d(r7514694, MPFR_RNDN);
}

