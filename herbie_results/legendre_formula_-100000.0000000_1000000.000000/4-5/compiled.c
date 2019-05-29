#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6176839 = 1.875;
        float r6176840 = x;
        float r6176841 = r6176839 * r6176840;
        float r6176842 = -8.75;
        float r6176843 = r6176840 * r6176840;
        float r6176844 = r6176843 * r6176840;
        float r6176845 = r6176842 * r6176844;
        float r6176846 = r6176841 + r6176845;
        float r6176847 = 7.875;
        float r6176848 = r6176844 * r6176840;
        float r6176849 = r6176848 * r6176840;
        float r6176850 = r6176847 * r6176849;
        float r6176851 = r6176846 + r6176850;
        return r6176851;
}

double f_id(double x) {
        double r6176852 = 1.875;
        double r6176853 = x;
        double r6176854 = r6176852 * r6176853;
        double r6176855 = -8.75;
        double r6176856 = r6176853 * r6176853;
        double r6176857 = r6176856 * r6176853;
        double r6176858 = r6176855 * r6176857;
        double r6176859 = r6176854 + r6176858;
        double r6176860 = 7.875;
        double r6176861 = r6176857 * r6176853;
        double r6176862 = r6176861 * r6176853;
        double r6176863 = r6176860 * r6176862;
        double r6176864 = r6176859 + r6176863;
        return r6176864;
}


double f_of(float x) {
        float r6176865 = 1.875;
        float r6176866 = x;
        float r6176867 = r6176865 * r6176866;
        float r6176868 = -8.75;
        float r6176869 = r6176866 * r6176866;
        float r6176870 = r6176869 * r6176866;
        float r6176871 = r6176868 * r6176870;
        float r6176872 = r6176867 + r6176871;
        float r6176873 = 7.875;
        float r6176874 = r6176870 * r6176866;
        float r6176875 = r6176874 * r6176866;
        float r6176876 = r6176873 * r6176875;
        float r6176877 = r6176872 + r6176876;
        return r6176877;
}

double f_od(double x) {
        double r6176878 = 1.875;
        double r6176879 = x;
        double r6176880 = r6176878 * r6176879;
        double r6176881 = -8.75;
        double r6176882 = r6176879 * r6176879;
        double r6176883 = r6176882 * r6176879;
        double r6176884 = r6176881 * r6176883;
        double r6176885 = r6176880 + r6176884;
        double r6176886 = 7.875;
        double r6176887 = r6176883 * r6176879;
        double r6176888 = r6176887 * r6176879;
        double r6176889 = r6176886 * r6176888;
        double r6176890 = r6176885 + r6176889;
        return r6176890;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6176891, r6176892, r6176893, r6176894, r6176895, r6176896, r6176897, r6176898, r6176899, r6176900, r6176901, r6176902, r6176903;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6176891, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6176892);
        mpfr_init(r6176893);
        mpfr_init_set_str(r6176894, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6176895);
        mpfr_init(r6176896);
        mpfr_init(r6176897);
        mpfr_init(r6176898);
        mpfr_init_set_str(r6176899, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6176900);
        mpfr_init(r6176901);
        mpfr_init(r6176902);
        mpfr_init(r6176903);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6176892, x, MPFR_RNDN);
        mpfr_mul(r6176893, r6176891, r6176892, MPFR_RNDN);
        ;
        mpfr_mul(r6176895, r6176892, r6176892, MPFR_RNDN);
        mpfr_mul(r6176896, r6176895, r6176892, MPFR_RNDN);
        mpfr_mul(r6176897, r6176894, r6176896, MPFR_RNDN);
        mpfr_add(r6176898, r6176893, r6176897, MPFR_RNDN);
        ;
        mpfr_mul(r6176900, r6176896, r6176892, MPFR_RNDN);
        mpfr_mul(r6176901, r6176900, r6176892, MPFR_RNDN);
        mpfr_mul(r6176902, r6176899, r6176901, MPFR_RNDN);
        mpfr_add(r6176903, r6176898, r6176902, MPFR_RNDN);
        return mpfr_get_d(r6176903, MPFR_RNDN);
}

static mpfr_t r6176904, r6176905, r6176906, r6176907, r6176908, r6176909, r6176910, r6176911, r6176912, r6176913, r6176914, r6176915, r6176916;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6176904, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6176905);
        mpfr_init(r6176906);
        mpfr_init_set_str(r6176907, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6176908);
        mpfr_init(r6176909);
        mpfr_init(r6176910);
        mpfr_init(r6176911);
        mpfr_init_set_str(r6176912, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6176913);
        mpfr_init(r6176914);
        mpfr_init(r6176915);
        mpfr_init(r6176916);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6176905, x, MPFR_RNDN);
        mpfr_mul(r6176906, r6176904, r6176905, MPFR_RNDN);
        ;
        mpfr_mul(r6176908, r6176905, r6176905, MPFR_RNDN);
        mpfr_mul(r6176909, r6176908, r6176905, MPFR_RNDN);
        mpfr_mul(r6176910, r6176907, r6176909, MPFR_RNDN);
        mpfr_add(r6176911, r6176906, r6176910, MPFR_RNDN);
        ;
        mpfr_mul(r6176913, r6176909, r6176905, MPFR_RNDN);
        mpfr_mul(r6176914, r6176913, r6176905, MPFR_RNDN);
        mpfr_mul(r6176915, r6176912, r6176914, MPFR_RNDN);
        mpfr_add(r6176916, r6176911, r6176915, MPFR_RNDN);
        return mpfr_get_d(r6176916, MPFR_RNDN);
}

static mpfr_t r6176917, r6176918, r6176919, r6176920, r6176921, r6176922, r6176923, r6176924, r6176925, r6176926, r6176927, r6176928, r6176929;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6176917, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6176918);
        mpfr_init(r6176919);
        mpfr_init_set_str(r6176920, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6176921);
        mpfr_init(r6176922);
        mpfr_init(r6176923);
        mpfr_init(r6176924);
        mpfr_init_set_str(r6176925, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6176926);
        mpfr_init(r6176927);
        mpfr_init(r6176928);
        mpfr_init(r6176929);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6176918, x, MPFR_RNDN);
        mpfr_mul(r6176919, r6176917, r6176918, MPFR_RNDN);
        ;
        mpfr_mul(r6176921, r6176918, r6176918, MPFR_RNDN);
        mpfr_mul(r6176922, r6176921, r6176918, MPFR_RNDN);
        mpfr_mul(r6176923, r6176920, r6176922, MPFR_RNDN);
        mpfr_add(r6176924, r6176919, r6176923, MPFR_RNDN);
        ;
        mpfr_mul(r6176926, r6176922, r6176918, MPFR_RNDN);
        mpfr_mul(r6176927, r6176926, r6176918, MPFR_RNDN);
        mpfr_mul(r6176928, r6176925, r6176927, MPFR_RNDN);
        mpfr_add(r6176929, r6176924, r6176928, MPFR_RNDN);
        return mpfr_get_d(r6176929, MPFR_RNDN);
}

