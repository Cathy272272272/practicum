#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r29570976 = 1.875;
        float r29570977 = x;
        float r29570978 = r29570976 * r29570977;
        float r29570979 = -8.75;
        float r29570980 = r29570977 * r29570977;
        float r29570981 = r29570980 * r29570977;
        float r29570982 = r29570979 * r29570981;
        float r29570983 = r29570978 + r29570982;
        float r29570984 = 7.875;
        float r29570985 = r29570981 * r29570977;
        float r29570986 = r29570985 * r29570977;
        float r29570987 = r29570984 * r29570986;
        float r29570988 = r29570983 + r29570987;
        return r29570988;
}

double f_id(double x) {
        double r29570989 = 1.875;
        double r29570990 = x;
        double r29570991 = r29570989 * r29570990;
        double r29570992 = -8.75;
        double r29570993 = r29570990 * r29570990;
        double r29570994 = r29570993 * r29570990;
        double r29570995 = r29570992 * r29570994;
        double r29570996 = r29570991 + r29570995;
        double r29570997 = 7.875;
        double r29570998 = r29570994 * r29570990;
        double r29570999 = r29570998 * r29570990;
        double r29571000 = r29570997 * r29570999;
        double r29571001 = r29570996 + r29571000;
        return r29571001;
}


double f_of(float x) {
        float r29571002 = 7.875;
        float r29571003 = exp(r29571002);
        float r29571004 = x;
        float r29571005 = 3;
        float r29571006 = pow(r29571004, r29571005);
        float r29571007 = pow(r29571003, r29571006);
        float r29571008 = pow(r29571007, r29571004);
        float r29571009 = pow(r29571008, r29571004);
        float r29571010 = r29571009 * r29571009;
        float r29571011 = -8.75;
        float r29571012 = exp(r29571011);
        float r29571013 = pow(r29571012, r29571006);
        float r29571014 = 1.875;
        float r29571015 = r29571004 * r29571014;
        float r29571016 = exp(r29571015);
        float r29571017 = r29571013 * r29571016;
        float r29571018 = pow(r29571017, r29571005);
        float r29571019 = r29571018 * r29571009;
        float r29571020 = r29571010 * r29571019;
        float r29571021 = cbrt(r29571020);
        float r29571022 = log(r29571021);
        return r29571022;
}

double f_od(double x) {
        double r29571023 = 7.875;
        double r29571024 = exp(r29571023);
        double r29571025 = x;
        double r29571026 = 3;
        double r29571027 = pow(r29571025, r29571026);
        double r29571028 = pow(r29571024, r29571027);
        double r29571029 = pow(r29571028, r29571025);
        double r29571030 = pow(r29571029, r29571025);
        double r29571031 = r29571030 * r29571030;
        double r29571032 = -8.75;
        double r29571033 = exp(r29571032);
        double r29571034 = pow(r29571033, r29571027);
        double r29571035 = 1.875;
        double r29571036 = r29571025 * r29571035;
        double r29571037 = exp(r29571036);
        double r29571038 = r29571034 * r29571037;
        double r29571039 = pow(r29571038, r29571026);
        double r29571040 = r29571039 * r29571030;
        double r29571041 = r29571031 * r29571040;
        double r29571042 = cbrt(r29571041);
        double r29571043 = log(r29571042);
        return r29571043;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29571044, r29571045, r29571046, r29571047, r29571048, r29571049, r29571050, r29571051, r29571052, r29571053, r29571054, r29571055, r29571056;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571044, "1.875", 10, MPFR_RNDN);
        mpfr_init(r29571045);
        mpfr_init(r29571046);
        mpfr_init_set_str(r29571047, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r29571048);
        mpfr_init(r29571049);
        mpfr_init(r29571050);
        mpfr_init(r29571051);
        mpfr_init_set_str(r29571052, "7.875", 10, MPFR_RNDN);
        mpfr_init(r29571053);
        mpfr_init(r29571054);
        mpfr_init(r29571055);
        mpfr_init(r29571056);
}

double f_im(double x) {
        ;
        mpfr_set_d(r29571045, x, MPFR_RNDN);
        mpfr_mul(r29571046, r29571044, r29571045, MPFR_RNDN);
        ;
        mpfr_mul(r29571048, r29571045, r29571045, MPFR_RNDN);
        mpfr_mul(r29571049, r29571048, r29571045, MPFR_RNDN);
        mpfr_mul(r29571050, r29571047, r29571049, MPFR_RNDN);
        mpfr_add(r29571051, r29571046, r29571050, MPFR_RNDN);
        ;
        mpfr_mul(r29571053, r29571049, r29571045, MPFR_RNDN);
        mpfr_mul(r29571054, r29571053, r29571045, MPFR_RNDN);
        mpfr_mul(r29571055, r29571052, r29571054, MPFR_RNDN);
        mpfr_add(r29571056, r29571051, r29571055, MPFR_RNDN);
        return mpfr_get_d(r29571056, MPFR_RNDN);
}

static mpfr_t r29571057, r29571058, r29571059, r29571060, r29571061, r29571062, r29571063, r29571064, r29571065, r29571066, r29571067, r29571068, r29571069, r29571070, r29571071, r29571072, r29571073, r29571074, r29571075, r29571076, r29571077;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571057, "7.875", 10, MPFR_RNDN);
        mpfr_init(r29571058);
        mpfr_init(r29571059);
        mpfr_init_set_str(r29571060, "3", 10, MPFR_RNDN);
        mpfr_init(r29571061);
        mpfr_init(r29571062);
        mpfr_init(r29571063);
        mpfr_init(r29571064);
        mpfr_init(r29571065);
        mpfr_init_set_str(r29571066, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r29571067);
        mpfr_init(r29571068);
        mpfr_init_set_str(r29571069, "1.875", 10, MPFR_RNDN);
        mpfr_init(r29571070);
        mpfr_init(r29571071);
        mpfr_init(r29571072);
        mpfr_init(r29571073);
        mpfr_init(r29571074);
        mpfr_init(r29571075);
        mpfr_init(r29571076);
        mpfr_init(r29571077);
}

double f_fm(double x) {
        ;
        mpfr_exp(r29571058, r29571057, MPFR_RNDN);
        mpfr_set_d(r29571059, x, MPFR_RNDN);
        ;
        mpfr_pow(r29571061, r29571059, r29571060, MPFR_RNDN);
        mpfr_pow(r29571062, r29571058, r29571061, MPFR_RNDN);
        mpfr_pow(r29571063, r29571062, r29571059, MPFR_RNDN);
        mpfr_pow(r29571064, r29571063, r29571059, MPFR_RNDN);
        mpfr_mul(r29571065, r29571064, r29571064, MPFR_RNDN);
        ;
        mpfr_exp(r29571067, r29571066, MPFR_RNDN);
        mpfr_pow(r29571068, r29571067, r29571061, MPFR_RNDN);
        ;
        mpfr_mul(r29571070, r29571059, r29571069, MPFR_RNDN);
        mpfr_exp(r29571071, r29571070, MPFR_RNDN);
        mpfr_mul(r29571072, r29571068, r29571071, MPFR_RNDN);
        mpfr_pow(r29571073, r29571072, r29571060, MPFR_RNDN);
        mpfr_mul(r29571074, r29571073, r29571064, MPFR_RNDN);
        mpfr_mul(r29571075, r29571065, r29571074, MPFR_RNDN);
        mpfr_cbrt(r29571076, r29571075, MPFR_RNDN);
        mpfr_log(r29571077, r29571076, MPFR_RNDN);
        return mpfr_get_d(r29571077, MPFR_RNDN);
}

static mpfr_t r29571078, r29571079, r29571080, r29571081, r29571082, r29571083, r29571084, r29571085, r29571086, r29571087, r29571088, r29571089, r29571090, r29571091, r29571092, r29571093, r29571094, r29571095, r29571096, r29571097, r29571098;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571078, "7.875", 10, MPFR_RNDN);
        mpfr_init(r29571079);
        mpfr_init(r29571080);
        mpfr_init_set_str(r29571081, "3", 10, MPFR_RNDN);
        mpfr_init(r29571082);
        mpfr_init(r29571083);
        mpfr_init(r29571084);
        mpfr_init(r29571085);
        mpfr_init(r29571086);
        mpfr_init_set_str(r29571087, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r29571088);
        mpfr_init(r29571089);
        mpfr_init_set_str(r29571090, "1.875", 10, MPFR_RNDN);
        mpfr_init(r29571091);
        mpfr_init(r29571092);
        mpfr_init(r29571093);
        mpfr_init(r29571094);
        mpfr_init(r29571095);
        mpfr_init(r29571096);
        mpfr_init(r29571097);
        mpfr_init(r29571098);
}

double f_dm(double x) {
        ;
        mpfr_exp(r29571079, r29571078, MPFR_RNDN);
        mpfr_set_d(r29571080, x, MPFR_RNDN);
        ;
        mpfr_pow(r29571082, r29571080, r29571081, MPFR_RNDN);
        mpfr_pow(r29571083, r29571079, r29571082, MPFR_RNDN);
        mpfr_pow(r29571084, r29571083, r29571080, MPFR_RNDN);
        mpfr_pow(r29571085, r29571084, r29571080, MPFR_RNDN);
        mpfr_mul(r29571086, r29571085, r29571085, MPFR_RNDN);
        ;
        mpfr_exp(r29571088, r29571087, MPFR_RNDN);
        mpfr_pow(r29571089, r29571088, r29571082, MPFR_RNDN);
        ;
        mpfr_mul(r29571091, r29571080, r29571090, MPFR_RNDN);
        mpfr_exp(r29571092, r29571091, MPFR_RNDN);
        mpfr_mul(r29571093, r29571089, r29571092, MPFR_RNDN);
        mpfr_pow(r29571094, r29571093, r29571081, MPFR_RNDN);
        mpfr_mul(r29571095, r29571094, r29571085, MPFR_RNDN);
        mpfr_mul(r29571096, r29571086, r29571095, MPFR_RNDN);
        mpfr_cbrt(r29571097, r29571096, MPFR_RNDN);
        mpfr_log(r29571098, r29571097, MPFR_RNDN);
        return mpfr_get_d(r29571098, MPFR_RNDN);
}

