#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6405949 = -2.1875;
        float r6405950 = x;
        float r6405951 = r6405949 * r6405950;
        float r6405952 = 19.6875;
        float r6405953 = r6405950 * r6405950;
        float r6405954 = r6405953 * r6405950;
        float r6405955 = r6405952 * r6405954;
        float r6405956 = r6405951 + r6405955;
        float r6405957 = -43.3125;
        float r6405958 = r6405954 * r6405950;
        float r6405959 = r6405958 * r6405950;
        float r6405960 = r6405957 * r6405959;
        float r6405961 = r6405956 + r6405960;
        float r6405962 = 26.8125;
        float r6405963 = r6405959 * r6405950;
        float r6405964 = r6405963 * r6405950;
        float r6405965 = r6405962 * r6405964;
        float r6405966 = r6405961 + r6405965;
        return r6405966;
}

double f_id(double x) {
        double r6405967 = -2.1875;
        double r6405968 = x;
        double r6405969 = r6405967 * r6405968;
        double r6405970 = 19.6875;
        double r6405971 = r6405968 * r6405968;
        double r6405972 = r6405971 * r6405968;
        double r6405973 = r6405970 * r6405972;
        double r6405974 = r6405969 + r6405973;
        double r6405975 = -43.3125;
        double r6405976 = r6405972 * r6405968;
        double r6405977 = r6405976 * r6405968;
        double r6405978 = r6405975 * r6405977;
        double r6405979 = r6405974 + r6405978;
        double r6405980 = 26.8125;
        double r6405981 = r6405977 * r6405968;
        double r6405982 = r6405981 * r6405968;
        double r6405983 = r6405980 * r6405982;
        double r6405984 = r6405979 + r6405983;
        return r6405984;
}


double f_of(float x) {
        float r6405985 = x;
        float r6405986 = 2;
        float r6405987 = r6405986 + r6405986;
        float r6405988 = pow(r6405985, r6405987);
        float r6405989 = r6405985 * r6405985;
        float r6405990 = 26.8125;
        float r6405991 = r6405990 * r6405985;
        float r6405992 = r6405989 * r6405991;
        float r6405993 = -43.3125;
        float r6405994 = r6405985 * r6405993;
        float r6405995 = r6405992 + r6405994;
        float r6405996 = r6405988 * r6405995;
        float r6405997 = 19.6875;
        float r6405998 = r6405997 * r6405985;
        float r6405999 = r6405998 * r6405985;
        float r6406000 = -2.1875;
        float r6406001 = r6405999 + r6406000;
        float r6406002 = r6405985 * r6406001;
        float r6406003 = r6405996 + r6406002;
        return r6406003;
}

double f_od(double x) {
        double r6406004 = x;
        double r6406005 = 2;
        double r6406006 = r6406005 + r6406005;
        double r6406007 = pow(r6406004, r6406006);
        double r6406008 = r6406004 * r6406004;
        double r6406009 = 26.8125;
        double r6406010 = r6406009 * r6406004;
        double r6406011 = r6406008 * r6406010;
        double r6406012 = -43.3125;
        double r6406013 = r6406004 * r6406012;
        double r6406014 = r6406011 + r6406013;
        double r6406015 = r6406007 * r6406014;
        double r6406016 = 19.6875;
        double r6406017 = r6406016 * r6406004;
        double r6406018 = r6406017 * r6406004;
        double r6406019 = -2.1875;
        double r6406020 = r6406018 + r6406019;
        double r6406021 = r6406004 * r6406020;
        double r6406022 = r6406015 + r6406021;
        return r6406022;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6406023, r6406024, r6406025, r6406026, r6406027, r6406028, r6406029, r6406030, r6406031, r6406032, r6406033, r6406034, r6406035, r6406036, r6406037, r6406038, r6406039, r6406040;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6406023, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6406024);
        mpfr_init(r6406025);
        mpfr_init_set_str(r6406026, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6406027);
        mpfr_init(r6406028);
        mpfr_init(r6406029);
        mpfr_init(r6406030);
        mpfr_init_set_str(r6406031, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6406032);
        mpfr_init(r6406033);
        mpfr_init(r6406034);
        mpfr_init(r6406035);
        mpfr_init_set_str(r6406036, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6406037);
        mpfr_init(r6406038);
        mpfr_init(r6406039);
        mpfr_init(r6406040);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6406024, x, MPFR_RNDN);
        mpfr_mul(r6406025, r6406023, r6406024, MPFR_RNDN);
        ;
        mpfr_mul(r6406027, r6406024, r6406024, MPFR_RNDN);
        mpfr_mul(r6406028, r6406027, r6406024, MPFR_RNDN);
        mpfr_mul(r6406029, r6406026, r6406028, MPFR_RNDN);
        mpfr_add(r6406030, r6406025, r6406029, MPFR_RNDN);
        ;
        mpfr_mul(r6406032, r6406028, r6406024, MPFR_RNDN);
        mpfr_mul(r6406033, r6406032, r6406024, MPFR_RNDN);
        mpfr_mul(r6406034, r6406031, r6406033, MPFR_RNDN);
        mpfr_add(r6406035, r6406030, r6406034, MPFR_RNDN);
        ;
        mpfr_mul(r6406037, r6406033, r6406024, MPFR_RNDN);
        mpfr_mul(r6406038, r6406037, r6406024, MPFR_RNDN);
        mpfr_mul(r6406039, r6406036, r6406038, MPFR_RNDN);
        mpfr_add(r6406040, r6406035, r6406039, MPFR_RNDN);
        return mpfr_get_d(r6406040, MPFR_RNDN);
}

static mpfr_t r6406041, r6406042, r6406043, r6406044, r6406045, r6406046, r6406047, r6406048, r6406049, r6406050, r6406051, r6406052, r6406053, r6406054, r6406055, r6406056, r6406057, r6406058, r6406059;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6406041);
        mpfr_init_set_str(r6406042, "2", 10, MPFR_RNDN);
        mpfr_init(r6406043);
        mpfr_init(r6406044);
        mpfr_init(r6406045);
        mpfr_init_set_str(r6406046, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6406047);
        mpfr_init(r6406048);
        mpfr_init_set_str(r6406049, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6406050);
        mpfr_init(r6406051);
        mpfr_init(r6406052);
        mpfr_init_set_str(r6406053, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6406054);
        mpfr_init(r6406055);
        mpfr_init_set_str(r6406056, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6406057);
        mpfr_init(r6406058);
        mpfr_init(r6406059);
}

double f_fm(double x) {
        mpfr_set_d(r6406041, x, MPFR_RNDN);
        ;
        mpfr_add(r6406043, r6406042, r6406042, MPFR_RNDN);
        mpfr_pow(r6406044, r6406041, r6406043, MPFR_RNDN);
        mpfr_mul(r6406045, r6406041, r6406041, MPFR_RNDN);
        ;
        mpfr_mul(r6406047, r6406046, r6406041, MPFR_RNDN);
        mpfr_mul(r6406048, r6406045, r6406047, MPFR_RNDN);
        ;
        mpfr_mul(r6406050, r6406041, r6406049, MPFR_RNDN);
        mpfr_add(r6406051, r6406048, r6406050, MPFR_RNDN);
        mpfr_mul(r6406052, r6406044, r6406051, MPFR_RNDN);
        ;
        mpfr_mul(r6406054, r6406053, r6406041, MPFR_RNDN);
        mpfr_mul(r6406055, r6406054, r6406041, MPFR_RNDN);
        ;
        mpfr_add(r6406057, r6406055, r6406056, MPFR_RNDN);
        mpfr_mul(r6406058, r6406041, r6406057, MPFR_RNDN);
        mpfr_add(r6406059, r6406052, r6406058, MPFR_RNDN);
        return mpfr_get_d(r6406059, MPFR_RNDN);
}

static mpfr_t r6406060, r6406061, r6406062, r6406063, r6406064, r6406065, r6406066, r6406067, r6406068, r6406069, r6406070, r6406071, r6406072, r6406073, r6406074, r6406075, r6406076, r6406077, r6406078;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6406060);
        mpfr_init_set_str(r6406061, "2", 10, MPFR_RNDN);
        mpfr_init(r6406062);
        mpfr_init(r6406063);
        mpfr_init(r6406064);
        mpfr_init_set_str(r6406065, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6406066);
        mpfr_init(r6406067);
        mpfr_init_set_str(r6406068, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6406069);
        mpfr_init(r6406070);
        mpfr_init(r6406071);
        mpfr_init_set_str(r6406072, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6406073);
        mpfr_init(r6406074);
        mpfr_init_set_str(r6406075, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6406076);
        mpfr_init(r6406077);
        mpfr_init(r6406078);
}

double f_dm(double x) {
        mpfr_set_d(r6406060, x, MPFR_RNDN);
        ;
        mpfr_add(r6406062, r6406061, r6406061, MPFR_RNDN);
        mpfr_pow(r6406063, r6406060, r6406062, MPFR_RNDN);
        mpfr_mul(r6406064, r6406060, r6406060, MPFR_RNDN);
        ;
        mpfr_mul(r6406066, r6406065, r6406060, MPFR_RNDN);
        mpfr_mul(r6406067, r6406064, r6406066, MPFR_RNDN);
        ;
        mpfr_mul(r6406069, r6406060, r6406068, MPFR_RNDN);
        mpfr_add(r6406070, r6406067, r6406069, MPFR_RNDN);
        mpfr_mul(r6406071, r6406063, r6406070, MPFR_RNDN);
        ;
        mpfr_mul(r6406073, r6406072, r6406060, MPFR_RNDN);
        mpfr_mul(r6406074, r6406073, r6406060, MPFR_RNDN);
        ;
        mpfr_add(r6406076, r6406074, r6406075, MPFR_RNDN);
        mpfr_mul(r6406077, r6406060, r6406076, MPFR_RNDN);
        mpfr_add(r6406078, r6406071, r6406077, MPFR_RNDN);
        return mpfr_get_d(r6406078, MPFR_RNDN);
}

