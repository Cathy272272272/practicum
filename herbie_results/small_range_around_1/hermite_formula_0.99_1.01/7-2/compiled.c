#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r61033251 = -2.0;
        float r61033252 = 4.0;
        float r61033253 = x;
        float r61033254 = r61033253 * r61033253;
        float r61033255 = r61033252 * r61033254;
        float r61033256 = r61033251 + r61033255;
        return r61033256;
}

double f_id(double x) {
        double r61033257 = -2.0;
        double r61033258 = 4.0;
        double r61033259 = x;
        double r61033260 = r61033259 * r61033259;
        double r61033261 = r61033258 * r61033260;
        double r61033262 = r61033257 + r61033261;
        return r61033262;
}


double f_of(float x) {
        float r61033263 = -2.0;
        float r61033264 = 4.0;
        float r61033265 = x;
        float r61033266 = r61033265 * r61033265;
        float r61033267 = r61033264 * r61033266;
        float r61033268 = r61033263 + r61033267;
        return r61033268;
}

double f_od(double x) {
        double r61033269 = -2.0;
        double r61033270 = 4.0;
        double r61033271 = x;
        double r61033272 = r61033271 * r61033271;
        double r61033273 = r61033270 * r61033272;
        double r61033274 = r61033269 + r61033273;
        return r61033274;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61033275, r61033276, r61033277, r61033278, r61033279, r61033280;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033275, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61033276, "4.0", 10, MPFR_RNDN);
        mpfr_init(r61033277);
        mpfr_init(r61033278);
        mpfr_init(r61033279);
        mpfr_init(r61033280);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r61033277, x, MPFR_RNDN);
        mpfr_mul(r61033278, r61033277, r61033277, MPFR_RNDN);
        mpfr_mul(r61033279, r61033276, r61033278, MPFR_RNDN);
        mpfr_add(r61033280, r61033275, r61033279, MPFR_RNDN);
        return mpfr_get_d(r61033280, MPFR_RNDN);
}

static mpfr_t r61033281, r61033282, r61033283, r61033284, r61033285, r61033286;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033281, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61033282, "4.0", 10, MPFR_RNDN);
        mpfr_init(r61033283);
        mpfr_init(r61033284);
        mpfr_init(r61033285);
        mpfr_init(r61033286);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r61033283, x, MPFR_RNDN);
        mpfr_mul(r61033284, r61033283, r61033283, MPFR_RNDN);
        mpfr_mul(r61033285, r61033282, r61033284, MPFR_RNDN);
        mpfr_add(r61033286, r61033281, r61033285, MPFR_RNDN);
        return mpfr_get_d(r61033286, MPFR_RNDN);
}

static mpfr_t r61033287, r61033288, r61033289, r61033290, r61033291, r61033292;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033287, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61033288, "4.0", 10, MPFR_RNDN);
        mpfr_init(r61033289);
        mpfr_init(r61033290);
        mpfr_init(r61033291);
        mpfr_init(r61033292);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r61033289, x, MPFR_RNDN);
        mpfr_mul(r61033290, r61033289, r61033289, MPFR_RNDN);
        mpfr_mul(r61033291, r61033288, r61033290, MPFR_RNDN);
        mpfr_add(r61033292, r61033287, r61033291, MPFR_RNDN);
        return mpfr_get_d(r61033292, MPFR_RNDN);
}

