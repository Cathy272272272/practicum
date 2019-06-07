#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r3750981 = 1.0;
        float r3750982 = -15.0;
        float r3750983 = x;
        float r3750984 = r3750982 * r3750983;
        float r3750985 = r3750981 + r3750984;
        float r3750986 = 52.5;
        float r3750987 = r3750983 * r3750983;
        float r3750988 = r3750986 * r3750987;
        float r3750989 = r3750985 + r3750988;
        float r3750990 = -75.833333;
        float r3750991 = r3750987 * r3750983;
        float r3750992 = r3750990 * r3750991;
        float r3750993 = r3750989 + r3750992;
        float r3750994 = 56.875;
        float r3750995 = r3750991 * r3750983;
        float r3750996 = r3750994 * r3750995;
        float r3750997 = r3750993 + r3750996;
        float r3750998 = -25.025;
        float r3750999 = r3750995 * r3750983;
        float r3751000 = r3750998 * r3750999;
        float r3751001 = r3750997 + r3751000;
        float r3751002 = 6.951389;
        float r3751003 = r3750999 * r3750983;
        float r3751004 = r3751002 * r3751003;
        float r3751005 = r3751001 + r3751004;
        float r3751006 = -1.276786;
        float r3751007 = r3751003 * r3750983;
        float r3751008 = r3751006 * r3751007;
        float r3751009 = r3751005 + r3751008;
        float r3751010 = 0.159598;
        float r3751011 = r3751007 * r3750983;
        float r3751012 = r3751010 * r3751011;
        float r3751013 = r3751009 + r3751012;
        float r3751014 = -0.013792;
        float r3751015 = r3751011 * r3750983;
        float r3751016 = r3751014 * r3751015;
        float r3751017 = r3751013 + r3751016;
        float r3751018 = 0.000828;
        float r3751019 = r3751015 * r3750983;
        float r3751020 = r3751018 * r3751019;
        float r3751021 = r3751017 + r3751020;
        float r3751022 = -3.4e-05;
        float r3751023 = r3751019 * r3750983;
        float r3751024 = r3751022 * r3751023;
        float r3751025 = r3751021 + r3751024;
        float r3751026 = 1e-06;
        float r3751027 = r3751023 * r3750983;
        float r3751028 = r3751026 * r3751027;
        float r3751029 = r3751025 + r3751028;
        return r3751029;
}

double f_id(double x) {
        double r3751030 = 1.0;
        double r3751031 = -15.0;
        double r3751032 = x;
        double r3751033 = r3751031 * r3751032;
        double r3751034 = r3751030 + r3751033;
        double r3751035 = 52.5;
        double r3751036 = r3751032 * r3751032;
        double r3751037 = r3751035 * r3751036;
        double r3751038 = r3751034 + r3751037;
        double r3751039 = -75.833333;
        double r3751040 = r3751036 * r3751032;
        double r3751041 = r3751039 * r3751040;
        double r3751042 = r3751038 + r3751041;
        double r3751043 = 56.875;
        double r3751044 = r3751040 * r3751032;
        double r3751045 = r3751043 * r3751044;
        double r3751046 = r3751042 + r3751045;
        double r3751047 = -25.025;
        double r3751048 = r3751044 * r3751032;
        double r3751049 = r3751047 * r3751048;
        double r3751050 = r3751046 + r3751049;
        double r3751051 = 6.951389;
        double r3751052 = r3751048 * r3751032;
        double r3751053 = r3751051 * r3751052;
        double r3751054 = r3751050 + r3751053;
        double r3751055 = -1.276786;
        double r3751056 = r3751052 * r3751032;
        double r3751057 = r3751055 * r3751056;
        double r3751058 = r3751054 + r3751057;
        double r3751059 = 0.159598;
        double r3751060 = r3751056 * r3751032;
        double r3751061 = r3751059 * r3751060;
        double r3751062 = r3751058 + r3751061;
        double r3751063 = -0.013792;
        double r3751064 = r3751060 * r3751032;
        double r3751065 = r3751063 * r3751064;
        double r3751066 = r3751062 + r3751065;
        double r3751067 = 0.000828;
        double r3751068 = r3751064 * r3751032;
        double r3751069 = r3751067 * r3751068;
        double r3751070 = r3751066 + r3751069;
        double r3751071 = -3.4e-05;
        double r3751072 = r3751068 * r3751032;
        double r3751073 = r3751071 * r3751072;
        double r3751074 = r3751070 + r3751073;
        double r3751075 = 1e-06;
        double r3751076 = r3751072 * r3751032;
        double r3751077 = r3751075 * r3751076;
        double r3751078 = r3751074 + r3751077;
        return r3751078;
}


double f_of(float x) {
        float r3751079 = 1e-06;
        float r3751080 = x;
        float r3751081 = r3751080 * r3751080;
        float r3751082 = r3751079 * r3751081;
        float r3751083 = 3;
        float r3751084 = pow(r3751080, r3751083);
        float r3751085 = r3751084 * r3751084;
        float r3751086 = r3751081 * r3751081;
        float r3751087 = r3751085 * r3751086;
        float r3751088 = r3751082 * r3751087;
        float r3751089 = r3751084 * r3751085;
        float r3751090 = -3.4e-05;
        float r3751091 = r3751090 * r3751081;
        float r3751092 = 0.000828;
        float r3751093 = r3751092 * r3751080;
        float r3751094 = r3751091 + r3751093;
        float r3751095 = r3751089 * r3751094;
        float r3751096 = r3751088 + r3751095;
        float r3751097 = -25.025;
        float r3751098 = 5;
        float r3751099 = pow(r3751080, r3751098);
        float r3751100 = r3751097 * r3751099;
        float r3751101 = 1.0;
        float r3751102 = r3751100 + r3751101;
        float r3751103 = 52.5;
        float r3751104 = r3751080 * r3751103;
        float r3751105 = -15.0;
        float r3751106 = r3751104 + r3751105;
        float r3751107 = r3751106 * r3751080;
        float r3751108 = -75.833333;
        float r3751109 = 56.875;
        float r3751110 = r3751109 * r3751080;
        float r3751111 = r3751108 + r3751110;
        float r3751112 = r3751084 * r3751111;
        float r3751113 = r3751107 + r3751112;
        float r3751114 = r3751102 + r3751113;
        float r3751115 = r3751086 * r3751086;
        float r3751116 = -0.013792;
        float r3751117 = r3751116 * r3751080;
        float r3751118 = 0.159598;
        float r3751119 = r3751117 + r3751118;
        float r3751120 = r3751115 * r3751119;
        float r3751121 = -1.276786;
        float r3751122 = r3751121 * r3751080;
        float r3751123 = 6.951389;
        float r3751124 = r3751122 + r3751123;
        float r3751125 = r3751085 * r3751124;
        float r3751126 = r3751120 + r3751125;
        float r3751127 = r3751114 + r3751126;
        float r3751128 = r3751096 + r3751127;
        return r3751128;
}

double f_od(double x) {
        double r3751129 = 1e-06;
        double r3751130 = x;
        double r3751131 = r3751130 * r3751130;
        double r3751132 = r3751129 * r3751131;
        double r3751133 = 3;
        double r3751134 = pow(r3751130, r3751133);
        double r3751135 = r3751134 * r3751134;
        double r3751136 = r3751131 * r3751131;
        double r3751137 = r3751135 * r3751136;
        double r3751138 = r3751132 * r3751137;
        double r3751139 = r3751134 * r3751135;
        double r3751140 = -3.4e-05;
        double r3751141 = r3751140 * r3751131;
        double r3751142 = 0.000828;
        double r3751143 = r3751142 * r3751130;
        double r3751144 = r3751141 + r3751143;
        double r3751145 = r3751139 * r3751144;
        double r3751146 = r3751138 + r3751145;
        double r3751147 = -25.025;
        double r3751148 = 5;
        double r3751149 = pow(r3751130, r3751148);
        double r3751150 = r3751147 * r3751149;
        double r3751151 = 1.0;
        double r3751152 = r3751150 + r3751151;
        double r3751153 = 52.5;
        double r3751154 = r3751130 * r3751153;
        double r3751155 = -15.0;
        double r3751156 = r3751154 + r3751155;
        double r3751157 = r3751156 * r3751130;
        double r3751158 = -75.833333;
        double r3751159 = 56.875;
        double r3751160 = r3751159 * r3751130;
        double r3751161 = r3751158 + r3751160;
        double r3751162 = r3751134 * r3751161;
        double r3751163 = r3751157 + r3751162;
        double r3751164 = r3751152 + r3751163;
        double r3751165 = r3751136 * r3751136;
        double r3751166 = -0.013792;
        double r3751167 = r3751166 * r3751130;
        double r3751168 = 0.159598;
        double r3751169 = r3751167 + r3751168;
        double r3751170 = r3751165 * r3751169;
        double r3751171 = -1.276786;
        double r3751172 = r3751171 * r3751130;
        double r3751173 = 6.951389;
        double r3751174 = r3751172 + r3751173;
        double r3751175 = r3751135 * r3751174;
        double r3751176 = r3751170 + r3751175;
        double r3751177 = r3751164 + r3751176;
        double r3751178 = r3751146 + r3751177;
        return r3751178;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3751179, r3751180, r3751181, r3751182, r3751183, r3751184, r3751185, r3751186, r3751187, r3751188, r3751189, r3751190, r3751191, r3751192, r3751193, r3751194, r3751195, r3751196, r3751197, r3751198, r3751199, r3751200, r3751201, r3751202, r3751203, r3751204, r3751205, r3751206, r3751207, r3751208, r3751209, r3751210, r3751211, r3751212, r3751213, r3751214, r3751215, r3751216, r3751217, r3751218, r3751219, r3751220, r3751221, r3751222, r3751223, r3751224, r3751225, r3751226, r3751227;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3751179, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3751180, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r3751181);
        mpfr_init(r3751182);
        mpfr_init(r3751183);
        mpfr_init_set_str(r3751184, "52.5", 10, MPFR_RNDN);
        mpfr_init(r3751185);
        mpfr_init(r3751186);
        mpfr_init(r3751187);
        mpfr_init_set_str(r3751188, "-75.833333", 10, MPFR_RNDN);
        mpfr_init(r3751189);
        mpfr_init(r3751190);
        mpfr_init(r3751191);
        mpfr_init_set_str(r3751192, "56.875", 10, MPFR_RNDN);
        mpfr_init(r3751193);
        mpfr_init(r3751194);
        mpfr_init(r3751195);
        mpfr_init_set_str(r3751196, "-25.025", 10, MPFR_RNDN);
        mpfr_init(r3751197);
        mpfr_init(r3751198);
        mpfr_init(r3751199);
        mpfr_init_set_str(r3751200, "6.951389", 10, MPFR_RNDN);
        mpfr_init(r3751201);
        mpfr_init(r3751202);
        mpfr_init(r3751203);
        mpfr_init_set_str(r3751204, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r3751205);
        mpfr_init(r3751206);
        mpfr_init(r3751207);
        mpfr_init_set_str(r3751208, "0.159598", 10, MPFR_RNDN);
        mpfr_init(r3751209);
        mpfr_init(r3751210);
        mpfr_init(r3751211);
        mpfr_init_set_str(r3751212, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r3751213);
        mpfr_init(r3751214);
        mpfr_init(r3751215);
        mpfr_init_set_str(r3751216, "0.000828", 10, MPFR_RNDN);
        mpfr_init(r3751217);
        mpfr_init(r3751218);
        mpfr_init(r3751219);
        mpfr_init_set_str(r3751220, "-3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r3751221);
        mpfr_init(r3751222);
        mpfr_init(r3751223);
        mpfr_init_set_str(r3751224, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r3751225);
        mpfr_init(r3751226);
        mpfr_init(r3751227);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3751181, x, MPFR_RNDN);
        mpfr_mul(r3751182, r3751180, r3751181, MPFR_RNDN);
        mpfr_add(r3751183, r3751179, r3751182, MPFR_RNDN);
        ;
        mpfr_mul(r3751185, r3751181, r3751181, MPFR_RNDN);
        mpfr_mul(r3751186, r3751184, r3751185, MPFR_RNDN);
        mpfr_add(r3751187, r3751183, r3751186, MPFR_RNDN);
        ;
        mpfr_mul(r3751189, r3751185, r3751181, MPFR_RNDN);
        mpfr_mul(r3751190, r3751188, r3751189, MPFR_RNDN);
        mpfr_add(r3751191, r3751187, r3751190, MPFR_RNDN);
        ;
        mpfr_mul(r3751193, r3751189, r3751181, MPFR_RNDN);
        mpfr_mul(r3751194, r3751192, r3751193, MPFR_RNDN);
        mpfr_add(r3751195, r3751191, r3751194, MPFR_RNDN);
        ;
        mpfr_mul(r3751197, r3751193, r3751181, MPFR_RNDN);
        mpfr_mul(r3751198, r3751196, r3751197, MPFR_RNDN);
        mpfr_add(r3751199, r3751195, r3751198, MPFR_RNDN);
        ;
        mpfr_mul(r3751201, r3751197, r3751181, MPFR_RNDN);
        mpfr_mul(r3751202, r3751200, r3751201, MPFR_RNDN);
        mpfr_add(r3751203, r3751199, r3751202, MPFR_RNDN);
        ;
        mpfr_mul(r3751205, r3751201, r3751181, MPFR_RNDN);
        mpfr_mul(r3751206, r3751204, r3751205, MPFR_RNDN);
        mpfr_add(r3751207, r3751203, r3751206, MPFR_RNDN);
        ;
        mpfr_mul(r3751209, r3751205, r3751181, MPFR_RNDN);
        mpfr_mul(r3751210, r3751208, r3751209, MPFR_RNDN);
        mpfr_add(r3751211, r3751207, r3751210, MPFR_RNDN);
        ;
        mpfr_mul(r3751213, r3751209, r3751181, MPFR_RNDN);
        mpfr_mul(r3751214, r3751212, r3751213, MPFR_RNDN);
        mpfr_add(r3751215, r3751211, r3751214, MPFR_RNDN);
        ;
        mpfr_mul(r3751217, r3751213, r3751181, MPFR_RNDN);
        mpfr_mul(r3751218, r3751216, r3751217, MPFR_RNDN);
        mpfr_add(r3751219, r3751215, r3751218, MPFR_RNDN);
        ;
        mpfr_mul(r3751221, r3751217, r3751181, MPFR_RNDN);
        mpfr_mul(r3751222, r3751220, r3751221, MPFR_RNDN);
        mpfr_add(r3751223, r3751219, r3751222, MPFR_RNDN);
        ;
        mpfr_mul(r3751225, r3751221, r3751181, MPFR_RNDN);
        mpfr_mul(r3751226, r3751224, r3751225, MPFR_RNDN);
        mpfr_add(r3751227, r3751223, r3751226, MPFR_RNDN);
        return mpfr_get_d(r3751227, MPFR_RNDN);
}

static mpfr_t r3751228, r3751229, r3751230, r3751231, r3751232, r3751233, r3751234, r3751235, r3751236, r3751237, r3751238, r3751239, r3751240, r3751241, r3751242, r3751243, r3751244, r3751245, r3751246, r3751247, r3751248, r3751249, r3751250, r3751251, r3751252, r3751253, r3751254, r3751255, r3751256, r3751257, r3751258, r3751259, r3751260, r3751261, r3751262, r3751263, r3751264, r3751265, r3751266, r3751267, r3751268, r3751269, r3751270, r3751271, r3751272, r3751273, r3751274, r3751275, r3751276, r3751277;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3751228, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r3751229);
        mpfr_init(r3751230);
        mpfr_init(r3751231);
        mpfr_init_set_str(r3751232, "3", 10, MPFR_RNDN);
        mpfr_init(r3751233);
        mpfr_init(r3751234);
        mpfr_init(r3751235);
        mpfr_init(r3751236);
        mpfr_init(r3751237);
        mpfr_init(r3751238);
        mpfr_init_set_str(r3751239, "-3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r3751240);
        mpfr_init_set_str(r3751241, "0.000828", 10, MPFR_RNDN);
        mpfr_init(r3751242);
        mpfr_init(r3751243);
        mpfr_init(r3751244);
        mpfr_init(r3751245);
        mpfr_init_set_str(r3751246, "-25.025", 10, MPFR_RNDN);
        mpfr_init_set_str(r3751247, "5", 10, MPFR_RNDN);
        mpfr_init(r3751248);
        mpfr_init(r3751249);
        mpfr_init_set_str(r3751250, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3751251);
        mpfr_init_set_str(r3751252, "52.5", 10, MPFR_RNDN);
        mpfr_init(r3751253);
        mpfr_init_set_str(r3751254, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r3751255);
        mpfr_init(r3751256);
        mpfr_init_set_str(r3751257, "-75.833333", 10, MPFR_RNDN);
        mpfr_init_set_str(r3751258, "56.875", 10, MPFR_RNDN);
        mpfr_init(r3751259);
        mpfr_init(r3751260);
        mpfr_init(r3751261);
        mpfr_init(r3751262);
        mpfr_init(r3751263);
        mpfr_init(r3751264);
        mpfr_init_set_str(r3751265, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r3751266);
        mpfr_init_set_str(r3751267, "0.159598", 10, MPFR_RNDN);
        mpfr_init(r3751268);
        mpfr_init(r3751269);
        mpfr_init_set_str(r3751270, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r3751271);
        mpfr_init_set_str(r3751272, "6.951389", 10, MPFR_RNDN);
        mpfr_init(r3751273);
        mpfr_init(r3751274);
        mpfr_init(r3751275);
        mpfr_init(r3751276);
        mpfr_init(r3751277);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r3751229, x, MPFR_RNDN);
        mpfr_mul(r3751230, r3751229, r3751229, MPFR_RNDN);
        mpfr_mul(r3751231, r3751228, r3751230, MPFR_RNDN);
        ;
        mpfr_pow(r3751233, r3751229, r3751232, MPFR_RNDN);
        mpfr_mul(r3751234, r3751233, r3751233, MPFR_RNDN);
        mpfr_mul(r3751235, r3751230, r3751230, MPFR_RNDN);
        mpfr_mul(r3751236, r3751234, r3751235, MPFR_RNDN);
        mpfr_mul(r3751237, r3751231, r3751236, MPFR_RNDN);
        mpfr_mul(r3751238, r3751233, r3751234, MPFR_RNDN);
        ;
        mpfr_mul(r3751240, r3751239, r3751230, MPFR_RNDN);
        ;
        mpfr_mul(r3751242, r3751241, r3751229, MPFR_RNDN);
        mpfr_add(r3751243, r3751240, r3751242, MPFR_RNDN);
        mpfr_mul(r3751244, r3751238, r3751243, MPFR_RNDN);
        mpfr_add(r3751245, r3751237, r3751244, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r3751248, r3751229, r3751247, MPFR_RNDN);
        mpfr_mul(r3751249, r3751246, r3751248, MPFR_RNDN);
        ;
        mpfr_add(r3751251, r3751249, r3751250, MPFR_RNDN);
        ;
        mpfr_mul(r3751253, r3751229, r3751252, MPFR_RNDN);
        ;
        mpfr_add(r3751255, r3751253, r3751254, MPFR_RNDN);
        mpfr_mul(r3751256, r3751255, r3751229, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3751259, r3751258, r3751229, MPFR_RNDN);
        mpfr_add(r3751260, r3751257, r3751259, MPFR_RNDN);
        mpfr_mul(r3751261, r3751233, r3751260, MPFR_RNDN);
        mpfr_add(r3751262, r3751256, r3751261, MPFR_RNDN);
        mpfr_add(r3751263, r3751251, r3751262, MPFR_RNDN);
        mpfr_mul(r3751264, r3751235, r3751235, MPFR_RNDN);
        ;
        mpfr_mul(r3751266, r3751265, r3751229, MPFR_RNDN);
        ;
        mpfr_add(r3751268, r3751266, r3751267, MPFR_RNDN);
        mpfr_mul(r3751269, r3751264, r3751268, MPFR_RNDN);
        ;
        mpfr_mul(r3751271, r3751270, r3751229, MPFR_RNDN);
        ;
        mpfr_add(r3751273, r3751271, r3751272, MPFR_RNDN);
        mpfr_mul(r3751274, r3751234, r3751273, MPFR_RNDN);
        mpfr_add(r3751275, r3751269, r3751274, MPFR_RNDN);
        mpfr_add(r3751276, r3751263, r3751275, MPFR_RNDN);
        mpfr_add(r3751277, r3751245, r3751276, MPFR_RNDN);
        return mpfr_get_d(r3751277, MPFR_RNDN);
}

static mpfr_t r3751278, r3751279, r3751280, r3751281, r3751282, r3751283, r3751284, r3751285, r3751286, r3751287, r3751288, r3751289, r3751290, r3751291, r3751292, r3751293, r3751294, r3751295, r3751296, r3751297, r3751298, r3751299, r3751300, r3751301, r3751302, r3751303, r3751304, r3751305, r3751306, r3751307, r3751308, r3751309, r3751310, r3751311, r3751312, r3751313, r3751314, r3751315, r3751316, r3751317, r3751318, r3751319, r3751320, r3751321, r3751322, r3751323, r3751324, r3751325, r3751326, r3751327;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3751278, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r3751279);
        mpfr_init(r3751280);
        mpfr_init(r3751281);
        mpfr_init_set_str(r3751282, "3", 10, MPFR_RNDN);
        mpfr_init(r3751283);
        mpfr_init(r3751284);
        mpfr_init(r3751285);
        mpfr_init(r3751286);
        mpfr_init(r3751287);
        mpfr_init(r3751288);
        mpfr_init_set_str(r3751289, "-3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r3751290);
        mpfr_init_set_str(r3751291, "0.000828", 10, MPFR_RNDN);
        mpfr_init(r3751292);
        mpfr_init(r3751293);
        mpfr_init(r3751294);
        mpfr_init(r3751295);
        mpfr_init_set_str(r3751296, "-25.025", 10, MPFR_RNDN);
        mpfr_init_set_str(r3751297, "5", 10, MPFR_RNDN);
        mpfr_init(r3751298);
        mpfr_init(r3751299);
        mpfr_init_set_str(r3751300, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3751301);
        mpfr_init_set_str(r3751302, "52.5", 10, MPFR_RNDN);
        mpfr_init(r3751303);
        mpfr_init_set_str(r3751304, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r3751305);
        mpfr_init(r3751306);
        mpfr_init_set_str(r3751307, "-75.833333", 10, MPFR_RNDN);
        mpfr_init_set_str(r3751308, "56.875", 10, MPFR_RNDN);
        mpfr_init(r3751309);
        mpfr_init(r3751310);
        mpfr_init(r3751311);
        mpfr_init(r3751312);
        mpfr_init(r3751313);
        mpfr_init(r3751314);
        mpfr_init_set_str(r3751315, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r3751316);
        mpfr_init_set_str(r3751317, "0.159598", 10, MPFR_RNDN);
        mpfr_init(r3751318);
        mpfr_init(r3751319);
        mpfr_init_set_str(r3751320, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r3751321);
        mpfr_init_set_str(r3751322, "6.951389", 10, MPFR_RNDN);
        mpfr_init(r3751323);
        mpfr_init(r3751324);
        mpfr_init(r3751325);
        mpfr_init(r3751326);
        mpfr_init(r3751327);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r3751279, x, MPFR_RNDN);
        mpfr_mul(r3751280, r3751279, r3751279, MPFR_RNDN);
        mpfr_mul(r3751281, r3751278, r3751280, MPFR_RNDN);
        ;
        mpfr_pow(r3751283, r3751279, r3751282, MPFR_RNDN);
        mpfr_mul(r3751284, r3751283, r3751283, MPFR_RNDN);
        mpfr_mul(r3751285, r3751280, r3751280, MPFR_RNDN);
        mpfr_mul(r3751286, r3751284, r3751285, MPFR_RNDN);
        mpfr_mul(r3751287, r3751281, r3751286, MPFR_RNDN);
        mpfr_mul(r3751288, r3751283, r3751284, MPFR_RNDN);
        ;
        mpfr_mul(r3751290, r3751289, r3751280, MPFR_RNDN);
        ;
        mpfr_mul(r3751292, r3751291, r3751279, MPFR_RNDN);
        mpfr_add(r3751293, r3751290, r3751292, MPFR_RNDN);
        mpfr_mul(r3751294, r3751288, r3751293, MPFR_RNDN);
        mpfr_add(r3751295, r3751287, r3751294, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r3751298, r3751279, r3751297, MPFR_RNDN);
        mpfr_mul(r3751299, r3751296, r3751298, MPFR_RNDN);
        ;
        mpfr_add(r3751301, r3751299, r3751300, MPFR_RNDN);
        ;
        mpfr_mul(r3751303, r3751279, r3751302, MPFR_RNDN);
        ;
        mpfr_add(r3751305, r3751303, r3751304, MPFR_RNDN);
        mpfr_mul(r3751306, r3751305, r3751279, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3751309, r3751308, r3751279, MPFR_RNDN);
        mpfr_add(r3751310, r3751307, r3751309, MPFR_RNDN);
        mpfr_mul(r3751311, r3751283, r3751310, MPFR_RNDN);
        mpfr_add(r3751312, r3751306, r3751311, MPFR_RNDN);
        mpfr_add(r3751313, r3751301, r3751312, MPFR_RNDN);
        mpfr_mul(r3751314, r3751285, r3751285, MPFR_RNDN);
        ;
        mpfr_mul(r3751316, r3751315, r3751279, MPFR_RNDN);
        ;
        mpfr_add(r3751318, r3751316, r3751317, MPFR_RNDN);
        mpfr_mul(r3751319, r3751314, r3751318, MPFR_RNDN);
        ;
        mpfr_mul(r3751321, r3751320, r3751279, MPFR_RNDN);
        ;
        mpfr_add(r3751323, r3751321, r3751322, MPFR_RNDN);
        mpfr_mul(r3751324, r3751284, r3751323, MPFR_RNDN);
        mpfr_add(r3751325, r3751319, r3751324, MPFR_RNDN);
        mpfr_add(r3751326, r3751313, r3751325, MPFR_RNDN);
        mpfr_add(r3751327, r3751295, r3751326, MPFR_RNDN);
        return mpfr_get_d(r3751327, MPFR_RNDN);
}

