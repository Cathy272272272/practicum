#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r10744246 = 1.0;
        float r10744247 = -4.0;
        float r10744248 = x;
        float r10744249 = r10744247 * r10744248;
        float r10744250 = r10744246 + r10744249;
        float r10744251 = 3.0;
        float r10744252 = r10744248 * r10744248;
        float r10744253 = r10744251 * r10744252;
        float r10744254 = r10744250 + r10744253;
        float r10744255 = -0.666667;
        float r10744256 = r10744252 * r10744248;
        float r10744257 = r10744255 * r10744256;
        float r10744258 = r10744254 + r10744257;
        float r10744259 = 0.041667;
        float r10744260 = r10744256 * r10744248;
        float r10744261 = r10744259 * r10744260;
        float r10744262 = r10744258 + r10744261;
        return r10744262;
}

double f_id(double x) {
        double r10744263 = 1.0;
        double r10744264 = -4.0;
        double r10744265 = x;
        double r10744266 = r10744264 * r10744265;
        double r10744267 = r10744263 + r10744266;
        double r10744268 = 3.0;
        double r10744269 = r10744265 * r10744265;
        double r10744270 = r10744268 * r10744269;
        double r10744271 = r10744267 + r10744270;
        double r10744272 = -0.666667;
        double r10744273 = r10744269 * r10744265;
        double r10744274 = r10744272 * r10744273;
        double r10744275 = r10744271 + r10744274;
        double r10744276 = 0.041667;
        double r10744277 = r10744273 * r10744265;
        double r10744278 = r10744276 * r10744277;
        double r10744279 = r10744275 + r10744278;
        return r10744279;
}


double f_of(float x) {
        float r10744280 = x;
        float r10744281 = 3;
        float r10744282 = pow(r10744280, r10744281);
        float r10744283 = 0.041667;
        float r10744284 = r10744283 * r10744280;
        float r10744285 = -0.666667;
        float r10744286 = r10744284 + r10744285;
        float r10744287 = r10744282 * r10744286;
        float r10744288 = 3.0;
        float r10744289 = r10744280 * r10744288;
        float r10744290 = r10744289 * r10744280;
        float r10744291 = -4.0;
        float r10744292 = r10744280 * r10744291;
        float r10744293 = 1.0;
        float r10744294 = r10744292 + r10744293;
        float r10744295 = r10744290 + r10744294;
        float r10744296 = r10744287 + r10744295;
        return r10744296;
}

double f_od(double x) {
        double r10744297 = x;
        double r10744298 = 3;
        double r10744299 = pow(r10744297, r10744298);
        double r10744300 = 0.041667;
        double r10744301 = r10744300 * r10744297;
        double r10744302 = -0.666667;
        double r10744303 = r10744301 + r10744302;
        double r10744304 = r10744299 * r10744303;
        double r10744305 = 3.0;
        double r10744306 = r10744297 * r10744305;
        double r10744307 = r10744306 * r10744297;
        double r10744308 = -4.0;
        double r10744309 = r10744297 * r10744308;
        double r10744310 = 1.0;
        double r10744311 = r10744309 + r10744310;
        double r10744312 = r10744307 + r10744311;
        double r10744313 = r10744304 + r10744312;
        return r10744313;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10744314, r10744315, r10744316, r10744317, r10744318, r10744319, r10744320, r10744321, r10744322, r10744323, r10744324, r10744325, r10744326, r10744327, r10744328, r10744329, r10744330;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744314, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744315, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10744316);
        mpfr_init(r10744317);
        mpfr_init(r10744318);
        mpfr_init_set_str(r10744319, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10744320);
        mpfr_init(r10744321);
        mpfr_init(r10744322);
        mpfr_init_set_str(r10744323, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10744324);
        mpfr_init(r10744325);
        mpfr_init(r10744326);
        mpfr_init_set_str(r10744327, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10744328);
        mpfr_init(r10744329);
        mpfr_init(r10744330);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10744316, x, MPFR_RNDN);
        mpfr_mul(r10744317, r10744315, r10744316, MPFR_RNDN);
        mpfr_add(r10744318, r10744314, r10744317, MPFR_RNDN);
        ;
        mpfr_mul(r10744320, r10744316, r10744316, MPFR_RNDN);
        mpfr_mul(r10744321, r10744319, r10744320, MPFR_RNDN);
        mpfr_add(r10744322, r10744318, r10744321, MPFR_RNDN);
        ;
        mpfr_mul(r10744324, r10744320, r10744316, MPFR_RNDN);
        mpfr_mul(r10744325, r10744323, r10744324, MPFR_RNDN);
        mpfr_add(r10744326, r10744322, r10744325, MPFR_RNDN);
        ;
        mpfr_mul(r10744328, r10744324, r10744316, MPFR_RNDN);
        mpfr_mul(r10744329, r10744327, r10744328, MPFR_RNDN);
        mpfr_add(r10744330, r10744326, r10744329, MPFR_RNDN);
        return mpfr_get_d(r10744330, MPFR_RNDN);
}

static mpfr_t r10744331, r10744332, r10744333, r10744334, r10744335, r10744336, r10744337, r10744338, r10744339, r10744340, r10744341, r10744342, r10744343, r10744344, r10744345, r10744346, r10744347;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10744331);
        mpfr_init_set_str(r10744332, "3", 10, MPFR_RNDN);
        mpfr_init(r10744333);
        mpfr_init_set_str(r10744334, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10744335);
        mpfr_init_set_str(r10744336, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10744337);
        mpfr_init(r10744338);
        mpfr_init_set_str(r10744339, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10744340);
        mpfr_init(r10744341);
        mpfr_init_set_str(r10744342, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10744343);
        mpfr_init_set_str(r10744344, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10744345);
        mpfr_init(r10744346);
        mpfr_init(r10744347);
}

double f_fm(double x) {
        mpfr_set_d(r10744331, x, MPFR_RNDN);
        ;
        mpfr_pow(r10744333, r10744331, r10744332, MPFR_RNDN);
        ;
        mpfr_mul(r10744335, r10744334, r10744331, MPFR_RNDN);
        ;
        mpfr_add(r10744337, r10744335, r10744336, MPFR_RNDN);
        mpfr_mul(r10744338, r10744333, r10744337, MPFR_RNDN);
        ;
        mpfr_mul(r10744340, r10744331, r10744339, MPFR_RNDN);
        mpfr_mul(r10744341, r10744340, r10744331, MPFR_RNDN);
        ;
        mpfr_mul(r10744343, r10744331, r10744342, MPFR_RNDN);
        ;
        mpfr_add(r10744345, r10744343, r10744344, MPFR_RNDN);
        mpfr_add(r10744346, r10744341, r10744345, MPFR_RNDN);
        mpfr_add(r10744347, r10744338, r10744346, MPFR_RNDN);
        return mpfr_get_d(r10744347, MPFR_RNDN);
}

static mpfr_t r10744348, r10744349, r10744350, r10744351, r10744352, r10744353, r10744354, r10744355, r10744356, r10744357, r10744358, r10744359, r10744360, r10744361, r10744362, r10744363, r10744364;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10744348);
        mpfr_init_set_str(r10744349, "3", 10, MPFR_RNDN);
        mpfr_init(r10744350);
        mpfr_init_set_str(r10744351, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10744352);
        mpfr_init_set_str(r10744353, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10744354);
        mpfr_init(r10744355);
        mpfr_init_set_str(r10744356, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10744357);
        mpfr_init(r10744358);
        mpfr_init_set_str(r10744359, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10744360);
        mpfr_init_set_str(r10744361, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10744362);
        mpfr_init(r10744363);
        mpfr_init(r10744364);
}

double f_dm(double x) {
        mpfr_set_d(r10744348, x, MPFR_RNDN);
        ;
        mpfr_pow(r10744350, r10744348, r10744349, MPFR_RNDN);
        ;
        mpfr_mul(r10744352, r10744351, r10744348, MPFR_RNDN);
        ;
        mpfr_add(r10744354, r10744352, r10744353, MPFR_RNDN);
        mpfr_mul(r10744355, r10744350, r10744354, MPFR_RNDN);
        ;
        mpfr_mul(r10744357, r10744348, r10744356, MPFR_RNDN);
        mpfr_mul(r10744358, r10744357, r10744348, MPFR_RNDN);
        ;
        mpfr_mul(r10744360, r10744348, r10744359, MPFR_RNDN);
        ;
        mpfr_add(r10744362, r10744360, r10744361, MPFR_RNDN);
        mpfr_add(r10744363, r10744358, r10744362, MPFR_RNDN);
        mpfr_add(r10744364, r10744355, r10744363, MPFR_RNDN);
        return mpfr_get_d(r10744364, MPFR_RNDN);
}

