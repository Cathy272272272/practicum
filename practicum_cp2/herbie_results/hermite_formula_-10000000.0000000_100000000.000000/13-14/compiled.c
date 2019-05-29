#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r9885035 = -17297280.0;
        float r9885036 = 242161920.0;
        float r9885037 = x;
        float r9885038 = r9885037 * r9885037;
        float r9885039 = r9885036 * r9885038;
        float r9885040 = r9885035 + r9885039;
        float r9885041 = -484323840.0;
        float r9885042 = r9885038 * r9885037;
        float r9885043 = r9885042 * r9885037;
        float r9885044 = r9885041 * r9885043;
        float r9885045 = r9885040 + r9885044;
        float r9885046 = 322882560.0;
        float r9885047 = r9885043 * r9885037;
        float r9885048 = r9885047 * r9885037;
        float r9885049 = r9885046 * r9885048;
        float r9885050 = r9885045 + r9885049;
        float r9885051 = -92252160.0;
        float r9885052 = r9885048 * r9885037;
        float r9885053 = r9885052 * r9885037;
        float r9885054 = r9885051 * r9885053;
        float r9885055 = r9885050 + r9885054;
        float r9885056 = 12300288.0;
        float r9885057 = r9885053 * r9885037;
        float r9885058 = r9885057 * r9885037;
        float r9885059 = r9885056 * r9885058;
        float r9885060 = r9885055 + r9885059;
        float r9885061 = -745472.0;
        float r9885062 = r9885058 * r9885037;
        float r9885063 = r9885062 * r9885037;
        float r9885064 = r9885061 * r9885063;
        float r9885065 = r9885060 + r9885064;
        float r9885066 = 16384.0;
        float r9885067 = r9885063 * r9885037;
        float r9885068 = r9885067 * r9885037;
        float r9885069 = r9885066 * r9885068;
        float r9885070 = r9885065 + r9885069;
        return r9885070;
}

double f_id(double x) {
        double r9885071 = -17297280.0;
        double r9885072 = 242161920.0;
        double r9885073 = x;
        double r9885074 = r9885073 * r9885073;
        double r9885075 = r9885072 * r9885074;
        double r9885076 = r9885071 + r9885075;
        double r9885077 = -484323840.0;
        double r9885078 = r9885074 * r9885073;
        double r9885079 = r9885078 * r9885073;
        double r9885080 = r9885077 * r9885079;
        double r9885081 = r9885076 + r9885080;
        double r9885082 = 322882560.0;
        double r9885083 = r9885079 * r9885073;
        double r9885084 = r9885083 * r9885073;
        double r9885085 = r9885082 * r9885084;
        double r9885086 = r9885081 + r9885085;
        double r9885087 = -92252160.0;
        double r9885088 = r9885084 * r9885073;
        double r9885089 = r9885088 * r9885073;
        double r9885090 = r9885087 * r9885089;
        double r9885091 = r9885086 + r9885090;
        double r9885092 = 12300288.0;
        double r9885093 = r9885089 * r9885073;
        double r9885094 = r9885093 * r9885073;
        double r9885095 = r9885092 * r9885094;
        double r9885096 = r9885091 + r9885095;
        double r9885097 = -745472.0;
        double r9885098 = r9885094 * r9885073;
        double r9885099 = r9885098 * r9885073;
        double r9885100 = r9885097 * r9885099;
        double r9885101 = r9885096 + r9885100;
        double r9885102 = 16384.0;
        double r9885103 = r9885099 * r9885073;
        double r9885104 = r9885103 * r9885073;
        double r9885105 = r9885102 * r9885104;
        double r9885106 = r9885101 + r9885105;
        return r9885106;
}


double f_of(float x) {
        float r9885107 = x;
        float r9885108 = 3;
        float r9885109 = pow(r9885107, r9885108);
        float r9885110 = r9885109 * r9885109;
        float r9885111 = r9885110 * r9885110;
        float r9885112 = -745472.0;
        float r9885113 = 16384.0;
        float r9885114 = r9885113 * r9885107;
        float r9885115 = r9885107 * r9885114;
        float r9885116 = r9885112 + r9885115;
        float r9885117 = r9885111 * r9885116;
        float r9885118 = 242161920.0;
        float r9885119 = r9885118 * r9885107;
        float r9885120 = r9885107 * r9885119;
        float r9885121 = 4;
        float r9885122 = pow(r9885107, r9885121);
        float r9885123 = -484323840.0;
        float r9885124 = r9885122 * r9885123;
        float r9885125 = r9885120 + r9885124;
        float r9885126 = r9885117 + r9885125;
        float r9885127 = r9885107 * r9885107;
        float r9885128 = r9885127 * r9885127;
        float r9885129 = 322882560.0;
        float r9885130 = r9885129 * r9885127;
        float r9885131 = r9885128 * r9885130;
        float r9885132 = -17297280.0;
        float r9885133 = r9885131 + r9885132;
        float r9885134 = 12300288.0;
        float r9885135 = r9885134 * r9885107;
        float r9885136 = r9885135 * r9885107;
        float r9885137 = -92252160.0;
        float r9885138 = r9885136 + r9885137;
        float r9885139 = 1;
        float r9885140 = r9885108 + r9885139;
        float r9885141 = pow(r9885127, r9885140);
        float r9885142 = r9885138 * r9885141;
        float r9885143 = r9885133 + r9885142;
        float r9885144 = r9885126 + r9885143;
        return r9885144;
}

double f_od(double x) {
        double r9885145 = x;
        double r9885146 = 3;
        double r9885147 = pow(r9885145, r9885146);
        double r9885148 = r9885147 * r9885147;
        double r9885149 = r9885148 * r9885148;
        double r9885150 = -745472.0;
        double r9885151 = 16384.0;
        double r9885152 = r9885151 * r9885145;
        double r9885153 = r9885145 * r9885152;
        double r9885154 = r9885150 + r9885153;
        double r9885155 = r9885149 * r9885154;
        double r9885156 = 242161920.0;
        double r9885157 = r9885156 * r9885145;
        double r9885158 = r9885145 * r9885157;
        double r9885159 = 4;
        double r9885160 = pow(r9885145, r9885159);
        double r9885161 = -484323840.0;
        double r9885162 = r9885160 * r9885161;
        double r9885163 = r9885158 + r9885162;
        double r9885164 = r9885155 + r9885163;
        double r9885165 = r9885145 * r9885145;
        double r9885166 = r9885165 * r9885165;
        double r9885167 = 322882560.0;
        double r9885168 = r9885167 * r9885165;
        double r9885169 = r9885166 * r9885168;
        double r9885170 = -17297280.0;
        double r9885171 = r9885169 + r9885170;
        double r9885172 = 12300288.0;
        double r9885173 = r9885172 * r9885145;
        double r9885174 = r9885173 * r9885145;
        double r9885175 = -92252160.0;
        double r9885176 = r9885174 + r9885175;
        double r9885177 = 1;
        double r9885178 = r9885146 + r9885177;
        double r9885179 = pow(r9885165, r9885178);
        double r9885180 = r9885176 * r9885179;
        double r9885181 = r9885171 + r9885180;
        double r9885182 = r9885164 + r9885181;
        return r9885182;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9885183, r9885184, r9885185, r9885186, r9885187, r9885188, r9885189, r9885190, r9885191, r9885192, r9885193, r9885194, r9885195, r9885196, r9885197, r9885198, r9885199, r9885200, r9885201, r9885202, r9885203, r9885204, r9885205, r9885206, r9885207, r9885208, r9885209, r9885210, r9885211, r9885212, r9885213, r9885214, r9885215, r9885216, r9885217, r9885218;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9885183, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9885184, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r9885185);
        mpfr_init(r9885186);
        mpfr_init(r9885187);
        mpfr_init(r9885188);
        mpfr_init_set_str(r9885189, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r9885190);
        mpfr_init(r9885191);
        mpfr_init(r9885192);
        mpfr_init(r9885193);
        mpfr_init_set_str(r9885194, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r9885195);
        mpfr_init(r9885196);
        mpfr_init(r9885197);
        mpfr_init(r9885198);
        mpfr_init_set_str(r9885199, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r9885200);
        mpfr_init(r9885201);
        mpfr_init(r9885202);
        mpfr_init(r9885203);
        mpfr_init_set_str(r9885204, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r9885205);
        mpfr_init(r9885206);
        mpfr_init(r9885207);
        mpfr_init(r9885208);
        mpfr_init_set_str(r9885209, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r9885210);
        mpfr_init(r9885211);
        mpfr_init(r9885212);
        mpfr_init(r9885213);
        mpfr_init_set_str(r9885214, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r9885215);
        mpfr_init(r9885216);
        mpfr_init(r9885217);
        mpfr_init(r9885218);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9885185, x, MPFR_RNDN);
        mpfr_mul(r9885186, r9885185, r9885185, MPFR_RNDN);
        mpfr_mul(r9885187, r9885184, r9885186, MPFR_RNDN);
        mpfr_add(r9885188, r9885183, r9885187, MPFR_RNDN);
        ;
        mpfr_mul(r9885190, r9885186, r9885185, MPFR_RNDN);
        mpfr_mul(r9885191, r9885190, r9885185, MPFR_RNDN);
        mpfr_mul(r9885192, r9885189, r9885191, MPFR_RNDN);
        mpfr_add(r9885193, r9885188, r9885192, MPFR_RNDN);
        ;
        mpfr_mul(r9885195, r9885191, r9885185, MPFR_RNDN);
        mpfr_mul(r9885196, r9885195, r9885185, MPFR_RNDN);
        mpfr_mul(r9885197, r9885194, r9885196, MPFR_RNDN);
        mpfr_add(r9885198, r9885193, r9885197, MPFR_RNDN);
        ;
        mpfr_mul(r9885200, r9885196, r9885185, MPFR_RNDN);
        mpfr_mul(r9885201, r9885200, r9885185, MPFR_RNDN);
        mpfr_mul(r9885202, r9885199, r9885201, MPFR_RNDN);
        mpfr_add(r9885203, r9885198, r9885202, MPFR_RNDN);
        ;
        mpfr_mul(r9885205, r9885201, r9885185, MPFR_RNDN);
        mpfr_mul(r9885206, r9885205, r9885185, MPFR_RNDN);
        mpfr_mul(r9885207, r9885204, r9885206, MPFR_RNDN);
        mpfr_add(r9885208, r9885203, r9885207, MPFR_RNDN);
        ;
        mpfr_mul(r9885210, r9885206, r9885185, MPFR_RNDN);
        mpfr_mul(r9885211, r9885210, r9885185, MPFR_RNDN);
        mpfr_mul(r9885212, r9885209, r9885211, MPFR_RNDN);
        mpfr_add(r9885213, r9885208, r9885212, MPFR_RNDN);
        ;
        mpfr_mul(r9885215, r9885211, r9885185, MPFR_RNDN);
        mpfr_mul(r9885216, r9885215, r9885185, MPFR_RNDN);
        mpfr_mul(r9885217, r9885214, r9885216, MPFR_RNDN);
        mpfr_add(r9885218, r9885213, r9885217, MPFR_RNDN);
        return mpfr_get_d(r9885218, MPFR_RNDN);
}

static mpfr_t r9885219, r9885220, r9885221, r9885222, r9885223, r9885224, r9885225, r9885226, r9885227, r9885228, r9885229, r9885230, r9885231, r9885232, r9885233, r9885234, r9885235, r9885236, r9885237, r9885238, r9885239, r9885240, r9885241, r9885242, r9885243, r9885244, r9885245, r9885246, r9885247, r9885248, r9885249, r9885250, r9885251, r9885252, r9885253, r9885254, r9885255, r9885256;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9885219);
        mpfr_init_set_str(r9885220, "3", 10, MPFR_RNDN);
        mpfr_init(r9885221);
        mpfr_init(r9885222);
        mpfr_init(r9885223);
        mpfr_init_set_str(r9885224, "-745472.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9885225, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r9885226);
        mpfr_init(r9885227);
        mpfr_init(r9885228);
        mpfr_init(r9885229);
        mpfr_init_set_str(r9885230, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r9885231);
        mpfr_init(r9885232);
        mpfr_init_set_str(r9885233, "4", 10, MPFR_RNDN);
        mpfr_init(r9885234);
        mpfr_init_set_str(r9885235, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r9885236);
        mpfr_init(r9885237);
        mpfr_init(r9885238);
        mpfr_init(r9885239);
        mpfr_init(r9885240);
        mpfr_init_set_str(r9885241, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r9885242);
        mpfr_init(r9885243);
        mpfr_init_set_str(r9885244, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9885245);
        mpfr_init_set_str(r9885246, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r9885247);
        mpfr_init(r9885248);
        mpfr_init_set_str(r9885249, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r9885250);
        mpfr_init_set_str(r9885251, "1", 10, MPFR_RNDN);
        mpfr_init(r9885252);
        mpfr_init(r9885253);
        mpfr_init(r9885254);
        mpfr_init(r9885255);
        mpfr_init(r9885256);
}

double f_fm(double x) {
        mpfr_set_d(r9885219, x, MPFR_RNDN);
        ;
        mpfr_pow(r9885221, r9885219, r9885220, MPFR_RNDN);
        mpfr_mul(r9885222, r9885221, r9885221, MPFR_RNDN);
        mpfr_mul(r9885223, r9885222, r9885222, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9885226, r9885225, r9885219, MPFR_RNDN);
        mpfr_mul(r9885227, r9885219, r9885226, MPFR_RNDN);
        mpfr_add(r9885228, r9885224, r9885227, MPFR_RNDN);
        mpfr_mul(r9885229, r9885223, r9885228, MPFR_RNDN);
        ;
        mpfr_mul(r9885231, r9885230, r9885219, MPFR_RNDN);
        mpfr_mul(r9885232, r9885219, r9885231, MPFR_RNDN);
        ;
        mpfr_pow(r9885234, r9885219, r9885233, MPFR_RNDN);
        ;
        mpfr_mul(r9885236, r9885234, r9885235, MPFR_RNDN);
        mpfr_add(r9885237, r9885232, r9885236, MPFR_RNDN);
        mpfr_add(r9885238, r9885229, r9885237, MPFR_RNDN);
        mpfr_mul(r9885239, r9885219, r9885219, MPFR_RNDN);
        mpfr_mul(r9885240, r9885239, r9885239, MPFR_RNDN);
        ;
        mpfr_mul(r9885242, r9885241, r9885239, MPFR_RNDN);
        mpfr_mul(r9885243, r9885240, r9885242, MPFR_RNDN);
        ;
        mpfr_add(r9885245, r9885243, r9885244, MPFR_RNDN);
        ;
        mpfr_mul(r9885247, r9885246, r9885219, MPFR_RNDN);
        mpfr_mul(r9885248, r9885247, r9885219, MPFR_RNDN);
        ;
        mpfr_add(r9885250, r9885248, r9885249, MPFR_RNDN);
        ;
        mpfr_add(r9885252, r9885220, r9885251, MPFR_RNDN);
        mpfr_pow(r9885253, r9885239, r9885252, MPFR_RNDN);
        mpfr_mul(r9885254, r9885250, r9885253, MPFR_RNDN);
        mpfr_add(r9885255, r9885245, r9885254, MPFR_RNDN);
        mpfr_add(r9885256, r9885238, r9885255, MPFR_RNDN);
        return mpfr_get_d(r9885256, MPFR_RNDN);
}

static mpfr_t r9885257, r9885258, r9885259, r9885260, r9885261, r9885262, r9885263, r9885264, r9885265, r9885266, r9885267, r9885268, r9885269, r9885270, r9885271, r9885272, r9885273, r9885274, r9885275, r9885276, r9885277, r9885278, r9885279, r9885280, r9885281, r9885282, r9885283, r9885284, r9885285, r9885286, r9885287, r9885288, r9885289, r9885290, r9885291, r9885292, r9885293, r9885294;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9885257);
        mpfr_init_set_str(r9885258, "3", 10, MPFR_RNDN);
        mpfr_init(r9885259);
        mpfr_init(r9885260);
        mpfr_init(r9885261);
        mpfr_init_set_str(r9885262, "-745472.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9885263, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r9885264);
        mpfr_init(r9885265);
        mpfr_init(r9885266);
        mpfr_init(r9885267);
        mpfr_init_set_str(r9885268, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r9885269);
        mpfr_init(r9885270);
        mpfr_init_set_str(r9885271, "4", 10, MPFR_RNDN);
        mpfr_init(r9885272);
        mpfr_init_set_str(r9885273, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r9885274);
        mpfr_init(r9885275);
        mpfr_init(r9885276);
        mpfr_init(r9885277);
        mpfr_init(r9885278);
        mpfr_init_set_str(r9885279, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r9885280);
        mpfr_init(r9885281);
        mpfr_init_set_str(r9885282, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9885283);
        mpfr_init_set_str(r9885284, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r9885285);
        mpfr_init(r9885286);
        mpfr_init_set_str(r9885287, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r9885288);
        mpfr_init_set_str(r9885289, "1", 10, MPFR_RNDN);
        mpfr_init(r9885290);
        mpfr_init(r9885291);
        mpfr_init(r9885292);
        mpfr_init(r9885293);
        mpfr_init(r9885294);
}

double f_dm(double x) {
        mpfr_set_d(r9885257, x, MPFR_RNDN);
        ;
        mpfr_pow(r9885259, r9885257, r9885258, MPFR_RNDN);
        mpfr_mul(r9885260, r9885259, r9885259, MPFR_RNDN);
        mpfr_mul(r9885261, r9885260, r9885260, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9885264, r9885263, r9885257, MPFR_RNDN);
        mpfr_mul(r9885265, r9885257, r9885264, MPFR_RNDN);
        mpfr_add(r9885266, r9885262, r9885265, MPFR_RNDN);
        mpfr_mul(r9885267, r9885261, r9885266, MPFR_RNDN);
        ;
        mpfr_mul(r9885269, r9885268, r9885257, MPFR_RNDN);
        mpfr_mul(r9885270, r9885257, r9885269, MPFR_RNDN);
        ;
        mpfr_pow(r9885272, r9885257, r9885271, MPFR_RNDN);
        ;
        mpfr_mul(r9885274, r9885272, r9885273, MPFR_RNDN);
        mpfr_add(r9885275, r9885270, r9885274, MPFR_RNDN);
        mpfr_add(r9885276, r9885267, r9885275, MPFR_RNDN);
        mpfr_mul(r9885277, r9885257, r9885257, MPFR_RNDN);
        mpfr_mul(r9885278, r9885277, r9885277, MPFR_RNDN);
        ;
        mpfr_mul(r9885280, r9885279, r9885277, MPFR_RNDN);
        mpfr_mul(r9885281, r9885278, r9885280, MPFR_RNDN);
        ;
        mpfr_add(r9885283, r9885281, r9885282, MPFR_RNDN);
        ;
        mpfr_mul(r9885285, r9885284, r9885257, MPFR_RNDN);
        mpfr_mul(r9885286, r9885285, r9885257, MPFR_RNDN);
        ;
        mpfr_add(r9885288, r9885286, r9885287, MPFR_RNDN);
        ;
        mpfr_add(r9885290, r9885258, r9885289, MPFR_RNDN);
        mpfr_pow(r9885291, r9885277, r9885290, MPFR_RNDN);
        mpfr_mul(r9885292, r9885288, r9885291, MPFR_RNDN);
        mpfr_add(r9885293, r9885283, r9885292, MPFR_RNDN);
        mpfr_add(r9885294, r9885276, r9885293, MPFR_RNDN);
        return mpfr_get_d(r9885294, MPFR_RNDN);
}

