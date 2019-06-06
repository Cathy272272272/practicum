#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r4681615 = 1.0;
        float r4681616 = -1.0;
        float r4681617 = x;
        float r4681618 = r4681616 * r4681617;
        float r4681619 = r4681615 + r4681618;
        return r4681619;
}

double f_id(double x) {
        double r4681620 = 1.0;
        double r4681621 = -1.0;
        double r4681622 = x;
        double r4681623 = r4681621 * r4681622;
        double r4681624 = r4681620 + r4681623;
        return r4681624;
}


double f_of(float x) {
        float r4681625 = 1.0;
        float r4681626 = -1.0;
        float r4681627 = x;
        float r4681628 = r4681626 * r4681627;
        float r4681629 = r4681625 + r4681628;
        return r4681629;
}

double f_od(double x) {
        double r4681630 = 1.0;
        double r4681631 = -1.0;
        double r4681632 = x;
        double r4681633 = r4681631 * r4681632;
        double r4681634 = r4681630 + r4681633;
        return r4681634;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4681635, r4681636, r4681637, r4681638, r4681639;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4681635, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4681636, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r4681637);
        mpfr_init(r4681638);
        mpfr_init(r4681639);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4681637, x, MPFR_RNDN);
        mpfr_mul(r4681638, r4681636, r4681637, MPFR_RNDN);
        mpfr_add(r4681639, r4681635, r4681638, MPFR_RNDN);
        return mpfr_get_d(r4681639, MPFR_RNDN);
}

static mpfr_t r4681640, r4681641, r4681642, r4681643, r4681644;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4681640, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4681641, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r4681642);
        mpfr_init(r4681643);
        mpfr_init(r4681644);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4681642, x, MPFR_RNDN);
        mpfr_mul(r4681643, r4681641, r4681642, MPFR_RNDN);
        mpfr_add(r4681644, r4681640, r4681643, MPFR_RNDN);
        return mpfr_get_d(r4681644, MPFR_RNDN);
}

static mpfr_t r4681645, r4681646, r4681647, r4681648, r4681649;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4681645, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4681646, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r4681647);
        mpfr_init(r4681648);
        mpfr_init(r4681649);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4681647, x, MPFR_RNDN);
        mpfr_mul(r4681648, r4681646, r4681647, MPFR_RNDN);
        mpfr_add(r4681649, r4681645, r4681648, MPFR_RNDN);
        return mpfr_get_d(r4681649, MPFR_RNDN);
}

