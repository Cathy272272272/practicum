#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r48608897 = 0.375;
        float r48608898 = -3.75;
        float r48608899 = x;
        float r48608900 = r48608899 * r48608899;
        float r48608901 = r48608898 * r48608900;
        float r48608902 = r48608897 + r48608901;
        float r48608903 = 4.375;
        float r48608904 = r48608900 * r48608899;
        float r48608905 = r48608904 * r48608899;
        float r48608906 = r48608903 * r48608905;
        float r48608907 = r48608902 + r48608906;
        return r48608907;
}

double f_id(double x) {
        double r48608908 = 0.375;
        double r48608909 = -3.75;
        double r48608910 = x;
        double r48608911 = r48608910 * r48608910;
        double r48608912 = r48608909 * r48608911;
        double r48608913 = r48608908 + r48608912;
        double r48608914 = 4.375;
        double r48608915 = r48608911 * r48608910;
        double r48608916 = r48608915 * r48608910;
        double r48608917 = r48608914 * r48608916;
        double r48608918 = r48608913 + r48608917;
        return r48608918;
}


double f_of(float x) {
        float r48608919 = 4.375;
        float r48608920 = exp(r48608919);
        float r48608921 = x;
        float r48608922 = 1;
        float r48608923 = 3;
        float r48608924 = r48608922 + r48608923;
        float r48608925 = pow(r48608921, r48608924);
        float r48608926 = pow(r48608920, r48608925);
        float r48608927 = 0.375;
        float r48608928 = exp(r48608927);
        float r48608929 = -3.75;
        float r48608930 = exp(r48608929);
        float r48608931 = pow(r48608930, r48608921);
        float r48608932 = pow(r48608931, r48608921);
        float r48608933 = r48608928 * r48608932;
        float r48608934 = r48608926 * r48608933;
        float r48608935 = pow(r48608934, r48608923);
        float r48608936 = cbrt(r48608935);
        float r48608937 = log(r48608936);
        return r48608937;
}

double f_od(double x) {
        double r48608938 = 4.375;
        double r48608939 = exp(r48608938);
        double r48608940 = x;
        double r48608941 = 1;
        double r48608942 = 3;
        double r48608943 = r48608941 + r48608942;
        double r48608944 = pow(r48608940, r48608943);
        double r48608945 = pow(r48608939, r48608944);
        double r48608946 = 0.375;
        double r48608947 = exp(r48608946);
        double r48608948 = -3.75;
        double r48608949 = exp(r48608948);
        double r48608950 = pow(r48608949, r48608940);
        double r48608951 = pow(r48608950, r48608940);
        double r48608952 = r48608947 * r48608951;
        double r48608953 = r48608945 * r48608952;
        double r48608954 = pow(r48608953, r48608942);
        double r48608955 = cbrt(r48608954);
        double r48608956 = log(r48608955);
        return r48608956;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48608957, r48608958, r48608959, r48608960, r48608961, r48608962, r48608963, r48608964, r48608965, r48608966, r48608967;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608957, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608958, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r48608959);
        mpfr_init(r48608960);
        mpfr_init(r48608961);
        mpfr_init(r48608962);
        mpfr_init_set_str(r48608963, "4.375", 10, MPFR_RNDN);
        mpfr_init(r48608964);
        mpfr_init(r48608965);
        mpfr_init(r48608966);
        mpfr_init(r48608967);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r48608959, x, MPFR_RNDN);
        mpfr_mul(r48608960, r48608959, r48608959, MPFR_RNDN);
        mpfr_mul(r48608961, r48608958, r48608960, MPFR_RNDN);
        mpfr_add(r48608962, r48608957, r48608961, MPFR_RNDN);
        ;
        mpfr_mul(r48608964, r48608960, r48608959, MPFR_RNDN);
        mpfr_mul(r48608965, r48608964, r48608959, MPFR_RNDN);
        mpfr_mul(r48608966, r48608963, r48608965, MPFR_RNDN);
        mpfr_add(r48608967, r48608962, r48608966, MPFR_RNDN);
        return mpfr_get_d(r48608967, MPFR_RNDN);
}

static mpfr_t r48608968, r48608969, r48608970, r48608971, r48608972, r48608973, r48608974, r48608975, r48608976, r48608977, r48608978, r48608979, r48608980, r48608981, r48608982, r48608983, r48608984, r48608985, r48608986;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608968, "4.375", 10, MPFR_RNDN);
        mpfr_init(r48608969);
        mpfr_init(r48608970);
        mpfr_init_set_str(r48608971, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608972, "3", 10, MPFR_RNDN);
        mpfr_init(r48608973);
        mpfr_init(r48608974);
        mpfr_init(r48608975);
        mpfr_init_set_str(r48608976, "0.375", 10, MPFR_RNDN);
        mpfr_init(r48608977);
        mpfr_init_set_str(r48608978, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r48608979);
        mpfr_init(r48608980);
        mpfr_init(r48608981);
        mpfr_init(r48608982);
        mpfr_init(r48608983);
        mpfr_init(r48608984);
        mpfr_init(r48608985);
        mpfr_init(r48608986);
}

double f_fm(double x) {
        ;
        mpfr_exp(r48608969, r48608968, MPFR_RNDN);
        mpfr_set_d(r48608970, x, MPFR_RNDN);
        ;
        ;
        mpfr_add(r48608973, r48608971, r48608972, MPFR_RNDN);
        mpfr_pow(r48608974, r48608970, r48608973, MPFR_RNDN);
        mpfr_pow(r48608975, r48608969, r48608974, MPFR_RNDN);
        ;
        mpfr_exp(r48608977, r48608976, MPFR_RNDN);
        ;
        mpfr_exp(r48608979, r48608978, MPFR_RNDN);
        mpfr_pow(r48608980, r48608979, r48608970, MPFR_RNDN);
        mpfr_pow(r48608981, r48608980, r48608970, MPFR_RNDN);
        mpfr_mul(r48608982, r48608977, r48608981, MPFR_RNDN);
        mpfr_mul(r48608983, r48608975, r48608982, MPFR_RNDN);
        mpfr_pow(r48608984, r48608983, r48608972, MPFR_RNDN);
        mpfr_cbrt(r48608985, r48608984, MPFR_RNDN);
        mpfr_log(r48608986, r48608985, MPFR_RNDN);
        return mpfr_get_d(r48608986, MPFR_RNDN);
}

static mpfr_t r48608987, r48608988, r48608989, r48608990, r48608991, r48608992, r48608993, r48608994, r48608995, r48608996, r48608997, r48608998, r48608999, r48609000, r48609001, r48609002, r48609003, r48609004, r48609005;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608987, "4.375", 10, MPFR_RNDN);
        mpfr_init(r48608988);
        mpfr_init(r48608989);
        mpfr_init_set_str(r48608990, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608991, "3", 10, MPFR_RNDN);
        mpfr_init(r48608992);
        mpfr_init(r48608993);
        mpfr_init(r48608994);
        mpfr_init_set_str(r48608995, "0.375", 10, MPFR_RNDN);
        mpfr_init(r48608996);
        mpfr_init_set_str(r48608997, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r48608998);
        mpfr_init(r48608999);
        mpfr_init(r48609000);
        mpfr_init(r48609001);
        mpfr_init(r48609002);
        mpfr_init(r48609003);
        mpfr_init(r48609004);
        mpfr_init(r48609005);
}

double f_dm(double x) {
        ;
        mpfr_exp(r48608988, r48608987, MPFR_RNDN);
        mpfr_set_d(r48608989, x, MPFR_RNDN);
        ;
        ;
        mpfr_add(r48608992, r48608990, r48608991, MPFR_RNDN);
        mpfr_pow(r48608993, r48608989, r48608992, MPFR_RNDN);
        mpfr_pow(r48608994, r48608988, r48608993, MPFR_RNDN);
        ;
        mpfr_exp(r48608996, r48608995, MPFR_RNDN);
        ;
        mpfr_exp(r48608998, r48608997, MPFR_RNDN);
        mpfr_pow(r48608999, r48608998, r48608989, MPFR_RNDN);
        mpfr_pow(r48609000, r48608999, r48608989, MPFR_RNDN);
        mpfr_mul(r48609001, r48608996, r48609000, MPFR_RNDN);
        mpfr_mul(r48609002, r48608994, r48609001, MPFR_RNDN);
        mpfr_pow(r48609003, r48609002, r48608991, MPFR_RNDN);
        mpfr_cbrt(r48609004, r48609003, MPFR_RNDN);
        mpfr_log(r48609005, r48609004, MPFR_RNDN);
        return mpfr_get_d(r48609005, MPFR_RNDN);
}

