#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r5317394 = 665280.0;
        float r5317395 = -7983360.0;
        float r5317396 = x;
        float r5317397 = r5317396 * r5317396;
        float r5317398 = r5317395 * r5317397;
        float r5317399 = r5317394 + r5317398;
        float r5317400 = 13305600.0;
        float r5317401 = r5317397 * r5317396;
        float r5317402 = r5317401 * r5317396;
        float r5317403 = r5317400 * r5317402;
        float r5317404 = r5317399 + r5317403;
        float r5317405 = -7096320.0;
        float r5317406 = r5317402 * r5317396;
        float r5317407 = r5317406 * r5317396;
        float r5317408 = r5317405 * r5317407;
        float r5317409 = r5317404 + r5317408;
        float r5317410 = 1520640.0;
        float r5317411 = r5317407 * r5317396;
        float r5317412 = r5317411 * r5317396;
        float r5317413 = r5317410 * r5317412;
        float r5317414 = r5317409 + r5317413;
        float r5317415 = -135168.0;
        float r5317416 = r5317412 * r5317396;
        float r5317417 = r5317416 * r5317396;
        float r5317418 = r5317415 * r5317417;
        float r5317419 = r5317414 + r5317418;
        float r5317420 = 4096.0;
        float r5317421 = r5317417 * r5317396;
        float r5317422 = r5317421 * r5317396;
        float r5317423 = r5317420 * r5317422;
        float r5317424 = r5317419 + r5317423;
        return r5317424;
}

double f_id(double x) {
        double r5317425 = 665280.0;
        double r5317426 = -7983360.0;
        double r5317427 = x;
        double r5317428 = r5317427 * r5317427;
        double r5317429 = r5317426 * r5317428;
        double r5317430 = r5317425 + r5317429;
        double r5317431 = 13305600.0;
        double r5317432 = r5317428 * r5317427;
        double r5317433 = r5317432 * r5317427;
        double r5317434 = r5317431 * r5317433;
        double r5317435 = r5317430 + r5317434;
        double r5317436 = -7096320.0;
        double r5317437 = r5317433 * r5317427;
        double r5317438 = r5317437 * r5317427;
        double r5317439 = r5317436 * r5317438;
        double r5317440 = r5317435 + r5317439;
        double r5317441 = 1520640.0;
        double r5317442 = r5317438 * r5317427;
        double r5317443 = r5317442 * r5317427;
        double r5317444 = r5317441 * r5317443;
        double r5317445 = r5317440 + r5317444;
        double r5317446 = -135168.0;
        double r5317447 = r5317443 * r5317427;
        double r5317448 = r5317447 * r5317427;
        double r5317449 = r5317446 * r5317448;
        double r5317450 = r5317445 + r5317449;
        double r5317451 = 4096.0;
        double r5317452 = r5317448 * r5317427;
        double r5317453 = r5317452 * r5317427;
        double r5317454 = r5317451 * r5317453;
        double r5317455 = r5317450 + r5317454;
        return r5317455;
}


double f_of(float x) {
        float r5317456 = 1520640.0;
        float r5317457 = x;
        float r5317458 = r5317456 * r5317457;
        float r5317459 = r5317458 * r5317457;
        float r5317460 = r5317457 * r5317457;
        float r5317461 = 3;
        float r5317462 = pow(r5317460, r5317461);
        float r5317463 = r5317459 * r5317462;
        float r5317464 = 2;
        float r5317465 = r5317464 * r5317461;
        float r5317466 = pow(r5317457, r5317465);
        float r5317467 = r5317460 * r5317460;
        float r5317468 = r5317466 * r5317467;
        float r5317469 = 4096.0;
        float r5317470 = r5317469 * r5317457;
        float r5317471 = r5317457 * r5317470;
        float r5317472 = -135168.0;
        float r5317473 = r5317471 + r5317472;
        float r5317474 = r5317468 * r5317473;
        float r5317475 = r5317463 + r5317474;
        float r5317476 = -7096320.0;
        float r5317477 = r5317460 * r5317476;
        float r5317478 = 13305600.0;
        float r5317479 = r5317477 + r5317478;
        float r5317480 = r5317467 * r5317479;
        float r5317481 = -7983360.0;
        float r5317482 = r5317457 * r5317481;
        float r5317483 = r5317482 * r5317457;
        float r5317484 = 665280.0;
        float r5317485 = r5317483 + r5317484;
        float r5317486 = r5317480 + r5317485;
        float r5317487 = r5317475 + r5317486;
        return r5317487;
}

double f_od(double x) {
        double r5317488 = 1520640.0;
        double r5317489 = x;
        double r5317490 = r5317488 * r5317489;
        double r5317491 = r5317490 * r5317489;
        double r5317492 = r5317489 * r5317489;
        double r5317493 = 3;
        double r5317494 = pow(r5317492, r5317493);
        double r5317495 = r5317491 * r5317494;
        double r5317496 = 2;
        double r5317497 = r5317496 * r5317493;
        double r5317498 = pow(r5317489, r5317497);
        double r5317499 = r5317492 * r5317492;
        double r5317500 = r5317498 * r5317499;
        double r5317501 = 4096.0;
        double r5317502 = r5317501 * r5317489;
        double r5317503 = r5317489 * r5317502;
        double r5317504 = -135168.0;
        double r5317505 = r5317503 + r5317504;
        double r5317506 = r5317500 * r5317505;
        double r5317507 = r5317495 + r5317506;
        double r5317508 = -7096320.0;
        double r5317509 = r5317492 * r5317508;
        double r5317510 = 13305600.0;
        double r5317511 = r5317509 + r5317510;
        double r5317512 = r5317499 * r5317511;
        double r5317513 = -7983360.0;
        double r5317514 = r5317489 * r5317513;
        double r5317515 = r5317514 * r5317489;
        double r5317516 = 665280.0;
        double r5317517 = r5317515 + r5317516;
        double r5317518 = r5317512 + r5317517;
        double r5317519 = r5317507 + r5317518;
        return r5317519;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5317520, r5317521, r5317522, r5317523, r5317524, r5317525, r5317526, r5317527, r5317528, r5317529, r5317530, r5317531, r5317532, r5317533, r5317534, r5317535, r5317536, r5317537, r5317538, r5317539, r5317540, r5317541, r5317542, r5317543, r5317544, r5317545, r5317546, r5317547, r5317548, r5317549, r5317550;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5317520, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5317521, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r5317522);
        mpfr_init(r5317523);
        mpfr_init(r5317524);
        mpfr_init(r5317525);
        mpfr_init_set_str(r5317526, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r5317527);
        mpfr_init(r5317528);
        mpfr_init(r5317529);
        mpfr_init(r5317530);
        mpfr_init_set_str(r5317531, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r5317532);
        mpfr_init(r5317533);
        mpfr_init(r5317534);
        mpfr_init(r5317535);
        mpfr_init_set_str(r5317536, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r5317537);
        mpfr_init(r5317538);
        mpfr_init(r5317539);
        mpfr_init(r5317540);
        mpfr_init_set_str(r5317541, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r5317542);
        mpfr_init(r5317543);
        mpfr_init(r5317544);
        mpfr_init(r5317545);
        mpfr_init_set_str(r5317546, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r5317547);
        mpfr_init(r5317548);
        mpfr_init(r5317549);
        mpfr_init(r5317550);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5317522, x, MPFR_RNDN);
        mpfr_mul(r5317523, r5317522, r5317522, MPFR_RNDN);
        mpfr_mul(r5317524, r5317521, r5317523, MPFR_RNDN);
        mpfr_add(r5317525, r5317520, r5317524, MPFR_RNDN);
        ;
        mpfr_mul(r5317527, r5317523, r5317522, MPFR_RNDN);
        mpfr_mul(r5317528, r5317527, r5317522, MPFR_RNDN);
        mpfr_mul(r5317529, r5317526, r5317528, MPFR_RNDN);
        mpfr_add(r5317530, r5317525, r5317529, MPFR_RNDN);
        ;
        mpfr_mul(r5317532, r5317528, r5317522, MPFR_RNDN);
        mpfr_mul(r5317533, r5317532, r5317522, MPFR_RNDN);
        mpfr_mul(r5317534, r5317531, r5317533, MPFR_RNDN);
        mpfr_add(r5317535, r5317530, r5317534, MPFR_RNDN);
        ;
        mpfr_mul(r5317537, r5317533, r5317522, MPFR_RNDN);
        mpfr_mul(r5317538, r5317537, r5317522, MPFR_RNDN);
        mpfr_mul(r5317539, r5317536, r5317538, MPFR_RNDN);
        mpfr_add(r5317540, r5317535, r5317539, MPFR_RNDN);
        ;
        mpfr_mul(r5317542, r5317538, r5317522, MPFR_RNDN);
        mpfr_mul(r5317543, r5317542, r5317522, MPFR_RNDN);
        mpfr_mul(r5317544, r5317541, r5317543, MPFR_RNDN);
        mpfr_add(r5317545, r5317540, r5317544, MPFR_RNDN);
        ;
        mpfr_mul(r5317547, r5317543, r5317522, MPFR_RNDN);
        mpfr_mul(r5317548, r5317547, r5317522, MPFR_RNDN);
        mpfr_mul(r5317549, r5317546, r5317548, MPFR_RNDN);
        mpfr_add(r5317550, r5317545, r5317549, MPFR_RNDN);
        return mpfr_get_d(r5317550, MPFR_RNDN);
}

static mpfr_t r5317551, r5317552, r5317553, r5317554, r5317555, r5317556, r5317557, r5317558, r5317559, r5317560, r5317561, r5317562, r5317563, r5317564, r5317565, r5317566, r5317567, r5317568, r5317569, r5317570, r5317571, r5317572, r5317573, r5317574, r5317575, r5317576, r5317577, r5317578, r5317579, r5317580, r5317581, r5317582;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5317551, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r5317552);
        mpfr_init(r5317553);
        mpfr_init(r5317554);
        mpfr_init(r5317555);
        mpfr_init_set_str(r5317556, "3", 10, MPFR_RNDN);
        mpfr_init(r5317557);
        mpfr_init(r5317558);
        mpfr_init_set_str(r5317559, "2", 10, MPFR_RNDN);
        mpfr_init(r5317560);
        mpfr_init(r5317561);
        mpfr_init(r5317562);
        mpfr_init(r5317563);
        mpfr_init_set_str(r5317564, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r5317565);
        mpfr_init(r5317566);
        mpfr_init_set_str(r5317567, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r5317568);
        mpfr_init(r5317569);
        mpfr_init(r5317570);
        mpfr_init_set_str(r5317571, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r5317572);
        mpfr_init_set_str(r5317573, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r5317574);
        mpfr_init(r5317575);
        mpfr_init_set_str(r5317576, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r5317577);
        mpfr_init(r5317578);
        mpfr_init_set_str(r5317579, "665280.0", 10, MPFR_RNDN);
        mpfr_init(r5317580);
        mpfr_init(r5317581);
        mpfr_init(r5317582);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5317552, x, MPFR_RNDN);
        mpfr_mul(r5317553, r5317551, r5317552, MPFR_RNDN);
        mpfr_mul(r5317554, r5317553, r5317552, MPFR_RNDN);
        mpfr_mul(r5317555, r5317552, r5317552, MPFR_RNDN);
        ;
        mpfr_pow(r5317557, r5317555, r5317556, MPFR_RNDN);
        mpfr_mul(r5317558, r5317554, r5317557, MPFR_RNDN);
        ;
        mpfr_mul(r5317560, r5317559, r5317556, MPFR_RNDN);
        mpfr_pow(r5317561, r5317552, r5317560, MPFR_RNDN);
        mpfr_mul(r5317562, r5317555, r5317555, MPFR_RNDN);
        mpfr_mul(r5317563, r5317561, r5317562, MPFR_RNDN);
        ;
        mpfr_mul(r5317565, r5317564, r5317552, MPFR_RNDN);
        mpfr_mul(r5317566, r5317552, r5317565, MPFR_RNDN);
        ;
        mpfr_add(r5317568, r5317566, r5317567, MPFR_RNDN);
        mpfr_mul(r5317569, r5317563, r5317568, MPFR_RNDN);
        mpfr_add(r5317570, r5317558, r5317569, MPFR_RNDN);
        ;
        mpfr_mul(r5317572, r5317555, r5317571, MPFR_RNDN);
        ;
        mpfr_add(r5317574, r5317572, r5317573, MPFR_RNDN);
        mpfr_mul(r5317575, r5317562, r5317574, MPFR_RNDN);
        ;
        mpfr_mul(r5317577, r5317552, r5317576, MPFR_RNDN);
        mpfr_mul(r5317578, r5317577, r5317552, MPFR_RNDN);
        ;
        mpfr_add(r5317580, r5317578, r5317579, MPFR_RNDN);
        mpfr_add(r5317581, r5317575, r5317580, MPFR_RNDN);
        mpfr_add(r5317582, r5317570, r5317581, MPFR_RNDN);
        return mpfr_get_d(r5317582, MPFR_RNDN);
}

static mpfr_t r5317583, r5317584, r5317585, r5317586, r5317587, r5317588, r5317589, r5317590, r5317591, r5317592, r5317593, r5317594, r5317595, r5317596, r5317597, r5317598, r5317599, r5317600, r5317601, r5317602, r5317603, r5317604, r5317605, r5317606, r5317607, r5317608, r5317609, r5317610, r5317611, r5317612, r5317613, r5317614;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5317583, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r5317584);
        mpfr_init(r5317585);
        mpfr_init(r5317586);
        mpfr_init(r5317587);
        mpfr_init_set_str(r5317588, "3", 10, MPFR_RNDN);
        mpfr_init(r5317589);
        mpfr_init(r5317590);
        mpfr_init_set_str(r5317591, "2", 10, MPFR_RNDN);
        mpfr_init(r5317592);
        mpfr_init(r5317593);
        mpfr_init(r5317594);
        mpfr_init(r5317595);
        mpfr_init_set_str(r5317596, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r5317597);
        mpfr_init(r5317598);
        mpfr_init_set_str(r5317599, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r5317600);
        mpfr_init(r5317601);
        mpfr_init(r5317602);
        mpfr_init_set_str(r5317603, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r5317604);
        mpfr_init_set_str(r5317605, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r5317606);
        mpfr_init(r5317607);
        mpfr_init_set_str(r5317608, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r5317609);
        mpfr_init(r5317610);
        mpfr_init_set_str(r5317611, "665280.0", 10, MPFR_RNDN);
        mpfr_init(r5317612);
        mpfr_init(r5317613);
        mpfr_init(r5317614);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5317584, x, MPFR_RNDN);
        mpfr_mul(r5317585, r5317583, r5317584, MPFR_RNDN);
        mpfr_mul(r5317586, r5317585, r5317584, MPFR_RNDN);
        mpfr_mul(r5317587, r5317584, r5317584, MPFR_RNDN);
        ;
        mpfr_pow(r5317589, r5317587, r5317588, MPFR_RNDN);
        mpfr_mul(r5317590, r5317586, r5317589, MPFR_RNDN);
        ;
        mpfr_mul(r5317592, r5317591, r5317588, MPFR_RNDN);
        mpfr_pow(r5317593, r5317584, r5317592, MPFR_RNDN);
        mpfr_mul(r5317594, r5317587, r5317587, MPFR_RNDN);
        mpfr_mul(r5317595, r5317593, r5317594, MPFR_RNDN);
        ;
        mpfr_mul(r5317597, r5317596, r5317584, MPFR_RNDN);
        mpfr_mul(r5317598, r5317584, r5317597, MPFR_RNDN);
        ;
        mpfr_add(r5317600, r5317598, r5317599, MPFR_RNDN);
        mpfr_mul(r5317601, r5317595, r5317600, MPFR_RNDN);
        mpfr_add(r5317602, r5317590, r5317601, MPFR_RNDN);
        ;
        mpfr_mul(r5317604, r5317587, r5317603, MPFR_RNDN);
        ;
        mpfr_add(r5317606, r5317604, r5317605, MPFR_RNDN);
        mpfr_mul(r5317607, r5317594, r5317606, MPFR_RNDN);
        ;
        mpfr_mul(r5317609, r5317584, r5317608, MPFR_RNDN);
        mpfr_mul(r5317610, r5317609, r5317584, MPFR_RNDN);
        ;
        mpfr_add(r5317612, r5317610, r5317611, MPFR_RNDN);
        mpfr_add(r5317613, r5317607, r5317612, MPFR_RNDN);
        mpfr_add(r5317614, r5317602, r5317613, MPFR_RNDN);
        return mpfr_get_d(r5317614, MPFR_RNDN);
}

