#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r9885295 = 17297280.0;
        float r9885296 = x;
        float r9885297 = r9885295 * r9885296;
        float r9885298 = -69189120.0;
        float r9885299 = r9885296 * r9885296;
        float r9885300 = r9885299 * r9885296;
        float r9885301 = r9885298 * r9885300;
        float r9885302 = r9885297 + r9885301;
        float r9885303 = 69189120.0;
        float r9885304 = r9885300 * r9885296;
        float r9885305 = r9885304 * r9885296;
        float r9885306 = r9885303 * r9885305;
        float r9885307 = r9885302 + r9885306;
        float r9885308 = -26357760.0;
        float r9885309 = r9885305 * r9885296;
        float r9885310 = r9885309 * r9885296;
        float r9885311 = r9885308 * r9885310;
        float r9885312 = r9885307 + r9885311;
        float r9885313 = 4392960.0;
        float r9885314 = r9885310 * r9885296;
        float r9885315 = r9885314 * r9885296;
        float r9885316 = r9885313 * r9885315;
        float r9885317 = r9885312 + r9885316;
        float r9885318 = -319488.0;
        float r9885319 = r9885315 * r9885296;
        float r9885320 = r9885319 * r9885296;
        float r9885321 = r9885318 * r9885320;
        float r9885322 = r9885317 + r9885321;
        float r9885323 = 8192.0;
        float r9885324 = r9885320 * r9885296;
        float r9885325 = r9885324 * r9885296;
        float r9885326 = r9885323 * r9885325;
        float r9885327 = r9885322 + r9885326;
        return r9885327;
}

double f_id(double x) {
        double r9885328 = 17297280.0;
        double r9885329 = x;
        double r9885330 = r9885328 * r9885329;
        double r9885331 = -69189120.0;
        double r9885332 = r9885329 * r9885329;
        double r9885333 = r9885332 * r9885329;
        double r9885334 = r9885331 * r9885333;
        double r9885335 = r9885330 + r9885334;
        double r9885336 = 69189120.0;
        double r9885337 = r9885333 * r9885329;
        double r9885338 = r9885337 * r9885329;
        double r9885339 = r9885336 * r9885338;
        double r9885340 = r9885335 + r9885339;
        double r9885341 = -26357760.0;
        double r9885342 = r9885338 * r9885329;
        double r9885343 = r9885342 * r9885329;
        double r9885344 = r9885341 * r9885343;
        double r9885345 = r9885340 + r9885344;
        double r9885346 = 4392960.0;
        double r9885347 = r9885343 * r9885329;
        double r9885348 = r9885347 * r9885329;
        double r9885349 = r9885346 * r9885348;
        double r9885350 = r9885345 + r9885349;
        double r9885351 = -319488.0;
        double r9885352 = r9885348 * r9885329;
        double r9885353 = r9885352 * r9885329;
        double r9885354 = r9885351 * r9885353;
        double r9885355 = r9885350 + r9885354;
        double r9885356 = 8192.0;
        double r9885357 = r9885353 * r9885329;
        double r9885358 = r9885357 * r9885329;
        double r9885359 = r9885356 * r9885358;
        double r9885360 = r9885355 + r9885359;
        return r9885360;
}


double f_of(float x) {
        float r9885361 = x;
        float r9885362 = r9885361 * r9885361;
        float r9885363 = 3;
        float r9885364 = pow(r9885361, r9885363);
        float r9885365 = r9885364 * r9885364;
        float r9885366 = r9885364 * r9885365;
        float r9885367 = r9885362 * r9885366;
        float r9885368 = 8192.0;
        float r9885369 = r9885362 * r9885368;
        float r9885370 = -319488.0;
        float r9885371 = r9885369 + r9885370;
        float r9885372 = r9885367 * r9885371;
        float r9885373 = 69189120.0;
        float r9885374 = r9885361 * r9885373;
        float r9885375 = r9885374 * r9885362;
        float r9885376 = r9885362 * r9885375;
        float r9885377 = 17297280.0;
        float r9885378 = r9885377 * r9885361;
        float r9885379 = -69189120.0;
        float r9885380 = r9885379 * r9885361;
        float r9885381 = r9885362 * r9885380;
        float r9885382 = r9885378 + r9885381;
        float r9885383 = r9885376 + r9885382;
        float r9885384 = r9885365 * r9885361;
        float r9885385 = -26357760.0;
        float r9885386 = 4392960.0;
        float r9885387 = r9885386 * r9885361;
        float r9885388 = r9885361 * r9885387;
        float r9885389 = r9885385 + r9885388;
        float r9885390 = r9885384 * r9885389;
        float r9885391 = r9885383 + r9885390;
        float r9885392 = r9885372 + r9885391;
        return r9885392;
}

double f_od(double x) {
        double r9885393 = x;
        double r9885394 = r9885393 * r9885393;
        double r9885395 = 3;
        double r9885396 = pow(r9885393, r9885395);
        double r9885397 = r9885396 * r9885396;
        double r9885398 = r9885396 * r9885397;
        double r9885399 = r9885394 * r9885398;
        double r9885400 = 8192.0;
        double r9885401 = r9885394 * r9885400;
        double r9885402 = -319488.0;
        double r9885403 = r9885401 + r9885402;
        double r9885404 = r9885399 * r9885403;
        double r9885405 = 69189120.0;
        double r9885406 = r9885393 * r9885405;
        double r9885407 = r9885406 * r9885394;
        double r9885408 = r9885394 * r9885407;
        double r9885409 = 17297280.0;
        double r9885410 = r9885409 * r9885393;
        double r9885411 = -69189120.0;
        double r9885412 = r9885411 * r9885393;
        double r9885413 = r9885394 * r9885412;
        double r9885414 = r9885410 + r9885413;
        double r9885415 = r9885408 + r9885414;
        double r9885416 = r9885397 * r9885393;
        double r9885417 = -26357760.0;
        double r9885418 = 4392960.0;
        double r9885419 = r9885418 * r9885393;
        double r9885420 = r9885393 * r9885419;
        double r9885421 = r9885417 + r9885420;
        double r9885422 = r9885416 * r9885421;
        double r9885423 = r9885415 + r9885422;
        double r9885424 = r9885404 + r9885423;
        return r9885424;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9885425, r9885426, r9885427, r9885428, r9885429, r9885430, r9885431, r9885432, r9885433, r9885434, r9885435, r9885436, r9885437, r9885438, r9885439, r9885440, r9885441, r9885442, r9885443, r9885444, r9885445, r9885446, r9885447, r9885448, r9885449, r9885450, r9885451, r9885452, r9885453, r9885454, r9885455, r9885456, r9885457;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9885425, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9885426);
        mpfr_init(r9885427);
        mpfr_init_set_str(r9885428, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9885429);
        mpfr_init(r9885430);
        mpfr_init(r9885431);
        mpfr_init(r9885432);
        mpfr_init_set_str(r9885433, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9885434);
        mpfr_init(r9885435);
        mpfr_init(r9885436);
        mpfr_init(r9885437);
        mpfr_init_set_str(r9885438, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r9885439);
        mpfr_init(r9885440);
        mpfr_init(r9885441);
        mpfr_init(r9885442);
        mpfr_init_set_str(r9885443, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9885444);
        mpfr_init(r9885445);
        mpfr_init(r9885446);
        mpfr_init(r9885447);
        mpfr_init_set_str(r9885448, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9885449);
        mpfr_init(r9885450);
        mpfr_init(r9885451);
        mpfr_init(r9885452);
        mpfr_init_set_str(r9885453, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9885454);
        mpfr_init(r9885455);
        mpfr_init(r9885456);
        mpfr_init(r9885457);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9885426, x, MPFR_RNDN);
        mpfr_mul(r9885427, r9885425, r9885426, MPFR_RNDN);
        ;
        mpfr_mul(r9885429, r9885426, r9885426, MPFR_RNDN);
        mpfr_mul(r9885430, r9885429, r9885426, MPFR_RNDN);
        mpfr_mul(r9885431, r9885428, r9885430, MPFR_RNDN);
        mpfr_add(r9885432, r9885427, r9885431, MPFR_RNDN);
        ;
        mpfr_mul(r9885434, r9885430, r9885426, MPFR_RNDN);
        mpfr_mul(r9885435, r9885434, r9885426, MPFR_RNDN);
        mpfr_mul(r9885436, r9885433, r9885435, MPFR_RNDN);
        mpfr_add(r9885437, r9885432, r9885436, MPFR_RNDN);
        ;
        mpfr_mul(r9885439, r9885435, r9885426, MPFR_RNDN);
        mpfr_mul(r9885440, r9885439, r9885426, MPFR_RNDN);
        mpfr_mul(r9885441, r9885438, r9885440, MPFR_RNDN);
        mpfr_add(r9885442, r9885437, r9885441, MPFR_RNDN);
        ;
        mpfr_mul(r9885444, r9885440, r9885426, MPFR_RNDN);
        mpfr_mul(r9885445, r9885444, r9885426, MPFR_RNDN);
        mpfr_mul(r9885446, r9885443, r9885445, MPFR_RNDN);
        mpfr_add(r9885447, r9885442, r9885446, MPFR_RNDN);
        ;
        mpfr_mul(r9885449, r9885445, r9885426, MPFR_RNDN);
        mpfr_mul(r9885450, r9885449, r9885426, MPFR_RNDN);
        mpfr_mul(r9885451, r9885448, r9885450, MPFR_RNDN);
        mpfr_add(r9885452, r9885447, r9885451, MPFR_RNDN);
        ;
        mpfr_mul(r9885454, r9885450, r9885426, MPFR_RNDN);
        mpfr_mul(r9885455, r9885454, r9885426, MPFR_RNDN);
        mpfr_mul(r9885456, r9885453, r9885455, MPFR_RNDN);
        mpfr_add(r9885457, r9885452, r9885456, MPFR_RNDN);
        return mpfr_get_d(r9885457, MPFR_RNDN);
}

static mpfr_t r9885458, r9885459, r9885460, r9885461, r9885462, r9885463, r9885464, r9885465, r9885466, r9885467, r9885468, r9885469, r9885470, r9885471, r9885472, r9885473, r9885474, r9885475, r9885476, r9885477, r9885478, r9885479, r9885480, r9885481, r9885482, r9885483, r9885484, r9885485, r9885486, r9885487, r9885488, r9885489;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9885458);
        mpfr_init(r9885459);
        mpfr_init_set_str(r9885460, "3", 10, MPFR_RNDN);
        mpfr_init(r9885461);
        mpfr_init(r9885462);
        mpfr_init(r9885463);
        mpfr_init(r9885464);
        mpfr_init_set_str(r9885465, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9885466);
        mpfr_init_set_str(r9885467, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9885468);
        mpfr_init(r9885469);
        mpfr_init_set_str(r9885470, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9885471);
        mpfr_init(r9885472);
        mpfr_init(r9885473);
        mpfr_init_set_str(r9885474, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9885475);
        mpfr_init_set_str(r9885476, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9885477);
        mpfr_init(r9885478);
        mpfr_init(r9885479);
        mpfr_init(r9885480);
        mpfr_init(r9885481);
        mpfr_init_set_str(r9885482, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9885483, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9885484);
        mpfr_init(r9885485);
        mpfr_init(r9885486);
        mpfr_init(r9885487);
        mpfr_init(r9885488);
        mpfr_init(r9885489);
}

double f_fm(double x) {
        mpfr_set_d(r9885458, x, MPFR_RNDN);
        mpfr_mul(r9885459, r9885458, r9885458, MPFR_RNDN);
        ;
        mpfr_pow(r9885461, r9885458, r9885460, MPFR_RNDN);
        mpfr_mul(r9885462, r9885461, r9885461, MPFR_RNDN);
        mpfr_mul(r9885463, r9885461, r9885462, MPFR_RNDN);
        mpfr_mul(r9885464, r9885459, r9885463, MPFR_RNDN);
        ;
        mpfr_mul(r9885466, r9885459, r9885465, MPFR_RNDN);
        ;
        mpfr_add(r9885468, r9885466, r9885467, MPFR_RNDN);
        mpfr_mul(r9885469, r9885464, r9885468, MPFR_RNDN);
        ;
        mpfr_mul(r9885471, r9885458, r9885470, MPFR_RNDN);
        mpfr_mul(r9885472, r9885471, r9885459, MPFR_RNDN);
        mpfr_mul(r9885473, r9885459, r9885472, MPFR_RNDN);
        ;
        mpfr_mul(r9885475, r9885474, r9885458, MPFR_RNDN);
        ;
        mpfr_mul(r9885477, r9885476, r9885458, MPFR_RNDN);
        mpfr_mul(r9885478, r9885459, r9885477, MPFR_RNDN);
        mpfr_add(r9885479, r9885475, r9885478, MPFR_RNDN);
        mpfr_add(r9885480, r9885473, r9885479, MPFR_RNDN);
        mpfr_mul(r9885481, r9885462, r9885458, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9885484, r9885483, r9885458, MPFR_RNDN);
        mpfr_mul(r9885485, r9885458, r9885484, MPFR_RNDN);
        mpfr_add(r9885486, r9885482, r9885485, MPFR_RNDN);
        mpfr_mul(r9885487, r9885481, r9885486, MPFR_RNDN);
        mpfr_add(r9885488, r9885480, r9885487, MPFR_RNDN);
        mpfr_add(r9885489, r9885469, r9885488, MPFR_RNDN);
        return mpfr_get_d(r9885489, MPFR_RNDN);
}

static mpfr_t r9885490, r9885491, r9885492, r9885493, r9885494, r9885495, r9885496, r9885497, r9885498, r9885499, r9885500, r9885501, r9885502, r9885503, r9885504, r9885505, r9885506, r9885507, r9885508, r9885509, r9885510, r9885511, r9885512, r9885513, r9885514, r9885515, r9885516, r9885517, r9885518, r9885519, r9885520, r9885521;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9885490);
        mpfr_init(r9885491);
        mpfr_init_set_str(r9885492, "3", 10, MPFR_RNDN);
        mpfr_init(r9885493);
        mpfr_init(r9885494);
        mpfr_init(r9885495);
        mpfr_init(r9885496);
        mpfr_init_set_str(r9885497, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9885498);
        mpfr_init_set_str(r9885499, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9885500);
        mpfr_init(r9885501);
        mpfr_init_set_str(r9885502, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9885503);
        mpfr_init(r9885504);
        mpfr_init(r9885505);
        mpfr_init_set_str(r9885506, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9885507);
        mpfr_init_set_str(r9885508, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9885509);
        mpfr_init(r9885510);
        mpfr_init(r9885511);
        mpfr_init(r9885512);
        mpfr_init(r9885513);
        mpfr_init_set_str(r9885514, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9885515, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9885516);
        mpfr_init(r9885517);
        mpfr_init(r9885518);
        mpfr_init(r9885519);
        mpfr_init(r9885520);
        mpfr_init(r9885521);
}

double f_dm(double x) {
        mpfr_set_d(r9885490, x, MPFR_RNDN);
        mpfr_mul(r9885491, r9885490, r9885490, MPFR_RNDN);
        ;
        mpfr_pow(r9885493, r9885490, r9885492, MPFR_RNDN);
        mpfr_mul(r9885494, r9885493, r9885493, MPFR_RNDN);
        mpfr_mul(r9885495, r9885493, r9885494, MPFR_RNDN);
        mpfr_mul(r9885496, r9885491, r9885495, MPFR_RNDN);
        ;
        mpfr_mul(r9885498, r9885491, r9885497, MPFR_RNDN);
        ;
        mpfr_add(r9885500, r9885498, r9885499, MPFR_RNDN);
        mpfr_mul(r9885501, r9885496, r9885500, MPFR_RNDN);
        ;
        mpfr_mul(r9885503, r9885490, r9885502, MPFR_RNDN);
        mpfr_mul(r9885504, r9885503, r9885491, MPFR_RNDN);
        mpfr_mul(r9885505, r9885491, r9885504, MPFR_RNDN);
        ;
        mpfr_mul(r9885507, r9885506, r9885490, MPFR_RNDN);
        ;
        mpfr_mul(r9885509, r9885508, r9885490, MPFR_RNDN);
        mpfr_mul(r9885510, r9885491, r9885509, MPFR_RNDN);
        mpfr_add(r9885511, r9885507, r9885510, MPFR_RNDN);
        mpfr_add(r9885512, r9885505, r9885511, MPFR_RNDN);
        mpfr_mul(r9885513, r9885494, r9885490, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9885516, r9885515, r9885490, MPFR_RNDN);
        mpfr_mul(r9885517, r9885490, r9885516, MPFR_RNDN);
        mpfr_add(r9885518, r9885514, r9885517, MPFR_RNDN);
        mpfr_mul(r9885519, r9885513, r9885518, MPFR_RNDN);
        mpfr_add(r9885520, r9885512, r9885519, MPFR_RNDN);
        mpfr_add(r9885521, r9885501, r9885520, MPFR_RNDN);
        return mpfr_get_d(r9885521, MPFR_RNDN);
}

