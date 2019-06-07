#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r10528332 = 1.0;
        float r10528333 = -5.0;
        float r10528334 = x;
        float r10528335 = r10528333 * r10528334;
        float r10528336 = r10528332 + r10528335;
        float r10528337 = 5.0;
        float r10528338 = r10528334 * r10528334;
        float r10528339 = r10528337 * r10528338;
        float r10528340 = r10528336 + r10528339;
        float r10528341 = -1.666667;
        float r10528342 = r10528338 * r10528334;
        float r10528343 = r10528341 * r10528342;
        float r10528344 = r10528340 + r10528343;
        float r10528345 = 0.208333;
        float r10528346 = r10528342 * r10528334;
        float r10528347 = r10528345 * r10528346;
        float r10528348 = r10528344 + r10528347;
        float r10528349 = -0.008333;
        float r10528350 = r10528346 * r10528334;
        float r10528351 = r10528349 * r10528350;
        float r10528352 = r10528348 + r10528351;
        return r10528352;
}

double f_id(double x) {
        double r10528353 = 1.0;
        double r10528354 = -5.0;
        double r10528355 = x;
        double r10528356 = r10528354 * r10528355;
        double r10528357 = r10528353 + r10528356;
        double r10528358 = 5.0;
        double r10528359 = r10528355 * r10528355;
        double r10528360 = r10528358 * r10528359;
        double r10528361 = r10528357 + r10528360;
        double r10528362 = -1.666667;
        double r10528363 = r10528359 * r10528355;
        double r10528364 = r10528362 * r10528363;
        double r10528365 = r10528361 + r10528364;
        double r10528366 = 0.208333;
        double r10528367 = r10528363 * r10528355;
        double r10528368 = r10528366 * r10528367;
        double r10528369 = r10528365 + r10528368;
        double r10528370 = -0.008333;
        double r10528371 = r10528367 * r10528355;
        double r10528372 = r10528370 * r10528371;
        double r10528373 = r10528369 + r10528372;
        return r10528373;
}


double f_of(float x) {
        float r10528374 = x;
        float r10528375 = -5.0;
        float r10528376 = r10528374 * r10528375;
        float r10528377 = 1.0;
        float r10528378 = r10528376 + r10528377;
        float r10528379 = r10528374 * r10528374;
        float r10528380 = r10528379 * r10528379;
        float r10528381 = -0.008333;
        float r10528382 = r10528381 * r10528374;
        float r10528383 = 0.208333;
        float r10528384 = r10528382 + r10528383;
        float r10528385 = r10528380 * r10528384;
        float r10528386 = -1.666667;
        float r10528387 = r10528386 * r10528374;
        float r10528388 = 5.0;
        float r10528389 = r10528387 + r10528388;
        float r10528390 = r10528374 * r10528389;
        float r10528391 = r10528374 * r10528390;
        float r10528392 = r10528385 + r10528391;
        float r10528393 = r10528378 + r10528392;
        return r10528393;
}

double f_od(double x) {
        double r10528394 = x;
        double r10528395 = -5.0;
        double r10528396 = r10528394 * r10528395;
        double r10528397 = 1.0;
        double r10528398 = r10528396 + r10528397;
        double r10528399 = r10528394 * r10528394;
        double r10528400 = r10528399 * r10528399;
        double r10528401 = -0.008333;
        double r10528402 = r10528401 * r10528394;
        double r10528403 = 0.208333;
        double r10528404 = r10528402 + r10528403;
        double r10528405 = r10528400 * r10528404;
        double r10528406 = -1.666667;
        double r10528407 = r10528406 * r10528394;
        double r10528408 = 5.0;
        double r10528409 = r10528407 + r10528408;
        double r10528410 = r10528394 * r10528409;
        double r10528411 = r10528394 * r10528410;
        double r10528412 = r10528405 + r10528411;
        double r10528413 = r10528398 + r10528412;
        return r10528413;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10528414, r10528415, r10528416, r10528417, r10528418, r10528419, r10528420, r10528421, r10528422, r10528423, r10528424, r10528425, r10528426, r10528427, r10528428, r10528429, r10528430, r10528431, r10528432, r10528433, r10528434;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10528414, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528415, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10528416);
        mpfr_init(r10528417);
        mpfr_init(r10528418);
        mpfr_init_set_str(r10528419, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10528420);
        mpfr_init(r10528421);
        mpfr_init(r10528422);
        mpfr_init_set_str(r10528423, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10528424);
        mpfr_init(r10528425);
        mpfr_init(r10528426);
        mpfr_init_set_str(r10528427, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10528428);
        mpfr_init(r10528429);
        mpfr_init(r10528430);
        mpfr_init_set_str(r10528431, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10528432);
        mpfr_init(r10528433);
        mpfr_init(r10528434);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10528416, x, MPFR_RNDN);
        mpfr_mul(r10528417, r10528415, r10528416, MPFR_RNDN);
        mpfr_add(r10528418, r10528414, r10528417, MPFR_RNDN);
        ;
        mpfr_mul(r10528420, r10528416, r10528416, MPFR_RNDN);
        mpfr_mul(r10528421, r10528419, r10528420, MPFR_RNDN);
        mpfr_add(r10528422, r10528418, r10528421, MPFR_RNDN);
        ;
        mpfr_mul(r10528424, r10528420, r10528416, MPFR_RNDN);
        mpfr_mul(r10528425, r10528423, r10528424, MPFR_RNDN);
        mpfr_add(r10528426, r10528422, r10528425, MPFR_RNDN);
        ;
        mpfr_mul(r10528428, r10528424, r10528416, MPFR_RNDN);
        mpfr_mul(r10528429, r10528427, r10528428, MPFR_RNDN);
        mpfr_add(r10528430, r10528426, r10528429, MPFR_RNDN);
        ;
        mpfr_mul(r10528432, r10528428, r10528416, MPFR_RNDN);
        mpfr_mul(r10528433, r10528431, r10528432, MPFR_RNDN);
        mpfr_add(r10528434, r10528430, r10528433, MPFR_RNDN);
        return mpfr_get_d(r10528434, MPFR_RNDN);
}

static mpfr_t r10528435, r10528436, r10528437, r10528438, r10528439, r10528440, r10528441, r10528442, r10528443, r10528444, r10528445, r10528446, r10528447, r10528448, r10528449, r10528450, r10528451, r10528452, r10528453, r10528454;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10528435);
        mpfr_init_set_str(r10528436, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10528437);
        mpfr_init_set_str(r10528438, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528439);
        mpfr_init(r10528440);
        mpfr_init(r10528441);
        mpfr_init_set_str(r10528442, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10528443);
        mpfr_init_set_str(r10528444, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10528445);
        mpfr_init(r10528446);
        mpfr_init_set_str(r10528447, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10528448);
        mpfr_init_set_str(r10528449, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10528450);
        mpfr_init(r10528451);
        mpfr_init(r10528452);
        mpfr_init(r10528453);
        mpfr_init(r10528454);
}

double f_fm(double x) {
        mpfr_set_d(r10528435, x, MPFR_RNDN);
        ;
        mpfr_mul(r10528437, r10528435, r10528436, MPFR_RNDN);
        ;
        mpfr_add(r10528439, r10528437, r10528438, MPFR_RNDN);
        mpfr_mul(r10528440, r10528435, r10528435, MPFR_RNDN);
        mpfr_mul(r10528441, r10528440, r10528440, MPFR_RNDN);
        ;
        mpfr_mul(r10528443, r10528442, r10528435, MPFR_RNDN);
        ;
        mpfr_add(r10528445, r10528443, r10528444, MPFR_RNDN);
        mpfr_mul(r10528446, r10528441, r10528445, MPFR_RNDN);
        ;
        mpfr_mul(r10528448, r10528447, r10528435, MPFR_RNDN);
        ;
        mpfr_add(r10528450, r10528448, r10528449, MPFR_RNDN);
        mpfr_mul(r10528451, r10528435, r10528450, MPFR_RNDN);
        mpfr_mul(r10528452, r10528435, r10528451, MPFR_RNDN);
        mpfr_add(r10528453, r10528446, r10528452, MPFR_RNDN);
        mpfr_add(r10528454, r10528439, r10528453, MPFR_RNDN);
        return mpfr_get_d(r10528454, MPFR_RNDN);
}

static mpfr_t r10528455, r10528456, r10528457, r10528458, r10528459, r10528460, r10528461, r10528462, r10528463, r10528464, r10528465, r10528466, r10528467, r10528468, r10528469, r10528470, r10528471, r10528472, r10528473, r10528474;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10528455);
        mpfr_init_set_str(r10528456, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10528457);
        mpfr_init_set_str(r10528458, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528459);
        mpfr_init(r10528460);
        mpfr_init(r10528461);
        mpfr_init_set_str(r10528462, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10528463);
        mpfr_init_set_str(r10528464, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10528465);
        mpfr_init(r10528466);
        mpfr_init_set_str(r10528467, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10528468);
        mpfr_init_set_str(r10528469, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10528470);
        mpfr_init(r10528471);
        mpfr_init(r10528472);
        mpfr_init(r10528473);
        mpfr_init(r10528474);
}

double f_dm(double x) {
        mpfr_set_d(r10528455, x, MPFR_RNDN);
        ;
        mpfr_mul(r10528457, r10528455, r10528456, MPFR_RNDN);
        ;
        mpfr_add(r10528459, r10528457, r10528458, MPFR_RNDN);
        mpfr_mul(r10528460, r10528455, r10528455, MPFR_RNDN);
        mpfr_mul(r10528461, r10528460, r10528460, MPFR_RNDN);
        ;
        mpfr_mul(r10528463, r10528462, r10528455, MPFR_RNDN);
        ;
        mpfr_add(r10528465, r10528463, r10528464, MPFR_RNDN);
        mpfr_mul(r10528466, r10528461, r10528465, MPFR_RNDN);
        ;
        mpfr_mul(r10528468, r10528467, r10528455, MPFR_RNDN);
        ;
        mpfr_add(r10528470, r10528468, r10528469, MPFR_RNDN);
        mpfr_mul(r10528471, r10528455, r10528470, MPFR_RNDN);
        mpfr_mul(r10528472, r10528455, r10528471, MPFR_RNDN);
        mpfr_add(r10528473, r10528466, r10528472, MPFR_RNDN);
        mpfr_add(r10528474, r10528459, r10528473, MPFR_RNDN);
        return mpfr_get_d(r10528474, MPFR_RNDN);
}

