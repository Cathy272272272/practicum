#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r7081912 = 665280.0;
        float r7081913 = -7983360.0;
        float r7081914 = x;
        float r7081915 = r7081914 * r7081914;
        float r7081916 = r7081913 * r7081915;
        float r7081917 = r7081912 + r7081916;
        float r7081918 = 13305600.0;
        float r7081919 = r7081915 * r7081914;
        float r7081920 = r7081919 * r7081914;
        float r7081921 = r7081918 * r7081920;
        float r7081922 = r7081917 + r7081921;
        float r7081923 = -7096320.0;
        float r7081924 = r7081920 * r7081914;
        float r7081925 = r7081924 * r7081914;
        float r7081926 = r7081923 * r7081925;
        float r7081927 = r7081922 + r7081926;
        float r7081928 = 1520640.0;
        float r7081929 = r7081925 * r7081914;
        float r7081930 = r7081929 * r7081914;
        float r7081931 = r7081928 * r7081930;
        float r7081932 = r7081927 + r7081931;
        float r7081933 = -135168.0;
        float r7081934 = r7081930 * r7081914;
        float r7081935 = r7081934 * r7081914;
        float r7081936 = r7081933 * r7081935;
        float r7081937 = r7081932 + r7081936;
        float r7081938 = 4096.0;
        float r7081939 = r7081935 * r7081914;
        float r7081940 = r7081939 * r7081914;
        float r7081941 = r7081938 * r7081940;
        float r7081942 = r7081937 + r7081941;
        return r7081942;
}

double f_id(double x) {
        double r7081943 = 665280.0;
        double r7081944 = -7983360.0;
        double r7081945 = x;
        double r7081946 = r7081945 * r7081945;
        double r7081947 = r7081944 * r7081946;
        double r7081948 = r7081943 + r7081947;
        double r7081949 = 13305600.0;
        double r7081950 = r7081946 * r7081945;
        double r7081951 = r7081950 * r7081945;
        double r7081952 = r7081949 * r7081951;
        double r7081953 = r7081948 + r7081952;
        double r7081954 = -7096320.0;
        double r7081955 = r7081951 * r7081945;
        double r7081956 = r7081955 * r7081945;
        double r7081957 = r7081954 * r7081956;
        double r7081958 = r7081953 + r7081957;
        double r7081959 = 1520640.0;
        double r7081960 = r7081956 * r7081945;
        double r7081961 = r7081960 * r7081945;
        double r7081962 = r7081959 * r7081961;
        double r7081963 = r7081958 + r7081962;
        double r7081964 = -135168.0;
        double r7081965 = r7081961 * r7081945;
        double r7081966 = r7081965 * r7081945;
        double r7081967 = r7081964 * r7081966;
        double r7081968 = r7081963 + r7081967;
        double r7081969 = 4096.0;
        double r7081970 = r7081966 * r7081945;
        double r7081971 = r7081970 * r7081945;
        double r7081972 = r7081969 * r7081971;
        double r7081973 = r7081968 + r7081972;
        return r7081973;
}


double f_of(float x) {
        float r7081974 = 1520640.0;
        float r7081975 = x;
        float r7081976 = r7081974 * r7081975;
        float r7081977 = r7081976 * r7081975;
        float r7081978 = r7081975 * r7081975;
        float r7081979 = 3;
        float r7081980 = pow(r7081978, r7081979);
        float r7081981 = r7081977 * r7081980;
        float r7081982 = r7081978 * r7081978;
        float r7081983 = r7081980 * r7081982;
        float r7081984 = 4096.0;
        float r7081985 = r7081984 * r7081975;
        float r7081986 = r7081975 * r7081985;
        float r7081987 = -135168.0;
        float r7081988 = r7081986 + r7081987;
        float r7081989 = r7081983 * r7081988;
        float r7081990 = r7081981 + r7081989;
        float r7081991 = -7096320.0;
        float r7081992 = r7081978 * r7081991;
        float r7081993 = 13305600.0;
        float r7081994 = r7081992 + r7081993;
        float r7081995 = r7081982 * r7081994;
        float r7081996 = -7983360.0;
        float r7081997 = r7081975 * r7081996;
        float r7081998 = r7081997 * r7081975;
        float r7081999 = 665280.0;
        float r7082000 = r7081998 + r7081999;
        float r7082001 = r7081995 + r7082000;
        float r7082002 = r7081990 + r7082001;
        return r7082002;
}

double f_od(double x) {
        double r7082003 = 1520640.0;
        double r7082004 = x;
        double r7082005 = r7082003 * r7082004;
        double r7082006 = r7082005 * r7082004;
        double r7082007 = r7082004 * r7082004;
        double r7082008 = 3;
        double r7082009 = pow(r7082007, r7082008);
        double r7082010 = r7082006 * r7082009;
        double r7082011 = r7082007 * r7082007;
        double r7082012 = r7082009 * r7082011;
        double r7082013 = 4096.0;
        double r7082014 = r7082013 * r7082004;
        double r7082015 = r7082004 * r7082014;
        double r7082016 = -135168.0;
        double r7082017 = r7082015 + r7082016;
        double r7082018 = r7082012 * r7082017;
        double r7082019 = r7082010 + r7082018;
        double r7082020 = -7096320.0;
        double r7082021 = r7082007 * r7082020;
        double r7082022 = 13305600.0;
        double r7082023 = r7082021 + r7082022;
        double r7082024 = r7082011 * r7082023;
        double r7082025 = -7983360.0;
        double r7082026 = r7082004 * r7082025;
        double r7082027 = r7082026 * r7082004;
        double r7082028 = 665280.0;
        double r7082029 = r7082027 + r7082028;
        double r7082030 = r7082024 + r7082029;
        double r7082031 = r7082019 + r7082030;
        return r7082031;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7082032, r7082033, r7082034, r7082035, r7082036, r7082037, r7082038, r7082039, r7082040, r7082041, r7082042, r7082043, r7082044, r7082045, r7082046, r7082047, r7082048, r7082049, r7082050, r7082051, r7082052, r7082053, r7082054, r7082055, r7082056, r7082057, r7082058, r7082059, r7082060, r7082061, r7082062;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7082032, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7082033, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r7082034);
        mpfr_init(r7082035);
        mpfr_init(r7082036);
        mpfr_init(r7082037);
        mpfr_init_set_str(r7082038, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r7082039);
        mpfr_init(r7082040);
        mpfr_init(r7082041);
        mpfr_init(r7082042);
        mpfr_init_set_str(r7082043, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r7082044);
        mpfr_init(r7082045);
        mpfr_init(r7082046);
        mpfr_init(r7082047);
        mpfr_init_set_str(r7082048, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r7082049);
        mpfr_init(r7082050);
        mpfr_init(r7082051);
        mpfr_init(r7082052);
        mpfr_init_set_str(r7082053, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r7082054);
        mpfr_init(r7082055);
        mpfr_init(r7082056);
        mpfr_init(r7082057);
        mpfr_init_set_str(r7082058, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r7082059);
        mpfr_init(r7082060);
        mpfr_init(r7082061);
        mpfr_init(r7082062);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7082034, x, MPFR_RNDN);
        mpfr_mul(r7082035, r7082034, r7082034, MPFR_RNDN);
        mpfr_mul(r7082036, r7082033, r7082035, MPFR_RNDN);
        mpfr_add(r7082037, r7082032, r7082036, MPFR_RNDN);
        ;
        mpfr_mul(r7082039, r7082035, r7082034, MPFR_RNDN);
        mpfr_mul(r7082040, r7082039, r7082034, MPFR_RNDN);
        mpfr_mul(r7082041, r7082038, r7082040, MPFR_RNDN);
        mpfr_add(r7082042, r7082037, r7082041, MPFR_RNDN);
        ;
        mpfr_mul(r7082044, r7082040, r7082034, MPFR_RNDN);
        mpfr_mul(r7082045, r7082044, r7082034, MPFR_RNDN);
        mpfr_mul(r7082046, r7082043, r7082045, MPFR_RNDN);
        mpfr_add(r7082047, r7082042, r7082046, MPFR_RNDN);
        ;
        mpfr_mul(r7082049, r7082045, r7082034, MPFR_RNDN);
        mpfr_mul(r7082050, r7082049, r7082034, MPFR_RNDN);
        mpfr_mul(r7082051, r7082048, r7082050, MPFR_RNDN);
        mpfr_add(r7082052, r7082047, r7082051, MPFR_RNDN);
        ;
        mpfr_mul(r7082054, r7082050, r7082034, MPFR_RNDN);
        mpfr_mul(r7082055, r7082054, r7082034, MPFR_RNDN);
        mpfr_mul(r7082056, r7082053, r7082055, MPFR_RNDN);
        mpfr_add(r7082057, r7082052, r7082056, MPFR_RNDN);
        ;
        mpfr_mul(r7082059, r7082055, r7082034, MPFR_RNDN);
        mpfr_mul(r7082060, r7082059, r7082034, MPFR_RNDN);
        mpfr_mul(r7082061, r7082058, r7082060, MPFR_RNDN);
        mpfr_add(r7082062, r7082057, r7082061, MPFR_RNDN);
        return mpfr_get_d(r7082062, MPFR_RNDN);
}

static mpfr_t r7082063, r7082064, r7082065, r7082066, r7082067, r7082068, r7082069, r7082070, r7082071, r7082072, r7082073, r7082074, r7082075, r7082076, r7082077, r7082078, r7082079, r7082080, r7082081, r7082082, r7082083, r7082084, r7082085, r7082086, r7082087, r7082088, r7082089, r7082090, r7082091;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7082063, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r7082064);
        mpfr_init(r7082065);
        mpfr_init(r7082066);
        mpfr_init(r7082067);
        mpfr_init_set_str(r7082068, "3", 10, MPFR_RNDN);
        mpfr_init(r7082069);
        mpfr_init(r7082070);
        mpfr_init(r7082071);
        mpfr_init(r7082072);
        mpfr_init_set_str(r7082073, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r7082074);
        mpfr_init(r7082075);
        mpfr_init_set_str(r7082076, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r7082077);
        mpfr_init(r7082078);
        mpfr_init(r7082079);
        mpfr_init_set_str(r7082080, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r7082081);
        mpfr_init_set_str(r7082082, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r7082083);
        mpfr_init(r7082084);
        mpfr_init_set_str(r7082085, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r7082086);
        mpfr_init(r7082087);
        mpfr_init_set_str(r7082088, "665280.0", 10, MPFR_RNDN);
        mpfr_init(r7082089);
        mpfr_init(r7082090);
        mpfr_init(r7082091);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7082064, x, MPFR_RNDN);
        mpfr_mul(r7082065, r7082063, r7082064, MPFR_RNDN);
        mpfr_mul(r7082066, r7082065, r7082064, MPFR_RNDN);
        mpfr_mul(r7082067, r7082064, r7082064, MPFR_RNDN);
        ;
        mpfr_pow(r7082069, r7082067, r7082068, MPFR_RNDN);
        mpfr_mul(r7082070, r7082066, r7082069, MPFR_RNDN);
        mpfr_mul(r7082071, r7082067, r7082067, MPFR_RNDN);
        mpfr_mul(r7082072, r7082069, r7082071, MPFR_RNDN);
        ;
        mpfr_mul(r7082074, r7082073, r7082064, MPFR_RNDN);
        mpfr_mul(r7082075, r7082064, r7082074, MPFR_RNDN);
        ;
        mpfr_add(r7082077, r7082075, r7082076, MPFR_RNDN);
        mpfr_mul(r7082078, r7082072, r7082077, MPFR_RNDN);
        mpfr_add(r7082079, r7082070, r7082078, MPFR_RNDN);
        ;
        mpfr_mul(r7082081, r7082067, r7082080, MPFR_RNDN);
        ;
        mpfr_add(r7082083, r7082081, r7082082, MPFR_RNDN);
        mpfr_mul(r7082084, r7082071, r7082083, MPFR_RNDN);
        ;
        mpfr_mul(r7082086, r7082064, r7082085, MPFR_RNDN);
        mpfr_mul(r7082087, r7082086, r7082064, MPFR_RNDN);
        ;
        mpfr_add(r7082089, r7082087, r7082088, MPFR_RNDN);
        mpfr_add(r7082090, r7082084, r7082089, MPFR_RNDN);
        mpfr_add(r7082091, r7082079, r7082090, MPFR_RNDN);
        return mpfr_get_d(r7082091, MPFR_RNDN);
}

static mpfr_t r7082092, r7082093, r7082094, r7082095, r7082096, r7082097, r7082098, r7082099, r7082100, r7082101, r7082102, r7082103, r7082104, r7082105, r7082106, r7082107, r7082108, r7082109, r7082110, r7082111, r7082112, r7082113, r7082114, r7082115, r7082116, r7082117, r7082118, r7082119, r7082120;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7082092, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r7082093);
        mpfr_init(r7082094);
        mpfr_init(r7082095);
        mpfr_init(r7082096);
        mpfr_init_set_str(r7082097, "3", 10, MPFR_RNDN);
        mpfr_init(r7082098);
        mpfr_init(r7082099);
        mpfr_init(r7082100);
        mpfr_init(r7082101);
        mpfr_init_set_str(r7082102, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r7082103);
        mpfr_init(r7082104);
        mpfr_init_set_str(r7082105, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r7082106);
        mpfr_init(r7082107);
        mpfr_init(r7082108);
        mpfr_init_set_str(r7082109, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r7082110);
        mpfr_init_set_str(r7082111, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r7082112);
        mpfr_init(r7082113);
        mpfr_init_set_str(r7082114, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r7082115);
        mpfr_init(r7082116);
        mpfr_init_set_str(r7082117, "665280.0", 10, MPFR_RNDN);
        mpfr_init(r7082118);
        mpfr_init(r7082119);
        mpfr_init(r7082120);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7082093, x, MPFR_RNDN);
        mpfr_mul(r7082094, r7082092, r7082093, MPFR_RNDN);
        mpfr_mul(r7082095, r7082094, r7082093, MPFR_RNDN);
        mpfr_mul(r7082096, r7082093, r7082093, MPFR_RNDN);
        ;
        mpfr_pow(r7082098, r7082096, r7082097, MPFR_RNDN);
        mpfr_mul(r7082099, r7082095, r7082098, MPFR_RNDN);
        mpfr_mul(r7082100, r7082096, r7082096, MPFR_RNDN);
        mpfr_mul(r7082101, r7082098, r7082100, MPFR_RNDN);
        ;
        mpfr_mul(r7082103, r7082102, r7082093, MPFR_RNDN);
        mpfr_mul(r7082104, r7082093, r7082103, MPFR_RNDN);
        ;
        mpfr_add(r7082106, r7082104, r7082105, MPFR_RNDN);
        mpfr_mul(r7082107, r7082101, r7082106, MPFR_RNDN);
        mpfr_add(r7082108, r7082099, r7082107, MPFR_RNDN);
        ;
        mpfr_mul(r7082110, r7082096, r7082109, MPFR_RNDN);
        ;
        mpfr_add(r7082112, r7082110, r7082111, MPFR_RNDN);
        mpfr_mul(r7082113, r7082100, r7082112, MPFR_RNDN);
        ;
        mpfr_mul(r7082115, r7082093, r7082114, MPFR_RNDN);
        mpfr_mul(r7082116, r7082115, r7082093, MPFR_RNDN);
        ;
        mpfr_add(r7082118, r7082116, r7082117, MPFR_RNDN);
        mpfr_add(r7082119, r7082113, r7082118, MPFR_RNDN);
        mpfr_add(r7082120, r7082108, r7082119, MPFR_RNDN);
        return mpfr_get_d(r7082120, MPFR_RNDN);
}

