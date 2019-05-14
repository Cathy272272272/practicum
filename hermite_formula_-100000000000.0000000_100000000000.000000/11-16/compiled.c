#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r11055006 = 518918400.0;
        float r11055007 = -8302694400.0;
        float r11055008 = x;
        float r11055009 = r11055008 * r11055008;
        float r11055010 = r11055007 * r11055009;
        float r11055011 = r11055006 + r11055010;
        float r11055012 = 19372953600.0;
        float r11055013 = r11055009 * r11055008;
        float r11055014 = r11055013 * r11055008;
        float r11055015 = r11055012 * r11055014;
        float r11055016 = r11055011 + r11055015;
        float r11055017 = -15498362880.0;
        float r11055018 = r11055014 * r11055008;
        float r11055019 = r11055018 * r11055008;
        float r11055020 = r11055017 * r11055019;
        float r11055021 = r11055016 + r11055020;
        float r11055022 = 5535129600.0;
        float r11055023 = r11055019 * r11055008;
        float r11055024 = r11055023 * r11055008;
        float r11055025 = r11055022 * r11055024;
        float r11055026 = r11055021 + r11055025;
        float r11055027 = -984023040.0;
        float r11055028 = r11055024 * r11055008;
        float r11055029 = r11055028 * r11055008;
        float r11055030 = r11055027 * r11055029;
        float r11055031 = r11055026 + r11055030;
        float r11055032 = 89456640.0;
        float r11055033 = r11055029 * r11055008;
        float r11055034 = r11055033 * r11055008;
        float r11055035 = r11055032 * r11055034;
        float r11055036 = r11055031 + r11055035;
        float r11055037 = -3932160.0;
        float r11055038 = r11055034 * r11055008;
        float r11055039 = r11055038 * r11055008;
        float r11055040 = r11055037 * r11055039;
        float r11055041 = r11055036 + r11055040;
        float r11055042 = 65536.0;
        float r11055043 = r11055039 * r11055008;
        float r11055044 = r11055043 * r11055008;
        float r11055045 = r11055042 * r11055044;
        float r11055046 = r11055041 + r11055045;
        return r11055046;
}

double f_id(double x) {
        double r11055047 = 518918400.0;
        double r11055048 = -8302694400.0;
        double r11055049 = x;
        double r11055050 = r11055049 * r11055049;
        double r11055051 = r11055048 * r11055050;
        double r11055052 = r11055047 + r11055051;
        double r11055053 = 19372953600.0;
        double r11055054 = r11055050 * r11055049;
        double r11055055 = r11055054 * r11055049;
        double r11055056 = r11055053 * r11055055;
        double r11055057 = r11055052 + r11055056;
        double r11055058 = -15498362880.0;
        double r11055059 = r11055055 * r11055049;
        double r11055060 = r11055059 * r11055049;
        double r11055061 = r11055058 * r11055060;
        double r11055062 = r11055057 + r11055061;
        double r11055063 = 5535129600.0;
        double r11055064 = r11055060 * r11055049;
        double r11055065 = r11055064 * r11055049;
        double r11055066 = r11055063 * r11055065;
        double r11055067 = r11055062 + r11055066;
        double r11055068 = -984023040.0;
        double r11055069 = r11055065 * r11055049;
        double r11055070 = r11055069 * r11055049;
        double r11055071 = r11055068 * r11055070;
        double r11055072 = r11055067 + r11055071;
        double r11055073 = 89456640.0;
        double r11055074 = r11055070 * r11055049;
        double r11055075 = r11055074 * r11055049;
        double r11055076 = r11055073 * r11055075;
        double r11055077 = r11055072 + r11055076;
        double r11055078 = -3932160.0;
        double r11055079 = r11055075 * r11055049;
        double r11055080 = r11055079 * r11055049;
        double r11055081 = r11055078 * r11055080;
        double r11055082 = r11055077 + r11055081;
        double r11055083 = 65536.0;
        double r11055084 = r11055080 * r11055049;
        double r11055085 = r11055084 * r11055049;
        double r11055086 = r11055083 * r11055085;
        double r11055087 = r11055082 + r11055086;
        return r11055087;
}


double f_of(float x) {
        float r11055088 = x;
        float r11055089 = r11055088 * r11055088;
        float r11055090 = r11055089 * r11055089;
        float r11055091 = 3;
        float r11055092 = pow(r11055089, r11055091);
        float r11055093 = r11055092 * r11055090;
        float r11055094 = r11055090 * r11055093;
        float r11055095 = 65536.0;
        float r11055096 = r11055088 * r11055095;
        float r11055097 = r11055088 * r11055096;
        float r11055098 = -3932160.0;
        float r11055099 = r11055097 + r11055098;
        float r11055100 = r11055094 * r11055099;
        float r11055101 = 4;
        float r11055102 = pow(r11055088, r11055101);
        float r11055103 = 19372953600.0;
        float r11055104 = r11055102 * r11055103;
        float r11055105 = -8302694400.0;
        float r11055106 = r11055088 * r11055105;
        float r11055107 = r11055106 * r11055088;
        float r11055108 = r11055104 + r11055107;
        float r11055109 = 518918400.0;
        float r11055110 = r11055108 + r11055109;
        float r11055111 = -15498362880.0;
        float r11055112 = 5535129600.0;
        float r11055113 = r11055112 * r11055089;
        float r11055114 = r11055111 + r11055113;
        float r11055115 = r11055092 * r11055114;
        float r11055116 = r11055110 + r11055115;
        float r11055117 = r11055100 + r11055116;
        float r11055118 = -984023040.0;
        float r11055119 = 89456640.0;
        float r11055120 = r11055119 * r11055088;
        float r11055121 = r11055088 * r11055120;
        float r11055122 = r11055118 + r11055121;
        float r11055123 = r11055093 * r11055122;
        float r11055124 = r11055117 + r11055123;
        return r11055124;
}

double f_od(double x) {
        double r11055125 = x;
        double r11055126 = r11055125 * r11055125;
        double r11055127 = r11055126 * r11055126;
        double r11055128 = 3;
        double r11055129 = pow(r11055126, r11055128);
        double r11055130 = r11055129 * r11055127;
        double r11055131 = r11055127 * r11055130;
        double r11055132 = 65536.0;
        double r11055133 = r11055125 * r11055132;
        double r11055134 = r11055125 * r11055133;
        double r11055135 = -3932160.0;
        double r11055136 = r11055134 + r11055135;
        double r11055137 = r11055131 * r11055136;
        double r11055138 = 4;
        double r11055139 = pow(r11055125, r11055138);
        double r11055140 = 19372953600.0;
        double r11055141 = r11055139 * r11055140;
        double r11055142 = -8302694400.0;
        double r11055143 = r11055125 * r11055142;
        double r11055144 = r11055143 * r11055125;
        double r11055145 = r11055141 + r11055144;
        double r11055146 = 518918400.0;
        double r11055147 = r11055145 + r11055146;
        double r11055148 = -15498362880.0;
        double r11055149 = 5535129600.0;
        double r11055150 = r11055149 * r11055126;
        double r11055151 = r11055148 + r11055150;
        double r11055152 = r11055129 * r11055151;
        double r11055153 = r11055147 + r11055152;
        double r11055154 = r11055137 + r11055153;
        double r11055155 = -984023040.0;
        double r11055156 = 89456640.0;
        double r11055157 = r11055156 * r11055125;
        double r11055158 = r11055125 * r11055157;
        double r11055159 = r11055155 + r11055158;
        double r11055160 = r11055130 * r11055159;
        double r11055161 = r11055154 + r11055160;
        return r11055161;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11055162, r11055163, r11055164, r11055165, r11055166, r11055167, r11055168, r11055169, r11055170, r11055171, r11055172, r11055173, r11055174, r11055175, r11055176, r11055177, r11055178, r11055179, r11055180, r11055181, r11055182, r11055183, r11055184, r11055185, r11055186, r11055187, r11055188, r11055189, r11055190, r11055191, r11055192, r11055193, r11055194, r11055195, r11055196, r11055197, r11055198, r11055199, r11055200, r11055201, r11055202;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11055162, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055163, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r11055164);
        mpfr_init(r11055165);
        mpfr_init(r11055166);
        mpfr_init(r11055167);
        mpfr_init_set_str(r11055168, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r11055169);
        mpfr_init(r11055170);
        mpfr_init(r11055171);
        mpfr_init(r11055172);
        mpfr_init_set_str(r11055173, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r11055174);
        mpfr_init(r11055175);
        mpfr_init(r11055176);
        mpfr_init(r11055177);
        mpfr_init_set_str(r11055178, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r11055179);
        mpfr_init(r11055180);
        mpfr_init(r11055181);
        mpfr_init(r11055182);
        mpfr_init_set_str(r11055183, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r11055184);
        mpfr_init(r11055185);
        mpfr_init(r11055186);
        mpfr_init(r11055187);
        mpfr_init_set_str(r11055188, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r11055189);
        mpfr_init(r11055190);
        mpfr_init(r11055191);
        mpfr_init(r11055192);
        mpfr_init_set_str(r11055193, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r11055194);
        mpfr_init(r11055195);
        mpfr_init(r11055196);
        mpfr_init(r11055197);
        mpfr_init_set_str(r11055198, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r11055199);
        mpfr_init(r11055200);
        mpfr_init(r11055201);
        mpfr_init(r11055202);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11055164, x, MPFR_RNDN);
        mpfr_mul(r11055165, r11055164, r11055164, MPFR_RNDN);
        mpfr_mul(r11055166, r11055163, r11055165, MPFR_RNDN);
        mpfr_add(r11055167, r11055162, r11055166, MPFR_RNDN);
        ;
        mpfr_mul(r11055169, r11055165, r11055164, MPFR_RNDN);
        mpfr_mul(r11055170, r11055169, r11055164, MPFR_RNDN);
        mpfr_mul(r11055171, r11055168, r11055170, MPFR_RNDN);
        mpfr_add(r11055172, r11055167, r11055171, MPFR_RNDN);
        ;
        mpfr_mul(r11055174, r11055170, r11055164, MPFR_RNDN);
        mpfr_mul(r11055175, r11055174, r11055164, MPFR_RNDN);
        mpfr_mul(r11055176, r11055173, r11055175, MPFR_RNDN);
        mpfr_add(r11055177, r11055172, r11055176, MPFR_RNDN);
        ;
        mpfr_mul(r11055179, r11055175, r11055164, MPFR_RNDN);
        mpfr_mul(r11055180, r11055179, r11055164, MPFR_RNDN);
        mpfr_mul(r11055181, r11055178, r11055180, MPFR_RNDN);
        mpfr_add(r11055182, r11055177, r11055181, MPFR_RNDN);
        ;
        mpfr_mul(r11055184, r11055180, r11055164, MPFR_RNDN);
        mpfr_mul(r11055185, r11055184, r11055164, MPFR_RNDN);
        mpfr_mul(r11055186, r11055183, r11055185, MPFR_RNDN);
        mpfr_add(r11055187, r11055182, r11055186, MPFR_RNDN);
        ;
        mpfr_mul(r11055189, r11055185, r11055164, MPFR_RNDN);
        mpfr_mul(r11055190, r11055189, r11055164, MPFR_RNDN);
        mpfr_mul(r11055191, r11055188, r11055190, MPFR_RNDN);
        mpfr_add(r11055192, r11055187, r11055191, MPFR_RNDN);
        ;
        mpfr_mul(r11055194, r11055190, r11055164, MPFR_RNDN);
        mpfr_mul(r11055195, r11055194, r11055164, MPFR_RNDN);
        mpfr_mul(r11055196, r11055193, r11055195, MPFR_RNDN);
        mpfr_add(r11055197, r11055192, r11055196, MPFR_RNDN);
        ;
        mpfr_mul(r11055199, r11055195, r11055164, MPFR_RNDN);
        mpfr_mul(r11055200, r11055199, r11055164, MPFR_RNDN);
        mpfr_mul(r11055201, r11055198, r11055200, MPFR_RNDN);
        mpfr_add(r11055202, r11055197, r11055201, MPFR_RNDN);
        return mpfr_get_d(r11055202, MPFR_RNDN);
}

static mpfr_t r11055203, r11055204, r11055205, r11055206, r11055207, r11055208, r11055209, r11055210, r11055211, r11055212, r11055213, r11055214, r11055215, r11055216, r11055217, r11055218, r11055219, r11055220, r11055221, r11055222, r11055223, r11055224, r11055225, r11055226, r11055227, r11055228, r11055229, r11055230, r11055231, r11055232, r11055233, r11055234, r11055235, r11055236, r11055237, r11055238, r11055239;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11055203);
        mpfr_init(r11055204);
        mpfr_init(r11055205);
        mpfr_init_set_str(r11055206, "3", 10, MPFR_RNDN);
        mpfr_init(r11055207);
        mpfr_init(r11055208);
        mpfr_init(r11055209);
        mpfr_init_set_str(r11055210, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r11055211);
        mpfr_init(r11055212);
        mpfr_init_set_str(r11055213, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r11055214);
        mpfr_init(r11055215);
        mpfr_init_set_str(r11055216, "4", 10, MPFR_RNDN);
        mpfr_init(r11055217);
        mpfr_init_set_str(r11055218, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r11055219);
        mpfr_init_set_str(r11055220, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r11055221);
        mpfr_init(r11055222);
        mpfr_init(r11055223);
        mpfr_init_set_str(r11055224, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r11055225);
        mpfr_init_set_str(r11055226, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055227, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r11055228);
        mpfr_init(r11055229);
        mpfr_init(r11055230);
        mpfr_init(r11055231);
        mpfr_init(r11055232);
        mpfr_init_set_str(r11055233, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055234, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r11055235);
        mpfr_init(r11055236);
        mpfr_init(r11055237);
        mpfr_init(r11055238);
        mpfr_init(r11055239);
}

double f_fm(double x) {
        mpfr_set_d(r11055203, x, MPFR_RNDN);
        mpfr_mul(r11055204, r11055203, r11055203, MPFR_RNDN);
        mpfr_mul(r11055205, r11055204, r11055204, MPFR_RNDN);
        ;
        mpfr_pow(r11055207, r11055204, r11055206, MPFR_RNDN);
        mpfr_mul(r11055208, r11055207, r11055205, MPFR_RNDN);
        mpfr_mul(r11055209, r11055205, r11055208, MPFR_RNDN);
        ;
        mpfr_mul(r11055211, r11055203, r11055210, MPFR_RNDN);
        mpfr_mul(r11055212, r11055203, r11055211, MPFR_RNDN);
        ;
        mpfr_add(r11055214, r11055212, r11055213, MPFR_RNDN);
        mpfr_mul(r11055215, r11055209, r11055214, MPFR_RNDN);
        ;
        mpfr_pow(r11055217, r11055203, r11055216, MPFR_RNDN);
        ;
        mpfr_mul(r11055219, r11055217, r11055218, MPFR_RNDN);
        ;
        mpfr_mul(r11055221, r11055203, r11055220, MPFR_RNDN);
        mpfr_mul(r11055222, r11055221, r11055203, MPFR_RNDN);
        mpfr_add(r11055223, r11055219, r11055222, MPFR_RNDN);
        ;
        mpfr_add(r11055225, r11055223, r11055224, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055228, r11055227, r11055204, MPFR_RNDN);
        mpfr_add(r11055229, r11055226, r11055228, MPFR_RNDN);
        mpfr_mul(r11055230, r11055207, r11055229, MPFR_RNDN);
        mpfr_add(r11055231, r11055225, r11055230, MPFR_RNDN);
        mpfr_add(r11055232, r11055215, r11055231, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055235, r11055234, r11055203, MPFR_RNDN);
        mpfr_mul(r11055236, r11055203, r11055235, MPFR_RNDN);
        mpfr_add(r11055237, r11055233, r11055236, MPFR_RNDN);
        mpfr_mul(r11055238, r11055208, r11055237, MPFR_RNDN);
        mpfr_add(r11055239, r11055232, r11055238, MPFR_RNDN);
        return mpfr_get_d(r11055239, MPFR_RNDN);
}

static mpfr_t r11055240, r11055241, r11055242, r11055243, r11055244, r11055245, r11055246, r11055247, r11055248, r11055249, r11055250, r11055251, r11055252, r11055253, r11055254, r11055255, r11055256, r11055257, r11055258, r11055259, r11055260, r11055261, r11055262, r11055263, r11055264, r11055265, r11055266, r11055267, r11055268, r11055269, r11055270, r11055271, r11055272, r11055273, r11055274, r11055275, r11055276;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11055240);
        mpfr_init(r11055241);
        mpfr_init(r11055242);
        mpfr_init_set_str(r11055243, "3", 10, MPFR_RNDN);
        mpfr_init(r11055244);
        mpfr_init(r11055245);
        mpfr_init(r11055246);
        mpfr_init_set_str(r11055247, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r11055248);
        mpfr_init(r11055249);
        mpfr_init_set_str(r11055250, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r11055251);
        mpfr_init(r11055252);
        mpfr_init_set_str(r11055253, "4", 10, MPFR_RNDN);
        mpfr_init(r11055254);
        mpfr_init_set_str(r11055255, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r11055256);
        mpfr_init_set_str(r11055257, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r11055258);
        mpfr_init(r11055259);
        mpfr_init(r11055260);
        mpfr_init_set_str(r11055261, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r11055262);
        mpfr_init_set_str(r11055263, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055264, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r11055265);
        mpfr_init(r11055266);
        mpfr_init(r11055267);
        mpfr_init(r11055268);
        mpfr_init(r11055269);
        mpfr_init_set_str(r11055270, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055271, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r11055272);
        mpfr_init(r11055273);
        mpfr_init(r11055274);
        mpfr_init(r11055275);
        mpfr_init(r11055276);
}

double f_dm(double x) {
        mpfr_set_d(r11055240, x, MPFR_RNDN);
        mpfr_mul(r11055241, r11055240, r11055240, MPFR_RNDN);
        mpfr_mul(r11055242, r11055241, r11055241, MPFR_RNDN);
        ;
        mpfr_pow(r11055244, r11055241, r11055243, MPFR_RNDN);
        mpfr_mul(r11055245, r11055244, r11055242, MPFR_RNDN);
        mpfr_mul(r11055246, r11055242, r11055245, MPFR_RNDN);
        ;
        mpfr_mul(r11055248, r11055240, r11055247, MPFR_RNDN);
        mpfr_mul(r11055249, r11055240, r11055248, MPFR_RNDN);
        ;
        mpfr_add(r11055251, r11055249, r11055250, MPFR_RNDN);
        mpfr_mul(r11055252, r11055246, r11055251, MPFR_RNDN);
        ;
        mpfr_pow(r11055254, r11055240, r11055253, MPFR_RNDN);
        ;
        mpfr_mul(r11055256, r11055254, r11055255, MPFR_RNDN);
        ;
        mpfr_mul(r11055258, r11055240, r11055257, MPFR_RNDN);
        mpfr_mul(r11055259, r11055258, r11055240, MPFR_RNDN);
        mpfr_add(r11055260, r11055256, r11055259, MPFR_RNDN);
        ;
        mpfr_add(r11055262, r11055260, r11055261, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055265, r11055264, r11055241, MPFR_RNDN);
        mpfr_add(r11055266, r11055263, r11055265, MPFR_RNDN);
        mpfr_mul(r11055267, r11055244, r11055266, MPFR_RNDN);
        mpfr_add(r11055268, r11055262, r11055267, MPFR_RNDN);
        mpfr_add(r11055269, r11055252, r11055268, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055272, r11055271, r11055240, MPFR_RNDN);
        mpfr_mul(r11055273, r11055240, r11055272, MPFR_RNDN);
        mpfr_add(r11055274, r11055270, r11055273, MPFR_RNDN);
        mpfr_mul(r11055275, r11055245, r11055274, MPFR_RNDN);
        mpfr_add(r11055276, r11055269, r11055275, MPFR_RNDN);
        return mpfr_get_d(r11055276, MPFR_RNDN);
}

