#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r7032298 = -17297280.0;
        float r7032299 = 242161920.0;
        float r7032300 = x;
        float r7032301 = r7032300 * r7032300;
        float r7032302 = r7032299 * r7032301;
        float r7032303 = r7032298 + r7032302;
        float r7032304 = -484323840.0;
        float r7032305 = r7032301 * r7032300;
        float r7032306 = r7032305 * r7032300;
        float r7032307 = r7032304 * r7032306;
        float r7032308 = r7032303 + r7032307;
        float r7032309 = 322882560.0;
        float r7032310 = r7032306 * r7032300;
        float r7032311 = r7032310 * r7032300;
        float r7032312 = r7032309 * r7032311;
        float r7032313 = r7032308 + r7032312;
        float r7032314 = -92252160.0;
        float r7032315 = r7032311 * r7032300;
        float r7032316 = r7032315 * r7032300;
        float r7032317 = r7032314 * r7032316;
        float r7032318 = r7032313 + r7032317;
        float r7032319 = 12300288.0;
        float r7032320 = r7032316 * r7032300;
        float r7032321 = r7032320 * r7032300;
        float r7032322 = r7032319 * r7032321;
        float r7032323 = r7032318 + r7032322;
        float r7032324 = -745472.0;
        float r7032325 = r7032321 * r7032300;
        float r7032326 = r7032325 * r7032300;
        float r7032327 = r7032324 * r7032326;
        float r7032328 = r7032323 + r7032327;
        float r7032329 = 16384.0;
        float r7032330 = r7032326 * r7032300;
        float r7032331 = r7032330 * r7032300;
        float r7032332 = r7032329 * r7032331;
        float r7032333 = r7032328 + r7032332;
        return r7032333;
}

double f_id(double x) {
        double r7032334 = -17297280.0;
        double r7032335 = 242161920.0;
        double r7032336 = x;
        double r7032337 = r7032336 * r7032336;
        double r7032338 = r7032335 * r7032337;
        double r7032339 = r7032334 + r7032338;
        double r7032340 = -484323840.0;
        double r7032341 = r7032337 * r7032336;
        double r7032342 = r7032341 * r7032336;
        double r7032343 = r7032340 * r7032342;
        double r7032344 = r7032339 + r7032343;
        double r7032345 = 322882560.0;
        double r7032346 = r7032342 * r7032336;
        double r7032347 = r7032346 * r7032336;
        double r7032348 = r7032345 * r7032347;
        double r7032349 = r7032344 + r7032348;
        double r7032350 = -92252160.0;
        double r7032351 = r7032347 * r7032336;
        double r7032352 = r7032351 * r7032336;
        double r7032353 = r7032350 * r7032352;
        double r7032354 = r7032349 + r7032353;
        double r7032355 = 12300288.0;
        double r7032356 = r7032352 * r7032336;
        double r7032357 = r7032356 * r7032336;
        double r7032358 = r7032355 * r7032357;
        double r7032359 = r7032354 + r7032358;
        double r7032360 = -745472.0;
        double r7032361 = r7032357 * r7032336;
        double r7032362 = r7032361 * r7032336;
        double r7032363 = r7032360 * r7032362;
        double r7032364 = r7032359 + r7032363;
        double r7032365 = 16384.0;
        double r7032366 = r7032362 * r7032336;
        double r7032367 = r7032366 * r7032336;
        double r7032368 = r7032365 * r7032367;
        double r7032369 = r7032364 + r7032368;
        return r7032369;
}


double f_of(float x) {
        float r7032370 = x;
        float r7032371 = r7032370 * r7032370;
        float r7032372 = r7032371 * r7032371;
        float r7032373 = r7032372 * r7032372;
        float r7032374 = r7032372 * r7032373;
        float r7032375 = 16384.0;
        float r7032376 = r7032370 * r7032375;
        float r7032377 = r7032370 * r7032376;
        float r7032378 = -745472.0;
        float r7032379 = r7032377 + r7032378;
        float r7032380 = r7032374 * r7032379;
        float r7032381 = 242161920.0;
        float r7032382 = r7032370 * r7032381;
        float r7032383 = r7032382 * r7032370;
        float r7032384 = -17297280.0;
        float r7032385 = r7032383 + r7032384;
        float r7032386 = -484323840.0;
        float r7032387 = r7032386 * r7032370;
        float r7032388 = 3;
        float r7032389 = pow(r7032370, r7032388);
        float r7032390 = r7032387 * r7032389;
        float r7032391 = 322882560.0;
        float r7032392 = r7032391 * r7032370;
        float r7032393 = r7032370 * r7032392;
        float r7032394 = r7032372 * r7032393;
        float r7032395 = r7032390 + r7032394;
        float r7032396 = r7032385 + r7032395;
        float r7032397 = r7032380 + r7032396;
        float r7032398 = 12300288.0;
        float r7032399 = r7032398 * r7032371;
        float r7032400 = -92252160.0;
        float r7032401 = r7032399 + r7032400;
        float r7032402 = r7032373 * r7032401;
        float r7032403 = r7032397 + r7032402;
        return r7032403;
}

double f_od(double x) {
        double r7032404 = x;
        double r7032405 = r7032404 * r7032404;
        double r7032406 = r7032405 * r7032405;
        double r7032407 = r7032406 * r7032406;
        double r7032408 = r7032406 * r7032407;
        double r7032409 = 16384.0;
        double r7032410 = r7032404 * r7032409;
        double r7032411 = r7032404 * r7032410;
        double r7032412 = -745472.0;
        double r7032413 = r7032411 + r7032412;
        double r7032414 = r7032408 * r7032413;
        double r7032415 = 242161920.0;
        double r7032416 = r7032404 * r7032415;
        double r7032417 = r7032416 * r7032404;
        double r7032418 = -17297280.0;
        double r7032419 = r7032417 + r7032418;
        double r7032420 = -484323840.0;
        double r7032421 = r7032420 * r7032404;
        double r7032422 = 3;
        double r7032423 = pow(r7032404, r7032422);
        double r7032424 = r7032421 * r7032423;
        double r7032425 = 322882560.0;
        double r7032426 = r7032425 * r7032404;
        double r7032427 = r7032404 * r7032426;
        double r7032428 = r7032406 * r7032427;
        double r7032429 = r7032424 + r7032428;
        double r7032430 = r7032419 + r7032429;
        double r7032431 = r7032414 + r7032430;
        double r7032432 = 12300288.0;
        double r7032433 = r7032432 * r7032405;
        double r7032434 = -92252160.0;
        double r7032435 = r7032433 + r7032434;
        double r7032436 = r7032407 * r7032435;
        double r7032437 = r7032431 + r7032436;
        return r7032437;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7032438, r7032439, r7032440, r7032441, r7032442, r7032443, r7032444, r7032445, r7032446, r7032447, r7032448, r7032449, r7032450, r7032451, r7032452, r7032453, r7032454, r7032455, r7032456, r7032457, r7032458, r7032459, r7032460, r7032461, r7032462, r7032463, r7032464, r7032465, r7032466, r7032467, r7032468, r7032469, r7032470, r7032471, r7032472, r7032473;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7032438, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7032439, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7032440);
        mpfr_init(r7032441);
        mpfr_init(r7032442);
        mpfr_init(r7032443);
        mpfr_init_set_str(r7032444, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r7032445);
        mpfr_init(r7032446);
        mpfr_init(r7032447);
        mpfr_init(r7032448);
        mpfr_init_set_str(r7032449, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7032450);
        mpfr_init(r7032451);
        mpfr_init(r7032452);
        mpfr_init(r7032453);
        mpfr_init_set_str(r7032454, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7032455);
        mpfr_init(r7032456);
        mpfr_init(r7032457);
        mpfr_init(r7032458);
        mpfr_init_set_str(r7032459, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7032460);
        mpfr_init(r7032461);
        mpfr_init(r7032462);
        mpfr_init(r7032463);
        mpfr_init_set_str(r7032464, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7032465);
        mpfr_init(r7032466);
        mpfr_init(r7032467);
        mpfr_init(r7032468);
        mpfr_init_set_str(r7032469, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7032470);
        mpfr_init(r7032471);
        mpfr_init(r7032472);
        mpfr_init(r7032473);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7032440, x, MPFR_RNDN);
        mpfr_mul(r7032441, r7032440, r7032440, MPFR_RNDN);
        mpfr_mul(r7032442, r7032439, r7032441, MPFR_RNDN);
        mpfr_add(r7032443, r7032438, r7032442, MPFR_RNDN);
        ;
        mpfr_mul(r7032445, r7032441, r7032440, MPFR_RNDN);
        mpfr_mul(r7032446, r7032445, r7032440, MPFR_RNDN);
        mpfr_mul(r7032447, r7032444, r7032446, MPFR_RNDN);
        mpfr_add(r7032448, r7032443, r7032447, MPFR_RNDN);
        ;
        mpfr_mul(r7032450, r7032446, r7032440, MPFR_RNDN);
        mpfr_mul(r7032451, r7032450, r7032440, MPFR_RNDN);
        mpfr_mul(r7032452, r7032449, r7032451, MPFR_RNDN);
        mpfr_add(r7032453, r7032448, r7032452, MPFR_RNDN);
        ;
        mpfr_mul(r7032455, r7032451, r7032440, MPFR_RNDN);
        mpfr_mul(r7032456, r7032455, r7032440, MPFR_RNDN);
        mpfr_mul(r7032457, r7032454, r7032456, MPFR_RNDN);
        mpfr_add(r7032458, r7032453, r7032457, MPFR_RNDN);
        ;
        mpfr_mul(r7032460, r7032456, r7032440, MPFR_RNDN);
        mpfr_mul(r7032461, r7032460, r7032440, MPFR_RNDN);
        mpfr_mul(r7032462, r7032459, r7032461, MPFR_RNDN);
        mpfr_add(r7032463, r7032458, r7032462, MPFR_RNDN);
        ;
        mpfr_mul(r7032465, r7032461, r7032440, MPFR_RNDN);
        mpfr_mul(r7032466, r7032465, r7032440, MPFR_RNDN);
        mpfr_mul(r7032467, r7032464, r7032466, MPFR_RNDN);
        mpfr_add(r7032468, r7032463, r7032467, MPFR_RNDN);
        ;
        mpfr_mul(r7032470, r7032466, r7032440, MPFR_RNDN);
        mpfr_mul(r7032471, r7032470, r7032440, MPFR_RNDN);
        mpfr_mul(r7032472, r7032469, r7032471, MPFR_RNDN);
        mpfr_add(r7032473, r7032468, r7032472, MPFR_RNDN);
        return mpfr_get_d(r7032473, MPFR_RNDN);
}

static mpfr_t r7032474, r7032475, r7032476, r7032477, r7032478, r7032479, r7032480, r7032481, r7032482, r7032483, r7032484, r7032485, r7032486, r7032487, r7032488, r7032489, r7032490, r7032491, r7032492, r7032493, r7032494, r7032495, r7032496, r7032497, r7032498, r7032499, r7032500, r7032501, r7032502, r7032503, r7032504, r7032505, r7032506, r7032507;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7032474);
        mpfr_init(r7032475);
        mpfr_init(r7032476);
        mpfr_init(r7032477);
        mpfr_init(r7032478);
        mpfr_init_set_str(r7032479, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7032480);
        mpfr_init(r7032481);
        mpfr_init_set_str(r7032482, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7032483);
        mpfr_init(r7032484);
        mpfr_init_set_str(r7032485, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7032486);
        mpfr_init(r7032487);
        mpfr_init_set_str(r7032488, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7032489);
        mpfr_init_set_str(r7032490, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r7032491);
        mpfr_init_set_str(r7032492, "3", 10, MPFR_RNDN);
        mpfr_init(r7032493);
        mpfr_init(r7032494);
        mpfr_init_set_str(r7032495, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7032496);
        mpfr_init(r7032497);
        mpfr_init(r7032498);
        mpfr_init(r7032499);
        mpfr_init(r7032500);
        mpfr_init(r7032501);
        mpfr_init_set_str(r7032502, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7032503);
        mpfr_init_set_str(r7032504, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7032505);
        mpfr_init(r7032506);
        mpfr_init(r7032507);
}

double f_fm(double x) {
        mpfr_set_d(r7032474, x, MPFR_RNDN);
        mpfr_mul(r7032475, r7032474, r7032474, MPFR_RNDN);
        mpfr_mul(r7032476, r7032475, r7032475, MPFR_RNDN);
        mpfr_mul(r7032477, r7032476, r7032476, MPFR_RNDN);
        mpfr_mul(r7032478, r7032476, r7032477, MPFR_RNDN);
        ;
        mpfr_mul(r7032480, r7032474, r7032479, MPFR_RNDN);
        mpfr_mul(r7032481, r7032474, r7032480, MPFR_RNDN);
        ;
        mpfr_add(r7032483, r7032481, r7032482, MPFR_RNDN);
        mpfr_mul(r7032484, r7032478, r7032483, MPFR_RNDN);
        ;
        mpfr_mul(r7032486, r7032474, r7032485, MPFR_RNDN);
        mpfr_mul(r7032487, r7032486, r7032474, MPFR_RNDN);
        ;
        mpfr_add(r7032489, r7032487, r7032488, MPFR_RNDN);
        ;
        mpfr_mul(r7032491, r7032490, r7032474, MPFR_RNDN);
        ;
        mpfr_pow(r7032493, r7032474, r7032492, MPFR_RNDN);
        mpfr_mul(r7032494, r7032491, r7032493, MPFR_RNDN);
        ;
        mpfr_mul(r7032496, r7032495, r7032474, MPFR_RNDN);
        mpfr_mul(r7032497, r7032474, r7032496, MPFR_RNDN);
        mpfr_mul(r7032498, r7032476, r7032497, MPFR_RNDN);
        mpfr_add(r7032499, r7032494, r7032498, MPFR_RNDN);
        mpfr_add(r7032500, r7032489, r7032499, MPFR_RNDN);
        mpfr_add(r7032501, r7032484, r7032500, MPFR_RNDN);
        ;
        mpfr_mul(r7032503, r7032502, r7032475, MPFR_RNDN);
        ;
        mpfr_add(r7032505, r7032503, r7032504, MPFR_RNDN);
        mpfr_mul(r7032506, r7032477, r7032505, MPFR_RNDN);
        mpfr_add(r7032507, r7032501, r7032506, MPFR_RNDN);
        return mpfr_get_d(r7032507, MPFR_RNDN);
}

static mpfr_t r7032508, r7032509, r7032510, r7032511, r7032512, r7032513, r7032514, r7032515, r7032516, r7032517, r7032518, r7032519, r7032520, r7032521, r7032522, r7032523, r7032524, r7032525, r7032526, r7032527, r7032528, r7032529, r7032530, r7032531, r7032532, r7032533, r7032534, r7032535, r7032536, r7032537, r7032538, r7032539, r7032540, r7032541;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7032508);
        mpfr_init(r7032509);
        mpfr_init(r7032510);
        mpfr_init(r7032511);
        mpfr_init(r7032512);
        mpfr_init_set_str(r7032513, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7032514);
        mpfr_init(r7032515);
        mpfr_init_set_str(r7032516, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7032517);
        mpfr_init(r7032518);
        mpfr_init_set_str(r7032519, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7032520);
        mpfr_init(r7032521);
        mpfr_init_set_str(r7032522, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7032523);
        mpfr_init_set_str(r7032524, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r7032525);
        mpfr_init_set_str(r7032526, "3", 10, MPFR_RNDN);
        mpfr_init(r7032527);
        mpfr_init(r7032528);
        mpfr_init_set_str(r7032529, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7032530);
        mpfr_init(r7032531);
        mpfr_init(r7032532);
        mpfr_init(r7032533);
        mpfr_init(r7032534);
        mpfr_init(r7032535);
        mpfr_init_set_str(r7032536, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7032537);
        mpfr_init_set_str(r7032538, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7032539);
        mpfr_init(r7032540);
        mpfr_init(r7032541);
}

double f_dm(double x) {
        mpfr_set_d(r7032508, x, MPFR_RNDN);
        mpfr_mul(r7032509, r7032508, r7032508, MPFR_RNDN);
        mpfr_mul(r7032510, r7032509, r7032509, MPFR_RNDN);
        mpfr_mul(r7032511, r7032510, r7032510, MPFR_RNDN);
        mpfr_mul(r7032512, r7032510, r7032511, MPFR_RNDN);
        ;
        mpfr_mul(r7032514, r7032508, r7032513, MPFR_RNDN);
        mpfr_mul(r7032515, r7032508, r7032514, MPFR_RNDN);
        ;
        mpfr_add(r7032517, r7032515, r7032516, MPFR_RNDN);
        mpfr_mul(r7032518, r7032512, r7032517, MPFR_RNDN);
        ;
        mpfr_mul(r7032520, r7032508, r7032519, MPFR_RNDN);
        mpfr_mul(r7032521, r7032520, r7032508, MPFR_RNDN);
        ;
        mpfr_add(r7032523, r7032521, r7032522, MPFR_RNDN);
        ;
        mpfr_mul(r7032525, r7032524, r7032508, MPFR_RNDN);
        ;
        mpfr_pow(r7032527, r7032508, r7032526, MPFR_RNDN);
        mpfr_mul(r7032528, r7032525, r7032527, MPFR_RNDN);
        ;
        mpfr_mul(r7032530, r7032529, r7032508, MPFR_RNDN);
        mpfr_mul(r7032531, r7032508, r7032530, MPFR_RNDN);
        mpfr_mul(r7032532, r7032510, r7032531, MPFR_RNDN);
        mpfr_add(r7032533, r7032528, r7032532, MPFR_RNDN);
        mpfr_add(r7032534, r7032523, r7032533, MPFR_RNDN);
        mpfr_add(r7032535, r7032518, r7032534, MPFR_RNDN);
        ;
        mpfr_mul(r7032537, r7032536, r7032509, MPFR_RNDN);
        ;
        mpfr_add(r7032539, r7032537, r7032538, MPFR_RNDN);
        mpfr_mul(r7032540, r7032511, r7032539, MPFR_RNDN);
        mpfr_add(r7032541, r7032535, r7032540, MPFR_RNDN);
        return mpfr_get_d(r7032541, MPFR_RNDN);
}

