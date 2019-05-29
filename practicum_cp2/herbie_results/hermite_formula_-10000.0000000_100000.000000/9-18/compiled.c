#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r4211299 = -17643225600.0;
        float r4211300 = 317578060800.0;
        float r4211301 = x;
        float r4211302 = r4211301 * r4211301;
        float r4211303 = r4211300 * r4211302;
        float r4211304 = r4211299 + r4211303;
        float r4211305 = -846874828800.0;
        float r4211306 = r4211302 * r4211301;
        float r4211307 = r4211306 * r4211301;
        float r4211308 = r4211305 * r4211307;
        float r4211309 = r4211304 + r4211308;
        float r4211310 = 790416506880.0;
        float r4211311 = r4211307 * r4211301;
        float r4211312 = r4211311 * r4211301;
        float r4211313 = r4211310 * r4211312;
        float r4211314 = r4211309 + r4211313;
        float r4211315 = -338749931520.0;
        float r4211316 = r4211312 * r4211301;
        float r4211317 = r4211316 * r4211301;
        float r4211318 = r4211315 * r4211317;
        float r4211319 = r4211314 + r4211318;
        float r4211320 = 75277762560.0;
        float r4211321 = r4211317 * r4211301;
        float r4211322 = r4211321 * r4211301;
        float r4211323 = r4211320 * r4211322;
        float r4211324 = r4211319 + r4211323;
        float r4211325 = -9124577280.0;
        float r4211326 = r4211322 * r4211301;
        float r4211327 = r4211326 * r4211301;
        float r4211328 = r4211325 * r4211327;
        float r4211329 = r4211324 + r4211328;
        float r4211330 = 601620480.0;
        float r4211331 = r4211327 * r4211301;
        float r4211332 = r4211331 * r4211301;
        float r4211333 = r4211330 * r4211332;
        float r4211334 = r4211329 + r4211333;
        float r4211335 = -20054016.0;
        float r4211336 = r4211332 * r4211301;
        float r4211337 = r4211336 * r4211301;
        float r4211338 = r4211335 * r4211337;
        float r4211339 = r4211334 + r4211338;
        float r4211340 = 262144.0;
        float r4211341 = r4211337 * r4211301;
        float r4211342 = r4211341 * r4211301;
        float r4211343 = r4211340 * r4211342;
        float r4211344 = r4211339 + r4211343;
        return r4211344;
}

double f_id(double x) {
        double r4211345 = -17643225600.0;
        double r4211346 = 317578060800.0;
        double r4211347 = x;
        double r4211348 = r4211347 * r4211347;
        double r4211349 = r4211346 * r4211348;
        double r4211350 = r4211345 + r4211349;
        double r4211351 = -846874828800.0;
        double r4211352 = r4211348 * r4211347;
        double r4211353 = r4211352 * r4211347;
        double r4211354 = r4211351 * r4211353;
        double r4211355 = r4211350 + r4211354;
        double r4211356 = 790416506880.0;
        double r4211357 = r4211353 * r4211347;
        double r4211358 = r4211357 * r4211347;
        double r4211359 = r4211356 * r4211358;
        double r4211360 = r4211355 + r4211359;
        double r4211361 = -338749931520.0;
        double r4211362 = r4211358 * r4211347;
        double r4211363 = r4211362 * r4211347;
        double r4211364 = r4211361 * r4211363;
        double r4211365 = r4211360 + r4211364;
        double r4211366 = 75277762560.0;
        double r4211367 = r4211363 * r4211347;
        double r4211368 = r4211367 * r4211347;
        double r4211369 = r4211366 * r4211368;
        double r4211370 = r4211365 + r4211369;
        double r4211371 = -9124577280.0;
        double r4211372 = r4211368 * r4211347;
        double r4211373 = r4211372 * r4211347;
        double r4211374 = r4211371 * r4211373;
        double r4211375 = r4211370 + r4211374;
        double r4211376 = 601620480.0;
        double r4211377 = r4211373 * r4211347;
        double r4211378 = r4211377 * r4211347;
        double r4211379 = r4211376 * r4211378;
        double r4211380 = r4211375 + r4211379;
        double r4211381 = -20054016.0;
        double r4211382 = r4211378 * r4211347;
        double r4211383 = r4211382 * r4211347;
        double r4211384 = r4211381 * r4211383;
        double r4211385 = r4211380 + r4211384;
        double r4211386 = 262144.0;
        double r4211387 = r4211383 * r4211347;
        double r4211388 = r4211387 * r4211347;
        double r4211389 = r4211386 * r4211388;
        double r4211390 = r4211385 + r4211389;
        return r4211390;
}


double f_of(float x) {
        float r4211391 = x;
        float r4211392 = r4211391 * r4211391;
        float r4211393 = r4211392 * r4211392;
        float r4211394 = r4211393 * r4211393;
        float r4211395 = r4211393 * r4211394;
        float r4211396 = -9124577280.0;
        float r4211397 = 601620480.0;
        float r4211398 = r4211397 * r4211392;
        float r4211399 = r4211396 + r4211398;
        float r4211400 = r4211395 * r4211399;
        float r4211401 = -338749931520.0;
        float r4211402 = 75277762560.0;
        float r4211403 = r4211402 * r4211392;
        float r4211404 = r4211401 + r4211403;
        float r4211405 = r4211394 * r4211404;
        float r4211406 = r4211400 + r4211405;
        float r4211407 = 317578060800.0;
        float r4211408 = r4211391 * r4211407;
        float r4211409 = r4211408 * r4211391;
        float r4211410 = -17643225600.0;
        float r4211411 = r4211409 + r4211410;
        float r4211412 = 790416506880.0;
        float r4211413 = r4211392 * r4211412;
        float r4211414 = -846874828800.0;
        float r4211415 = r4211413 + r4211414;
        float r4211416 = r4211393 * r4211415;
        float r4211417 = r4211411 + r4211416;
        float r4211418 = r4211406 + r4211417;
        float r4211419 = r4211395 * r4211393;
        float r4211420 = 262144.0;
        float r4211421 = r4211420 * r4211392;
        float r4211422 = -20054016.0;
        float r4211423 = r4211421 + r4211422;
        float r4211424 = r4211419 * r4211423;
        float r4211425 = r4211418 + r4211424;
        return r4211425;
}

double f_od(double x) {
        double r4211426 = x;
        double r4211427 = r4211426 * r4211426;
        double r4211428 = r4211427 * r4211427;
        double r4211429 = r4211428 * r4211428;
        double r4211430 = r4211428 * r4211429;
        double r4211431 = -9124577280.0;
        double r4211432 = 601620480.0;
        double r4211433 = r4211432 * r4211427;
        double r4211434 = r4211431 + r4211433;
        double r4211435 = r4211430 * r4211434;
        double r4211436 = -338749931520.0;
        double r4211437 = 75277762560.0;
        double r4211438 = r4211437 * r4211427;
        double r4211439 = r4211436 + r4211438;
        double r4211440 = r4211429 * r4211439;
        double r4211441 = r4211435 + r4211440;
        double r4211442 = 317578060800.0;
        double r4211443 = r4211426 * r4211442;
        double r4211444 = r4211443 * r4211426;
        double r4211445 = -17643225600.0;
        double r4211446 = r4211444 + r4211445;
        double r4211447 = 790416506880.0;
        double r4211448 = r4211427 * r4211447;
        double r4211449 = -846874828800.0;
        double r4211450 = r4211448 + r4211449;
        double r4211451 = r4211428 * r4211450;
        double r4211452 = r4211446 + r4211451;
        double r4211453 = r4211441 + r4211452;
        double r4211454 = r4211430 * r4211428;
        double r4211455 = 262144.0;
        double r4211456 = r4211455 * r4211427;
        double r4211457 = -20054016.0;
        double r4211458 = r4211456 + r4211457;
        double r4211459 = r4211454 * r4211458;
        double r4211460 = r4211453 + r4211459;
        return r4211460;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4211461, r4211462, r4211463, r4211464, r4211465, r4211466, r4211467, r4211468, r4211469, r4211470, r4211471, r4211472, r4211473, r4211474, r4211475, r4211476, r4211477, r4211478, r4211479, r4211480, r4211481, r4211482, r4211483, r4211484, r4211485, r4211486, r4211487, r4211488, r4211489, r4211490, r4211491, r4211492, r4211493, r4211494, r4211495, r4211496, r4211497, r4211498, r4211499, r4211500, r4211501, r4211502, r4211503, r4211504, r4211505, r4211506;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4211461, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211462, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r4211463);
        mpfr_init(r4211464);
        mpfr_init(r4211465);
        mpfr_init(r4211466);
        mpfr_init_set_str(r4211467, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r4211468);
        mpfr_init(r4211469);
        mpfr_init(r4211470);
        mpfr_init(r4211471);
        mpfr_init_set_str(r4211472, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r4211473);
        mpfr_init(r4211474);
        mpfr_init(r4211475);
        mpfr_init(r4211476);
        mpfr_init_set_str(r4211477, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r4211478);
        mpfr_init(r4211479);
        mpfr_init(r4211480);
        mpfr_init(r4211481);
        mpfr_init_set_str(r4211482, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r4211483);
        mpfr_init(r4211484);
        mpfr_init(r4211485);
        mpfr_init(r4211486);
        mpfr_init_set_str(r4211487, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init(r4211488);
        mpfr_init(r4211489);
        mpfr_init(r4211490);
        mpfr_init(r4211491);
        mpfr_init_set_str(r4211492, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r4211493);
        mpfr_init(r4211494);
        mpfr_init(r4211495);
        mpfr_init(r4211496);
        mpfr_init_set_str(r4211497, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r4211498);
        mpfr_init(r4211499);
        mpfr_init(r4211500);
        mpfr_init(r4211501);
        mpfr_init_set_str(r4211502, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r4211503);
        mpfr_init(r4211504);
        mpfr_init(r4211505);
        mpfr_init(r4211506);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4211463, x, MPFR_RNDN);
        mpfr_mul(r4211464, r4211463, r4211463, MPFR_RNDN);
        mpfr_mul(r4211465, r4211462, r4211464, MPFR_RNDN);
        mpfr_add(r4211466, r4211461, r4211465, MPFR_RNDN);
        ;
        mpfr_mul(r4211468, r4211464, r4211463, MPFR_RNDN);
        mpfr_mul(r4211469, r4211468, r4211463, MPFR_RNDN);
        mpfr_mul(r4211470, r4211467, r4211469, MPFR_RNDN);
        mpfr_add(r4211471, r4211466, r4211470, MPFR_RNDN);
        ;
        mpfr_mul(r4211473, r4211469, r4211463, MPFR_RNDN);
        mpfr_mul(r4211474, r4211473, r4211463, MPFR_RNDN);
        mpfr_mul(r4211475, r4211472, r4211474, MPFR_RNDN);
        mpfr_add(r4211476, r4211471, r4211475, MPFR_RNDN);
        ;
        mpfr_mul(r4211478, r4211474, r4211463, MPFR_RNDN);
        mpfr_mul(r4211479, r4211478, r4211463, MPFR_RNDN);
        mpfr_mul(r4211480, r4211477, r4211479, MPFR_RNDN);
        mpfr_add(r4211481, r4211476, r4211480, MPFR_RNDN);
        ;
        mpfr_mul(r4211483, r4211479, r4211463, MPFR_RNDN);
        mpfr_mul(r4211484, r4211483, r4211463, MPFR_RNDN);
        mpfr_mul(r4211485, r4211482, r4211484, MPFR_RNDN);
        mpfr_add(r4211486, r4211481, r4211485, MPFR_RNDN);
        ;
        mpfr_mul(r4211488, r4211484, r4211463, MPFR_RNDN);
        mpfr_mul(r4211489, r4211488, r4211463, MPFR_RNDN);
        mpfr_mul(r4211490, r4211487, r4211489, MPFR_RNDN);
        mpfr_add(r4211491, r4211486, r4211490, MPFR_RNDN);
        ;
        mpfr_mul(r4211493, r4211489, r4211463, MPFR_RNDN);
        mpfr_mul(r4211494, r4211493, r4211463, MPFR_RNDN);
        mpfr_mul(r4211495, r4211492, r4211494, MPFR_RNDN);
        mpfr_add(r4211496, r4211491, r4211495, MPFR_RNDN);
        ;
        mpfr_mul(r4211498, r4211494, r4211463, MPFR_RNDN);
        mpfr_mul(r4211499, r4211498, r4211463, MPFR_RNDN);
        mpfr_mul(r4211500, r4211497, r4211499, MPFR_RNDN);
        mpfr_add(r4211501, r4211496, r4211500, MPFR_RNDN);
        ;
        mpfr_mul(r4211503, r4211499, r4211463, MPFR_RNDN);
        mpfr_mul(r4211504, r4211503, r4211463, MPFR_RNDN);
        mpfr_mul(r4211505, r4211502, r4211504, MPFR_RNDN);
        mpfr_add(r4211506, r4211501, r4211505, MPFR_RNDN);
        return mpfr_get_d(r4211506, MPFR_RNDN);
}

static mpfr_t r4211507, r4211508, r4211509, r4211510, r4211511, r4211512, r4211513, r4211514, r4211515, r4211516, r4211517, r4211518, r4211519, r4211520, r4211521, r4211522, r4211523, r4211524, r4211525, r4211526, r4211527, r4211528, r4211529, r4211530, r4211531, r4211532, r4211533, r4211534, r4211535, r4211536, r4211537, r4211538, r4211539, r4211540, r4211541;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4211507);
        mpfr_init(r4211508);
        mpfr_init(r4211509);
        mpfr_init(r4211510);
        mpfr_init(r4211511);
        mpfr_init_set_str(r4211512, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211513, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r4211514);
        mpfr_init(r4211515);
        mpfr_init(r4211516);
        mpfr_init_set_str(r4211517, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211518, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r4211519);
        mpfr_init(r4211520);
        mpfr_init(r4211521);
        mpfr_init(r4211522);
        mpfr_init_set_str(r4211523, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r4211524);
        mpfr_init(r4211525);
        mpfr_init_set_str(r4211526, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init(r4211527);
        mpfr_init_set_str(r4211528, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r4211529);
        mpfr_init_set_str(r4211530, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r4211531);
        mpfr_init(r4211532);
        mpfr_init(r4211533);
        mpfr_init(r4211534);
        mpfr_init(r4211535);
        mpfr_init_set_str(r4211536, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r4211537);
        mpfr_init_set_str(r4211538, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r4211539);
        mpfr_init(r4211540);
        mpfr_init(r4211541);
}

double f_fm(double x) {
        mpfr_set_d(r4211507, x, MPFR_RNDN);
        mpfr_mul(r4211508, r4211507, r4211507, MPFR_RNDN);
        mpfr_mul(r4211509, r4211508, r4211508, MPFR_RNDN);
        mpfr_mul(r4211510, r4211509, r4211509, MPFR_RNDN);
        mpfr_mul(r4211511, r4211509, r4211510, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4211514, r4211513, r4211508, MPFR_RNDN);
        mpfr_add(r4211515, r4211512, r4211514, MPFR_RNDN);
        mpfr_mul(r4211516, r4211511, r4211515, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4211519, r4211518, r4211508, MPFR_RNDN);
        mpfr_add(r4211520, r4211517, r4211519, MPFR_RNDN);
        mpfr_mul(r4211521, r4211510, r4211520, MPFR_RNDN);
        mpfr_add(r4211522, r4211516, r4211521, MPFR_RNDN);
        ;
        mpfr_mul(r4211524, r4211507, r4211523, MPFR_RNDN);
        mpfr_mul(r4211525, r4211524, r4211507, MPFR_RNDN);
        ;
        mpfr_add(r4211527, r4211525, r4211526, MPFR_RNDN);
        ;
        mpfr_mul(r4211529, r4211508, r4211528, MPFR_RNDN);
        ;
        mpfr_add(r4211531, r4211529, r4211530, MPFR_RNDN);
        mpfr_mul(r4211532, r4211509, r4211531, MPFR_RNDN);
        mpfr_add(r4211533, r4211527, r4211532, MPFR_RNDN);
        mpfr_add(r4211534, r4211522, r4211533, MPFR_RNDN);
        mpfr_mul(r4211535, r4211511, r4211509, MPFR_RNDN);
        ;
        mpfr_mul(r4211537, r4211536, r4211508, MPFR_RNDN);
        ;
        mpfr_add(r4211539, r4211537, r4211538, MPFR_RNDN);
        mpfr_mul(r4211540, r4211535, r4211539, MPFR_RNDN);
        mpfr_add(r4211541, r4211534, r4211540, MPFR_RNDN);
        return mpfr_get_d(r4211541, MPFR_RNDN);
}

static mpfr_t r4211542, r4211543, r4211544, r4211545, r4211546, r4211547, r4211548, r4211549, r4211550, r4211551, r4211552, r4211553, r4211554, r4211555, r4211556, r4211557, r4211558, r4211559, r4211560, r4211561, r4211562, r4211563, r4211564, r4211565, r4211566, r4211567, r4211568, r4211569, r4211570, r4211571, r4211572, r4211573, r4211574, r4211575, r4211576;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4211542);
        mpfr_init(r4211543);
        mpfr_init(r4211544);
        mpfr_init(r4211545);
        mpfr_init(r4211546);
        mpfr_init_set_str(r4211547, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211548, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r4211549);
        mpfr_init(r4211550);
        mpfr_init(r4211551);
        mpfr_init_set_str(r4211552, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211553, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r4211554);
        mpfr_init(r4211555);
        mpfr_init(r4211556);
        mpfr_init(r4211557);
        mpfr_init_set_str(r4211558, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r4211559);
        mpfr_init(r4211560);
        mpfr_init_set_str(r4211561, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init(r4211562);
        mpfr_init_set_str(r4211563, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r4211564);
        mpfr_init_set_str(r4211565, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r4211566);
        mpfr_init(r4211567);
        mpfr_init(r4211568);
        mpfr_init(r4211569);
        mpfr_init(r4211570);
        mpfr_init_set_str(r4211571, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r4211572);
        mpfr_init_set_str(r4211573, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r4211574);
        mpfr_init(r4211575);
        mpfr_init(r4211576);
}

double f_dm(double x) {
        mpfr_set_d(r4211542, x, MPFR_RNDN);
        mpfr_mul(r4211543, r4211542, r4211542, MPFR_RNDN);
        mpfr_mul(r4211544, r4211543, r4211543, MPFR_RNDN);
        mpfr_mul(r4211545, r4211544, r4211544, MPFR_RNDN);
        mpfr_mul(r4211546, r4211544, r4211545, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4211549, r4211548, r4211543, MPFR_RNDN);
        mpfr_add(r4211550, r4211547, r4211549, MPFR_RNDN);
        mpfr_mul(r4211551, r4211546, r4211550, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4211554, r4211553, r4211543, MPFR_RNDN);
        mpfr_add(r4211555, r4211552, r4211554, MPFR_RNDN);
        mpfr_mul(r4211556, r4211545, r4211555, MPFR_RNDN);
        mpfr_add(r4211557, r4211551, r4211556, MPFR_RNDN);
        ;
        mpfr_mul(r4211559, r4211542, r4211558, MPFR_RNDN);
        mpfr_mul(r4211560, r4211559, r4211542, MPFR_RNDN);
        ;
        mpfr_add(r4211562, r4211560, r4211561, MPFR_RNDN);
        ;
        mpfr_mul(r4211564, r4211543, r4211563, MPFR_RNDN);
        ;
        mpfr_add(r4211566, r4211564, r4211565, MPFR_RNDN);
        mpfr_mul(r4211567, r4211544, r4211566, MPFR_RNDN);
        mpfr_add(r4211568, r4211562, r4211567, MPFR_RNDN);
        mpfr_add(r4211569, r4211557, r4211568, MPFR_RNDN);
        mpfr_mul(r4211570, r4211546, r4211544, MPFR_RNDN);
        ;
        mpfr_mul(r4211572, r4211571, r4211543, MPFR_RNDN);
        ;
        mpfr_add(r4211574, r4211572, r4211573, MPFR_RNDN);
        mpfr_mul(r4211575, r4211570, r4211574, MPFR_RNDN);
        mpfr_add(r4211576, r4211569, r4211575, MPFR_RNDN);
        return mpfr_get_d(r4211576, MPFR_RNDN);
}

