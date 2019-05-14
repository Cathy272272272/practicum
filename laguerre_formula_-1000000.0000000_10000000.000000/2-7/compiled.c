#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r9852245 = 1.0;
        float r9852246 = -7.0;
        float r9852247 = x;
        float r9852248 = r9852246 * r9852247;
        float r9852249 = r9852245 + r9852248;
        float r9852250 = 10.5;
        float r9852251 = r9852247 * r9852247;
        float r9852252 = r9852250 * r9852251;
        float r9852253 = r9852249 + r9852252;
        float r9852254 = -5.833333;
        float r9852255 = r9852251 * r9852247;
        float r9852256 = r9852254 * r9852255;
        float r9852257 = r9852253 + r9852256;
        float r9852258 = 1.458333;
        float r9852259 = r9852255 * r9852247;
        float r9852260 = r9852258 * r9852259;
        float r9852261 = r9852257 + r9852260;
        float r9852262 = -0.175;
        float r9852263 = r9852259 * r9852247;
        float r9852264 = r9852262 * r9852263;
        float r9852265 = r9852261 + r9852264;
        float r9852266 = 0.009722;
        float r9852267 = r9852263 * r9852247;
        float r9852268 = r9852266 * r9852267;
        float r9852269 = r9852265 + r9852268;
        float r9852270 = -0.000198;
        float r9852271 = r9852267 * r9852247;
        float r9852272 = r9852270 * r9852271;
        float r9852273 = r9852269 + r9852272;
        return r9852273;
}

double f_id(double x) {
        double r9852274 = 1.0;
        double r9852275 = -7.0;
        double r9852276 = x;
        double r9852277 = r9852275 * r9852276;
        double r9852278 = r9852274 + r9852277;
        double r9852279 = 10.5;
        double r9852280 = r9852276 * r9852276;
        double r9852281 = r9852279 * r9852280;
        double r9852282 = r9852278 + r9852281;
        double r9852283 = -5.833333;
        double r9852284 = r9852280 * r9852276;
        double r9852285 = r9852283 * r9852284;
        double r9852286 = r9852282 + r9852285;
        double r9852287 = 1.458333;
        double r9852288 = r9852284 * r9852276;
        double r9852289 = r9852287 * r9852288;
        double r9852290 = r9852286 + r9852289;
        double r9852291 = -0.175;
        double r9852292 = r9852288 * r9852276;
        double r9852293 = r9852291 * r9852292;
        double r9852294 = r9852290 + r9852293;
        double r9852295 = 0.009722;
        double r9852296 = r9852292 * r9852276;
        double r9852297 = r9852295 * r9852296;
        double r9852298 = r9852294 + r9852297;
        double r9852299 = -0.000198;
        double r9852300 = r9852296 * r9852276;
        double r9852301 = r9852299 * r9852300;
        double r9852302 = r9852298 + r9852301;
        return r9852302;
}


double f_of(float x) {
        float r9852303 = x;
        float r9852304 = r9852303 * r9852303;
        float r9852305 = 10.5;
        float r9852306 = -5.833333;
        float r9852307 = r9852306 * r9852303;
        float r9852308 = r9852305 + r9852307;
        float r9852309 = r9852304 * r9852308;
        float r9852310 = -7.0;
        float r9852311 = r9852303 * r9852310;
        float r9852312 = 1.0;
        float r9852313 = r9852311 + r9852312;
        float r9852314 = r9852309 + r9852313;
        float r9852315 = r9852304 * r9852304;
        float r9852316 = 1.458333;
        float r9852317 = -0.175;
        float r9852318 = r9852317 * r9852303;
        float r9852319 = r9852316 + r9852318;
        float r9852320 = r9852315 * r9852319;
        float r9852321 = 3;
        float r9852322 = pow(r9852303, r9852321);
        float r9852323 = r9852322 * r9852304;
        float r9852324 = r9852323 * r9852303;
        float r9852325 = -0.000198;
        float r9852326 = r9852325 * r9852303;
        float r9852327 = 0.009722;
        float r9852328 = r9852326 + r9852327;
        float r9852329 = r9852324 * r9852328;
        float r9852330 = r9852320 + r9852329;
        float r9852331 = r9852314 + r9852330;
        return r9852331;
}

double f_od(double x) {
        double r9852332 = x;
        double r9852333 = r9852332 * r9852332;
        double r9852334 = 10.5;
        double r9852335 = -5.833333;
        double r9852336 = r9852335 * r9852332;
        double r9852337 = r9852334 + r9852336;
        double r9852338 = r9852333 * r9852337;
        double r9852339 = -7.0;
        double r9852340 = r9852332 * r9852339;
        double r9852341 = 1.0;
        double r9852342 = r9852340 + r9852341;
        double r9852343 = r9852338 + r9852342;
        double r9852344 = r9852333 * r9852333;
        double r9852345 = 1.458333;
        double r9852346 = -0.175;
        double r9852347 = r9852346 * r9852332;
        double r9852348 = r9852345 + r9852347;
        double r9852349 = r9852344 * r9852348;
        double r9852350 = 3;
        double r9852351 = pow(r9852332, r9852350);
        double r9852352 = r9852351 * r9852333;
        double r9852353 = r9852352 * r9852332;
        double r9852354 = -0.000198;
        double r9852355 = r9852354 * r9852332;
        double r9852356 = 0.009722;
        double r9852357 = r9852355 + r9852356;
        double r9852358 = r9852353 * r9852357;
        double r9852359 = r9852349 + r9852358;
        double r9852360 = r9852343 + r9852359;
        return r9852360;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9852361, r9852362, r9852363, r9852364, r9852365, r9852366, r9852367, r9852368, r9852369, r9852370, r9852371, r9852372, r9852373, r9852374, r9852375, r9852376, r9852377, r9852378, r9852379, r9852380, r9852381, r9852382, r9852383, r9852384, r9852385, r9852386, r9852387, r9852388, r9852389;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9852361, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852362, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9852363);
        mpfr_init(r9852364);
        mpfr_init(r9852365);
        mpfr_init_set_str(r9852366, "10.5", 10, MPFR_RNDN);
        mpfr_init(r9852367);
        mpfr_init(r9852368);
        mpfr_init(r9852369);
        mpfr_init_set_str(r9852370, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r9852371);
        mpfr_init(r9852372);
        mpfr_init(r9852373);
        mpfr_init_set_str(r9852374, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r9852375);
        mpfr_init(r9852376);
        mpfr_init(r9852377);
        mpfr_init_set_str(r9852378, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9852379);
        mpfr_init(r9852380);
        mpfr_init(r9852381);
        mpfr_init_set_str(r9852382, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9852383);
        mpfr_init(r9852384);
        mpfr_init(r9852385);
        mpfr_init_set_str(r9852386, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9852387);
        mpfr_init(r9852388);
        mpfr_init(r9852389);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9852363, x, MPFR_RNDN);
        mpfr_mul(r9852364, r9852362, r9852363, MPFR_RNDN);
        mpfr_add(r9852365, r9852361, r9852364, MPFR_RNDN);
        ;
        mpfr_mul(r9852367, r9852363, r9852363, MPFR_RNDN);
        mpfr_mul(r9852368, r9852366, r9852367, MPFR_RNDN);
        mpfr_add(r9852369, r9852365, r9852368, MPFR_RNDN);
        ;
        mpfr_mul(r9852371, r9852367, r9852363, MPFR_RNDN);
        mpfr_mul(r9852372, r9852370, r9852371, MPFR_RNDN);
        mpfr_add(r9852373, r9852369, r9852372, MPFR_RNDN);
        ;
        mpfr_mul(r9852375, r9852371, r9852363, MPFR_RNDN);
        mpfr_mul(r9852376, r9852374, r9852375, MPFR_RNDN);
        mpfr_add(r9852377, r9852373, r9852376, MPFR_RNDN);
        ;
        mpfr_mul(r9852379, r9852375, r9852363, MPFR_RNDN);
        mpfr_mul(r9852380, r9852378, r9852379, MPFR_RNDN);
        mpfr_add(r9852381, r9852377, r9852380, MPFR_RNDN);
        ;
        mpfr_mul(r9852383, r9852379, r9852363, MPFR_RNDN);
        mpfr_mul(r9852384, r9852382, r9852383, MPFR_RNDN);
        mpfr_add(r9852385, r9852381, r9852384, MPFR_RNDN);
        ;
        mpfr_mul(r9852387, r9852383, r9852363, MPFR_RNDN);
        mpfr_mul(r9852388, r9852386, r9852387, MPFR_RNDN);
        mpfr_add(r9852389, r9852385, r9852388, MPFR_RNDN);
        return mpfr_get_d(r9852389, MPFR_RNDN);
}

static mpfr_t r9852390, r9852391, r9852392, r9852393, r9852394, r9852395, r9852396, r9852397, r9852398, r9852399, r9852400, r9852401, r9852402, r9852403, r9852404, r9852405, r9852406, r9852407, r9852408, r9852409, r9852410, r9852411, r9852412, r9852413, r9852414, r9852415, r9852416, r9852417, r9852418;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9852390);
        mpfr_init(r9852391);
        mpfr_init_set_str(r9852392, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852393, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r9852394);
        mpfr_init(r9852395);
        mpfr_init(r9852396);
        mpfr_init_set_str(r9852397, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9852398);
        mpfr_init_set_str(r9852399, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9852400);
        mpfr_init(r9852401);
        mpfr_init(r9852402);
        mpfr_init_set_str(r9852403, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852404, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9852405);
        mpfr_init(r9852406);
        mpfr_init(r9852407);
        mpfr_init_set_str(r9852408, "3", 10, MPFR_RNDN);
        mpfr_init(r9852409);
        mpfr_init(r9852410);
        mpfr_init(r9852411);
        mpfr_init_set_str(r9852412, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9852413);
        mpfr_init_set_str(r9852414, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9852415);
        mpfr_init(r9852416);
        mpfr_init(r9852417);
        mpfr_init(r9852418);
}

double f_fm(double x) {
        mpfr_set_d(r9852390, x, MPFR_RNDN);
        mpfr_mul(r9852391, r9852390, r9852390, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9852394, r9852393, r9852390, MPFR_RNDN);
        mpfr_add(r9852395, r9852392, r9852394, MPFR_RNDN);
        mpfr_mul(r9852396, r9852391, r9852395, MPFR_RNDN);
        ;
        mpfr_mul(r9852398, r9852390, r9852397, MPFR_RNDN);
        ;
        mpfr_add(r9852400, r9852398, r9852399, MPFR_RNDN);
        mpfr_add(r9852401, r9852396, r9852400, MPFR_RNDN);
        mpfr_mul(r9852402, r9852391, r9852391, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9852405, r9852404, r9852390, MPFR_RNDN);
        mpfr_add(r9852406, r9852403, r9852405, MPFR_RNDN);
        mpfr_mul(r9852407, r9852402, r9852406, MPFR_RNDN);
        ;
        mpfr_pow(r9852409, r9852390, r9852408, MPFR_RNDN);
        mpfr_mul(r9852410, r9852409, r9852391, MPFR_RNDN);
        mpfr_mul(r9852411, r9852410, r9852390, MPFR_RNDN);
        ;
        mpfr_mul(r9852413, r9852412, r9852390, MPFR_RNDN);
        ;
        mpfr_add(r9852415, r9852413, r9852414, MPFR_RNDN);
        mpfr_mul(r9852416, r9852411, r9852415, MPFR_RNDN);
        mpfr_add(r9852417, r9852407, r9852416, MPFR_RNDN);
        mpfr_add(r9852418, r9852401, r9852417, MPFR_RNDN);
        return mpfr_get_d(r9852418, MPFR_RNDN);
}

static mpfr_t r9852419, r9852420, r9852421, r9852422, r9852423, r9852424, r9852425, r9852426, r9852427, r9852428, r9852429, r9852430, r9852431, r9852432, r9852433, r9852434, r9852435, r9852436, r9852437, r9852438, r9852439, r9852440, r9852441, r9852442, r9852443, r9852444, r9852445, r9852446, r9852447;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9852419);
        mpfr_init(r9852420);
        mpfr_init_set_str(r9852421, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852422, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r9852423);
        mpfr_init(r9852424);
        mpfr_init(r9852425);
        mpfr_init_set_str(r9852426, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9852427);
        mpfr_init_set_str(r9852428, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9852429);
        mpfr_init(r9852430);
        mpfr_init(r9852431);
        mpfr_init_set_str(r9852432, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852433, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9852434);
        mpfr_init(r9852435);
        mpfr_init(r9852436);
        mpfr_init_set_str(r9852437, "3", 10, MPFR_RNDN);
        mpfr_init(r9852438);
        mpfr_init(r9852439);
        mpfr_init(r9852440);
        mpfr_init_set_str(r9852441, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9852442);
        mpfr_init_set_str(r9852443, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9852444);
        mpfr_init(r9852445);
        mpfr_init(r9852446);
        mpfr_init(r9852447);
}

double f_dm(double x) {
        mpfr_set_d(r9852419, x, MPFR_RNDN);
        mpfr_mul(r9852420, r9852419, r9852419, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9852423, r9852422, r9852419, MPFR_RNDN);
        mpfr_add(r9852424, r9852421, r9852423, MPFR_RNDN);
        mpfr_mul(r9852425, r9852420, r9852424, MPFR_RNDN);
        ;
        mpfr_mul(r9852427, r9852419, r9852426, MPFR_RNDN);
        ;
        mpfr_add(r9852429, r9852427, r9852428, MPFR_RNDN);
        mpfr_add(r9852430, r9852425, r9852429, MPFR_RNDN);
        mpfr_mul(r9852431, r9852420, r9852420, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9852434, r9852433, r9852419, MPFR_RNDN);
        mpfr_add(r9852435, r9852432, r9852434, MPFR_RNDN);
        mpfr_mul(r9852436, r9852431, r9852435, MPFR_RNDN);
        ;
        mpfr_pow(r9852438, r9852419, r9852437, MPFR_RNDN);
        mpfr_mul(r9852439, r9852438, r9852420, MPFR_RNDN);
        mpfr_mul(r9852440, r9852439, r9852419, MPFR_RNDN);
        ;
        mpfr_mul(r9852442, r9852441, r9852419, MPFR_RNDN);
        ;
        mpfr_add(r9852444, r9852442, r9852443, MPFR_RNDN);
        mpfr_mul(r9852445, r9852440, r9852444, MPFR_RNDN);
        mpfr_add(r9852446, r9852436, r9852445, MPFR_RNDN);
        mpfr_add(r9852447, r9852430, r9852446, MPFR_RNDN);
        return mpfr_get_d(r9852447, MPFR_RNDN);
}

