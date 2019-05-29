#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r13457234 = 1.0;
        float r13457235 = -8.0;
        float r13457236 = x;
        float r13457237 = r13457235 * r13457236;
        float r13457238 = r13457234 + r13457237;
        float r13457239 = 14.0;
        float r13457240 = r13457236 * r13457236;
        float r13457241 = r13457239 * r13457240;
        float r13457242 = r13457238 + r13457241;
        float r13457243 = -9.333333;
        float r13457244 = r13457240 * r13457236;
        float r13457245 = r13457243 * r13457244;
        float r13457246 = r13457242 + r13457245;
        float r13457247 = 2.916667;
        float r13457248 = r13457244 * r13457236;
        float r13457249 = r13457247 * r13457248;
        float r13457250 = r13457246 + r13457249;
        float r13457251 = -0.466667;
        float r13457252 = r13457248 * r13457236;
        float r13457253 = r13457251 * r13457252;
        float r13457254 = r13457250 + r13457253;
        float r13457255 = 0.038889;
        float r13457256 = r13457252 * r13457236;
        float r13457257 = r13457255 * r13457256;
        float r13457258 = r13457254 + r13457257;
        float r13457259 = -0.001587;
        float r13457260 = r13457256 * r13457236;
        float r13457261 = r13457259 * r13457260;
        float r13457262 = r13457258 + r13457261;
        float r13457263 = 2.5e-05;
        float r13457264 = r13457260 * r13457236;
        float r13457265 = r13457263 * r13457264;
        float r13457266 = r13457262 + r13457265;
        return r13457266;
}

double f_id(double x) {
        double r13457267 = 1.0;
        double r13457268 = -8.0;
        double r13457269 = x;
        double r13457270 = r13457268 * r13457269;
        double r13457271 = r13457267 + r13457270;
        double r13457272 = 14.0;
        double r13457273 = r13457269 * r13457269;
        double r13457274 = r13457272 * r13457273;
        double r13457275 = r13457271 + r13457274;
        double r13457276 = -9.333333;
        double r13457277 = r13457273 * r13457269;
        double r13457278 = r13457276 * r13457277;
        double r13457279 = r13457275 + r13457278;
        double r13457280 = 2.916667;
        double r13457281 = r13457277 * r13457269;
        double r13457282 = r13457280 * r13457281;
        double r13457283 = r13457279 + r13457282;
        double r13457284 = -0.466667;
        double r13457285 = r13457281 * r13457269;
        double r13457286 = r13457284 * r13457285;
        double r13457287 = r13457283 + r13457286;
        double r13457288 = 0.038889;
        double r13457289 = r13457285 * r13457269;
        double r13457290 = r13457288 * r13457289;
        double r13457291 = r13457287 + r13457290;
        double r13457292 = -0.001587;
        double r13457293 = r13457289 * r13457269;
        double r13457294 = r13457292 * r13457293;
        double r13457295 = r13457291 + r13457294;
        double r13457296 = 2.5e-05;
        double r13457297 = r13457293 * r13457269;
        double r13457298 = r13457296 * r13457297;
        double r13457299 = r13457295 + r13457298;
        return r13457299;
}


double f_of(float x) {
        float r13457300 = x;
        float r13457301 = r13457300 * r13457300;
        float r13457302 = 3;
        float r13457303 = pow(r13457301, r13457302);
        float r13457304 = 2.5e-05;
        float r13457305 = r13457304 * r13457301;
        float r13457306 = r13457303 * r13457305;
        float r13457307 = pow(r13457300, r13457302);
        float r13457308 = r13457307 * r13457307;
        float r13457309 = -0.001587;
        float r13457310 = r13457309 * r13457300;
        float r13457311 = 0.038889;
        float r13457312 = r13457310 + r13457311;
        float r13457313 = r13457308 * r13457312;
        float r13457314 = r13457306 + r13457313;
        float r13457315 = -9.333333;
        float r13457316 = r13457315 * r13457300;
        float r13457317 = 14.0;
        float r13457318 = r13457316 + r13457317;
        float r13457319 = r13457301 * r13457318;
        float r13457320 = r13457301 * r13457301;
        float r13457321 = 2.916667;
        float r13457322 = -0.466667;
        float r13457323 = r13457322 * r13457300;
        float r13457324 = r13457321 + r13457323;
        float r13457325 = r13457320 * r13457324;
        float r13457326 = r13457319 + r13457325;
        float r13457327 = -8.0;
        float r13457328 = r13457300 * r13457327;
        float r13457329 = 1.0;
        float r13457330 = r13457328 + r13457329;
        float r13457331 = r13457326 + r13457330;
        float r13457332 = r13457314 + r13457331;
        return r13457332;
}

double f_od(double x) {
        double r13457333 = x;
        double r13457334 = r13457333 * r13457333;
        double r13457335 = 3;
        double r13457336 = pow(r13457334, r13457335);
        double r13457337 = 2.5e-05;
        double r13457338 = r13457337 * r13457334;
        double r13457339 = r13457336 * r13457338;
        double r13457340 = pow(r13457333, r13457335);
        double r13457341 = r13457340 * r13457340;
        double r13457342 = -0.001587;
        double r13457343 = r13457342 * r13457333;
        double r13457344 = 0.038889;
        double r13457345 = r13457343 + r13457344;
        double r13457346 = r13457341 * r13457345;
        double r13457347 = r13457339 + r13457346;
        double r13457348 = -9.333333;
        double r13457349 = r13457348 * r13457333;
        double r13457350 = 14.0;
        double r13457351 = r13457349 + r13457350;
        double r13457352 = r13457334 * r13457351;
        double r13457353 = r13457334 * r13457334;
        double r13457354 = 2.916667;
        double r13457355 = -0.466667;
        double r13457356 = r13457355 * r13457333;
        double r13457357 = r13457354 + r13457356;
        double r13457358 = r13457353 * r13457357;
        double r13457359 = r13457352 + r13457358;
        double r13457360 = -8.0;
        double r13457361 = r13457333 * r13457360;
        double r13457362 = 1.0;
        double r13457363 = r13457361 + r13457362;
        double r13457364 = r13457359 + r13457363;
        double r13457365 = r13457347 + r13457364;
        return r13457365;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13457366, r13457367, r13457368, r13457369, r13457370, r13457371, r13457372, r13457373, r13457374, r13457375, r13457376, r13457377, r13457378, r13457379, r13457380, r13457381, r13457382, r13457383, r13457384, r13457385, r13457386, r13457387, r13457388, r13457389, r13457390, r13457391, r13457392, r13457393, r13457394, r13457395, r13457396, r13457397, r13457398;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13457366, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457367, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r13457368);
        mpfr_init(r13457369);
        mpfr_init(r13457370);
        mpfr_init_set_str(r13457371, "14.0", 10, MPFR_RNDN);
        mpfr_init(r13457372);
        mpfr_init(r13457373);
        mpfr_init(r13457374);
        mpfr_init_set_str(r13457375, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r13457376);
        mpfr_init(r13457377);
        mpfr_init(r13457378);
        mpfr_init_set_str(r13457379, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r13457380);
        mpfr_init(r13457381);
        mpfr_init(r13457382);
        mpfr_init_set_str(r13457383, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r13457384);
        mpfr_init(r13457385);
        mpfr_init(r13457386);
        mpfr_init_set_str(r13457387, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r13457388);
        mpfr_init(r13457389);
        mpfr_init(r13457390);
        mpfr_init_set_str(r13457391, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r13457392);
        mpfr_init(r13457393);
        mpfr_init(r13457394);
        mpfr_init_set_str(r13457395, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r13457396);
        mpfr_init(r13457397);
        mpfr_init(r13457398);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13457368, x, MPFR_RNDN);
        mpfr_mul(r13457369, r13457367, r13457368, MPFR_RNDN);
        mpfr_add(r13457370, r13457366, r13457369, MPFR_RNDN);
        ;
        mpfr_mul(r13457372, r13457368, r13457368, MPFR_RNDN);
        mpfr_mul(r13457373, r13457371, r13457372, MPFR_RNDN);
        mpfr_add(r13457374, r13457370, r13457373, MPFR_RNDN);
        ;
        mpfr_mul(r13457376, r13457372, r13457368, MPFR_RNDN);
        mpfr_mul(r13457377, r13457375, r13457376, MPFR_RNDN);
        mpfr_add(r13457378, r13457374, r13457377, MPFR_RNDN);
        ;
        mpfr_mul(r13457380, r13457376, r13457368, MPFR_RNDN);
        mpfr_mul(r13457381, r13457379, r13457380, MPFR_RNDN);
        mpfr_add(r13457382, r13457378, r13457381, MPFR_RNDN);
        ;
        mpfr_mul(r13457384, r13457380, r13457368, MPFR_RNDN);
        mpfr_mul(r13457385, r13457383, r13457384, MPFR_RNDN);
        mpfr_add(r13457386, r13457382, r13457385, MPFR_RNDN);
        ;
        mpfr_mul(r13457388, r13457384, r13457368, MPFR_RNDN);
        mpfr_mul(r13457389, r13457387, r13457388, MPFR_RNDN);
        mpfr_add(r13457390, r13457386, r13457389, MPFR_RNDN);
        ;
        mpfr_mul(r13457392, r13457388, r13457368, MPFR_RNDN);
        mpfr_mul(r13457393, r13457391, r13457392, MPFR_RNDN);
        mpfr_add(r13457394, r13457390, r13457393, MPFR_RNDN);
        ;
        mpfr_mul(r13457396, r13457392, r13457368, MPFR_RNDN);
        mpfr_mul(r13457397, r13457395, r13457396, MPFR_RNDN);
        mpfr_add(r13457398, r13457394, r13457397, MPFR_RNDN);
        return mpfr_get_d(r13457398, MPFR_RNDN);
}

static mpfr_t r13457399, r13457400, r13457401, r13457402, r13457403, r13457404, r13457405, r13457406, r13457407, r13457408, r13457409, r13457410, r13457411, r13457412, r13457413, r13457414, r13457415, r13457416, r13457417, r13457418, r13457419, r13457420, r13457421, r13457422, r13457423, r13457424, r13457425, r13457426, r13457427, r13457428, r13457429, r13457430, r13457431;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r13457399);
        mpfr_init(r13457400);
        mpfr_init_set_str(r13457401, "3", 10, MPFR_RNDN);
        mpfr_init(r13457402);
        mpfr_init_set_str(r13457403, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r13457404);
        mpfr_init(r13457405);
        mpfr_init(r13457406);
        mpfr_init(r13457407);
        mpfr_init_set_str(r13457408, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r13457409);
        mpfr_init_set_str(r13457410, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r13457411);
        mpfr_init(r13457412);
        mpfr_init(r13457413);
        mpfr_init_set_str(r13457414, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r13457415);
        mpfr_init_set_str(r13457416, "14.0", 10, MPFR_RNDN);
        mpfr_init(r13457417);
        mpfr_init(r13457418);
        mpfr_init(r13457419);
        mpfr_init_set_str(r13457420, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457421, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r13457422);
        mpfr_init(r13457423);
        mpfr_init(r13457424);
        mpfr_init(r13457425);
        mpfr_init_set_str(r13457426, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r13457427);
        mpfr_init_set_str(r13457428, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13457429);
        mpfr_init(r13457430);
        mpfr_init(r13457431);
}

double f_fm(double x) {
        mpfr_set_d(r13457399, x, MPFR_RNDN);
        mpfr_mul(r13457400, r13457399, r13457399, MPFR_RNDN);
        ;
        mpfr_pow(r13457402, r13457400, r13457401, MPFR_RNDN);
        ;
        mpfr_mul(r13457404, r13457403, r13457400, MPFR_RNDN);
        mpfr_mul(r13457405, r13457402, r13457404, MPFR_RNDN);
        mpfr_pow(r13457406, r13457399, r13457401, MPFR_RNDN);
        mpfr_mul(r13457407, r13457406, r13457406, MPFR_RNDN);
        ;
        mpfr_mul(r13457409, r13457408, r13457399, MPFR_RNDN);
        ;
        mpfr_add(r13457411, r13457409, r13457410, MPFR_RNDN);
        mpfr_mul(r13457412, r13457407, r13457411, MPFR_RNDN);
        mpfr_add(r13457413, r13457405, r13457412, MPFR_RNDN);
        ;
        mpfr_mul(r13457415, r13457414, r13457399, MPFR_RNDN);
        ;
        mpfr_add(r13457417, r13457415, r13457416, MPFR_RNDN);
        mpfr_mul(r13457418, r13457400, r13457417, MPFR_RNDN);
        mpfr_mul(r13457419, r13457400, r13457400, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13457422, r13457421, r13457399, MPFR_RNDN);
        mpfr_add(r13457423, r13457420, r13457422, MPFR_RNDN);
        mpfr_mul(r13457424, r13457419, r13457423, MPFR_RNDN);
        mpfr_add(r13457425, r13457418, r13457424, MPFR_RNDN);
        ;
        mpfr_mul(r13457427, r13457399, r13457426, MPFR_RNDN);
        ;
        mpfr_add(r13457429, r13457427, r13457428, MPFR_RNDN);
        mpfr_add(r13457430, r13457425, r13457429, MPFR_RNDN);
        mpfr_add(r13457431, r13457413, r13457430, MPFR_RNDN);
        return mpfr_get_d(r13457431, MPFR_RNDN);
}

static mpfr_t r13457432, r13457433, r13457434, r13457435, r13457436, r13457437, r13457438, r13457439, r13457440, r13457441, r13457442, r13457443, r13457444, r13457445, r13457446, r13457447, r13457448, r13457449, r13457450, r13457451, r13457452, r13457453, r13457454, r13457455, r13457456, r13457457, r13457458, r13457459, r13457460, r13457461, r13457462, r13457463, r13457464;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r13457432);
        mpfr_init(r13457433);
        mpfr_init_set_str(r13457434, "3", 10, MPFR_RNDN);
        mpfr_init(r13457435);
        mpfr_init_set_str(r13457436, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r13457437);
        mpfr_init(r13457438);
        mpfr_init(r13457439);
        mpfr_init(r13457440);
        mpfr_init_set_str(r13457441, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r13457442);
        mpfr_init_set_str(r13457443, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r13457444);
        mpfr_init(r13457445);
        mpfr_init(r13457446);
        mpfr_init_set_str(r13457447, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r13457448);
        mpfr_init_set_str(r13457449, "14.0", 10, MPFR_RNDN);
        mpfr_init(r13457450);
        mpfr_init(r13457451);
        mpfr_init(r13457452);
        mpfr_init_set_str(r13457453, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457454, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r13457455);
        mpfr_init(r13457456);
        mpfr_init(r13457457);
        mpfr_init(r13457458);
        mpfr_init_set_str(r13457459, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r13457460);
        mpfr_init_set_str(r13457461, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13457462);
        mpfr_init(r13457463);
        mpfr_init(r13457464);
}

double f_dm(double x) {
        mpfr_set_d(r13457432, x, MPFR_RNDN);
        mpfr_mul(r13457433, r13457432, r13457432, MPFR_RNDN);
        ;
        mpfr_pow(r13457435, r13457433, r13457434, MPFR_RNDN);
        ;
        mpfr_mul(r13457437, r13457436, r13457433, MPFR_RNDN);
        mpfr_mul(r13457438, r13457435, r13457437, MPFR_RNDN);
        mpfr_pow(r13457439, r13457432, r13457434, MPFR_RNDN);
        mpfr_mul(r13457440, r13457439, r13457439, MPFR_RNDN);
        ;
        mpfr_mul(r13457442, r13457441, r13457432, MPFR_RNDN);
        ;
        mpfr_add(r13457444, r13457442, r13457443, MPFR_RNDN);
        mpfr_mul(r13457445, r13457440, r13457444, MPFR_RNDN);
        mpfr_add(r13457446, r13457438, r13457445, MPFR_RNDN);
        ;
        mpfr_mul(r13457448, r13457447, r13457432, MPFR_RNDN);
        ;
        mpfr_add(r13457450, r13457448, r13457449, MPFR_RNDN);
        mpfr_mul(r13457451, r13457433, r13457450, MPFR_RNDN);
        mpfr_mul(r13457452, r13457433, r13457433, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13457455, r13457454, r13457432, MPFR_RNDN);
        mpfr_add(r13457456, r13457453, r13457455, MPFR_RNDN);
        mpfr_mul(r13457457, r13457452, r13457456, MPFR_RNDN);
        mpfr_add(r13457458, r13457451, r13457457, MPFR_RNDN);
        ;
        mpfr_mul(r13457460, r13457432, r13457459, MPFR_RNDN);
        ;
        mpfr_add(r13457462, r13457460, r13457461, MPFR_RNDN);
        mpfr_add(r13457463, r13457458, r13457462, MPFR_RNDN);
        mpfr_add(r13457464, r13457446, r13457463, MPFR_RNDN);
        return mpfr_get_d(r13457464, MPFR_RNDN);
}

