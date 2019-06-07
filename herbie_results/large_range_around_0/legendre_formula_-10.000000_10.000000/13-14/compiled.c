#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r8101493 = -0.209473;
        float r8101494 = 21.994629;
        float r8101495 = x;
        float r8101496 = r8101495 * r8101495;
        float r8101497 = r8101494 * r8101496;
        float r8101498 = r8101493 + r8101497;
        float r8101499 = -373.908691;
        float r8101500 = r8101496 * r8101495;
        float r8101501 = r8101500 * r8101495;
        float r8101502 = r8101499 * r8101501;
        float r8101503 = r8101498 + r8101502;
        float r8101504 = 2368.088379;
        float r8101505 = r8101501 * r8101495;
        float r8101506 = r8101505 * r8101495;
        float r8101507 = r8101504 * r8101506;
        float r8101508 = r8101503 + r8101507;
        float r8101509 = -7104.265137;
        float r8101510 = r8101506 * r8101495;
        float r8101511 = r8101510 * r8101495;
        float r8101512 = r8101509 * r8101511;
        float r8101513 = r8101508 + r8101512;
        float r8101514 = 10893.206543;
        float r8101515 = r8101511 * r8101495;
        float r8101516 = r8101515 * r8101495;
        float r8101517 = r8101514 * r8101516;
        float r8101518 = r8101513 + r8101517;
        float r8101519 = -8252.429199;
        float r8101520 = r8101516 * r8101495;
        float r8101521 = r8101520 * r8101495;
        float r8101522 = r8101519 * r8101521;
        float r8101523 = r8101518 + r8101522;
        float r8101524 = 2448.522949;
        float r8101525 = r8101521 * r8101495;
        float r8101526 = r8101525 * r8101495;
        float r8101527 = r8101524 * r8101526;
        float r8101528 = r8101523 + r8101527;
        return r8101528;
}

double f_id(double x) {
        double r8101529 = -0.209473;
        double r8101530 = 21.994629;
        double r8101531 = x;
        double r8101532 = r8101531 * r8101531;
        double r8101533 = r8101530 * r8101532;
        double r8101534 = r8101529 + r8101533;
        double r8101535 = -373.908691;
        double r8101536 = r8101532 * r8101531;
        double r8101537 = r8101536 * r8101531;
        double r8101538 = r8101535 * r8101537;
        double r8101539 = r8101534 + r8101538;
        double r8101540 = 2368.088379;
        double r8101541 = r8101537 * r8101531;
        double r8101542 = r8101541 * r8101531;
        double r8101543 = r8101540 * r8101542;
        double r8101544 = r8101539 + r8101543;
        double r8101545 = -7104.265137;
        double r8101546 = r8101542 * r8101531;
        double r8101547 = r8101546 * r8101531;
        double r8101548 = r8101545 * r8101547;
        double r8101549 = r8101544 + r8101548;
        double r8101550 = 10893.206543;
        double r8101551 = r8101547 * r8101531;
        double r8101552 = r8101551 * r8101531;
        double r8101553 = r8101550 * r8101552;
        double r8101554 = r8101549 + r8101553;
        double r8101555 = -8252.429199;
        double r8101556 = r8101552 * r8101531;
        double r8101557 = r8101556 * r8101531;
        double r8101558 = r8101555 * r8101557;
        double r8101559 = r8101554 + r8101558;
        double r8101560 = 2448.522949;
        double r8101561 = r8101557 * r8101531;
        double r8101562 = r8101561 * r8101531;
        double r8101563 = r8101560 * r8101562;
        double r8101564 = r8101559 + r8101563;
        return r8101564;
}


double f_of(float x) {
        float r8101565 = 10893.206543;
        float r8101566 = x;
        float r8101567 = r8101566 * r8101566;
        float r8101568 = r8101565 * r8101567;
        float r8101569 = r8101567 * r8101567;
        float r8101570 = r8101569 * r8101569;
        float r8101571 = r8101568 * r8101570;
        float r8101572 = -7104.265137;
        float r8101573 = 8;
        float r8101574 = pow(r8101566, r8101573);
        float r8101575 = r8101572 * r8101574;
        float r8101576 = r8101571 + r8101575;
        float r8101577 = r8101570 * r8101569;
        float r8101578 = -8252.429199;
        float r8101579 = 2448.522949;
        float r8101580 = r8101579 * r8101566;
        float r8101581 = r8101566 * r8101580;
        float r8101582 = r8101578 + r8101581;
        float r8101583 = r8101577 * r8101582;
        float r8101584 = r8101576 + r8101583;
        float r8101585 = -373.908691;
        float r8101586 = 2368.088379;
        float r8101587 = r8101567 * r8101586;
        float r8101588 = r8101585 + r8101587;
        float r8101589 = r8101569 * r8101588;
        float r8101590 = 21.994629;
        float r8101591 = r8101567 * r8101590;
        float r8101592 = -0.209473;
        float r8101593 = r8101591 + r8101592;
        float r8101594 = r8101589 + r8101593;
        float r8101595 = r8101584 + r8101594;
        return r8101595;
}

double f_od(double x) {
        double r8101596 = 10893.206543;
        double r8101597 = x;
        double r8101598 = r8101597 * r8101597;
        double r8101599 = r8101596 * r8101598;
        double r8101600 = r8101598 * r8101598;
        double r8101601 = r8101600 * r8101600;
        double r8101602 = r8101599 * r8101601;
        double r8101603 = -7104.265137;
        double r8101604 = 8;
        double r8101605 = pow(r8101597, r8101604);
        double r8101606 = r8101603 * r8101605;
        double r8101607 = r8101602 + r8101606;
        double r8101608 = r8101601 * r8101600;
        double r8101609 = -8252.429199;
        double r8101610 = 2448.522949;
        double r8101611 = r8101610 * r8101597;
        double r8101612 = r8101597 * r8101611;
        double r8101613 = r8101609 + r8101612;
        double r8101614 = r8101608 * r8101613;
        double r8101615 = r8101607 + r8101614;
        double r8101616 = -373.908691;
        double r8101617 = 2368.088379;
        double r8101618 = r8101598 * r8101617;
        double r8101619 = r8101616 + r8101618;
        double r8101620 = r8101600 * r8101619;
        double r8101621 = 21.994629;
        double r8101622 = r8101598 * r8101621;
        double r8101623 = -0.209473;
        double r8101624 = r8101622 + r8101623;
        double r8101625 = r8101620 + r8101624;
        double r8101626 = r8101615 + r8101625;
        return r8101626;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8101627, r8101628, r8101629, r8101630, r8101631, r8101632, r8101633, r8101634, r8101635, r8101636, r8101637, r8101638, r8101639, r8101640, r8101641, r8101642, r8101643, r8101644, r8101645, r8101646, r8101647, r8101648, r8101649, r8101650, r8101651, r8101652, r8101653, r8101654, r8101655, r8101656, r8101657, r8101658, r8101659, r8101660, r8101661, r8101662;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8101627, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101628, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r8101629);
        mpfr_init(r8101630);
        mpfr_init(r8101631);
        mpfr_init(r8101632);
        mpfr_init_set_str(r8101633, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r8101634);
        mpfr_init(r8101635);
        mpfr_init(r8101636);
        mpfr_init(r8101637);
        mpfr_init_set_str(r8101638, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r8101639);
        mpfr_init(r8101640);
        mpfr_init(r8101641);
        mpfr_init(r8101642);
        mpfr_init_set_str(r8101643, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r8101644);
        mpfr_init(r8101645);
        mpfr_init(r8101646);
        mpfr_init(r8101647);
        mpfr_init_set_str(r8101648, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r8101649);
        mpfr_init(r8101650);
        mpfr_init(r8101651);
        mpfr_init(r8101652);
        mpfr_init_set_str(r8101653, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r8101654);
        mpfr_init(r8101655);
        mpfr_init(r8101656);
        mpfr_init(r8101657);
        mpfr_init_set_str(r8101658, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r8101659);
        mpfr_init(r8101660);
        mpfr_init(r8101661);
        mpfr_init(r8101662);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8101629, x, MPFR_RNDN);
        mpfr_mul(r8101630, r8101629, r8101629, MPFR_RNDN);
        mpfr_mul(r8101631, r8101628, r8101630, MPFR_RNDN);
        mpfr_add(r8101632, r8101627, r8101631, MPFR_RNDN);
        ;
        mpfr_mul(r8101634, r8101630, r8101629, MPFR_RNDN);
        mpfr_mul(r8101635, r8101634, r8101629, MPFR_RNDN);
        mpfr_mul(r8101636, r8101633, r8101635, MPFR_RNDN);
        mpfr_add(r8101637, r8101632, r8101636, MPFR_RNDN);
        ;
        mpfr_mul(r8101639, r8101635, r8101629, MPFR_RNDN);
        mpfr_mul(r8101640, r8101639, r8101629, MPFR_RNDN);
        mpfr_mul(r8101641, r8101638, r8101640, MPFR_RNDN);
        mpfr_add(r8101642, r8101637, r8101641, MPFR_RNDN);
        ;
        mpfr_mul(r8101644, r8101640, r8101629, MPFR_RNDN);
        mpfr_mul(r8101645, r8101644, r8101629, MPFR_RNDN);
        mpfr_mul(r8101646, r8101643, r8101645, MPFR_RNDN);
        mpfr_add(r8101647, r8101642, r8101646, MPFR_RNDN);
        ;
        mpfr_mul(r8101649, r8101645, r8101629, MPFR_RNDN);
        mpfr_mul(r8101650, r8101649, r8101629, MPFR_RNDN);
        mpfr_mul(r8101651, r8101648, r8101650, MPFR_RNDN);
        mpfr_add(r8101652, r8101647, r8101651, MPFR_RNDN);
        ;
        mpfr_mul(r8101654, r8101650, r8101629, MPFR_RNDN);
        mpfr_mul(r8101655, r8101654, r8101629, MPFR_RNDN);
        mpfr_mul(r8101656, r8101653, r8101655, MPFR_RNDN);
        mpfr_add(r8101657, r8101652, r8101656, MPFR_RNDN);
        ;
        mpfr_mul(r8101659, r8101655, r8101629, MPFR_RNDN);
        mpfr_mul(r8101660, r8101659, r8101629, MPFR_RNDN);
        mpfr_mul(r8101661, r8101658, r8101660, MPFR_RNDN);
        mpfr_add(r8101662, r8101657, r8101661, MPFR_RNDN);
        return mpfr_get_d(r8101662, MPFR_RNDN);
}

static mpfr_t r8101663, r8101664, r8101665, r8101666, r8101667, r8101668, r8101669, r8101670, r8101671, r8101672, r8101673, r8101674, r8101675, r8101676, r8101677, r8101678, r8101679, r8101680, r8101681, r8101682, r8101683, r8101684, r8101685, r8101686, r8101687, r8101688, r8101689, r8101690, r8101691, r8101692, r8101693;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8101663, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r8101664);
        mpfr_init(r8101665);
        mpfr_init(r8101666);
        mpfr_init(r8101667);
        mpfr_init(r8101668);
        mpfr_init(r8101669);
        mpfr_init_set_str(r8101670, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101671, "8", 10, MPFR_RNDN);
        mpfr_init(r8101672);
        mpfr_init(r8101673);
        mpfr_init(r8101674);
        mpfr_init(r8101675);
        mpfr_init_set_str(r8101676, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101677, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r8101678);
        mpfr_init(r8101679);
        mpfr_init(r8101680);
        mpfr_init(r8101681);
        mpfr_init(r8101682);
        mpfr_init_set_str(r8101683, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101684, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r8101685);
        mpfr_init(r8101686);
        mpfr_init(r8101687);
        mpfr_init_set_str(r8101688, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r8101689);
        mpfr_init_set_str(r8101690, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r8101691);
        mpfr_init(r8101692);
        mpfr_init(r8101693);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8101664, x, MPFR_RNDN);
        mpfr_mul(r8101665, r8101664, r8101664, MPFR_RNDN);
        mpfr_mul(r8101666, r8101663, r8101665, MPFR_RNDN);
        mpfr_mul(r8101667, r8101665, r8101665, MPFR_RNDN);
        mpfr_mul(r8101668, r8101667, r8101667, MPFR_RNDN);
        mpfr_mul(r8101669, r8101666, r8101668, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8101672, r8101664, r8101671, MPFR_RNDN);
        mpfr_mul(r8101673, r8101670, r8101672, MPFR_RNDN);
        mpfr_add(r8101674, r8101669, r8101673, MPFR_RNDN);
        mpfr_mul(r8101675, r8101668, r8101667, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8101678, r8101677, r8101664, MPFR_RNDN);
        mpfr_mul(r8101679, r8101664, r8101678, MPFR_RNDN);
        mpfr_add(r8101680, r8101676, r8101679, MPFR_RNDN);
        mpfr_mul(r8101681, r8101675, r8101680, MPFR_RNDN);
        mpfr_add(r8101682, r8101674, r8101681, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8101685, r8101665, r8101684, MPFR_RNDN);
        mpfr_add(r8101686, r8101683, r8101685, MPFR_RNDN);
        mpfr_mul(r8101687, r8101667, r8101686, MPFR_RNDN);
        ;
        mpfr_mul(r8101689, r8101665, r8101688, MPFR_RNDN);
        ;
        mpfr_add(r8101691, r8101689, r8101690, MPFR_RNDN);
        mpfr_add(r8101692, r8101687, r8101691, MPFR_RNDN);
        mpfr_add(r8101693, r8101682, r8101692, MPFR_RNDN);
        return mpfr_get_d(r8101693, MPFR_RNDN);
}

static mpfr_t r8101694, r8101695, r8101696, r8101697, r8101698, r8101699, r8101700, r8101701, r8101702, r8101703, r8101704, r8101705, r8101706, r8101707, r8101708, r8101709, r8101710, r8101711, r8101712, r8101713, r8101714, r8101715, r8101716, r8101717, r8101718, r8101719, r8101720, r8101721, r8101722, r8101723, r8101724;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8101694, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r8101695);
        mpfr_init(r8101696);
        mpfr_init(r8101697);
        mpfr_init(r8101698);
        mpfr_init(r8101699);
        mpfr_init(r8101700);
        mpfr_init_set_str(r8101701, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101702, "8", 10, MPFR_RNDN);
        mpfr_init(r8101703);
        mpfr_init(r8101704);
        mpfr_init(r8101705);
        mpfr_init(r8101706);
        mpfr_init_set_str(r8101707, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101708, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r8101709);
        mpfr_init(r8101710);
        mpfr_init(r8101711);
        mpfr_init(r8101712);
        mpfr_init(r8101713);
        mpfr_init_set_str(r8101714, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101715, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r8101716);
        mpfr_init(r8101717);
        mpfr_init(r8101718);
        mpfr_init_set_str(r8101719, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r8101720);
        mpfr_init_set_str(r8101721, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r8101722);
        mpfr_init(r8101723);
        mpfr_init(r8101724);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8101695, x, MPFR_RNDN);
        mpfr_mul(r8101696, r8101695, r8101695, MPFR_RNDN);
        mpfr_mul(r8101697, r8101694, r8101696, MPFR_RNDN);
        mpfr_mul(r8101698, r8101696, r8101696, MPFR_RNDN);
        mpfr_mul(r8101699, r8101698, r8101698, MPFR_RNDN);
        mpfr_mul(r8101700, r8101697, r8101699, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8101703, r8101695, r8101702, MPFR_RNDN);
        mpfr_mul(r8101704, r8101701, r8101703, MPFR_RNDN);
        mpfr_add(r8101705, r8101700, r8101704, MPFR_RNDN);
        mpfr_mul(r8101706, r8101699, r8101698, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8101709, r8101708, r8101695, MPFR_RNDN);
        mpfr_mul(r8101710, r8101695, r8101709, MPFR_RNDN);
        mpfr_add(r8101711, r8101707, r8101710, MPFR_RNDN);
        mpfr_mul(r8101712, r8101706, r8101711, MPFR_RNDN);
        mpfr_add(r8101713, r8101705, r8101712, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8101716, r8101696, r8101715, MPFR_RNDN);
        mpfr_add(r8101717, r8101714, r8101716, MPFR_RNDN);
        mpfr_mul(r8101718, r8101698, r8101717, MPFR_RNDN);
        ;
        mpfr_mul(r8101720, r8101696, r8101719, MPFR_RNDN);
        ;
        mpfr_add(r8101722, r8101720, r8101721, MPFR_RNDN);
        mpfr_add(r8101723, r8101718, r8101722, MPFR_RNDN);
        mpfr_add(r8101724, r8101713, r8101723, MPFR_RNDN);
        return mpfr_get_d(r8101724, MPFR_RNDN);
}

