#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r20862009 = 1.0;
        float r20862010 = -7.0;
        float r20862011 = x;
        float r20862012 = r20862010 * r20862011;
        float r20862013 = r20862009 + r20862012;
        float r20862014 = 10.5;
        float r20862015 = r20862011 * r20862011;
        float r20862016 = r20862014 * r20862015;
        float r20862017 = r20862013 + r20862016;
        float r20862018 = -5.833333;
        float r20862019 = r20862015 * r20862011;
        float r20862020 = r20862018 * r20862019;
        float r20862021 = r20862017 + r20862020;
        float r20862022 = 1.458333;
        float r20862023 = r20862019 * r20862011;
        float r20862024 = r20862022 * r20862023;
        float r20862025 = r20862021 + r20862024;
        float r20862026 = -0.175;
        float r20862027 = r20862023 * r20862011;
        float r20862028 = r20862026 * r20862027;
        float r20862029 = r20862025 + r20862028;
        float r20862030 = 0.009722;
        float r20862031 = r20862027 * r20862011;
        float r20862032 = r20862030 * r20862031;
        float r20862033 = r20862029 + r20862032;
        float r20862034 = -0.000198;
        float r20862035 = r20862031 * r20862011;
        float r20862036 = r20862034 * r20862035;
        float r20862037 = r20862033 + r20862036;
        return r20862037;
}

double f_id(double x) {
        double r20862038 = 1.0;
        double r20862039 = -7.0;
        double r20862040 = x;
        double r20862041 = r20862039 * r20862040;
        double r20862042 = r20862038 + r20862041;
        double r20862043 = 10.5;
        double r20862044 = r20862040 * r20862040;
        double r20862045 = r20862043 * r20862044;
        double r20862046 = r20862042 + r20862045;
        double r20862047 = -5.833333;
        double r20862048 = r20862044 * r20862040;
        double r20862049 = r20862047 * r20862048;
        double r20862050 = r20862046 + r20862049;
        double r20862051 = 1.458333;
        double r20862052 = r20862048 * r20862040;
        double r20862053 = r20862051 * r20862052;
        double r20862054 = r20862050 + r20862053;
        double r20862055 = -0.175;
        double r20862056 = r20862052 * r20862040;
        double r20862057 = r20862055 * r20862056;
        double r20862058 = r20862054 + r20862057;
        double r20862059 = 0.009722;
        double r20862060 = r20862056 * r20862040;
        double r20862061 = r20862059 * r20862060;
        double r20862062 = r20862058 + r20862061;
        double r20862063 = -0.000198;
        double r20862064 = r20862060 * r20862040;
        double r20862065 = r20862063 * r20862064;
        double r20862066 = r20862062 + r20862065;
        return r20862066;
}


double f_of(float x) {
        float r20862067 = x;
        float r20862068 = r20862067 * r20862067;
        float r20862069 = r20862068 * r20862068;
        float r20862070 = 1.458333;
        float r20862071 = -0.175;
        float r20862072 = r20862071 * r20862067;
        float r20862073 = r20862070 + r20862072;
        float r20862074 = r20862069 * r20862073;
        float r20862075 = 3;
        float r20862076 = pow(r20862067, r20862075);
        float r20862077 = r20862076 * r20862076;
        float r20862078 = 0.009722;
        float r20862079 = -0.000198;
        float r20862080 = r20862079 * r20862067;
        float r20862081 = r20862078 + r20862080;
        float r20862082 = r20862077 * r20862081;
        float r20862083 = r20862074 + r20862082;
        float r20862084 = -5.833333;
        float r20862085 = r20862067 * r20862084;
        float r20862086 = r20862085 * r20862068;
        float r20862087 = 1.0;
        float r20862088 = r20862086 + r20862087;
        float r20862089 = 10.5;
        float r20862090 = r20862089 * r20862067;
        float r20862091 = -7.0;
        float r20862092 = r20862090 + r20862091;
        float r20862093 = r20862067 * r20862092;
        float r20862094 = r20862088 + r20862093;
        float r20862095 = r20862083 + r20862094;
        return r20862095;
}

double f_od(double x) {
        double r20862096 = x;
        double r20862097 = r20862096 * r20862096;
        double r20862098 = r20862097 * r20862097;
        double r20862099 = 1.458333;
        double r20862100 = -0.175;
        double r20862101 = r20862100 * r20862096;
        double r20862102 = r20862099 + r20862101;
        double r20862103 = r20862098 * r20862102;
        double r20862104 = 3;
        double r20862105 = pow(r20862096, r20862104);
        double r20862106 = r20862105 * r20862105;
        double r20862107 = 0.009722;
        double r20862108 = -0.000198;
        double r20862109 = r20862108 * r20862096;
        double r20862110 = r20862107 + r20862109;
        double r20862111 = r20862106 * r20862110;
        double r20862112 = r20862103 + r20862111;
        double r20862113 = -5.833333;
        double r20862114 = r20862096 * r20862113;
        double r20862115 = r20862114 * r20862097;
        double r20862116 = 1.0;
        double r20862117 = r20862115 + r20862116;
        double r20862118 = 10.5;
        double r20862119 = r20862118 * r20862096;
        double r20862120 = -7.0;
        double r20862121 = r20862119 + r20862120;
        double r20862122 = r20862096 * r20862121;
        double r20862123 = r20862117 + r20862122;
        double r20862124 = r20862112 + r20862123;
        return r20862124;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20862125, r20862126, r20862127, r20862128, r20862129, r20862130, r20862131, r20862132, r20862133, r20862134, r20862135, r20862136, r20862137, r20862138, r20862139, r20862140, r20862141, r20862142, r20862143, r20862144, r20862145, r20862146, r20862147, r20862148, r20862149, r20862150, r20862151, r20862152, r20862153;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20862125, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862126, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r20862127);
        mpfr_init(r20862128);
        mpfr_init(r20862129);
        mpfr_init_set_str(r20862130, "10.5", 10, MPFR_RNDN);
        mpfr_init(r20862131);
        mpfr_init(r20862132);
        mpfr_init(r20862133);
        mpfr_init_set_str(r20862134, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r20862135);
        mpfr_init(r20862136);
        mpfr_init(r20862137);
        mpfr_init_set_str(r20862138, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r20862139);
        mpfr_init(r20862140);
        mpfr_init(r20862141);
        mpfr_init_set_str(r20862142, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r20862143);
        mpfr_init(r20862144);
        mpfr_init(r20862145);
        mpfr_init_set_str(r20862146, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r20862147);
        mpfr_init(r20862148);
        mpfr_init(r20862149);
        mpfr_init_set_str(r20862150, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r20862151);
        mpfr_init(r20862152);
        mpfr_init(r20862153);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20862127, x, MPFR_RNDN);
        mpfr_mul(r20862128, r20862126, r20862127, MPFR_RNDN);
        mpfr_add(r20862129, r20862125, r20862128, MPFR_RNDN);
        ;
        mpfr_mul(r20862131, r20862127, r20862127, MPFR_RNDN);
        mpfr_mul(r20862132, r20862130, r20862131, MPFR_RNDN);
        mpfr_add(r20862133, r20862129, r20862132, MPFR_RNDN);
        ;
        mpfr_mul(r20862135, r20862131, r20862127, MPFR_RNDN);
        mpfr_mul(r20862136, r20862134, r20862135, MPFR_RNDN);
        mpfr_add(r20862137, r20862133, r20862136, MPFR_RNDN);
        ;
        mpfr_mul(r20862139, r20862135, r20862127, MPFR_RNDN);
        mpfr_mul(r20862140, r20862138, r20862139, MPFR_RNDN);
        mpfr_add(r20862141, r20862137, r20862140, MPFR_RNDN);
        ;
        mpfr_mul(r20862143, r20862139, r20862127, MPFR_RNDN);
        mpfr_mul(r20862144, r20862142, r20862143, MPFR_RNDN);
        mpfr_add(r20862145, r20862141, r20862144, MPFR_RNDN);
        ;
        mpfr_mul(r20862147, r20862143, r20862127, MPFR_RNDN);
        mpfr_mul(r20862148, r20862146, r20862147, MPFR_RNDN);
        mpfr_add(r20862149, r20862145, r20862148, MPFR_RNDN);
        ;
        mpfr_mul(r20862151, r20862147, r20862127, MPFR_RNDN);
        mpfr_mul(r20862152, r20862150, r20862151, MPFR_RNDN);
        mpfr_add(r20862153, r20862149, r20862152, MPFR_RNDN);
        return mpfr_get_d(r20862153, MPFR_RNDN);
}

static mpfr_t r20862154, r20862155, r20862156, r20862157, r20862158, r20862159, r20862160, r20862161, r20862162, r20862163, r20862164, r20862165, r20862166, r20862167, r20862168, r20862169, r20862170, r20862171, r20862172, r20862173, r20862174, r20862175, r20862176, r20862177, r20862178, r20862179, r20862180, r20862181, r20862182;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20862154);
        mpfr_init(r20862155);
        mpfr_init(r20862156);
        mpfr_init_set_str(r20862157, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862158, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r20862159);
        mpfr_init(r20862160);
        mpfr_init(r20862161);
        mpfr_init_set_str(r20862162, "3", 10, MPFR_RNDN);
        mpfr_init(r20862163);
        mpfr_init(r20862164);
        mpfr_init_set_str(r20862165, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862166, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r20862167);
        mpfr_init(r20862168);
        mpfr_init(r20862169);
        mpfr_init(r20862170);
        mpfr_init_set_str(r20862171, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r20862172);
        mpfr_init(r20862173);
        mpfr_init_set_str(r20862174, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20862175);
        mpfr_init_set_str(r20862176, "10.5", 10, MPFR_RNDN);
        mpfr_init(r20862177);
        mpfr_init_set_str(r20862178, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r20862179);
        mpfr_init(r20862180);
        mpfr_init(r20862181);
        mpfr_init(r20862182);
}

double f_fm(double x) {
        mpfr_set_d(r20862154, x, MPFR_RNDN);
        mpfr_mul(r20862155, r20862154, r20862154, MPFR_RNDN);
        mpfr_mul(r20862156, r20862155, r20862155, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20862159, r20862158, r20862154, MPFR_RNDN);
        mpfr_add(r20862160, r20862157, r20862159, MPFR_RNDN);
        mpfr_mul(r20862161, r20862156, r20862160, MPFR_RNDN);
        ;
        mpfr_pow(r20862163, r20862154, r20862162, MPFR_RNDN);
        mpfr_mul(r20862164, r20862163, r20862163, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20862167, r20862166, r20862154, MPFR_RNDN);
        mpfr_add(r20862168, r20862165, r20862167, MPFR_RNDN);
        mpfr_mul(r20862169, r20862164, r20862168, MPFR_RNDN);
        mpfr_add(r20862170, r20862161, r20862169, MPFR_RNDN);
        ;
        mpfr_mul(r20862172, r20862154, r20862171, MPFR_RNDN);
        mpfr_mul(r20862173, r20862172, r20862155, MPFR_RNDN);
        ;
        mpfr_add(r20862175, r20862173, r20862174, MPFR_RNDN);
        ;
        mpfr_mul(r20862177, r20862176, r20862154, MPFR_RNDN);
        ;
        mpfr_add(r20862179, r20862177, r20862178, MPFR_RNDN);
        mpfr_mul(r20862180, r20862154, r20862179, MPFR_RNDN);
        mpfr_add(r20862181, r20862175, r20862180, MPFR_RNDN);
        mpfr_add(r20862182, r20862170, r20862181, MPFR_RNDN);
        return mpfr_get_d(r20862182, MPFR_RNDN);
}

static mpfr_t r20862183, r20862184, r20862185, r20862186, r20862187, r20862188, r20862189, r20862190, r20862191, r20862192, r20862193, r20862194, r20862195, r20862196, r20862197, r20862198, r20862199, r20862200, r20862201, r20862202, r20862203, r20862204, r20862205, r20862206, r20862207, r20862208, r20862209, r20862210, r20862211;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20862183);
        mpfr_init(r20862184);
        mpfr_init(r20862185);
        mpfr_init_set_str(r20862186, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862187, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r20862188);
        mpfr_init(r20862189);
        mpfr_init(r20862190);
        mpfr_init_set_str(r20862191, "3", 10, MPFR_RNDN);
        mpfr_init(r20862192);
        mpfr_init(r20862193);
        mpfr_init_set_str(r20862194, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862195, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r20862196);
        mpfr_init(r20862197);
        mpfr_init(r20862198);
        mpfr_init(r20862199);
        mpfr_init_set_str(r20862200, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r20862201);
        mpfr_init(r20862202);
        mpfr_init_set_str(r20862203, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20862204);
        mpfr_init_set_str(r20862205, "10.5", 10, MPFR_RNDN);
        mpfr_init(r20862206);
        mpfr_init_set_str(r20862207, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r20862208);
        mpfr_init(r20862209);
        mpfr_init(r20862210);
        mpfr_init(r20862211);
}

double f_dm(double x) {
        mpfr_set_d(r20862183, x, MPFR_RNDN);
        mpfr_mul(r20862184, r20862183, r20862183, MPFR_RNDN);
        mpfr_mul(r20862185, r20862184, r20862184, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20862188, r20862187, r20862183, MPFR_RNDN);
        mpfr_add(r20862189, r20862186, r20862188, MPFR_RNDN);
        mpfr_mul(r20862190, r20862185, r20862189, MPFR_RNDN);
        ;
        mpfr_pow(r20862192, r20862183, r20862191, MPFR_RNDN);
        mpfr_mul(r20862193, r20862192, r20862192, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20862196, r20862195, r20862183, MPFR_RNDN);
        mpfr_add(r20862197, r20862194, r20862196, MPFR_RNDN);
        mpfr_mul(r20862198, r20862193, r20862197, MPFR_RNDN);
        mpfr_add(r20862199, r20862190, r20862198, MPFR_RNDN);
        ;
        mpfr_mul(r20862201, r20862183, r20862200, MPFR_RNDN);
        mpfr_mul(r20862202, r20862201, r20862184, MPFR_RNDN);
        ;
        mpfr_add(r20862204, r20862202, r20862203, MPFR_RNDN);
        ;
        mpfr_mul(r20862206, r20862205, r20862183, MPFR_RNDN);
        ;
        mpfr_add(r20862208, r20862206, r20862207, MPFR_RNDN);
        mpfr_mul(r20862209, r20862183, r20862208, MPFR_RNDN);
        mpfr_add(r20862210, r20862204, r20862209, MPFR_RNDN);
        mpfr_add(r20862211, r20862199, r20862210, MPFR_RNDN);
        return mpfr_get_d(r20862211, MPFR_RNDN);
}

