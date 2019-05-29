#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r10920940 = 1.0;
        float r10920941 = -6.0;
        float r10920942 = x;
        float r10920943 = r10920941 * r10920942;
        float r10920944 = r10920940 + r10920943;
        float r10920945 = 7.5;
        float r10920946 = r10920942 * r10920942;
        float r10920947 = r10920945 * r10920946;
        float r10920948 = r10920944 + r10920947;
        float r10920949 = -3.333333;
        float r10920950 = r10920946 * r10920942;
        float r10920951 = r10920949 * r10920950;
        float r10920952 = r10920948 + r10920951;
        float r10920953 = 0.625;
        float r10920954 = r10920950 * r10920942;
        float r10920955 = r10920953 * r10920954;
        float r10920956 = r10920952 + r10920955;
        float r10920957 = -0.05;
        float r10920958 = r10920954 * r10920942;
        float r10920959 = r10920957 * r10920958;
        float r10920960 = r10920956 + r10920959;
        float r10920961 = 0.001389;
        float r10920962 = r10920958 * r10920942;
        float r10920963 = r10920961 * r10920962;
        float r10920964 = r10920960 + r10920963;
        return r10920964;
}

double f_id(double x) {
        double r10920965 = 1.0;
        double r10920966 = -6.0;
        double r10920967 = x;
        double r10920968 = r10920966 * r10920967;
        double r10920969 = r10920965 + r10920968;
        double r10920970 = 7.5;
        double r10920971 = r10920967 * r10920967;
        double r10920972 = r10920970 * r10920971;
        double r10920973 = r10920969 + r10920972;
        double r10920974 = -3.333333;
        double r10920975 = r10920971 * r10920967;
        double r10920976 = r10920974 * r10920975;
        double r10920977 = r10920973 + r10920976;
        double r10920978 = 0.625;
        double r10920979 = r10920975 * r10920967;
        double r10920980 = r10920978 * r10920979;
        double r10920981 = r10920977 + r10920980;
        double r10920982 = -0.05;
        double r10920983 = r10920979 * r10920967;
        double r10920984 = r10920982 * r10920983;
        double r10920985 = r10920981 + r10920984;
        double r10920986 = 0.001389;
        double r10920987 = r10920983 * r10920967;
        double r10920988 = r10920986 * r10920987;
        double r10920989 = r10920985 + r10920988;
        return r10920989;
}


double f_of(float x) {
        float r10920990 = x;
        float r10920991 = 0.001389;
        float r10920992 = r10920991 * r10920990;
        float r10920993 = r10920990 * r10920992;
        float r10920994 = 2;
        float r10920995 = r10920994 + r10920994;
        float r10920996 = pow(r10920990, r10920995);
        float r10920997 = r10920993 * r10920996;
        float r10920998 = -6.0;
        float r10920999 = r10920990 * r10920998;
        float r10921000 = 1.0;
        float r10921001 = r10920999 + r10921000;
        float r10921002 = r10920997 + r10921001;
        float r10921003 = r10920990 * r10920990;
        float r10921004 = r10921003 * r10921003;
        float r10921005 = 0.625;
        float r10921006 = -0.05;
        float r10921007 = r10921006 * r10920990;
        float r10921008 = r10921005 + r10921007;
        float r10921009 = r10921004 * r10921008;
        float r10921010 = -3.333333;
        float r10921011 = r10921010 * r10920990;
        float r10921012 = 7.5;
        float r10921013 = r10921011 + r10921012;
        float r10921014 = r10921003 * r10921013;
        float r10921015 = r10921009 + r10921014;
        float r10921016 = r10921002 + r10921015;
        return r10921016;
}

double f_od(double x) {
        double r10921017 = x;
        double r10921018 = 0.001389;
        double r10921019 = r10921018 * r10921017;
        double r10921020 = r10921017 * r10921019;
        double r10921021 = 2;
        double r10921022 = r10921021 + r10921021;
        double r10921023 = pow(r10921017, r10921022);
        double r10921024 = r10921020 * r10921023;
        double r10921025 = -6.0;
        double r10921026 = r10921017 * r10921025;
        double r10921027 = 1.0;
        double r10921028 = r10921026 + r10921027;
        double r10921029 = r10921024 + r10921028;
        double r10921030 = r10921017 * r10921017;
        double r10921031 = r10921030 * r10921030;
        double r10921032 = 0.625;
        double r10921033 = -0.05;
        double r10921034 = r10921033 * r10921017;
        double r10921035 = r10921032 + r10921034;
        double r10921036 = r10921031 * r10921035;
        double r10921037 = -3.333333;
        double r10921038 = r10921037 * r10921017;
        double r10921039 = 7.5;
        double r10921040 = r10921038 + r10921039;
        double r10921041 = r10921030 * r10921040;
        double r10921042 = r10921036 + r10921041;
        double r10921043 = r10921029 + r10921042;
        return r10921043;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10921044, r10921045, r10921046, r10921047, r10921048, r10921049, r10921050, r10921051, r10921052, r10921053, r10921054, r10921055, r10921056, r10921057, r10921058, r10921059, r10921060, r10921061, r10921062, r10921063, r10921064, r10921065, r10921066, r10921067, r10921068;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10921044, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921045, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10921046);
        mpfr_init(r10921047);
        mpfr_init(r10921048);
        mpfr_init_set_str(r10921049, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10921050);
        mpfr_init(r10921051);
        mpfr_init(r10921052);
        mpfr_init_set_str(r10921053, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10921054);
        mpfr_init(r10921055);
        mpfr_init(r10921056);
        mpfr_init_set_str(r10921057, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10921058);
        mpfr_init(r10921059);
        mpfr_init(r10921060);
        mpfr_init_set_str(r10921061, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10921062);
        mpfr_init(r10921063);
        mpfr_init(r10921064);
        mpfr_init_set_str(r10921065, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10921066);
        mpfr_init(r10921067);
        mpfr_init(r10921068);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10921046, x, MPFR_RNDN);
        mpfr_mul(r10921047, r10921045, r10921046, MPFR_RNDN);
        mpfr_add(r10921048, r10921044, r10921047, MPFR_RNDN);
        ;
        mpfr_mul(r10921050, r10921046, r10921046, MPFR_RNDN);
        mpfr_mul(r10921051, r10921049, r10921050, MPFR_RNDN);
        mpfr_add(r10921052, r10921048, r10921051, MPFR_RNDN);
        ;
        mpfr_mul(r10921054, r10921050, r10921046, MPFR_RNDN);
        mpfr_mul(r10921055, r10921053, r10921054, MPFR_RNDN);
        mpfr_add(r10921056, r10921052, r10921055, MPFR_RNDN);
        ;
        mpfr_mul(r10921058, r10921054, r10921046, MPFR_RNDN);
        mpfr_mul(r10921059, r10921057, r10921058, MPFR_RNDN);
        mpfr_add(r10921060, r10921056, r10921059, MPFR_RNDN);
        ;
        mpfr_mul(r10921062, r10921058, r10921046, MPFR_RNDN);
        mpfr_mul(r10921063, r10921061, r10921062, MPFR_RNDN);
        mpfr_add(r10921064, r10921060, r10921063, MPFR_RNDN);
        ;
        mpfr_mul(r10921066, r10921062, r10921046, MPFR_RNDN);
        mpfr_mul(r10921067, r10921065, r10921066, MPFR_RNDN);
        mpfr_add(r10921068, r10921064, r10921067, MPFR_RNDN);
        return mpfr_get_d(r10921068, MPFR_RNDN);
}

static mpfr_t r10921069, r10921070, r10921071, r10921072, r10921073, r10921074, r10921075, r10921076, r10921077, r10921078, r10921079, r10921080, r10921081, r10921082, r10921083, r10921084, r10921085, r10921086, r10921087, r10921088, r10921089, r10921090, r10921091, r10921092, r10921093, r10921094, r10921095;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10921069);
        mpfr_init_set_str(r10921070, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10921071);
        mpfr_init(r10921072);
        mpfr_init_set_str(r10921073, "2", 10, MPFR_RNDN);
        mpfr_init(r10921074);
        mpfr_init(r10921075);
        mpfr_init(r10921076);
        mpfr_init_set_str(r10921077, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10921078);
        mpfr_init_set_str(r10921079, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10921080);
        mpfr_init(r10921081);
        mpfr_init(r10921082);
        mpfr_init(r10921083);
        mpfr_init_set_str(r10921084, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921085, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10921086);
        mpfr_init(r10921087);
        mpfr_init(r10921088);
        mpfr_init_set_str(r10921089, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10921090);
        mpfr_init_set_str(r10921091, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10921092);
        mpfr_init(r10921093);
        mpfr_init(r10921094);
        mpfr_init(r10921095);
}

double f_fm(double x) {
        mpfr_set_d(r10921069, x, MPFR_RNDN);
        ;
        mpfr_mul(r10921071, r10921070, r10921069, MPFR_RNDN);
        mpfr_mul(r10921072, r10921069, r10921071, MPFR_RNDN);
        ;
        mpfr_add(r10921074, r10921073, r10921073, MPFR_RNDN);
        mpfr_pow(r10921075, r10921069, r10921074, MPFR_RNDN);
        mpfr_mul(r10921076, r10921072, r10921075, MPFR_RNDN);
        ;
        mpfr_mul(r10921078, r10921069, r10921077, MPFR_RNDN);
        ;
        mpfr_add(r10921080, r10921078, r10921079, MPFR_RNDN);
        mpfr_add(r10921081, r10921076, r10921080, MPFR_RNDN);
        mpfr_mul(r10921082, r10921069, r10921069, MPFR_RNDN);
        mpfr_mul(r10921083, r10921082, r10921082, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10921086, r10921085, r10921069, MPFR_RNDN);
        mpfr_add(r10921087, r10921084, r10921086, MPFR_RNDN);
        mpfr_mul(r10921088, r10921083, r10921087, MPFR_RNDN);
        ;
        mpfr_mul(r10921090, r10921089, r10921069, MPFR_RNDN);
        ;
        mpfr_add(r10921092, r10921090, r10921091, MPFR_RNDN);
        mpfr_mul(r10921093, r10921082, r10921092, MPFR_RNDN);
        mpfr_add(r10921094, r10921088, r10921093, MPFR_RNDN);
        mpfr_add(r10921095, r10921081, r10921094, MPFR_RNDN);
        return mpfr_get_d(r10921095, MPFR_RNDN);
}

static mpfr_t r10921096, r10921097, r10921098, r10921099, r10921100, r10921101, r10921102, r10921103, r10921104, r10921105, r10921106, r10921107, r10921108, r10921109, r10921110, r10921111, r10921112, r10921113, r10921114, r10921115, r10921116, r10921117, r10921118, r10921119, r10921120, r10921121, r10921122;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10921096);
        mpfr_init_set_str(r10921097, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10921098);
        mpfr_init(r10921099);
        mpfr_init_set_str(r10921100, "2", 10, MPFR_RNDN);
        mpfr_init(r10921101);
        mpfr_init(r10921102);
        mpfr_init(r10921103);
        mpfr_init_set_str(r10921104, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10921105);
        mpfr_init_set_str(r10921106, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10921107);
        mpfr_init(r10921108);
        mpfr_init(r10921109);
        mpfr_init(r10921110);
        mpfr_init_set_str(r10921111, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921112, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10921113);
        mpfr_init(r10921114);
        mpfr_init(r10921115);
        mpfr_init_set_str(r10921116, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10921117);
        mpfr_init_set_str(r10921118, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10921119);
        mpfr_init(r10921120);
        mpfr_init(r10921121);
        mpfr_init(r10921122);
}

double f_dm(double x) {
        mpfr_set_d(r10921096, x, MPFR_RNDN);
        ;
        mpfr_mul(r10921098, r10921097, r10921096, MPFR_RNDN);
        mpfr_mul(r10921099, r10921096, r10921098, MPFR_RNDN);
        ;
        mpfr_add(r10921101, r10921100, r10921100, MPFR_RNDN);
        mpfr_pow(r10921102, r10921096, r10921101, MPFR_RNDN);
        mpfr_mul(r10921103, r10921099, r10921102, MPFR_RNDN);
        ;
        mpfr_mul(r10921105, r10921096, r10921104, MPFR_RNDN);
        ;
        mpfr_add(r10921107, r10921105, r10921106, MPFR_RNDN);
        mpfr_add(r10921108, r10921103, r10921107, MPFR_RNDN);
        mpfr_mul(r10921109, r10921096, r10921096, MPFR_RNDN);
        mpfr_mul(r10921110, r10921109, r10921109, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10921113, r10921112, r10921096, MPFR_RNDN);
        mpfr_add(r10921114, r10921111, r10921113, MPFR_RNDN);
        mpfr_mul(r10921115, r10921110, r10921114, MPFR_RNDN);
        ;
        mpfr_mul(r10921117, r10921116, r10921096, MPFR_RNDN);
        ;
        mpfr_add(r10921119, r10921117, r10921118, MPFR_RNDN);
        mpfr_mul(r10921120, r10921109, r10921119, MPFR_RNDN);
        mpfr_add(r10921121, r10921115, r10921120, MPFR_RNDN);
        mpfr_add(r10921122, r10921108, r10921121, MPFR_RNDN);
        return mpfr_get_d(r10921122, MPFR_RNDN);
}

