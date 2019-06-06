#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r3281535 = 1.0;
        float r3281536 = -10.0;
        float r3281537 = x;
        float r3281538 = r3281536 * r3281537;
        float r3281539 = r3281535 + r3281538;
        float r3281540 = 22.5;
        float r3281541 = r3281537 * r3281537;
        float r3281542 = r3281540 * r3281541;
        float r3281543 = r3281539 + r3281542;
        float r3281544 = -20.0;
        float r3281545 = r3281541 * r3281537;
        float r3281546 = r3281544 * r3281545;
        float r3281547 = r3281543 + r3281546;
        float r3281548 = 8.75;
        float r3281549 = r3281545 * r3281537;
        float r3281550 = r3281548 * r3281549;
        float r3281551 = r3281547 + r3281550;
        float r3281552 = -2.1;
        float r3281553 = r3281549 * r3281537;
        float r3281554 = r3281552 * r3281553;
        float r3281555 = r3281551 + r3281554;
        float r3281556 = 0.291667;
        float r3281557 = r3281553 * r3281537;
        float r3281558 = r3281556 * r3281557;
        float r3281559 = r3281555 + r3281558;
        float r3281560 = -0.02381;
        float r3281561 = r3281557 * r3281537;
        float r3281562 = r3281560 * r3281561;
        float r3281563 = r3281559 + r3281562;
        float r3281564 = 0.001116;
        float r3281565 = r3281561 * r3281537;
        float r3281566 = r3281564 * r3281565;
        float r3281567 = r3281563 + r3281566;
        float r3281568 = -2.8e-05;
        float r3281569 = r3281565 * r3281537;
        float r3281570 = r3281568 * r3281569;
        float r3281571 = r3281567 + r3281570;
        return r3281571;
}

double f_id(double x) {
        double r3281572 = 1.0;
        double r3281573 = -10.0;
        double r3281574 = x;
        double r3281575 = r3281573 * r3281574;
        double r3281576 = r3281572 + r3281575;
        double r3281577 = 22.5;
        double r3281578 = r3281574 * r3281574;
        double r3281579 = r3281577 * r3281578;
        double r3281580 = r3281576 + r3281579;
        double r3281581 = -20.0;
        double r3281582 = r3281578 * r3281574;
        double r3281583 = r3281581 * r3281582;
        double r3281584 = r3281580 + r3281583;
        double r3281585 = 8.75;
        double r3281586 = r3281582 * r3281574;
        double r3281587 = r3281585 * r3281586;
        double r3281588 = r3281584 + r3281587;
        double r3281589 = -2.1;
        double r3281590 = r3281586 * r3281574;
        double r3281591 = r3281589 * r3281590;
        double r3281592 = r3281588 + r3281591;
        double r3281593 = 0.291667;
        double r3281594 = r3281590 * r3281574;
        double r3281595 = r3281593 * r3281594;
        double r3281596 = r3281592 + r3281595;
        double r3281597 = -0.02381;
        double r3281598 = r3281594 * r3281574;
        double r3281599 = r3281597 * r3281598;
        double r3281600 = r3281596 + r3281599;
        double r3281601 = 0.001116;
        double r3281602 = r3281598 * r3281574;
        double r3281603 = r3281601 * r3281602;
        double r3281604 = r3281600 + r3281603;
        double r3281605 = -2.8e-05;
        double r3281606 = r3281602 * r3281574;
        double r3281607 = r3281605 * r3281606;
        double r3281608 = r3281604 + r3281607;
        return r3281608;
}


double f_of(float x) {
        float r3281609 = x;
        float r3281610 = r3281609 * r3281609;
        float r3281611 = 0.291667;
        float r3281612 = r3281610 * r3281611;
        float r3281613 = r3281610 * r3281610;
        float r3281614 = r3281612 * r3281613;
        float r3281615 = -2.1;
        float r3281616 = r3281615 * r3281609;
        float r3281617 = 8.75;
        float r3281618 = r3281616 + r3281617;
        float r3281619 = r3281613 * r3281618;
        float r3281620 = r3281614 + r3281619;
        float r3281621 = -10.0;
        float r3281622 = r3281609 * r3281621;
        float r3281623 = 1.0;
        float r3281624 = r3281622 + r3281623;
        float r3281625 = -20.0;
        float r3281626 = r3281625 * r3281609;
        float r3281627 = 22.5;
        float r3281628 = r3281626 + r3281627;
        float r3281629 = r3281610 * r3281628;
        float r3281630 = r3281624 + r3281629;
        float r3281631 = r3281620 + r3281630;
        float r3281632 = -0.02381;
        float r3281633 = r3281632 * r3281609;
        float r3281634 = r3281633 * r3281610;
        float r3281635 = r3281634 * r3281613;
        float r3281636 = r3281613 * r3281613;
        float r3281637 = -2.8e-05;
        float r3281638 = r3281637 * r3281609;
        float r3281639 = 0.001116;
        float r3281640 = r3281638 + r3281639;
        float r3281641 = r3281636 * r3281640;
        float r3281642 = r3281635 + r3281641;
        float r3281643 = r3281631 + r3281642;
        return r3281643;
}

double f_od(double x) {
        double r3281644 = x;
        double r3281645 = r3281644 * r3281644;
        double r3281646 = 0.291667;
        double r3281647 = r3281645 * r3281646;
        double r3281648 = r3281645 * r3281645;
        double r3281649 = r3281647 * r3281648;
        double r3281650 = -2.1;
        double r3281651 = r3281650 * r3281644;
        double r3281652 = 8.75;
        double r3281653 = r3281651 + r3281652;
        double r3281654 = r3281648 * r3281653;
        double r3281655 = r3281649 + r3281654;
        double r3281656 = -10.0;
        double r3281657 = r3281644 * r3281656;
        double r3281658 = 1.0;
        double r3281659 = r3281657 + r3281658;
        double r3281660 = -20.0;
        double r3281661 = r3281660 * r3281644;
        double r3281662 = 22.5;
        double r3281663 = r3281661 + r3281662;
        double r3281664 = r3281645 * r3281663;
        double r3281665 = r3281659 + r3281664;
        double r3281666 = r3281655 + r3281665;
        double r3281667 = -0.02381;
        double r3281668 = r3281667 * r3281644;
        double r3281669 = r3281668 * r3281645;
        double r3281670 = r3281669 * r3281648;
        double r3281671 = r3281648 * r3281648;
        double r3281672 = -2.8e-05;
        double r3281673 = r3281672 * r3281644;
        double r3281674 = 0.001116;
        double r3281675 = r3281673 + r3281674;
        double r3281676 = r3281671 * r3281675;
        double r3281677 = r3281670 + r3281676;
        double r3281678 = r3281666 + r3281677;
        return r3281678;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3281679, r3281680, r3281681, r3281682, r3281683, r3281684, r3281685, r3281686, r3281687, r3281688, r3281689, r3281690, r3281691, r3281692, r3281693, r3281694, r3281695, r3281696, r3281697, r3281698, r3281699, r3281700, r3281701, r3281702, r3281703, r3281704, r3281705, r3281706, r3281707, r3281708, r3281709, r3281710, r3281711, r3281712, r3281713, r3281714, r3281715;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3281679, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281680, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r3281681);
        mpfr_init(r3281682);
        mpfr_init(r3281683);
        mpfr_init_set_str(r3281684, "22.5", 10, MPFR_RNDN);
        mpfr_init(r3281685);
        mpfr_init(r3281686);
        mpfr_init(r3281687);
        mpfr_init_set_str(r3281688, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r3281689);
        mpfr_init(r3281690);
        mpfr_init(r3281691);
        mpfr_init_set_str(r3281692, "8.75", 10, MPFR_RNDN);
        mpfr_init(r3281693);
        mpfr_init(r3281694);
        mpfr_init(r3281695);
        mpfr_init_set_str(r3281696, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r3281697);
        mpfr_init(r3281698);
        mpfr_init(r3281699);
        mpfr_init_set_str(r3281700, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r3281701);
        mpfr_init(r3281702);
        mpfr_init(r3281703);
        mpfr_init_set_str(r3281704, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r3281705);
        mpfr_init(r3281706);
        mpfr_init(r3281707);
        mpfr_init_set_str(r3281708, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r3281709);
        mpfr_init(r3281710);
        mpfr_init(r3281711);
        mpfr_init_set_str(r3281712, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3281713);
        mpfr_init(r3281714);
        mpfr_init(r3281715);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3281681, x, MPFR_RNDN);
        mpfr_mul(r3281682, r3281680, r3281681, MPFR_RNDN);
        mpfr_add(r3281683, r3281679, r3281682, MPFR_RNDN);
        ;
        mpfr_mul(r3281685, r3281681, r3281681, MPFR_RNDN);
        mpfr_mul(r3281686, r3281684, r3281685, MPFR_RNDN);
        mpfr_add(r3281687, r3281683, r3281686, MPFR_RNDN);
        ;
        mpfr_mul(r3281689, r3281685, r3281681, MPFR_RNDN);
        mpfr_mul(r3281690, r3281688, r3281689, MPFR_RNDN);
        mpfr_add(r3281691, r3281687, r3281690, MPFR_RNDN);
        ;
        mpfr_mul(r3281693, r3281689, r3281681, MPFR_RNDN);
        mpfr_mul(r3281694, r3281692, r3281693, MPFR_RNDN);
        mpfr_add(r3281695, r3281691, r3281694, MPFR_RNDN);
        ;
        mpfr_mul(r3281697, r3281693, r3281681, MPFR_RNDN);
        mpfr_mul(r3281698, r3281696, r3281697, MPFR_RNDN);
        mpfr_add(r3281699, r3281695, r3281698, MPFR_RNDN);
        ;
        mpfr_mul(r3281701, r3281697, r3281681, MPFR_RNDN);
        mpfr_mul(r3281702, r3281700, r3281701, MPFR_RNDN);
        mpfr_add(r3281703, r3281699, r3281702, MPFR_RNDN);
        ;
        mpfr_mul(r3281705, r3281701, r3281681, MPFR_RNDN);
        mpfr_mul(r3281706, r3281704, r3281705, MPFR_RNDN);
        mpfr_add(r3281707, r3281703, r3281706, MPFR_RNDN);
        ;
        mpfr_mul(r3281709, r3281705, r3281681, MPFR_RNDN);
        mpfr_mul(r3281710, r3281708, r3281709, MPFR_RNDN);
        mpfr_add(r3281711, r3281707, r3281710, MPFR_RNDN);
        ;
        mpfr_mul(r3281713, r3281709, r3281681, MPFR_RNDN);
        mpfr_mul(r3281714, r3281712, r3281713, MPFR_RNDN);
        mpfr_add(r3281715, r3281711, r3281714, MPFR_RNDN);
        return mpfr_get_d(r3281715, MPFR_RNDN);
}

static mpfr_t r3281716, r3281717, r3281718, r3281719, r3281720, r3281721, r3281722, r3281723, r3281724, r3281725, r3281726, r3281727, r3281728, r3281729, r3281730, r3281731, r3281732, r3281733, r3281734, r3281735, r3281736, r3281737, r3281738, r3281739, r3281740, r3281741, r3281742, r3281743, r3281744, r3281745, r3281746, r3281747, r3281748, r3281749, r3281750;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3281716);
        mpfr_init(r3281717);
        mpfr_init_set_str(r3281718, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r3281719);
        mpfr_init(r3281720);
        mpfr_init(r3281721);
        mpfr_init_set_str(r3281722, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r3281723);
        mpfr_init_set_str(r3281724, "8.75", 10, MPFR_RNDN);
        mpfr_init(r3281725);
        mpfr_init(r3281726);
        mpfr_init(r3281727);
        mpfr_init_set_str(r3281728, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r3281729);
        mpfr_init_set_str(r3281730, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3281731);
        mpfr_init_set_str(r3281732, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r3281733);
        mpfr_init_set_str(r3281734, "22.5", 10, MPFR_RNDN);
        mpfr_init(r3281735);
        mpfr_init(r3281736);
        mpfr_init(r3281737);
        mpfr_init(r3281738);
        mpfr_init_set_str(r3281739, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r3281740);
        mpfr_init(r3281741);
        mpfr_init(r3281742);
        mpfr_init(r3281743);
        mpfr_init_set_str(r3281744, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3281745);
        mpfr_init_set_str(r3281746, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r3281747);
        mpfr_init(r3281748);
        mpfr_init(r3281749);
        mpfr_init(r3281750);
}

double f_fm(double x) {
        mpfr_set_d(r3281716, x, MPFR_RNDN);
        mpfr_mul(r3281717, r3281716, r3281716, MPFR_RNDN);
        ;
        mpfr_mul(r3281719, r3281717, r3281718, MPFR_RNDN);
        mpfr_mul(r3281720, r3281717, r3281717, MPFR_RNDN);
        mpfr_mul(r3281721, r3281719, r3281720, MPFR_RNDN);
        ;
        mpfr_mul(r3281723, r3281722, r3281716, MPFR_RNDN);
        ;
        mpfr_add(r3281725, r3281723, r3281724, MPFR_RNDN);
        mpfr_mul(r3281726, r3281720, r3281725, MPFR_RNDN);
        mpfr_add(r3281727, r3281721, r3281726, MPFR_RNDN);
        ;
        mpfr_mul(r3281729, r3281716, r3281728, MPFR_RNDN);
        ;
        mpfr_add(r3281731, r3281729, r3281730, MPFR_RNDN);
        ;
        mpfr_mul(r3281733, r3281732, r3281716, MPFR_RNDN);
        ;
        mpfr_add(r3281735, r3281733, r3281734, MPFR_RNDN);
        mpfr_mul(r3281736, r3281717, r3281735, MPFR_RNDN);
        mpfr_add(r3281737, r3281731, r3281736, MPFR_RNDN);
        mpfr_add(r3281738, r3281727, r3281737, MPFR_RNDN);
        ;
        mpfr_mul(r3281740, r3281739, r3281716, MPFR_RNDN);
        mpfr_mul(r3281741, r3281740, r3281717, MPFR_RNDN);
        mpfr_mul(r3281742, r3281741, r3281720, MPFR_RNDN);
        mpfr_mul(r3281743, r3281720, r3281720, MPFR_RNDN);
        ;
        mpfr_mul(r3281745, r3281744, r3281716, MPFR_RNDN);
        ;
        mpfr_add(r3281747, r3281745, r3281746, MPFR_RNDN);
        mpfr_mul(r3281748, r3281743, r3281747, MPFR_RNDN);
        mpfr_add(r3281749, r3281742, r3281748, MPFR_RNDN);
        mpfr_add(r3281750, r3281738, r3281749, MPFR_RNDN);
        return mpfr_get_d(r3281750, MPFR_RNDN);
}

static mpfr_t r3281751, r3281752, r3281753, r3281754, r3281755, r3281756, r3281757, r3281758, r3281759, r3281760, r3281761, r3281762, r3281763, r3281764, r3281765, r3281766, r3281767, r3281768, r3281769, r3281770, r3281771, r3281772, r3281773, r3281774, r3281775, r3281776, r3281777, r3281778, r3281779, r3281780, r3281781, r3281782, r3281783, r3281784, r3281785;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3281751);
        mpfr_init(r3281752);
        mpfr_init_set_str(r3281753, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r3281754);
        mpfr_init(r3281755);
        mpfr_init(r3281756);
        mpfr_init_set_str(r3281757, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r3281758);
        mpfr_init_set_str(r3281759, "8.75", 10, MPFR_RNDN);
        mpfr_init(r3281760);
        mpfr_init(r3281761);
        mpfr_init(r3281762);
        mpfr_init_set_str(r3281763, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r3281764);
        mpfr_init_set_str(r3281765, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3281766);
        mpfr_init_set_str(r3281767, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r3281768);
        mpfr_init_set_str(r3281769, "22.5", 10, MPFR_RNDN);
        mpfr_init(r3281770);
        mpfr_init(r3281771);
        mpfr_init(r3281772);
        mpfr_init(r3281773);
        mpfr_init_set_str(r3281774, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r3281775);
        mpfr_init(r3281776);
        mpfr_init(r3281777);
        mpfr_init(r3281778);
        mpfr_init_set_str(r3281779, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3281780);
        mpfr_init_set_str(r3281781, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r3281782);
        mpfr_init(r3281783);
        mpfr_init(r3281784);
        mpfr_init(r3281785);
}

double f_dm(double x) {
        mpfr_set_d(r3281751, x, MPFR_RNDN);
        mpfr_mul(r3281752, r3281751, r3281751, MPFR_RNDN);
        ;
        mpfr_mul(r3281754, r3281752, r3281753, MPFR_RNDN);
        mpfr_mul(r3281755, r3281752, r3281752, MPFR_RNDN);
        mpfr_mul(r3281756, r3281754, r3281755, MPFR_RNDN);
        ;
        mpfr_mul(r3281758, r3281757, r3281751, MPFR_RNDN);
        ;
        mpfr_add(r3281760, r3281758, r3281759, MPFR_RNDN);
        mpfr_mul(r3281761, r3281755, r3281760, MPFR_RNDN);
        mpfr_add(r3281762, r3281756, r3281761, MPFR_RNDN);
        ;
        mpfr_mul(r3281764, r3281751, r3281763, MPFR_RNDN);
        ;
        mpfr_add(r3281766, r3281764, r3281765, MPFR_RNDN);
        ;
        mpfr_mul(r3281768, r3281767, r3281751, MPFR_RNDN);
        ;
        mpfr_add(r3281770, r3281768, r3281769, MPFR_RNDN);
        mpfr_mul(r3281771, r3281752, r3281770, MPFR_RNDN);
        mpfr_add(r3281772, r3281766, r3281771, MPFR_RNDN);
        mpfr_add(r3281773, r3281762, r3281772, MPFR_RNDN);
        ;
        mpfr_mul(r3281775, r3281774, r3281751, MPFR_RNDN);
        mpfr_mul(r3281776, r3281775, r3281752, MPFR_RNDN);
        mpfr_mul(r3281777, r3281776, r3281755, MPFR_RNDN);
        mpfr_mul(r3281778, r3281755, r3281755, MPFR_RNDN);
        ;
        mpfr_mul(r3281780, r3281779, r3281751, MPFR_RNDN);
        ;
        mpfr_add(r3281782, r3281780, r3281781, MPFR_RNDN);
        mpfr_mul(r3281783, r3281778, r3281782, MPFR_RNDN);
        mpfr_add(r3281784, r3281777, r3281783, MPFR_RNDN);
        mpfr_add(r3281785, r3281773, r3281784, MPFR_RNDN);
        return mpfr_get_d(r3281785, MPFR_RNDN);
}

