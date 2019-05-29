#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6179865 = -0.5;
        float r6179866 = 1.5;
        float r6179867 = x;
        float r6179868 = r6179867 * r6179867;
        float r6179869 = r6179866 * r6179868;
        float r6179870 = r6179865 + r6179869;
        return r6179870;
}

double f_id(double x) {
        double r6179871 = -0.5;
        double r6179872 = 1.5;
        double r6179873 = x;
        double r6179874 = r6179873 * r6179873;
        double r6179875 = r6179872 * r6179874;
        double r6179876 = r6179871 + r6179875;
        return r6179876;
}


double f_of(float x) {
        float r6179877 = -0.5;
        float r6179878 = 1.5;
        float r6179879 = x;
        float r6179880 = r6179878 * r6179879;
        float r6179881 = r6179880 * r6179879;
        float r6179882 = r6179877 + r6179881;
        return r6179882;
}

double f_od(double x) {
        double r6179883 = -0.5;
        double r6179884 = 1.5;
        double r6179885 = x;
        double r6179886 = r6179884 * r6179885;
        double r6179887 = r6179886 * r6179885;
        double r6179888 = r6179883 + r6179887;
        return r6179888;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179889, r6179890, r6179891, r6179892, r6179893, r6179894;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179889, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179890, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6179891);
        mpfr_init(r6179892);
        mpfr_init(r6179893);
        mpfr_init(r6179894);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6179891, x, MPFR_RNDN);
        mpfr_mul(r6179892, r6179891, r6179891, MPFR_RNDN);
        mpfr_mul(r6179893, r6179890, r6179892, MPFR_RNDN);
        mpfr_add(r6179894, r6179889, r6179893, MPFR_RNDN);
        return mpfr_get_d(r6179894, MPFR_RNDN);
}

static mpfr_t r6179895, r6179896, r6179897, r6179898, r6179899, r6179900;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179895, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179896, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6179897);
        mpfr_init(r6179898);
        mpfr_init(r6179899);
        mpfr_init(r6179900);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6179897, x, MPFR_RNDN);
        mpfr_mul(r6179898, r6179896, r6179897, MPFR_RNDN);
        mpfr_mul(r6179899, r6179898, r6179897, MPFR_RNDN);
        mpfr_add(r6179900, r6179895, r6179899, MPFR_RNDN);
        return mpfr_get_d(r6179900, MPFR_RNDN);
}

static mpfr_t r6179901, r6179902, r6179903, r6179904, r6179905, r6179906;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179901, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179902, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6179903);
        mpfr_init(r6179904);
        mpfr_init(r6179905);
        mpfr_init(r6179906);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6179903, x, MPFR_RNDN);
        mpfr_mul(r6179904, r6179902, r6179903, MPFR_RNDN);
        mpfr_mul(r6179905, r6179904, r6179903, MPFR_RNDN);
        mpfr_add(r6179906, r6179901, r6179905, MPFR_RNDN);
        return mpfr_get_d(r6179906, MPFR_RNDN);
}

