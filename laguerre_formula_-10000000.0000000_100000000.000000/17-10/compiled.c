#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r11733363 = 1.0;
        float r11733364 = -10.0;
        float r11733365 = x;
        float r11733366 = r11733364 * r11733365;
        float r11733367 = r11733363 + r11733366;
        float r11733368 = 22.5;
        float r11733369 = r11733365 * r11733365;
        float r11733370 = r11733368 * r11733369;
        float r11733371 = r11733367 + r11733370;
        float r11733372 = -20.0;
        float r11733373 = r11733369 * r11733365;
        float r11733374 = r11733372 * r11733373;
        float r11733375 = r11733371 + r11733374;
        float r11733376 = 8.75;
        float r11733377 = r11733373 * r11733365;
        float r11733378 = r11733376 * r11733377;
        float r11733379 = r11733375 + r11733378;
        float r11733380 = -2.1;
        float r11733381 = r11733377 * r11733365;
        float r11733382 = r11733380 * r11733381;
        float r11733383 = r11733379 + r11733382;
        float r11733384 = 0.291667;
        float r11733385 = r11733381 * r11733365;
        float r11733386 = r11733384 * r11733385;
        float r11733387 = r11733383 + r11733386;
        float r11733388 = -0.02381;
        float r11733389 = r11733385 * r11733365;
        float r11733390 = r11733388 * r11733389;
        float r11733391 = r11733387 + r11733390;
        float r11733392 = 0.001116;
        float r11733393 = r11733389 * r11733365;
        float r11733394 = r11733392 * r11733393;
        float r11733395 = r11733391 + r11733394;
        float r11733396 = -2.8e-05;
        float r11733397 = r11733393 * r11733365;
        float r11733398 = r11733396 * r11733397;
        float r11733399 = r11733395 + r11733398;
        return r11733399;
}

double f_id(double x) {
        double r11733400 = 1.0;
        double r11733401 = -10.0;
        double r11733402 = x;
        double r11733403 = r11733401 * r11733402;
        double r11733404 = r11733400 + r11733403;
        double r11733405 = 22.5;
        double r11733406 = r11733402 * r11733402;
        double r11733407 = r11733405 * r11733406;
        double r11733408 = r11733404 + r11733407;
        double r11733409 = -20.0;
        double r11733410 = r11733406 * r11733402;
        double r11733411 = r11733409 * r11733410;
        double r11733412 = r11733408 + r11733411;
        double r11733413 = 8.75;
        double r11733414 = r11733410 * r11733402;
        double r11733415 = r11733413 * r11733414;
        double r11733416 = r11733412 + r11733415;
        double r11733417 = -2.1;
        double r11733418 = r11733414 * r11733402;
        double r11733419 = r11733417 * r11733418;
        double r11733420 = r11733416 + r11733419;
        double r11733421 = 0.291667;
        double r11733422 = r11733418 * r11733402;
        double r11733423 = r11733421 * r11733422;
        double r11733424 = r11733420 + r11733423;
        double r11733425 = -0.02381;
        double r11733426 = r11733422 * r11733402;
        double r11733427 = r11733425 * r11733426;
        double r11733428 = r11733424 + r11733427;
        double r11733429 = 0.001116;
        double r11733430 = r11733426 * r11733402;
        double r11733431 = r11733429 * r11733430;
        double r11733432 = r11733428 + r11733431;
        double r11733433 = -2.8e-05;
        double r11733434 = r11733430 * r11733402;
        double r11733435 = r11733433 * r11733434;
        double r11733436 = r11733432 + r11733435;
        return r11733436;
}


double f_of(float x) {
        float r11733437 = 1.0;
        float r11733438 = -10.0;
        float r11733439 = x;
        float r11733440 = r11733438 * r11733439;
        float r11733441 = r11733437 + r11733440;
        float r11733442 = 22.5;
        float r11733443 = r11733439 * r11733439;
        float r11733444 = r11733442 * r11733443;
        float r11733445 = cbrt(r11733444);
        float r11733446 = r11733445 * r11733445;
        float r11733447 = r11733446 * r11733445;
        float r11733448 = r11733441 + r11733447;
        float r11733449 = -20.0;
        float r11733450 = r11733443 * r11733439;
        float r11733451 = r11733449 * r11733450;
        float r11733452 = r11733448 + r11733451;
        float r11733453 = 8.75;
        float r11733454 = r11733450 * r11733439;
        float r11733455 = r11733453 * r11733454;
        float r11733456 = r11733452 + r11733455;
        float r11733457 = -2.1;
        float r11733458 = r11733454 * r11733439;
        float r11733459 = r11733457 * r11733458;
        float r11733460 = r11733456 + r11733459;
        float r11733461 = 0.291667;
        float r11733462 = r11733458 * r11733439;
        float r11733463 = r11733461 * r11733462;
        float r11733464 = r11733460 + r11733463;
        float r11733465 = -0.02381;
        float r11733466 = r11733462 * r11733439;
        float r11733467 = r11733465 * r11733466;
        float r11733468 = r11733464 + r11733467;
        float r11733469 = 0.001116;
        float r11733470 = r11733466 * r11733439;
        float r11733471 = r11733469 * r11733470;
        float r11733472 = r11733468 + r11733471;
        float r11733473 = -2.8e-05;
        float r11733474 = r11733470 * r11733439;
        float r11733475 = r11733473 * r11733474;
        float r11733476 = r11733472 + r11733475;
        return r11733476;
}

double f_od(double x) {
        double r11733477 = 1.0;
        double r11733478 = -10.0;
        double r11733479 = x;
        double r11733480 = r11733478 * r11733479;
        double r11733481 = r11733477 + r11733480;
        double r11733482 = 22.5;
        double r11733483 = r11733479 * r11733479;
        double r11733484 = r11733482 * r11733483;
        double r11733485 = cbrt(r11733484);
        double r11733486 = r11733485 * r11733485;
        double r11733487 = r11733486 * r11733485;
        double r11733488 = r11733481 + r11733487;
        double r11733489 = -20.0;
        double r11733490 = r11733483 * r11733479;
        double r11733491 = r11733489 * r11733490;
        double r11733492 = r11733488 + r11733491;
        double r11733493 = 8.75;
        double r11733494 = r11733490 * r11733479;
        double r11733495 = r11733493 * r11733494;
        double r11733496 = r11733492 + r11733495;
        double r11733497 = -2.1;
        double r11733498 = r11733494 * r11733479;
        double r11733499 = r11733497 * r11733498;
        double r11733500 = r11733496 + r11733499;
        double r11733501 = 0.291667;
        double r11733502 = r11733498 * r11733479;
        double r11733503 = r11733501 * r11733502;
        double r11733504 = r11733500 + r11733503;
        double r11733505 = -0.02381;
        double r11733506 = r11733502 * r11733479;
        double r11733507 = r11733505 * r11733506;
        double r11733508 = r11733504 + r11733507;
        double r11733509 = 0.001116;
        double r11733510 = r11733506 * r11733479;
        double r11733511 = r11733509 * r11733510;
        double r11733512 = r11733508 + r11733511;
        double r11733513 = -2.8e-05;
        double r11733514 = r11733510 * r11733479;
        double r11733515 = r11733513 * r11733514;
        double r11733516 = r11733512 + r11733515;
        return r11733516;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11733517, r11733518, r11733519, r11733520, r11733521, r11733522, r11733523, r11733524, r11733525, r11733526, r11733527, r11733528, r11733529, r11733530, r11733531, r11733532, r11733533, r11733534, r11733535, r11733536, r11733537, r11733538, r11733539, r11733540, r11733541, r11733542, r11733543, r11733544, r11733545, r11733546, r11733547, r11733548, r11733549, r11733550, r11733551, r11733552, r11733553;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11733517, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11733518, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r11733519);
        mpfr_init(r11733520);
        mpfr_init(r11733521);
        mpfr_init_set_str(r11733522, "22.5", 10, MPFR_RNDN);
        mpfr_init(r11733523);
        mpfr_init(r11733524);
        mpfr_init(r11733525);
        mpfr_init_set_str(r11733526, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r11733527);
        mpfr_init(r11733528);
        mpfr_init(r11733529);
        mpfr_init_set_str(r11733530, "8.75", 10, MPFR_RNDN);
        mpfr_init(r11733531);
        mpfr_init(r11733532);
        mpfr_init(r11733533);
        mpfr_init_set_str(r11733534, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r11733535);
        mpfr_init(r11733536);
        mpfr_init(r11733537);
        mpfr_init_set_str(r11733538, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r11733539);
        mpfr_init(r11733540);
        mpfr_init(r11733541);
        mpfr_init_set_str(r11733542, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r11733543);
        mpfr_init(r11733544);
        mpfr_init(r11733545);
        mpfr_init_set_str(r11733546, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r11733547);
        mpfr_init(r11733548);
        mpfr_init(r11733549);
        mpfr_init_set_str(r11733550, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r11733551);
        mpfr_init(r11733552);
        mpfr_init(r11733553);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11733519, x, MPFR_RNDN);
        mpfr_mul(r11733520, r11733518, r11733519, MPFR_RNDN);
        mpfr_add(r11733521, r11733517, r11733520, MPFR_RNDN);
        ;
        mpfr_mul(r11733523, r11733519, r11733519, MPFR_RNDN);
        mpfr_mul(r11733524, r11733522, r11733523, MPFR_RNDN);
        mpfr_add(r11733525, r11733521, r11733524, MPFR_RNDN);
        ;
        mpfr_mul(r11733527, r11733523, r11733519, MPFR_RNDN);
        mpfr_mul(r11733528, r11733526, r11733527, MPFR_RNDN);
        mpfr_add(r11733529, r11733525, r11733528, MPFR_RNDN);
        ;
        mpfr_mul(r11733531, r11733527, r11733519, MPFR_RNDN);
        mpfr_mul(r11733532, r11733530, r11733531, MPFR_RNDN);
        mpfr_add(r11733533, r11733529, r11733532, MPFR_RNDN);
        ;
        mpfr_mul(r11733535, r11733531, r11733519, MPFR_RNDN);
        mpfr_mul(r11733536, r11733534, r11733535, MPFR_RNDN);
        mpfr_add(r11733537, r11733533, r11733536, MPFR_RNDN);
        ;
        mpfr_mul(r11733539, r11733535, r11733519, MPFR_RNDN);
        mpfr_mul(r11733540, r11733538, r11733539, MPFR_RNDN);
        mpfr_add(r11733541, r11733537, r11733540, MPFR_RNDN);
        ;
        mpfr_mul(r11733543, r11733539, r11733519, MPFR_RNDN);
        mpfr_mul(r11733544, r11733542, r11733543, MPFR_RNDN);
        mpfr_add(r11733545, r11733541, r11733544, MPFR_RNDN);
        ;
        mpfr_mul(r11733547, r11733543, r11733519, MPFR_RNDN);
        mpfr_mul(r11733548, r11733546, r11733547, MPFR_RNDN);
        mpfr_add(r11733549, r11733545, r11733548, MPFR_RNDN);
        ;
        mpfr_mul(r11733551, r11733547, r11733519, MPFR_RNDN);
        mpfr_mul(r11733552, r11733550, r11733551, MPFR_RNDN);
        mpfr_add(r11733553, r11733549, r11733552, MPFR_RNDN);
        return mpfr_get_d(r11733553, MPFR_RNDN);
}

static mpfr_t r11733554, r11733555, r11733556, r11733557, r11733558, r11733559, r11733560, r11733561, r11733562, r11733563, r11733564, r11733565, r11733566, r11733567, r11733568, r11733569, r11733570, r11733571, r11733572, r11733573, r11733574, r11733575, r11733576, r11733577, r11733578, r11733579, r11733580, r11733581, r11733582, r11733583, r11733584, r11733585, r11733586, r11733587, r11733588, r11733589, r11733590, r11733591, r11733592, r11733593;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11733554, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11733555, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r11733556);
        mpfr_init(r11733557);
        mpfr_init(r11733558);
        mpfr_init_set_str(r11733559, "22.5", 10, MPFR_RNDN);
        mpfr_init(r11733560);
        mpfr_init(r11733561);
        mpfr_init(r11733562);
        mpfr_init(r11733563);
        mpfr_init(r11733564);
        mpfr_init(r11733565);
        mpfr_init_set_str(r11733566, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r11733567);
        mpfr_init(r11733568);
        mpfr_init(r11733569);
        mpfr_init_set_str(r11733570, "8.75", 10, MPFR_RNDN);
        mpfr_init(r11733571);
        mpfr_init(r11733572);
        mpfr_init(r11733573);
        mpfr_init_set_str(r11733574, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r11733575);
        mpfr_init(r11733576);
        mpfr_init(r11733577);
        mpfr_init_set_str(r11733578, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r11733579);
        mpfr_init(r11733580);
        mpfr_init(r11733581);
        mpfr_init_set_str(r11733582, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r11733583);
        mpfr_init(r11733584);
        mpfr_init(r11733585);
        mpfr_init_set_str(r11733586, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r11733587);
        mpfr_init(r11733588);
        mpfr_init(r11733589);
        mpfr_init_set_str(r11733590, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r11733591);
        mpfr_init(r11733592);
        mpfr_init(r11733593);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11733556, x, MPFR_RNDN);
        mpfr_mul(r11733557, r11733555, r11733556, MPFR_RNDN);
        mpfr_add(r11733558, r11733554, r11733557, MPFR_RNDN);
        ;
        mpfr_mul(r11733560, r11733556, r11733556, MPFR_RNDN);
        mpfr_mul(r11733561, r11733559, r11733560, MPFR_RNDN);
        mpfr_cbrt(r11733562, r11733561, MPFR_RNDN);
        mpfr_mul(r11733563, r11733562, r11733562, MPFR_RNDN);
        mpfr_mul(r11733564, r11733563, r11733562, MPFR_RNDN);
        mpfr_add(r11733565, r11733558, r11733564, MPFR_RNDN);
        ;
        mpfr_mul(r11733567, r11733560, r11733556, MPFR_RNDN);
        mpfr_mul(r11733568, r11733566, r11733567, MPFR_RNDN);
        mpfr_add(r11733569, r11733565, r11733568, MPFR_RNDN);
        ;
        mpfr_mul(r11733571, r11733567, r11733556, MPFR_RNDN);
        mpfr_mul(r11733572, r11733570, r11733571, MPFR_RNDN);
        mpfr_add(r11733573, r11733569, r11733572, MPFR_RNDN);
        ;
        mpfr_mul(r11733575, r11733571, r11733556, MPFR_RNDN);
        mpfr_mul(r11733576, r11733574, r11733575, MPFR_RNDN);
        mpfr_add(r11733577, r11733573, r11733576, MPFR_RNDN);
        ;
        mpfr_mul(r11733579, r11733575, r11733556, MPFR_RNDN);
        mpfr_mul(r11733580, r11733578, r11733579, MPFR_RNDN);
        mpfr_add(r11733581, r11733577, r11733580, MPFR_RNDN);
        ;
        mpfr_mul(r11733583, r11733579, r11733556, MPFR_RNDN);
        mpfr_mul(r11733584, r11733582, r11733583, MPFR_RNDN);
        mpfr_add(r11733585, r11733581, r11733584, MPFR_RNDN);
        ;
        mpfr_mul(r11733587, r11733583, r11733556, MPFR_RNDN);
        mpfr_mul(r11733588, r11733586, r11733587, MPFR_RNDN);
        mpfr_add(r11733589, r11733585, r11733588, MPFR_RNDN);
        ;
        mpfr_mul(r11733591, r11733587, r11733556, MPFR_RNDN);
        mpfr_mul(r11733592, r11733590, r11733591, MPFR_RNDN);
        mpfr_add(r11733593, r11733589, r11733592, MPFR_RNDN);
        return mpfr_get_d(r11733593, MPFR_RNDN);
}

static mpfr_t r11733594, r11733595, r11733596, r11733597, r11733598, r11733599, r11733600, r11733601, r11733602, r11733603, r11733604, r11733605, r11733606, r11733607, r11733608, r11733609, r11733610, r11733611, r11733612, r11733613, r11733614, r11733615, r11733616, r11733617, r11733618, r11733619, r11733620, r11733621, r11733622, r11733623, r11733624, r11733625, r11733626, r11733627, r11733628, r11733629, r11733630, r11733631, r11733632, r11733633;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11733594, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11733595, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r11733596);
        mpfr_init(r11733597);
        mpfr_init(r11733598);
        mpfr_init_set_str(r11733599, "22.5", 10, MPFR_RNDN);
        mpfr_init(r11733600);
        mpfr_init(r11733601);
        mpfr_init(r11733602);
        mpfr_init(r11733603);
        mpfr_init(r11733604);
        mpfr_init(r11733605);
        mpfr_init_set_str(r11733606, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r11733607);
        mpfr_init(r11733608);
        mpfr_init(r11733609);
        mpfr_init_set_str(r11733610, "8.75", 10, MPFR_RNDN);
        mpfr_init(r11733611);
        mpfr_init(r11733612);
        mpfr_init(r11733613);
        mpfr_init_set_str(r11733614, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r11733615);
        mpfr_init(r11733616);
        mpfr_init(r11733617);
        mpfr_init_set_str(r11733618, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r11733619);
        mpfr_init(r11733620);
        mpfr_init(r11733621);
        mpfr_init_set_str(r11733622, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r11733623);
        mpfr_init(r11733624);
        mpfr_init(r11733625);
        mpfr_init_set_str(r11733626, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r11733627);
        mpfr_init(r11733628);
        mpfr_init(r11733629);
        mpfr_init_set_str(r11733630, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r11733631);
        mpfr_init(r11733632);
        mpfr_init(r11733633);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11733596, x, MPFR_RNDN);
        mpfr_mul(r11733597, r11733595, r11733596, MPFR_RNDN);
        mpfr_add(r11733598, r11733594, r11733597, MPFR_RNDN);
        ;
        mpfr_mul(r11733600, r11733596, r11733596, MPFR_RNDN);
        mpfr_mul(r11733601, r11733599, r11733600, MPFR_RNDN);
        mpfr_cbrt(r11733602, r11733601, MPFR_RNDN);
        mpfr_mul(r11733603, r11733602, r11733602, MPFR_RNDN);
        mpfr_mul(r11733604, r11733603, r11733602, MPFR_RNDN);
        mpfr_add(r11733605, r11733598, r11733604, MPFR_RNDN);
        ;
        mpfr_mul(r11733607, r11733600, r11733596, MPFR_RNDN);
        mpfr_mul(r11733608, r11733606, r11733607, MPFR_RNDN);
        mpfr_add(r11733609, r11733605, r11733608, MPFR_RNDN);
        ;
        mpfr_mul(r11733611, r11733607, r11733596, MPFR_RNDN);
        mpfr_mul(r11733612, r11733610, r11733611, MPFR_RNDN);
        mpfr_add(r11733613, r11733609, r11733612, MPFR_RNDN);
        ;
        mpfr_mul(r11733615, r11733611, r11733596, MPFR_RNDN);
        mpfr_mul(r11733616, r11733614, r11733615, MPFR_RNDN);
        mpfr_add(r11733617, r11733613, r11733616, MPFR_RNDN);
        ;
        mpfr_mul(r11733619, r11733615, r11733596, MPFR_RNDN);
        mpfr_mul(r11733620, r11733618, r11733619, MPFR_RNDN);
        mpfr_add(r11733621, r11733617, r11733620, MPFR_RNDN);
        ;
        mpfr_mul(r11733623, r11733619, r11733596, MPFR_RNDN);
        mpfr_mul(r11733624, r11733622, r11733623, MPFR_RNDN);
        mpfr_add(r11733625, r11733621, r11733624, MPFR_RNDN);
        ;
        mpfr_mul(r11733627, r11733623, r11733596, MPFR_RNDN);
        mpfr_mul(r11733628, r11733626, r11733627, MPFR_RNDN);
        mpfr_add(r11733629, r11733625, r11733628, MPFR_RNDN);
        ;
        mpfr_mul(r11733631, r11733627, r11733596, MPFR_RNDN);
        mpfr_mul(r11733632, r11733630, r11733631, MPFR_RNDN);
        mpfr_add(r11733633, r11733629, r11733632, MPFR_RNDN);
        return mpfr_get_d(r11733633, MPFR_RNDN);
}

