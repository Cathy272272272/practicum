#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r4677308 = 1.0;
        float r4677309 = -8.0;
        float r4677310 = x;
        float r4677311 = r4677309 * r4677310;
        float r4677312 = r4677308 + r4677311;
        float r4677313 = 14.0;
        float r4677314 = r4677310 * r4677310;
        float r4677315 = r4677313 * r4677314;
        float r4677316 = r4677312 + r4677315;
        float r4677317 = -9.333333;
        float r4677318 = r4677314 * r4677310;
        float r4677319 = r4677317 * r4677318;
        float r4677320 = r4677316 + r4677319;
        float r4677321 = 2.916667;
        float r4677322 = r4677318 * r4677310;
        float r4677323 = r4677321 * r4677322;
        float r4677324 = r4677320 + r4677323;
        float r4677325 = -0.466667;
        float r4677326 = r4677322 * r4677310;
        float r4677327 = r4677325 * r4677326;
        float r4677328 = r4677324 + r4677327;
        float r4677329 = 0.038889;
        float r4677330 = r4677326 * r4677310;
        float r4677331 = r4677329 * r4677330;
        float r4677332 = r4677328 + r4677331;
        float r4677333 = -0.001587;
        float r4677334 = r4677330 * r4677310;
        float r4677335 = r4677333 * r4677334;
        float r4677336 = r4677332 + r4677335;
        float r4677337 = 2.5e-05;
        float r4677338 = r4677334 * r4677310;
        float r4677339 = r4677337 * r4677338;
        float r4677340 = r4677336 + r4677339;
        return r4677340;
}

double f_id(double x) {
        double r4677341 = 1.0;
        double r4677342 = -8.0;
        double r4677343 = x;
        double r4677344 = r4677342 * r4677343;
        double r4677345 = r4677341 + r4677344;
        double r4677346 = 14.0;
        double r4677347 = r4677343 * r4677343;
        double r4677348 = r4677346 * r4677347;
        double r4677349 = r4677345 + r4677348;
        double r4677350 = -9.333333;
        double r4677351 = r4677347 * r4677343;
        double r4677352 = r4677350 * r4677351;
        double r4677353 = r4677349 + r4677352;
        double r4677354 = 2.916667;
        double r4677355 = r4677351 * r4677343;
        double r4677356 = r4677354 * r4677355;
        double r4677357 = r4677353 + r4677356;
        double r4677358 = -0.466667;
        double r4677359 = r4677355 * r4677343;
        double r4677360 = r4677358 * r4677359;
        double r4677361 = r4677357 + r4677360;
        double r4677362 = 0.038889;
        double r4677363 = r4677359 * r4677343;
        double r4677364 = r4677362 * r4677363;
        double r4677365 = r4677361 + r4677364;
        double r4677366 = -0.001587;
        double r4677367 = r4677363 * r4677343;
        double r4677368 = r4677366 * r4677367;
        double r4677369 = r4677365 + r4677368;
        double r4677370 = 2.5e-05;
        double r4677371 = r4677367 * r4677343;
        double r4677372 = r4677370 * r4677371;
        double r4677373 = r4677369 + r4677372;
        return r4677373;
}


double f_of(float x) {
        float r4677374 = 1.0;
        float r4677375 = -8.0;
        float r4677376 = x;
        float r4677377 = r4677375 * r4677376;
        float r4677378 = r4677374 + r4677377;
        float r4677379 = 14.0;
        float r4677380 = r4677376 * r4677376;
        float r4677381 = r4677379 * r4677380;
        float r4677382 = r4677378 + r4677381;
        float r4677383 = -9.333333;
        float r4677384 = r4677380 * r4677376;
        float r4677385 = r4677383 * r4677384;
        float r4677386 = r4677382 + r4677385;
        float r4677387 = 2.916667;
        float r4677388 = r4677384 * r4677376;
        float r4677389 = r4677387 * r4677388;
        float r4677390 = r4677386 + r4677389;
        float r4677391 = -0.466667;
        float r4677392 = r4677388 * r4677376;
        float r4677393 = r4677391 * r4677392;
        float r4677394 = r4677390 + r4677393;
        float r4677395 = 0.038889;
        float r4677396 = r4677392 * r4677376;
        float r4677397 = r4677395 * r4677396;
        float r4677398 = r4677394 + r4677397;
        float r4677399 = -0.001587;
        float r4677400 = r4677396 * r4677376;
        float r4677401 = r4677399 * r4677400;
        float r4677402 = r4677398 + r4677401;
        float r4677403 = 2.5e-05;
        float r4677404 = r4677400 * r4677376;
        float r4677405 = r4677403 * r4677404;
        float r4677406 = r4677402 + r4677405;
        return r4677406;
}

double f_od(double x) {
        double r4677407 = 1.0;
        double r4677408 = -8.0;
        double r4677409 = x;
        double r4677410 = r4677408 * r4677409;
        double r4677411 = r4677407 + r4677410;
        double r4677412 = 14.0;
        double r4677413 = r4677409 * r4677409;
        double r4677414 = r4677412 * r4677413;
        double r4677415 = r4677411 + r4677414;
        double r4677416 = -9.333333;
        double r4677417 = r4677413 * r4677409;
        double r4677418 = r4677416 * r4677417;
        double r4677419 = r4677415 + r4677418;
        double r4677420 = 2.916667;
        double r4677421 = r4677417 * r4677409;
        double r4677422 = r4677420 * r4677421;
        double r4677423 = r4677419 + r4677422;
        double r4677424 = -0.466667;
        double r4677425 = r4677421 * r4677409;
        double r4677426 = r4677424 * r4677425;
        double r4677427 = r4677423 + r4677426;
        double r4677428 = 0.038889;
        double r4677429 = r4677425 * r4677409;
        double r4677430 = r4677428 * r4677429;
        double r4677431 = r4677427 + r4677430;
        double r4677432 = -0.001587;
        double r4677433 = r4677429 * r4677409;
        double r4677434 = r4677432 * r4677433;
        double r4677435 = r4677431 + r4677434;
        double r4677436 = 2.5e-05;
        double r4677437 = r4677433 * r4677409;
        double r4677438 = r4677436 * r4677437;
        double r4677439 = r4677435 + r4677438;
        return r4677439;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4677440, r4677441, r4677442, r4677443, r4677444, r4677445, r4677446, r4677447, r4677448, r4677449, r4677450, r4677451, r4677452, r4677453, r4677454, r4677455, r4677456, r4677457, r4677458, r4677459, r4677460, r4677461, r4677462, r4677463, r4677464, r4677465, r4677466, r4677467, r4677468, r4677469, r4677470, r4677471, r4677472;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677440, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677441, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r4677442);
        mpfr_init(r4677443);
        mpfr_init(r4677444);
        mpfr_init_set_str(r4677445, "14.0", 10, MPFR_RNDN);
        mpfr_init(r4677446);
        mpfr_init(r4677447);
        mpfr_init(r4677448);
        mpfr_init_set_str(r4677449, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r4677450);
        mpfr_init(r4677451);
        mpfr_init(r4677452);
        mpfr_init_set_str(r4677453, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r4677454);
        mpfr_init(r4677455);
        mpfr_init(r4677456);
        mpfr_init_set_str(r4677457, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r4677458);
        mpfr_init(r4677459);
        mpfr_init(r4677460);
        mpfr_init_set_str(r4677461, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r4677462);
        mpfr_init(r4677463);
        mpfr_init(r4677464);
        mpfr_init_set_str(r4677465, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r4677466);
        mpfr_init(r4677467);
        mpfr_init(r4677468);
        mpfr_init_set_str(r4677469, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r4677470);
        mpfr_init(r4677471);
        mpfr_init(r4677472);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4677442, x, MPFR_RNDN);
        mpfr_mul(r4677443, r4677441, r4677442, MPFR_RNDN);
        mpfr_add(r4677444, r4677440, r4677443, MPFR_RNDN);
        ;
        mpfr_mul(r4677446, r4677442, r4677442, MPFR_RNDN);
        mpfr_mul(r4677447, r4677445, r4677446, MPFR_RNDN);
        mpfr_add(r4677448, r4677444, r4677447, MPFR_RNDN);
        ;
        mpfr_mul(r4677450, r4677446, r4677442, MPFR_RNDN);
        mpfr_mul(r4677451, r4677449, r4677450, MPFR_RNDN);
        mpfr_add(r4677452, r4677448, r4677451, MPFR_RNDN);
        ;
        mpfr_mul(r4677454, r4677450, r4677442, MPFR_RNDN);
        mpfr_mul(r4677455, r4677453, r4677454, MPFR_RNDN);
        mpfr_add(r4677456, r4677452, r4677455, MPFR_RNDN);
        ;
        mpfr_mul(r4677458, r4677454, r4677442, MPFR_RNDN);
        mpfr_mul(r4677459, r4677457, r4677458, MPFR_RNDN);
        mpfr_add(r4677460, r4677456, r4677459, MPFR_RNDN);
        ;
        mpfr_mul(r4677462, r4677458, r4677442, MPFR_RNDN);
        mpfr_mul(r4677463, r4677461, r4677462, MPFR_RNDN);
        mpfr_add(r4677464, r4677460, r4677463, MPFR_RNDN);
        ;
        mpfr_mul(r4677466, r4677462, r4677442, MPFR_RNDN);
        mpfr_mul(r4677467, r4677465, r4677466, MPFR_RNDN);
        mpfr_add(r4677468, r4677464, r4677467, MPFR_RNDN);
        ;
        mpfr_mul(r4677470, r4677466, r4677442, MPFR_RNDN);
        mpfr_mul(r4677471, r4677469, r4677470, MPFR_RNDN);
        mpfr_add(r4677472, r4677468, r4677471, MPFR_RNDN);
        return mpfr_get_d(r4677472, MPFR_RNDN);
}

static mpfr_t r4677473, r4677474, r4677475, r4677476, r4677477, r4677478, r4677479, r4677480, r4677481, r4677482, r4677483, r4677484, r4677485, r4677486, r4677487, r4677488, r4677489, r4677490, r4677491, r4677492, r4677493, r4677494, r4677495, r4677496, r4677497, r4677498, r4677499, r4677500, r4677501, r4677502, r4677503, r4677504, r4677505;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677473, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677474, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r4677475);
        mpfr_init(r4677476);
        mpfr_init(r4677477);
        mpfr_init_set_str(r4677478, "14.0", 10, MPFR_RNDN);
        mpfr_init(r4677479);
        mpfr_init(r4677480);
        mpfr_init(r4677481);
        mpfr_init_set_str(r4677482, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r4677483);
        mpfr_init(r4677484);
        mpfr_init(r4677485);
        mpfr_init_set_str(r4677486, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r4677487);
        mpfr_init(r4677488);
        mpfr_init(r4677489);
        mpfr_init_set_str(r4677490, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r4677491);
        mpfr_init(r4677492);
        mpfr_init(r4677493);
        mpfr_init_set_str(r4677494, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r4677495);
        mpfr_init(r4677496);
        mpfr_init(r4677497);
        mpfr_init_set_str(r4677498, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r4677499);
        mpfr_init(r4677500);
        mpfr_init(r4677501);
        mpfr_init_set_str(r4677502, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r4677503);
        mpfr_init(r4677504);
        mpfr_init(r4677505);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4677475, x, MPFR_RNDN);
        mpfr_mul(r4677476, r4677474, r4677475, MPFR_RNDN);
        mpfr_add(r4677477, r4677473, r4677476, MPFR_RNDN);
        ;
        mpfr_mul(r4677479, r4677475, r4677475, MPFR_RNDN);
        mpfr_mul(r4677480, r4677478, r4677479, MPFR_RNDN);
        mpfr_add(r4677481, r4677477, r4677480, MPFR_RNDN);
        ;
        mpfr_mul(r4677483, r4677479, r4677475, MPFR_RNDN);
        mpfr_mul(r4677484, r4677482, r4677483, MPFR_RNDN);
        mpfr_add(r4677485, r4677481, r4677484, MPFR_RNDN);
        ;
        mpfr_mul(r4677487, r4677483, r4677475, MPFR_RNDN);
        mpfr_mul(r4677488, r4677486, r4677487, MPFR_RNDN);
        mpfr_add(r4677489, r4677485, r4677488, MPFR_RNDN);
        ;
        mpfr_mul(r4677491, r4677487, r4677475, MPFR_RNDN);
        mpfr_mul(r4677492, r4677490, r4677491, MPFR_RNDN);
        mpfr_add(r4677493, r4677489, r4677492, MPFR_RNDN);
        ;
        mpfr_mul(r4677495, r4677491, r4677475, MPFR_RNDN);
        mpfr_mul(r4677496, r4677494, r4677495, MPFR_RNDN);
        mpfr_add(r4677497, r4677493, r4677496, MPFR_RNDN);
        ;
        mpfr_mul(r4677499, r4677495, r4677475, MPFR_RNDN);
        mpfr_mul(r4677500, r4677498, r4677499, MPFR_RNDN);
        mpfr_add(r4677501, r4677497, r4677500, MPFR_RNDN);
        ;
        mpfr_mul(r4677503, r4677499, r4677475, MPFR_RNDN);
        mpfr_mul(r4677504, r4677502, r4677503, MPFR_RNDN);
        mpfr_add(r4677505, r4677501, r4677504, MPFR_RNDN);
        return mpfr_get_d(r4677505, MPFR_RNDN);
}

static mpfr_t r4677506, r4677507, r4677508, r4677509, r4677510, r4677511, r4677512, r4677513, r4677514, r4677515, r4677516, r4677517, r4677518, r4677519, r4677520, r4677521, r4677522, r4677523, r4677524, r4677525, r4677526, r4677527, r4677528, r4677529, r4677530, r4677531, r4677532, r4677533, r4677534, r4677535, r4677536, r4677537, r4677538;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677506, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677507, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r4677508);
        mpfr_init(r4677509);
        mpfr_init(r4677510);
        mpfr_init_set_str(r4677511, "14.0", 10, MPFR_RNDN);
        mpfr_init(r4677512);
        mpfr_init(r4677513);
        mpfr_init(r4677514);
        mpfr_init_set_str(r4677515, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r4677516);
        mpfr_init(r4677517);
        mpfr_init(r4677518);
        mpfr_init_set_str(r4677519, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r4677520);
        mpfr_init(r4677521);
        mpfr_init(r4677522);
        mpfr_init_set_str(r4677523, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r4677524);
        mpfr_init(r4677525);
        mpfr_init(r4677526);
        mpfr_init_set_str(r4677527, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r4677528);
        mpfr_init(r4677529);
        mpfr_init(r4677530);
        mpfr_init_set_str(r4677531, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r4677532);
        mpfr_init(r4677533);
        mpfr_init(r4677534);
        mpfr_init_set_str(r4677535, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r4677536);
        mpfr_init(r4677537);
        mpfr_init(r4677538);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4677508, x, MPFR_RNDN);
        mpfr_mul(r4677509, r4677507, r4677508, MPFR_RNDN);
        mpfr_add(r4677510, r4677506, r4677509, MPFR_RNDN);
        ;
        mpfr_mul(r4677512, r4677508, r4677508, MPFR_RNDN);
        mpfr_mul(r4677513, r4677511, r4677512, MPFR_RNDN);
        mpfr_add(r4677514, r4677510, r4677513, MPFR_RNDN);
        ;
        mpfr_mul(r4677516, r4677512, r4677508, MPFR_RNDN);
        mpfr_mul(r4677517, r4677515, r4677516, MPFR_RNDN);
        mpfr_add(r4677518, r4677514, r4677517, MPFR_RNDN);
        ;
        mpfr_mul(r4677520, r4677516, r4677508, MPFR_RNDN);
        mpfr_mul(r4677521, r4677519, r4677520, MPFR_RNDN);
        mpfr_add(r4677522, r4677518, r4677521, MPFR_RNDN);
        ;
        mpfr_mul(r4677524, r4677520, r4677508, MPFR_RNDN);
        mpfr_mul(r4677525, r4677523, r4677524, MPFR_RNDN);
        mpfr_add(r4677526, r4677522, r4677525, MPFR_RNDN);
        ;
        mpfr_mul(r4677528, r4677524, r4677508, MPFR_RNDN);
        mpfr_mul(r4677529, r4677527, r4677528, MPFR_RNDN);
        mpfr_add(r4677530, r4677526, r4677529, MPFR_RNDN);
        ;
        mpfr_mul(r4677532, r4677528, r4677508, MPFR_RNDN);
        mpfr_mul(r4677533, r4677531, r4677532, MPFR_RNDN);
        mpfr_add(r4677534, r4677530, r4677533, MPFR_RNDN);
        ;
        mpfr_mul(r4677536, r4677532, r4677508, MPFR_RNDN);
        mpfr_mul(r4677537, r4677535, r4677536, MPFR_RNDN);
        mpfr_add(r4677538, r4677534, r4677537, MPFR_RNDN);
        return mpfr_get_d(r4677538, MPFR_RNDN);
}

