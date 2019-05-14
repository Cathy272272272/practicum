#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r6295239 = 1.0;
        float r6295240 = -16.0;
        float r6295241 = x;
        float r6295242 = r6295240 * r6295241;
        float r6295243 = r6295239 + r6295242;
        float r6295244 = 60.0;
        float r6295245 = r6295241 * r6295241;
        float r6295246 = r6295244 * r6295245;
        float r6295247 = r6295243 + r6295246;
        float r6295248 = -93.333333;
        float r6295249 = r6295245 * r6295241;
        float r6295250 = r6295248 * r6295249;
        float r6295251 = r6295247 + r6295250;
        float r6295252 = 75.833333;
        float r6295253 = r6295249 * r6295241;
        float r6295254 = r6295252 * r6295253;
        float r6295255 = r6295251 + r6295254;
        float r6295256 = -36.4;
        float r6295257 = r6295253 * r6295241;
        float r6295258 = r6295256 * r6295257;
        float r6295259 = r6295255 + r6295258;
        float r6295260 = 11.122222;
        float r6295261 = r6295257 * r6295241;
        float r6295262 = r6295260 * r6295261;
        float r6295263 = r6295259 + r6295262;
        float r6295264 = -2.269841;
        float r6295265 = r6295261 * r6295241;
        float r6295266 = r6295264 * r6295265;
        float r6295267 = r6295263 + r6295266;
        float r6295268 = 0.319196;
        float r6295269 = r6295265 * r6295241;
        float r6295270 = r6295268 * r6295269;
        float r6295271 = r6295267 + r6295270;
        float r6295272 = -0.031526;
        float r6295273 = r6295269 * r6295241;
        float r6295274 = r6295272 * r6295273;
        float r6295275 = r6295271 + r6295274;
        float r6295276 = 0.002207;
        float r6295277 = r6295273 * r6295241;
        float r6295278 = r6295276 * r6295277;
        float r6295279 = r6295275 + r6295278;
        float r6295280 = -0.000109;
        float r6295281 = r6295277 * r6295241;
        float r6295282 = r6295280 * r6295281;
        float r6295283 = r6295279 + r6295282;
        float r6295284 = 4e-06;
        float r6295285 = r6295281 * r6295241;
        float r6295286 = r6295284 * r6295285;
        float r6295287 = r6295283 + r6295286;
        return r6295287;
}

double f_id(double x) {
        double r6295288 = 1.0;
        double r6295289 = -16.0;
        double r6295290 = x;
        double r6295291 = r6295289 * r6295290;
        double r6295292 = r6295288 + r6295291;
        double r6295293 = 60.0;
        double r6295294 = r6295290 * r6295290;
        double r6295295 = r6295293 * r6295294;
        double r6295296 = r6295292 + r6295295;
        double r6295297 = -93.333333;
        double r6295298 = r6295294 * r6295290;
        double r6295299 = r6295297 * r6295298;
        double r6295300 = r6295296 + r6295299;
        double r6295301 = 75.833333;
        double r6295302 = r6295298 * r6295290;
        double r6295303 = r6295301 * r6295302;
        double r6295304 = r6295300 + r6295303;
        double r6295305 = -36.4;
        double r6295306 = r6295302 * r6295290;
        double r6295307 = r6295305 * r6295306;
        double r6295308 = r6295304 + r6295307;
        double r6295309 = 11.122222;
        double r6295310 = r6295306 * r6295290;
        double r6295311 = r6295309 * r6295310;
        double r6295312 = r6295308 + r6295311;
        double r6295313 = -2.269841;
        double r6295314 = r6295310 * r6295290;
        double r6295315 = r6295313 * r6295314;
        double r6295316 = r6295312 + r6295315;
        double r6295317 = 0.319196;
        double r6295318 = r6295314 * r6295290;
        double r6295319 = r6295317 * r6295318;
        double r6295320 = r6295316 + r6295319;
        double r6295321 = -0.031526;
        double r6295322 = r6295318 * r6295290;
        double r6295323 = r6295321 * r6295322;
        double r6295324 = r6295320 + r6295323;
        double r6295325 = 0.002207;
        double r6295326 = r6295322 * r6295290;
        double r6295327 = r6295325 * r6295326;
        double r6295328 = r6295324 + r6295327;
        double r6295329 = -0.000109;
        double r6295330 = r6295326 * r6295290;
        double r6295331 = r6295329 * r6295330;
        double r6295332 = r6295328 + r6295331;
        double r6295333 = 4e-06;
        double r6295334 = r6295330 * r6295290;
        double r6295335 = r6295333 * r6295334;
        double r6295336 = r6295332 + r6295335;
        return r6295336;
}


double f_of(float x) {
        float r6295337 = x;
        float r6295338 = 3;
        float r6295339 = pow(r6295337, r6295338);
        float r6295340 = 75.833333;
        float r6295341 = r6295337 * r6295340;
        float r6295342 = r6295339 * r6295341;
        float r6295343 = r6295337 * r6295337;
        float r6295344 = r6295343 * r6295343;
        float r6295345 = -36.4;
        float r6295346 = r6295337 * r6295345;
        float r6295347 = r6295344 * r6295346;
        float r6295348 = r6295342 + r6295347;
        float r6295349 = -93.333333;
        float r6295350 = r6295349 * r6295337;
        float r6295351 = r6295350 * r6295343;
        float r6295352 = 1.0;
        float r6295353 = r6295351 + r6295352;
        float r6295354 = -16.0;
        float r6295355 = 60.0;
        float r6295356 = r6295337 * r6295355;
        float r6295357 = r6295354 + r6295356;
        float r6295358 = r6295337 * r6295357;
        float r6295359 = r6295353 + r6295358;
        float r6295360 = r6295348 + r6295359;
        float r6295361 = 11.122222;
        float r6295362 = r6295343 * r6295361;
        float r6295363 = r6295344 * r6295362;
        float r6295364 = r6295339 * r6295339;
        float r6295365 = 0.319196;
        float r6295366 = r6295343 * r6295365;
        float r6295367 = r6295364 * r6295366;
        float r6295368 = -2.269841;
        float r6295369 = r6295337 * r6295368;
        float r6295370 = r6295364 * r6295369;
        float r6295371 = r6295367 + r6295370;
        float r6295372 = r6295363 + r6295371;
        float r6295373 = r6295360 + r6295372;
        float r6295374 = -0.031526;
        float r6295375 = r6295374 * r6295337;
        float r6295376 = r6295344 * r6295344;
        float r6295377 = r6295375 * r6295376;
        float r6295378 = 0.002207;
        float r6295379 = r6295343 * r6295378;
        float r6295380 = r6295376 * r6295379;
        float r6295381 = r6295377 + r6295380;
        float r6295382 = r6295364 * r6295344;
        float r6295383 = 4e-06;
        float r6295384 = r6295343 * r6295383;
        float r6295385 = r6295382 * r6295384;
        float r6295386 = r6295364 * r6295339;
        float r6295387 = -0.000109;
        float r6295388 = r6295343 * r6295387;
        float r6295389 = r6295386 * r6295388;
        float r6295390 = r6295385 + r6295389;
        float r6295391 = r6295381 + r6295390;
        float r6295392 = r6295373 + r6295391;
        return r6295392;
}

double f_od(double x) {
        double r6295393 = x;
        double r6295394 = 3;
        double r6295395 = pow(r6295393, r6295394);
        double r6295396 = 75.833333;
        double r6295397 = r6295393 * r6295396;
        double r6295398 = r6295395 * r6295397;
        double r6295399 = r6295393 * r6295393;
        double r6295400 = r6295399 * r6295399;
        double r6295401 = -36.4;
        double r6295402 = r6295393 * r6295401;
        double r6295403 = r6295400 * r6295402;
        double r6295404 = r6295398 + r6295403;
        double r6295405 = -93.333333;
        double r6295406 = r6295405 * r6295393;
        double r6295407 = r6295406 * r6295399;
        double r6295408 = 1.0;
        double r6295409 = r6295407 + r6295408;
        double r6295410 = -16.0;
        double r6295411 = 60.0;
        double r6295412 = r6295393 * r6295411;
        double r6295413 = r6295410 + r6295412;
        double r6295414 = r6295393 * r6295413;
        double r6295415 = r6295409 + r6295414;
        double r6295416 = r6295404 + r6295415;
        double r6295417 = 11.122222;
        double r6295418 = r6295399 * r6295417;
        double r6295419 = r6295400 * r6295418;
        double r6295420 = r6295395 * r6295395;
        double r6295421 = 0.319196;
        double r6295422 = r6295399 * r6295421;
        double r6295423 = r6295420 * r6295422;
        double r6295424 = -2.269841;
        double r6295425 = r6295393 * r6295424;
        double r6295426 = r6295420 * r6295425;
        double r6295427 = r6295423 + r6295426;
        double r6295428 = r6295419 + r6295427;
        double r6295429 = r6295416 + r6295428;
        double r6295430 = -0.031526;
        double r6295431 = r6295430 * r6295393;
        double r6295432 = r6295400 * r6295400;
        double r6295433 = r6295431 * r6295432;
        double r6295434 = 0.002207;
        double r6295435 = r6295399 * r6295434;
        double r6295436 = r6295432 * r6295435;
        double r6295437 = r6295433 + r6295436;
        double r6295438 = r6295420 * r6295400;
        double r6295439 = 4e-06;
        double r6295440 = r6295399 * r6295439;
        double r6295441 = r6295438 * r6295440;
        double r6295442 = r6295420 * r6295395;
        double r6295443 = -0.000109;
        double r6295444 = r6295399 * r6295443;
        double r6295445 = r6295442 * r6295444;
        double r6295446 = r6295441 + r6295445;
        double r6295447 = r6295437 + r6295446;
        double r6295448 = r6295429 + r6295447;
        return r6295448;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6295449, r6295450, r6295451, r6295452, r6295453, r6295454, r6295455, r6295456, r6295457, r6295458, r6295459, r6295460, r6295461, r6295462, r6295463, r6295464, r6295465, r6295466, r6295467, r6295468, r6295469, r6295470, r6295471, r6295472, r6295473, r6295474, r6295475, r6295476, r6295477, r6295478, r6295479, r6295480, r6295481, r6295482, r6295483, r6295484, r6295485, r6295486, r6295487, r6295488, r6295489, r6295490, r6295491, r6295492, r6295493, r6295494, r6295495, r6295496, r6295497;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6295449, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6295450, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r6295451);
        mpfr_init(r6295452);
        mpfr_init(r6295453);
        mpfr_init_set_str(r6295454, "60.0", 10, MPFR_RNDN);
        mpfr_init(r6295455);
        mpfr_init(r6295456);
        mpfr_init(r6295457);
        mpfr_init_set_str(r6295458, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r6295459);
        mpfr_init(r6295460);
        mpfr_init(r6295461);
        mpfr_init_set_str(r6295462, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r6295463);
        mpfr_init(r6295464);
        mpfr_init(r6295465);
        mpfr_init_set_str(r6295466, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r6295467);
        mpfr_init(r6295468);
        mpfr_init(r6295469);
        mpfr_init_set_str(r6295470, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r6295471);
        mpfr_init(r6295472);
        mpfr_init(r6295473);
        mpfr_init_set_str(r6295474, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r6295475);
        mpfr_init(r6295476);
        mpfr_init(r6295477);
        mpfr_init_set_str(r6295478, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r6295479);
        mpfr_init(r6295480);
        mpfr_init(r6295481);
        mpfr_init_set_str(r6295482, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r6295483);
        mpfr_init(r6295484);
        mpfr_init(r6295485);
        mpfr_init_set_str(r6295486, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r6295487);
        mpfr_init(r6295488);
        mpfr_init(r6295489);
        mpfr_init_set_str(r6295490, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r6295491);
        mpfr_init(r6295492);
        mpfr_init(r6295493);
        mpfr_init_set_str(r6295494, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r6295495);
        mpfr_init(r6295496);
        mpfr_init(r6295497);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6295451, x, MPFR_RNDN);
        mpfr_mul(r6295452, r6295450, r6295451, MPFR_RNDN);
        mpfr_add(r6295453, r6295449, r6295452, MPFR_RNDN);
        ;
        mpfr_mul(r6295455, r6295451, r6295451, MPFR_RNDN);
        mpfr_mul(r6295456, r6295454, r6295455, MPFR_RNDN);
        mpfr_add(r6295457, r6295453, r6295456, MPFR_RNDN);
        ;
        mpfr_mul(r6295459, r6295455, r6295451, MPFR_RNDN);
        mpfr_mul(r6295460, r6295458, r6295459, MPFR_RNDN);
        mpfr_add(r6295461, r6295457, r6295460, MPFR_RNDN);
        ;
        mpfr_mul(r6295463, r6295459, r6295451, MPFR_RNDN);
        mpfr_mul(r6295464, r6295462, r6295463, MPFR_RNDN);
        mpfr_add(r6295465, r6295461, r6295464, MPFR_RNDN);
        ;
        mpfr_mul(r6295467, r6295463, r6295451, MPFR_RNDN);
        mpfr_mul(r6295468, r6295466, r6295467, MPFR_RNDN);
        mpfr_add(r6295469, r6295465, r6295468, MPFR_RNDN);
        ;
        mpfr_mul(r6295471, r6295467, r6295451, MPFR_RNDN);
        mpfr_mul(r6295472, r6295470, r6295471, MPFR_RNDN);
        mpfr_add(r6295473, r6295469, r6295472, MPFR_RNDN);
        ;
        mpfr_mul(r6295475, r6295471, r6295451, MPFR_RNDN);
        mpfr_mul(r6295476, r6295474, r6295475, MPFR_RNDN);
        mpfr_add(r6295477, r6295473, r6295476, MPFR_RNDN);
        ;
        mpfr_mul(r6295479, r6295475, r6295451, MPFR_RNDN);
        mpfr_mul(r6295480, r6295478, r6295479, MPFR_RNDN);
        mpfr_add(r6295481, r6295477, r6295480, MPFR_RNDN);
        ;
        mpfr_mul(r6295483, r6295479, r6295451, MPFR_RNDN);
        mpfr_mul(r6295484, r6295482, r6295483, MPFR_RNDN);
        mpfr_add(r6295485, r6295481, r6295484, MPFR_RNDN);
        ;
        mpfr_mul(r6295487, r6295483, r6295451, MPFR_RNDN);
        mpfr_mul(r6295488, r6295486, r6295487, MPFR_RNDN);
        mpfr_add(r6295489, r6295485, r6295488, MPFR_RNDN);
        ;
        mpfr_mul(r6295491, r6295487, r6295451, MPFR_RNDN);
        mpfr_mul(r6295492, r6295490, r6295491, MPFR_RNDN);
        mpfr_add(r6295493, r6295489, r6295492, MPFR_RNDN);
        ;
        mpfr_mul(r6295495, r6295491, r6295451, MPFR_RNDN);
        mpfr_mul(r6295496, r6295494, r6295495, MPFR_RNDN);
        mpfr_add(r6295497, r6295493, r6295496, MPFR_RNDN);
        return mpfr_get_d(r6295497, MPFR_RNDN);
}

static mpfr_t r6295498, r6295499, r6295500, r6295501, r6295502, r6295503, r6295504, r6295505, r6295506, r6295507, r6295508, r6295509, r6295510, r6295511, r6295512, r6295513, r6295514, r6295515, r6295516, r6295517, r6295518, r6295519, r6295520, r6295521, r6295522, r6295523, r6295524, r6295525, r6295526, r6295527, r6295528, r6295529, r6295530, r6295531, r6295532, r6295533, r6295534, r6295535, r6295536, r6295537, r6295538, r6295539, r6295540, r6295541, r6295542, r6295543, r6295544, r6295545, r6295546, r6295547, r6295548, r6295549, r6295550, r6295551, r6295552, r6295553;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6295498);
        mpfr_init_set_str(r6295499, "3", 10, MPFR_RNDN);
        mpfr_init(r6295500);
        mpfr_init_set_str(r6295501, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r6295502);
        mpfr_init(r6295503);
        mpfr_init(r6295504);
        mpfr_init(r6295505);
        mpfr_init_set_str(r6295506, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r6295507);
        mpfr_init(r6295508);
        mpfr_init(r6295509);
        mpfr_init_set_str(r6295510, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r6295511);
        mpfr_init(r6295512);
        mpfr_init_set_str(r6295513, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6295514);
        mpfr_init_set_str(r6295515, "-16.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6295516, "60.0", 10, MPFR_RNDN);
        mpfr_init(r6295517);
        mpfr_init(r6295518);
        mpfr_init(r6295519);
        mpfr_init(r6295520);
        mpfr_init(r6295521);
        mpfr_init_set_str(r6295522, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r6295523);
        mpfr_init(r6295524);
        mpfr_init(r6295525);
        mpfr_init_set_str(r6295526, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r6295527);
        mpfr_init(r6295528);
        mpfr_init_set_str(r6295529, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r6295530);
        mpfr_init(r6295531);
        mpfr_init(r6295532);
        mpfr_init(r6295533);
        mpfr_init(r6295534);
        mpfr_init_set_str(r6295535, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r6295536);
        mpfr_init(r6295537);
        mpfr_init(r6295538);
        mpfr_init_set_str(r6295539, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r6295540);
        mpfr_init(r6295541);
        mpfr_init(r6295542);
        mpfr_init(r6295543);
        mpfr_init_set_str(r6295544, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r6295545);
        mpfr_init(r6295546);
        mpfr_init(r6295547);
        mpfr_init_set_str(r6295548, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r6295549);
        mpfr_init(r6295550);
        mpfr_init(r6295551);
        mpfr_init(r6295552);
        mpfr_init(r6295553);
}

double f_fm(double x) {
        mpfr_set_d(r6295498, x, MPFR_RNDN);
        ;
        mpfr_pow(r6295500, r6295498, r6295499, MPFR_RNDN);
        ;
        mpfr_mul(r6295502, r6295498, r6295501, MPFR_RNDN);
        mpfr_mul(r6295503, r6295500, r6295502, MPFR_RNDN);
        mpfr_mul(r6295504, r6295498, r6295498, MPFR_RNDN);
        mpfr_mul(r6295505, r6295504, r6295504, MPFR_RNDN);
        ;
        mpfr_mul(r6295507, r6295498, r6295506, MPFR_RNDN);
        mpfr_mul(r6295508, r6295505, r6295507, MPFR_RNDN);
        mpfr_add(r6295509, r6295503, r6295508, MPFR_RNDN);
        ;
        mpfr_mul(r6295511, r6295510, r6295498, MPFR_RNDN);
        mpfr_mul(r6295512, r6295511, r6295504, MPFR_RNDN);
        ;
        mpfr_add(r6295514, r6295512, r6295513, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6295517, r6295498, r6295516, MPFR_RNDN);
        mpfr_add(r6295518, r6295515, r6295517, MPFR_RNDN);
        mpfr_mul(r6295519, r6295498, r6295518, MPFR_RNDN);
        mpfr_add(r6295520, r6295514, r6295519, MPFR_RNDN);
        mpfr_add(r6295521, r6295509, r6295520, MPFR_RNDN);
        ;
        mpfr_mul(r6295523, r6295504, r6295522, MPFR_RNDN);
        mpfr_mul(r6295524, r6295505, r6295523, MPFR_RNDN);
        mpfr_mul(r6295525, r6295500, r6295500, MPFR_RNDN);
        ;
        mpfr_mul(r6295527, r6295504, r6295526, MPFR_RNDN);
        mpfr_mul(r6295528, r6295525, r6295527, MPFR_RNDN);
        ;
        mpfr_mul(r6295530, r6295498, r6295529, MPFR_RNDN);
        mpfr_mul(r6295531, r6295525, r6295530, MPFR_RNDN);
        mpfr_add(r6295532, r6295528, r6295531, MPFR_RNDN);
        mpfr_add(r6295533, r6295524, r6295532, MPFR_RNDN);
        mpfr_add(r6295534, r6295521, r6295533, MPFR_RNDN);
        ;
        mpfr_mul(r6295536, r6295535, r6295498, MPFR_RNDN);
        mpfr_mul(r6295537, r6295505, r6295505, MPFR_RNDN);
        mpfr_mul(r6295538, r6295536, r6295537, MPFR_RNDN);
        ;
        mpfr_mul(r6295540, r6295504, r6295539, MPFR_RNDN);
        mpfr_mul(r6295541, r6295537, r6295540, MPFR_RNDN);
        mpfr_add(r6295542, r6295538, r6295541, MPFR_RNDN);
        mpfr_mul(r6295543, r6295525, r6295505, MPFR_RNDN);
        ;
        mpfr_mul(r6295545, r6295504, r6295544, MPFR_RNDN);
        mpfr_mul(r6295546, r6295543, r6295545, MPFR_RNDN);
        mpfr_mul(r6295547, r6295525, r6295500, MPFR_RNDN);
        ;
        mpfr_mul(r6295549, r6295504, r6295548, MPFR_RNDN);
        mpfr_mul(r6295550, r6295547, r6295549, MPFR_RNDN);
        mpfr_add(r6295551, r6295546, r6295550, MPFR_RNDN);
        mpfr_add(r6295552, r6295542, r6295551, MPFR_RNDN);
        mpfr_add(r6295553, r6295534, r6295552, MPFR_RNDN);
        return mpfr_get_d(r6295553, MPFR_RNDN);
}

static mpfr_t r6295554, r6295555, r6295556, r6295557, r6295558, r6295559, r6295560, r6295561, r6295562, r6295563, r6295564, r6295565, r6295566, r6295567, r6295568, r6295569, r6295570, r6295571, r6295572, r6295573, r6295574, r6295575, r6295576, r6295577, r6295578, r6295579, r6295580, r6295581, r6295582, r6295583, r6295584, r6295585, r6295586, r6295587, r6295588, r6295589, r6295590, r6295591, r6295592, r6295593, r6295594, r6295595, r6295596, r6295597, r6295598, r6295599, r6295600, r6295601, r6295602, r6295603, r6295604, r6295605, r6295606, r6295607, r6295608, r6295609;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6295554);
        mpfr_init_set_str(r6295555, "3", 10, MPFR_RNDN);
        mpfr_init(r6295556);
        mpfr_init_set_str(r6295557, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r6295558);
        mpfr_init(r6295559);
        mpfr_init(r6295560);
        mpfr_init(r6295561);
        mpfr_init_set_str(r6295562, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r6295563);
        mpfr_init(r6295564);
        mpfr_init(r6295565);
        mpfr_init_set_str(r6295566, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r6295567);
        mpfr_init(r6295568);
        mpfr_init_set_str(r6295569, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6295570);
        mpfr_init_set_str(r6295571, "-16.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6295572, "60.0", 10, MPFR_RNDN);
        mpfr_init(r6295573);
        mpfr_init(r6295574);
        mpfr_init(r6295575);
        mpfr_init(r6295576);
        mpfr_init(r6295577);
        mpfr_init_set_str(r6295578, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r6295579);
        mpfr_init(r6295580);
        mpfr_init(r6295581);
        mpfr_init_set_str(r6295582, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r6295583);
        mpfr_init(r6295584);
        mpfr_init_set_str(r6295585, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r6295586);
        mpfr_init(r6295587);
        mpfr_init(r6295588);
        mpfr_init(r6295589);
        mpfr_init(r6295590);
        mpfr_init_set_str(r6295591, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r6295592);
        mpfr_init(r6295593);
        mpfr_init(r6295594);
        mpfr_init_set_str(r6295595, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r6295596);
        mpfr_init(r6295597);
        mpfr_init(r6295598);
        mpfr_init(r6295599);
        mpfr_init_set_str(r6295600, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r6295601);
        mpfr_init(r6295602);
        mpfr_init(r6295603);
        mpfr_init_set_str(r6295604, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r6295605);
        mpfr_init(r6295606);
        mpfr_init(r6295607);
        mpfr_init(r6295608);
        mpfr_init(r6295609);
}

double f_dm(double x) {
        mpfr_set_d(r6295554, x, MPFR_RNDN);
        ;
        mpfr_pow(r6295556, r6295554, r6295555, MPFR_RNDN);
        ;
        mpfr_mul(r6295558, r6295554, r6295557, MPFR_RNDN);
        mpfr_mul(r6295559, r6295556, r6295558, MPFR_RNDN);
        mpfr_mul(r6295560, r6295554, r6295554, MPFR_RNDN);
        mpfr_mul(r6295561, r6295560, r6295560, MPFR_RNDN);
        ;
        mpfr_mul(r6295563, r6295554, r6295562, MPFR_RNDN);
        mpfr_mul(r6295564, r6295561, r6295563, MPFR_RNDN);
        mpfr_add(r6295565, r6295559, r6295564, MPFR_RNDN);
        ;
        mpfr_mul(r6295567, r6295566, r6295554, MPFR_RNDN);
        mpfr_mul(r6295568, r6295567, r6295560, MPFR_RNDN);
        ;
        mpfr_add(r6295570, r6295568, r6295569, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6295573, r6295554, r6295572, MPFR_RNDN);
        mpfr_add(r6295574, r6295571, r6295573, MPFR_RNDN);
        mpfr_mul(r6295575, r6295554, r6295574, MPFR_RNDN);
        mpfr_add(r6295576, r6295570, r6295575, MPFR_RNDN);
        mpfr_add(r6295577, r6295565, r6295576, MPFR_RNDN);
        ;
        mpfr_mul(r6295579, r6295560, r6295578, MPFR_RNDN);
        mpfr_mul(r6295580, r6295561, r6295579, MPFR_RNDN);
        mpfr_mul(r6295581, r6295556, r6295556, MPFR_RNDN);
        ;
        mpfr_mul(r6295583, r6295560, r6295582, MPFR_RNDN);
        mpfr_mul(r6295584, r6295581, r6295583, MPFR_RNDN);
        ;
        mpfr_mul(r6295586, r6295554, r6295585, MPFR_RNDN);
        mpfr_mul(r6295587, r6295581, r6295586, MPFR_RNDN);
        mpfr_add(r6295588, r6295584, r6295587, MPFR_RNDN);
        mpfr_add(r6295589, r6295580, r6295588, MPFR_RNDN);
        mpfr_add(r6295590, r6295577, r6295589, MPFR_RNDN);
        ;
        mpfr_mul(r6295592, r6295591, r6295554, MPFR_RNDN);
        mpfr_mul(r6295593, r6295561, r6295561, MPFR_RNDN);
        mpfr_mul(r6295594, r6295592, r6295593, MPFR_RNDN);
        ;
        mpfr_mul(r6295596, r6295560, r6295595, MPFR_RNDN);
        mpfr_mul(r6295597, r6295593, r6295596, MPFR_RNDN);
        mpfr_add(r6295598, r6295594, r6295597, MPFR_RNDN);
        mpfr_mul(r6295599, r6295581, r6295561, MPFR_RNDN);
        ;
        mpfr_mul(r6295601, r6295560, r6295600, MPFR_RNDN);
        mpfr_mul(r6295602, r6295599, r6295601, MPFR_RNDN);
        mpfr_mul(r6295603, r6295581, r6295556, MPFR_RNDN);
        ;
        mpfr_mul(r6295605, r6295560, r6295604, MPFR_RNDN);
        mpfr_mul(r6295606, r6295603, r6295605, MPFR_RNDN);
        mpfr_add(r6295607, r6295602, r6295606, MPFR_RNDN);
        mpfr_add(r6295608, r6295598, r6295607, MPFR_RNDN);
        mpfr_add(r6295609, r6295590, r6295608, MPFR_RNDN);
        return mpfr_get_d(r6295609, MPFR_RNDN);
}

