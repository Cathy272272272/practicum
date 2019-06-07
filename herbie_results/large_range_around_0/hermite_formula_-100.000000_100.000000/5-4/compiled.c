#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7079790 = 12.0;
        float r7079791 = -48.0;
        float r7079792 = x;
        float r7079793 = r7079792 * r7079792;
        float r7079794 = r7079791 * r7079793;
        float r7079795 = r7079790 + r7079794;
        float r7079796 = 16.0;
        float r7079797 = r7079793 * r7079792;
        float r7079798 = r7079797 * r7079792;
        float r7079799 = r7079796 * r7079798;
        float r7079800 = r7079795 + r7079799;
        return r7079800;
}

double f_id(double x) {
        double r7079801 = 12.0;
        double r7079802 = -48.0;
        double r7079803 = x;
        double r7079804 = r7079803 * r7079803;
        double r7079805 = r7079802 * r7079804;
        double r7079806 = r7079801 + r7079805;
        double r7079807 = 16.0;
        double r7079808 = r7079804 * r7079803;
        double r7079809 = r7079808 * r7079803;
        double r7079810 = r7079807 * r7079809;
        double r7079811 = r7079806 + r7079810;
        return r7079811;
}


double f_of(float x) {
        float r7079812 = 12.0;
        float r7079813 = -48.0;
        float r7079814 = x;
        float r7079815 = r7079814 * r7079814;
        float r7079816 = r7079813 * r7079815;
        float r7079817 = r7079812 + r7079816;
        float r7079818 = 16.0;
        float r7079819 = r7079815 * r7079814;
        float r7079820 = r7079819 * r7079814;
        float r7079821 = r7079818 * r7079820;
        float r7079822 = r7079817 + r7079821;
        return r7079822;
}

double f_od(double x) {
        double r7079823 = 12.0;
        double r7079824 = -48.0;
        double r7079825 = x;
        double r7079826 = r7079825 * r7079825;
        double r7079827 = r7079824 * r7079826;
        double r7079828 = r7079823 + r7079827;
        double r7079829 = 16.0;
        double r7079830 = r7079826 * r7079825;
        double r7079831 = r7079830 * r7079825;
        double r7079832 = r7079829 * r7079831;
        double r7079833 = r7079828 + r7079832;
        return r7079833;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7079834, r7079835, r7079836, r7079837, r7079838, r7079839, r7079840, r7079841, r7079842, r7079843, r7079844;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7079834, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079835, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7079836);
        mpfr_init(r7079837);
        mpfr_init(r7079838);
        mpfr_init(r7079839);
        mpfr_init_set_str(r7079840, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7079841);
        mpfr_init(r7079842);
        mpfr_init(r7079843);
        mpfr_init(r7079844);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7079836, x, MPFR_RNDN);
        mpfr_mul(r7079837, r7079836, r7079836, MPFR_RNDN);
        mpfr_mul(r7079838, r7079835, r7079837, MPFR_RNDN);
        mpfr_add(r7079839, r7079834, r7079838, MPFR_RNDN);
        ;
        mpfr_mul(r7079841, r7079837, r7079836, MPFR_RNDN);
        mpfr_mul(r7079842, r7079841, r7079836, MPFR_RNDN);
        mpfr_mul(r7079843, r7079840, r7079842, MPFR_RNDN);
        mpfr_add(r7079844, r7079839, r7079843, MPFR_RNDN);
        return mpfr_get_d(r7079844, MPFR_RNDN);
}

static mpfr_t r7079845, r7079846, r7079847, r7079848, r7079849, r7079850, r7079851, r7079852, r7079853, r7079854, r7079855;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7079845, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079846, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7079847);
        mpfr_init(r7079848);
        mpfr_init(r7079849);
        mpfr_init(r7079850);
        mpfr_init_set_str(r7079851, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7079852);
        mpfr_init(r7079853);
        mpfr_init(r7079854);
        mpfr_init(r7079855);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7079847, x, MPFR_RNDN);
        mpfr_mul(r7079848, r7079847, r7079847, MPFR_RNDN);
        mpfr_mul(r7079849, r7079846, r7079848, MPFR_RNDN);
        mpfr_add(r7079850, r7079845, r7079849, MPFR_RNDN);
        ;
        mpfr_mul(r7079852, r7079848, r7079847, MPFR_RNDN);
        mpfr_mul(r7079853, r7079852, r7079847, MPFR_RNDN);
        mpfr_mul(r7079854, r7079851, r7079853, MPFR_RNDN);
        mpfr_add(r7079855, r7079850, r7079854, MPFR_RNDN);
        return mpfr_get_d(r7079855, MPFR_RNDN);
}

static mpfr_t r7079856, r7079857, r7079858, r7079859, r7079860, r7079861, r7079862, r7079863, r7079864, r7079865, r7079866;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7079856, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079857, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7079858);
        mpfr_init(r7079859);
        mpfr_init(r7079860);
        mpfr_init(r7079861);
        mpfr_init_set_str(r7079862, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7079863);
        mpfr_init(r7079864);
        mpfr_init(r7079865);
        mpfr_init(r7079866);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7079858, x, MPFR_RNDN);
        mpfr_mul(r7079859, r7079858, r7079858, MPFR_RNDN);
        mpfr_mul(r7079860, r7079857, r7079859, MPFR_RNDN);
        mpfr_add(r7079861, r7079856, r7079860, MPFR_RNDN);
        ;
        mpfr_mul(r7079863, r7079859, r7079858, MPFR_RNDN);
        mpfr_mul(r7079864, r7079863, r7079858, MPFR_RNDN);
        mpfr_mul(r7079865, r7079862, r7079864, MPFR_RNDN);
        mpfr_add(r7079866, r7079861, r7079865, MPFR_RNDN);
        return mpfr_get_d(r7079866, MPFR_RNDN);
}

