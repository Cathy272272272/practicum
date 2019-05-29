#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "17";

double f_if(float x) {
        float r10003299 = 1.0;
        float r10003300 = -17.0;
        float r10003301 = x;
        float r10003302 = r10003300 * r10003301;
        float r10003303 = r10003299 + r10003302;
        float r10003304 = 68.0;
        float r10003305 = r10003301 * r10003301;
        float r10003306 = r10003304 * r10003305;
        float r10003307 = r10003303 + r10003306;
        float r10003308 = -113.333333;
        float r10003309 = r10003305 * r10003301;
        float r10003310 = r10003308 * r10003309;
        float r10003311 = r10003307 + r10003310;
        float r10003312 = 99.166667;
        float r10003313 = r10003309 * r10003301;
        float r10003314 = r10003312 * r10003313;
        float r10003315 = r10003311 + r10003314;
        float r10003316 = -51.566667;
        float r10003317 = r10003313 * r10003301;
        float r10003318 = r10003316 * r10003317;
        float r10003319 = r10003315 + r10003318;
        float r10003320 = 17.188889;
        float r10003321 = r10003317 * r10003301;
        float r10003322 = r10003320 * r10003321;
        float r10003323 = r10003319 + r10003322;
        float r10003324 = -3.85873;
        float r10003325 = r10003321 * r10003301;
        float r10003326 = r10003324 * r10003325;
        float r10003327 = r10003323 + r10003326;
        float r10003328 = 0.602927;
        float r10003329 = r10003325 * r10003301;
        float r10003330 = r10003328 * r10003329;
        float r10003331 = r10003327 + r10003330;
        float r10003332 = -0.066992;
        float r10003333 = r10003329 * r10003301;
        float r10003334 = r10003332 * r10003333;
        float r10003335 = r10003331 + r10003334;
        float r10003336 = 0.005359;
        float r10003337 = r10003333 * r10003301;
        float r10003338 = r10003336 * r10003337;
        float r10003339 = r10003335 + r10003338;
        float r10003340 = -0.00031;
        float r10003341 = r10003337 * r10003301;
        float r10003342 = r10003340 * r10003341;
        float r10003343 = r10003339 + r10003342;
        float r10003344 = 1.3e-05;
        float r10003345 = r10003341 * r10003301;
        float r10003346 = r10003344 * r10003345;
        float r10003347 = r10003343 + r10003346;
        return r10003347;
}

double f_id(double x) {
        double r10003348 = 1.0;
        double r10003349 = -17.0;
        double r10003350 = x;
        double r10003351 = r10003349 * r10003350;
        double r10003352 = r10003348 + r10003351;
        double r10003353 = 68.0;
        double r10003354 = r10003350 * r10003350;
        double r10003355 = r10003353 * r10003354;
        double r10003356 = r10003352 + r10003355;
        double r10003357 = -113.333333;
        double r10003358 = r10003354 * r10003350;
        double r10003359 = r10003357 * r10003358;
        double r10003360 = r10003356 + r10003359;
        double r10003361 = 99.166667;
        double r10003362 = r10003358 * r10003350;
        double r10003363 = r10003361 * r10003362;
        double r10003364 = r10003360 + r10003363;
        double r10003365 = -51.566667;
        double r10003366 = r10003362 * r10003350;
        double r10003367 = r10003365 * r10003366;
        double r10003368 = r10003364 + r10003367;
        double r10003369 = 17.188889;
        double r10003370 = r10003366 * r10003350;
        double r10003371 = r10003369 * r10003370;
        double r10003372 = r10003368 + r10003371;
        double r10003373 = -3.85873;
        double r10003374 = r10003370 * r10003350;
        double r10003375 = r10003373 * r10003374;
        double r10003376 = r10003372 + r10003375;
        double r10003377 = 0.602927;
        double r10003378 = r10003374 * r10003350;
        double r10003379 = r10003377 * r10003378;
        double r10003380 = r10003376 + r10003379;
        double r10003381 = -0.066992;
        double r10003382 = r10003378 * r10003350;
        double r10003383 = r10003381 * r10003382;
        double r10003384 = r10003380 + r10003383;
        double r10003385 = 0.005359;
        double r10003386 = r10003382 * r10003350;
        double r10003387 = r10003385 * r10003386;
        double r10003388 = r10003384 + r10003387;
        double r10003389 = -0.00031;
        double r10003390 = r10003386 * r10003350;
        double r10003391 = r10003389 * r10003390;
        double r10003392 = r10003388 + r10003391;
        double r10003393 = 1.3e-05;
        double r10003394 = r10003390 * r10003350;
        double r10003395 = r10003393 * r10003394;
        double r10003396 = r10003392 + r10003395;
        return r10003396;
}


double f_of(float x) {
        float r10003397 = 1.0;
        float r10003398 = -17.0;
        float r10003399 = x;
        float r10003400 = r10003398 * r10003399;
        float r10003401 = r10003397 + r10003400;
        float r10003402 = 68.0;
        float r10003403 = r10003399 * r10003399;
        float r10003404 = r10003402 * r10003403;
        float r10003405 = r10003401 + r10003404;
        float r10003406 = -113.333333;
        float r10003407 = r10003403 * r10003399;
        float r10003408 = r10003406 * r10003407;
        float r10003409 = r10003405 + r10003408;
        float r10003410 = 99.166667;
        float r10003411 = r10003407 * r10003399;
        float r10003412 = r10003410 * r10003411;
        float r10003413 = r10003409 + r10003412;
        float r10003414 = -51.566667;
        float r10003415 = r10003411 * r10003399;
        float r10003416 = r10003414 * r10003415;
        float r10003417 = r10003413 + r10003416;
        float r10003418 = 17.188889;
        float r10003419 = r10003415 * r10003399;
        float r10003420 = r10003418 * r10003419;
        float r10003421 = r10003417 + r10003420;
        float r10003422 = -3.85873;
        float r10003423 = r10003419 * r10003399;
        float r10003424 = r10003422 * r10003423;
        float r10003425 = r10003421 + r10003424;
        float r10003426 = 0.602927;
        float r10003427 = r10003423 * r10003399;
        float r10003428 = r10003426 * r10003427;
        float r10003429 = r10003425 + r10003428;
        float r10003430 = -0.066992;
        float r10003431 = r10003427 * r10003399;
        float r10003432 = r10003430 * r10003431;
        float r10003433 = r10003429 + r10003432;
        float r10003434 = 0.005359;
        float r10003435 = r10003431 * r10003399;
        float r10003436 = r10003434 * r10003435;
        float r10003437 = r10003433 + r10003436;
        float r10003438 = -0.00031;
        float r10003439 = r10003435 * r10003399;
        float r10003440 = r10003438 * r10003439;
        float r10003441 = r10003437 + r10003440;
        float r10003442 = 1.3e-05;
        float r10003443 = r10003439 * r10003399;
        float r10003444 = r10003442 * r10003443;
        float r10003445 = r10003441 + r10003444;
        return r10003445;
}

double f_od(double x) {
        double r10003446 = 1.0;
        double r10003447 = -17.0;
        double r10003448 = x;
        double r10003449 = r10003447 * r10003448;
        double r10003450 = r10003446 + r10003449;
        double r10003451 = 68.0;
        double r10003452 = r10003448 * r10003448;
        double r10003453 = r10003451 * r10003452;
        double r10003454 = r10003450 + r10003453;
        double r10003455 = -113.333333;
        double r10003456 = r10003452 * r10003448;
        double r10003457 = r10003455 * r10003456;
        double r10003458 = r10003454 + r10003457;
        double r10003459 = 99.166667;
        double r10003460 = r10003456 * r10003448;
        double r10003461 = r10003459 * r10003460;
        double r10003462 = r10003458 + r10003461;
        double r10003463 = -51.566667;
        double r10003464 = r10003460 * r10003448;
        double r10003465 = r10003463 * r10003464;
        double r10003466 = r10003462 + r10003465;
        double r10003467 = 17.188889;
        double r10003468 = r10003464 * r10003448;
        double r10003469 = r10003467 * r10003468;
        double r10003470 = r10003466 + r10003469;
        double r10003471 = -3.85873;
        double r10003472 = r10003468 * r10003448;
        double r10003473 = r10003471 * r10003472;
        double r10003474 = r10003470 + r10003473;
        double r10003475 = 0.602927;
        double r10003476 = r10003472 * r10003448;
        double r10003477 = r10003475 * r10003476;
        double r10003478 = r10003474 + r10003477;
        double r10003479 = -0.066992;
        double r10003480 = r10003476 * r10003448;
        double r10003481 = r10003479 * r10003480;
        double r10003482 = r10003478 + r10003481;
        double r10003483 = 0.005359;
        double r10003484 = r10003480 * r10003448;
        double r10003485 = r10003483 * r10003484;
        double r10003486 = r10003482 + r10003485;
        double r10003487 = -0.00031;
        double r10003488 = r10003484 * r10003448;
        double r10003489 = r10003487 * r10003488;
        double r10003490 = r10003486 + r10003489;
        double r10003491 = 1.3e-05;
        double r10003492 = r10003488 * r10003448;
        double r10003493 = r10003491 * r10003492;
        double r10003494 = r10003490 + r10003493;
        return r10003494;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10003495, r10003496, r10003497, r10003498, r10003499, r10003500, r10003501, r10003502, r10003503, r10003504, r10003505, r10003506, r10003507, r10003508, r10003509, r10003510, r10003511, r10003512, r10003513, r10003514, r10003515, r10003516, r10003517, r10003518, r10003519, r10003520, r10003521, r10003522, r10003523, r10003524, r10003525, r10003526, r10003527, r10003528, r10003529, r10003530, r10003531, r10003532, r10003533, r10003534, r10003535, r10003536, r10003537, r10003538, r10003539, r10003540, r10003541, r10003542, r10003543;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10003495, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003496, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10003497);
        mpfr_init(r10003498);
        mpfr_init(r10003499);
        mpfr_init_set_str(r10003500, "68.0", 10, MPFR_RNDN);
        mpfr_init(r10003501);
        mpfr_init(r10003502);
        mpfr_init(r10003503);
        mpfr_init_set_str(r10003504, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10003505);
        mpfr_init(r10003506);
        mpfr_init(r10003507);
        mpfr_init_set_str(r10003508, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r10003509);
        mpfr_init(r10003510);
        mpfr_init(r10003511);
        mpfr_init_set_str(r10003512, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10003513);
        mpfr_init(r10003514);
        mpfr_init(r10003515);
        mpfr_init_set_str(r10003516, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r10003517);
        mpfr_init(r10003518);
        mpfr_init(r10003519);
        mpfr_init_set_str(r10003520, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10003521);
        mpfr_init(r10003522);
        mpfr_init(r10003523);
        mpfr_init_set_str(r10003524, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r10003525);
        mpfr_init(r10003526);
        mpfr_init(r10003527);
        mpfr_init_set_str(r10003528, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10003529);
        mpfr_init(r10003530);
        mpfr_init(r10003531);
        mpfr_init_set_str(r10003532, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10003533);
        mpfr_init(r10003534);
        mpfr_init(r10003535);
        mpfr_init_set_str(r10003536, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10003537);
        mpfr_init(r10003538);
        mpfr_init(r10003539);
        mpfr_init_set_str(r10003540, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10003541);
        mpfr_init(r10003542);
        mpfr_init(r10003543);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10003497, x, MPFR_RNDN);
        mpfr_mul(r10003498, r10003496, r10003497, MPFR_RNDN);
        mpfr_add(r10003499, r10003495, r10003498, MPFR_RNDN);
        ;
        mpfr_mul(r10003501, r10003497, r10003497, MPFR_RNDN);
        mpfr_mul(r10003502, r10003500, r10003501, MPFR_RNDN);
        mpfr_add(r10003503, r10003499, r10003502, MPFR_RNDN);
        ;
        mpfr_mul(r10003505, r10003501, r10003497, MPFR_RNDN);
        mpfr_mul(r10003506, r10003504, r10003505, MPFR_RNDN);
        mpfr_add(r10003507, r10003503, r10003506, MPFR_RNDN);
        ;
        mpfr_mul(r10003509, r10003505, r10003497, MPFR_RNDN);
        mpfr_mul(r10003510, r10003508, r10003509, MPFR_RNDN);
        mpfr_add(r10003511, r10003507, r10003510, MPFR_RNDN);
        ;
        mpfr_mul(r10003513, r10003509, r10003497, MPFR_RNDN);
        mpfr_mul(r10003514, r10003512, r10003513, MPFR_RNDN);
        mpfr_add(r10003515, r10003511, r10003514, MPFR_RNDN);
        ;
        mpfr_mul(r10003517, r10003513, r10003497, MPFR_RNDN);
        mpfr_mul(r10003518, r10003516, r10003517, MPFR_RNDN);
        mpfr_add(r10003519, r10003515, r10003518, MPFR_RNDN);
        ;
        mpfr_mul(r10003521, r10003517, r10003497, MPFR_RNDN);
        mpfr_mul(r10003522, r10003520, r10003521, MPFR_RNDN);
        mpfr_add(r10003523, r10003519, r10003522, MPFR_RNDN);
        ;
        mpfr_mul(r10003525, r10003521, r10003497, MPFR_RNDN);
        mpfr_mul(r10003526, r10003524, r10003525, MPFR_RNDN);
        mpfr_add(r10003527, r10003523, r10003526, MPFR_RNDN);
        ;
        mpfr_mul(r10003529, r10003525, r10003497, MPFR_RNDN);
        mpfr_mul(r10003530, r10003528, r10003529, MPFR_RNDN);
        mpfr_add(r10003531, r10003527, r10003530, MPFR_RNDN);
        ;
        mpfr_mul(r10003533, r10003529, r10003497, MPFR_RNDN);
        mpfr_mul(r10003534, r10003532, r10003533, MPFR_RNDN);
        mpfr_add(r10003535, r10003531, r10003534, MPFR_RNDN);
        ;
        mpfr_mul(r10003537, r10003533, r10003497, MPFR_RNDN);
        mpfr_mul(r10003538, r10003536, r10003537, MPFR_RNDN);
        mpfr_add(r10003539, r10003535, r10003538, MPFR_RNDN);
        ;
        mpfr_mul(r10003541, r10003537, r10003497, MPFR_RNDN);
        mpfr_mul(r10003542, r10003540, r10003541, MPFR_RNDN);
        mpfr_add(r10003543, r10003539, r10003542, MPFR_RNDN);
        return mpfr_get_d(r10003543, MPFR_RNDN);
}

static mpfr_t r10003544, r10003545, r10003546, r10003547, r10003548, r10003549, r10003550, r10003551, r10003552, r10003553, r10003554, r10003555, r10003556, r10003557, r10003558, r10003559, r10003560, r10003561, r10003562, r10003563, r10003564, r10003565, r10003566, r10003567, r10003568, r10003569, r10003570, r10003571, r10003572, r10003573, r10003574, r10003575, r10003576, r10003577, r10003578, r10003579, r10003580, r10003581, r10003582, r10003583, r10003584, r10003585, r10003586, r10003587, r10003588, r10003589, r10003590, r10003591, r10003592;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10003544, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003545, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10003546);
        mpfr_init(r10003547);
        mpfr_init(r10003548);
        mpfr_init_set_str(r10003549, "68.0", 10, MPFR_RNDN);
        mpfr_init(r10003550);
        mpfr_init(r10003551);
        mpfr_init(r10003552);
        mpfr_init_set_str(r10003553, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10003554);
        mpfr_init(r10003555);
        mpfr_init(r10003556);
        mpfr_init_set_str(r10003557, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r10003558);
        mpfr_init(r10003559);
        mpfr_init(r10003560);
        mpfr_init_set_str(r10003561, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10003562);
        mpfr_init(r10003563);
        mpfr_init(r10003564);
        mpfr_init_set_str(r10003565, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r10003566);
        mpfr_init(r10003567);
        mpfr_init(r10003568);
        mpfr_init_set_str(r10003569, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10003570);
        mpfr_init(r10003571);
        mpfr_init(r10003572);
        mpfr_init_set_str(r10003573, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r10003574);
        mpfr_init(r10003575);
        mpfr_init(r10003576);
        mpfr_init_set_str(r10003577, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10003578);
        mpfr_init(r10003579);
        mpfr_init(r10003580);
        mpfr_init_set_str(r10003581, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10003582);
        mpfr_init(r10003583);
        mpfr_init(r10003584);
        mpfr_init_set_str(r10003585, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10003586);
        mpfr_init(r10003587);
        mpfr_init(r10003588);
        mpfr_init_set_str(r10003589, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10003590);
        mpfr_init(r10003591);
        mpfr_init(r10003592);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10003546, x, MPFR_RNDN);
        mpfr_mul(r10003547, r10003545, r10003546, MPFR_RNDN);
        mpfr_add(r10003548, r10003544, r10003547, MPFR_RNDN);
        ;
        mpfr_mul(r10003550, r10003546, r10003546, MPFR_RNDN);
        mpfr_mul(r10003551, r10003549, r10003550, MPFR_RNDN);
        mpfr_add(r10003552, r10003548, r10003551, MPFR_RNDN);
        ;
        mpfr_mul(r10003554, r10003550, r10003546, MPFR_RNDN);
        mpfr_mul(r10003555, r10003553, r10003554, MPFR_RNDN);
        mpfr_add(r10003556, r10003552, r10003555, MPFR_RNDN);
        ;
        mpfr_mul(r10003558, r10003554, r10003546, MPFR_RNDN);
        mpfr_mul(r10003559, r10003557, r10003558, MPFR_RNDN);
        mpfr_add(r10003560, r10003556, r10003559, MPFR_RNDN);
        ;
        mpfr_mul(r10003562, r10003558, r10003546, MPFR_RNDN);
        mpfr_mul(r10003563, r10003561, r10003562, MPFR_RNDN);
        mpfr_add(r10003564, r10003560, r10003563, MPFR_RNDN);
        ;
        mpfr_mul(r10003566, r10003562, r10003546, MPFR_RNDN);
        mpfr_mul(r10003567, r10003565, r10003566, MPFR_RNDN);
        mpfr_add(r10003568, r10003564, r10003567, MPFR_RNDN);
        ;
        mpfr_mul(r10003570, r10003566, r10003546, MPFR_RNDN);
        mpfr_mul(r10003571, r10003569, r10003570, MPFR_RNDN);
        mpfr_add(r10003572, r10003568, r10003571, MPFR_RNDN);
        ;
        mpfr_mul(r10003574, r10003570, r10003546, MPFR_RNDN);
        mpfr_mul(r10003575, r10003573, r10003574, MPFR_RNDN);
        mpfr_add(r10003576, r10003572, r10003575, MPFR_RNDN);
        ;
        mpfr_mul(r10003578, r10003574, r10003546, MPFR_RNDN);
        mpfr_mul(r10003579, r10003577, r10003578, MPFR_RNDN);
        mpfr_add(r10003580, r10003576, r10003579, MPFR_RNDN);
        ;
        mpfr_mul(r10003582, r10003578, r10003546, MPFR_RNDN);
        mpfr_mul(r10003583, r10003581, r10003582, MPFR_RNDN);
        mpfr_add(r10003584, r10003580, r10003583, MPFR_RNDN);
        ;
        mpfr_mul(r10003586, r10003582, r10003546, MPFR_RNDN);
        mpfr_mul(r10003587, r10003585, r10003586, MPFR_RNDN);
        mpfr_add(r10003588, r10003584, r10003587, MPFR_RNDN);
        ;
        mpfr_mul(r10003590, r10003586, r10003546, MPFR_RNDN);
        mpfr_mul(r10003591, r10003589, r10003590, MPFR_RNDN);
        mpfr_add(r10003592, r10003588, r10003591, MPFR_RNDN);
        return mpfr_get_d(r10003592, MPFR_RNDN);
}

static mpfr_t r10003593, r10003594, r10003595, r10003596, r10003597, r10003598, r10003599, r10003600, r10003601, r10003602, r10003603, r10003604, r10003605, r10003606, r10003607, r10003608, r10003609, r10003610, r10003611, r10003612, r10003613, r10003614, r10003615, r10003616, r10003617, r10003618, r10003619, r10003620, r10003621, r10003622, r10003623, r10003624, r10003625, r10003626, r10003627, r10003628, r10003629, r10003630, r10003631, r10003632, r10003633, r10003634, r10003635, r10003636, r10003637, r10003638, r10003639, r10003640, r10003641;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10003593, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003594, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10003595);
        mpfr_init(r10003596);
        mpfr_init(r10003597);
        mpfr_init_set_str(r10003598, "68.0", 10, MPFR_RNDN);
        mpfr_init(r10003599);
        mpfr_init(r10003600);
        mpfr_init(r10003601);
        mpfr_init_set_str(r10003602, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10003603);
        mpfr_init(r10003604);
        mpfr_init(r10003605);
        mpfr_init_set_str(r10003606, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r10003607);
        mpfr_init(r10003608);
        mpfr_init(r10003609);
        mpfr_init_set_str(r10003610, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10003611);
        mpfr_init(r10003612);
        mpfr_init(r10003613);
        mpfr_init_set_str(r10003614, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r10003615);
        mpfr_init(r10003616);
        mpfr_init(r10003617);
        mpfr_init_set_str(r10003618, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10003619);
        mpfr_init(r10003620);
        mpfr_init(r10003621);
        mpfr_init_set_str(r10003622, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r10003623);
        mpfr_init(r10003624);
        mpfr_init(r10003625);
        mpfr_init_set_str(r10003626, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10003627);
        mpfr_init(r10003628);
        mpfr_init(r10003629);
        mpfr_init_set_str(r10003630, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10003631);
        mpfr_init(r10003632);
        mpfr_init(r10003633);
        mpfr_init_set_str(r10003634, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10003635);
        mpfr_init(r10003636);
        mpfr_init(r10003637);
        mpfr_init_set_str(r10003638, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10003639);
        mpfr_init(r10003640);
        mpfr_init(r10003641);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10003595, x, MPFR_RNDN);
        mpfr_mul(r10003596, r10003594, r10003595, MPFR_RNDN);
        mpfr_add(r10003597, r10003593, r10003596, MPFR_RNDN);
        ;
        mpfr_mul(r10003599, r10003595, r10003595, MPFR_RNDN);
        mpfr_mul(r10003600, r10003598, r10003599, MPFR_RNDN);
        mpfr_add(r10003601, r10003597, r10003600, MPFR_RNDN);
        ;
        mpfr_mul(r10003603, r10003599, r10003595, MPFR_RNDN);
        mpfr_mul(r10003604, r10003602, r10003603, MPFR_RNDN);
        mpfr_add(r10003605, r10003601, r10003604, MPFR_RNDN);
        ;
        mpfr_mul(r10003607, r10003603, r10003595, MPFR_RNDN);
        mpfr_mul(r10003608, r10003606, r10003607, MPFR_RNDN);
        mpfr_add(r10003609, r10003605, r10003608, MPFR_RNDN);
        ;
        mpfr_mul(r10003611, r10003607, r10003595, MPFR_RNDN);
        mpfr_mul(r10003612, r10003610, r10003611, MPFR_RNDN);
        mpfr_add(r10003613, r10003609, r10003612, MPFR_RNDN);
        ;
        mpfr_mul(r10003615, r10003611, r10003595, MPFR_RNDN);
        mpfr_mul(r10003616, r10003614, r10003615, MPFR_RNDN);
        mpfr_add(r10003617, r10003613, r10003616, MPFR_RNDN);
        ;
        mpfr_mul(r10003619, r10003615, r10003595, MPFR_RNDN);
        mpfr_mul(r10003620, r10003618, r10003619, MPFR_RNDN);
        mpfr_add(r10003621, r10003617, r10003620, MPFR_RNDN);
        ;
        mpfr_mul(r10003623, r10003619, r10003595, MPFR_RNDN);
        mpfr_mul(r10003624, r10003622, r10003623, MPFR_RNDN);
        mpfr_add(r10003625, r10003621, r10003624, MPFR_RNDN);
        ;
        mpfr_mul(r10003627, r10003623, r10003595, MPFR_RNDN);
        mpfr_mul(r10003628, r10003626, r10003627, MPFR_RNDN);
        mpfr_add(r10003629, r10003625, r10003628, MPFR_RNDN);
        ;
        mpfr_mul(r10003631, r10003627, r10003595, MPFR_RNDN);
        mpfr_mul(r10003632, r10003630, r10003631, MPFR_RNDN);
        mpfr_add(r10003633, r10003629, r10003632, MPFR_RNDN);
        ;
        mpfr_mul(r10003635, r10003631, r10003595, MPFR_RNDN);
        mpfr_mul(r10003636, r10003634, r10003635, MPFR_RNDN);
        mpfr_add(r10003637, r10003633, r10003636, MPFR_RNDN);
        ;
        mpfr_mul(r10003639, r10003635, r10003595, MPFR_RNDN);
        mpfr_mul(r10003640, r10003638, r10003639, MPFR_RNDN);
        mpfr_add(r10003641, r10003637, r10003640, MPFR_RNDN);
        return mpfr_get_d(r10003641, MPFR_RNDN);
}
