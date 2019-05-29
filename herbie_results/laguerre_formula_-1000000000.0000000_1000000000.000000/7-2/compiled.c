#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r13458224 = 1.0;
        float r13458225 = -2.0;
        float r13458226 = x;
        float r13458227 = r13458225 * r13458226;
        float r13458228 = r13458224 + r13458227;
        float r13458229 = 0.5;
        float r13458230 = r13458226 * r13458226;
        float r13458231 = r13458229 * r13458230;
        float r13458232 = r13458228 + r13458231;
        return r13458232;
}

double f_id(double x) {
        double r13458233 = 1.0;
        double r13458234 = -2.0;
        double r13458235 = x;
        double r13458236 = r13458234 * r13458235;
        double r13458237 = r13458233 + r13458236;
        double r13458238 = 0.5;
        double r13458239 = r13458235 * r13458235;
        double r13458240 = r13458238 * r13458239;
        double r13458241 = r13458237 + r13458240;
        return r13458241;
}


double f_of(float x) {
        float r13458242 = 1.0;
        float r13458243 = -2.0;
        float r13458244 = 0.5;
        float r13458245 = x;
        float r13458246 = r13458244 * r13458245;
        float r13458247 = r13458243 + r13458246;
        float r13458248 = r13458247 * r13458245;
        float r13458249 = r13458242 + r13458248;
        return r13458249;
}

double f_od(double x) {
        double r13458250 = 1.0;
        double r13458251 = -2.0;
        double r13458252 = 0.5;
        double r13458253 = x;
        double r13458254 = r13458252 * r13458253;
        double r13458255 = r13458251 + r13458254;
        double r13458256 = r13458255 * r13458253;
        double r13458257 = r13458250 + r13458256;
        return r13458257;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13458258, r13458259, r13458260, r13458261, r13458262, r13458263, r13458264, r13458265, r13458266;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13458258, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458259, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r13458260);
        mpfr_init(r13458261);
        mpfr_init(r13458262);
        mpfr_init_set_str(r13458263, "0.5", 10, MPFR_RNDN);
        mpfr_init(r13458264);
        mpfr_init(r13458265);
        mpfr_init(r13458266);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13458260, x, MPFR_RNDN);
        mpfr_mul(r13458261, r13458259, r13458260, MPFR_RNDN);
        mpfr_add(r13458262, r13458258, r13458261, MPFR_RNDN);
        ;
        mpfr_mul(r13458264, r13458260, r13458260, MPFR_RNDN);
        mpfr_mul(r13458265, r13458263, r13458264, MPFR_RNDN);
        mpfr_add(r13458266, r13458262, r13458265, MPFR_RNDN);
        return mpfr_get_d(r13458266, MPFR_RNDN);
}

static mpfr_t r13458267, r13458268, r13458269, r13458270, r13458271, r13458272, r13458273, r13458274;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13458267, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458268, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458269, "0.5", 10, MPFR_RNDN);
        mpfr_init(r13458270);
        mpfr_init(r13458271);
        mpfr_init(r13458272);
        mpfr_init(r13458273);
        mpfr_init(r13458274);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r13458270, x, MPFR_RNDN);
        mpfr_mul(r13458271, r13458269, r13458270, MPFR_RNDN);
        mpfr_add(r13458272, r13458268, r13458271, MPFR_RNDN);
        mpfr_mul(r13458273, r13458272, r13458270, MPFR_RNDN);
        mpfr_add(r13458274, r13458267, r13458273, MPFR_RNDN);
        return mpfr_get_d(r13458274, MPFR_RNDN);
}

static mpfr_t r13458275, r13458276, r13458277, r13458278, r13458279, r13458280, r13458281, r13458282;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13458275, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458276, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458277, "0.5", 10, MPFR_RNDN);
        mpfr_init(r13458278);
        mpfr_init(r13458279);
        mpfr_init(r13458280);
        mpfr_init(r13458281);
        mpfr_init(r13458282);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r13458278, x, MPFR_RNDN);
        mpfr_mul(r13458279, r13458277, r13458278, MPFR_RNDN);
        mpfr_add(r13458280, r13458276, r13458279, MPFR_RNDN);
        mpfr_mul(r13458281, r13458280, r13458278, MPFR_RNDN);
        mpfr_add(r13458282, r13458275, r13458281, MPFR_RNDN);
        return mpfr_get_d(r13458282, MPFR_RNDN);
}

