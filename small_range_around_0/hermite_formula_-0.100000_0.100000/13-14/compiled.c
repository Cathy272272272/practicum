#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r6328310 = -17297280.0;
        float r6328311 = 242161920.0;
        float r6328312 = x;
        float r6328313 = r6328312 * r6328312;
        float r6328314 = r6328311 * r6328313;
        float r6328315 = r6328310 + r6328314;
        float r6328316 = -484323840.0;
        float r6328317 = r6328313 * r6328312;
        float r6328318 = r6328317 * r6328312;
        float r6328319 = r6328316 * r6328318;
        float r6328320 = r6328315 + r6328319;
        float r6328321 = 322882560.0;
        float r6328322 = r6328318 * r6328312;
        float r6328323 = r6328322 * r6328312;
        float r6328324 = r6328321 * r6328323;
        float r6328325 = r6328320 + r6328324;
        float r6328326 = -92252160.0;
        float r6328327 = r6328323 * r6328312;
        float r6328328 = r6328327 * r6328312;
        float r6328329 = r6328326 * r6328328;
        float r6328330 = r6328325 + r6328329;
        float r6328331 = 12300288.0;
        float r6328332 = r6328328 * r6328312;
        float r6328333 = r6328332 * r6328312;
        float r6328334 = r6328331 * r6328333;
        float r6328335 = r6328330 + r6328334;
        float r6328336 = -745472.0;
        float r6328337 = r6328333 * r6328312;
        float r6328338 = r6328337 * r6328312;
        float r6328339 = r6328336 * r6328338;
        float r6328340 = r6328335 + r6328339;
        float r6328341 = 16384.0;
        float r6328342 = r6328338 * r6328312;
        float r6328343 = r6328342 * r6328312;
        float r6328344 = r6328341 * r6328343;
        float r6328345 = r6328340 + r6328344;
        return r6328345;
}

double f_id(double x) {
        double r6328346 = -17297280.0;
        double r6328347 = 242161920.0;
        double r6328348 = x;
        double r6328349 = r6328348 * r6328348;
        double r6328350 = r6328347 * r6328349;
        double r6328351 = r6328346 + r6328350;
        double r6328352 = -484323840.0;
        double r6328353 = r6328349 * r6328348;
        double r6328354 = r6328353 * r6328348;
        double r6328355 = r6328352 * r6328354;
        double r6328356 = r6328351 + r6328355;
        double r6328357 = 322882560.0;
        double r6328358 = r6328354 * r6328348;
        double r6328359 = r6328358 * r6328348;
        double r6328360 = r6328357 * r6328359;
        double r6328361 = r6328356 + r6328360;
        double r6328362 = -92252160.0;
        double r6328363 = r6328359 * r6328348;
        double r6328364 = r6328363 * r6328348;
        double r6328365 = r6328362 * r6328364;
        double r6328366 = r6328361 + r6328365;
        double r6328367 = 12300288.0;
        double r6328368 = r6328364 * r6328348;
        double r6328369 = r6328368 * r6328348;
        double r6328370 = r6328367 * r6328369;
        double r6328371 = r6328366 + r6328370;
        double r6328372 = -745472.0;
        double r6328373 = r6328369 * r6328348;
        double r6328374 = r6328373 * r6328348;
        double r6328375 = r6328372 * r6328374;
        double r6328376 = r6328371 + r6328375;
        double r6328377 = 16384.0;
        double r6328378 = r6328374 * r6328348;
        double r6328379 = r6328378 * r6328348;
        double r6328380 = r6328377 * r6328379;
        double r6328381 = r6328376 + r6328380;
        return r6328381;
}


double f_of(float x) {
        float r6328382 = x;
        float r6328383 = r6328382 * r6328382;
        float r6328384 = r6328383 * r6328383;
        float r6328385 = r6328384 * r6328384;
        float r6328386 = r6328384 * r6328385;
        float r6328387 = 16384.0;
        float r6328388 = r6328382 * r6328387;
        float r6328389 = r6328382 * r6328388;
        float r6328390 = -745472.0;
        float r6328391 = r6328389 + r6328390;
        float r6328392 = r6328386 * r6328391;
        float r6328393 = 242161920.0;
        float r6328394 = r6328382 * r6328393;
        float r6328395 = r6328394 * r6328382;
        float r6328396 = -17297280.0;
        float r6328397 = r6328395 + r6328396;
        float r6328398 = -484323840.0;
        float r6328399 = 322882560.0;
        float r6328400 = r6328399 * r6328382;
        float r6328401 = r6328382 * r6328400;
        float r6328402 = r6328398 + r6328401;
        float r6328403 = r6328384 * r6328402;
        float r6328404 = r6328397 + r6328403;
        float r6328405 = r6328392 + r6328404;
        float r6328406 = 12300288.0;
        float r6328407 = r6328406 * r6328383;
        float r6328408 = -92252160.0;
        float r6328409 = r6328407 + r6328408;
        float r6328410 = r6328385 * r6328409;
        float r6328411 = r6328405 + r6328410;
        return r6328411;
}

double f_od(double x) {
        double r6328412 = x;
        double r6328413 = r6328412 * r6328412;
        double r6328414 = r6328413 * r6328413;
        double r6328415 = r6328414 * r6328414;
        double r6328416 = r6328414 * r6328415;
        double r6328417 = 16384.0;
        double r6328418 = r6328412 * r6328417;
        double r6328419 = r6328412 * r6328418;
        double r6328420 = -745472.0;
        double r6328421 = r6328419 + r6328420;
        double r6328422 = r6328416 * r6328421;
        double r6328423 = 242161920.0;
        double r6328424 = r6328412 * r6328423;
        double r6328425 = r6328424 * r6328412;
        double r6328426 = -17297280.0;
        double r6328427 = r6328425 + r6328426;
        double r6328428 = -484323840.0;
        double r6328429 = 322882560.0;
        double r6328430 = r6328429 * r6328412;
        double r6328431 = r6328412 * r6328430;
        double r6328432 = r6328428 + r6328431;
        double r6328433 = r6328414 * r6328432;
        double r6328434 = r6328427 + r6328433;
        double r6328435 = r6328422 + r6328434;
        double r6328436 = 12300288.0;
        double r6328437 = r6328436 * r6328413;
        double r6328438 = -92252160.0;
        double r6328439 = r6328437 + r6328438;
        double r6328440 = r6328415 * r6328439;
        double r6328441 = r6328435 + r6328440;
        return r6328441;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6328442, r6328443, r6328444, r6328445, r6328446, r6328447, r6328448, r6328449, r6328450, r6328451, r6328452, r6328453, r6328454, r6328455, r6328456, r6328457, r6328458, r6328459, r6328460, r6328461, r6328462, r6328463, r6328464, r6328465, r6328466, r6328467, r6328468, r6328469, r6328470, r6328471, r6328472, r6328473, r6328474, r6328475, r6328476, r6328477;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6328442, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328443, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r6328444);
        mpfr_init(r6328445);
        mpfr_init(r6328446);
        mpfr_init(r6328447);
        mpfr_init_set_str(r6328448, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r6328449);
        mpfr_init(r6328450);
        mpfr_init(r6328451);
        mpfr_init(r6328452);
        mpfr_init_set_str(r6328453, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r6328454);
        mpfr_init(r6328455);
        mpfr_init(r6328456);
        mpfr_init(r6328457);
        mpfr_init_set_str(r6328458, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r6328459);
        mpfr_init(r6328460);
        mpfr_init(r6328461);
        mpfr_init(r6328462);
        mpfr_init_set_str(r6328463, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r6328464);
        mpfr_init(r6328465);
        mpfr_init(r6328466);
        mpfr_init(r6328467);
        mpfr_init_set_str(r6328468, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r6328469);
        mpfr_init(r6328470);
        mpfr_init(r6328471);
        mpfr_init(r6328472);
        mpfr_init_set_str(r6328473, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r6328474);
        mpfr_init(r6328475);
        mpfr_init(r6328476);
        mpfr_init(r6328477);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6328444, x, MPFR_RNDN);
        mpfr_mul(r6328445, r6328444, r6328444, MPFR_RNDN);
        mpfr_mul(r6328446, r6328443, r6328445, MPFR_RNDN);
        mpfr_add(r6328447, r6328442, r6328446, MPFR_RNDN);
        ;
        mpfr_mul(r6328449, r6328445, r6328444, MPFR_RNDN);
        mpfr_mul(r6328450, r6328449, r6328444, MPFR_RNDN);
        mpfr_mul(r6328451, r6328448, r6328450, MPFR_RNDN);
        mpfr_add(r6328452, r6328447, r6328451, MPFR_RNDN);
        ;
        mpfr_mul(r6328454, r6328450, r6328444, MPFR_RNDN);
        mpfr_mul(r6328455, r6328454, r6328444, MPFR_RNDN);
        mpfr_mul(r6328456, r6328453, r6328455, MPFR_RNDN);
        mpfr_add(r6328457, r6328452, r6328456, MPFR_RNDN);
        ;
        mpfr_mul(r6328459, r6328455, r6328444, MPFR_RNDN);
        mpfr_mul(r6328460, r6328459, r6328444, MPFR_RNDN);
        mpfr_mul(r6328461, r6328458, r6328460, MPFR_RNDN);
        mpfr_add(r6328462, r6328457, r6328461, MPFR_RNDN);
        ;
        mpfr_mul(r6328464, r6328460, r6328444, MPFR_RNDN);
        mpfr_mul(r6328465, r6328464, r6328444, MPFR_RNDN);
        mpfr_mul(r6328466, r6328463, r6328465, MPFR_RNDN);
        mpfr_add(r6328467, r6328462, r6328466, MPFR_RNDN);
        ;
        mpfr_mul(r6328469, r6328465, r6328444, MPFR_RNDN);
        mpfr_mul(r6328470, r6328469, r6328444, MPFR_RNDN);
        mpfr_mul(r6328471, r6328468, r6328470, MPFR_RNDN);
        mpfr_add(r6328472, r6328467, r6328471, MPFR_RNDN);
        ;
        mpfr_mul(r6328474, r6328470, r6328444, MPFR_RNDN);
        mpfr_mul(r6328475, r6328474, r6328444, MPFR_RNDN);
        mpfr_mul(r6328476, r6328473, r6328475, MPFR_RNDN);
        mpfr_add(r6328477, r6328472, r6328476, MPFR_RNDN);
        return mpfr_get_d(r6328477, MPFR_RNDN);
}

static mpfr_t r6328478, r6328479, r6328480, r6328481, r6328482, r6328483, r6328484, r6328485, r6328486, r6328487, r6328488, r6328489, r6328490, r6328491, r6328492, r6328493, r6328494, r6328495, r6328496, r6328497, r6328498, r6328499, r6328500, r6328501, r6328502, r6328503, r6328504, r6328505, r6328506, r6328507;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6328478);
        mpfr_init(r6328479);
        mpfr_init(r6328480);
        mpfr_init(r6328481);
        mpfr_init(r6328482);
        mpfr_init_set_str(r6328483, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r6328484);
        mpfr_init(r6328485);
        mpfr_init_set_str(r6328486, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r6328487);
        mpfr_init(r6328488);
        mpfr_init_set_str(r6328489, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r6328490);
        mpfr_init(r6328491);
        mpfr_init_set_str(r6328492, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r6328493);
        mpfr_init_set_str(r6328494, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328495, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r6328496);
        mpfr_init(r6328497);
        mpfr_init(r6328498);
        mpfr_init(r6328499);
        mpfr_init(r6328500);
        mpfr_init(r6328501);
        mpfr_init_set_str(r6328502, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r6328503);
        mpfr_init_set_str(r6328504, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r6328505);
        mpfr_init(r6328506);
        mpfr_init(r6328507);
}

double f_fm(double x) {
        mpfr_set_d(r6328478, x, MPFR_RNDN);
        mpfr_mul(r6328479, r6328478, r6328478, MPFR_RNDN);
        mpfr_mul(r6328480, r6328479, r6328479, MPFR_RNDN);
        mpfr_mul(r6328481, r6328480, r6328480, MPFR_RNDN);
        mpfr_mul(r6328482, r6328480, r6328481, MPFR_RNDN);
        ;
        mpfr_mul(r6328484, r6328478, r6328483, MPFR_RNDN);
        mpfr_mul(r6328485, r6328478, r6328484, MPFR_RNDN);
        ;
        mpfr_add(r6328487, r6328485, r6328486, MPFR_RNDN);
        mpfr_mul(r6328488, r6328482, r6328487, MPFR_RNDN);
        ;
        mpfr_mul(r6328490, r6328478, r6328489, MPFR_RNDN);
        mpfr_mul(r6328491, r6328490, r6328478, MPFR_RNDN);
        ;
        mpfr_add(r6328493, r6328491, r6328492, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328496, r6328495, r6328478, MPFR_RNDN);
        mpfr_mul(r6328497, r6328478, r6328496, MPFR_RNDN);
        mpfr_add(r6328498, r6328494, r6328497, MPFR_RNDN);
        mpfr_mul(r6328499, r6328480, r6328498, MPFR_RNDN);
        mpfr_add(r6328500, r6328493, r6328499, MPFR_RNDN);
        mpfr_add(r6328501, r6328488, r6328500, MPFR_RNDN);
        ;
        mpfr_mul(r6328503, r6328502, r6328479, MPFR_RNDN);
        ;
        mpfr_add(r6328505, r6328503, r6328504, MPFR_RNDN);
        mpfr_mul(r6328506, r6328481, r6328505, MPFR_RNDN);
        mpfr_add(r6328507, r6328501, r6328506, MPFR_RNDN);
        return mpfr_get_d(r6328507, MPFR_RNDN);
}

static mpfr_t r6328508, r6328509, r6328510, r6328511, r6328512, r6328513, r6328514, r6328515, r6328516, r6328517, r6328518, r6328519, r6328520, r6328521, r6328522, r6328523, r6328524, r6328525, r6328526, r6328527, r6328528, r6328529, r6328530, r6328531, r6328532, r6328533, r6328534, r6328535, r6328536, r6328537;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6328508);
        mpfr_init(r6328509);
        mpfr_init(r6328510);
        mpfr_init(r6328511);
        mpfr_init(r6328512);
        mpfr_init_set_str(r6328513, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r6328514);
        mpfr_init(r6328515);
        mpfr_init_set_str(r6328516, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r6328517);
        mpfr_init(r6328518);
        mpfr_init_set_str(r6328519, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r6328520);
        mpfr_init(r6328521);
        mpfr_init_set_str(r6328522, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r6328523);
        mpfr_init_set_str(r6328524, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328525, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r6328526);
        mpfr_init(r6328527);
        mpfr_init(r6328528);
        mpfr_init(r6328529);
        mpfr_init(r6328530);
        mpfr_init(r6328531);
        mpfr_init_set_str(r6328532, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r6328533);
        mpfr_init_set_str(r6328534, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r6328535);
        mpfr_init(r6328536);
        mpfr_init(r6328537);
}

double f_dm(double x) {
        mpfr_set_d(r6328508, x, MPFR_RNDN);
        mpfr_mul(r6328509, r6328508, r6328508, MPFR_RNDN);
        mpfr_mul(r6328510, r6328509, r6328509, MPFR_RNDN);
        mpfr_mul(r6328511, r6328510, r6328510, MPFR_RNDN);
        mpfr_mul(r6328512, r6328510, r6328511, MPFR_RNDN);
        ;
        mpfr_mul(r6328514, r6328508, r6328513, MPFR_RNDN);
        mpfr_mul(r6328515, r6328508, r6328514, MPFR_RNDN);
        ;
        mpfr_add(r6328517, r6328515, r6328516, MPFR_RNDN);
        mpfr_mul(r6328518, r6328512, r6328517, MPFR_RNDN);
        ;
        mpfr_mul(r6328520, r6328508, r6328519, MPFR_RNDN);
        mpfr_mul(r6328521, r6328520, r6328508, MPFR_RNDN);
        ;
        mpfr_add(r6328523, r6328521, r6328522, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328526, r6328525, r6328508, MPFR_RNDN);
        mpfr_mul(r6328527, r6328508, r6328526, MPFR_RNDN);
        mpfr_add(r6328528, r6328524, r6328527, MPFR_RNDN);
        mpfr_mul(r6328529, r6328510, r6328528, MPFR_RNDN);
        mpfr_add(r6328530, r6328523, r6328529, MPFR_RNDN);
        mpfr_add(r6328531, r6328518, r6328530, MPFR_RNDN);
        ;
        mpfr_mul(r6328533, r6328532, r6328509, MPFR_RNDN);
        ;
        mpfr_add(r6328535, r6328533, r6328534, MPFR_RNDN);
        mpfr_mul(r6328536, r6328511, r6328535, MPFR_RNDN);
        mpfr_add(r6328537, r6328531, r6328536, MPFR_RNDN);
        return mpfr_get_d(r6328537, MPFR_RNDN);
}

