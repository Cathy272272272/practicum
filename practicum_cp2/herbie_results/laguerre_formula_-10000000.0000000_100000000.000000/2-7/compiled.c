#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r11729458 = 1.0;
        float r11729459 = -7.0;
        float r11729460 = x;
        float r11729461 = r11729459 * r11729460;
        float r11729462 = r11729458 + r11729461;
        float r11729463 = 10.5;
        float r11729464 = r11729460 * r11729460;
        float r11729465 = r11729463 * r11729464;
        float r11729466 = r11729462 + r11729465;
        float r11729467 = -5.833333;
        float r11729468 = r11729464 * r11729460;
        float r11729469 = r11729467 * r11729468;
        float r11729470 = r11729466 + r11729469;
        float r11729471 = 1.458333;
        float r11729472 = r11729468 * r11729460;
        float r11729473 = r11729471 * r11729472;
        float r11729474 = r11729470 + r11729473;
        float r11729475 = -0.175;
        float r11729476 = r11729472 * r11729460;
        float r11729477 = r11729475 * r11729476;
        float r11729478 = r11729474 + r11729477;
        float r11729479 = 0.009722;
        float r11729480 = r11729476 * r11729460;
        float r11729481 = r11729479 * r11729480;
        float r11729482 = r11729478 + r11729481;
        float r11729483 = -0.000198;
        float r11729484 = r11729480 * r11729460;
        float r11729485 = r11729483 * r11729484;
        float r11729486 = r11729482 + r11729485;
        return r11729486;
}

double f_id(double x) {
        double r11729487 = 1.0;
        double r11729488 = -7.0;
        double r11729489 = x;
        double r11729490 = r11729488 * r11729489;
        double r11729491 = r11729487 + r11729490;
        double r11729492 = 10.5;
        double r11729493 = r11729489 * r11729489;
        double r11729494 = r11729492 * r11729493;
        double r11729495 = r11729491 + r11729494;
        double r11729496 = -5.833333;
        double r11729497 = r11729493 * r11729489;
        double r11729498 = r11729496 * r11729497;
        double r11729499 = r11729495 + r11729498;
        double r11729500 = 1.458333;
        double r11729501 = r11729497 * r11729489;
        double r11729502 = r11729500 * r11729501;
        double r11729503 = r11729499 + r11729502;
        double r11729504 = -0.175;
        double r11729505 = r11729501 * r11729489;
        double r11729506 = r11729504 * r11729505;
        double r11729507 = r11729503 + r11729506;
        double r11729508 = 0.009722;
        double r11729509 = r11729505 * r11729489;
        double r11729510 = r11729508 * r11729509;
        double r11729511 = r11729507 + r11729510;
        double r11729512 = -0.000198;
        double r11729513 = r11729509 * r11729489;
        double r11729514 = r11729512 * r11729513;
        double r11729515 = r11729511 + r11729514;
        return r11729515;
}


double f_of(float x) {
        float r11729516 = x;
        float r11729517 = r11729516 * r11729516;
        float r11729518 = 3;
        float r11729519 = pow(r11729517, r11729518);
        float r11729520 = 0.009722;
        float r11729521 = -0.000198;
        float r11729522 = r11729521 * r11729516;
        float r11729523 = r11729520 + r11729522;
        float r11729524 = r11729519 * r11729523;
        float r11729525 = -7.0;
        float r11729526 = r11729516 * r11729525;
        float r11729527 = 1.0;
        float r11729528 = r11729526 + r11729527;
        float r11729529 = r11729524 + r11729528;
        float r11729530 = -5.833333;
        float r11729531 = r11729530 * r11729516;
        float r11729532 = 10.5;
        float r11729533 = r11729531 + r11729532;
        float r11729534 = r11729517 * r11729533;
        float r11729535 = r11729517 * r11729517;
        float r11729536 = -0.175;
        float r11729537 = r11729536 * r11729516;
        float r11729538 = 1.458333;
        float r11729539 = r11729537 + r11729538;
        float r11729540 = r11729535 * r11729539;
        float r11729541 = r11729534 + r11729540;
        float r11729542 = r11729529 + r11729541;
        return r11729542;
}

double f_od(double x) {
        double r11729543 = x;
        double r11729544 = r11729543 * r11729543;
        double r11729545 = 3;
        double r11729546 = pow(r11729544, r11729545);
        double r11729547 = 0.009722;
        double r11729548 = -0.000198;
        double r11729549 = r11729548 * r11729543;
        double r11729550 = r11729547 + r11729549;
        double r11729551 = r11729546 * r11729550;
        double r11729552 = -7.0;
        double r11729553 = r11729543 * r11729552;
        double r11729554 = 1.0;
        double r11729555 = r11729553 + r11729554;
        double r11729556 = r11729551 + r11729555;
        double r11729557 = -5.833333;
        double r11729558 = r11729557 * r11729543;
        double r11729559 = 10.5;
        double r11729560 = r11729558 + r11729559;
        double r11729561 = r11729544 * r11729560;
        double r11729562 = r11729544 * r11729544;
        double r11729563 = -0.175;
        double r11729564 = r11729563 * r11729543;
        double r11729565 = 1.458333;
        double r11729566 = r11729564 + r11729565;
        double r11729567 = r11729562 * r11729566;
        double r11729568 = r11729561 + r11729567;
        double r11729569 = r11729556 + r11729568;
        return r11729569;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11729570, r11729571, r11729572, r11729573, r11729574, r11729575, r11729576, r11729577, r11729578, r11729579, r11729580, r11729581, r11729582, r11729583, r11729584, r11729585, r11729586, r11729587, r11729588, r11729589, r11729590, r11729591, r11729592, r11729593, r11729594, r11729595, r11729596, r11729597, r11729598;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11729570, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729571, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11729572);
        mpfr_init(r11729573);
        mpfr_init(r11729574);
        mpfr_init_set_str(r11729575, "10.5", 10, MPFR_RNDN);
        mpfr_init(r11729576);
        mpfr_init(r11729577);
        mpfr_init(r11729578);
        mpfr_init_set_str(r11729579, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r11729580);
        mpfr_init(r11729581);
        mpfr_init(r11729582);
        mpfr_init_set_str(r11729583, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r11729584);
        mpfr_init(r11729585);
        mpfr_init(r11729586);
        mpfr_init_set_str(r11729587, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11729588);
        mpfr_init(r11729589);
        mpfr_init(r11729590);
        mpfr_init_set_str(r11729591, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r11729592);
        mpfr_init(r11729593);
        mpfr_init(r11729594);
        mpfr_init_set_str(r11729595, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11729596);
        mpfr_init(r11729597);
        mpfr_init(r11729598);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11729572, x, MPFR_RNDN);
        mpfr_mul(r11729573, r11729571, r11729572, MPFR_RNDN);
        mpfr_add(r11729574, r11729570, r11729573, MPFR_RNDN);
        ;
        mpfr_mul(r11729576, r11729572, r11729572, MPFR_RNDN);
        mpfr_mul(r11729577, r11729575, r11729576, MPFR_RNDN);
        mpfr_add(r11729578, r11729574, r11729577, MPFR_RNDN);
        ;
        mpfr_mul(r11729580, r11729576, r11729572, MPFR_RNDN);
        mpfr_mul(r11729581, r11729579, r11729580, MPFR_RNDN);
        mpfr_add(r11729582, r11729578, r11729581, MPFR_RNDN);
        ;
        mpfr_mul(r11729584, r11729580, r11729572, MPFR_RNDN);
        mpfr_mul(r11729585, r11729583, r11729584, MPFR_RNDN);
        mpfr_add(r11729586, r11729582, r11729585, MPFR_RNDN);
        ;
        mpfr_mul(r11729588, r11729584, r11729572, MPFR_RNDN);
        mpfr_mul(r11729589, r11729587, r11729588, MPFR_RNDN);
        mpfr_add(r11729590, r11729586, r11729589, MPFR_RNDN);
        ;
        mpfr_mul(r11729592, r11729588, r11729572, MPFR_RNDN);
        mpfr_mul(r11729593, r11729591, r11729592, MPFR_RNDN);
        mpfr_add(r11729594, r11729590, r11729593, MPFR_RNDN);
        ;
        mpfr_mul(r11729596, r11729592, r11729572, MPFR_RNDN);
        mpfr_mul(r11729597, r11729595, r11729596, MPFR_RNDN);
        mpfr_add(r11729598, r11729594, r11729597, MPFR_RNDN);
        return mpfr_get_d(r11729598, MPFR_RNDN);
}

static mpfr_t r11729599, r11729600, r11729601, r11729602, r11729603, r11729604, r11729605, r11729606, r11729607, r11729608, r11729609, r11729610, r11729611, r11729612, r11729613, r11729614, r11729615, r11729616, r11729617, r11729618, r11729619, r11729620, r11729621, r11729622, r11729623, r11729624, r11729625;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11729599);
        mpfr_init(r11729600);
        mpfr_init_set_str(r11729601, "3", 10, MPFR_RNDN);
        mpfr_init(r11729602);
        mpfr_init_set_str(r11729603, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729604, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11729605);
        mpfr_init(r11729606);
        mpfr_init(r11729607);
        mpfr_init_set_str(r11729608, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11729609);
        mpfr_init_set_str(r11729610, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11729611);
        mpfr_init(r11729612);
        mpfr_init_set_str(r11729613, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r11729614);
        mpfr_init_set_str(r11729615, "10.5", 10, MPFR_RNDN);
        mpfr_init(r11729616);
        mpfr_init(r11729617);
        mpfr_init(r11729618);
        mpfr_init_set_str(r11729619, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11729620);
        mpfr_init_set_str(r11729621, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r11729622);
        mpfr_init(r11729623);
        mpfr_init(r11729624);
        mpfr_init(r11729625);
}

double f_fm(double x) {
        mpfr_set_d(r11729599, x, MPFR_RNDN);
        mpfr_mul(r11729600, r11729599, r11729599, MPFR_RNDN);
        ;
        mpfr_pow(r11729602, r11729600, r11729601, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11729605, r11729604, r11729599, MPFR_RNDN);
        mpfr_add(r11729606, r11729603, r11729605, MPFR_RNDN);
        mpfr_mul(r11729607, r11729602, r11729606, MPFR_RNDN);
        ;
        mpfr_mul(r11729609, r11729599, r11729608, MPFR_RNDN);
        ;
        mpfr_add(r11729611, r11729609, r11729610, MPFR_RNDN);
        mpfr_add(r11729612, r11729607, r11729611, MPFR_RNDN);
        ;
        mpfr_mul(r11729614, r11729613, r11729599, MPFR_RNDN);
        ;
        mpfr_add(r11729616, r11729614, r11729615, MPFR_RNDN);
        mpfr_mul(r11729617, r11729600, r11729616, MPFR_RNDN);
        mpfr_mul(r11729618, r11729600, r11729600, MPFR_RNDN);
        ;
        mpfr_mul(r11729620, r11729619, r11729599, MPFR_RNDN);
        ;
        mpfr_add(r11729622, r11729620, r11729621, MPFR_RNDN);
        mpfr_mul(r11729623, r11729618, r11729622, MPFR_RNDN);
        mpfr_add(r11729624, r11729617, r11729623, MPFR_RNDN);
        mpfr_add(r11729625, r11729612, r11729624, MPFR_RNDN);
        return mpfr_get_d(r11729625, MPFR_RNDN);
}

static mpfr_t r11729626, r11729627, r11729628, r11729629, r11729630, r11729631, r11729632, r11729633, r11729634, r11729635, r11729636, r11729637, r11729638, r11729639, r11729640, r11729641, r11729642, r11729643, r11729644, r11729645, r11729646, r11729647, r11729648, r11729649, r11729650, r11729651, r11729652;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11729626);
        mpfr_init(r11729627);
        mpfr_init_set_str(r11729628, "3", 10, MPFR_RNDN);
        mpfr_init(r11729629);
        mpfr_init_set_str(r11729630, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729631, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11729632);
        mpfr_init(r11729633);
        mpfr_init(r11729634);
        mpfr_init_set_str(r11729635, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11729636);
        mpfr_init_set_str(r11729637, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11729638);
        mpfr_init(r11729639);
        mpfr_init_set_str(r11729640, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r11729641);
        mpfr_init_set_str(r11729642, "10.5", 10, MPFR_RNDN);
        mpfr_init(r11729643);
        mpfr_init(r11729644);
        mpfr_init(r11729645);
        mpfr_init_set_str(r11729646, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11729647);
        mpfr_init_set_str(r11729648, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r11729649);
        mpfr_init(r11729650);
        mpfr_init(r11729651);
        mpfr_init(r11729652);
}

double f_dm(double x) {
        mpfr_set_d(r11729626, x, MPFR_RNDN);
        mpfr_mul(r11729627, r11729626, r11729626, MPFR_RNDN);
        ;
        mpfr_pow(r11729629, r11729627, r11729628, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11729632, r11729631, r11729626, MPFR_RNDN);
        mpfr_add(r11729633, r11729630, r11729632, MPFR_RNDN);
        mpfr_mul(r11729634, r11729629, r11729633, MPFR_RNDN);
        ;
        mpfr_mul(r11729636, r11729626, r11729635, MPFR_RNDN);
        ;
        mpfr_add(r11729638, r11729636, r11729637, MPFR_RNDN);
        mpfr_add(r11729639, r11729634, r11729638, MPFR_RNDN);
        ;
        mpfr_mul(r11729641, r11729640, r11729626, MPFR_RNDN);
        ;
        mpfr_add(r11729643, r11729641, r11729642, MPFR_RNDN);
        mpfr_mul(r11729644, r11729627, r11729643, MPFR_RNDN);
        mpfr_mul(r11729645, r11729627, r11729627, MPFR_RNDN);
        ;
        mpfr_mul(r11729647, r11729646, r11729626, MPFR_RNDN);
        ;
        mpfr_add(r11729649, r11729647, r11729648, MPFR_RNDN);
        mpfr_mul(r11729650, r11729645, r11729649, MPFR_RNDN);
        mpfr_add(r11729651, r11729644, r11729650, MPFR_RNDN);
        mpfr_add(r11729652, r11729639, r11729651, MPFR_RNDN);
        return mpfr_get_d(r11729652, MPFR_RNDN);
}

