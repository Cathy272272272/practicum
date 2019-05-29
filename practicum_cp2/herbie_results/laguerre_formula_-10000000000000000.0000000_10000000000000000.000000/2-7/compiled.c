#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r10001639 = 1.0;
        float r10001640 = -7.0;
        float r10001641 = x;
        float r10001642 = r10001640 * r10001641;
        float r10001643 = r10001639 + r10001642;
        float r10001644 = 10.5;
        float r10001645 = r10001641 * r10001641;
        float r10001646 = r10001644 * r10001645;
        float r10001647 = r10001643 + r10001646;
        float r10001648 = -5.833333;
        float r10001649 = r10001645 * r10001641;
        float r10001650 = r10001648 * r10001649;
        float r10001651 = r10001647 + r10001650;
        float r10001652 = 1.458333;
        float r10001653 = r10001649 * r10001641;
        float r10001654 = r10001652 * r10001653;
        float r10001655 = r10001651 + r10001654;
        float r10001656 = -0.175;
        float r10001657 = r10001653 * r10001641;
        float r10001658 = r10001656 * r10001657;
        float r10001659 = r10001655 + r10001658;
        float r10001660 = 0.009722;
        float r10001661 = r10001657 * r10001641;
        float r10001662 = r10001660 * r10001661;
        float r10001663 = r10001659 + r10001662;
        float r10001664 = -0.000198;
        float r10001665 = r10001661 * r10001641;
        float r10001666 = r10001664 * r10001665;
        float r10001667 = r10001663 + r10001666;
        return r10001667;
}

double f_id(double x) {
        double r10001668 = 1.0;
        double r10001669 = -7.0;
        double r10001670 = x;
        double r10001671 = r10001669 * r10001670;
        double r10001672 = r10001668 + r10001671;
        double r10001673 = 10.5;
        double r10001674 = r10001670 * r10001670;
        double r10001675 = r10001673 * r10001674;
        double r10001676 = r10001672 + r10001675;
        double r10001677 = -5.833333;
        double r10001678 = r10001674 * r10001670;
        double r10001679 = r10001677 * r10001678;
        double r10001680 = r10001676 + r10001679;
        double r10001681 = 1.458333;
        double r10001682 = r10001678 * r10001670;
        double r10001683 = r10001681 * r10001682;
        double r10001684 = r10001680 + r10001683;
        double r10001685 = -0.175;
        double r10001686 = r10001682 * r10001670;
        double r10001687 = r10001685 * r10001686;
        double r10001688 = r10001684 + r10001687;
        double r10001689 = 0.009722;
        double r10001690 = r10001686 * r10001670;
        double r10001691 = r10001689 * r10001690;
        double r10001692 = r10001688 + r10001691;
        double r10001693 = -0.000198;
        double r10001694 = r10001690 * r10001670;
        double r10001695 = r10001693 * r10001694;
        double r10001696 = r10001692 + r10001695;
        return r10001696;
}


double f_of(float x) {
        float r10001697 = x;
        float r10001698 = 3;
        float r10001699 = pow(r10001697, r10001698);
        float r10001700 = r10001699 * r10001699;
        float r10001701 = 10.5;
        float r10001702 = -5.833333;
        float r10001703 = r10001702 * r10001697;
        float r10001704 = r10001701 + r10001703;
        float r10001705 = r10001700 * r10001704;
        float r10001706 = r10001704 * r10001704;
        float r10001707 = r10001705 * r10001706;
        float r10001708 = cbrt(r10001707);
        float r10001709 = -7.0;
        float r10001710 = r10001697 * r10001709;
        float r10001711 = 1.0;
        float r10001712 = r10001710 + r10001711;
        float r10001713 = r10001708 + r10001712;
        float r10001714 = r10001697 * r10001697;
        float r10001715 = log(r10001714);
        float r10001716 = r10001715 + r10001715;
        float r10001717 = exp(r10001716);
        float r10001718 = 1.458333;
        float r10001719 = -0.175;
        float r10001720 = r10001719 * r10001697;
        float r10001721 = r10001718 + r10001720;
        float r10001722 = r10001717 * r10001721;
        float r10001723 = r10001699 * r10001714;
        float r10001724 = r10001723 * r10001697;
        float r10001725 = -0.000198;
        float r10001726 = r10001725 * r10001697;
        float r10001727 = 0.009722;
        float r10001728 = r10001726 + r10001727;
        float r10001729 = r10001724 * r10001728;
        float r10001730 = r10001722 + r10001729;
        float r10001731 = r10001713 + r10001730;
        return r10001731;
}

double f_od(double x) {
        double r10001732 = x;
        double r10001733 = 3;
        double r10001734 = pow(r10001732, r10001733);
        double r10001735 = r10001734 * r10001734;
        double r10001736 = 10.5;
        double r10001737 = -5.833333;
        double r10001738 = r10001737 * r10001732;
        double r10001739 = r10001736 + r10001738;
        double r10001740 = r10001735 * r10001739;
        double r10001741 = r10001739 * r10001739;
        double r10001742 = r10001740 * r10001741;
        double r10001743 = cbrt(r10001742);
        double r10001744 = -7.0;
        double r10001745 = r10001732 * r10001744;
        double r10001746 = 1.0;
        double r10001747 = r10001745 + r10001746;
        double r10001748 = r10001743 + r10001747;
        double r10001749 = r10001732 * r10001732;
        double r10001750 = log(r10001749);
        double r10001751 = r10001750 + r10001750;
        double r10001752 = exp(r10001751);
        double r10001753 = 1.458333;
        double r10001754 = -0.175;
        double r10001755 = r10001754 * r10001732;
        double r10001756 = r10001753 + r10001755;
        double r10001757 = r10001752 * r10001756;
        double r10001758 = r10001734 * r10001749;
        double r10001759 = r10001758 * r10001732;
        double r10001760 = -0.000198;
        double r10001761 = r10001760 * r10001732;
        double r10001762 = 0.009722;
        double r10001763 = r10001761 + r10001762;
        double r10001764 = r10001759 * r10001763;
        double r10001765 = r10001757 + r10001764;
        double r10001766 = r10001748 + r10001765;
        return r10001766;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10001767, r10001768, r10001769, r10001770, r10001771, r10001772, r10001773, r10001774, r10001775, r10001776, r10001777, r10001778, r10001779, r10001780, r10001781, r10001782, r10001783, r10001784, r10001785, r10001786, r10001787, r10001788, r10001789, r10001790, r10001791, r10001792, r10001793, r10001794, r10001795;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10001767, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001768, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10001769);
        mpfr_init(r10001770);
        mpfr_init(r10001771);
        mpfr_init_set_str(r10001772, "10.5", 10, MPFR_RNDN);
        mpfr_init(r10001773);
        mpfr_init(r10001774);
        mpfr_init(r10001775);
        mpfr_init_set_str(r10001776, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10001777);
        mpfr_init(r10001778);
        mpfr_init(r10001779);
        mpfr_init_set_str(r10001780, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r10001781);
        mpfr_init(r10001782);
        mpfr_init(r10001783);
        mpfr_init_set_str(r10001784, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10001785);
        mpfr_init(r10001786);
        mpfr_init(r10001787);
        mpfr_init_set_str(r10001788, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10001789);
        mpfr_init(r10001790);
        mpfr_init(r10001791);
        mpfr_init_set_str(r10001792, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10001793);
        mpfr_init(r10001794);
        mpfr_init(r10001795);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10001769, x, MPFR_RNDN);
        mpfr_mul(r10001770, r10001768, r10001769, MPFR_RNDN);
        mpfr_add(r10001771, r10001767, r10001770, MPFR_RNDN);
        ;
        mpfr_mul(r10001773, r10001769, r10001769, MPFR_RNDN);
        mpfr_mul(r10001774, r10001772, r10001773, MPFR_RNDN);
        mpfr_add(r10001775, r10001771, r10001774, MPFR_RNDN);
        ;
        mpfr_mul(r10001777, r10001773, r10001769, MPFR_RNDN);
        mpfr_mul(r10001778, r10001776, r10001777, MPFR_RNDN);
        mpfr_add(r10001779, r10001775, r10001778, MPFR_RNDN);
        ;
        mpfr_mul(r10001781, r10001777, r10001769, MPFR_RNDN);
        mpfr_mul(r10001782, r10001780, r10001781, MPFR_RNDN);
        mpfr_add(r10001783, r10001779, r10001782, MPFR_RNDN);
        ;
        mpfr_mul(r10001785, r10001781, r10001769, MPFR_RNDN);
        mpfr_mul(r10001786, r10001784, r10001785, MPFR_RNDN);
        mpfr_add(r10001787, r10001783, r10001786, MPFR_RNDN);
        ;
        mpfr_mul(r10001789, r10001785, r10001769, MPFR_RNDN);
        mpfr_mul(r10001790, r10001788, r10001789, MPFR_RNDN);
        mpfr_add(r10001791, r10001787, r10001790, MPFR_RNDN);
        ;
        mpfr_mul(r10001793, r10001789, r10001769, MPFR_RNDN);
        mpfr_mul(r10001794, r10001792, r10001793, MPFR_RNDN);
        mpfr_add(r10001795, r10001791, r10001794, MPFR_RNDN);
        return mpfr_get_d(r10001795, MPFR_RNDN);
}

static mpfr_t r10001796, r10001797, r10001798, r10001799, r10001800, r10001801, r10001802, r10001803, r10001804, r10001805, r10001806, r10001807, r10001808, r10001809, r10001810, r10001811, r10001812, r10001813, r10001814, r10001815, r10001816, r10001817, r10001818, r10001819, r10001820, r10001821, r10001822, r10001823, r10001824, r10001825, r10001826, r10001827, r10001828, r10001829, r10001830;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10001796);
        mpfr_init_set_str(r10001797, "3", 10, MPFR_RNDN);
        mpfr_init(r10001798);
        mpfr_init(r10001799);
        mpfr_init_set_str(r10001800, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001801, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10001802);
        mpfr_init(r10001803);
        mpfr_init(r10001804);
        mpfr_init(r10001805);
        mpfr_init(r10001806);
        mpfr_init(r10001807);
        mpfr_init_set_str(r10001808, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10001809);
        mpfr_init_set_str(r10001810, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10001811);
        mpfr_init(r10001812);
        mpfr_init(r10001813);
        mpfr_init(r10001814);
        mpfr_init(r10001815);
        mpfr_init(r10001816);
        mpfr_init_set_str(r10001817, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001818, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10001819);
        mpfr_init(r10001820);
        mpfr_init(r10001821);
        mpfr_init(r10001822);
        mpfr_init(r10001823);
        mpfr_init_set_str(r10001824, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10001825);
        mpfr_init_set_str(r10001826, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10001827);
        mpfr_init(r10001828);
        mpfr_init(r10001829);
        mpfr_init(r10001830);
}

double f_fm(double x) {
        mpfr_set_d(r10001796, x, MPFR_RNDN);
        ;
        mpfr_pow(r10001798, r10001796, r10001797, MPFR_RNDN);
        mpfr_mul(r10001799, r10001798, r10001798, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10001802, r10001801, r10001796, MPFR_RNDN);
        mpfr_add(r10001803, r10001800, r10001802, MPFR_RNDN);
        mpfr_mul(r10001804, r10001799, r10001803, MPFR_RNDN);
        mpfr_mul(r10001805, r10001803, r10001803, MPFR_RNDN);
        mpfr_mul(r10001806, r10001804, r10001805, MPFR_RNDN);
        mpfr_cbrt(r10001807, r10001806, MPFR_RNDN);
        ;
        mpfr_mul(r10001809, r10001796, r10001808, MPFR_RNDN);
        ;
        mpfr_add(r10001811, r10001809, r10001810, MPFR_RNDN);
        mpfr_add(r10001812, r10001807, r10001811, MPFR_RNDN);
        mpfr_mul(r10001813, r10001796, r10001796, MPFR_RNDN);
        mpfr_log(r10001814, r10001813, MPFR_RNDN);
        mpfr_add(r10001815, r10001814, r10001814, MPFR_RNDN);
        mpfr_exp(r10001816, r10001815, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10001819, r10001818, r10001796, MPFR_RNDN);
        mpfr_add(r10001820, r10001817, r10001819, MPFR_RNDN);
        mpfr_mul(r10001821, r10001816, r10001820, MPFR_RNDN);
        mpfr_mul(r10001822, r10001798, r10001813, MPFR_RNDN);
        mpfr_mul(r10001823, r10001822, r10001796, MPFR_RNDN);
        ;
        mpfr_mul(r10001825, r10001824, r10001796, MPFR_RNDN);
        ;
        mpfr_add(r10001827, r10001825, r10001826, MPFR_RNDN);
        mpfr_mul(r10001828, r10001823, r10001827, MPFR_RNDN);
        mpfr_add(r10001829, r10001821, r10001828, MPFR_RNDN);
        mpfr_add(r10001830, r10001812, r10001829, MPFR_RNDN);
        return mpfr_get_d(r10001830, MPFR_RNDN);
}

static mpfr_t r10001831, r10001832, r10001833, r10001834, r10001835, r10001836, r10001837, r10001838, r10001839, r10001840, r10001841, r10001842, r10001843, r10001844, r10001845, r10001846, r10001847, r10001848, r10001849, r10001850, r10001851, r10001852, r10001853, r10001854, r10001855, r10001856, r10001857, r10001858, r10001859, r10001860, r10001861, r10001862, r10001863, r10001864, r10001865;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10001831);
        mpfr_init_set_str(r10001832, "3", 10, MPFR_RNDN);
        mpfr_init(r10001833);
        mpfr_init(r10001834);
        mpfr_init_set_str(r10001835, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001836, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10001837);
        mpfr_init(r10001838);
        mpfr_init(r10001839);
        mpfr_init(r10001840);
        mpfr_init(r10001841);
        mpfr_init(r10001842);
        mpfr_init_set_str(r10001843, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10001844);
        mpfr_init_set_str(r10001845, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10001846);
        mpfr_init(r10001847);
        mpfr_init(r10001848);
        mpfr_init(r10001849);
        mpfr_init(r10001850);
        mpfr_init(r10001851);
        mpfr_init_set_str(r10001852, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001853, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10001854);
        mpfr_init(r10001855);
        mpfr_init(r10001856);
        mpfr_init(r10001857);
        mpfr_init(r10001858);
        mpfr_init_set_str(r10001859, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10001860);
        mpfr_init_set_str(r10001861, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10001862);
        mpfr_init(r10001863);
        mpfr_init(r10001864);
        mpfr_init(r10001865);
}

double f_dm(double x) {
        mpfr_set_d(r10001831, x, MPFR_RNDN);
        ;
        mpfr_pow(r10001833, r10001831, r10001832, MPFR_RNDN);
        mpfr_mul(r10001834, r10001833, r10001833, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10001837, r10001836, r10001831, MPFR_RNDN);
        mpfr_add(r10001838, r10001835, r10001837, MPFR_RNDN);
        mpfr_mul(r10001839, r10001834, r10001838, MPFR_RNDN);
        mpfr_mul(r10001840, r10001838, r10001838, MPFR_RNDN);
        mpfr_mul(r10001841, r10001839, r10001840, MPFR_RNDN);
        mpfr_cbrt(r10001842, r10001841, MPFR_RNDN);
        ;
        mpfr_mul(r10001844, r10001831, r10001843, MPFR_RNDN);
        ;
        mpfr_add(r10001846, r10001844, r10001845, MPFR_RNDN);
        mpfr_add(r10001847, r10001842, r10001846, MPFR_RNDN);
        mpfr_mul(r10001848, r10001831, r10001831, MPFR_RNDN);
        mpfr_log(r10001849, r10001848, MPFR_RNDN);
        mpfr_add(r10001850, r10001849, r10001849, MPFR_RNDN);
        mpfr_exp(r10001851, r10001850, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10001854, r10001853, r10001831, MPFR_RNDN);
        mpfr_add(r10001855, r10001852, r10001854, MPFR_RNDN);
        mpfr_mul(r10001856, r10001851, r10001855, MPFR_RNDN);
        mpfr_mul(r10001857, r10001833, r10001848, MPFR_RNDN);
        mpfr_mul(r10001858, r10001857, r10001831, MPFR_RNDN);
        ;
        mpfr_mul(r10001860, r10001859, r10001831, MPFR_RNDN);
        ;
        mpfr_add(r10001862, r10001860, r10001861, MPFR_RNDN);
        mpfr_mul(r10001863, r10001858, r10001862, MPFR_RNDN);
        mpfr_add(r10001864, r10001856, r10001863, MPFR_RNDN);
        mpfr_add(r10001865, r10001847, r10001864, MPFR_RNDN);
        return mpfr_get_d(r10001865, MPFR_RNDN);
}

