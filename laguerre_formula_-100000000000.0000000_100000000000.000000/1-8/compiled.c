#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r8595251 = 1.0;
        float r8595252 = -8.0;
        float r8595253 = x;
        float r8595254 = r8595252 * r8595253;
        float r8595255 = r8595251 + r8595254;
        float r8595256 = 14.0;
        float r8595257 = r8595253 * r8595253;
        float r8595258 = r8595256 * r8595257;
        float r8595259 = r8595255 + r8595258;
        float r8595260 = -9.333333;
        float r8595261 = r8595257 * r8595253;
        float r8595262 = r8595260 * r8595261;
        float r8595263 = r8595259 + r8595262;
        float r8595264 = 2.916667;
        float r8595265 = r8595261 * r8595253;
        float r8595266 = r8595264 * r8595265;
        float r8595267 = r8595263 + r8595266;
        float r8595268 = -0.466667;
        float r8595269 = r8595265 * r8595253;
        float r8595270 = r8595268 * r8595269;
        float r8595271 = r8595267 + r8595270;
        float r8595272 = 0.038889;
        float r8595273 = r8595269 * r8595253;
        float r8595274 = r8595272 * r8595273;
        float r8595275 = r8595271 + r8595274;
        float r8595276 = -0.001587;
        float r8595277 = r8595273 * r8595253;
        float r8595278 = r8595276 * r8595277;
        float r8595279 = r8595275 + r8595278;
        float r8595280 = 2.5e-05;
        float r8595281 = r8595277 * r8595253;
        float r8595282 = r8595280 * r8595281;
        float r8595283 = r8595279 + r8595282;
        return r8595283;
}

double f_id(double x) {
        double r8595284 = 1.0;
        double r8595285 = -8.0;
        double r8595286 = x;
        double r8595287 = r8595285 * r8595286;
        double r8595288 = r8595284 + r8595287;
        double r8595289 = 14.0;
        double r8595290 = r8595286 * r8595286;
        double r8595291 = r8595289 * r8595290;
        double r8595292 = r8595288 + r8595291;
        double r8595293 = -9.333333;
        double r8595294 = r8595290 * r8595286;
        double r8595295 = r8595293 * r8595294;
        double r8595296 = r8595292 + r8595295;
        double r8595297 = 2.916667;
        double r8595298 = r8595294 * r8595286;
        double r8595299 = r8595297 * r8595298;
        double r8595300 = r8595296 + r8595299;
        double r8595301 = -0.466667;
        double r8595302 = r8595298 * r8595286;
        double r8595303 = r8595301 * r8595302;
        double r8595304 = r8595300 + r8595303;
        double r8595305 = 0.038889;
        double r8595306 = r8595302 * r8595286;
        double r8595307 = r8595305 * r8595306;
        double r8595308 = r8595304 + r8595307;
        double r8595309 = -0.001587;
        double r8595310 = r8595306 * r8595286;
        double r8595311 = r8595309 * r8595310;
        double r8595312 = r8595308 + r8595311;
        double r8595313 = 2.5e-05;
        double r8595314 = r8595310 * r8595286;
        double r8595315 = r8595313 * r8595314;
        double r8595316 = r8595312 + r8595315;
        return r8595316;
}


double f_of(float x) {
        float r8595317 = x;
        float r8595318 = 2.5e-05;
        float r8595319 = r8595317 * r8595318;
        float r8595320 = r8595319 * r8595317;
        float r8595321 = 3;
        float r8595322 = pow(r8595317, r8595321);
        float r8595323 = r8595322 * r8595322;
        float r8595324 = r8595320 * r8595323;
        float r8595325 = r8595317 * r8595317;
        float r8595326 = -0.001587;
        float r8595327 = 5;
        float r8595328 = pow(r8595317, r8595327);
        float r8595329 = r8595326 * r8595328;
        float r8595330 = r8595325 * r8595329;
        float r8595331 = r8595324 + r8595330;
        float r8595332 = 14.0;
        float r8595333 = r8595317 * r8595332;
        float r8595334 = r8595333 * r8595317;
        float r8595335 = -8.0;
        float r8595336 = r8595317 * r8595335;
        float r8595337 = 1.0;
        float r8595338 = r8595336 + r8595337;
        float r8595339 = r8595334 + r8595338;
        float r8595340 = r8595331 + r8595339;
        float r8595341 = 2.916667;
        float r8595342 = r8595341 * r8595317;
        float r8595343 = -9.333333;
        float r8595344 = r8595342 + r8595343;
        float r8595345 = r8595322 * r8595344;
        float r8595346 = r8595322 * r8595325;
        float r8595347 = -0.466667;
        float r8595348 = 0.038889;
        float r8595349 = r8595348 * r8595317;
        float r8595350 = r8595347 + r8595349;
        float r8595351 = r8595346 * r8595350;
        float r8595352 = r8595345 + r8595351;
        float r8595353 = r8595340 + r8595352;
        return r8595353;
}

double f_od(double x) {
        double r8595354 = x;
        double r8595355 = 2.5e-05;
        double r8595356 = r8595354 * r8595355;
        double r8595357 = r8595356 * r8595354;
        double r8595358 = 3;
        double r8595359 = pow(r8595354, r8595358);
        double r8595360 = r8595359 * r8595359;
        double r8595361 = r8595357 * r8595360;
        double r8595362 = r8595354 * r8595354;
        double r8595363 = -0.001587;
        double r8595364 = 5;
        double r8595365 = pow(r8595354, r8595364);
        double r8595366 = r8595363 * r8595365;
        double r8595367 = r8595362 * r8595366;
        double r8595368 = r8595361 + r8595367;
        double r8595369 = 14.0;
        double r8595370 = r8595354 * r8595369;
        double r8595371 = r8595370 * r8595354;
        double r8595372 = -8.0;
        double r8595373 = r8595354 * r8595372;
        double r8595374 = 1.0;
        double r8595375 = r8595373 + r8595374;
        double r8595376 = r8595371 + r8595375;
        double r8595377 = r8595368 + r8595376;
        double r8595378 = 2.916667;
        double r8595379 = r8595378 * r8595354;
        double r8595380 = -9.333333;
        double r8595381 = r8595379 + r8595380;
        double r8595382 = r8595359 * r8595381;
        double r8595383 = r8595359 * r8595362;
        double r8595384 = -0.466667;
        double r8595385 = 0.038889;
        double r8595386 = r8595385 * r8595354;
        double r8595387 = r8595384 + r8595386;
        double r8595388 = r8595383 * r8595387;
        double r8595389 = r8595382 + r8595388;
        double r8595390 = r8595377 + r8595389;
        return r8595390;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8595391, r8595392, r8595393, r8595394, r8595395, r8595396, r8595397, r8595398, r8595399, r8595400, r8595401, r8595402, r8595403, r8595404, r8595405, r8595406, r8595407, r8595408, r8595409, r8595410, r8595411, r8595412, r8595413, r8595414, r8595415, r8595416, r8595417, r8595418, r8595419, r8595420, r8595421, r8595422, r8595423;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8595391, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595392, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r8595393);
        mpfr_init(r8595394);
        mpfr_init(r8595395);
        mpfr_init_set_str(r8595396, "14.0", 10, MPFR_RNDN);
        mpfr_init(r8595397);
        mpfr_init(r8595398);
        mpfr_init(r8595399);
        mpfr_init_set_str(r8595400, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r8595401);
        mpfr_init(r8595402);
        mpfr_init(r8595403);
        mpfr_init_set_str(r8595404, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r8595405);
        mpfr_init(r8595406);
        mpfr_init(r8595407);
        mpfr_init_set_str(r8595408, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r8595409);
        mpfr_init(r8595410);
        mpfr_init(r8595411);
        mpfr_init_set_str(r8595412, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r8595413);
        mpfr_init(r8595414);
        mpfr_init(r8595415);
        mpfr_init_set_str(r8595416, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r8595417);
        mpfr_init(r8595418);
        mpfr_init(r8595419);
        mpfr_init_set_str(r8595420, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r8595421);
        mpfr_init(r8595422);
        mpfr_init(r8595423);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8595393, x, MPFR_RNDN);
        mpfr_mul(r8595394, r8595392, r8595393, MPFR_RNDN);
        mpfr_add(r8595395, r8595391, r8595394, MPFR_RNDN);
        ;
        mpfr_mul(r8595397, r8595393, r8595393, MPFR_RNDN);
        mpfr_mul(r8595398, r8595396, r8595397, MPFR_RNDN);
        mpfr_add(r8595399, r8595395, r8595398, MPFR_RNDN);
        ;
        mpfr_mul(r8595401, r8595397, r8595393, MPFR_RNDN);
        mpfr_mul(r8595402, r8595400, r8595401, MPFR_RNDN);
        mpfr_add(r8595403, r8595399, r8595402, MPFR_RNDN);
        ;
        mpfr_mul(r8595405, r8595401, r8595393, MPFR_RNDN);
        mpfr_mul(r8595406, r8595404, r8595405, MPFR_RNDN);
        mpfr_add(r8595407, r8595403, r8595406, MPFR_RNDN);
        ;
        mpfr_mul(r8595409, r8595405, r8595393, MPFR_RNDN);
        mpfr_mul(r8595410, r8595408, r8595409, MPFR_RNDN);
        mpfr_add(r8595411, r8595407, r8595410, MPFR_RNDN);
        ;
        mpfr_mul(r8595413, r8595409, r8595393, MPFR_RNDN);
        mpfr_mul(r8595414, r8595412, r8595413, MPFR_RNDN);
        mpfr_add(r8595415, r8595411, r8595414, MPFR_RNDN);
        ;
        mpfr_mul(r8595417, r8595413, r8595393, MPFR_RNDN);
        mpfr_mul(r8595418, r8595416, r8595417, MPFR_RNDN);
        mpfr_add(r8595419, r8595415, r8595418, MPFR_RNDN);
        ;
        mpfr_mul(r8595421, r8595417, r8595393, MPFR_RNDN);
        mpfr_mul(r8595422, r8595420, r8595421, MPFR_RNDN);
        mpfr_add(r8595423, r8595419, r8595422, MPFR_RNDN);
        return mpfr_get_d(r8595423, MPFR_RNDN);
}

static mpfr_t r8595424, r8595425, r8595426, r8595427, r8595428, r8595429, r8595430, r8595431, r8595432, r8595433, r8595434, r8595435, r8595436, r8595437, r8595438, r8595439, r8595440, r8595441, r8595442, r8595443, r8595444, r8595445, r8595446, r8595447, r8595448, r8595449, r8595450, r8595451, r8595452, r8595453, r8595454, r8595455, r8595456, r8595457, r8595458, r8595459, r8595460;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8595424);
        mpfr_init_set_str(r8595425, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r8595426);
        mpfr_init(r8595427);
        mpfr_init_set_str(r8595428, "3", 10, MPFR_RNDN);
        mpfr_init(r8595429);
        mpfr_init(r8595430);
        mpfr_init(r8595431);
        mpfr_init(r8595432);
        mpfr_init_set_str(r8595433, "-0.001587", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595434, "5", 10, MPFR_RNDN);
        mpfr_init(r8595435);
        mpfr_init(r8595436);
        mpfr_init(r8595437);
        mpfr_init(r8595438);
        mpfr_init_set_str(r8595439, "14.0", 10, MPFR_RNDN);
        mpfr_init(r8595440);
        mpfr_init(r8595441);
        mpfr_init_set_str(r8595442, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r8595443);
        mpfr_init_set_str(r8595444, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8595445);
        mpfr_init(r8595446);
        mpfr_init(r8595447);
        mpfr_init_set_str(r8595448, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r8595449);
        mpfr_init_set_str(r8595450, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r8595451);
        mpfr_init(r8595452);
        mpfr_init(r8595453);
        mpfr_init_set_str(r8595454, "-0.466667", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595455, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r8595456);
        mpfr_init(r8595457);
        mpfr_init(r8595458);
        mpfr_init(r8595459);
        mpfr_init(r8595460);
}

double f_fm(double x) {
        mpfr_set_d(r8595424, x, MPFR_RNDN);
        ;
        mpfr_mul(r8595426, r8595424, r8595425, MPFR_RNDN);
        mpfr_mul(r8595427, r8595426, r8595424, MPFR_RNDN);
        ;
        mpfr_pow(r8595429, r8595424, r8595428, MPFR_RNDN);
        mpfr_mul(r8595430, r8595429, r8595429, MPFR_RNDN);
        mpfr_mul(r8595431, r8595427, r8595430, MPFR_RNDN);
        mpfr_mul(r8595432, r8595424, r8595424, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8595435, r8595424, r8595434, MPFR_RNDN);
        mpfr_mul(r8595436, r8595433, r8595435, MPFR_RNDN);
        mpfr_mul(r8595437, r8595432, r8595436, MPFR_RNDN);
        mpfr_add(r8595438, r8595431, r8595437, MPFR_RNDN);
        ;
        mpfr_mul(r8595440, r8595424, r8595439, MPFR_RNDN);
        mpfr_mul(r8595441, r8595440, r8595424, MPFR_RNDN);
        ;
        mpfr_mul(r8595443, r8595424, r8595442, MPFR_RNDN);
        ;
        mpfr_add(r8595445, r8595443, r8595444, MPFR_RNDN);
        mpfr_add(r8595446, r8595441, r8595445, MPFR_RNDN);
        mpfr_add(r8595447, r8595438, r8595446, MPFR_RNDN);
        ;
        mpfr_mul(r8595449, r8595448, r8595424, MPFR_RNDN);
        ;
        mpfr_add(r8595451, r8595449, r8595450, MPFR_RNDN);
        mpfr_mul(r8595452, r8595429, r8595451, MPFR_RNDN);
        mpfr_mul(r8595453, r8595429, r8595432, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8595456, r8595455, r8595424, MPFR_RNDN);
        mpfr_add(r8595457, r8595454, r8595456, MPFR_RNDN);
        mpfr_mul(r8595458, r8595453, r8595457, MPFR_RNDN);
        mpfr_add(r8595459, r8595452, r8595458, MPFR_RNDN);
        mpfr_add(r8595460, r8595447, r8595459, MPFR_RNDN);
        return mpfr_get_d(r8595460, MPFR_RNDN);
}

static mpfr_t r8595461, r8595462, r8595463, r8595464, r8595465, r8595466, r8595467, r8595468, r8595469, r8595470, r8595471, r8595472, r8595473, r8595474, r8595475, r8595476, r8595477, r8595478, r8595479, r8595480, r8595481, r8595482, r8595483, r8595484, r8595485, r8595486, r8595487, r8595488, r8595489, r8595490, r8595491, r8595492, r8595493, r8595494, r8595495, r8595496, r8595497;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8595461);
        mpfr_init_set_str(r8595462, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r8595463);
        mpfr_init(r8595464);
        mpfr_init_set_str(r8595465, "3", 10, MPFR_RNDN);
        mpfr_init(r8595466);
        mpfr_init(r8595467);
        mpfr_init(r8595468);
        mpfr_init(r8595469);
        mpfr_init_set_str(r8595470, "-0.001587", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595471, "5", 10, MPFR_RNDN);
        mpfr_init(r8595472);
        mpfr_init(r8595473);
        mpfr_init(r8595474);
        mpfr_init(r8595475);
        mpfr_init_set_str(r8595476, "14.0", 10, MPFR_RNDN);
        mpfr_init(r8595477);
        mpfr_init(r8595478);
        mpfr_init_set_str(r8595479, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r8595480);
        mpfr_init_set_str(r8595481, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8595482);
        mpfr_init(r8595483);
        mpfr_init(r8595484);
        mpfr_init_set_str(r8595485, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r8595486);
        mpfr_init_set_str(r8595487, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r8595488);
        mpfr_init(r8595489);
        mpfr_init(r8595490);
        mpfr_init_set_str(r8595491, "-0.466667", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595492, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r8595493);
        mpfr_init(r8595494);
        mpfr_init(r8595495);
        mpfr_init(r8595496);
        mpfr_init(r8595497);
}

double f_dm(double x) {
        mpfr_set_d(r8595461, x, MPFR_RNDN);
        ;
        mpfr_mul(r8595463, r8595461, r8595462, MPFR_RNDN);
        mpfr_mul(r8595464, r8595463, r8595461, MPFR_RNDN);
        ;
        mpfr_pow(r8595466, r8595461, r8595465, MPFR_RNDN);
        mpfr_mul(r8595467, r8595466, r8595466, MPFR_RNDN);
        mpfr_mul(r8595468, r8595464, r8595467, MPFR_RNDN);
        mpfr_mul(r8595469, r8595461, r8595461, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8595472, r8595461, r8595471, MPFR_RNDN);
        mpfr_mul(r8595473, r8595470, r8595472, MPFR_RNDN);
        mpfr_mul(r8595474, r8595469, r8595473, MPFR_RNDN);
        mpfr_add(r8595475, r8595468, r8595474, MPFR_RNDN);
        ;
        mpfr_mul(r8595477, r8595461, r8595476, MPFR_RNDN);
        mpfr_mul(r8595478, r8595477, r8595461, MPFR_RNDN);
        ;
        mpfr_mul(r8595480, r8595461, r8595479, MPFR_RNDN);
        ;
        mpfr_add(r8595482, r8595480, r8595481, MPFR_RNDN);
        mpfr_add(r8595483, r8595478, r8595482, MPFR_RNDN);
        mpfr_add(r8595484, r8595475, r8595483, MPFR_RNDN);
        ;
        mpfr_mul(r8595486, r8595485, r8595461, MPFR_RNDN);
        ;
        mpfr_add(r8595488, r8595486, r8595487, MPFR_RNDN);
        mpfr_mul(r8595489, r8595466, r8595488, MPFR_RNDN);
        mpfr_mul(r8595490, r8595466, r8595469, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8595493, r8595492, r8595461, MPFR_RNDN);
        mpfr_add(r8595494, r8595491, r8595493, MPFR_RNDN);
        mpfr_mul(r8595495, r8595490, r8595494, MPFR_RNDN);
        mpfr_add(r8595496, r8595489, r8595495, MPFR_RNDN);
        mpfr_add(r8595497, r8595484, r8595496, MPFR_RNDN);
        return mpfr_get_d(r8595497, MPFR_RNDN);
}

