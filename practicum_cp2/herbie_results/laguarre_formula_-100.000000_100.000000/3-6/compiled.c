#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6293431 = 1.0;
        float r6293432 = -6.0;
        float r6293433 = x;
        float r6293434 = r6293432 * r6293433;
        float r6293435 = r6293431 + r6293434;
        float r6293436 = 7.5;
        float r6293437 = r6293433 * r6293433;
        float r6293438 = r6293436 * r6293437;
        float r6293439 = r6293435 + r6293438;
        float r6293440 = -3.333333;
        float r6293441 = r6293437 * r6293433;
        float r6293442 = r6293440 * r6293441;
        float r6293443 = r6293439 + r6293442;
        float r6293444 = 0.625;
        float r6293445 = r6293441 * r6293433;
        float r6293446 = r6293444 * r6293445;
        float r6293447 = r6293443 + r6293446;
        float r6293448 = -0.05;
        float r6293449 = r6293445 * r6293433;
        float r6293450 = r6293448 * r6293449;
        float r6293451 = r6293447 + r6293450;
        float r6293452 = 0.001389;
        float r6293453 = r6293449 * r6293433;
        float r6293454 = r6293452 * r6293453;
        float r6293455 = r6293451 + r6293454;
        return r6293455;
}

double f_id(double x) {
        double r6293456 = 1.0;
        double r6293457 = -6.0;
        double r6293458 = x;
        double r6293459 = r6293457 * r6293458;
        double r6293460 = r6293456 + r6293459;
        double r6293461 = 7.5;
        double r6293462 = r6293458 * r6293458;
        double r6293463 = r6293461 * r6293462;
        double r6293464 = r6293460 + r6293463;
        double r6293465 = -3.333333;
        double r6293466 = r6293462 * r6293458;
        double r6293467 = r6293465 * r6293466;
        double r6293468 = r6293464 + r6293467;
        double r6293469 = 0.625;
        double r6293470 = r6293466 * r6293458;
        double r6293471 = r6293469 * r6293470;
        double r6293472 = r6293468 + r6293471;
        double r6293473 = -0.05;
        double r6293474 = r6293470 * r6293458;
        double r6293475 = r6293473 * r6293474;
        double r6293476 = r6293472 + r6293475;
        double r6293477 = 0.001389;
        double r6293478 = r6293474 * r6293458;
        double r6293479 = r6293477 * r6293478;
        double r6293480 = r6293476 + r6293479;
        return r6293480;
}


double f_of(float x) {
        float r6293481 = x;
        float r6293482 = 0.001389;
        float r6293483 = r6293482 * r6293481;
        float r6293484 = r6293481 * r6293483;
        float r6293485 = r6293481 * r6293481;
        float r6293486 = r6293485 * r6293485;
        float r6293487 = r6293484 * r6293486;
        float r6293488 = -6.0;
        float r6293489 = r6293481 * r6293488;
        float r6293490 = 1.0;
        float r6293491 = r6293489 + r6293490;
        float r6293492 = r6293487 + r6293491;
        float r6293493 = 0.625;
        float r6293494 = -0.05;
        float r6293495 = r6293494 * r6293481;
        float r6293496 = r6293493 + r6293495;
        float r6293497 = r6293486 * r6293496;
        float r6293498 = -3.333333;
        float r6293499 = r6293498 * r6293481;
        float r6293500 = 7.5;
        float r6293501 = r6293499 + r6293500;
        float r6293502 = r6293485 * r6293501;
        float r6293503 = r6293497 + r6293502;
        float r6293504 = r6293492 + r6293503;
        return r6293504;
}

double f_od(double x) {
        double r6293505 = x;
        double r6293506 = 0.001389;
        double r6293507 = r6293506 * r6293505;
        double r6293508 = r6293505 * r6293507;
        double r6293509 = r6293505 * r6293505;
        double r6293510 = r6293509 * r6293509;
        double r6293511 = r6293508 * r6293510;
        double r6293512 = -6.0;
        double r6293513 = r6293505 * r6293512;
        double r6293514 = 1.0;
        double r6293515 = r6293513 + r6293514;
        double r6293516 = r6293511 + r6293515;
        double r6293517 = 0.625;
        double r6293518 = -0.05;
        double r6293519 = r6293518 * r6293505;
        double r6293520 = r6293517 + r6293519;
        double r6293521 = r6293510 * r6293520;
        double r6293522 = -3.333333;
        double r6293523 = r6293522 * r6293505;
        double r6293524 = 7.5;
        double r6293525 = r6293523 + r6293524;
        double r6293526 = r6293509 * r6293525;
        double r6293527 = r6293521 + r6293526;
        double r6293528 = r6293516 + r6293527;
        return r6293528;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6293529, r6293530, r6293531, r6293532, r6293533, r6293534, r6293535, r6293536, r6293537, r6293538, r6293539, r6293540, r6293541, r6293542, r6293543, r6293544, r6293545, r6293546, r6293547, r6293548, r6293549, r6293550, r6293551, r6293552, r6293553;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293529, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293530, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r6293531);
        mpfr_init(r6293532);
        mpfr_init(r6293533);
        mpfr_init_set_str(r6293534, "7.5", 10, MPFR_RNDN);
        mpfr_init(r6293535);
        mpfr_init(r6293536);
        mpfr_init(r6293537);
        mpfr_init_set_str(r6293538, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r6293539);
        mpfr_init(r6293540);
        mpfr_init(r6293541);
        mpfr_init_set_str(r6293542, "0.625", 10, MPFR_RNDN);
        mpfr_init(r6293543);
        mpfr_init(r6293544);
        mpfr_init(r6293545);
        mpfr_init_set_str(r6293546, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r6293547);
        mpfr_init(r6293548);
        mpfr_init(r6293549);
        mpfr_init_set_str(r6293550, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r6293551);
        mpfr_init(r6293552);
        mpfr_init(r6293553);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6293531, x, MPFR_RNDN);
        mpfr_mul(r6293532, r6293530, r6293531, MPFR_RNDN);
        mpfr_add(r6293533, r6293529, r6293532, MPFR_RNDN);
        ;
        mpfr_mul(r6293535, r6293531, r6293531, MPFR_RNDN);
        mpfr_mul(r6293536, r6293534, r6293535, MPFR_RNDN);
        mpfr_add(r6293537, r6293533, r6293536, MPFR_RNDN);
        ;
        mpfr_mul(r6293539, r6293535, r6293531, MPFR_RNDN);
        mpfr_mul(r6293540, r6293538, r6293539, MPFR_RNDN);
        mpfr_add(r6293541, r6293537, r6293540, MPFR_RNDN);
        ;
        mpfr_mul(r6293543, r6293539, r6293531, MPFR_RNDN);
        mpfr_mul(r6293544, r6293542, r6293543, MPFR_RNDN);
        mpfr_add(r6293545, r6293541, r6293544, MPFR_RNDN);
        ;
        mpfr_mul(r6293547, r6293543, r6293531, MPFR_RNDN);
        mpfr_mul(r6293548, r6293546, r6293547, MPFR_RNDN);
        mpfr_add(r6293549, r6293545, r6293548, MPFR_RNDN);
        ;
        mpfr_mul(r6293551, r6293547, r6293531, MPFR_RNDN);
        mpfr_mul(r6293552, r6293550, r6293551, MPFR_RNDN);
        mpfr_add(r6293553, r6293549, r6293552, MPFR_RNDN);
        return mpfr_get_d(r6293553, MPFR_RNDN);
}

static mpfr_t r6293554, r6293555, r6293556, r6293557, r6293558, r6293559, r6293560, r6293561, r6293562, r6293563, r6293564, r6293565, r6293566, r6293567, r6293568, r6293569, r6293570, r6293571, r6293572, r6293573, r6293574, r6293575, r6293576, r6293577;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6293554);
        mpfr_init_set_str(r6293555, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r6293556);
        mpfr_init(r6293557);
        mpfr_init(r6293558);
        mpfr_init(r6293559);
        mpfr_init(r6293560);
        mpfr_init_set_str(r6293561, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r6293562);
        mpfr_init_set_str(r6293563, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6293564);
        mpfr_init(r6293565);
        mpfr_init_set_str(r6293566, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293567, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r6293568);
        mpfr_init(r6293569);
        mpfr_init(r6293570);
        mpfr_init_set_str(r6293571, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r6293572);
        mpfr_init_set_str(r6293573, "7.5", 10, MPFR_RNDN);
        mpfr_init(r6293574);
        mpfr_init(r6293575);
        mpfr_init(r6293576);
        mpfr_init(r6293577);
}

double f_fm(double x) {
        mpfr_set_d(r6293554, x, MPFR_RNDN);
        ;
        mpfr_mul(r6293556, r6293555, r6293554, MPFR_RNDN);
        mpfr_mul(r6293557, r6293554, r6293556, MPFR_RNDN);
        mpfr_mul(r6293558, r6293554, r6293554, MPFR_RNDN);
        mpfr_mul(r6293559, r6293558, r6293558, MPFR_RNDN);
        mpfr_mul(r6293560, r6293557, r6293559, MPFR_RNDN);
        ;
        mpfr_mul(r6293562, r6293554, r6293561, MPFR_RNDN);
        ;
        mpfr_add(r6293564, r6293562, r6293563, MPFR_RNDN);
        mpfr_add(r6293565, r6293560, r6293564, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6293568, r6293567, r6293554, MPFR_RNDN);
        mpfr_add(r6293569, r6293566, r6293568, MPFR_RNDN);
        mpfr_mul(r6293570, r6293559, r6293569, MPFR_RNDN);
        ;
        mpfr_mul(r6293572, r6293571, r6293554, MPFR_RNDN);
        ;
        mpfr_add(r6293574, r6293572, r6293573, MPFR_RNDN);
        mpfr_mul(r6293575, r6293558, r6293574, MPFR_RNDN);
        mpfr_add(r6293576, r6293570, r6293575, MPFR_RNDN);
        mpfr_add(r6293577, r6293565, r6293576, MPFR_RNDN);
        return mpfr_get_d(r6293577, MPFR_RNDN);
}

static mpfr_t r6293578, r6293579, r6293580, r6293581, r6293582, r6293583, r6293584, r6293585, r6293586, r6293587, r6293588, r6293589, r6293590, r6293591, r6293592, r6293593, r6293594, r6293595, r6293596, r6293597, r6293598, r6293599, r6293600, r6293601;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6293578);
        mpfr_init_set_str(r6293579, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r6293580);
        mpfr_init(r6293581);
        mpfr_init(r6293582);
        mpfr_init(r6293583);
        mpfr_init(r6293584);
        mpfr_init_set_str(r6293585, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r6293586);
        mpfr_init_set_str(r6293587, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6293588);
        mpfr_init(r6293589);
        mpfr_init_set_str(r6293590, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293591, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r6293592);
        mpfr_init(r6293593);
        mpfr_init(r6293594);
        mpfr_init_set_str(r6293595, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r6293596);
        mpfr_init_set_str(r6293597, "7.5", 10, MPFR_RNDN);
        mpfr_init(r6293598);
        mpfr_init(r6293599);
        mpfr_init(r6293600);
        mpfr_init(r6293601);
}

double f_dm(double x) {
        mpfr_set_d(r6293578, x, MPFR_RNDN);
        ;
        mpfr_mul(r6293580, r6293579, r6293578, MPFR_RNDN);
        mpfr_mul(r6293581, r6293578, r6293580, MPFR_RNDN);
        mpfr_mul(r6293582, r6293578, r6293578, MPFR_RNDN);
        mpfr_mul(r6293583, r6293582, r6293582, MPFR_RNDN);
        mpfr_mul(r6293584, r6293581, r6293583, MPFR_RNDN);
        ;
        mpfr_mul(r6293586, r6293578, r6293585, MPFR_RNDN);
        ;
        mpfr_add(r6293588, r6293586, r6293587, MPFR_RNDN);
        mpfr_add(r6293589, r6293584, r6293588, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6293592, r6293591, r6293578, MPFR_RNDN);
        mpfr_add(r6293593, r6293590, r6293592, MPFR_RNDN);
        mpfr_mul(r6293594, r6293583, r6293593, MPFR_RNDN);
        ;
        mpfr_mul(r6293596, r6293595, r6293578, MPFR_RNDN);
        ;
        mpfr_add(r6293598, r6293596, r6293597, MPFR_RNDN);
        mpfr_mul(r6293599, r6293582, r6293598, MPFR_RNDN);
        mpfr_add(r6293600, r6293594, r6293599, MPFR_RNDN);
        mpfr_add(r6293601, r6293589, r6293600, MPFR_RNDN);
        return mpfr_get_d(r6293601, MPFR_RNDN);
}

