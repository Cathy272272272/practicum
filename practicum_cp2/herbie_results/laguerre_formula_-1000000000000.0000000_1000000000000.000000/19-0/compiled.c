#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r9585875 = 1.0;
        return r9585875;
}

double f_id(double __attribute__((unused)) x) {
        double r9585876 = 1.0;
        return r9585876;
}


double f_of(float __attribute__((unused)) x) {
        float r9585877 = 1.0;
        return r9585877;
}

double f_od(double __attribute__((unused)) x) {
        double r9585878 = 1.0;
        return r9585878;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9585879;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9585879, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9585879, MPFR_RNDN);
}

static mpfr_t r9585880;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9585880, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9585880, MPFR_RNDN);
}

static mpfr_t r9585881;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9585881, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9585881, MPFR_RNDN);
}

