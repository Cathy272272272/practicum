#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r20880789 = 1.0;
        float r20880790 = -1.0;
        float r20880791 = x;
        float r20880792 = r20880790 * r20880791;
        float r20880793 = r20880789 + r20880792;
        return r20880793;
}

double f_id(double x) {
        double r20880794 = 1.0;
        double r20880795 = -1.0;
        double r20880796 = x;
        double r20880797 = r20880795 * r20880796;
        double r20880798 = r20880794 + r20880797;
        return r20880798;
}


double f_of(float x) {
        float r20880799 = 1.0;
        float r20880800 = -1.0;
        float r20880801 = x;
        float r20880802 = r20880800 * r20880801;
        float r20880803 = r20880799 + r20880802;
        return r20880803;
}

double f_od(double x) {
        double r20880804 = 1.0;
        double r20880805 = -1.0;
        double r20880806 = x;
        double r20880807 = r20880805 * r20880806;
        double r20880808 = r20880804 + r20880807;
        return r20880808;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20880809, r20880810, r20880811, r20880812, r20880813;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880809, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880810, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r20880811);
        mpfr_init(r20880812);
        mpfr_init(r20880813);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20880811, x, MPFR_RNDN);
        mpfr_mul(r20880812, r20880810, r20880811, MPFR_RNDN);
        mpfr_add(r20880813, r20880809, r20880812, MPFR_RNDN);
        return mpfr_get_d(r20880813, MPFR_RNDN);
}

static mpfr_t r20880814, r20880815, r20880816, r20880817, r20880818;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880814, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880815, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r20880816);
        mpfr_init(r20880817);
        mpfr_init(r20880818);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r20880816, x, MPFR_RNDN);
        mpfr_mul(r20880817, r20880815, r20880816, MPFR_RNDN);
        mpfr_add(r20880818, r20880814, r20880817, MPFR_RNDN);
        return mpfr_get_d(r20880818, MPFR_RNDN);
}

static mpfr_t r20880819, r20880820, r20880821, r20880822, r20880823;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880819, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880820, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r20880821);
        mpfr_init(r20880822);
        mpfr_init(r20880823);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r20880821, x, MPFR_RNDN);
        mpfr_mul(r20880822, r20880820, r20880821, MPFR_RNDN);
        mpfr_add(r20880823, r20880819, r20880822, MPFR_RNDN);
        return mpfr_get_d(r20880823, MPFR_RNDN);
}

