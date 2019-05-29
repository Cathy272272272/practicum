#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r9961127 = 518918400.0;
        float r9961128 = -8302694400.0;
        float r9961129 = x;
        float r9961130 = r9961129 * r9961129;
        float r9961131 = r9961128 * r9961130;
        float r9961132 = r9961127 + r9961131;
        float r9961133 = 19372953600.0;
        float r9961134 = r9961130 * r9961129;
        float r9961135 = r9961134 * r9961129;
        float r9961136 = r9961133 * r9961135;
        float r9961137 = r9961132 + r9961136;
        float r9961138 = -15498362880.0;
        float r9961139 = r9961135 * r9961129;
        float r9961140 = r9961139 * r9961129;
        float r9961141 = r9961138 * r9961140;
        float r9961142 = r9961137 + r9961141;
        float r9961143 = 5535129600.0;
        float r9961144 = r9961140 * r9961129;
        float r9961145 = r9961144 * r9961129;
        float r9961146 = r9961143 * r9961145;
        float r9961147 = r9961142 + r9961146;
        float r9961148 = -984023040.0;
        float r9961149 = r9961145 * r9961129;
        float r9961150 = r9961149 * r9961129;
        float r9961151 = r9961148 * r9961150;
        float r9961152 = r9961147 + r9961151;
        float r9961153 = 89456640.0;
        float r9961154 = r9961150 * r9961129;
        float r9961155 = r9961154 * r9961129;
        float r9961156 = r9961153 * r9961155;
        float r9961157 = r9961152 + r9961156;
        float r9961158 = -3932160.0;
        float r9961159 = r9961155 * r9961129;
        float r9961160 = r9961159 * r9961129;
        float r9961161 = r9961158 * r9961160;
        float r9961162 = r9961157 + r9961161;
        float r9961163 = 65536.0;
        float r9961164 = r9961160 * r9961129;
        float r9961165 = r9961164 * r9961129;
        float r9961166 = r9961163 * r9961165;
        float r9961167 = r9961162 + r9961166;
        return r9961167;
}

double f_id(double x) {
        double r9961168 = 518918400.0;
        double r9961169 = -8302694400.0;
        double r9961170 = x;
        double r9961171 = r9961170 * r9961170;
        double r9961172 = r9961169 * r9961171;
        double r9961173 = r9961168 + r9961172;
        double r9961174 = 19372953600.0;
        double r9961175 = r9961171 * r9961170;
        double r9961176 = r9961175 * r9961170;
        double r9961177 = r9961174 * r9961176;
        double r9961178 = r9961173 + r9961177;
        double r9961179 = -15498362880.0;
        double r9961180 = r9961176 * r9961170;
        double r9961181 = r9961180 * r9961170;
        double r9961182 = r9961179 * r9961181;
        double r9961183 = r9961178 + r9961182;
        double r9961184 = 5535129600.0;
        double r9961185 = r9961181 * r9961170;
        double r9961186 = r9961185 * r9961170;
        double r9961187 = r9961184 * r9961186;
        double r9961188 = r9961183 + r9961187;
        double r9961189 = -984023040.0;
        double r9961190 = r9961186 * r9961170;
        double r9961191 = r9961190 * r9961170;
        double r9961192 = r9961189 * r9961191;
        double r9961193 = r9961188 + r9961192;
        double r9961194 = 89456640.0;
        double r9961195 = r9961191 * r9961170;
        double r9961196 = r9961195 * r9961170;
        double r9961197 = r9961194 * r9961196;
        double r9961198 = r9961193 + r9961197;
        double r9961199 = -3932160.0;
        double r9961200 = r9961196 * r9961170;
        double r9961201 = r9961200 * r9961170;
        double r9961202 = r9961199 * r9961201;
        double r9961203 = r9961198 + r9961202;
        double r9961204 = 65536.0;
        double r9961205 = r9961201 * r9961170;
        double r9961206 = r9961205 * r9961170;
        double r9961207 = r9961204 * r9961206;
        double r9961208 = r9961203 + r9961207;
        return r9961208;
}


double f_of(float x) {
        float r9961209 = x;
        float r9961210 = 3;
        float r9961211 = pow(r9961209, r9961210);
        float r9961212 = r9961211 * r9961211;
        float r9961213 = r9961212 * r9961209;
        float r9961214 = -3932160.0;
        float r9961215 = r9961209 * r9961209;
        float r9961216 = 65536.0;
        float r9961217 = r9961215 * r9961216;
        float r9961218 = r9961214 + r9961217;
        float r9961219 = r9961213 * r9961218;
        float r9961220 = r9961219 * r9961213;
        float r9961221 = 518918400.0;
        float r9961222 = 4;
        float r9961223 = pow(r9961209, r9961222);
        float r9961224 = 19372953600.0;
        float r9961225 = r9961223 * r9961224;
        float r9961226 = r9961221 + r9961225;
        float r9961227 = 5535129600.0;
        float r9961228 = r9961215 * r9961227;
        float r9961229 = -15498362880.0;
        float r9961230 = r9961228 + r9961229;
        float r9961231 = r9961212 * r9961230;
        float r9961232 = r9961226 + r9961231;
        float r9961233 = -8302694400.0;
        float r9961234 = r9961233 * r9961215;
        float r9961235 = 89456640.0;
        float r9961236 = 12;
        float r9961237 = pow(r9961209, r9961236);
        float r9961238 = r9961235 * r9961237;
        float r9961239 = 10;
        float r9961240 = pow(r9961209, r9961239);
        float r9961241 = 984023040.0;
        float r9961242 = r9961240 * r9961241;
        float r9961243 = r9961238 - r9961242;
        float r9961244 = r9961234 + r9961243;
        float r9961245 = r9961232 + r9961244;
        float r9961246 = r9961220 + r9961245;
        return r9961246;
}

double f_od(double x) {
        double r9961247 = x;
        double r9961248 = 3;
        double r9961249 = pow(r9961247, r9961248);
        double r9961250 = r9961249 * r9961249;
        double r9961251 = r9961250 * r9961247;
        double r9961252 = -3932160.0;
        double r9961253 = r9961247 * r9961247;
        double r9961254 = 65536.0;
        double r9961255 = r9961253 * r9961254;
        double r9961256 = r9961252 + r9961255;
        double r9961257 = r9961251 * r9961256;
        double r9961258 = r9961257 * r9961251;
        double r9961259 = 518918400.0;
        double r9961260 = 4;
        double r9961261 = pow(r9961247, r9961260);
        double r9961262 = 19372953600.0;
        double r9961263 = r9961261 * r9961262;
        double r9961264 = r9961259 + r9961263;
        double r9961265 = 5535129600.0;
        double r9961266 = r9961253 * r9961265;
        double r9961267 = -15498362880.0;
        double r9961268 = r9961266 + r9961267;
        double r9961269 = r9961250 * r9961268;
        double r9961270 = r9961264 + r9961269;
        double r9961271 = -8302694400.0;
        double r9961272 = r9961271 * r9961253;
        double r9961273 = 89456640.0;
        double r9961274 = 12;
        double r9961275 = pow(r9961247, r9961274);
        double r9961276 = r9961273 * r9961275;
        double r9961277 = 10;
        double r9961278 = pow(r9961247, r9961277);
        double r9961279 = 984023040.0;
        double r9961280 = r9961278 * r9961279;
        double r9961281 = r9961276 - r9961280;
        double r9961282 = r9961272 + r9961281;
        double r9961283 = r9961270 + r9961282;
        double r9961284 = r9961258 + r9961283;
        return r9961284;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9961285, r9961286, r9961287, r9961288, r9961289, r9961290, r9961291, r9961292, r9961293, r9961294, r9961295, r9961296, r9961297, r9961298, r9961299, r9961300, r9961301, r9961302, r9961303, r9961304, r9961305, r9961306, r9961307, r9961308, r9961309, r9961310, r9961311, r9961312, r9961313, r9961314, r9961315, r9961316, r9961317, r9961318, r9961319, r9961320, r9961321, r9961322, r9961323, r9961324, r9961325;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9961285, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9961286, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9961287);
        mpfr_init(r9961288);
        mpfr_init(r9961289);
        mpfr_init(r9961290);
        mpfr_init_set_str(r9961291, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9961292);
        mpfr_init(r9961293);
        mpfr_init(r9961294);
        mpfr_init(r9961295);
        mpfr_init_set_str(r9961296, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9961297);
        mpfr_init(r9961298);
        mpfr_init(r9961299);
        mpfr_init(r9961300);
        mpfr_init_set_str(r9961301, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9961302);
        mpfr_init(r9961303);
        mpfr_init(r9961304);
        mpfr_init(r9961305);
        mpfr_init_set_str(r9961306, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9961307);
        mpfr_init(r9961308);
        mpfr_init(r9961309);
        mpfr_init(r9961310);
        mpfr_init_set_str(r9961311, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r9961312);
        mpfr_init(r9961313);
        mpfr_init(r9961314);
        mpfr_init(r9961315);
        mpfr_init_set_str(r9961316, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r9961317);
        mpfr_init(r9961318);
        mpfr_init(r9961319);
        mpfr_init(r9961320);
        mpfr_init_set_str(r9961321, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9961322);
        mpfr_init(r9961323);
        mpfr_init(r9961324);
        mpfr_init(r9961325);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9961287, x, MPFR_RNDN);
        mpfr_mul(r9961288, r9961287, r9961287, MPFR_RNDN);
        mpfr_mul(r9961289, r9961286, r9961288, MPFR_RNDN);
        mpfr_add(r9961290, r9961285, r9961289, MPFR_RNDN);
        ;
        mpfr_mul(r9961292, r9961288, r9961287, MPFR_RNDN);
        mpfr_mul(r9961293, r9961292, r9961287, MPFR_RNDN);
        mpfr_mul(r9961294, r9961291, r9961293, MPFR_RNDN);
        mpfr_add(r9961295, r9961290, r9961294, MPFR_RNDN);
        ;
        mpfr_mul(r9961297, r9961293, r9961287, MPFR_RNDN);
        mpfr_mul(r9961298, r9961297, r9961287, MPFR_RNDN);
        mpfr_mul(r9961299, r9961296, r9961298, MPFR_RNDN);
        mpfr_add(r9961300, r9961295, r9961299, MPFR_RNDN);
        ;
        mpfr_mul(r9961302, r9961298, r9961287, MPFR_RNDN);
        mpfr_mul(r9961303, r9961302, r9961287, MPFR_RNDN);
        mpfr_mul(r9961304, r9961301, r9961303, MPFR_RNDN);
        mpfr_add(r9961305, r9961300, r9961304, MPFR_RNDN);
        ;
        mpfr_mul(r9961307, r9961303, r9961287, MPFR_RNDN);
        mpfr_mul(r9961308, r9961307, r9961287, MPFR_RNDN);
        mpfr_mul(r9961309, r9961306, r9961308, MPFR_RNDN);
        mpfr_add(r9961310, r9961305, r9961309, MPFR_RNDN);
        ;
        mpfr_mul(r9961312, r9961308, r9961287, MPFR_RNDN);
        mpfr_mul(r9961313, r9961312, r9961287, MPFR_RNDN);
        mpfr_mul(r9961314, r9961311, r9961313, MPFR_RNDN);
        mpfr_add(r9961315, r9961310, r9961314, MPFR_RNDN);
        ;
        mpfr_mul(r9961317, r9961313, r9961287, MPFR_RNDN);
        mpfr_mul(r9961318, r9961317, r9961287, MPFR_RNDN);
        mpfr_mul(r9961319, r9961316, r9961318, MPFR_RNDN);
        mpfr_add(r9961320, r9961315, r9961319, MPFR_RNDN);
        ;
        mpfr_mul(r9961322, r9961318, r9961287, MPFR_RNDN);
        mpfr_mul(r9961323, r9961322, r9961287, MPFR_RNDN);
        mpfr_mul(r9961324, r9961321, r9961323, MPFR_RNDN);
        mpfr_add(r9961325, r9961320, r9961324, MPFR_RNDN);
        return mpfr_get_d(r9961325, MPFR_RNDN);
}

static mpfr_t r9961326, r9961327, r9961328, r9961329, r9961330, r9961331, r9961332, r9961333, r9961334, r9961335, r9961336, r9961337, r9961338, r9961339, r9961340, r9961341, r9961342, r9961343, r9961344, r9961345, r9961346, r9961347, r9961348, r9961349, r9961350, r9961351, r9961352, r9961353, r9961354, r9961355, r9961356, r9961357, r9961358, r9961359, r9961360, r9961361, r9961362, r9961363;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9961326);
        mpfr_init_set_str(r9961327, "3", 10, MPFR_RNDN);
        mpfr_init(r9961328);
        mpfr_init(r9961329);
        mpfr_init(r9961330);
        mpfr_init_set_str(r9961331, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r9961332);
        mpfr_init_set_str(r9961333, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9961334);
        mpfr_init(r9961335);
        mpfr_init(r9961336);
        mpfr_init(r9961337);
        mpfr_init_set_str(r9961338, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9961339, "4", 10, MPFR_RNDN);
        mpfr_init(r9961340);
        mpfr_init_set_str(r9961341, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9961342);
        mpfr_init(r9961343);
        mpfr_init_set_str(r9961344, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9961345);
        mpfr_init_set_str(r9961346, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9961347);
        mpfr_init(r9961348);
        mpfr_init(r9961349);
        mpfr_init_set_str(r9961350, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9961351);
        mpfr_init_set_str(r9961352, "89456640.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9961353, "12", 10, MPFR_RNDN);
        mpfr_init(r9961354);
        mpfr_init(r9961355);
        mpfr_init_set_str(r9961356, "10", 10, MPFR_RNDN);
        mpfr_init(r9961357);
        mpfr_init_set_str(r9961358, "984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9961359);
        mpfr_init(r9961360);
        mpfr_init(r9961361);
        mpfr_init(r9961362);
        mpfr_init(r9961363);
}

double f_fm(double x) {
        mpfr_set_d(r9961326, x, MPFR_RNDN);
        ;
        mpfr_pow(r9961328, r9961326, r9961327, MPFR_RNDN);
        mpfr_mul(r9961329, r9961328, r9961328, MPFR_RNDN);
        mpfr_mul(r9961330, r9961329, r9961326, MPFR_RNDN);
        ;
        mpfr_mul(r9961332, r9961326, r9961326, MPFR_RNDN);
        ;
        mpfr_mul(r9961334, r9961332, r9961333, MPFR_RNDN);
        mpfr_add(r9961335, r9961331, r9961334, MPFR_RNDN);
        mpfr_mul(r9961336, r9961330, r9961335, MPFR_RNDN);
        mpfr_mul(r9961337, r9961336, r9961330, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9961340, r9961326, r9961339, MPFR_RNDN);
        ;
        mpfr_mul(r9961342, r9961340, r9961341, MPFR_RNDN);
        mpfr_add(r9961343, r9961338, r9961342, MPFR_RNDN);
        ;
        mpfr_mul(r9961345, r9961332, r9961344, MPFR_RNDN);
        ;
        mpfr_add(r9961347, r9961345, r9961346, MPFR_RNDN);
        mpfr_mul(r9961348, r9961329, r9961347, MPFR_RNDN);
        mpfr_add(r9961349, r9961343, r9961348, MPFR_RNDN);
        ;
        mpfr_mul(r9961351, r9961350, r9961332, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9961354, r9961326, r9961353, MPFR_RNDN);
        mpfr_mul(r9961355, r9961352, r9961354, MPFR_RNDN);
        ;
        mpfr_pow(r9961357, r9961326, r9961356, MPFR_RNDN);
        ;
        mpfr_mul(r9961359, r9961357, r9961358, MPFR_RNDN);
        mpfr_sub(r9961360, r9961355, r9961359, MPFR_RNDN);
        mpfr_add(r9961361, r9961351, r9961360, MPFR_RNDN);
        mpfr_add(r9961362, r9961349, r9961361, MPFR_RNDN);
        mpfr_add(r9961363, r9961337, r9961362, MPFR_RNDN);
        return mpfr_get_d(r9961363, MPFR_RNDN);
}

static mpfr_t r9961364, r9961365, r9961366, r9961367, r9961368, r9961369, r9961370, r9961371, r9961372, r9961373, r9961374, r9961375, r9961376, r9961377, r9961378, r9961379, r9961380, r9961381, r9961382, r9961383, r9961384, r9961385, r9961386, r9961387, r9961388, r9961389, r9961390, r9961391, r9961392, r9961393, r9961394, r9961395, r9961396, r9961397, r9961398, r9961399, r9961400, r9961401;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9961364);
        mpfr_init_set_str(r9961365, "3", 10, MPFR_RNDN);
        mpfr_init(r9961366);
        mpfr_init(r9961367);
        mpfr_init(r9961368);
        mpfr_init_set_str(r9961369, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r9961370);
        mpfr_init_set_str(r9961371, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9961372);
        mpfr_init(r9961373);
        mpfr_init(r9961374);
        mpfr_init(r9961375);
        mpfr_init_set_str(r9961376, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9961377, "4", 10, MPFR_RNDN);
        mpfr_init(r9961378);
        mpfr_init_set_str(r9961379, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9961380);
        mpfr_init(r9961381);
        mpfr_init_set_str(r9961382, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9961383);
        mpfr_init_set_str(r9961384, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9961385);
        mpfr_init(r9961386);
        mpfr_init(r9961387);
        mpfr_init_set_str(r9961388, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9961389);
        mpfr_init_set_str(r9961390, "89456640.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9961391, "12", 10, MPFR_RNDN);
        mpfr_init(r9961392);
        mpfr_init(r9961393);
        mpfr_init_set_str(r9961394, "10", 10, MPFR_RNDN);
        mpfr_init(r9961395);
        mpfr_init_set_str(r9961396, "984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9961397);
        mpfr_init(r9961398);
        mpfr_init(r9961399);
        mpfr_init(r9961400);
        mpfr_init(r9961401);
}

double f_dm(double x) {
        mpfr_set_d(r9961364, x, MPFR_RNDN);
        ;
        mpfr_pow(r9961366, r9961364, r9961365, MPFR_RNDN);
        mpfr_mul(r9961367, r9961366, r9961366, MPFR_RNDN);
        mpfr_mul(r9961368, r9961367, r9961364, MPFR_RNDN);
        ;
        mpfr_mul(r9961370, r9961364, r9961364, MPFR_RNDN);
        ;
        mpfr_mul(r9961372, r9961370, r9961371, MPFR_RNDN);
        mpfr_add(r9961373, r9961369, r9961372, MPFR_RNDN);
        mpfr_mul(r9961374, r9961368, r9961373, MPFR_RNDN);
        mpfr_mul(r9961375, r9961374, r9961368, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9961378, r9961364, r9961377, MPFR_RNDN);
        ;
        mpfr_mul(r9961380, r9961378, r9961379, MPFR_RNDN);
        mpfr_add(r9961381, r9961376, r9961380, MPFR_RNDN);
        ;
        mpfr_mul(r9961383, r9961370, r9961382, MPFR_RNDN);
        ;
        mpfr_add(r9961385, r9961383, r9961384, MPFR_RNDN);
        mpfr_mul(r9961386, r9961367, r9961385, MPFR_RNDN);
        mpfr_add(r9961387, r9961381, r9961386, MPFR_RNDN);
        ;
        mpfr_mul(r9961389, r9961388, r9961370, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9961392, r9961364, r9961391, MPFR_RNDN);
        mpfr_mul(r9961393, r9961390, r9961392, MPFR_RNDN);
        ;
        mpfr_pow(r9961395, r9961364, r9961394, MPFR_RNDN);
        ;
        mpfr_mul(r9961397, r9961395, r9961396, MPFR_RNDN);
        mpfr_sub(r9961398, r9961393, r9961397, MPFR_RNDN);
        mpfr_add(r9961399, r9961389, r9961398, MPFR_RNDN);
        mpfr_add(r9961400, r9961387, r9961399, MPFR_RNDN);
        mpfr_add(r9961401, r9961375, r9961400, MPFR_RNDN);
        return mpfr_get_d(r9961401, MPFR_RNDN);
}

