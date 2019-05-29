#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7056267 = -0.5;
        float r7056268 = 1.5;
        float r7056269 = x;
        float r7056270 = r7056269 * r7056269;
        float r7056271 = r7056268 * r7056270;
        float r7056272 = r7056267 + r7056271;
        return r7056272;
}

double f_id(double x) {
        double r7056273 = -0.5;
        double r7056274 = 1.5;
        double r7056275 = x;
        double r7056276 = r7056275 * r7056275;
        double r7056277 = r7056274 * r7056276;
        double r7056278 = r7056273 + r7056277;
        return r7056278;
}


double f_of(float x) {
        float r7056279 = -0.5;
        float r7056280 = 1.5;
        float r7056281 = x;
        float r7056282 = r7056281 * r7056281;
        float r7056283 = r7056280 * r7056282;
        float r7056284 = r7056279 + r7056283;
        return r7056284;
}

double f_od(double x) {
        double r7056285 = -0.5;
        double r7056286 = 1.5;
        double r7056287 = x;
        double r7056288 = r7056287 * r7056287;
        double r7056289 = r7056286 * r7056288;
        double r7056290 = r7056285 + r7056289;
        return r7056290;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7056291, r7056292, r7056293, r7056294, r7056295, r7056296;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7056291, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056292, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7056293);
        mpfr_init(r7056294);
        mpfr_init(r7056295);
        mpfr_init(r7056296);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7056293, x, MPFR_RNDN);
        mpfr_mul(r7056294, r7056293, r7056293, MPFR_RNDN);
        mpfr_mul(r7056295, r7056292, r7056294, MPFR_RNDN);
        mpfr_add(r7056296, r7056291, r7056295, MPFR_RNDN);
        return mpfr_get_d(r7056296, MPFR_RNDN);
}

static mpfr_t r7056297, r7056298, r7056299, r7056300, r7056301, r7056302;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7056297, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056298, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7056299);
        mpfr_init(r7056300);
        mpfr_init(r7056301);
        mpfr_init(r7056302);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7056299, x, MPFR_RNDN);
        mpfr_mul(r7056300, r7056299, r7056299, MPFR_RNDN);
        mpfr_mul(r7056301, r7056298, r7056300, MPFR_RNDN);
        mpfr_add(r7056302, r7056297, r7056301, MPFR_RNDN);
        return mpfr_get_d(r7056302, MPFR_RNDN);
}

static mpfr_t r7056303, r7056304, r7056305, r7056306, r7056307, r7056308;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7056303, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056304, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7056305);
        mpfr_init(r7056306);
        mpfr_init(r7056307);
        mpfr_init(r7056308);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7056305, x, MPFR_RNDN);
        mpfr_mul(r7056306, r7056305, r7056305, MPFR_RNDN);
        mpfr_mul(r7056307, r7056304, r7056306, MPFR_RNDN);
        mpfr_add(r7056308, r7056303, r7056307, MPFR_RNDN);
        return mpfr_get_d(r7056308, MPFR_RNDN);
}

