#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r9830193 = 518918400.0;
        float r9830194 = -8302694400.0;
        float r9830195 = x;
        float r9830196 = r9830195 * r9830195;
        float r9830197 = r9830194 * r9830196;
        float r9830198 = r9830193 + r9830197;
        float r9830199 = 19372953600.0;
        float r9830200 = r9830196 * r9830195;
        float r9830201 = r9830200 * r9830195;
        float r9830202 = r9830199 * r9830201;
        float r9830203 = r9830198 + r9830202;
        float r9830204 = -15498362880.0;
        float r9830205 = r9830201 * r9830195;
        float r9830206 = r9830205 * r9830195;
        float r9830207 = r9830204 * r9830206;
        float r9830208 = r9830203 + r9830207;
        float r9830209 = 5535129600.0;
        float r9830210 = r9830206 * r9830195;
        float r9830211 = r9830210 * r9830195;
        float r9830212 = r9830209 * r9830211;
        float r9830213 = r9830208 + r9830212;
        float r9830214 = -984023040.0;
        float r9830215 = r9830211 * r9830195;
        float r9830216 = r9830215 * r9830195;
        float r9830217 = r9830214 * r9830216;
        float r9830218 = r9830213 + r9830217;
        float r9830219 = 89456640.0;
        float r9830220 = r9830216 * r9830195;
        float r9830221 = r9830220 * r9830195;
        float r9830222 = r9830219 * r9830221;
        float r9830223 = r9830218 + r9830222;
        float r9830224 = -3932160.0;
        float r9830225 = r9830221 * r9830195;
        float r9830226 = r9830225 * r9830195;
        float r9830227 = r9830224 * r9830226;
        float r9830228 = r9830223 + r9830227;
        float r9830229 = 65536.0;
        float r9830230 = r9830226 * r9830195;
        float r9830231 = r9830230 * r9830195;
        float r9830232 = r9830229 * r9830231;
        float r9830233 = r9830228 + r9830232;
        return r9830233;
}

double f_id(double x) {
        double r9830234 = 518918400.0;
        double r9830235 = -8302694400.0;
        double r9830236 = x;
        double r9830237 = r9830236 * r9830236;
        double r9830238 = r9830235 * r9830237;
        double r9830239 = r9830234 + r9830238;
        double r9830240 = 19372953600.0;
        double r9830241 = r9830237 * r9830236;
        double r9830242 = r9830241 * r9830236;
        double r9830243 = r9830240 * r9830242;
        double r9830244 = r9830239 + r9830243;
        double r9830245 = -15498362880.0;
        double r9830246 = r9830242 * r9830236;
        double r9830247 = r9830246 * r9830236;
        double r9830248 = r9830245 * r9830247;
        double r9830249 = r9830244 + r9830248;
        double r9830250 = 5535129600.0;
        double r9830251 = r9830247 * r9830236;
        double r9830252 = r9830251 * r9830236;
        double r9830253 = r9830250 * r9830252;
        double r9830254 = r9830249 + r9830253;
        double r9830255 = -984023040.0;
        double r9830256 = r9830252 * r9830236;
        double r9830257 = r9830256 * r9830236;
        double r9830258 = r9830255 * r9830257;
        double r9830259 = r9830254 + r9830258;
        double r9830260 = 89456640.0;
        double r9830261 = r9830257 * r9830236;
        double r9830262 = r9830261 * r9830236;
        double r9830263 = r9830260 * r9830262;
        double r9830264 = r9830259 + r9830263;
        double r9830265 = -3932160.0;
        double r9830266 = r9830262 * r9830236;
        double r9830267 = r9830266 * r9830236;
        double r9830268 = r9830265 * r9830267;
        double r9830269 = r9830264 + r9830268;
        double r9830270 = 65536.0;
        double r9830271 = r9830267 * r9830236;
        double r9830272 = r9830271 * r9830236;
        double r9830273 = r9830270 * r9830272;
        double r9830274 = r9830269 + r9830273;
        return r9830274;
}


double f_of(float x) {
        float r9830275 = x;
        float r9830276 = r9830275 * r9830275;
        float r9830277 = r9830276 * r9830276;
        float r9830278 = 3;
        float r9830279 = pow(r9830276, r9830278);
        float r9830280 = r9830277 * r9830279;
        float r9830281 = r9830277 * r9830280;
        float r9830282 = -3932160.0;
        float r9830283 = 65536.0;
        float r9830284 = r9830275 * r9830283;
        float r9830285 = r9830275 * r9830284;
        float r9830286 = r9830282 + r9830285;
        float r9830287 = r9830281 * r9830286;
        float r9830288 = 89456640.0;
        float r9830289 = r9830276 * r9830288;
        float r9830290 = -984023040.0;
        float r9830291 = r9830289 + r9830290;
        float r9830292 = r9830280 * r9830291;
        float r9830293 = 5535129600.0;
        float r9830294 = r9830293 * r9830275;
        float r9830295 = r9830294 * r9830275;
        float r9830296 = r9830295 * r9830279;
        float r9830297 = r9830292 + r9830296;
        float r9830298 = 518918400.0;
        float r9830299 = -8302694400.0;
        float r9830300 = r9830299 * r9830276;
        float r9830301 = r9830298 + r9830300;
        float r9830302 = -15498362880.0;
        float r9830303 = r9830276 * r9830302;
        float r9830304 = 19372953600.0;
        float r9830305 = r9830303 + r9830304;
        float r9830306 = r9830277 * r9830305;
        float r9830307 = r9830301 + r9830306;
        float r9830308 = r9830297 + r9830307;
        float r9830309 = r9830287 + r9830308;
        return r9830309;
}

double f_od(double x) {
        double r9830310 = x;
        double r9830311 = r9830310 * r9830310;
        double r9830312 = r9830311 * r9830311;
        double r9830313 = 3;
        double r9830314 = pow(r9830311, r9830313);
        double r9830315 = r9830312 * r9830314;
        double r9830316 = r9830312 * r9830315;
        double r9830317 = -3932160.0;
        double r9830318 = 65536.0;
        double r9830319 = r9830310 * r9830318;
        double r9830320 = r9830310 * r9830319;
        double r9830321 = r9830317 + r9830320;
        double r9830322 = r9830316 * r9830321;
        double r9830323 = 89456640.0;
        double r9830324 = r9830311 * r9830323;
        double r9830325 = -984023040.0;
        double r9830326 = r9830324 + r9830325;
        double r9830327 = r9830315 * r9830326;
        double r9830328 = 5535129600.0;
        double r9830329 = r9830328 * r9830310;
        double r9830330 = r9830329 * r9830310;
        double r9830331 = r9830330 * r9830314;
        double r9830332 = r9830327 + r9830331;
        double r9830333 = 518918400.0;
        double r9830334 = -8302694400.0;
        double r9830335 = r9830334 * r9830311;
        double r9830336 = r9830333 + r9830335;
        double r9830337 = -15498362880.0;
        double r9830338 = r9830311 * r9830337;
        double r9830339 = 19372953600.0;
        double r9830340 = r9830338 + r9830339;
        double r9830341 = r9830312 * r9830340;
        double r9830342 = r9830336 + r9830341;
        double r9830343 = r9830332 + r9830342;
        double r9830344 = r9830322 + r9830343;
        return r9830344;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9830345, r9830346, r9830347, r9830348, r9830349, r9830350, r9830351, r9830352, r9830353, r9830354, r9830355, r9830356, r9830357, r9830358, r9830359, r9830360, r9830361, r9830362, r9830363, r9830364, r9830365, r9830366, r9830367, r9830368, r9830369, r9830370, r9830371, r9830372, r9830373, r9830374, r9830375, r9830376, r9830377, r9830378, r9830379, r9830380, r9830381, r9830382, r9830383, r9830384, r9830385;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9830345, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9830346, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9830347);
        mpfr_init(r9830348);
        mpfr_init(r9830349);
        mpfr_init(r9830350);
        mpfr_init_set_str(r9830351, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9830352);
        mpfr_init(r9830353);
        mpfr_init(r9830354);
        mpfr_init(r9830355);
        mpfr_init_set_str(r9830356, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9830357);
        mpfr_init(r9830358);
        mpfr_init(r9830359);
        mpfr_init(r9830360);
        mpfr_init_set_str(r9830361, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9830362);
        mpfr_init(r9830363);
        mpfr_init(r9830364);
        mpfr_init(r9830365);
        mpfr_init_set_str(r9830366, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9830367);
        mpfr_init(r9830368);
        mpfr_init(r9830369);
        mpfr_init(r9830370);
        mpfr_init_set_str(r9830371, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r9830372);
        mpfr_init(r9830373);
        mpfr_init(r9830374);
        mpfr_init(r9830375);
        mpfr_init_set_str(r9830376, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r9830377);
        mpfr_init(r9830378);
        mpfr_init(r9830379);
        mpfr_init(r9830380);
        mpfr_init_set_str(r9830381, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9830382);
        mpfr_init(r9830383);
        mpfr_init(r9830384);
        mpfr_init(r9830385);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9830347, x, MPFR_RNDN);
        mpfr_mul(r9830348, r9830347, r9830347, MPFR_RNDN);
        mpfr_mul(r9830349, r9830346, r9830348, MPFR_RNDN);
        mpfr_add(r9830350, r9830345, r9830349, MPFR_RNDN);
        ;
        mpfr_mul(r9830352, r9830348, r9830347, MPFR_RNDN);
        mpfr_mul(r9830353, r9830352, r9830347, MPFR_RNDN);
        mpfr_mul(r9830354, r9830351, r9830353, MPFR_RNDN);
        mpfr_add(r9830355, r9830350, r9830354, MPFR_RNDN);
        ;
        mpfr_mul(r9830357, r9830353, r9830347, MPFR_RNDN);
        mpfr_mul(r9830358, r9830357, r9830347, MPFR_RNDN);
        mpfr_mul(r9830359, r9830356, r9830358, MPFR_RNDN);
        mpfr_add(r9830360, r9830355, r9830359, MPFR_RNDN);
        ;
        mpfr_mul(r9830362, r9830358, r9830347, MPFR_RNDN);
        mpfr_mul(r9830363, r9830362, r9830347, MPFR_RNDN);
        mpfr_mul(r9830364, r9830361, r9830363, MPFR_RNDN);
        mpfr_add(r9830365, r9830360, r9830364, MPFR_RNDN);
        ;
        mpfr_mul(r9830367, r9830363, r9830347, MPFR_RNDN);
        mpfr_mul(r9830368, r9830367, r9830347, MPFR_RNDN);
        mpfr_mul(r9830369, r9830366, r9830368, MPFR_RNDN);
        mpfr_add(r9830370, r9830365, r9830369, MPFR_RNDN);
        ;
        mpfr_mul(r9830372, r9830368, r9830347, MPFR_RNDN);
        mpfr_mul(r9830373, r9830372, r9830347, MPFR_RNDN);
        mpfr_mul(r9830374, r9830371, r9830373, MPFR_RNDN);
        mpfr_add(r9830375, r9830370, r9830374, MPFR_RNDN);
        ;
        mpfr_mul(r9830377, r9830373, r9830347, MPFR_RNDN);
        mpfr_mul(r9830378, r9830377, r9830347, MPFR_RNDN);
        mpfr_mul(r9830379, r9830376, r9830378, MPFR_RNDN);
        mpfr_add(r9830380, r9830375, r9830379, MPFR_RNDN);
        ;
        mpfr_mul(r9830382, r9830378, r9830347, MPFR_RNDN);
        mpfr_mul(r9830383, r9830382, r9830347, MPFR_RNDN);
        mpfr_mul(r9830384, r9830381, r9830383, MPFR_RNDN);
        mpfr_add(r9830385, r9830380, r9830384, MPFR_RNDN);
        return mpfr_get_d(r9830385, MPFR_RNDN);
}

static mpfr_t r9830386, r9830387, r9830388, r9830389, r9830390, r9830391, r9830392, r9830393, r9830394, r9830395, r9830396, r9830397, r9830398, r9830399, r9830400, r9830401, r9830402, r9830403, r9830404, r9830405, r9830406, r9830407, r9830408, r9830409, r9830410, r9830411, r9830412, r9830413, r9830414, r9830415, r9830416, r9830417, r9830418, r9830419, r9830420;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9830386);
        mpfr_init(r9830387);
        mpfr_init(r9830388);
        mpfr_init_set_str(r9830389, "3", 10, MPFR_RNDN);
        mpfr_init(r9830390);
        mpfr_init(r9830391);
        mpfr_init(r9830392);
        mpfr_init_set_str(r9830393, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9830394, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9830395);
        mpfr_init(r9830396);
        mpfr_init(r9830397);
        mpfr_init(r9830398);
        mpfr_init_set_str(r9830399, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r9830400);
        mpfr_init_set_str(r9830401, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9830402);
        mpfr_init(r9830403);
        mpfr_init_set_str(r9830404, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9830405);
        mpfr_init(r9830406);
        mpfr_init(r9830407);
        mpfr_init(r9830408);
        mpfr_init_set_str(r9830409, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9830410, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9830411);
        mpfr_init(r9830412);
        mpfr_init_set_str(r9830413, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9830414);
        mpfr_init_set_str(r9830415, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9830416);
        mpfr_init(r9830417);
        mpfr_init(r9830418);
        mpfr_init(r9830419);
        mpfr_init(r9830420);
}

double f_fm(double x) {
        mpfr_set_d(r9830386, x, MPFR_RNDN);
        mpfr_mul(r9830387, r9830386, r9830386, MPFR_RNDN);
        mpfr_mul(r9830388, r9830387, r9830387, MPFR_RNDN);
        ;
        mpfr_pow(r9830390, r9830387, r9830389, MPFR_RNDN);
        mpfr_mul(r9830391, r9830388, r9830390, MPFR_RNDN);
        mpfr_mul(r9830392, r9830388, r9830391, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9830395, r9830386, r9830394, MPFR_RNDN);
        mpfr_mul(r9830396, r9830386, r9830395, MPFR_RNDN);
        mpfr_add(r9830397, r9830393, r9830396, MPFR_RNDN);
        mpfr_mul(r9830398, r9830392, r9830397, MPFR_RNDN);
        ;
        mpfr_mul(r9830400, r9830387, r9830399, MPFR_RNDN);
        ;
        mpfr_add(r9830402, r9830400, r9830401, MPFR_RNDN);
        mpfr_mul(r9830403, r9830391, r9830402, MPFR_RNDN);
        ;
        mpfr_mul(r9830405, r9830404, r9830386, MPFR_RNDN);
        mpfr_mul(r9830406, r9830405, r9830386, MPFR_RNDN);
        mpfr_mul(r9830407, r9830406, r9830390, MPFR_RNDN);
        mpfr_add(r9830408, r9830403, r9830407, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9830411, r9830410, r9830387, MPFR_RNDN);
        mpfr_add(r9830412, r9830409, r9830411, MPFR_RNDN);
        ;
        mpfr_mul(r9830414, r9830387, r9830413, MPFR_RNDN);
        ;
        mpfr_add(r9830416, r9830414, r9830415, MPFR_RNDN);
        mpfr_mul(r9830417, r9830388, r9830416, MPFR_RNDN);
        mpfr_add(r9830418, r9830412, r9830417, MPFR_RNDN);
        mpfr_add(r9830419, r9830408, r9830418, MPFR_RNDN);
        mpfr_add(r9830420, r9830398, r9830419, MPFR_RNDN);
        return mpfr_get_d(r9830420, MPFR_RNDN);
}

static mpfr_t r9830421, r9830422, r9830423, r9830424, r9830425, r9830426, r9830427, r9830428, r9830429, r9830430, r9830431, r9830432, r9830433, r9830434, r9830435, r9830436, r9830437, r9830438, r9830439, r9830440, r9830441, r9830442, r9830443, r9830444, r9830445, r9830446, r9830447, r9830448, r9830449, r9830450, r9830451, r9830452, r9830453, r9830454, r9830455;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9830421);
        mpfr_init(r9830422);
        mpfr_init(r9830423);
        mpfr_init_set_str(r9830424, "3", 10, MPFR_RNDN);
        mpfr_init(r9830425);
        mpfr_init(r9830426);
        mpfr_init(r9830427);
        mpfr_init_set_str(r9830428, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9830429, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9830430);
        mpfr_init(r9830431);
        mpfr_init(r9830432);
        mpfr_init(r9830433);
        mpfr_init_set_str(r9830434, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r9830435);
        mpfr_init_set_str(r9830436, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9830437);
        mpfr_init(r9830438);
        mpfr_init_set_str(r9830439, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9830440);
        mpfr_init(r9830441);
        mpfr_init(r9830442);
        mpfr_init(r9830443);
        mpfr_init_set_str(r9830444, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9830445, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9830446);
        mpfr_init(r9830447);
        mpfr_init_set_str(r9830448, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9830449);
        mpfr_init_set_str(r9830450, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9830451);
        mpfr_init(r9830452);
        mpfr_init(r9830453);
        mpfr_init(r9830454);
        mpfr_init(r9830455);
}

double f_dm(double x) {
        mpfr_set_d(r9830421, x, MPFR_RNDN);
        mpfr_mul(r9830422, r9830421, r9830421, MPFR_RNDN);
        mpfr_mul(r9830423, r9830422, r9830422, MPFR_RNDN);
        ;
        mpfr_pow(r9830425, r9830422, r9830424, MPFR_RNDN);
        mpfr_mul(r9830426, r9830423, r9830425, MPFR_RNDN);
        mpfr_mul(r9830427, r9830423, r9830426, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9830430, r9830421, r9830429, MPFR_RNDN);
        mpfr_mul(r9830431, r9830421, r9830430, MPFR_RNDN);
        mpfr_add(r9830432, r9830428, r9830431, MPFR_RNDN);
        mpfr_mul(r9830433, r9830427, r9830432, MPFR_RNDN);
        ;
        mpfr_mul(r9830435, r9830422, r9830434, MPFR_RNDN);
        ;
        mpfr_add(r9830437, r9830435, r9830436, MPFR_RNDN);
        mpfr_mul(r9830438, r9830426, r9830437, MPFR_RNDN);
        ;
        mpfr_mul(r9830440, r9830439, r9830421, MPFR_RNDN);
        mpfr_mul(r9830441, r9830440, r9830421, MPFR_RNDN);
        mpfr_mul(r9830442, r9830441, r9830425, MPFR_RNDN);
        mpfr_add(r9830443, r9830438, r9830442, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9830446, r9830445, r9830422, MPFR_RNDN);
        mpfr_add(r9830447, r9830444, r9830446, MPFR_RNDN);
        ;
        mpfr_mul(r9830449, r9830422, r9830448, MPFR_RNDN);
        ;
        mpfr_add(r9830451, r9830449, r9830450, MPFR_RNDN);
        mpfr_mul(r9830452, r9830423, r9830451, MPFR_RNDN);
        mpfr_add(r9830453, r9830447, r9830452, MPFR_RNDN);
        mpfr_add(r9830454, r9830443, r9830453, MPFR_RNDN);
        mpfr_add(r9830455, r9830433, r9830454, MPFR_RNDN);
        return mpfr_get_d(r9830455, MPFR_RNDN);
}

