#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r7997319 = 518918400.0;
        float r7997320 = -8302694400.0;
        float r7997321 = x;
        float r7997322 = r7997321 * r7997321;
        float r7997323 = r7997320 * r7997322;
        float r7997324 = r7997319 + r7997323;
        float r7997325 = 19372953600.0;
        float r7997326 = r7997322 * r7997321;
        float r7997327 = r7997326 * r7997321;
        float r7997328 = r7997325 * r7997327;
        float r7997329 = r7997324 + r7997328;
        float r7997330 = -15498362880.0;
        float r7997331 = r7997327 * r7997321;
        float r7997332 = r7997331 * r7997321;
        float r7997333 = r7997330 * r7997332;
        float r7997334 = r7997329 + r7997333;
        float r7997335 = 5535129600.0;
        float r7997336 = r7997332 * r7997321;
        float r7997337 = r7997336 * r7997321;
        float r7997338 = r7997335 * r7997337;
        float r7997339 = r7997334 + r7997338;
        float r7997340 = -984023040.0;
        float r7997341 = r7997337 * r7997321;
        float r7997342 = r7997341 * r7997321;
        float r7997343 = r7997340 * r7997342;
        float r7997344 = r7997339 + r7997343;
        float r7997345 = 89456640.0;
        float r7997346 = r7997342 * r7997321;
        float r7997347 = r7997346 * r7997321;
        float r7997348 = r7997345 * r7997347;
        float r7997349 = r7997344 + r7997348;
        float r7997350 = -3932160.0;
        float r7997351 = r7997347 * r7997321;
        float r7997352 = r7997351 * r7997321;
        float r7997353 = r7997350 * r7997352;
        float r7997354 = r7997349 + r7997353;
        float r7997355 = 65536.0;
        float r7997356 = r7997352 * r7997321;
        float r7997357 = r7997356 * r7997321;
        float r7997358 = r7997355 * r7997357;
        float r7997359 = r7997354 + r7997358;
        return r7997359;
}

double f_id(double x) {
        double r7997360 = 518918400.0;
        double r7997361 = -8302694400.0;
        double r7997362 = x;
        double r7997363 = r7997362 * r7997362;
        double r7997364 = r7997361 * r7997363;
        double r7997365 = r7997360 + r7997364;
        double r7997366 = 19372953600.0;
        double r7997367 = r7997363 * r7997362;
        double r7997368 = r7997367 * r7997362;
        double r7997369 = r7997366 * r7997368;
        double r7997370 = r7997365 + r7997369;
        double r7997371 = -15498362880.0;
        double r7997372 = r7997368 * r7997362;
        double r7997373 = r7997372 * r7997362;
        double r7997374 = r7997371 * r7997373;
        double r7997375 = r7997370 + r7997374;
        double r7997376 = 5535129600.0;
        double r7997377 = r7997373 * r7997362;
        double r7997378 = r7997377 * r7997362;
        double r7997379 = r7997376 * r7997378;
        double r7997380 = r7997375 + r7997379;
        double r7997381 = -984023040.0;
        double r7997382 = r7997378 * r7997362;
        double r7997383 = r7997382 * r7997362;
        double r7997384 = r7997381 * r7997383;
        double r7997385 = r7997380 + r7997384;
        double r7997386 = 89456640.0;
        double r7997387 = r7997383 * r7997362;
        double r7997388 = r7997387 * r7997362;
        double r7997389 = r7997386 * r7997388;
        double r7997390 = r7997385 + r7997389;
        double r7997391 = -3932160.0;
        double r7997392 = r7997388 * r7997362;
        double r7997393 = r7997392 * r7997362;
        double r7997394 = r7997391 * r7997393;
        double r7997395 = r7997390 + r7997394;
        double r7997396 = 65536.0;
        double r7997397 = r7997393 * r7997362;
        double r7997398 = r7997397 * r7997362;
        double r7997399 = r7997396 * r7997398;
        double r7997400 = r7997395 + r7997399;
        return r7997400;
}


double f_of(float x) {
        float r7997401 = x;
        float r7997402 = r7997401 * r7997401;
        float r7997403 = r7997402 * r7997402;
        float r7997404 = 19372953600.0;
        float r7997405 = -15498362880.0;
        float r7997406 = r7997405 * r7997401;
        float r7997407 = r7997401 * r7997406;
        float r7997408 = r7997404 + r7997407;
        float r7997409 = r7997403 * r7997408;
        float r7997410 = -8302694400.0;
        float r7997411 = r7997402 * r7997410;
        float r7997412 = 518918400.0;
        float r7997413 = r7997411 + r7997412;
        float r7997414 = 5535129600.0;
        float r7997415 = r7997402 * r7997414;
        float r7997416 = 3;
        float r7997417 = pow(r7997402, r7997416);
        float r7997418 = r7997415 * r7997417;
        float r7997419 = r7997413 + r7997418;
        float r7997420 = r7997409 + r7997419;
        float r7997421 = r7997417 * r7997403;
        float r7997422 = -984023040.0;
        float r7997423 = 89456640.0;
        float r7997424 = r7997423 * r7997401;
        float r7997425 = r7997401 * r7997424;
        float r7997426 = r7997422 + r7997425;
        float r7997427 = r7997421 * r7997426;
        float r7997428 = r7997421 * r7997403;
        float r7997429 = -3932160.0;
        float r7997430 = 65536.0;
        float r7997431 = r7997402 * r7997430;
        float r7997432 = r7997429 + r7997431;
        float r7997433 = r7997428 * r7997432;
        float r7997434 = r7997427 + r7997433;
        float r7997435 = r7997420 + r7997434;
        return r7997435;
}

double f_od(double x) {
        double r7997436 = x;
        double r7997437 = r7997436 * r7997436;
        double r7997438 = r7997437 * r7997437;
        double r7997439 = 19372953600.0;
        double r7997440 = -15498362880.0;
        double r7997441 = r7997440 * r7997436;
        double r7997442 = r7997436 * r7997441;
        double r7997443 = r7997439 + r7997442;
        double r7997444 = r7997438 * r7997443;
        double r7997445 = -8302694400.0;
        double r7997446 = r7997437 * r7997445;
        double r7997447 = 518918400.0;
        double r7997448 = r7997446 + r7997447;
        double r7997449 = 5535129600.0;
        double r7997450 = r7997437 * r7997449;
        double r7997451 = 3;
        double r7997452 = pow(r7997437, r7997451);
        double r7997453 = r7997450 * r7997452;
        double r7997454 = r7997448 + r7997453;
        double r7997455 = r7997444 + r7997454;
        double r7997456 = r7997452 * r7997438;
        double r7997457 = -984023040.0;
        double r7997458 = 89456640.0;
        double r7997459 = r7997458 * r7997436;
        double r7997460 = r7997436 * r7997459;
        double r7997461 = r7997457 + r7997460;
        double r7997462 = r7997456 * r7997461;
        double r7997463 = r7997456 * r7997438;
        double r7997464 = -3932160.0;
        double r7997465 = 65536.0;
        double r7997466 = r7997437 * r7997465;
        double r7997467 = r7997464 + r7997466;
        double r7997468 = r7997463 * r7997467;
        double r7997469 = r7997462 + r7997468;
        double r7997470 = r7997455 + r7997469;
        return r7997470;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7997471, r7997472, r7997473, r7997474, r7997475, r7997476, r7997477, r7997478, r7997479, r7997480, r7997481, r7997482, r7997483, r7997484, r7997485, r7997486, r7997487, r7997488, r7997489, r7997490, r7997491, r7997492, r7997493, r7997494, r7997495, r7997496, r7997497, r7997498, r7997499, r7997500, r7997501, r7997502, r7997503, r7997504, r7997505, r7997506, r7997507, r7997508, r7997509, r7997510, r7997511;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7997471, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997472, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7997473);
        mpfr_init(r7997474);
        mpfr_init(r7997475);
        mpfr_init(r7997476);
        mpfr_init_set_str(r7997477, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r7997478);
        mpfr_init(r7997479);
        mpfr_init(r7997480);
        mpfr_init(r7997481);
        mpfr_init_set_str(r7997482, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7997483);
        mpfr_init(r7997484);
        mpfr_init(r7997485);
        mpfr_init(r7997486);
        mpfr_init_set_str(r7997487, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r7997488);
        mpfr_init(r7997489);
        mpfr_init(r7997490);
        mpfr_init(r7997491);
        mpfr_init_set_str(r7997492, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r7997493);
        mpfr_init(r7997494);
        mpfr_init(r7997495);
        mpfr_init(r7997496);
        mpfr_init_set_str(r7997497, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7997498);
        mpfr_init(r7997499);
        mpfr_init(r7997500);
        mpfr_init(r7997501);
        mpfr_init_set_str(r7997502, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r7997503);
        mpfr_init(r7997504);
        mpfr_init(r7997505);
        mpfr_init(r7997506);
        mpfr_init_set_str(r7997507, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7997508);
        mpfr_init(r7997509);
        mpfr_init(r7997510);
        mpfr_init(r7997511);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7997473, x, MPFR_RNDN);
        mpfr_mul(r7997474, r7997473, r7997473, MPFR_RNDN);
        mpfr_mul(r7997475, r7997472, r7997474, MPFR_RNDN);
        mpfr_add(r7997476, r7997471, r7997475, MPFR_RNDN);
        ;
        mpfr_mul(r7997478, r7997474, r7997473, MPFR_RNDN);
        mpfr_mul(r7997479, r7997478, r7997473, MPFR_RNDN);
        mpfr_mul(r7997480, r7997477, r7997479, MPFR_RNDN);
        mpfr_add(r7997481, r7997476, r7997480, MPFR_RNDN);
        ;
        mpfr_mul(r7997483, r7997479, r7997473, MPFR_RNDN);
        mpfr_mul(r7997484, r7997483, r7997473, MPFR_RNDN);
        mpfr_mul(r7997485, r7997482, r7997484, MPFR_RNDN);
        mpfr_add(r7997486, r7997481, r7997485, MPFR_RNDN);
        ;
        mpfr_mul(r7997488, r7997484, r7997473, MPFR_RNDN);
        mpfr_mul(r7997489, r7997488, r7997473, MPFR_RNDN);
        mpfr_mul(r7997490, r7997487, r7997489, MPFR_RNDN);
        mpfr_add(r7997491, r7997486, r7997490, MPFR_RNDN);
        ;
        mpfr_mul(r7997493, r7997489, r7997473, MPFR_RNDN);
        mpfr_mul(r7997494, r7997493, r7997473, MPFR_RNDN);
        mpfr_mul(r7997495, r7997492, r7997494, MPFR_RNDN);
        mpfr_add(r7997496, r7997491, r7997495, MPFR_RNDN);
        ;
        mpfr_mul(r7997498, r7997494, r7997473, MPFR_RNDN);
        mpfr_mul(r7997499, r7997498, r7997473, MPFR_RNDN);
        mpfr_mul(r7997500, r7997497, r7997499, MPFR_RNDN);
        mpfr_add(r7997501, r7997496, r7997500, MPFR_RNDN);
        ;
        mpfr_mul(r7997503, r7997499, r7997473, MPFR_RNDN);
        mpfr_mul(r7997504, r7997503, r7997473, MPFR_RNDN);
        mpfr_mul(r7997505, r7997502, r7997504, MPFR_RNDN);
        mpfr_add(r7997506, r7997501, r7997505, MPFR_RNDN);
        ;
        mpfr_mul(r7997508, r7997504, r7997473, MPFR_RNDN);
        mpfr_mul(r7997509, r7997508, r7997473, MPFR_RNDN);
        mpfr_mul(r7997510, r7997507, r7997509, MPFR_RNDN);
        mpfr_add(r7997511, r7997506, r7997510, MPFR_RNDN);
        return mpfr_get_d(r7997511, MPFR_RNDN);
}

static mpfr_t r7997512, r7997513, r7997514, r7997515, r7997516, r7997517, r7997518, r7997519, r7997520, r7997521, r7997522, r7997523, r7997524, r7997525, r7997526, r7997527, r7997528, r7997529, r7997530, r7997531, r7997532, r7997533, r7997534, r7997535, r7997536, r7997537, r7997538, r7997539, r7997540, r7997541, r7997542, r7997543, r7997544, r7997545, r7997546;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7997512);
        mpfr_init(r7997513);
        mpfr_init(r7997514);
        mpfr_init_set_str(r7997515, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997516, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7997517);
        mpfr_init(r7997518);
        mpfr_init(r7997519);
        mpfr_init(r7997520);
        mpfr_init_set_str(r7997521, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7997522);
        mpfr_init_set_str(r7997523, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7997524);
        mpfr_init_set_str(r7997525, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r7997526);
        mpfr_init_set_str(r7997527, "3", 10, MPFR_RNDN);
        mpfr_init(r7997528);
        mpfr_init(r7997529);
        mpfr_init(r7997530);
        mpfr_init(r7997531);
        mpfr_init(r7997532);
        mpfr_init_set_str(r7997533, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997534, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7997535);
        mpfr_init(r7997536);
        mpfr_init(r7997537);
        mpfr_init(r7997538);
        mpfr_init(r7997539);
        mpfr_init_set_str(r7997540, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997541, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7997542);
        mpfr_init(r7997543);
        mpfr_init(r7997544);
        mpfr_init(r7997545);
        mpfr_init(r7997546);
}

double f_fm(double x) {
        mpfr_set_d(r7997512, x, MPFR_RNDN);
        mpfr_mul(r7997513, r7997512, r7997512, MPFR_RNDN);
        mpfr_mul(r7997514, r7997513, r7997513, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7997517, r7997516, r7997512, MPFR_RNDN);
        mpfr_mul(r7997518, r7997512, r7997517, MPFR_RNDN);
        mpfr_add(r7997519, r7997515, r7997518, MPFR_RNDN);
        mpfr_mul(r7997520, r7997514, r7997519, MPFR_RNDN);
        ;
        mpfr_mul(r7997522, r7997513, r7997521, MPFR_RNDN);
        ;
        mpfr_add(r7997524, r7997522, r7997523, MPFR_RNDN);
        ;
        mpfr_mul(r7997526, r7997513, r7997525, MPFR_RNDN);
        ;
        mpfr_pow(r7997528, r7997513, r7997527, MPFR_RNDN);
        mpfr_mul(r7997529, r7997526, r7997528, MPFR_RNDN);
        mpfr_add(r7997530, r7997524, r7997529, MPFR_RNDN);
        mpfr_add(r7997531, r7997520, r7997530, MPFR_RNDN);
        mpfr_mul(r7997532, r7997528, r7997514, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7997535, r7997534, r7997512, MPFR_RNDN);
        mpfr_mul(r7997536, r7997512, r7997535, MPFR_RNDN);
        mpfr_add(r7997537, r7997533, r7997536, MPFR_RNDN);
        mpfr_mul(r7997538, r7997532, r7997537, MPFR_RNDN);
        mpfr_mul(r7997539, r7997532, r7997514, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7997542, r7997513, r7997541, MPFR_RNDN);
        mpfr_add(r7997543, r7997540, r7997542, MPFR_RNDN);
        mpfr_mul(r7997544, r7997539, r7997543, MPFR_RNDN);
        mpfr_add(r7997545, r7997538, r7997544, MPFR_RNDN);
        mpfr_add(r7997546, r7997531, r7997545, MPFR_RNDN);
        return mpfr_get_d(r7997546, MPFR_RNDN);
}

static mpfr_t r7997547, r7997548, r7997549, r7997550, r7997551, r7997552, r7997553, r7997554, r7997555, r7997556, r7997557, r7997558, r7997559, r7997560, r7997561, r7997562, r7997563, r7997564, r7997565, r7997566, r7997567, r7997568, r7997569, r7997570, r7997571, r7997572, r7997573, r7997574, r7997575, r7997576, r7997577, r7997578, r7997579, r7997580, r7997581;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7997547);
        mpfr_init(r7997548);
        mpfr_init(r7997549);
        mpfr_init_set_str(r7997550, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997551, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7997552);
        mpfr_init(r7997553);
        mpfr_init(r7997554);
        mpfr_init(r7997555);
        mpfr_init_set_str(r7997556, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7997557);
        mpfr_init_set_str(r7997558, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7997559);
        mpfr_init_set_str(r7997560, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r7997561);
        mpfr_init_set_str(r7997562, "3", 10, MPFR_RNDN);
        mpfr_init(r7997563);
        mpfr_init(r7997564);
        mpfr_init(r7997565);
        mpfr_init(r7997566);
        mpfr_init(r7997567);
        mpfr_init_set_str(r7997568, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997569, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7997570);
        mpfr_init(r7997571);
        mpfr_init(r7997572);
        mpfr_init(r7997573);
        mpfr_init(r7997574);
        mpfr_init_set_str(r7997575, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997576, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7997577);
        mpfr_init(r7997578);
        mpfr_init(r7997579);
        mpfr_init(r7997580);
        mpfr_init(r7997581);
}

double f_dm(double x) {
        mpfr_set_d(r7997547, x, MPFR_RNDN);
        mpfr_mul(r7997548, r7997547, r7997547, MPFR_RNDN);
        mpfr_mul(r7997549, r7997548, r7997548, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7997552, r7997551, r7997547, MPFR_RNDN);
        mpfr_mul(r7997553, r7997547, r7997552, MPFR_RNDN);
        mpfr_add(r7997554, r7997550, r7997553, MPFR_RNDN);
        mpfr_mul(r7997555, r7997549, r7997554, MPFR_RNDN);
        ;
        mpfr_mul(r7997557, r7997548, r7997556, MPFR_RNDN);
        ;
        mpfr_add(r7997559, r7997557, r7997558, MPFR_RNDN);
        ;
        mpfr_mul(r7997561, r7997548, r7997560, MPFR_RNDN);
        ;
        mpfr_pow(r7997563, r7997548, r7997562, MPFR_RNDN);
        mpfr_mul(r7997564, r7997561, r7997563, MPFR_RNDN);
        mpfr_add(r7997565, r7997559, r7997564, MPFR_RNDN);
        mpfr_add(r7997566, r7997555, r7997565, MPFR_RNDN);
        mpfr_mul(r7997567, r7997563, r7997549, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7997570, r7997569, r7997547, MPFR_RNDN);
        mpfr_mul(r7997571, r7997547, r7997570, MPFR_RNDN);
        mpfr_add(r7997572, r7997568, r7997571, MPFR_RNDN);
        mpfr_mul(r7997573, r7997567, r7997572, MPFR_RNDN);
        mpfr_mul(r7997574, r7997567, r7997549, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7997577, r7997548, r7997576, MPFR_RNDN);
        mpfr_add(r7997578, r7997575, r7997577, MPFR_RNDN);
        mpfr_mul(r7997579, r7997574, r7997578, MPFR_RNDN);
        mpfr_add(r7997580, r7997573, r7997579, MPFR_RNDN);
        mpfr_add(r7997581, r7997566, r7997580, MPFR_RNDN);
        return mpfr_get_d(r7997581, MPFR_RNDN);
}

