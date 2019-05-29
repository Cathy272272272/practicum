#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r6178245 = -0.209473;
        float r6178246 = 21.994629;
        float r6178247 = x;
        float r6178248 = r6178247 * r6178247;
        float r6178249 = r6178246 * r6178248;
        float r6178250 = r6178245 + r6178249;
        float r6178251 = -373.908691;
        float r6178252 = r6178248 * r6178247;
        float r6178253 = r6178252 * r6178247;
        float r6178254 = r6178251 * r6178253;
        float r6178255 = r6178250 + r6178254;
        float r6178256 = 2368.088379;
        float r6178257 = r6178253 * r6178247;
        float r6178258 = r6178257 * r6178247;
        float r6178259 = r6178256 * r6178258;
        float r6178260 = r6178255 + r6178259;
        float r6178261 = -7104.265137;
        float r6178262 = r6178258 * r6178247;
        float r6178263 = r6178262 * r6178247;
        float r6178264 = r6178261 * r6178263;
        float r6178265 = r6178260 + r6178264;
        float r6178266 = 10893.206543;
        float r6178267 = r6178263 * r6178247;
        float r6178268 = r6178267 * r6178247;
        float r6178269 = r6178266 * r6178268;
        float r6178270 = r6178265 + r6178269;
        float r6178271 = -8252.429199;
        float r6178272 = r6178268 * r6178247;
        float r6178273 = r6178272 * r6178247;
        float r6178274 = r6178271 * r6178273;
        float r6178275 = r6178270 + r6178274;
        float r6178276 = 2448.522949;
        float r6178277 = r6178273 * r6178247;
        float r6178278 = r6178277 * r6178247;
        float r6178279 = r6178276 * r6178278;
        float r6178280 = r6178275 + r6178279;
        return r6178280;
}

double f_id(double x) {
        double r6178281 = -0.209473;
        double r6178282 = 21.994629;
        double r6178283 = x;
        double r6178284 = r6178283 * r6178283;
        double r6178285 = r6178282 * r6178284;
        double r6178286 = r6178281 + r6178285;
        double r6178287 = -373.908691;
        double r6178288 = r6178284 * r6178283;
        double r6178289 = r6178288 * r6178283;
        double r6178290 = r6178287 * r6178289;
        double r6178291 = r6178286 + r6178290;
        double r6178292 = 2368.088379;
        double r6178293 = r6178289 * r6178283;
        double r6178294 = r6178293 * r6178283;
        double r6178295 = r6178292 * r6178294;
        double r6178296 = r6178291 + r6178295;
        double r6178297 = -7104.265137;
        double r6178298 = r6178294 * r6178283;
        double r6178299 = r6178298 * r6178283;
        double r6178300 = r6178297 * r6178299;
        double r6178301 = r6178296 + r6178300;
        double r6178302 = 10893.206543;
        double r6178303 = r6178299 * r6178283;
        double r6178304 = r6178303 * r6178283;
        double r6178305 = r6178302 * r6178304;
        double r6178306 = r6178301 + r6178305;
        double r6178307 = -8252.429199;
        double r6178308 = r6178304 * r6178283;
        double r6178309 = r6178308 * r6178283;
        double r6178310 = r6178307 * r6178309;
        double r6178311 = r6178306 + r6178310;
        double r6178312 = 2448.522949;
        double r6178313 = r6178309 * r6178283;
        double r6178314 = r6178313 * r6178283;
        double r6178315 = r6178312 * r6178314;
        double r6178316 = r6178311 + r6178315;
        return r6178316;
}


double f_of(float x) {
        float r6178317 = -0.209473;
        float r6178318 = 21.994629;
        float r6178319 = x;
        float r6178320 = r6178319 * r6178319;
        float r6178321 = r6178318 * r6178320;
        float r6178322 = r6178317 + r6178321;
        float r6178323 = -373.908691;
        float r6178324 = r6178320 * r6178319;
        float r6178325 = r6178324 * r6178319;
        float r6178326 = r6178323 * r6178325;
        float r6178327 = r6178322 + r6178326;
        float r6178328 = 2368.088379;
        float r6178329 = r6178325 * r6178319;
        float r6178330 = r6178329 * r6178319;
        float r6178331 = r6178328 * r6178330;
        float r6178332 = r6178327 + r6178331;
        float r6178333 = -7104.265137;
        float r6178334 = r6178330 * r6178319;
        float r6178335 = r6178334 * r6178319;
        float r6178336 = r6178333 * r6178335;
        float r6178337 = r6178332 + r6178336;
        float r6178338 = 10893.206543;
        float r6178339 = r6178335 * r6178319;
        float r6178340 = r6178339 * r6178319;
        float r6178341 = r6178338 * r6178340;
        float r6178342 = r6178337 + r6178341;
        float r6178343 = -8252.429199;
        float r6178344 = r6178340 * r6178319;
        float r6178345 = r6178344 * r6178319;
        float r6178346 = r6178343 * r6178345;
        float r6178347 = r6178342 + r6178346;
        float r6178348 = 2448.522949;
        float r6178349 = r6178345 * r6178319;
        float r6178350 = r6178349 * r6178319;
        float r6178351 = r6178348 * r6178350;
        float r6178352 = r6178347 + r6178351;
        return r6178352;
}

double f_od(double x) {
        double r6178353 = -0.209473;
        double r6178354 = 21.994629;
        double r6178355 = x;
        double r6178356 = r6178355 * r6178355;
        double r6178357 = r6178354 * r6178356;
        double r6178358 = r6178353 + r6178357;
        double r6178359 = -373.908691;
        double r6178360 = r6178356 * r6178355;
        double r6178361 = r6178360 * r6178355;
        double r6178362 = r6178359 * r6178361;
        double r6178363 = r6178358 + r6178362;
        double r6178364 = 2368.088379;
        double r6178365 = r6178361 * r6178355;
        double r6178366 = r6178365 * r6178355;
        double r6178367 = r6178364 * r6178366;
        double r6178368 = r6178363 + r6178367;
        double r6178369 = -7104.265137;
        double r6178370 = r6178366 * r6178355;
        double r6178371 = r6178370 * r6178355;
        double r6178372 = r6178369 * r6178371;
        double r6178373 = r6178368 + r6178372;
        double r6178374 = 10893.206543;
        double r6178375 = r6178371 * r6178355;
        double r6178376 = r6178375 * r6178355;
        double r6178377 = r6178374 * r6178376;
        double r6178378 = r6178373 + r6178377;
        double r6178379 = -8252.429199;
        double r6178380 = r6178376 * r6178355;
        double r6178381 = r6178380 * r6178355;
        double r6178382 = r6178379 * r6178381;
        double r6178383 = r6178378 + r6178382;
        double r6178384 = 2448.522949;
        double r6178385 = r6178381 * r6178355;
        double r6178386 = r6178385 * r6178355;
        double r6178387 = r6178384 * r6178386;
        double r6178388 = r6178383 + r6178387;
        return r6178388;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6178389, r6178390, r6178391, r6178392, r6178393, r6178394, r6178395, r6178396, r6178397, r6178398, r6178399, r6178400, r6178401, r6178402, r6178403, r6178404, r6178405, r6178406, r6178407, r6178408, r6178409, r6178410, r6178411, r6178412, r6178413, r6178414, r6178415, r6178416, r6178417, r6178418, r6178419, r6178420, r6178421, r6178422, r6178423, r6178424;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6178389, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6178390, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6178391);
        mpfr_init(r6178392);
        mpfr_init(r6178393);
        mpfr_init(r6178394);
        mpfr_init_set_str(r6178395, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6178396);
        mpfr_init(r6178397);
        mpfr_init(r6178398);
        mpfr_init(r6178399);
        mpfr_init_set_str(r6178400, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6178401);
        mpfr_init(r6178402);
        mpfr_init(r6178403);
        mpfr_init(r6178404);
        mpfr_init_set_str(r6178405, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6178406);
        mpfr_init(r6178407);
        mpfr_init(r6178408);
        mpfr_init(r6178409);
        mpfr_init_set_str(r6178410, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6178411);
        mpfr_init(r6178412);
        mpfr_init(r6178413);
        mpfr_init(r6178414);
        mpfr_init_set_str(r6178415, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6178416);
        mpfr_init(r6178417);
        mpfr_init(r6178418);
        mpfr_init(r6178419);
        mpfr_init_set_str(r6178420, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6178421);
        mpfr_init(r6178422);
        mpfr_init(r6178423);
        mpfr_init(r6178424);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6178391, x, MPFR_RNDN);
        mpfr_mul(r6178392, r6178391, r6178391, MPFR_RNDN);
        mpfr_mul(r6178393, r6178390, r6178392, MPFR_RNDN);
        mpfr_add(r6178394, r6178389, r6178393, MPFR_RNDN);
        ;
        mpfr_mul(r6178396, r6178392, r6178391, MPFR_RNDN);
        mpfr_mul(r6178397, r6178396, r6178391, MPFR_RNDN);
        mpfr_mul(r6178398, r6178395, r6178397, MPFR_RNDN);
        mpfr_add(r6178399, r6178394, r6178398, MPFR_RNDN);
        ;
        mpfr_mul(r6178401, r6178397, r6178391, MPFR_RNDN);
        mpfr_mul(r6178402, r6178401, r6178391, MPFR_RNDN);
        mpfr_mul(r6178403, r6178400, r6178402, MPFR_RNDN);
        mpfr_add(r6178404, r6178399, r6178403, MPFR_RNDN);
        ;
        mpfr_mul(r6178406, r6178402, r6178391, MPFR_RNDN);
        mpfr_mul(r6178407, r6178406, r6178391, MPFR_RNDN);
        mpfr_mul(r6178408, r6178405, r6178407, MPFR_RNDN);
        mpfr_add(r6178409, r6178404, r6178408, MPFR_RNDN);
        ;
        mpfr_mul(r6178411, r6178407, r6178391, MPFR_RNDN);
        mpfr_mul(r6178412, r6178411, r6178391, MPFR_RNDN);
        mpfr_mul(r6178413, r6178410, r6178412, MPFR_RNDN);
        mpfr_add(r6178414, r6178409, r6178413, MPFR_RNDN);
        ;
        mpfr_mul(r6178416, r6178412, r6178391, MPFR_RNDN);
        mpfr_mul(r6178417, r6178416, r6178391, MPFR_RNDN);
        mpfr_mul(r6178418, r6178415, r6178417, MPFR_RNDN);
        mpfr_add(r6178419, r6178414, r6178418, MPFR_RNDN);
        ;
        mpfr_mul(r6178421, r6178417, r6178391, MPFR_RNDN);
        mpfr_mul(r6178422, r6178421, r6178391, MPFR_RNDN);
        mpfr_mul(r6178423, r6178420, r6178422, MPFR_RNDN);
        mpfr_add(r6178424, r6178419, r6178423, MPFR_RNDN);
        return mpfr_get_d(r6178424, MPFR_RNDN);
}

static mpfr_t r6178425, r6178426, r6178427, r6178428, r6178429, r6178430, r6178431, r6178432, r6178433, r6178434, r6178435, r6178436, r6178437, r6178438, r6178439, r6178440, r6178441, r6178442, r6178443, r6178444, r6178445, r6178446, r6178447, r6178448, r6178449, r6178450, r6178451, r6178452, r6178453, r6178454, r6178455, r6178456, r6178457, r6178458, r6178459, r6178460;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6178425, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6178426, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6178427);
        mpfr_init(r6178428);
        mpfr_init(r6178429);
        mpfr_init(r6178430);
        mpfr_init_set_str(r6178431, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6178432);
        mpfr_init(r6178433);
        mpfr_init(r6178434);
        mpfr_init(r6178435);
        mpfr_init_set_str(r6178436, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6178437);
        mpfr_init(r6178438);
        mpfr_init(r6178439);
        mpfr_init(r6178440);
        mpfr_init_set_str(r6178441, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6178442);
        mpfr_init(r6178443);
        mpfr_init(r6178444);
        mpfr_init(r6178445);
        mpfr_init_set_str(r6178446, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6178447);
        mpfr_init(r6178448);
        mpfr_init(r6178449);
        mpfr_init(r6178450);
        mpfr_init_set_str(r6178451, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6178452);
        mpfr_init(r6178453);
        mpfr_init(r6178454);
        mpfr_init(r6178455);
        mpfr_init_set_str(r6178456, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6178457);
        mpfr_init(r6178458);
        mpfr_init(r6178459);
        mpfr_init(r6178460);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6178427, x, MPFR_RNDN);
        mpfr_mul(r6178428, r6178427, r6178427, MPFR_RNDN);
        mpfr_mul(r6178429, r6178426, r6178428, MPFR_RNDN);
        mpfr_add(r6178430, r6178425, r6178429, MPFR_RNDN);
        ;
        mpfr_mul(r6178432, r6178428, r6178427, MPFR_RNDN);
        mpfr_mul(r6178433, r6178432, r6178427, MPFR_RNDN);
        mpfr_mul(r6178434, r6178431, r6178433, MPFR_RNDN);
        mpfr_add(r6178435, r6178430, r6178434, MPFR_RNDN);
        ;
        mpfr_mul(r6178437, r6178433, r6178427, MPFR_RNDN);
        mpfr_mul(r6178438, r6178437, r6178427, MPFR_RNDN);
        mpfr_mul(r6178439, r6178436, r6178438, MPFR_RNDN);
        mpfr_add(r6178440, r6178435, r6178439, MPFR_RNDN);
        ;
        mpfr_mul(r6178442, r6178438, r6178427, MPFR_RNDN);
        mpfr_mul(r6178443, r6178442, r6178427, MPFR_RNDN);
        mpfr_mul(r6178444, r6178441, r6178443, MPFR_RNDN);
        mpfr_add(r6178445, r6178440, r6178444, MPFR_RNDN);
        ;
        mpfr_mul(r6178447, r6178443, r6178427, MPFR_RNDN);
        mpfr_mul(r6178448, r6178447, r6178427, MPFR_RNDN);
        mpfr_mul(r6178449, r6178446, r6178448, MPFR_RNDN);
        mpfr_add(r6178450, r6178445, r6178449, MPFR_RNDN);
        ;
        mpfr_mul(r6178452, r6178448, r6178427, MPFR_RNDN);
        mpfr_mul(r6178453, r6178452, r6178427, MPFR_RNDN);
        mpfr_mul(r6178454, r6178451, r6178453, MPFR_RNDN);
        mpfr_add(r6178455, r6178450, r6178454, MPFR_RNDN);
        ;
        mpfr_mul(r6178457, r6178453, r6178427, MPFR_RNDN);
        mpfr_mul(r6178458, r6178457, r6178427, MPFR_RNDN);
        mpfr_mul(r6178459, r6178456, r6178458, MPFR_RNDN);
        mpfr_add(r6178460, r6178455, r6178459, MPFR_RNDN);
        return mpfr_get_d(r6178460, MPFR_RNDN);
}

static mpfr_t r6178461, r6178462, r6178463, r6178464, r6178465, r6178466, r6178467, r6178468, r6178469, r6178470, r6178471, r6178472, r6178473, r6178474, r6178475, r6178476, r6178477, r6178478, r6178479, r6178480, r6178481, r6178482, r6178483, r6178484, r6178485, r6178486, r6178487, r6178488, r6178489, r6178490, r6178491, r6178492, r6178493, r6178494, r6178495, r6178496;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6178461, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6178462, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6178463);
        mpfr_init(r6178464);
        mpfr_init(r6178465);
        mpfr_init(r6178466);
        mpfr_init_set_str(r6178467, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6178468);
        mpfr_init(r6178469);
        mpfr_init(r6178470);
        mpfr_init(r6178471);
        mpfr_init_set_str(r6178472, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6178473);
        mpfr_init(r6178474);
        mpfr_init(r6178475);
        mpfr_init(r6178476);
        mpfr_init_set_str(r6178477, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6178478);
        mpfr_init(r6178479);
        mpfr_init(r6178480);
        mpfr_init(r6178481);
        mpfr_init_set_str(r6178482, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6178483);
        mpfr_init(r6178484);
        mpfr_init(r6178485);
        mpfr_init(r6178486);
        mpfr_init_set_str(r6178487, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6178488);
        mpfr_init(r6178489);
        mpfr_init(r6178490);
        mpfr_init(r6178491);
        mpfr_init_set_str(r6178492, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6178493);
        mpfr_init(r6178494);
        mpfr_init(r6178495);
        mpfr_init(r6178496);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6178463, x, MPFR_RNDN);
        mpfr_mul(r6178464, r6178463, r6178463, MPFR_RNDN);
        mpfr_mul(r6178465, r6178462, r6178464, MPFR_RNDN);
        mpfr_add(r6178466, r6178461, r6178465, MPFR_RNDN);
        ;
        mpfr_mul(r6178468, r6178464, r6178463, MPFR_RNDN);
        mpfr_mul(r6178469, r6178468, r6178463, MPFR_RNDN);
        mpfr_mul(r6178470, r6178467, r6178469, MPFR_RNDN);
        mpfr_add(r6178471, r6178466, r6178470, MPFR_RNDN);
        ;
        mpfr_mul(r6178473, r6178469, r6178463, MPFR_RNDN);
        mpfr_mul(r6178474, r6178473, r6178463, MPFR_RNDN);
        mpfr_mul(r6178475, r6178472, r6178474, MPFR_RNDN);
        mpfr_add(r6178476, r6178471, r6178475, MPFR_RNDN);
        ;
        mpfr_mul(r6178478, r6178474, r6178463, MPFR_RNDN);
        mpfr_mul(r6178479, r6178478, r6178463, MPFR_RNDN);
        mpfr_mul(r6178480, r6178477, r6178479, MPFR_RNDN);
        mpfr_add(r6178481, r6178476, r6178480, MPFR_RNDN);
        ;
        mpfr_mul(r6178483, r6178479, r6178463, MPFR_RNDN);
        mpfr_mul(r6178484, r6178483, r6178463, MPFR_RNDN);
        mpfr_mul(r6178485, r6178482, r6178484, MPFR_RNDN);
        mpfr_add(r6178486, r6178481, r6178485, MPFR_RNDN);
        ;
        mpfr_mul(r6178488, r6178484, r6178463, MPFR_RNDN);
        mpfr_mul(r6178489, r6178488, r6178463, MPFR_RNDN);
        mpfr_mul(r6178490, r6178487, r6178489, MPFR_RNDN);
        mpfr_add(r6178491, r6178486, r6178490, MPFR_RNDN);
        ;
        mpfr_mul(r6178493, r6178489, r6178463, MPFR_RNDN);
        mpfr_mul(r6178494, r6178493, r6178463, MPFR_RNDN);
        mpfr_mul(r6178495, r6178492, r6178494, MPFR_RNDN);
        mpfr_add(r6178496, r6178491, r6178495, MPFR_RNDN);
        return mpfr_get_d(r6178496, MPFR_RNDN);
}

