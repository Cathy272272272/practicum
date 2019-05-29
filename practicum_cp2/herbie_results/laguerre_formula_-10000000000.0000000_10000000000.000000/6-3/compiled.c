#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r9373838 = 1.0;
        float r9373839 = -3.0;
        float r9373840 = x;
        float r9373841 = r9373839 * r9373840;
        float r9373842 = r9373838 + r9373841;
        float r9373843 = 1.5;
        float r9373844 = r9373840 * r9373840;
        float r9373845 = r9373843 * r9373844;
        float r9373846 = r9373842 + r9373845;
        float r9373847 = -0.166667;
        float r9373848 = r9373844 * r9373840;
        float r9373849 = r9373847 * r9373848;
        float r9373850 = r9373846 + r9373849;
        return r9373850;
}

double f_id(double x) {
        double r9373851 = 1.0;
        double r9373852 = -3.0;
        double r9373853 = x;
        double r9373854 = r9373852 * r9373853;
        double r9373855 = r9373851 + r9373854;
        double r9373856 = 1.5;
        double r9373857 = r9373853 * r9373853;
        double r9373858 = r9373856 * r9373857;
        double r9373859 = r9373855 + r9373858;
        double r9373860 = -0.166667;
        double r9373861 = r9373857 * r9373853;
        double r9373862 = r9373860 * r9373861;
        double r9373863 = r9373859 + r9373862;
        return r9373863;
}


double f_of(float x) {
        float r9373864 = 1.0;
        float r9373865 = -3.0;
        float r9373866 = x;
        float r9373867 = r9373865 * r9373866;
        float r9373868 = r9373864 + r9373867;
        float r9373869 = 1.5;
        float r9373870 = r9373866 * r9373866;
        float r9373871 = r9373869 * r9373870;
        float r9373872 = sqrt(r9373871);
        float r9373873 = r9373872 * r9373872;
        float r9373874 = r9373868 + r9373873;
        float r9373875 = -0.166667;
        float r9373876 = r9373870 * r9373866;
        float r9373877 = r9373875 * r9373876;
        float r9373878 = r9373874 + r9373877;
        return r9373878;
}

double f_od(double x) {
        double r9373879 = 1.0;
        double r9373880 = -3.0;
        double r9373881 = x;
        double r9373882 = r9373880 * r9373881;
        double r9373883 = r9373879 + r9373882;
        double r9373884 = 1.5;
        double r9373885 = r9373881 * r9373881;
        double r9373886 = r9373884 * r9373885;
        double r9373887 = sqrt(r9373886);
        double r9373888 = r9373887 * r9373887;
        double r9373889 = r9373883 + r9373888;
        double r9373890 = -0.166667;
        double r9373891 = r9373885 * r9373881;
        double r9373892 = r9373890 * r9373891;
        double r9373893 = r9373889 + r9373892;
        return r9373893;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9373894, r9373895, r9373896, r9373897, r9373898, r9373899, r9373900, r9373901, r9373902, r9373903, r9373904, r9373905, r9373906;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373894, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373895, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9373896);
        mpfr_init(r9373897);
        mpfr_init(r9373898);
        mpfr_init_set_str(r9373899, "1.5", 10, MPFR_RNDN);
        mpfr_init(r9373900);
        mpfr_init(r9373901);
        mpfr_init(r9373902);
        mpfr_init_set_str(r9373903, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r9373904);
        mpfr_init(r9373905);
        mpfr_init(r9373906);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9373896, x, MPFR_RNDN);
        mpfr_mul(r9373897, r9373895, r9373896, MPFR_RNDN);
        mpfr_add(r9373898, r9373894, r9373897, MPFR_RNDN);
        ;
        mpfr_mul(r9373900, r9373896, r9373896, MPFR_RNDN);
        mpfr_mul(r9373901, r9373899, r9373900, MPFR_RNDN);
        mpfr_add(r9373902, r9373898, r9373901, MPFR_RNDN);
        ;
        mpfr_mul(r9373904, r9373900, r9373896, MPFR_RNDN);
        mpfr_mul(r9373905, r9373903, r9373904, MPFR_RNDN);
        mpfr_add(r9373906, r9373902, r9373905, MPFR_RNDN);
        return mpfr_get_d(r9373906, MPFR_RNDN);
}

static mpfr_t r9373907, r9373908, r9373909, r9373910, r9373911, r9373912, r9373913, r9373914, r9373915, r9373916, r9373917, r9373918, r9373919, r9373920, r9373921;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373907, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373908, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9373909);
        mpfr_init(r9373910);
        mpfr_init(r9373911);
        mpfr_init_set_str(r9373912, "1.5", 10, MPFR_RNDN);
        mpfr_init(r9373913);
        mpfr_init(r9373914);
        mpfr_init(r9373915);
        mpfr_init(r9373916);
        mpfr_init(r9373917);
        mpfr_init_set_str(r9373918, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r9373919);
        mpfr_init(r9373920);
        mpfr_init(r9373921);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9373909, x, MPFR_RNDN);
        mpfr_mul(r9373910, r9373908, r9373909, MPFR_RNDN);
        mpfr_add(r9373911, r9373907, r9373910, MPFR_RNDN);
        ;
        mpfr_mul(r9373913, r9373909, r9373909, MPFR_RNDN);
        mpfr_mul(r9373914, r9373912, r9373913, MPFR_RNDN);
        mpfr_sqrt(r9373915, r9373914, MPFR_RNDN);
        mpfr_mul(r9373916, r9373915, r9373915, MPFR_RNDN);
        mpfr_add(r9373917, r9373911, r9373916, MPFR_RNDN);
        ;
        mpfr_mul(r9373919, r9373913, r9373909, MPFR_RNDN);
        mpfr_mul(r9373920, r9373918, r9373919, MPFR_RNDN);
        mpfr_add(r9373921, r9373917, r9373920, MPFR_RNDN);
        return mpfr_get_d(r9373921, MPFR_RNDN);
}

static mpfr_t r9373922, r9373923, r9373924, r9373925, r9373926, r9373927, r9373928, r9373929, r9373930, r9373931, r9373932, r9373933, r9373934, r9373935, r9373936;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373922, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373923, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9373924);
        mpfr_init(r9373925);
        mpfr_init(r9373926);
        mpfr_init_set_str(r9373927, "1.5", 10, MPFR_RNDN);
        mpfr_init(r9373928);
        mpfr_init(r9373929);
        mpfr_init(r9373930);
        mpfr_init(r9373931);
        mpfr_init(r9373932);
        mpfr_init_set_str(r9373933, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r9373934);
        mpfr_init(r9373935);
        mpfr_init(r9373936);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9373924, x, MPFR_RNDN);
        mpfr_mul(r9373925, r9373923, r9373924, MPFR_RNDN);
        mpfr_add(r9373926, r9373922, r9373925, MPFR_RNDN);
        ;
        mpfr_mul(r9373928, r9373924, r9373924, MPFR_RNDN);
        mpfr_mul(r9373929, r9373927, r9373928, MPFR_RNDN);
        mpfr_sqrt(r9373930, r9373929, MPFR_RNDN);
        mpfr_mul(r9373931, r9373930, r9373930, MPFR_RNDN);
        mpfr_add(r9373932, r9373926, r9373931, MPFR_RNDN);
        ;
        mpfr_mul(r9373934, r9373928, r9373924, MPFR_RNDN);
        mpfr_mul(r9373935, r9373933, r9373934, MPFR_RNDN);
        mpfr_add(r9373936, r9373932, r9373935, MPFR_RNDN);
        return mpfr_get_d(r9373936, MPFR_RNDN);
}

