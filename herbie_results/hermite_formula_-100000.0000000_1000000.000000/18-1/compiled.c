#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7641882 = 2.0;
        float r7641883 = x;
        float r7641884 = r7641882 * r7641883;
        return r7641884;
}

double f_id(double x) {
        double r7641885 = 2.0;
        double r7641886 = x;
        double r7641887 = r7641885 * r7641886;
        return r7641887;
}


double f_of(float x) {
        float r7641888 = 2.0;
        float r7641889 = x;
        float r7641890 = r7641888 * r7641889;
        return r7641890;
}

double f_od(double x) {
        double r7641891 = 2.0;
        double r7641892 = x;
        double r7641893 = r7641891 * r7641892;
        return r7641893;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7641894, r7641895, r7641896;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7641894, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7641895);
        mpfr_init(r7641896);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7641895, x, MPFR_RNDN);
        mpfr_mul(r7641896, r7641894, r7641895, MPFR_RNDN);
        return mpfr_get_d(r7641896, MPFR_RNDN);
}

static mpfr_t r7641897, r7641898, r7641899;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7641897, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7641898);
        mpfr_init(r7641899);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7641898, x, MPFR_RNDN);
        mpfr_mul(r7641899, r7641897, r7641898, MPFR_RNDN);
        return mpfr_get_d(r7641899, MPFR_RNDN);
}

static mpfr_t r7641900, r7641901, r7641902;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7641900, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7641901);
        mpfr_init(r7641902);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7641901, x, MPFR_RNDN);
        mpfr_mul(r7641902, r7641900, r7641901, MPFR_RNDN);
        return mpfr_get_d(r7641902, MPFR_RNDN);
}

