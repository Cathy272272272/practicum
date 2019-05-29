#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6179797 = -1.5;
        float r6179798 = x;
        float r6179799 = r6179797 * r6179798;
        float r6179800 = 2.5;
        float r6179801 = r6179798 * r6179798;
        float r6179802 = r6179801 * r6179798;
        float r6179803 = r6179800 * r6179802;
        float r6179804 = r6179799 + r6179803;
        return r6179804;
}

double f_id(double x) {
        double r6179805 = -1.5;
        double r6179806 = x;
        double r6179807 = r6179805 * r6179806;
        double r6179808 = 2.5;
        double r6179809 = r6179806 * r6179806;
        double r6179810 = r6179809 * r6179806;
        double r6179811 = r6179808 * r6179810;
        double r6179812 = r6179807 + r6179811;
        return r6179812;
}


double f_of(float x) {
        float r6179813 = -1.5;
        float r6179814 = x;
        float r6179815 = r6179813 * r6179814;
        float r6179816 = 2.5;
        float r6179817 = r6179814 * r6179814;
        float r6179818 = r6179817 * r6179814;
        float r6179819 = r6179816 * r6179818;
        float r6179820 = cbrt(r6179819);
        float r6179821 = r6179820 * r6179820;
        float r6179822 = r6179821 * r6179820;
        float r6179823 = r6179815 + r6179822;
        return r6179823;
}

double f_od(double x) {
        double r6179824 = -1.5;
        double r6179825 = x;
        double r6179826 = r6179824 * r6179825;
        double r6179827 = 2.5;
        double r6179828 = r6179825 * r6179825;
        double r6179829 = r6179828 * r6179825;
        double r6179830 = r6179827 * r6179829;
        double r6179831 = cbrt(r6179830);
        double r6179832 = r6179831 * r6179831;
        double r6179833 = r6179832 * r6179831;
        double r6179834 = r6179826 + r6179833;
        return r6179834;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179835, r6179836, r6179837, r6179838, r6179839, r6179840, r6179841, r6179842;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179835, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6179836);
        mpfr_init(r6179837);
        mpfr_init_set_str(r6179838, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6179839);
        mpfr_init(r6179840);
        mpfr_init(r6179841);
        mpfr_init(r6179842);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6179836, x, MPFR_RNDN);
        mpfr_mul(r6179837, r6179835, r6179836, MPFR_RNDN);
        ;
        mpfr_mul(r6179839, r6179836, r6179836, MPFR_RNDN);
        mpfr_mul(r6179840, r6179839, r6179836, MPFR_RNDN);
        mpfr_mul(r6179841, r6179838, r6179840, MPFR_RNDN);
        mpfr_add(r6179842, r6179837, r6179841, MPFR_RNDN);
        return mpfr_get_d(r6179842, MPFR_RNDN);
}

static mpfr_t r6179843, r6179844, r6179845, r6179846, r6179847, r6179848, r6179849, r6179850, r6179851, r6179852, r6179853;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179843, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6179844);
        mpfr_init(r6179845);
        mpfr_init_set_str(r6179846, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6179847);
        mpfr_init(r6179848);
        mpfr_init(r6179849);
        mpfr_init(r6179850);
        mpfr_init(r6179851);
        mpfr_init(r6179852);
        mpfr_init(r6179853);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6179844, x, MPFR_RNDN);
        mpfr_mul(r6179845, r6179843, r6179844, MPFR_RNDN);
        ;
        mpfr_mul(r6179847, r6179844, r6179844, MPFR_RNDN);
        mpfr_mul(r6179848, r6179847, r6179844, MPFR_RNDN);
        mpfr_mul(r6179849, r6179846, r6179848, MPFR_RNDN);
        mpfr_cbrt(r6179850, r6179849, MPFR_RNDN);
        mpfr_mul(r6179851, r6179850, r6179850, MPFR_RNDN);
        mpfr_mul(r6179852, r6179851, r6179850, MPFR_RNDN);
        mpfr_add(r6179853, r6179845, r6179852, MPFR_RNDN);
        return mpfr_get_d(r6179853, MPFR_RNDN);
}

static mpfr_t r6179854, r6179855, r6179856, r6179857, r6179858, r6179859, r6179860, r6179861, r6179862, r6179863, r6179864;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179854, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6179855);
        mpfr_init(r6179856);
        mpfr_init_set_str(r6179857, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6179858);
        mpfr_init(r6179859);
        mpfr_init(r6179860);
        mpfr_init(r6179861);
        mpfr_init(r6179862);
        mpfr_init(r6179863);
        mpfr_init(r6179864);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6179855, x, MPFR_RNDN);
        mpfr_mul(r6179856, r6179854, r6179855, MPFR_RNDN);
        ;
        mpfr_mul(r6179858, r6179855, r6179855, MPFR_RNDN);
        mpfr_mul(r6179859, r6179858, r6179855, MPFR_RNDN);
        mpfr_mul(r6179860, r6179857, r6179859, MPFR_RNDN);
        mpfr_cbrt(r6179861, r6179860, MPFR_RNDN);
        mpfr_mul(r6179862, r6179861, r6179861, MPFR_RNDN);
        mpfr_mul(r6179863, r6179862, r6179861, MPFR_RNDN);
        mpfr_add(r6179864, r6179856, r6179863, MPFR_RNDN);
        return mpfr_get_d(r6179864, MPFR_RNDN);
}

