#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6432861 = -1.5;
        float r6432862 = x;
        float r6432863 = r6432861 * r6432862;
        float r6432864 = 2.5;
        float r6432865 = r6432862 * r6432862;
        float r6432866 = r6432865 * r6432862;
        float r6432867 = r6432864 * r6432866;
        float r6432868 = r6432863 + r6432867;
        return r6432868;
}

double f_id(double x) {
        double r6432869 = -1.5;
        double r6432870 = x;
        double r6432871 = r6432869 * r6432870;
        double r6432872 = 2.5;
        double r6432873 = r6432870 * r6432870;
        double r6432874 = r6432873 * r6432870;
        double r6432875 = r6432872 * r6432874;
        double r6432876 = r6432871 + r6432875;
        return r6432876;
}


double f_of(float x) {
        float r6432877 = -1.5;
        float r6432878 = x;
        float r6432879 = r6432877 * r6432878;
        float r6432880 = 2.5;
        float r6432881 = r6432878 * r6432878;
        float r6432882 = r6432881 * r6432878;
        float r6432883 = r6432880 * r6432882;
        float r6432884 = cbrt(r6432883);
        float r6432885 = r6432884 * r6432884;
        float r6432886 = r6432885 * r6432884;
        float r6432887 = r6432879 + r6432886;
        return r6432887;
}

double f_od(double x) {
        double r6432888 = -1.5;
        double r6432889 = x;
        double r6432890 = r6432888 * r6432889;
        double r6432891 = 2.5;
        double r6432892 = r6432889 * r6432889;
        double r6432893 = r6432892 * r6432889;
        double r6432894 = r6432891 * r6432893;
        double r6432895 = cbrt(r6432894);
        double r6432896 = r6432895 * r6432895;
        double r6432897 = r6432896 * r6432895;
        double r6432898 = r6432890 + r6432897;
        return r6432898;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6432899, r6432900, r6432901, r6432902, r6432903, r6432904, r6432905, r6432906;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6432899, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6432900);
        mpfr_init(r6432901);
        mpfr_init_set_str(r6432902, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6432903);
        mpfr_init(r6432904);
        mpfr_init(r6432905);
        mpfr_init(r6432906);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6432900, x, MPFR_RNDN);
        mpfr_mul(r6432901, r6432899, r6432900, MPFR_RNDN);
        ;
        mpfr_mul(r6432903, r6432900, r6432900, MPFR_RNDN);
        mpfr_mul(r6432904, r6432903, r6432900, MPFR_RNDN);
        mpfr_mul(r6432905, r6432902, r6432904, MPFR_RNDN);
        mpfr_add(r6432906, r6432901, r6432905, MPFR_RNDN);
        return mpfr_get_d(r6432906, MPFR_RNDN);
}

static mpfr_t r6432907, r6432908, r6432909, r6432910, r6432911, r6432912, r6432913, r6432914, r6432915, r6432916, r6432917;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6432907, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6432908);
        mpfr_init(r6432909);
        mpfr_init_set_str(r6432910, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6432911);
        mpfr_init(r6432912);
        mpfr_init(r6432913);
        mpfr_init(r6432914);
        mpfr_init(r6432915);
        mpfr_init(r6432916);
        mpfr_init(r6432917);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6432908, x, MPFR_RNDN);
        mpfr_mul(r6432909, r6432907, r6432908, MPFR_RNDN);
        ;
        mpfr_mul(r6432911, r6432908, r6432908, MPFR_RNDN);
        mpfr_mul(r6432912, r6432911, r6432908, MPFR_RNDN);
        mpfr_mul(r6432913, r6432910, r6432912, MPFR_RNDN);
        mpfr_cbrt(r6432914, r6432913, MPFR_RNDN);
        mpfr_mul(r6432915, r6432914, r6432914, MPFR_RNDN);
        mpfr_mul(r6432916, r6432915, r6432914, MPFR_RNDN);
        mpfr_add(r6432917, r6432909, r6432916, MPFR_RNDN);
        return mpfr_get_d(r6432917, MPFR_RNDN);
}

static mpfr_t r6432918, r6432919, r6432920, r6432921, r6432922, r6432923, r6432924, r6432925, r6432926, r6432927, r6432928;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6432918, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6432919);
        mpfr_init(r6432920);
        mpfr_init_set_str(r6432921, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6432922);
        mpfr_init(r6432923);
        mpfr_init(r6432924);
        mpfr_init(r6432925);
        mpfr_init(r6432926);
        mpfr_init(r6432927);
        mpfr_init(r6432928);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6432919, x, MPFR_RNDN);
        mpfr_mul(r6432920, r6432918, r6432919, MPFR_RNDN);
        ;
        mpfr_mul(r6432922, r6432919, r6432919, MPFR_RNDN);
        mpfr_mul(r6432923, r6432922, r6432919, MPFR_RNDN);
        mpfr_mul(r6432924, r6432921, r6432923, MPFR_RNDN);
        mpfr_cbrt(r6432925, r6432924, MPFR_RNDN);
        mpfr_mul(r6432926, r6432925, r6432925, MPFR_RNDN);
        mpfr_mul(r6432927, r6432926, r6432925, MPFR_RNDN);
        mpfr_add(r6432928, r6432920, r6432927, MPFR_RNDN);
        return mpfr_get_d(r6432928, MPFR_RNDN);
}

