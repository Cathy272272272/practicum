#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r9853052 = 1.0;
        float r9853053 = -2.0;
        float r9853054 = x;
        float r9853055 = r9853053 * r9853054;
        float r9853056 = r9853052 + r9853055;
        float r9853057 = 0.5;
        float r9853058 = r9853054 * r9853054;
        float r9853059 = r9853057 * r9853058;
        float r9853060 = r9853056 + r9853059;
        return r9853060;
}

double f_id(double x) {
        double r9853061 = 1.0;
        double r9853062 = -2.0;
        double r9853063 = x;
        double r9853064 = r9853062 * r9853063;
        double r9853065 = r9853061 + r9853064;
        double r9853066 = 0.5;
        double r9853067 = r9853063 * r9853063;
        double r9853068 = r9853066 * r9853067;
        double r9853069 = r9853065 + r9853068;
        return r9853069;
}


double f_of(float x) {
        float r9853070 = 1.0;
        float r9853071 = -2.0;
        float r9853072 = 0.5;
        float r9853073 = x;
        float r9853074 = r9853072 * r9853073;
        float r9853075 = r9853071 + r9853074;
        float r9853076 = r9853075 * r9853073;
        float r9853077 = r9853070 + r9853076;
        return r9853077;
}

double f_od(double x) {
        double r9853078 = 1.0;
        double r9853079 = -2.0;
        double r9853080 = 0.5;
        double r9853081 = x;
        double r9853082 = r9853080 * r9853081;
        double r9853083 = r9853079 + r9853082;
        double r9853084 = r9853083 * r9853081;
        double r9853085 = r9853078 + r9853084;
        return r9853085;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9853086, r9853087, r9853088, r9853089, r9853090, r9853091, r9853092, r9853093, r9853094;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9853086, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853087, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r9853088);
        mpfr_init(r9853089);
        mpfr_init(r9853090);
        mpfr_init_set_str(r9853091, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9853092);
        mpfr_init(r9853093);
        mpfr_init(r9853094);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9853088, x, MPFR_RNDN);
        mpfr_mul(r9853089, r9853087, r9853088, MPFR_RNDN);
        mpfr_add(r9853090, r9853086, r9853089, MPFR_RNDN);
        ;
        mpfr_mul(r9853092, r9853088, r9853088, MPFR_RNDN);
        mpfr_mul(r9853093, r9853091, r9853092, MPFR_RNDN);
        mpfr_add(r9853094, r9853090, r9853093, MPFR_RNDN);
        return mpfr_get_d(r9853094, MPFR_RNDN);
}

static mpfr_t r9853095, r9853096, r9853097, r9853098, r9853099, r9853100, r9853101, r9853102;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9853095, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853096, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853097, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9853098);
        mpfr_init(r9853099);
        mpfr_init(r9853100);
        mpfr_init(r9853101);
        mpfr_init(r9853102);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r9853098, x, MPFR_RNDN);
        mpfr_mul(r9853099, r9853097, r9853098, MPFR_RNDN);
        mpfr_add(r9853100, r9853096, r9853099, MPFR_RNDN);
        mpfr_mul(r9853101, r9853100, r9853098, MPFR_RNDN);
        mpfr_add(r9853102, r9853095, r9853101, MPFR_RNDN);
        return mpfr_get_d(r9853102, MPFR_RNDN);
}

static mpfr_t r9853103, r9853104, r9853105, r9853106, r9853107, r9853108, r9853109, r9853110;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9853103, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853104, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853105, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9853106);
        mpfr_init(r9853107);
        mpfr_init(r9853108);
        mpfr_init(r9853109);
        mpfr_init(r9853110);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r9853106, x, MPFR_RNDN);
        mpfr_mul(r9853107, r9853105, r9853106, MPFR_RNDN);
        mpfr_add(r9853108, r9853104, r9853107, MPFR_RNDN);
        mpfr_mul(r9853109, r9853108, r9853106, MPFR_RNDN);
        mpfr_add(r9853110, r9853103, r9853109, MPFR_RNDN);
        return mpfr_get_d(r9853110, MPFR_RNDN);
}

