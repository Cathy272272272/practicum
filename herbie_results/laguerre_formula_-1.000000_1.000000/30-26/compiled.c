#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "26";

double f_if(float x) {
        float r20874295 = 1.0;
        float r20874296 = -26.0;
        float r20874297 = x;
        float r20874298 = r20874296 * r20874297;
        float r20874299 = r20874295 + r20874298;
        float r20874300 = 162.5;
        float r20874301 = r20874297 * r20874297;
        float r20874302 = r20874300 * r20874301;
        float r20874303 = r20874299 + r20874302;
        float r20874304 = -433.333333;
        float r20874305 = r20874301 * r20874297;
        float r20874306 = r20874304 * r20874305;
        float r20874307 = r20874303 + r20874306;
        float r20874308 = 622.916667;
        float r20874309 = r20874305 * r20874297;
        float r20874310 = r20874308 * r20874309;
        float r20874311 = r20874307 + r20874310;
        float r20874312 = -548.166667;
        float r20874313 = r20874309 * r20874297;
        float r20874314 = r20874312 * r20874313;
        float r20874315 = r20874311 + r20874314;
        float r20874316 = 319.763889;
        float r20874317 = r20874313 * r20874297;
        float r20874318 = r20874316 * r20874317;
        float r20874319 = r20874315 + r20874318;
        float r20874320 = -130.515873;
        float r20874321 = r20874317 * r20874297;
        float r20874322 = r20874320 * r20874321;
        float r20874323 = r20874319 + r20874322;
        float r20874324 = 38.7469;
        float r20874325 = r20874321 * r20874297;
        float r20874326 = r20874324 * r20874325;
        float r20874327 = r20874323 + r20874326;
        float r20874328 = -8.610422;
        float r20874329 = r20874325 * r20874297;
        float r20874330 = r20874328 * r20874329;
        float r20874331 = r20874327 + r20874330;
        float r20874332 = 1.463772;
        float r20874333 = r20874329 * r20874297;
        float r20874334 = r20874332 * r20874333;
        float r20874335 = r20874331 + r20874334;
        float r20874336 = -0.193557;
        float r20874337 = r20874333 * r20874297;
        float r20874338 = r20874336 * r20874337;
        float r20874339 = r20874335 + r20874338;
        float r20874340 = 0.020162;
        float r20874341 = r20874337 * r20874297;
        float r20874342 = r20874340 * r20874341;
        float r20874343 = r20874339 + r20874342;
        float r20874344 = -0.00167;
        float r20874345 = r20874341 * r20874297;
        float r20874346 = r20874344 * r20874345;
        float r20874347 = r20874343 + r20874346;
        float r20874348 = 0.000111;
        float r20874349 = r20874345 * r20874297;
        float r20874350 = r20874348 * r20874349;
        float r20874351 = r20874347 + r20874350;
        float r20874352 = -6e-06;
        float r20874353 = r20874349 * r20874297;
        float r20874354 = r20874352 * r20874353;
        float r20874355 = r20874351 + r20874354;
        return r20874355;
}

double f_id(double x) {
        double r20874356 = 1.0;
        double r20874357 = -26.0;
        double r20874358 = x;
        double r20874359 = r20874357 * r20874358;
        double r20874360 = r20874356 + r20874359;
        double r20874361 = 162.5;
        double r20874362 = r20874358 * r20874358;
        double r20874363 = r20874361 * r20874362;
        double r20874364 = r20874360 + r20874363;
        double r20874365 = -433.333333;
        double r20874366 = r20874362 * r20874358;
        double r20874367 = r20874365 * r20874366;
        double r20874368 = r20874364 + r20874367;
        double r20874369 = 622.916667;
        double r20874370 = r20874366 * r20874358;
        double r20874371 = r20874369 * r20874370;
        double r20874372 = r20874368 + r20874371;
        double r20874373 = -548.166667;
        double r20874374 = r20874370 * r20874358;
        double r20874375 = r20874373 * r20874374;
        double r20874376 = r20874372 + r20874375;
        double r20874377 = 319.763889;
        double r20874378 = r20874374 * r20874358;
        double r20874379 = r20874377 * r20874378;
        double r20874380 = r20874376 + r20874379;
        double r20874381 = -130.515873;
        double r20874382 = r20874378 * r20874358;
        double r20874383 = r20874381 * r20874382;
        double r20874384 = r20874380 + r20874383;
        double r20874385 = 38.7469;
        double r20874386 = r20874382 * r20874358;
        double r20874387 = r20874385 * r20874386;
        double r20874388 = r20874384 + r20874387;
        double r20874389 = -8.610422;
        double r20874390 = r20874386 * r20874358;
        double r20874391 = r20874389 * r20874390;
        double r20874392 = r20874388 + r20874391;
        double r20874393 = 1.463772;
        double r20874394 = r20874390 * r20874358;
        double r20874395 = r20874393 * r20874394;
        double r20874396 = r20874392 + r20874395;
        double r20874397 = -0.193557;
        double r20874398 = r20874394 * r20874358;
        double r20874399 = r20874397 * r20874398;
        double r20874400 = r20874396 + r20874399;
        double r20874401 = 0.020162;
        double r20874402 = r20874398 * r20874358;
        double r20874403 = r20874401 * r20874402;
        double r20874404 = r20874400 + r20874403;
        double r20874405 = -0.00167;
        double r20874406 = r20874402 * r20874358;
        double r20874407 = r20874405 * r20874406;
        double r20874408 = r20874404 + r20874407;
        double r20874409 = 0.000111;
        double r20874410 = r20874406 * r20874358;
        double r20874411 = r20874409 * r20874410;
        double r20874412 = r20874408 + r20874411;
        double r20874413 = -6e-06;
        double r20874414 = r20874410 * r20874358;
        double r20874415 = r20874413 * r20874414;
        double r20874416 = r20874412 + r20874415;
        return r20874416;
}


double f_of(float x) {
        float r20874417 = 1.0;
        float r20874418 = -26.0;
        float r20874419 = x;
        float r20874420 = r20874418 * r20874419;
        float r20874421 = r20874417 + r20874420;
        float r20874422 = 162.5;
        float r20874423 = r20874419 * r20874419;
        float r20874424 = r20874422 * r20874423;
        float r20874425 = r20874421 + r20874424;
        float r20874426 = -433.333333;
        float r20874427 = r20874423 * r20874419;
        float r20874428 = r20874426 * r20874427;
        float r20874429 = r20874425 + r20874428;
        float r20874430 = 622.916667;
        float r20874431 = r20874427 * r20874419;
        float r20874432 = r20874430 * r20874431;
        float r20874433 = r20874429 + r20874432;
        float r20874434 = -548.166667;
        float r20874435 = r20874431 * r20874419;
        float r20874436 = r20874434 * r20874435;
        float r20874437 = r20874433 + r20874436;
        float r20874438 = 319.763889;
        float r20874439 = r20874435 * r20874419;
        float r20874440 = r20874438 * r20874439;
        float r20874441 = cbrt(r20874440);
        float r20874442 = r20874441 * r20874441;
        float r20874443 = r20874442 * r20874441;
        float r20874444 = r20874437 + r20874443;
        float r20874445 = -130.515873;
        float r20874446 = r20874439 * r20874419;
        float r20874447 = r20874445 * r20874446;
        float r20874448 = r20874444 + r20874447;
        float r20874449 = 38.7469;
        float r20874450 = r20874446 * r20874419;
        float r20874451 = r20874449 * r20874450;
        float r20874452 = r20874448 + r20874451;
        float r20874453 = -8.610422;
        float r20874454 = r20874450 * r20874419;
        float r20874455 = r20874453 * r20874454;
        float r20874456 = r20874452 + r20874455;
        float r20874457 = 1.463772;
        float r20874458 = r20874454 * r20874419;
        float r20874459 = r20874457 * r20874458;
        float r20874460 = r20874456 + r20874459;
        float r20874461 = -0.193557;
        float r20874462 = r20874458 * r20874419;
        float r20874463 = r20874461 * r20874462;
        float r20874464 = r20874460 + r20874463;
        float r20874465 = 0.020162;
        float r20874466 = r20874462 * r20874419;
        float r20874467 = r20874465 * r20874466;
        float r20874468 = r20874464 + r20874467;
        float r20874469 = -0.00167;
        float r20874470 = r20874466 * r20874419;
        float r20874471 = r20874469 * r20874470;
        float r20874472 = r20874468 + r20874471;
        float r20874473 = 0.000111;
        float r20874474 = r20874470 * r20874419;
        float r20874475 = r20874473 * r20874474;
        float r20874476 = r20874472 + r20874475;
        float r20874477 = -6e-06;
        float r20874478 = r20874474 * r20874419;
        float r20874479 = r20874477 * r20874478;
        float r20874480 = r20874476 + r20874479;
        return r20874480;
}

double f_od(double x) {
        double r20874481 = 1.0;
        double r20874482 = -26.0;
        double r20874483 = x;
        double r20874484 = r20874482 * r20874483;
        double r20874485 = r20874481 + r20874484;
        double r20874486 = 162.5;
        double r20874487 = r20874483 * r20874483;
        double r20874488 = r20874486 * r20874487;
        double r20874489 = r20874485 + r20874488;
        double r20874490 = -433.333333;
        double r20874491 = r20874487 * r20874483;
        double r20874492 = r20874490 * r20874491;
        double r20874493 = r20874489 + r20874492;
        double r20874494 = 622.916667;
        double r20874495 = r20874491 * r20874483;
        double r20874496 = r20874494 * r20874495;
        double r20874497 = r20874493 + r20874496;
        double r20874498 = -548.166667;
        double r20874499 = r20874495 * r20874483;
        double r20874500 = r20874498 * r20874499;
        double r20874501 = r20874497 + r20874500;
        double r20874502 = 319.763889;
        double r20874503 = r20874499 * r20874483;
        double r20874504 = r20874502 * r20874503;
        double r20874505 = cbrt(r20874504);
        double r20874506 = r20874505 * r20874505;
        double r20874507 = r20874506 * r20874505;
        double r20874508 = r20874501 + r20874507;
        double r20874509 = -130.515873;
        double r20874510 = r20874503 * r20874483;
        double r20874511 = r20874509 * r20874510;
        double r20874512 = r20874508 + r20874511;
        double r20874513 = 38.7469;
        double r20874514 = r20874510 * r20874483;
        double r20874515 = r20874513 * r20874514;
        double r20874516 = r20874512 + r20874515;
        double r20874517 = -8.610422;
        double r20874518 = r20874514 * r20874483;
        double r20874519 = r20874517 * r20874518;
        double r20874520 = r20874516 + r20874519;
        double r20874521 = 1.463772;
        double r20874522 = r20874518 * r20874483;
        double r20874523 = r20874521 * r20874522;
        double r20874524 = r20874520 + r20874523;
        double r20874525 = -0.193557;
        double r20874526 = r20874522 * r20874483;
        double r20874527 = r20874525 * r20874526;
        double r20874528 = r20874524 + r20874527;
        double r20874529 = 0.020162;
        double r20874530 = r20874526 * r20874483;
        double r20874531 = r20874529 * r20874530;
        double r20874532 = r20874528 + r20874531;
        double r20874533 = -0.00167;
        double r20874534 = r20874530 * r20874483;
        double r20874535 = r20874533 * r20874534;
        double r20874536 = r20874532 + r20874535;
        double r20874537 = 0.000111;
        double r20874538 = r20874534 * r20874483;
        double r20874539 = r20874537 * r20874538;
        double r20874540 = r20874536 + r20874539;
        double r20874541 = -6e-06;
        double r20874542 = r20874538 * r20874483;
        double r20874543 = r20874541 * r20874542;
        double r20874544 = r20874540 + r20874543;
        return r20874544;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20874545, r20874546, r20874547, r20874548, r20874549, r20874550, r20874551, r20874552, r20874553, r20874554, r20874555, r20874556, r20874557, r20874558, r20874559, r20874560, r20874561, r20874562, r20874563, r20874564, r20874565, r20874566, r20874567, r20874568, r20874569, r20874570, r20874571, r20874572, r20874573, r20874574, r20874575, r20874576, r20874577, r20874578, r20874579, r20874580, r20874581, r20874582, r20874583, r20874584, r20874585, r20874586, r20874587, r20874588, r20874589, r20874590, r20874591, r20874592, r20874593, r20874594, r20874595, r20874596, r20874597, r20874598, r20874599, r20874600, r20874601, r20874602, r20874603, r20874604, r20874605;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20874545, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20874546, "-26.0", 10, MPFR_RNDN);
        mpfr_init(r20874547);
        mpfr_init(r20874548);
        mpfr_init(r20874549);
        mpfr_init_set_str(r20874550, "162.5", 10, MPFR_RNDN);
        mpfr_init(r20874551);
        mpfr_init(r20874552);
        mpfr_init(r20874553);
        mpfr_init_set_str(r20874554, "-433.333333", 10, MPFR_RNDN);
        mpfr_init(r20874555);
        mpfr_init(r20874556);
        mpfr_init(r20874557);
        mpfr_init_set_str(r20874558, "622.916667", 10, MPFR_RNDN);
        mpfr_init(r20874559);
        mpfr_init(r20874560);
        mpfr_init(r20874561);
        mpfr_init_set_str(r20874562, "-548.166667", 10, MPFR_RNDN);
        mpfr_init(r20874563);
        mpfr_init(r20874564);
        mpfr_init(r20874565);
        mpfr_init_set_str(r20874566, "319.763889", 10, MPFR_RNDN);
        mpfr_init(r20874567);
        mpfr_init(r20874568);
        mpfr_init(r20874569);
        mpfr_init_set_str(r20874570, "-130.515873", 10, MPFR_RNDN);
        mpfr_init(r20874571);
        mpfr_init(r20874572);
        mpfr_init(r20874573);
        mpfr_init_set_str(r20874574, "38.7469", 10, MPFR_RNDN);
        mpfr_init(r20874575);
        mpfr_init(r20874576);
        mpfr_init(r20874577);
        mpfr_init_set_str(r20874578, "-8.610422", 10, MPFR_RNDN);
        mpfr_init(r20874579);
        mpfr_init(r20874580);
        mpfr_init(r20874581);
        mpfr_init_set_str(r20874582, "1.463772", 10, MPFR_RNDN);
        mpfr_init(r20874583);
        mpfr_init(r20874584);
        mpfr_init(r20874585);
        mpfr_init_set_str(r20874586, "-0.193557", 10, MPFR_RNDN);
        mpfr_init(r20874587);
        mpfr_init(r20874588);
        mpfr_init(r20874589);
        mpfr_init_set_str(r20874590, "0.020162", 10, MPFR_RNDN);
        mpfr_init(r20874591);
        mpfr_init(r20874592);
        mpfr_init(r20874593);
        mpfr_init_set_str(r20874594, "-0.00167", 10, MPFR_RNDN);
        mpfr_init(r20874595);
        mpfr_init(r20874596);
        mpfr_init(r20874597);
        mpfr_init_set_str(r20874598, "0.000111", 10, MPFR_RNDN);
        mpfr_init(r20874599);
        mpfr_init(r20874600);
        mpfr_init(r20874601);
        mpfr_init_set_str(r20874602, "-6e-06", 10, MPFR_RNDN);
        mpfr_init(r20874603);
        mpfr_init(r20874604);
        mpfr_init(r20874605);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20874547, x, MPFR_RNDN);
        mpfr_mul(r20874548, r20874546, r20874547, MPFR_RNDN);
        mpfr_add(r20874549, r20874545, r20874548, MPFR_RNDN);
        ;
        mpfr_mul(r20874551, r20874547, r20874547, MPFR_RNDN);
        mpfr_mul(r20874552, r20874550, r20874551, MPFR_RNDN);
        mpfr_add(r20874553, r20874549, r20874552, MPFR_RNDN);
        ;
        mpfr_mul(r20874555, r20874551, r20874547, MPFR_RNDN);
        mpfr_mul(r20874556, r20874554, r20874555, MPFR_RNDN);
        mpfr_add(r20874557, r20874553, r20874556, MPFR_RNDN);
        ;
        mpfr_mul(r20874559, r20874555, r20874547, MPFR_RNDN);
        mpfr_mul(r20874560, r20874558, r20874559, MPFR_RNDN);
        mpfr_add(r20874561, r20874557, r20874560, MPFR_RNDN);
        ;
        mpfr_mul(r20874563, r20874559, r20874547, MPFR_RNDN);
        mpfr_mul(r20874564, r20874562, r20874563, MPFR_RNDN);
        mpfr_add(r20874565, r20874561, r20874564, MPFR_RNDN);
        ;
        mpfr_mul(r20874567, r20874563, r20874547, MPFR_RNDN);
        mpfr_mul(r20874568, r20874566, r20874567, MPFR_RNDN);
        mpfr_add(r20874569, r20874565, r20874568, MPFR_RNDN);
        ;
        mpfr_mul(r20874571, r20874567, r20874547, MPFR_RNDN);
        mpfr_mul(r20874572, r20874570, r20874571, MPFR_RNDN);
        mpfr_add(r20874573, r20874569, r20874572, MPFR_RNDN);
        ;
        mpfr_mul(r20874575, r20874571, r20874547, MPFR_RNDN);
        mpfr_mul(r20874576, r20874574, r20874575, MPFR_RNDN);
        mpfr_add(r20874577, r20874573, r20874576, MPFR_RNDN);
        ;
        mpfr_mul(r20874579, r20874575, r20874547, MPFR_RNDN);
        mpfr_mul(r20874580, r20874578, r20874579, MPFR_RNDN);
        mpfr_add(r20874581, r20874577, r20874580, MPFR_RNDN);
        ;
        mpfr_mul(r20874583, r20874579, r20874547, MPFR_RNDN);
        mpfr_mul(r20874584, r20874582, r20874583, MPFR_RNDN);
        mpfr_add(r20874585, r20874581, r20874584, MPFR_RNDN);
        ;
        mpfr_mul(r20874587, r20874583, r20874547, MPFR_RNDN);
        mpfr_mul(r20874588, r20874586, r20874587, MPFR_RNDN);
        mpfr_add(r20874589, r20874585, r20874588, MPFR_RNDN);
        ;
        mpfr_mul(r20874591, r20874587, r20874547, MPFR_RNDN);
        mpfr_mul(r20874592, r20874590, r20874591, MPFR_RNDN);
        mpfr_add(r20874593, r20874589, r20874592, MPFR_RNDN);
        ;
        mpfr_mul(r20874595, r20874591, r20874547, MPFR_RNDN);
        mpfr_mul(r20874596, r20874594, r20874595, MPFR_RNDN);
        mpfr_add(r20874597, r20874593, r20874596, MPFR_RNDN);
        ;
        mpfr_mul(r20874599, r20874595, r20874547, MPFR_RNDN);
        mpfr_mul(r20874600, r20874598, r20874599, MPFR_RNDN);
        mpfr_add(r20874601, r20874597, r20874600, MPFR_RNDN);
        ;
        mpfr_mul(r20874603, r20874599, r20874547, MPFR_RNDN);
        mpfr_mul(r20874604, r20874602, r20874603, MPFR_RNDN);
        mpfr_add(r20874605, r20874601, r20874604, MPFR_RNDN);
        return mpfr_get_d(r20874605, MPFR_RNDN);
}

static mpfr_t r20874606, r20874607, r20874608, r20874609, r20874610, r20874611, r20874612, r20874613, r20874614, r20874615, r20874616, r20874617, r20874618, r20874619, r20874620, r20874621, r20874622, r20874623, r20874624, r20874625, r20874626, r20874627, r20874628, r20874629, r20874630, r20874631, r20874632, r20874633, r20874634, r20874635, r20874636, r20874637, r20874638, r20874639, r20874640, r20874641, r20874642, r20874643, r20874644, r20874645, r20874646, r20874647, r20874648, r20874649, r20874650, r20874651, r20874652, r20874653, r20874654, r20874655, r20874656, r20874657, r20874658, r20874659, r20874660, r20874661, r20874662, r20874663, r20874664, r20874665, r20874666, r20874667, r20874668, r20874669;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20874606, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20874607, "-26.0", 10, MPFR_RNDN);
        mpfr_init(r20874608);
        mpfr_init(r20874609);
        mpfr_init(r20874610);
        mpfr_init_set_str(r20874611, "162.5", 10, MPFR_RNDN);
        mpfr_init(r20874612);
        mpfr_init(r20874613);
        mpfr_init(r20874614);
        mpfr_init_set_str(r20874615, "-433.333333", 10, MPFR_RNDN);
        mpfr_init(r20874616);
        mpfr_init(r20874617);
        mpfr_init(r20874618);
        mpfr_init_set_str(r20874619, "622.916667", 10, MPFR_RNDN);
        mpfr_init(r20874620);
        mpfr_init(r20874621);
        mpfr_init(r20874622);
        mpfr_init_set_str(r20874623, "-548.166667", 10, MPFR_RNDN);
        mpfr_init(r20874624);
        mpfr_init(r20874625);
        mpfr_init(r20874626);
        mpfr_init_set_str(r20874627, "319.763889", 10, MPFR_RNDN);
        mpfr_init(r20874628);
        mpfr_init(r20874629);
        mpfr_init(r20874630);
        mpfr_init(r20874631);
        mpfr_init(r20874632);
        mpfr_init(r20874633);
        mpfr_init_set_str(r20874634, "-130.515873", 10, MPFR_RNDN);
        mpfr_init(r20874635);
        mpfr_init(r20874636);
        mpfr_init(r20874637);
        mpfr_init_set_str(r20874638, "38.7469", 10, MPFR_RNDN);
        mpfr_init(r20874639);
        mpfr_init(r20874640);
        mpfr_init(r20874641);
        mpfr_init_set_str(r20874642, "-8.610422", 10, MPFR_RNDN);
        mpfr_init(r20874643);
        mpfr_init(r20874644);
        mpfr_init(r20874645);
        mpfr_init_set_str(r20874646, "1.463772", 10, MPFR_RNDN);
        mpfr_init(r20874647);
        mpfr_init(r20874648);
        mpfr_init(r20874649);
        mpfr_init_set_str(r20874650, "-0.193557", 10, MPFR_RNDN);
        mpfr_init(r20874651);
        mpfr_init(r20874652);
        mpfr_init(r20874653);
        mpfr_init_set_str(r20874654, "0.020162", 10, MPFR_RNDN);
        mpfr_init(r20874655);
        mpfr_init(r20874656);
        mpfr_init(r20874657);
        mpfr_init_set_str(r20874658, "-0.00167", 10, MPFR_RNDN);
        mpfr_init(r20874659);
        mpfr_init(r20874660);
        mpfr_init(r20874661);
        mpfr_init_set_str(r20874662, "0.000111", 10, MPFR_RNDN);
        mpfr_init(r20874663);
        mpfr_init(r20874664);
        mpfr_init(r20874665);
        mpfr_init_set_str(r20874666, "-6e-06", 10, MPFR_RNDN);
        mpfr_init(r20874667);
        mpfr_init(r20874668);
        mpfr_init(r20874669);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r20874608, x, MPFR_RNDN);
        mpfr_mul(r20874609, r20874607, r20874608, MPFR_RNDN);
        mpfr_add(r20874610, r20874606, r20874609, MPFR_RNDN);
        ;
        mpfr_mul(r20874612, r20874608, r20874608, MPFR_RNDN);
        mpfr_mul(r20874613, r20874611, r20874612, MPFR_RNDN);
        mpfr_add(r20874614, r20874610, r20874613, MPFR_RNDN);
        ;
        mpfr_mul(r20874616, r20874612, r20874608, MPFR_RNDN);
        mpfr_mul(r20874617, r20874615, r20874616, MPFR_RNDN);
        mpfr_add(r20874618, r20874614, r20874617, MPFR_RNDN);
        ;
        mpfr_mul(r20874620, r20874616, r20874608, MPFR_RNDN);
        mpfr_mul(r20874621, r20874619, r20874620, MPFR_RNDN);
        mpfr_add(r20874622, r20874618, r20874621, MPFR_RNDN);
        ;
        mpfr_mul(r20874624, r20874620, r20874608, MPFR_RNDN);
        mpfr_mul(r20874625, r20874623, r20874624, MPFR_RNDN);
        mpfr_add(r20874626, r20874622, r20874625, MPFR_RNDN);
        ;
        mpfr_mul(r20874628, r20874624, r20874608, MPFR_RNDN);
        mpfr_mul(r20874629, r20874627, r20874628, MPFR_RNDN);
        mpfr_cbrt(r20874630, r20874629, MPFR_RNDN);
        mpfr_mul(r20874631, r20874630, r20874630, MPFR_RNDN);
        mpfr_mul(r20874632, r20874631, r20874630, MPFR_RNDN);
        mpfr_add(r20874633, r20874626, r20874632, MPFR_RNDN);
        ;
        mpfr_mul(r20874635, r20874628, r20874608, MPFR_RNDN);
        mpfr_mul(r20874636, r20874634, r20874635, MPFR_RNDN);
        mpfr_add(r20874637, r20874633, r20874636, MPFR_RNDN);
        ;
        mpfr_mul(r20874639, r20874635, r20874608, MPFR_RNDN);
        mpfr_mul(r20874640, r20874638, r20874639, MPFR_RNDN);
        mpfr_add(r20874641, r20874637, r20874640, MPFR_RNDN);
        ;
        mpfr_mul(r20874643, r20874639, r20874608, MPFR_RNDN);
        mpfr_mul(r20874644, r20874642, r20874643, MPFR_RNDN);
        mpfr_add(r20874645, r20874641, r20874644, MPFR_RNDN);
        ;
        mpfr_mul(r20874647, r20874643, r20874608, MPFR_RNDN);
        mpfr_mul(r20874648, r20874646, r20874647, MPFR_RNDN);
        mpfr_add(r20874649, r20874645, r20874648, MPFR_RNDN);
        ;
        mpfr_mul(r20874651, r20874647, r20874608, MPFR_RNDN);
        mpfr_mul(r20874652, r20874650, r20874651, MPFR_RNDN);
        mpfr_add(r20874653, r20874649, r20874652, MPFR_RNDN);
        ;
        mpfr_mul(r20874655, r20874651, r20874608, MPFR_RNDN);
        mpfr_mul(r20874656, r20874654, r20874655, MPFR_RNDN);
        mpfr_add(r20874657, r20874653, r20874656, MPFR_RNDN);
        ;
        mpfr_mul(r20874659, r20874655, r20874608, MPFR_RNDN);
        mpfr_mul(r20874660, r20874658, r20874659, MPFR_RNDN);
        mpfr_add(r20874661, r20874657, r20874660, MPFR_RNDN);
        ;
        mpfr_mul(r20874663, r20874659, r20874608, MPFR_RNDN);
        mpfr_mul(r20874664, r20874662, r20874663, MPFR_RNDN);
        mpfr_add(r20874665, r20874661, r20874664, MPFR_RNDN);
        ;
        mpfr_mul(r20874667, r20874663, r20874608, MPFR_RNDN);
        mpfr_mul(r20874668, r20874666, r20874667, MPFR_RNDN);
        mpfr_add(r20874669, r20874665, r20874668, MPFR_RNDN);
        return mpfr_get_d(r20874669, MPFR_RNDN);
}

static mpfr_t r20874670, r20874671, r20874672, r20874673, r20874674, r20874675, r20874676, r20874677, r20874678, r20874679, r20874680, r20874681, r20874682, r20874683, r20874684, r20874685, r20874686, r20874687, r20874688, r20874689, r20874690, r20874691, r20874692, r20874693, r20874694, r20874695, r20874696, r20874697, r20874698, r20874699, r20874700, r20874701, r20874702, r20874703, r20874704, r20874705, r20874706, r20874707, r20874708, r20874709, r20874710, r20874711, r20874712, r20874713, r20874714, r20874715, r20874716, r20874717, r20874718, r20874719, r20874720, r20874721, r20874722, r20874723, r20874724, r20874725, r20874726, r20874727, r20874728, r20874729, r20874730, r20874731, r20874732, r20874733;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20874670, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20874671, "-26.0", 10, MPFR_RNDN);
        mpfr_init(r20874672);
        mpfr_init(r20874673);
        mpfr_init(r20874674);
        mpfr_init_set_str(r20874675, "162.5", 10, MPFR_RNDN);
        mpfr_init(r20874676);
        mpfr_init(r20874677);
        mpfr_init(r20874678);
        mpfr_init_set_str(r20874679, "-433.333333", 10, MPFR_RNDN);
        mpfr_init(r20874680);
        mpfr_init(r20874681);
        mpfr_init(r20874682);
        mpfr_init_set_str(r20874683, "622.916667", 10, MPFR_RNDN);
        mpfr_init(r20874684);
        mpfr_init(r20874685);
        mpfr_init(r20874686);
        mpfr_init_set_str(r20874687, "-548.166667", 10, MPFR_RNDN);
        mpfr_init(r20874688);
        mpfr_init(r20874689);
        mpfr_init(r20874690);
        mpfr_init_set_str(r20874691, "319.763889", 10, MPFR_RNDN);
        mpfr_init(r20874692);
        mpfr_init(r20874693);
        mpfr_init(r20874694);
        mpfr_init(r20874695);
        mpfr_init(r20874696);
        mpfr_init(r20874697);
        mpfr_init_set_str(r20874698, "-130.515873", 10, MPFR_RNDN);
        mpfr_init(r20874699);
        mpfr_init(r20874700);
        mpfr_init(r20874701);
        mpfr_init_set_str(r20874702, "38.7469", 10, MPFR_RNDN);
        mpfr_init(r20874703);
        mpfr_init(r20874704);
        mpfr_init(r20874705);
        mpfr_init_set_str(r20874706, "-8.610422", 10, MPFR_RNDN);
        mpfr_init(r20874707);
        mpfr_init(r20874708);
        mpfr_init(r20874709);
        mpfr_init_set_str(r20874710, "1.463772", 10, MPFR_RNDN);
        mpfr_init(r20874711);
        mpfr_init(r20874712);
        mpfr_init(r20874713);
        mpfr_init_set_str(r20874714, "-0.193557", 10, MPFR_RNDN);
        mpfr_init(r20874715);
        mpfr_init(r20874716);
        mpfr_init(r20874717);
        mpfr_init_set_str(r20874718, "0.020162", 10, MPFR_RNDN);
        mpfr_init(r20874719);
        mpfr_init(r20874720);
        mpfr_init(r20874721);
        mpfr_init_set_str(r20874722, "-0.00167", 10, MPFR_RNDN);
        mpfr_init(r20874723);
        mpfr_init(r20874724);
        mpfr_init(r20874725);
        mpfr_init_set_str(r20874726, "0.000111", 10, MPFR_RNDN);
        mpfr_init(r20874727);
        mpfr_init(r20874728);
        mpfr_init(r20874729);
        mpfr_init_set_str(r20874730, "-6e-06", 10, MPFR_RNDN);
        mpfr_init(r20874731);
        mpfr_init(r20874732);
        mpfr_init(r20874733);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r20874672, x, MPFR_RNDN);
        mpfr_mul(r20874673, r20874671, r20874672, MPFR_RNDN);
        mpfr_add(r20874674, r20874670, r20874673, MPFR_RNDN);
        ;
        mpfr_mul(r20874676, r20874672, r20874672, MPFR_RNDN);
        mpfr_mul(r20874677, r20874675, r20874676, MPFR_RNDN);
        mpfr_add(r20874678, r20874674, r20874677, MPFR_RNDN);
        ;
        mpfr_mul(r20874680, r20874676, r20874672, MPFR_RNDN);
        mpfr_mul(r20874681, r20874679, r20874680, MPFR_RNDN);
        mpfr_add(r20874682, r20874678, r20874681, MPFR_RNDN);
        ;
        mpfr_mul(r20874684, r20874680, r20874672, MPFR_RNDN);
        mpfr_mul(r20874685, r20874683, r20874684, MPFR_RNDN);
        mpfr_add(r20874686, r20874682, r20874685, MPFR_RNDN);
        ;
        mpfr_mul(r20874688, r20874684, r20874672, MPFR_RNDN);
        mpfr_mul(r20874689, r20874687, r20874688, MPFR_RNDN);
        mpfr_add(r20874690, r20874686, r20874689, MPFR_RNDN);
        ;
        mpfr_mul(r20874692, r20874688, r20874672, MPFR_RNDN);
        mpfr_mul(r20874693, r20874691, r20874692, MPFR_RNDN);
        mpfr_cbrt(r20874694, r20874693, MPFR_RNDN);
        mpfr_mul(r20874695, r20874694, r20874694, MPFR_RNDN);
        mpfr_mul(r20874696, r20874695, r20874694, MPFR_RNDN);
        mpfr_add(r20874697, r20874690, r20874696, MPFR_RNDN);
        ;
        mpfr_mul(r20874699, r20874692, r20874672, MPFR_RNDN);
        mpfr_mul(r20874700, r20874698, r20874699, MPFR_RNDN);
        mpfr_add(r20874701, r20874697, r20874700, MPFR_RNDN);
        ;
        mpfr_mul(r20874703, r20874699, r20874672, MPFR_RNDN);
        mpfr_mul(r20874704, r20874702, r20874703, MPFR_RNDN);
        mpfr_add(r20874705, r20874701, r20874704, MPFR_RNDN);
        ;
        mpfr_mul(r20874707, r20874703, r20874672, MPFR_RNDN);
        mpfr_mul(r20874708, r20874706, r20874707, MPFR_RNDN);
        mpfr_add(r20874709, r20874705, r20874708, MPFR_RNDN);
        ;
        mpfr_mul(r20874711, r20874707, r20874672, MPFR_RNDN);
        mpfr_mul(r20874712, r20874710, r20874711, MPFR_RNDN);
        mpfr_add(r20874713, r20874709, r20874712, MPFR_RNDN);
        ;
        mpfr_mul(r20874715, r20874711, r20874672, MPFR_RNDN);
        mpfr_mul(r20874716, r20874714, r20874715, MPFR_RNDN);
        mpfr_add(r20874717, r20874713, r20874716, MPFR_RNDN);
        ;
        mpfr_mul(r20874719, r20874715, r20874672, MPFR_RNDN);
        mpfr_mul(r20874720, r20874718, r20874719, MPFR_RNDN);
        mpfr_add(r20874721, r20874717, r20874720, MPFR_RNDN);
        ;
        mpfr_mul(r20874723, r20874719, r20874672, MPFR_RNDN);
        mpfr_mul(r20874724, r20874722, r20874723, MPFR_RNDN);
        mpfr_add(r20874725, r20874721, r20874724, MPFR_RNDN);
        ;
        mpfr_mul(r20874727, r20874723, r20874672, MPFR_RNDN);
        mpfr_mul(r20874728, r20874726, r20874727, MPFR_RNDN);
        mpfr_add(r20874729, r20874725, r20874728, MPFR_RNDN);
        ;
        mpfr_mul(r20874731, r20874727, r20874672, MPFR_RNDN);
        mpfr_mul(r20874732, r20874730, r20874731, MPFR_RNDN);
        mpfr_add(r20874733, r20874729, r20874732, MPFR_RNDN);
        return mpfr_get_d(r20874733, MPFR_RNDN);
}

