#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r3816725 = 1680.0;
        float r3816726 = -13440.0;
        float r3816727 = x;
        float r3816728 = r3816727 * r3816727;
        float r3816729 = r3816726 * r3816728;
        float r3816730 = r3816725 + r3816729;
        float r3816731 = 13440.0;
        float r3816732 = r3816728 * r3816727;
        float r3816733 = r3816732 * r3816727;
        float r3816734 = r3816731 * r3816733;
        float r3816735 = r3816730 + r3816734;
        float r3816736 = -3584.0;
        float r3816737 = r3816733 * r3816727;
        float r3816738 = r3816737 * r3816727;
        float r3816739 = r3816736 * r3816738;
        float r3816740 = r3816735 + r3816739;
        float r3816741 = 256.0;
        float r3816742 = r3816738 * r3816727;
        float r3816743 = r3816742 * r3816727;
        float r3816744 = r3816741 * r3816743;
        float r3816745 = r3816740 + r3816744;
        return r3816745;
}

double f_id(double x) {
        double r3816746 = 1680.0;
        double r3816747 = -13440.0;
        double r3816748 = x;
        double r3816749 = r3816748 * r3816748;
        double r3816750 = r3816747 * r3816749;
        double r3816751 = r3816746 + r3816750;
        double r3816752 = 13440.0;
        double r3816753 = r3816749 * r3816748;
        double r3816754 = r3816753 * r3816748;
        double r3816755 = r3816752 * r3816754;
        double r3816756 = r3816751 + r3816755;
        double r3816757 = -3584.0;
        double r3816758 = r3816754 * r3816748;
        double r3816759 = r3816758 * r3816748;
        double r3816760 = r3816757 * r3816759;
        double r3816761 = r3816756 + r3816760;
        double r3816762 = 256.0;
        double r3816763 = r3816759 * r3816748;
        double r3816764 = r3816763 * r3816748;
        double r3816765 = r3816762 * r3816764;
        double r3816766 = r3816761 + r3816765;
        return r3816766;
}


double f_of(float x) {
        float r3816767 = x;
        float r3816768 = 13440.0;
        float r3816769 = r3816767 * r3816768;
        float r3816770 = 3;
        float r3816771 = pow(r3816767, r3816770);
        float r3816772 = r3816769 * r3816771;
        float r3816773 = -13440.0;
        float r3816774 = r3816767 * r3816773;
        float r3816775 = r3816767 * r3816774;
        float r3816776 = r3816772 + r3816775;
        float r3816777 = 1680.0;
        float r3816778 = r3816776 + r3816777;
        float r3816779 = r3816771 * r3816771;
        float r3816780 = -3584.0;
        float r3816781 = 256.0;
        float r3816782 = r3816781 * r3816767;
        float r3816783 = r3816782 * r3816767;
        float r3816784 = r3816780 + r3816783;
        float r3816785 = r3816779 * r3816784;
        float r3816786 = r3816778 + r3816785;
        return r3816786;
}

double f_od(double x) {
        double r3816787 = x;
        double r3816788 = 13440.0;
        double r3816789 = r3816787 * r3816788;
        double r3816790 = 3;
        double r3816791 = pow(r3816787, r3816790);
        double r3816792 = r3816789 * r3816791;
        double r3816793 = -13440.0;
        double r3816794 = r3816787 * r3816793;
        double r3816795 = r3816787 * r3816794;
        double r3816796 = r3816792 + r3816795;
        double r3816797 = 1680.0;
        double r3816798 = r3816796 + r3816797;
        double r3816799 = r3816791 * r3816791;
        double r3816800 = -3584.0;
        double r3816801 = 256.0;
        double r3816802 = r3816801 * r3816787;
        double r3816803 = r3816802 * r3816787;
        double r3816804 = r3816800 + r3816803;
        double r3816805 = r3816799 * r3816804;
        double r3816806 = r3816798 + r3816805;
        return r3816806;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3816807, r3816808, r3816809, r3816810, r3816811, r3816812, r3816813, r3816814, r3816815, r3816816, r3816817, r3816818, r3816819, r3816820, r3816821, r3816822, r3816823, r3816824, r3816825, r3816826, r3816827;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3816807, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3816808, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r3816809);
        mpfr_init(r3816810);
        mpfr_init(r3816811);
        mpfr_init(r3816812);
        mpfr_init_set_str(r3816813, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r3816814);
        mpfr_init(r3816815);
        mpfr_init(r3816816);
        mpfr_init(r3816817);
        mpfr_init_set_str(r3816818, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r3816819);
        mpfr_init(r3816820);
        mpfr_init(r3816821);
        mpfr_init(r3816822);
        mpfr_init_set_str(r3816823, "256.0", 10, MPFR_RNDN);
        mpfr_init(r3816824);
        mpfr_init(r3816825);
        mpfr_init(r3816826);
        mpfr_init(r3816827);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3816809, x, MPFR_RNDN);
        mpfr_mul(r3816810, r3816809, r3816809, MPFR_RNDN);
        mpfr_mul(r3816811, r3816808, r3816810, MPFR_RNDN);
        mpfr_add(r3816812, r3816807, r3816811, MPFR_RNDN);
        ;
        mpfr_mul(r3816814, r3816810, r3816809, MPFR_RNDN);
        mpfr_mul(r3816815, r3816814, r3816809, MPFR_RNDN);
        mpfr_mul(r3816816, r3816813, r3816815, MPFR_RNDN);
        mpfr_add(r3816817, r3816812, r3816816, MPFR_RNDN);
        ;
        mpfr_mul(r3816819, r3816815, r3816809, MPFR_RNDN);
        mpfr_mul(r3816820, r3816819, r3816809, MPFR_RNDN);
        mpfr_mul(r3816821, r3816818, r3816820, MPFR_RNDN);
        mpfr_add(r3816822, r3816817, r3816821, MPFR_RNDN);
        ;
        mpfr_mul(r3816824, r3816820, r3816809, MPFR_RNDN);
        mpfr_mul(r3816825, r3816824, r3816809, MPFR_RNDN);
        mpfr_mul(r3816826, r3816823, r3816825, MPFR_RNDN);
        mpfr_add(r3816827, r3816822, r3816826, MPFR_RNDN);
        return mpfr_get_d(r3816827, MPFR_RNDN);
}

static mpfr_t r3816828, r3816829, r3816830, r3816831, r3816832, r3816833, r3816834, r3816835, r3816836, r3816837, r3816838, r3816839, r3816840, r3816841, r3816842, r3816843, r3816844, r3816845, r3816846, r3816847;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3816828);
        mpfr_init_set_str(r3816829, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r3816830);
        mpfr_init_set_str(r3816831, "3", 10, MPFR_RNDN);
        mpfr_init(r3816832);
        mpfr_init(r3816833);
        mpfr_init_set_str(r3816834, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r3816835);
        mpfr_init(r3816836);
        mpfr_init(r3816837);
        mpfr_init_set_str(r3816838, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r3816839);
        mpfr_init(r3816840);
        mpfr_init_set_str(r3816841, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3816842, "256.0", 10, MPFR_RNDN);
        mpfr_init(r3816843);
        mpfr_init(r3816844);
        mpfr_init(r3816845);
        mpfr_init(r3816846);
        mpfr_init(r3816847);
}

double f_fm(double x) {
        mpfr_set_d(r3816828, x, MPFR_RNDN);
        ;
        mpfr_mul(r3816830, r3816828, r3816829, MPFR_RNDN);
        ;
        mpfr_pow(r3816832, r3816828, r3816831, MPFR_RNDN);
        mpfr_mul(r3816833, r3816830, r3816832, MPFR_RNDN);
        ;
        mpfr_mul(r3816835, r3816828, r3816834, MPFR_RNDN);
        mpfr_mul(r3816836, r3816828, r3816835, MPFR_RNDN);
        mpfr_add(r3816837, r3816833, r3816836, MPFR_RNDN);
        ;
        mpfr_add(r3816839, r3816837, r3816838, MPFR_RNDN);
        mpfr_mul(r3816840, r3816832, r3816832, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3816843, r3816842, r3816828, MPFR_RNDN);
        mpfr_mul(r3816844, r3816843, r3816828, MPFR_RNDN);
        mpfr_add(r3816845, r3816841, r3816844, MPFR_RNDN);
        mpfr_mul(r3816846, r3816840, r3816845, MPFR_RNDN);
        mpfr_add(r3816847, r3816839, r3816846, MPFR_RNDN);
        return mpfr_get_d(r3816847, MPFR_RNDN);
}

static mpfr_t r3816848, r3816849, r3816850, r3816851, r3816852, r3816853, r3816854, r3816855, r3816856, r3816857, r3816858, r3816859, r3816860, r3816861, r3816862, r3816863, r3816864, r3816865, r3816866, r3816867;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3816848);
        mpfr_init_set_str(r3816849, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r3816850);
        mpfr_init_set_str(r3816851, "3", 10, MPFR_RNDN);
        mpfr_init(r3816852);
        mpfr_init(r3816853);
        mpfr_init_set_str(r3816854, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r3816855);
        mpfr_init(r3816856);
        mpfr_init(r3816857);
        mpfr_init_set_str(r3816858, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r3816859);
        mpfr_init(r3816860);
        mpfr_init_set_str(r3816861, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3816862, "256.0", 10, MPFR_RNDN);
        mpfr_init(r3816863);
        mpfr_init(r3816864);
        mpfr_init(r3816865);
        mpfr_init(r3816866);
        mpfr_init(r3816867);
}

double f_dm(double x) {
        mpfr_set_d(r3816848, x, MPFR_RNDN);
        ;
        mpfr_mul(r3816850, r3816848, r3816849, MPFR_RNDN);
        ;
        mpfr_pow(r3816852, r3816848, r3816851, MPFR_RNDN);
        mpfr_mul(r3816853, r3816850, r3816852, MPFR_RNDN);
        ;
        mpfr_mul(r3816855, r3816848, r3816854, MPFR_RNDN);
        mpfr_mul(r3816856, r3816848, r3816855, MPFR_RNDN);
        mpfr_add(r3816857, r3816853, r3816856, MPFR_RNDN);
        ;
        mpfr_add(r3816859, r3816857, r3816858, MPFR_RNDN);
        mpfr_mul(r3816860, r3816852, r3816852, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3816863, r3816862, r3816848, MPFR_RNDN);
        mpfr_mul(r3816864, r3816863, r3816848, MPFR_RNDN);
        mpfr_add(r3816865, r3816861, r3816864, MPFR_RNDN);
        mpfr_mul(r3816866, r3816860, r3816865, MPFR_RNDN);
        mpfr_add(r3816867, r3816859, r3816866, MPFR_RNDN);
        return mpfr_get_d(r3816867, MPFR_RNDN);
}

