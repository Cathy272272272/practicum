#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r49140889 = 1.0;
        float r49140890 = x;
        float r49140891 = r49140889 * r49140890;
        return r49140891;
}

double f_id(double x) {
        double r49140892 = 1.0;
        double r49140893 = x;
        double r49140894 = r49140892 * r49140893;
        return r49140894;
}


double f_of(float x) {
        float r49140895 = 1.0;
        float r49140896 = x;
        float r49140897 = r49140895 * r49140896;
        return r49140897;
}

double f_od(double x) {
        double r49140898 = 1.0;
        double r49140899 = x;
        double r49140900 = r49140898 * r49140899;
        return r49140900;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49140901, r49140902, r49140903;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r49140901, "1.0", 10, MPFR_RNDN);
        mpfr_init(r49140902);
        mpfr_init(r49140903);
}

double f_im(double x) {
        ;
        mpfr_set_d(r49140902, x, MPFR_RNDN);
        mpfr_mul(r49140903, r49140901, r49140902, MPFR_RNDN);
        return mpfr_get_d(r49140903, MPFR_RNDN);
}

static mpfr_t r49140904, r49140905, r49140906;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r49140904, "1.0", 10, MPFR_RNDN);
        mpfr_init(r49140905);
        mpfr_init(r49140906);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r49140905, x, MPFR_RNDN);
        mpfr_mul(r49140906, r49140904, r49140905, MPFR_RNDN);
        return mpfr_get_d(r49140906, MPFR_RNDN);
}

static mpfr_t r49140907, r49140908, r49140909;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r49140907, "1.0", 10, MPFR_RNDN);
        mpfr_init(r49140908);
        mpfr_init(r49140909);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r49140908, x, MPFR_RNDN);
        mpfr_mul(r49140909, r49140907, r49140908, MPFR_RNDN);
        return mpfr_get_d(r49140909, MPFR_RNDN);
}

