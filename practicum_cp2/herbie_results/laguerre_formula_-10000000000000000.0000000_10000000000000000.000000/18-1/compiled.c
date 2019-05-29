#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r10005859 = 1.0;
        float r10005860 = -1.0;
        float r10005861 = x;
        float r10005862 = r10005860 * r10005861;
        float r10005863 = r10005859 + r10005862;
        return r10005863;
}

double f_id(double x) {
        double r10005864 = 1.0;
        double r10005865 = -1.0;
        double r10005866 = x;
        double r10005867 = r10005865 * r10005866;
        double r10005868 = r10005864 + r10005867;
        return r10005868;
}


double f_of(float x) {
        float r10005869 = 1.0;
        float r10005870 = -1.0;
        float r10005871 = x;
        float r10005872 = r10005870 * r10005871;
        float r10005873 = r10005869 + r10005872;
        return r10005873;
}

double f_od(double x) {
        double r10005874 = 1.0;
        double r10005875 = -1.0;
        double r10005876 = x;
        double r10005877 = r10005875 * r10005876;
        double r10005878 = r10005874 + r10005877;
        return r10005878;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10005879, r10005880, r10005881, r10005882, r10005883;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10005879, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10005880, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10005881);
        mpfr_init(r10005882);
        mpfr_init(r10005883);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10005881, x, MPFR_RNDN);
        mpfr_mul(r10005882, r10005880, r10005881, MPFR_RNDN);
        mpfr_add(r10005883, r10005879, r10005882, MPFR_RNDN);
        return mpfr_get_d(r10005883, MPFR_RNDN);
}

static mpfr_t r10005884, r10005885, r10005886, r10005887, r10005888;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10005884, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10005885, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10005886);
        mpfr_init(r10005887);
        mpfr_init(r10005888);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10005886, x, MPFR_RNDN);
        mpfr_mul(r10005887, r10005885, r10005886, MPFR_RNDN);
        mpfr_add(r10005888, r10005884, r10005887, MPFR_RNDN);
        return mpfr_get_d(r10005888, MPFR_RNDN);
}

static mpfr_t r10005889, r10005890, r10005891, r10005892, r10005893;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10005889, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10005890, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10005891);
        mpfr_init(r10005892);
        mpfr_init(r10005893);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10005891, x, MPFR_RNDN);
        mpfr_mul(r10005892, r10005890, r10005891, MPFR_RNDN);
        mpfr_add(r10005893, r10005889, r10005892, MPFR_RNDN);
        return mpfr_get_d(r10005893, MPFR_RNDN);
}

