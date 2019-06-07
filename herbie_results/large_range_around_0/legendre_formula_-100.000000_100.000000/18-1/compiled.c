#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6181868 = 1.0;
        float r6181869 = x;
        float r6181870 = r6181868 * r6181869;
        return r6181870;
}

double f_id(double x) {
        double r6181871 = 1.0;
        double r6181872 = x;
        double r6181873 = r6181871 * r6181872;
        return r6181873;
}


double f_of(float x) {
        float r6181874 = 1.0;
        float r6181875 = x;
        float r6181876 = r6181874 * r6181875;
        return r6181876;
}

double f_od(double x) {
        double r6181877 = 1.0;
        double r6181878 = x;
        double r6181879 = r6181877 * r6181878;
        return r6181879;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6181880, r6181881, r6181882;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6181880, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6181881);
        mpfr_init(r6181882);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6181881, x, MPFR_RNDN);
        mpfr_mul(r6181882, r6181880, r6181881, MPFR_RNDN);
        return mpfr_get_d(r6181882, MPFR_RNDN);
}

static mpfr_t r6181883, r6181884, r6181885;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6181883, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6181884);
        mpfr_init(r6181885);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6181884, x, MPFR_RNDN);
        mpfr_mul(r6181885, r6181883, r6181884, MPFR_RNDN);
        return mpfr_get_d(r6181885, MPFR_RNDN);
}

static mpfr_t r6181886, r6181887, r6181888;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6181886, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6181887);
        mpfr_init(r6181888);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6181887, x, MPFR_RNDN);
        mpfr_mul(r6181888, r6181886, r6181887, MPFR_RNDN);
        return mpfr_get_d(r6181888, MPFR_RNDN);
}

