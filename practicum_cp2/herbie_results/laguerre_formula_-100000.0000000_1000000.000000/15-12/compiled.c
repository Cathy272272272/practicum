#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r10219251 = 1.0;
        float r10219252 = -12.0;
        float r10219253 = x;
        float r10219254 = r10219252 * r10219253;
        float r10219255 = r10219251 + r10219254;
        float r10219256 = 33.0;
        float r10219257 = r10219253 * r10219253;
        float r10219258 = r10219256 * r10219257;
        float r10219259 = r10219255 + r10219258;
        float r10219260 = -36.666667;
        float r10219261 = r10219257 * r10219253;
        float r10219262 = r10219260 * r10219261;
        float r10219263 = r10219259 + r10219262;
        float r10219264 = 20.625;
        float r10219265 = r10219261 * r10219253;
        float r10219266 = r10219264 * r10219265;
        float r10219267 = r10219263 + r10219266;
        float r10219268 = -6.6;
        float r10219269 = r10219265 * r10219253;
        float r10219270 = r10219268 * r10219269;
        float r10219271 = r10219267 + r10219270;
        float r10219272 = 1.283333;
        float r10219273 = r10219269 * r10219253;
        float r10219274 = r10219272 * r10219273;
        float r10219275 = r10219271 + r10219274;
        float r10219276 = -0.157143;
        float r10219277 = r10219273 * r10219253;
        float r10219278 = r10219276 * r10219277;
        float r10219279 = r10219275 + r10219278;
        float r10219280 = 0.012277;
        float r10219281 = r10219277 * r10219253;
        float r10219282 = r10219280 * r10219281;
        float r10219283 = r10219279 + r10219282;
        float r10219284 = -0.000606;
        float r10219285 = r10219281 * r10219253;
        float r10219286 = r10219284 * r10219285;
        float r10219287 = r10219283 + r10219286;
        float r10219288 = 1.8e-05;
        float r10219289 = r10219285 * r10219253;
        float r10219290 = r10219288 * r10219289;
        float r10219291 = r10219287 + r10219290;
        return r10219291;
}

double f_id(double x) {
        double r10219292 = 1.0;
        double r10219293 = -12.0;
        double r10219294 = x;
        double r10219295 = r10219293 * r10219294;
        double r10219296 = r10219292 + r10219295;
        double r10219297 = 33.0;
        double r10219298 = r10219294 * r10219294;
        double r10219299 = r10219297 * r10219298;
        double r10219300 = r10219296 + r10219299;
        double r10219301 = -36.666667;
        double r10219302 = r10219298 * r10219294;
        double r10219303 = r10219301 * r10219302;
        double r10219304 = r10219300 + r10219303;
        double r10219305 = 20.625;
        double r10219306 = r10219302 * r10219294;
        double r10219307 = r10219305 * r10219306;
        double r10219308 = r10219304 + r10219307;
        double r10219309 = -6.6;
        double r10219310 = r10219306 * r10219294;
        double r10219311 = r10219309 * r10219310;
        double r10219312 = r10219308 + r10219311;
        double r10219313 = 1.283333;
        double r10219314 = r10219310 * r10219294;
        double r10219315 = r10219313 * r10219314;
        double r10219316 = r10219312 + r10219315;
        double r10219317 = -0.157143;
        double r10219318 = r10219314 * r10219294;
        double r10219319 = r10219317 * r10219318;
        double r10219320 = r10219316 + r10219319;
        double r10219321 = 0.012277;
        double r10219322 = r10219318 * r10219294;
        double r10219323 = r10219321 * r10219322;
        double r10219324 = r10219320 + r10219323;
        double r10219325 = -0.000606;
        double r10219326 = r10219322 * r10219294;
        double r10219327 = r10219325 * r10219326;
        double r10219328 = r10219324 + r10219327;
        double r10219329 = 1.8e-05;
        double r10219330 = r10219326 * r10219294;
        double r10219331 = r10219329 * r10219330;
        double r10219332 = r10219328 + r10219331;
        return r10219332;
}


double f_of(float x) {
        float r10219333 = x;
        float r10219334 = -12.0;
        float r10219335 = r10219333 * r10219334;
        float r10219336 = 1.0;
        float r10219337 = r10219335 + r10219336;
        float r10219338 = r10219333 * r10219333;
        float r10219339 = r10219338 * r10219338;
        float r10219340 = -0.157143;
        float r10219341 = r10219333 * r10219340;
        float r10219342 = r10219341 * r10219338;
        float r10219343 = r10219339 * r10219342;
        float r10219344 = r10219337 + r10219343;
        float r10219345 = -6.6;
        float r10219346 = r10219333 * r10219345;
        float r10219347 = 20.625;
        float r10219348 = r10219346 + r10219347;
        float r10219349 = 1.283333;
        float r10219350 = r10219338 * r10219349;
        float r10219351 = r10219348 + r10219350;
        float r10219352 = r10219339 * r10219351;
        float r10219353 = r10219344 + r10219352;
        float r10219354 = 8;
        float r10219355 = pow(r10219333, r10219354);
        float r10219356 = -0.000606;
        float r10219357 = r10219333 * r10219356;
        float r10219358 = 0.012277;
        float r10219359 = r10219357 + r10219358;
        float r10219360 = r10219355 * r10219359;
        float r10219361 = 1.8e-05;
        float r10219362 = r10219361 * r10219355;
        float r10219363 = 33.0;
        float r10219364 = -36.666667;
        float r10219365 = r10219364 * r10219333;
        float r10219366 = r10219363 + r10219365;
        float r10219367 = r10219362 + r10219366;
        float r10219368 = r10219338 * r10219367;
        float r10219369 = r10219360 + r10219368;
        float r10219370 = r10219353 + r10219369;
        return r10219370;
}

double f_od(double x) {
        double r10219371 = x;
        double r10219372 = -12.0;
        double r10219373 = r10219371 * r10219372;
        double r10219374 = 1.0;
        double r10219375 = r10219373 + r10219374;
        double r10219376 = r10219371 * r10219371;
        double r10219377 = r10219376 * r10219376;
        double r10219378 = -0.157143;
        double r10219379 = r10219371 * r10219378;
        double r10219380 = r10219379 * r10219376;
        double r10219381 = r10219377 * r10219380;
        double r10219382 = r10219375 + r10219381;
        double r10219383 = -6.6;
        double r10219384 = r10219371 * r10219383;
        double r10219385 = 20.625;
        double r10219386 = r10219384 + r10219385;
        double r10219387 = 1.283333;
        double r10219388 = r10219376 * r10219387;
        double r10219389 = r10219386 + r10219388;
        double r10219390 = r10219377 * r10219389;
        double r10219391 = r10219382 + r10219390;
        double r10219392 = 8;
        double r10219393 = pow(r10219371, r10219392);
        double r10219394 = -0.000606;
        double r10219395 = r10219371 * r10219394;
        double r10219396 = 0.012277;
        double r10219397 = r10219395 + r10219396;
        double r10219398 = r10219393 * r10219397;
        double r10219399 = 1.8e-05;
        double r10219400 = r10219399 * r10219393;
        double r10219401 = 33.0;
        double r10219402 = -36.666667;
        double r10219403 = r10219402 * r10219371;
        double r10219404 = r10219401 + r10219403;
        double r10219405 = r10219400 + r10219404;
        double r10219406 = r10219376 * r10219405;
        double r10219407 = r10219398 + r10219406;
        double r10219408 = r10219391 + r10219407;
        return r10219408;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10219409, r10219410, r10219411, r10219412, r10219413, r10219414, r10219415, r10219416, r10219417, r10219418, r10219419, r10219420, r10219421, r10219422, r10219423, r10219424, r10219425, r10219426, r10219427, r10219428, r10219429, r10219430, r10219431, r10219432, r10219433, r10219434, r10219435, r10219436, r10219437, r10219438, r10219439, r10219440, r10219441, r10219442, r10219443, r10219444, r10219445, r10219446, r10219447, r10219448, r10219449;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10219409, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10219410, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r10219411);
        mpfr_init(r10219412);
        mpfr_init(r10219413);
        mpfr_init_set_str(r10219414, "33.0", 10, MPFR_RNDN);
        mpfr_init(r10219415);
        mpfr_init(r10219416);
        mpfr_init(r10219417);
        mpfr_init_set_str(r10219418, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r10219419);
        mpfr_init(r10219420);
        mpfr_init(r10219421);
        mpfr_init_set_str(r10219422, "20.625", 10, MPFR_RNDN);
        mpfr_init(r10219423);
        mpfr_init(r10219424);
        mpfr_init(r10219425);
        mpfr_init_set_str(r10219426, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r10219427);
        mpfr_init(r10219428);
        mpfr_init(r10219429);
        mpfr_init_set_str(r10219430, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r10219431);
        mpfr_init(r10219432);
        mpfr_init(r10219433);
        mpfr_init_set_str(r10219434, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r10219435);
        mpfr_init(r10219436);
        mpfr_init(r10219437);
        mpfr_init_set_str(r10219438, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r10219439);
        mpfr_init(r10219440);
        mpfr_init(r10219441);
        mpfr_init_set_str(r10219442, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r10219443);
        mpfr_init(r10219444);
        mpfr_init(r10219445);
        mpfr_init_set_str(r10219446, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10219447);
        mpfr_init(r10219448);
        mpfr_init(r10219449);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10219411, x, MPFR_RNDN);
        mpfr_mul(r10219412, r10219410, r10219411, MPFR_RNDN);
        mpfr_add(r10219413, r10219409, r10219412, MPFR_RNDN);
        ;
        mpfr_mul(r10219415, r10219411, r10219411, MPFR_RNDN);
        mpfr_mul(r10219416, r10219414, r10219415, MPFR_RNDN);
        mpfr_add(r10219417, r10219413, r10219416, MPFR_RNDN);
        ;
        mpfr_mul(r10219419, r10219415, r10219411, MPFR_RNDN);
        mpfr_mul(r10219420, r10219418, r10219419, MPFR_RNDN);
        mpfr_add(r10219421, r10219417, r10219420, MPFR_RNDN);
        ;
        mpfr_mul(r10219423, r10219419, r10219411, MPFR_RNDN);
        mpfr_mul(r10219424, r10219422, r10219423, MPFR_RNDN);
        mpfr_add(r10219425, r10219421, r10219424, MPFR_RNDN);
        ;
        mpfr_mul(r10219427, r10219423, r10219411, MPFR_RNDN);
        mpfr_mul(r10219428, r10219426, r10219427, MPFR_RNDN);
        mpfr_add(r10219429, r10219425, r10219428, MPFR_RNDN);
        ;
        mpfr_mul(r10219431, r10219427, r10219411, MPFR_RNDN);
        mpfr_mul(r10219432, r10219430, r10219431, MPFR_RNDN);
        mpfr_add(r10219433, r10219429, r10219432, MPFR_RNDN);
        ;
        mpfr_mul(r10219435, r10219431, r10219411, MPFR_RNDN);
        mpfr_mul(r10219436, r10219434, r10219435, MPFR_RNDN);
        mpfr_add(r10219437, r10219433, r10219436, MPFR_RNDN);
        ;
        mpfr_mul(r10219439, r10219435, r10219411, MPFR_RNDN);
        mpfr_mul(r10219440, r10219438, r10219439, MPFR_RNDN);
        mpfr_add(r10219441, r10219437, r10219440, MPFR_RNDN);
        ;
        mpfr_mul(r10219443, r10219439, r10219411, MPFR_RNDN);
        mpfr_mul(r10219444, r10219442, r10219443, MPFR_RNDN);
        mpfr_add(r10219445, r10219441, r10219444, MPFR_RNDN);
        ;
        mpfr_mul(r10219447, r10219443, r10219411, MPFR_RNDN);
        mpfr_mul(r10219448, r10219446, r10219447, MPFR_RNDN);
        mpfr_add(r10219449, r10219445, r10219448, MPFR_RNDN);
        return mpfr_get_d(r10219449, MPFR_RNDN);
}

static mpfr_t r10219450, r10219451, r10219452, r10219453, r10219454, r10219455, r10219456, r10219457, r10219458, r10219459, r10219460, r10219461, r10219462, r10219463, r10219464, r10219465, r10219466, r10219467, r10219468, r10219469, r10219470, r10219471, r10219472, r10219473, r10219474, r10219475, r10219476, r10219477, r10219478, r10219479, r10219480, r10219481, r10219482, r10219483, r10219484, r10219485, r10219486, r10219487;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10219450);
        mpfr_init_set_str(r10219451, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r10219452);
        mpfr_init_set_str(r10219453, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10219454);
        mpfr_init(r10219455);
        mpfr_init(r10219456);
        mpfr_init_set_str(r10219457, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r10219458);
        mpfr_init(r10219459);
        mpfr_init(r10219460);
        mpfr_init(r10219461);
        mpfr_init_set_str(r10219462, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r10219463);
        mpfr_init_set_str(r10219464, "20.625", 10, MPFR_RNDN);
        mpfr_init(r10219465);
        mpfr_init_set_str(r10219466, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r10219467);
        mpfr_init(r10219468);
        mpfr_init(r10219469);
        mpfr_init(r10219470);
        mpfr_init_set_str(r10219471, "8", 10, MPFR_RNDN);
        mpfr_init(r10219472);
        mpfr_init_set_str(r10219473, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r10219474);
        mpfr_init_set_str(r10219475, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r10219476);
        mpfr_init(r10219477);
        mpfr_init_set_str(r10219478, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10219479);
        mpfr_init_set_str(r10219480, "33.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10219481, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r10219482);
        mpfr_init(r10219483);
        mpfr_init(r10219484);
        mpfr_init(r10219485);
        mpfr_init(r10219486);
        mpfr_init(r10219487);
}

double f_fm(double x) {
        mpfr_set_d(r10219450, x, MPFR_RNDN);
        ;
        mpfr_mul(r10219452, r10219450, r10219451, MPFR_RNDN);
        ;
        mpfr_add(r10219454, r10219452, r10219453, MPFR_RNDN);
        mpfr_mul(r10219455, r10219450, r10219450, MPFR_RNDN);
        mpfr_mul(r10219456, r10219455, r10219455, MPFR_RNDN);
        ;
        mpfr_mul(r10219458, r10219450, r10219457, MPFR_RNDN);
        mpfr_mul(r10219459, r10219458, r10219455, MPFR_RNDN);
        mpfr_mul(r10219460, r10219456, r10219459, MPFR_RNDN);
        mpfr_add(r10219461, r10219454, r10219460, MPFR_RNDN);
        ;
        mpfr_mul(r10219463, r10219450, r10219462, MPFR_RNDN);
        ;
        mpfr_add(r10219465, r10219463, r10219464, MPFR_RNDN);
        ;
        mpfr_mul(r10219467, r10219455, r10219466, MPFR_RNDN);
        mpfr_add(r10219468, r10219465, r10219467, MPFR_RNDN);
        mpfr_mul(r10219469, r10219456, r10219468, MPFR_RNDN);
        mpfr_add(r10219470, r10219461, r10219469, MPFR_RNDN);
        ;
        mpfr_pow(r10219472, r10219450, r10219471, MPFR_RNDN);
        ;
        mpfr_mul(r10219474, r10219450, r10219473, MPFR_RNDN);
        ;
        mpfr_add(r10219476, r10219474, r10219475, MPFR_RNDN);
        mpfr_mul(r10219477, r10219472, r10219476, MPFR_RNDN);
        ;
        mpfr_mul(r10219479, r10219478, r10219472, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10219482, r10219481, r10219450, MPFR_RNDN);
        mpfr_add(r10219483, r10219480, r10219482, MPFR_RNDN);
        mpfr_add(r10219484, r10219479, r10219483, MPFR_RNDN);
        mpfr_mul(r10219485, r10219455, r10219484, MPFR_RNDN);
        mpfr_add(r10219486, r10219477, r10219485, MPFR_RNDN);
        mpfr_add(r10219487, r10219470, r10219486, MPFR_RNDN);
        return mpfr_get_d(r10219487, MPFR_RNDN);
}

static mpfr_t r10219488, r10219489, r10219490, r10219491, r10219492, r10219493, r10219494, r10219495, r10219496, r10219497, r10219498, r10219499, r10219500, r10219501, r10219502, r10219503, r10219504, r10219505, r10219506, r10219507, r10219508, r10219509, r10219510, r10219511, r10219512, r10219513, r10219514, r10219515, r10219516, r10219517, r10219518, r10219519, r10219520, r10219521, r10219522, r10219523, r10219524, r10219525;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10219488);
        mpfr_init_set_str(r10219489, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r10219490);
        mpfr_init_set_str(r10219491, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10219492);
        mpfr_init(r10219493);
        mpfr_init(r10219494);
        mpfr_init_set_str(r10219495, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r10219496);
        mpfr_init(r10219497);
        mpfr_init(r10219498);
        mpfr_init(r10219499);
        mpfr_init_set_str(r10219500, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r10219501);
        mpfr_init_set_str(r10219502, "20.625", 10, MPFR_RNDN);
        mpfr_init(r10219503);
        mpfr_init_set_str(r10219504, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r10219505);
        mpfr_init(r10219506);
        mpfr_init(r10219507);
        mpfr_init(r10219508);
        mpfr_init_set_str(r10219509, "8", 10, MPFR_RNDN);
        mpfr_init(r10219510);
        mpfr_init_set_str(r10219511, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r10219512);
        mpfr_init_set_str(r10219513, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r10219514);
        mpfr_init(r10219515);
        mpfr_init_set_str(r10219516, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10219517);
        mpfr_init_set_str(r10219518, "33.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10219519, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r10219520);
        mpfr_init(r10219521);
        mpfr_init(r10219522);
        mpfr_init(r10219523);
        mpfr_init(r10219524);
        mpfr_init(r10219525);
}

double f_dm(double x) {
        mpfr_set_d(r10219488, x, MPFR_RNDN);
        ;
        mpfr_mul(r10219490, r10219488, r10219489, MPFR_RNDN);
        ;
        mpfr_add(r10219492, r10219490, r10219491, MPFR_RNDN);
        mpfr_mul(r10219493, r10219488, r10219488, MPFR_RNDN);
        mpfr_mul(r10219494, r10219493, r10219493, MPFR_RNDN);
        ;
        mpfr_mul(r10219496, r10219488, r10219495, MPFR_RNDN);
        mpfr_mul(r10219497, r10219496, r10219493, MPFR_RNDN);
        mpfr_mul(r10219498, r10219494, r10219497, MPFR_RNDN);
        mpfr_add(r10219499, r10219492, r10219498, MPFR_RNDN);
        ;
        mpfr_mul(r10219501, r10219488, r10219500, MPFR_RNDN);
        ;
        mpfr_add(r10219503, r10219501, r10219502, MPFR_RNDN);
        ;
        mpfr_mul(r10219505, r10219493, r10219504, MPFR_RNDN);
        mpfr_add(r10219506, r10219503, r10219505, MPFR_RNDN);
        mpfr_mul(r10219507, r10219494, r10219506, MPFR_RNDN);
        mpfr_add(r10219508, r10219499, r10219507, MPFR_RNDN);
        ;
        mpfr_pow(r10219510, r10219488, r10219509, MPFR_RNDN);
        ;
        mpfr_mul(r10219512, r10219488, r10219511, MPFR_RNDN);
        ;
        mpfr_add(r10219514, r10219512, r10219513, MPFR_RNDN);
        mpfr_mul(r10219515, r10219510, r10219514, MPFR_RNDN);
        ;
        mpfr_mul(r10219517, r10219516, r10219510, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10219520, r10219519, r10219488, MPFR_RNDN);
        mpfr_add(r10219521, r10219518, r10219520, MPFR_RNDN);
        mpfr_add(r10219522, r10219517, r10219521, MPFR_RNDN);
        mpfr_mul(r10219523, r10219493, r10219522, MPFR_RNDN);
        mpfr_add(r10219524, r10219515, r10219523, MPFR_RNDN);
        mpfr_add(r10219525, r10219508, r10219524, MPFR_RNDN);
        return mpfr_get_d(r10219525, MPFR_RNDN);
}

