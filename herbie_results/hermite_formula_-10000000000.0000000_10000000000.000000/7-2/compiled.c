#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r9402876 = -2.0;
        float r9402877 = 4.0;
        float r9402878 = x;
        float r9402879 = r9402878 * r9402878;
        float r9402880 = r9402877 * r9402879;
        float r9402881 = r9402876 + r9402880;
        return r9402881;
}

double f_id(double x) {
        double r9402882 = -2.0;
        double r9402883 = 4.0;
        double r9402884 = x;
        double r9402885 = r9402884 * r9402884;
        double r9402886 = r9402883 * r9402885;
        double r9402887 = r9402882 + r9402886;
        return r9402887;
}


double f_of(float x) {
        float r9402888 = -2.0;
        float r9402889 = 4.0;
        float r9402890 = x;
        float r9402891 = r9402890 * r9402890;
        float r9402892 = r9402889 * r9402891;
        float r9402893 = r9402888 + r9402892;
        return r9402893;
}

double f_od(double x) {
        double r9402894 = -2.0;
        double r9402895 = 4.0;
        double r9402896 = x;
        double r9402897 = r9402896 * r9402896;
        double r9402898 = r9402895 * r9402897;
        double r9402899 = r9402894 + r9402898;
        return r9402899;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9402900, r9402901, r9402902, r9402903, r9402904, r9402905;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402900, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402901, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9402902);
        mpfr_init(r9402903);
        mpfr_init(r9402904);
        mpfr_init(r9402905);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9402902, x, MPFR_RNDN);
        mpfr_mul(r9402903, r9402902, r9402902, MPFR_RNDN);
        mpfr_mul(r9402904, r9402901, r9402903, MPFR_RNDN);
        mpfr_add(r9402905, r9402900, r9402904, MPFR_RNDN);
        return mpfr_get_d(r9402905, MPFR_RNDN);
}

static mpfr_t r9402906, r9402907, r9402908, r9402909, r9402910, r9402911;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402906, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402907, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9402908);
        mpfr_init(r9402909);
        mpfr_init(r9402910);
        mpfr_init(r9402911);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9402908, x, MPFR_RNDN);
        mpfr_mul(r9402909, r9402908, r9402908, MPFR_RNDN);
        mpfr_mul(r9402910, r9402907, r9402909, MPFR_RNDN);
        mpfr_add(r9402911, r9402906, r9402910, MPFR_RNDN);
        return mpfr_get_d(r9402911, MPFR_RNDN);
}

static mpfr_t r9402912, r9402913, r9402914, r9402915, r9402916, r9402917;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402912, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402913, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9402914);
        mpfr_init(r9402915);
        mpfr_init(r9402916);
        mpfr_init(r9402917);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9402914, x, MPFR_RNDN);
        mpfr_mul(r9402915, r9402914, r9402914, MPFR_RNDN);
        mpfr_mul(r9402916, r9402913, r9402915, MPFR_RNDN);
        mpfr_add(r9402917, r9402912, r9402916, MPFR_RNDN);
        return mpfr_get_d(r9402917, MPFR_RNDN);
}

