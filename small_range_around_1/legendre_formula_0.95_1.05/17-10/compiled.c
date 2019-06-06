#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r26950168 = -0.246094;
        float r26950169 = 13.535156;
        float r26950170 = x;
        float r26950171 = r26950170 * r26950170;
        float r26950172 = r26950169 * r26950171;
        float r26950173 = r26950168 + r26950172;
        float r26950174 = -117.304688;
        float r26950175 = r26950171 * r26950170;
        float r26950176 = r26950175 * r26950170;
        float r26950177 = r26950174 * r26950176;
        float r26950178 = r26950173 + r26950177;
        float r26950179 = 351.914062;
        float r26950180 = r26950176 * r26950170;
        float r26950181 = r26950180 * r26950170;
        float r26950182 = r26950179 * r26950181;
        float r26950183 = r26950178 + r26950182;
        float r26950184 = -427.324219;
        float r26950185 = r26950181 * r26950170;
        float r26950186 = r26950185 * r26950170;
        float r26950187 = r26950184 * r26950186;
        float r26950188 = r26950183 + r26950187;
        float r26950189 = 180.425781;
        float r26950190 = r26950186 * r26950170;
        float r26950191 = r26950190 * r26950170;
        float r26950192 = r26950189 * r26950191;
        float r26950193 = r26950188 + r26950192;
        return r26950193;
}

double f_id(double x) {
        double r26950194 = -0.246094;
        double r26950195 = 13.535156;
        double r26950196 = x;
        double r26950197 = r26950196 * r26950196;
        double r26950198 = r26950195 * r26950197;
        double r26950199 = r26950194 + r26950198;
        double r26950200 = -117.304688;
        double r26950201 = r26950197 * r26950196;
        double r26950202 = r26950201 * r26950196;
        double r26950203 = r26950200 * r26950202;
        double r26950204 = r26950199 + r26950203;
        double r26950205 = 351.914062;
        double r26950206 = r26950202 * r26950196;
        double r26950207 = r26950206 * r26950196;
        double r26950208 = r26950205 * r26950207;
        double r26950209 = r26950204 + r26950208;
        double r26950210 = -427.324219;
        double r26950211 = r26950207 * r26950196;
        double r26950212 = r26950211 * r26950196;
        double r26950213 = r26950210 * r26950212;
        double r26950214 = r26950209 + r26950213;
        double r26950215 = 180.425781;
        double r26950216 = r26950212 * r26950196;
        double r26950217 = r26950216 * r26950196;
        double r26950218 = r26950215 * r26950217;
        double r26950219 = r26950214 + r26950218;
        return r26950219;
}


double f_of(float x) {
        float r26950220 = -117.304688;
        float r26950221 = exp(r26950220);
        float r26950222 = x;
        float r26950223 = r26950222 * r26950222;
        float r26950224 = r26950223 * r26950223;
        float r26950225 = pow(r26950221, r26950224);
        float r26950226 = exp(r26950222);
        float r26950227 = 13.535156;
        float r26950228 = r26950222 * r26950227;
        float r26950229 = pow(r26950226, r26950228);
        float r26950230 = -0.246094;
        float r26950231 = exp(r26950230);
        float r26950232 = r26950229 * r26950231;
        float r26950233 = r26950225 * r26950232;
        float r26950234 = 180.425781;
        float r26950235 = exp(r26950234);
        float r26950236 = 3;
        float r26950237 = pow(r26950222, r26950236);
        float r26950238 = r26950237 * r26950237;
        float r26950239 = r26950238 * r26950224;
        float r26950240 = pow(r26950235, r26950239);
        float r26950241 = cbrt(r26950240);
        float r26950242 = r26950241 * r26950241;
        float r26950243 = pow(r26950223, r26950236);
        float r26950244 = r26950243 * r26950224;
        float r26950245 = pow(r26950235, r26950244);
        float r26950246 = cbrt(r26950245);
        float r26950247 = r26950242 * r26950246;
        float r26950248 = r26950233 * r26950247;
        float r26950249 = 351.914062;
        float r26950250 = -427.324219;
        float r26950251 = r26950250 * r26950222;
        float r26950252 = r26950222 * r26950251;
        float r26950253 = r26950249 + r26950252;
        float r26950254 = r26950238 * r26950253;
        float r26950255 = exp(r26950254);
        float r26950256 = cbrt(r26950255);
        float r26950257 = r26950256 * r26950256;
        float r26950258 = exp(r26950243);
        float r26950259 = r26950250 * r26950223;
        float r26950260 = r26950259 + r26950249;
        float r26950261 = pow(r26950258, r26950260);
        float r26950262 = cbrt(r26950261);
        float r26950263 = r26950257 * r26950262;
        float r26950264 = r26950248 * r26950263;
        float r26950265 = log(r26950264);
        return r26950265;
}

double f_od(double x) {
        double r26950266 = -117.304688;
        double r26950267 = exp(r26950266);
        double r26950268 = x;
        double r26950269 = r26950268 * r26950268;
        double r26950270 = r26950269 * r26950269;
        double r26950271 = pow(r26950267, r26950270);
        double r26950272 = exp(r26950268);
        double r26950273 = 13.535156;
        double r26950274 = r26950268 * r26950273;
        double r26950275 = pow(r26950272, r26950274);
        double r26950276 = -0.246094;
        double r26950277 = exp(r26950276);
        double r26950278 = r26950275 * r26950277;
        double r26950279 = r26950271 * r26950278;
        double r26950280 = 180.425781;
        double r26950281 = exp(r26950280);
        double r26950282 = 3;
        double r26950283 = pow(r26950268, r26950282);
        double r26950284 = r26950283 * r26950283;
        double r26950285 = r26950284 * r26950270;
        double r26950286 = pow(r26950281, r26950285);
        double r26950287 = cbrt(r26950286);
        double r26950288 = r26950287 * r26950287;
        double r26950289 = pow(r26950269, r26950282);
        double r26950290 = r26950289 * r26950270;
        double r26950291 = pow(r26950281, r26950290);
        double r26950292 = cbrt(r26950291);
        double r26950293 = r26950288 * r26950292;
        double r26950294 = r26950279 * r26950293;
        double r26950295 = 351.914062;
        double r26950296 = -427.324219;
        double r26950297 = r26950296 * r26950268;
        double r26950298 = r26950268 * r26950297;
        double r26950299 = r26950295 + r26950298;
        double r26950300 = r26950284 * r26950299;
        double r26950301 = exp(r26950300);
        double r26950302 = cbrt(r26950301);
        double r26950303 = r26950302 * r26950302;
        double r26950304 = exp(r26950289);
        double r26950305 = r26950296 * r26950269;
        double r26950306 = r26950305 + r26950295;
        double r26950307 = pow(r26950304, r26950306);
        double r26950308 = cbrt(r26950307);
        double r26950309 = r26950303 * r26950308;
        double r26950310 = r26950294 * r26950309;
        double r26950311 = log(r26950310);
        return r26950311;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26950312, r26950313, r26950314, r26950315, r26950316, r26950317, r26950318, r26950319, r26950320, r26950321, r26950322, r26950323, r26950324, r26950325, r26950326, r26950327, r26950328, r26950329, r26950330, r26950331, r26950332, r26950333, r26950334, r26950335, r26950336, r26950337;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26950312, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r26950313, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r26950314);
        mpfr_init(r26950315);
        mpfr_init(r26950316);
        mpfr_init(r26950317);
        mpfr_init_set_str(r26950318, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r26950319);
        mpfr_init(r26950320);
        mpfr_init(r26950321);
        mpfr_init(r26950322);
        mpfr_init_set_str(r26950323, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r26950324);
        mpfr_init(r26950325);
        mpfr_init(r26950326);
        mpfr_init(r26950327);
        mpfr_init_set_str(r26950328, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r26950329);
        mpfr_init(r26950330);
        mpfr_init(r26950331);
        mpfr_init(r26950332);
        mpfr_init_set_str(r26950333, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r26950334);
        mpfr_init(r26950335);
        mpfr_init(r26950336);
        mpfr_init(r26950337);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r26950314, x, MPFR_RNDN);
        mpfr_mul(r26950315, r26950314, r26950314, MPFR_RNDN);
        mpfr_mul(r26950316, r26950313, r26950315, MPFR_RNDN);
        mpfr_add(r26950317, r26950312, r26950316, MPFR_RNDN);
        ;
        mpfr_mul(r26950319, r26950315, r26950314, MPFR_RNDN);
        mpfr_mul(r26950320, r26950319, r26950314, MPFR_RNDN);
        mpfr_mul(r26950321, r26950318, r26950320, MPFR_RNDN);
        mpfr_add(r26950322, r26950317, r26950321, MPFR_RNDN);
        ;
        mpfr_mul(r26950324, r26950320, r26950314, MPFR_RNDN);
        mpfr_mul(r26950325, r26950324, r26950314, MPFR_RNDN);
        mpfr_mul(r26950326, r26950323, r26950325, MPFR_RNDN);
        mpfr_add(r26950327, r26950322, r26950326, MPFR_RNDN);
        ;
        mpfr_mul(r26950329, r26950325, r26950314, MPFR_RNDN);
        mpfr_mul(r26950330, r26950329, r26950314, MPFR_RNDN);
        mpfr_mul(r26950331, r26950328, r26950330, MPFR_RNDN);
        mpfr_add(r26950332, r26950327, r26950331, MPFR_RNDN);
        ;
        mpfr_mul(r26950334, r26950330, r26950314, MPFR_RNDN);
        mpfr_mul(r26950335, r26950334, r26950314, MPFR_RNDN);
        mpfr_mul(r26950336, r26950333, r26950335, MPFR_RNDN);
        mpfr_add(r26950337, r26950332, r26950336, MPFR_RNDN);
        return mpfr_get_d(r26950337, MPFR_RNDN);
}

static mpfr_t r26950338, r26950339, r26950340, r26950341, r26950342, r26950343, r26950344, r26950345, r26950346, r26950347, r26950348, r26950349, r26950350, r26950351, r26950352, r26950353, r26950354, r26950355, r26950356, r26950357, r26950358, r26950359, r26950360, r26950361, r26950362, r26950363, r26950364, r26950365, r26950366, r26950367, r26950368, r26950369, r26950370, r26950371, r26950372, r26950373, r26950374, r26950375, r26950376, r26950377, r26950378, r26950379, r26950380, r26950381, r26950382, r26950383;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26950338, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r26950339);
        mpfr_init(r26950340);
        mpfr_init(r26950341);
        mpfr_init(r26950342);
        mpfr_init(r26950343);
        mpfr_init(r26950344);
        mpfr_init_set_str(r26950345, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r26950346);
        mpfr_init(r26950347);
        mpfr_init_set_str(r26950348, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r26950349);
        mpfr_init(r26950350);
        mpfr_init(r26950351);
        mpfr_init_set_str(r26950352, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r26950353);
        mpfr_init_set_str(r26950354, "3", 10, MPFR_RNDN);
        mpfr_init(r26950355);
        mpfr_init(r26950356);
        mpfr_init(r26950357);
        mpfr_init(r26950358);
        mpfr_init(r26950359);
        mpfr_init(r26950360);
        mpfr_init(r26950361);
        mpfr_init(r26950362);
        mpfr_init(r26950363);
        mpfr_init(r26950364);
        mpfr_init(r26950365);
        mpfr_init(r26950366);
        mpfr_init_set_str(r26950367, "351.914062", 10, MPFR_RNDN);
        mpfr_init_set_str(r26950368, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r26950369);
        mpfr_init(r26950370);
        mpfr_init(r26950371);
        mpfr_init(r26950372);
        mpfr_init(r26950373);
        mpfr_init(r26950374);
        mpfr_init(r26950375);
        mpfr_init(r26950376);
        mpfr_init(r26950377);
        mpfr_init(r26950378);
        mpfr_init(r26950379);
        mpfr_init(r26950380);
        mpfr_init(r26950381);
        mpfr_init(r26950382);
        mpfr_init(r26950383);
}

double f_fm(double x) {
        ;
        mpfr_exp(r26950339, r26950338, MPFR_RNDN);
        mpfr_set_d(r26950340, x, MPFR_RNDN);
        mpfr_mul(r26950341, r26950340, r26950340, MPFR_RNDN);
        mpfr_mul(r26950342, r26950341, r26950341, MPFR_RNDN);
        mpfr_pow(r26950343, r26950339, r26950342, MPFR_RNDN);
        mpfr_exp(r26950344, r26950340, MPFR_RNDN);
        ;
        mpfr_mul(r26950346, r26950340, r26950345, MPFR_RNDN);
        mpfr_pow(r26950347, r26950344, r26950346, MPFR_RNDN);
        ;
        mpfr_exp(r26950349, r26950348, MPFR_RNDN);
        mpfr_mul(r26950350, r26950347, r26950349, MPFR_RNDN);
        mpfr_mul(r26950351, r26950343, r26950350, MPFR_RNDN);
        ;
        mpfr_exp(r26950353, r26950352, MPFR_RNDN);
        ;
        mpfr_pow(r26950355, r26950340, r26950354, MPFR_RNDN);
        mpfr_mul(r26950356, r26950355, r26950355, MPFR_RNDN);
        mpfr_mul(r26950357, r26950356, r26950342, MPFR_RNDN);
        mpfr_pow(r26950358, r26950353, r26950357, MPFR_RNDN);
        mpfr_cbrt(r26950359, r26950358, MPFR_RNDN);
        mpfr_mul(r26950360, r26950359, r26950359, MPFR_RNDN);
        mpfr_pow(r26950361, r26950341, r26950354, MPFR_RNDN);
        mpfr_mul(r26950362, r26950361, r26950342, MPFR_RNDN);
        mpfr_pow(r26950363, r26950353, r26950362, MPFR_RNDN);
        mpfr_cbrt(r26950364, r26950363, MPFR_RNDN);
        mpfr_mul(r26950365, r26950360, r26950364, MPFR_RNDN);
        mpfr_mul(r26950366, r26950351, r26950365, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r26950369, r26950368, r26950340, MPFR_RNDN);
        mpfr_mul(r26950370, r26950340, r26950369, MPFR_RNDN);
        mpfr_add(r26950371, r26950367, r26950370, MPFR_RNDN);
        mpfr_mul(r26950372, r26950356, r26950371, MPFR_RNDN);
        mpfr_exp(r26950373, r26950372, MPFR_RNDN);
        mpfr_cbrt(r26950374, r26950373, MPFR_RNDN);
        mpfr_mul(r26950375, r26950374, r26950374, MPFR_RNDN);
        mpfr_exp(r26950376, r26950361, MPFR_RNDN);
        mpfr_mul(r26950377, r26950368, r26950341, MPFR_RNDN);
        mpfr_add(r26950378, r26950377, r26950367, MPFR_RNDN);
        mpfr_pow(r26950379, r26950376, r26950378, MPFR_RNDN);
        mpfr_cbrt(r26950380, r26950379, MPFR_RNDN);
        mpfr_mul(r26950381, r26950375, r26950380, MPFR_RNDN);
        mpfr_mul(r26950382, r26950366, r26950381, MPFR_RNDN);
        mpfr_log(r26950383, r26950382, MPFR_RNDN);
        return mpfr_get_d(r26950383, MPFR_RNDN);
}

static mpfr_t r26950384, r26950385, r26950386, r26950387, r26950388, r26950389, r26950390, r26950391, r26950392, r26950393, r26950394, r26950395, r26950396, r26950397, r26950398, r26950399, r26950400, r26950401, r26950402, r26950403, r26950404, r26950405, r26950406, r26950407, r26950408, r26950409, r26950410, r26950411, r26950412, r26950413, r26950414, r26950415, r26950416, r26950417, r26950418, r26950419, r26950420, r26950421, r26950422, r26950423, r26950424, r26950425, r26950426, r26950427, r26950428, r26950429;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26950384, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r26950385);
        mpfr_init(r26950386);
        mpfr_init(r26950387);
        mpfr_init(r26950388);
        mpfr_init(r26950389);
        mpfr_init(r26950390);
        mpfr_init_set_str(r26950391, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r26950392);
        mpfr_init(r26950393);
        mpfr_init_set_str(r26950394, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r26950395);
        mpfr_init(r26950396);
        mpfr_init(r26950397);
        mpfr_init_set_str(r26950398, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r26950399);
        mpfr_init_set_str(r26950400, "3", 10, MPFR_RNDN);
        mpfr_init(r26950401);
        mpfr_init(r26950402);
        mpfr_init(r26950403);
        mpfr_init(r26950404);
        mpfr_init(r26950405);
        mpfr_init(r26950406);
        mpfr_init(r26950407);
        mpfr_init(r26950408);
        mpfr_init(r26950409);
        mpfr_init(r26950410);
        mpfr_init(r26950411);
        mpfr_init(r26950412);
        mpfr_init_set_str(r26950413, "351.914062", 10, MPFR_RNDN);
        mpfr_init_set_str(r26950414, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r26950415);
        mpfr_init(r26950416);
        mpfr_init(r26950417);
        mpfr_init(r26950418);
        mpfr_init(r26950419);
        mpfr_init(r26950420);
        mpfr_init(r26950421);
        mpfr_init(r26950422);
        mpfr_init(r26950423);
        mpfr_init(r26950424);
        mpfr_init(r26950425);
        mpfr_init(r26950426);
        mpfr_init(r26950427);
        mpfr_init(r26950428);
        mpfr_init(r26950429);
}

double f_dm(double x) {
        ;
        mpfr_exp(r26950385, r26950384, MPFR_RNDN);
        mpfr_set_d(r26950386, x, MPFR_RNDN);
        mpfr_mul(r26950387, r26950386, r26950386, MPFR_RNDN);
        mpfr_mul(r26950388, r26950387, r26950387, MPFR_RNDN);
        mpfr_pow(r26950389, r26950385, r26950388, MPFR_RNDN);
        mpfr_exp(r26950390, r26950386, MPFR_RNDN);
        ;
        mpfr_mul(r26950392, r26950386, r26950391, MPFR_RNDN);
        mpfr_pow(r26950393, r26950390, r26950392, MPFR_RNDN);
        ;
        mpfr_exp(r26950395, r26950394, MPFR_RNDN);
        mpfr_mul(r26950396, r26950393, r26950395, MPFR_RNDN);
        mpfr_mul(r26950397, r26950389, r26950396, MPFR_RNDN);
        ;
        mpfr_exp(r26950399, r26950398, MPFR_RNDN);
        ;
        mpfr_pow(r26950401, r26950386, r26950400, MPFR_RNDN);
        mpfr_mul(r26950402, r26950401, r26950401, MPFR_RNDN);
        mpfr_mul(r26950403, r26950402, r26950388, MPFR_RNDN);
        mpfr_pow(r26950404, r26950399, r26950403, MPFR_RNDN);
        mpfr_cbrt(r26950405, r26950404, MPFR_RNDN);
        mpfr_mul(r26950406, r26950405, r26950405, MPFR_RNDN);
        mpfr_pow(r26950407, r26950387, r26950400, MPFR_RNDN);
        mpfr_mul(r26950408, r26950407, r26950388, MPFR_RNDN);
        mpfr_pow(r26950409, r26950399, r26950408, MPFR_RNDN);
        mpfr_cbrt(r26950410, r26950409, MPFR_RNDN);
        mpfr_mul(r26950411, r26950406, r26950410, MPFR_RNDN);
        mpfr_mul(r26950412, r26950397, r26950411, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r26950415, r26950414, r26950386, MPFR_RNDN);
        mpfr_mul(r26950416, r26950386, r26950415, MPFR_RNDN);
        mpfr_add(r26950417, r26950413, r26950416, MPFR_RNDN);
        mpfr_mul(r26950418, r26950402, r26950417, MPFR_RNDN);
        mpfr_exp(r26950419, r26950418, MPFR_RNDN);
        mpfr_cbrt(r26950420, r26950419, MPFR_RNDN);
        mpfr_mul(r26950421, r26950420, r26950420, MPFR_RNDN);
        mpfr_exp(r26950422, r26950407, MPFR_RNDN);
        mpfr_mul(r26950423, r26950414, r26950387, MPFR_RNDN);
        mpfr_add(r26950424, r26950423, r26950413, MPFR_RNDN);
        mpfr_pow(r26950425, r26950422, r26950424, MPFR_RNDN);
        mpfr_cbrt(r26950426, r26950425, MPFR_RNDN);
        mpfr_mul(r26950427, r26950421, r26950426, MPFR_RNDN);
        mpfr_mul(r26950428, r26950412, r26950427, MPFR_RNDN);
        mpfr_log(r26950429, r26950428, MPFR_RNDN);
        return mpfr_get_d(r26950429, MPFR_RNDN);
}

