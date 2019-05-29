#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r5021218 = -1.5;
        float r5021219 = x;
        float r5021220 = r5021218 * r5021219;
        float r5021221 = 2.5;
        float r5021222 = r5021219 * r5021219;
        float r5021223 = r5021222 * r5021219;
        float r5021224 = r5021221 * r5021223;
        float r5021225 = r5021220 + r5021224;
        return r5021225;
}

double f_id(double x) {
        double r5021226 = -1.5;
        double r5021227 = x;
        double r5021228 = r5021226 * r5021227;
        double r5021229 = 2.5;
        double r5021230 = r5021227 * r5021227;
        double r5021231 = r5021230 * r5021227;
        double r5021232 = r5021229 * r5021231;
        double r5021233 = r5021228 + r5021232;
        return r5021233;
}


double f_of(float x) {
        float r5021234 = -1.5;
        float r5021235 = x;
        float r5021236 = r5021234 * r5021235;
        float r5021237 = 2.5;
        float r5021238 = 3;
        float r5021239 = pow(r5021235, r5021238);
        float r5021240 = r5021237 * r5021239;
        float r5021241 = r5021236 + r5021240;
        return r5021241;
}

double f_od(double x) {
        double r5021242 = -1.5;
        double r5021243 = x;
        double r5021244 = r5021242 * r5021243;
        double r5021245 = 2.5;
        double r5021246 = 3;
        double r5021247 = pow(r5021243, r5021246);
        double r5021248 = r5021245 * r5021247;
        double r5021249 = r5021244 + r5021248;
        return r5021249;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5021250, r5021251, r5021252, r5021253, r5021254, r5021255, r5021256, r5021257;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5021250, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r5021251);
        mpfr_init(r5021252);
        mpfr_init_set_str(r5021253, "2.5", 10, MPFR_RNDN);
        mpfr_init(r5021254);
        mpfr_init(r5021255);
        mpfr_init(r5021256);
        mpfr_init(r5021257);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5021251, x, MPFR_RNDN);
        mpfr_mul(r5021252, r5021250, r5021251, MPFR_RNDN);
        ;
        mpfr_mul(r5021254, r5021251, r5021251, MPFR_RNDN);
        mpfr_mul(r5021255, r5021254, r5021251, MPFR_RNDN);
        mpfr_mul(r5021256, r5021253, r5021255, MPFR_RNDN);
        mpfr_add(r5021257, r5021252, r5021256, MPFR_RNDN);
        return mpfr_get_d(r5021257, MPFR_RNDN);
}

static mpfr_t r5021258, r5021259, r5021260, r5021261, r5021262, r5021263, r5021264, r5021265;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5021258, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r5021259);
        mpfr_init(r5021260);
        mpfr_init_set_str(r5021261, "2.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021262, "3", 10, MPFR_RNDN);
        mpfr_init(r5021263);
        mpfr_init(r5021264);
        mpfr_init(r5021265);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5021259, x, MPFR_RNDN);
        mpfr_mul(r5021260, r5021258, r5021259, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r5021263, r5021259, r5021262, MPFR_RNDN);
        mpfr_mul(r5021264, r5021261, r5021263, MPFR_RNDN);
        mpfr_add(r5021265, r5021260, r5021264, MPFR_RNDN);
        return mpfr_get_d(r5021265, MPFR_RNDN);
}

static mpfr_t r5021266, r5021267, r5021268, r5021269, r5021270, r5021271, r5021272, r5021273;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5021266, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r5021267);
        mpfr_init(r5021268);
        mpfr_init_set_str(r5021269, "2.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021270, "3", 10, MPFR_RNDN);
        mpfr_init(r5021271);
        mpfr_init(r5021272);
        mpfr_init(r5021273);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5021267, x, MPFR_RNDN);
        mpfr_mul(r5021268, r5021266, r5021267, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r5021271, r5021267, r5021270, MPFR_RNDN);
        mpfr_mul(r5021272, r5021269, r5021271, MPFR_RNDN);
        mpfr_add(r5021273, r5021268, r5021272, MPFR_RNDN);
        return mpfr_get_d(r5021273, MPFR_RNDN);
}

