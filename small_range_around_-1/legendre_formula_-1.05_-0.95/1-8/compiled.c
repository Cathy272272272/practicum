#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r33707125 = 0.273438;
        float r33707126 = -9.84375;
        float r33707127 = x;
        float r33707128 = r33707127 * r33707127;
        float r33707129 = r33707126 * r33707128;
        float r33707130 = r33707125 + r33707129;
        float r33707131 = 54.140625;
        float r33707132 = r33707128 * r33707127;
        float r33707133 = r33707132 * r33707127;
        float r33707134 = r33707131 * r33707133;
        float r33707135 = r33707130 + r33707134;
        float r33707136 = -93.84375;
        float r33707137 = r33707133 * r33707127;
        float r33707138 = r33707137 * r33707127;
        float r33707139 = r33707136 * r33707138;
        float r33707140 = r33707135 + r33707139;
        float r33707141 = 50.273438;
        float r33707142 = r33707138 * r33707127;
        float r33707143 = r33707142 * r33707127;
        float r33707144 = r33707141 * r33707143;
        float r33707145 = r33707140 + r33707144;
        return r33707145;
}

double f_id(double x) {
        double r33707146 = 0.273438;
        double r33707147 = -9.84375;
        double r33707148 = x;
        double r33707149 = r33707148 * r33707148;
        double r33707150 = r33707147 * r33707149;
        double r33707151 = r33707146 + r33707150;
        double r33707152 = 54.140625;
        double r33707153 = r33707149 * r33707148;
        double r33707154 = r33707153 * r33707148;
        double r33707155 = r33707152 * r33707154;
        double r33707156 = r33707151 + r33707155;
        double r33707157 = -93.84375;
        double r33707158 = r33707154 * r33707148;
        double r33707159 = r33707158 * r33707148;
        double r33707160 = r33707157 * r33707159;
        double r33707161 = r33707156 + r33707160;
        double r33707162 = 50.273438;
        double r33707163 = r33707159 * r33707148;
        double r33707164 = r33707163 * r33707148;
        double r33707165 = r33707162 * r33707164;
        double r33707166 = r33707161 + r33707165;
        return r33707166;
}


double f_of(float x) {
        float r33707167 = x;
        float r33707168 = 54.140625;
        float r33707169 = 3;
        float r33707170 = pow(r33707167, r33707169);
        float r33707171 = r33707168 * r33707170;
        float r33707172 = r33707167 * r33707171;
        float r33707173 = -9.84375;
        float r33707174 = r33707167 * r33707173;
        float r33707175 = r33707167 * r33707174;
        float r33707176 = r33707172 + r33707175;
        float r33707177 = 0.273438;
        float r33707178 = r33707176 + r33707177;
        float r33707179 = r33707170 * r33707170;
        float r33707180 = -93.84375;
        float r33707181 = 50.273438;
        float r33707182 = r33707181 * r33707167;
        float r33707183 = r33707182 * r33707167;
        float r33707184 = r33707180 + r33707183;
        float r33707185 = r33707179 * r33707184;
        float r33707186 = r33707178 + r33707185;
        float r33707187 = cbrt(r33707186);
        float r33707188 = r33707184 * r33707179;
        float r33707189 = r33707167 * r33707168;
        float r33707190 = r33707170 * r33707189;
        float r33707191 = r33707190 + r33707177;
        float r33707192 = r33707174 * r33707167;
        float r33707193 = r33707191 + r33707192;
        float r33707194 = r33707188 + r33707193;
        float r33707195 = cbrt(r33707194);
        float r33707196 = r33707167 * r33707167;
        float r33707197 = pow(r33707196, r33707169);
        float r33707198 = r33707196 * r33707181;
        float r33707199 = r33707198 + r33707180;
        float r33707200 = r33707197 * r33707199;
        float r33707201 = r33707200 * r33707200;
        float r33707202 = r33707196 * r33707173;
        float r33707203 = r33707168 * r33707167;
        float r33707204 = r33707203 * r33707170;
        float r33707205 = r33707202 + r33707204;
        float r33707206 = r33707205 + r33707177;
        float r33707207 = r33707206 * r33707206;
        float r33707208 = r33707201 - r33707207;
        float r33707209 = r33707188 - r33707193;
        float r33707210 = r33707208 / r33707209;
        float r33707211 = cbrt(r33707210);
        float r33707212 = r33707195 * r33707211;
        float r33707213 = r33707187 * r33707212;
        return r33707213;
}

double f_od(double x) {
        double r33707214 = x;
        double r33707215 = 54.140625;
        double r33707216 = 3;
        double r33707217 = pow(r33707214, r33707216);
        double r33707218 = r33707215 * r33707217;
        double r33707219 = r33707214 * r33707218;
        double r33707220 = -9.84375;
        double r33707221 = r33707214 * r33707220;
        double r33707222 = r33707214 * r33707221;
        double r33707223 = r33707219 + r33707222;
        double r33707224 = 0.273438;
        double r33707225 = r33707223 + r33707224;
        double r33707226 = r33707217 * r33707217;
        double r33707227 = -93.84375;
        double r33707228 = 50.273438;
        double r33707229 = r33707228 * r33707214;
        double r33707230 = r33707229 * r33707214;
        double r33707231 = r33707227 + r33707230;
        double r33707232 = r33707226 * r33707231;
        double r33707233 = r33707225 + r33707232;
        double r33707234 = cbrt(r33707233);
        double r33707235 = r33707231 * r33707226;
        double r33707236 = r33707214 * r33707215;
        double r33707237 = r33707217 * r33707236;
        double r33707238 = r33707237 + r33707224;
        double r33707239 = r33707221 * r33707214;
        double r33707240 = r33707238 + r33707239;
        double r33707241 = r33707235 + r33707240;
        double r33707242 = cbrt(r33707241);
        double r33707243 = r33707214 * r33707214;
        double r33707244 = pow(r33707243, r33707216);
        double r33707245 = r33707243 * r33707228;
        double r33707246 = r33707245 + r33707227;
        double r33707247 = r33707244 * r33707246;
        double r33707248 = r33707247 * r33707247;
        double r33707249 = r33707243 * r33707220;
        double r33707250 = r33707215 * r33707214;
        double r33707251 = r33707250 * r33707217;
        double r33707252 = r33707249 + r33707251;
        double r33707253 = r33707252 + r33707224;
        double r33707254 = r33707253 * r33707253;
        double r33707255 = r33707248 - r33707254;
        double r33707256 = r33707235 - r33707240;
        double r33707257 = r33707255 / r33707256;
        double r33707258 = cbrt(r33707257);
        double r33707259 = r33707242 * r33707258;
        double r33707260 = r33707234 * r33707259;
        return r33707260;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33707261, r33707262, r33707263, r33707264, r33707265, r33707266, r33707267, r33707268, r33707269, r33707270, r33707271, r33707272, r33707273, r33707274, r33707275, r33707276, r33707277, r33707278, r33707279, r33707280, r33707281;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707261, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707262, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r33707263);
        mpfr_init(r33707264);
        mpfr_init(r33707265);
        mpfr_init(r33707266);
        mpfr_init_set_str(r33707267, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r33707268);
        mpfr_init(r33707269);
        mpfr_init(r33707270);
        mpfr_init(r33707271);
        mpfr_init_set_str(r33707272, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r33707273);
        mpfr_init(r33707274);
        mpfr_init(r33707275);
        mpfr_init(r33707276);
        mpfr_init_set_str(r33707277, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r33707278);
        mpfr_init(r33707279);
        mpfr_init(r33707280);
        mpfr_init(r33707281);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r33707263, x, MPFR_RNDN);
        mpfr_mul(r33707264, r33707263, r33707263, MPFR_RNDN);
        mpfr_mul(r33707265, r33707262, r33707264, MPFR_RNDN);
        mpfr_add(r33707266, r33707261, r33707265, MPFR_RNDN);
        ;
        mpfr_mul(r33707268, r33707264, r33707263, MPFR_RNDN);
        mpfr_mul(r33707269, r33707268, r33707263, MPFR_RNDN);
        mpfr_mul(r33707270, r33707267, r33707269, MPFR_RNDN);
        mpfr_add(r33707271, r33707266, r33707270, MPFR_RNDN);
        ;
        mpfr_mul(r33707273, r33707269, r33707263, MPFR_RNDN);
        mpfr_mul(r33707274, r33707273, r33707263, MPFR_RNDN);
        mpfr_mul(r33707275, r33707272, r33707274, MPFR_RNDN);
        mpfr_add(r33707276, r33707271, r33707275, MPFR_RNDN);
        ;
        mpfr_mul(r33707278, r33707274, r33707263, MPFR_RNDN);
        mpfr_mul(r33707279, r33707278, r33707263, MPFR_RNDN);
        mpfr_mul(r33707280, r33707277, r33707279, MPFR_RNDN);
        mpfr_add(r33707281, r33707276, r33707280, MPFR_RNDN);
        return mpfr_get_d(r33707281, MPFR_RNDN);
}

static mpfr_t r33707282, r33707283, r33707284, r33707285, r33707286, r33707287, r33707288, r33707289, r33707290, r33707291, r33707292, r33707293, r33707294, r33707295, r33707296, r33707297, r33707298, r33707299, r33707300, r33707301, r33707302, r33707303, r33707304, r33707305, r33707306, r33707307, r33707308, r33707309, r33707310, r33707311, r33707312, r33707313, r33707314, r33707315, r33707316, r33707317, r33707318, r33707319, r33707320, r33707321, r33707322, r33707323, r33707324, r33707325, r33707326, r33707327, r33707328;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33707282);
        mpfr_init_set_str(r33707283, "54.140625", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707284, "3", 10, MPFR_RNDN);
        mpfr_init(r33707285);
        mpfr_init(r33707286);
        mpfr_init(r33707287);
        mpfr_init_set_str(r33707288, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r33707289);
        mpfr_init(r33707290);
        mpfr_init(r33707291);
        mpfr_init_set_str(r33707292, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r33707293);
        mpfr_init(r33707294);
        mpfr_init_set_str(r33707295, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707296, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r33707297);
        mpfr_init(r33707298);
        mpfr_init(r33707299);
        mpfr_init(r33707300);
        mpfr_init(r33707301);
        mpfr_init(r33707302);
        mpfr_init(r33707303);
        mpfr_init(r33707304);
        mpfr_init(r33707305);
        mpfr_init(r33707306);
        mpfr_init(r33707307);
        mpfr_init(r33707308);
        mpfr_init(r33707309);
        mpfr_init(r33707310);
        mpfr_init(r33707311);
        mpfr_init(r33707312);
        mpfr_init(r33707313);
        mpfr_init(r33707314);
        mpfr_init(r33707315);
        mpfr_init(r33707316);
        mpfr_init(r33707317);
        mpfr_init(r33707318);
        mpfr_init(r33707319);
        mpfr_init(r33707320);
        mpfr_init(r33707321);
        mpfr_init(r33707322);
        mpfr_init(r33707323);
        mpfr_init(r33707324);
        mpfr_init(r33707325);
        mpfr_init(r33707326);
        mpfr_init(r33707327);
        mpfr_init(r33707328);
}

double f_fm(double x) {
        mpfr_set_d(r33707282, x, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r33707285, r33707282, r33707284, MPFR_RNDN);
        mpfr_mul(r33707286, r33707283, r33707285, MPFR_RNDN);
        mpfr_mul(r33707287, r33707282, r33707286, MPFR_RNDN);
        ;
        mpfr_mul(r33707289, r33707282, r33707288, MPFR_RNDN);
        mpfr_mul(r33707290, r33707282, r33707289, MPFR_RNDN);
        mpfr_add(r33707291, r33707287, r33707290, MPFR_RNDN);
        ;
        mpfr_add(r33707293, r33707291, r33707292, MPFR_RNDN);
        mpfr_mul(r33707294, r33707285, r33707285, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r33707297, r33707296, r33707282, MPFR_RNDN);
        mpfr_mul(r33707298, r33707297, r33707282, MPFR_RNDN);
        mpfr_add(r33707299, r33707295, r33707298, MPFR_RNDN);
        mpfr_mul(r33707300, r33707294, r33707299, MPFR_RNDN);
        mpfr_add(r33707301, r33707293, r33707300, MPFR_RNDN);
        mpfr_cbrt(r33707302, r33707301, MPFR_RNDN);
        mpfr_mul(r33707303, r33707299, r33707294, MPFR_RNDN);
        mpfr_mul(r33707304, r33707282, r33707283, MPFR_RNDN);
        mpfr_mul(r33707305, r33707285, r33707304, MPFR_RNDN);
        mpfr_add(r33707306, r33707305, r33707292, MPFR_RNDN);
        mpfr_mul(r33707307, r33707289, r33707282, MPFR_RNDN);
        mpfr_add(r33707308, r33707306, r33707307, MPFR_RNDN);
        mpfr_add(r33707309, r33707303, r33707308, MPFR_RNDN);
        mpfr_cbrt(r33707310, r33707309, MPFR_RNDN);
        mpfr_mul(r33707311, r33707282, r33707282, MPFR_RNDN);
        mpfr_pow(r33707312, r33707311, r33707284, MPFR_RNDN);
        mpfr_mul(r33707313, r33707311, r33707296, MPFR_RNDN);
        mpfr_add(r33707314, r33707313, r33707295, MPFR_RNDN);
        mpfr_mul(r33707315, r33707312, r33707314, MPFR_RNDN);
        mpfr_mul(r33707316, r33707315, r33707315, MPFR_RNDN);
        mpfr_mul(r33707317, r33707311, r33707288, MPFR_RNDN);
        mpfr_mul(r33707318, r33707283, r33707282, MPFR_RNDN);
        mpfr_mul(r33707319, r33707318, r33707285, MPFR_RNDN);
        mpfr_add(r33707320, r33707317, r33707319, MPFR_RNDN);
        mpfr_add(r33707321, r33707320, r33707292, MPFR_RNDN);
        mpfr_mul(r33707322, r33707321, r33707321, MPFR_RNDN);
        mpfr_sub(r33707323, r33707316, r33707322, MPFR_RNDN);
        mpfr_sub(r33707324, r33707303, r33707308, MPFR_RNDN);
        mpfr_div(r33707325, r33707323, r33707324, MPFR_RNDN);
        mpfr_cbrt(r33707326, r33707325, MPFR_RNDN);
        mpfr_mul(r33707327, r33707310, r33707326, MPFR_RNDN);
        mpfr_mul(r33707328, r33707302, r33707327, MPFR_RNDN);
        return mpfr_get_d(r33707328, MPFR_RNDN);
}

static mpfr_t r33707329, r33707330, r33707331, r33707332, r33707333, r33707334, r33707335, r33707336, r33707337, r33707338, r33707339, r33707340, r33707341, r33707342, r33707343, r33707344, r33707345, r33707346, r33707347, r33707348, r33707349, r33707350, r33707351, r33707352, r33707353, r33707354, r33707355, r33707356, r33707357, r33707358, r33707359, r33707360, r33707361, r33707362, r33707363, r33707364, r33707365, r33707366, r33707367, r33707368, r33707369, r33707370, r33707371, r33707372, r33707373, r33707374, r33707375;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33707329);
        mpfr_init_set_str(r33707330, "54.140625", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707331, "3", 10, MPFR_RNDN);
        mpfr_init(r33707332);
        mpfr_init(r33707333);
        mpfr_init(r33707334);
        mpfr_init_set_str(r33707335, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r33707336);
        mpfr_init(r33707337);
        mpfr_init(r33707338);
        mpfr_init_set_str(r33707339, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r33707340);
        mpfr_init(r33707341);
        mpfr_init_set_str(r33707342, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707343, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r33707344);
        mpfr_init(r33707345);
        mpfr_init(r33707346);
        mpfr_init(r33707347);
        mpfr_init(r33707348);
        mpfr_init(r33707349);
        mpfr_init(r33707350);
        mpfr_init(r33707351);
        mpfr_init(r33707352);
        mpfr_init(r33707353);
        mpfr_init(r33707354);
        mpfr_init(r33707355);
        mpfr_init(r33707356);
        mpfr_init(r33707357);
        mpfr_init(r33707358);
        mpfr_init(r33707359);
        mpfr_init(r33707360);
        mpfr_init(r33707361);
        mpfr_init(r33707362);
        mpfr_init(r33707363);
        mpfr_init(r33707364);
        mpfr_init(r33707365);
        mpfr_init(r33707366);
        mpfr_init(r33707367);
        mpfr_init(r33707368);
        mpfr_init(r33707369);
        mpfr_init(r33707370);
        mpfr_init(r33707371);
        mpfr_init(r33707372);
        mpfr_init(r33707373);
        mpfr_init(r33707374);
        mpfr_init(r33707375);
}

double f_dm(double x) {
        mpfr_set_d(r33707329, x, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r33707332, r33707329, r33707331, MPFR_RNDN);
        mpfr_mul(r33707333, r33707330, r33707332, MPFR_RNDN);
        mpfr_mul(r33707334, r33707329, r33707333, MPFR_RNDN);
        ;
        mpfr_mul(r33707336, r33707329, r33707335, MPFR_RNDN);
        mpfr_mul(r33707337, r33707329, r33707336, MPFR_RNDN);
        mpfr_add(r33707338, r33707334, r33707337, MPFR_RNDN);
        ;
        mpfr_add(r33707340, r33707338, r33707339, MPFR_RNDN);
        mpfr_mul(r33707341, r33707332, r33707332, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r33707344, r33707343, r33707329, MPFR_RNDN);
        mpfr_mul(r33707345, r33707344, r33707329, MPFR_RNDN);
        mpfr_add(r33707346, r33707342, r33707345, MPFR_RNDN);
        mpfr_mul(r33707347, r33707341, r33707346, MPFR_RNDN);
        mpfr_add(r33707348, r33707340, r33707347, MPFR_RNDN);
        mpfr_cbrt(r33707349, r33707348, MPFR_RNDN);
        mpfr_mul(r33707350, r33707346, r33707341, MPFR_RNDN);
        mpfr_mul(r33707351, r33707329, r33707330, MPFR_RNDN);
        mpfr_mul(r33707352, r33707332, r33707351, MPFR_RNDN);
        mpfr_add(r33707353, r33707352, r33707339, MPFR_RNDN);
        mpfr_mul(r33707354, r33707336, r33707329, MPFR_RNDN);
        mpfr_add(r33707355, r33707353, r33707354, MPFR_RNDN);
        mpfr_add(r33707356, r33707350, r33707355, MPFR_RNDN);
        mpfr_cbrt(r33707357, r33707356, MPFR_RNDN);
        mpfr_mul(r33707358, r33707329, r33707329, MPFR_RNDN);
        mpfr_pow(r33707359, r33707358, r33707331, MPFR_RNDN);
        mpfr_mul(r33707360, r33707358, r33707343, MPFR_RNDN);
        mpfr_add(r33707361, r33707360, r33707342, MPFR_RNDN);
        mpfr_mul(r33707362, r33707359, r33707361, MPFR_RNDN);
        mpfr_mul(r33707363, r33707362, r33707362, MPFR_RNDN);
        mpfr_mul(r33707364, r33707358, r33707335, MPFR_RNDN);
        mpfr_mul(r33707365, r33707330, r33707329, MPFR_RNDN);
        mpfr_mul(r33707366, r33707365, r33707332, MPFR_RNDN);
        mpfr_add(r33707367, r33707364, r33707366, MPFR_RNDN);
        mpfr_add(r33707368, r33707367, r33707339, MPFR_RNDN);
        mpfr_mul(r33707369, r33707368, r33707368, MPFR_RNDN);
        mpfr_sub(r33707370, r33707363, r33707369, MPFR_RNDN);
        mpfr_sub(r33707371, r33707350, r33707355, MPFR_RNDN);
        mpfr_div(r33707372, r33707370, r33707371, MPFR_RNDN);
        mpfr_cbrt(r33707373, r33707372, MPFR_RNDN);
        mpfr_mul(r33707374, r33707357, r33707373, MPFR_RNDN);
        mpfr_mul(r33707375, r33707349, r33707374, MPFR_RNDN);
        return mpfr_get_d(r33707375, MPFR_RNDN);
}

