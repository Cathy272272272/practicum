#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r33707829 = 0.375;
        float r33707830 = -3.75;
        float r33707831 = x;
        float r33707832 = r33707831 * r33707831;
        float r33707833 = r33707830 * r33707832;
        float r33707834 = r33707829 + r33707833;
        float r33707835 = 4.375;
        float r33707836 = r33707832 * r33707831;
        float r33707837 = r33707836 * r33707831;
        float r33707838 = r33707835 * r33707837;
        float r33707839 = r33707834 + r33707838;
        return r33707839;
}

double f_id(double x) {
        double r33707840 = 0.375;
        double r33707841 = -3.75;
        double r33707842 = x;
        double r33707843 = r33707842 * r33707842;
        double r33707844 = r33707841 * r33707843;
        double r33707845 = r33707840 + r33707844;
        double r33707846 = 4.375;
        double r33707847 = r33707843 * r33707842;
        double r33707848 = r33707847 * r33707842;
        double r33707849 = r33707846 * r33707848;
        double r33707850 = r33707845 + r33707849;
        return r33707850;
}


double f_of(float x) {
        float r33707851 = 4.375;
        float r33707852 = exp(r33707851);
        float r33707853 = x;
        float r33707854 = 1;
        float r33707855 = 3;
        float r33707856 = r33707854 + r33707855;
        float r33707857 = pow(r33707853, r33707856);
        float r33707858 = pow(r33707852, r33707857);
        float r33707859 = -3.75;
        float r33707860 = exp(r33707859);
        float r33707861 = r33707853 * r33707853;
        float r33707862 = pow(r33707860, r33707861);
        float r33707863 = 0.375;
        float r33707864 = exp(r33707863);
        float r33707865 = r33707862 * r33707864;
        float r33707866 = r33707858 * r33707865;
        float r33707867 = log(r33707866);
        return r33707867;
}

double f_od(double x) {
        double r33707868 = 4.375;
        double r33707869 = exp(r33707868);
        double r33707870 = x;
        double r33707871 = 1;
        double r33707872 = 3;
        double r33707873 = r33707871 + r33707872;
        double r33707874 = pow(r33707870, r33707873);
        double r33707875 = pow(r33707869, r33707874);
        double r33707876 = -3.75;
        double r33707877 = exp(r33707876);
        double r33707878 = r33707870 * r33707870;
        double r33707879 = pow(r33707877, r33707878);
        double r33707880 = 0.375;
        double r33707881 = exp(r33707880);
        double r33707882 = r33707879 * r33707881;
        double r33707883 = r33707875 * r33707882;
        double r33707884 = log(r33707883);
        return r33707884;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33707885, r33707886, r33707887, r33707888, r33707889, r33707890, r33707891, r33707892, r33707893, r33707894, r33707895;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707885, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707886, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r33707887);
        mpfr_init(r33707888);
        mpfr_init(r33707889);
        mpfr_init(r33707890);
        mpfr_init_set_str(r33707891, "4.375", 10, MPFR_RNDN);
        mpfr_init(r33707892);
        mpfr_init(r33707893);
        mpfr_init(r33707894);
        mpfr_init(r33707895);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r33707887, x, MPFR_RNDN);
        mpfr_mul(r33707888, r33707887, r33707887, MPFR_RNDN);
        mpfr_mul(r33707889, r33707886, r33707888, MPFR_RNDN);
        mpfr_add(r33707890, r33707885, r33707889, MPFR_RNDN);
        ;
        mpfr_mul(r33707892, r33707888, r33707887, MPFR_RNDN);
        mpfr_mul(r33707893, r33707892, r33707887, MPFR_RNDN);
        mpfr_mul(r33707894, r33707891, r33707893, MPFR_RNDN);
        mpfr_add(r33707895, r33707890, r33707894, MPFR_RNDN);
        return mpfr_get_d(r33707895, MPFR_RNDN);
}

static mpfr_t r33707896, r33707897, r33707898, r33707899, r33707900, r33707901, r33707902, r33707903, r33707904, r33707905, r33707906, r33707907, r33707908, r33707909, r33707910, r33707911, r33707912;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707896, "4.375", 10, MPFR_RNDN);
        mpfr_init(r33707897);
        mpfr_init(r33707898);
        mpfr_init_set_str(r33707899, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707900, "3", 10, MPFR_RNDN);
        mpfr_init(r33707901);
        mpfr_init(r33707902);
        mpfr_init(r33707903);
        mpfr_init_set_str(r33707904, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r33707905);
        mpfr_init(r33707906);
        mpfr_init(r33707907);
        mpfr_init_set_str(r33707908, "0.375", 10, MPFR_RNDN);
        mpfr_init(r33707909);
        mpfr_init(r33707910);
        mpfr_init(r33707911);
        mpfr_init(r33707912);
}

double f_fm(double x) {
        ;
        mpfr_exp(r33707897, r33707896, MPFR_RNDN);
        mpfr_set_d(r33707898, x, MPFR_RNDN);
        ;
        ;
        mpfr_add(r33707901, r33707899, r33707900, MPFR_RNDN);
        mpfr_pow(r33707902, r33707898, r33707901, MPFR_RNDN);
        mpfr_pow(r33707903, r33707897, r33707902, MPFR_RNDN);
        ;
        mpfr_exp(r33707905, r33707904, MPFR_RNDN);
        mpfr_mul(r33707906, r33707898, r33707898, MPFR_RNDN);
        mpfr_pow(r33707907, r33707905, r33707906, MPFR_RNDN);
        ;
        mpfr_exp(r33707909, r33707908, MPFR_RNDN);
        mpfr_mul(r33707910, r33707907, r33707909, MPFR_RNDN);
        mpfr_mul(r33707911, r33707903, r33707910, MPFR_RNDN);
        mpfr_log(r33707912, r33707911, MPFR_RNDN);
        return mpfr_get_d(r33707912, MPFR_RNDN);
}

static mpfr_t r33707913, r33707914, r33707915, r33707916, r33707917, r33707918, r33707919, r33707920, r33707921, r33707922, r33707923, r33707924, r33707925, r33707926, r33707927, r33707928, r33707929;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707913, "4.375", 10, MPFR_RNDN);
        mpfr_init(r33707914);
        mpfr_init(r33707915);
        mpfr_init_set_str(r33707916, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707917, "3", 10, MPFR_RNDN);
        mpfr_init(r33707918);
        mpfr_init(r33707919);
        mpfr_init(r33707920);
        mpfr_init_set_str(r33707921, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r33707922);
        mpfr_init(r33707923);
        mpfr_init(r33707924);
        mpfr_init_set_str(r33707925, "0.375", 10, MPFR_RNDN);
        mpfr_init(r33707926);
        mpfr_init(r33707927);
        mpfr_init(r33707928);
        mpfr_init(r33707929);
}

double f_dm(double x) {
        ;
        mpfr_exp(r33707914, r33707913, MPFR_RNDN);
        mpfr_set_d(r33707915, x, MPFR_RNDN);
        ;
        ;
        mpfr_add(r33707918, r33707916, r33707917, MPFR_RNDN);
        mpfr_pow(r33707919, r33707915, r33707918, MPFR_RNDN);
        mpfr_pow(r33707920, r33707914, r33707919, MPFR_RNDN);
        ;
        mpfr_exp(r33707922, r33707921, MPFR_RNDN);
        mpfr_mul(r33707923, r33707915, r33707915, MPFR_RNDN);
        mpfr_pow(r33707924, r33707922, r33707923, MPFR_RNDN);
        ;
        mpfr_exp(r33707926, r33707925, MPFR_RNDN);
        mpfr_mul(r33707927, r33707924, r33707926, MPFR_RNDN);
        mpfr_mul(r33707928, r33707920, r33707927, MPFR_RNDN);
        mpfr_log(r33707929, r33707928, MPFR_RNDN);
        return mpfr_get_d(r33707929, MPFR_RNDN);
}

