#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r7079867 = -12.0;
        float r7079868 = x;
        float r7079869 = r7079867 * r7079868;
        float r7079870 = 8.0;
        float r7079871 = r7079868 * r7079868;
        float r7079872 = r7079871 * r7079868;
        float r7079873 = r7079870 * r7079872;
        float r7079874 = r7079869 + r7079873;
        return r7079874;
}

double f_id(double x) {
        double r7079875 = -12.0;
        double r7079876 = x;
        double r7079877 = r7079875 * r7079876;
        double r7079878 = 8.0;
        double r7079879 = r7079876 * r7079876;
        double r7079880 = r7079879 * r7079876;
        double r7079881 = r7079878 * r7079880;
        double r7079882 = r7079877 + r7079881;
        return r7079882;
}


double f_of(float x) {
        float r7079883 = -12.0;
        float r7079884 = x;
        float r7079885 = r7079883 * r7079884;
        float r7079886 = 8.0;
        float r7079887 = r7079884 * r7079884;
        float r7079888 = r7079887 * r7079884;
        float r7079889 = r7079886 * r7079888;
        float r7079890 = r7079885 + r7079889;
        return r7079890;
}

double f_od(double x) {
        double r7079891 = -12.0;
        double r7079892 = x;
        double r7079893 = r7079891 * r7079892;
        double r7079894 = 8.0;
        double r7079895 = r7079892 * r7079892;
        double r7079896 = r7079895 * r7079892;
        double r7079897 = r7079894 * r7079896;
        double r7079898 = r7079893 + r7079897;
        return r7079898;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7079899, r7079900, r7079901, r7079902, r7079903, r7079904, r7079905, r7079906;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7079899, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7079900);
        mpfr_init(r7079901);
        mpfr_init_set_str(r7079902, "8.0", 10, MPFR_RNDN);
        mpfr_init(r7079903);
        mpfr_init(r7079904);
        mpfr_init(r7079905);
        mpfr_init(r7079906);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7079900, x, MPFR_RNDN);
        mpfr_mul(r7079901, r7079899, r7079900, MPFR_RNDN);
        ;
        mpfr_mul(r7079903, r7079900, r7079900, MPFR_RNDN);
        mpfr_mul(r7079904, r7079903, r7079900, MPFR_RNDN);
        mpfr_mul(r7079905, r7079902, r7079904, MPFR_RNDN);
        mpfr_add(r7079906, r7079901, r7079905, MPFR_RNDN);
        return mpfr_get_d(r7079906, MPFR_RNDN);
}

static mpfr_t r7079907, r7079908, r7079909, r7079910, r7079911, r7079912, r7079913, r7079914;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7079907, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7079908);
        mpfr_init(r7079909);
        mpfr_init_set_str(r7079910, "8.0", 10, MPFR_RNDN);
        mpfr_init(r7079911);
        mpfr_init(r7079912);
        mpfr_init(r7079913);
        mpfr_init(r7079914);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7079908, x, MPFR_RNDN);
        mpfr_mul(r7079909, r7079907, r7079908, MPFR_RNDN);
        ;
        mpfr_mul(r7079911, r7079908, r7079908, MPFR_RNDN);
        mpfr_mul(r7079912, r7079911, r7079908, MPFR_RNDN);
        mpfr_mul(r7079913, r7079910, r7079912, MPFR_RNDN);
        mpfr_add(r7079914, r7079909, r7079913, MPFR_RNDN);
        return mpfr_get_d(r7079914, MPFR_RNDN);
}

static mpfr_t r7079915, r7079916, r7079917, r7079918, r7079919, r7079920, r7079921, r7079922;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7079915, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7079916);
        mpfr_init(r7079917);
        mpfr_init_set_str(r7079918, "8.0", 10, MPFR_RNDN);
        mpfr_init(r7079919);
        mpfr_init(r7079920);
        mpfr_init(r7079921);
        mpfr_init(r7079922);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7079916, x, MPFR_RNDN);
        mpfr_mul(r7079917, r7079915, r7079916, MPFR_RNDN);
        ;
        mpfr_mul(r7079919, r7079916, r7079916, MPFR_RNDN);
        mpfr_mul(r7079920, r7079919, r7079916, MPFR_RNDN);
        mpfr_mul(r7079921, r7079918, r7079920, MPFR_RNDN);
        mpfr_add(r7079922, r7079917, r7079921, MPFR_RNDN);
        return mpfr_get_d(r7079922, MPFR_RNDN);
}

