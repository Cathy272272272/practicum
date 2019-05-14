#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r9962758 = 2.0;
        float r9962759 = x;
        float r9962760 = r9962758 * r9962759;
        return r9962760;
}

double f_id(double x) {
        double r9962761 = 2.0;
        double r9962762 = x;
        double r9962763 = r9962761 * r9962762;
        return r9962763;
}


double f_of(float x) {
        float r9962764 = 2.0;
        float r9962765 = x;
        float r9962766 = r9962764 * r9962765;
        return r9962766;
}

double f_od(double x) {
        double r9962767 = 2.0;
        double r9962768 = x;
        double r9962769 = r9962767 * r9962768;
        return r9962769;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9962770, r9962771, r9962772;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9962770, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9962771);
        mpfr_init(r9962772);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9962771, x, MPFR_RNDN);
        mpfr_mul(r9962772, r9962770, r9962771, MPFR_RNDN);
        return mpfr_get_d(r9962772, MPFR_RNDN);
}

static mpfr_t r9962773, r9962774, r9962775;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9962773, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9962774);
        mpfr_init(r9962775);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9962774, x, MPFR_RNDN);
        mpfr_mul(r9962775, r9962773, r9962774, MPFR_RNDN);
        return mpfr_get_d(r9962775, MPFR_RNDN);
}

static mpfr_t r9962776, r9962777, r9962778;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9962776, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9962777);
        mpfr_init(r9962778);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9962777, x, MPFR_RNDN);
        mpfr_mul(r9962778, r9962776, r9962777, MPFR_RNDN);
        return mpfr_get_d(r9962778, MPFR_RNDN);
}

