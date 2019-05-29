#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7606045 = -30240.0;
        float r7606046 = 302400.0;
        float r7606047 = x;
        float r7606048 = r7606047 * r7606047;
        float r7606049 = r7606046 * r7606048;
        float r7606050 = r7606045 + r7606049;
        float r7606051 = -403200.0;
        float r7606052 = r7606048 * r7606047;
        float r7606053 = r7606052 * r7606047;
        float r7606054 = r7606051 * r7606053;
        float r7606055 = r7606050 + r7606054;
        float r7606056 = 161280.0;
        float r7606057 = r7606053 * r7606047;
        float r7606058 = r7606057 * r7606047;
        float r7606059 = r7606056 * r7606058;
        float r7606060 = r7606055 + r7606059;
        float r7606061 = -23040.0;
        float r7606062 = r7606058 * r7606047;
        float r7606063 = r7606062 * r7606047;
        float r7606064 = r7606061 * r7606063;
        float r7606065 = r7606060 + r7606064;
        float r7606066 = 1024.0;
        float r7606067 = r7606063 * r7606047;
        float r7606068 = r7606067 * r7606047;
        float r7606069 = r7606066 * r7606068;
        float r7606070 = r7606065 + r7606069;
        return r7606070;
}

double f_id(double x) {
        double r7606071 = -30240.0;
        double r7606072 = 302400.0;
        double r7606073 = x;
        double r7606074 = r7606073 * r7606073;
        double r7606075 = r7606072 * r7606074;
        double r7606076 = r7606071 + r7606075;
        double r7606077 = -403200.0;
        double r7606078 = r7606074 * r7606073;
        double r7606079 = r7606078 * r7606073;
        double r7606080 = r7606077 * r7606079;
        double r7606081 = r7606076 + r7606080;
        double r7606082 = 161280.0;
        double r7606083 = r7606079 * r7606073;
        double r7606084 = r7606083 * r7606073;
        double r7606085 = r7606082 * r7606084;
        double r7606086 = r7606081 + r7606085;
        double r7606087 = -23040.0;
        double r7606088 = r7606084 * r7606073;
        double r7606089 = r7606088 * r7606073;
        double r7606090 = r7606087 * r7606089;
        double r7606091 = r7606086 + r7606090;
        double r7606092 = 1024.0;
        double r7606093 = r7606089 * r7606073;
        double r7606094 = r7606093 * r7606073;
        double r7606095 = r7606092 * r7606094;
        double r7606096 = r7606091 + r7606095;
        return r7606096;
}


double f_of(float x) {
        float r7606097 = -30240.0;
        float r7606098 = 302400.0;
        float r7606099 = x;
        float r7606100 = r7606099 * r7606099;
        float r7606101 = r7606098 * r7606100;
        float r7606102 = r7606097 + r7606101;
        float r7606103 = -403200.0;
        float r7606104 = r7606100 * r7606099;
        float r7606105 = r7606104 * r7606099;
        float r7606106 = r7606103 * r7606105;
        float r7606107 = r7606102 + r7606106;
        float r7606108 = 161280.0;
        float r7606109 = r7606105 * r7606099;
        float r7606110 = r7606109 * r7606099;
        float r7606111 = r7606108 * r7606110;
        float r7606112 = r7606107 + r7606111;
        float r7606113 = -23040.0;
        float r7606114 = r7606110 * r7606099;
        float r7606115 = r7606114 * r7606099;
        float r7606116 = r7606113 * r7606115;
        float r7606117 = r7606112 + r7606116;
        float r7606118 = 1024.0;
        float r7606119 = 3;
        float r7606120 = pow(r7606099, r7606119);
        float r7606121 = r7606120 * r7606099;
        float r7606122 = r7606121 * r7606099;
        float r7606123 = r7606122 * r7606099;
        float r7606124 = r7606123 * r7606099;
        float r7606125 = r7606124 * r7606099;
        float r7606126 = r7606125 * r7606099;
        float r7606127 = r7606126 * r7606099;
        float r7606128 = r7606118 * r7606127;
        float r7606129 = r7606117 + r7606128;
        return r7606129;
}

double f_od(double x) {
        double r7606130 = -30240.0;
        double r7606131 = 302400.0;
        double r7606132 = x;
        double r7606133 = r7606132 * r7606132;
        double r7606134 = r7606131 * r7606133;
        double r7606135 = r7606130 + r7606134;
        double r7606136 = -403200.0;
        double r7606137 = r7606133 * r7606132;
        double r7606138 = r7606137 * r7606132;
        double r7606139 = r7606136 * r7606138;
        double r7606140 = r7606135 + r7606139;
        double r7606141 = 161280.0;
        double r7606142 = r7606138 * r7606132;
        double r7606143 = r7606142 * r7606132;
        double r7606144 = r7606141 * r7606143;
        double r7606145 = r7606140 + r7606144;
        double r7606146 = -23040.0;
        double r7606147 = r7606143 * r7606132;
        double r7606148 = r7606147 * r7606132;
        double r7606149 = r7606146 * r7606148;
        double r7606150 = r7606145 + r7606149;
        double r7606151 = 1024.0;
        double r7606152 = 3;
        double r7606153 = pow(r7606132, r7606152);
        double r7606154 = r7606153 * r7606132;
        double r7606155 = r7606154 * r7606132;
        double r7606156 = r7606155 * r7606132;
        double r7606157 = r7606156 * r7606132;
        double r7606158 = r7606157 * r7606132;
        double r7606159 = r7606158 * r7606132;
        double r7606160 = r7606159 * r7606132;
        double r7606161 = r7606151 * r7606160;
        double r7606162 = r7606150 + r7606161;
        return r7606162;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7606163, r7606164, r7606165, r7606166, r7606167, r7606168, r7606169, r7606170, r7606171, r7606172, r7606173, r7606174, r7606175, r7606176, r7606177, r7606178, r7606179, r7606180, r7606181, r7606182, r7606183, r7606184, r7606185, r7606186, r7606187, r7606188;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7606163, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7606164, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7606165);
        mpfr_init(r7606166);
        mpfr_init(r7606167);
        mpfr_init(r7606168);
        mpfr_init_set_str(r7606169, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7606170);
        mpfr_init(r7606171);
        mpfr_init(r7606172);
        mpfr_init(r7606173);
        mpfr_init_set_str(r7606174, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7606175);
        mpfr_init(r7606176);
        mpfr_init(r7606177);
        mpfr_init(r7606178);
        mpfr_init_set_str(r7606179, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7606180);
        mpfr_init(r7606181);
        mpfr_init(r7606182);
        mpfr_init(r7606183);
        mpfr_init_set_str(r7606184, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7606185);
        mpfr_init(r7606186);
        mpfr_init(r7606187);
        mpfr_init(r7606188);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7606165, x, MPFR_RNDN);
        mpfr_mul(r7606166, r7606165, r7606165, MPFR_RNDN);
        mpfr_mul(r7606167, r7606164, r7606166, MPFR_RNDN);
        mpfr_add(r7606168, r7606163, r7606167, MPFR_RNDN);
        ;
        mpfr_mul(r7606170, r7606166, r7606165, MPFR_RNDN);
        mpfr_mul(r7606171, r7606170, r7606165, MPFR_RNDN);
        mpfr_mul(r7606172, r7606169, r7606171, MPFR_RNDN);
        mpfr_add(r7606173, r7606168, r7606172, MPFR_RNDN);
        ;
        mpfr_mul(r7606175, r7606171, r7606165, MPFR_RNDN);
        mpfr_mul(r7606176, r7606175, r7606165, MPFR_RNDN);
        mpfr_mul(r7606177, r7606174, r7606176, MPFR_RNDN);
        mpfr_add(r7606178, r7606173, r7606177, MPFR_RNDN);
        ;
        mpfr_mul(r7606180, r7606176, r7606165, MPFR_RNDN);
        mpfr_mul(r7606181, r7606180, r7606165, MPFR_RNDN);
        mpfr_mul(r7606182, r7606179, r7606181, MPFR_RNDN);
        mpfr_add(r7606183, r7606178, r7606182, MPFR_RNDN);
        ;
        mpfr_mul(r7606185, r7606181, r7606165, MPFR_RNDN);
        mpfr_mul(r7606186, r7606185, r7606165, MPFR_RNDN);
        mpfr_mul(r7606187, r7606184, r7606186, MPFR_RNDN);
        mpfr_add(r7606188, r7606183, r7606187, MPFR_RNDN);
        return mpfr_get_d(r7606188, MPFR_RNDN);
}

static mpfr_t r7606189, r7606190, r7606191, r7606192, r7606193, r7606194, r7606195, r7606196, r7606197, r7606198, r7606199, r7606200, r7606201, r7606202, r7606203, r7606204, r7606205, r7606206, r7606207, r7606208, r7606209, r7606210, r7606211, r7606212, r7606213, r7606214, r7606215, r7606216, r7606217, r7606218, r7606219, r7606220, r7606221;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7606189, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7606190, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7606191);
        mpfr_init(r7606192);
        mpfr_init(r7606193);
        mpfr_init(r7606194);
        mpfr_init_set_str(r7606195, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7606196);
        mpfr_init(r7606197);
        mpfr_init(r7606198);
        mpfr_init(r7606199);
        mpfr_init_set_str(r7606200, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7606201);
        mpfr_init(r7606202);
        mpfr_init(r7606203);
        mpfr_init(r7606204);
        mpfr_init_set_str(r7606205, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7606206);
        mpfr_init(r7606207);
        mpfr_init(r7606208);
        mpfr_init(r7606209);
        mpfr_init_set_str(r7606210, "1024.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7606211, "3", 10, MPFR_RNDN);
        mpfr_init(r7606212);
        mpfr_init(r7606213);
        mpfr_init(r7606214);
        mpfr_init(r7606215);
        mpfr_init(r7606216);
        mpfr_init(r7606217);
        mpfr_init(r7606218);
        mpfr_init(r7606219);
        mpfr_init(r7606220);
        mpfr_init(r7606221);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7606191, x, MPFR_RNDN);
        mpfr_mul(r7606192, r7606191, r7606191, MPFR_RNDN);
        mpfr_mul(r7606193, r7606190, r7606192, MPFR_RNDN);
        mpfr_add(r7606194, r7606189, r7606193, MPFR_RNDN);
        ;
        mpfr_mul(r7606196, r7606192, r7606191, MPFR_RNDN);
        mpfr_mul(r7606197, r7606196, r7606191, MPFR_RNDN);
        mpfr_mul(r7606198, r7606195, r7606197, MPFR_RNDN);
        mpfr_add(r7606199, r7606194, r7606198, MPFR_RNDN);
        ;
        mpfr_mul(r7606201, r7606197, r7606191, MPFR_RNDN);
        mpfr_mul(r7606202, r7606201, r7606191, MPFR_RNDN);
        mpfr_mul(r7606203, r7606200, r7606202, MPFR_RNDN);
        mpfr_add(r7606204, r7606199, r7606203, MPFR_RNDN);
        ;
        mpfr_mul(r7606206, r7606202, r7606191, MPFR_RNDN);
        mpfr_mul(r7606207, r7606206, r7606191, MPFR_RNDN);
        mpfr_mul(r7606208, r7606205, r7606207, MPFR_RNDN);
        mpfr_add(r7606209, r7606204, r7606208, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7606212, r7606191, r7606211, MPFR_RNDN);
        mpfr_mul(r7606213, r7606212, r7606191, MPFR_RNDN);
        mpfr_mul(r7606214, r7606213, r7606191, MPFR_RNDN);
        mpfr_mul(r7606215, r7606214, r7606191, MPFR_RNDN);
        mpfr_mul(r7606216, r7606215, r7606191, MPFR_RNDN);
        mpfr_mul(r7606217, r7606216, r7606191, MPFR_RNDN);
        mpfr_mul(r7606218, r7606217, r7606191, MPFR_RNDN);
        mpfr_mul(r7606219, r7606218, r7606191, MPFR_RNDN);
        mpfr_mul(r7606220, r7606210, r7606219, MPFR_RNDN);
        mpfr_add(r7606221, r7606209, r7606220, MPFR_RNDN);
        return mpfr_get_d(r7606221, MPFR_RNDN);
}

static mpfr_t r7606222, r7606223, r7606224, r7606225, r7606226, r7606227, r7606228, r7606229, r7606230, r7606231, r7606232, r7606233, r7606234, r7606235, r7606236, r7606237, r7606238, r7606239, r7606240, r7606241, r7606242, r7606243, r7606244, r7606245, r7606246, r7606247, r7606248, r7606249, r7606250, r7606251, r7606252, r7606253, r7606254;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7606222, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7606223, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7606224);
        mpfr_init(r7606225);
        mpfr_init(r7606226);
        mpfr_init(r7606227);
        mpfr_init_set_str(r7606228, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7606229);
        mpfr_init(r7606230);
        mpfr_init(r7606231);
        mpfr_init(r7606232);
        mpfr_init_set_str(r7606233, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7606234);
        mpfr_init(r7606235);
        mpfr_init(r7606236);
        mpfr_init(r7606237);
        mpfr_init_set_str(r7606238, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7606239);
        mpfr_init(r7606240);
        mpfr_init(r7606241);
        mpfr_init(r7606242);
        mpfr_init_set_str(r7606243, "1024.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7606244, "3", 10, MPFR_RNDN);
        mpfr_init(r7606245);
        mpfr_init(r7606246);
        mpfr_init(r7606247);
        mpfr_init(r7606248);
        mpfr_init(r7606249);
        mpfr_init(r7606250);
        mpfr_init(r7606251);
        mpfr_init(r7606252);
        mpfr_init(r7606253);
        mpfr_init(r7606254);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7606224, x, MPFR_RNDN);
        mpfr_mul(r7606225, r7606224, r7606224, MPFR_RNDN);
        mpfr_mul(r7606226, r7606223, r7606225, MPFR_RNDN);
        mpfr_add(r7606227, r7606222, r7606226, MPFR_RNDN);
        ;
        mpfr_mul(r7606229, r7606225, r7606224, MPFR_RNDN);
        mpfr_mul(r7606230, r7606229, r7606224, MPFR_RNDN);
        mpfr_mul(r7606231, r7606228, r7606230, MPFR_RNDN);
        mpfr_add(r7606232, r7606227, r7606231, MPFR_RNDN);
        ;
        mpfr_mul(r7606234, r7606230, r7606224, MPFR_RNDN);
        mpfr_mul(r7606235, r7606234, r7606224, MPFR_RNDN);
        mpfr_mul(r7606236, r7606233, r7606235, MPFR_RNDN);
        mpfr_add(r7606237, r7606232, r7606236, MPFR_RNDN);
        ;
        mpfr_mul(r7606239, r7606235, r7606224, MPFR_RNDN);
        mpfr_mul(r7606240, r7606239, r7606224, MPFR_RNDN);
        mpfr_mul(r7606241, r7606238, r7606240, MPFR_RNDN);
        mpfr_add(r7606242, r7606237, r7606241, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7606245, r7606224, r7606244, MPFR_RNDN);
        mpfr_mul(r7606246, r7606245, r7606224, MPFR_RNDN);
        mpfr_mul(r7606247, r7606246, r7606224, MPFR_RNDN);
        mpfr_mul(r7606248, r7606247, r7606224, MPFR_RNDN);
        mpfr_mul(r7606249, r7606248, r7606224, MPFR_RNDN);
        mpfr_mul(r7606250, r7606249, r7606224, MPFR_RNDN);
        mpfr_mul(r7606251, r7606250, r7606224, MPFR_RNDN);
        mpfr_mul(r7606252, r7606251, r7606224, MPFR_RNDN);
        mpfr_mul(r7606253, r7606243, r7606252, MPFR_RNDN);
        mpfr_add(r7606254, r7606242, r7606253, MPFR_RNDN);
        return mpfr_get_d(r7606254, MPFR_RNDN);
}

