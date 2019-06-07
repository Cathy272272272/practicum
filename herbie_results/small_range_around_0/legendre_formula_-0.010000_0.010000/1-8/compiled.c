#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r4484954 = 0.273438;
        float r4484955 = -9.84375;
        float r4484956 = x;
        float r4484957 = r4484956 * r4484956;
        float r4484958 = r4484955 * r4484957;
        float r4484959 = r4484954 + r4484958;
        float r4484960 = 54.140625;
        float r4484961 = r4484957 * r4484956;
        float r4484962 = r4484961 * r4484956;
        float r4484963 = r4484960 * r4484962;
        float r4484964 = r4484959 + r4484963;
        float r4484965 = -93.84375;
        float r4484966 = r4484962 * r4484956;
        float r4484967 = r4484966 * r4484956;
        float r4484968 = r4484965 * r4484967;
        float r4484969 = r4484964 + r4484968;
        float r4484970 = 50.273438;
        float r4484971 = r4484967 * r4484956;
        float r4484972 = r4484971 * r4484956;
        float r4484973 = r4484970 * r4484972;
        float r4484974 = r4484969 + r4484973;
        return r4484974;
}

double f_id(double x) {
        double r4484975 = 0.273438;
        double r4484976 = -9.84375;
        double r4484977 = x;
        double r4484978 = r4484977 * r4484977;
        double r4484979 = r4484976 * r4484978;
        double r4484980 = r4484975 + r4484979;
        double r4484981 = 54.140625;
        double r4484982 = r4484978 * r4484977;
        double r4484983 = r4484982 * r4484977;
        double r4484984 = r4484981 * r4484983;
        double r4484985 = r4484980 + r4484984;
        double r4484986 = -93.84375;
        double r4484987 = r4484983 * r4484977;
        double r4484988 = r4484987 * r4484977;
        double r4484989 = r4484986 * r4484988;
        double r4484990 = r4484985 + r4484989;
        double r4484991 = 50.273438;
        double r4484992 = r4484988 * r4484977;
        double r4484993 = r4484992 * r4484977;
        double r4484994 = r4484991 * r4484993;
        double r4484995 = r4484990 + r4484994;
        return r4484995;
}


double f_of(float x) {
        float r4484996 = 0.273438;
        float r4484997 = -9.84375;
        float r4484998 = x;
        float r4484999 = r4484998 * r4484998;
        float r4485000 = r4484997 * r4484999;
        float r4485001 = r4484996 + r4485000;
        float r4485002 = 54.140625;
        float r4485003 = r4484999 * r4484998;
        float r4485004 = r4485003 * r4484998;
        float r4485005 = r4485002 * r4485004;
        float r4485006 = r4485001 + r4485005;
        float r4485007 = -93.84375;
        float r4485008 = r4485004 * r4484998;
        float r4485009 = r4485008 * r4484998;
        float r4485010 = r4485007 * r4485009;
        float r4485011 = r4485006 + r4485010;
        float r4485012 = 50.273438;
        float r4485013 = r4485009 * r4484998;
        float r4485014 = r4485013 * r4484998;
        float r4485015 = r4485012 * r4485014;
        float r4485016 = r4485011 + r4485015;
        return r4485016;
}

double f_od(double x) {
        double r4485017 = 0.273438;
        double r4485018 = -9.84375;
        double r4485019 = x;
        double r4485020 = r4485019 * r4485019;
        double r4485021 = r4485018 * r4485020;
        double r4485022 = r4485017 + r4485021;
        double r4485023 = 54.140625;
        double r4485024 = r4485020 * r4485019;
        double r4485025 = r4485024 * r4485019;
        double r4485026 = r4485023 * r4485025;
        double r4485027 = r4485022 + r4485026;
        double r4485028 = -93.84375;
        double r4485029 = r4485025 * r4485019;
        double r4485030 = r4485029 * r4485019;
        double r4485031 = r4485028 * r4485030;
        double r4485032 = r4485027 + r4485031;
        double r4485033 = 50.273438;
        double r4485034 = r4485030 * r4485019;
        double r4485035 = r4485034 * r4485019;
        double r4485036 = r4485033 * r4485035;
        double r4485037 = r4485032 + r4485036;
        return r4485037;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4485038, r4485039, r4485040, r4485041, r4485042, r4485043, r4485044, r4485045, r4485046, r4485047, r4485048, r4485049, r4485050, r4485051, r4485052, r4485053, r4485054, r4485055, r4485056, r4485057, r4485058;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485038, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485039, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4485040);
        mpfr_init(r4485041);
        mpfr_init(r4485042);
        mpfr_init(r4485043);
        mpfr_init_set_str(r4485044, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4485045);
        mpfr_init(r4485046);
        mpfr_init(r4485047);
        mpfr_init(r4485048);
        mpfr_init_set_str(r4485049, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r4485050);
        mpfr_init(r4485051);
        mpfr_init(r4485052);
        mpfr_init(r4485053);
        mpfr_init_set_str(r4485054, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4485055);
        mpfr_init(r4485056);
        mpfr_init(r4485057);
        mpfr_init(r4485058);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4485040, x, MPFR_RNDN);
        mpfr_mul(r4485041, r4485040, r4485040, MPFR_RNDN);
        mpfr_mul(r4485042, r4485039, r4485041, MPFR_RNDN);
        mpfr_add(r4485043, r4485038, r4485042, MPFR_RNDN);
        ;
        mpfr_mul(r4485045, r4485041, r4485040, MPFR_RNDN);
        mpfr_mul(r4485046, r4485045, r4485040, MPFR_RNDN);
        mpfr_mul(r4485047, r4485044, r4485046, MPFR_RNDN);
        mpfr_add(r4485048, r4485043, r4485047, MPFR_RNDN);
        ;
        mpfr_mul(r4485050, r4485046, r4485040, MPFR_RNDN);
        mpfr_mul(r4485051, r4485050, r4485040, MPFR_RNDN);
        mpfr_mul(r4485052, r4485049, r4485051, MPFR_RNDN);
        mpfr_add(r4485053, r4485048, r4485052, MPFR_RNDN);
        ;
        mpfr_mul(r4485055, r4485051, r4485040, MPFR_RNDN);
        mpfr_mul(r4485056, r4485055, r4485040, MPFR_RNDN);
        mpfr_mul(r4485057, r4485054, r4485056, MPFR_RNDN);
        mpfr_add(r4485058, r4485053, r4485057, MPFR_RNDN);
        return mpfr_get_d(r4485058, MPFR_RNDN);
}

static mpfr_t r4485059, r4485060, r4485061, r4485062, r4485063, r4485064, r4485065, r4485066, r4485067, r4485068, r4485069, r4485070, r4485071, r4485072, r4485073, r4485074, r4485075, r4485076, r4485077, r4485078, r4485079;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485059, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485060, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4485061);
        mpfr_init(r4485062);
        mpfr_init(r4485063);
        mpfr_init(r4485064);
        mpfr_init_set_str(r4485065, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4485066);
        mpfr_init(r4485067);
        mpfr_init(r4485068);
        mpfr_init(r4485069);
        mpfr_init_set_str(r4485070, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r4485071);
        mpfr_init(r4485072);
        mpfr_init(r4485073);
        mpfr_init(r4485074);
        mpfr_init_set_str(r4485075, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4485076);
        mpfr_init(r4485077);
        mpfr_init(r4485078);
        mpfr_init(r4485079);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4485061, x, MPFR_RNDN);
        mpfr_mul(r4485062, r4485061, r4485061, MPFR_RNDN);
        mpfr_mul(r4485063, r4485060, r4485062, MPFR_RNDN);
        mpfr_add(r4485064, r4485059, r4485063, MPFR_RNDN);
        ;
        mpfr_mul(r4485066, r4485062, r4485061, MPFR_RNDN);
        mpfr_mul(r4485067, r4485066, r4485061, MPFR_RNDN);
        mpfr_mul(r4485068, r4485065, r4485067, MPFR_RNDN);
        mpfr_add(r4485069, r4485064, r4485068, MPFR_RNDN);
        ;
        mpfr_mul(r4485071, r4485067, r4485061, MPFR_RNDN);
        mpfr_mul(r4485072, r4485071, r4485061, MPFR_RNDN);
        mpfr_mul(r4485073, r4485070, r4485072, MPFR_RNDN);
        mpfr_add(r4485074, r4485069, r4485073, MPFR_RNDN);
        ;
        mpfr_mul(r4485076, r4485072, r4485061, MPFR_RNDN);
        mpfr_mul(r4485077, r4485076, r4485061, MPFR_RNDN);
        mpfr_mul(r4485078, r4485075, r4485077, MPFR_RNDN);
        mpfr_add(r4485079, r4485074, r4485078, MPFR_RNDN);
        return mpfr_get_d(r4485079, MPFR_RNDN);
}

static mpfr_t r4485080, r4485081, r4485082, r4485083, r4485084, r4485085, r4485086, r4485087, r4485088, r4485089, r4485090, r4485091, r4485092, r4485093, r4485094, r4485095, r4485096, r4485097, r4485098, r4485099, r4485100;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485080, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485081, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4485082);
        mpfr_init(r4485083);
        mpfr_init(r4485084);
        mpfr_init(r4485085);
        mpfr_init_set_str(r4485086, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4485087);
        mpfr_init(r4485088);
        mpfr_init(r4485089);
        mpfr_init(r4485090);
        mpfr_init_set_str(r4485091, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r4485092);
        mpfr_init(r4485093);
        mpfr_init(r4485094);
        mpfr_init(r4485095);
        mpfr_init_set_str(r4485096, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4485097);
        mpfr_init(r4485098);
        mpfr_init(r4485099);
        mpfr_init(r4485100);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4485082, x, MPFR_RNDN);
        mpfr_mul(r4485083, r4485082, r4485082, MPFR_RNDN);
        mpfr_mul(r4485084, r4485081, r4485083, MPFR_RNDN);
        mpfr_add(r4485085, r4485080, r4485084, MPFR_RNDN);
        ;
        mpfr_mul(r4485087, r4485083, r4485082, MPFR_RNDN);
        mpfr_mul(r4485088, r4485087, r4485082, MPFR_RNDN);
        mpfr_mul(r4485089, r4485086, r4485088, MPFR_RNDN);
        mpfr_add(r4485090, r4485085, r4485089, MPFR_RNDN);
        ;
        mpfr_mul(r4485092, r4485088, r4485082, MPFR_RNDN);
        mpfr_mul(r4485093, r4485092, r4485082, MPFR_RNDN);
        mpfr_mul(r4485094, r4485091, r4485093, MPFR_RNDN);
        mpfr_add(r4485095, r4485090, r4485094, MPFR_RNDN);
        ;
        mpfr_mul(r4485097, r4485093, r4485082, MPFR_RNDN);
        mpfr_mul(r4485098, r4485097, r4485082, MPFR_RNDN);
        mpfr_mul(r4485099, r4485096, r4485098, MPFR_RNDN);
        mpfr_add(r4485100, r4485095, r4485099, MPFR_RNDN);
        return mpfr_get_d(r4485100, MPFR_RNDN);
}

