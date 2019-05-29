#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7079923 = -2.0;
        float r7079924 = 4.0;
        float r7079925 = x;
        float r7079926 = r7079925 * r7079925;
        float r7079927 = r7079924 * r7079926;
        float r7079928 = r7079923 + r7079927;
        return r7079928;
}

double f_id(double x) {
        double r7079929 = -2.0;
        double r7079930 = 4.0;
        double r7079931 = x;
        double r7079932 = r7079931 * r7079931;
        double r7079933 = r7079930 * r7079932;
        double r7079934 = r7079929 + r7079933;
        return r7079934;
}


double f_of(float x) {
        float r7079935 = -2.0;
        float r7079936 = 4.0;
        float r7079937 = x;
        float r7079938 = r7079937 * r7079937;
        float r7079939 = r7079936 * r7079938;
        float r7079940 = r7079935 + r7079939;
        return r7079940;
}

double f_od(double x) {
        double r7079941 = -2.0;
        double r7079942 = 4.0;
        double r7079943 = x;
        double r7079944 = r7079943 * r7079943;
        double r7079945 = r7079942 * r7079944;
        double r7079946 = r7079941 + r7079945;
        return r7079946;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7079947, r7079948, r7079949, r7079950, r7079951, r7079952;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7079947, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079948, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7079949);
        mpfr_init(r7079950);
        mpfr_init(r7079951);
        mpfr_init(r7079952);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7079949, x, MPFR_RNDN);
        mpfr_mul(r7079950, r7079949, r7079949, MPFR_RNDN);
        mpfr_mul(r7079951, r7079948, r7079950, MPFR_RNDN);
        mpfr_add(r7079952, r7079947, r7079951, MPFR_RNDN);
        return mpfr_get_d(r7079952, MPFR_RNDN);
}

static mpfr_t r7079953, r7079954, r7079955, r7079956, r7079957, r7079958;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7079953, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079954, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7079955);
        mpfr_init(r7079956);
        mpfr_init(r7079957);
        mpfr_init(r7079958);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7079955, x, MPFR_RNDN);
        mpfr_mul(r7079956, r7079955, r7079955, MPFR_RNDN);
        mpfr_mul(r7079957, r7079954, r7079956, MPFR_RNDN);
        mpfr_add(r7079958, r7079953, r7079957, MPFR_RNDN);
        return mpfr_get_d(r7079958, MPFR_RNDN);
}

static mpfr_t r7079959, r7079960, r7079961, r7079962, r7079963, r7079964;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7079959, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079960, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7079961);
        mpfr_init(r7079962);
        mpfr_init(r7079963);
        mpfr_init(r7079964);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7079961, x, MPFR_RNDN);
        mpfr_mul(r7079962, r7079961, r7079961, MPFR_RNDN);
        mpfr_mul(r7079963, r7079960, r7079962, MPFR_RNDN);
        mpfr_add(r7079964, r7079959, r7079963, MPFR_RNDN);
        return mpfr_get_d(r7079964, MPFR_RNDN);
}

