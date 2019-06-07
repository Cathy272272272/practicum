#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r33708878 = 1.0;
        float r33708879 = x;
        float r33708880 = r33708878 * r33708879;
        return r33708880;
}

double f_id(double x) {
        double r33708881 = 1.0;
        double r33708882 = x;
        double r33708883 = r33708881 * r33708882;
        return r33708883;
}


double f_of(float x) {
        float r33708884 = 1.0;
        float r33708885 = x;
        float r33708886 = r33708884 * r33708885;
        return r33708886;
}

double f_od(double x) {
        double r33708887 = 1.0;
        double r33708888 = x;
        double r33708889 = r33708887 * r33708888;
        return r33708889;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33708890, r33708891, r33708892;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r33708890, "1.0", 10, MPFR_RNDN);
        mpfr_init(r33708891);
        mpfr_init(r33708892);
}

double f_im(double x) {
        ;
        mpfr_set_d(r33708891, x, MPFR_RNDN);
        mpfr_mul(r33708892, r33708890, r33708891, MPFR_RNDN);
        return mpfr_get_d(r33708892, MPFR_RNDN);
}

static mpfr_t r33708893, r33708894, r33708895;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r33708893, "1.0", 10, MPFR_RNDN);
        mpfr_init(r33708894);
        mpfr_init(r33708895);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r33708894, x, MPFR_RNDN);
        mpfr_mul(r33708895, r33708893, r33708894, MPFR_RNDN);
        return mpfr_get_d(r33708895, MPFR_RNDN);
}

static mpfr_t r33708896, r33708897, r33708898;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r33708896, "1.0", 10, MPFR_RNDN);
        mpfr_init(r33708897);
        mpfr_init(r33708898);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r33708897, x, MPFR_RNDN);
        mpfr_mul(r33708898, r33708896, r33708897, MPFR_RNDN);
        return mpfr_get_d(r33708898, MPFR_RNDN);
}

