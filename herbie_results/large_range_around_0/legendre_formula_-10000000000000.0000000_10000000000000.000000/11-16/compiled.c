#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r7515340 = 0.196381;
        float r7515341 = -26.707764;
        float r7515342 = x;
        float r7515343 = r7515342 * r7515342;
        float r7515344 = r7515341 * r7515343;
        float r7515345 = r7515340 + r7515344;
        float r7515346 = 592.022095;
        float r7515347 = r7515343 * r7515342;
        float r7515348 = r7515347 * r7515342;
        float r7515349 = r7515346 * r7515348;
        float r7515350 = r7515345 + r7515349;
        float r7515351 = -4972.985596;
        float r7515352 = r7515348 * r7515342;
        float r7515353 = r7515352 * r7515342;
        float r7515354 = r7515351 * r7515353;
        float r7515355 = r7515350 + r7515354;
        float r7515356 = 20424.762268;
        float r7515357 = r7515353 * r7515342;
        float r7515358 = r7515357 * r7515342;
        float r7515359 = r7515356 * r7515358;
        float r7515360 = r7515355 + r7515359;
        float r7515361 = -45388.360596;
        float r7515362 = r7515358 * r7515342;
        float r7515363 = r7515362 * r7515342;
        float r7515364 = r7515361 * r7515363;
        float r7515365 = r7515360 + r7515364;
        float r7515366 = 55703.897095;
        float r7515367 = r7515363 * r7515342;
        float r7515368 = r7515367 * r7515342;
        float r7515369 = r7515366 * r7515368;
        float r7515370 = r7515365 + r7515369;
        float r7515371 = -35503.582764;
        float r7515372 = r7515368 * r7515342;
        float r7515373 = r7515372 * r7515342;
        float r7515374 = r7515371 * r7515373;
        float r7515375 = r7515370 + r7515374;
        float r7515376 = 9171.758881;
        float r7515377 = r7515373 * r7515342;
        float r7515378 = r7515377 * r7515342;
        float r7515379 = r7515376 * r7515378;
        float r7515380 = r7515375 + r7515379;
        return r7515380;
}

double f_id(double x) {
        double r7515381 = 0.196381;
        double r7515382 = -26.707764;
        double r7515383 = x;
        double r7515384 = r7515383 * r7515383;
        double r7515385 = r7515382 * r7515384;
        double r7515386 = r7515381 + r7515385;
        double r7515387 = 592.022095;
        double r7515388 = r7515384 * r7515383;
        double r7515389 = r7515388 * r7515383;
        double r7515390 = r7515387 * r7515389;
        double r7515391 = r7515386 + r7515390;
        double r7515392 = -4972.985596;
        double r7515393 = r7515389 * r7515383;
        double r7515394 = r7515393 * r7515383;
        double r7515395 = r7515392 * r7515394;
        double r7515396 = r7515391 + r7515395;
        double r7515397 = 20424.762268;
        double r7515398 = r7515394 * r7515383;
        double r7515399 = r7515398 * r7515383;
        double r7515400 = r7515397 * r7515399;
        double r7515401 = r7515396 + r7515400;
        double r7515402 = -45388.360596;
        double r7515403 = r7515399 * r7515383;
        double r7515404 = r7515403 * r7515383;
        double r7515405 = r7515402 * r7515404;
        double r7515406 = r7515401 + r7515405;
        double r7515407 = 55703.897095;
        double r7515408 = r7515404 * r7515383;
        double r7515409 = r7515408 * r7515383;
        double r7515410 = r7515407 * r7515409;
        double r7515411 = r7515406 + r7515410;
        double r7515412 = -35503.582764;
        double r7515413 = r7515409 * r7515383;
        double r7515414 = r7515413 * r7515383;
        double r7515415 = r7515412 * r7515414;
        double r7515416 = r7515411 + r7515415;
        double r7515417 = 9171.758881;
        double r7515418 = r7515414 * r7515383;
        double r7515419 = r7515418 * r7515383;
        double r7515420 = r7515417 * r7515419;
        double r7515421 = r7515416 + r7515420;
        return r7515421;
}


double f_of(float x) {
        float r7515422 = 0.196381;
        float r7515423 = -26.707764;
        float r7515424 = x;
        float r7515425 = r7515424 * r7515424;
        float r7515426 = r7515423 * r7515425;
        float r7515427 = r7515422 + r7515426;
        float r7515428 = 592.022095;
        float r7515429 = r7515425 * r7515424;
        float r7515430 = r7515429 * r7515424;
        float r7515431 = r7515428 * r7515430;
        float r7515432 = r7515427 + r7515431;
        float r7515433 = -4972.985596;
        float r7515434 = r7515430 * r7515424;
        float r7515435 = r7515434 * r7515424;
        float r7515436 = r7515433 * r7515435;
        float r7515437 = r7515432 + r7515436;
        float r7515438 = 20424.762268;
        float r7515439 = r7515435 * r7515424;
        float r7515440 = r7515439 * r7515424;
        float r7515441 = r7515438 * r7515440;
        float r7515442 = r7515437 + r7515441;
        float r7515443 = -45388.360596;
        float r7515444 = r7515440 * r7515424;
        float r7515445 = r7515444 * r7515424;
        float r7515446 = r7515443 * r7515445;
        float r7515447 = r7515442 + r7515446;
        float r7515448 = 55703.897095;
        float r7515449 = r7515445 * r7515424;
        float r7515450 = r7515449 * r7515424;
        float r7515451 = r7515448 * r7515450;
        float r7515452 = r7515447 + r7515451;
        float r7515453 = -35503.582764;
        float r7515454 = r7515450 * r7515424;
        float r7515455 = r7515454 * r7515424;
        float r7515456 = r7515453 * r7515455;
        float r7515457 = r7515452 + r7515456;
        float r7515458 = 9171.758881;
        float r7515459 = r7515455 * r7515424;
        float r7515460 = r7515459 * r7515424;
        float r7515461 = r7515458 * r7515460;
        float r7515462 = r7515457 + r7515461;
        return r7515462;
}

double f_od(double x) {
        double r7515463 = 0.196381;
        double r7515464 = -26.707764;
        double r7515465 = x;
        double r7515466 = r7515465 * r7515465;
        double r7515467 = r7515464 * r7515466;
        double r7515468 = r7515463 + r7515467;
        double r7515469 = 592.022095;
        double r7515470 = r7515466 * r7515465;
        double r7515471 = r7515470 * r7515465;
        double r7515472 = r7515469 * r7515471;
        double r7515473 = r7515468 + r7515472;
        double r7515474 = -4972.985596;
        double r7515475 = r7515471 * r7515465;
        double r7515476 = r7515475 * r7515465;
        double r7515477 = r7515474 * r7515476;
        double r7515478 = r7515473 + r7515477;
        double r7515479 = 20424.762268;
        double r7515480 = r7515476 * r7515465;
        double r7515481 = r7515480 * r7515465;
        double r7515482 = r7515479 * r7515481;
        double r7515483 = r7515478 + r7515482;
        double r7515484 = -45388.360596;
        double r7515485 = r7515481 * r7515465;
        double r7515486 = r7515485 * r7515465;
        double r7515487 = r7515484 * r7515486;
        double r7515488 = r7515483 + r7515487;
        double r7515489 = 55703.897095;
        double r7515490 = r7515486 * r7515465;
        double r7515491 = r7515490 * r7515465;
        double r7515492 = r7515489 * r7515491;
        double r7515493 = r7515488 + r7515492;
        double r7515494 = -35503.582764;
        double r7515495 = r7515491 * r7515465;
        double r7515496 = r7515495 * r7515465;
        double r7515497 = r7515494 * r7515496;
        double r7515498 = r7515493 + r7515497;
        double r7515499 = 9171.758881;
        double r7515500 = r7515496 * r7515465;
        double r7515501 = r7515500 * r7515465;
        double r7515502 = r7515499 * r7515501;
        double r7515503 = r7515498 + r7515502;
        return r7515503;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7515504, r7515505, r7515506, r7515507, r7515508, r7515509, r7515510, r7515511, r7515512, r7515513, r7515514, r7515515, r7515516, r7515517, r7515518, r7515519, r7515520, r7515521, r7515522, r7515523, r7515524, r7515525, r7515526, r7515527, r7515528, r7515529, r7515530, r7515531, r7515532, r7515533, r7515534, r7515535, r7515536, r7515537, r7515538, r7515539, r7515540, r7515541, r7515542, r7515543, r7515544;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7515504, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r7515505, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7515506);
        mpfr_init(r7515507);
        mpfr_init(r7515508);
        mpfr_init(r7515509);
        mpfr_init_set_str(r7515510, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r7515511);
        mpfr_init(r7515512);
        mpfr_init(r7515513);
        mpfr_init(r7515514);
        mpfr_init_set_str(r7515515, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7515516);
        mpfr_init(r7515517);
        mpfr_init(r7515518);
        mpfr_init(r7515519);
        mpfr_init_set_str(r7515520, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7515521);
        mpfr_init(r7515522);
        mpfr_init(r7515523);
        mpfr_init(r7515524);
        mpfr_init_set_str(r7515525, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7515526);
        mpfr_init(r7515527);
        mpfr_init(r7515528);
        mpfr_init(r7515529);
        mpfr_init_set_str(r7515530, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7515531);
        mpfr_init(r7515532);
        mpfr_init(r7515533);
        mpfr_init(r7515534);
        mpfr_init_set_str(r7515535, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r7515536);
        mpfr_init(r7515537);
        mpfr_init(r7515538);
        mpfr_init(r7515539);
        mpfr_init_set_str(r7515540, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7515541);
        mpfr_init(r7515542);
        mpfr_init(r7515543);
        mpfr_init(r7515544);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7515506, x, MPFR_RNDN);
        mpfr_mul(r7515507, r7515506, r7515506, MPFR_RNDN);
        mpfr_mul(r7515508, r7515505, r7515507, MPFR_RNDN);
        mpfr_add(r7515509, r7515504, r7515508, MPFR_RNDN);
        ;
        mpfr_mul(r7515511, r7515507, r7515506, MPFR_RNDN);
        mpfr_mul(r7515512, r7515511, r7515506, MPFR_RNDN);
        mpfr_mul(r7515513, r7515510, r7515512, MPFR_RNDN);
        mpfr_add(r7515514, r7515509, r7515513, MPFR_RNDN);
        ;
        mpfr_mul(r7515516, r7515512, r7515506, MPFR_RNDN);
        mpfr_mul(r7515517, r7515516, r7515506, MPFR_RNDN);
        mpfr_mul(r7515518, r7515515, r7515517, MPFR_RNDN);
        mpfr_add(r7515519, r7515514, r7515518, MPFR_RNDN);
        ;
        mpfr_mul(r7515521, r7515517, r7515506, MPFR_RNDN);
        mpfr_mul(r7515522, r7515521, r7515506, MPFR_RNDN);
        mpfr_mul(r7515523, r7515520, r7515522, MPFR_RNDN);
        mpfr_add(r7515524, r7515519, r7515523, MPFR_RNDN);
        ;
        mpfr_mul(r7515526, r7515522, r7515506, MPFR_RNDN);
        mpfr_mul(r7515527, r7515526, r7515506, MPFR_RNDN);
        mpfr_mul(r7515528, r7515525, r7515527, MPFR_RNDN);
        mpfr_add(r7515529, r7515524, r7515528, MPFR_RNDN);
        ;
        mpfr_mul(r7515531, r7515527, r7515506, MPFR_RNDN);
        mpfr_mul(r7515532, r7515531, r7515506, MPFR_RNDN);
        mpfr_mul(r7515533, r7515530, r7515532, MPFR_RNDN);
        mpfr_add(r7515534, r7515529, r7515533, MPFR_RNDN);
        ;
        mpfr_mul(r7515536, r7515532, r7515506, MPFR_RNDN);
        mpfr_mul(r7515537, r7515536, r7515506, MPFR_RNDN);
        mpfr_mul(r7515538, r7515535, r7515537, MPFR_RNDN);
        mpfr_add(r7515539, r7515534, r7515538, MPFR_RNDN);
        ;
        mpfr_mul(r7515541, r7515537, r7515506, MPFR_RNDN);
        mpfr_mul(r7515542, r7515541, r7515506, MPFR_RNDN);
        mpfr_mul(r7515543, r7515540, r7515542, MPFR_RNDN);
        mpfr_add(r7515544, r7515539, r7515543, MPFR_RNDN);
        return mpfr_get_d(r7515544, MPFR_RNDN);
}

static mpfr_t r7515545, r7515546, r7515547, r7515548, r7515549, r7515550, r7515551, r7515552, r7515553, r7515554, r7515555, r7515556, r7515557, r7515558, r7515559, r7515560, r7515561, r7515562, r7515563, r7515564, r7515565, r7515566, r7515567, r7515568, r7515569, r7515570, r7515571, r7515572, r7515573, r7515574, r7515575, r7515576, r7515577, r7515578, r7515579, r7515580, r7515581, r7515582, r7515583, r7515584, r7515585;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7515545, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r7515546, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7515547);
        mpfr_init(r7515548);
        mpfr_init(r7515549);
        mpfr_init(r7515550);
        mpfr_init_set_str(r7515551, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r7515552);
        mpfr_init(r7515553);
        mpfr_init(r7515554);
        mpfr_init(r7515555);
        mpfr_init_set_str(r7515556, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7515557);
        mpfr_init(r7515558);
        mpfr_init(r7515559);
        mpfr_init(r7515560);
        mpfr_init_set_str(r7515561, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7515562);
        mpfr_init(r7515563);
        mpfr_init(r7515564);
        mpfr_init(r7515565);
        mpfr_init_set_str(r7515566, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7515567);
        mpfr_init(r7515568);
        mpfr_init(r7515569);
        mpfr_init(r7515570);
        mpfr_init_set_str(r7515571, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7515572);
        mpfr_init(r7515573);
        mpfr_init(r7515574);
        mpfr_init(r7515575);
        mpfr_init_set_str(r7515576, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r7515577);
        mpfr_init(r7515578);
        mpfr_init(r7515579);
        mpfr_init(r7515580);
        mpfr_init_set_str(r7515581, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7515582);
        mpfr_init(r7515583);
        mpfr_init(r7515584);
        mpfr_init(r7515585);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7515547, x, MPFR_RNDN);
        mpfr_mul(r7515548, r7515547, r7515547, MPFR_RNDN);
        mpfr_mul(r7515549, r7515546, r7515548, MPFR_RNDN);
        mpfr_add(r7515550, r7515545, r7515549, MPFR_RNDN);
        ;
        mpfr_mul(r7515552, r7515548, r7515547, MPFR_RNDN);
        mpfr_mul(r7515553, r7515552, r7515547, MPFR_RNDN);
        mpfr_mul(r7515554, r7515551, r7515553, MPFR_RNDN);
        mpfr_add(r7515555, r7515550, r7515554, MPFR_RNDN);
        ;
        mpfr_mul(r7515557, r7515553, r7515547, MPFR_RNDN);
        mpfr_mul(r7515558, r7515557, r7515547, MPFR_RNDN);
        mpfr_mul(r7515559, r7515556, r7515558, MPFR_RNDN);
        mpfr_add(r7515560, r7515555, r7515559, MPFR_RNDN);
        ;
        mpfr_mul(r7515562, r7515558, r7515547, MPFR_RNDN);
        mpfr_mul(r7515563, r7515562, r7515547, MPFR_RNDN);
        mpfr_mul(r7515564, r7515561, r7515563, MPFR_RNDN);
        mpfr_add(r7515565, r7515560, r7515564, MPFR_RNDN);
        ;
        mpfr_mul(r7515567, r7515563, r7515547, MPFR_RNDN);
        mpfr_mul(r7515568, r7515567, r7515547, MPFR_RNDN);
        mpfr_mul(r7515569, r7515566, r7515568, MPFR_RNDN);
        mpfr_add(r7515570, r7515565, r7515569, MPFR_RNDN);
        ;
        mpfr_mul(r7515572, r7515568, r7515547, MPFR_RNDN);
        mpfr_mul(r7515573, r7515572, r7515547, MPFR_RNDN);
        mpfr_mul(r7515574, r7515571, r7515573, MPFR_RNDN);
        mpfr_add(r7515575, r7515570, r7515574, MPFR_RNDN);
        ;
        mpfr_mul(r7515577, r7515573, r7515547, MPFR_RNDN);
        mpfr_mul(r7515578, r7515577, r7515547, MPFR_RNDN);
        mpfr_mul(r7515579, r7515576, r7515578, MPFR_RNDN);
        mpfr_add(r7515580, r7515575, r7515579, MPFR_RNDN);
        ;
        mpfr_mul(r7515582, r7515578, r7515547, MPFR_RNDN);
        mpfr_mul(r7515583, r7515582, r7515547, MPFR_RNDN);
        mpfr_mul(r7515584, r7515581, r7515583, MPFR_RNDN);
        mpfr_add(r7515585, r7515580, r7515584, MPFR_RNDN);
        return mpfr_get_d(r7515585, MPFR_RNDN);
}

static mpfr_t r7515586, r7515587, r7515588, r7515589, r7515590, r7515591, r7515592, r7515593, r7515594, r7515595, r7515596, r7515597, r7515598, r7515599, r7515600, r7515601, r7515602, r7515603, r7515604, r7515605, r7515606, r7515607, r7515608, r7515609, r7515610, r7515611, r7515612, r7515613, r7515614, r7515615, r7515616, r7515617, r7515618, r7515619, r7515620, r7515621, r7515622, r7515623, r7515624, r7515625, r7515626;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7515586, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r7515587, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7515588);
        mpfr_init(r7515589);
        mpfr_init(r7515590);
        mpfr_init(r7515591);
        mpfr_init_set_str(r7515592, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r7515593);
        mpfr_init(r7515594);
        mpfr_init(r7515595);
        mpfr_init(r7515596);
        mpfr_init_set_str(r7515597, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7515598);
        mpfr_init(r7515599);
        mpfr_init(r7515600);
        mpfr_init(r7515601);
        mpfr_init_set_str(r7515602, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7515603);
        mpfr_init(r7515604);
        mpfr_init(r7515605);
        mpfr_init(r7515606);
        mpfr_init_set_str(r7515607, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7515608);
        mpfr_init(r7515609);
        mpfr_init(r7515610);
        mpfr_init(r7515611);
        mpfr_init_set_str(r7515612, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7515613);
        mpfr_init(r7515614);
        mpfr_init(r7515615);
        mpfr_init(r7515616);
        mpfr_init_set_str(r7515617, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r7515618);
        mpfr_init(r7515619);
        mpfr_init(r7515620);
        mpfr_init(r7515621);
        mpfr_init_set_str(r7515622, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7515623);
        mpfr_init(r7515624);
        mpfr_init(r7515625);
        mpfr_init(r7515626);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7515588, x, MPFR_RNDN);
        mpfr_mul(r7515589, r7515588, r7515588, MPFR_RNDN);
        mpfr_mul(r7515590, r7515587, r7515589, MPFR_RNDN);
        mpfr_add(r7515591, r7515586, r7515590, MPFR_RNDN);
        ;
        mpfr_mul(r7515593, r7515589, r7515588, MPFR_RNDN);
        mpfr_mul(r7515594, r7515593, r7515588, MPFR_RNDN);
        mpfr_mul(r7515595, r7515592, r7515594, MPFR_RNDN);
        mpfr_add(r7515596, r7515591, r7515595, MPFR_RNDN);
        ;
        mpfr_mul(r7515598, r7515594, r7515588, MPFR_RNDN);
        mpfr_mul(r7515599, r7515598, r7515588, MPFR_RNDN);
        mpfr_mul(r7515600, r7515597, r7515599, MPFR_RNDN);
        mpfr_add(r7515601, r7515596, r7515600, MPFR_RNDN);
        ;
        mpfr_mul(r7515603, r7515599, r7515588, MPFR_RNDN);
        mpfr_mul(r7515604, r7515603, r7515588, MPFR_RNDN);
        mpfr_mul(r7515605, r7515602, r7515604, MPFR_RNDN);
        mpfr_add(r7515606, r7515601, r7515605, MPFR_RNDN);
        ;
        mpfr_mul(r7515608, r7515604, r7515588, MPFR_RNDN);
        mpfr_mul(r7515609, r7515608, r7515588, MPFR_RNDN);
        mpfr_mul(r7515610, r7515607, r7515609, MPFR_RNDN);
        mpfr_add(r7515611, r7515606, r7515610, MPFR_RNDN);
        ;
        mpfr_mul(r7515613, r7515609, r7515588, MPFR_RNDN);
        mpfr_mul(r7515614, r7515613, r7515588, MPFR_RNDN);
        mpfr_mul(r7515615, r7515612, r7515614, MPFR_RNDN);
        mpfr_add(r7515616, r7515611, r7515615, MPFR_RNDN);
        ;
        mpfr_mul(r7515618, r7515614, r7515588, MPFR_RNDN);
        mpfr_mul(r7515619, r7515618, r7515588, MPFR_RNDN);
        mpfr_mul(r7515620, r7515617, r7515619, MPFR_RNDN);
        mpfr_add(r7515621, r7515616, r7515620, MPFR_RNDN);
        ;
        mpfr_mul(r7515623, r7515619, r7515588, MPFR_RNDN);
        mpfr_mul(r7515624, r7515623, r7515588, MPFR_RNDN);
        mpfr_mul(r7515625, r7515622, r7515624, MPFR_RNDN);
        mpfr_add(r7515626, r7515621, r7515625, MPFR_RNDN);
        return mpfr_get_d(r7515626, MPFR_RNDN);
}

