#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r11587242 = 1.0;
        float r11587243 = -7.0;
        float r11587244 = x;
        float r11587245 = r11587243 * r11587244;
        float r11587246 = r11587242 + r11587245;
        float r11587247 = 10.5;
        float r11587248 = r11587244 * r11587244;
        float r11587249 = r11587247 * r11587248;
        float r11587250 = r11587246 + r11587249;
        float r11587251 = -5.833333;
        float r11587252 = r11587248 * r11587244;
        float r11587253 = r11587251 * r11587252;
        float r11587254 = r11587250 + r11587253;
        float r11587255 = 1.458333;
        float r11587256 = r11587252 * r11587244;
        float r11587257 = r11587255 * r11587256;
        float r11587258 = r11587254 + r11587257;
        float r11587259 = -0.175;
        float r11587260 = r11587256 * r11587244;
        float r11587261 = r11587259 * r11587260;
        float r11587262 = r11587258 + r11587261;
        float r11587263 = 0.009722;
        float r11587264 = r11587260 * r11587244;
        float r11587265 = r11587263 * r11587264;
        float r11587266 = r11587262 + r11587265;
        float r11587267 = -0.000198;
        float r11587268 = r11587264 * r11587244;
        float r11587269 = r11587267 * r11587268;
        float r11587270 = r11587266 + r11587269;
        return r11587270;
}

double f_id(double x) {
        double r11587271 = 1.0;
        double r11587272 = -7.0;
        double r11587273 = x;
        double r11587274 = r11587272 * r11587273;
        double r11587275 = r11587271 + r11587274;
        double r11587276 = 10.5;
        double r11587277 = r11587273 * r11587273;
        double r11587278 = r11587276 * r11587277;
        double r11587279 = r11587275 + r11587278;
        double r11587280 = -5.833333;
        double r11587281 = r11587277 * r11587273;
        double r11587282 = r11587280 * r11587281;
        double r11587283 = r11587279 + r11587282;
        double r11587284 = 1.458333;
        double r11587285 = r11587281 * r11587273;
        double r11587286 = r11587284 * r11587285;
        double r11587287 = r11587283 + r11587286;
        double r11587288 = -0.175;
        double r11587289 = r11587285 * r11587273;
        double r11587290 = r11587288 * r11587289;
        double r11587291 = r11587287 + r11587290;
        double r11587292 = 0.009722;
        double r11587293 = r11587289 * r11587273;
        double r11587294 = r11587292 * r11587293;
        double r11587295 = r11587291 + r11587294;
        double r11587296 = -0.000198;
        double r11587297 = r11587293 * r11587273;
        double r11587298 = r11587296 * r11587297;
        double r11587299 = r11587295 + r11587298;
        return r11587299;
}


double f_of(float x) {
        float r11587300 = x;
        float r11587301 = 2;
        float r11587302 = r11587301 + r11587301;
        float r11587303 = pow(r11587300, r11587302);
        float r11587304 = -0.175;
        float r11587305 = r11587304 * r11587300;
        float r11587306 = 1.458333;
        float r11587307 = r11587305 + r11587306;
        float r11587308 = r11587303 * r11587307;
        float r11587309 = 1.0;
        float r11587310 = -7.0;
        float r11587311 = r11587310 * r11587300;
        float r11587312 = r11587309 + r11587311;
        float r11587313 = r11587308 + r11587312;
        float r11587314 = r11587300 * r11587300;
        float r11587315 = 10.5;
        float r11587316 = 5.833333;
        float r11587317 = r11587316 * r11587300;
        float r11587318 = r11587315 - r11587317;
        float r11587319 = r11587314 * r11587318;
        float r11587320 = 3;
        float r11587321 = pow(r11587314, r11587320);
        float r11587322 = 0.009722;
        float r11587323 = -0.000198;
        float r11587324 = r11587323 * r11587300;
        float r11587325 = r11587322 + r11587324;
        float r11587326 = r11587321 * r11587325;
        float r11587327 = r11587319 + r11587326;
        float r11587328 = r11587313 + r11587327;
        return r11587328;
}

double f_od(double x) {
        double r11587329 = x;
        double r11587330 = 2;
        double r11587331 = r11587330 + r11587330;
        double r11587332 = pow(r11587329, r11587331);
        double r11587333 = -0.175;
        double r11587334 = r11587333 * r11587329;
        double r11587335 = 1.458333;
        double r11587336 = r11587334 + r11587335;
        double r11587337 = r11587332 * r11587336;
        double r11587338 = 1.0;
        double r11587339 = -7.0;
        double r11587340 = r11587339 * r11587329;
        double r11587341 = r11587338 + r11587340;
        double r11587342 = r11587337 + r11587341;
        double r11587343 = r11587329 * r11587329;
        double r11587344 = 10.5;
        double r11587345 = 5.833333;
        double r11587346 = r11587345 * r11587329;
        double r11587347 = r11587344 - r11587346;
        double r11587348 = r11587343 * r11587347;
        double r11587349 = 3;
        double r11587350 = pow(r11587343, r11587349);
        double r11587351 = 0.009722;
        double r11587352 = -0.000198;
        double r11587353 = r11587352 * r11587329;
        double r11587354 = r11587351 + r11587353;
        double r11587355 = r11587350 * r11587354;
        double r11587356 = r11587348 + r11587355;
        double r11587357 = r11587342 + r11587356;
        return r11587357;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11587358, r11587359, r11587360, r11587361, r11587362, r11587363, r11587364, r11587365, r11587366, r11587367, r11587368, r11587369, r11587370, r11587371, r11587372, r11587373, r11587374, r11587375, r11587376, r11587377, r11587378, r11587379, r11587380, r11587381, r11587382, r11587383, r11587384, r11587385, r11587386;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11587358, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587359, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11587360);
        mpfr_init(r11587361);
        mpfr_init(r11587362);
        mpfr_init_set_str(r11587363, "10.5", 10, MPFR_RNDN);
        mpfr_init(r11587364);
        mpfr_init(r11587365);
        mpfr_init(r11587366);
        mpfr_init_set_str(r11587367, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r11587368);
        mpfr_init(r11587369);
        mpfr_init(r11587370);
        mpfr_init_set_str(r11587371, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r11587372);
        mpfr_init(r11587373);
        mpfr_init(r11587374);
        mpfr_init_set_str(r11587375, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11587376);
        mpfr_init(r11587377);
        mpfr_init(r11587378);
        mpfr_init_set_str(r11587379, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r11587380);
        mpfr_init(r11587381);
        mpfr_init(r11587382);
        mpfr_init_set_str(r11587383, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11587384);
        mpfr_init(r11587385);
        mpfr_init(r11587386);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11587360, x, MPFR_RNDN);
        mpfr_mul(r11587361, r11587359, r11587360, MPFR_RNDN);
        mpfr_add(r11587362, r11587358, r11587361, MPFR_RNDN);
        ;
        mpfr_mul(r11587364, r11587360, r11587360, MPFR_RNDN);
        mpfr_mul(r11587365, r11587363, r11587364, MPFR_RNDN);
        mpfr_add(r11587366, r11587362, r11587365, MPFR_RNDN);
        ;
        mpfr_mul(r11587368, r11587364, r11587360, MPFR_RNDN);
        mpfr_mul(r11587369, r11587367, r11587368, MPFR_RNDN);
        mpfr_add(r11587370, r11587366, r11587369, MPFR_RNDN);
        ;
        mpfr_mul(r11587372, r11587368, r11587360, MPFR_RNDN);
        mpfr_mul(r11587373, r11587371, r11587372, MPFR_RNDN);
        mpfr_add(r11587374, r11587370, r11587373, MPFR_RNDN);
        ;
        mpfr_mul(r11587376, r11587372, r11587360, MPFR_RNDN);
        mpfr_mul(r11587377, r11587375, r11587376, MPFR_RNDN);
        mpfr_add(r11587378, r11587374, r11587377, MPFR_RNDN);
        ;
        mpfr_mul(r11587380, r11587376, r11587360, MPFR_RNDN);
        mpfr_mul(r11587381, r11587379, r11587380, MPFR_RNDN);
        mpfr_add(r11587382, r11587378, r11587381, MPFR_RNDN);
        ;
        mpfr_mul(r11587384, r11587380, r11587360, MPFR_RNDN);
        mpfr_mul(r11587385, r11587383, r11587384, MPFR_RNDN);
        mpfr_add(r11587386, r11587382, r11587385, MPFR_RNDN);
        return mpfr_get_d(r11587386, MPFR_RNDN);
}

static mpfr_t r11587387, r11587388, r11587389, r11587390, r11587391, r11587392, r11587393, r11587394, r11587395, r11587396, r11587397, r11587398, r11587399, r11587400, r11587401, r11587402, r11587403, r11587404, r11587405, r11587406, r11587407, r11587408, r11587409, r11587410, r11587411, r11587412, r11587413, r11587414, r11587415;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11587387);
        mpfr_init_set_str(r11587388, "2", 10, MPFR_RNDN);
        mpfr_init(r11587389);
        mpfr_init(r11587390);
        mpfr_init_set_str(r11587391, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11587392);
        mpfr_init_set_str(r11587393, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r11587394);
        mpfr_init(r11587395);
        mpfr_init_set_str(r11587396, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587397, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11587398);
        mpfr_init(r11587399);
        mpfr_init(r11587400);
        mpfr_init(r11587401);
        mpfr_init_set_str(r11587402, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587403, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r11587404);
        mpfr_init(r11587405);
        mpfr_init(r11587406);
        mpfr_init_set_str(r11587407, "3", 10, MPFR_RNDN);
        mpfr_init(r11587408);
        mpfr_init_set_str(r11587409, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587410, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11587411);
        mpfr_init(r11587412);
        mpfr_init(r11587413);
        mpfr_init(r11587414);
        mpfr_init(r11587415);
}

double f_fm(double x) {
        mpfr_set_d(r11587387, x, MPFR_RNDN);
        ;
        mpfr_add(r11587389, r11587388, r11587388, MPFR_RNDN);
        mpfr_pow(r11587390, r11587387, r11587389, MPFR_RNDN);
        ;
        mpfr_mul(r11587392, r11587391, r11587387, MPFR_RNDN);
        ;
        mpfr_add(r11587394, r11587392, r11587393, MPFR_RNDN);
        mpfr_mul(r11587395, r11587390, r11587394, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587398, r11587397, r11587387, MPFR_RNDN);
        mpfr_add(r11587399, r11587396, r11587398, MPFR_RNDN);
        mpfr_add(r11587400, r11587395, r11587399, MPFR_RNDN);
        mpfr_mul(r11587401, r11587387, r11587387, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587404, r11587403, r11587387, MPFR_RNDN);
        mpfr_sub(r11587405, r11587402, r11587404, MPFR_RNDN);
        mpfr_mul(r11587406, r11587401, r11587405, MPFR_RNDN);
        ;
        mpfr_pow(r11587408, r11587401, r11587407, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587411, r11587410, r11587387, MPFR_RNDN);
        mpfr_add(r11587412, r11587409, r11587411, MPFR_RNDN);
        mpfr_mul(r11587413, r11587408, r11587412, MPFR_RNDN);
        mpfr_add(r11587414, r11587406, r11587413, MPFR_RNDN);
        mpfr_add(r11587415, r11587400, r11587414, MPFR_RNDN);
        return mpfr_get_d(r11587415, MPFR_RNDN);
}

static mpfr_t r11587416, r11587417, r11587418, r11587419, r11587420, r11587421, r11587422, r11587423, r11587424, r11587425, r11587426, r11587427, r11587428, r11587429, r11587430, r11587431, r11587432, r11587433, r11587434, r11587435, r11587436, r11587437, r11587438, r11587439, r11587440, r11587441, r11587442, r11587443, r11587444;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11587416);
        mpfr_init_set_str(r11587417, "2", 10, MPFR_RNDN);
        mpfr_init(r11587418);
        mpfr_init(r11587419);
        mpfr_init_set_str(r11587420, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11587421);
        mpfr_init_set_str(r11587422, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r11587423);
        mpfr_init(r11587424);
        mpfr_init_set_str(r11587425, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587426, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11587427);
        mpfr_init(r11587428);
        mpfr_init(r11587429);
        mpfr_init(r11587430);
        mpfr_init_set_str(r11587431, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587432, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r11587433);
        mpfr_init(r11587434);
        mpfr_init(r11587435);
        mpfr_init_set_str(r11587436, "3", 10, MPFR_RNDN);
        mpfr_init(r11587437);
        mpfr_init_set_str(r11587438, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587439, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11587440);
        mpfr_init(r11587441);
        mpfr_init(r11587442);
        mpfr_init(r11587443);
        mpfr_init(r11587444);
}

double f_dm(double x) {
        mpfr_set_d(r11587416, x, MPFR_RNDN);
        ;
        mpfr_add(r11587418, r11587417, r11587417, MPFR_RNDN);
        mpfr_pow(r11587419, r11587416, r11587418, MPFR_RNDN);
        ;
        mpfr_mul(r11587421, r11587420, r11587416, MPFR_RNDN);
        ;
        mpfr_add(r11587423, r11587421, r11587422, MPFR_RNDN);
        mpfr_mul(r11587424, r11587419, r11587423, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587427, r11587426, r11587416, MPFR_RNDN);
        mpfr_add(r11587428, r11587425, r11587427, MPFR_RNDN);
        mpfr_add(r11587429, r11587424, r11587428, MPFR_RNDN);
        mpfr_mul(r11587430, r11587416, r11587416, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587433, r11587432, r11587416, MPFR_RNDN);
        mpfr_sub(r11587434, r11587431, r11587433, MPFR_RNDN);
        mpfr_mul(r11587435, r11587430, r11587434, MPFR_RNDN);
        ;
        mpfr_pow(r11587437, r11587430, r11587436, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587440, r11587439, r11587416, MPFR_RNDN);
        mpfr_add(r11587441, r11587438, r11587440, MPFR_RNDN);
        mpfr_mul(r11587442, r11587437, r11587441, MPFR_RNDN);
        mpfr_add(r11587443, r11587435, r11587442, MPFR_RNDN);
        mpfr_add(r11587444, r11587429, r11587443, MPFR_RNDN);
        return mpfr_get_d(r11587444, MPFR_RNDN);
}

