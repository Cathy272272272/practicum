#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r8203707 = -1680.0;
        float r8203708 = x;
        float r8203709 = r8203707 * r8203708;
        float r8203710 = 3360.0;
        float r8203711 = r8203708 * r8203708;
        float r8203712 = r8203711 * r8203708;
        float r8203713 = r8203710 * r8203712;
        float r8203714 = r8203709 + r8203713;
        float r8203715 = -1344.0;
        float r8203716 = r8203712 * r8203708;
        float r8203717 = r8203716 * r8203708;
        float r8203718 = r8203715 * r8203717;
        float r8203719 = r8203714 + r8203718;
        float r8203720 = 128.0;
        float r8203721 = r8203717 * r8203708;
        float r8203722 = r8203721 * r8203708;
        float r8203723 = r8203720 * r8203722;
        float r8203724 = r8203719 + r8203723;
        return r8203724;
}

double f_id(double x) {
        double r8203725 = -1680.0;
        double r8203726 = x;
        double r8203727 = r8203725 * r8203726;
        double r8203728 = 3360.0;
        double r8203729 = r8203726 * r8203726;
        double r8203730 = r8203729 * r8203726;
        double r8203731 = r8203728 * r8203730;
        double r8203732 = r8203727 + r8203731;
        double r8203733 = -1344.0;
        double r8203734 = r8203730 * r8203726;
        double r8203735 = r8203734 * r8203726;
        double r8203736 = r8203733 * r8203735;
        double r8203737 = r8203732 + r8203736;
        double r8203738 = 128.0;
        double r8203739 = r8203735 * r8203726;
        double r8203740 = r8203739 * r8203726;
        double r8203741 = r8203738 * r8203740;
        double r8203742 = r8203737 + r8203741;
        return r8203742;
}


double f_of(float x) {
        float r8203743 = -1680.0;
        float r8203744 = x;
        float r8203745 = r8203743 * r8203744;
        float r8203746 = 3360.0;
        float r8203747 = r8203744 * r8203744;
        float r8203748 = r8203747 * r8203744;
        float r8203749 = r8203746 * r8203748;
        float r8203750 = r8203745 + r8203749;
        float r8203751 = -1344.0;
        float r8203752 = r8203748 * r8203744;
        float r8203753 = r8203752 * r8203744;
        float r8203754 = r8203751 * r8203753;
        float r8203755 = r8203750 + r8203754;
        float r8203756 = 128.0;
        float r8203757 = 3;
        float r8203758 = pow(r8203744, r8203757);
        float r8203759 = r8203758 * r8203744;
        float r8203760 = r8203759 * r8203744;
        float r8203761 = r8203760 * r8203744;
        float r8203762 = r8203761 * r8203744;
        float r8203763 = r8203756 * r8203762;
        float r8203764 = r8203755 + r8203763;
        return r8203764;
}

double f_od(double x) {
        double r8203765 = -1680.0;
        double r8203766 = x;
        double r8203767 = r8203765 * r8203766;
        double r8203768 = 3360.0;
        double r8203769 = r8203766 * r8203766;
        double r8203770 = r8203769 * r8203766;
        double r8203771 = r8203768 * r8203770;
        double r8203772 = r8203767 + r8203771;
        double r8203773 = -1344.0;
        double r8203774 = r8203770 * r8203766;
        double r8203775 = r8203774 * r8203766;
        double r8203776 = r8203773 * r8203775;
        double r8203777 = r8203772 + r8203776;
        double r8203778 = 128.0;
        double r8203779 = 3;
        double r8203780 = pow(r8203766, r8203779);
        double r8203781 = r8203780 * r8203766;
        double r8203782 = r8203781 * r8203766;
        double r8203783 = r8203782 * r8203766;
        double r8203784 = r8203783 * r8203766;
        double r8203785 = r8203778 * r8203784;
        double r8203786 = r8203777 + r8203785;
        return r8203786;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8203787, r8203788, r8203789, r8203790, r8203791, r8203792, r8203793, r8203794, r8203795, r8203796, r8203797, r8203798, r8203799, r8203800, r8203801, r8203802, r8203803, r8203804;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8203787, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r8203788);
        mpfr_init(r8203789);
        mpfr_init_set_str(r8203790, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r8203791);
        mpfr_init(r8203792);
        mpfr_init(r8203793);
        mpfr_init(r8203794);
        mpfr_init_set_str(r8203795, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r8203796);
        mpfr_init(r8203797);
        mpfr_init(r8203798);
        mpfr_init(r8203799);
        mpfr_init_set_str(r8203800, "128.0", 10, MPFR_RNDN);
        mpfr_init(r8203801);
        mpfr_init(r8203802);
        mpfr_init(r8203803);
        mpfr_init(r8203804);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8203788, x, MPFR_RNDN);
        mpfr_mul(r8203789, r8203787, r8203788, MPFR_RNDN);
        ;
        mpfr_mul(r8203791, r8203788, r8203788, MPFR_RNDN);
        mpfr_mul(r8203792, r8203791, r8203788, MPFR_RNDN);
        mpfr_mul(r8203793, r8203790, r8203792, MPFR_RNDN);
        mpfr_add(r8203794, r8203789, r8203793, MPFR_RNDN);
        ;
        mpfr_mul(r8203796, r8203792, r8203788, MPFR_RNDN);
        mpfr_mul(r8203797, r8203796, r8203788, MPFR_RNDN);
        mpfr_mul(r8203798, r8203795, r8203797, MPFR_RNDN);
        mpfr_add(r8203799, r8203794, r8203798, MPFR_RNDN);
        ;
        mpfr_mul(r8203801, r8203797, r8203788, MPFR_RNDN);
        mpfr_mul(r8203802, r8203801, r8203788, MPFR_RNDN);
        mpfr_mul(r8203803, r8203800, r8203802, MPFR_RNDN);
        mpfr_add(r8203804, r8203799, r8203803, MPFR_RNDN);
        return mpfr_get_d(r8203804, MPFR_RNDN);
}

static mpfr_t r8203805, r8203806, r8203807, r8203808, r8203809, r8203810, r8203811, r8203812, r8203813, r8203814, r8203815, r8203816, r8203817, r8203818, r8203819, r8203820, r8203821, r8203822, r8203823, r8203824, r8203825, r8203826;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8203805, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r8203806);
        mpfr_init(r8203807);
        mpfr_init_set_str(r8203808, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r8203809);
        mpfr_init(r8203810);
        mpfr_init(r8203811);
        mpfr_init(r8203812);
        mpfr_init_set_str(r8203813, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r8203814);
        mpfr_init(r8203815);
        mpfr_init(r8203816);
        mpfr_init(r8203817);
        mpfr_init_set_str(r8203818, "128.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203819, "3", 10, MPFR_RNDN);
        mpfr_init(r8203820);
        mpfr_init(r8203821);
        mpfr_init(r8203822);
        mpfr_init(r8203823);
        mpfr_init(r8203824);
        mpfr_init(r8203825);
        mpfr_init(r8203826);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8203806, x, MPFR_RNDN);
        mpfr_mul(r8203807, r8203805, r8203806, MPFR_RNDN);
        ;
        mpfr_mul(r8203809, r8203806, r8203806, MPFR_RNDN);
        mpfr_mul(r8203810, r8203809, r8203806, MPFR_RNDN);
        mpfr_mul(r8203811, r8203808, r8203810, MPFR_RNDN);
        mpfr_add(r8203812, r8203807, r8203811, MPFR_RNDN);
        ;
        mpfr_mul(r8203814, r8203810, r8203806, MPFR_RNDN);
        mpfr_mul(r8203815, r8203814, r8203806, MPFR_RNDN);
        mpfr_mul(r8203816, r8203813, r8203815, MPFR_RNDN);
        mpfr_add(r8203817, r8203812, r8203816, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8203820, r8203806, r8203819, MPFR_RNDN);
        mpfr_mul(r8203821, r8203820, r8203806, MPFR_RNDN);
        mpfr_mul(r8203822, r8203821, r8203806, MPFR_RNDN);
        mpfr_mul(r8203823, r8203822, r8203806, MPFR_RNDN);
        mpfr_mul(r8203824, r8203823, r8203806, MPFR_RNDN);
        mpfr_mul(r8203825, r8203818, r8203824, MPFR_RNDN);
        mpfr_add(r8203826, r8203817, r8203825, MPFR_RNDN);
        return mpfr_get_d(r8203826, MPFR_RNDN);
}

static mpfr_t r8203827, r8203828, r8203829, r8203830, r8203831, r8203832, r8203833, r8203834, r8203835, r8203836, r8203837, r8203838, r8203839, r8203840, r8203841, r8203842, r8203843, r8203844, r8203845, r8203846, r8203847, r8203848;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8203827, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r8203828);
        mpfr_init(r8203829);
        mpfr_init_set_str(r8203830, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r8203831);
        mpfr_init(r8203832);
        mpfr_init(r8203833);
        mpfr_init(r8203834);
        mpfr_init_set_str(r8203835, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r8203836);
        mpfr_init(r8203837);
        mpfr_init(r8203838);
        mpfr_init(r8203839);
        mpfr_init_set_str(r8203840, "128.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203841, "3", 10, MPFR_RNDN);
        mpfr_init(r8203842);
        mpfr_init(r8203843);
        mpfr_init(r8203844);
        mpfr_init(r8203845);
        mpfr_init(r8203846);
        mpfr_init(r8203847);
        mpfr_init(r8203848);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8203828, x, MPFR_RNDN);
        mpfr_mul(r8203829, r8203827, r8203828, MPFR_RNDN);
        ;
        mpfr_mul(r8203831, r8203828, r8203828, MPFR_RNDN);
        mpfr_mul(r8203832, r8203831, r8203828, MPFR_RNDN);
        mpfr_mul(r8203833, r8203830, r8203832, MPFR_RNDN);
        mpfr_add(r8203834, r8203829, r8203833, MPFR_RNDN);
        ;
        mpfr_mul(r8203836, r8203832, r8203828, MPFR_RNDN);
        mpfr_mul(r8203837, r8203836, r8203828, MPFR_RNDN);
        mpfr_mul(r8203838, r8203835, r8203837, MPFR_RNDN);
        mpfr_add(r8203839, r8203834, r8203838, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8203842, r8203828, r8203841, MPFR_RNDN);
        mpfr_mul(r8203843, r8203842, r8203828, MPFR_RNDN);
        mpfr_mul(r8203844, r8203843, r8203828, MPFR_RNDN);
        mpfr_mul(r8203845, r8203844, r8203828, MPFR_RNDN);
        mpfr_mul(r8203846, r8203845, r8203828, MPFR_RNDN);
        mpfr_mul(r8203847, r8203840, r8203846, MPFR_RNDN);
        mpfr_add(r8203848, r8203839, r8203847, MPFR_RNDN);
        return mpfr_get_d(r8203848, MPFR_RNDN);
}

