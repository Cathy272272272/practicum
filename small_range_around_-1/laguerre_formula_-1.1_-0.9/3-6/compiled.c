#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r20712642 = 1.0;
        float r20712643 = -6.0;
        float r20712644 = x;
        float r20712645 = r20712643 * r20712644;
        float r20712646 = r20712642 + r20712645;
        float r20712647 = 7.5;
        float r20712648 = r20712644 * r20712644;
        float r20712649 = r20712647 * r20712648;
        float r20712650 = r20712646 + r20712649;
        float r20712651 = -3.333333;
        float r20712652 = r20712648 * r20712644;
        float r20712653 = r20712651 * r20712652;
        float r20712654 = r20712650 + r20712653;
        float r20712655 = 0.625;
        float r20712656 = r20712652 * r20712644;
        float r20712657 = r20712655 * r20712656;
        float r20712658 = r20712654 + r20712657;
        float r20712659 = -0.05;
        float r20712660 = r20712656 * r20712644;
        float r20712661 = r20712659 * r20712660;
        float r20712662 = r20712658 + r20712661;
        float r20712663 = 0.001389;
        float r20712664 = r20712660 * r20712644;
        float r20712665 = r20712663 * r20712664;
        float r20712666 = r20712662 + r20712665;
        return r20712666;
}

double f_id(double x) {
        double r20712667 = 1.0;
        double r20712668 = -6.0;
        double r20712669 = x;
        double r20712670 = r20712668 * r20712669;
        double r20712671 = r20712667 + r20712670;
        double r20712672 = 7.5;
        double r20712673 = r20712669 * r20712669;
        double r20712674 = r20712672 * r20712673;
        double r20712675 = r20712671 + r20712674;
        double r20712676 = -3.333333;
        double r20712677 = r20712673 * r20712669;
        double r20712678 = r20712676 * r20712677;
        double r20712679 = r20712675 + r20712678;
        double r20712680 = 0.625;
        double r20712681 = r20712677 * r20712669;
        double r20712682 = r20712680 * r20712681;
        double r20712683 = r20712679 + r20712682;
        double r20712684 = -0.05;
        double r20712685 = r20712681 * r20712669;
        double r20712686 = r20712684 * r20712685;
        double r20712687 = r20712683 + r20712686;
        double r20712688 = 0.001389;
        double r20712689 = r20712685 * r20712669;
        double r20712690 = r20712688 * r20712689;
        double r20712691 = r20712687 + r20712690;
        return r20712691;
}


double f_of(float x) {
        float r20712692 = -6.0;
        float r20712693 = x;
        float r20712694 = r20712692 * r20712693;
        float r20712695 = 1.0;
        float r20712696 = r20712694 + r20712695;
        float r20712697 = r20712693 * r20712693;
        float r20712698 = r20712697 * r20712697;
        float r20712699 = 0.001389;
        float r20712700 = r20712693 * r20712699;
        float r20712701 = r20712693 * r20712700;
        float r20712702 = 0.625;
        float r20712703 = -0.05;
        float r20712704 = r20712703 * r20712693;
        float r20712705 = r20712702 + r20712704;
        float r20712706 = r20712701 + r20712705;
        float r20712707 = r20712698 * r20712706;
        float r20712708 = r20712696 + r20712707;
        float r20712709 = -3.333333;
        float r20712710 = r20712693 * r20712709;
        float r20712711 = 3;
        float r20712712 = pow(r20712710, r20712711);
        float r20712713 = 7.5;
        float r20712714 = pow(r20712713, r20712711);
        float r20712715 = r20712712 + r20712714;
        float r20712716 = 2;
        float r20712717 = r20712716 * r20712711;
        float r20712718 = pow(r20712693, r20712717);
        float r20712719 = r20712715 * r20712718;
        float r20712720 = r20712710 * r20712710;
        float r20712721 = r20712713 * r20712713;
        float r20712722 = r20712710 * r20712713;
        float r20712723 = r20712721 - r20712722;
        float r20712724 = r20712720 + r20712723;
        float r20712725 = r20712719 / r20712724;
        float r20712726 = 56.25;
        float r20712727 = 49.999995;
        float r20712728 = r20712693 * r20712727;
        float r20712729 = r20712726 - r20712728;
        float r20712730 = 11.111108888889001;
        float r20712731 = r20712693 * r20712730;
        float r20712732 = r20712693 * r20712731;
        float r20712733 = r20712729 + r20712732;
        float r20712734 = r20712725 * r20712733;
        float r20712735 = cbrt(r20712734);
        float r20712736 = r20712708 + r20712735;
        return r20712736;
}

double f_od(double x) {
        double r20712737 = -6.0;
        double r20712738 = x;
        double r20712739 = r20712737 * r20712738;
        double r20712740 = 1.0;
        double r20712741 = r20712739 + r20712740;
        double r20712742 = r20712738 * r20712738;
        double r20712743 = r20712742 * r20712742;
        double r20712744 = 0.001389;
        double r20712745 = r20712738 * r20712744;
        double r20712746 = r20712738 * r20712745;
        double r20712747 = 0.625;
        double r20712748 = -0.05;
        double r20712749 = r20712748 * r20712738;
        double r20712750 = r20712747 + r20712749;
        double r20712751 = r20712746 + r20712750;
        double r20712752 = r20712743 * r20712751;
        double r20712753 = r20712741 + r20712752;
        double r20712754 = -3.333333;
        double r20712755 = r20712738 * r20712754;
        double r20712756 = 3;
        double r20712757 = pow(r20712755, r20712756);
        double r20712758 = 7.5;
        double r20712759 = pow(r20712758, r20712756);
        double r20712760 = r20712757 + r20712759;
        double r20712761 = 2;
        double r20712762 = r20712761 * r20712756;
        double r20712763 = pow(r20712738, r20712762);
        double r20712764 = r20712760 * r20712763;
        double r20712765 = r20712755 * r20712755;
        double r20712766 = r20712758 * r20712758;
        double r20712767 = r20712755 * r20712758;
        double r20712768 = r20712766 - r20712767;
        double r20712769 = r20712765 + r20712768;
        double r20712770 = r20712764 / r20712769;
        double r20712771 = 56.25;
        double r20712772 = 49.999995;
        double r20712773 = r20712738 * r20712772;
        double r20712774 = r20712771 - r20712773;
        double r20712775 = 11.111108888889001;
        double r20712776 = r20712738 * r20712775;
        double r20712777 = r20712738 * r20712776;
        double r20712778 = r20712774 + r20712777;
        double r20712779 = r20712770 * r20712778;
        double r20712780 = cbrt(r20712779);
        double r20712781 = r20712753 + r20712780;
        return r20712781;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20712782, r20712783, r20712784, r20712785, r20712786, r20712787, r20712788, r20712789, r20712790, r20712791, r20712792, r20712793, r20712794, r20712795, r20712796, r20712797, r20712798, r20712799, r20712800, r20712801, r20712802, r20712803, r20712804, r20712805, r20712806;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20712782, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712783, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r20712784);
        mpfr_init(r20712785);
        mpfr_init(r20712786);
        mpfr_init_set_str(r20712787, "7.5", 10, MPFR_RNDN);
        mpfr_init(r20712788);
        mpfr_init(r20712789);
        mpfr_init(r20712790);
        mpfr_init_set_str(r20712791, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r20712792);
        mpfr_init(r20712793);
        mpfr_init(r20712794);
        mpfr_init_set_str(r20712795, "0.625", 10, MPFR_RNDN);
        mpfr_init(r20712796);
        mpfr_init(r20712797);
        mpfr_init(r20712798);
        mpfr_init_set_str(r20712799, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r20712800);
        mpfr_init(r20712801);
        mpfr_init(r20712802);
        mpfr_init_set_str(r20712803, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r20712804);
        mpfr_init(r20712805);
        mpfr_init(r20712806);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20712784, x, MPFR_RNDN);
        mpfr_mul(r20712785, r20712783, r20712784, MPFR_RNDN);
        mpfr_add(r20712786, r20712782, r20712785, MPFR_RNDN);
        ;
        mpfr_mul(r20712788, r20712784, r20712784, MPFR_RNDN);
        mpfr_mul(r20712789, r20712787, r20712788, MPFR_RNDN);
        mpfr_add(r20712790, r20712786, r20712789, MPFR_RNDN);
        ;
        mpfr_mul(r20712792, r20712788, r20712784, MPFR_RNDN);
        mpfr_mul(r20712793, r20712791, r20712792, MPFR_RNDN);
        mpfr_add(r20712794, r20712790, r20712793, MPFR_RNDN);
        ;
        mpfr_mul(r20712796, r20712792, r20712784, MPFR_RNDN);
        mpfr_mul(r20712797, r20712795, r20712796, MPFR_RNDN);
        mpfr_add(r20712798, r20712794, r20712797, MPFR_RNDN);
        ;
        mpfr_mul(r20712800, r20712796, r20712784, MPFR_RNDN);
        mpfr_mul(r20712801, r20712799, r20712800, MPFR_RNDN);
        mpfr_add(r20712802, r20712798, r20712801, MPFR_RNDN);
        ;
        mpfr_mul(r20712804, r20712800, r20712784, MPFR_RNDN);
        mpfr_mul(r20712805, r20712803, r20712804, MPFR_RNDN);
        mpfr_add(r20712806, r20712802, r20712805, MPFR_RNDN);
        return mpfr_get_d(r20712806, MPFR_RNDN);
}

static mpfr_t r20712807, r20712808, r20712809, r20712810, r20712811, r20712812, r20712813, r20712814, r20712815, r20712816, r20712817, r20712818, r20712819, r20712820, r20712821, r20712822, r20712823, r20712824, r20712825, r20712826, r20712827, r20712828, r20712829, r20712830, r20712831, r20712832, r20712833, r20712834, r20712835, r20712836, r20712837, r20712838, r20712839, r20712840, r20712841, r20712842, r20712843, r20712844, r20712845, r20712846, r20712847, r20712848, r20712849, r20712850, r20712851;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20712807, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r20712808);
        mpfr_init(r20712809);
        mpfr_init_set_str(r20712810, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20712811);
        mpfr_init(r20712812);
        mpfr_init(r20712813);
        mpfr_init_set_str(r20712814, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r20712815);
        mpfr_init(r20712816);
        mpfr_init_set_str(r20712817, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712818, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r20712819);
        mpfr_init(r20712820);
        mpfr_init(r20712821);
        mpfr_init(r20712822);
        mpfr_init(r20712823);
        mpfr_init_set_str(r20712824, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r20712825);
        mpfr_init_set_str(r20712826, "3", 10, MPFR_RNDN);
        mpfr_init(r20712827);
        mpfr_init_set_str(r20712828, "7.5", 10, MPFR_RNDN);
        mpfr_init(r20712829);
        mpfr_init(r20712830);
        mpfr_init_set_str(r20712831, "2", 10, MPFR_RNDN);
        mpfr_init(r20712832);
        mpfr_init(r20712833);
        mpfr_init(r20712834);
        mpfr_init(r20712835);
        mpfr_init(r20712836);
        mpfr_init(r20712837);
        mpfr_init(r20712838);
        mpfr_init(r20712839);
        mpfr_init(r20712840);
        mpfr_init_set_str(r20712841, "56.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712842, "49.999995", 10, MPFR_RNDN);
        mpfr_init(r20712843);
        mpfr_init(r20712844);
        mpfr_init_set_str(r20712845, "11.111108888889001", 10, MPFR_RNDN);
        mpfr_init(r20712846);
        mpfr_init(r20712847);
        mpfr_init(r20712848);
        mpfr_init(r20712849);
        mpfr_init(r20712850);
        mpfr_init(r20712851);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r20712808, x, MPFR_RNDN);
        mpfr_mul(r20712809, r20712807, r20712808, MPFR_RNDN);
        ;
        mpfr_add(r20712811, r20712809, r20712810, MPFR_RNDN);
        mpfr_mul(r20712812, r20712808, r20712808, MPFR_RNDN);
        mpfr_mul(r20712813, r20712812, r20712812, MPFR_RNDN);
        ;
        mpfr_mul(r20712815, r20712808, r20712814, MPFR_RNDN);
        mpfr_mul(r20712816, r20712808, r20712815, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20712819, r20712818, r20712808, MPFR_RNDN);
        mpfr_add(r20712820, r20712817, r20712819, MPFR_RNDN);
        mpfr_add(r20712821, r20712816, r20712820, MPFR_RNDN);
        mpfr_mul(r20712822, r20712813, r20712821, MPFR_RNDN);
        mpfr_add(r20712823, r20712811, r20712822, MPFR_RNDN);
        ;
        mpfr_mul(r20712825, r20712808, r20712824, MPFR_RNDN);
        ;
        mpfr_pow(r20712827, r20712825, r20712826, MPFR_RNDN);
        ;
        mpfr_pow(r20712829, r20712828, r20712826, MPFR_RNDN);
        mpfr_add(r20712830, r20712827, r20712829, MPFR_RNDN);
        ;
        mpfr_mul(r20712832, r20712831, r20712826, MPFR_RNDN);
        mpfr_pow(r20712833, r20712808, r20712832, MPFR_RNDN);
        mpfr_mul(r20712834, r20712830, r20712833, MPFR_RNDN);
        mpfr_mul(r20712835, r20712825, r20712825, MPFR_RNDN);
        mpfr_mul(r20712836, r20712828, r20712828, MPFR_RNDN);
        mpfr_mul(r20712837, r20712825, r20712828, MPFR_RNDN);
        mpfr_sub(r20712838, r20712836, r20712837, MPFR_RNDN);
        mpfr_add(r20712839, r20712835, r20712838, MPFR_RNDN);
        mpfr_div(r20712840, r20712834, r20712839, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20712843, r20712808, r20712842, MPFR_RNDN);
        mpfr_sub(r20712844, r20712841, r20712843, MPFR_RNDN);
        ;
        mpfr_mul(r20712846, r20712808, r20712845, MPFR_RNDN);
        mpfr_mul(r20712847, r20712808, r20712846, MPFR_RNDN);
        mpfr_add(r20712848, r20712844, r20712847, MPFR_RNDN);
        mpfr_mul(r20712849, r20712840, r20712848, MPFR_RNDN);
        mpfr_cbrt(r20712850, r20712849, MPFR_RNDN);
        mpfr_add(r20712851, r20712823, r20712850, MPFR_RNDN);
        return mpfr_get_d(r20712851, MPFR_RNDN);
}

static mpfr_t r20712852, r20712853, r20712854, r20712855, r20712856, r20712857, r20712858, r20712859, r20712860, r20712861, r20712862, r20712863, r20712864, r20712865, r20712866, r20712867, r20712868, r20712869, r20712870, r20712871, r20712872, r20712873, r20712874, r20712875, r20712876, r20712877, r20712878, r20712879, r20712880, r20712881, r20712882, r20712883, r20712884, r20712885, r20712886, r20712887, r20712888, r20712889, r20712890, r20712891, r20712892, r20712893, r20712894, r20712895, r20712896;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20712852, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r20712853);
        mpfr_init(r20712854);
        mpfr_init_set_str(r20712855, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20712856);
        mpfr_init(r20712857);
        mpfr_init(r20712858);
        mpfr_init_set_str(r20712859, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r20712860);
        mpfr_init(r20712861);
        mpfr_init_set_str(r20712862, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712863, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r20712864);
        mpfr_init(r20712865);
        mpfr_init(r20712866);
        mpfr_init(r20712867);
        mpfr_init(r20712868);
        mpfr_init_set_str(r20712869, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r20712870);
        mpfr_init_set_str(r20712871, "3", 10, MPFR_RNDN);
        mpfr_init(r20712872);
        mpfr_init_set_str(r20712873, "7.5", 10, MPFR_RNDN);
        mpfr_init(r20712874);
        mpfr_init(r20712875);
        mpfr_init_set_str(r20712876, "2", 10, MPFR_RNDN);
        mpfr_init(r20712877);
        mpfr_init(r20712878);
        mpfr_init(r20712879);
        mpfr_init(r20712880);
        mpfr_init(r20712881);
        mpfr_init(r20712882);
        mpfr_init(r20712883);
        mpfr_init(r20712884);
        mpfr_init(r20712885);
        mpfr_init_set_str(r20712886, "56.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712887, "49.999995", 10, MPFR_RNDN);
        mpfr_init(r20712888);
        mpfr_init(r20712889);
        mpfr_init_set_str(r20712890, "11.111108888889001", 10, MPFR_RNDN);
        mpfr_init(r20712891);
        mpfr_init(r20712892);
        mpfr_init(r20712893);
        mpfr_init(r20712894);
        mpfr_init(r20712895);
        mpfr_init(r20712896);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r20712853, x, MPFR_RNDN);
        mpfr_mul(r20712854, r20712852, r20712853, MPFR_RNDN);
        ;
        mpfr_add(r20712856, r20712854, r20712855, MPFR_RNDN);
        mpfr_mul(r20712857, r20712853, r20712853, MPFR_RNDN);
        mpfr_mul(r20712858, r20712857, r20712857, MPFR_RNDN);
        ;
        mpfr_mul(r20712860, r20712853, r20712859, MPFR_RNDN);
        mpfr_mul(r20712861, r20712853, r20712860, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20712864, r20712863, r20712853, MPFR_RNDN);
        mpfr_add(r20712865, r20712862, r20712864, MPFR_RNDN);
        mpfr_add(r20712866, r20712861, r20712865, MPFR_RNDN);
        mpfr_mul(r20712867, r20712858, r20712866, MPFR_RNDN);
        mpfr_add(r20712868, r20712856, r20712867, MPFR_RNDN);
        ;
        mpfr_mul(r20712870, r20712853, r20712869, MPFR_RNDN);
        ;
        mpfr_pow(r20712872, r20712870, r20712871, MPFR_RNDN);
        ;
        mpfr_pow(r20712874, r20712873, r20712871, MPFR_RNDN);
        mpfr_add(r20712875, r20712872, r20712874, MPFR_RNDN);
        ;
        mpfr_mul(r20712877, r20712876, r20712871, MPFR_RNDN);
        mpfr_pow(r20712878, r20712853, r20712877, MPFR_RNDN);
        mpfr_mul(r20712879, r20712875, r20712878, MPFR_RNDN);
        mpfr_mul(r20712880, r20712870, r20712870, MPFR_RNDN);
        mpfr_mul(r20712881, r20712873, r20712873, MPFR_RNDN);
        mpfr_mul(r20712882, r20712870, r20712873, MPFR_RNDN);
        mpfr_sub(r20712883, r20712881, r20712882, MPFR_RNDN);
        mpfr_add(r20712884, r20712880, r20712883, MPFR_RNDN);
        mpfr_div(r20712885, r20712879, r20712884, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20712888, r20712853, r20712887, MPFR_RNDN);
        mpfr_sub(r20712889, r20712886, r20712888, MPFR_RNDN);
        ;
        mpfr_mul(r20712891, r20712853, r20712890, MPFR_RNDN);
        mpfr_mul(r20712892, r20712853, r20712891, MPFR_RNDN);
        mpfr_add(r20712893, r20712889, r20712892, MPFR_RNDN);
        mpfr_mul(r20712894, r20712885, r20712893, MPFR_RNDN);
        mpfr_cbrt(r20712895, r20712894, MPFR_RNDN);
        mpfr_add(r20712896, r20712868, r20712895, MPFR_RNDN);
        return mpfr_get_d(r20712896, MPFR_RNDN);
}

