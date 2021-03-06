#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r9375097 = 1.0;
        float r9375098 = -16.0;
        float r9375099 = x;
        float r9375100 = r9375098 * r9375099;
        float r9375101 = r9375097 + r9375100;
        float r9375102 = 60.0;
        float r9375103 = r9375099 * r9375099;
        float r9375104 = r9375102 * r9375103;
        float r9375105 = r9375101 + r9375104;
        float r9375106 = -93.333333;
        float r9375107 = r9375103 * r9375099;
        float r9375108 = r9375106 * r9375107;
        float r9375109 = r9375105 + r9375108;
        float r9375110 = 75.833333;
        float r9375111 = r9375107 * r9375099;
        float r9375112 = r9375110 * r9375111;
        float r9375113 = r9375109 + r9375112;
        float r9375114 = -36.4;
        float r9375115 = r9375111 * r9375099;
        float r9375116 = r9375114 * r9375115;
        float r9375117 = r9375113 + r9375116;
        float r9375118 = 11.122222;
        float r9375119 = r9375115 * r9375099;
        float r9375120 = r9375118 * r9375119;
        float r9375121 = r9375117 + r9375120;
        float r9375122 = -2.269841;
        float r9375123 = r9375119 * r9375099;
        float r9375124 = r9375122 * r9375123;
        float r9375125 = r9375121 + r9375124;
        float r9375126 = 0.319196;
        float r9375127 = r9375123 * r9375099;
        float r9375128 = r9375126 * r9375127;
        float r9375129 = r9375125 + r9375128;
        float r9375130 = -0.031526;
        float r9375131 = r9375127 * r9375099;
        float r9375132 = r9375130 * r9375131;
        float r9375133 = r9375129 + r9375132;
        float r9375134 = 0.002207;
        float r9375135 = r9375131 * r9375099;
        float r9375136 = r9375134 * r9375135;
        float r9375137 = r9375133 + r9375136;
        float r9375138 = -0.000109;
        float r9375139 = r9375135 * r9375099;
        float r9375140 = r9375138 * r9375139;
        float r9375141 = r9375137 + r9375140;
        float r9375142 = 4e-06;
        float r9375143 = r9375139 * r9375099;
        float r9375144 = r9375142 * r9375143;
        float r9375145 = r9375141 + r9375144;
        return r9375145;
}

double f_id(double x) {
        double r9375146 = 1.0;
        double r9375147 = -16.0;
        double r9375148 = x;
        double r9375149 = r9375147 * r9375148;
        double r9375150 = r9375146 + r9375149;
        double r9375151 = 60.0;
        double r9375152 = r9375148 * r9375148;
        double r9375153 = r9375151 * r9375152;
        double r9375154 = r9375150 + r9375153;
        double r9375155 = -93.333333;
        double r9375156 = r9375152 * r9375148;
        double r9375157 = r9375155 * r9375156;
        double r9375158 = r9375154 + r9375157;
        double r9375159 = 75.833333;
        double r9375160 = r9375156 * r9375148;
        double r9375161 = r9375159 * r9375160;
        double r9375162 = r9375158 + r9375161;
        double r9375163 = -36.4;
        double r9375164 = r9375160 * r9375148;
        double r9375165 = r9375163 * r9375164;
        double r9375166 = r9375162 + r9375165;
        double r9375167 = 11.122222;
        double r9375168 = r9375164 * r9375148;
        double r9375169 = r9375167 * r9375168;
        double r9375170 = r9375166 + r9375169;
        double r9375171 = -2.269841;
        double r9375172 = r9375168 * r9375148;
        double r9375173 = r9375171 * r9375172;
        double r9375174 = r9375170 + r9375173;
        double r9375175 = 0.319196;
        double r9375176 = r9375172 * r9375148;
        double r9375177 = r9375175 * r9375176;
        double r9375178 = r9375174 + r9375177;
        double r9375179 = -0.031526;
        double r9375180 = r9375176 * r9375148;
        double r9375181 = r9375179 * r9375180;
        double r9375182 = r9375178 + r9375181;
        double r9375183 = 0.002207;
        double r9375184 = r9375180 * r9375148;
        double r9375185 = r9375183 * r9375184;
        double r9375186 = r9375182 + r9375185;
        double r9375187 = -0.000109;
        double r9375188 = r9375184 * r9375148;
        double r9375189 = r9375187 * r9375188;
        double r9375190 = r9375186 + r9375189;
        double r9375191 = 4e-06;
        double r9375192 = r9375188 * r9375148;
        double r9375193 = r9375191 * r9375192;
        double r9375194 = r9375190 + r9375193;
        return r9375194;
}


double f_of(float x) {
        float r9375195 = 1.0;
        float r9375196 = -16.0;
        float r9375197 = x;
        float r9375198 = r9375196 * r9375197;
        float r9375199 = r9375195 + r9375198;
        float r9375200 = 60.0;
        float r9375201 = r9375197 * r9375197;
        float r9375202 = r9375200 * r9375201;
        float r9375203 = r9375199 + r9375202;
        float r9375204 = -93.333333;
        float r9375205 = r9375201 * r9375197;
        float r9375206 = r9375204 * r9375205;
        float r9375207 = r9375203 + r9375206;
        float r9375208 = 75.833333;
        float r9375209 = r9375205 * r9375197;
        float r9375210 = r9375208 * r9375209;
        float r9375211 = r9375207 + r9375210;
        float r9375212 = -36.4;
        float r9375213 = r9375209 * r9375197;
        float r9375214 = r9375212 * r9375213;
        float r9375215 = r9375211 + r9375214;
        float r9375216 = 11.122222;
        float r9375217 = r9375213 * r9375197;
        float r9375218 = r9375216 * r9375217;
        float r9375219 = r9375215 + r9375218;
        float r9375220 = -2.269841;
        float r9375221 = r9375217 * r9375197;
        float r9375222 = r9375220 * r9375221;
        float r9375223 = r9375219 + r9375222;
        float r9375224 = 0.319196;
        float r9375225 = r9375221 * r9375197;
        float r9375226 = r9375224 * r9375225;
        float r9375227 = r9375223 + r9375226;
        float r9375228 = -0.031526;
        float r9375229 = r9375225 * r9375197;
        float r9375230 = r9375228 * r9375229;
        float r9375231 = r9375227 + r9375230;
        float r9375232 = 0.002207;
        float r9375233 = r9375229 * r9375197;
        float r9375234 = r9375232 * r9375233;
        float r9375235 = r9375231 + r9375234;
        float r9375236 = -0.000109;
        float r9375237 = r9375233 * r9375197;
        float r9375238 = r9375236 * r9375237;
        float r9375239 = r9375235 + r9375238;
        float r9375240 = 4e-06;
        float r9375241 = r9375237 * r9375197;
        float r9375242 = r9375240 * r9375241;
        float r9375243 = r9375239 + r9375242;
        return r9375243;
}

double f_od(double x) {
        double r9375244 = 1.0;
        double r9375245 = -16.0;
        double r9375246 = x;
        double r9375247 = r9375245 * r9375246;
        double r9375248 = r9375244 + r9375247;
        double r9375249 = 60.0;
        double r9375250 = r9375246 * r9375246;
        double r9375251 = r9375249 * r9375250;
        double r9375252 = r9375248 + r9375251;
        double r9375253 = -93.333333;
        double r9375254 = r9375250 * r9375246;
        double r9375255 = r9375253 * r9375254;
        double r9375256 = r9375252 + r9375255;
        double r9375257 = 75.833333;
        double r9375258 = r9375254 * r9375246;
        double r9375259 = r9375257 * r9375258;
        double r9375260 = r9375256 + r9375259;
        double r9375261 = -36.4;
        double r9375262 = r9375258 * r9375246;
        double r9375263 = r9375261 * r9375262;
        double r9375264 = r9375260 + r9375263;
        double r9375265 = 11.122222;
        double r9375266 = r9375262 * r9375246;
        double r9375267 = r9375265 * r9375266;
        double r9375268 = r9375264 + r9375267;
        double r9375269 = -2.269841;
        double r9375270 = r9375266 * r9375246;
        double r9375271 = r9375269 * r9375270;
        double r9375272 = r9375268 + r9375271;
        double r9375273 = 0.319196;
        double r9375274 = r9375270 * r9375246;
        double r9375275 = r9375273 * r9375274;
        double r9375276 = r9375272 + r9375275;
        double r9375277 = -0.031526;
        double r9375278 = r9375274 * r9375246;
        double r9375279 = r9375277 * r9375278;
        double r9375280 = r9375276 + r9375279;
        double r9375281 = 0.002207;
        double r9375282 = r9375278 * r9375246;
        double r9375283 = r9375281 * r9375282;
        double r9375284 = r9375280 + r9375283;
        double r9375285 = -0.000109;
        double r9375286 = r9375282 * r9375246;
        double r9375287 = r9375285 * r9375286;
        double r9375288 = r9375284 + r9375287;
        double r9375289 = 4e-06;
        double r9375290 = r9375286 * r9375246;
        double r9375291 = r9375289 * r9375290;
        double r9375292 = r9375288 + r9375291;
        return r9375292;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9375293, r9375294, r9375295, r9375296, r9375297, r9375298, r9375299, r9375300, r9375301, r9375302, r9375303, r9375304, r9375305, r9375306, r9375307, r9375308, r9375309, r9375310, r9375311, r9375312, r9375313, r9375314, r9375315, r9375316, r9375317, r9375318, r9375319, r9375320, r9375321, r9375322, r9375323, r9375324, r9375325, r9375326, r9375327, r9375328, r9375329, r9375330, r9375331, r9375332, r9375333, r9375334, r9375335, r9375336, r9375337, r9375338, r9375339, r9375340, r9375341;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9375293, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9375294, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r9375295);
        mpfr_init(r9375296);
        mpfr_init(r9375297);
        mpfr_init_set_str(r9375298, "60.0", 10, MPFR_RNDN);
        mpfr_init(r9375299);
        mpfr_init(r9375300);
        mpfr_init(r9375301);
        mpfr_init_set_str(r9375302, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r9375303);
        mpfr_init(r9375304);
        mpfr_init(r9375305);
        mpfr_init_set_str(r9375306, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r9375307);
        mpfr_init(r9375308);
        mpfr_init(r9375309);
        mpfr_init_set_str(r9375310, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r9375311);
        mpfr_init(r9375312);
        mpfr_init(r9375313);
        mpfr_init_set_str(r9375314, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r9375315);
        mpfr_init(r9375316);
        mpfr_init(r9375317);
        mpfr_init_set_str(r9375318, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r9375319);
        mpfr_init(r9375320);
        mpfr_init(r9375321);
        mpfr_init_set_str(r9375322, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r9375323);
        mpfr_init(r9375324);
        mpfr_init(r9375325);
        mpfr_init_set_str(r9375326, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r9375327);
        mpfr_init(r9375328);
        mpfr_init(r9375329);
        mpfr_init_set_str(r9375330, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r9375331);
        mpfr_init(r9375332);
        mpfr_init(r9375333);
        mpfr_init_set_str(r9375334, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r9375335);
        mpfr_init(r9375336);
        mpfr_init(r9375337);
        mpfr_init_set_str(r9375338, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r9375339);
        mpfr_init(r9375340);
        mpfr_init(r9375341);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9375295, x, MPFR_RNDN);
        mpfr_mul(r9375296, r9375294, r9375295, MPFR_RNDN);
        mpfr_add(r9375297, r9375293, r9375296, MPFR_RNDN);
        ;
        mpfr_mul(r9375299, r9375295, r9375295, MPFR_RNDN);
        mpfr_mul(r9375300, r9375298, r9375299, MPFR_RNDN);
        mpfr_add(r9375301, r9375297, r9375300, MPFR_RNDN);
        ;
        mpfr_mul(r9375303, r9375299, r9375295, MPFR_RNDN);
        mpfr_mul(r9375304, r9375302, r9375303, MPFR_RNDN);
        mpfr_add(r9375305, r9375301, r9375304, MPFR_RNDN);
        ;
        mpfr_mul(r9375307, r9375303, r9375295, MPFR_RNDN);
        mpfr_mul(r9375308, r9375306, r9375307, MPFR_RNDN);
        mpfr_add(r9375309, r9375305, r9375308, MPFR_RNDN);
        ;
        mpfr_mul(r9375311, r9375307, r9375295, MPFR_RNDN);
        mpfr_mul(r9375312, r9375310, r9375311, MPFR_RNDN);
        mpfr_add(r9375313, r9375309, r9375312, MPFR_RNDN);
        ;
        mpfr_mul(r9375315, r9375311, r9375295, MPFR_RNDN);
        mpfr_mul(r9375316, r9375314, r9375315, MPFR_RNDN);
        mpfr_add(r9375317, r9375313, r9375316, MPFR_RNDN);
        ;
        mpfr_mul(r9375319, r9375315, r9375295, MPFR_RNDN);
        mpfr_mul(r9375320, r9375318, r9375319, MPFR_RNDN);
        mpfr_add(r9375321, r9375317, r9375320, MPFR_RNDN);
        ;
        mpfr_mul(r9375323, r9375319, r9375295, MPFR_RNDN);
        mpfr_mul(r9375324, r9375322, r9375323, MPFR_RNDN);
        mpfr_add(r9375325, r9375321, r9375324, MPFR_RNDN);
        ;
        mpfr_mul(r9375327, r9375323, r9375295, MPFR_RNDN);
        mpfr_mul(r9375328, r9375326, r9375327, MPFR_RNDN);
        mpfr_add(r9375329, r9375325, r9375328, MPFR_RNDN);
        ;
        mpfr_mul(r9375331, r9375327, r9375295, MPFR_RNDN);
        mpfr_mul(r9375332, r9375330, r9375331, MPFR_RNDN);
        mpfr_add(r9375333, r9375329, r9375332, MPFR_RNDN);
        ;
        mpfr_mul(r9375335, r9375331, r9375295, MPFR_RNDN);
        mpfr_mul(r9375336, r9375334, r9375335, MPFR_RNDN);
        mpfr_add(r9375337, r9375333, r9375336, MPFR_RNDN);
        ;
        mpfr_mul(r9375339, r9375335, r9375295, MPFR_RNDN);
        mpfr_mul(r9375340, r9375338, r9375339, MPFR_RNDN);
        mpfr_add(r9375341, r9375337, r9375340, MPFR_RNDN);
        return mpfr_get_d(r9375341, MPFR_RNDN);
}

static mpfr_t r9375342, r9375343, r9375344, r9375345, r9375346, r9375347, r9375348, r9375349, r9375350, r9375351, r9375352, r9375353, r9375354, r9375355, r9375356, r9375357, r9375358, r9375359, r9375360, r9375361, r9375362, r9375363, r9375364, r9375365, r9375366, r9375367, r9375368, r9375369, r9375370, r9375371, r9375372, r9375373, r9375374, r9375375, r9375376, r9375377, r9375378, r9375379, r9375380, r9375381, r9375382, r9375383, r9375384, r9375385, r9375386, r9375387, r9375388, r9375389, r9375390;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9375342, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9375343, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r9375344);
        mpfr_init(r9375345);
        mpfr_init(r9375346);
        mpfr_init_set_str(r9375347, "60.0", 10, MPFR_RNDN);
        mpfr_init(r9375348);
        mpfr_init(r9375349);
        mpfr_init(r9375350);
        mpfr_init_set_str(r9375351, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r9375352);
        mpfr_init(r9375353);
        mpfr_init(r9375354);
        mpfr_init_set_str(r9375355, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r9375356);
        mpfr_init(r9375357);
        mpfr_init(r9375358);
        mpfr_init_set_str(r9375359, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r9375360);
        mpfr_init(r9375361);
        mpfr_init(r9375362);
        mpfr_init_set_str(r9375363, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r9375364);
        mpfr_init(r9375365);
        mpfr_init(r9375366);
        mpfr_init_set_str(r9375367, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r9375368);
        mpfr_init(r9375369);
        mpfr_init(r9375370);
        mpfr_init_set_str(r9375371, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r9375372);
        mpfr_init(r9375373);
        mpfr_init(r9375374);
        mpfr_init_set_str(r9375375, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r9375376);
        mpfr_init(r9375377);
        mpfr_init(r9375378);
        mpfr_init_set_str(r9375379, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r9375380);
        mpfr_init(r9375381);
        mpfr_init(r9375382);
        mpfr_init_set_str(r9375383, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r9375384);
        mpfr_init(r9375385);
        mpfr_init(r9375386);
        mpfr_init_set_str(r9375387, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r9375388);
        mpfr_init(r9375389);
        mpfr_init(r9375390);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9375344, x, MPFR_RNDN);
        mpfr_mul(r9375345, r9375343, r9375344, MPFR_RNDN);
        mpfr_add(r9375346, r9375342, r9375345, MPFR_RNDN);
        ;
        mpfr_mul(r9375348, r9375344, r9375344, MPFR_RNDN);
        mpfr_mul(r9375349, r9375347, r9375348, MPFR_RNDN);
        mpfr_add(r9375350, r9375346, r9375349, MPFR_RNDN);
        ;
        mpfr_mul(r9375352, r9375348, r9375344, MPFR_RNDN);
        mpfr_mul(r9375353, r9375351, r9375352, MPFR_RNDN);
        mpfr_add(r9375354, r9375350, r9375353, MPFR_RNDN);
        ;
        mpfr_mul(r9375356, r9375352, r9375344, MPFR_RNDN);
        mpfr_mul(r9375357, r9375355, r9375356, MPFR_RNDN);
        mpfr_add(r9375358, r9375354, r9375357, MPFR_RNDN);
        ;
        mpfr_mul(r9375360, r9375356, r9375344, MPFR_RNDN);
        mpfr_mul(r9375361, r9375359, r9375360, MPFR_RNDN);
        mpfr_add(r9375362, r9375358, r9375361, MPFR_RNDN);
        ;
        mpfr_mul(r9375364, r9375360, r9375344, MPFR_RNDN);
        mpfr_mul(r9375365, r9375363, r9375364, MPFR_RNDN);
        mpfr_add(r9375366, r9375362, r9375365, MPFR_RNDN);
        ;
        mpfr_mul(r9375368, r9375364, r9375344, MPFR_RNDN);
        mpfr_mul(r9375369, r9375367, r9375368, MPFR_RNDN);
        mpfr_add(r9375370, r9375366, r9375369, MPFR_RNDN);
        ;
        mpfr_mul(r9375372, r9375368, r9375344, MPFR_RNDN);
        mpfr_mul(r9375373, r9375371, r9375372, MPFR_RNDN);
        mpfr_add(r9375374, r9375370, r9375373, MPFR_RNDN);
        ;
        mpfr_mul(r9375376, r9375372, r9375344, MPFR_RNDN);
        mpfr_mul(r9375377, r9375375, r9375376, MPFR_RNDN);
        mpfr_add(r9375378, r9375374, r9375377, MPFR_RNDN);
        ;
        mpfr_mul(r9375380, r9375376, r9375344, MPFR_RNDN);
        mpfr_mul(r9375381, r9375379, r9375380, MPFR_RNDN);
        mpfr_add(r9375382, r9375378, r9375381, MPFR_RNDN);
        ;
        mpfr_mul(r9375384, r9375380, r9375344, MPFR_RNDN);
        mpfr_mul(r9375385, r9375383, r9375384, MPFR_RNDN);
        mpfr_add(r9375386, r9375382, r9375385, MPFR_RNDN);
        ;
        mpfr_mul(r9375388, r9375384, r9375344, MPFR_RNDN);
        mpfr_mul(r9375389, r9375387, r9375388, MPFR_RNDN);
        mpfr_add(r9375390, r9375386, r9375389, MPFR_RNDN);
        return mpfr_get_d(r9375390, MPFR_RNDN);
}

static mpfr_t r9375391, r9375392, r9375393, r9375394, r9375395, r9375396, r9375397, r9375398, r9375399, r9375400, r9375401, r9375402, r9375403, r9375404, r9375405, r9375406, r9375407, r9375408, r9375409, r9375410, r9375411, r9375412, r9375413, r9375414, r9375415, r9375416, r9375417, r9375418, r9375419, r9375420, r9375421, r9375422, r9375423, r9375424, r9375425, r9375426, r9375427, r9375428, r9375429, r9375430, r9375431, r9375432, r9375433, r9375434, r9375435, r9375436, r9375437, r9375438, r9375439;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9375391, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9375392, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r9375393);
        mpfr_init(r9375394);
        mpfr_init(r9375395);
        mpfr_init_set_str(r9375396, "60.0", 10, MPFR_RNDN);
        mpfr_init(r9375397);
        mpfr_init(r9375398);
        mpfr_init(r9375399);
        mpfr_init_set_str(r9375400, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r9375401);
        mpfr_init(r9375402);
        mpfr_init(r9375403);
        mpfr_init_set_str(r9375404, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r9375405);
        mpfr_init(r9375406);
        mpfr_init(r9375407);
        mpfr_init_set_str(r9375408, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r9375409);
        mpfr_init(r9375410);
        mpfr_init(r9375411);
        mpfr_init_set_str(r9375412, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r9375413);
        mpfr_init(r9375414);
        mpfr_init(r9375415);
        mpfr_init_set_str(r9375416, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r9375417);
        mpfr_init(r9375418);
        mpfr_init(r9375419);
        mpfr_init_set_str(r9375420, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r9375421);
        mpfr_init(r9375422);
        mpfr_init(r9375423);
        mpfr_init_set_str(r9375424, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r9375425);
        mpfr_init(r9375426);
        mpfr_init(r9375427);
        mpfr_init_set_str(r9375428, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r9375429);
        mpfr_init(r9375430);
        mpfr_init(r9375431);
        mpfr_init_set_str(r9375432, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r9375433);
        mpfr_init(r9375434);
        mpfr_init(r9375435);
        mpfr_init_set_str(r9375436, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r9375437);
        mpfr_init(r9375438);
        mpfr_init(r9375439);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9375393, x, MPFR_RNDN);
        mpfr_mul(r9375394, r9375392, r9375393, MPFR_RNDN);
        mpfr_add(r9375395, r9375391, r9375394, MPFR_RNDN);
        ;
        mpfr_mul(r9375397, r9375393, r9375393, MPFR_RNDN);
        mpfr_mul(r9375398, r9375396, r9375397, MPFR_RNDN);
        mpfr_add(r9375399, r9375395, r9375398, MPFR_RNDN);
        ;
        mpfr_mul(r9375401, r9375397, r9375393, MPFR_RNDN);
        mpfr_mul(r9375402, r9375400, r9375401, MPFR_RNDN);
        mpfr_add(r9375403, r9375399, r9375402, MPFR_RNDN);
        ;
        mpfr_mul(r9375405, r9375401, r9375393, MPFR_RNDN);
        mpfr_mul(r9375406, r9375404, r9375405, MPFR_RNDN);
        mpfr_add(r9375407, r9375403, r9375406, MPFR_RNDN);
        ;
        mpfr_mul(r9375409, r9375405, r9375393, MPFR_RNDN);
        mpfr_mul(r9375410, r9375408, r9375409, MPFR_RNDN);
        mpfr_add(r9375411, r9375407, r9375410, MPFR_RNDN);
        ;
        mpfr_mul(r9375413, r9375409, r9375393, MPFR_RNDN);
        mpfr_mul(r9375414, r9375412, r9375413, MPFR_RNDN);
        mpfr_add(r9375415, r9375411, r9375414, MPFR_RNDN);
        ;
        mpfr_mul(r9375417, r9375413, r9375393, MPFR_RNDN);
        mpfr_mul(r9375418, r9375416, r9375417, MPFR_RNDN);
        mpfr_add(r9375419, r9375415, r9375418, MPFR_RNDN);
        ;
        mpfr_mul(r9375421, r9375417, r9375393, MPFR_RNDN);
        mpfr_mul(r9375422, r9375420, r9375421, MPFR_RNDN);
        mpfr_add(r9375423, r9375419, r9375422, MPFR_RNDN);
        ;
        mpfr_mul(r9375425, r9375421, r9375393, MPFR_RNDN);
        mpfr_mul(r9375426, r9375424, r9375425, MPFR_RNDN);
        mpfr_add(r9375427, r9375423, r9375426, MPFR_RNDN);
        ;
        mpfr_mul(r9375429, r9375425, r9375393, MPFR_RNDN);
        mpfr_mul(r9375430, r9375428, r9375429, MPFR_RNDN);
        mpfr_add(r9375431, r9375427, r9375430, MPFR_RNDN);
        ;
        mpfr_mul(r9375433, r9375429, r9375393, MPFR_RNDN);
        mpfr_mul(r9375434, r9375432, r9375433, MPFR_RNDN);
        mpfr_add(r9375435, r9375431, r9375434, MPFR_RNDN);
        ;
        mpfr_mul(r9375437, r9375433, r9375393, MPFR_RNDN);
        mpfr_mul(r9375438, r9375436, r9375437, MPFR_RNDN);
        mpfr_add(r9375439, r9375435, r9375438, MPFR_RNDN);
        return mpfr_get_d(r9375439, MPFR_RNDN);
}

