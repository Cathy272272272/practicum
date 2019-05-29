#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r10743924 = 1.0;
        float r10743925 = -6.0;
        float r10743926 = x;
        float r10743927 = r10743925 * r10743926;
        float r10743928 = r10743924 + r10743927;
        float r10743929 = 7.5;
        float r10743930 = r10743926 * r10743926;
        float r10743931 = r10743929 * r10743930;
        float r10743932 = r10743928 + r10743931;
        float r10743933 = -3.333333;
        float r10743934 = r10743930 * r10743926;
        float r10743935 = r10743933 * r10743934;
        float r10743936 = r10743932 + r10743935;
        float r10743937 = 0.625;
        float r10743938 = r10743934 * r10743926;
        float r10743939 = r10743937 * r10743938;
        float r10743940 = r10743936 + r10743939;
        float r10743941 = -0.05;
        float r10743942 = r10743938 * r10743926;
        float r10743943 = r10743941 * r10743942;
        float r10743944 = r10743940 + r10743943;
        float r10743945 = 0.001389;
        float r10743946 = r10743942 * r10743926;
        float r10743947 = r10743945 * r10743946;
        float r10743948 = r10743944 + r10743947;
        return r10743948;
}

double f_id(double x) {
        double r10743949 = 1.0;
        double r10743950 = -6.0;
        double r10743951 = x;
        double r10743952 = r10743950 * r10743951;
        double r10743953 = r10743949 + r10743952;
        double r10743954 = 7.5;
        double r10743955 = r10743951 * r10743951;
        double r10743956 = r10743954 * r10743955;
        double r10743957 = r10743953 + r10743956;
        double r10743958 = -3.333333;
        double r10743959 = r10743955 * r10743951;
        double r10743960 = r10743958 * r10743959;
        double r10743961 = r10743957 + r10743960;
        double r10743962 = 0.625;
        double r10743963 = r10743959 * r10743951;
        double r10743964 = r10743962 * r10743963;
        double r10743965 = r10743961 + r10743964;
        double r10743966 = -0.05;
        double r10743967 = r10743963 * r10743951;
        double r10743968 = r10743966 * r10743967;
        double r10743969 = r10743965 + r10743968;
        double r10743970 = 0.001389;
        double r10743971 = r10743967 * r10743951;
        double r10743972 = r10743970 * r10743971;
        double r10743973 = r10743969 + r10743972;
        return r10743973;
}


double f_of(float x) {
        float r10743974 = 1.0;
        float r10743975 = -6.0;
        float r10743976 = x;
        float r10743977 = r10743975 * r10743976;
        float r10743978 = r10743974 + r10743977;
        float r10743979 = 7.5;
        float r10743980 = r10743976 * r10743976;
        float r10743981 = r10743979 * r10743980;
        float r10743982 = r10743978 + r10743981;
        float r10743983 = -3.333333;
        float r10743984 = r10743980 * r10743976;
        float r10743985 = r10743983 * r10743984;
        float r10743986 = r10743982 + r10743985;
        float r10743987 = 0.625;
        float r10743988 = r10743984 * r10743976;
        float r10743989 = r10743987 * r10743988;
        float r10743990 = r10743986 + r10743989;
        float r10743991 = -0.05;
        float r10743992 = r10743988 * r10743976;
        float r10743993 = r10743991 * r10743992;
        float r10743994 = r10743990 + r10743993;
        float r10743995 = 0.001389;
        float r10743996 = r10743992 * r10743976;
        float r10743997 = r10743995 * r10743996;
        float r10743998 = r10743994 + r10743997;
        return r10743998;
}

double f_od(double x) {
        double r10743999 = 1.0;
        double r10744000 = -6.0;
        double r10744001 = x;
        double r10744002 = r10744000 * r10744001;
        double r10744003 = r10743999 + r10744002;
        double r10744004 = 7.5;
        double r10744005 = r10744001 * r10744001;
        double r10744006 = r10744004 * r10744005;
        double r10744007 = r10744003 + r10744006;
        double r10744008 = -3.333333;
        double r10744009 = r10744005 * r10744001;
        double r10744010 = r10744008 * r10744009;
        double r10744011 = r10744007 + r10744010;
        double r10744012 = 0.625;
        double r10744013 = r10744009 * r10744001;
        double r10744014 = r10744012 * r10744013;
        double r10744015 = r10744011 + r10744014;
        double r10744016 = -0.05;
        double r10744017 = r10744013 * r10744001;
        double r10744018 = r10744016 * r10744017;
        double r10744019 = r10744015 + r10744018;
        double r10744020 = 0.001389;
        double r10744021 = r10744017 * r10744001;
        double r10744022 = r10744020 * r10744021;
        double r10744023 = r10744019 + r10744022;
        return r10744023;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10744024, r10744025, r10744026, r10744027, r10744028, r10744029, r10744030, r10744031, r10744032, r10744033, r10744034, r10744035, r10744036, r10744037, r10744038, r10744039, r10744040, r10744041, r10744042, r10744043, r10744044, r10744045, r10744046, r10744047, r10744048;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744024, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744025, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10744026);
        mpfr_init(r10744027);
        mpfr_init(r10744028);
        mpfr_init_set_str(r10744029, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10744030);
        mpfr_init(r10744031);
        mpfr_init(r10744032);
        mpfr_init_set_str(r10744033, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10744034);
        mpfr_init(r10744035);
        mpfr_init(r10744036);
        mpfr_init_set_str(r10744037, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10744038);
        mpfr_init(r10744039);
        mpfr_init(r10744040);
        mpfr_init_set_str(r10744041, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10744042);
        mpfr_init(r10744043);
        mpfr_init(r10744044);
        mpfr_init_set_str(r10744045, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10744046);
        mpfr_init(r10744047);
        mpfr_init(r10744048);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10744026, x, MPFR_RNDN);
        mpfr_mul(r10744027, r10744025, r10744026, MPFR_RNDN);
        mpfr_add(r10744028, r10744024, r10744027, MPFR_RNDN);
        ;
        mpfr_mul(r10744030, r10744026, r10744026, MPFR_RNDN);
        mpfr_mul(r10744031, r10744029, r10744030, MPFR_RNDN);
        mpfr_add(r10744032, r10744028, r10744031, MPFR_RNDN);
        ;
        mpfr_mul(r10744034, r10744030, r10744026, MPFR_RNDN);
        mpfr_mul(r10744035, r10744033, r10744034, MPFR_RNDN);
        mpfr_add(r10744036, r10744032, r10744035, MPFR_RNDN);
        ;
        mpfr_mul(r10744038, r10744034, r10744026, MPFR_RNDN);
        mpfr_mul(r10744039, r10744037, r10744038, MPFR_RNDN);
        mpfr_add(r10744040, r10744036, r10744039, MPFR_RNDN);
        ;
        mpfr_mul(r10744042, r10744038, r10744026, MPFR_RNDN);
        mpfr_mul(r10744043, r10744041, r10744042, MPFR_RNDN);
        mpfr_add(r10744044, r10744040, r10744043, MPFR_RNDN);
        ;
        mpfr_mul(r10744046, r10744042, r10744026, MPFR_RNDN);
        mpfr_mul(r10744047, r10744045, r10744046, MPFR_RNDN);
        mpfr_add(r10744048, r10744044, r10744047, MPFR_RNDN);
        return mpfr_get_d(r10744048, MPFR_RNDN);
}

static mpfr_t r10744049, r10744050, r10744051, r10744052, r10744053, r10744054, r10744055, r10744056, r10744057, r10744058, r10744059, r10744060, r10744061, r10744062, r10744063, r10744064, r10744065, r10744066, r10744067, r10744068, r10744069, r10744070, r10744071, r10744072, r10744073;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744049, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744050, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10744051);
        mpfr_init(r10744052);
        mpfr_init(r10744053);
        mpfr_init_set_str(r10744054, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10744055);
        mpfr_init(r10744056);
        mpfr_init(r10744057);
        mpfr_init_set_str(r10744058, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10744059);
        mpfr_init(r10744060);
        mpfr_init(r10744061);
        mpfr_init_set_str(r10744062, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10744063);
        mpfr_init(r10744064);
        mpfr_init(r10744065);
        mpfr_init_set_str(r10744066, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10744067);
        mpfr_init(r10744068);
        mpfr_init(r10744069);
        mpfr_init_set_str(r10744070, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10744071);
        mpfr_init(r10744072);
        mpfr_init(r10744073);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10744051, x, MPFR_RNDN);
        mpfr_mul(r10744052, r10744050, r10744051, MPFR_RNDN);
        mpfr_add(r10744053, r10744049, r10744052, MPFR_RNDN);
        ;
        mpfr_mul(r10744055, r10744051, r10744051, MPFR_RNDN);
        mpfr_mul(r10744056, r10744054, r10744055, MPFR_RNDN);
        mpfr_add(r10744057, r10744053, r10744056, MPFR_RNDN);
        ;
        mpfr_mul(r10744059, r10744055, r10744051, MPFR_RNDN);
        mpfr_mul(r10744060, r10744058, r10744059, MPFR_RNDN);
        mpfr_add(r10744061, r10744057, r10744060, MPFR_RNDN);
        ;
        mpfr_mul(r10744063, r10744059, r10744051, MPFR_RNDN);
        mpfr_mul(r10744064, r10744062, r10744063, MPFR_RNDN);
        mpfr_add(r10744065, r10744061, r10744064, MPFR_RNDN);
        ;
        mpfr_mul(r10744067, r10744063, r10744051, MPFR_RNDN);
        mpfr_mul(r10744068, r10744066, r10744067, MPFR_RNDN);
        mpfr_add(r10744069, r10744065, r10744068, MPFR_RNDN);
        ;
        mpfr_mul(r10744071, r10744067, r10744051, MPFR_RNDN);
        mpfr_mul(r10744072, r10744070, r10744071, MPFR_RNDN);
        mpfr_add(r10744073, r10744069, r10744072, MPFR_RNDN);
        return mpfr_get_d(r10744073, MPFR_RNDN);
}

static mpfr_t r10744074, r10744075, r10744076, r10744077, r10744078, r10744079, r10744080, r10744081, r10744082, r10744083, r10744084, r10744085, r10744086, r10744087, r10744088, r10744089, r10744090, r10744091, r10744092, r10744093, r10744094, r10744095, r10744096, r10744097, r10744098;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744074, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744075, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10744076);
        mpfr_init(r10744077);
        mpfr_init(r10744078);
        mpfr_init_set_str(r10744079, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10744080);
        mpfr_init(r10744081);
        mpfr_init(r10744082);
        mpfr_init_set_str(r10744083, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10744084);
        mpfr_init(r10744085);
        mpfr_init(r10744086);
        mpfr_init_set_str(r10744087, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10744088);
        mpfr_init(r10744089);
        mpfr_init(r10744090);
        mpfr_init_set_str(r10744091, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10744092);
        mpfr_init(r10744093);
        mpfr_init(r10744094);
        mpfr_init_set_str(r10744095, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10744096);
        mpfr_init(r10744097);
        mpfr_init(r10744098);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10744076, x, MPFR_RNDN);
        mpfr_mul(r10744077, r10744075, r10744076, MPFR_RNDN);
        mpfr_add(r10744078, r10744074, r10744077, MPFR_RNDN);
        ;
        mpfr_mul(r10744080, r10744076, r10744076, MPFR_RNDN);
        mpfr_mul(r10744081, r10744079, r10744080, MPFR_RNDN);
        mpfr_add(r10744082, r10744078, r10744081, MPFR_RNDN);
        ;
        mpfr_mul(r10744084, r10744080, r10744076, MPFR_RNDN);
        mpfr_mul(r10744085, r10744083, r10744084, MPFR_RNDN);
        mpfr_add(r10744086, r10744082, r10744085, MPFR_RNDN);
        ;
        mpfr_mul(r10744088, r10744084, r10744076, MPFR_RNDN);
        mpfr_mul(r10744089, r10744087, r10744088, MPFR_RNDN);
        mpfr_add(r10744090, r10744086, r10744089, MPFR_RNDN);
        ;
        mpfr_mul(r10744092, r10744088, r10744076, MPFR_RNDN);
        mpfr_mul(r10744093, r10744091, r10744092, MPFR_RNDN);
        mpfr_add(r10744094, r10744090, r10744093, MPFR_RNDN);
        ;
        mpfr_mul(r10744096, r10744092, r10744076, MPFR_RNDN);
        mpfr_mul(r10744097, r10744095, r10744096, MPFR_RNDN);
        mpfr_add(r10744098, r10744094, r10744097, MPFR_RNDN);
        return mpfr_get_d(r10744098, MPFR_RNDN);
}

