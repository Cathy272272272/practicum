#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r98657451 = 1.0;
        float r98657452 = -8.0;
        float r98657453 = x;
        float r98657454 = r98657452 * r98657453;
        float r98657455 = r98657451 + r98657454;
        float r98657456 = 14.0;
        float r98657457 = r98657453 * r98657453;
        float r98657458 = r98657456 * r98657457;
        float r98657459 = r98657455 + r98657458;
        float r98657460 = -9.333333;
        float r98657461 = r98657457 * r98657453;
        float r98657462 = r98657460 * r98657461;
        float r98657463 = r98657459 + r98657462;
        float r98657464 = 2.916667;
        float r98657465 = r98657461 * r98657453;
        float r98657466 = r98657464 * r98657465;
        float r98657467 = r98657463 + r98657466;
        float r98657468 = -0.466667;
        float r98657469 = r98657465 * r98657453;
        float r98657470 = r98657468 * r98657469;
        float r98657471 = r98657467 + r98657470;
        float r98657472 = 0.038889;
        float r98657473 = r98657469 * r98657453;
        float r98657474 = r98657472 * r98657473;
        float r98657475 = r98657471 + r98657474;
        float r98657476 = -0.001587;
        float r98657477 = r98657473 * r98657453;
        float r98657478 = r98657476 * r98657477;
        float r98657479 = r98657475 + r98657478;
        float r98657480 = 2.5e-05;
        float r98657481 = r98657477 * r98657453;
        float r98657482 = r98657480 * r98657481;
        float r98657483 = r98657479 + r98657482;
        return r98657483;
}

double f_id(double x) {
        double r98657484 = 1.0;
        double r98657485 = -8.0;
        double r98657486 = x;
        double r98657487 = r98657485 * r98657486;
        double r98657488 = r98657484 + r98657487;
        double r98657489 = 14.0;
        double r98657490 = r98657486 * r98657486;
        double r98657491 = r98657489 * r98657490;
        double r98657492 = r98657488 + r98657491;
        double r98657493 = -9.333333;
        double r98657494 = r98657490 * r98657486;
        double r98657495 = r98657493 * r98657494;
        double r98657496 = r98657492 + r98657495;
        double r98657497 = 2.916667;
        double r98657498 = r98657494 * r98657486;
        double r98657499 = r98657497 * r98657498;
        double r98657500 = r98657496 + r98657499;
        double r98657501 = -0.466667;
        double r98657502 = r98657498 * r98657486;
        double r98657503 = r98657501 * r98657502;
        double r98657504 = r98657500 + r98657503;
        double r98657505 = 0.038889;
        double r98657506 = r98657502 * r98657486;
        double r98657507 = r98657505 * r98657506;
        double r98657508 = r98657504 + r98657507;
        double r98657509 = -0.001587;
        double r98657510 = r98657506 * r98657486;
        double r98657511 = r98657509 * r98657510;
        double r98657512 = r98657508 + r98657511;
        double r98657513 = 2.5e-05;
        double r98657514 = r98657510 * r98657486;
        double r98657515 = r98657513 * r98657514;
        double r98657516 = r98657512 + r98657515;
        return r98657516;
}


double f_of(float x) {
        float r98657517 = x;
        float r98657518 = r98657517 * r98657517;
        float r98657519 = 3;
        float r98657520 = pow(r98657518, r98657519);
        float r98657521 = 2.5e-05;
        float r98657522 = r98657521 * r98657518;
        float r98657523 = r98657520 * r98657522;
        float r98657524 = 2;
        float r98657525 = r98657524 * r98657519;
        float r98657526 = pow(r98657517, r98657525);
        float r98657527 = -0.001587;
        float r98657528 = r98657527 * r98657517;
        float r98657529 = 0.038889;
        float r98657530 = r98657528 + r98657529;
        float r98657531 = r98657526 * r98657530;
        float r98657532 = r98657523 + r98657531;
        float r98657533 = exp(r98657517);
        float r98657534 = pow(r98657517, r98657519);
        float r98657535 = pow(r98657533, r98657534);
        float r98657536 = -0.466667;
        float r98657537 = r98657517 * r98657536;
        float r98657538 = 2.916667;
        float r98657539 = r98657537 + r98657538;
        float r98657540 = pow(r98657535, r98657539);
        float r98657541 = log(r98657540);
        float r98657542 = 1.0;
        float r98657543 = -8.0;
        float r98657544 = r98657543 * r98657517;
        float r98657545 = r98657542 + r98657544;
        float r98657546 = exp(r98657545);
        float r98657547 = exp(r98657518);
        float r98657548 = -9.333333;
        float r98657549 = r98657517 * r98657548;
        float r98657550 = pow(r98657547, r98657549);
        float r98657551 = 14.0;
        float r98657552 = pow(r98657547, r98657551);
        float r98657553 = r98657550 * r98657552;
        float r98657554 = r98657546 * r98657553;
        float r98657555 = log(r98657554);
        float r98657556 = r98657541 + r98657555;
        float r98657557 = r98657532 + r98657556;
        return r98657557;
}

double f_od(double x) {
        double r98657558 = x;
        double r98657559 = r98657558 * r98657558;
        double r98657560 = 3;
        double r98657561 = pow(r98657559, r98657560);
        double r98657562 = 2.5e-05;
        double r98657563 = r98657562 * r98657559;
        double r98657564 = r98657561 * r98657563;
        double r98657565 = 2;
        double r98657566 = r98657565 * r98657560;
        double r98657567 = pow(r98657558, r98657566);
        double r98657568 = -0.001587;
        double r98657569 = r98657568 * r98657558;
        double r98657570 = 0.038889;
        double r98657571 = r98657569 + r98657570;
        double r98657572 = r98657567 * r98657571;
        double r98657573 = r98657564 + r98657572;
        double r98657574 = exp(r98657558);
        double r98657575 = pow(r98657558, r98657560);
        double r98657576 = pow(r98657574, r98657575);
        double r98657577 = -0.466667;
        double r98657578 = r98657558 * r98657577;
        double r98657579 = 2.916667;
        double r98657580 = r98657578 + r98657579;
        double r98657581 = pow(r98657576, r98657580);
        double r98657582 = log(r98657581);
        double r98657583 = 1.0;
        double r98657584 = -8.0;
        double r98657585 = r98657584 * r98657558;
        double r98657586 = r98657583 + r98657585;
        double r98657587 = exp(r98657586);
        double r98657588 = exp(r98657559);
        double r98657589 = -9.333333;
        double r98657590 = r98657558 * r98657589;
        double r98657591 = pow(r98657588, r98657590);
        double r98657592 = 14.0;
        double r98657593 = pow(r98657588, r98657592);
        double r98657594 = r98657591 * r98657593;
        double r98657595 = r98657587 * r98657594;
        double r98657596 = log(r98657595);
        double r98657597 = r98657582 + r98657596;
        double r98657598 = r98657573 + r98657597;
        return r98657598;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r98657599, r98657600, r98657601, r98657602, r98657603, r98657604, r98657605, r98657606, r98657607, r98657608, r98657609, r98657610, r98657611, r98657612, r98657613, r98657614, r98657615, r98657616, r98657617, r98657618, r98657619, r98657620, r98657621, r98657622, r98657623, r98657624, r98657625, r98657626, r98657627, r98657628, r98657629, r98657630, r98657631;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98657599, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98657600, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r98657601);
        mpfr_init(r98657602);
        mpfr_init(r98657603);
        mpfr_init_set_str(r98657604, "14.0", 10, MPFR_RNDN);
        mpfr_init(r98657605);
        mpfr_init(r98657606);
        mpfr_init(r98657607);
        mpfr_init_set_str(r98657608, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r98657609);
        mpfr_init(r98657610);
        mpfr_init(r98657611);
        mpfr_init_set_str(r98657612, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r98657613);
        mpfr_init(r98657614);
        mpfr_init(r98657615);
        mpfr_init_set_str(r98657616, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r98657617);
        mpfr_init(r98657618);
        mpfr_init(r98657619);
        mpfr_init_set_str(r98657620, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r98657621);
        mpfr_init(r98657622);
        mpfr_init(r98657623);
        mpfr_init_set_str(r98657624, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r98657625);
        mpfr_init(r98657626);
        mpfr_init(r98657627);
        mpfr_init_set_str(r98657628, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r98657629);
        mpfr_init(r98657630);
        mpfr_init(r98657631);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r98657601, x, MPFR_RNDN);
        mpfr_mul(r98657602, r98657600, r98657601, MPFR_RNDN);
        mpfr_add(r98657603, r98657599, r98657602, MPFR_RNDN);
        ;
        mpfr_mul(r98657605, r98657601, r98657601, MPFR_RNDN);
        mpfr_mul(r98657606, r98657604, r98657605, MPFR_RNDN);
        mpfr_add(r98657607, r98657603, r98657606, MPFR_RNDN);
        ;
        mpfr_mul(r98657609, r98657605, r98657601, MPFR_RNDN);
        mpfr_mul(r98657610, r98657608, r98657609, MPFR_RNDN);
        mpfr_add(r98657611, r98657607, r98657610, MPFR_RNDN);
        ;
        mpfr_mul(r98657613, r98657609, r98657601, MPFR_RNDN);
        mpfr_mul(r98657614, r98657612, r98657613, MPFR_RNDN);
        mpfr_add(r98657615, r98657611, r98657614, MPFR_RNDN);
        ;
        mpfr_mul(r98657617, r98657613, r98657601, MPFR_RNDN);
        mpfr_mul(r98657618, r98657616, r98657617, MPFR_RNDN);
        mpfr_add(r98657619, r98657615, r98657618, MPFR_RNDN);
        ;
        mpfr_mul(r98657621, r98657617, r98657601, MPFR_RNDN);
        mpfr_mul(r98657622, r98657620, r98657621, MPFR_RNDN);
        mpfr_add(r98657623, r98657619, r98657622, MPFR_RNDN);
        ;
        mpfr_mul(r98657625, r98657621, r98657601, MPFR_RNDN);
        mpfr_mul(r98657626, r98657624, r98657625, MPFR_RNDN);
        mpfr_add(r98657627, r98657623, r98657626, MPFR_RNDN);
        ;
        mpfr_mul(r98657629, r98657625, r98657601, MPFR_RNDN);
        mpfr_mul(r98657630, r98657628, r98657629, MPFR_RNDN);
        mpfr_add(r98657631, r98657627, r98657630, MPFR_RNDN);
        return mpfr_get_d(r98657631, MPFR_RNDN);
}

static mpfr_t r98657632, r98657633, r98657634, r98657635, r98657636, r98657637, r98657638, r98657639, r98657640, r98657641, r98657642, r98657643, r98657644, r98657645, r98657646, r98657647, r98657648, r98657649, r98657650, r98657651, r98657652, r98657653, r98657654, r98657655, r98657656, r98657657, r98657658, r98657659, r98657660, r98657661, r98657662, r98657663, r98657664, r98657665, r98657666, r98657667, r98657668, r98657669, r98657670, r98657671, r98657672;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r98657632);
        mpfr_init(r98657633);
        mpfr_init_set_str(r98657634, "3", 10, MPFR_RNDN);
        mpfr_init(r98657635);
        mpfr_init_set_str(r98657636, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r98657637);
        mpfr_init(r98657638);
        mpfr_init_set_str(r98657639, "2", 10, MPFR_RNDN);
        mpfr_init(r98657640);
        mpfr_init(r98657641);
        mpfr_init_set_str(r98657642, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r98657643);
        mpfr_init_set_str(r98657644, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r98657645);
        mpfr_init(r98657646);
        mpfr_init(r98657647);
        mpfr_init(r98657648);
        mpfr_init(r98657649);
        mpfr_init(r98657650);
        mpfr_init_set_str(r98657651, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r98657652);
        mpfr_init_set_str(r98657653, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r98657654);
        mpfr_init(r98657655);
        mpfr_init(r98657656);
        mpfr_init_set_str(r98657657, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98657658, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r98657659);
        mpfr_init(r98657660);
        mpfr_init(r98657661);
        mpfr_init(r98657662);
        mpfr_init_set_str(r98657663, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r98657664);
        mpfr_init(r98657665);
        mpfr_init_set_str(r98657666, "14.0", 10, MPFR_RNDN);
        mpfr_init(r98657667);
        mpfr_init(r98657668);
        mpfr_init(r98657669);
        mpfr_init(r98657670);
        mpfr_init(r98657671);
        mpfr_init(r98657672);
}

double f_fm(double x) {
        mpfr_set_d(r98657632, x, MPFR_RNDN);
        mpfr_mul(r98657633, r98657632, r98657632, MPFR_RNDN);
        ;
        mpfr_pow(r98657635, r98657633, r98657634, MPFR_RNDN);
        ;
        mpfr_mul(r98657637, r98657636, r98657633, MPFR_RNDN);
        mpfr_mul(r98657638, r98657635, r98657637, MPFR_RNDN);
        ;
        mpfr_mul(r98657640, r98657639, r98657634, MPFR_RNDN);
        mpfr_pow(r98657641, r98657632, r98657640, MPFR_RNDN);
        ;
        mpfr_mul(r98657643, r98657642, r98657632, MPFR_RNDN);
        ;
        mpfr_add(r98657645, r98657643, r98657644, MPFR_RNDN);
        mpfr_mul(r98657646, r98657641, r98657645, MPFR_RNDN);
        mpfr_add(r98657647, r98657638, r98657646, MPFR_RNDN);
        mpfr_exp(r98657648, r98657632, MPFR_RNDN);
        mpfr_pow(r98657649, r98657632, r98657634, MPFR_RNDN);
        mpfr_pow(r98657650, r98657648, r98657649, MPFR_RNDN);
        ;
        mpfr_mul(r98657652, r98657632, r98657651, MPFR_RNDN);
        ;
        mpfr_add(r98657654, r98657652, r98657653, MPFR_RNDN);
        mpfr_pow(r98657655, r98657650, r98657654, MPFR_RNDN);
        mpfr_log(r98657656, r98657655, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r98657659, r98657658, r98657632, MPFR_RNDN);
        mpfr_add(r98657660, r98657657, r98657659, MPFR_RNDN);
        mpfr_exp(r98657661, r98657660, MPFR_RNDN);
        mpfr_exp(r98657662, r98657633, MPFR_RNDN);
        ;
        mpfr_mul(r98657664, r98657632, r98657663, MPFR_RNDN);
        mpfr_pow(r98657665, r98657662, r98657664, MPFR_RNDN);
        ;
        mpfr_pow(r98657667, r98657662, r98657666, MPFR_RNDN);
        mpfr_mul(r98657668, r98657665, r98657667, MPFR_RNDN);
        mpfr_mul(r98657669, r98657661, r98657668, MPFR_RNDN);
        mpfr_log(r98657670, r98657669, MPFR_RNDN);
        mpfr_add(r98657671, r98657656, r98657670, MPFR_RNDN);
        mpfr_add(r98657672, r98657647, r98657671, MPFR_RNDN);
        return mpfr_get_d(r98657672, MPFR_RNDN);
}

static mpfr_t r98657673, r98657674, r98657675, r98657676, r98657677, r98657678, r98657679, r98657680, r98657681, r98657682, r98657683, r98657684, r98657685, r98657686, r98657687, r98657688, r98657689, r98657690, r98657691, r98657692, r98657693, r98657694, r98657695, r98657696, r98657697, r98657698, r98657699, r98657700, r98657701, r98657702, r98657703, r98657704, r98657705, r98657706, r98657707, r98657708, r98657709, r98657710, r98657711, r98657712, r98657713;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r98657673);
        mpfr_init(r98657674);
        mpfr_init_set_str(r98657675, "3", 10, MPFR_RNDN);
        mpfr_init(r98657676);
        mpfr_init_set_str(r98657677, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r98657678);
        mpfr_init(r98657679);
        mpfr_init_set_str(r98657680, "2", 10, MPFR_RNDN);
        mpfr_init(r98657681);
        mpfr_init(r98657682);
        mpfr_init_set_str(r98657683, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r98657684);
        mpfr_init_set_str(r98657685, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r98657686);
        mpfr_init(r98657687);
        mpfr_init(r98657688);
        mpfr_init(r98657689);
        mpfr_init(r98657690);
        mpfr_init(r98657691);
        mpfr_init_set_str(r98657692, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r98657693);
        mpfr_init_set_str(r98657694, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r98657695);
        mpfr_init(r98657696);
        mpfr_init(r98657697);
        mpfr_init_set_str(r98657698, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98657699, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r98657700);
        mpfr_init(r98657701);
        mpfr_init(r98657702);
        mpfr_init(r98657703);
        mpfr_init_set_str(r98657704, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r98657705);
        mpfr_init(r98657706);
        mpfr_init_set_str(r98657707, "14.0", 10, MPFR_RNDN);
        mpfr_init(r98657708);
        mpfr_init(r98657709);
        mpfr_init(r98657710);
        mpfr_init(r98657711);
        mpfr_init(r98657712);
        mpfr_init(r98657713);
}

double f_dm(double x) {
        mpfr_set_d(r98657673, x, MPFR_RNDN);
        mpfr_mul(r98657674, r98657673, r98657673, MPFR_RNDN);
        ;
        mpfr_pow(r98657676, r98657674, r98657675, MPFR_RNDN);
        ;
        mpfr_mul(r98657678, r98657677, r98657674, MPFR_RNDN);
        mpfr_mul(r98657679, r98657676, r98657678, MPFR_RNDN);
        ;
        mpfr_mul(r98657681, r98657680, r98657675, MPFR_RNDN);
        mpfr_pow(r98657682, r98657673, r98657681, MPFR_RNDN);
        ;
        mpfr_mul(r98657684, r98657683, r98657673, MPFR_RNDN);
        ;
        mpfr_add(r98657686, r98657684, r98657685, MPFR_RNDN);
        mpfr_mul(r98657687, r98657682, r98657686, MPFR_RNDN);
        mpfr_add(r98657688, r98657679, r98657687, MPFR_RNDN);
        mpfr_exp(r98657689, r98657673, MPFR_RNDN);
        mpfr_pow(r98657690, r98657673, r98657675, MPFR_RNDN);
        mpfr_pow(r98657691, r98657689, r98657690, MPFR_RNDN);
        ;
        mpfr_mul(r98657693, r98657673, r98657692, MPFR_RNDN);
        ;
        mpfr_add(r98657695, r98657693, r98657694, MPFR_RNDN);
        mpfr_pow(r98657696, r98657691, r98657695, MPFR_RNDN);
        mpfr_log(r98657697, r98657696, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r98657700, r98657699, r98657673, MPFR_RNDN);
        mpfr_add(r98657701, r98657698, r98657700, MPFR_RNDN);
        mpfr_exp(r98657702, r98657701, MPFR_RNDN);
        mpfr_exp(r98657703, r98657674, MPFR_RNDN);
        ;
        mpfr_mul(r98657705, r98657673, r98657704, MPFR_RNDN);
        mpfr_pow(r98657706, r98657703, r98657705, MPFR_RNDN);
        ;
        mpfr_pow(r98657708, r98657703, r98657707, MPFR_RNDN);
        mpfr_mul(r98657709, r98657706, r98657708, MPFR_RNDN);
        mpfr_mul(r98657710, r98657702, r98657709, MPFR_RNDN);
        mpfr_log(r98657711, r98657710, MPFR_RNDN);
        mpfr_add(r98657712, r98657697, r98657711, MPFR_RNDN);
        mpfr_add(r98657713, r98657688, r98657712, MPFR_RNDN);
        return mpfr_get_d(r98657713, MPFR_RNDN);
}

