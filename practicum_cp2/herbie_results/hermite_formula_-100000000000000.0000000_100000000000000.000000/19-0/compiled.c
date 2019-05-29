#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r9962779 = 1.0;
        return r9962779;
}

double f_id(double __attribute__((unused)) x) {
        double r9962780 = 1.0;
        return r9962780;
}


double f_of(float __attribute__((unused)) x) {
        float r9962781 = 1.0;
        return r9962781;
}

double f_od(double __attribute__((unused)) x) {
        double r9962782 = 1.0;
        return r9962782;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9962783;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9962783, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9962783, MPFR_RNDN);
}

static mpfr_t r9962784;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9962784, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9962784, MPFR_RNDN);
}

static mpfr_t r9962785;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9962785, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9962785, MPFR_RNDN);
}

