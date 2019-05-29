#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6176930 = 0.375;
        float r6176931 = -3.75;
        float r6176932 = x;
        float r6176933 = r6176932 * r6176932;
        float r6176934 = r6176931 * r6176933;
        float r6176935 = r6176930 + r6176934;
        float r6176936 = 4.375;
        float r6176937 = r6176933 * r6176932;
        float r6176938 = r6176937 * r6176932;
        float r6176939 = r6176936 * r6176938;
        float r6176940 = r6176935 + r6176939;
        return r6176940;
}

double f_id(double x) {
        double r6176941 = 0.375;
        double r6176942 = -3.75;
        double r6176943 = x;
        double r6176944 = r6176943 * r6176943;
        double r6176945 = r6176942 * r6176944;
        double r6176946 = r6176941 + r6176945;
        double r6176947 = 4.375;
        double r6176948 = r6176944 * r6176943;
        double r6176949 = r6176948 * r6176943;
        double r6176950 = r6176947 * r6176949;
        double r6176951 = r6176946 + r6176950;
        return r6176951;
}


double f_of(float x) {
        float r6176952 = 0.375;
        float r6176953 = x;
        float r6176954 = 4.375;
        float r6176955 = r6176953 * r6176954;
        float r6176956 = r6176955 * r6176953;
        float r6176957 = r6176953 * r6176953;
        float r6176958 = r6176956 * r6176957;
        float r6176959 = -3.75;
        float r6176960 = r6176953 * r6176959;
        float r6176961 = r6176960 * r6176953;
        float r6176962 = r6176958 + r6176961;
        float r6176963 = r6176952 + r6176962;
        return r6176963;
}

double f_od(double x) {
        double r6176964 = 0.375;
        double r6176965 = x;
        double r6176966 = 4.375;
        double r6176967 = r6176965 * r6176966;
        double r6176968 = r6176967 * r6176965;
        double r6176969 = r6176965 * r6176965;
        double r6176970 = r6176968 * r6176969;
        double r6176971 = -3.75;
        double r6176972 = r6176965 * r6176971;
        double r6176973 = r6176972 * r6176965;
        double r6176974 = r6176970 + r6176973;
        double r6176975 = r6176964 + r6176974;
        return r6176975;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6176976, r6176977, r6176978, r6176979, r6176980, r6176981, r6176982, r6176983, r6176984, r6176985, r6176986;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6176976, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6176977, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6176978);
        mpfr_init(r6176979);
        mpfr_init(r6176980);
        mpfr_init(r6176981);
        mpfr_init_set_str(r6176982, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6176983);
        mpfr_init(r6176984);
        mpfr_init(r6176985);
        mpfr_init(r6176986);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6176978, x, MPFR_RNDN);
        mpfr_mul(r6176979, r6176978, r6176978, MPFR_RNDN);
        mpfr_mul(r6176980, r6176977, r6176979, MPFR_RNDN);
        mpfr_add(r6176981, r6176976, r6176980, MPFR_RNDN);
        ;
        mpfr_mul(r6176983, r6176979, r6176978, MPFR_RNDN);
        mpfr_mul(r6176984, r6176983, r6176978, MPFR_RNDN);
        mpfr_mul(r6176985, r6176982, r6176984, MPFR_RNDN);
        mpfr_add(r6176986, r6176981, r6176985, MPFR_RNDN);
        return mpfr_get_d(r6176986, MPFR_RNDN);
}

static mpfr_t r6176987, r6176988, r6176989, r6176990, r6176991, r6176992, r6176993, r6176994, r6176995, r6176996, r6176997, r6176998;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6176987, "0.375", 10, MPFR_RNDN);
        mpfr_init(r6176988);
        mpfr_init_set_str(r6176989, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6176990);
        mpfr_init(r6176991);
        mpfr_init(r6176992);
        mpfr_init(r6176993);
        mpfr_init_set_str(r6176994, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6176995);
        mpfr_init(r6176996);
        mpfr_init(r6176997);
        mpfr_init(r6176998);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6176988, x, MPFR_RNDN);
        ;
        mpfr_mul(r6176990, r6176988, r6176989, MPFR_RNDN);
        mpfr_mul(r6176991, r6176990, r6176988, MPFR_RNDN);
        mpfr_mul(r6176992, r6176988, r6176988, MPFR_RNDN);
        mpfr_mul(r6176993, r6176991, r6176992, MPFR_RNDN);
        ;
        mpfr_mul(r6176995, r6176988, r6176994, MPFR_RNDN);
        mpfr_mul(r6176996, r6176995, r6176988, MPFR_RNDN);
        mpfr_add(r6176997, r6176993, r6176996, MPFR_RNDN);
        mpfr_add(r6176998, r6176987, r6176997, MPFR_RNDN);
        return mpfr_get_d(r6176998, MPFR_RNDN);
}

static mpfr_t r6176999, r6177000, r6177001, r6177002, r6177003, r6177004, r6177005, r6177006, r6177007, r6177008, r6177009, r6177010;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6176999, "0.375", 10, MPFR_RNDN);
        mpfr_init(r6177000);
        mpfr_init_set_str(r6177001, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6177002);
        mpfr_init(r6177003);
        mpfr_init(r6177004);
        mpfr_init(r6177005);
        mpfr_init_set_str(r6177006, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6177007);
        mpfr_init(r6177008);
        mpfr_init(r6177009);
        mpfr_init(r6177010);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6177000, x, MPFR_RNDN);
        ;
        mpfr_mul(r6177002, r6177000, r6177001, MPFR_RNDN);
        mpfr_mul(r6177003, r6177002, r6177000, MPFR_RNDN);
        mpfr_mul(r6177004, r6177000, r6177000, MPFR_RNDN);
        mpfr_mul(r6177005, r6177003, r6177004, MPFR_RNDN);
        ;
        mpfr_mul(r6177007, r6177000, r6177006, MPFR_RNDN);
        mpfr_mul(r6177008, r6177007, r6177000, MPFR_RNDN);
        mpfr_add(r6177009, r6177005, r6177008, MPFR_RNDN);
        mpfr_add(r6177010, r6176999, r6177009, MPFR_RNDN);
        return mpfr_get_d(r6177010, MPFR_RNDN);
}

