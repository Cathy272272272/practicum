#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r11587894 = 1.0;
        float r11587895 = -3.0;
        float r11587896 = x;
        float r11587897 = r11587895 * r11587896;
        float r11587898 = r11587894 + r11587897;
        float r11587899 = 1.5;
        float r11587900 = r11587896 * r11587896;
        float r11587901 = r11587899 * r11587900;
        float r11587902 = r11587898 + r11587901;
        float r11587903 = -0.166667;
        float r11587904 = r11587900 * r11587896;
        float r11587905 = r11587903 * r11587904;
        float r11587906 = r11587902 + r11587905;
        return r11587906;
}

double f_id(double x) {
        double r11587907 = 1.0;
        double r11587908 = -3.0;
        double r11587909 = x;
        double r11587910 = r11587908 * r11587909;
        double r11587911 = r11587907 + r11587910;
        double r11587912 = 1.5;
        double r11587913 = r11587909 * r11587909;
        double r11587914 = r11587912 * r11587913;
        double r11587915 = r11587911 + r11587914;
        double r11587916 = -0.166667;
        double r11587917 = r11587913 * r11587909;
        double r11587918 = r11587916 * r11587917;
        double r11587919 = r11587915 + r11587918;
        return r11587919;
}


double f_of(float x) {
        float r11587920 = x;
        float r11587921 = -3.0;
        float r11587922 = r11587920 * r11587921;
        float r11587923 = 1.0;
        float r11587924 = r11587922 + r11587923;
        float r11587925 = 1.5;
        float r11587926 = -0.166667;
        float r11587927 = r11587926 * r11587920;
        float r11587928 = r11587925 + r11587927;
        float r11587929 = r11587920 * r11587920;
        float r11587930 = r11587928 * r11587929;
        float r11587931 = r11587924 + r11587930;
        return r11587931;
}

double f_od(double x) {
        double r11587932 = x;
        double r11587933 = -3.0;
        double r11587934 = r11587932 * r11587933;
        double r11587935 = 1.0;
        double r11587936 = r11587934 + r11587935;
        double r11587937 = 1.5;
        double r11587938 = -0.166667;
        double r11587939 = r11587938 * r11587932;
        double r11587940 = r11587937 + r11587939;
        double r11587941 = r11587932 * r11587932;
        double r11587942 = r11587940 * r11587941;
        double r11587943 = r11587936 + r11587942;
        return r11587943;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11587944, r11587945, r11587946, r11587947, r11587948, r11587949, r11587950, r11587951, r11587952, r11587953, r11587954, r11587955, r11587956;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11587944, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587945, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11587946);
        mpfr_init(r11587947);
        mpfr_init(r11587948);
        mpfr_init_set_str(r11587949, "1.5", 10, MPFR_RNDN);
        mpfr_init(r11587950);
        mpfr_init(r11587951);
        mpfr_init(r11587952);
        mpfr_init_set_str(r11587953, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11587954);
        mpfr_init(r11587955);
        mpfr_init(r11587956);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11587946, x, MPFR_RNDN);
        mpfr_mul(r11587947, r11587945, r11587946, MPFR_RNDN);
        mpfr_add(r11587948, r11587944, r11587947, MPFR_RNDN);
        ;
        mpfr_mul(r11587950, r11587946, r11587946, MPFR_RNDN);
        mpfr_mul(r11587951, r11587949, r11587950, MPFR_RNDN);
        mpfr_add(r11587952, r11587948, r11587951, MPFR_RNDN);
        ;
        mpfr_mul(r11587954, r11587950, r11587946, MPFR_RNDN);
        mpfr_mul(r11587955, r11587953, r11587954, MPFR_RNDN);
        mpfr_add(r11587956, r11587952, r11587955, MPFR_RNDN);
        return mpfr_get_d(r11587956, MPFR_RNDN);
}

static mpfr_t r11587957, r11587958, r11587959, r11587960, r11587961, r11587962, r11587963, r11587964, r11587965, r11587966, r11587967, r11587968;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11587957);
        mpfr_init_set_str(r11587958, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11587959);
        mpfr_init_set_str(r11587960, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11587961);
        mpfr_init_set_str(r11587962, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587963, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11587964);
        mpfr_init(r11587965);
        mpfr_init(r11587966);
        mpfr_init(r11587967);
        mpfr_init(r11587968);
}

double f_fm(double x) {
        mpfr_set_d(r11587957, x, MPFR_RNDN);
        ;
        mpfr_mul(r11587959, r11587957, r11587958, MPFR_RNDN);
        ;
        mpfr_add(r11587961, r11587959, r11587960, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587964, r11587963, r11587957, MPFR_RNDN);
        mpfr_add(r11587965, r11587962, r11587964, MPFR_RNDN);
        mpfr_mul(r11587966, r11587957, r11587957, MPFR_RNDN);
        mpfr_mul(r11587967, r11587965, r11587966, MPFR_RNDN);
        mpfr_add(r11587968, r11587961, r11587967, MPFR_RNDN);
        return mpfr_get_d(r11587968, MPFR_RNDN);
}

static mpfr_t r11587969, r11587970, r11587971, r11587972, r11587973, r11587974, r11587975, r11587976, r11587977, r11587978, r11587979, r11587980;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11587969);
        mpfr_init_set_str(r11587970, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11587971);
        mpfr_init_set_str(r11587972, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11587973);
        mpfr_init_set_str(r11587974, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587975, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11587976);
        mpfr_init(r11587977);
        mpfr_init(r11587978);
        mpfr_init(r11587979);
        mpfr_init(r11587980);
}

double f_dm(double x) {
        mpfr_set_d(r11587969, x, MPFR_RNDN);
        ;
        mpfr_mul(r11587971, r11587969, r11587970, MPFR_RNDN);
        ;
        mpfr_add(r11587973, r11587971, r11587972, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587976, r11587975, r11587969, MPFR_RNDN);
        mpfr_add(r11587977, r11587974, r11587976, MPFR_RNDN);
        mpfr_mul(r11587978, r11587969, r11587969, MPFR_RNDN);
        mpfr_mul(r11587979, r11587977, r11587978, MPFR_RNDN);
        mpfr_add(r11587980, r11587973, r11587979, MPFR_RNDN);
        return mpfr_get_d(r11587980, MPFR_RNDN);
}

