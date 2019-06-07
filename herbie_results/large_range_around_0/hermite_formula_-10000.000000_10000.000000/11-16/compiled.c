#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r11627596 = 518918400.0;
        float r11627597 = -8302694400.0;
        float r11627598 = x;
        float r11627599 = r11627598 * r11627598;
        float r11627600 = r11627597 * r11627599;
        float r11627601 = r11627596 + r11627600;
        float r11627602 = 19372953600.0;
        float r11627603 = r11627599 * r11627598;
        float r11627604 = r11627603 * r11627598;
        float r11627605 = r11627602 * r11627604;
        float r11627606 = r11627601 + r11627605;
        float r11627607 = -15498362880.0;
        float r11627608 = r11627604 * r11627598;
        float r11627609 = r11627608 * r11627598;
        float r11627610 = r11627607 * r11627609;
        float r11627611 = r11627606 + r11627610;
        float r11627612 = 5535129600.0;
        float r11627613 = r11627609 * r11627598;
        float r11627614 = r11627613 * r11627598;
        float r11627615 = r11627612 * r11627614;
        float r11627616 = r11627611 + r11627615;
        float r11627617 = -984023040.0;
        float r11627618 = r11627614 * r11627598;
        float r11627619 = r11627618 * r11627598;
        float r11627620 = r11627617 * r11627619;
        float r11627621 = r11627616 + r11627620;
        float r11627622 = 89456640.0;
        float r11627623 = r11627619 * r11627598;
        float r11627624 = r11627623 * r11627598;
        float r11627625 = r11627622 * r11627624;
        float r11627626 = r11627621 + r11627625;
        float r11627627 = -3932160.0;
        float r11627628 = r11627624 * r11627598;
        float r11627629 = r11627628 * r11627598;
        float r11627630 = r11627627 * r11627629;
        float r11627631 = r11627626 + r11627630;
        float r11627632 = 65536.0;
        float r11627633 = r11627629 * r11627598;
        float r11627634 = r11627633 * r11627598;
        float r11627635 = r11627632 * r11627634;
        float r11627636 = r11627631 + r11627635;
        return r11627636;
}

double f_id(double x) {
        double r11627637 = 518918400.0;
        double r11627638 = -8302694400.0;
        double r11627639 = x;
        double r11627640 = r11627639 * r11627639;
        double r11627641 = r11627638 * r11627640;
        double r11627642 = r11627637 + r11627641;
        double r11627643 = 19372953600.0;
        double r11627644 = r11627640 * r11627639;
        double r11627645 = r11627644 * r11627639;
        double r11627646 = r11627643 * r11627645;
        double r11627647 = r11627642 + r11627646;
        double r11627648 = -15498362880.0;
        double r11627649 = r11627645 * r11627639;
        double r11627650 = r11627649 * r11627639;
        double r11627651 = r11627648 * r11627650;
        double r11627652 = r11627647 + r11627651;
        double r11627653 = 5535129600.0;
        double r11627654 = r11627650 * r11627639;
        double r11627655 = r11627654 * r11627639;
        double r11627656 = r11627653 * r11627655;
        double r11627657 = r11627652 + r11627656;
        double r11627658 = -984023040.0;
        double r11627659 = r11627655 * r11627639;
        double r11627660 = r11627659 * r11627639;
        double r11627661 = r11627658 * r11627660;
        double r11627662 = r11627657 + r11627661;
        double r11627663 = 89456640.0;
        double r11627664 = r11627660 * r11627639;
        double r11627665 = r11627664 * r11627639;
        double r11627666 = r11627663 * r11627665;
        double r11627667 = r11627662 + r11627666;
        double r11627668 = -3932160.0;
        double r11627669 = r11627665 * r11627639;
        double r11627670 = r11627669 * r11627639;
        double r11627671 = r11627668 * r11627670;
        double r11627672 = r11627667 + r11627671;
        double r11627673 = 65536.0;
        double r11627674 = r11627670 * r11627639;
        double r11627675 = r11627674 * r11627639;
        double r11627676 = r11627673 * r11627675;
        double r11627677 = r11627672 + r11627676;
        return r11627677;
}


double f_of(float x) {
        float r11627678 = x;
        float r11627679 = r11627678 * r11627678;
        float r11627680 = 5535129600.0;
        float r11627681 = r11627679 * r11627680;
        float r11627682 = 3;
        float r11627683 = pow(r11627679, r11627682);
        float r11627684 = r11627681 * r11627683;
        float r11627685 = 518918400.0;
        float r11627686 = -8302694400.0;
        float r11627687 = r11627679 * r11627686;
        float r11627688 = r11627685 + r11627687;
        float r11627689 = r11627684 + r11627688;
        float r11627690 = -3932160.0;
        float r11627691 = 65536.0;
        float r11627692 = r11627679 * r11627691;
        float r11627693 = r11627690 + r11627692;
        float r11627694 = 1;
        float r11627695 = r11627682 + r11627694;
        float r11627696 = pow(r11627679, r11627695);
        float r11627697 = r11627683 * r11627696;
        float r11627698 = r11627693 * r11627697;
        float r11627699 = r11627689 + r11627698;
        float r11627700 = -15498362880.0;
        float r11627701 = r11627679 * r11627700;
        float r11627702 = 19372953600.0;
        float r11627703 = r11627701 + r11627702;
        float r11627704 = r11627679 * r11627679;
        float r11627705 = r11627703 * r11627704;
        float r11627706 = 89456640.0;
        float r11627707 = r11627679 * r11627706;
        float r11627708 = -984023040.0;
        float r11627709 = r11627707 + r11627708;
        float r11627710 = pow(r11627678, r11627682);
        float r11627711 = r11627710 * r11627679;
        float r11627712 = r11627711 * r11627711;
        float r11627713 = r11627709 * r11627712;
        float r11627714 = r11627705 + r11627713;
        float r11627715 = r11627699 + r11627714;
        return r11627715;
}

double f_od(double x) {
        double r11627716 = x;
        double r11627717 = r11627716 * r11627716;
        double r11627718 = 5535129600.0;
        double r11627719 = r11627717 * r11627718;
        double r11627720 = 3;
        double r11627721 = pow(r11627717, r11627720);
        double r11627722 = r11627719 * r11627721;
        double r11627723 = 518918400.0;
        double r11627724 = -8302694400.0;
        double r11627725 = r11627717 * r11627724;
        double r11627726 = r11627723 + r11627725;
        double r11627727 = r11627722 + r11627726;
        double r11627728 = -3932160.0;
        double r11627729 = 65536.0;
        double r11627730 = r11627717 * r11627729;
        double r11627731 = r11627728 + r11627730;
        double r11627732 = 1;
        double r11627733 = r11627720 + r11627732;
        double r11627734 = pow(r11627717, r11627733);
        double r11627735 = r11627721 * r11627734;
        double r11627736 = r11627731 * r11627735;
        double r11627737 = r11627727 + r11627736;
        double r11627738 = -15498362880.0;
        double r11627739 = r11627717 * r11627738;
        double r11627740 = 19372953600.0;
        double r11627741 = r11627739 + r11627740;
        double r11627742 = r11627717 * r11627717;
        double r11627743 = r11627741 * r11627742;
        double r11627744 = 89456640.0;
        double r11627745 = r11627717 * r11627744;
        double r11627746 = -984023040.0;
        double r11627747 = r11627745 + r11627746;
        double r11627748 = pow(r11627716, r11627720);
        double r11627749 = r11627748 * r11627717;
        double r11627750 = r11627749 * r11627749;
        double r11627751 = r11627747 * r11627750;
        double r11627752 = r11627743 + r11627751;
        double r11627753 = r11627737 + r11627752;
        return r11627753;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11627754, r11627755, r11627756, r11627757, r11627758, r11627759, r11627760, r11627761, r11627762, r11627763, r11627764, r11627765, r11627766, r11627767, r11627768, r11627769, r11627770, r11627771, r11627772, r11627773, r11627774, r11627775, r11627776, r11627777, r11627778, r11627779, r11627780, r11627781, r11627782, r11627783, r11627784, r11627785, r11627786, r11627787, r11627788, r11627789, r11627790, r11627791, r11627792, r11627793, r11627794;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11627754, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11627755, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r11627756);
        mpfr_init(r11627757);
        mpfr_init(r11627758);
        mpfr_init(r11627759);
        mpfr_init_set_str(r11627760, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r11627761);
        mpfr_init(r11627762);
        mpfr_init(r11627763);
        mpfr_init(r11627764);
        mpfr_init_set_str(r11627765, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r11627766);
        mpfr_init(r11627767);
        mpfr_init(r11627768);
        mpfr_init(r11627769);
        mpfr_init_set_str(r11627770, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r11627771);
        mpfr_init(r11627772);
        mpfr_init(r11627773);
        mpfr_init(r11627774);
        mpfr_init_set_str(r11627775, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r11627776);
        mpfr_init(r11627777);
        mpfr_init(r11627778);
        mpfr_init(r11627779);
        mpfr_init_set_str(r11627780, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r11627781);
        mpfr_init(r11627782);
        mpfr_init(r11627783);
        mpfr_init(r11627784);
        mpfr_init_set_str(r11627785, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r11627786);
        mpfr_init(r11627787);
        mpfr_init(r11627788);
        mpfr_init(r11627789);
        mpfr_init_set_str(r11627790, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r11627791);
        mpfr_init(r11627792);
        mpfr_init(r11627793);
        mpfr_init(r11627794);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11627756, x, MPFR_RNDN);
        mpfr_mul(r11627757, r11627756, r11627756, MPFR_RNDN);
        mpfr_mul(r11627758, r11627755, r11627757, MPFR_RNDN);
        mpfr_add(r11627759, r11627754, r11627758, MPFR_RNDN);
        ;
        mpfr_mul(r11627761, r11627757, r11627756, MPFR_RNDN);
        mpfr_mul(r11627762, r11627761, r11627756, MPFR_RNDN);
        mpfr_mul(r11627763, r11627760, r11627762, MPFR_RNDN);
        mpfr_add(r11627764, r11627759, r11627763, MPFR_RNDN);
        ;
        mpfr_mul(r11627766, r11627762, r11627756, MPFR_RNDN);
        mpfr_mul(r11627767, r11627766, r11627756, MPFR_RNDN);
        mpfr_mul(r11627768, r11627765, r11627767, MPFR_RNDN);
        mpfr_add(r11627769, r11627764, r11627768, MPFR_RNDN);
        ;
        mpfr_mul(r11627771, r11627767, r11627756, MPFR_RNDN);
        mpfr_mul(r11627772, r11627771, r11627756, MPFR_RNDN);
        mpfr_mul(r11627773, r11627770, r11627772, MPFR_RNDN);
        mpfr_add(r11627774, r11627769, r11627773, MPFR_RNDN);
        ;
        mpfr_mul(r11627776, r11627772, r11627756, MPFR_RNDN);
        mpfr_mul(r11627777, r11627776, r11627756, MPFR_RNDN);
        mpfr_mul(r11627778, r11627775, r11627777, MPFR_RNDN);
        mpfr_add(r11627779, r11627774, r11627778, MPFR_RNDN);
        ;
        mpfr_mul(r11627781, r11627777, r11627756, MPFR_RNDN);
        mpfr_mul(r11627782, r11627781, r11627756, MPFR_RNDN);
        mpfr_mul(r11627783, r11627780, r11627782, MPFR_RNDN);
        mpfr_add(r11627784, r11627779, r11627783, MPFR_RNDN);
        ;
        mpfr_mul(r11627786, r11627782, r11627756, MPFR_RNDN);
        mpfr_mul(r11627787, r11627786, r11627756, MPFR_RNDN);
        mpfr_mul(r11627788, r11627785, r11627787, MPFR_RNDN);
        mpfr_add(r11627789, r11627784, r11627788, MPFR_RNDN);
        ;
        mpfr_mul(r11627791, r11627787, r11627756, MPFR_RNDN);
        mpfr_mul(r11627792, r11627791, r11627756, MPFR_RNDN);
        mpfr_mul(r11627793, r11627790, r11627792, MPFR_RNDN);
        mpfr_add(r11627794, r11627789, r11627793, MPFR_RNDN);
        return mpfr_get_d(r11627794, MPFR_RNDN);
}

static mpfr_t r11627795, r11627796, r11627797, r11627798, r11627799, r11627800, r11627801, r11627802, r11627803, r11627804, r11627805, r11627806, r11627807, r11627808, r11627809, r11627810, r11627811, r11627812, r11627813, r11627814, r11627815, r11627816, r11627817, r11627818, r11627819, r11627820, r11627821, r11627822, r11627823, r11627824, r11627825, r11627826, r11627827, r11627828, r11627829, r11627830, r11627831, r11627832;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11627795);
        mpfr_init(r11627796);
        mpfr_init_set_str(r11627797, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r11627798);
        mpfr_init_set_str(r11627799, "3", 10, MPFR_RNDN);
        mpfr_init(r11627800);
        mpfr_init(r11627801);
        mpfr_init_set_str(r11627802, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11627803, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r11627804);
        mpfr_init(r11627805);
        mpfr_init(r11627806);
        mpfr_init_set_str(r11627807, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11627808, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r11627809);
        mpfr_init(r11627810);
        mpfr_init_set_str(r11627811, "1", 10, MPFR_RNDN);
        mpfr_init(r11627812);
        mpfr_init(r11627813);
        mpfr_init(r11627814);
        mpfr_init(r11627815);
        mpfr_init(r11627816);
        mpfr_init_set_str(r11627817, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r11627818);
        mpfr_init_set_str(r11627819, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r11627820);
        mpfr_init(r11627821);
        mpfr_init(r11627822);
        mpfr_init_set_str(r11627823, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r11627824);
        mpfr_init_set_str(r11627825, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r11627826);
        mpfr_init(r11627827);
        mpfr_init(r11627828);
        mpfr_init(r11627829);
        mpfr_init(r11627830);
        mpfr_init(r11627831);
        mpfr_init(r11627832);
}

double f_fm(double x) {
        mpfr_set_d(r11627795, x, MPFR_RNDN);
        mpfr_mul(r11627796, r11627795, r11627795, MPFR_RNDN);
        ;
        mpfr_mul(r11627798, r11627796, r11627797, MPFR_RNDN);
        ;
        mpfr_pow(r11627800, r11627796, r11627799, MPFR_RNDN);
        mpfr_mul(r11627801, r11627798, r11627800, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11627804, r11627796, r11627803, MPFR_RNDN);
        mpfr_add(r11627805, r11627802, r11627804, MPFR_RNDN);
        mpfr_add(r11627806, r11627801, r11627805, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11627809, r11627796, r11627808, MPFR_RNDN);
        mpfr_add(r11627810, r11627807, r11627809, MPFR_RNDN);
        ;
        mpfr_add(r11627812, r11627799, r11627811, MPFR_RNDN);
        mpfr_pow(r11627813, r11627796, r11627812, MPFR_RNDN);
        mpfr_mul(r11627814, r11627800, r11627813, MPFR_RNDN);
        mpfr_mul(r11627815, r11627810, r11627814, MPFR_RNDN);
        mpfr_add(r11627816, r11627806, r11627815, MPFR_RNDN);
        ;
        mpfr_mul(r11627818, r11627796, r11627817, MPFR_RNDN);
        ;
        mpfr_add(r11627820, r11627818, r11627819, MPFR_RNDN);
        mpfr_mul(r11627821, r11627796, r11627796, MPFR_RNDN);
        mpfr_mul(r11627822, r11627820, r11627821, MPFR_RNDN);
        ;
        mpfr_mul(r11627824, r11627796, r11627823, MPFR_RNDN);
        ;
        mpfr_add(r11627826, r11627824, r11627825, MPFR_RNDN);
        mpfr_pow(r11627827, r11627795, r11627799, MPFR_RNDN);
        mpfr_mul(r11627828, r11627827, r11627796, MPFR_RNDN);
        mpfr_mul(r11627829, r11627828, r11627828, MPFR_RNDN);
        mpfr_mul(r11627830, r11627826, r11627829, MPFR_RNDN);
        mpfr_add(r11627831, r11627822, r11627830, MPFR_RNDN);
        mpfr_add(r11627832, r11627816, r11627831, MPFR_RNDN);
        return mpfr_get_d(r11627832, MPFR_RNDN);
}

static mpfr_t r11627833, r11627834, r11627835, r11627836, r11627837, r11627838, r11627839, r11627840, r11627841, r11627842, r11627843, r11627844, r11627845, r11627846, r11627847, r11627848, r11627849, r11627850, r11627851, r11627852, r11627853, r11627854, r11627855, r11627856, r11627857, r11627858, r11627859, r11627860, r11627861, r11627862, r11627863, r11627864, r11627865, r11627866, r11627867, r11627868, r11627869, r11627870;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11627833);
        mpfr_init(r11627834);
        mpfr_init_set_str(r11627835, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r11627836);
        mpfr_init_set_str(r11627837, "3", 10, MPFR_RNDN);
        mpfr_init(r11627838);
        mpfr_init(r11627839);
        mpfr_init_set_str(r11627840, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11627841, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r11627842);
        mpfr_init(r11627843);
        mpfr_init(r11627844);
        mpfr_init_set_str(r11627845, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11627846, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r11627847);
        mpfr_init(r11627848);
        mpfr_init_set_str(r11627849, "1", 10, MPFR_RNDN);
        mpfr_init(r11627850);
        mpfr_init(r11627851);
        mpfr_init(r11627852);
        mpfr_init(r11627853);
        mpfr_init(r11627854);
        mpfr_init_set_str(r11627855, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r11627856);
        mpfr_init_set_str(r11627857, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r11627858);
        mpfr_init(r11627859);
        mpfr_init(r11627860);
        mpfr_init_set_str(r11627861, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r11627862);
        mpfr_init_set_str(r11627863, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r11627864);
        mpfr_init(r11627865);
        mpfr_init(r11627866);
        mpfr_init(r11627867);
        mpfr_init(r11627868);
        mpfr_init(r11627869);
        mpfr_init(r11627870);
}

double f_dm(double x) {
        mpfr_set_d(r11627833, x, MPFR_RNDN);
        mpfr_mul(r11627834, r11627833, r11627833, MPFR_RNDN);
        ;
        mpfr_mul(r11627836, r11627834, r11627835, MPFR_RNDN);
        ;
        mpfr_pow(r11627838, r11627834, r11627837, MPFR_RNDN);
        mpfr_mul(r11627839, r11627836, r11627838, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11627842, r11627834, r11627841, MPFR_RNDN);
        mpfr_add(r11627843, r11627840, r11627842, MPFR_RNDN);
        mpfr_add(r11627844, r11627839, r11627843, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11627847, r11627834, r11627846, MPFR_RNDN);
        mpfr_add(r11627848, r11627845, r11627847, MPFR_RNDN);
        ;
        mpfr_add(r11627850, r11627837, r11627849, MPFR_RNDN);
        mpfr_pow(r11627851, r11627834, r11627850, MPFR_RNDN);
        mpfr_mul(r11627852, r11627838, r11627851, MPFR_RNDN);
        mpfr_mul(r11627853, r11627848, r11627852, MPFR_RNDN);
        mpfr_add(r11627854, r11627844, r11627853, MPFR_RNDN);
        ;
        mpfr_mul(r11627856, r11627834, r11627855, MPFR_RNDN);
        ;
        mpfr_add(r11627858, r11627856, r11627857, MPFR_RNDN);
        mpfr_mul(r11627859, r11627834, r11627834, MPFR_RNDN);
        mpfr_mul(r11627860, r11627858, r11627859, MPFR_RNDN);
        ;
        mpfr_mul(r11627862, r11627834, r11627861, MPFR_RNDN);
        ;
        mpfr_add(r11627864, r11627862, r11627863, MPFR_RNDN);
        mpfr_pow(r11627865, r11627833, r11627837, MPFR_RNDN);
        mpfr_mul(r11627866, r11627865, r11627834, MPFR_RNDN);
        mpfr_mul(r11627867, r11627866, r11627866, MPFR_RNDN);
        mpfr_mul(r11627868, r11627864, r11627867, MPFR_RNDN);
        mpfr_add(r11627869, r11627860, r11627868, MPFR_RNDN);
        mpfr_add(r11627870, r11627854, r11627869, MPFR_RNDN);
        return mpfr_get_d(r11627870, MPFR_RNDN);
}

