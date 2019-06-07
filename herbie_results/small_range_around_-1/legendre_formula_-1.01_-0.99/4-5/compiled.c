#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r48608774 = 1.875;
        float r48608775 = x;
        float r48608776 = r48608774 * r48608775;
        float r48608777 = -8.75;
        float r48608778 = r48608775 * r48608775;
        float r48608779 = r48608778 * r48608775;
        float r48608780 = r48608777 * r48608779;
        float r48608781 = r48608776 + r48608780;
        float r48608782 = 7.875;
        float r48608783 = r48608779 * r48608775;
        float r48608784 = r48608783 * r48608775;
        float r48608785 = r48608782 * r48608784;
        float r48608786 = r48608781 + r48608785;
        return r48608786;
}

double f_id(double x) {
        double r48608787 = 1.875;
        double r48608788 = x;
        double r48608789 = r48608787 * r48608788;
        double r48608790 = -8.75;
        double r48608791 = r48608788 * r48608788;
        double r48608792 = r48608791 * r48608788;
        double r48608793 = r48608790 * r48608792;
        double r48608794 = r48608789 + r48608793;
        double r48608795 = 7.875;
        double r48608796 = r48608792 * r48608788;
        double r48608797 = r48608796 * r48608788;
        double r48608798 = r48608795 * r48608797;
        double r48608799 = r48608794 + r48608798;
        return r48608799;
}


double f_of(float x) {
        float r48608800 = 7.875;
        float r48608801 = exp(r48608800);
        float r48608802 = cbrt(r48608801);
        float r48608803 = r48608802 * r48608802;
        float r48608804 = x;
        float r48608805 = 3;
        float r48608806 = pow(r48608804, r48608805);
        float r48608807 = pow(r48608803, r48608806);
        float r48608808 = pow(r48608802, r48608806);
        float r48608809 = r48608807 * r48608808;
        float r48608810 = pow(r48608809, r48608804);
        float r48608811 = pow(r48608810, r48608804);
        float r48608812 = 1.875;
        float r48608813 = r48608812 * r48608804;
        float r48608814 = exp(r48608813);
        float r48608815 = -8.75;
        float r48608816 = exp(r48608815);
        float r48608817 = pow(r48608816, r48608806);
        float r48608818 = r48608814 * r48608817;
        float r48608819 = r48608811 * r48608818;
        float r48608820 = log(r48608819);
        return r48608820;
}

double f_od(double x) {
        double r48608821 = 7.875;
        double r48608822 = exp(r48608821);
        double r48608823 = cbrt(r48608822);
        double r48608824 = r48608823 * r48608823;
        double r48608825 = x;
        double r48608826 = 3;
        double r48608827 = pow(r48608825, r48608826);
        double r48608828 = pow(r48608824, r48608827);
        double r48608829 = pow(r48608823, r48608827);
        double r48608830 = r48608828 * r48608829;
        double r48608831 = pow(r48608830, r48608825);
        double r48608832 = pow(r48608831, r48608825);
        double r48608833 = 1.875;
        double r48608834 = r48608833 * r48608825;
        double r48608835 = exp(r48608834);
        double r48608836 = -8.75;
        double r48608837 = exp(r48608836);
        double r48608838 = pow(r48608837, r48608827);
        double r48608839 = r48608835 * r48608838;
        double r48608840 = r48608832 * r48608839;
        double r48608841 = log(r48608840);
        return r48608841;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48608842, r48608843, r48608844, r48608845, r48608846, r48608847, r48608848, r48608849, r48608850, r48608851, r48608852, r48608853, r48608854;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608842, "1.875", 10, MPFR_RNDN);
        mpfr_init(r48608843);
        mpfr_init(r48608844);
        mpfr_init_set_str(r48608845, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r48608846);
        mpfr_init(r48608847);
        mpfr_init(r48608848);
        mpfr_init(r48608849);
        mpfr_init_set_str(r48608850, "7.875", 10, MPFR_RNDN);
        mpfr_init(r48608851);
        mpfr_init(r48608852);
        mpfr_init(r48608853);
        mpfr_init(r48608854);
}

double f_im(double x) {
        ;
        mpfr_set_d(r48608843, x, MPFR_RNDN);
        mpfr_mul(r48608844, r48608842, r48608843, MPFR_RNDN);
        ;
        mpfr_mul(r48608846, r48608843, r48608843, MPFR_RNDN);
        mpfr_mul(r48608847, r48608846, r48608843, MPFR_RNDN);
        mpfr_mul(r48608848, r48608845, r48608847, MPFR_RNDN);
        mpfr_add(r48608849, r48608844, r48608848, MPFR_RNDN);
        ;
        mpfr_mul(r48608851, r48608847, r48608843, MPFR_RNDN);
        mpfr_mul(r48608852, r48608851, r48608843, MPFR_RNDN);
        mpfr_mul(r48608853, r48608850, r48608852, MPFR_RNDN);
        mpfr_add(r48608854, r48608849, r48608853, MPFR_RNDN);
        return mpfr_get_d(r48608854, MPFR_RNDN);
}

static mpfr_t r48608855, r48608856, r48608857, r48608858, r48608859, r48608860, r48608861, r48608862, r48608863, r48608864, r48608865, r48608866, r48608867, r48608868, r48608869, r48608870, r48608871, r48608872, r48608873, r48608874, r48608875;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608855, "7.875", 10, MPFR_RNDN);
        mpfr_init(r48608856);
        mpfr_init(r48608857);
        mpfr_init(r48608858);
        mpfr_init(r48608859);
        mpfr_init_set_str(r48608860, "3", 10, MPFR_RNDN);
        mpfr_init(r48608861);
        mpfr_init(r48608862);
        mpfr_init(r48608863);
        mpfr_init(r48608864);
        mpfr_init(r48608865);
        mpfr_init(r48608866);
        mpfr_init_set_str(r48608867, "1.875", 10, MPFR_RNDN);
        mpfr_init(r48608868);
        mpfr_init(r48608869);
        mpfr_init_set_str(r48608870, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r48608871);
        mpfr_init(r48608872);
        mpfr_init(r48608873);
        mpfr_init(r48608874);
        mpfr_init(r48608875);
}

double f_fm(double x) {
        ;
        mpfr_exp(r48608856, r48608855, MPFR_RNDN);
        mpfr_cbrt(r48608857, r48608856, MPFR_RNDN);
        mpfr_mul(r48608858, r48608857, r48608857, MPFR_RNDN);
        mpfr_set_d(r48608859, x, MPFR_RNDN);
        ;
        mpfr_pow(r48608861, r48608859, r48608860, MPFR_RNDN);
        mpfr_pow(r48608862, r48608858, r48608861, MPFR_RNDN);
        mpfr_pow(r48608863, r48608857, r48608861, MPFR_RNDN);
        mpfr_mul(r48608864, r48608862, r48608863, MPFR_RNDN);
        mpfr_pow(r48608865, r48608864, r48608859, MPFR_RNDN);
        mpfr_pow(r48608866, r48608865, r48608859, MPFR_RNDN);
        ;
        mpfr_mul(r48608868, r48608867, r48608859, MPFR_RNDN);
        mpfr_exp(r48608869, r48608868, MPFR_RNDN);
        ;
        mpfr_exp(r48608871, r48608870, MPFR_RNDN);
        mpfr_pow(r48608872, r48608871, r48608861, MPFR_RNDN);
        mpfr_mul(r48608873, r48608869, r48608872, MPFR_RNDN);
        mpfr_mul(r48608874, r48608866, r48608873, MPFR_RNDN);
        mpfr_log(r48608875, r48608874, MPFR_RNDN);
        return mpfr_get_d(r48608875, MPFR_RNDN);
}

static mpfr_t r48608876, r48608877, r48608878, r48608879, r48608880, r48608881, r48608882, r48608883, r48608884, r48608885, r48608886, r48608887, r48608888, r48608889, r48608890, r48608891, r48608892, r48608893, r48608894, r48608895, r48608896;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608876, "7.875", 10, MPFR_RNDN);
        mpfr_init(r48608877);
        mpfr_init(r48608878);
        mpfr_init(r48608879);
        mpfr_init(r48608880);
        mpfr_init_set_str(r48608881, "3", 10, MPFR_RNDN);
        mpfr_init(r48608882);
        mpfr_init(r48608883);
        mpfr_init(r48608884);
        mpfr_init(r48608885);
        mpfr_init(r48608886);
        mpfr_init(r48608887);
        mpfr_init_set_str(r48608888, "1.875", 10, MPFR_RNDN);
        mpfr_init(r48608889);
        mpfr_init(r48608890);
        mpfr_init_set_str(r48608891, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r48608892);
        mpfr_init(r48608893);
        mpfr_init(r48608894);
        mpfr_init(r48608895);
        mpfr_init(r48608896);
}

double f_dm(double x) {
        ;
        mpfr_exp(r48608877, r48608876, MPFR_RNDN);
        mpfr_cbrt(r48608878, r48608877, MPFR_RNDN);
        mpfr_mul(r48608879, r48608878, r48608878, MPFR_RNDN);
        mpfr_set_d(r48608880, x, MPFR_RNDN);
        ;
        mpfr_pow(r48608882, r48608880, r48608881, MPFR_RNDN);
        mpfr_pow(r48608883, r48608879, r48608882, MPFR_RNDN);
        mpfr_pow(r48608884, r48608878, r48608882, MPFR_RNDN);
        mpfr_mul(r48608885, r48608883, r48608884, MPFR_RNDN);
        mpfr_pow(r48608886, r48608885, r48608880, MPFR_RNDN);
        mpfr_pow(r48608887, r48608886, r48608880, MPFR_RNDN);
        ;
        mpfr_mul(r48608889, r48608888, r48608880, MPFR_RNDN);
        mpfr_exp(r48608890, r48608889, MPFR_RNDN);
        ;
        mpfr_exp(r48608892, r48608891, MPFR_RNDN);
        mpfr_pow(r48608893, r48608892, r48608882, MPFR_RNDN);
        mpfr_mul(r48608894, r48608890, r48608893, MPFR_RNDN);
        mpfr_mul(r48608895, r48608887, r48608894, MPFR_RNDN);
        mpfr_log(r48608896, r48608895, MPFR_RNDN);
        return mpfr_get_d(r48608896, MPFR_RNDN);
}

