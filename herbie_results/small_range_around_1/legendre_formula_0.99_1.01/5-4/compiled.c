#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r49139979 = 0.375;
        float r49139980 = -3.75;
        float r49139981 = x;
        float r49139982 = r49139981 * r49139981;
        float r49139983 = r49139980 * r49139982;
        float r49139984 = r49139979 + r49139983;
        float r49139985 = 4.375;
        float r49139986 = r49139982 * r49139981;
        float r49139987 = r49139986 * r49139981;
        float r49139988 = r49139985 * r49139987;
        float r49139989 = r49139984 + r49139988;
        return r49139989;
}

double f_id(double x) {
        double r49139990 = 0.375;
        double r49139991 = -3.75;
        double r49139992 = x;
        double r49139993 = r49139992 * r49139992;
        double r49139994 = r49139991 * r49139993;
        double r49139995 = r49139990 + r49139994;
        double r49139996 = 4.375;
        double r49139997 = r49139993 * r49139992;
        double r49139998 = r49139997 * r49139992;
        double r49139999 = r49139996 * r49139998;
        double r49140000 = r49139995 + r49139999;
        return r49140000;
}


double f_of(float x) {
        float r49140001 = 0.375;
        float r49140002 = -3.75;
        float r49140003 = x;
        float r49140004 = r49140003 * r49140003;
        float r49140005 = r49140002 * r49140004;
        float r49140006 = r49140001 + r49140005;
        float r49140007 = 3;
        float r49140008 = pow(r49140006, r49140007);
        float r49140009 = 4.375;
        float r49140010 = pow(r49140009, r49140007);
        float r49140011 = log(r49140003);
        float r49140012 = 1;
        float r49140013 = r49140007 + r49140012;
        float r49140014 = r49140011 * r49140013;
        float r49140015 = r49140014 * r49140007;
        float r49140016 = exp(r49140015);
        float r49140017 = r49140010 * r49140016;
        float r49140018 = r49140008 + r49140017;
        float r49140019 = pow(r49140003, r49140013);
        float r49140020 = r49140019 * r49140009;
        float r49140021 = r49140004 * r49140002;
        float r49140022 = r49140021 + r49140001;
        float r49140023 = r49140020 - r49140022;
        float r49140024 = r49140020 * r49140023;
        float r49140025 = r49140022 * r49140022;
        float r49140026 = r49140024 + r49140025;
        float r49140027 = r49140018 / r49140026;
        return r49140027;
}

double f_od(double x) {
        double r49140028 = 0.375;
        double r49140029 = -3.75;
        double r49140030 = x;
        double r49140031 = r49140030 * r49140030;
        double r49140032 = r49140029 * r49140031;
        double r49140033 = r49140028 + r49140032;
        double r49140034 = 3;
        double r49140035 = pow(r49140033, r49140034);
        double r49140036 = 4.375;
        double r49140037 = pow(r49140036, r49140034);
        double r49140038 = log(r49140030);
        double r49140039 = 1;
        double r49140040 = r49140034 + r49140039;
        double r49140041 = r49140038 * r49140040;
        double r49140042 = r49140041 * r49140034;
        double r49140043 = exp(r49140042);
        double r49140044 = r49140037 * r49140043;
        double r49140045 = r49140035 + r49140044;
        double r49140046 = pow(r49140030, r49140040);
        double r49140047 = r49140046 * r49140036;
        double r49140048 = r49140031 * r49140029;
        double r49140049 = r49140048 + r49140028;
        double r49140050 = r49140047 - r49140049;
        double r49140051 = r49140047 * r49140050;
        double r49140052 = r49140049 * r49140049;
        double r49140053 = r49140051 + r49140052;
        double r49140054 = r49140045 / r49140053;
        return r49140054;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49140055, r49140056, r49140057, r49140058, r49140059, r49140060, r49140061, r49140062, r49140063, r49140064, r49140065;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49140055, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r49140056, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r49140057);
        mpfr_init(r49140058);
        mpfr_init(r49140059);
        mpfr_init(r49140060);
        mpfr_init_set_str(r49140061, "4.375", 10, MPFR_RNDN);
        mpfr_init(r49140062);
        mpfr_init(r49140063);
        mpfr_init(r49140064);
        mpfr_init(r49140065);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r49140057, x, MPFR_RNDN);
        mpfr_mul(r49140058, r49140057, r49140057, MPFR_RNDN);
        mpfr_mul(r49140059, r49140056, r49140058, MPFR_RNDN);
        mpfr_add(r49140060, r49140055, r49140059, MPFR_RNDN);
        ;
        mpfr_mul(r49140062, r49140058, r49140057, MPFR_RNDN);
        mpfr_mul(r49140063, r49140062, r49140057, MPFR_RNDN);
        mpfr_mul(r49140064, r49140061, r49140063, MPFR_RNDN);
        mpfr_add(r49140065, r49140060, r49140064, MPFR_RNDN);
        return mpfr_get_d(r49140065, MPFR_RNDN);
}

static mpfr_t r49140066, r49140067, r49140068, r49140069, r49140070, r49140071, r49140072, r49140073, r49140074, r49140075, r49140076, r49140077, r49140078, r49140079, r49140080, r49140081, r49140082, r49140083, r49140084, r49140085, r49140086, r49140087, r49140088, r49140089, r49140090, r49140091, r49140092;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49140066, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r49140067, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r49140068);
        mpfr_init(r49140069);
        mpfr_init(r49140070);
        mpfr_init(r49140071);
        mpfr_init_set_str(r49140072, "3", 10, MPFR_RNDN);
        mpfr_init(r49140073);
        mpfr_init_set_str(r49140074, "4.375", 10, MPFR_RNDN);
        mpfr_init(r49140075);
        mpfr_init(r49140076);
        mpfr_init_set_str(r49140077, "1", 10, MPFR_RNDN);
        mpfr_init(r49140078);
        mpfr_init(r49140079);
        mpfr_init(r49140080);
        mpfr_init(r49140081);
        mpfr_init(r49140082);
        mpfr_init(r49140083);
        mpfr_init(r49140084);
        mpfr_init(r49140085);
        mpfr_init(r49140086);
        mpfr_init(r49140087);
        mpfr_init(r49140088);
        mpfr_init(r49140089);
        mpfr_init(r49140090);
        mpfr_init(r49140091);
        mpfr_init(r49140092);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r49140068, x, MPFR_RNDN);
        mpfr_mul(r49140069, r49140068, r49140068, MPFR_RNDN);
        mpfr_mul(r49140070, r49140067, r49140069, MPFR_RNDN);
        mpfr_add(r49140071, r49140066, r49140070, MPFR_RNDN);
        ;
        mpfr_pow(r49140073, r49140071, r49140072, MPFR_RNDN);
        ;
        mpfr_pow(r49140075, r49140074, r49140072, MPFR_RNDN);
        mpfr_log(r49140076, r49140068, MPFR_RNDN);
        ;
        mpfr_add(r49140078, r49140072, r49140077, MPFR_RNDN);
        mpfr_mul(r49140079, r49140076, r49140078, MPFR_RNDN);
        mpfr_mul(r49140080, r49140079, r49140072, MPFR_RNDN);
        mpfr_exp(r49140081, r49140080, MPFR_RNDN);
        mpfr_mul(r49140082, r49140075, r49140081, MPFR_RNDN);
        mpfr_add(r49140083, r49140073, r49140082, MPFR_RNDN);
        mpfr_pow(r49140084, r49140068, r49140078, MPFR_RNDN);
        mpfr_mul(r49140085, r49140084, r49140074, MPFR_RNDN);
        mpfr_mul(r49140086, r49140069, r49140067, MPFR_RNDN);
        mpfr_add(r49140087, r49140086, r49140066, MPFR_RNDN);
        mpfr_sub(r49140088, r49140085, r49140087, MPFR_RNDN);
        mpfr_mul(r49140089, r49140085, r49140088, MPFR_RNDN);
        mpfr_mul(r49140090, r49140087, r49140087, MPFR_RNDN);
        mpfr_add(r49140091, r49140089, r49140090, MPFR_RNDN);
        mpfr_div(r49140092, r49140083, r49140091, MPFR_RNDN);
        return mpfr_get_d(r49140092, MPFR_RNDN);
}

static mpfr_t r49140093, r49140094, r49140095, r49140096, r49140097, r49140098, r49140099, r49140100, r49140101, r49140102, r49140103, r49140104, r49140105, r49140106, r49140107, r49140108, r49140109, r49140110, r49140111, r49140112, r49140113, r49140114, r49140115, r49140116, r49140117, r49140118, r49140119;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49140093, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r49140094, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r49140095);
        mpfr_init(r49140096);
        mpfr_init(r49140097);
        mpfr_init(r49140098);
        mpfr_init_set_str(r49140099, "3", 10, MPFR_RNDN);
        mpfr_init(r49140100);
        mpfr_init_set_str(r49140101, "4.375", 10, MPFR_RNDN);
        mpfr_init(r49140102);
        mpfr_init(r49140103);
        mpfr_init_set_str(r49140104, "1", 10, MPFR_RNDN);
        mpfr_init(r49140105);
        mpfr_init(r49140106);
        mpfr_init(r49140107);
        mpfr_init(r49140108);
        mpfr_init(r49140109);
        mpfr_init(r49140110);
        mpfr_init(r49140111);
        mpfr_init(r49140112);
        mpfr_init(r49140113);
        mpfr_init(r49140114);
        mpfr_init(r49140115);
        mpfr_init(r49140116);
        mpfr_init(r49140117);
        mpfr_init(r49140118);
        mpfr_init(r49140119);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r49140095, x, MPFR_RNDN);
        mpfr_mul(r49140096, r49140095, r49140095, MPFR_RNDN);
        mpfr_mul(r49140097, r49140094, r49140096, MPFR_RNDN);
        mpfr_add(r49140098, r49140093, r49140097, MPFR_RNDN);
        ;
        mpfr_pow(r49140100, r49140098, r49140099, MPFR_RNDN);
        ;
        mpfr_pow(r49140102, r49140101, r49140099, MPFR_RNDN);
        mpfr_log(r49140103, r49140095, MPFR_RNDN);
        ;
        mpfr_add(r49140105, r49140099, r49140104, MPFR_RNDN);
        mpfr_mul(r49140106, r49140103, r49140105, MPFR_RNDN);
        mpfr_mul(r49140107, r49140106, r49140099, MPFR_RNDN);
        mpfr_exp(r49140108, r49140107, MPFR_RNDN);
        mpfr_mul(r49140109, r49140102, r49140108, MPFR_RNDN);
        mpfr_add(r49140110, r49140100, r49140109, MPFR_RNDN);
        mpfr_pow(r49140111, r49140095, r49140105, MPFR_RNDN);
        mpfr_mul(r49140112, r49140111, r49140101, MPFR_RNDN);
        mpfr_mul(r49140113, r49140096, r49140094, MPFR_RNDN);
        mpfr_add(r49140114, r49140113, r49140093, MPFR_RNDN);
        mpfr_sub(r49140115, r49140112, r49140114, MPFR_RNDN);
        mpfr_mul(r49140116, r49140112, r49140115, MPFR_RNDN);
        mpfr_mul(r49140117, r49140114, r49140114, MPFR_RNDN);
        mpfr_add(r49140118, r49140116, r49140117, MPFR_RNDN);
        mpfr_div(r49140119, r49140110, r49140118, MPFR_RNDN);
        return mpfr_get_d(r49140119, MPFR_RNDN);
}

