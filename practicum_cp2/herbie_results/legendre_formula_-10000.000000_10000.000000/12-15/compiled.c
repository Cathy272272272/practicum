#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r6862004 = -3.14209;
        float r6862005 = x;
        float r6862006 = r6862004 * r6862005;
        float r6862007 = 124.63623;
        float r6862008 = r6862005 * r6862005;
        float r6862009 = r6862008 * r6862005;
        float r6862010 = r6862007 * r6862009;
        float r6862011 = r6862006 + r6862010;
        float r6862012 = -1420.853027;
        float r6862013 = r6862009 * r6862005;
        float r6862014 = r6862013 * r6862005;
        float r6862015 = r6862012 * r6862014;
        float r6862016 = r6862011 + r6862015;
        float r6862017 = 7104.265137;
        float r6862018 = r6862014 * r6862005;
        float r6862019 = r6862018 * r6862005;
        float r6862020 = r6862017 * r6862019;
        float r6862021 = r6862016 + r6862020;
        float r6862022 = -18155.344238;
        float r6862023 = r6862019 * r6862005;
        float r6862024 = r6862023 * r6862005;
        float r6862025 = r6862022 * r6862024;
        float r6862026 = r6862021 + r6862025;
        float r6862027 = 24757.287598;
        float r6862028 = r6862024 * r6862005;
        float r6862029 = r6862028 * r6862005;
        float r6862030 = r6862027 * r6862029;
        float r6862031 = r6862026 + r6862030;
        float r6862032 = -17139.660645;
        float r6862033 = r6862029 * r6862005;
        float r6862034 = r6862033 * r6862005;
        float r6862035 = r6862032 * r6862034;
        float r6862036 = r6862031 + r6862035;
        float r6862037 = 4733.811035;
        float r6862038 = r6862034 * r6862005;
        float r6862039 = r6862038 * r6862005;
        float r6862040 = r6862037 * r6862039;
        float r6862041 = r6862036 + r6862040;
        return r6862041;
}

double f_id(double x) {
        double r6862042 = -3.14209;
        double r6862043 = x;
        double r6862044 = r6862042 * r6862043;
        double r6862045 = 124.63623;
        double r6862046 = r6862043 * r6862043;
        double r6862047 = r6862046 * r6862043;
        double r6862048 = r6862045 * r6862047;
        double r6862049 = r6862044 + r6862048;
        double r6862050 = -1420.853027;
        double r6862051 = r6862047 * r6862043;
        double r6862052 = r6862051 * r6862043;
        double r6862053 = r6862050 * r6862052;
        double r6862054 = r6862049 + r6862053;
        double r6862055 = 7104.265137;
        double r6862056 = r6862052 * r6862043;
        double r6862057 = r6862056 * r6862043;
        double r6862058 = r6862055 * r6862057;
        double r6862059 = r6862054 + r6862058;
        double r6862060 = -18155.344238;
        double r6862061 = r6862057 * r6862043;
        double r6862062 = r6862061 * r6862043;
        double r6862063 = r6862060 * r6862062;
        double r6862064 = r6862059 + r6862063;
        double r6862065 = 24757.287598;
        double r6862066 = r6862062 * r6862043;
        double r6862067 = r6862066 * r6862043;
        double r6862068 = r6862065 * r6862067;
        double r6862069 = r6862064 + r6862068;
        double r6862070 = -17139.660645;
        double r6862071 = r6862067 * r6862043;
        double r6862072 = r6862071 * r6862043;
        double r6862073 = r6862070 * r6862072;
        double r6862074 = r6862069 + r6862073;
        double r6862075 = 4733.811035;
        double r6862076 = r6862072 * r6862043;
        double r6862077 = r6862076 * r6862043;
        double r6862078 = r6862075 * r6862077;
        double r6862079 = r6862074 + r6862078;
        return r6862079;
}


double f_of(float x) {
        float r6862080 = -3.14209;
        float r6862081 = x;
        float r6862082 = r6862080 * r6862081;
        float r6862083 = 124.63623;
        float r6862084 = r6862081 * r6862081;
        float r6862085 = r6862084 * r6862081;
        float r6862086 = r6862083 * r6862085;
        float r6862087 = r6862082 + r6862086;
        float r6862088 = -1420.853027;
        float r6862089 = r6862085 * r6862081;
        float r6862090 = r6862089 * r6862081;
        float r6862091 = r6862088 * r6862090;
        float r6862092 = r6862087 + r6862091;
        float r6862093 = 7104.265137;
        float r6862094 = r6862090 * r6862081;
        float r6862095 = r6862094 * r6862081;
        float r6862096 = r6862093 * r6862095;
        float r6862097 = r6862092 + r6862096;
        float r6862098 = -18155.344238;
        float r6862099 = r6862095 * r6862081;
        float r6862100 = r6862099 * r6862081;
        float r6862101 = r6862098 * r6862100;
        float r6862102 = r6862097 + r6862101;
        float r6862103 = 24757.287598;
        float r6862104 = r6862100 * r6862081;
        float r6862105 = r6862104 * r6862081;
        float r6862106 = r6862103 * r6862105;
        float r6862107 = r6862102 + r6862106;
        float r6862108 = -17139.660645;
        float r6862109 = r6862105 * r6862081;
        float r6862110 = r6862109 * r6862081;
        float r6862111 = r6862108 * r6862110;
        float r6862112 = r6862107 + r6862111;
        float r6862113 = 4733.811035;
        float r6862114 = r6862110 * r6862081;
        float r6862115 = r6862114 * r6862081;
        float r6862116 = r6862113 * r6862115;
        float r6862117 = r6862112 + r6862116;
        return r6862117;
}

double f_od(double x) {
        double r6862118 = -3.14209;
        double r6862119 = x;
        double r6862120 = r6862118 * r6862119;
        double r6862121 = 124.63623;
        double r6862122 = r6862119 * r6862119;
        double r6862123 = r6862122 * r6862119;
        double r6862124 = r6862121 * r6862123;
        double r6862125 = r6862120 + r6862124;
        double r6862126 = -1420.853027;
        double r6862127 = r6862123 * r6862119;
        double r6862128 = r6862127 * r6862119;
        double r6862129 = r6862126 * r6862128;
        double r6862130 = r6862125 + r6862129;
        double r6862131 = 7104.265137;
        double r6862132 = r6862128 * r6862119;
        double r6862133 = r6862132 * r6862119;
        double r6862134 = r6862131 * r6862133;
        double r6862135 = r6862130 + r6862134;
        double r6862136 = -18155.344238;
        double r6862137 = r6862133 * r6862119;
        double r6862138 = r6862137 * r6862119;
        double r6862139 = r6862136 * r6862138;
        double r6862140 = r6862135 + r6862139;
        double r6862141 = 24757.287598;
        double r6862142 = r6862138 * r6862119;
        double r6862143 = r6862142 * r6862119;
        double r6862144 = r6862141 * r6862143;
        double r6862145 = r6862140 + r6862144;
        double r6862146 = -17139.660645;
        double r6862147 = r6862143 * r6862119;
        double r6862148 = r6862147 * r6862119;
        double r6862149 = r6862146 * r6862148;
        double r6862150 = r6862145 + r6862149;
        double r6862151 = 4733.811035;
        double r6862152 = r6862148 * r6862119;
        double r6862153 = r6862152 * r6862119;
        double r6862154 = r6862151 * r6862153;
        double r6862155 = r6862150 + r6862154;
        return r6862155;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6862156, r6862157, r6862158, r6862159, r6862160, r6862161, r6862162, r6862163, r6862164, r6862165, r6862166, r6862167, r6862168, r6862169, r6862170, r6862171, r6862172, r6862173, r6862174, r6862175, r6862176, r6862177, r6862178, r6862179, r6862180, r6862181, r6862182, r6862183, r6862184, r6862185, r6862186, r6862187, r6862188, r6862189, r6862190, r6862191, r6862192, r6862193;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862156, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6862157);
        mpfr_init(r6862158);
        mpfr_init_set_str(r6862159, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6862160);
        mpfr_init(r6862161);
        mpfr_init(r6862162);
        mpfr_init(r6862163);
        mpfr_init_set_str(r6862164, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6862165);
        mpfr_init(r6862166);
        mpfr_init(r6862167);
        mpfr_init(r6862168);
        mpfr_init_set_str(r6862169, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6862170);
        mpfr_init(r6862171);
        mpfr_init(r6862172);
        mpfr_init(r6862173);
        mpfr_init_set_str(r6862174, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r6862175);
        mpfr_init(r6862176);
        mpfr_init(r6862177);
        mpfr_init(r6862178);
        mpfr_init_set_str(r6862179, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6862180);
        mpfr_init(r6862181);
        mpfr_init(r6862182);
        mpfr_init(r6862183);
        mpfr_init_set_str(r6862184, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r6862185);
        mpfr_init(r6862186);
        mpfr_init(r6862187);
        mpfr_init(r6862188);
        mpfr_init_set_str(r6862189, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6862190);
        mpfr_init(r6862191);
        mpfr_init(r6862192);
        mpfr_init(r6862193);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6862157, x, MPFR_RNDN);
        mpfr_mul(r6862158, r6862156, r6862157, MPFR_RNDN);
        ;
        mpfr_mul(r6862160, r6862157, r6862157, MPFR_RNDN);
        mpfr_mul(r6862161, r6862160, r6862157, MPFR_RNDN);
        mpfr_mul(r6862162, r6862159, r6862161, MPFR_RNDN);
        mpfr_add(r6862163, r6862158, r6862162, MPFR_RNDN);
        ;
        mpfr_mul(r6862165, r6862161, r6862157, MPFR_RNDN);
        mpfr_mul(r6862166, r6862165, r6862157, MPFR_RNDN);
        mpfr_mul(r6862167, r6862164, r6862166, MPFR_RNDN);
        mpfr_add(r6862168, r6862163, r6862167, MPFR_RNDN);
        ;
        mpfr_mul(r6862170, r6862166, r6862157, MPFR_RNDN);
        mpfr_mul(r6862171, r6862170, r6862157, MPFR_RNDN);
        mpfr_mul(r6862172, r6862169, r6862171, MPFR_RNDN);
        mpfr_add(r6862173, r6862168, r6862172, MPFR_RNDN);
        ;
        mpfr_mul(r6862175, r6862171, r6862157, MPFR_RNDN);
        mpfr_mul(r6862176, r6862175, r6862157, MPFR_RNDN);
        mpfr_mul(r6862177, r6862174, r6862176, MPFR_RNDN);
        mpfr_add(r6862178, r6862173, r6862177, MPFR_RNDN);
        ;
        mpfr_mul(r6862180, r6862176, r6862157, MPFR_RNDN);
        mpfr_mul(r6862181, r6862180, r6862157, MPFR_RNDN);
        mpfr_mul(r6862182, r6862179, r6862181, MPFR_RNDN);
        mpfr_add(r6862183, r6862178, r6862182, MPFR_RNDN);
        ;
        mpfr_mul(r6862185, r6862181, r6862157, MPFR_RNDN);
        mpfr_mul(r6862186, r6862185, r6862157, MPFR_RNDN);
        mpfr_mul(r6862187, r6862184, r6862186, MPFR_RNDN);
        mpfr_add(r6862188, r6862183, r6862187, MPFR_RNDN);
        ;
        mpfr_mul(r6862190, r6862186, r6862157, MPFR_RNDN);
        mpfr_mul(r6862191, r6862190, r6862157, MPFR_RNDN);
        mpfr_mul(r6862192, r6862189, r6862191, MPFR_RNDN);
        mpfr_add(r6862193, r6862188, r6862192, MPFR_RNDN);
        return mpfr_get_d(r6862193, MPFR_RNDN);
}

static mpfr_t r6862194, r6862195, r6862196, r6862197, r6862198, r6862199, r6862200, r6862201, r6862202, r6862203, r6862204, r6862205, r6862206, r6862207, r6862208, r6862209, r6862210, r6862211, r6862212, r6862213, r6862214, r6862215, r6862216, r6862217, r6862218, r6862219, r6862220, r6862221, r6862222, r6862223, r6862224, r6862225, r6862226, r6862227, r6862228, r6862229, r6862230, r6862231;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862194, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6862195);
        mpfr_init(r6862196);
        mpfr_init_set_str(r6862197, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6862198);
        mpfr_init(r6862199);
        mpfr_init(r6862200);
        mpfr_init(r6862201);
        mpfr_init_set_str(r6862202, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6862203);
        mpfr_init(r6862204);
        mpfr_init(r6862205);
        mpfr_init(r6862206);
        mpfr_init_set_str(r6862207, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6862208);
        mpfr_init(r6862209);
        mpfr_init(r6862210);
        mpfr_init(r6862211);
        mpfr_init_set_str(r6862212, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r6862213);
        mpfr_init(r6862214);
        mpfr_init(r6862215);
        mpfr_init(r6862216);
        mpfr_init_set_str(r6862217, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6862218);
        mpfr_init(r6862219);
        mpfr_init(r6862220);
        mpfr_init(r6862221);
        mpfr_init_set_str(r6862222, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r6862223);
        mpfr_init(r6862224);
        mpfr_init(r6862225);
        mpfr_init(r6862226);
        mpfr_init_set_str(r6862227, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6862228);
        mpfr_init(r6862229);
        mpfr_init(r6862230);
        mpfr_init(r6862231);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6862195, x, MPFR_RNDN);
        mpfr_mul(r6862196, r6862194, r6862195, MPFR_RNDN);
        ;
        mpfr_mul(r6862198, r6862195, r6862195, MPFR_RNDN);
        mpfr_mul(r6862199, r6862198, r6862195, MPFR_RNDN);
        mpfr_mul(r6862200, r6862197, r6862199, MPFR_RNDN);
        mpfr_add(r6862201, r6862196, r6862200, MPFR_RNDN);
        ;
        mpfr_mul(r6862203, r6862199, r6862195, MPFR_RNDN);
        mpfr_mul(r6862204, r6862203, r6862195, MPFR_RNDN);
        mpfr_mul(r6862205, r6862202, r6862204, MPFR_RNDN);
        mpfr_add(r6862206, r6862201, r6862205, MPFR_RNDN);
        ;
        mpfr_mul(r6862208, r6862204, r6862195, MPFR_RNDN);
        mpfr_mul(r6862209, r6862208, r6862195, MPFR_RNDN);
        mpfr_mul(r6862210, r6862207, r6862209, MPFR_RNDN);
        mpfr_add(r6862211, r6862206, r6862210, MPFR_RNDN);
        ;
        mpfr_mul(r6862213, r6862209, r6862195, MPFR_RNDN);
        mpfr_mul(r6862214, r6862213, r6862195, MPFR_RNDN);
        mpfr_mul(r6862215, r6862212, r6862214, MPFR_RNDN);
        mpfr_add(r6862216, r6862211, r6862215, MPFR_RNDN);
        ;
        mpfr_mul(r6862218, r6862214, r6862195, MPFR_RNDN);
        mpfr_mul(r6862219, r6862218, r6862195, MPFR_RNDN);
        mpfr_mul(r6862220, r6862217, r6862219, MPFR_RNDN);
        mpfr_add(r6862221, r6862216, r6862220, MPFR_RNDN);
        ;
        mpfr_mul(r6862223, r6862219, r6862195, MPFR_RNDN);
        mpfr_mul(r6862224, r6862223, r6862195, MPFR_RNDN);
        mpfr_mul(r6862225, r6862222, r6862224, MPFR_RNDN);
        mpfr_add(r6862226, r6862221, r6862225, MPFR_RNDN);
        ;
        mpfr_mul(r6862228, r6862224, r6862195, MPFR_RNDN);
        mpfr_mul(r6862229, r6862228, r6862195, MPFR_RNDN);
        mpfr_mul(r6862230, r6862227, r6862229, MPFR_RNDN);
        mpfr_add(r6862231, r6862226, r6862230, MPFR_RNDN);
        return mpfr_get_d(r6862231, MPFR_RNDN);
}

static mpfr_t r6862232, r6862233, r6862234, r6862235, r6862236, r6862237, r6862238, r6862239, r6862240, r6862241, r6862242, r6862243, r6862244, r6862245, r6862246, r6862247, r6862248, r6862249, r6862250, r6862251, r6862252, r6862253, r6862254, r6862255, r6862256, r6862257, r6862258, r6862259, r6862260, r6862261, r6862262, r6862263, r6862264, r6862265, r6862266, r6862267, r6862268, r6862269;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862232, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6862233);
        mpfr_init(r6862234);
        mpfr_init_set_str(r6862235, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6862236);
        mpfr_init(r6862237);
        mpfr_init(r6862238);
        mpfr_init(r6862239);
        mpfr_init_set_str(r6862240, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6862241);
        mpfr_init(r6862242);
        mpfr_init(r6862243);
        mpfr_init(r6862244);
        mpfr_init_set_str(r6862245, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6862246);
        mpfr_init(r6862247);
        mpfr_init(r6862248);
        mpfr_init(r6862249);
        mpfr_init_set_str(r6862250, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r6862251);
        mpfr_init(r6862252);
        mpfr_init(r6862253);
        mpfr_init(r6862254);
        mpfr_init_set_str(r6862255, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6862256);
        mpfr_init(r6862257);
        mpfr_init(r6862258);
        mpfr_init(r6862259);
        mpfr_init_set_str(r6862260, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r6862261);
        mpfr_init(r6862262);
        mpfr_init(r6862263);
        mpfr_init(r6862264);
        mpfr_init_set_str(r6862265, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6862266);
        mpfr_init(r6862267);
        mpfr_init(r6862268);
        mpfr_init(r6862269);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6862233, x, MPFR_RNDN);
        mpfr_mul(r6862234, r6862232, r6862233, MPFR_RNDN);
        ;
        mpfr_mul(r6862236, r6862233, r6862233, MPFR_RNDN);
        mpfr_mul(r6862237, r6862236, r6862233, MPFR_RNDN);
        mpfr_mul(r6862238, r6862235, r6862237, MPFR_RNDN);
        mpfr_add(r6862239, r6862234, r6862238, MPFR_RNDN);
        ;
        mpfr_mul(r6862241, r6862237, r6862233, MPFR_RNDN);
        mpfr_mul(r6862242, r6862241, r6862233, MPFR_RNDN);
        mpfr_mul(r6862243, r6862240, r6862242, MPFR_RNDN);
        mpfr_add(r6862244, r6862239, r6862243, MPFR_RNDN);
        ;
        mpfr_mul(r6862246, r6862242, r6862233, MPFR_RNDN);
        mpfr_mul(r6862247, r6862246, r6862233, MPFR_RNDN);
        mpfr_mul(r6862248, r6862245, r6862247, MPFR_RNDN);
        mpfr_add(r6862249, r6862244, r6862248, MPFR_RNDN);
        ;
        mpfr_mul(r6862251, r6862247, r6862233, MPFR_RNDN);
        mpfr_mul(r6862252, r6862251, r6862233, MPFR_RNDN);
        mpfr_mul(r6862253, r6862250, r6862252, MPFR_RNDN);
        mpfr_add(r6862254, r6862249, r6862253, MPFR_RNDN);
        ;
        mpfr_mul(r6862256, r6862252, r6862233, MPFR_RNDN);
        mpfr_mul(r6862257, r6862256, r6862233, MPFR_RNDN);
        mpfr_mul(r6862258, r6862255, r6862257, MPFR_RNDN);
        mpfr_add(r6862259, r6862254, r6862258, MPFR_RNDN);
        ;
        mpfr_mul(r6862261, r6862257, r6862233, MPFR_RNDN);
        mpfr_mul(r6862262, r6862261, r6862233, MPFR_RNDN);
        mpfr_mul(r6862263, r6862260, r6862262, MPFR_RNDN);
        mpfr_add(r6862264, r6862259, r6862263, MPFR_RNDN);
        ;
        mpfr_mul(r6862266, r6862262, r6862233, MPFR_RNDN);
        mpfr_mul(r6862267, r6862266, r6862233, MPFR_RNDN);
        mpfr_mul(r6862268, r6862265, r6862267, MPFR_RNDN);
        mpfr_add(r6862269, r6862264, r6862268, MPFR_RNDN);
        return mpfr_get_d(r6862269, MPFR_RNDN);
}

