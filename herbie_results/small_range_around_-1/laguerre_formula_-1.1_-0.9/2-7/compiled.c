#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r20712439 = 1.0;
        float r20712440 = -7.0;
        float r20712441 = x;
        float r20712442 = r20712440 * r20712441;
        float r20712443 = r20712439 + r20712442;
        float r20712444 = 10.5;
        float r20712445 = r20712441 * r20712441;
        float r20712446 = r20712444 * r20712445;
        float r20712447 = r20712443 + r20712446;
        float r20712448 = -5.833333;
        float r20712449 = r20712445 * r20712441;
        float r20712450 = r20712448 * r20712449;
        float r20712451 = r20712447 + r20712450;
        float r20712452 = 1.458333;
        float r20712453 = r20712449 * r20712441;
        float r20712454 = r20712452 * r20712453;
        float r20712455 = r20712451 + r20712454;
        float r20712456 = -0.175;
        float r20712457 = r20712453 * r20712441;
        float r20712458 = r20712456 * r20712457;
        float r20712459 = r20712455 + r20712458;
        float r20712460 = 0.009722;
        float r20712461 = r20712457 * r20712441;
        float r20712462 = r20712460 * r20712461;
        float r20712463 = r20712459 + r20712462;
        float r20712464 = -0.000198;
        float r20712465 = r20712461 * r20712441;
        float r20712466 = r20712464 * r20712465;
        float r20712467 = r20712463 + r20712466;
        return r20712467;
}

double f_id(double x) {
        double r20712468 = 1.0;
        double r20712469 = -7.0;
        double r20712470 = x;
        double r20712471 = r20712469 * r20712470;
        double r20712472 = r20712468 + r20712471;
        double r20712473 = 10.5;
        double r20712474 = r20712470 * r20712470;
        double r20712475 = r20712473 * r20712474;
        double r20712476 = r20712472 + r20712475;
        double r20712477 = -5.833333;
        double r20712478 = r20712474 * r20712470;
        double r20712479 = r20712477 * r20712478;
        double r20712480 = r20712476 + r20712479;
        double r20712481 = 1.458333;
        double r20712482 = r20712478 * r20712470;
        double r20712483 = r20712481 * r20712482;
        double r20712484 = r20712480 + r20712483;
        double r20712485 = -0.175;
        double r20712486 = r20712482 * r20712470;
        double r20712487 = r20712485 * r20712486;
        double r20712488 = r20712484 + r20712487;
        double r20712489 = 0.009722;
        double r20712490 = r20712486 * r20712470;
        double r20712491 = r20712489 * r20712490;
        double r20712492 = r20712488 + r20712491;
        double r20712493 = -0.000198;
        double r20712494 = r20712490 * r20712470;
        double r20712495 = r20712493 * r20712494;
        double r20712496 = r20712492 + r20712495;
        return r20712496;
}


double f_of(float x) {
        float r20712497 = 1.458333;
        float r20712498 = -0.175;
        float r20712499 = x;
        float r20712500 = r20712498 * r20712499;
        float r20712501 = r20712497 + r20712500;
        float r20712502 = r20712499 * r20712499;
        float r20712503 = r20712502 * r20712502;
        float r20712504 = r20712501 * r20712503;
        float r20712505 = -7.0;
        float r20712506 = r20712505 * r20712499;
        float r20712507 = 1.0;
        float r20712508 = r20712506 + r20712507;
        float r20712509 = r20712504 + r20712508;
        float r20712510 = 3;
        float r20712511 = pow(r20712499, r20712510);
        float r20712512 = r20712511 * r20712511;
        float r20712513 = 0.009722;
        float r20712514 = -0.000198;
        float r20712515 = r20712499 * r20712514;
        float r20712516 = r20712513 + r20712515;
        float r20712517 = r20712512 * r20712516;
        float r20712518 = 10.5;
        float r20712519 = r20712502 * r20712518;
        float r20712520 = 5.833333;
        float r20712521 = -r20712520;
        float r20712522 = r20712521 * r20712511;
        float r20712523 = r20712519 + r20712522;
        float r20712524 = r20712517 + r20712523;
        float r20712525 = r20712509 + r20712524;
        return r20712525;
}

double f_od(double x) {
        double r20712526 = 1.458333;
        double r20712527 = -0.175;
        double r20712528 = x;
        double r20712529 = r20712527 * r20712528;
        double r20712530 = r20712526 + r20712529;
        double r20712531 = r20712528 * r20712528;
        double r20712532 = r20712531 * r20712531;
        double r20712533 = r20712530 * r20712532;
        double r20712534 = -7.0;
        double r20712535 = r20712534 * r20712528;
        double r20712536 = 1.0;
        double r20712537 = r20712535 + r20712536;
        double r20712538 = r20712533 + r20712537;
        double r20712539 = 3;
        double r20712540 = pow(r20712528, r20712539);
        double r20712541 = r20712540 * r20712540;
        double r20712542 = 0.009722;
        double r20712543 = -0.000198;
        double r20712544 = r20712528 * r20712543;
        double r20712545 = r20712542 + r20712544;
        double r20712546 = r20712541 * r20712545;
        double r20712547 = 10.5;
        double r20712548 = r20712531 * r20712547;
        double r20712549 = 5.833333;
        double r20712550 = -r20712549;
        double r20712551 = r20712550 * r20712540;
        double r20712552 = r20712548 + r20712551;
        double r20712553 = r20712546 + r20712552;
        double r20712554 = r20712538 + r20712553;
        return r20712554;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20712555, r20712556, r20712557, r20712558, r20712559, r20712560, r20712561, r20712562, r20712563, r20712564, r20712565, r20712566, r20712567, r20712568, r20712569, r20712570, r20712571, r20712572, r20712573, r20712574, r20712575, r20712576, r20712577, r20712578, r20712579, r20712580, r20712581, r20712582, r20712583;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20712555, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712556, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r20712557);
        mpfr_init(r20712558);
        mpfr_init(r20712559);
        mpfr_init_set_str(r20712560, "10.5", 10, MPFR_RNDN);
        mpfr_init(r20712561);
        mpfr_init(r20712562);
        mpfr_init(r20712563);
        mpfr_init_set_str(r20712564, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r20712565);
        mpfr_init(r20712566);
        mpfr_init(r20712567);
        mpfr_init_set_str(r20712568, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r20712569);
        mpfr_init(r20712570);
        mpfr_init(r20712571);
        mpfr_init_set_str(r20712572, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r20712573);
        mpfr_init(r20712574);
        mpfr_init(r20712575);
        mpfr_init_set_str(r20712576, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r20712577);
        mpfr_init(r20712578);
        mpfr_init(r20712579);
        mpfr_init_set_str(r20712580, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r20712581);
        mpfr_init(r20712582);
        mpfr_init(r20712583);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20712557, x, MPFR_RNDN);
        mpfr_mul(r20712558, r20712556, r20712557, MPFR_RNDN);
        mpfr_add(r20712559, r20712555, r20712558, MPFR_RNDN);
        ;
        mpfr_mul(r20712561, r20712557, r20712557, MPFR_RNDN);
        mpfr_mul(r20712562, r20712560, r20712561, MPFR_RNDN);
        mpfr_add(r20712563, r20712559, r20712562, MPFR_RNDN);
        ;
        mpfr_mul(r20712565, r20712561, r20712557, MPFR_RNDN);
        mpfr_mul(r20712566, r20712564, r20712565, MPFR_RNDN);
        mpfr_add(r20712567, r20712563, r20712566, MPFR_RNDN);
        ;
        mpfr_mul(r20712569, r20712565, r20712557, MPFR_RNDN);
        mpfr_mul(r20712570, r20712568, r20712569, MPFR_RNDN);
        mpfr_add(r20712571, r20712567, r20712570, MPFR_RNDN);
        ;
        mpfr_mul(r20712573, r20712569, r20712557, MPFR_RNDN);
        mpfr_mul(r20712574, r20712572, r20712573, MPFR_RNDN);
        mpfr_add(r20712575, r20712571, r20712574, MPFR_RNDN);
        ;
        mpfr_mul(r20712577, r20712573, r20712557, MPFR_RNDN);
        mpfr_mul(r20712578, r20712576, r20712577, MPFR_RNDN);
        mpfr_add(r20712579, r20712575, r20712578, MPFR_RNDN);
        ;
        mpfr_mul(r20712581, r20712577, r20712557, MPFR_RNDN);
        mpfr_mul(r20712582, r20712580, r20712581, MPFR_RNDN);
        mpfr_add(r20712583, r20712579, r20712582, MPFR_RNDN);
        return mpfr_get_d(r20712583, MPFR_RNDN);
}

static mpfr_t r20712584, r20712585, r20712586, r20712587, r20712588, r20712589, r20712590, r20712591, r20712592, r20712593, r20712594, r20712595, r20712596, r20712597, r20712598, r20712599, r20712600, r20712601, r20712602, r20712603, r20712604, r20712605, r20712606, r20712607, r20712608, r20712609, r20712610, r20712611, r20712612;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20712584, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712585, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r20712586);
        mpfr_init(r20712587);
        mpfr_init(r20712588);
        mpfr_init(r20712589);
        mpfr_init(r20712590);
        mpfr_init(r20712591);
        mpfr_init_set_str(r20712592, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r20712593);
        mpfr_init_set_str(r20712594, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20712595);
        mpfr_init(r20712596);
        mpfr_init_set_str(r20712597, "3", 10, MPFR_RNDN);
        mpfr_init(r20712598);
        mpfr_init(r20712599);
        mpfr_init_set_str(r20712600, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712601, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r20712602);
        mpfr_init(r20712603);
        mpfr_init(r20712604);
        mpfr_init_set_str(r20712605, "10.5", 10, MPFR_RNDN);
        mpfr_init(r20712606);
        mpfr_init_set_str(r20712607, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r20712608);
        mpfr_init(r20712609);
        mpfr_init(r20712610);
        mpfr_init(r20712611);
        mpfr_init(r20712612);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r20712586, x, MPFR_RNDN);
        mpfr_mul(r20712587, r20712585, r20712586, MPFR_RNDN);
        mpfr_add(r20712588, r20712584, r20712587, MPFR_RNDN);
        mpfr_mul(r20712589, r20712586, r20712586, MPFR_RNDN);
        mpfr_mul(r20712590, r20712589, r20712589, MPFR_RNDN);
        mpfr_mul(r20712591, r20712588, r20712590, MPFR_RNDN);
        ;
        mpfr_mul(r20712593, r20712592, r20712586, MPFR_RNDN);
        ;
        mpfr_add(r20712595, r20712593, r20712594, MPFR_RNDN);
        mpfr_add(r20712596, r20712591, r20712595, MPFR_RNDN);
        ;
        mpfr_pow(r20712598, r20712586, r20712597, MPFR_RNDN);
        mpfr_mul(r20712599, r20712598, r20712598, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20712602, r20712586, r20712601, MPFR_RNDN);
        mpfr_add(r20712603, r20712600, r20712602, MPFR_RNDN);
        mpfr_mul(r20712604, r20712599, r20712603, MPFR_RNDN);
        ;
        mpfr_mul(r20712606, r20712589, r20712605, MPFR_RNDN);
        ;
        mpfr_neg(r20712608, r20712607, MPFR_RNDN);
        mpfr_mul(r20712609, r20712608, r20712598, MPFR_RNDN);
        mpfr_add(r20712610, r20712606, r20712609, MPFR_RNDN);
        mpfr_add(r20712611, r20712604, r20712610, MPFR_RNDN);
        mpfr_add(r20712612, r20712596, r20712611, MPFR_RNDN);
        return mpfr_get_d(r20712612, MPFR_RNDN);
}

static mpfr_t r20712613, r20712614, r20712615, r20712616, r20712617, r20712618, r20712619, r20712620, r20712621, r20712622, r20712623, r20712624, r20712625, r20712626, r20712627, r20712628, r20712629, r20712630, r20712631, r20712632, r20712633, r20712634, r20712635, r20712636, r20712637, r20712638, r20712639, r20712640, r20712641;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20712613, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712614, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r20712615);
        mpfr_init(r20712616);
        mpfr_init(r20712617);
        mpfr_init(r20712618);
        mpfr_init(r20712619);
        mpfr_init(r20712620);
        mpfr_init_set_str(r20712621, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r20712622);
        mpfr_init_set_str(r20712623, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20712624);
        mpfr_init(r20712625);
        mpfr_init_set_str(r20712626, "3", 10, MPFR_RNDN);
        mpfr_init(r20712627);
        mpfr_init(r20712628);
        mpfr_init_set_str(r20712629, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712630, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r20712631);
        mpfr_init(r20712632);
        mpfr_init(r20712633);
        mpfr_init_set_str(r20712634, "10.5", 10, MPFR_RNDN);
        mpfr_init(r20712635);
        mpfr_init_set_str(r20712636, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r20712637);
        mpfr_init(r20712638);
        mpfr_init(r20712639);
        mpfr_init(r20712640);
        mpfr_init(r20712641);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r20712615, x, MPFR_RNDN);
        mpfr_mul(r20712616, r20712614, r20712615, MPFR_RNDN);
        mpfr_add(r20712617, r20712613, r20712616, MPFR_RNDN);
        mpfr_mul(r20712618, r20712615, r20712615, MPFR_RNDN);
        mpfr_mul(r20712619, r20712618, r20712618, MPFR_RNDN);
        mpfr_mul(r20712620, r20712617, r20712619, MPFR_RNDN);
        ;
        mpfr_mul(r20712622, r20712621, r20712615, MPFR_RNDN);
        ;
        mpfr_add(r20712624, r20712622, r20712623, MPFR_RNDN);
        mpfr_add(r20712625, r20712620, r20712624, MPFR_RNDN);
        ;
        mpfr_pow(r20712627, r20712615, r20712626, MPFR_RNDN);
        mpfr_mul(r20712628, r20712627, r20712627, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20712631, r20712615, r20712630, MPFR_RNDN);
        mpfr_add(r20712632, r20712629, r20712631, MPFR_RNDN);
        mpfr_mul(r20712633, r20712628, r20712632, MPFR_RNDN);
        ;
        mpfr_mul(r20712635, r20712618, r20712634, MPFR_RNDN);
        ;
        mpfr_neg(r20712637, r20712636, MPFR_RNDN);
        mpfr_mul(r20712638, r20712637, r20712627, MPFR_RNDN);
        mpfr_add(r20712639, r20712635, r20712638, MPFR_RNDN);
        mpfr_add(r20712640, r20712633, r20712639, MPFR_RNDN);
        mpfr_add(r20712641, r20712625, r20712640, MPFR_RNDN);
        return mpfr_get_d(r20712641, MPFR_RNDN);
}

