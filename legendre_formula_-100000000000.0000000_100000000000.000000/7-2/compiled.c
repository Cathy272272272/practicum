#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6764933 = -0.5;
        float r6764934 = 1.5;
        float r6764935 = x;
        float r6764936 = r6764935 * r6764935;
        float r6764937 = r6764934 * r6764936;
        float r6764938 = r6764933 + r6764937;
        return r6764938;
}

double f_id(double x) {
        double r6764939 = -0.5;
        double r6764940 = 1.5;
        double r6764941 = x;
        double r6764942 = r6764941 * r6764941;
        double r6764943 = r6764940 * r6764942;
        double r6764944 = r6764939 + r6764943;
        return r6764944;
}


double f_of(float x) {
        float r6764945 = -0.5;
        float r6764946 = 1.5;
        float r6764947 = x;
        float r6764948 = r6764947 * r6764947;
        float r6764949 = r6764946 * r6764948;
        float r6764950 = r6764945 + r6764949;
        return r6764950;
}

double f_od(double x) {
        double r6764951 = -0.5;
        double r6764952 = 1.5;
        double r6764953 = x;
        double r6764954 = r6764953 * r6764953;
        double r6764955 = r6764952 * r6764954;
        double r6764956 = r6764951 + r6764955;
        return r6764956;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6764957, r6764958, r6764959, r6764960, r6764961, r6764962;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6764957, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764958, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6764959);
        mpfr_init(r6764960);
        mpfr_init(r6764961);
        mpfr_init(r6764962);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6764959, x, MPFR_RNDN);
        mpfr_mul(r6764960, r6764959, r6764959, MPFR_RNDN);
        mpfr_mul(r6764961, r6764958, r6764960, MPFR_RNDN);
        mpfr_add(r6764962, r6764957, r6764961, MPFR_RNDN);
        return mpfr_get_d(r6764962, MPFR_RNDN);
}

static mpfr_t r6764963, r6764964, r6764965, r6764966, r6764967, r6764968;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6764963, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764964, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6764965);
        mpfr_init(r6764966);
        mpfr_init(r6764967);
        mpfr_init(r6764968);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6764965, x, MPFR_RNDN);
        mpfr_mul(r6764966, r6764965, r6764965, MPFR_RNDN);
        mpfr_mul(r6764967, r6764964, r6764966, MPFR_RNDN);
        mpfr_add(r6764968, r6764963, r6764967, MPFR_RNDN);
        return mpfr_get_d(r6764968, MPFR_RNDN);
}

static mpfr_t r6764969, r6764970, r6764971, r6764972, r6764973, r6764974;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6764969, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764970, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6764971);
        mpfr_init(r6764972);
        mpfr_init(r6764973);
        mpfr_init(r6764974);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6764971, x, MPFR_RNDN);
        mpfr_mul(r6764972, r6764971, r6764971, MPFR_RNDN);
        mpfr_mul(r6764973, r6764970, r6764972, MPFR_RNDN);
        mpfr_add(r6764974, r6764969, r6764973, MPFR_RNDN);
        return mpfr_get_d(r6764974, MPFR_RNDN);
}

