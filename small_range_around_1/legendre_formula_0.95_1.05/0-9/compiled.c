#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r26947885 = 2.460938;
        float r26947886 = x;
        float r26947887 = r26947885 * r26947886;
        float r26947888 = -36.09375;
        float r26947889 = r26947886 * r26947886;
        float r26947890 = r26947889 * r26947886;
        float r26947891 = r26947888 * r26947890;
        float r26947892 = r26947887 + r26947891;
        float r26947893 = 140.765625;
        float r26947894 = r26947890 * r26947886;
        float r26947895 = r26947894 * r26947886;
        float r26947896 = r26947893 * r26947895;
        float r26947897 = r26947892 + r26947896;
        float r26947898 = -201.09375;
        float r26947899 = r26947895 * r26947886;
        float r26947900 = r26947899 * r26947886;
        float r26947901 = r26947898 * r26947900;
        float r26947902 = r26947897 + r26947901;
        float r26947903 = 94.960938;
        float r26947904 = r26947900 * r26947886;
        float r26947905 = r26947904 * r26947886;
        float r26947906 = r26947903 * r26947905;
        float r26947907 = r26947902 + r26947906;
        return r26947907;
}

double f_id(double x) {
        double r26947908 = 2.460938;
        double r26947909 = x;
        double r26947910 = r26947908 * r26947909;
        double r26947911 = -36.09375;
        double r26947912 = r26947909 * r26947909;
        double r26947913 = r26947912 * r26947909;
        double r26947914 = r26947911 * r26947913;
        double r26947915 = r26947910 + r26947914;
        double r26947916 = 140.765625;
        double r26947917 = r26947913 * r26947909;
        double r26947918 = r26947917 * r26947909;
        double r26947919 = r26947916 * r26947918;
        double r26947920 = r26947915 + r26947919;
        double r26947921 = -201.09375;
        double r26947922 = r26947918 * r26947909;
        double r26947923 = r26947922 * r26947909;
        double r26947924 = r26947921 * r26947923;
        double r26947925 = r26947920 + r26947924;
        double r26947926 = 94.960938;
        double r26947927 = r26947923 * r26947909;
        double r26947928 = r26947927 * r26947909;
        double r26947929 = r26947926 * r26947928;
        double r26947930 = r26947925 + r26947929;
        return r26947930;
}


double f_of(float x) {
        float r26947931 = x;
        float r26947932 = 3;
        float r26947933 = pow(r26947931, r26947932);
        float r26947934 = r26947931 * r26947931;
        float r26947935 = r26947933 * r26947934;
        float r26947936 = 140.765625;
        float r26947937 = -201.09375;
        float r26947938 = r26947934 * r26947937;
        float r26947939 = r26947936 + r26947938;
        float r26947940 = r26947935 * r26947939;
        float r26947941 = exp(r26947940);
        float r26947942 = 94.960938;
        float r26947943 = r26947931 * r26947942;
        float r26947944 = r26947943 * r26947934;
        float r26947945 = pow(r26947934, r26947932);
        float r26947946 = r26947944 * r26947945;
        float r26947947 = exp(r26947946);
        float r26947948 = -36.09375;
        float r26947949 = r26947931 * r26947948;
        float r26947950 = r26947934 * r26947949;
        float r26947951 = 2.460938;
        float r26947952 = r26947931 * r26947951;
        float r26947953 = r26947950 + r26947952;
        float r26947954 = exp(r26947953);
        float r26947955 = cbrt(r26947954);
        float r26947956 = r26947955 * r26947955;
        float r26947957 = r26947956 * r26947955;
        float r26947958 = r26947947 * r26947957;
        float r26947959 = r26947941 * r26947958;
        float r26947960 = log(r26947959);
        return r26947960;
}

double f_od(double x) {
        double r26947961 = x;
        double r26947962 = 3;
        double r26947963 = pow(r26947961, r26947962);
        double r26947964 = r26947961 * r26947961;
        double r26947965 = r26947963 * r26947964;
        double r26947966 = 140.765625;
        double r26947967 = -201.09375;
        double r26947968 = r26947964 * r26947967;
        double r26947969 = r26947966 + r26947968;
        double r26947970 = r26947965 * r26947969;
        double r26947971 = exp(r26947970);
        double r26947972 = 94.960938;
        double r26947973 = r26947961 * r26947972;
        double r26947974 = r26947973 * r26947964;
        double r26947975 = pow(r26947964, r26947962);
        double r26947976 = r26947974 * r26947975;
        double r26947977 = exp(r26947976);
        double r26947978 = -36.09375;
        double r26947979 = r26947961 * r26947978;
        double r26947980 = r26947964 * r26947979;
        double r26947981 = 2.460938;
        double r26947982 = r26947961 * r26947981;
        double r26947983 = r26947980 + r26947982;
        double r26947984 = exp(r26947983);
        double r26947985 = cbrt(r26947984);
        double r26947986 = r26947985 * r26947985;
        double r26947987 = r26947986 * r26947985;
        double r26947988 = r26947977 * r26947987;
        double r26947989 = r26947971 * r26947988;
        double r26947990 = log(r26947989);
        return r26947990;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26947991, r26947992, r26947993, r26947994, r26947995, r26947996, r26947997, r26947998, r26947999, r26948000, r26948001, r26948002, r26948003, r26948004, r26948005, r26948006, r26948007, r26948008, r26948009, r26948010, r26948011, r26948012, r26948013;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26947991, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r26947992);
        mpfr_init(r26947993);
        mpfr_init_set_str(r26947994, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r26947995);
        mpfr_init(r26947996);
        mpfr_init(r26947997);
        mpfr_init(r26947998);
        mpfr_init_set_str(r26947999, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r26948000);
        mpfr_init(r26948001);
        mpfr_init(r26948002);
        mpfr_init(r26948003);
        mpfr_init_set_str(r26948004, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r26948005);
        mpfr_init(r26948006);
        mpfr_init(r26948007);
        mpfr_init(r26948008);
        mpfr_init_set_str(r26948009, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r26948010);
        mpfr_init(r26948011);
        mpfr_init(r26948012);
        mpfr_init(r26948013);
}

double f_im(double x) {
        ;
        mpfr_set_d(r26947992, x, MPFR_RNDN);
        mpfr_mul(r26947993, r26947991, r26947992, MPFR_RNDN);
        ;
        mpfr_mul(r26947995, r26947992, r26947992, MPFR_RNDN);
        mpfr_mul(r26947996, r26947995, r26947992, MPFR_RNDN);
        mpfr_mul(r26947997, r26947994, r26947996, MPFR_RNDN);
        mpfr_add(r26947998, r26947993, r26947997, MPFR_RNDN);
        ;
        mpfr_mul(r26948000, r26947996, r26947992, MPFR_RNDN);
        mpfr_mul(r26948001, r26948000, r26947992, MPFR_RNDN);
        mpfr_mul(r26948002, r26947999, r26948001, MPFR_RNDN);
        mpfr_add(r26948003, r26947998, r26948002, MPFR_RNDN);
        ;
        mpfr_mul(r26948005, r26948001, r26947992, MPFR_RNDN);
        mpfr_mul(r26948006, r26948005, r26947992, MPFR_RNDN);
        mpfr_mul(r26948007, r26948004, r26948006, MPFR_RNDN);
        mpfr_add(r26948008, r26948003, r26948007, MPFR_RNDN);
        ;
        mpfr_mul(r26948010, r26948006, r26947992, MPFR_RNDN);
        mpfr_mul(r26948011, r26948010, r26947992, MPFR_RNDN);
        mpfr_mul(r26948012, r26948009, r26948011, MPFR_RNDN);
        mpfr_add(r26948013, r26948008, r26948012, MPFR_RNDN);
        return mpfr_get_d(r26948013, MPFR_RNDN);
}

static mpfr_t r26948014, r26948015, r26948016, r26948017, r26948018, r26948019, r26948020, r26948021, r26948022, r26948023, r26948024, r26948025, r26948026, r26948027, r26948028, r26948029, r26948030, r26948031, r26948032, r26948033, r26948034, r26948035, r26948036, r26948037, r26948038, r26948039, r26948040, r26948041, r26948042, r26948043;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26948014);
        mpfr_init_set_str(r26948015, "3", 10, MPFR_RNDN);
        mpfr_init(r26948016);
        mpfr_init(r26948017);
        mpfr_init(r26948018);
        mpfr_init_set_str(r26948019, "140.765625", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948020, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r26948021);
        mpfr_init(r26948022);
        mpfr_init(r26948023);
        mpfr_init(r26948024);
        mpfr_init_set_str(r26948025, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r26948026);
        mpfr_init(r26948027);
        mpfr_init(r26948028);
        mpfr_init(r26948029);
        mpfr_init(r26948030);
        mpfr_init_set_str(r26948031, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r26948032);
        mpfr_init(r26948033);
        mpfr_init_set_str(r26948034, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r26948035);
        mpfr_init(r26948036);
        mpfr_init(r26948037);
        mpfr_init(r26948038);
        mpfr_init(r26948039);
        mpfr_init(r26948040);
        mpfr_init(r26948041);
        mpfr_init(r26948042);
        mpfr_init(r26948043);
}

double f_fm(double x) {
        mpfr_set_d(r26948014, x, MPFR_RNDN);
        ;
        mpfr_pow(r26948016, r26948014, r26948015, MPFR_RNDN);
        mpfr_mul(r26948017, r26948014, r26948014, MPFR_RNDN);
        mpfr_mul(r26948018, r26948016, r26948017, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r26948021, r26948017, r26948020, MPFR_RNDN);
        mpfr_add(r26948022, r26948019, r26948021, MPFR_RNDN);
        mpfr_mul(r26948023, r26948018, r26948022, MPFR_RNDN);
        mpfr_exp(r26948024, r26948023, MPFR_RNDN);
        ;
        mpfr_mul(r26948026, r26948014, r26948025, MPFR_RNDN);
        mpfr_mul(r26948027, r26948026, r26948017, MPFR_RNDN);
        mpfr_pow(r26948028, r26948017, r26948015, MPFR_RNDN);
        mpfr_mul(r26948029, r26948027, r26948028, MPFR_RNDN);
        mpfr_exp(r26948030, r26948029, MPFR_RNDN);
        ;
        mpfr_mul(r26948032, r26948014, r26948031, MPFR_RNDN);
        mpfr_mul(r26948033, r26948017, r26948032, MPFR_RNDN);
        ;
        mpfr_mul(r26948035, r26948014, r26948034, MPFR_RNDN);
        mpfr_add(r26948036, r26948033, r26948035, MPFR_RNDN);
        mpfr_exp(r26948037, r26948036, MPFR_RNDN);
        mpfr_cbrt(r26948038, r26948037, MPFR_RNDN);
        mpfr_mul(r26948039, r26948038, r26948038, MPFR_RNDN);
        mpfr_mul(r26948040, r26948039, r26948038, MPFR_RNDN);
        mpfr_mul(r26948041, r26948030, r26948040, MPFR_RNDN);
        mpfr_mul(r26948042, r26948024, r26948041, MPFR_RNDN);
        mpfr_log(r26948043, r26948042, MPFR_RNDN);
        return mpfr_get_d(r26948043, MPFR_RNDN);
}

static mpfr_t r26948044, r26948045, r26948046, r26948047, r26948048, r26948049, r26948050, r26948051, r26948052, r26948053, r26948054, r26948055, r26948056, r26948057, r26948058, r26948059, r26948060, r26948061, r26948062, r26948063, r26948064, r26948065, r26948066, r26948067, r26948068, r26948069, r26948070, r26948071, r26948072, r26948073;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26948044);
        mpfr_init_set_str(r26948045, "3", 10, MPFR_RNDN);
        mpfr_init(r26948046);
        mpfr_init(r26948047);
        mpfr_init(r26948048);
        mpfr_init_set_str(r26948049, "140.765625", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948050, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r26948051);
        mpfr_init(r26948052);
        mpfr_init(r26948053);
        mpfr_init(r26948054);
        mpfr_init_set_str(r26948055, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r26948056);
        mpfr_init(r26948057);
        mpfr_init(r26948058);
        mpfr_init(r26948059);
        mpfr_init(r26948060);
        mpfr_init_set_str(r26948061, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r26948062);
        mpfr_init(r26948063);
        mpfr_init_set_str(r26948064, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r26948065);
        mpfr_init(r26948066);
        mpfr_init(r26948067);
        mpfr_init(r26948068);
        mpfr_init(r26948069);
        mpfr_init(r26948070);
        mpfr_init(r26948071);
        mpfr_init(r26948072);
        mpfr_init(r26948073);
}

double f_dm(double x) {
        mpfr_set_d(r26948044, x, MPFR_RNDN);
        ;
        mpfr_pow(r26948046, r26948044, r26948045, MPFR_RNDN);
        mpfr_mul(r26948047, r26948044, r26948044, MPFR_RNDN);
        mpfr_mul(r26948048, r26948046, r26948047, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r26948051, r26948047, r26948050, MPFR_RNDN);
        mpfr_add(r26948052, r26948049, r26948051, MPFR_RNDN);
        mpfr_mul(r26948053, r26948048, r26948052, MPFR_RNDN);
        mpfr_exp(r26948054, r26948053, MPFR_RNDN);
        ;
        mpfr_mul(r26948056, r26948044, r26948055, MPFR_RNDN);
        mpfr_mul(r26948057, r26948056, r26948047, MPFR_RNDN);
        mpfr_pow(r26948058, r26948047, r26948045, MPFR_RNDN);
        mpfr_mul(r26948059, r26948057, r26948058, MPFR_RNDN);
        mpfr_exp(r26948060, r26948059, MPFR_RNDN);
        ;
        mpfr_mul(r26948062, r26948044, r26948061, MPFR_RNDN);
        mpfr_mul(r26948063, r26948047, r26948062, MPFR_RNDN);
        ;
        mpfr_mul(r26948065, r26948044, r26948064, MPFR_RNDN);
        mpfr_add(r26948066, r26948063, r26948065, MPFR_RNDN);
        mpfr_exp(r26948067, r26948066, MPFR_RNDN);
        mpfr_cbrt(r26948068, r26948067, MPFR_RNDN);
        mpfr_mul(r26948069, r26948068, r26948068, MPFR_RNDN);
        mpfr_mul(r26948070, r26948069, r26948068, MPFR_RNDN);
        mpfr_mul(r26948071, r26948060, r26948070, MPFR_RNDN);
        mpfr_mul(r26948072, r26948054, r26948071, MPFR_RNDN);
        mpfr_log(r26948073, r26948072, MPFR_RNDN);
        return mpfr_get_d(r26948073, MPFR_RNDN);
}

