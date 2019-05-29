#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r9373937 = 1.0;
        float r9373938 = -2.0;
        float r9373939 = x;
        float r9373940 = r9373938 * r9373939;
        float r9373941 = r9373937 + r9373940;
        float r9373942 = 0.5;
        float r9373943 = r9373939 * r9373939;
        float r9373944 = r9373942 * r9373943;
        float r9373945 = r9373941 + r9373944;
        return r9373945;
}

double f_id(double x) {
        double r9373946 = 1.0;
        double r9373947 = -2.0;
        double r9373948 = x;
        double r9373949 = r9373947 * r9373948;
        double r9373950 = r9373946 + r9373949;
        double r9373951 = 0.5;
        double r9373952 = r9373948 * r9373948;
        double r9373953 = r9373951 * r9373952;
        double r9373954 = r9373950 + r9373953;
        return r9373954;
}


double f_of(float x) {
        float r9373955 = 1.0;
        float r9373956 = -2.0;
        float r9373957 = 0.5;
        float r9373958 = x;
        float r9373959 = r9373957 * r9373958;
        float r9373960 = r9373956 + r9373959;
        float r9373961 = r9373960 * r9373958;
        float r9373962 = r9373955 + r9373961;
        return r9373962;
}

double f_od(double x) {
        double r9373963 = 1.0;
        double r9373964 = -2.0;
        double r9373965 = 0.5;
        double r9373966 = x;
        double r9373967 = r9373965 * r9373966;
        double r9373968 = r9373964 + r9373967;
        double r9373969 = r9373968 * r9373966;
        double r9373970 = r9373963 + r9373969;
        return r9373970;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9373971, r9373972, r9373973, r9373974, r9373975, r9373976, r9373977, r9373978, r9373979;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373971, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373972, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r9373973);
        mpfr_init(r9373974);
        mpfr_init(r9373975);
        mpfr_init_set_str(r9373976, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9373977);
        mpfr_init(r9373978);
        mpfr_init(r9373979);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9373973, x, MPFR_RNDN);
        mpfr_mul(r9373974, r9373972, r9373973, MPFR_RNDN);
        mpfr_add(r9373975, r9373971, r9373974, MPFR_RNDN);
        ;
        mpfr_mul(r9373977, r9373973, r9373973, MPFR_RNDN);
        mpfr_mul(r9373978, r9373976, r9373977, MPFR_RNDN);
        mpfr_add(r9373979, r9373975, r9373978, MPFR_RNDN);
        return mpfr_get_d(r9373979, MPFR_RNDN);
}

static mpfr_t r9373980, r9373981, r9373982, r9373983, r9373984, r9373985, r9373986, r9373987;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373980, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373981, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373982, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9373983);
        mpfr_init(r9373984);
        mpfr_init(r9373985);
        mpfr_init(r9373986);
        mpfr_init(r9373987);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r9373983, x, MPFR_RNDN);
        mpfr_mul(r9373984, r9373982, r9373983, MPFR_RNDN);
        mpfr_add(r9373985, r9373981, r9373984, MPFR_RNDN);
        mpfr_mul(r9373986, r9373985, r9373983, MPFR_RNDN);
        mpfr_add(r9373987, r9373980, r9373986, MPFR_RNDN);
        return mpfr_get_d(r9373987, MPFR_RNDN);
}

static mpfr_t r9373988, r9373989, r9373990, r9373991, r9373992, r9373993, r9373994, r9373995;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373988, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373989, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373990, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9373991);
        mpfr_init(r9373992);
        mpfr_init(r9373993);
        mpfr_init(r9373994);
        mpfr_init(r9373995);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r9373991, x, MPFR_RNDN);
        mpfr_mul(r9373992, r9373990, r9373991, MPFR_RNDN);
        mpfr_add(r9373993, r9373989, r9373992, MPFR_RNDN);
        mpfr_mul(r9373994, r9373993, r9373991, MPFR_RNDN);
        mpfr_add(r9373995, r9373988, r9373994, MPFR_RNDN);
        return mpfr_get_d(r9373995, MPFR_RNDN);
}

