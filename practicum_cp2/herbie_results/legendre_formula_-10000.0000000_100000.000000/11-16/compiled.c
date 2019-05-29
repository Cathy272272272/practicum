#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r7404036 = 0.196381;
        float r7404037 = -26.707764;
        float r7404038 = x;
        float r7404039 = r7404038 * r7404038;
        float r7404040 = r7404037 * r7404039;
        float r7404041 = r7404036 + r7404040;
        float r7404042 = 592.022095;
        float r7404043 = r7404039 * r7404038;
        float r7404044 = r7404043 * r7404038;
        float r7404045 = r7404042 * r7404044;
        float r7404046 = r7404041 + r7404045;
        float r7404047 = -4972.985596;
        float r7404048 = r7404044 * r7404038;
        float r7404049 = r7404048 * r7404038;
        float r7404050 = r7404047 * r7404049;
        float r7404051 = r7404046 + r7404050;
        float r7404052 = 20424.762268;
        float r7404053 = r7404049 * r7404038;
        float r7404054 = r7404053 * r7404038;
        float r7404055 = r7404052 * r7404054;
        float r7404056 = r7404051 + r7404055;
        float r7404057 = -45388.360596;
        float r7404058 = r7404054 * r7404038;
        float r7404059 = r7404058 * r7404038;
        float r7404060 = r7404057 * r7404059;
        float r7404061 = r7404056 + r7404060;
        float r7404062 = 55703.897095;
        float r7404063 = r7404059 * r7404038;
        float r7404064 = r7404063 * r7404038;
        float r7404065 = r7404062 * r7404064;
        float r7404066 = r7404061 + r7404065;
        float r7404067 = -35503.582764;
        float r7404068 = r7404064 * r7404038;
        float r7404069 = r7404068 * r7404038;
        float r7404070 = r7404067 * r7404069;
        float r7404071 = r7404066 + r7404070;
        float r7404072 = 9171.758881;
        float r7404073 = r7404069 * r7404038;
        float r7404074 = r7404073 * r7404038;
        float r7404075 = r7404072 * r7404074;
        float r7404076 = r7404071 + r7404075;
        return r7404076;
}

double f_id(double x) {
        double r7404077 = 0.196381;
        double r7404078 = -26.707764;
        double r7404079 = x;
        double r7404080 = r7404079 * r7404079;
        double r7404081 = r7404078 * r7404080;
        double r7404082 = r7404077 + r7404081;
        double r7404083 = 592.022095;
        double r7404084 = r7404080 * r7404079;
        double r7404085 = r7404084 * r7404079;
        double r7404086 = r7404083 * r7404085;
        double r7404087 = r7404082 + r7404086;
        double r7404088 = -4972.985596;
        double r7404089 = r7404085 * r7404079;
        double r7404090 = r7404089 * r7404079;
        double r7404091 = r7404088 * r7404090;
        double r7404092 = r7404087 + r7404091;
        double r7404093 = 20424.762268;
        double r7404094 = r7404090 * r7404079;
        double r7404095 = r7404094 * r7404079;
        double r7404096 = r7404093 * r7404095;
        double r7404097 = r7404092 + r7404096;
        double r7404098 = -45388.360596;
        double r7404099 = r7404095 * r7404079;
        double r7404100 = r7404099 * r7404079;
        double r7404101 = r7404098 * r7404100;
        double r7404102 = r7404097 + r7404101;
        double r7404103 = 55703.897095;
        double r7404104 = r7404100 * r7404079;
        double r7404105 = r7404104 * r7404079;
        double r7404106 = r7404103 * r7404105;
        double r7404107 = r7404102 + r7404106;
        double r7404108 = -35503.582764;
        double r7404109 = r7404105 * r7404079;
        double r7404110 = r7404109 * r7404079;
        double r7404111 = r7404108 * r7404110;
        double r7404112 = r7404107 + r7404111;
        double r7404113 = 9171.758881;
        double r7404114 = r7404110 * r7404079;
        double r7404115 = r7404114 * r7404079;
        double r7404116 = r7404113 * r7404115;
        double r7404117 = r7404112 + r7404116;
        return r7404117;
}


double f_of(float x) {
        float r7404118 = x;
        float r7404119 = r7404118 * r7404118;
        float r7404120 = 3;
        float r7404121 = pow(r7404119, r7404120);
        float r7404122 = r7404119 * r7404119;
        float r7404123 = r7404121 * r7404122;
        float r7404124 = r7404123 * r7404122;
        float r7404125 = -35503.582764;
        float r7404126 = 9171.758881;
        float r7404127 = r7404118 * r7404126;
        float r7404128 = r7404118 * r7404127;
        float r7404129 = r7404125 + r7404128;
        float r7404130 = r7404124 * r7404129;
        float r7404131 = -26.707764;
        float r7404132 = r7404118 * r7404131;
        float r7404133 = r7404118 * r7404132;
        float r7404134 = 0.196381;
        float r7404135 = r7404133 + r7404134;
        float r7404136 = 592.022095;
        float r7404137 = -4972.985596;
        float r7404138 = r7404119 * r7404137;
        float r7404139 = r7404136 + r7404138;
        float r7404140 = r7404122 * r7404139;
        float r7404141 = r7404135 + r7404140;
        float r7404142 = 55703.897095;
        float r7404143 = r7404142 * r7404118;
        float r7404144 = r7404118 * r7404143;
        float r7404145 = -45388.360596;
        float r7404146 = r7404144 + r7404145;
        float r7404147 = r7404123 * r7404146;
        float r7404148 = 20424.762268;
        float r7404149 = 8;
        float r7404150 = pow(r7404118, r7404149);
        float r7404151 = r7404148 * r7404150;
        float r7404152 = r7404147 + r7404151;
        float r7404153 = r7404141 + r7404152;
        float r7404154 = r7404130 + r7404153;
        return r7404154;
}

double f_od(double x) {
        double r7404155 = x;
        double r7404156 = r7404155 * r7404155;
        double r7404157 = 3;
        double r7404158 = pow(r7404156, r7404157);
        double r7404159 = r7404156 * r7404156;
        double r7404160 = r7404158 * r7404159;
        double r7404161 = r7404160 * r7404159;
        double r7404162 = -35503.582764;
        double r7404163 = 9171.758881;
        double r7404164 = r7404155 * r7404163;
        double r7404165 = r7404155 * r7404164;
        double r7404166 = r7404162 + r7404165;
        double r7404167 = r7404161 * r7404166;
        double r7404168 = -26.707764;
        double r7404169 = r7404155 * r7404168;
        double r7404170 = r7404155 * r7404169;
        double r7404171 = 0.196381;
        double r7404172 = r7404170 + r7404171;
        double r7404173 = 592.022095;
        double r7404174 = -4972.985596;
        double r7404175 = r7404156 * r7404174;
        double r7404176 = r7404173 + r7404175;
        double r7404177 = r7404159 * r7404176;
        double r7404178 = r7404172 + r7404177;
        double r7404179 = 55703.897095;
        double r7404180 = r7404179 * r7404155;
        double r7404181 = r7404155 * r7404180;
        double r7404182 = -45388.360596;
        double r7404183 = r7404181 + r7404182;
        double r7404184 = r7404160 * r7404183;
        double r7404185 = 20424.762268;
        double r7404186 = 8;
        double r7404187 = pow(r7404155, r7404186);
        double r7404188 = r7404185 * r7404187;
        double r7404189 = r7404184 + r7404188;
        double r7404190 = r7404178 + r7404189;
        double r7404191 = r7404167 + r7404190;
        return r7404191;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7404192, r7404193, r7404194, r7404195, r7404196, r7404197, r7404198, r7404199, r7404200, r7404201, r7404202, r7404203, r7404204, r7404205, r7404206, r7404207, r7404208, r7404209, r7404210, r7404211, r7404212, r7404213, r7404214, r7404215, r7404216, r7404217, r7404218, r7404219, r7404220, r7404221, r7404222, r7404223, r7404224, r7404225, r7404226, r7404227, r7404228, r7404229, r7404230, r7404231, r7404232;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7404192, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404193, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7404194);
        mpfr_init(r7404195);
        mpfr_init(r7404196);
        mpfr_init(r7404197);
        mpfr_init_set_str(r7404198, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r7404199);
        mpfr_init(r7404200);
        mpfr_init(r7404201);
        mpfr_init(r7404202);
        mpfr_init_set_str(r7404203, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7404204);
        mpfr_init(r7404205);
        mpfr_init(r7404206);
        mpfr_init(r7404207);
        mpfr_init_set_str(r7404208, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7404209);
        mpfr_init(r7404210);
        mpfr_init(r7404211);
        mpfr_init(r7404212);
        mpfr_init_set_str(r7404213, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7404214);
        mpfr_init(r7404215);
        mpfr_init(r7404216);
        mpfr_init(r7404217);
        mpfr_init_set_str(r7404218, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7404219);
        mpfr_init(r7404220);
        mpfr_init(r7404221);
        mpfr_init(r7404222);
        mpfr_init_set_str(r7404223, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r7404224);
        mpfr_init(r7404225);
        mpfr_init(r7404226);
        mpfr_init(r7404227);
        mpfr_init_set_str(r7404228, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7404229);
        mpfr_init(r7404230);
        mpfr_init(r7404231);
        mpfr_init(r7404232);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7404194, x, MPFR_RNDN);
        mpfr_mul(r7404195, r7404194, r7404194, MPFR_RNDN);
        mpfr_mul(r7404196, r7404193, r7404195, MPFR_RNDN);
        mpfr_add(r7404197, r7404192, r7404196, MPFR_RNDN);
        ;
        mpfr_mul(r7404199, r7404195, r7404194, MPFR_RNDN);
        mpfr_mul(r7404200, r7404199, r7404194, MPFR_RNDN);
        mpfr_mul(r7404201, r7404198, r7404200, MPFR_RNDN);
        mpfr_add(r7404202, r7404197, r7404201, MPFR_RNDN);
        ;
        mpfr_mul(r7404204, r7404200, r7404194, MPFR_RNDN);
        mpfr_mul(r7404205, r7404204, r7404194, MPFR_RNDN);
        mpfr_mul(r7404206, r7404203, r7404205, MPFR_RNDN);
        mpfr_add(r7404207, r7404202, r7404206, MPFR_RNDN);
        ;
        mpfr_mul(r7404209, r7404205, r7404194, MPFR_RNDN);
        mpfr_mul(r7404210, r7404209, r7404194, MPFR_RNDN);
        mpfr_mul(r7404211, r7404208, r7404210, MPFR_RNDN);
        mpfr_add(r7404212, r7404207, r7404211, MPFR_RNDN);
        ;
        mpfr_mul(r7404214, r7404210, r7404194, MPFR_RNDN);
        mpfr_mul(r7404215, r7404214, r7404194, MPFR_RNDN);
        mpfr_mul(r7404216, r7404213, r7404215, MPFR_RNDN);
        mpfr_add(r7404217, r7404212, r7404216, MPFR_RNDN);
        ;
        mpfr_mul(r7404219, r7404215, r7404194, MPFR_RNDN);
        mpfr_mul(r7404220, r7404219, r7404194, MPFR_RNDN);
        mpfr_mul(r7404221, r7404218, r7404220, MPFR_RNDN);
        mpfr_add(r7404222, r7404217, r7404221, MPFR_RNDN);
        ;
        mpfr_mul(r7404224, r7404220, r7404194, MPFR_RNDN);
        mpfr_mul(r7404225, r7404224, r7404194, MPFR_RNDN);
        mpfr_mul(r7404226, r7404223, r7404225, MPFR_RNDN);
        mpfr_add(r7404227, r7404222, r7404226, MPFR_RNDN);
        ;
        mpfr_mul(r7404229, r7404225, r7404194, MPFR_RNDN);
        mpfr_mul(r7404230, r7404229, r7404194, MPFR_RNDN);
        mpfr_mul(r7404231, r7404228, r7404230, MPFR_RNDN);
        mpfr_add(r7404232, r7404227, r7404231, MPFR_RNDN);
        return mpfr_get_d(r7404232, MPFR_RNDN);
}

static mpfr_t r7404233, r7404234, r7404235, r7404236, r7404237, r7404238, r7404239, r7404240, r7404241, r7404242, r7404243, r7404244, r7404245, r7404246, r7404247, r7404248, r7404249, r7404250, r7404251, r7404252, r7404253, r7404254, r7404255, r7404256, r7404257, r7404258, r7404259, r7404260, r7404261, r7404262, r7404263, r7404264, r7404265, r7404266, r7404267, r7404268, r7404269;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7404233);
        mpfr_init(r7404234);
        mpfr_init_set_str(r7404235, "3", 10, MPFR_RNDN);
        mpfr_init(r7404236);
        mpfr_init(r7404237);
        mpfr_init(r7404238);
        mpfr_init(r7404239);
        mpfr_init_set_str(r7404240, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404241, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7404242);
        mpfr_init(r7404243);
        mpfr_init(r7404244);
        mpfr_init(r7404245);
        mpfr_init_set_str(r7404246, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7404247);
        mpfr_init(r7404248);
        mpfr_init_set_str(r7404249, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r7404250);
        mpfr_init_set_str(r7404251, "592.022095", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404252, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7404253);
        mpfr_init(r7404254);
        mpfr_init(r7404255);
        mpfr_init(r7404256);
        mpfr_init_set_str(r7404257, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7404258);
        mpfr_init(r7404259);
        mpfr_init_set_str(r7404260, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7404261);
        mpfr_init(r7404262);
        mpfr_init_set_str(r7404263, "20424.762268", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404264, "8", 10, MPFR_RNDN);
        mpfr_init(r7404265);
        mpfr_init(r7404266);
        mpfr_init(r7404267);
        mpfr_init(r7404268);
        mpfr_init(r7404269);
}

double f_fm(double x) {
        mpfr_set_d(r7404233, x, MPFR_RNDN);
        mpfr_mul(r7404234, r7404233, r7404233, MPFR_RNDN);
        ;
        mpfr_pow(r7404236, r7404234, r7404235, MPFR_RNDN);
        mpfr_mul(r7404237, r7404234, r7404234, MPFR_RNDN);
        mpfr_mul(r7404238, r7404236, r7404237, MPFR_RNDN);
        mpfr_mul(r7404239, r7404238, r7404237, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7404242, r7404233, r7404241, MPFR_RNDN);
        mpfr_mul(r7404243, r7404233, r7404242, MPFR_RNDN);
        mpfr_add(r7404244, r7404240, r7404243, MPFR_RNDN);
        mpfr_mul(r7404245, r7404239, r7404244, MPFR_RNDN);
        ;
        mpfr_mul(r7404247, r7404233, r7404246, MPFR_RNDN);
        mpfr_mul(r7404248, r7404233, r7404247, MPFR_RNDN);
        ;
        mpfr_add(r7404250, r7404248, r7404249, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7404253, r7404234, r7404252, MPFR_RNDN);
        mpfr_add(r7404254, r7404251, r7404253, MPFR_RNDN);
        mpfr_mul(r7404255, r7404237, r7404254, MPFR_RNDN);
        mpfr_add(r7404256, r7404250, r7404255, MPFR_RNDN);
        ;
        mpfr_mul(r7404258, r7404257, r7404233, MPFR_RNDN);
        mpfr_mul(r7404259, r7404233, r7404258, MPFR_RNDN);
        ;
        mpfr_add(r7404261, r7404259, r7404260, MPFR_RNDN);
        mpfr_mul(r7404262, r7404238, r7404261, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7404265, r7404233, r7404264, MPFR_RNDN);
        mpfr_mul(r7404266, r7404263, r7404265, MPFR_RNDN);
        mpfr_add(r7404267, r7404262, r7404266, MPFR_RNDN);
        mpfr_add(r7404268, r7404256, r7404267, MPFR_RNDN);
        mpfr_add(r7404269, r7404245, r7404268, MPFR_RNDN);
        return mpfr_get_d(r7404269, MPFR_RNDN);
}

static mpfr_t r7404270, r7404271, r7404272, r7404273, r7404274, r7404275, r7404276, r7404277, r7404278, r7404279, r7404280, r7404281, r7404282, r7404283, r7404284, r7404285, r7404286, r7404287, r7404288, r7404289, r7404290, r7404291, r7404292, r7404293, r7404294, r7404295, r7404296, r7404297, r7404298, r7404299, r7404300, r7404301, r7404302, r7404303, r7404304, r7404305, r7404306;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7404270);
        mpfr_init(r7404271);
        mpfr_init_set_str(r7404272, "3", 10, MPFR_RNDN);
        mpfr_init(r7404273);
        mpfr_init(r7404274);
        mpfr_init(r7404275);
        mpfr_init(r7404276);
        mpfr_init_set_str(r7404277, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404278, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7404279);
        mpfr_init(r7404280);
        mpfr_init(r7404281);
        mpfr_init(r7404282);
        mpfr_init_set_str(r7404283, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7404284);
        mpfr_init(r7404285);
        mpfr_init_set_str(r7404286, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r7404287);
        mpfr_init_set_str(r7404288, "592.022095", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404289, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7404290);
        mpfr_init(r7404291);
        mpfr_init(r7404292);
        mpfr_init(r7404293);
        mpfr_init_set_str(r7404294, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7404295);
        mpfr_init(r7404296);
        mpfr_init_set_str(r7404297, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7404298);
        mpfr_init(r7404299);
        mpfr_init_set_str(r7404300, "20424.762268", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404301, "8", 10, MPFR_RNDN);
        mpfr_init(r7404302);
        mpfr_init(r7404303);
        mpfr_init(r7404304);
        mpfr_init(r7404305);
        mpfr_init(r7404306);
}

double f_dm(double x) {
        mpfr_set_d(r7404270, x, MPFR_RNDN);
        mpfr_mul(r7404271, r7404270, r7404270, MPFR_RNDN);
        ;
        mpfr_pow(r7404273, r7404271, r7404272, MPFR_RNDN);
        mpfr_mul(r7404274, r7404271, r7404271, MPFR_RNDN);
        mpfr_mul(r7404275, r7404273, r7404274, MPFR_RNDN);
        mpfr_mul(r7404276, r7404275, r7404274, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7404279, r7404270, r7404278, MPFR_RNDN);
        mpfr_mul(r7404280, r7404270, r7404279, MPFR_RNDN);
        mpfr_add(r7404281, r7404277, r7404280, MPFR_RNDN);
        mpfr_mul(r7404282, r7404276, r7404281, MPFR_RNDN);
        ;
        mpfr_mul(r7404284, r7404270, r7404283, MPFR_RNDN);
        mpfr_mul(r7404285, r7404270, r7404284, MPFR_RNDN);
        ;
        mpfr_add(r7404287, r7404285, r7404286, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7404290, r7404271, r7404289, MPFR_RNDN);
        mpfr_add(r7404291, r7404288, r7404290, MPFR_RNDN);
        mpfr_mul(r7404292, r7404274, r7404291, MPFR_RNDN);
        mpfr_add(r7404293, r7404287, r7404292, MPFR_RNDN);
        ;
        mpfr_mul(r7404295, r7404294, r7404270, MPFR_RNDN);
        mpfr_mul(r7404296, r7404270, r7404295, MPFR_RNDN);
        ;
        mpfr_add(r7404298, r7404296, r7404297, MPFR_RNDN);
        mpfr_mul(r7404299, r7404275, r7404298, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7404302, r7404270, r7404301, MPFR_RNDN);
        mpfr_mul(r7404303, r7404300, r7404302, MPFR_RNDN);
        mpfr_add(r7404304, r7404299, r7404303, MPFR_RNDN);
        mpfr_add(r7404305, r7404293, r7404304, MPFR_RNDN);
        mpfr_add(r7404306, r7404282, r7404305, MPFR_RNDN);
        return mpfr_get_d(r7404306, MPFR_RNDN);
}

