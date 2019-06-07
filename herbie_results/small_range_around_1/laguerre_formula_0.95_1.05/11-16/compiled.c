#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r83943551 = 1.0;
        float r83943552 = -16.0;
        float r83943553 = x;
        float r83943554 = r83943552 * r83943553;
        float r83943555 = r83943551 + r83943554;
        float r83943556 = 60.0;
        float r83943557 = r83943553 * r83943553;
        float r83943558 = r83943556 * r83943557;
        float r83943559 = r83943555 + r83943558;
        float r83943560 = -93.333333;
        float r83943561 = r83943557 * r83943553;
        float r83943562 = r83943560 * r83943561;
        float r83943563 = r83943559 + r83943562;
        float r83943564 = 75.833333;
        float r83943565 = r83943561 * r83943553;
        float r83943566 = r83943564 * r83943565;
        float r83943567 = r83943563 + r83943566;
        float r83943568 = -36.4;
        float r83943569 = r83943565 * r83943553;
        float r83943570 = r83943568 * r83943569;
        float r83943571 = r83943567 + r83943570;
        float r83943572 = 11.122222;
        float r83943573 = r83943569 * r83943553;
        float r83943574 = r83943572 * r83943573;
        float r83943575 = r83943571 + r83943574;
        float r83943576 = -2.269841;
        float r83943577 = r83943573 * r83943553;
        float r83943578 = r83943576 * r83943577;
        float r83943579 = r83943575 + r83943578;
        float r83943580 = 0.319196;
        float r83943581 = r83943577 * r83943553;
        float r83943582 = r83943580 * r83943581;
        float r83943583 = r83943579 + r83943582;
        float r83943584 = -0.031526;
        float r83943585 = r83943581 * r83943553;
        float r83943586 = r83943584 * r83943585;
        float r83943587 = r83943583 + r83943586;
        float r83943588 = 0.002207;
        float r83943589 = r83943585 * r83943553;
        float r83943590 = r83943588 * r83943589;
        float r83943591 = r83943587 + r83943590;
        float r83943592 = -0.000109;
        float r83943593 = r83943589 * r83943553;
        float r83943594 = r83943592 * r83943593;
        float r83943595 = r83943591 + r83943594;
        float r83943596 = 4e-06;
        float r83943597 = r83943593 * r83943553;
        float r83943598 = r83943596 * r83943597;
        float r83943599 = r83943595 + r83943598;
        return r83943599;
}

double f_id(double x) {
        double r83943600 = 1.0;
        double r83943601 = -16.0;
        double r83943602 = x;
        double r83943603 = r83943601 * r83943602;
        double r83943604 = r83943600 + r83943603;
        double r83943605 = 60.0;
        double r83943606 = r83943602 * r83943602;
        double r83943607 = r83943605 * r83943606;
        double r83943608 = r83943604 + r83943607;
        double r83943609 = -93.333333;
        double r83943610 = r83943606 * r83943602;
        double r83943611 = r83943609 * r83943610;
        double r83943612 = r83943608 + r83943611;
        double r83943613 = 75.833333;
        double r83943614 = r83943610 * r83943602;
        double r83943615 = r83943613 * r83943614;
        double r83943616 = r83943612 + r83943615;
        double r83943617 = -36.4;
        double r83943618 = r83943614 * r83943602;
        double r83943619 = r83943617 * r83943618;
        double r83943620 = r83943616 + r83943619;
        double r83943621 = 11.122222;
        double r83943622 = r83943618 * r83943602;
        double r83943623 = r83943621 * r83943622;
        double r83943624 = r83943620 + r83943623;
        double r83943625 = -2.269841;
        double r83943626 = r83943622 * r83943602;
        double r83943627 = r83943625 * r83943626;
        double r83943628 = r83943624 + r83943627;
        double r83943629 = 0.319196;
        double r83943630 = r83943626 * r83943602;
        double r83943631 = r83943629 * r83943630;
        double r83943632 = r83943628 + r83943631;
        double r83943633 = -0.031526;
        double r83943634 = r83943630 * r83943602;
        double r83943635 = r83943633 * r83943634;
        double r83943636 = r83943632 + r83943635;
        double r83943637 = 0.002207;
        double r83943638 = r83943634 * r83943602;
        double r83943639 = r83943637 * r83943638;
        double r83943640 = r83943636 + r83943639;
        double r83943641 = -0.000109;
        double r83943642 = r83943638 * r83943602;
        double r83943643 = r83943641 * r83943642;
        double r83943644 = r83943640 + r83943643;
        double r83943645 = 4e-06;
        double r83943646 = r83943642 * r83943602;
        double r83943647 = r83943645 * r83943646;
        double r83943648 = r83943644 + r83943647;
        return r83943648;
}


double f_of(float x) {
        float r83943649 = x;
        float r83943650 = r83943649 * r83943649;
        float r83943651 = r83943650 * r83943650;
        float r83943652 = 3;
        float r83943653 = pow(r83943649, r83943652);
        float r83943654 = r83943653 * r83943653;
        float r83943655 = r83943651 * r83943654;
        float r83943656 = -0.000109;
        float r83943657 = r83943649 * r83943656;
        float r83943658 = 0.002207;
        float r83943659 = r83943657 + r83943658;
        float r83943660 = r83943655 * r83943659;
        float r83943661 = r83943651 * r83943651;
        float r83943662 = 0.319196;
        float r83943663 = -0.031526;
        float r83943664 = r83943663 * r83943649;
        float r83943665 = r83943662 + r83943664;
        float r83943666 = r83943661 * r83943665;
        float r83943667 = r83943660 + r83943666;
        float r83943668 = r83943653 * r83943649;
        float r83943669 = 75.833333;
        float r83943670 = -36.4;
        float r83943671 = r83943670 * r83943649;
        float r83943672 = r83943669 + r83943671;
        float r83943673 = r83943668 * r83943672;
        float r83943674 = 11.122222;
        float r83943675 = -2.269841;
        float r83943676 = r83943675 * r83943649;
        float r83943677 = r83943674 + r83943676;
        float r83943678 = r83943654 * r83943677;
        float r83943679 = r83943673 + r83943678;
        float r83943680 = 60.0;
        float r83943681 = -93.333333;
        float r83943682 = r83943681 * r83943649;
        float r83943683 = r83943680 + r83943682;
        float r83943684 = r83943650 * r83943683;
        float r83943685 = r83943679 + r83943684;
        float r83943686 = cbrt(r83943685);
        float r83943687 = r83943686 * r83943686;
        float r83943688 = r83943687 * r83943686;
        float r83943689 = -16.0;
        float r83943690 = r83943649 * r83943689;
        float r83943691 = 1.0;
        float r83943692 = r83943690 + r83943691;
        float r83943693 = r83943688 + r83943692;
        float r83943694 = r83943667 + r83943693;
        float r83943695 = 4e-06;
        float r83943696 = r83943695 * r83943649;
        float r83943697 = r83943696 * r83943650;
        float r83943698 = r83943654 * r83943653;
        float r83943699 = r83943697 * r83943698;
        float r83943700 = r83943694 + r83943699;
        return r83943700;
}

double f_od(double x) {
        double r83943701 = x;
        double r83943702 = r83943701 * r83943701;
        double r83943703 = r83943702 * r83943702;
        double r83943704 = 3;
        double r83943705 = pow(r83943701, r83943704);
        double r83943706 = r83943705 * r83943705;
        double r83943707 = r83943703 * r83943706;
        double r83943708 = -0.000109;
        double r83943709 = r83943701 * r83943708;
        double r83943710 = 0.002207;
        double r83943711 = r83943709 + r83943710;
        double r83943712 = r83943707 * r83943711;
        double r83943713 = r83943703 * r83943703;
        double r83943714 = 0.319196;
        double r83943715 = -0.031526;
        double r83943716 = r83943715 * r83943701;
        double r83943717 = r83943714 + r83943716;
        double r83943718 = r83943713 * r83943717;
        double r83943719 = r83943712 + r83943718;
        double r83943720 = r83943705 * r83943701;
        double r83943721 = 75.833333;
        double r83943722 = -36.4;
        double r83943723 = r83943722 * r83943701;
        double r83943724 = r83943721 + r83943723;
        double r83943725 = r83943720 * r83943724;
        double r83943726 = 11.122222;
        double r83943727 = -2.269841;
        double r83943728 = r83943727 * r83943701;
        double r83943729 = r83943726 + r83943728;
        double r83943730 = r83943706 * r83943729;
        double r83943731 = r83943725 + r83943730;
        double r83943732 = 60.0;
        double r83943733 = -93.333333;
        double r83943734 = r83943733 * r83943701;
        double r83943735 = r83943732 + r83943734;
        double r83943736 = r83943702 * r83943735;
        double r83943737 = r83943731 + r83943736;
        double r83943738 = cbrt(r83943737);
        double r83943739 = r83943738 * r83943738;
        double r83943740 = r83943739 * r83943738;
        double r83943741 = -16.0;
        double r83943742 = r83943701 * r83943741;
        double r83943743 = 1.0;
        double r83943744 = r83943742 + r83943743;
        double r83943745 = r83943740 + r83943744;
        double r83943746 = r83943719 + r83943745;
        double r83943747 = 4e-06;
        double r83943748 = r83943747 * r83943701;
        double r83943749 = r83943748 * r83943702;
        double r83943750 = r83943706 * r83943705;
        double r83943751 = r83943749 * r83943750;
        double r83943752 = r83943746 + r83943751;
        return r83943752;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83943753, r83943754, r83943755, r83943756, r83943757, r83943758, r83943759, r83943760, r83943761, r83943762, r83943763, r83943764, r83943765, r83943766, r83943767, r83943768, r83943769, r83943770, r83943771, r83943772, r83943773, r83943774, r83943775, r83943776, r83943777, r83943778, r83943779, r83943780, r83943781, r83943782, r83943783, r83943784, r83943785, r83943786, r83943787, r83943788, r83943789, r83943790, r83943791, r83943792, r83943793, r83943794, r83943795, r83943796, r83943797, r83943798, r83943799, r83943800, r83943801;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943753, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943754, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r83943755);
        mpfr_init(r83943756);
        mpfr_init(r83943757);
        mpfr_init_set_str(r83943758, "60.0", 10, MPFR_RNDN);
        mpfr_init(r83943759);
        mpfr_init(r83943760);
        mpfr_init(r83943761);
        mpfr_init_set_str(r83943762, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r83943763);
        mpfr_init(r83943764);
        mpfr_init(r83943765);
        mpfr_init_set_str(r83943766, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r83943767);
        mpfr_init(r83943768);
        mpfr_init(r83943769);
        mpfr_init_set_str(r83943770, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r83943771);
        mpfr_init(r83943772);
        mpfr_init(r83943773);
        mpfr_init_set_str(r83943774, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r83943775);
        mpfr_init(r83943776);
        mpfr_init(r83943777);
        mpfr_init_set_str(r83943778, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r83943779);
        mpfr_init(r83943780);
        mpfr_init(r83943781);
        mpfr_init_set_str(r83943782, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r83943783);
        mpfr_init(r83943784);
        mpfr_init(r83943785);
        mpfr_init_set_str(r83943786, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r83943787);
        mpfr_init(r83943788);
        mpfr_init(r83943789);
        mpfr_init_set_str(r83943790, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r83943791);
        mpfr_init(r83943792);
        mpfr_init(r83943793);
        mpfr_init_set_str(r83943794, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r83943795);
        mpfr_init(r83943796);
        mpfr_init(r83943797);
        mpfr_init_set_str(r83943798, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r83943799);
        mpfr_init(r83943800);
        mpfr_init(r83943801);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83943755, x, MPFR_RNDN);
        mpfr_mul(r83943756, r83943754, r83943755, MPFR_RNDN);
        mpfr_add(r83943757, r83943753, r83943756, MPFR_RNDN);
        ;
        mpfr_mul(r83943759, r83943755, r83943755, MPFR_RNDN);
        mpfr_mul(r83943760, r83943758, r83943759, MPFR_RNDN);
        mpfr_add(r83943761, r83943757, r83943760, MPFR_RNDN);
        ;
        mpfr_mul(r83943763, r83943759, r83943755, MPFR_RNDN);
        mpfr_mul(r83943764, r83943762, r83943763, MPFR_RNDN);
        mpfr_add(r83943765, r83943761, r83943764, MPFR_RNDN);
        ;
        mpfr_mul(r83943767, r83943763, r83943755, MPFR_RNDN);
        mpfr_mul(r83943768, r83943766, r83943767, MPFR_RNDN);
        mpfr_add(r83943769, r83943765, r83943768, MPFR_RNDN);
        ;
        mpfr_mul(r83943771, r83943767, r83943755, MPFR_RNDN);
        mpfr_mul(r83943772, r83943770, r83943771, MPFR_RNDN);
        mpfr_add(r83943773, r83943769, r83943772, MPFR_RNDN);
        ;
        mpfr_mul(r83943775, r83943771, r83943755, MPFR_RNDN);
        mpfr_mul(r83943776, r83943774, r83943775, MPFR_RNDN);
        mpfr_add(r83943777, r83943773, r83943776, MPFR_RNDN);
        ;
        mpfr_mul(r83943779, r83943775, r83943755, MPFR_RNDN);
        mpfr_mul(r83943780, r83943778, r83943779, MPFR_RNDN);
        mpfr_add(r83943781, r83943777, r83943780, MPFR_RNDN);
        ;
        mpfr_mul(r83943783, r83943779, r83943755, MPFR_RNDN);
        mpfr_mul(r83943784, r83943782, r83943783, MPFR_RNDN);
        mpfr_add(r83943785, r83943781, r83943784, MPFR_RNDN);
        ;
        mpfr_mul(r83943787, r83943783, r83943755, MPFR_RNDN);
        mpfr_mul(r83943788, r83943786, r83943787, MPFR_RNDN);
        mpfr_add(r83943789, r83943785, r83943788, MPFR_RNDN);
        ;
        mpfr_mul(r83943791, r83943787, r83943755, MPFR_RNDN);
        mpfr_mul(r83943792, r83943790, r83943791, MPFR_RNDN);
        mpfr_add(r83943793, r83943789, r83943792, MPFR_RNDN);
        ;
        mpfr_mul(r83943795, r83943791, r83943755, MPFR_RNDN);
        mpfr_mul(r83943796, r83943794, r83943795, MPFR_RNDN);
        mpfr_add(r83943797, r83943793, r83943796, MPFR_RNDN);
        ;
        mpfr_mul(r83943799, r83943795, r83943755, MPFR_RNDN);
        mpfr_mul(r83943800, r83943798, r83943799, MPFR_RNDN);
        mpfr_add(r83943801, r83943797, r83943800, MPFR_RNDN);
        return mpfr_get_d(r83943801, MPFR_RNDN);
}

static mpfr_t r83943802, r83943803, r83943804, r83943805, r83943806, r83943807, r83943808, r83943809, r83943810, r83943811, r83943812, r83943813, r83943814, r83943815, r83943816, r83943817, r83943818, r83943819, r83943820, r83943821, r83943822, r83943823, r83943824, r83943825, r83943826, r83943827, r83943828, r83943829, r83943830, r83943831, r83943832, r83943833, r83943834, r83943835, r83943836, r83943837, r83943838, r83943839, r83943840, r83943841, r83943842, r83943843, r83943844, r83943845, r83943846, r83943847, r83943848, r83943849, r83943850, r83943851, r83943852, r83943853;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83943802);
        mpfr_init(r83943803);
        mpfr_init(r83943804);
        mpfr_init_set_str(r83943805, "3", 10, MPFR_RNDN);
        mpfr_init(r83943806);
        mpfr_init(r83943807);
        mpfr_init(r83943808);
        mpfr_init_set_str(r83943809, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r83943810);
        mpfr_init_set_str(r83943811, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r83943812);
        mpfr_init(r83943813);
        mpfr_init(r83943814);
        mpfr_init_set_str(r83943815, "0.319196", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943816, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r83943817);
        mpfr_init(r83943818);
        mpfr_init(r83943819);
        mpfr_init(r83943820);
        mpfr_init(r83943821);
        mpfr_init_set_str(r83943822, "75.833333", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943823, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r83943824);
        mpfr_init(r83943825);
        mpfr_init(r83943826);
        mpfr_init_set_str(r83943827, "11.122222", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943828, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r83943829);
        mpfr_init(r83943830);
        mpfr_init(r83943831);
        mpfr_init(r83943832);
        mpfr_init_set_str(r83943833, "60.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943834, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r83943835);
        mpfr_init(r83943836);
        mpfr_init(r83943837);
        mpfr_init(r83943838);
        mpfr_init(r83943839);
        mpfr_init(r83943840);
        mpfr_init(r83943841);
        mpfr_init_set_str(r83943842, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r83943843);
        mpfr_init_set_str(r83943844, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83943845);
        mpfr_init(r83943846);
        mpfr_init(r83943847);
        mpfr_init_set_str(r83943848, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r83943849);
        mpfr_init(r83943850);
        mpfr_init(r83943851);
        mpfr_init(r83943852);
        mpfr_init(r83943853);
}

double f_fm(double x) {
        mpfr_set_d(r83943802, x, MPFR_RNDN);
        mpfr_mul(r83943803, r83943802, r83943802, MPFR_RNDN);
        mpfr_mul(r83943804, r83943803, r83943803, MPFR_RNDN);
        ;
        mpfr_pow(r83943806, r83943802, r83943805, MPFR_RNDN);
        mpfr_mul(r83943807, r83943806, r83943806, MPFR_RNDN);
        mpfr_mul(r83943808, r83943804, r83943807, MPFR_RNDN);
        ;
        mpfr_mul(r83943810, r83943802, r83943809, MPFR_RNDN);
        ;
        mpfr_add(r83943812, r83943810, r83943811, MPFR_RNDN);
        mpfr_mul(r83943813, r83943808, r83943812, MPFR_RNDN);
        mpfr_mul(r83943814, r83943804, r83943804, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83943817, r83943816, r83943802, MPFR_RNDN);
        mpfr_add(r83943818, r83943815, r83943817, MPFR_RNDN);
        mpfr_mul(r83943819, r83943814, r83943818, MPFR_RNDN);
        mpfr_add(r83943820, r83943813, r83943819, MPFR_RNDN);
        mpfr_mul(r83943821, r83943806, r83943802, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83943824, r83943823, r83943802, MPFR_RNDN);
        mpfr_add(r83943825, r83943822, r83943824, MPFR_RNDN);
        mpfr_mul(r83943826, r83943821, r83943825, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83943829, r83943828, r83943802, MPFR_RNDN);
        mpfr_add(r83943830, r83943827, r83943829, MPFR_RNDN);
        mpfr_mul(r83943831, r83943807, r83943830, MPFR_RNDN);
        mpfr_add(r83943832, r83943826, r83943831, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83943835, r83943834, r83943802, MPFR_RNDN);
        mpfr_add(r83943836, r83943833, r83943835, MPFR_RNDN);
        mpfr_mul(r83943837, r83943803, r83943836, MPFR_RNDN);
        mpfr_add(r83943838, r83943832, r83943837, MPFR_RNDN);
        mpfr_cbrt(r83943839, r83943838, MPFR_RNDN);
        mpfr_mul(r83943840, r83943839, r83943839, MPFR_RNDN);
        mpfr_mul(r83943841, r83943840, r83943839, MPFR_RNDN);
        ;
        mpfr_mul(r83943843, r83943802, r83943842, MPFR_RNDN);
        ;
        mpfr_add(r83943845, r83943843, r83943844, MPFR_RNDN);
        mpfr_add(r83943846, r83943841, r83943845, MPFR_RNDN);
        mpfr_add(r83943847, r83943820, r83943846, MPFR_RNDN);
        ;
        mpfr_mul(r83943849, r83943848, r83943802, MPFR_RNDN);
        mpfr_mul(r83943850, r83943849, r83943803, MPFR_RNDN);
        mpfr_mul(r83943851, r83943807, r83943806, MPFR_RNDN);
        mpfr_mul(r83943852, r83943850, r83943851, MPFR_RNDN);
        mpfr_add(r83943853, r83943847, r83943852, MPFR_RNDN);
        return mpfr_get_d(r83943853, MPFR_RNDN);
}

static mpfr_t r83943854, r83943855, r83943856, r83943857, r83943858, r83943859, r83943860, r83943861, r83943862, r83943863, r83943864, r83943865, r83943866, r83943867, r83943868, r83943869, r83943870, r83943871, r83943872, r83943873, r83943874, r83943875, r83943876, r83943877, r83943878, r83943879, r83943880, r83943881, r83943882, r83943883, r83943884, r83943885, r83943886, r83943887, r83943888, r83943889, r83943890, r83943891, r83943892, r83943893, r83943894, r83943895, r83943896, r83943897, r83943898, r83943899, r83943900, r83943901, r83943902, r83943903, r83943904, r83943905;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83943854);
        mpfr_init(r83943855);
        mpfr_init(r83943856);
        mpfr_init_set_str(r83943857, "3", 10, MPFR_RNDN);
        mpfr_init(r83943858);
        mpfr_init(r83943859);
        mpfr_init(r83943860);
        mpfr_init_set_str(r83943861, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r83943862);
        mpfr_init_set_str(r83943863, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r83943864);
        mpfr_init(r83943865);
        mpfr_init(r83943866);
        mpfr_init_set_str(r83943867, "0.319196", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943868, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r83943869);
        mpfr_init(r83943870);
        mpfr_init(r83943871);
        mpfr_init(r83943872);
        mpfr_init(r83943873);
        mpfr_init_set_str(r83943874, "75.833333", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943875, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r83943876);
        mpfr_init(r83943877);
        mpfr_init(r83943878);
        mpfr_init_set_str(r83943879, "11.122222", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943880, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r83943881);
        mpfr_init(r83943882);
        mpfr_init(r83943883);
        mpfr_init(r83943884);
        mpfr_init_set_str(r83943885, "60.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943886, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r83943887);
        mpfr_init(r83943888);
        mpfr_init(r83943889);
        mpfr_init(r83943890);
        mpfr_init(r83943891);
        mpfr_init(r83943892);
        mpfr_init(r83943893);
        mpfr_init_set_str(r83943894, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r83943895);
        mpfr_init_set_str(r83943896, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83943897);
        mpfr_init(r83943898);
        mpfr_init(r83943899);
        mpfr_init_set_str(r83943900, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r83943901);
        mpfr_init(r83943902);
        mpfr_init(r83943903);
        mpfr_init(r83943904);
        mpfr_init(r83943905);
}

double f_dm(double x) {
        mpfr_set_d(r83943854, x, MPFR_RNDN);
        mpfr_mul(r83943855, r83943854, r83943854, MPFR_RNDN);
        mpfr_mul(r83943856, r83943855, r83943855, MPFR_RNDN);
        ;
        mpfr_pow(r83943858, r83943854, r83943857, MPFR_RNDN);
        mpfr_mul(r83943859, r83943858, r83943858, MPFR_RNDN);
        mpfr_mul(r83943860, r83943856, r83943859, MPFR_RNDN);
        ;
        mpfr_mul(r83943862, r83943854, r83943861, MPFR_RNDN);
        ;
        mpfr_add(r83943864, r83943862, r83943863, MPFR_RNDN);
        mpfr_mul(r83943865, r83943860, r83943864, MPFR_RNDN);
        mpfr_mul(r83943866, r83943856, r83943856, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83943869, r83943868, r83943854, MPFR_RNDN);
        mpfr_add(r83943870, r83943867, r83943869, MPFR_RNDN);
        mpfr_mul(r83943871, r83943866, r83943870, MPFR_RNDN);
        mpfr_add(r83943872, r83943865, r83943871, MPFR_RNDN);
        mpfr_mul(r83943873, r83943858, r83943854, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83943876, r83943875, r83943854, MPFR_RNDN);
        mpfr_add(r83943877, r83943874, r83943876, MPFR_RNDN);
        mpfr_mul(r83943878, r83943873, r83943877, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83943881, r83943880, r83943854, MPFR_RNDN);
        mpfr_add(r83943882, r83943879, r83943881, MPFR_RNDN);
        mpfr_mul(r83943883, r83943859, r83943882, MPFR_RNDN);
        mpfr_add(r83943884, r83943878, r83943883, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83943887, r83943886, r83943854, MPFR_RNDN);
        mpfr_add(r83943888, r83943885, r83943887, MPFR_RNDN);
        mpfr_mul(r83943889, r83943855, r83943888, MPFR_RNDN);
        mpfr_add(r83943890, r83943884, r83943889, MPFR_RNDN);
        mpfr_cbrt(r83943891, r83943890, MPFR_RNDN);
        mpfr_mul(r83943892, r83943891, r83943891, MPFR_RNDN);
        mpfr_mul(r83943893, r83943892, r83943891, MPFR_RNDN);
        ;
        mpfr_mul(r83943895, r83943854, r83943894, MPFR_RNDN);
        ;
        mpfr_add(r83943897, r83943895, r83943896, MPFR_RNDN);
        mpfr_add(r83943898, r83943893, r83943897, MPFR_RNDN);
        mpfr_add(r83943899, r83943872, r83943898, MPFR_RNDN);
        ;
        mpfr_mul(r83943901, r83943900, r83943854, MPFR_RNDN);
        mpfr_mul(r83943902, r83943901, r83943855, MPFR_RNDN);
        mpfr_mul(r83943903, r83943859, r83943858, MPFR_RNDN);
        mpfr_mul(r83943904, r83943902, r83943903, MPFR_RNDN);
        mpfr_add(r83943905, r83943899, r83943904, MPFR_RNDN);
        return mpfr_get_d(r83943905, MPFR_RNDN);
}

