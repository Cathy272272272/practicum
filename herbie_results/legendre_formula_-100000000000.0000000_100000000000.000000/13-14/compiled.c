#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r6766471 = -0.209473;
        float r6766472 = 21.994629;
        float r6766473 = x;
        float r6766474 = r6766473 * r6766473;
        float r6766475 = r6766472 * r6766474;
        float r6766476 = r6766471 + r6766475;
        float r6766477 = -373.908691;
        float r6766478 = r6766474 * r6766473;
        float r6766479 = r6766478 * r6766473;
        float r6766480 = r6766477 * r6766479;
        float r6766481 = r6766476 + r6766480;
        float r6766482 = 2368.088379;
        float r6766483 = r6766479 * r6766473;
        float r6766484 = r6766483 * r6766473;
        float r6766485 = r6766482 * r6766484;
        float r6766486 = r6766481 + r6766485;
        float r6766487 = -7104.265137;
        float r6766488 = r6766484 * r6766473;
        float r6766489 = r6766488 * r6766473;
        float r6766490 = r6766487 * r6766489;
        float r6766491 = r6766486 + r6766490;
        float r6766492 = 10893.206543;
        float r6766493 = r6766489 * r6766473;
        float r6766494 = r6766493 * r6766473;
        float r6766495 = r6766492 * r6766494;
        float r6766496 = r6766491 + r6766495;
        float r6766497 = -8252.429199;
        float r6766498 = r6766494 * r6766473;
        float r6766499 = r6766498 * r6766473;
        float r6766500 = r6766497 * r6766499;
        float r6766501 = r6766496 + r6766500;
        float r6766502 = 2448.522949;
        float r6766503 = r6766499 * r6766473;
        float r6766504 = r6766503 * r6766473;
        float r6766505 = r6766502 * r6766504;
        float r6766506 = r6766501 + r6766505;
        return r6766506;
}

double f_id(double x) {
        double r6766507 = -0.209473;
        double r6766508 = 21.994629;
        double r6766509 = x;
        double r6766510 = r6766509 * r6766509;
        double r6766511 = r6766508 * r6766510;
        double r6766512 = r6766507 + r6766511;
        double r6766513 = -373.908691;
        double r6766514 = r6766510 * r6766509;
        double r6766515 = r6766514 * r6766509;
        double r6766516 = r6766513 * r6766515;
        double r6766517 = r6766512 + r6766516;
        double r6766518 = 2368.088379;
        double r6766519 = r6766515 * r6766509;
        double r6766520 = r6766519 * r6766509;
        double r6766521 = r6766518 * r6766520;
        double r6766522 = r6766517 + r6766521;
        double r6766523 = -7104.265137;
        double r6766524 = r6766520 * r6766509;
        double r6766525 = r6766524 * r6766509;
        double r6766526 = r6766523 * r6766525;
        double r6766527 = r6766522 + r6766526;
        double r6766528 = 10893.206543;
        double r6766529 = r6766525 * r6766509;
        double r6766530 = r6766529 * r6766509;
        double r6766531 = r6766528 * r6766530;
        double r6766532 = r6766527 + r6766531;
        double r6766533 = -8252.429199;
        double r6766534 = r6766530 * r6766509;
        double r6766535 = r6766534 * r6766509;
        double r6766536 = r6766533 * r6766535;
        double r6766537 = r6766532 + r6766536;
        double r6766538 = 2448.522949;
        double r6766539 = r6766535 * r6766509;
        double r6766540 = r6766539 * r6766509;
        double r6766541 = r6766538 * r6766540;
        double r6766542 = r6766537 + r6766541;
        return r6766542;
}


double f_of(float x) {
        float r6766543 = -0.209473;
        float r6766544 = 21.994629;
        float r6766545 = x;
        float r6766546 = r6766545 * r6766545;
        float r6766547 = r6766544 * r6766546;
        float r6766548 = r6766543 + r6766547;
        float r6766549 = -373.908691;
        float r6766550 = r6766546 * r6766545;
        float r6766551 = r6766550 * r6766545;
        float r6766552 = r6766549 * r6766551;
        float r6766553 = r6766548 + r6766552;
        float r6766554 = 2368.088379;
        float r6766555 = r6766551 * r6766545;
        float r6766556 = r6766555 * r6766545;
        float r6766557 = r6766554 * r6766556;
        float r6766558 = r6766553 + r6766557;
        float r6766559 = -7104.265137;
        float r6766560 = r6766556 * r6766545;
        float r6766561 = r6766560 * r6766545;
        float r6766562 = r6766559 * r6766561;
        float r6766563 = r6766558 + r6766562;
        float r6766564 = 10893.206543;
        float r6766565 = r6766561 * r6766545;
        float r6766566 = r6766565 * r6766545;
        float r6766567 = r6766564 * r6766566;
        float r6766568 = r6766563 + r6766567;
        float r6766569 = -8252.429199;
        float r6766570 = r6766566 * r6766545;
        float r6766571 = r6766570 * r6766545;
        float r6766572 = r6766569 * r6766571;
        float r6766573 = r6766568 + r6766572;
        float r6766574 = 2448.522949;
        float r6766575 = r6766571 * r6766545;
        float r6766576 = r6766575 * r6766545;
        float r6766577 = r6766574 * r6766576;
        float r6766578 = r6766573 + r6766577;
        return r6766578;
}

double f_od(double x) {
        double r6766579 = -0.209473;
        double r6766580 = 21.994629;
        double r6766581 = x;
        double r6766582 = r6766581 * r6766581;
        double r6766583 = r6766580 * r6766582;
        double r6766584 = r6766579 + r6766583;
        double r6766585 = -373.908691;
        double r6766586 = r6766582 * r6766581;
        double r6766587 = r6766586 * r6766581;
        double r6766588 = r6766585 * r6766587;
        double r6766589 = r6766584 + r6766588;
        double r6766590 = 2368.088379;
        double r6766591 = r6766587 * r6766581;
        double r6766592 = r6766591 * r6766581;
        double r6766593 = r6766590 * r6766592;
        double r6766594 = r6766589 + r6766593;
        double r6766595 = -7104.265137;
        double r6766596 = r6766592 * r6766581;
        double r6766597 = r6766596 * r6766581;
        double r6766598 = r6766595 * r6766597;
        double r6766599 = r6766594 + r6766598;
        double r6766600 = 10893.206543;
        double r6766601 = r6766597 * r6766581;
        double r6766602 = r6766601 * r6766581;
        double r6766603 = r6766600 * r6766602;
        double r6766604 = r6766599 + r6766603;
        double r6766605 = -8252.429199;
        double r6766606 = r6766602 * r6766581;
        double r6766607 = r6766606 * r6766581;
        double r6766608 = r6766605 * r6766607;
        double r6766609 = r6766604 + r6766608;
        double r6766610 = 2448.522949;
        double r6766611 = r6766607 * r6766581;
        double r6766612 = r6766611 * r6766581;
        double r6766613 = r6766610 * r6766612;
        double r6766614 = r6766609 + r6766613;
        return r6766614;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6766615, r6766616, r6766617, r6766618, r6766619, r6766620, r6766621, r6766622, r6766623, r6766624, r6766625, r6766626, r6766627, r6766628, r6766629, r6766630, r6766631, r6766632, r6766633, r6766634, r6766635, r6766636, r6766637, r6766638, r6766639, r6766640, r6766641, r6766642, r6766643, r6766644, r6766645, r6766646, r6766647, r6766648, r6766649, r6766650;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6766615, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766616, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6766617);
        mpfr_init(r6766618);
        mpfr_init(r6766619);
        mpfr_init(r6766620);
        mpfr_init_set_str(r6766621, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6766622);
        mpfr_init(r6766623);
        mpfr_init(r6766624);
        mpfr_init(r6766625);
        mpfr_init_set_str(r6766626, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6766627);
        mpfr_init(r6766628);
        mpfr_init(r6766629);
        mpfr_init(r6766630);
        mpfr_init_set_str(r6766631, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6766632);
        mpfr_init(r6766633);
        mpfr_init(r6766634);
        mpfr_init(r6766635);
        mpfr_init_set_str(r6766636, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6766637);
        mpfr_init(r6766638);
        mpfr_init(r6766639);
        mpfr_init(r6766640);
        mpfr_init_set_str(r6766641, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6766642);
        mpfr_init(r6766643);
        mpfr_init(r6766644);
        mpfr_init(r6766645);
        mpfr_init_set_str(r6766646, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6766647);
        mpfr_init(r6766648);
        mpfr_init(r6766649);
        mpfr_init(r6766650);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6766617, x, MPFR_RNDN);
        mpfr_mul(r6766618, r6766617, r6766617, MPFR_RNDN);
        mpfr_mul(r6766619, r6766616, r6766618, MPFR_RNDN);
        mpfr_add(r6766620, r6766615, r6766619, MPFR_RNDN);
        ;
        mpfr_mul(r6766622, r6766618, r6766617, MPFR_RNDN);
        mpfr_mul(r6766623, r6766622, r6766617, MPFR_RNDN);
        mpfr_mul(r6766624, r6766621, r6766623, MPFR_RNDN);
        mpfr_add(r6766625, r6766620, r6766624, MPFR_RNDN);
        ;
        mpfr_mul(r6766627, r6766623, r6766617, MPFR_RNDN);
        mpfr_mul(r6766628, r6766627, r6766617, MPFR_RNDN);
        mpfr_mul(r6766629, r6766626, r6766628, MPFR_RNDN);
        mpfr_add(r6766630, r6766625, r6766629, MPFR_RNDN);
        ;
        mpfr_mul(r6766632, r6766628, r6766617, MPFR_RNDN);
        mpfr_mul(r6766633, r6766632, r6766617, MPFR_RNDN);
        mpfr_mul(r6766634, r6766631, r6766633, MPFR_RNDN);
        mpfr_add(r6766635, r6766630, r6766634, MPFR_RNDN);
        ;
        mpfr_mul(r6766637, r6766633, r6766617, MPFR_RNDN);
        mpfr_mul(r6766638, r6766637, r6766617, MPFR_RNDN);
        mpfr_mul(r6766639, r6766636, r6766638, MPFR_RNDN);
        mpfr_add(r6766640, r6766635, r6766639, MPFR_RNDN);
        ;
        mpfr_mul(r6766642, r6766638, r6766617, MPFR_RNDN);
        mpfr_mul(r6766643, r6766642, r6766617, MPFR_RNDN);
        mpfr_mul(r6766644, r6766641, r6766643, MPFR_RNDN);
        mpfr_add(r6766645, r6766640, r6766644, MPFR_RNDN);
        ;
        mpfr_mul(r6766647, r6766643, r6766617, MPFR_RNDN);
        mpfr_mul(r6766648, r6766647, r6766617, MPFR_RNDN);
        mpfr_mul(r6766649, r6766646, r6766648, MPFR_RNDN);
        mpfr_add(r6766650, r6766645, r6766649, MPFR_RNDN);
        return mpfr_get_d(r6766650, MPFR_RNDN);
}

static mpfr_t r6766651, r6766652, r6766653, r6766654, r6766655, r6766656, r6766657, r6766658, r6766659, r6766660, r6766661, r6766662, r6766663, r6766664, r6766665, r6766666, r6766667, r6766668, r6766669, r6766670, r6766671, r6766672, r6766673, r6766674, r6766675, r6766676, r6766677, r6766678, r6766679, r6766680, r6766681, r6766682, r6766683, r6766684, r6766685, r6766686;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6766651, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766652, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6766653);
        mpfr_init(r6766654);
        mpfr_init(r6766655);
        mpfr_init(r6766656);
        mpfr_init_set_str(r6766657, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6766658);
        mpfr_init(r6766659);
        mpfr_init(r6766660);
        mpfr_init(r6766661);
        mpfr_init_set_str(r6766662, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6766663);
        mpfr_init(r6766664);
        mpfr_init(r6766665);
        mpfr_init(r6766666);
        mpfr_init_set_str(r6766667, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6766668);
        mpfr_init(r6766669);
        mpfr_init(r6766670);
        mpfr_init(r6766671);
        mpfr_init_set_str(r6766672, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6766673);
        mpfr_init(r6766674);
        mpfr_init(r6766675);
        mpfr_init(r6766676);
        mpfr_init_set_str(r6766677, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6766678);
        mpfr_init(r6766679);
        mpfr_init(r6766680);
        mpfr_init(r6766681);
        mpfr_init_set_str(r6766682, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6766683);
        mpfr_init(r6766684);
        mpfr_init(r6766685);
        mpfr_init(r6766686);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6766653, x, MPFR_RNDN);
        mpfr_mul(r6766654, r6766653, r6766653, MPFR_RNDN);
        mpfr_mul(r6766655, r6766652, r6766654, MPFR_RNDN);
        mpfr_add(r6766656, r6766651, r6766655, MPFR_RNDN);
        ;
        mpfr_mul(r6766658, r6766654, r6766653, MPFR_RNDN);
        mpfr_mul(r6766659, r6766658, r6766653, MPFR_RNDN);
        mpfr_mul(r6766660, r6766657, r6766659, MPFR_RNDN);
        mpfr_add(r6766661, r6766656, r6766660, MPFR_RNDN);
        ;
        mpfr_mul(r6766663, r6766659, r6766653, MPFR_RNDN);
        mpfr_mul(r6766664, r6766663, r6766653, MPFR_RNDN);
        mpfr_mul(r6766665, r6766662, r6766664, MPFR_RNDN);
        mpfr_add(r6766666, r6766661, r6766665, MPFR_RNDN);
        ;
        mpfr_mul(r6766668, r6766664, r6766653, MPFR_RNDN);
        mpfr_mul(r6766669, r6766668, r6766653, MPFR_RNDN);
        mpfr_mul(r6766670, r6766667, r6766669, MPFR_RNDN);
        mpfr_add(r6766671, r6766666, r6766670, MPFR_RNDN);
        ;
        mpfr_mul(r6766673, r6766669, r6766653, MPFR_RNDN);
        mpfr_mul(r6766674, r6766673, r6766653, MPFR_RNDN);
        mpfr_mul(r6766675, r6766672, r6766674, MPFR_RNDN);
        mpfr_add(r6766676, r6766671, r6766675, MPFR_RNDN);
        ;
        mpfr_mul(r6766678, r6766674, r6766653, MPFR_RNDN);
        mpfr_mul(r6766679, r6766678, r6766653, MPFR_RNDN);
        mpfr_mul(r6766680, r6766677, r6766679, MPFR_RNDN);
        mpfr_add(r6766681, r6766676, r6766680, MPFR_RNDN);
        ;
        mpfr_mul(r6766683, r6766679, r6766653, MPFR_RNDN);
        mpfr_mul(r6766684, r6766683, r6766653, MPFR_RNDN);
        mpfr_mul(r6766685, r6766682, r6766684, MPFR_RNDN);
        mpfr_add(r6766686, r6766681, r6766685, MPFR_RNDN);
        return mpfr_get_d(r6766686, MPFR_RNDN);
}

static mpfr_t r6766687, r6766688, r6766689, r6766690, r6766691, r6766692, r6766693, r6766694, r6766695, r6766696, r6766697, r6766698, r6766699, r6766700, r6766701, r6766702, r6766703, r6766704, r6766705, r6766706, r6766707, r6766708, r6766709, r6766710, r6766711, r6766712, r6766713, r6766714, r6766715, r6766716, r6766717, r6766718, r6766719, r6766720, r6766721, r6766722;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6766687, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766688, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6766689);
        mpfr_init(r6766690);
        mpfr_init(r6766691);
        mpfr_init(r6766692);
        mpfr_init_set_str(r6766693, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6766694);
        mpfr_init(r6766695);
        mpfr_init(r6766696);
        mpfr_init(r6766697);
        mpfr_init_set_str(r6766698, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6766699);
        mpfr_init(r6766700);
        mpfr_init(r6766701);
        mpfr_init(r6766702);
        mpfr_init_set_str(r6766703, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6766704);
        mpfr_init(r6766705);
        mpfr_init(r6766706);
        mpfr_init(r6766707);
        mpfr_init_set_str(r6766708, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6766709);
        mpfr_init(r6766710);
        mpfr_init(r6766711);
        mpfr_init(r6766712);
        mpfr_init_set_str(r6766713, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6766714);
        mpfr_init(r6766715);
        mpfr_init(r6766716);
        mpfr_init(r6766717);
        mpfr_init_set_str(r6766718, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6766719);
        mpfr_init(r6766720);
        mpfr_init(r6766721);
        mpfr_init(r6766722);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6766689, x, MPFR_RNDN);
        mpfr_mul(r6766690, r6766689, r6766689, MPFR_RNDN);
        mpfr_mul(r6766691, r6766688, r6766690, MPFR_RNDN);
        mpfr_add(r6766692, r6766687, r6766691, MPFR_RNDN);
        ;
        mpfr_mul(r6766694, r6766690, r6766689, MPFR_RNDN);
        mpfr_mul(r6766695, r6766694, r6766689, MPFR_RNDN);
        mpfr_mul(r6766696, r6766693, r6766695, MPFR_RNDN);
        mpfr_add(r6766697, r6766692, r6766696, MPFR_RNDN);
        ;
        mpfr_mul(r6766699, r6766695, r6766689, MPFR_RNDN);
        mpfr_mul(r6766700, r6766699, r6766689, MPFR_RNDN);
        mpfr_mul(r6766701, r6766698, r6766700, MPFR_RNDN);
        mpfr_add(r6766702, r6766697, r6766701, MPFR_RNDN);
        ;
        mpfr_mul(r6766704, r6766700, r6766689, MPFR_RNDN);
        mpfr_mul(r6766705, r6766704, r6766689, MPFR_RNDN);
        mpfr_mul(r6766706, r6766703, r6766705, MPFR_RNDN);
        mpfr_add(r6766707, r6766702, r6766706, MPFR_RNDN);
        ;
        mpfr_mul(r6766709, r6766705, r6766689, MPFR_RNDN);
        mpfr_mul(r6766710, r6766709, r6766689, MPFR_RNDN);
        mpfr_mul(r6766711, r6766708, r6766710, MPFR_RNDN);
        mpfr_add(r6766712, r6766707, r6766711, MPFR_RNDN);
        ;
        mpfr_mul(r6766714, r6766710, r6766689, MPFR_RNDN);
        mpfr_mul(r6766715, r6766714, r6766689, MPFR_RNDN);
        mpfr_mul(r6766716, r6766713, r6766715, MPFR_RNDN);
        mpfr_add(r6766717, r6766712, r6766716, MPFR_RNDN);
        ;
        mpfr_mul(r6766719, r6766715, r6766689, MPFR_RNDN);
        mpfr_mul(r6766720, r6766719, r6766689, MPFR_RNDN);
        mpfr_mul(r6766721, r6766718, r6766720, MPFR_RNDN);
        mpfr_add(r6766722, r6766717, r6766721, MPFR_RNDN);
        return mpfr_get_d(r6766722, MPFR_RNDN);
}

