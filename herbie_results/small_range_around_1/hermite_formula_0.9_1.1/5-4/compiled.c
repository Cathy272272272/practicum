#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r46349234 = 12.0;
        float r46349235 = -48.0;
        float r46349236 = x;
        float r46349237 = r46349236 * r46349236;
        float r46349238 = r46349235 * r46349237;
        float r46349239 = r46349234 + r46349238;
        float r46349240 = 16.0;
        float r46349241 = r46349237 * r46349236;
        float r46349242 = r46349241 * r46349236;
        float r46349243 = r46349240 * r46349242;
        float r46349244 = r46349239 + r46349243;
        return r46349244;
}

double f_id(double x) {
        double r46349245 = 12.0;
        double r46349246 = -48.0;
        double r46349247 = x;
        double r46349248 = r46349247 * r46349247;
        double r46349249 = r46349246 * r46349248;
        double r46349250 = r46349245 + r46349249;
        double r46349251 = 16.0;
        double r46349252 = r46349248 * r46349247;
        double r46349253 = r46349252 * r46349247;
        double r46349254 = r46349251 * r46349253;
        double r46349255 = r46349250 + r46349254;
        return r46349255;
}


double f_of(float x) {
        float r46349256 = x;
        float r46349257 = r46349256 * r46349256;
        float r46349258 = fabs(r46349257);
        float r46349259 = exp(r46349258);
        float r46349260 = 16.0;
        float r46349261 = r46349260 * r46349258;
        float r46349262 = pow(r46349259, r46349261);
        float r46349263 = 12.0;
        float r46349264 = exp(r46349263);
        float r46349265 = -48.0;
        float r46349266 = exp(r46349265);
        float r46349267 = pow(r46349266, r46349257);
        float r46349268 = r46349264 * r46349267;
        float r46349269 = r46349262 * r46349268;
        float r46349270 = log(r46349269);
        return r46349270;
}

double f_od(double x) {
        double r46349271 = x;
        double r46349272 = r46349271 * r46349271;
        double r46349273 = fabs(r46349272);
        double r46349274 = exp(r46349273);
        double r46349275 = 16.0;
        double r46349276 = r46349275 * r46349273;
        double r46349277 = pow(r46349274, r46349276);
        double r46349278 = 12.0;
        double r46349279 = exp(r46349278);
        double r46349280 = -48.0;
        double r46349281 = exp(r46349280);
        double r46349282 = pow(r46349281, r46349272);
        double r46349283 = r46349279 * r46349282;
        double r46349284 = r46349277 * r46349283;
        double r46349285 = log(r46349284);
        return r46349285;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46349286, r46349287, r46349288, r46349289, r46349290, r46349291, r46349292, r46349293, r46349294, r46349295, r46349296;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349286, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349287, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r46349288);
        mpfr_init(r46349289);
        mpfr_init(r46349290);
        mpfr_init(r46349291);
        mpfr_init_set_str(r46349292, "16.0", 10, MPFR_RNDN);
        mpfr_init(r46349293);
        mpfr_init(r46349294);
        mpfr_init(r46349295);
        mpfr_init(r46349296);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r46349288, x, MPFR_RNDN);
        mpfr_mul(r46349289, r46349288, r46349288, MPFR_RNDN);
        mpfr_mul(r46349290, r46349287, r46349289, MPFR_RNDN);
        mpfr_add(r46349291, r46349286, r46349290, MPFR_RNDN);
        ;
        mpfr_mul(r46349293, r46349289, r46349288, MPFR_RNDN);
        mpfr_mul(r46349294, r46349293, r46349288, MPFR_RNDN);
        mpfr_mul(r46349295, r46349292, r46349294, MPFR_RNDN);
        mpfr_add(r46349296, r46349291, r46349295, MPFR_RNDN);
        return mpfr_get_d(r46349296, MPFR_RNDN);
}

static mpfr_t r46349297, r46349298, r46349299, r46349300, r46349301, r46349302, r46349303, r46349304, r46349305, r46349306, r46349307, r46349308, r46349309, r46349310, r46349311;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r46349297);
        mpfr_init(r46349298);
        mpfr_init(r46349299);
        mpfr_init(r46349300);
        mpfr_init_set_str(r46349301, "16.0", 10, MPFR_RNDN);
        mpfr_init(r46349302);
        mpfr_init(r46349303);
        mpfr_init_set_str(r46349304, "12.0", 10, MPFR_RNDN);
        mpfr_init(r46349305);
        mpfr_init_set_str(r46349306, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r46349307);
        mpfr_init(r46349308);
        mpfr_init(r46349309);
        mpfr_init(r46349310);
        mpfr_init(r46349311);
}

double f_fm(double x) {
        mpfr_set_d(r46349297, x, MPFR_RNDN);
        mpfr_mul(r46349298, r46349297, r46349297, MPFR_RNDN);
        mpfr_abs(r46349299, r46349298, MPFR_RNDN);
        mpfr_exp(r46349300, r46349299, MPFR_RNDN);
        ;
        mpfr_mul(r46349302, r46349301, r46349299, MPFR_RNDN);
        mpfr_pow(r46349303, r46349300, r46349302, MPFR_RNDN);
        ;
        mpfr_exp(r46349305, r46349304, MPFR_RNDN);
        ;
        mpfr_exp(r46349307, r46349306, MPFR_RNDN);
        mpfr_pow(r46349308, r46349307, r46349298, MPFR_RNDN);
        mpfr_mul(r46349309, r46349305, r46349308, MPFR_RNDN);
        mpfr_mul(r46349310, r46349303, r46349309, MPFR_RNDN);
        mpfr_log(r46349311, r46349310, MPFR_RNDN);
        return mpfr_get_d(r46349311, MPFR_RNDN);
}

static mpfr_t r46349312, r46349313, r46349314, r46349315, r46349316, r46349317, r46349318, r46349319, r46349320, r46349321, r46349322, r46349323, r46349324, r46349325, r46349326;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r46349312);
        mpfr_init(r46349313);
        mpfr_init(r46349314);
        mpfr_init(r46349315);
        mpfr_init_set_str(r46349316, "16.0", 10, MPFR_RNDN);
        mpfr_init(r46349317);
        mpfr_init(r46349318);
        mpfr_init_set_str(r46349319, "12.0", 10, MPFR_RNDN);
        mpfr_init(r46349320);
        mpfr_init_set_str(r46349321, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r46349322);
        mpfr_init(r46349323);
        mpfr_init(r46349324);
        mpfr_init(r46349325);
        mpfr_init(r46349326);
}

double f_dm(double x) {
        mpfr_set_d(r46349312, x, MPFR_RNDN);
        mpfr_mul(r46349313, r46349312, r46349312, MPFR_RNDN);
        mpfr_abs(r46349314, r46349313, MPFR_RNDN);
        mpfr_exp(r46349315, r46349314, MPFR_RNDN);
        ;
        mpfr_mul(r46349317, r46349316, r46349314, MPFR_RNDN);
        mpfr_pow(r46349318, r46349315, r46349317, MPFR_RNDN);
        ;
        mpfr_exp(r46349320, r46349319, MPFR_RNDN);
        ;
        mpfr_exp(r46349322, r46349321, MPFR_RNDN);
        mpfr_pow(r46349323, r46349322, r46349313, MPFR_RNDN);
        mpfr_mul(r46349324, r46349320, r46349323, MPFR_RNDN);
        mpfr_mul(r46349325, r46349318, r46349324, MPFR_RNDN);
        mpfr_log(r46349326, r46349325, MPFR_RNDN);
        return mpfr_get_d(r46349326, MPFR_RNDN);
}

