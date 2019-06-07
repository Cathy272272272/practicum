#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r6862270 = -0.209473;
        float r6862271 = 21.994629;
        float r6862272 = x;
        float r6862273 = r6862272 * r6862272;
        float r6862274 = r6862271 * r6862273;
        float r6862275 = r6862270 + r6862274;
        float r6862276 = -373.908691;
        float r6862277 = r6862273 * r6862272;
        float r6862278 = r6862277 * r6862272;
        float r6862279 = r6862276 * r6862278;
        float r6862280 = r6862275 + r6862279;
        float r6862281 = 2368.088379;
        float r6862282 = r6862278 * r6862272;
        float r6862283 = r6862282 * r6862272;
        float r6862284 = r6862281 * r6862283;
        float r6862285 = r6862280 + r6862284;
        float r6862286 = -7104.265137;
        float r6862287 = r6862283 * r6862272;
        float r6862288 = r6862287 * r6862272;
        float r6862289 = r6862286 * r6862288;
        float r6862290 = r6862285 + r6862289;
        float r6862291 = 10893.206543;
        float r6862292 = r6862288 * r6862272;
        float r6862293 = r6862292 * r6862272;
        float r6862294 = r6862291 * r6862293;
        float r6862295 = r6862290 + r6862294;
        float r6862296 = -8252.429199;
        float r6862297 = r6862293 * r6862272;
        float r6862298 = r6862297 * r6862272;
        float r6862299 = r6862296 * r6862298;
        float r6862300 = r6862295 + r6862299;
        float r6862301 = 2448.522949;
        float r6862302 = r6862298 * r6862272;
        float r6862303 = r6862302 * r6862272;
        float r6862304 = r6862301 * r6862303;
        float r6862305 = r6862300 + r6862304;
        return r6862305;
}

double f_id(double x) {
        double r6862306 = -0.209473;
        double r6862307 = 21.994629;
        double r6862308 = x;
        double r6862309 = r6862308 * r6862308;
        double r6862310 = r6862307 * r6862309;
        double r6862311 = r6862306 + r6862310;
        double r6862312 = -373.908691;
        double r6862313 = r6862309 * r6862308;
        double r6862314 = r6862313 * r6862308;
        double r6862315 = r6862312 * r6862314;
        double r6862316 = r6862311 + r6862315;
        double r6862317 = 2368.088379;
        double r6862318 = r6862314 * r6862308;
        double r6862319 = r6862318 * r6862308;
        double r6862320 = r6862317 * r6862319;
        double r6862321 = r6862316 + r6862320;
        double r6862322 = -7104.265137;
        double r6862323 = r6862319 * r6862308;
        double r6862324 = r6862323 * r6862308;
        double r6862325 = r6862322 * r6862324;
        double r6862326 = r6862321 + r6862325;
        double r6862327 = 10893.206543;
        double r6862328 = r6862324 * r6862308;
        double r6862329 = r6862328 * r6862308;
        double r6862330 = r6862327 * r6862329;
        double r6862331 = r6862326 + r6862330;
        double r6862332 = -8252.429199;
        double r6862333 = r6862329 * r6862308;
        double r6862334 = r6862333 * r6862308;
        double r6862335 = r6862332 * r6862334;
        double r6862336 = r6862331 + r6862335;
        double r6862337 = 2448.522949;
        double r6862338 = r6862334 * r6862308;
        double r6862339 = r6862338 * r6862308;
        double r6862340 = r6862337 * r6862339;
        double r6862341 = r6862336 + r6862340;
        return r6862341;
}


double f_of(float x) {
        float r6862342 = -0.209473;
        float r6862343 = 21.994629;
        float r6862344 = x;
        float r6862345 = r6862344 * r6862344;
        float r6862346 = r6862343 * r6862345;
        float r6862347 = r6862342 + r6862346;
        float r6862348 = 3;
        float r6862349 = 1;
        float r6862350 = r6862348 + r6862349;
        float r6862351 = pow(r6862345, r6862350);
        float r6862352 = -7104.265137;
        float r6862353 = 10893.206543;
        float r6862354 = r6862353 * r6862345;
        float r6862355 = r6862352 + r6862354;
        float r6862356 = r6862351 * r6862355;
        float r6862357 = r6862347 + r6862356;
        float r6862358 = -373.908691;
        float r6862359 = 2368.088379;
        float r6862360 = r6862344 * r6862359;
        float r6862361 = r6862360 * r6862344;
        float r6862362 = r6862358 + r6862361;
        float r6862363 = r6862345 * r6862345;
        float r6862364 = r6862362 * r6862363;
        float r6862365 = pow(r6862344, r6862348);
        float r6862366 = r6862345 * r6862365;
        float r6862367 = r6862366 * r6862366;
        float r6862368 = 2448.522949;
        float r6862369 = r6862368 * r6862344;
        float r6862370 = r6862369 * r6862365;
        float r6862371 = -8252.429199;
        float r6862372 = r6862345 * r6862371;
        float r6862373 = r6862370 + r6862372;
        float r6862374 = r6862367 * r6862373;
        float r6862375 = r6862364 + r6862374;
        float r6862376 = r6862357 + r6862375;
        return r6862376;
}

double f_od(double x) {
        double r6862377 = -0.209473;
        double r6862378 = 21.994629;
        double r6862379 = x;
        double r6862380 = r6862379 * r6862379;
        double r6862381 = r6862378 * r6862380;
        double r6862382 = r6862377 + r6862381;
        double r6862383 = 3;
        double r6862384 = 1;
        double r6862385 = r6862383 + r6862384;
        double r6862386 = pow(r6862380, r6862385);
        double r6862387 = -7104.265137;
        double r6862388 = 10893.206543;
        double r6862389 = r6862388 * r6862380;
        double r6862390 = r6862387 + r6862389;
        double r6862391 = r6862386 * r6862390;
        double r6862392 = r6862382 + r6862391;
        double r6862393 = -373.908691;
        double r6862394 = 2368.088379;
        double r6862395 = r6862379 * r6862394;
        double r6862396 = r6862395 * r6862379;
        double r6862397 = r6862393 + r6862396;
        double r6862398 = r6862380 * r6862380;
        double r6862399 = r6862397 * r6862398;
        double r6862400 = pow(r6862379, r6862383);
        double r6862401 = r6862380 * r6862400;
        double r6862402 = r6862401 * r6862401;
        double r6862403 = 2448.522949;
        double r6862404 = r6862403 * r6862379;
        double r6862405 = r6862404 * r6862400;
        double r6862406 = -8252.429199;
        double r6862407 = r6862380 * r6862406;
        double r6862408 = r6862405 + r6862407;
        double r6862409 = r6862402 * r6862408;
        double r6862410 = r6862399 + r6862409;
        double r6862411 = r6862392 + r6862410;
        return r6862411;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6862412, r6862413, r6862414, r6862415, r6862416, r6862417, r6862418, r6862419, r6862420, r6862421, r6862422, r6862423, r6862424, r6862425, r6862426, r6862427, r6862428, r6862429, r6862430, r6862431, r6862432, r6862433, r6862434, r6862435, r6862436, r6862437, r6862438, r6862439, r6862440, r6862441, r6862442, r6862443, r6862444, r6862445, r6862446, r6862447;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862412, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862413, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6862414);
        mpfr_init(r6862415);
        mpfr_init(r6862416);
        mpfr_init(r6862417);
        mpfr_init_set_str(r6862418, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6862419);
        mpfr_init(r6862420);
        mpfr_init(r6862421);
        mpfr_init(r6862422);
        mpfr_init_set_str(r6862423, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6862424);
        mpfr_init(r6862425);
        mpfr_init(r6862426);
        mpfr_init(r6862427);
        mpfr_init_set_str(r6862428, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6862429);
        mpfr_init(r6862430);
        mpfr_init(r6862431);
        mpfr_init(r6862432);
        mpfr_init_set_str(r6862433, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6862434);
        mpfr_init(r6862435);
        mpfr_init(r6862436);
        mpfr_init(r6862437);
        mpfr_init_set_str(r6862438, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6862439);
        mpfr_init(r6862440);
        mpfr_init(r6862441);
        mpfr_init(r6862442);
        mpfr_init_set_str(r6862443, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6862444);
        mpfr_init(r6862445);
        mpfr_init(r6862446);
        mpfr_init(r6862447);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6862414, x, MPFR_RNDN);
        mpfr_mul(r6862415, r6862414, r6862414, MPFR_RNDN);
        mpfr_mul(r6862416, r6862413, r6862415, MPFR_RNDN);
        mpfr_add(r6862417, r6862412, r6862416, MPFR_RNDN);
        ;
        mpfr_mul(r6862419, r6862415, r6862414, MPFR_RNDN);
        mpfr_mul(r6862420, r6862419, r6862414, MPFR_RNDN);
        mpfr_mul(r6862421, r6862418, r6862420, MPFR_RNDN);
        mpfr_add(r6862422, r6862417, r6862421, MPFR_RNDN);
        ;
        mpfr_mul(r6862424, r6862420, r6862414, MPFR_RNDN);
        mpfr_mul(r6862425, r6862424, r6862414, MPFR_RNDN);
        mpfr_mul(r6862426, r6862423, r6862425, MPFR_RNDN);
        mpfr_add(r6862427, r6862422, r6862426, MPFR_RNDN);
        ;
        mpfr_mul(r6862429, r6862425, r6862414, MPFR_RNDN);
        mpfr_mul(r6862430, r6862429, r6862414, MPFR_RNDN);
        mpfr_mul(r6862431, r6862428, r6862430, MPFR_RNDN);
        mpfr_add(r6862432, r6862427, r6862431, MPFR_RNDN);
        ;
        mpfr_mul(r6862434, r6862430, r6862414, MPFR_RNDN);
        mpfr_mul(r6862435, r6862434, r6862414, MPFR_RNDN);
        mpfr_mul(r6862436, r6862433, r6862435, MPFR_RNDN);
        mpfr_add(r6862437, r6862432, r6862436, MPFR_RNDN);
        ;
        mpfr_mul(r6862439, r6862435, r6862414, MPFR_RNDN);
        mpfr_mul(r6862440, r6862439, r6862414, MPFR_RNDN);
        mpfr_mul(r6862441, r6862438, r6862440, MPFR_RNDN);
        mpfr_add(r6862442, r6862437, r6862441, MPFR_RNDN);
        ;
        mpfr_mul(r6862444, r6862440, r6862414, MPFR_RNDN);
        mpfr_mul(r6862445, r6862444, r6862414, MPFR_RNDN);
        mpfr_mul(r6862446, r6862443, r6862445, MPFR_RNDN);
        mpfr_add(r6862447, r6862442, r6862446, MPFR_RNDN);
        return mpfr_get_d(r6862447, MPFR_RNDN);
}

static mpfr_t r6862448, r6862449, r6862450, r6862451, r6862452, r6862453, r6862454, r6862455, r6862456, r6862457, r6862458, r6862459, r6862460, r6862461, r6862462, r6862463, r6862464, r6862465, r6862466, r6862467, r6862468, r6862469, r6862470, r6862471, r6862472, r6862473, r6862474, r6862475, r6862476, r6862477, r6862478, r6862479, r6862480, r6862481, r6862482;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862448, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862449, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6862450);
        mpfr_init(r6862451);
        mpfr_init(r6862452);
        mpfr_init(r6862453);
        mpfr_init_set_str(r6862454, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862455, "1", 10, MPFR_RNDN);
        mpfr_init(r6862456);
        mpfr_init(r6862457);
        mpfr_init_set_str(r6862458, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862459, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6862460);
        mpfr_init(r6862461);
        mpfr_init(r6862462);
        mpfr_init(r6862463);
        mpfr_init_set_str(r6862464, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862465, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6862466);
        mpfr_init(r6862467);
        mpfr_init(r6862468);
        mpfr_init(r6862469);
        mpfr_init(r6862470);
        mpfr_init(r6862471);
        mpfr_init(r6862472);
        mpfr_init(r6862473);
        mpfr_init_set_str(r6862474, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6862475);
        mpfr_init(r6862476);
        mpfr_init_set_str(r6862477, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6862478);
        mpfr_init(r6862479);
        mpfr_init(r6862480);
        mpfr_init(r6862481);
        mpfr_init(r6862482);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6862450, x, MPFR_RNDN);
        mpfr_mul(r6862451, r6862450, r6862450, MPFR_RNDN);
        mpfr_mul(r6862452, r6862449, r6862451, MPFR_RNDN);
        mpfr_add(r6862453, r6862448, r6862452, MPFR_RNDN);
        ;
        ;
        mpfr_add(r6862456, r6862454, r6862455, MPFR_RNDN);
        mpfr_pow(r6862457, r6862451, r6862456, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6862460, r6862459, r6862451, MPFR_RNDN);
        mpfr_add(r6862461, r6862458, r6862460, MPFR_RNDN);
        mpfr_mul(r6862462, r6862457, r6862461, MPFR_RNDN);
        mpfr_add(r6862463, r6862453, r6862462, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6862466, r6862450, r6862465, MPFR_RNDN);
        mpfr_mul(r6862467, r6862466, r6862450, MPFR_RNDN);
        mpfr_add(r6862468, r6862464, r6862467, MPFR_RNDN);
        mpfr_mul(r6862469, r6862451, r6862451, MPFR_RNDN);
        mpfr_mul(r6862470, r6862468, r6862469, MPFR_RNDN);
        mpfr_pow(r6862471, r6862450, r6862454, MPFR_RNDN);
        mpfr_mul(r6862472, r6862451, r6862471, MPFR_RNDN);
        mpfr_mul(r6862473, r6862472, r6862472, MPFR_RNDN);
        ;
        mpfr_mul(r6862475, r6862474, r6862450, MPFR_RNDN);
        mpfr_mul(r6862476, r6862475, r6862471, MPFR_RNDN);
        ;
        mpfr_mul(r6862478, r6862451, r6862477, MPFR_RNDN);
        mpfr_add(r6862479, r6862476, r6862478, MPFR_RNDN);
        mpfr_mul(r6862480, r6862473, r6862479, MPFR_RNDN);
        mpfr_add(r6862481, r6862470, r6862480, MPFR_RNDN);
        mpfr_add(r6862482, r6862463, r6862481, MPFR_RNDN);
        return mpfr_get_d(r6862482, MPFR_RNDN);
}

static mpfr_t r6862483, r6862484, r6862485, r6862486, r6862487, r6862488, r6862489, r6862490, r6862491, r6862492, r6862493, r6862494, r6862495, r6862496, r6862497, r6862498, r6862499, r6862500, r6862501, r6862502, r6862503, r6862504, r6862505, r6862506, r6862507, r6862508, r6862509, r6862510, r6862511, r6862512, r6862513, r6862514, r6862515, r6862516, r6862517;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862483, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862484, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6862485);
        mpfr_init(r6862486);
        mpfr_init(r6862487);
        mpfr_init(r6862488);
        mpfr_init_set_str(r6862489, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862490, "1", 10, MPFR_RNDN);
        mpfr_init(r6862491);
        mpfr_init(r6862492);
        mpfr_init_set_str(r6862493, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862494, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6862495);
        mpfr_init(r6862496);
        mpfr_init(r6862497);
        mpfr_init(r6862498);
        mpfr_init_set_str(r6862499, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862500, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6862501);
        mpfr_init(r6862502);
        mpfr_init(r6862503);
        mpfr_init(r6862504);
        mpfr_init(r6862505);
        mpfr_init(r6862506);
        mpfr_init(r6862507);
        mpfr_init(r6862508);
        mpfr_init_set_str(r6862509, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6862510);
        mpfr_init(r6862511);
        mpfr_init_set_str(r6862512, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6862513);
        mpfr_init(r6862514);
        mpfr_init(r6862515);
        mpfr_init(r6862516);
        mpfr_init(r6862517);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6862485, x, MPFR_RNDN);
        mpfr_mul(r6862486, r6862485, r6862485, MPFR_RNDN);
        mpfr_mul(r6862487, r6862484, r6862486, MPFR_RNDN);
        mpfr_add(r6862488, r6862483, r6862487, MPFR_RNDN);
        ;
        ;
        mpfr_add(r6862491, r6862489, r6862490, MPFR_RNDN);
        mpfr_pow(r6862492, r6862486, r6862491, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6862495, r6862494, r6862486, MPFR_RNDN);
        mpfr_add(r6862496, r6862493, r6862495, MPFR_RNDN);
        mpfr_mul(r6862497, r6862492, r6862496, MPFR_RNDN);
        mpfr_add(r6862498, r6862488, r6862497, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6862501, r6862485, r6862500, MPFR_RNDN);
        mpfr_mul(r6862502, r6862501, r6862485, MPFR_RNDN);
        mpfr_add(r6862503, r6862499, r6862502, MPFR_RNDN);
        mpfr_mul(r6862504, r6862486, r6862486, MPFR_RNDN);
        mpfr_mul(r6862505, r6862503, r6862504, MPFR_RNDN);
        mpfr_pow(r6862506, r6862485, r6862489, MPFR_RNDN);
        mpfr_mul(r6862507, r6862486, r6862506, MPFR_RNDN);
        mpfr_mul(r6862508, r6862507, r6862507, MPFR_RNDN);
        ;
        mpfr_mul(r6862510, r6862509, r6862485, MPFR_RNDN);
        mpfr_mul(r6862511, r6862510, r6862506, MPFR_RNDN);
        ;
        mpfr_mul(r6862513, r6862486, r6862512, MPFR_RNDN);
        mpfr_add(r6862514, r6862511, r6862513, MPFR_RNDN);
        mpfr_mul(r6862515, r6862508, r6862514, MPFR_RNDN);
        mpfr_add(r6862516, r6862505, r6862515, MPFR_RNDN);
        mpfr_add(r6862517, r6862498, r6862516, MPFR_RNDN);
        return mpfr_get_d(r6862517, MPFR_RNDN);
}

