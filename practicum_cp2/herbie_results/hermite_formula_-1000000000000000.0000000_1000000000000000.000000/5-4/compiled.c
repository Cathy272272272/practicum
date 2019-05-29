#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r8953772 = 12.0;
        float r8953773 = -48.0;
        float r8953774 = x;
        float r8953775 = r8953774 * r8953774;
        float r8953776 = r8953773 * r8953775;
        float r8953777 = r8953772 + r8953776;
        float r8953778 = 16.0;
        float r8953779 = r8953775 * r8953774;
        float r8953780 = r8953779 * r8953774;
        float r8953781 = r8953778 * r8953780;
        float r8953782 = r8953777 + r8953781;
        return r8953782;
}

double f_id(double x) {
        double r8953783 = 12.0;
        double r8953784 = -48.0;
        double r8953785 = x;
        double r8953786 = r8953785 * r8953785;
        double r8953787 = r8953784 * r8953786;
        double r8953788 = r8953783 + r8953787;
        double r8953789 = 16.0;
        double r8953790 = r8953786 * r8953785;
        double r8953791 = r8953790 * r8953785;
        double r8953792 = r8953789 * r8953791;
        double r8953793 = r8953788 + r8953792;
        return r8953793;
}


double f_of(float x) {
        float r8953794 = 12.0;
        float r8953795 = 16.0;
        float r8953796 = x;
        float r8953797 = 4;
        float r8953798 = pow(r8953796, r8953797);
        float r8953799 = r8953795 * r8953798;
        float r8953800 = -48.0;
        float r8953801 = r8953796 * r8953800;
        float r8953802 = r8953801 * r8953796;
        float r8953803 = r8953799 + r8953802;
        float r8953804 = r8953794 + r8953803;
        return r8953804;
}

double f_od(double x) {
        double r8953805 = 12.0;
        double r8953806 = 16.0;
        double r8953807 = x;
        double r8953808 = 4;
        double r8953809 = pow(r8953807, r8953808);
        double r8953810 = r8953806 * r8953809;
        double r8953811 = -48.0;
        double r8953812 = r8953807 * r8953811;
        double r8953813 = r8953812 * r8953807;
        double r8953814 = r8953810 + r8953813;
        double r8953815 = r8953805 + r8953814;
        return r8953815;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8953816, r8953817, r8953818, r8953819, r8953820, r8953821, r8953822, r8953823, r8953824, r8953825, r8953826;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953816, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953817, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r8953818);
        mpfr_init(r8953819);
        mpfr_init(r8953820);
        mpfr_init(r8953821);
        mpfr_init_set_str(r8953822, "16.0", 10, MPFR_RNDN);
        mpfr_init(r8953823);
        mpfr_init(r8953824);
        mpfr_init(r8953825);
        mpfr_init(r8953826);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8953818, x, MPFR_RNDN);
        mpfr_mul(r8953819, r8953818, r8953818, MPFR_RNDN);
        mpfr_mul(r8953820, r8953817, r8953819, MPFR_RNDN);
        mpfr_add(r8953821, r8953816, r8953820, MPFR_RNDN);
        ;
        mpfr_mul(r8953823, r8953819, r8953818, MPFR_RNDN);
        mpfr_mul(r8953824, r8953823, r8953818, MPFR_RNDN);
        mpfr_mul(r8953825, r8953822, r8953824, MPFR_RNDN);
        mpfr_add(r8953826, r8953821, r8953825, MPFR_RNDN);
        return mpfr_get_d(r8953826, MPFR_RNDN);
}

static mpfr_t r8953827, r8953828, r8953829, r8953830, r8953831, r8953832, r8953833, r8953834, r8953835, r8953836, r8953837;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953827, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953828, "16.0", 10, MPFR_RNDN);
        mpfr_init(r8953829);
        mpfr_init_set_str(r8953830, "4", 10, MPFR_RNDN);
        mpfr_init(r8953831);
        mpfr_init(r8953832);
        mpfr_init_set_str(r8953833, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r8953834);
        mpfr_init(r8953835);
        mpfr_init(r8953836);
        mpfr_init(r8953837);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8953829, x, MPFR_RNDN);
        ;
        mpfr_pow(r8953831, r8953829, r8953830, MPFR_RNDN);
        mpfr_mul(r8953832, r8953828, r8953831, MPFR_RNDN);
        ;
        mpfr_mul(r8953834, r8953829, r8953833, MPFR_RNDN);
        mpfr_mul(r8953835, r8953834, r8953829, MPFR_RNDN);
        mpfr_add(r8953836, r8953832, r8953835, MPFR_RNDN);
        mpfr_add(r8953837, r8953827, r8953836, MPFR_RNDN);
        return mpfr_get_d(r8953837, MPFR_RNDN);
}

static mpfr_t r8953838, r8953839, r8953840, r8953841, r8953842, r8953843, r8953844, r8953845, r8953846, r8953847, r8953848;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953838, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953839, "16.0", 10, MPFR_RNDN);
        mpfr_init(r8953840);
        mpfr_init_set_str(r8953841, "4", 10, MPFR_RNDN);
        mpfr_init(r8953842);
        mpfr_init(r8953843);
        mpfr_init_set_str(r8953844, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r8953845);
        mpfr_init(r8953846);
        mpfr_init(r8953847);
        mpfr_init(r8953848);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8953840, x, MPFR_RNDN);
        ;
        mpfr_pow(r8953842, r8953840, r8953841, MPFR_RNDN);
        mpfr_mul(r8953843, r8953839, r8953842, MPFR_RNDN);
        ;
        mpfr_mul(r8953845, r8953840, r8953844, MPFR_RNDN);
        mpfr_mul(r8953846, r8953845, r8953840, MPFR_RNDN);
        mpfr_add(r8953847, r8953843, r8953846, MPFR_RNDN);
        mpfr_add(r8953848, r8953838, r8953847, MPFR_RNDN);
        return mpfr_get_d(r8953848, MPFR_RNDN);
}

