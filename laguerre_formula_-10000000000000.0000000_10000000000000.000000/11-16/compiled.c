#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r11589221 = 1.0;
        float r11589222 = -16.0;
        float r11589223 = x;
        float r11589224 = r11589222 * r11589223;
        float r11589225 = r11589221 + r11589224;
        float r11589226 = 60.0;
        float r11589227 = r11589223 * r11589223;
        float r11589228 = r11589226 * r11589227;
        float r11589229 = r11589225 + r11589228;
        float r11589230 = -93.333333;
        float r11589231 = r11589227 * r11589223;
        float r11589232 = r11589230 * r11589231;
        float r11589233 = r11589229 + r11589232;
        float r11589234 = 75.833333;
        float r11589235 = r11589231 * r11589223;
        float r11589236 = r11589234 * r11589235;
        float r11589237 = r11589233 + r11589236;
        float r11589238 = -36.4;
        float r11589239 = r11589235 * r11589223;
        float r11589240 = r11589238 * r11589239;
        float r11589241 = r11589237 + r11589240;
        float r11589242 = 11.122222;
        float r11589243 = r11589239 * r11589223;
        float r11589244 = r11589242 * r11589243;
        float r11589245 = r11589241 + r11589244;
        float r11589246 = -2.269841;
        float r11589247 = r11589243 * r11589223;
        float r11589248 = r11589246 * r11589247;
        float r11589249 = r11589245 + r11589248;
        float r11589250 = 0.319196;
        float r11589251 = r11589247 * r11589223;
        float r11589252 = r11589250 * r11589251;
        float r11589253 = r11589249 + r11589252;
        float r11589254 = -0.031526;
        float r11589255 = r11589251 * r11589223;
        float r11589256 = r11589254 * r11589255;
        float r11589257 = r11589253 + r11589256;
        float r11589258 = 0.002207;
        float r11589259 = r11589255 * r11589223;
        float r11589260 = r11589258 * r11589259;
        float r11589261 = r11589257 + r11589260;
        float r11589262 = -0.000109;
        float r11589263 = r11589259 * r11589223;
        float r11589264 = r11589262 * r11589263;
        float r11589265 = r11589261 + r11589264;
        float r11589266 = 4e-06;
        float r11589267 = r11589263 * r11589223;
        float r11589268 = r11589266 * r11589267;
        float r11589269 = r11589265 + r11589268;
        return r11589269;
}

double f_id(double x) {
        double r11589270 = 1.0;
        double r11589271 = -16.0;
        double r11589272 = x;
        double r11589273 = r11589271 * r11589272;
        double r11589274 = r11589270 + r11589273;
        double r11589275 = 60.0;
        double r11589276 = r11589272 * r11589272;
        double r11589277 = r11589275 * r11589276;
        double r11589278 = r11589274 + r11589277;
        double r11589279 = -93.333333;
        double r11589280 = r11589276 * r11589272;
        double r11589281 = r11589279 * r11589280;
        double r11589282 = r11589278 + r11589281;
        double r11589283 = 75.833333;
        double r11589284 = r11589280 * r11589272;
        double r11589285 = r11589283 * r11589284;
        double r11589286 = r11589282 + r11589285;
        double r11589287 = -36.4;
        double r11589288 = r11589284 * r11589272;
        double r11589289 = r11589287 * r11589288;
        double r11589290 = r11589286 + r11589289;
        double r11589291 = 11.122222;
        double r11589292 = r11589288 * r11589272;
        double r11589293 = r11589291 * r11589292;
        double r11589294 = r11589290 + r11589293;
        double r11589295 = -2.269841;
        double r11589296 = r11589292 * r11589272;
        double r11589297 = r11589295 * r11589296;
        double r11589298 = r11589294 + r11589297;
        double r11589299 = 0.319196;
        double r11589300 = r11589296 * r11589272;
        double r11589301 = r11589299 * r11589300;
        double r11589302 = r11589298 + r11589301;
        double r11589303 = -0.031526;
        double r11589304 = r11589300 * r11589272;
        double r11589305 = r11589303 * r11589304;
        double r11589306 = r11589302 + r11589305;
        double r11589307 = 0.002207;
        double r11589308 = r11589304 * r11589272;
        double r11589309 = r11589307 * r11589308;
        double r11589310 = r11589306 + r11589309;
        double r11589311 = -0.000109;
        double r11589312 = r11589308 * r11589272;
        double r11589313 = r11589311 * r11589312;
        double r11589314 = r11589310 + r11589313;
        double r11589315 = 4e-06;
        double r11589316 = r11589312 * r11589272;
        double r11589317 = r11589315 * r11589316;
        double r11589318 = r11589314 + r11589317;
        return r11589318;
}


double f_of(float x) {
        float r11589319 = 1.0;
        float r11589320 = -16.0;
        float r11589321 = x;
        float r11589322 = r11589320 * r11589321;
        float r11589323 = r11589319 + r11589322;
        float r11589324 = 60.0;
        float r11589325 = r11589321 * r11589321;
        float r11589326 = r11589324 * r11589325;
        float r11589327 = log(r11589326);
        float r11589328 = exp(r11589327);
        float r11589329 = r11589323 + r11589328;
        float r11589330 = -93.333333;
        float r11589331 = r11589325 * r11589321;
        float r11589332 = r11589330 * r11589331;
        float r11589333 = r11589329 + r11589332;
        float r11589334 = 75.833333;
        float r11589335 = r11589331 * r11589321;
        float r11589336 = r11589334 * r11589335;
        float r11589337 = r11589333 + r11589336;
        float r11589338 = -36.4;
        float r11589339 = r11589335 * r11589321;
        float r11589340 = r11589338 * r11589339;
        float r11589341 = r11589337 + r11589340;
        float r11589342 = 11.122222;
        float r11589343 = r11589339 * r11589321;
        float r11589344 = r11589342 * r11589343;
        float r11589345 = r11589341 + r11589344;
        float r11589346 = -2.269841;
        float r11589347 = r11589343 * r11589321;
        float r11589348 = r11589346 * r11589347;
        float r11589349 = r11589345 + r11589348;
        float r11589350 = 0.319196;
        float r11589351 = r11589347 * r11589321;
        float r11589352 = r11589350 * r11589351;
        float r11589353 = r11589349 + r11589352;
        float r11589354 = -0.031526;
        float r11589355 = r11589351 * r11589321;
        float r11589356 = r11589354 * r11589355;
        float r11589357 = r11589353 + r11589356;
        float r11589358 = 0.002207;
        float r11589359 = r11589355 * r11589321;
        float r11589360 = r11589358 * r11589359;
        float r11589361 = r11589357 + r11589360;
        float r11589362 = -0.000109;
        float r11589363 = r11589359 * r11589321;
        float r11589364 = r11589362 * r11589363;
        float r11589365 = r11589361 + r11589364;
        float r11589366 = 4e-06;
        float r11589367 = r11589363 * r11589321;
        float r11589368 = r11589366 * r11589367;
        float r11589369 = r11589365 + r11589368;
        return r11589369;
}

double f_od(double x) {
        double r11589370 = 1.0;
        double r11589371 = -16.0;
        double r11589372 = x;
        double r11589373 = r11589371 * r11589372;
        double r11589374 = r11589370 + r11589373;
        double r11589375 = 60.0;
        double r11589376 = r11589372 * r11589372;
        double r11589377 = r11589375 * r11589376;
        double r11589378 = log(r11589377);
        double r11589379 = exp(r11589378);
        double r11589380 = r11589374 + r11589379;
        double r11589381 = -93.333333;
        double r11589382 = r11589376 * r11589372;
        double r11589383 = r11589381 * r11589382;
        double r11589384 = r11589380 + r11589383;
        double r11589385 = 75.833333;
        double r11589386 = r11589382 * r11589372;
        double r11589387 = r11589385 * r11589386;
        double r11589388 = r11589384 + r11589387;
        double r11589389 = -36.4;
        double r11589390 = r11589386 * r11589372;
        double r11589391 = r11589389 * r11589390;
        double r11589392 = r11589388 + r11589391;
        double r11589393 = 11.122222;
        double r11589394 = r11589390 * r11589372;
        double r11589395 = r11589393 * r11589394;
        double r11589396 = r11589392 + r11589395;
        double r11589397 = -2.269841;
        double r11589398 = r11589394 * r11589372;
        double r11589399 = r11589397 * r11589398;
        double r11589400 = r11589396 + r11589399;
        double r11589401 = 0.319196;
        double r11589402 = r11589398 * r11589372;
        double r11589403 = r11589401 * r11589402;
        double r11589404 = r11589400 + r11589403;
        double r11589405 = -0.031526;
        double r11589406 = r11589402 * r11589372;
        double r11589407 = r11589405 * r11589406;
        double r11589408 = r11589404 + r11589407;
        double r11589409 = 0.002207;
        double r11589410 = r11589406 * r11589372;
        double r11589411 = r11589409 * r11589410;
        double r11589412 = r11589408 + r11589411;
        double r11589413 = -0.000109;
        double r11589414 = r11589410 * r11589372;
        double r11589415 = r11589413 * r11589414;
        double r11589416 = r11589412 + r11589415;
        double r11589417 = 4e-06;
        double r11589418 = r11589414 * r11589372;
        double r11589419 = r11589417 * r11589418;
        double r11589420 = r11589416 + r11589419;
        return r11589420;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11589421, r11589422, r11589423, r11589424, r11589425, r11589426, r11589427, r11589428, r11589429, r11589430, r11589431, r11589432, r11589433, r11589434, r11589435, r11589436, r11589437, r11589438, r11589439, r11589440, r11589441, r11589442, r11589443, r11589444, r11589445, r11589446, r11589447, r11589448, r11589449, r11589450, r11589451, r11589452, r11589453, r11589454, r11589455, r11589456, r11589457, r11589458, r11589459, r11589460, r11589461, r11589462, r11589463, r11589464, r11589465, r11589466, r11589467, r11589468, r11589469;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11589421, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11589422, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r11589423);
        mpfr_init(r11589424);
        mpfr_init(r11589425);
        mpfr_init_set_str(r11589426, "60.0", 10, MPFR_RNDN);
        mpfr_init(r11589427);
        mpfr_init(r11589428);
        mpfr_init(r11589429);
        mpfr_init_set_str(r11589430, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r11589431);
        mpfr_init(r11589432);
        mpfr_init(r11589433);
        mpfr_init_set_str(r11589434, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r11589435);
        mpfr_init(r11589436);
        mpfr_init(r11589437);
        mpfr_init_set_str(r11589438, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r11589439);
        mpfr_init(r11589440);
        mpfr_init(r11589441);
        mpfr_init_set_str(r11589442, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r11589443);
        mpfr_init(r11589444);
        mpfr_init(r11589445);
        mpfr_init_set_str(r11589446, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r11589447);
        mpfr_init(r11589448);
        mpfr_init(r11589449);
        mpfr_init_set_str(r11589450, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r11589451);
        mpfr_init(r11589452);
        mpfr_init(r11589453);
        mpfr_init_set_str(r11589454, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r11589455);
        mpfr_init(r11589456);
        mpfr_init(r11589457);
        mpfr_init_set_str(r11589458, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r11589459);
        mpfr_init(r11589460);
        mpfr_init(r11589461);
        mpfr_init_set_str(r11589462, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r11589463);
        mpfr_init(r11589464);
        mpfr_init(r11589465);
        mpfr_init_set_str(r11589466, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r11589467);
        mpfr_init(r11589468);
        mpfr_init(r11589469);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11589423, x, MPFR_RNDN);
        mpfr_mul(r11589424, r11589422, r11589423, MPFR_RNDN);
        mpfr_add(r11589425, r11589421, r11589424, MPFR_RNDN);
        ;
        mpfr_mul(r11589427, r11589423, r11589423, MPFR_RNDN);
        mpfr_mul(r11589428, r11589426, r11589427, MPFR_RNDN);
        mpfr_add(r11589429, r11589425, r11589428, MPFR_RNDN);
        ;
        mpfr_mul(r11589431, r11589427, r11589423, MPFR_RNDN);
        mpfr_mul(r11589432, r11589430, r11589431, MPFR_RNDN);
        mpfr_add(r11589433, r11589429, r11589432, MPFR_RNDN);
        ;
        mpfr_mul(r11589435, r11589431, r11589423, MPFR_RNDN);
        mpfr_mul(r11589436, r11589434, r11589435, MPFR_RNDN);
        mpfr_add(r11589437, r11589433, r11589436, MPFR_RNDN);
        ;
        mpfr_mul(r11589439, r11589435, r11589423, MPFR_RNDN);
        mpfr_mul(r11589440, r11589438, r11589439, MPFR_RNDN);
        mpfr_add(r11589441, r11589437, r11589440, MPFR_RNDN);
        ;
        mpfr_mul(r11589443, r11589439, r11589423, MPFR_RNDN);
        mpfr_mul(r11589444, r11589442, r11589443, MPFR_RNDN);
        mpfr_add(r11589445, r11589441, r11589444, MPFR_RNDN);
        ;
        mpfr_mul(r11589447, r11589443, r11589423, MPFR_RNDN);
        mpfr_mul(r11589448, r11589446, r11589447, MPFR_RNDN);
        mpfr_add(r11589449, r11589445, r11589448, MPFR_RNDN);
        ;
        mpfr_mul(r11589451, r11589447, r11589423, MPFR_RNDN);
        mpfr_mul(r11589452, r11589450, r11589451, MPFR_RNDN);
        mpfr_add(r11589453, r11589449, r11589452, MPFR_RNDN);
        ;
        mpfr_mul(r11589455, r11589451, r11589423, MPFR_RNDN);
        mpfr_mul(r11589456, r11589454, r11589455, MPFR_RNDN);
        mpfr_add(r11589457, r11589453, r11589456, MPFR_RNDN);
        ;
        mpfr_mul(r11589459, r11589455, r11589423, MPFR_RNDN);
        mpfr_mul(r11589460, r11589458, r11589459, MPFR_RNDN);
        mpfr_add(r11589461, r11589457, r11589460, MPFR_RNDN);
        ;
        mpfr_mul(r11589463, r11589459, r11589423, MPFR_RNDN);
        mpfr_mul(r11589464, r11589462, r11589463, MPFR_RNDN);
        mpfr_add(r11589465, r11589461, r11589464, MPFR_RNDN);
        ;
        mpfr_mul(r11589467, r11589463, r11589423, MPFR_RNDN);
        mpfr_mul(r11589468, r11589466, r11589467, MPFR_RNDN);
        mpfr_add(r11589469, r11589465, r11589468, MPFR_RNDN);
        return mpfr_get_d(r11589469, MPFR_RNDN);
}

static mpfr_t r11589470, r11589471, r11589472, r11589473, r11589474, r11589475, r11589476, r11589477, r11589478, r11589479, r11589480, r11589481, r11589482, r11589483, r11589484, r11589485, r11589486, r11589487, r11589488, r11589489, r11589490, r11589491, r11589492, r11589493, r11589494, r11589495, r11589496, r11589497, r11589498, r11589499, r11589500, r11589501, r11589502, r11589503, r11589504, r11589505, r11589506, r11589507, r11589508, r11589509, r11589510, r11589511, r11589512, r11589513, r11589514, r11589515, r11589516, r11589517, r11589518, r11589519, r11589520;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11589470, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11589471, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r11589472);
        mpfr_init(r11589473);
        mpfr_init(r11589474);
        mpfr_init_set_str(r11589475, "60.0", 10, MPFR_RNDN);
        mpfr_init(r11589476);
        mpfr_init(r11589477);
        mpfr_init(r11589478);
        mpfr_init(r11589479);
        mpfr_init(r11589480);
        mpfr_init_set_str(r11589481, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r11589482);
        mpfr_init(r11589483);
        mpfr_init(r11589484);
        mpfr_init_set_str(r11589485, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r11589486);
        mpfr_init(r11589487);
        mpfr_init(r11589488);
        mpfr_init_set_str(r11589489, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r11589490);
        mpfr_init(r11589491);
        mpfr_init(r11589492);
        mpfr_init_set_str(r11589493, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r11589494);
        mpfr_init(r11589495);
        mpfr_init(r11589496);
        mpfr_init_set_str(r11589497, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r11589498);
        mpfr_init(r11589499);
        mpfr_init(r11589500);
        mpfr_init_set_str(r11589501, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r11589502);
        mpfr_init(r11589503);
        mpfr_init(r11589504);
        mpfr_init_set_str(r11589505, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r11589506);
        mpfr_init(r11589507);
        mpfr_init(r11589508);
        mpfr_init_set_str(r11589509, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r11589510);
        mpfr_init(r11589511);
        mpfr_init(r11589512);
        mpfr_init_set_str(r11589513, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r11589514);
        mpfr_init(r11589515);
        mpfr_init(r11589516);
        mpfr_init_set_str(r11589517, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r11589518);
        mpfr_init(r11589519);
        mpfr_init(r11589520);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11589472, x, MPFR_RNDN);
        mpfr_mul(r11589473, r11589471, r11589472, MPFR_RNDN);
        mpfr_add(r11589474, r11589470, r11589473, MPFR_RNDN);
        ;
        mpfr_mul(r11589476, r11589472, r11589472, MPFR_RNDN);
        mpfr_mul(r11589477, r11589475, r11589476, MPFR_RNDN);
        mpfr_log(r11589478, r11589477, MPFR_RNDN);
        mpfr_exp(r11589479, r11589478, MPFR_RNDN);
        mpfr_add(r11589480, r11589474, r11589479, MPFR_RNDN);
        ;
        mpfr_mul(r11589482, r11589476, r11589472, MPFR_RNDN);
        mpfr_mul(r11589483, r11589481, r11589482, MPFR_RNDN);
        mpfr_add(r11589484, r11589480, r11589483, MPFR_RNDN);
        ;
        mpfr_mul(r11589486, r11589482, r11589472, MPFR_RNDN);
        mpfr_mul(r11589487, r11589485, r11589486, MPFR_RNDN);
        mpfr_add(r11589488, r11589484, r11589487, MPFR_RNDN);
        ;
        mpfr_mul(r11589490, r11589486, r11589472, MPFR_RNDN);
        mpfr_mul(r11589491, r11589489, r11589490, MPFR_RNDN);
        mpfr_add(r11589492, r11589488, r11589491, MPFR_RNDN);
        ;
        mpfr_mul(r11589494, r11589490, r11589472, MPFR_RNDN);
        mpfr_mul(r11589495, r11589493, r11589494, MPFR_RNDN);
        mpfr_add(r11589496, r11589492, r11589495, MPFR_RNDN);
        ;
        mpfr_mul(r11589498, r11589494, r11589472, MPFR_RNDN);
        mpfr_mul(r11589499, r11589497, r11589498, MPFR_RNDN);
        mpfr_add(r11589500, r11589496, r11589499, MPFR_RNDN);
        ;
        mpfr_mul(r11589502, r11589498, r11589472, MPFR_RNDN);
        mpfr_mul(r11589503, r11589501, r11589502, MPFR_RNDN);
        mpfr_add(r11589504, r11589500, r11589503, MPFR_RNDN);
        ;
        mpfr_mul(r11589506, r11589502, r11589472, MPFR_RNDN);
        mpfr_mul(r11589507, r11589505, r11589506, MPFR_RNDN);
        mpfr_add(r11589508, r11589504, r11589507, MPFR_RNDN);
        ;
        mpfr_mul(r11589510, r11589506, r11589472, MPFR_RNDN);
        mpfr_mul(r11589511, r11589509, r11589510, MPFR_RNDN);
        mpfr_add(r11589512, r11589508, r11589511, MPFR_RNDN);
        ;
        mpfr_mul(r11589514, r11589510, r11589472, MPFR_RNDN);
        mpfr_mul(r11589515, r11589513, r11589514, MPFR_RNDN);
        mpfr_add(r11589516, r11589512, r11589515, MPFR_RNDN);
        ;
        mpfr_mul(r11589518, r11589514, r11589472, MPFR_RNDN);
        mpfr_mul(r11589519, r11589517, r11589518, MPFR_RNDN);
        mpfr_add(r11589520, r11589516, r11589519, MPFR_RNDN);
        return mpfr_get_d(r11589520, MPFR_RNDN);
}

static mpfr_t r11589521, r11589522, r11589523, r11589524, r11589525, r11589526, r11589527, r11589528, r11589529, r11589530, r11589531, r11589532, r11589533, r11589534, r11589535, r11589536, r11589537, r11589538, r11589539, r11589540, r11589541, r11589542, r11589543, r11589544, r11589545, r11589546, r11589547, r11589548, r11589549, r11589550, r11589551, r11589552, r11589553, r11589554, r11589555, r11589556, r11589557, r11589558, r11589559, r11589560, r11589561, r11589562, r11589563, r11589564, r11589565, r11589566, r11589567, r11589568, r11589569, r11589570, r11589571;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11589521, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11589522, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r11589523);
        mpfr_init(r11589524);
        mpfr_init(r11589525);
        mpfr_init_set_str(r11589526, "60.0", 10, MPFR_RNDN);
        mpfr_init(r11589527);
        mpfr_init(r11589528);
        mpfr_init(r11589529);
        mpfr_init(r11589530);
        mpfr_init(r11589531);
        mpfr_init_set_str(r11589532, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r11589533);
        mpfr_init(r11589534);
        mpfr_init(r11589535);
        mpfr_init_set_str(r11589536, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r11589537);
        mpfr_init(r11589538);
        mpfr_init(r11589539);
        mpfr_init_set_str(r11589540, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r11589541);
        mpfr_init(r11589542);
        mpfr_init(r11589543);
        mpfr_init_set_str(r11589544, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r11589545);
        mpfr_init(r11589546);
        mpfr_init(r11589547);
        mpfr_init_set_str(r11589548, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r11589549);
        mpfr_init(r11589550);
        mpfr_init(r11589551);
        mpfr_init_set_str(r11589552, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r11589553);
        mpfr_init(r11589554);
        mpfr_init(r11589555);
        mpfr_init_set_str(r11589556, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r11589557);
        mpfr_init(r11589558);
        mpfr_init(r11589559);
        mpfr_init_set_str(r11589560, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r11589561);
        mpfr_init(r11589562);
        mpfr_init(r11589563);
        mpfr_init_set_str(r11589564, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r11589565);
        mpfr_init(r11589566);
        mpfr_init(r11589567);
        mpfr_init_set_str(r11589568, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r11589569);
        mpfr_init(r11589570);
        mpfr_init(r11589571);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11589523, x, MPFR_RNDN);
        mpfr_mul(r11589524, r11589522, r11589523, MPFR_RNDN);
        mpfr_add(r11589525, r11589521, r11589524, MPFR_RNDN);
        ;
        mpfr_mul(r11589527, r11589523, r11589523, MPFR_RNDN);
        mpfr_mul(r11589528, r11589526, r11589527, MPFR_RNDN);
        mpfr_log(r11589529, r11589528, MPFR_RNDN);
        mpfr_exp(r11589530, r11589529, MPFR_RNDN);
        mpfr_add(r11589531, r11589525, r11589530, MPFR_RNDN);
        ;
        mpfr_mul(r11589533, r11589527, r11589523, MPFR_RNDN);
        mpfr_mul(r11589534, r11589532, r11589533, MPFR_RNDN);
        mpfr_add(r11589535, r11589531, r11589534, MPFR_RNDN);
        ;
        mpfr_mul(r11589537, r11589533, r11589523, MPFR_RNDN);
        mpfr_mul(r11589538, r11589536, r11589537, MPFR_RNDN);
        mpfr_add(r11589539, r11589535, r11589538, MPFR_RNDN);
        ;
        mpfr_mul(r11589541, r11589537, r11589523, MPFR_RNDN);
        mpfr_mul(r11589542, r11589540, r11589541, MPFR_RNDN);
        mpfr_add(r11589543, r11589539, r11589542, MPFR_RNDN);
        ;
        mpfr_mul(r11589545, r11589541, r11589523, MPFR_RNDN);
        mpfr_mul(r11589546, r11589544, r11589545, MPFR_RNDN);
        mpfr_add(r11589547, r11589543, r11589546, MPFR_RNDN);
        ;
        mpfr_mul(r11589549, r11589545, r11589523, MPFR_RNDN);
        mpfr_mul(r11589550, r11589548, r11589549, MPFR_RNDN);
        mpfr_add(r11589551, r11589547, r11589550, MPFR_RNDN);
        ;
        mpfr_mul(r11589553, r11589549, r11589523, MPFR_RNDN);
        mpfr_mul(r11589554, r11589552, r11589553, MPFR_RNDN);
        mpfr_add(r11589555, r11589551, r11589554, MPFR_RNDN);
        ;
        mpfr_mul(r11589557, r11589553, r11589523, MPFR_RNDN);
        mpfr_mul(r11589558, r11589556, r11589557, MPFR_RNDN);
        mpfr_add(r11589559, r11589555, r11589558, MPFR_RNDN);
        ;
        mpfr_mul(r11589561, r11589557, r11589523, MPFR_RNDN);
        mpfr_mul(r11589562, r11589560, r11589561, MPFR_RNDN);
        mpfr_add(r11589563, r11589559, r11589562, MPFR_RNDN);
        ;
        mpfr_mul(r11589565, r11589561, r11589523, MPFR_RNDN);
        mpfr_mul(r11589566, r11589564, r11589565, MPFR_RNDN);
        mpfr_add(r11589567, r11589563, r11589566, MPFR_RNDN);
        ;
        mpfr_mul(r11589569, r11589565, r11589523, MPFR_RNDN);
        mpfr_mul(r11589570, r11589568, r11589569, MPFR_RNDN);
        mpfr_add(r11589571, r11589567, r11589570, MPFR_RNDN);
        return mpfr_get_d(r11589571, MPFR_RNDN);
}
