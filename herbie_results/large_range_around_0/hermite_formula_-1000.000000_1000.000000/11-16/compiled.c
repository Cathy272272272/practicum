#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r12290585 = 518918400.0;
        float r12290586 = -8302694400.0;
        float r12290587 = x;
        float r12290588 = r12290587 * r12290587;
        float r12290589 = r12290586 * r12290588;
        float r12290590 = r12290585 + r12290589;
        float r12290591 = 19372953600.0;
        float r12290592 = r12290588 * r12290587;
        float r12290593 = r12290592 * r12290587;
        float r12290594 = r12290591 * r12290593;
        float r12290595 = r12290590 + r12290594;
        float r12290596 = -15498362880.0;
        float r12290597 = r12290593 * r12290587;
        float r12290598 = r12290597 * r12290587;
        float r12290599 = r12290596 * r12290598;
        float r12290600 = r12290595 + r12290599;
        float r12290601 = 5535129600.0;
        float r12290602 = r12290598 * r12290587;
        float r12290603 = r12290602 * r12290587;
        float r12290604 = r12290601 * r12290603;
        float r12290605 = r12290600 + r12290604;
        float r12290606 = -984023040.0;
        float r12290607 = r12290603 * r12290587;
        float r12290608 = r12290607 * r12290587;
        float r12290609 = r12290606 * r12290608;
        float r12290610 = r12290605 + r12290609;
        float r12290611 = 89456640.0;
        float r12290612 = r12290608 * r12290587;
        float r12290613 = r12290612 * r12290587;
        float r12290614 = r12290611 * r12290613;
        float r12290615 = r12290610 + r12290614;
        float r12290616 = -3932160.0;
        float r12290617 = r12290613 * r12290587;
        float r12290618 = r12290617 * r12290587;
        float r12290619 = r12290616 * r12290618;
        float r12290620 = r12290615 + r12290619;
        float r12290621 = 65536.0;
        float r12290622 = r12290618 * r12290587;
        float r12290623 = r12290622 * r12290587;
        float r12290624 = r12290621 * r12290623;
        float r12290625 = r12290620 + r12290624;
        return r12290625;
}

double f_id(double x) {
        double r12290626 = 518918400.0;
        double r12290627 = -8302694400.0;
        double r12290628 = x;
        double r12290629 = r12290628 * r12290628;
        double r12290630 = r12290627 * r12290629;
        double r12290631 = r12290626 + r12290630;
        double r12290632 = 19372953600.0;
        double r12290633 = r12290629 * r12290628;
        double r12290634 = r12290633 * r12290628;
        double r12290635 = r12290632 * r12290634;
        double r12290636 = r12290631 + r12290635;
        double r12290637 = -15498362880.0;
        double r12290638 = r12290634 * r12290628;
        double r12290639 = r12290638 * r12290628;
        double r12290640 = r12290637 * r12290639;
        double r12290641 = r12290636 + r12290640;
        double r12290642 = 5535129600.0;
        double r12290643 = r12290639 * r12290628;
        double r12290644 = r12290643 * r12290628;
        double r12290645 = r12290642 * r12290644;
        double r12290646 = r12290641 + r12290645;
        double r12290647 = -984023040.0;
        double r12290648 = r12290644 * r12290628;
        double r12290649 = r12290648 * r12290628;
        double r12290650 = r12290647 * r12290649;
        double r12290651 = r12290646 + r12290650;
        double r12290652 = 89456640.0;
        double r12290653 = r12290649 * r12290628;
        double r12290654 = r12290653 * r12290628;
        double r12290655 = r12290652 * r12290654;
        double r12290656 = r12290651 + r12290655;
        double r12290657 = -3932160.0;
        double r12290658 = r12290654 * r12290628;
        double r12290659 = r12290658 * r12290628;
        double r12290660 = r12290657 * r12290659;
        double r12290661 = r12290656 + r12290660;
        double r12290662 = 65536.0;
        double r12290663 = r12290659 * r12290628;
        double r12290664 = r12290663 * r12290628;
        double r12290665 = r12290662 * r12290664;
        double r12290666 = r12290661 + r12290665;
        return r12290666;
}


double f_of(float x) {
        float r12290667 = x;
        float r12290668 = r12290667 * r12290667;
        float r12290669 = 5535129600.0;
        float r12290670 = r12290668 * r12290669;
        float r12290671 = 3;
        float r12290672 = pow(r12290668, r12290671);
        float r12290673 = r12290670 * r12290672;
        float r12290674 = 518918400.0;
        float r12290675 = -8302694400.0;
        float r12290676 = r12290668 * r12290675;
        float r12290677 = r12290674 + r12290676;
        float r12290678 = r12290673 + r12290677;
        float r12290679 = -3932160.0;
        float r12290680 = 65536.0;
        float r12290681 = r12290668 * r12290680;
        float r12290682 = r12290679 + r12290681;
        float r12290683 = 1;
        float r12290684 = r12290671 + r12290683;
        float r12290685 = pow(r12290668, r12290684);
        float r12290686 = r12290672 * r12290685;
        float r12290687 = r12290682 * r12290686;
        float r12290688 = r12290678 + r12290687;
        float r12290689 = -15498362880.0;
        float r12290690 = r12290668 * r12290689;
        float r12290691 = 19372953600.0;
        float r12290692 = r12290690 + r12290691;
        float r12290693 = r12290668 * r12290668;
        float r12290694 = r12290692 * r12290693;
        float r12290695 = 89456640.0;
        float r12290696 = r12290668 * r12290695;
        float r12290697 = -984023040.0;
        float r12290698 = r12290696 + r12290697;
        float r12290699 = pow(r12290667, r12290671);
        float r12290700 = r12290699 * r12290668;
        float r12290701 = r12290700 * r12290700;
        float r12290702 = r12290698 * r12290701;
        float r12290703 = r12290694 + r12290702;
        float r12290704 = r12290688 + r12290703;
        return r12290704;
}

double f_od(double x) {
        double r12290705 = x;
        double r12290706 = r12290705 * r12290705;
        double r12290707 = 5535129600.0;
        double r12290708 = r12290706 * r12290707;
        double r12290709 = 3;
        double r12290710 = pow(r12290706, r12290709);
        double r12290711 = r12290708 * r12290710;
        double r12290712 = 518918400.0;
        double r12290713 = -8302694400.0;
        double r12290714 = r12290706 * r12290713;
        double r12290715 = r12290712 + r12290714;
        double r12290716 = r12290711 + r12290715;
        double r12290717 = -3932160.0;
        double r12290718 = 65536.0;
        double r12290719 = r12290706 * r12290718;
        double r12290720 = r12290717 + r12290719;
        double r12290721 = 1;
        double r12290722 = r12290709 + r12290721;
        double r12290723 = pow(r12290706, r12290722);
        double r12290724 = r12290710 * r12290723;
        double r12290725 = r12290720 * r12290724;
        double r12290726 = r12290716 + r12290725;
        double r12290727 = -15498362880.0;
        double r12290728 = r12290706 * r12290727;
        double r12290729 = 19372953600.0;
        double r12290730 = r12290728 + r12290729;
        double r12290731 = r12290706 * r12290706;
        double r12290732 = r12290730 * r12290731;
        double r12290733 = 89456640.0;
        double r12290734 = r12290706 * r12290733;
        double r12290735 = -984023040.0;
        double r12290736 = r12290734 + r12290735;
        double r12290737 = pow(r12290705, r12290709);
        double r12290738 = r12290737 * r12290706;
        double r12290739 = r12290738 * r12290738;
        double r12290740 = r12290736 * r12290739;
        double r12290741 = r12290732 + r12290740;
        double r12290742 = r12290726 + r12290741;
        return r12290742;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12290743, r12290744, r12290745, r12290746, r12290747, r12290748, r12290749, r12290750, r12290751, r12290752, r12290753, r12290754, r12290755, r12290756, r12290757, r12290758, r12290759, r12290760, r12290761, r12290762, r12290763, r12290764, r12290765, r12290766, r12290767, r12290768, r12290769, r12290770, r12290771, r12290772, r12290773, r12290774, r12290775, r12290776, r12290777, r12290778, r12290779, r12290780, r12290781, r12290782, r12290783;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r12290743, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290744, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r12290745);
        mpfr_init(r12290746);
        mpfr_init(r12290747);
        mpfr_init(r12290748);
        mpfr_init_set_str(r12290749, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r12290750);
        mpfr_init(r12290751);
        mpfr_init(r12290752);
        mpfr_init(r12290753);
        mpfr_init_set_str(r12290754, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r12290755);
        mpfr_init(r12290756);
        mpfr_init(r12290757);
        mpfr_init(r12290758);
        mpfr_init_set_str(r12290759, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r12290760);
        mpfr_init(r12290761);
        mpfr_init(r12290762);
        mpfr_init(r12290763);
        mpfr_init_set_str(r12290764, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r12290765);
        mpfr_init(r12290766);
        mpfr_init(r12290767);
        mpfr_init(r12290768);
        mpfr_init_set_str(r12290769, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r12290770);
        mpfr_init(r12290771);
        mpfr_init(r12290772);
        mpfr_init(r12290773);
        mpfr_init_set_str(r12290774, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r12290775);
        mpfr_init(r12290776);
        mpfr_init(r12290777);
        mpfr_init(r12290778);
        mpfr_init_set_str(r12290779, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r12290780);
        mpfr_init(r12290781);
        mpfr_init(r12290782);
        mpfr_init(r12290783);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r12290745, x, MPFR_RNDN);
        mpfr_mul(r12290746, r12290745, r12290745, MPFR_RNDN);
        mpfr_mul(r12290747, r12290744, r12290746, MPFR_RNDN);
        mpfr_add(r12290748, r12290743, r12290747, MPFR_RNDN);
        ;
        mpfr_mul(r12290750, r12290746, r12290745, MPFR_RNDN);
        mpfr_mul(r12290751, r12290750, r12290745, MPFR_RNDN);
        mpfr_mul(r12290752, r12290749, r12290751, MPFR_RNDN);
        mpfr_add(r12290753, r12290748, r12290752, MPFR_RNDN);
        ;
        mpfr_mul(r12290755, r12290751, r12290745, MPFR_RNDN);
        mpfr_mul(r12290756, r12290755, r12290745, MPFR_RNDN);
        mpfr_mul(r12290757, r12290754, r12290756, MPFR_RNDN);
        mpfr_add(r12290758, r12290753, r12290757, MPFR_RNDN);
        ;
        mpfr_mul(r12290760, r12290756, r12290745, MPFR_RNDN);
        mpfr_mul(r12290761, r12290760, r12290745, MPFR_RNDN);
        mpfr_mul(r12290762, r12290759, r12290761, MPFR_RNDN);
        mpfr_add(r12290763, r12290758, r12290762, MPFR_RNDN);
        ;
        mpfr_mul(r12290765, r12290761, r12290745, MPFR_RNDN);
        mpfr_mul(r12290766, r12290765, r12290745, MPFR_RNDN);
        mpfr_mul(r12290767, r12290764, r12290766, MPFR_RNDN);
        mpfr_add(r12290768, r12290763, r12290767, MPFR_RNDN);
        ;
        mpfr_mul(r12290770, r12290766, r12290745, MPFR_RNDN);
        mpfr_mul(r12290771, r12290770, r12290745, MPFR_RNDN);
        mpfr_mul(r12290772, r12290769, r12290771, MPFR_RNDN);
        mpfr_add(r12290773, r12290768, r12290772, MPFR_RNDN);
        ;
        mpfr_mul(r12290775, r12290771, r12290745, MPFR_RNDN);
        mpfr_mul(r12290776, r12290775, r12290745, MPFR_RNDN);
        mpfr_mul(r12290777, r12290774, r12290776, MPFR_RNDN);
        mpfr_add(r12290778, r12290773, r12290777, MPFR_RNDN);
        ;
        mpfr_mul(r12290780, r12290776, r12290745, MPFR_RNDN);
        mpfr_mul(r12290781, r12290780, r12290745, MPFR_RNDN);
        mpfr_mul(r12290782, r12290779, r12290781, MPFR_RNDN);
        mpfr_add(r12290783, r12290778, r12290782, MPFR_RNDN);
        return mpfr_get_d(r12290783, MPFR_RNDN);
}

static mpfr_t r12290784, r12290785, r12290786, r12290787, r12290788, r12290789, r12290790, r12290791, r12290792, r12290793, r12290794, r12290795, r12290796, r12290797, r12290798, r12290799, r12290800, r12290801, r12290802, r12290803, r12290804, r12290805, r12290806, r12290807, r12290808, r12290809, r12290810, r12290811, r12290812, r12290813, r12290814, r12290815, r12290816, r12290817, r12290818, r12290819, r12290820, r12290821;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r12290784);
        mpfr_init(r12290785);
        mpfr_init_set_str(r12290786, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r12290787);
        mpfr_init_set_str(r12290788, "3", 10, MPFR_RNDN);
        mpfr_init(r12290789);
        mpfr_init(r12290790);
        mpfr_init_set_str(r12290791, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290792, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r12290793);
        mpfr_init(r12290794);
        mpfr_init(r12290795);
        mpfr_init_set_str(r12290796, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290797, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r12290798);
        mpfr_init(r12290799);
        mpfr_init_set_str(r12290800, "1", 10, MPFR_RNDN);
        mpfr_init(r12290801);
        mpfr_init(r12290802);
        mpfr_init(r12290803);
        mpfr_init(r12290804);
        mpfr_init(r12290805);
        mpfr_init_set_str(r12290806, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r12290807);
        mpfr_init_set_str(r12290808, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r12290809);
        mpfr_init(r12290810);
        mpfr_init(r12290811);
        mpfr_init_set_str(r12290812, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r12290813);
        mpfr_init_set_str(r12290814, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r12290815);
        mpfr_init(r12290816);
        mpfr_init(r12290817);
        mpfr_init(r12290818);
        mpfr_init(r12290819);
        mpfr_init(r12290820);
        mpfr_init(r12290821);
}

double f_fm(double x) {
        mpfr_set_d(r12290784, x, MPFR_RNDN);
        mpfr_mul(r12290785, r12290784, r12290784, MPFR_RNDN);
        ;
        mpfr_mul(r12290787, r12290785, r12290786, MPFR_RNDN);
        ;
        mpfr_pow(r12290789, r12290785, r12290788, MPFR_RNDN);
        mpfr_mul(r12290790, r12290787, r12290789, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r12290793, r12290785, r12290792, MPFR_RNDN);
        mpfr_add(r12290794, r12290791, r12290793, MPFR_RNDN);
        mpfr_add(r12290795, r12290790, r12290794, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r12290798, r12290785, r12290797, MPFR_RNDN);
        mpfr_add(r12290799, r12290796, r12290798, MPFR_RNDN);
        ;
        mpfr_add(r12290801, r12290788, r12290800, MPFR_RNDN);
        mpfr_pow(r12290802, r12290785, r12290801, MPFR_RNDN);
        mpfr_mul(r12290803, r12290789, r12290802, MPFR_RNDN);
        mpfr_mul(r12290804, r12290799, r12290803, MPFR_RNDN);
        mpfr_add(r12290805, r12290795, r12290804, MPFR_RNDN);
        ;
        mpfr_mul(r12290807, r12290785, r12290806, MPFR_RNDN);
        ;
        mpfr_add(r12290809, r12290807, r12290808, MPFR_RNDN);
        mpfr_mul(r12290810, r12290785, r12290785, MPFR_RNDN);
        mpfr_mul(r12290811, r12290809, r12290810, MPFR_RNDN);
        ;
        mpfr_mul(r12290813, r12290785, r12290812, MPFR_RNDN);
        ;
        mpfr_add(r12290815, r12290813, r12290814, MPFR_RNDN);
        mpfr_pow(r12290816, r12290784, r12290788, MPFR_RNDN);
        mpfr_mul(r12290817, r12290816, r12290785, MPFR_RNDN);
        mpfr_mul(r12290818, r12290817, r12290817, MPFR_RNDN);
        mpfr_mul(r12290819, r12290815, r12290818, MPFR_RNDN);
        mpfr_add(r12290820, r12290811, r12290819, MPFR_RNDN);
        mpfr_add(r12290821, r12290805, r12290820, MPFR_RNDN);
        return mpfr_get_d(r12290821, MPFR_RNDN);
}

static mpfr_t r12290822, r12290823, r12290824, r12290825, r12290826, r12290827, r12290828, r12290829, r12290830, r12290831, r12290832, r12290833, r12290834, r12290835, r12290836, r12290837, r12290838, r12290839, r12290840, r12290841, r12290842, r12290843, r12290844, r12290845, r12290846, r12290847, r12290848, r12290849, r12290850, r12290851, r12290852, r12290853, r12290854, r12290855, r12290856, r12290857, r12290858, r12290859;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r12290822);
        mpfr_init(r12290823);
        mpfr_init_set_str(r12290824, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r12290825);
        mpfr_init_set_str(r12290826, "3", 10, MPFR_RNDN);
        mpfr_init(r12290827);
        mpfr_init(r12290828);
        mpfr_init_set_str(r12290829, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290830, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r12290831);
        mpfr_init(r12290832);
        mpfr_init(r12290833);
        mpfr_init_set_str(r12290834, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290835, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r12290836);
        mpfr_init(r12290837);
        mpfr_init_set_str(r12290838, "1", 10, MPFR_RNDN);
        mpfr_init(r12290839);
        mpfr_init(r12290840);
        mpfr_init(r12290841);
        mpfr_init(r12290842);
        mpfr_init(r12290843);
        mpfr_init_set_str(r12290844, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r12290845);
        mpfr_init_set_str(r12290846, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r12290847);
        mpfr_init(r12290848);
        mpfr_init(r12290849);
        mpfr_init_set_str(r12290850, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r12290851);
        mpfr_init_set_str(r12290852, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r12290853);
        mpfr_init(r12290854);
        mpfr_init(r12290855);
        mpfr_init(r12290856);
        mpfr_init(r12290857);
        mpfr_init(r12290858);
        mpfr_init(r12290859);
}

double f_dm(double x) {
        mpfr_set_d(r12290822, x, MPFR_RNDN);
        mpfr_mul(r12290823, r12290822, r12290822, MPFR_RNDN);
        ;
        mpfr_mul(r12290825, r12290823, r12290824, MPFR_RNDN);
        ;
        mpfr_pow(r12290827, r12290823, r12290826, MPFR_RNDN);
        mpfr_mul(r12290828, r12290825, r12290827, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r12290831, r12290823, r12290830, MPFR_RNDN);
        mpfr_add(r12290832, r12290829, r12290831, MPFR_RNDN);
        mpfr_add(r12290833, r12290828, r12290832, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r12290836, r12290823, r12290835, MPFR_RNDN);
        mpfr_add(r12290837, r12290834, r12290836, MPFR_RNDN);
        ;
        mpfr_add(r12290839, r12290826, r12290838, MPFR_RNDN);
        mpfr_pow(r12290840, r12290823, r12290839, MPFR_RNDN);
        mpfr_mul(r12290841, r12290827, r12290840, MPFR_RNDN);
        mpfr_mul(r12290842, r12290837, r12290841, MPFR_RNDN);
        mpfr_add(r12290843, r12290833, r12290842, MPFR_RNDN);
        ;
        mpfr_mul(r12290845, r12290823, r12290844, MPFR_RNDN);
        ;
        mpfr_add(r12290847, r12290845, r12290846, MPFR_RNDN);
        mpfr_mul(r12290848, r12290823, r12290823, MPFR_RNDN);
        mpfr_mul(r12290849, r12290847, r12290848, MPFR_RNDN);
        ;
        mpfr_mul(r12290851, r12290823, r12290850, MPFR_RNDN);
        ;
        mpfr_add(r12290853, r12290851, r12290852, MPFR_RNDN);
        mpfr_pow(r12290854, r12290822, r12290826, MPFR_RNDN);
        mpfr_mul(r12290855, r12290854, r12290823, MPFR_RNDN);
        mpfr_mul(r12290856, r12290855, r12290855, MPFR_RNDN);
        mpfr_mul(r12290857, r12290853, r12290856, MPFR_RNDN);
        mpfr_add(r12290858, r12290849, r12290857, MPFR_RNDN);
        mpfr_add(r12290859, r12290843, r12290858, MPFR_RNDN);
        return mpfr_get_d(r12290859, MPFR_RNDN);
}

