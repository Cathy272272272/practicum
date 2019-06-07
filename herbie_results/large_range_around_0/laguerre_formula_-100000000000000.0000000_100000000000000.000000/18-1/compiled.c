#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r8833937 = 1.0;
        float r8833938 = -1.0;
        float r8833939 = x;
        float r8833940 = r8833938 * r8833939;
        float r8833941 = r8833937 + r8833940;
        return r8833941;
}

double f_id(double x) {
        double r8833942 = 1.0;
        double r8833943 = -1.0;
        double r8833944 = x;
        double r8833945 = r8833943 * r8833944;
        double r8833946 = r8833942 + r8833945;
        return r8833946;
}


double f_of(float x) {
        float r8833947 = 1.0;
        float r8833948 = -1.0;
        float r8833949 = x;
        float r8833950 = r8833948 * r8833949;
        float r8833951 = r8833947 + r8833950;
        return r8833951;
}

double f_od(double x) {
        double r8833952 = 1.0;
        double r8833953 = -1.0;
        double r8833954 = x;
        double r8833955 = r8833953 * r8833954;
        double r8833956 = r8833952 + r8833955;
        return r8833956;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8833957, r8833958, r8833959, r8833960, r8833961;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8833957, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833958, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r8833959);
        mpfr_init(r8833960);
        mpfr_init(r8833961);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8833959, x, MPFR_RNDN);
        mpfr_mul(r8833960, r8833958, r8833959, MPFR_RNDN);
        mpfr_add(r8833961, r8833957, r8833960, MPFR_RNDN);
        return mpfr_get_d(r8833961, MPFR_RNDN);
}

static mpfr_t r8833962, r8833963, r8833964, r8833965, r8833966;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8833962, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833963, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r8833964);
        mpfr_init(r8833965);
        mpfr_init(r8833966);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8833964, x, MPFR_RNDN);
        mpfr_mul(r8833965, r8833963, r8833964, MPFR_RNDN);
        mpfr_add(r8833966, r8833962, r8833965, MPFR_RNDN);
        return mpfr_get_d(r8833966, MPFR_RNDN);
}

static mpfr_t r8833967, r8833968, r8833969, r8833970, r8833971;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8833967, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833968, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r8833969);
        mpfr_init(r8833970);
        mpfr_init(r8833971);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8833969, x, MPFR_RNDN);
        mpfr_mul(r8833970, r8833968, r8833969, MPFR_RNDN);
        mpfr_add(r8833971, r8833967, r8833970, MPFR_RNDN);
        return mpfr_get_d(r8833971, MPFR_RNDN);
}

