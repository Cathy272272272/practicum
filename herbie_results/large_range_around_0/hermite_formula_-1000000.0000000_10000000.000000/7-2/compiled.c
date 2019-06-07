#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r8204225 = -2.0;
        float r8204226 = 4.0;
        float r8204227 = x;
        float r8204228 = r8204227 * r8204227;
        float r8204229 = r8204226 * r8204228;
        float r8204230 = r8204225 + r8204229;
        return r8204230;
}

double f_id(double x) {
        double r8204231 = -2.0;
        double r8204232 = 4.0;
        double r8204233 = x;
        double r8204234 = r8204233 * r8204233;
        double r8204235 = r8204232 * r8204234;
        double r8204236 = r8204231 + r8204235;
        return r8204236;
}


double f_of(float x) {
        float r8204237 = -2.0;
        float r8204238 = 4.0;
        float r8204239 = x;
        float r8204240 = r8204239 * r8204239;
        float r8204241 = r8204238 * r8204240;
        float r8204242 = r8204237 + r8204241;
        return r8204242;
}

double f_od(double x) {
        double r8204243 = -2.0;
        double r8204244 = 4.0;
        double r8204245 = x;
        double r8204246 = r8204245 * r8204245;
        double r8204247 = r8204244 * r8204246;
        double r8204248 = r8204243 + r8204247;
        return r8204248;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8204249, r8204250, r8204251, r8204252, r8204253, r8204254;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8204249, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204250, "4.0", 10, MPFR_RNDN);
        mpfr_init(r8204251);
        mpfr_init(r8204252);
        mpfr_init(r8204253);
        mpfr_init(r8204254);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8204251, x, MPFR_RNDN);
        mpfr_mul(r8204252, r8204251, r8204251, MPFR_RNDN);
        mpfr_mul(r8204253, r8204250, r8204252, MPFR_RNDN);
        mpfr_add(r8204254, r8204249, r8204253, MPFR_RNDN);
        return mpfr_get_d(r8204254, MPFR_RNDN);
}

static mpfr_t r8204255, r8204256, r8204257, r8204258, r8204259, r8204260;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8204255, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204256, "4.0", 10, MPFR_RNDN);
        mpfr_init(r8204257);
        mpfr_init(r8204258);
        mpfr_init(r8204259);
        mpfr_init(r8204260);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8204257, x, MPFR_RNDN);
        mpfr_mul(r8204258, r8204257, r8204257, MPFR_RNDN);
        mpfr_mul(r8204259, r8204256, r8204258, MPFR_RNDN);
        mpfr_add(r8204260, r8204255, r8204259, MPFR_RNDN);
        return mpfr_get_d(r8204260, MPFR_RNDN);
}

static mpfr_t r8204261, r8204262, r8204263, r8204264, r8204265, r8204266;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8204261, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204262, "4.0", 10, MPFR_RNDN);
        mpfr_init(r8204263);
        mpfr_init(r8204264);
        mpfr_init(r8204265);
        mpfr_init(r8204266);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8204263, x, MPFR_RNDN);
        mpfr_mul(r8204264, r8204263, r8204263, MPFR_RNDN);
        mpfr_mul(r8204265, r8204262, r8204264, MPFR_RNDN);
        mpfr_add(r8204266, r8204261, r8204265, MPFR_RNDN);
        return mpfr_get_d(r8204266, MPFR_RNDN);
}

