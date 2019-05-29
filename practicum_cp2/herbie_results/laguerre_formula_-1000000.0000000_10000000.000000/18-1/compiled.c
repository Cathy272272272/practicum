#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r9856609 = 1.0;
        float r9856610 = -1.0;
        float r9856611 = x;
        float r9856612 = r9856610 * r9856611;
        float r9856613 = r9856609 + r9856612;
        return r9856613;
}

double f_id(double x) {
        double r9856614 = 1.0;
        double r9856615 = -1.0;
        double r9856616 = x;
        double r9856617 = r9856615 * r9856616;
        double r9856618 = r9856614 + r9856617;
        return r9856618;
}


double f_of(float x) {
        float r9856619 = 1.0;
        float r9856620 = -1.0;
        float r9856621 = x;
        float r9856622 = r9856620 * r9856621;
        float r9856623 = r9856619 + r9856622;
        return r9856623;
}

double f_od(double x) {
        double r9856624 = 1.0;
        double r9856625 = -1.0;
        double r9856626 = x;
        double r9856627 = r9856625 * r9856626;
        double r9856628 = r9856624 + r9856627;
        return r9856628;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9856629, r9856630, r9856631, r9856632, r9856633;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9856629, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9856630, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9856631);
        mpfr_init(r9856632);
        mpfr_init(r9856633);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9856631, x, MPFR_RNDN);
        mpfr_mul(r9856632, r9856630, r9856631, MPFR_RNDN);
        mpfr_add(r9856633, r9856629, r9856632, MPFR_RNDN);
        return mpfr_get_d(r9856633, MPFR_RNDN);
}

static mpfr_t r9856634, r9856635, r9856636, r9856637, r9856638;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9856634, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9856635, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9856636);
        mpfr_init(r9856637);
        mpfr_init(r9856638);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9856636, x, MPFR_RNDN);
        mpfr_mul(r9856637, r9856635, r9856636, MPFR_RNDN);
        mpfr_add(r9856638, r9856634, r9856637, MPFR_RNDN);
        return mpfr_get_d(r9856638, MPFR_RNDN);
}

static mpfr_t r9856639, r9856640, r9856641, r9856642, r9856643;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9856639, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9856640, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9856641);
        mpfr_init(r9856642);
        mpfr_init(r9856643);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9856641, x, MPFR_RNDN);
        mpfr_mul(r9856642, r9856640, r9856641, MPFR_RNDN);
        mpfr_add(r9856643, r9856639, r9856642, MPFR_RNDN);
        return mpfr_get_d(r9856643, MPFR_RNDN);
}

