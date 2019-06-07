#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r11625934 = 1680.0;
        float r11625935 = -13440.0;
        float r11625936 = x;
        float r11625937 = r11625936 * r11625936;
        float r11625938 = r11625935 * r11625937;
        float r11625939 = r11625934 + r11625938;
        float r11625940 = 13440.0;
        float r11625941 = r11625937 * r11625936;
        float r11625942 = r11625941 * r11625936;
        float r11625943 = r11625940 * r11625942;
        float r11625944 = r11625939 + r11625943;
        float r11625945 = -3584.0;
        float r11625946 = r11625942 * r11625936;
        float r11625947 = r11625946 * r11625936;
        float r11625948 = r11625945 * r11625947;
        float r11625949 = r11625944 + r11625948;
        float r11625950 = 256.0;
        float r11625951 = r11625947 * r11625936;
        float r11625952 = r11625951 * r11625936;
        float r11625953 = r11625950 * r11625952;
        float r11625954 = r11625949 + r11625953;
        return r11625954;
}

double f_id(double x) {
        double r11625955 = 1680.0;
        double r11625956 = -13440.0;
        double r11625957 = x;
        double r11625958 = r11625957 * r11625957;
        double r11625959 = r11625956 * r11625958;
        double r11625960 = r11625955 + r11625959;
        double r11625961 = 13440.0;
        double r11625962 = r11625958 * r11625957;
        double r11625963 = r11625962 * r11625957;
        double r11625964 = r11625961 * r11625963;
        double r11625965 = r11625960 + r11625964;
        double r11625966 = -3584.0;
        double r11625967 = r11625963 * r11625957;
        double r11625968 = r11625967 * r11625957;
        double r11625969 = r11625966 * r11625968;
        double r11625970 = r11625965 + r11625969;
        double r11625971 = 256.0;
        double r11625972 = r11625968 * r11625957;
        double r11625973 = r11625972 * r11625957;
        double r11625974 = r11625971 * r11625973;
        double r11625975 = r11625970 + r11625974;
        return r11625975;
}


double f_of(float x) {
        float r11625976 = x;
        float r11625977 = 13440.0;
        float r11625978 = r11625976 * r11625977;
        float r11625979 = 3;
        float r11625980 = pow(r11625976, r11625979);
        float r11625981 = r11625978 * r11625980;
        float r11625982 = -13440.0;
        float r11625983 = r11625976 * r11625982;
        float r11625984 = r11625976 * r11625983;
        float r11625985 = r11625981 + r11625984;
        float r11625986 = 1680.0;
        float r11625987 = r11625985 + r11625986;
        float r11625988 = 256.0;
        float r11625989 = r11625988 * r11625976;
        float r11625990 = r11625976 * r11625989;
        float r11625991 = -3584.0;
        float r11625992 = r11625990 + r11625991;
        float r11625993 = r11625992 * r11625992;
        float r11625994 = pow(r11625980, r11625979);
        float r11625995 = r11625994 * r11625994;
        float r11625996 = r11625992 * r11625995;
        float r11625997 = r11625993 * r11625996;
        float r11625998 = cbrt(r11625997);
        float r11625999 = r11625987 + r11625998;
        return r11625999;
}

double f_od(double x) {
        double r11626000 = x;
        double r11626001 = 13440.0;
        double r11626002 = r11626000 * r11626001;
        double r11626003 = 3;
        double r11626004 = pow(r11626000, r11626003);
        double r11626005 = r11626002 * r11626004;
        double r11626006 = -13440.0;
        double r11626007 = r11626000 * r11626006;
        double r11626008 = r11626000 * r11626007;
        double r11626009 = r11626005 + r11626008;
        double r11626010 = 1680.0;
        double r11626011 = r11626009 + r11626010;
        double r11626012 = 256.0;
        double r11626013 = r11626012 * r11626000;
        double r11626014 = r11626000 * r11626013;
        double r11626015 = -3584.0;
        double r11626016 = r11626014 + r11626015;
        double r11626017 = r11626016 * r11626016;
        double r11626018 = pow(r11626004, r11626003);
        double r11626019 = r11626018 * r11626018;
        double r11626020 = r11626016 * r11626019;
        double r11626021 = r11626017 * r11626020;
        double r11626022 = cbrt(r11626021);
        double r11626023 = r11626011 + r11626022;
        return r11626023;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11626024, r11626025, r11626026, r11626027, r11626028, r11626029, r11626030, r11626031, r11626032, r11626033, r11626034, r11626035, r11626036, r11626037, r11626038, r11626039, r11626040, r11626041, r11626042, r11626043, r11626044;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626024, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626025, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r11626026);
        mpfr_init(r11626027);
        mpfr_init(r11626028);
        mpfr_init(r11626029);
        mpfr_init_set_str(r11626030, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r11626031);
        mpfr_init(r11626032);
        mpfr_init(r11626033);
        mpfr_init(r11626034);
        mpfr_init_set_str(r11626035, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r11626036);
        mpfr_init(r11626037);
        mpfr_init(r11626038);
        mpfr_init(r11626039);
        mpfr_init_set_str(r11626040, "256.0", 10, MPFR_RNDN);
        mpfr_init(r11626041);
        mpfr_init(r11626042);
        mpfr_init(r11626043);
        mpfr_init(r11626044);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11626026, x, MPFR_RNDN);
        mpfr_mul(r11626027, r11626026, r11626026, MPFR_RNDN);
        mpfr_mul(r11626028, r11626025, r11626027, MPFR_RNDN);
        mpfr_add(r11626029, r11626024, r11626028, MPFR_RNDN);
        ;
        mpfr_mul(r11626031, r11626027, r11626026, MPFR_RNDN);
        mpfr_mul(r11626032, r11626031, r11626026, MPFR_RNDN);
        mpfr_mul(r11626033, r11626030, r11626032, MPFR_RNDN);
        mpfr_add(r11626034, r11626029, r11626033, MPFR_RNDN);
        ;
        mpfr_mul(r11626036, r11626032, r11626026, MPFR_RNDN);
        mpfr_mul(r11626037, r11626036, r11626026, MPFR_RNDN);
        mpfr_mul(r11626038, r11626035, r11626037, MPFR_RNDN);
        mpfr_add(r11626039, r11626034, r11626038, MPFR_RNDN);
        ;
        mpfr_mul(r11626041, r11626037, r11626026, MPFR_RNDN);
        mpfr_mul(r11626042, r11626041, r11626026, MPFR_RNDN);
        mpfr_mul(r11626043, r11626040, r11626042, MPFR_RNDN);
        mpfr_add(r11626044, r11626039, r11626043, MPFR_RNDN);
        return mpfr_get_d(r11626044, MPFR_RNDN);
}

static mpfr_t r11626045, r11626046, r11626047, r11626048, r11626049, r11626050, r11626051, r11626052, r11626053, r11626054, r11626055, r11626056, r11626057, r11626058, r11626059, r11626060, r11626061, r11626062, r11626063, r11626064, r11626065, r11626066, r11626067, r11626068;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11626045);
        mpfr_init_set_str(r11626046, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r11626047);
        mpfr_init_set_str(r11626048, "3", 10, MPFR_RNDN);
        mpfr_init(r11626049);
        mpfr_init(r11626050);
        mpfr_init_set_str(r11626051, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r11626052);
        mpfr_init(r11626053);
        mpfr_init(r11626054);
        mpfr_init_set_str(r11626055, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r11626056);
        mpfr_init_set_str(r11626057, "256.0", 10, MPFR_RNDN);
        mpfr_init(r11626058);
        mpfr_init(r11626059);
        mpfr_init_set_str(r11626060, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r11626061);
        mpfr_init(r11626062);
        mpfr_init(r11626063);
        mpfr_init(r11626064);
        mpfr_init(r11626065);
        mpfr_init(r11626066);
        mpfr_init(r11626067);
        mpfr_init(r11626068);
}

double f_fm(double x) {
        mpfr_set_d(r11626045, x, MPFR_RNDN);
        ;
        mpfr_mul(r11626047, r11626045, r11626046, MPFR_RNDN);
        ;
        mpfr_pow(r11626049, r11626045, r11626048, MPFR_RNDN);
        mpfr_mul(r11626050, r11626047, r11626049, MPFR_RNDN);
        ;
        mpfr_mul(r11626052, r11626045, r11626051, MPFR_RNDN);
        mpfr_mul(r11626053, r11626045, r11626052, MPFR_RNDN);
        mpfr_add(r11626054, r11626050, r11626053, MPFR_RNDN);
        ;
        mpfr_add(r11626056, r11626054, r11626055, MPFR_RNDN);
        ;
        mpfr_mul(r11626058, r11626057, r11626045, MPFR_RNDN);
        mpfr_mul(r11626059, r11626045, r11626058, MPFR_RNDN);
        ;
        mpfr_add(r11626061, r11626059, r11626060, MPFR_RNDN);
        mpfr_mul(r11626062, r11626061, r11626061, MPFR_RNDN);
        mpfr_pow(r11626063, r11626049, r11626048, MPFR_RNDN);
        mpfr_mul(r11626064, r11626063, r11626063, MPFR_RNDN);
        mpfr_mul(r11626065, r11626061, r11626064, MPFR_RNDN);
        mpfr_mul(r11626066, r11626062, r11626065, MPFR_RNDN);
        mpfr_cbrt(r11626067, r11626066, MPFR_RNDN);
        mpfr_add(r11626068, r11626056, r11626067, MPFR_RNDN);
        return mpfr_get_d(r11626068, MPFR_RNDN);
}

static mpfr_t r11626069, r11626070, r11626071, r11626072, r11626073, r11626074, r11626075, r11626076, r11626077, r11626078, r11626079, r11626080, r11626081, r11626082, r11626083, r11626084, r11626085, r11626086, r11626087, r11626088, r11626089, r11626090, r11626091, r11626092;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11626069);
        mpfr_init_set_str(r11626070, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r11626071);
        mpfr_init_set_str(r11626072, "3", 10, MPFR_RNDN);
        mpfr_init(r11626073);
        mpfr_init(r11626074);
        mpfr_init_set_str(r11626075, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r11626076);
        mpfr_init(r11626077);
        mpfr_init(r11626078);
        mpfr_init_set_str(r11626079, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r11626080);
        mpfr_init_set_str(r11626081, "256.0", 10, MPFR_RNDN);
        mpfr_init(r11626082);
        mpfr_init(r11626083);
        mpfr_init_set_str(r11626084, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r11626085);
        mpfr_init(r11626086);
        mpfr_init(r11626087);
        mpfr_init(r11626088);
        mpfr_init(r11626089);
        mpfr_init(r11626090);
        mpfr_init(r11626091);
        mpfr_init(r11626092);
}

double f_dm(double x) {
        mpfr_set_d(r11626069, x, MPFR_RNDN);
        ;
        mpfr_mul(r11626071, r11626069, r11626070, MPFR_RNDN);
        ;
        mpfr_pow(r11626073, r11626069, r11626072, MPFR_RNDN);
        mpfr_mul(r11626074, r11626071, r11626073, MPFR_RNDN);
        ;
        mpfr_mul(r11626076, r11626069, r11626075, MPFR_RNDN);
        mpfr_mul(r11626077, r11626069, r11626076, MPFR_RNDN);
        mpfr_add(r11626078, r11626074, r11626077, MPFR_RNDN);
        ;
        mpfr_add(r11626080, r11626078, r11626079, MPFR_RNDN);
        ;
        mpfr_mul(r11626082, r11626081, r11626069, MPFR_RNDN);
        mpfr_mul(r11626083, r11626069, r11626082, MPFR_RNDN);
        ;
        mpfr_add(r11626085, r11626083, r11626084, MPFR_RNDN);
        mpfr_mul(r11626086, r11626085, r11626085, MPFR_RNDN);
        mpfr_pow(r11626087, r11626073, r11626072, MPFR_RNDN);
        mpfr_mul(r11626088, r11626087, r11626087, MPFR_RNDN);
        mpfr_mul(r11626089, r11626085, r11626088, MPFR_RNDN);
        mpfr_mul(r11626090, r11626086, r11626089, MPFR_RNDN);
        mpfr_cbrt(r11626091, r11626090, MPFR_RNDN);
        mpfr_add(r11626092, r11626080, r11626091, MPFR_RNDN);
        return mpfr_get_d(r11626092, MPFR_RNDN);
}

