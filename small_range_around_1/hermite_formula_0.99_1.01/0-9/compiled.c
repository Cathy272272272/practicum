#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r61032277 = 30240.0;
        float r61032278 = x;
        float r61032279 = r61032277 * r61032278;
        float r61032280 = -80640.0;
        float r61032281 = r61032278 * r61032278;
        float r61032282 = r61032281 * r61032278;
        float r61032283 = r61032280 * r61032282;
        float r61032284 = r61032279 + r61032283;
        float r61032285 = 48384.0;
        float r61032286 = r61032282 * r61032278;
        float r61032287 = r61032286 * r61032278;
        float r61032288 = r61032285 * r61032287;
        float r61032289 = r61032284 + r61032288;
        float r61032290 = -9216.0;
        float r61032291 = r61032287 * r61032278;
        float r61032292 = r61032291 * r61032278;
        float r61032293 = r61032290 * r61032292;
        float r61032294 = r61032289 + r61032293;
        float r61032295 = 512.0;
        float r61032296 = r61032292 * r61032278;
        float r61032297 = r61032296 * r61032278;
        float r61032298 = r61032295 * r61032297;
        float r61032299 = r61032294 + r61032298;
        return r61032299;
}

double f_id(double x) {
        double r61032300 = 30240.0;
        double r61032301 = x;
        double r61032302 = r61032300 * r61032301;
        double r61032303 = -80640.0;
        double r61032304 = r61032301 * r61032301;
        double r61032305 = r61032304 * r61032301;
        double r61032306 = r61032303 * r61032305;
        double r61032307 = r61032302 + r61032306;
        double r61032308 = 48384.0;
        double r61032309 = r61032305 * r61032301;
        double r61032310 = r61032309 * r61032301;
        double r61032311 = r61032308 * r61032310;
        double r61032312 = r61032307 + r61032311;
        double r61032313 = -9216.0;
        double r61032314 = r61032310 * r61032301;
        double r61032315 = r61032314 * r61032301;
        double r61032316 = r61032313 * r61032315;
        double r61032317 = r61032312 + r61032316;
        double r61032318 = 512.0;
        double r61032319 = r61032315 * r61032301;
        double r61032320 = r61032319 * r61032301;
        double r61032321 = r61032318 * r61032320;
        double r61032322 = r61032317 + r61032321;
        return r61032322;
}


double f_of(float x) {
        float r61032323 = 1;
        float r61032324 = -80640.0;
        float r61032325 = x;
        float r61032326 = r61032324 * r61032325;
        float r61032327 = 48384.0;
        float r61032328 = r61032325 * r61032327;
        float r61032329 = r61032325 * r61032325;
        float r61032330 = r61032328 * r61032329;
        float r61032331 = r61032326 - r61032330;
        float r61032332 = cbrt(r61032331);
        float r61032333 = r61032323 / r61032332;
        float r61032334 = -9216.0;
        float r61032335 = r61032325 * r61032334;
        float r61032336 = 6;
        float r61032337 = pow(r61032325, r61032336);
        float r61032338 = r61032335 * r61032337;
        float r61032339 = 30240.0;
        float r61032340 = r61032339 * r61032325;
        float r61032341 = r61032338 + r61032340;
        float r61032342 = 512.0;
        float r61032343 = r61032325 * r61032342;
        float r61032344 = 3;
        float r61032345 = r61032344 + r61032323;
        float r61032346 = pow(r61032329, r61032345);
        float r61032347 = r61032343 * r61032346;
        float r61032348 = r61032341 + r61032347;
        float r61032349 = r61032348 * r61032332;
        float r61032350 = r61032329 * r61032329;
        float r61032351 = r61032325 * r61032350;
        float r61032352 = r61032329 * r61032327;
        float r61032353 = r61032352 + r61032324;
        float r61032354 = r61032351 * r61032353;
        float r61032355 = r61032324 - r61032352;
        float r61032356 = r61032354 * r61032355;
        float r61032357 = 80640.0;
        float r61032358 = r61032352 - r61032357;
        float r61032359 = r61032354 * r61032358;
        float r61032360 = r61032356 * r61032359;
        float r61032361 = cbrt(r61032360);
        float r61032362 = r61032349 + r61032361;
        float r61032363 = r61032333 * r61032362;
        return r61032363;
}

double f_od(double x) {
        double r61032364 = 1;
        double r61032365 = -80640.0;
        double r61032366 = x;
        double r61032367 = r61032365 * r61032366;
        double r61032368 = 48384.0;
        double r61032369 = r61032366 * r61032368;
        double r61032370 = r61032366 * r61032366;
        double r61032371 = r61032369 * r61032370;
        double r61032372 = r61032367 - r61032371;
        double r61032373 = cbrt(r61032372);
        double r61032374 = r61032364 / r61032373;
        double r61032375 = -9216.0;
        double r61032376 = r61032366 * r61032375;
        double r61032377 = 6;
        double r61032378 = pow(r61032366, r61032377);
        double r61032379 = r61032376 * r61032378;
        double r61032380 = 30240.0;
        double r61032381 = r61032380 * r61032366;
        double r61032382 = r61032379 + r61032381;
        double r61032383 = 512.0;
        double r61032384 = r61032366 * r61032383;
        double r61032385 = 3;
        double r61032386 = r61032385 + r61032364;
        double r61032387 = pow(r61032370, r61032386);
        double r61032388 = r61032384 * r61032387;
        double r61032389 = r61032382 + r61032388;
        double r61032390 = r61032389 * r61032373;
        double r61032391 = r61032370 * r61032370;
        double r61032392 = r61032366 * r61032391;
        double r61032393 = r61032370 * r61032368;
        double r61032394 = r61032393 + r61032365;
        double r61032395 = r61032392 * r61032394;
        double r61032396 = r61032365 - r61032393;
        double r61032397 = r61032395 * r61032396;
        double r61032398 = 80640.0;
        double r61032399 = r61032393 - r61032398;
        double r61032400 = r61032395 * r61032399;
        double r61032401 = r61032397 * r61032400;
        double r61032402 = cbrt(r61032401);
        double r61032403 = r61032390 + r61032402;
        double r61032404 = r61032374 * r61032403;
        return r61032404;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61032405, r61032406, r61032407, r61032408, r61032409, r61032410, r61032411, r61032412, r61032413, r61032414, r61032415, r61032416, r61032417, r61032418, r61032419, r61032420, r61032421, r61032422, r61032423, r61032424, r61032425, r61032426, r61032427;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032405, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r61032406);
        mpfr_init(r61032407);
        mpfr_init_set_str(r61032408, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r61032409);
        mpfr_init(r61032410);
        mpfr_init(r61032411);
        mpfr_init(r61032412);
        mpfr_init_set_str(r61032413, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r61032414);
        mpfr_init(r61032415);
        mpfr_init(r61032416);
        mpfr_init(r61032417);
        mpfr_init_set_str(r61032418, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r61032419);
        mpfr_init(r61032420);
        mpfr_init(r61032421);
        mpfr_init(r61032422);
        mpfr_init_set_str(r61032423, "512.0", 10, MPFR_RNDN);
        mpfr_init(r61032424);
        mpfr_init(r61032425);
        mpfr_init(r61032426);
        mpfr_init(r61032427);
}

double f_im(double x) {
        ;
        mpfr_set_d(r61032406, x, MPFR_RNDN);
        mpfr_mul(r61032407, r61032405, r61032406, MPFR_RNDN);
        ;
        mpfr_mul(r61032409, r61032406, r61032406, MPFR_RNDN);
        mpfr_mul(r61032410, r61032409, r61032406, MPFR_RNDN);
        mpfr_mul(r61032411, r61032408, r61032410, MPFR_RNDN);
        mpfr_add(r61032412, r61032407, r61032411, MPFR_RNDN);
        ;
        mpfr_mul(r61032414, r61032410, r61032406, MPFR_RNDN);
        mpfr_mul(r61032415, r61032414, r61032406, MPFR_RNDN);
        mpfr_mul(r61032416, r61032413, r61032415, MPFR_RNDN);
        mpfr_add(r61032417, r61032412, r61032416, MPFR_RNDN);
        ;
        mpfr_mul(r61032419, r61032415, r61032406, MPFR_RNDN);
        mpfr_mul(r61032420, r61032419, r61032406, MPFR_RNDN);
        mpfr_mul(r61032421, r61032418, r61032420, MPFR_RNDN);
        mpfr_add(r61032422, r61032417, r61032421, MPFR_RNDN);
        ;
        mpfr_mul(r61032424, r61032420, r61032406, MPFR_RNDN);
        mpfr_mul(r61032425, r61032424, r61032406, MPFR_RNDN);
        mpfr_mul(r61032426, r61032423, r61032425, MPFR_RNDN);
        mpfr_add(r61032427, r61032422, r61032426, MPFR_RNDN);
        return mpfr_get_d(r61032427, MPFR_RNDN);
}

static mpfr_t r61032428, r61032429, r61032430, r61032431, r61032432, r61032433, r61032434, r61032435, r61032436, r61032437, r61032438, r61032439, r61032440, r61032441, r61032442, r61032443, r61032444, r61032445, r61032446, r61032447, r61032448, r61032449, r61032450, r61032451, r61032452, r61032453, r61032454, r61032455, r61032456, r61032457, r61032458, r61032459, r61032460, r61032461, r61032462, r61032463, r61032464, r61032465, r61032466, r61032467, r61032468;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032428, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r61032429, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r61032430);
        mpfr_init(r61032431);
        mpfr_init_set_str(r61032432, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r61032433);
        mpfr_init(r61032434);
        mpfr_init(r61032435);
        mpfr_init(r61032436);
        mpfr_init(r61032437);
        mpfr_init(r61032438);
        mpfr_init_set_str(r61032439, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r61032440);
        mpfr_init_set_str(r61032441, "6", 10, MPFR_RNDN);
        mpfr_init(r61032442);
        mpfr_init(r61032443);
        mpfr_init_set_str(r61032444, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r61032445);
        mpfr_init(r61032446);
        mpfr_init_set_str(r61032447, "512.0", 10, MPFR_RNDN);
        mpfr_init(r61032448);
        mpfr_init_set_str(r61032449, "3", 10, MPFR_RNDN);
        mpfr_init(r61032450);
        mpfr_init(r61032451);
        mpfr_init(r61032452);
        mpfr_init(r61032453);
        mpfr_init(r61032454);
        mpfr_init(r61032455);
        mpfr_init(r61032456);
        mpfr_init(r61032457);
        mpfr_init(r61032458);
        mpfr_init(r61032459);
        mpfr_init(r61032460);
        mpfr_init(r61032461);
        mpfr_init_set_str(r61032462, "80640.0", 10, MPFR_RNDN);
        mpfr_init(r61032463);
        mpfr_init(r61032464);
        mpfr_init(r61032465);
        mpfr_init(r61032466);
        mpfr_init(r61032467);
        mpfr_init(r61032468);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r61032430, x, MPFR_RNDN);
        mpfr_mul(r61032431, r61032429, r61032430, MPFR_RNDN);
        ;
        mpfr_mul(r61032433, r61032430, r61032432, MPFR_RNDN);
        mpfr_mul(r61032434, r61032430, r61032430, MPFR_RNDN);
        mpfr_mul(r61032435, r61032433, r61032434, MPFR_RNDN);
        mpfr_sub(r61032436, r61032431, r61032435, MPFR_RNDN);
        mpfr_cbrt(r61032437, r61032436, MPFR_RNDN);
        mpfr_div(r61032438, r61032428, r61032437, MPFR_RNDN);
        ;
        mpfr_mul(r61032440, r61032430, r61032439, MPFR_RNDN);
        ;
        mpfr_pow(r61032442, r61032430, r61032441, MPFR_RNDN);
        mpfr_mul(r61032443, r61032440, r61032442, MPFR_RNDN);
        ;
        mpfr_mul(r61032445, r61032444, r61032430, MPFR_RNDN);
        mpfr_add(r61032446, r61032443, r61032445, MPFR_RNDN);
        ;
        mpfr_mul(r61032448, r61032430, r61032447, MPFR_RNDN);
        ;
        mpfr_add(r61032450, r61032449, r61032428, MPFR_RNDN);
        mpfr_pow(r61032451, r61032434, r61032450, MPFR_RNDN);
        mpfr_mul(r61032452, r61032448, r61032451, MPFR_RNDN);
        mpfr_add(r61032453, r61032446, r61032452, MPFR_RNDN);
        mpfr_mul(r61032454, r61032453, r61032437, MPFR_RNDN);
        mpfr_mul(r61032455, r61032434, r61032434, MPFR_RNDN);
        mpfr_mul(r61032456, r61032430, r61032455, MPFR_RNDN);
        mpfr_mul(r61032457, r61032434, r61032432, MPFR_RNDN);
        mpfr_add(r61032458, r61032457, r61032429, MPFR_RNDN);
        mpfr_mul(r61032459, r61032456, r61032458, MPFR_RNDN);
        mpfr_sub(r61032460, r61032429, r61032457, MPFR_RNDN);
        mpfr_mul(r61032461, r61032459, r61032460, MPFR_RNDN);
        ;
        mpfr_sub(r61032463, r61032457, r61032462, MPFR_RNDN);
        mpfr_mul(r61032464, r61032459, r61032463, MPFR_RNDN);
        mpfr_mul(r61032465, r61032461, r61032464, MPFR_RNDN);
        mpfr_cbrt(r61032466, r61032465, MPFR_RNDN);
        mpfr_add(r61032467, r61032454, r61032466, MPFR_RNDN);
        mpfr_mul(r61032468, r61032438, r61032467, MPFR_RNDN);
        return mpfr_get_d(r61032468, MPFR_RNDN);
}

static mpfr_t r61032469, r61032470, r61032471, r61032472, r61032473, r61032474, r61032475, r61032476, r61032477, r61032478, r61032479, r61032480, r61032481, r61032482, r61032483, r61032484, r61032485, r61032486, r61032487, r61032488, r61032489, r61032490, r61032491, r61032492, r61032493, r61032494, r61032495, r61032496, r61032497, r61032498, r61032499, r61032500, r61032501, r61032502, r61032503, r61032504, r61032505, r61032506, r61032507, r61032508, r61032509;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032469, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r61032470, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r61032471);
        mpfr_init(r61032472);
        mpfr_init_set_str(r61032473, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r61032474);
        mpfr_init(r61032475);
        mpfr_init(r61032476);
        mpfr_init(r61032477);
        mpfr_init(r61032478);
        mpfr_init(r61032479);
        mpfr_init_set_str(r61032480, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r61032481);
        mpfr_init_set_str(r61032482, "6", 10, MPFR_RNDN);
        mpfr_init(r61032483);
        mpfr_init(r61032484);
        mpfr_init_set_str(r61032485, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r61032486);
        mpfr_init(r61032487);
        mpfr_init_set_str(r61032488, "512.0", 10, MPFR_RNDN);
        mpfr_init(r61032489);
        mpfr_init_set_str(r61032490, "3", 10, MPFR_RNDN);
        mpfr_init(r61032491);
        mpfr_init(r61032492);
        mpfr_init(r61032493);
        mpfr_init(r61032494);
        mpfr_init(r61032495);
        mpfr_init(r61032496);
        mpfr_init(r61032497);
        mpfr_init(r61032498);
        mpfr_init(r61032499);
        mpfr_init(r61032500);
        mpfr_init(r61032501);
        mpfr_init(r61032502);
        mpfr_init_set_str(r61032503, "80640.0", 10, MPFR_RNDN);
        mpfr_init(r61032504);
        mpfr_init(r61032505);
        mpfr_init(r61032506);
        mpfr_init(r61032507);
        mpfr_init(r61032508);
        mpfr_init(r61032509);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r61032471, x, MPFR_RNDN);
        mpfr_mul(r61032472, r61032470, r61032471, MPFR_RNDN);
        ;
        mpfr_mul(r61032474, r61032471, r61032473, MPFR_RNDN);
        mpfr_mul(r61032475, r61032471, r61032471, MPFR_RNDN);
        mpfr_mul(r61032476, r61032474, r61032475, MPFR_RNDN);
        mpfr_sub(r61032477, r61032472, r61032476, MPFR_RNDN);
        mpfr_cbrt(r61032478, r61032477, MPFR_RNDN);
        mpfr_div(r61032479, r61032469, r61032478, MPFR_RNDN);
        ;
        mpfr_mul(r61032481, r61032471, r61032480, MPFR_RNDN);
        ;
        mpfr_pow(r61032483, r61032471, r61032482, MPFR_RNDN);
        mpfr_mul(r61032484, r61032481, r61032483, MPFR_RNDN);
        ;
        mpfr_mul(r61032486, r61032485, r61032471, MPFR_RNDN);
        mpfr_add(r61032487, r61032484, r61032486, MPFR_RNDN);
        ;
        mpfr_mul(r61032489, r61032471, r61032488, MPFR_RNDN);
        ;
        mpfr_add(r61032491, r61032490, r61032469, MPFR_RNDN);
        mpfr_pow(r61032492, r61032475, r61032491, MPFR_RNDN);
        mpfr_mul(r61032493, r61032489, r61032492, MPFR_RNDN);
        mpfr_add(r61032494, r61032487, r61032493, MPFR_RNDN);
        mpfr_mul(r61032495, r61032494, r61032478, MPFR_RNDN);
        mpfr_mul(r61032496, r61032475, r61032475, MPFR_RNDN);
        mpfr_mul(r61032497, r61032471, r61032496, MPFR_RNDN);
        mpfr_mul(r61032498, r61032475, r61032473, MPFR_RNDN);
        mpfr_add(r61032499, r61032498, r61032470, MPFR_RNDN);
        mpfr_mul(r61032500, r61032497, r61032499, MPFR_RNDN);
        mpfr_sub(r61032501, r61032470, r61032498, MPFR_RNDN);
        mpfr_mul(r61032502, r61032500, r61032501, MPFR_RNDN);
        ;
        mpfr_sub(r61032504, r61032498, r61032503, MPFR_RNDN);
        mpfr_mul(r61032505, r61032500, r61032504, MPFR_RNDN);
        mpfr_mul(r61032506, r61032502, r61032505, MPFR_RNDN);
        mpfr_cbrt(r61032507, r61032506, MPFR_RNDN);
        mpfr_add(r61032508, r61032495, r61032507, MPFR_RNDN);
        mpfr_mul(r61032509, r61032479, r61032508, MPFR_RNDN);
        return mpfr_get_d(r61032509, MPFR_RNDN);
}

