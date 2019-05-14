#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6906816 = 1.0;
        float r6906817 = x;
        float r6906818 = r6906816 * r6906817;
        return r6906818;
}

double f_id(double x) {
        double r6906819 = 1.0;
        double r6906820 = x;
        double r6906821 = r6906819 * r6906820;
        return r6906821;
}


double f_of(float x) {
        float r6906822 = 1.0;
        float r6906823 = x;
        float r6906824 = r6906822 * r6906823;
        return r6906824;
}

double f_od(double x) {
        double r6906825 = 1.0;
        double r6906826 = x;
        double r6906827 = r6906825 * r6906826;
        return r6906827;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6906828, r6906829, r6906830;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6906828, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6906829);
        mpfr_init(r6906830);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6906829, x, MPFR_RNDN);
        mpfr_mul(r6906830, r6906828, r6906829, MPFR_RNDN);
        return mpfr_get_d(r6906830, MPFR_RNDN);
}

static mpfr_t r6906831, r6906832, r6906833;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6906831, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6906832);
        mpfr_init(r6906833);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6906832, x, MPFR_RNDN);
        mpfr_mul(r6906833, r6906831, r6906832, MPFR_RNDN);
        return mpfr_get_d(r6906833, MPFR_RNDN);
}

static mpfr_t r6906834, r6906835, r6906836;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6906834, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6906835);
        mpfr_init(r6906836);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6906835, x, MPFR_RNDN);
        mpfr_mul(r6906836, r6906834, r6906835, MPFR_RNDN);
        return mpfr_get_d(r6906836, MPFR_RNDN);
}

