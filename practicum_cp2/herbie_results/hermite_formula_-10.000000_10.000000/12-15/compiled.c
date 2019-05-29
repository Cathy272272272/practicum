#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r9830456 = -518918400.0;
        float r9830457 = x;
        float r9830458 = r9830456 * r9830457;
        float r9830459 = 2421619200.0;
        float r9830460 = r9830457 * r9830457;
        float r9830461 = r9830460 * r9830457;
        float r9830462 = r9830459 * r9830461;
        float r9830463 = r9830458 + r9830462;
        float r9830464 = -2905943040.0;
        float r9830465 = r9830461 * r9830457;
        float r9830466 = r9830465 * r9830457;
        float r9830467 = r9830464 * r9830466;
        float r9830468 = r9830463 + r9830467;
        float r9830469 = 1383782400.0;
        float r9830470 = r9830466 * r9830457;
        float r9830471 = r9830470 * r9830457;
        float r9830472 = r9830469 * r9830471;
        float r9830473 = r9830468 + r9830472;
        float r9830474 = -307507200.0;
        float r9830475 = r9830471 * r9830457;
        float r9830476 = r9830475 * r9830457;
        float r9830477 = r9830474 * r9830476;
        float r9830478 = r9830473 + r9830477;
        float r9830479 = 33546240.0;
        float r9830480 = r9830476 * r9830457;
        float r9830481 = r9830480 * r9830457;
        float r9830482 = r9830479 * r9830481;
        float r9830483 = r9830478 + r9830482;
        float r9830484 = -1720320.0;
        float r9830485 = r9830481 * r9830457;
        float r9830486 = r9830485 * r9830457;
        float r9830487 = r9830484 * r9830486;
        float r9830488 = r9830483 + r9830487;
        float r9830489 = 32768.0;
        float r9830490 = r9830486 * r9830457;
        float r9830491 = r9830490 * r9830457;
        float r9830492 = r9830489 * r9830491;
        float r9830493 = r9830488 + r9830492;
        return r9830493;
}

double f_id(double x) {
        double r9830494 = -518918400.0;
        double r9830495 = x;
        double r9830496 = r9830494 * r9830495;
        double r9830497 = 2421619200.0;
        double r9830498 = r9830495 * r9830495;
        double r9830499 = r9830498 * r9830495;
        double r9830500 = r9830497 * r9830499;
        double r9830501 = r9830496 + r9830500;
        double r9830502 = -2905943040.0;
        double r9830503 = r9830499 * r9830495;
        double r9830504 = r9830503 * r9830495;
        double r9830505 = r9830502 * r9830504;
        double r9830506 = r9830501 + r9830505;
        double r9830507 = 1383782400.0;
        double r9830508 = r9830504 * r9830495;
        double r9830509 = r9830508 * r9830495;
        double r9830510 = r9830507 * r9830509;
        double r9830511 = r9830506 + r9830510;
        double r9830512 = -307507200.0;
        double r9830513 = r9830509 * r9830495;
        double r9830514 = r9830513 * r9830495;
        double r9830515 = r9830512 * r9830514;
        double r9830516 = r9830511 + r9830515;
        double r9830517 = 33546240.0;
        double r9830518 = r9830514 * r9830495;
        double r9830519 = r9830518 * r9830495;
        double r9830520 = r9830517 * r9830519;
        double r9830521 = r9830516 + r9830520;
        double r9830522 = -1720320.0;
        double r9830523 = r9830519 * r9830495;
        double r9830524 = r9830523 * r9830495;
        double r9830525 = r9830522 * r9830524;
        double r9830526 = r9830521 + r9830525;
        double r9830527 = 32768.0;
        double r9830528 = r9830524 * r9830495;
        double r9830529 = r9830528 * r9830495;
        double r9830530 = r9830527 * r9830529;
        double r9830531 = r9830526 + r9830530;
        return r9830531;
}


double f_of(float x) {
        float r9830532 = -518918400.0;
        float r9830533 = x;
        float r9830534 = r9830532 * r9830533;
        float r9830535 = 2421619200.0;
        float r9830536 = r9830533 * r9830533;
        float r9830537 = r9830536 * r9830533;
        float r9830538 = r9830535 * r9830537;
        float r9830539 = r9830534 + r9830538;
        float r9830540 = -2905943040.0;
        float r9830541 = r9830537 * r9830533;
        float r9830542 = r9830541 * r9830533;
        float r9830543 = r9830540 * r9830542;
        float r9830544 = r9830539 + r9830543;
        float r9830545 = 1383782400.0;
        float r9830546 = r9830542 * r9830533;
        float r9830547 = r9830546 * r9830533;
        float r9830548 = r9830545 * r9830547;
        float r9830549 = r9830544 + r9830548;
        float r9830550 = -307507200.0;
        float r9830551 = r9830547 * r9830533;
        float r9830552 = r9830551 * r9830533;
        float r9830553 = r9830550 * r9830552;
        float r9830554 = r9830549 + r9830553;
        float r9830555 = 33546240.0;
        float r9830556 = r9830552 * r9830533;
        float r9830557 = r9830556 * r9830533;
        float r9830558 = r9830555 * r9830557;
        float r9830559 = r9830554 + r9830558;
        float r9830560 = -1720320.0;
        float r9830561 = r9830557 * r9830533;
        float r9830562 = r9830561 * r9830533;
        float r9830563 = r9830560 * r9830562;
        float r9830564 = r9830559 + r9830563;
        float r9830565 = 32768.0;
        float r9830566 = r9830562 * r9830533;
        float r9830567 = r9830566 * r9830533;
        float r9830568 = r9830565 * r9830567;
        float r9830569 = r9830564 + r9830568;
        return r9830569;
}

double f_od(double x) {
        double r9830570 = -518918400.0;
        double r9830571 = x;
        double r9830572 = r9830570 * r9830571;
        double r9830573 = 2421619200.0;
        double r9830574 = r9830571 * r9830571;
        double r9830575 = r9830574 * r9830571;
        double r9830576 = r9830573 * r9830575;
        double r9830577 = r9830572 + r9830576;
        double r9830578 = -2905943040.0;
        double r9830579 = r9830575 * r9830571;
        double r9830580 = r9830579 * r9830571;
        double r9830581 = r9830578 * r9830580;
        double r9830582 = r9830577 + r9830581;
        double r9830583 = 1383782400.0;
        double r9830584 = r9830580 * r9830571;
        double r9830585 = r9830584 * r9830571;
        double r9830586 = r9830583 * r9830585;
        double r9830587 = r9830582 + r9830586;
        double r9830588 = -307507200.0;
        double r9830589 = r9830585 * r9830571;
        double r9830590 = r9830589 * r9830571;
        double r9830591 = r9830588 * r9830590;
        double r9830592 = r9830587 + r9830591;
        double r9830593 = 33546240.0;
        double r9830594 = r9830590 * r9830571;
        double r9830595 = r9830594 * r9830571;
        double r9830596 = r9830593 * r9830595;
        double r9830597 = r9830592 + r9830596;
        double r9830598 = -1720320.0;
        double r9830599 = r9830595 * r9830571;
        double r9830600 = r9830599 * r9830571;
        double r9830601 = r9830598 * r9830600;
        double r9830602 = r9830597 + r9830601;
        double r9830603 = 32768.0;
        double r9830604 = r9830600 * r9830571;
        double r9830605 = r9830604 * r9830571;
        double r9830606 = r9830603 * r9830605;
        double r9830607 = r9830602 + r9830606;
        return r9830607;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9830608, r9830609, r9830610, r9830611, r9830612, r9830613, r9830614, r9830615, r9830616, r9830617, r9830618, r9830619, r9830620, r9830621, r9830622, r9830623, r9830624, r9830625, r9830626, r9830627, r9830628, r9830629, r9830630, r9830631, r9830632, r9830633, r9830634, r9830635, r9830636, r9830637, r9830638, r9830639, r9830640, r9830641, r9830642, r9830643, r9830644, r9830645;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9830608, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r9830609);
        mpfr_init(r9830610);
        mpfr_init_set_str(r9830611, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r9830612);
        mpfr_init(r9830613);
        mpfr_init(r9830614);
        mpfr_init(r9830615);
        mpfr_init_set_str(r9830616, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r9830617);
        mpfr_init(r9830618);
        mpfr_init(r9830619);
        mpfr_init(r9830620);
        mpfr_init_set_str(r9830621, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r9830622);
        mpfr_init(r9830623);
        mpfr_init(r9830624);
        mpfr_init(r9830625);
        mpfr_init_set_str(r9830626, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r9830627);
        mpfr_init(r9830628);
        mpfr_init(r9830629);
        mpfr_init(r9830630);
        mpfr_init_set_str(r9830631, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r9830632);
        mpfr_init(r9830633);
        mpfr_init(r9830634);
        mpfr_init(r9830635);
        mpfr_init_set_str(r9830636, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r9830637);
        mpfr_init(r9830638);
        mpfr_init(r9830639);
        mpfr_init(r9830640);
        mpfr_init_set_str(r9830641, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r9830642);
        mpfr_init(r9830643);
        mpfr_init(r9830644);
        mpfr_init(r9830645);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9830609, x, MPFR_RNDN);
        mpfr_mul(r9830610, r9830608, r9830609, MPFR_RNDN);
        ;
        mpfr_mul(r9830612, r9830609, r9830609, MPFR_RNDN);
        mpfr_mul(r9830613, r9830612, r9830609, MPFR_RNDN);
        mpfr_mul(r9830614, r9830611, r9830613, MPFR_RNDN);
        mpfr_add(r9830615, r9830610, r9830614, MPFR_RNDN);
        ;
        mpfr_mul(r9830617, r9830613, r9830609, MPFR_RNDN);
        mpfr_mul(r9830618, r9830617, r9830609, MPFR_RNDN);
        mpfr_mul(r9830619, r9830616, r9830618, MPFR_RNDN);
        mpfr_add(r9830620, r9830615, r9830619, MPFR_RNDN);
        ;
        mpfr_mul(r9830622, r9830618, r9830609, MPFR_RNDN);
        mpfr_mul(r9830623, r9830622, r9830609, MPFR_RNDN);
        mpfr_mul(r9830624, r9830621, r9830623, MPFR_RNDN);
        mpfr_add(r9830625, r9830620, r9830624, MPFR_RNDN);
        ;
        mpfr_mul(r9830627, r9830623, r9830609, MPFR_RNDN);
        mpfr_mul(r9830628, r9830627, r9830609, MPFR_RNDN);
        mpfr_mul(r9830629, r9830626, r9830628, MPFR_RNDN);
        mpfr_add(r9830630, r9830625, r9830629, MPFR_RNDN);
        ;
        mpfr_mul(r9830632, r9830628, r9830609, MPFR_RNDN);
        mpfr_mul(r9830633, r9830632, r9830609, MPFR_RNDN);
        mpfr_mul(r9830634, r9830631, r9830633, MPFR_RNDN);
        mpfr_add(r9830635, r9830630, r9830634, MPFR_RNDN);
        ;
        mpfr_mul(r9830637, r9830633, r9830609, MPFR_RNDN);
        mpfr_mul(r9830638, r9830637, r9830609, MPFR_RNDN);
        mpfr_mul(r9830639, r9830636, r9830638, MPFR_RNDN);
        mpfr_add(r9830640, r9830635, r9830639, MPFR_RNDN);
        ;
        mpfr_mul(r9830642, r9830638, r9830609, MPFR_RNDN);
        mpfr_mul(r9830643, r9830642, r9830609, MPFR_RNDN);
        mpfr_mul(r9830644, r9830641, r9830643, MPFR_RNDN);
        mpfr_add(r9830645, r9830640, r9830644, MPFR_RNDN);
        return mpfr_get_d(r9830645, MPFR_RNDN);
}

static mpfr_t r9830646, r9830647, r9830648, r9830649, r9830650, r9830651, r9830652, r9830653, r9830654, r9830655, r9830656, r9830657, r9830658, r9830659, r9830660, r9830661, r9830662, r9830663, r9830664, r9830665, r9830666, r9830667, r9830668, r9830669, r9830670, r9830671, r9830672, r9830673, r9830674, r9830675, r9830676, r9830677, r9830678, r9830679, r9830680, r9830681, r9830682, r9830683;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9830646, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r9830647);
        mpfr_init(r9830648);
        mpfr_init_set_str(r9830649, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r9830650);
        mpfr_init(r9830651);
        mpfr_init(r9830652);
        mpfr_init(r9830653);
        mpfr_init_set_str(r9830654, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r9830655);
        mpfr_init(r9830656);
        mpfr_init(r9830657);
        mpfr_init(r9830658);
        mpfr_init_set_str(r9830659, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r9830660);
        mpfr_init(r9830661);
        mpfr_init(r9830662);
        mpfr_init(r9830663);
        mpfr_init_set_str(r9830664, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r9830665);
        mpfr_init(r9830666);
        mpfr_init(r9830667);
        mpfr_init(r9830668);
        mpfr_init_set_str(r9830669, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r9830670);
        mpfr_init(r9830671);
        mpfr_init(r9830672);
        mpfr_init(r9830673);
        mpfr_init_set_str(r9830674, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r9830675);
        mpfr_init(r9830676);
        mpfr_init(r9830677);
        mpfr_init(r9830678);
        mpfr_init_set_str(r9830679, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r9830680);
        mpfr_init(r9830681);
        mpfr_init(r9830682);
        mpfr_init(r9830683);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9830647, x, MPFR_RNDN);
        mpfr_mul(r9830648, r9830646, r9830647, MPFR_RNDN);
        ;
        mpfr_mul(r9830650, r9830647, r9830647, MPFR_RNDN);
        mpfr_mul(r9830651, r9830650, r9830647, MPFR_RNDN);
        mpfr_mul(r9830652, r9830649, r9830651, MPFR_RNDN);
        mpfr_add(r9830653, r9830648, r9830652, MPFR_RNDN);
        ;
        mpfr_mul(r9830655, r9830651, r9830647, MPFR_RNDN);
        mpfr_mul(r9830656, r9830655, r9830647, MPFR_RNDN);
        mpfr_mul(r9830657, r9830654, r9830656, MPFR_RNDN);
        mpfr_add(r9830658, r9830653, r9830657, MPFR_RNDN);
        ;
        mpfr_mul(r9830660, r9830656, r9830647, MPFR_RNDN);
        mpfr_mul(r9830661, r9830660, r9830647, MPFR_RNDN);
        mpfr_mul(r9830662, r9830659, r9830661, MPFR_RNDN);
        mpfr_add(r9830663, r9830658, r9830662, MPFR_RNDN);
        ;
        mpfr_mul(r9830665, r9830661, r9830647, MPFR_RNDN);
        mpfr_mul(r9830666, r9830665, r9830647, MPFR_RNDN);
        mpfr_mul(r9830667, r9830664, r9830666, MPFR_RNDN);
        mpfr_add(r9830668, r9830663, r9830667, MPFR_RNDN);
        ;
        mpfr_mul(r9830670, r9830666, r9830647, MPFR_RNDN);
        mpfr_mul(r9830671, r9830670, r9830647, MPFR_RNDN);
        mpfr_mul(r9830672, r9830669, r9830671, MPFR_RNDN);
        mpfr_add(r9830673, r9830668, r9830672, MPFR_RNDN);
        ;
        mpfr_mul(r9830675, r9830671, r9830647, MPFR_RNDN);
        mpfr_mul(r9830676, r9830675, r9830647, MPFR_RNDN);
        mpfr_mul(r9830677, r9830674, r9830676, MPFR_RNDN);
        mpfr_add(r9830678, r9830673, r9830677, MPFR_RNDN);
        ;
        mpfr_mul(r9830680, r9830676, r9830647, MPFR_RNDN);
        mpfr_mul(r9830681, r9830680, r9830647, MPFR_RNDN);
        mpfr_mul(r9830682, r9830679, r9830681, MPFR_RNDN);
        mpfr_add(r9830683, r9830678, r9830682, MPFR_RNDN);
        return mpfr_get_d(r9830683, MPFR_RNDN);
}

static mpfr_t r9830684, r9830685, r9830686, r9830687, r9830688, r9830689, r9830690, r9830691, r9830692, r9830693, r9830694, r9830695, r9830696, r9830697, r9830698, r9830699, r9830700, r9830701, r9830702, r9830703, r9830704, r9830705, r9830706, r9830707, r9830708, r9830709, r9830710, r9830711, r9830712, r9830713, r9830714, r9830715, r9830716, r9830717, r9830718, r9830719, r9830720, r9830721;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9830684, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r9830685);
        mpfr_init(r9830686);
        mpfr_init_set_str(r9830687, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r9830688);
        mpfr_init(r9830689);
        mpfr_init(r9830690);
        mpfr_init(r9830691);
        mpfr_init_set_str(r9830692, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r9830693);
        mpfr_init(r9830694);
        mpfr_init(r9830695);
        mpfr_init(r9830696);
        mpfr_init_set_str(r9830697, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r9830698);
        mpfr_init(r9830699);
        mpfr_init(r9830700);
        mpfr_init(r9830701);
        mpfr_init_set_str(r9830702, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r9830703);
        mpfr_init(r9830704);
        mpfr_init(r9830705);
        mpfr_init(r9830706);
        mpfr_init_set_str(r9830707, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r9830708);
        mpfr_init(r9830709);
        mpfr_init(r9830710);
        mpfr_init(r9830711);
        mpfr_init_set_str(r9830712, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r9830713);
        mpfr_init(r9830714);
        mpfr_init(r9830715);
        mpfr_init(r9830716);
        mpfr_init_set_str(r9830717, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r9830718);
        mpfr_init(r9830719);
        mpfr_init(r9830720);
        mpfr_init(r9830721);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9830685, x, MPFR_RNDN);
        mpfr_mul(r9830686, r9830684, r9830685, MPFR_RNDN);
        ;
        mpfr_mul(r9830688, r9830685, r9830685, MPFR_RNDN);
        mpfr_mul(r9830689, r9830688, r9830685, MPFR_RNDN);
        mpfr_mul(r9830690, r9830687, r9830689, MPFR_RNDN);
        mpfr_add(r9830691, r9830686, r9830690, MPFR_RNDN);
        ;
        mpfr_mul(r9830693, r9830689, r9830685, MPFR_RNDN);
        mpfr_mul(r9830694, r9830693, r9830685, MPFR_RNDN);
        mpfr_mul(r9830695, r9830692, r9830694, MPFR_RNDN);
        mpfr_add(r9830696, r9830691, r9830695, MPFR_RNDN);
        ;
        mpfr_mul(r9830698, r9830694, r9830685, MPFR_RNDN);
        mpfr_mul(r9830699, r9830698, r9830685, MPFR_RNDN);
        mpfr_mul(r9830700, r9830697, r9830699, MPFR_RNDN);
        mpfr_add(r9830701, r9830696, r9830700, MPFR_RNDN);
        ;
        mpfr_mul(r9830703, r9830699, r9830685, MPFR_RNDN);
        mpfr_mul(r9830704, r9830703, r9830685, MPFR_RNDN);
        mpfr_mul(r9830705, r9830702, r9830704, MPFR_RNDN);
        mpfr_add(r9830706, r9830701, r9830705, MPFR_RNDN);
        ;
        mpfr_mul(r9830708, r9830704, r9830685, MPFR_RNDN);
        mpfr_mul(r9830709, r9830708, r9830685, MPFR_RNDN);
        mpfr_mul(r9830710, r9830707, r9830709, MPFR_RNDN);
        mpfr_add(r9830711, r9830706, r9830710, MPFR_RNDN);
        ;
        mpfr_mul(r9830713, r9830709, r9830685, MPFR_RNDN);
        mpfr_mul(r9830714, r9830713, r9830685, MPFR_RNDN);
        mpfr_mul(r9830715, r9830712, r9830714, MPFR_RNDN);
        mpfr_add(r9830716, r9830711, r9830715, MPFR_RNDN);
        ;
        mpfr_mul(r9830718, r9830714, r9830685, MPFR_RNDN);
        mpfr_mul(r9830719, r9830718, r9830685, MPFR_RNDN);
        mpfr_mul(r9830720, r9830717, r9830719, MPFR_RNDN);
        mpfr_add(r9830721, r9830716, r9830720, MPFR_RNDN);
        return mpfr_get_d(r9830721, MPFR_RNDN);
}

