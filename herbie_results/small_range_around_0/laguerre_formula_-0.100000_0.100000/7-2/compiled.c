#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r4678270 = 1.0;
        float r4678271 = -2.0;
        float r4678272 = x;
        float r4678273 = r4678271 * r4678272;
        float r4678274 = r4678270 + r4678273;
        float r4678275 = 0.5;
        float r4678276 = r4678272 * r4678272;
        float r4678277 = r4678275 * r4678276;
        float r4678278 = r4678274 + r4678277;
        return r4678278;
}

double f_id(double x) {
        double r4678279 = 1.0;
        double r4678280 = -2.0;
        double r4678281 = x;
        double r4678282 = r4678280 * r4678281;
        double r4678283 = r4678279 + r4678282;
        double r4678284 = 0.5;
        double r4678285 = r4678281 * r4678281;
        double r4678286 = r4678284 * r4678285;
        double r4678287 = r4678283 + r4678286;
        return r4678287;
}


double f_of(float x) {
        float r4678288 = 1.0;
        float r4678289 = -2.0;
        float r4678290 = x;
        float r4678291 = r4678289 * r4678290;
        float r4678292 = r4678288 + r4678291;
        float r4678293 = 0.5;
        float r4678294 = r4678290 * r4678290;
        float r4678295 = r4678293 * r4678294;
        float r4678296 = r4678292 + r4678295;
        return r4678296;
}

double f_od(double x) {
        double r4678297 = 1.0;
        double r4678298 = -2.0;
        double r4678299 = x;
        double r4678300 = r4678298 * r4678299;
        double r4678301 = r4678297 + r4678300;
        double r4678302 = 0.5;
        double r4678303 = r4678299 * r4678299;
        double r4678304 = r4678302 * r4678303;
        double r4678305 = r4678301 + r4678304;
        return r4678305;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4678306, r4678307, r4678308, r4678309, r4678310, r4678311, r4678312, r4678313, r4678314;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4678306, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678307, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r4678308);
        mpfr_init(r4678309);
        mpfr_init(r4678310);
        mpfr_init_set_str(r4678311, "0.5", 10, MPFR_RNDN);
        mpfr_init(r4678312);
        mpfr_init(r4678313);
        mpfr_init(r4678314);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4678308, x, MPFR_RNDN);
        mpfr_mul(r4678309, r4678307, r4678308, MPFR_RNDN);
        mpfr_add(r4678310, r4678306, r4678309, MPFR_RNDN);
        ;
        mpfr_mul(r4678312, r4678308, r4678308, MPFR_RNDN);
        mpfr_mul(r4678313, r4678311, r4678312, MPFR_RNDN);
        mpfr_add(r4678314, r4678310, r4678313, MPFR_RNDN);
        return mpfr_get_d(r4678314, MPFR_RNDN);
}

static mpfr_t r4678315, r4678316, r4678317, r4678318, r4678319, r4678320, r4678321, r4678322, r4678323;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4678315, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678316, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r4678317);
        mpfr_init(r4678318);
        mpfr_init(r4678319);
        mpfr_init_set_str(r4678320, "0.5", 10, MPFR_RNDN);
        mpfr_init(r4678321);
        mpfr_init(r4678322);
        mpfr_init(r4678323);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4678317, x, MPFR_RNDN);
        mpfr_mul(r4678318, r4678316, r4678317, MPFR_RNDN);
        mpfr_add(r4678319, r4678315, r4678318, MPFR_RNDN);
        ;
        mpfr_mul(r4678321, r4678317, r4678317, MPFR_RNDN);
        mpfr_mul(r4678322, r4678320, r4678321, MPFR_RNDN);
        mpfr_add(r4678323, r4678319, r4678322, MPFR_RNDN);
        return mpfr_get_d(r4678323, MPFR_RNDN);
}

static mpfr_t r4678324, r4678325, r4678326, r4678327, r4678328, r4678329, r4678330, r4678331, r4678332;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4678324, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678325, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r4678326);
        mpfr_init(r4678327);
        mpfr_init(r4678328);
        mpfr_init_set_str(r4678329, "0.5", 10, MPFR_RNDN);
        mpfr_init(r4678330);
        mpfr_init(r4678331);
        mpfr_init(r4678332);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4678326, x, MPFR_RNDN);
        mpfr_mul(r4678327, r4678325, r4678326, MPFR_RNDN);
        mpfr_add(r4678328, r4678324, r4678327, MPFR_RNDN);
        ;
        mpfr_mul(r4678330, r4678326, r4678326, MPFR_RNDN);
        mpfr_mul(r4678331, r4678329, r4678330, MPFR_RNDN);
        mpfr_add(r4678332, r4678328, r4678331, MPFR_RNDN);
        return mpfr_get_d(r4678332, MPFR_RNDN);
}

