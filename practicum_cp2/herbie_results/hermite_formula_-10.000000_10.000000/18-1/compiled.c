#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r9831856 = 2.0;
        float r9831857 = x;
        float r9831858 = r9831856 * r9831857;
        return r9831858;
}

double f_id(double x) {
        double r9831859 = 2.0;
        double r9831860 = x;
        double r9831861 = r9831859 * r9831860;
        return r9831861;
}


double f_of(float x) {
        float r9831862 = 2.0;
        float r9831863 = x;
        float r9831864 = r9831862 * r9831863;
        return r9831864;
}

double f_od(double x) {
        double r9831865 = 2.0;
        double r9831866 = x;
        double r9831867 = r9831865 * r9831866;
        return r9831867;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9831868, r9831869, r9831870;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831868, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9831869);
        mpfr_init(r9831870);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9831869, x, MPFR_RNDN);
        mpfr_mul(r9831870, r9831868, r9831869, MPFR_RNDN);
        return mpfr_get_d(r9831870, MPFR_RNDN);
}

static mpfr_t r9831871, r9831872, r9831873;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831871, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9831872);
        mpfr_init(r9831873);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9831872, x, MPFR_RNDN);
        mpfr_mul(r9831873, r9831871, r9831872, MPFR_RNDN);
        return mpfr_get_d(r9831873, MPFR_RNDN);
}

static mpfr_t r9831874, r9831875, r9831876;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831874, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9831875);
        mpfr_init(r9831876);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9831875, x, MPFR_RNDN);
        mpfr_mul(r9831876, r9831874, r9831875, MPFR_RNDN);
        return mpfr_get_d(r9831876, MPFR_RNDN);
}

