#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r10197647 = 1.0;
        float r10197648 = -9.0;
        float r10197649 = x;
        float r10197650 = r10197648 * r10197649;
        float r10197651 = r10197647 + r10197650;
        float r10197652 = 18.0;
        float r10197653 = r10197649 * r10197649;
        float r10197654 = r10197652 * r10197653;
        float r10197655 = r10197651 + r10197654;
        float r10197656 = -14.0;
        float r10197657 = r10197653 * r10197649;
        float r10197658 = r10197656 * r10197657;
        float r10197659 = r10197655 + r10197658;
        float r10197660 = 5.25;
        float r10197661 = r10197657 * r10197649;
        float r10197662 = r10197660 * r10197661;
        float r10197663 = r10197659 + r10197662;
        float r10197664 = -1.05;
        float r10197665 = r10197661 * r10197649;
        float r10197666 = r10197664 * r10197665;
        float r10197667 = r10197663 + r10197666;
        float r10197668 = 0.116667;
        float r10197669 = r10197665 * r10197649;
        float r10197670 = r10197668 * r10197669;
        float r10197671 = r10197667 + r10197670;
        float r10197672 = -0.007143;
        float r10197673 = r10197669 * r10197649;
        float r10197674 = r10197672 * r10197673;
        float r10197675 = r10197671 + r10197674;
        float r10197676 = 0.000223;
        float r10197677 = r10197673 * r10197649;
        float r10197678 = r10197676 * r10197677;
        float r10197679 = r10197675 + r10197678;
        float r10197680 = -3e-06;
        float r10197681 = r10197677 * r10197649;
        float r10197682 = r10197680 * r10197681;
        float r10197683 = r10197679 + r10197682;
        return r10197683;
}

double f_id(double x) {
        double r10197684 = 1.0;
        double r10197685 = -9.0;
        double r10197686 = x;
        double r10197687 = r10197685 * r10197686;
        double r10197688 = r10197684 + r10197687;
        double r10197689 = 18.0;
        double r10197690 = r10197686 * r10197686;
        double r10197691 = r10197689 * r10197690;
        double r10197692 = r10197688 + r10197691;
        double r10197693 = -14.0;
        double r10197694 = r10197690 * r10197686;
        double r10197695 = r10197693 * r10197694;
        double r10197696 = r10197692 + r10197695;
        double r10197697 = 5.25;
        double r10197698 = r10197694 * r10197686;
        double r10197699 = r10197697 * r10197698;
        double r10197700 = r10197696 + r10197699;
        double r10197701 = -1.05;
        double r10197702 = r10197698 * r10197686;
        double r10197703 = r10197701 * r10197702;
        double r10197704 = r10197700 + r10197703;
        double r10197705 = 0.116667;
        double r10197706 = r10197702 * r10197686;
        double r10197707 = r10197705 * r10197706;
        double r10197708 = r10197704 + r10197707;
        double r10197709 = -0.007143;
        double r10197710 = r10197706 * r10197686;
        double r10197711 = r10197709 * r10197710;
        double r10197712 = r10197708 + r10197711;
        double r10197713 = 0.000223;
        double r10197714 = r10197710 * r10197686;
        double r10197715 = r10197713 * r10197714;
        double r10197716 = r10197712 + r10197715;
        double r10197717 = -3e-06;
        double r10197718 = r10197714 * r10197686;
        double r10197719 = r10197717 * r10197718;
        double r10197720 = r10197716 + r10197719;
        return r10197720;
}


double f_of(float x) {
        float r10197721 = x;
        float r10197722 = 4;
        float r10197723 = pow(r10197721, r10197722);
        float r10197724 = -3e-06;
        float r10197725 = r10197721 * r10197724;
        float r10197726 = 0.000223;
        float r10197727 = r10197725 + r10197726;
        float r10197728 = r10197723 * r10197727;
        float r10197729 = r10197721 * r10197721;
        float r10197730 = -0.007143;
        float r10197731 = r10197721 * r10197730;
        float r10197732 = r10197729 * r10197731;
        float r10197733 = r10197728 + r10197732;
        float r10197734 = 2;
        float r10197735 = r10197734 + r10197734;
        float r10197736 = pow(r10197721, r10197735);
        float r10197737 = r10197733 * r10197736;
        float r10197738 = r10197729 * r10197729;
        float r10197739 = 0.116667;
        float r10197740 = r10197739 * r10197729;
        float r10197741 = 5.25;
        float r10197742 = -1.05;
        float r10197743 = r10197721 * r10197742;
        float r10197744 = r10197741 + r10197743;
        float r10197745 = r10197740 + r10197744;
        float r10197746 = r10197738 * r10197745;
        float r10197747 = 18.0;
        float r10197748 = -14.0;
        float r10197749 = r10197748 * r10197721;
        float r10197750 = r10197747 + r10197749;
        float r10197751 = r10197729 * r10197750;
        float r10197752 = 1.0;
        float r10197753 = -9.0;
        float r10197754 = r10197753 * r10197721;
        float r10197755 = r10197752 + r10197754;
        float r10197756 = r10197751 + r10197755;
        float r10197757 = r10197746 + r10197756;
        float r10197758 = r10197737 + r10197757;
        return r10197758;
}

double f_od(double x) {
        double r10197759 = x;
        double r10197760 = 4;
        double r10197761 = pow(r10197759, r10197760);
        double r10197762 = -3e-06;
        double r10197763 = r10197759 * r10197762;
        double r10197764 = 0.000223;
        double r10197765 = r10197763 + r10197764;
        double r10197766 = r10197761 * r10197765;
        double r10197767 = r10197759 * r10197759;
        double r10197768 = -0.007143;
        double r10197769 = r10197759 * r10197768;
        double r10197770 = r10197767 * r10197769;
        double r10197771 = r10197766 + r10197770;
        double r10197772 = 2;
        double r10197773 = r10197772 + r10197772;
        double r10197774 = pow(r10197759, r10197773);
        double r10197775 = r10197771 * r10197774;
        double r10197776 = r10197767 * r10197767;
        double r10197777 = 0.116667;
        double r10197778 = r10197777 * r10197767;
        double r10197779 = 5.25;
        double r10197780 = -1.05;
        double r10197781 = r10197759 * r10197780;
        double r10197782 = r10197779 + r10197781;
        double r10197783 = r10197778 + r10197782;
        double r10197784 = r10197776 * r10197783;
        double r10197785 = 18.0;
        double r10197786 = -14.0;
        double r10197787 = r10197786 * r10197759;
        double r10197788 = r10197785 + r10197787;
        double r10197789 = r10197767 * r10197788;
        double r10197790 = 1.0;
        double r10197791 = -9.0;
        double r10197792 = r10197791 * r10197759;
        double r10197793 = r10197790 + r10197792;
        double r10197794 = r10197789 + r10197793;
        double r10197795 = r10197784 + r10197794;
        double r10197796 = r10197775 + r10197795;
        return r10197796;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10197797, r10197798, r10197799, r10197800, r10197801, r10197802, r10197803, r10197804, r10197805, r10197806, r10197807, r10197808, r10197809, r10197810, r10197811, r10197812, r10197813, r10197814, r10197815, r10197816, r10197817, r10197818, r10197819, r10197820, r10197821, r10197822, r10197823, r10197824, r10197825, r10197826, r10197827, r10197828, r10197829, r10197830, r10197831, r10197832, r10197833;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10197797, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10197798, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10197799);
        mpfr_init(r10197800);
        mpfr_init(r10197801);
        mpfr_init_set_str(r10197802, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10197803);
        mpfr_init(r10197804);
        mpfr_init(r10197805);
        mpfr_init_set_str(r10197806, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10197807);
        mpfr_init(r10197808);
        mpfr_init(r10197809);
        mpfr_init_set_str(r10197810, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10197811);
        mpfr_init(r10197812);
        mpfr_init(r10197813);
        mpfr_init_set_str(r10197814, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10197815);
        mpfr_init(r10197816);
        mpfr_init(r10197817);
        mpfr_init_set_str(r10197818, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10197819);
        mpfr_init(r10197820);
        mpfr_init(r10197821);
        mpfr_init_set_str(r10197822, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10197823);
        mpfr_init(r10197824);
        mpfr_init(r10197825);
        mpfr_init_set_str(r10197826, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10197827);
        mpfr_init(r10197828);
        mpfr_init(r10197829);
        mpfr_init_set_str(r10197830, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10197831);
        mpfr_init(r10197832);
        mpfr_init(r10197833);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10197799, x, MPFR_RNDN);
        mpfr_mul(r10197800, r10197798, r10197799, MPFR_RNDN);
        mpfr_add(r10197801, r10197797, r10197800, MPFR_RNDN);
        ;
        mpfr_mul(r10197803, r10197799, r10197799, MPFR_RNDN);
        mpfr_mul(r10197804, r10197802, r10197803, MPFR_RNDN);
        mpfr_add(r10197805, r10197801, r10197804, MPFR_RNDN);
        ;
        mpfr_mul(r10197807, r10197803, r10197799, MPFR_RNDN);
        mpfr_mul(r10197808, r10197806, r10197807, MPFR_RNDN);
        mpfr_add(r10197809, r10197805, r10197808, MPFR_RNDN);
        ;
        mpfr_mul(r10197811, r10197807, r10197799, MPFR_RNDN);
        mpfr_mul(r10197812, r10197810, r10197811, MPFR_RNDN);
        mpfr_add(r10197813, r10197809, r10197812, MPFR_RNDN);
        ;
        mpfr_mul(r10197815, r10197811, r10197799, MPFR_RNDN);
        mpfr_mul(r10197816, r10197814, r10197815, MPFR_RNDN);
        mpfr_add(r10197817, r10197813, r10197816, MPFR_RNDN);
        ;
        mpfr_mul(r10197819, r10197815, r10197799, MPFR_RNDN);
        mpfr_mul(r10197820, r10197818, r10197819, MPFR_RNDN);
        mpfr_add(r10197821, r10197817, r10197820, MPFR_RNDN);
        ;
        mpfr_mul(r10197823, r10197819, r10197799, MPFR_RNDN);
        mpfr_mul(r10197824, r10197822, r10197823, MPFR_RNDN);
        mpfr_add(r10197825, r10197821, r10197824, MPFR_RNDN);
        ;
        mpfr_mul(r10197827, r10197823, r10197799, MPFR_RNDN);
        mpfr_mul(r10197828, r10197826, r10197827, MPFR_RNDN);
        mpfr_add(r10197829, r10197825, r10197828, MPFR_RNDN);
        ;
        mpfr_mul(r10197831, r10197827, r10197799, MPFR_RNDN);
        mpfr_mul(r10197832, r10197830, r10197831, MPFR_RNDN);
        mpfr_add(r10197833, r10197829, r10197832, MPFR_RNDN);
        return mpfr_get_d(r10197833, MPFR_RNDN);
}

static mpfr_t r10197834, r10197835, r10197836, r10197837, r10197838, r10197839, r10197840, r10197841, r10197842, r10197843, r10197844, r10197845, r10197846, r10197847, r10197848, r10197849, r10197850, r10197851, r10197852, r10197853, r10197854, r10197855, r10197856, r10197857, r10197858, r10197859, r10197860, r10197861, r10197862, r10197863, r10197864, r10197865, r10197866, r10197867, r10197868, r10197869, r10197870, r10197871;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10197834);
        mpfr_init_set_str(r10197835, "4", 10, MPFR_RNDN);
        mpfr_init(r10197836);
        mpfr_init_set_str(r10197837, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10197838);
        mpfr_init_set_str(r10197839, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10197840);
        mpfr_init(r10197841);
        mpfr_init(r10197842);
        mpfr_init_set_str(r10197843, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10197844);
        mpfr_init(r10197845);
        mpfr_init(r10197846);
        mpfr_init_set_str(r10197847, "2", 10, MPFR_RNDN);
        mpfr_init(r10197848);
        mpfr_init(r10197849);
        mpfr_init(r10197850);
        mpfr_init(r10197851);
        mpfr_init_set_str(r10197852, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10197853);
        mpfr_init_set_str(r10197854, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r10197855, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10197856);
        mpfr_init(r10197857);
        mpfr_init(r10197858);
        mpfr_init(r10197859);
        mpfr_init_set_str(r10197860, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10197861, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10197862);
        mpfr_init(r10197863);
        mpfr_init(r10197864);
        mpfr_init_set_str(r10197865, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10197866, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10197867);
        mpfr_init(r10197868);
        mpfr_init(r10197869);
        mpfr_init(r10197870);
        mpfr_init(r10197871);
}

double f_fm(double x) {
        mpfr_set_d(r10197834, x, MPFR_RNDN);
        ;
        mpfr_pow(r10197836, r10197834, r10197835, MPFR_RNDN);
        ;
        mpfr_mul(r10197838, r10197834, r10197837, MPFR_RNDN);
        ;
        mpfr_add(r10197840, r10197838, r10197839, MPFR_RNDN);
        mpfr_mul(r10197841, r10197836, r10197840, MPFR_RNDN);
        mpfr_mul(r10197842, r10197834, r10197834, MPFR_RNDN);
        ;
        mpfr_mul(r10197844, r10197834, r10197843, MPFR_RNDN);
        mpfr_mul(r10197845, r10197842, r10197844, MPFR_RNDN);
        mpfr_add(r10197846, r10197841, r10197845, MPFR_RNDN);
        ;
        mpfr_add(r10197848, r10197847, r10197847, MPFR_RNDN);
        mpfr_pow(r10197849, r10197834, r10197848, MPFR_RNDN);
        mpfr_mul(r10197850, r10197846, r10197849, MPFR_RNDN);
        mpfr_mul(r10197851, r10197842, r10197842, MPFR_RNDN);
        ;
        mpfr_mul(r10197853, r10197852, r10197842, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10197856, r10197834, r10197855, MPFR_RNDN);
        mpfr_add(r10197857, r10197854, r10197856, MPFR_RNDN);
        mpfr_add(r10197858, r10197853, r10197857, MPFR_RNDN);
        mpfr_mul(r10197859, r10197851, r10197858, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10197862, r10197861, r10197834, MPFR_RNDN);
        mpfr_add(r10197863, r10197860, r10197862, MPFR_RNDN);
        mpfr_mul(r10197864, r10197842, r10197863, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10197867, r10197866, r10197834, MPFR_RNDN);
        mpfr_add(r10197868, r10197865, r10197867, MPFR_RNDN);
        mpfr_add(r10197869, r10197864, r10197868, MPFR_RNDN);
        mpfr_add(r10197870, r10197859, r10197869, MPFR_RNDN);
        mpfr_add(r10197871, r10197850, r10197870, MPFR_RNDN);
        return mpfr_get_d(r10197871, MPFR_RNDN);
}

static mpfr_t r10197872, r10197873, r10197874, r10197875, r10197876, r10197877, r10197878, r10197879, r10197880, r10197881, r10197882, r10197883, r10197884, r10197885, r10197886, r10197887, r10197888, r10197889, r10197890, r10197891, r10197892, r10197893, r10197894, r10197895, r10197896, r10197897, r10197898, r10197899, r10197900, r10197901, r10197902, r10197903, r10197904, r10197905, r10197906, r10197907, r10197908, r10197909;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10197872);
        mpfr_init_set_str(r10197873, "4", 10, MPFR_RNDN);
        mpfr_init(r10197874);
        mpfr_init_set_str(r10197875, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10197876);
        mpfr_init_set_str(r10197877, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10197878);
        mpfr_init(r10197879);
        mpfr_init(r10197880);
        mpfr_init_set_str(r10197881, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10197882);
        mpfr_init(r10197883);
        mpfr_init(r10197884);
        mpfr_init_set_str(r10197885, "2", 10, MPFR_RNDN);
        mpfr_init(r10197886);
        mpfr_init(r10197887);
        mpfr_init(r10197888);
        mpfr_init(r10197889);
        mpfr_init_set_str(r10197890, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10197891);
        mpfr_init_set_str(r10197892, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r10197893, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10197894);
        mpfr_init(r10197895);
        mpfr_init(r10197896);
        mpfr_init(r10197897);
        mpfr_init_set_str(r10197898, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10197899, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10197900);
        mpfr_init(r10197901);
        mpfr_init(r10197902);
        mpfr_init_set_str(r10197903, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10197904, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10197905);
        mpfr_init(r10197906);
        mpfr_init(r10197907);
        mpfr_init(r10197908);
        mpfr_init(r10197909);
}

double f_dm(double x) {
        mpfr_set_d(r10197872, x, MPFR_RNDN);
        ;
        mpfr_pow(r10197874, r10197872, r10197873, MPFR_RNDN);
        ;
        mpfr_mul(r10197876, r10197872, r10197875, MPFR_RNDN);
        ;
        mpfr_add(r10197878, r10197876, r10197877, MPFR_RNDN);
        mpfr_mul(r10197879, r10197874, r10197878, MPFR_RNDN);
        mpfr_mul(r10197880, r10197872, r10197872, MPFR_RNDN);
        ;
        mpfr_mul(r10197882, r10197872, r10197881, MPFR_RNDN);
        mpfr_mul(r10197883, r10197880, r10197882, MPFR_RNDN);
        mpfr_add(r10197884, r10197879, r10197883, MPFR_RNDN);
        ;
        mpfr_add(r10197886, r10197885, r10197885, MPFR_RNDN);
        mpfr_pow(r10197887, r10197872, r10197886, MPFR_RNDN);
        mpfr_mul(r10197888, r10197884, r10197887, MPFR_RNDN);
        mpfr_mul(r10197889, r10197880, r10197880, MPFR_RNDN);
        ;
        mpfr_mul(r10197891, r10197890, r10197880, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10197894, r10197872, r10197893, MPFR_RNDN);
        mpfr_add(r10197895, r10197892, r10197894, MPFR_RNDN);
        mpfr_add(r10197896, r10197891, r10197895, MPFR_RNDN);
        mpfr_mul(r10197897, r10197889, r10197896, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10197900, r10197899, r10197872, MPFR_RNDN);
        mpfr_add(r10197901, r10197898, r10197900, MPFR_RNDN);
        mpfr_mul(r10197902, r10197880, r10197901, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10197905, r10197904, r10197872, MPFR_RNDN);
        mpfr_add(r10197906, r10197903, r10197905, MPFR_RNDN);
        mpfr_add(r10197907, r10197902, r10197906, MPFR_RNDN);
        mpfr_add(r10197908, r10197897, r10197907, MPFR_RNDN);
        mpfr_add(r10197909, r10197888, r10197908, MPFR_RNDN);
        return mpfr_get_d(r10197909, MPFR_RNDN);
}

