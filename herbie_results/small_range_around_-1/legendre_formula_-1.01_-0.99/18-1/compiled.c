#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r48610101 = 1.0;
        float r48610102 = x;
        float r48610103 = r48610101 * r48610102;
        return r48610103;
}

double f_id(double x) {
        double r48610104 = 1.0;
        double r48610105 = x;
        double r48610106 = r48610104 * r48610105;
        return r48610106;
}


double f_of(float x) {
        float r48610107 = 1.0;
        float r48610108 = x;
        float r48610109 = r48610107 * r48610108;
        return r48610109;
}

double f_od(double x) {
        double r48610110 = 1.0;
        double r48610111 = x;
        double r48610112 = r48610110 * r48610111;
        return r48610112;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48610113, r48610114, r48610115;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r48610113, "1.0", 10, MPFR_RNDN);
        mpfr_init(r48610114);
        mpfr_init(r48610115);
}

double f_im(double x) {
        ;
        mpfr_set_d(r48610114, x, MPFR_RNDN);
        mpfr_mul(r48610115, r48610113, r48610114, MPFR_RNDN);
        return mpfr_get_d(r48610115, MPFR_RNDN);
}

static mpfr_t r48610116, r48610117, r48610118;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r48610116, "1.0", 10, MPFR_RNDN);
        mpfr_init(r48610117);
        mpfr_init(r48610118);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r48610117, x, MPFR_RNDN);
        mpfr_mul(r48610118, r48610116, r48610117, MPFR_RNDN);
        return mpfr_get_d(r48610118, MPFR_RNDN);
}

static mpfr_t r48610119, r48610120, r48610121;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r48610119, "1.0", 10, MPFR_RNDN);
        mpfr_init(r48610120);
        mpfr_init(r48610121);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r48610120, x, MPFR_RNDN);
        mpfr_mul(r48610121, r48610119, r48610120, MPFR_RNDN);
        return mpfr_get_d(r48610121, MPFR_RNDN);
}

