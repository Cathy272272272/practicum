#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r8924896 = -0.5;
        float r8924897 = 1.5;
        float r8924898 = x;
        float r8924899 = r8924898 * r8924898;
        float r8924900 = r8924897 * r8924899;
        float r8924901 = r8924896 + r8924900;
        return r8924901;
}

double f_id(double x) {
        double r8924902 = -0.5;
        double r8924903 = 1.5;
        double r8924904 = x;
        double r8924905 = r8924904 * r8924904;
        double r8924906 = r8924903 * r8924905;
        double r8924907 = r8924902 + r8924906;
        return r8924907;
}


double f_of(float x) {
        float r8924908 = -0.5;
        float r8924909 = r8924908 * r8924908;
        float r8924910 = 1.5;
        float r8924911 = x;
        float r8924912 = r8924911 * r8924911;
        float r8924913 = r8924910 * r8924912;
        float r8924914 = r8924913 * r8924913;
        float r8924915 = r8924909 - r8924914;
        float r8924916 = r8924908 - r8924913;
        float r8924917 = r8924915 / r8924916;
        return r8924917;
}

double f_od(double x) {
        double r8924918 = -0.5;
        double r8924919 = r8924918 * r8924918;
        double r8924920 = 1.5;
        double r8924921 = x;
        double r8924922 = r8924921 * r8924921;
        double r8924923 = r8924920 * r8924922;
        double r8924924 = r8924923 * r8924923;
        double r8924925 = r8924919 - r8924924;
        double r8924926 = r8924918 - r8924923;
        double r8924927 = r8924925 / r8924926;
        return r8924927;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8924928, r8924929, r8924930, r8924931, r8924932, r8924933;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8924928, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924929, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8924930);
        mpfr_init(r8924931);
        mpfr_init(r8924932);
        mpfr_init(r8924933);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8924930, x, MPFR_RNDN);
        mpfr_mul(r8924931, r8924930, r8924930, MPFR_RNDN);
        mpfr_mul(r8924932, r8924929, r8924931, MPFR_RNDN);
        mpfr_add(r8924933, r8924928, r8924932, MPFR_RNDN);
        return mpfr_get_d(r8924933, MPFR_RNDN);
}

static mpfr_t r8924934, r8924935, r8924936, r8924937, r8924938, r8924939, r8924940, r8924941, r8924942, r8924943;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8924934, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r8924935);
        mpfr_init_set_str(r8924936, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8924937);
        mpfr_init(r8924938);
        mpfr_init(r8924939);
        mpfr_init(r8924940);
        mpfr_init(r8924941);
        mpfr_init(r8924942);
        mpfr_init(r8924943);
}

double f_fm(double x) {
        ;
        mpfr_mul(r8924935, r8924934, r8924934, MPFR_RNDN);
        ;
        mpfr_set_d(r8924937, x, MPFR_RNDN);
        mpfr_mul(r8924938, r8924937, r8924937, MPFR_RNDN);
        mpfr_mul(r8924939, r8924936, r8924938, MPFR_RNDN);
        mpfr_mul(r8924940, r8924939, r8924939, MPFR_RNDN);
        mpfr_sub(r8924941, r8924935, r8924940, MPFR_RNDN);
        mpfr_sub(r8924942, r8924934, r8924939, MPFR_RNDN);
        mpfr_div(r8924943, r8924941, r8924942, MPFR_RNDN);
        return mpfr_get_d(r8924943, MPFR_RNDN);
}

static mpfr_t r8924944, r8924945, r8924946, r8924947, r8924948, r8924949, r8924950, r8924951, r8924952, r8924953;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8924944, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r8924945);
        mpfr_init_set_str(r8924946, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8924947);
        mpfr_init(r8924948);
        mpfr_init(r8924949);
        mpfr_init(r8924950);
        mpfr_init(r8924951);
        mpfr_init(r8924952);
        mpfr_init(r8924953);
}

double f_dm(double x) {
        ;
        mpfr_mul(r8924945, r8924944, r8924944, MPFR_RNDN);
        ;
        mpfr_set_d(r8924947, x, MPFR_RNDN);
        mpfr_mul(r8924948, r8924947, r8924947, MPFR_RNDN);
        mpfr_mul(r8924949, r8924946, r8924948, MPFR_RNDN);
        mpfr_mul(r8924950, r8924949, r8924949, MPFR_RNDN);
        mpfr_sub(r8924951, r8924945, r8924950, MPFR_RNDN);
        mpfr_sub(r8924952, r8924944, r8924949, MPFR_RNDN);
        mpfr_div(r8924953, r8924951, r8924952, MPFR_RNDN);
        return mpfr_get_d(r8924953, MPFR_RNDN);
}

