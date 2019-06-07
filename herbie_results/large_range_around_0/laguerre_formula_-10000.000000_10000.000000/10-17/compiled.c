#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "17";

double f_if(float x) {
        float r10745305 = 1.0;
        float r10745306 = -17.0;
        float r10745307 = x;
        float r10745308 = r10745306 * r10745307;
        float r10745309 = r10745305 + r10745308;
        float r10745310 = 68.0;
        float r10745311 = r10745307 * r10745307;
        float r10745312 = r10745310 * r10745311;
        float r10745313 = r10745309 + r10745312;
        float r10745314 = -113.333333;
        float r10745315 = r10745311 * r10745307;
        float r10745316 = r10745314 * r10745315;
        float r10745317 = r10745313 + r10745316;
        float r10745318 = 99.166667;
        float r10745319 = r10745315 * r10745307;
        float r10745320 = r10745318 * r10745319;
        float r10745321 = r10745317 + r10745320;
        float r10745322 = -51.566667;
        float r10745323 = r10745319 * r10745307;
        float r10745324 = r10745322 * r10745323;
        float r10745325 = r10745321 + r10745324;
        float r10745326 = 17.188889;
        float r10745327 = r10745323 * r10745307;
        float r10745328 = r10745326 * r10745327;
        float r10745329 = r10745325 + r10745328;
        float r10745330 = -3.85873;
        float r10745331 = r10745327 * r10745307;
        float r10745332 = r10745330 * r10745331;
        float r10745333 = r10745329 + r10745332;
        float r10745334 = 0.602927;
        float r10745335 = r10745331 * r10745307;
        float r10745336 = r10745334 * r10745335;
        float r10745337 = r10745333 + r10745336;
        float r10745338 = -0.066992;
        float r10745339 = r10745335 * r10745307;
        float r10745340 = r10745338 * r10745339;
        float r10745341 = r10745337 + r10745340;
        float r10745342 = 0.005359;
        float r10745343 = r10745339 * r10745307;
        float r10745344 = r10745342 * r10745343;
        float r10745345 = r10745341 + r10745344;
        float r10745346 = -0.00031;
        float r10745347 = r10745343 * r10745307;
        float r10745348 = r10745346 * r10745347;
        float r10745349 = r10745345 + r10745348;
        float r10745350 = 1.3e-05;
        float r10745351 = r10745347 * r10745307;
        float r10745352 = r10745350 * r10745351;
        float r10745353 = r10745349 + r10745352;
        return r10745353;
}

double f_id(double x) {
        double r10745354 = 1.0;
        double r10745355 = -17.0;
        double r10745356 = x;
        double r10745357 = r10745355 * r10745356;
        double r10745358 = r10745354 + r10745357;
        double r10745359 = 68.0;
        double r10745360 = r10745356 * r10745356;
        double r10745361 = r10745359 * r10745360;
        double r10745362 = r10745358 + r10745361;
        double r10745363 = -113.333333;
        double r10745364 = r10745360 * r10745356;
        double r10745365 = r10745363 * r10745364;
        double r10745366 = r10745362 + r10745365;
        double r10745367 = 99.166667;
        double r10745368 = r10745364 * r10745356;
        double r10745369 = r10745367 * r10745368;
        double r10745370 = r10745366 + r10745369;
        double r10745371 = -51.566667;
        double r10745372 = r10745368 * r10745356;
        double r10745373 = r10745371 * r10745372;
        double r10745374 = r10745370 + r10745373;
        double r10745375 = 17.188889;
        double r10745376 = r10745372 * r10745356;
        double r10745377 = r10745375 * r10745376;
        double r10745378 = r10745374 + r10745377;
        double r10745379 = -3.85873;
        double r10745380 = r10745376 * r10745356;
        double r10745381 = r10745379 * r10745380;
        double r10745382 = r10745378 + r10745381;
        double r10745383 = 0.602927;
        double r10745384 = r10745380 * r10745356;
        double r10745385 = r10745383 * r10745384;
        double r10745386 = r10745382 + r10745385;
        double r10745387 = -0.066992;
        double r10745388 = r10745384 * r10745356;
        double r10745389 = r10745387 * r10745388;
        double r10745390 = r10745386 + r10745389;
        double r10745391 = 0.005359;
        double r10745392 = r10745388 * r10745356;
        double r10745393 = r10745391 * r10745392;
        double r10745394 = r10745390 + r10745393;
        double r10745395 = -0.00031;
        double r10745396 = r10745392 * r10745356;
        double r10745397 = r10745395 * r10745396;
        double r10745398 = r10745394 + r10745397;
        double r10745399 = 1.3e-05;
        double r10745400 = r10745396 * r10745356;
        double r10745401 = r10745399 * r10745400;
        double r10745402 = r10745398 + r10745401;
        return r10745402;
}


double f_of(float x) {
        float r10745403 = x;
        float r10745404 = r10745403 * r10745403;
        float r10745405 = r10745404 * r10745404;
        float r10745406 = 3;
        float r10745407 = pow(r10745403, r10745406);
        float r10745408 = r10745407 * r10745407;
        float r10745409 = r10745405 * r10745408;
        float r10745410 = -0.00031;
        float r10745411 = r10745403 * r10745410;
        float r10745412 = 0.005359;
        float r10745413 = r10745411 + r10745412;
        float r10745414 = r10745409 * r10745413;
        float r10745415 = r10745405 * r10745405;
        float r10745416 = 0.602927;
        float r10745417 = -0.066992;
        float r10745418 = r10745417 * r10745403;
        float r10745419 = r10745416 + r10745418;
        float r10745420 = r10745415 * r10745419;
        float r10745421 = r10745414 + r10745420;
        float r10745422 = log(r10745404);
        float r10745423 = r10745422 + r10745422;
        float r10745424 = exp(r10745423);
        float r10745425 = 99.166667;
        float r10745426 = -51.566667;
        float r10745427 = r10745426 * r10745403;
        float r10745428 = r10745425 + r10745427;
        float r10745429 = r10745424 * r10745428;
        float r10745430 = 17.188889;
        float r10745431 = -3.85873;
        float r10745432 = r10745431 * r10745403;
        float r10745433 = r10745430 + r10745432;
        float r10745434 = r10745408 * r10745433;
        float r10745435 = r10745429 + r10745434;
        float r10745436 = 68.0;
        float r10745437 = -113.333333;
        float r10745438 = r10745437 * r10745403;
        float r10745439 = r10745436 + r10745438;
        float r10745440 = r10745404 * r10745439;
        float r10745441 = -17.0;
        float r10745442 = r10745403 * r10745441;
        float r10745443 = 1.0;
        float r10745444 = r10745442 + r10745443;
        float r10745445 = r10745440 + r10745444;
        float r10745446 = r10745435 + r10745445;
        float r10745447 = r10745421 + r10745446;
        float r10745448 = 1.3e-05;
        float r10745449 = r10745448 * r10745403;
        float r10745450 = r10745449 * r10745404;
        float r10745451 = r10745408 * r10745407;
        float r10745452 = r10745450 * r10745451;
        float r10745453 = r10745447 + r10745452;
        return r10745453;
}

double f_od(double x) {
        double r10745454 = x;
        double r10745455 = r10745454 * r10745454;
        double r10745456 = r10745455 * r10745455;
        double r10745457 = 3;
        double r10745458 = pow(r10745454, r10745457);
        double r10745459 = r10745458 * r10745458;
        double r10745460 = r10745456 * r10745459;
        double r10745461 = -0.00031;
        double r10745462 = r10745454 * r10745461;
        double r10745463 = 0.005359;
        double r10745464 = r10745462 + r10745463;
        double r10745465 = r10745460 * r10745464;
        double r10745466 = r10745456 * r10745456;
        double r10745467 = 0.602927;
        double r10745468 = -0.066992;
        double r10745469 = r10745468 * r10745454;
        double r10745470 = r10745467 + r10745469;
        double r10745471 = r10745466 * r10745470;
        double r10745472 = r10745465 + r10745471;
        double r10745473 = log(r10745455);
        double r10745474 = r10745473 + r10745473;
        double r10745475 = exp(r10745474);
        double r10745476 = 99.166667;
        double r10745477 = -51.566667;
        double r10745478 = r10745477 * r10745454;
        double r10745479 = r10745476 + r10745478;
        double r10745480 = r10745475 * r10745479;
        double r10745481 = 17.188889;
        double r10745482 = -3.85873;
        double r10745483 = r10745482 * r10745454;
        double r10745484 = r10745481 + r10745483;
        double r10745485 = r10745459 * r10745484;
        double r10745486 = r10745480 + r10745485;
        double r10745487 = 68.0;
        double r10745488 = -113.333333;
        double r10745489 = r10745488 * r10745454;
        double r10745490 = r10745487 + r10745489;
        double r10745491 = r10745455 * r10745490;
        double r10745492 = -17.0;
        double r10745493 = r10745454 * r10745492;
        double r10745494 = 1.0;
        double r10745495 = r10745493 + r10745494;
        double r10745496 = r10745491 + r10745495;
        double r10745497 = r10745486 + r10745496;
        double r10745498 = r10745472 + r10745497;
        double r10745499 = 1.3e-05;
        double r10745500 = r10745499 * r10745454;
        double r10745501 = r10745500 * r10745455;
        double r10745502 = r10745459 * r10745458;
        double r10745503 = r10745501 * r10745502;
        double r10745504 = r10745498 + r10745503;
        return r10745504;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10745505, r10745506, r10745507, r10745508, r10745509, r10745510, r10745511, r10745512, r10745513, r10745514, r10745515, r10745516, r10745517, r10745518, r10745519, r10745520, r10745521, r10745522, r10745523, r10745524, r10745525, r10745526, r10745527, r10745528, r10745529, r10745530, r10745531, r10745532, r10745533, r10745534, r10745535, r10745536, r10745537, r10745538, r10745539, r10745540, r10745541, r10745542, r10745543, r10745544, r10745545, r10745546, r10745547, r10745548, r10745549, r10745550, r10745551, r10745552, r10745553;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10745505, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745506, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10745507);
        mpfr_init(r10745508);
        mpfr_init(r10745509);
        mpfr_init_set_str(r10745510, "68.0", 10, MPFR_RNDN);
        mpfr_init(r10745511);
        mpfr_init(r10745512);
        mpfr_init(r10745513);
        mpfr_init_set_str(r10745514, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10745515);
        mpfr_init(r10745516);
        mpfr_init(r10745517);
        mpfr_init_set_str(r10745518, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r10745519);
        mpfr_init(r10745520);
        mpfr_init(r10745521);
        mpfr_init_set_str(r10745522, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10745523);
        mpfr_init(r10745524);
        mpfr_init(r10745525);
        mpfr_init_set_str(r10745526, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r10745527);
        mpfr_init(r10745528);
        mpfr_init(r10745529);
        mpfr_init_set_str(r10745530, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10745531);
        mpfr_init(r10745532);
        mpfr_init(r10745533);
        mpfr_init_set_str(r10745534, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r10745535);
        mpfr_init(r10745536);
        mpfr_init(r10745537);
        mpfr_init_set_str(r10745538, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10745539);
        mpfr_init(r10745540);
        mpfr_init(r10745541);
        mpfr_init_set_str(r10745542, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10745543);
        mpfr_init(r10745544);
        mpfr_init(r10745545);
        mpfr_init_set_str(r10745546, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10745547);
        mpfr_init(r10745548);
        mpfr_init(r10745549);
        mpfr_init_set_str(r10745550, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10745551);
        mpfr_init(r10745552);
        mpfr_init(r10745553);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10745507, x, MPFR_RNDN);
        mpfr_mul(r10745508, r10745506, r10745507, MPFR_RNDN);
        mpfr_add(r10745509, r10745505, r10745508, MPFR_RNDN);
        ;
        mpfr_mul(r10745511, r10745507, r10745507, MPFR_RNDN);
        mpfr_mul(r10745512, r10745510, r10745511, MPFR_RNDN);
        mpfr_add(r10745513, r10745509, r10745512, MPFR_RNDN);
        ;
        mpfr_mul(r10745515, r10745511, r10745507, MPFR_RNDN);
        mpfr_mul(r10745516, r10745514, r10745515, MPFR_RNDN);
        mpfr_add(r10745517, r10745513, r10745516, MPFR_RNDN);
        ;
        mpfr_mul(r10745519, r10745515, r10745507, MPFR_RNDN);
        mpfr_mul(r10745520, r10745518, r10745519, MPFR_RNDN);
        mpfr_add(r10745521, r10745517, r10745520, MPFR_RNDN);
        ;
        mpfr_mul(r10745523, r10745519, r10745507, MPFR_RNDN);
        mpfr_mul(r10745524, r10745522, r10745523, MPFR_RNDN);
        mpfr_add(r10745525, r10745521, r10745524, MPFR_RNDN);
        ;
        mpfr_mul(r10745527, r10745523, r10745507, MPFR_RNDN);
        mpfr_mul(r10745528, r10745526, r10745527, MPFR_RNDN);
        mpfr_add(r10745529, r10745525, r10745528, MPFR_RNDN);
        ;
        mpfr_mul(r10745531, r10745527, r10745507, MPFR_RNDN);
        mpfr_mul(r10745532, r10745530, r10745531, MPFR_RNDN);
        mpfr_add(r10745533, r10745529, r10745532, MPFR_RNDN);
        ;
        mpfr_mul(r10745535, r10745531, r10745507, MPFR_RNDN);
        mpfr_mul(r10745536, r10745534, r10745535, MPFR_RNDN);
        mpfr_add(r10745537, r10745533, r10745536, MPFR_RNDN);
        ;
        mpfr_mul(r10745539, r10745535, r10745507, MPFR_RNDN);
        mpfr_mul(r10745540, r10745538, r10745539, MPFR_RNDN);
        mpfr_add(r10745541, r10745537, r10745540, MPFR_RNDN);
        ;
        mpfr_mul(r10745543, r10745539, r10745507, MPFR_RNDN);
        mpfr_mul(r10745544, r10745542, r10745543, MPFR_RNDN);
        mpfr_add(r10745545, r10745541, r10745544, MPFR_RNDN);
        ;
        mpfr_mul(r10745547, r10745543, r10745507, MPFR_RNDN);
        mpfr_mul(r10745548, r10745546, r10745547, MPFR_RNDN);
        mpfr_add(r10745549, r10745545, r10745548, MPFR_RNDN);
        ;
        mpfr_mul(r10745551, r10745547, r10745507, MPFR_RNDN);
        mpfr_mul(r10745552, r10745550, r10745551, MPFR_RNDN);
        mpfr_add(r10745553, r10745549, r10745552, MPFR_RNDN);
        return mpfr_get_d(r10745553, MPFR_RNDN);
}

static mpfr_t r10745554, r10745555, r10745556, r10745557, r10745558, r10745559, r10745560, r10745561, r10745562, r10745563, r10745564, r10745565, r10745566, r10745567, r10745568, r10745569, r10745570, r10745571, r10745572, r10745573, r10745574, r10745575, r10745576, r10745577, r10745578, r10745579, r10745580, r10745581, r10745582, r10745583, r10745584, r10745585, r10745586, r10745587, r10745588, r10745589, r10745590, r10745591, r10745592, r10745593, r10745594, r10745595, r10745596, r10745597, r10745598, r10745599, r10745600, r10745601, r10745602, r10745603, r10745604;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10745554);
        mpfr_init(r10745555);
        mpfr_init(r10745556);
        mpfr_init_set_str(r10745557, "3", 10, MPFR_RNDN);
        mpfr_init(r10745558);
        mpfr_init(r10745559);
        mpfr_init(r10745560);
        mpfr_init_set_str(r10745561, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10745562);
        mpfr_init_set_str(r10745563, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10745564);
        mpfr_init(r10745565);
        mpfr_init(r10745566);
        mpfr_init_set_str(r10745567, "0.602927", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745568, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10745569);
        mpfr_init(r10745570);
        mpfr_init(r10745571);
        mpfr_init(r10745572);
        mpfr_init(r10745573);
        mpfr_init(r10745574);
        mpfr_init(r10745575);
        mpfr_init_set_str(r10745576, "99.166667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745577, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10745578);
        mpfr_init(r10745579);
        mpfr_init(r10745580);
        mpfr_init_set_str(r10745581, "17.188889", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745582, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10745583);
        mpfr_init(r10745584);
        mpfr_init(r10745585);
        mpfr_init(r10745586);
        mpfr_init_set_str(r10745587, "68.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745588, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10745589);
        mpfr_init(r10745590);
        mpfr_init(r10745591);
        mpfr_init_set_str(r10745592, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10745593);
        mpfr_init_set_str(r10745594, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10745595);
        mpfr_init(r10745596);
        mpfr_init(r10745597);
        mpfr_init(r10745598);
        mpfr_init_set_str(r10745599, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10745600);
        mpfr_init(r10745601);
        mpfr_init(r10745602);
        mpfr_init(r10745603);
        mpfr_init(r10745604);
}

double f_fm(double x) {
        mpfr_set_d(r10745554, x, MPFR_RNDN);
        mpfr_mul(r10745555, r10745554, r10745554, MPFR_RNDN);
        mpfr_mul(r10745556, r10745555, r10745555, MPFR_RNDN);
        ;
        mpfr_pow(r10745558, r10745554, r10745557, MPFR_RNDN);
        mpfr_mul(r10745559, r10745558, r10745558, MPFR_RNDN);
        mpfr_mul(r10745560, r10745556, r10745559, MPFR_RNDN);
        ;
        mpfr_mul(r10745562, r10745554, r10745561, MPFR_RNDN);
        ;
        mpfr_add(r10745564, r10745562, r10745563, MPFR_RNDN);
        mpfr_mul(r10745565, r10745560, r10745564, MPFR_RNDN);
        mpfr_mul(r10745566, r10745556, r10745556, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10745569, r10745568, r10745554, MPFR_RNDN);
        mpfr_add(r10745570, r10745567, r10745569, MPFR_RNDN);
        mpfr_mul(r10745571, r10745566, r10745570, MPFR_RNDN);
        mpfr_add(r10745572, r10745565, r10745571, MPFR_RNDN);
        mpfr_log(r10745573, r10745555, MPFR_RNDN);
        mpfr_add(r10745574, r10745573, r10745573, MPFR_RNDN);
        mpfr_exp(r10745575, r10745574, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10745578, r10745577, r10745554, MPFR_RNDN);
        mpfr_add(r10745579, r10745576, r10745578, MPFR_RNDN);
        mpfr_mul(r10745580, r10745575, r10745579, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10745583, r10745582, r10745554, MPFR_RNDN);
        mpfr_add(r10745584, r10745581, r10745583, MPFR_RNDN);
        mpfr_mul(r10745585, r10745559, r10745584, MPFR_RNDN);
        mpfr_add(r10745586, r10745580, r10745585, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10745589, r10745588, r10745554, MPFR_RNDN);
        mpfr_add(r10745590, r10745587, r10745589, MPFR_RNDN);
        mpfr_mul(r10745591, r10745555, r10745590, MPFR_RNDN);
        ;
        mpfr_mul(r10745593, r10745554, r10745592, MPFR_RNDN);
        ;
        mpfr_add(r10745595, r10745593, r10745594, MPFR_RNDN);
        mpfr_add(r10745596, r10745591, r10745595, MPFR_RNDN);
        mpfr_add(r10745597, r10745586, r10745596, MPFR_RNDN);
        mpfr_add(r10745598, r10745572, r10745597, MPFR_RNDN);
        ;
        mpfr_mul(r10745600, r10745599, r10745554, MPFR_RNDN);
        mpfr_mul(r10745601, r10745600, r10745555, MPFR_RNDN);
        mpfr_mul(r10745602, r10745559, r10745558, MPFR_RNDN);
        mpfr_mul(r10745603, r10745601, r10745602, MPFR_RNDN);
        mpfr_add(r10745604, r10745598, r10745603, MPFR_RNDN);
        return mpfr_get_d(r10745604, MPFR_RNDN);
}

static mpfr_t r10745605, r10745606, r10745607, r10745608, r10745609, r10745610, r10745611, r10745612, r10745613, r10745614, r10745615, r10745616, r10745617, r10745618, r10745619, r10745620, r10745621, r10745622, r10745623, r10745624, r10745625, r10745626, r10745627, r10745628, r10745629, r10745630, r10745631, r10745632, r10745633, r10745634, r10745635, r10745636, r10745637, r10745638, r10745639, r10745640, r10745641, r10745642, r10745643, r10745644, r10745645, r10745646, r10745647, r10745648, r10745649, r10745650, r10745651, r10745652, r10745653, r10745654, r10745655;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10745605);
        mpfr_init(r10745606);
        mpfr_init(r10745607);
        mpfr_init_set_str(r10745608, "3", 10, MPFR_RNDN);
        mpfr_init(r10745609);
        mpfr_init(r10745610);
        mpfr_init(r10745611);
        mpfr_init_set_str(r10745612, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r10745613);
        mpfr_init_set_str(r10745614, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r10745615);
        mpfr_init(r10745616);
        mpfr_init(r10745617);
        mpfr_init_set_str(r10745618, "0.602927", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745619, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r10745620);
        mpfr_init(r10745621);
        mpfr_init(r10745622);
        mpfr_init(r10745623);
        mpfr_init(r10745624);
        mpfr_init(r10745625);
        mpfr_init(r10745626);
        mpfr_init_set_str(r10745627, "99.166667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745628, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r10745629);
        mpfr_init(r10745630);
        mpfr_init(r10745631);
        mpfr_init_set_str(r10745632, "17.188889", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745633, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r10745634);
        mpfr_init(r10745635);
        mpfr_init(r10745636);
        mpfr_init(r10745637);
        mpfr_init_set_str(r10745638, "68.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10745639, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r10745640);
        mpfr_init(r10745641);
        mpfr_init(r10745642);
        mpfr_init_set_str(r10745643, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r10745644);
        mpfr_init_set_str(r10745645, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10745646);
        mpfr_init(r10745647);
        mpfr_init(r10745648);
        mpfr_init(r10745649);
        mpfr_init_set_str(r10745650, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r10745651);
        mpfr_init(r10745652);
        mpfr_init(r10745653);
        mpfr_init(r10745654);
        mpfr_init(r10745655);
}

double f_dm(double x) {
        mpfr_set_d(r10745605, x, MPFR_RNDN);
        mpfr_mul(r10745606, r10745605, r10745605, MPFR_RNDN);
        mpfr_mul(r10745607, r10745606, r10745606, MPFR_RNDN);
        ;
        mpfr_pow(r10745609, r10745605, r10745608, MPFR_RNDN);
        mpfr_mul(r10745610, r10745609, r10745609, MPFR_RNDN);
        mpfr_mul(r10745611, r10745607, r10745610, MPFR_RNDN);
        ;
        mpfr_mul(r10745613, r10745605, r10745612, MPFR_RNDN);
        ;
        mpfr_add(r10745615, r10745613, r10745614, MPFR_RNDN);
        mpfr_mul(r10745616, r10745611, r10745615, MPFR_RNDN);
        mpfr_mul(r10745617, r10745607, r10745607, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10745620, r10745619, r10745605, MPFR_RNDN);
        mpfr_add(r10745621, r10745618, r10745620, MPFR_RNDN);
        mpfr_mul(r10745622, r10745617, r10745621, MPFR_RNDN);
        mpfr_add(r10745623, r10745616, r10745622, MPFR_RNDN);
        mpfr_log(r10745624, r10745606, MPFR_RNDN);
        mpfr_add(r10745625, r10745624, r10745624, MPFR_RNDN);
        mpfr_exp(r10745626, r10745625, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10745629, r10745628, r10745605, MPFR_RNDN);
        mpfr_add(r10745630, r10745627, r10745629, MPFR_RNDN);
        mpfr_mul(r10745631, r10745626, r10745630, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10745634, r10745633, r10745605, MPFR_RNDN);
        mpfr_add(r10745635, r10745632, r10745634, MPFR_RNDN);
        mpfr_mul(r10745636, r10745610, r10745635, MPFR_RNDN);
        mpfr_add(r10745637, r10745631, r10745636, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10745640, r10745639, r10745605, MPFR_RNDN);
        mpfr_add(r10745641, r10745638, r10745640, MPFR_RNDN);
        mpfr_mul(r10745642, r10745606, r10745641, MPFR_RNDN);
        ;
        mpfr_mul(r10745644, r10745605, r10745643, MPFR_RNDN);
        ;
        mpfr_add(r10745646, r10745644, r10745645, MPFR_RNDN);
        mpfr_add(r10745647, r10745642, r10745646, MPFR_RNDN);
        mpfr_add(r10745648, r10745637, r10745647, MPFR_RNDN);
        mpfr_add(r10745649, r10745623, r10745648, MPFR_RNDN);
        ;
        mpfr_mul(r10745651, r10745650, r10745605, MPFR_RNDN);
        mpfr_mul(r10745652, r10745651, r10745606, MPFR_RNDN);
        mpfr_mul(r10745653, r10745610, r10745609, MPFR_RNDN);
        mpfr_mul(r10745654, r10745652, r10745653, MPFR_RNDN);
        mpfr_add(r10745655, r10745649, r10745654, MPFR_RNDN);
        return mpfr_get_d(r10745655, MPFR_RNDN);
}
