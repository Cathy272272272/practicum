#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7403023 = -0.5;
        float r7403024 = 1.5;
        float r7403025 = x;
        float r7403026 = r7403025 * r7403025;
        float r7403027 = r7403024 * r7403026;
        float r7403028 = r7403023 + r7403027;
        return r7403028;
}

double f_id(double x) {
        double r7403029 = -0.5;
        double r7403030 = 1.5;
        double r7403031 = x;
        double r7403032 = r7403031 * r7403031;
        double r7403033 = r7403030 * r7403032;
        double r7403034 = r7403029 + r7403033;
        return r7403034;
}


double f_of(float x) {
        float r7403035 = -0.5;
        float r7403036 = 1.5;
        float r7403037 = x;
        float r7403038 = r7403037 * r7403037;
        float r7403039 = r7403036 * r7403038;
        float r7403040 = r7403035 + r7403039;
        return r7403040;
}

double f_od(double x) {
        double r7403041 = -0.5;
        double r7403042 = 1.5;
        double r7403043 = x;
        double r7403044 = r7403043 * r7403043;
        double r7403045 = r7403042 * r7403044;
        double r7403046 = r7403041 + r7403045;
        return r7403046;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7403047, r7403048, r7403049, r7403050, r7403051, r7403052;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7403047, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7403048, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7403049);
        mpfr_init(r7403050);
        mpfr_init(r7403051);
        mpfr_init(r7403052);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7403049, x, MPFR_RNDN);
        mpfr_mul(r7403050, r7403049, r7403049, MPFR_RNDN);
        mpfr_mul(r7403051, r7403048, r7403050, MPFR_RNDN);
        mpfr_add(r7403052, r7403047, r7403051, MPFR_RNDN);
        return mpfr_get_d(r7403052, MPFR_RNDN);
}

static mpfr_t r7403053, r7403054, r7403055, r7403056, r7403057, r7403058;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7403053, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7403054, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7403055);
        mpfr_init(r7403056);
        mpfr_init(r7403057);
        mpfr_init(r7403058);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7403055, x, MPFR_RNDN);
        mpfr_mul(r7403056, r7403055, r7403055, MPFR_RNDN);
        mpfr_mul(r7403057, r7403054, r7403056, MPFR_RNDN);
        mpfr_add(r7403058, r7403053, r7403057, MPFR_RNDN);
        return mpfr_get_d(r7403058, MPFR_RNDN);
}

static mpfr_t r7403059, r7403060, r7403061, r7403062, r7403063, r7403064;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7403059, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7403060, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7403061);
        mpfr_init(r7403062);
        mpfr_init(r7403063);
        mpfr_init(r7403064);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7403061, x, MPFR_RNDN);
        mpfr_mul(r7403062, r7403061, r7403061, MPFR_RNDN);
        mpfr_mul(r7403063, r7403060, r7403062, MPFR_RNDN);
        mpfr_add(r7403064, r7403059, r7403063, MPFR_RNDN);
        return mpfr_get_d(r7403064, MPFR_RNDN);
}

