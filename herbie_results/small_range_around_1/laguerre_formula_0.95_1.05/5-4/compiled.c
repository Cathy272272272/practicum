#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r83943246 = 1.0;
        float r83943247 = -4.0;
        float r83943248 = x;
        float r83943249 = r83943247 * r83943248;
        float r83943250 = r83943246 + r83943249;
        float r83943251 = 3.0;
        float r83943252 = r83943248 * r83943248;
        float r83943253 = r83943251 * r83943252;
        float r83943254 = r83943250 + r83943253;
        float r83943255 = -0.666667;
        float r83943256 = r83943252 * r83943248;
        float r83943257 = r83943255 * r83943256;
        float r83943258 = r83943254 + r83943257;
        float r83943259 = 0.041667;
        float r83943260 = r83943256 * r83943248;
        float r83943261 = r83943259 * r83943260;
        float r83943262 = r83943258 + r83943261;
        return r83943262;
}

double f_id(double x) {
        double r83943263 = 1.0;
        double r83943264 = -4.0;
        double r83943265 = x;
        double r83943266 = r83943264 * r83943265;
        double r83943267 = r83943263 + r83943266;
        double r83943268 = 3.0;
        double r83943269 = r83943265 * r83943265;
        double r83943270 = r83943268 * r83943269;
        double r83943271 = r83943267 + r83943270;
        double r83943272 = -0.666667;
        double r83943273 = r83943269 * r83943265;
        double r83943274 = r83943272 * r83943273;
        double r83943275 = r83943271 + r83943274;
        double r83943276 = 0.041667;
        double r83943277 = r83943273 * r83943265;
        double r83943278 = r83943276 * r83943277;
        double r83943279 = r83943275 + r83943278;
        return r83943279;
}


double f_of(float x) {
        float r83943280 = 1.0;
        float r83943281 = x;
        float r83943282 = r83943281 * r83943281;
        float r83943283 = -0.666667;
        float r83943284 = r83943283 * r83943281;
        float r83943285 = r83943282 * r83943284;
        float r83943286 = r83943280 + r83943285;
        float r83943287 = 3.0;
        float r83943288 = r83943287 * r83943281;
        float r83943289 = -4.0;
        float r83943290 = r83943288 + r83943289;
        float r83943291 = r83943290 * r83943281;
        float r83943292 = r83943286 + r83943291;
        float r83943293 = 3;
        float r83943294 = pow(r83943292, r83943293);
        float r83943295 = cbrt(r83943294);
        float r83943296 = 0.041667;
        float r83943297 = r83943282 * r83943281;
        float r83943298 = r83943297 * r83943281;
        float r83943299 = r83943296 * r83943298;
        float r83943300 = r83943295 + r83943299;
        return r83943300;
}

double f_od(double x) {
        double r83943301 = 1.0;
        double r83943302 = x;
        double r83943303 = r83943302 * r83943302;
        double r83943304 = -0.666667;
        double r83943305 = r83943304 * r83943302;
        double r83943306 = r83943303 * r83943305;
        double r83943307 = r83943301 + r83943306;
        double r83943308 = 3.0;
        double r83943309 = r83943308 * r83943302;
        double r83943310 = -4.0;
        double r83943311 = r83943309 + r83943310;
        double r83943312 = r83943311 * r83943302;
        double r83943313 = r83943307 + r83943312;
        double r83943314 = 3;
        double r83943315 = pow(r83943313, r83943314);
        double r83943316 = cbrt(r83943315);
        double r83943317 = 0.041667;
        double r83943318 = r83943303 * r83943302;
        double r83943319 = r83943318 * r83943302;
        double r83943320 = r83943317 * r83943319;
        double r83943321 = r83943316 + r83943320;
        return r83943321;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83943322, r83943323, r83943324, r83943325, r83943326, r83943327, r83943328, r83943329, r83943330, r83943331, r83943332, r83943333, r83943334, r83943335, r83943336, r83943337, r83943338;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943322, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943323, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r83943324);
        mpfr_init(r83943325);
        mpfr_init(r83943326);
        mpfr_init_set_str(r83943327, "3.0", 10, MPFR_RNDN);
        mpfr_init(r83943328);
        mpfr_init(r83943329);
        mpfr_init(r83943330);
        mpfr_init_set_str(r83943331, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r83943332);
        mpfr_init(r83943333);
        mpfr_init(r83943334);
        mpfr_init_set_str(r83943335, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r83943336);
        mpfr_init(r83943337);
        mpfr_init(r83943338);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83943324, x, MPFR_RNDN);
        mpfr_mul(r83943325, r83943323, r83943324, MPFR_RNDN);
        mpfr_add(r83943326, r83943322, r83943325, MPFR_RNDN);
        ;
        mpfr_mul(r83943328, r83943324, r83943324, MPFR_RNDN);
        mpfr_mul(r83943329, r83943327, r83943328, MPFR_RNDN);
        mpfr_add(r83943330, r83943326, r83943329, MPFR_RNDN);
        ;
        mpfr_mul(r83943332, r83943328, r83943324, MPFR_RNDN);
        mpfr_mul(r83943333, r83943331, r83943332, MPFR_RNDN);
        mpfr_add(r83943334, r83943330, r83943333, MPFR_RNDN);
        ;
        mpfr_mul(r83943336, r83943332, r83943324, MPFR_RNDN);
        mpfr_mul(r83943337, r83943335, r83943336, MPFR_RNDN);
        mpfr_add(r83943338, r83943334, r83943337, MPFR_RNDN);
        return mpfr_get_d(r83943338, MPFR_RNDN);
}

static mpfr_t r83943339, r83943340, r83943341, r83943342, r83943343, r83943344, r83943345, r83943346, r83943347, r83943348, r83943349, r83943350, r83943351, r83943352, r83943353, r83943354, r83943355, r83943356, r83943357, r83943358, r83943359;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943339, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83943340);
        mpfr_init(r83943341);
        mpfr_init_set_str(r83943342, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r83943343);
        mpfr_init(r83943344);
        mpfr_init(r83943345);
        mpfr_init_set_str(r83943346, "3.0", 10, MPFR_RNDN);
        mpfr_init(r83943347);
        mpfr_init_set_str(r83943348, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r83943349);
        mpfr_init(r83943350);
        mpfr_init(r83943351);
        mpfr_init_set_str(r83943352, "3", 10, MPFR_RNDN);
        mpfr_init(r83943353);
        mpfr_init(r83943354);
        mpfr_init_set_str(r83943355, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r83943356);
        mpfr_init(r83943357);
        mpfr_init(r83943358);
        mpfr_init(r83943359);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r83943340, x, MPFR_RNDN);
        mpfr_mul(r83943341, r83943340, r83943340, MPFR_RNDN);
        ;
        mpfr_mul(r83943343, r83943342, r83943340, MPFR_RNDN);
        mpfr_mul(r83943344, r83943341, r83943343, MPFR_RNDN);
        mpfr_add(r83943345, r83943339, r83943344, MPFR_RNDN);
        ;
        mpfr_mul(r83943347, r83943346, r83943340, MPFR_RNDN);
        ;
        mpfr_add(r83943349, r83943347, r83943348, MPFR_RNDN);
        mpfr_mul(r83943350, r83943349, r83943340, MPFR_RNDN);
        mpfr_add(r83943351, r83943345, r83943350, MPFR_RNDN);
        ;
        mpfr_pow(r83943353, r83943351, r83943352, MPFR_RNDN);
        mpfr_cbrt(r83943354, r83943353, MPFR_RNDN);
        ;
        mpfr_mul(r83943356, r83943341, r83943340, MPFR_RNDN);
        mpfr_mul(r83943357, r83943356, r83943340, MPFR_RNDN);
        mpfr_mul(r83943358, r83943355, r83943357, MPFR_RNDN);
        mpfr_add(r83943359, r83943354, r83943358, MPFR_RNDN);
        return mpfr_get_d(r83943359, MPFR_RNDN);
}

static mpfr_t r83943360, r83943361, r83943362, r83943363, r83943364, r83943365, r83943366, r83943367, r83943368, r83943369, r83943370, r83943371, r83943372, r83943373, r83943374, r83943375, r83943376, r83943377, r83943378, r83943379, r83943380;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943360, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83943361);
        mpfr_init(r83943362);
        mpfr_init_set_str(r83943363, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r83943364);
        mpfr_init(r83943365);
        mpfr_init(r83943366);
        mpfr_init_set_str(r83943367, "3.0", 10, MPFR_RNDN);
        mpfr_init(r83943368);
        mpfr_init_set_str(r83943369, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r83943370);
        mpfr_init(r83943371);
        mpfr_init(r83943372);
        mpfr_init_set_str(r83943373, "3", 10, MPFR_RNDN);
        mpfr_init(r83943374);
        mpfr_init(r83943375);
        mpfr_init_set_str(r83943376, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r83943377);
        mpfr_init(r83943378);
        mpfr_init(r83943379);
        mpfr_init(r83943380);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r83943361, x, MPFR_RNDN);
        mpfr_mul(r83943362, r83943361, r83943361, MPFR_RNDN);
        ;
        mpfr_mul(r83943364, r83943363, r83943361, MPFR_RNDN);
        mpfr_mul(r83943365, r83943362, r83943364, MPFR_RNDN);
        mpfr_add(r83943366, r83943360, r83943365, MPFR_RNDN);
        ;
        mpfr_mul(r83943368, r83943367, r83943361, MPFR_RNDN);
        ;
        mpfr_add(r83943370, r83943368, r83943369, MPFR_RNDN);
        mpfr_mul(r83943371, r83943370, r83943361, MPFR_RNDN);
        mpfr_add(r83943372, r83943366, r83943371, MPFR_RNDN);
        ;
        mpfr_pow(r83943374, r83943372, r83943373, MPFR_RNDN);
        mpfr_cbrt(r83943375, r83943374, MPFR_RNDN);
        ;
        mpfr_mul(r83943377, r83943362, r83943361, MPFR_RNDN);
        mpfr_mul(r83943378, r83943377, r83943361, MPFR_RNDN);
        mpfr_mul(r83943379, r83943376, r83943378, MPFR_RNDN);
        mpfr_add(r83943380, r83943375, r83943379, MPFR_RNDN);
        return mpfr_get_d(r83943380, MPFR_RNDN);
}

