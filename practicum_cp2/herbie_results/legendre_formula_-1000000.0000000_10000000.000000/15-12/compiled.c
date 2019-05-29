#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r6408456 = 0.225586;
        float r6408457 = -17.595703;
        float r6408458 = x;
        float r6408459 = r6408458 * r6408458;
        float r6408460 = r6408457 * r6408459;
        float r6408461 = r6408456 + r6408460;
        float r6408462 = 219.946289;
        float r6408463 = r6408459 * r6408458;
        float r6408464 = r6408463 * r6408458;
        float r6408465 = r6408462 * r6408464;
        float r6408466 = r6408461 + r6408465;
        float r6408467 = -997.089844;
        float r6408468 = r6408464 * r6408458;
        float r6408469 = r6408468 * r6408458;
        float r6408470 = r6408467 * r6408469;
        float r6408471 = r6408466 + r6408470;
        float r6408472 = 2029.790039;
        float r6408473 = r6408469 * r6408458;
        float r6408474 = r6408473 * r6408458;
        float r6408475 = r6408472 * r6408474;
        float r6408476 = r6408471 + r6408475;
        float r6408477 = -1894.470703;
        float r6408478 = r6408474 * r6408458;
        float r6408479 = r6408478 * r6408458;
        float r6408480 = r6408477 * r6408479;
        float r6408481 = r6408476 + r6408480;
        float r6408482 = 660.194336;
        float r6408483 = r6408479 * r6408458;
        float r6408484 = r6408483 * r6408458;
        float r6408485 = r6408482 * r6408484;
        float r6408486 = r6408481 + r6408485;
        return r6408486;
}

double f_id(double x) {
        double r6408487 = 0.225586;
        double r6408488 = -17.595703;
        double r6408489 = x;
        double r6408490 = r6408489 * r6408489;
        double r6408491 = r6408488 * r6408490;
        double r6408492 = r6408487 + r6408491;
        double r6408493 = 219.946289;
        double r6408494 = r6408490 * r6408489;
        double r6408495 = r6408494 * r6408489;
        double r6408496 = r6408493 * r6408495;
        double r6408497 = r6408492 + r6408496;
        double r6408498 = -997.089844;
        double r6408499 = r6408495 * r6408489;
        double r6408500 = r6408499 * r6408489;
        double r6408501 = r6408498 * r6408500;
        double r6408502 = r6408497 + r6408501;
        double r6408503 = 2029.790039;
        double r6408504 = r6408500 * r6408489;
        double r6408505 = r6408504 * r6408489;
        double r6408506 = r6408503 * r6408505;
        double r6408507 = r6408502 + r6408506;
        double r6408508 = -1894.470703;
        double r6408509 = r6408505 * r6408489;
        double r6408510 = r6408509 * r6408489;
        double r6408511 = r6408508 * r6408510;
        double r6408512 = r6408507 + r6408511;
        double r6408513 = 660.194336;
        double r6408514 = r6408510 * r6408489;
        double r6408515 = r6408514 * r6408489;
        double r6408516 = r6408513 * r6408515;
        double r6408517 = r6408512 + r6408516;
        return r6408517;
}


double f_of(float x) {
        float r6408518 = 2029.790039;
        float r6408519 = x;
        float r6408520 = r6408518 * r6408519;
        float r6408521 = r6408520 * r6408519;
        float r6408522 = r6408519 * r6408519;
        float r6408523 = 3;
        float r6408524 = pow(r6408522, r6408523);
        float r6408525 = r6408521 * r6408524;
        float r6408526 = pow(r6408519, r6408523);
        float r6408527 = 1;
        float r6408528 = r6408523 + r6408527;
        float r6408529 = pow(r6408526, r6408528);
        float r6408530 = cbrt(r6408529);
        float r6408531 = r6408524 * r6408530;
        float r6408532 = 660.194336;
        float r6408533 = r6408532 * r6408519;
        float r6408534 = r6408519 * r6408533;
        float r6408535 = -1894.470703;
        float r6408536 = r6408534 + r6408535;
        float r6408537 = r6408531 * r6408536;
        float r6408538 = r6408525 + r6408537;
        float r6408539 = r6408522 * r6408522;
        float r6408540 = -997.089844;
        float r6408541 = r6408522 * r6408540;
        float r6408542 = 219.946289;
        float r6408543 = r6408541 + r6408542;
        float r6408544 = r6408539 * r6408543;
        float r6408545 = -17.595703;
        float r6408546 = r6408519 * r6408545;
        float r6408547 = r6408546 * r6408519;
        float r6408548 = 0.225586;
        float r6408549 = r6408547 + r6408548;
        float r6408550 = r6408544 + r6408549;
        float r6408551 = r6408538 + r6408550;
        return r6408551;
}

double f_od(double x) {
        double r6408552 = 2029.790039;
        double r6408553 = x;
        double r6408554 = r6408552 * r6408553;
        double r6408555 = r6408554 * r6408553;
        double r6408556 = r6408553 * r6408553;
        double r6408557 = 3;
        double r6408558 = pow(r6408556, r6408557);
        double r6408559 = r6408555 * r6408558;
        double r6408560 = pow(r6408553, r6408557);
        double r6408561 = 1;
        double r6408562 = r6408557 + r6408561;
        double r6408563 = pow(r6408560, r6408562);
        double r6408564 = cbrt(r6408563);
        double r6408565 = r6408558 * r6408564;
        double r6408566 = 660.194336;
        double r6408567 = r6408566 * r6408553;
        double r6408568 = r6408553 * r6408567;
        double r6408569 = -1894.470703;
        double r6408570 = r6408568 + r6408569;
        double r6408571 = r6408565 * r6408570;
        double r6408572 = r6408559 + r6408571;
        double r6408573 = r6408556 * r6408556;
        double r6408574 = -997.089844;
        double r6408575 = r6408556 * r6408574;
        double r6408576 = 219.946289;
        double r6408577 = r6408575 + r6408576;
        double r6408578 = r6408573 * r6408577;
        double r6408579 = -17.595703;
        double r6408580 = r6408553 * r6408579;
        double r6408581 = r6408580 * r6408553;
        double r6408582 = 0.225586;
        double r6408583 = r6408581 + r6408582;
        double r6408584 = r6408578 + r6408583;
        double r6408585 = r6408572 + r6408584;
        return r6408585;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6408586, r6408587, r6408588, r6408589, r6408590, r6408591, r6408592, r6408593, r6408594, r6408595, r6408596, r6408597, r6408598, r6408599, r6408600, r6408601, r6408602, r6408603, r6408604, r6408605, r6408606, r6408607, r6408608, r6408609, r6408610, r6408611, r6408612, r6408613, r6408614, r6408615, r6408616;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6408586, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r6408587, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6408588);
        mpfr_init(r6408589);
        mpfr_init(r6408590);
        mpfr_init(r6408591);
        mpfr_init_set_str(r6408592, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6408593);
        mpfr_init(r6408594);
        mpfr_init(r6408595);
        mpfr_init(r6408596);
        mpfr_init_set_str(r6408597, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6408598);
        mpfr_init(r6408599);
        mpfr_init(r6408600);
        mpfr_init(r6408601);
        mpfr_init_set_str(r6408602, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6408603);
        mpfr_init(r6408604);
        mpfr_init(r6408605);
        mpfr_init(r6408606);
        mpfr_init_set_str(r6408607, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6408608);
        mpfr_init(r6408609);
        mpfr_init(r6408610);
        mpfr_init(r6408611);
        mpfr_init_set_str(r6408612, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6408613);
        mpfr_init(r6408614);
        mpfr_init(r6408615);
        mpfr_init(r6408616);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6408588, x, MPFR_RNDN);
        mpfr_mul(r6408589, r6408588, r6408588, MPFR_RNDN);
        mpfr_mul(r6408590, r6408587, r6408589, MPFR_RNDN);
        mpfr_add(r6408591, r6408586, r6408590, MPFR_RNDN);
        ;
        mpfr_mul(r6408593, r6408589, r6408588, MPFR_RNDN);
        mpfr_mul(r6408594, r6408593, r6408588, MPFR_RNDN);
        mpfr_mul(r6408595, r6408592, r6408594, MPFR_RNDN);
        mpfr_add(r6408596, r6408591, r6408595, MPFR_RNDN);
        ;
        mpfr_mul(r6408598, r6408594, r6408588, MPFR_RNDN);
        mpfr_mul(r6408599, r6408598, r6408588, MPFR_RNDN);
        mpfr_mul(r6408600, r6408597, r6408599, MPFR_RNDN);
        mpfr_add(r6408601, r6408596, r6408600, MPFR_RNDN);
        ;
        mpfr_mul(r6408603, r6408599, r6408588, MPFR_RNDN);
        mpfr_mul(r6408604, r6408603, r6408588, MPFR_RNDN);
        mpfr_mul(r6408605, r6408602, r6408604, MPFR_RNDN);
        mpfr_add(r6408606, r6408601, r6408605, MPFR_RNDN);
        ;
        mpfr_mul(r6408608, r6408604, r6408588, MPFR_RNDN);
        mpfr_mul(r6408609, r6408608, r6408588, MPFR_RNDN);
        mpfr_mul(r6408610, r6408607, r6408609, MPFR_RNDN);
        mpfr_add(r6408611, r6408606, r6408610, MPFR_RNDN);
        ;
        mpfr_mul(r6408613, r6408609, r6408588, MPFR_RNDN);
        mpfr_mul(r6408614, r6408613, r6408588, MPFR_RNDN);
        mpfr_mul(r6408615, r6408612, r6408614, MPFR_RNDN);
        mpfr_add(r6408616, r6408611, r6408615, MPFR_RNDN);
        return mpfr_get_d(r6408616, MPFR_RNDN);
}

static mpfr_t r6408617, r6408618, r6408619, r6408620, r6408621, r6408622, r6408623, r6408624, r6408625, r6408626, r6408627, r6408628, r6408629, r6408630, r6408631, r6408632, r6408633, r6408634, r6408635, r6408636, r6408637, r6408638, r6408639, r6408640, r6408641, r6408642, r6408643, r6408644, r6408645, r6408646, r6408647, r6408648, r6408649, r6408650;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6408617, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6408618);
        mpfr_init(r6408619);
        mpfr_init(r6408620);
        mpfr_init(r6408621);
        mpfr_init_set_str(r6408622, "3", 10, MPFR_RNDN);
        mpfr_init(r6408623);
        mpfr_init(r6408624);
        mpfr_init(r6408625);
        mpfr_init_set_str(r6408626, "1", 10, MPFR_RNDN);
        mpfr_init(r6408627);
        mpfr_init(r6408628);
        mpfr_init(r6408629);
        mpfr_init(r6408630);
        mpfr_init_set_str(r6408631, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6408632);
        mpfr_init(r6408633);
        mpfr_init_set_str(r6408634, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6408635);
        mpfr_init(r6408636);
        mpfr_init(r6408637);
        mpfr_init(r6408638);
        mpfr_init_set_str(r6408639, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6408640);
        mpfr_init_set_str(r6408641, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6408642);
        mpfr_init(r6408643);
        mpfr_init_set_str(r6408644, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6408645);
        mpfr_init(r6408646);
        mpfr_init_set_str(r6408647, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r6408648);
        mpfr_init(r6408649);
        mpfr_init(r6408650);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6408618, x, MPFR_RNDN);
        mpfr_mul(r6408619, r6408617, r6408618, MPFR_RNDN);
        mpfr_mul(r6408620, r6408619, r6408618, MPFR_RNDN);
        mpfr_mul(r6408621, r6408618, r6408618, MPFR_RNDN);
        ;
        mpfr_pow(r6408623, r6408621, r6408622, MPFR_RNDN);
        mpfr_mul(r6408624, r6408620, r6408623, MPFR_RNDN);
        mpfr_pow(r6408625, r6408618, r6408622, MPFR_RNDN);
        ;
        mpfr_add(r6408627, r6408622, r6408626, MPFR_RNDN);
        mpfr_pow(r6408628, r6408625, r6408627, MPFR_RNDN);
        mpfr_cbrt(r6408629, r6408628, MPFR_RNDN);
        mpfr_mul(r6408630, r6408623, r6408629, MPFR_RNDN);
        ;
        mpfr_mul(r6408632, r6408631, r6408618, MPFR_RNDN);
        mpfr_mul(r6408633, r6408618, r6408632, MPFR_RNDN);
        ;
        mpfr_add(r6408635, r6408633, r6408634, MPFR_RNDN);
        mpfr_mul(r6408636, r6408630, r6408635, MPFR_RNDN);
        mpfr_add(r6408637, r6408624, r6408636, MPFR_RNDN);
        mpfr_mul(r6408638, r6408621, r6408621, MPFR_RNDN);
        ;
        mpfr_mul(r6408640, r6408621, r6408639, MPFR_RNDN);
        ;
        mpfr_add(r6408642, r6408640, r6408641, MPFR_RNDN);
        mpfr_mul(r6408643, r6408638, r6408642, MPFR_RNDN);
        ;
        mpfr_mul(r6408645, r6408618, r6408644, MPFR_RNDN);
        mpfr_mul(r6408646, r6408645, r6408618, MPFR_RNDN);
        ;
        mpfr_add(r6408648, r6408646, r6408647, MPFR_RNDN);
        mpfr_add(r6408649, r6408643, r6408648, MPFR_RNDN);
        mpfr_add(r6408650, r6408637, r6408649, MPFR_RNDN);
        return mpfr_get_d(r6408650, MPFR_RNDN);
}

static mpfr_t r6408651, r6408652, r6408653, r6408654, r6408655, r6408656, r6408657, r6408658, r6408659, r6408660, r6408661, r6408662, r6408663, r6408664, r6408665, r6408666, r6408667, r6408668, r6408669, r6408670, r6408671, r6408672, r6408673, r6408674, r6408675, r6408676, r6408677, r6408678, r6408679, r6408680, r6408681, r6408682, r6408683, r6408684;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6408651, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6408652);
        mpfr_init(r6408653);
        mpfr_init(r6408654);
        mpfr_init(r6408655);
        mpfr_init_set_str(r6408656, "3", 10, MPFR_RNDN);
        mpfr_init(r6408657);
        mpfr_init(r6408658);
        mpfr_init(r6408659);
        mpfr_init_set_str(r6408660, "1", 10, MPFR_RNDN);
        mpfr_init(r6408661);
        mpfr_init(r6408662);
        mpfr_init(r6408663);
        mpfr_init(r6408664);
        mpfr_init_set_str(r6408665, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6408666);
        mpfr_init(r6408667);
        mpfr_init_set_str(r6408668, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6408669);
        mpfr_init(r6408670);
        mpfr_init(r6408671);
        mpfr_init(r6408672);
        mpfr_init_set_str(r6408673, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6408674);
        mpfr_init_set_str(r6408675, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6408676);
        mpfr_init(r6408677);
        mpfr_init_set_str(r6408678, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6408679);
        mpfr_init(r6408680);
        mpfr_init_set_str(r6408681, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r6408682);
        mpfr_init(r6408683);
        mpfr_init(r6408684);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6408652, x, MPFR_RNDN);
        mpfr_mul(r6408653, r6408651, r6408652, MPFR_RNDN);
        mpfr_mul(r6408654, r6408653, r6408652, MPFR_RNDN);
        mpfr_mul(r6408655, r6408652, r6408652, MPFR_RNDN);
        ;
        mpfr_pow(r6408657, r6408655, r6408656, MPFR_RNDN);
        mpfr_mul(r6408658, r6408654, r6408657, MPFR_RNDN);
        mpfr_pow(r6408659, r6408652, r6408656, MPFR_RNDN);
        ;
        mpfr_add(r6408661, r6408656, r6408660, MPFR_RNDN);
        mpfr_pow(r6408662, r6408659, r6408661, MPFR_RNDN);
        mpfr_cbrt(r6408663, r6408662, MPFR_RNDN);
        mpfr_mul(r6408664, r6408657, r6408663, MPFR_RNDN);
        ;
        mpfr_mul(r6408666, r6408665, r6408652, MPFR_RNDN);
        mpfr_mul(r6408667, r6408652, r6408666, MPFR_RNDN);
        ;
        mpfr_add(r6408669, r6408667, r6408668, MPFR_RNDN);
        mpfr_mul(r6408670, r6408664, r6408669, MPFR_RNDN);
        mpfr_add(r6408671, r6408658, r6408670, MPFR_RNDN);
        mpfr_mul(r6408672, r6408655, r6408655, MPFR_RNDN);
        ;
        mpfr_mul(r6408674, r6408655, r6408673, MPFR_RNDN);
        ;
        mpfr_add(r6408676, r6408674, r6408675, MPFR_RNDN);
        mpfr_mul(r6408677, r6408672, r6408676, MPFR_RNDN);
        ;
        mpfr_mul(r6408679, r6408652, r6408678, MPFR_RNDN);
        mpfr_mul(r6408680, r6408679, r6408652, MPFR_RNDN);
        ;
        mpfr_add(r6408682, r6408680, r6408681, MPFR_RNDN);
        mpfr_add(r6408683, r6408677, r6408682, MPFR_RNDN);
        mpfr_add(r6408684, r6408671, r6408683, MPFR_RNDN);
        return mpfr_get_d(r6408684, MPFR_RNDN);
}

