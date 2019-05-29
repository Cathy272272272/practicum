#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6861058 = -0.5;
        float r6861059 = 1.5;
        float r6861060 = x;
        float r6861061 = r6861060 * r6861060;
        float r6861062 = r6861059 * r6861061;
        float r6861063 = r6861058 + r6861062;
        return r6861063;
}

double f_id(double x) {
        double r6861064 = -0.5;
        double r6861065 = 1.5;
        double r6861066 = x;
        double r6861067 = r6861066 * r6861066;
        double r6861068 = r6861065 * r6861067;
        double r6861069 = r6861064 + r6861068;
        return r6861069;
}


double f_of(float x) {
        float r6861070 = -0.5;
        float r6861071 = 1.5;
        float r6861072 = x;
        float r6861073 = r6861072 * r6861072;
        float r6861074 = r6861071 * r6861073;
        float r6861075 = r6861070 + r6861074;
        return r6861075;
}

double f_od(double x) {
        double r6861076 = -0.5;
        double r6861077 = 1.5;
        double r6861078 = x;
        double r6861079 = r6861078 * r6861078;
        double r6861080 = r6861077 * r6861079;
        double r6861081 = r6861076 + r6861080;
        return r6861081;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6861082, r6861083, r6861084, r6861085, r6861086, r6861087;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6861082, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861083, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6861084);
        mpfr_init(r6861085);
        mpfr_init(r6861086);
        mpfr_init(r6861087);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6861084, x, MPFR_RNDN);
        mpfr_mul(r6861085, r6861084, r6861084, MPFR_RNDN);
        mpfr_mul(r6861086, r6861083, r6861085, MPFR_RNDN);
        mpfr_add(r6861087, r6861082, r6861086, MPFR_RNDN);
        return mpfr_get_d(r6861087, MPFR_RNDN);
}

static mpfr_t r6861088, r6861089, r6861090, r6861091, r6861092, r6861093;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6861088, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861089, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6861090);
        mpfr_init(r6861091);
        mpfr_init(r6861092);
        mpfr_init(r6861093);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6861090, x, MPFR_RNDN);
        mpfr_mul(r6861091, r6861090, r6861090, MPFR_RNDN);
        mpfr_mul(r6861092, r6861089, r6861091, MPFR_RNDN);
        mpfr_add(r6861093, r6861088, r6861092, MPFR_RNDN);
        return mpfr_get_d(r6861093, MPFR_RNDN);
}

static mpfr_t r6861094, r6861095, r6861096, r6861097, r6861098, r6861099;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6861094, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861095, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6861096);
        mpfr_init(r6861097);
        mpfr_init(r6861098);
        mpfr_init(r6861099);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6861096, x, MPFR_RNDN);
        mpfr_mul(r6861097, r6861096, r6861096, MPFR_RNDN);
        mpfr_mul(r6861098, r6861095, r6861097, MPFR_RNDN);
        mpfr_add(r6861099, r6861094, r6861098, MPFR_RNDN);
        return mpfr_get_d(r6861099, MPFR_RNDN);
}

