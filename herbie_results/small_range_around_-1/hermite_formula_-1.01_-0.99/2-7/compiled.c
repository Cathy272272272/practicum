#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r60479367 = -1680.0;
        float r60479368 = x;
        float r60479369 = r60479367 * r60479368;
        float r60479370 = 3360.0;
        float r60479371 = r60479368 * r60479368;
        float r60479372 = r60479371 * r60479368;
        float r60479373 = r60479370 * r60479372;
        float r60479374 = r60479369 + r60479373;
        float r60479375 = -1344.0;
        float r60479376 = r60479372 * r60479368;
        float r60479377 = r60479376 * r60479368;
        float r60479378 = r60479375 * r60479377;
        float r60479379 = r60479374 + r60479378;
        float r60479380 = 128.0;
        float r60479381 = r60479377 * r60479368;
        float r60479382 = r60479381 * r60479368;
        float r60479383 = r60479380 * r60479382;
        float r60479384 = r60479379 + r60479383;
        return r60479384;
}

double f_id(double x) {
        double r60479385 = -1680.0;
        double r60479386 = x;
        double r60479387 = r60479385 * r60479386;
        double r60479388 = 3360.0;
        double r60479389 = r60479386 * r60479386;
        double r60479390 = r60479389 * r60479386;
        double r60479391 = r60479388 * r60479390;
        double r60479392 = r60479387 + r60479391;
        double r60479393 = -1344.0;
        double r60479394 = r60479390 * r60479386;
        double r60479395 = r60479394 * r60479386;
        double r60479396 = r60479393 * r60479395;
        double r60479397 = r60479392 + r60479396;
        double r60479398 = 128.0;
        double r60479399 = r60479395 * r60479386;
        double r60479400 = r60479399 * r60479386;
        double r60479401 = r60479398 * r60479400;
        double r60479402 = r60479397 + r60479401;
        return r60479402;
}


double f_of(float x) {
        float r60479403 = x;
        float r60479404 = r60479403 * r60479403;
        float r60479405 = r60479404 * r60479404;
        float r60479406 = 128.0;
        float r60479407 = r60479406 * r60479403;
        float r60479408 = r60479404 * r60479407;
        float r60479409 = r60479405 * r60479408;
        float r60479410 = r60479405 * r60479405;
        float r60479411 = r60479410 * r60479405;
        float r60479412 = -1344.0;
        float r60479413 = r60479403 * r60479412;
        float r60479414 = r60479413 * r60479403;
        float r60479415 = r60479414 * r60479412;
        float r60479416 = r60479415 * r60479413;
        float r60479417 = r60479411 * r60479416;
        float r60479418 = -1680.0;
        float r60479419 = r60479418 * r60479403;
        float r60479420 = 3360.0;
        float r60479421 = r60479420 * r60479403;
        float r60479422 = r60479404 * r60479421;
        float r60479423 = r60479419 + r60479422;
        float r60479424 = 3;
        float r60479425 = pow(r60479423, r60479424);
        float r60479426 = r60479417 + r60479425;
        float r60479427 = r60479421 * r60479404;
        float r60479428 = r60479427 + r60479419;
        float r60479429 = r60479412 * r60479403;
        float r60479430 = r60479429 * r60479405;
        float r60479431 = r60479428 - r60479430;
        float r60479432 = r60479428 * r60479431;
        float r60479433 = r60479430 * r60479430;
        float r60479434 = r60479432 + r60479433;
        float r60479435 = r60479426 / r60479434;
        float r60479436 = r60479409 + r60479435;
        return r60479436;
}

double f_od(double x) {
        double r60479437 = x;
        double r60479438 = r60479437 * r60479437;
        double r60479439 = r60479438 * r60479438;
        double r60479440 = 128.0;
        double r60479441 = r60479440 * r60479437;
        double r60479442 = r60479438 * r60479441;
        double r60479443 = r60479439 * r60479442;
        double r60479444 = r60479439 * r60479439;
        double r60479445 = r60479444 * r60479439;
        double r60479446 = -1344.0;
        double r60479447 = r60479437 * r60479446;
        double r60479448 = r60479447 * r60479437;
        double r60479449 = r60479448 * r60479446;
        double r60479450 = r60479449 * r60479447;
        double r60479451 = r60479445 * r60479450;
        double r60479452 = -1680.0;
        double r60479453 = r60479452 * r60479437;
        double r60479454 = 3360.0;
        double r60479455 = r60479454 * r60479437;
        double r60479456 = r60479438 * r60479455;
        double r60479457 = r60479453 + r60479456;
        double r60479458 = 3;
        double r60479459 = pow(r60479457, r60479458);
        double r60479460 = r60479451 + r60479459;
        double r60479461 = r60479455 * r60479438;
        double r60479462 = r60479461 + r60479453;
        double r60479463 = r60479446 * r60479437;
        double r60479464 = r60479463 * r60479439;
        double r60479465 = r60479462 - r60479464;
        double r60479466 = r60479462 * r60479465;
        double r60479467 = r60479464 * r60479464;
        double r60479468 = r60479466 + r60479467;
        double r60479469 = r60479460 / r60479468;
        double r60479470 = r60479443 + r60479469;
        return r60479470;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60479471, r60479472, r60479473, r60479474, r60479475, r60479476, r60479477, r60479478, r60479479, r60479480, r60479481, r60479482, r60479483, r60479484, r60479485, r60479486, r60479487, r60479488;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479471, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r60479472);
        mpfr_init(r60479473);
        mpfr_init_set_str(r60479474, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r60479475);
        mpfr_init(r60479476);
        mpfr_init(r60479477);
        mpfr_init(r60479478);
        mpfr_init_set_str(r60479479, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r60479480);
        mpfr_init(r60479481);
        mpfr_init(r60479482);
        mpfr_init(r60479483);
        mpfr_init_set_str(r60479484, "128.0", 10, MPFR_RNDN);
        mpfr_init(r60479485);
        mpfr_init(r60479486);
        mpfr_init(r60479487);
        mpfr_init(r60479488);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60479472, x, MPFR_RNDN);
        mpfr_mul(r60479473, r60479471, r60479472, MPFR_RNDN);
        ;
        mpfr_mul(r60479475, r60479472, r60479472, MPFR_RNDN);
        mpfr_mul(r60479476, r60479475, r60479472, MPFR_RNDN);
        mpfr_mul(r60479477, r60479474, r60479476, MPFR_RNDN);
        mpfr_add(r60479478, r60479473, r60479477, MPFR_RNDN);
        ;
        mpfr_mul(r60479480, r60479476, r60479472, MPFR_RNDN);
        mpfr_mul(r60479481, r60479480, r60479472, MPFR_RNDN);
        mpfr_mul(r60479482, r60479479, r60479481, MPFR_RNDN);
        mpfr_add(r60479483, r60479478, r60479482, MPFR_RNDN);
        ;
        mpfr_mul(r60479485, r60479481, r60479472, MPFR_RNDN);
        mpfr_mul(r60479486, r60479485, r60479472, MPFR_RNDN);
        mpfr_mul(r60479487, r60479484, r60479486, MPFR_RNDN);
        mpfr_add(r60479488, r60479483, r60479487, MPFR_RNDN);
        return mpfr_get_d(r60479488, MPFR_RNDN);
}

static mpfr_t r60479489, r60479490, r60479491, r60479492, r60479493, r60479494, r60479495, r60479496, r60479497, r60479498, r60479499, r60479500, r60479501, r60479502, r60479503, r60479504, r60479505, r60479506, r60479507, r60479508, r60479509, r60479510, r60479511, r60479512, r60479513, r60479514, r60479515, r60479516, r60479517, r60479518, r60479519, r60479520, r60479521, r60479522;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60479489);
        mpfr_init(r60479490);
        mpfr_init(r60479491);
        mpfr_init_set_str(r60479492, "128.0", 10, MPFR_RNDN);
        mpfr_init(r60479493);
        mpfr_init(r60479494);
        mpfr_init(r60479495);
        mpfr_init(r60479496);
        mpfr_init(r60479497);
        mpfr_init_set_str(r60479498, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r60479499);
        mpfr_init(r60479500);
        mpfr_init(r60479501);
        mpfr_init(r60479502);
        mpfr_init(r60479503);
        mpfr_init_set_str(r60479504, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r60479505);
        mpfr_init_set_str(r60479506, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r60479507);
        mpfr_init(r60479508);
        mpfr_init(r60479509);
        mpfr_init_set_str(r60479510, "3", 10, MPFR_RNDN);
        mpfr_init(r60479511);
        mpfr_init(r60479512);
        mpfr_init(r60479513);
        mpfr_init(r60479514);
        mpfr_init(r60479515);
        mpfr_init(r60479516);
        mpfr_init(r60479517);
        mpfr_init(r60479518);
        mpfr_init(r60479519);
        mpfr_init(r60479520);
        mpfr_init(r60479521);
        mpfr_init(r60479522);
}

double f_fm(double x) {
        mpfr_set_d(r60479489, x, MPFR_RNDN);
        mpfr_mul(r60479490, r60479489, r60479489, MPFR_RNDN);
        mpfr_mul(r60479491, r60479490, r60479490, MPFR_RNDN);
        ;
        mpfr_mul(r60479493, r60479492, r60479489, MPFR_RNDN);
        mpfr_mul(r60479494, r60479490, r60479493, MPFR_RNDN);
        mpfr_mul(r60479495, r60479491, r60479494, MPFR_RNDN);
        mpfr_mul(r60479496, r60479491, r60479491, MPFR_RNDN);
        mpfr_mul(r60479497, r60479496, r60479491, MPFR_RNDN);
        ;
        mpfr_mul(r60479499, r60479489, r60479498, MPFR_RNDN);
        mpfr_mul(r60479500, r60479499, r60479489, MPFR_RNDN);
        mpfr_mul(r60479501, r60479500, r60479498, MPFR_RNDN);
        mpfr_mul(r60479502, r60479501, r60479499, MPFR_RNDN);
        mpfr_mul(r60479503, r60479497, r60479502, MPFR_RNDN);
        ;
        mpfr_mul(r60479505, r60479504, r60479489, MPFR_RNDN);
        ;
        mpfr_mul(r60479507, r60479506, r60479489, MPFR_RNDN);
        mpfr_mul(r60479508, r60479490, r60479507, MPFR_RNDN);
        mpfr_add(r60479509, r60479505, r60479508, MPFR_RNDN);
        ;
        mpfr_pow(r60479511, r60479509, r60479510, MPFR_RNDN);
        mpfr_add(r60479512, r60479503, r60479511, MPFR_RNDN);
        mpfr_mul(r60479513, r60479507, r60479490, MPFR_RNDN);
        mpfr_add(r60479514, r60479513, r60479505, MPFR_RNDN);
        mpfr_mul(r60479515, r60479498, r60479489, MPFR_RNDN);
        mpfr_mul(r60479516, r60479515, r60479491, MPFR_RNDN);
        mpfr_sub(r60479517, r60479514, r60479516, MPFR_RNDN);
        mpfr_mul(r60479518, r60479514, r60479517, MPFR_RNDN);
        mpfr_mul(r60479519, r60479516, r60479516, MPFR_RNDN);
        mpfr_add(r60479520, r60479518, r60479519, MPFR_RNDN);
        mpfr_div(r60479521, r60479512, r60479520, MPFR_RNDN);
        mpfr_add(r60479522, r60479495, r60479521, MPFR_RNDN);
        return mpfr_get_d(r60479522, MPFR_RNDN);
}

static mpfr_t r60479523, r60479524, r60479525, r60479526, r60479527, r60479528, r60479529, r60479530, r60479531, r60479532, r60479533, r60479534, r60479535, r60479536, r60479537, r60479538, r60479539, r60479540, r60479541, r60479542, r60479543, r60479544, r60479545, r60479546, r60479547, r60479548, r60479549, r60479550, r60479551, r60479552, r60479553, r60479554, r60479555, r60479556;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60479523);
        mpfr_init(r60479524);
        mpfr_init(r60479525);
        mpfr_init_set_str(r60479526, "128.0", 10, MPFR_RNDN);
        mpfr_init(r60479527);
        mpfr_init(r60479528);
        mpfr_init(r60479529);
        mpfr_init(r60479530);
        mpfr_init(r60479531);
        mpfr_init_set_str(r60479532, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r60479533);
        mpfr_init(r60479534);
        mpfr_init(r60479535);
        mpfr_init(r60479536);
        mpfr_init(r60479537);
        mpfr_init_set_str(r60479538, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r60479539);
        mpfr_init_set_str(r60479540, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r60479541);
        mpfr_init(r60479542);
        mpfr_init(r60479543);
        mpfr_init_set_str(r60479544, "3", 10, MPFR_RNDN);
        mpfr_init(r60479545);
        mpfr_init(r60479546);
        mpfr_init(r60479547);
        mpfr_init(r60479548);
        mpfr_init(r60479549);
        mpfr_init(r60479550);
        mpfr_init(r60479551);
        mpfr_init(r60479552);
        mpfr_init(r60479553);
        mpfr_init(r60479554);
        mpfr_init(r60479555);
        mpfr_init(r60479556);
}

double f_dm(double x) {
        mpfr_set_d(r60479523, x, MPFR_RNDN);
        mpfr_mul(r60479524, r60479523, r60479523, MPFR_RNDN);
        mpfr_mul(r60479525, r60479524, r60479524, MPFR_RNDN);
        ;
        mpfr_mul(r60479527, r60479526, r60479523, MPFR_RNDN);
        mpfr_mul(r60479528, r60479524, r60479527, MPFR_RNDN);
        mpfr_mul(r60479529, r60479525, r60479528, MPFR_RNDN);
        mpfr_mul(r60479530, r60479525, r60479525, MPFR_RNDN);
        mpfr_mul(r60479531, r60479530, r60479525, MPFR_RNDN);
        ;
        mpfr_mul(r60479533, r60479523, r60479532, MPFR_RNDN);
        mpfr_mul(r60479534, r60479533, r60479523, MPFR_RNDN);
        mpfr_mul(r60479535, r60479534, r60479532, MPFR_RNDN);
        mpfr_mul(r60479536, r60479535, r60479533, MPFR_RNDN);
        mpfr_mul(r60479537, r60479531, r60479536, MPFR_RNDN);
        ;
        mpfr_mul(r60479539, r60479538, r60479523, MPFR_RNDN);
        ;
        mpfr_mul(r60479541, r60479540, r60479523, MPFR_RNDN);
        mpfr_mul(r60479542, r60479524, r60479541, MPFR_RNDN);
        mpfr_add(r60479543, r60479539, r60479542, MPFR_RNDN);
        ;
        mpfr_pow(r60479545, r60479543, r60479544, MPFR_RNDN);
        mpfr_add(r60479546, r60479537, r60479545, MPFR_RNDN);
        mpfr_mul(r60479547, r60479541, r60479524, MPFR_RNDN);
        mpfr_add(r60479548, r60479547, r60479539, MPFR_RNDN);
        mpfr_mul(r60479549, r60479532, r60479523, MPFR_RNDN);
        mpfr_mul(r60479550, r60479549, r60479525, MPFR_RNDN);
        mpfr_sub(r60479551, r60479548, r60479550, MPFR_RNDN);
        mpfr_mul(r60479552, r60479548, r60479551, MPFR_RNDN);
        mpfr_mul(r60479553, r60479550, r60479550, MPFR_RNDN);
        mpfr_add(r60479554, r60479552, r60479553, MPFR_RNDN);
        mpfr_div(r60479555, r60479546, r60479554, MPFR_RNDN);
        mpfr_add(r60479556, r60479529, r60479555, MPFR_RNDN);
        return mpfr_get_d(r60479556, MPFR_RNDN);
}

