#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r46348995 = -120.0;
        float r46348996 = 720.0;
        float r46348997 = x;
        float r46348998 = r46348997 * r46348997;
        float r46348999 = r46348996 * r46348998;
        float r46349000 = r46348995 + r46348999;
        float r46349001 = -480.0;
        float r46349002 = r46348998 * r46348997;
        float r46349003 = r46349002 * r46348997;
        float r46349004 = r46349001 * r46349003;
        float r46349005 = r46349000 + r46349004;
        float r46349006 = 64.0;
        float r46349007 = r46349003 * r46348997;
        float r46349008 = r46349007 * r46348997;
        float r46349009 = r46349006 * r46349008;
        float r46349010 = r46349005 + r46349009;
        return r46349010;
}

double f_id(double x) {
        double r46349011 = -120.0;
        double r46349012 = 720.0;
        double r46349013 = x;
        double r46349014 = r46349013 * r46349013;
        double r46349015 = r46349012 * r46349014;
        double r46349016 = r46349011 + r46349015;
        double r46349017 = -480.0;
        double r46349018 = r46349014 * r46349013;
        double r46349019 = r46349018 * r46349013;
        double r46349020 = r46349017 * r46349019;
        double r46349021 = r46349016 + r46349020;
        double r46349022 = 64.0;
        double r46349023 = r46349019 * r46349013;
        double r46349024 = r46349023 * r46349013;
        double r46349025 = r46349022 * r46349024;
        double r46349026 = r46349021 + r46349025;
        return r46349026;
}


double f_of(float x) {
        float r46349027 = -120.0;
        float r46349028 = exp(r46349027);
        float r46349029 = 64.0;
        float r46349030 = exp(r46349029);
        float r46349031 = x;
        float r46349032 = r46349031 * r46349031;
        float r46349033 = 3;
        float r46349034 = pow(r46349032, r46349033);
        float r46349035 = pow(r46349030, r46349034);
        float r46349036 = r46349028 * r46349035;
        float r46349037 = exp(r46349031);
        float r46349038 = pow(r46349037, r46349031);
        float r46349039 = -480.0;
        float r46349040 = r46349031 * r46349039;
        float r46349041 = r46349031 * r46349040;
        float r46349042 = 720.0;
        float r46349043 = r46349041 + r46349042;
        float r46349044 = pow(r46349038, r46349043);
        float r46349045 = r46349036 * r46349044;
        float r46349046 = log(r46349045);
        return r46349046;
}

double f_od(double x) {
        double r46349047 = -120.0;
        double r46349048 = exp(r46349047);
        double r46349049 = 64.0;
        double r46349050 = exp(r46349049);
        double r46349051 = x;
        double r46349052 = r46349051 * r46349051;
        double r46349053 = 3;
        double r46349054 = pow(r46349052, r46349053);
        double r46349055 = pow(r46349050, r46349054);
        double r46349056 = r46349048 * r46349055;
        double r46349057 = exp(r46349051);
        double r46349058 = pow(r46349057, r46349051);
        double r46349059 = -480.0;
        double r46349060 = r46349051 * r46349059;
        double r46349061 = r46349051 * r46349060;
        double r46349062 = 720.0;
        double r46349063 = r46349061 + r46349062;
        double r46349064 = pow(r46349058, r46349063);
        double r46349065 = r46349056 * r46349064;
        double r46349066 = log(r46349065);
        return r46349066;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46349067, r46349068, r46349069, r46349070, r46349071, r46349072, r46349073, r46349074, r46349075, r46349076, r46349077, r46349078, r46349079, r46349080, r46349081, r46349082;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349067, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349068, "720.0", 10, MPFR_RNDN);
        mpfr_init(r46349069);
        mpfr_init(r46349070);
        mpfr_init(r46349071);
        mpfr_init(r46349072);
        mpfr_init_set_str(r46349073, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r46349074);
        mpfr_init(r46349075);
        mpfr_init(r46349076);
        mpfr_init(r46349077);
        mpfr_init_set_str(r46349078, "64.0", 10, MPFR_RNDN);
        mpfr_init(r46349079);
        mpfr_init(r46349080);
        mpfr_init(r46349081);
        mpfr_init(r46349082);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r46349069, x, MPFR_RNDN);
        mpfr_mul(r46349070, r46349069, r46349069, MPFR_RNDN);
        mpfr_mul(r46349071, r46349068, r46349070, MPFR_RNDN);
        mpfr_add(r46349072, r46349067, r46349071, MPFR_RNDN);
        ;
        mpfr_mul(r46349074, r46349070, r46349069, MPFR_RNDN);
        mpfr_mul(r46349075, r46349074, r46349069, MPFR_RNDN);
        mpfr_mul(r46349076, r46349073, r46349075, MPFR_RNDN);
        mpfr_add(r46349077, r46349072, r46349076, MPFR_RNDN);
        ;
        mpfr_mul(r46349079, r46349075, r46349069, MPFR_RNDN);
        mpfr_mul(r46349080, r46349079, r46349069, MPFR_RNDN);
        mpfr_mul(r46349081, r46349078, r46349080, MPFR_RNDN);
        mpfr_add(r46349082, r46349077, r46349081, MPFR_RNDN);
        return mpfr_get_d(r46349082, MPFR_RNDN);
}

static mpfr_t r46349083, r46349084, r46349085, r46349086, r46349087, r46349088, r46349089, r46349090, r46349091, r46349092, r46349093, r46349094, r46349095, r46349096, r46349097, r46349098, r46349099, r46349100, r46349101, r46349102;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349083, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r46349084);
        mpfr_init_set_str(r46349085, "64.0", 10, MPFR_RNDN);
        mpfr_init(r46349086);
        mpfr_init(r46349087);
        mpfr_init(r46349088);
        mpfr_init_set_str(r46349089, "3", 10, MPFR_RNDN);
        mpfr_init(r46349090);
        mpfr_init(r46349091);
        mpfr_init(r46349092);
        mpfr_init(r46349093);
        mpfr_init(r46349094);
        mpfr_init_set_str(r46349095, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r46349096);
        mpfr_init(r46349097);
        mpfr_init_set_str(r46349098, "720.0", 10, MPFR_RNDN);
        mpfr_init(r46349099);
        mpfr_init(r46349100);
        mpfr_init(r46349101);
        mpfr_init(r46349102);
}

double f_fm(double x) {
        ;
        mpfr_exp(r46349084, r46349083, MPFR_RNDN);
        ;
        mpfr_exp(r46349086, r46349085, MPFR_RNDN);
        mpfr_set_d(r46349087, x, MPFR_RNDN);
        mpfr_mul(r46349088, r46349087, r46349087, MPFR_RNDN);
        ;
        mpfr_pow(r46349090, r46349088, r46349089, MPFR_RNDN);
        mpfr_pow(r46349091, r46349086, r46349090, MPFR_RNDN);
        mpfr_mul(r46349092, r46349084, r46349091, MPFR_RNDN);
        mpfr_exp(r46349093, r46349087, MPFR_RNDN);
        mpfr_pow(r46349094, r46349093, r46349087, MPFR_RNDN);
        ;
        mpfr_mul(r46349096, r46349087, r46349095, MPFR_RNDN);
        mpfr_mul(r46349097, r46349087, r46349096, MPFR_RNDN);
        ;
        mpfr_add(r46349099, r46349097, r46349098, MPFR_RNDN);
        mpfr_pow(r46349100, r46349094, r46349099, MPFR_RNDN);
        mpfr_mul(r46349101, r46349092, r46349100, MPFR_RNDN);
        mpfr_log(r46349102, r46349101, MPFR_RNDN);
        return mpfr_get_d(r46349102, MPFR_RNDN);
}

static mpfr_t r46349103, r46349104, r46349105, r46349106, r46349107, r46349108, r46349109, r46349110, r46349111, r46349112, r46349113, r46349114, r46349115, r46349116, r46349117, r46349118, r46349119, r46349120, r46349121, r46349122;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349103, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r46349104);
        mpfr_init_set_str(r46349105, "64.0", 10, MPFR_RNDN);
        mpfr_init(r46349106);
        mpfr_init(r46349107);
        mpfr_init(r46349108);
        mpfr_init_set_str(r46349109, "3", 10, MPFR_RNDN);
        mpfr_init(r46349110);
        mpfr_init(r46349111);
        mpfr_init(r46349112);
        mpfr_init(r46349113);
        mpfr_init(r46349114);
        mpfr_init_set_str(r46349115, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r46349116);
        mpfr_init(r46349117);
        mpfr_init_set_str(r46349118, "720.0", 10, MPFR_RNDN);
        mpfr_init(r46349119);
        mpfr_init(r46349120);
        mpfr_init(r46349121);
        mpfr_init(r46349122);
}

double f_dm(double x) {
        ;
        mpfr_exp(r46349104, r46349103, MPFR_RNDN);
        ;
        mpfr_exp(r46349106, r46349105, MPFR_RNDN);
        mpfr_set_d(r46349107, x, MPFR_RNDN);
        mpfr_mul(r46349108, r46349107, r46349107, MPFR_RNDN);
        ;
        mpfr_pow(r46349110, r46349108, r46349109, MPFR_RNDN);
        mpfr_pow(r46349111, r46349106, r46349110, MPFR_RNDN);
        mpfr_mul(r46349112, r46349104, r46349111, MPFR_RNDN);
        mpfr_exp(r46349113, r46349107, MPFR_RNDN);
        mpfr_pow(r46349114, r46349113, r46349107, MPFR_RNDN);
        ;
        mpfr_mul(r46349116, r46349107, r46349115, MPFR_RNDN);
        mpfr_mul(r46349117, r46349107, r46349116, MPFR_RNDN);
        ;
        mpfr_add(r46349119, r46349117, r46349118, MPFR_RNDN);
        mpfr_pow(r46349120, r46349114, r46349119, MPFR_RNDN);
        mpfr_mul(r46349121, r46349112, r46349120, MPFR_RNDN);
        mpfr_log(r46349122, r46349121, MPFR_RNDN);
        return mpfr_get_d(r46349122, MPFR_RNDN);
}

