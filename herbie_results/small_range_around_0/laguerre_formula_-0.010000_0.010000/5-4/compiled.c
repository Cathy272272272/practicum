#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r3278267 = 1.0;
        float r3278268 = -4.0;
        float r3278269 = x;
        float r3278270 = r3278268 * r3278269;
        float r3278271 = r3278267 + r3278270;
        float r3278272 = 3.0;
        float r3278273 = r3278269 * r3278269;
        float r3278274 = r3278272 * r3278273;
        float r3278275 = r3278271 + r3278274;
        float r3278276 = -0.666667;
        float r3278277 = r3278273 * r3278269;
        float r3278278 = r3278276 * r3278277;
        float r3278279 = r3278275 + r3278278;
        float r3278280 = 0.041667;
        float r3278281 = r3278277 * r3278269;
        float r3278282 = r3278280 * r3278281;
        float r3278283 = r3278279 + r3278282;
        return r3278283;
}

double f_id(double x) {
        double r3278284 = 1.0;
        double r3278285 = -4.0;
        double r3278286 = x;
        double r3278287 = r3278285 * r3278286;
        double r3278288 = r3278284 + r3278287;
        double r3278289 = 3.0;
        double r3278290 = r3278286 * r3278286;
        double r3278291 = r3278289 * r3278290;
        double r3278292 = r3278288 + r3278291;
        double r3278293 = -0.666667;
        double r3278294 = r3278290 * r3278286;
        double r3278295 = r3278293 * r3278294;
        double r3278296 = r3278292 + r3278295;
        double r3278297 = 0.041667;
        double r3278298 = r3278294 * r3278286;
        double r3278299 = r3278297 * r3278298;
        double r3278300 = r3278296 + r3278299;
        return r3278300;
}


double f_of(float x) {
        float r3278301 = 1.0;
        float r3278302 = -4.0;
        float r3278303 = x;
        float r3278304 = r3278302 * r3278303;
        float r3278305 = r3278301 + r3278304;
        float r3278306 = 3.0;
        float r3278307 = r3278303 * r3278303;
        float r3278308 = r3278306 * r3278307;
        float r3278309 = r3278305 + r3278308;
        float r3278310 = -0.666667;
        float r3278311 = r3278307 * r3278303;
        float r3278312 = r3278310 * r3278311;
        float r3278313 = r3278309 + r3278312;
        float r3278314 = 0.041667;
        float r3278315 = r3278311 * r3278303;
        float r3278316 = r3278314 * r3278315;
        float r3278317 = r3278313 + r3278316;
        return r3278317;
}

double f_od(double x) {
        double r3278318 = 1.0;
        double r3278319 = -4.0;
        double r3278320 = x;
        double r3278321 = r3278319 * r3278320;
        double r3278322 = r3278318 + r3278321;
        double r3278323 = 3.0;
        double r3278324 = r3278320 * r3278320;
        double r3278325 = r3278323 * r3278324;
        double r3278326 = r3278322 + r3278325;
        double r3278327 = -0.666667;
        double r3278328 = r3278324 * r3278320;
        double r3278329 = r3278327 * r3278328;
        double r3278330 = r3278326 + r3278329;
        double r3278331 = 0.041667;
        double r3278332 = r3278328 * r3278320;
        double r3278333 = r3278331 * r3278332;
        double r3278334 = r3278330 + r3278333;
        return r3278334;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3278335, r3278336, r3278337, r3278338, r3278339, r3278340, r3278341, r3278342, r3278343, r3278344, r3278345, r3278346, r3278347, r3278348, r3278349, r3278350, r3278351;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278335, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278336, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r3278337);
        mpfr_init(r3278338);
        mpfr_init(r3278339);
        mpfr_init_set_str(r3278340, "3.0", 10, MPFR_RNDN);
        mpfr_init(r3278341);
        mpfr_init(r3278342);
        mpfr_init(r3278343);
        mpfr_init_set_str(r3278344, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r3278345);
        mpfr_init(r3278346);
        mpfr_init(r3278347);
        mpfr_init_set_str(r3278348, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r3278349);
        mpfr_init(r3278350);
        mpfr_init(r3278351);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3278337, x, MPFR_RNDN);
        mpfr_mul(r3278338, r3278336, r3278337, MPFR_RNDN);
        mpfr_add(r3278339, r3278335, r3278338, MPFR_RNDN);
        ;
        mpfr_mul(r3278341, r3278337, r3278337, MPFR_RNDN);
        mpfr_mul(r3278342, r3278340, r3278341, MPFR_RNDN);
        mpfr_add(r3278343, r3278339, r3278342, MPFR_RNDN);
        ;
        mpfr_mul(r3278345, r3278341, r3278337, MPFR_RNDN);
        mpfr_mul(r3278346, r3278344, r3278345, MPFR_RNDN);
        mpfr_add(r3278347, r3278343, r3278346, MPFR_RNDN);
        ;
        mpfr_mul(r3278349, r3278345, r3278337, MPFR_RNDN);
        mpfr_mul(r3278350, r3278348, r3278349, MPFR_RNDN);
        mpfr_add(r3278351, r3278347, r3278350, MPFR_RNDN);
        return mpfr_get_d(r3278351, MPFR_RNDN);
}

static mpfr_t r3278352, r3278353, r3278354, r3278355, r3278356, r3278357, r3278358, r3278359, r3278360, r3278361, r3278362, r3278363, r3278364, r3278365, r3278366, r3278367, r3278368;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278352, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278353, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r3278354);
        mpfr_init(r3278355);
        mpfr_init(r3278356);
        mpfr_init_set_str(r3278357, "3.0", 10, MPFR_RNDN);
        mpfr_init(r3278358);
        mpfr_init(r3278359);
        mpfr_init(r3278360);
        mpfr_init_set_str(r3278361, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r3278362);
        mpfr_init(r3278363);
        mpfr_init(r3278364);
        mpfr_init_set_str(r3278365, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r3278366);
        mpfr_init(r3278367);
        mpfr_init(r3278368);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3278354, x, MPFR_RNDN);
        mpfr_mul(r3278355, r3278353, r3278354, MPFR_RNDN);
        mpfr_add(r3278356, r3278352, r3278355, MPFR_RNDN);
        ;
        mpfr_mul(r3278358, r3278354, r3278354, MPFR_RNDN);
        mpfr_mul(r3278359, r3278357, r3278358, MPFR_RNDN);
        mpfr_add(r3278360, r3278356, r3278359, MPFR_RNDN);
        ;
        mpfr_mul(r3278362, r3278358, r3278354, MPFR_RNDN);
        mpfr_mul(r3278363, r3278361, r3278362, MPFR_RNDN);
        mpfr_add(r3278364, r3278360, r3278363, MPFR_RNDN);
        ;
        mpfr_mul(r3278366, r3278362, r3278354, MPFR_RNDN);
        mpfr_mul(r3278367, r3278365, r3278366, MPFR_RNDN);
        mpfr_add(r3278368, r3278364, r3278367, MPFR_RNDN);
        return mpfr_get_d(r3278368, MPFR_RNDN);
}

static mpfr_t r3278369, r3278370, r3278371, r3278372, r3278373, r3278374, r3278375, r3278376, r3278377, r3278378, r3278379, r3278380, r3278381, r3278382, r3278383, r3278384, r3278385;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278369, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278370, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r3278371);
        mpfr_init(r3278372);
        mpfr_init(r3278373);
        mpfr_init_set_str(r3278374, "3.0", 10, MPFR_RNDN);
        mpfr_init(r3278375);
        mpfr_init(r3278376);
        mpfr_init(r3278377);
        mpfr_init_set_str(r3278378, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r3278379);
        mpfr_init(r3278380);
        mpfr_init(r3278381);
        mpfr_init_set_str(r3278382, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r3278383);
        mpfr_init(r3278384);
        mpfr_init(r3278385);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3278371, x, MPFR_RNDN);
        mpfr_mul(r3278372, r3278370, r3278371, MPFR_RNDN);
        mpfr_add(r3278373, r3278369, r3278372, MPFR_RNDN);
        ;
        mpfr_mul(r3278375, r3278371, r3278371, MPFR_RNDN);
        mpfr_mul(r3278376, r3278374, r3278375, MPFR_RNDN);
        mpfr_add(r3278377, r3278373, r3278376, MPFR_RNDN);
        ;
        mpfr_mul(r3278379, r3278375, r3278371, MPFR_RNDN);
        mpfr_mul(r3278380, r3278378, r3278379, MPFR_RNDN);
        mpfr_add(r3278381, r3278377, r3278380, MPFR_RNDN);
        ;
        mpfr_mul(r3278383, r3278379, r3278371, MPFR_RNDN);
        mpfr_mul(r3278384, r3278382, r3278383, MPFR_RNDN);
        mpfr_add(r3278385, r3278381, r3278384, MPFR_RNDN);
        return mpfr_get_d(r3278385, MPFR_RNDN);
}

