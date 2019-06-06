#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r20713262 = 1.0;
        float r20713263 = -2.0;
        float r20713264 = x;
        float r20713265 = r20713263 * r20713264;
        float r20713266 = r20713262 + r20713265;
        float r20713267 = 0.5;
        float r20713268 = r20713264 * r20713264;
        float r20713269 = r20713267 * r20713268;
        float r20713270 = r20713266 + r20713269;
        return r20713270;
}

double f_id(double x) {
        double r20713271 = 1.0;
        double r20713272 = -2.0;
        double r20713273 = x;
        double r20713274 = r20713272 * r20713273;
        double r20713275 = r20713271 + r20713274;
        double r20713276 = 0.5;
        double r20713277 = r20713273 * r20713273;
        double r20713278 = r20713276 * r20713277;
        double r20713279 = r20713275 + r20713278;
        return r20713279;
}


double f_of(float x) {
        float r20713280 = 0.5;
        float r20713281 = x;
        float r20713282 = 2;
        float r20713283 = pow(r20713281, r20713282);
        float r20713284 = r20713280 * r20713283;
        float r20713285 = 1.0;
        float r20713286 = r20713284 + r20713285;
        float r20713287 = 2.0;
        float r20713288 = r20713287 * r20713281;
        float r20713289 = r20713286 - r20713288;
        return r20713289;
}

double f_od(double x) {
        double r20713290 = 0.5;
        double r20713291 = x;
        double r20713292 = 2;
        double r20713293 = pow(r20713291, r20713292);
        double r20713294 = r20713290 * r20713293;
        double r20713295 = 1.0;
        double r20713296 = r20713294 + r20713295;
        double r20713297 = 2.0;
        double r20713298 = r20713297 * r20713291;
        double r20713299 = r20713296 - r20713298;
        return r20713299;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20713300, r20713301, r20713302, r20713303, r20713304, r20713305, r20713306, r20713307, r20713308;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20713300, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713301, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r20713302);
        mpfr_init(r20713303);
        mpfr_init(r20713304);
        mpfr_init_set_str(r20713305, "0.5", 10, MPFR_RNDN);
        mpfr_init(r20713306);
        mpfr_init(r20713307);
        mpfr_init(r20713308);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20713302, x, MPFR_RNDN);
        mpfr_mul(r20713303, r20713301, r20713302, MPFR_RNDN);
        mpfr_add(r20713304, r20713300, r20713303, MPFR_RNDN);
        ;
        mpfr_mul(r20713306, r20713302, r20713302, MPFR_RNDN);
        mpfr_mul(r20713307, r20713305, r20713306, MPFR_RNDN);
        mpfr_add(r20713308, r20713304, r20713307, MPFR_RNDN);
        return mpfr_get_d(r20713308, MPFR_RNDN);
}

static mpfr_t r20713309, r20713310, r20713311, r20713312, r20713313, r20713314, r20713315, r20713316, r20713317, r20713318;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20713309, "0.5", 10, MPFR_RNDN);
        mpfr_init(r20713310);
        mpfr_init_set_str(r20713311, "2", 10, MPFR_RNDN);
        mpfr_init(r20713312);
        mpfr_init(r20713313);
        mpfr_init_set_str(r20713314, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20713315);
        mpfr_init_set_str(r20713316, "2.0", 10, MPFR_RNDN);
        mpfr_init(r20713317);
        mpfr_init(r20713318);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r20713310, x, MPFR_RNDN);
        ;
        mpfr_pow(r20713312, r20713310, r20713311, MPFR_RNDN);
        mpfr_mul(r20713313, r20713309, r20713312, MPFR_RNDN);
        ;
        mpfr_add(r20713315, r20713313, r20713314, MPFR_RNDN);
        ;
        mpfr_mul(r20713317, r20713316, r20713310, MPFR_RNDN);
        mpfr_sub(r20713318, r20713315, r20713317, MPFR_RNDN);
        return mpfr_get_d(r20713318, MPFR_RNDN);
}

static mpfr_t r20713319, r20713320, r20713321, r20713322, r20713323, r20713324, r20713325, r20713326, r20713327, r20713328;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20713319, "0.5", 10, MPFR_RNDN);
        mpfr_init(r20713320);
        mpfr_init_set_str(r20713321, "2", 10, MPFR_RNDN);
        mpfr_init(r20713322);
        mpfr_init(r20713323);
        mpfr_init_set_str(r20713324, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20713325);
        mpfr_init_set_str(r20713326, "2.0", 10, MPFR_RNDN);
        mpfr_init(r20713327);
        mpfr_init(r20713328);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r20713320, x, MPFR_RNDN);
        ;
        mpfr_pow(r20713322, r20713320, r20713321, MPFR_RNDN);
        mpfr_mul(r20713323, r20713319, r20713322, MPFR_RNDN);
        ;
        mpfr_add(r20713325, r20713323, r20713324, MPFR_RNDN);
        ;
        mpfr_mul(r20713327, r20713326, r20713320, MPFR_RNDN);
        mpfr_sub(r20713328, r20713325, r20713327, MPFR_RNDN);
        return mpfr_get_d(r20713328, MPFR_RNDN);
}

