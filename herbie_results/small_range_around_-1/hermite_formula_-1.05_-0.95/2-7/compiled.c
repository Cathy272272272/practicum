#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r60542983 = -1680.0;
        float r60542984 = x;
        float r60542985 = r60542983 * r60542984;
        float r60542986 = 3360.0;
        float r60542987 = r60542984 * r60542984;
        float r60542988 = r60542987 * r60542984;
        float r60542989 = r60542986 * r60542988;
        float r60542990 = r60542985 + r60542989;
        float r60542991 = -1344.0;
        float r60542992 = r60542988 * r60542984;
        float r60542993 = r60542992 * r60542984;
        float r60542994 = r60542991 * r60542993;
        float r60542995 = r60542990 + r60542994;
        float r60542996 = 128.0;
        float r60542997 = r60542993 * r60542984;
        float r60542998 = r60542997 * r60542984;
        float r60542999 = r60542996 * r60542998;
        float r60543000 = r60542995 + r60542999;
        return r60543000;
}

double f_id(double x) {
        double r60543001 = -1680.0;
        double r60543002 = x;
        double r60543003 = r60543001 * r60543002;
        double r60543004 = 3360.0;
        double r60543005 = r60543002 * r60543002;
        double r60543006 = r60543005 * r60543002;
        double r60543007 = r60543004 * r60543006;
        double r60543008 = r60543003 + r60543007;
        double r60543009 = -1344.0;
        double r60543010 = r60543006 * r60543002;
        double r60543011 = r60543010 * r60543002;
        double r60543012 = r60543009 * r60543011;
        double r60543013 = r60543008 + r60543012;
        double r60543014 = 128.0;
        double r60543015 = r60543011 * r60543002;
        double r60543016 = r60543015 * r60543002;
        double r60543017 = r60543014 * r60543016;
        double r60543018 = r60543013 + r60543017;
        return r60543018;
}


double f_of(float x) {
        float r60543019 = x;
        float r60543020 = r60543019 * r60543019;
        float r60543021 = r60543020 * r60543020;
        float r60543022 = cbrt(r60543021);
        float r60543023 = r60543022 * r60543022;
        float r60543024 = r60543023 * r60543022;
        float r60543025 = 128.0;
        float r60543026 = r60543025 * r60543019;
        float r60543027 = r60543020 * r60543026;
        float r60543028 = r60543024 * r60543027;
        float r60543029 = 1;
        float r60543030 = 3;
        float r60543031 = r60543029 + r60543030;
        float r60543032 = pow(r60543020, r60543031);
        float r60543033 = -1344.0;
        float r60543034 = r60543033 * r60543019;
        float r60543035 = r60543034 * r60543034;
        float r60543036 = r60543032 * r60543035;
        float r60543037 = r60543034 * r60543021;
        float r60543038 = r60543036 * r60543037;
        float r60543039 = -1680.0;
        float r60543040 = r60543039 * r60543019;
        float r60543041 = 3360.0;
        float r60543042 = r60543041 * r60543019;
        float r60543043 = r60543020 * r60543042;
        float r60543044 = r60543040 + r60543043;
        float r60543045 = pow(r60543044, r60543030);
        float r60543046 = r60543038 + r60543045;
        float r60543047 = r60543042 * r60543020;
        float r60543048 = r60543047 + r60543040;
        float r60543049 = r60543048 - r60543037;
        float r60543050 = r60543048 * r60543049;
        float r60543051 = r60543037 * r60543037;
        float r60543052 = r60543050 + r60543051;
        float r60543053 = r60543046 / r60543052;
        float r60543054 = r60543028 + r60543053;
        return r60543054;
}

double f_od(double x) {
        double r60543055 = x;
        double r60543056 = r60543055 * r60543055;
        double r60543057 = r60543056 * r60543056;
        double r60543058 = cbrt(r60543057);
        double r60543059 = r60543058 * r60543058;
        double r60543060 = r60543059 * r60543058;
        double r60543061 = 128.0;
        double r60543062 = r60543061 * r60543055;
        double r60543063 = r60543056 * r60543062;
        double r60543064 = r60543060 * r60543063;
        double r60543065 = 1;
        double r60543066 = 3;
        double r60543067 = r60543065 + r60543066;
        double r60543068 = pow(r60543056, r60543067);
        double r60543069 = -1344.0;
        double r60543070 = r60543069 * r60543055;
        double r60543071 = r60543070 * r60543070;
        double r60543072 = r60543068 * r60543071;
        double r60543073 = r60543070 * r60543057;
        double r60543074 = r60543072 * r60543073;
        double r60543075 = -1680.0;
        double r60543076 = r60543075 * r60543055;
        double r60543077 = 3360.0;
        double r60543078 = r60543077 * r60543055;
        double r60543079 = r60543056 * r60543078;
        double r60543080 = r60543076 + r60543079;
        double r60543081 = pow(r60543080, r60543066);
        double r60543082 = r60543074 + r60543081;
        double r60543083 = r60543078 * r60543056;
        double r60543084 = r60543083 + r60543076;
        double r60543085 = r60543084 - r60543073;
        double r60543086 = r60543084 * r60543085;
        double r60543087 = r60543073 * r60543073;
        double r60543088 = r60543086 + r60543087;
        double r60543089 = r60543082 / r60543088;
        double r60543090 = r60543064 + r60543089;
        return r60543090;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60543091, r60543092, r60543093, r60543094, r60543095, r60543096, r60543097, r60543098, r60543099, r60543100, r60543101, r60543102, r60543103, r60543104, r60543105, r60543106, r60543107, r60543108;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543091, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r60543092);
        mpfr_init(r60543093);
        mpfr_init_set_str(r60543094, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r60543095);
        mpfr_init(r60543096);
        mpfr_init(r60543097);
        mpfr_init(r60543098);
        mpfr_init_set_str(r60543099, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r60543100);
        mpfr_init(r60543101);
        mpfr_init(r60543102);
        mpfr_init(r60543103);
        mpfr_init_set_str(r60543104, "128.0", 10, MPFR_RNDN);
        mpfr_init(r60543105);
        mpfr_init(r60543106);
        mpfr_init(r60543107);
        mpfr_init(r60543108);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60543092, x, MPFR_RNDN);
        mpfr_mul(r60543093, r60543091, r60543092, MPFR_RNDN);
        ;
        mpfr_mul(r60543095, r60543092, r60543092, MPFR_RNDN);
        mpfr_mul(r60543096, r60543095, r60543092, MPFR_RNDN);
        mpfr_mul(r60543097, r60543094, r60543096, MPFR_RNDN);
        mpfr_add(r60543098, r60543093, r60543097, MPFR_RNDN);
        ;
        mpfr_mul(r60543100, r60543096, r60543092, MPFR_RNDN);
        mpfr_mul(r60543101, r60543100, r60543092, MPFR_RNDN);
        mpfr_mul(r60543102, r60543099, r60543101, MPFR_RNDN);
        mpfr_add(r60543103, r60543098, r60543102, MPFR_RNDN);
        ;
        mpfr_mul(r60543105, r60543101, r60543092, MPFR_RNDN);
        mpfr_mul(r60543106, r60543105, r60543092, MPFR_RNDN);
        mpfr_mul(r60543107, r60543104, r60543106, MPFR_RNDN);
        mpfr_add(r60543108, r60543103, r60543107, MPFR_RNDN);
        return mpfr_get_d(r60543108, MPFR_RNDN);
}

static mpfr_t r60543109, r60543110, r60543111, r60543112, r60543113, r60543114, r60543115, r60543116, r60543117, r60543118, r60543119, r60543120, r60543121, r60543122, r60543123, r60543124, r60543125, r60543126, r60543127, r60543128, r60543129, r60543130, r60543131, r60543132, r60543133, r60543134, r60543135, r60543136, r60543137, r60543138, r60543139, r60543140, r60543141, r60543142, r60543143, r60543144;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60543109);
        mpfr_init(r60543110);
        mpfr_init(r60543111);
        mpfr_init(r60543112);
        mpfr_init(r60543113);
        mpfr_init(r60543114);
        mpfr_init_set_str(r60543115, "128.0", 10, MPFR_RNDN);
        mpfr_init(r60543116);
        mpfr_init(r60543117);
        mpfr_init(r60543118);
        mpfr_init_set_str(r60543119, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r60543120, "3", 10, MPFR_RNDN);
        mpfr_init(r60543121);
        mpfr_init(r60543122);
        mpfr_init_set_str(r60543123, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r60543124);
        mpfr_init(r60543125);
        mpfr_init(r60543126);
        mpfr_init(r60543127);
        mpfr_init(r60543128);
        mpfr_init_set_str(r60543129, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r60543130);
        mpfr_init_set_str(r60543131, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r60543132);
        mpfr_init(r60543133);
        mpfr_init(r60543134);
        mpfr_init(r60543135);
        mpfr_init(r60543136);
        mpfr_init(r60543137);
        mpfr_init(r60543138);
        mpfr_init(r60543139);
        mpfr_init(r60543140);
        mpfr_init(r60543141);
        mpfr_init(r60543142);
        mpfr_init(r60543143);
        mpfr_init(r60543144);
}

double f_fm(double x) {
        mpfr_set_d(r60543109, x, MPFR_RNDN);
        mpfr_mul(r60543110, r60543109, r60543109, MPFR_RNDN);
        mpfr_mul(r60543111, r60543110, r60543110, MPFR_RNDN);
        mpfr_cbrt(r60543112, r60543111, MPFR_RNDN);
        mpfr_mul(r60543113, r60543112, r60543112, MPFR_RNDN);
        mpfr_mul(r60543114, r60543113, r60543112, MPFR_RNDN);
        ;
        mpfr_mul(r60543116, r60543115, r60543109, MPFR_RNDN);
        mpfr_mul(r60543117, r60543110, r60543116, MPFR_RNDN);
        mpfr_mul(r60543118, r60543114, r60543117, MPFR_RNDN);
        ;
        ;
        mpfr_add(r60543121, r60543119, r60543120, MPFR_RNDN);
        mpfr_pow(r60543122, r60543110, r60543121, MPFR_RNDN);
        ;
        mpfr_mul(r60543124, r60543123, r60543109, MPFR_RNDN);
        mpfr_mul(r60543125, r60543124, r60543124, MPFR_RNDN);
        mpfr_mul(r60543126, r60543122, r60543125, MPFR_RNDN);
        mpfr_mul(r60543127, r60543124, r60543111, MPFR_RNDN);
        mpfr_mul(r60543128, r60543126, r60543127, MPFR_RNDN);
        ;
        mpfr_mul(r60543130, r60543129, r60543109, MPFR_RNDN);
        ;
        mpfr_mul(r60543132, r60543131, r60543109, MPFR_RNDN);
        mpfr_mul(r60543133, r60543110, r60543132, MPFR_RNDN);
        mpfr_add(r60543134, r60543130, r60543133, MPFR_RNDN);
        mpfr_pow(r60543135, r60543134, r60543120, MPFR_RNDN);
        mpfr_add(r60543136, r60543128, r60543135, MPFR_RNDN);
        mpfr_mul(r60543137, r60543132, r60543110, MPFR_RNDN);
        mpfr_add(r60543138, r60543137, r60543130, MPFR_RNDN);
        mpfr_sub(r60543139, r60543138, r60543127, MPFR_RNDN);
        mpfr_mul(r60543140, r60543138, r60543139, MPFR_RNDN);
        mpfr_mul(r60543141, r60543127, r60543127, MPFR_RNDN);
        mpfr_add(r60543142, r60543140, r60543141, MPFR_RNDN);
        mpfr_div(r60543143, r60543136, r60543142, MPFR_RNDN);
        mpfr_add(r60543144, r60543118, r60543143, MPFR_RNDN);
        return mpfr_get_d(r60543144, MPFR_RNDN);
}

static mpfr_t r60543145, r60543146, r60543147, r60543148, r60543149, r60543150, r60543151, r60543152, r60543153, r60543154, r60543155, r60543156, r60543157, r60543158, r60543159, r60543160, r60543161, r60543162, r60543163, r60543164, r60543165, r60543166, r60543167, r60543168, r60543169, r60543170, r60543171, r60543172, r60543173, r60543174, r60543175, r60543176, r60543177, r60543178, r60543179, r60543180;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60543145);
        mpfr_init(r60543146);
        mpfr_init(r60543147);
        mpfr_init(r60543148);
        mpfr_init(r60543149);
        mpfr_init(r60543150);
        mpfr_init_set_str(r60543151, "128.0", 10, MPFR_RNDN);
        mpfr_init(r60543152);
        mpfr_init(r60543153);
        mpfr_init(r60543154);
        mpfr_init_set_str(r60543155, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r60543156, "3", 10, MPFR_RNDN);
        mpfr_init(r60543157);
        mpfr_init(r60543158);
        mpfr_init_set_str(r60543159, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r60543160);
        mpfr_init(r60543161);
        mpfr_init(r60543162);
        mpfr_init(r60543163);
        mpfr_init(r60543164);
        mpfr_init_set_str(r60543165, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r60543166);
        mpfr_init_set_str(r60543167, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r60543168);
        mpfr_init(r60543169);
        mpfr_init(r60543170);
        mpfr_init(r60543171);
        mpfr_init(r60543172);
        mpfr_init(r60543173);
        mpfr_init(r60543174);
        mpfr_init(r60543175);
        mpfr_init(r60543176);
        mpfr_init(r60543177);
        mpfr_init(r60543178);
        mpfr_init(r60543179);
        mpfr_init(r60543180);
}

double f_dm(double x) {
        mpfr_set_d(r60543145, x, MPFR_RNDN);
        mpfr_mul(r60543146, r60543145, r60543145, MPFR_RNDN);
        mpfr_mul(r60543147, r60543146, r60543146, MPFR_RNDN);
        mpfr_cbrt(r60543148, r60543147, MPFR_RNDN);
        mpfr_mul(r60543149, r60543148, r60543148, MPFR_RNDN);
        mpfr_mul(r60543150, r60543149, r60543148, MPFR_RNDN);
        ;
        mpfr_mul(r60543152, r60543151, r60543145, MPFR_RNDN);
        mpfr_mul(r60543153, r60543146, r60543152, MPFR_RNDN);
        mpfr_mul(r60543154, r60543150, r60543153, MPFR_RNDN);
        ;
        ;
        mpfr_add(r60543157, r60543155, r60543156, MPFR_RNDN);
        mpfr_pow(r60543158, r60543146, r60543157, MPFR_RNDN);
        ;
        mpfr_mul(r60543160, r60543159, r60543145, MPFR_RNDN);
        mpfr_mul(r60543161, r60543160, r60543160, MPFR_RNDN);
        mpfr_mul(r60543162, r60543158, r60543161, MPFR_RNDN);
        mpfr_mul(r60543163, r60543160, r60543147, MPFR_RNDN);
        mpfr_mul(r60543164, r60543162, r60543163, MPFR_RNDN);
        ;
        mpfr_mul(r60543166, r60543165, r60543145, MPFR_RNDN);
        ;
        mpfr_mul(r60543168, r60543167, r60543145, MPFR_RNDN);
        mpfr_mul(r60543169, r60543146, r60543168, MPFR_RNDN);
        mpfr_add(r60543170, r60543166, r60543169, MPFR_RNDN);
        mpfr_pow(r60543171, r60543170, r60543156, MPFR_RNDN);
        mpfr_add(r60543172, r60543164, r60543171, MPFR_RNDN);
        mpfr_mul(r60543173, r60543168, r60543146, MPFR_RNDN);
        mpfr_add(r60543174, r60543173, r60543166, MPFR_RNDN);
        mpfr_sub(r60543175, r60543174, r60543163, MPFR_RNDN);
        mpfr_mul(r60543176, r60543174, r60543175, MPFR_RNDN);
        mpfr_mul(r60543177, r60543163, r60543163, MPFR_RNDN);
        mpfr_add(r60543178, r60543176, r60543177, MPFR_RNDN);
        mpfr_div(r60543179, r60543172, r60543178, MPFR_RNDN);
        mpfr_add(r60543180, r60543154, r60543179, MPFR_RNDN);
        return mpfr_get_d(r60543180, MPFR_RNDN);
}

