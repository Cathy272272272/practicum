#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r5393971 = -2.1875;
        float r5393972 = x;
        float r5393973 = r5393971 * r5393972;
        float r5393974 = 19.6875;
        float r5393975 = r5393972 * r5393972;
        float r5393976 = r5393975 * r5393972;
        float r5393977 = r5393974 * r5393976;
        float r5393978 = r5393973 + r5393977;
        float r5393979 = -43.3125;
        float r5393980 = r5393976 * r5393972;
        float r5393981 = r5393980 * r5393972;
        float r5393982 = r5393979 * r5393981;
        float r5393983 = r5393978 + r5393982;
        float r5393984 = 26.8125;
        float r5393985 = r5393981 * r5393972;
        float r5393986 = r5393985 * r5393972;
        float r5393987 = r5393984 * r5393986;
        float r5393988 = r5393983 + r5393987;
        return r5393988;
}

double f_id(double x) {
        double r5393989 = -2.1875;
        double r5393990 = x;
        double r5393991 = r5393989 * r5393990;
        double r5393992 = 19.6875;
        double r5393993 = r5393990 * r5393990;
        double r5393994 = r5393993 * r5393990;
        double r5393995 = r5393992 * r5393994;
        double r5393996 = r5393991 + r5393995;
        double r5393997 = -43.3125;
        double r5393998 = r5393994 * r5393990;
        double r5393999 = r5393998 * r5393990;
        double r5394000 = r5393997 * r5393999;
        double r5394001 = r5393996 + r5394000;
        double r5394002 = 26.8125;
        double r5394003 = r5393999 * r5393990;
        double r5394004 = r5394003 * r5393990;
        double r5394005 = r5394002 * r5394004;
        double r5394006 = r5394001 + r5394005;
        return r5394006;
}


double f_of(float x) {
        float r5394007 = x;
        float r5394008 = 2;
        float r5394009 = r5394008 + r5394008;
        float r5394010 = pow(r5394007, r5394009);
        float r5394011 = r5394007 * r5394007;
        float r5394012 = 26.8125;
        float r5394013 = r5394012 * r5394007;
        float r5394014 = r5394011 * r5394013;
        float r5394015 = -43.3125;
        float r5394016 = r5394007 * r5394015;
        float r5394017 = r5394014 + r5394016;
        float r5394018 = r5394010 * r5394017;
        float r5394019 = 19.6875;
        float r5394020 = r5394019 * r5394007;
        float r5394021 = r5394020 * r5394007;
        float r5394022 = -2.1875;
        float r5394023 = r5394021 + r5394022;
        float r5394024 = r5394007 * r5394023;
        float r5394025 = r5394018 + r5394024;
        return r5394025;
}

double f_od(double x) {
        double r5394026 = x;
        double r5394027 = 2;
        double r5394028 = r5394027 + r5394027;
        double r5394029 = pow(r5394026, r5394028);
        double r5394030 = r5394026 * r5394026;
        double r5394031 = 26.8125;
        double r5394032 = r5394031 * r5394026;
        double r5394033 = r5394030 * r5394032;
        double r5394034 = -43.3125;
        double r5394035 = r5394026 * r5394034;
        double r5394036 = r5394033 + r5394035;
        double r5394037 = r5394029 * r5394036;
        double r5394038 = 19.6875;
        double r5394039 = r5394038 * r5394026;
        double r5394040 = r5394039 * r5394026;
        double r5394041 = -2.1875;
        double r5394042 = r5394040 + r5394041;
        double r5394043 = r5394026 * r5394042;
        double r5394044 = r5394037 + r5394043;
        return r5394044;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5394045, r5394046, r5394047, r5394048, r5394049, r5394050, r5394051, r5394052, r5394053, r5394054, r5394055, r5394056, r5394057, r5394058, r5394059, r5394060, r5394061, r5394062;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5394045, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r5394046);
        mpfr_init(r5394047);
        mpfr_init_set_str(r5394048, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r5394049);
        mpfr_init(r5394050);
        mpfr_init(r5394051);
        mpfr_init(r5394052);
        mpfr_init_set_str(r5394053, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r5394054);
        mpfr_init(r5394055);
        mpfr_init(r5394056);
        mpfr_init(r5394057);
        mpfr_init_set_str(r5394058, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r5394059);
        mpfr_init(r5394060);
        mpfr_init(r5394061);
        mpfr_init(r5394062);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5394046, x, MPFR_RNDN);
        mpfr_mul(r5394047, r5394045, r5394046, MPFR_RNDN);
        ;
        mpfr_mul(r5394049, r5394046, r5394046, MPFR_RNDN);
        mpfr_mul(r5394050, r5394049, r5394046, MPFR_RNDN);
        mpfr_mul(r5394051, r5394048, r5394050, MPFR_RNDN);
        mpfr_add(r5394052, r5394047, r5394051, MPFR_RNDN);
        ;
        mpfr_mul(r5394054, r5394050, r5394046, MPFR_RNDN);
        mpfr_mul(r5394055, r5394054, r5394046, MPFR_RNDN);
        mpfr_mul(r5394056, r5394053, r5394055, MPFR_RNDN);
        mpfr_add(r5394057, r5394052, r5394056, MPFR_RNDN);
        ;
        mpfr_mul(r5394059, r5394055, r5394046, MPFR_RNDN);
        mpfr_mul(r5394060, r5394059, r5394046, MPFR_RNDN);
        mpfr_mul(r5394061, r5394058, r5394060, MPFR_RNDN);
        mpfr_add(r5394062, r5394057, r5394061, MPFR_RNDN);
        return mpfr_get_d(r5394062, MPFR_RNDN);
}

static mpfr_t r5394063, r5394064, r5394065, r5394066, r5394067, r5394068, r5394069, r5394070, r5394071, r5394072, r5394073, r5394074, r5394075, r5394076, r5394077, r5394078, r5394079, r5394080, r5394081;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r5394063);
        mpfr_init_set_str(r5394064, "2", 10, MPFR_RNDN);
        mpfr_init(r5394065);
        mpfr_init(r5394066);
        mpfr_init(r5394067);
        mpfr_init_set_str(r5394068, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r5394069);
        mpfr_init(r5394070);
        mpfr_init_set_str(r5394071, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r5394072);
        mpfr_init(r5394073);
        mpfr_init(r5394074);
        mpfr_init_set_str(r5394075, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r5394076);
        mpfr_init(r5394077);
        mpfr_init_set_str(r5394078, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r5394079);
        mpfr_init(r5394080);
        mpfr_init(r5394081);
}

double f_fm(double x) {
        mpfr_set_d(r5394063, x, MPFR_RNDN);
        ;
        mpfr_add(r5394065, r5394064, r5394064, MPFR_RNDN);
        mpfr_pow(r5394066, r5394063, r5394065, MPFR_RNDN);
        mpfr_mul(r5394067, r5394063, r5394063, MPFR_RNDN);
        ;
        mpfr_mul(r5394069, r5394068, r5394063, MPFR_RNDN);
        mpfr_mul(r5394070, r5394067, r5394069, MPFR_RNDN);
        ;
        mpfr_mul(r5394072, r5394063, r5394071, MPFR_RNDN);
        mpfr_add(r5394073, r5394070, r5394072, MPFR_RNDN);
        mpfr_mul(r5394074, r5394066, r5394073, MPFR_RNDN);
        ;
        mpfr_mul(r5394076, r5394075, r5394063, MPFR_RNDN);
        mpfr_mul(r5394077, r5394076, r5394063, MPFR_RNDN);
        ;
        mpfr_add(r5394079, r5394077, r5394078, MPFR_RNDN);
        mpfr_mul(r5394080, r5394063, r5394079, MPFR_RNDN);
        mpfr_add(r5394081, r5394074, r5394080, MPFR_RNDN);
        return mpfr_get_d(r5394081, MPFR_RNDN);
}

static mpfr_t r5394082, r5394083, r5394084, r5394085, r5394086, r5394087, r5394088, r5394089, r5394090, r5394091, r5394092, r5394093, r5394094, r5394095, r5394096, r5394097, r5394098, r5394099, r5394100;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r5394082);
        mpfr_init_set_str(r5394083, "2", 10, MPFR_RNDN);
        mpfr_init(r5394084);
        mpfr_init(r5394085);
        mpfr_init(r5394086);
        mpfr_init_set_str(r5394087, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r5394088);
        mpfr_init(r5394089);
        mpfr_init_set_str(r5394090, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r5394091);
        mpfr_init(r5394092);
        mpfr_init(r5394093);
        mpfr_init_set_str(r5394094, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r5394095);
        mpfr_init(r5394096);
        mpfr_init_set_str(r5394097, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r5394098);
        mpfr_init(r5394099);
        mpfr_init(r5394100);
}

double f_dm(double x) {
        mpfr_set_d(r5394082, x, MPFR_RNDN);
        ;
        mpfr_add(r5394084, r5394083, r5394083, MPFR_RNDN);
        mpfr_pow(r5394085, r5394082, r5394084, MPFR_RNDN);
        mpfr_mul(r5394086, r5394082, r5394082, MPFR_RNDN);
        ;
        mpfr_mul(r5394088, r5394087, r5394082, MPFR_RNDN);
        mpfr_mul(r5394089, r5394086, r5394088, MPFR_RNDN);
        ;
        mpfr_mul(r5394091, r5394082, r5394090, MPFR_RNDN);
        mpfr_add(r5394092, r5394089, r5394091, MPFR_RNDN);
        mpfr_mul(r5394093, r5394085, r5394092, MPFR_RNDN);
        ;
        mpfr_mul(r5394095, r5394094, r5394082, MPFR_RNDN);
        mpfr_mul(r5394096, r5394095, r5394082, MPFR_RNDN);
        ;
        mpfr_add(r5394098, r5394096, r5394097, MPFR_RNDN);
        mpfr_mul(r5394099, r5394082, r5394098, MPFR_RNDN);
        mpfr_add(r5394100, r5394093, r5394099, MPFR_RNDN);
        return mpfr_get_d(r5394100, MPFR_RNDN);
}

