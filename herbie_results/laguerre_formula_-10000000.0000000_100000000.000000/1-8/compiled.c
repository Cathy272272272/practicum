#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r11729227 = 1.0;
        float r11729228 = -8.0;
        float r11729229 = x;
        float r11729230 = r11729228 * r11729229;
        float r11729231 = r11729227 + r11729230;
        float r11729232 = 14.0;
        float r11729233 = r11729229 * r11729229;
        float r11729234 = r11729232 * r11729233;
        float r11729235 = r11729231 + r11729234;
        float r11729236 = -9.333333;
        float r11729237 = r11729233 * r11729229;
        float r11729238 = r11729236 * r11729237;
        float r11729239 = r11729235 + r11729238;
        float r11729240 = 2.916667;
        float r11729241 = r11729237 * r11729229;
        float r11729242 = r11729240 * r11729241;
        float r11729243 = r11729239 + r11729242;
        float r11729244 = -0.466667;
        float r11729245 = r11729241 * r11729229;
        float r11729246 = r11729244 * r11729245;
        float r11729247 = r11729243 + r11729246;
        float r11729248 = 0.038889;
        float r11729249 = r11729245 * r11729229;
        float r11729250 = r11729248 * r11729249;
        float r11729251 = r11729247 + r11729250;
        float r11729252 = -0.001587;
        float r11729253 = r11729249 * r11729229;
        float r11729254 = r11729252 * r11729253;
        float r11729255 = r11729251 + r11729254;
        float r11729256 = 2.5e-05;
        float r11729257 = r11729253 * r11729229;
        float r11729258 = r11729256 * r11729257;
        float r11729259 = r11729255 + r11729258;
        return r11729259;
}

double f_id(double x) {
        double r11729260 = 1.0;
        double r11729261 = -8.0;
        double r11729262 = x;
        double r11729263 = r11729261 * r11729262;
        double r11729264 = r11729260 + r11729263;
        double r11729265 = 14.0;
        double r11729266 = r11729262 * r11729262;
        double r11729267 = r11729265 * r11729266;
        double r11729268 = r11729264 + r11729267;
        double r11729269 = -9.333333;
        double r11729270 = r11729266 * r11729262;
        double r11729271 = r11729269 * r11729270;
        double r11729272 = r11729268 + r11729271;
        double r11729273 = 2.916667;
        double r11729274 = r11729270 * r11729262;
        double r11729275 = r11729273 * r11729274;
        double r11729276 = r11729272 + r11729275;
        double r11729277 = -0.466667;
        double r11729278 = r11729274 * r11729262;
        double r11729279 = r11729277 * r11729278;
        double r11729280 = r11729276 + r11729279;
        double r11729281 = 0.038889;
        double r11729282 = r11729278 * r11729262;
        double r11729283 = r11729281 * r11729282;
        double r11729284 = r11729280 + r11729283;
        double r11729285 = -0.001587;
        double r11729286 = r11729282 * r11729262;
        double r11729287 = r11729285 * r11729286;
        double r11729288 = r11729284 + r11729287;
        double r11729289 = 2.5e-05;
        double r11729290 = r11729286 * r11729262;
        double r11729291 = r11729289 * r11729290;
        double r11729292 = r11729288 + r11729291;
        return r11729292;
}


double f_of(float x) {
        float r11729293 = x;
        float r11729294 = 3;
        float r11729295 = pow(r11729293, r11729294);
        float r11729296 = r11729295 * r11729295;
        float r11729297 = -0.001587;
        float r11729298 = 2.5e-05;
        float r11729299 = r11729293 * r11729298;
        float r11729300 = r11729297 + r11729299;
        float r11729301 = r11729296 * r11729300;
        float r11729302 = r11729293 * r11729301;
        float r11729303 = -8.0;
        float r11729304 = r11729293 * r11729303;
        float r11729305 = 1.0;
        float r11729306 = r11729304 + r11729305;
        float r11729307 = 14.0;
        float r11729308 = r11729293 * r11729307;
        float r11729309 = r11729293 * r11729308;
        float r11729310 = r11729306 + r11729309;
        float r11729311 = r11729302 + r11729310;
        float r11729312 = 2.916667;
        float r11729313 = r11729312 * r11729293;
        float r11729314 = -9.333333;
        float r11729315 = r11729313 + r11729314;
        float r11729316 = r11729295 * r11729315;
        float r11729317 = r11729293 * r11729293;
        float r11729318 = r11729295 * r11729317;
        float r11729319 = 0.038889;
        float r11729320 = r11729319 * r11729293;
        float r11729321 = -0.466667;
        float r11729322 = r11729320 + r11729321;
        float r11729323 = r11729318 * r11729322;
        float r11729324 = r11729316 + r11729323;
        float r11729325 = r11729311 + r11729324;
        return r11729325;
}

double f_od(double x) {
        double r11729326 = x;
        double r11729327 = 3;
        double r11729328 = pow(r11729326, r11729327);
        double r11729329 = r11729328 * r11729328;
        double r11729330 = -0.001587;
        double r11729331 = 2.5e-05;
        double r11729332 = r11729326 * r11729331;
        double r11729333 = r11729330 + r11729332;
        double r11729334 = r11729329 * r11729333;
        double r11729335 = r11729326 * r11729334;
        double r11729336 = -8.0;
        double r11729337 = r11729326 * r11729336;
        double r11729338 = 1.0;
        double r11729339 = r11729337 + r11729338;
        double r11729340 = 14.0;
        double r11729341 = r11729326 * r11729340;
        double r11729342 = r11729326 * r11729341;
        double r11729343 = r11729339 + r11729342;
        double r11729344 = r11729335 + r11729343;
        double r11729345 = 2.916667;
        double r11729346 = r11729345 * r11729326;
        double r11729347 = -9.333333;
        double r11729348 = r11729346 + r11729347;
        double r11729349 = r11729328 * r11729348;
        double r11729350 = r11729326 * r11729326;
        double r11729351 = r11729328 * r11729350;
        double r11729352 = 0.038889;
        double r11729353 = r11729352 * r11729326;
        double r11729354 = -0.466667;
        double r11729355 = r11729353 + r11729354;
        double r11729356 = r11729351 * r11729355;
        double r11729357 = r11729349 + r11729356;
        double r11729358 = r11729344 + r11729357;
        return r11729358;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11729359, r11729360, r11729361, r11729362, r11729363, r11729364, r11729365, r11729366, r11729367, r11729368, r11729369, r11729370, r11729371, r11729372, r11729373, r11729374, r11729375, r11729376, r11729377, r11729378, r11729379, r11729380, r11729381, r11729382, r11729383, r11729384, r11729385, r11729386, r11729387, r11729388, r11729389, r11729390, r11729391;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11729359, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729360, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11729361);
        mpfr_init(r11729362);
        mpfr_init(r11729363);
        mpfr_init_set_str(r11729364, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11729365);
        mpfr_init(r11729366);
        mpfr_init(r11729367);
        mpfr_init_set_str(r11729368, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r11729369);
        mpfr_init(r11729370);
        mpfr_init(r11729371);
        mpfr_init_set_str(r11729372, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r11729373);
        mpfr_init(r11729374);
        mpfr_init(r11729375);
        mpfr_init_set_str(r11729376, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11729377);
        mpfr_init(r11729378);
        mpfr_init(r11729379);
        mpfr_init_set_str(r11729380, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11729381);
        mpfr_init(r11729382);
        mpfr_init(r11729383);
        mpfr_init_set_str(r11729384, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r11729385);
        mpfr_init(r11729386);
        mpfr_init(r11729387);
        mpfr_init_set_str(r11729388, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11729389);
        mpfr_init(r11729390);
        mpfr_init(r11729391);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11729361, x, MPFR_RNDN);
        mpfr_mul(r11729362, r11729360, r11729361, MPFR_RNDN);
        mpfr_add(r11729363, r11729359, r11729362, MPFR_RNDN);
        ;
        mpfr_mul(r11729365, r11729361, r11729361, MPFR_RNDN);
        mpfr_mul(r11729366, r11729364, r11729365, MPFR_RNDN);
        mpfr_add(r11729367, r11729363, r11729366, MPFR_RNDN);
        ;
        mpfr_mul(r11729369, r11729365, r11729361, MPFR_RNDN);
        mpfr_mul(r11729370, r11729368, r11729369, MPFR_RNDN);
        mpfr_add(r11729371, r11729367, r11729370, MPFR_RNDN);
        ;
        mpfr_mul(r11729373, r11729369, r11729361, MPFR_RNDN);
        mpfr_mul(r11729374, r11729372, r11729373, MPFR_RNDN);
        mpfr_add(r11729375, r11729371, r11729374, MPFR_RNDN);
        ;
        mpfr_mul(r11729377, r11729373, r11729361, MPFR_RNDN);
        mpfr_mul(r11729378, r11729376, r11729377, MPFR_RNDN);
        mpfr_add(r11729379, r11729375, r11729378, MPFR_RNDN);
        ;
        mpfr_mul(r11729381, r11729377, r11729361, MPFR_RNDN);
        mpfr_mul(r11729382, r11729380, r11729381, MPFR_RNDN);
        mpfr_add(r11729383, r11729379, r11729382, MPFR_RNDN);
        ;
        mpfr_mul(r11729385, r11729381, r11729361, MPFR_RNDN);
        mpfr_mul(r11729386, r11729384, r11729385, MPFR_RNDN);
        mpfr_add(r11729387, r11729383, r11729386, MPFR_RNDN);
        ;
        mpfr_mul(r11729389, r11729385, r11729361, MPFR_RNDN);
        mpfr_mul(r11729390, r11729388, r11729389, MPFR_RNDN);
        mpfr_add(r11729391, r11729387, r11729390, MPFR_RNDN);
        return mpfr_get_d(r11729391, MPFR_RNDN);
}

static mpfr_t r11729392, r11729393, r11729394, r11729395, r11729396, r11729397, r11729398, r11729399, r11729400, r11729401, r11729402, r11729403, r11729404, r11729405, r11729406, r11729407, r11729408, r11729409, r11729410, r11729411, r11729412, r11729413, r11729414, r11729415, r11729416, r11729417, r11729418, r11729419, r11729420, r11729421, r11729422, r11729423, r11729424;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11729392);
        mpfr_init_set_str(r11729393, "3", 10, MPFR_RNDN);
        mpfr_init(r11729394);
        mpfr_init(r11729395);
        mpfr_init_set_str(r11729396, "-0.001587", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729397, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11729398);
        mpfr_init(r11729399);
        mpfr_init(r11729400);
        mpfr_init(r11729401);
        mpfr_init_set_str(r11729402, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11729403);
        mpfr_init_set_str(r11729404, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11729405);
        mpfr_init_set_str(r11729406, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11729407);
        mpfr_init(r11729408);
        mpfr_init(r11729409);
        mpfr_init(r11729410);
        mpfr_init_set_str(r11729411, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r11729412);
        mpfr_init_set_str(r11729413, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r11729414);
        mpfr_init(r11729415);
        mpfr_init(r11729416);
        mpfr_init(r11729417);
        mpfr_init_set_str(r11729418, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11729419);
        mpfr_init_set_str(r11729420, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11729421);
        mpfr_init(r11729422);
        mpfr_init(r11729423);
        mpfr_init(r11729424);
}

double f_fm(double x) {
        mpfr_set_d(r11729392, x, MPFR_RNDN);
        ;
        mpfr_pow(r11729394, r11729392, r11729393, MPFR_RNDN);
        mpfr_mul(r11729395, r11729394, r11729394, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11729398, r11729392, r11729397, MPFR_RNDN);
        mpfr_add(r11729399, r11729396, r11729398, MPFR_RNDN);
        mpfr_mul(r11729400, r11729395, r11729399, MPFR_RNDN);
        mpfr_mul(r11729401, r11729392, r11729400, MPFR_RNDN);
        ;
        mpfr_mul(r11729403, r11729392, r11729402, MPFR_RNDN);
        ;
        mpfr_add(r11729405, r11729403, r11729404, MPFR_RNDN);
        ;
        mpfr_mul(r11729407, r11729392, r11729406, MPFR_RNDN);
        mpfr_mul(r11729408, r11729392, r11729407, MPFR_RNDN);
        mpfr_add(r11729409, r11729405, r11729408, MPFR_RNDN);
        mpfr_add(r11729410, r11729401, r11729409, MPFR_RNDN);
        ;
        mpfr_mul(r11729412, r11729411, r11729392, MPFR_RNDN);
        ;
        mpfr_add(r11729414, r11729412, r11729413, MPFR_RNDN);
        mpfr_mul(r11729415, r11729394, r11729414, MPFR_RNDN);
        mpfr_mul(r11729416, r11729392, r11729392, MPFR_RNDN);
        mpfr_mul(r11729417, r11729394, r11729416, MPFR_RNDN);
        ;
        mpfr_mul(r11729419, r11729418, r11729392, MPFR_RNDN);
        ;
        mpfr_add(r11729421, r11729419, r11729420, MPFR_RNDN);
        mpfr_mul(r11729422, r11729417, r11729421, MPFR_RNDN);
        mpfr_add(r11729423, r11729415, r11729422, MPFR_RNDN);
        mpfr_add(r11729424, r11729410, r11729423, MPFR_RNDN);
        return mpfr_get_d(r11729424, MPFR_RNDN);
}

static mpfr_t r11729425, r11729426, r11729427, r11729428, r11729429, r11729430, r11729431, r11729432, r11729433, r11729434, r11729435, r11729436, r11729437, r11729438, r11729439, r11729440, r11729441, r11729442, r11729443, r11729444, r11729445, r11729446, r11729447, r11729448, r11729449, r11729450, r11729451, r11729452, r11729453, r11729454, r11729455, r11729456, r11729457;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11729425);
        mpfr_init_set_str(r11729426, "3", 10, MPFR_RNDN);
        mpfr_init(r11729427);
        mpfr_init(r11729428);
        mpfr_init_set_str(r11729429, "-0.001587", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729430, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11729431);
        mpfr_init(r11729432);
        mpfr_init(r11729433);
        mpfr_init(r11729434);
        mpfr_init_set_str(r11729435, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11729436);
        mpfr_init_set_str(r11729437, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11729438);
        mpfr_init_set_str(r11729439, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11729440);
        mpfr_init(r11729441);
        mpfr_init(r11729442);
        mpfr_init(r11729443);
        mpfr_init_set_str(r11729444, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r11729445);
        mpfr_init_set_str(r11729446, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r11729447);
        mpfr_init(r11729448);
        mpfr_init(r11729449);
        mpfr_init(r11729450);
        mpfr_init_set_str(r11729451, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11729452);
        mpfr_init_set_str(r11729453, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11729454);
        mpfr_init(r11729455);
        mpfr_init(r11729456);
        mpfr_init(r11729457);
}

double f_dm(double x) {
        mpfr_set_d(r11729425, x, MPFR_RNDN);
        ;
        mpfr_pow(r11729427, r11729425, r11729426, MPFR_RNDN);
        mpfr_mul(r11729428, r11729427, r11729427, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11729431, r11729425, r11729430, MPFR_RNDN);
        mpfr_add(r11729432, r11729429, r11729431, MPFR_RNDN);
        mpfr_mul(r11729433, r11729428, r11729432, MPFR_RNDN);
        mpfr_mul(r11729434, r11729425, r11729433, MPFR_RNDN);
        ;
        mpfr_mul(r11729436, r11729425, r11729435, MPFR_RNDN);
        ;
        mpfr_add(r11729438, r11729436, r11729437, MPFR_RNDN);
        ;
        mpfr_mul(r11729440, r11729425, r11729439, MPFR_RNDN);
        mpfr_mul(r11729441, r11729425, r11729440, MPFR_RNDN);
        mpfr_add(r11729442, r11729438, r11729441, MPFR_RNDN);
        mpfr_add(r11729443, r11729434, r11729442, MPFR_RNDN);
        ;
        mpfr_mul(r11729445, r11729444, r11729425, MPFR_RNDN);
        ;
        mpfr_add(r11729447, r11729445, r11729446, MPFR_RNDN);
        mpfr_mul(r11729448, r11729427, r11729447, MPFR_RNDN);
        mpfr_mul(r11729449, r11729425, r11729425, MPFR_RNDN);
        mpfr_mul(r11729450, r11729427, r11729449, MPFR_RNDN);
        ;
        mpfr_mul(r11729452, r11729451, r11729425, MPFR_RNDN);
        ;
        mpfr_add(r11729454, r11729452, r11729453, MPFR_RNDN);
        mpfr_mul(r11729455, r11729450, r11729454, MPFR_RNDN);
        mpfr_add(r11729456, r11729448, r11729455, MPFR_RNDN);
        mpfr_add(r11729457, r11729443, r11729456, MPFR_RNDN);
        return mpfr_get_d(r11729457, MPFR_RNDN);
}

