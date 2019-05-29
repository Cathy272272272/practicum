#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r7169346 = 2.932617;
        float r7169347 = x;
        float r7169348 = r7169346 * r7169347;
        float r7169349 = -87.978516;
        float r7169350 = r7169347 * r7169347;
        float r7169351 = r7169350 * r7169347;
        float r7169352 = r7169349 * r7169351;
        float r7169353 = r7169348 + r7169352;
        float r7169354 = 747.817383;
        float r7169355 = r7169351 * r7169347;
        float r7169356 = r7169355 * r7169347;
        float r7169357 = r7169354 * r7169356;
        float r7169358 = r7169353 + r7169357;
        float r7169359 = -2706.386719;
        float r7169360 = r7169356 * r7169347;
        float r7169361 = r7169360 * r7169347;
        float r7169362 = r7169359 * r7169361;
        float r7169363 = r7169358 + r7169362;
        float r7169364 = 4736.176758;
        float r7169365 = r7169361 * r7169347;
        float r7169366 = r7169365 * r7169347;
        float r7169367 = r7169364 * r7169366;
        float r7169368 = r7169363 + r7169367;
        float r7169369 = -3961.166016;
        float r7169370 = r7169366 * r7169347;
        float r7169371 = r7169370 * r7169347;
        float r7169372 = r7169369 * r7169371;
        float r7169373 = r7169368 + r7169372;
        float r7169374 = 1269.604492;
        float r7169375 = r7169371 * r7169347;
        float r7169376 = r7169375 * r7169347;
        float r7169377 = r7169374 * r7169376;
        float r7169378 = r7169373 + r7169377;
        return r7169378;
}

double f_id(double x) {
        double r7169379 = 2.932617;
        double r7169380 = x;
        double r7169381 = r7169379 * r7169380;
        double r7169382 = -87.978516;
        double r7169383 = r7169380 * r7169380;
        double r7169384 = r7169383 * r7169380;
        double r7169385 = r7169382 * r7169384;
        double r7169386 = r7169381 + r7169385;
        double r7169387 = 747.817383;
        double r7169388 = r7169384 * r7169380;
        double r7169389 = r7169388 * r7169380;
        double r7169390 = r7169387 * r7169389;
        double r7169391 = r7169386 + r7169390;
        double r7169392 = -2706.386719;
        double r7169393 = r7169389 * r7169380;
        double r7169394 = r7169393 * r7169380;
        double r7169395 = r7169392 * r7169394;
        double r7169396 = r7169391 + r7169395;
        double r7169397 = 4736.176758;
        double r7169398 = r7169394 * r7169380;
        double r7169399 = r7169398 * r7169380;
        double r7169400 = r7169397 * r7169399;
        double r7169401 = r7169396 + r7169400;
        double r7169402 = -3961.166016;
        double r7169403 = r7169399 * r7169380;
        double r7169404 = r7169403 * r7169380;
        double r7169405 = r7169402 * r7169404;
        double r7169406 = r7169401 + r7169405;
        double r7169407 = 1269.604492;
        double r7169408 = r7169404 * r7169380;
        double r7169409 = r7169408 * r7169380;
        double r7169410 = r7169407 * r7169409;
        double r7169411 = r7169406 + r7169410;
        return r7169411;
}


double f_of(float x) {
        float r7169412 = x;
        float r7169413 = r7169412 * r7169412;
        float r7169414 = 3;
        float r7169415 = pow(r7169412, r7169414);
        float r7169416 = r7169415 * r7169415;
        float r7169417 = r7169415 * r7169416;
        float r7169418 = r7169413 * r7169417;
        float r7169419 = 1269.604492;
        float r7169420 = r7169413 * r7169419;
        float r7169421 = -3961.166016;
        float r7169422 = r7169420 + r7169421;
        float r7169423 = r7169418 * r7169422;
        float r7169424 = 747.817383;
        float r7169425 = r7169412 * r7169424;
        float r7169426 = r7169425 * r7169413;
        float r7169427 = r7169413 * r7169426;
        float r7169428 = 2.932617;
        float r7169429 = r7169428 * r7169412;
        float r7169430 = -87.978516;
        float r7169431 = r7169430 * r7169412;
        float r7169432 = r7169413 * r7169431;
        float r7169433 = r7169429 + r7169432;
        float r7169434 = r7169427 + r7169433;
        float r7169435 = r7169416 * r7169412;
        float r7169436 = -2706.386719;
        float r7169437 = 4736.176758;
        float r7169438 = r7169437 * r7169412;
        float r7169439 = r7169412 * r7169438;
        float r7169440 = r7169436 + r7169439;
        float r7169441 = r7169435 * r7169440;
        float r7169442 = r7169434 + r7169441;
        float r7169443 = r7169423 + r7169442;
        return r7169443;
}

double f_od(double x) {
        double r7169444 = x;
        double r7169445 = r7169444 * r7169444;
        double r7169446 = 3;
        double r7169447 = pow(r7169444, r7169446);
        double r7169448 = r7169447 * r7169447;
        double r7169449 = r7169447 * r7169448;
        double r7169450 = r7169445 * r7169449;
        double r7169451 = 1269.604492;
        double r7169452 = r7169445 * r7169451;
        double r7169453 = -3961.166016;
        double r7169454 = r7169452 + r7169453;
        double r7169455 = r7169450 * r7169454;
        double r7169456 = 747.817383;
        double r7169457 = r7169444 * r7169456;
        double r7169458 = r7169457 * r7169445;
        double r7169459 = r7169445 * r7169458;
        double r7169460 = 2.932617;
        double r7169461 = r7169460 * r7169444;
        double r7169462 = -87.978516;
        double r7169463 = r7169462 * r7169444;
        double r7169464 = r7169445 * r7169463;
        double r7169465 = r7169461 + r7169464;
        double r7169466 = r7169459 + r7169465;
        double r7169467 = r7169448 * r7169444;
        double r7169468 = -2706.386719;
        double r7169469 = 4736.176758;
        double r7169470 = r7169469 * r7169444;
        double r7169471 = r7169444 * r7169470;
        double r7169472 = r7169468 + r7169471;
        double r7169473 = r7169467 * r7169472;
        double r7169474 = r7169466 + r7169473;
        double r7169475 = r7169455 + r7169474;
        return r7169475;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7169476, r7169477, r7169478, r7169479, r7169480, r7169481, r7169482, r7169483, r7169484, r7169485, r7169486, r7169487, r7169488, r7169489, r7169490, r7169491, r7169492, r7169493, r7169494, r7169495, r7169496, r7169497, r7169498, r7169499, r7169500, r7169501, r7169502, r7169503, r7169504, r7169505, r7169506, r7169507, r7169508;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7169476, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7169477);
        mpfr_init(r7169478);
        mpfr_init_set_str(r7169479, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7169480);
        mpfr_init(r7169481);
        mpfr_init(r7169482);
        mpfr_init(r7169483);
        mpfr_init_set_str(r7169484, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7169485);
        mpfr_init(r7169486);
        mpfr_init(r7169487);
        mpfr_init(r7169488);
        mpfr_init_set_str(r7169489, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r7169490);
        mpfr_init(r7169491);
        mpfr_init(r7169492);
        mpfr_init(r7169493);
        mpfr_init_set_str(r7169494, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7169495);
        mpfr_init(r7169496);
        mpfr_init(r7169497);
        mpfr_init(r7169498);
        mpfr_init_set_str(r7169499, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r7169500);
        mpfr_init(r7169501);
        mpfr_init(r7169502);
        mpfr_init(r7169503);
        mpfr_init_set_str(r7169504, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7169505);
        mpfr_init(r7169506);
        mpfr_init(r7169507);
        mpfr_init(r7169508);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7169477, x, MPFR_RNDN);
        mpfr_mul(r7169478, r7169476, r7169477, MPFR_RNDN);
        ;
        mpfr_mul(r7169480, r7169477, r7169477, MPFR_RNDN);
        mpfr_mul(r7169481, r7169480, r7169477, MPFR_RNDN);
        mpfr_mul(r7169482, r7169479, r7169481, MPFR_RNDN);
        mpfr_add(r7169483, r7169478, r7169482, MPFR_RNDN);
        ;
        mpfr_mul(r7169485, r7169481, r7169477, MPFR_RNDN);
        mpfr_mul(r7169486, r7169485, r7169477, MPFR_RNDN);
        mpfr_mul(r7169487, r7169484, r7169486, MPFR_RNDN);
        mpfr_add(r7169488, r7169483, r7169487, MPFR_RNDN);
        ;
        mpfr_mul(r7169490, r7169486, r7169477, MPFR_RNDN);
        mpfr_mul(r7169491, r7169490, r7169477, MPFR_RNDN);
        mpfr_mul(r7169492, r7169489, r7169491, MPFR_RNDN);
        mpfr_add(r7169493, r7169488, r7169492, MPFR_RNDN);
        ;
        mpfr_mul(r7169495, r7169491, r7169477, MPFR_RNDN);
        mpfr_mul(r7169496, r7169495, r7169477, MPFR_RNDN);
        mpfr_mul(r7169497, r7169494, r7169496, MPFR_RNDN);
        mpfr_add(r7169498, r7169493, r7169497, MPFR_RNDN);
        ;
        mpfr_mul(r7169500, r7169496, r7169477, MPFR_RNDN);
        mpfr_mul(r7169501, r7169500, r7169477, MPFR_RNDN);
        mpfr_mul(r7169502, r7169499, r7169501, MPFR_RNDN);
        mpfr_add(r7169503, r7169498, r7169502, MPFR_RNDN);
        ;
        mpfr_mul(r7169505, r7169501, r7169477, MPFR_RNDN);
        mpfr_mul(r7169506, r7169505, r7169477, MPFR_RNDN);
        mpfr_mul(r7169507, r7169504, r7169506, MPFR_RNDN);
        mpfr_add(r7169508, r7169503, r7169507, MPFR_RNDN);
        return mpfr_get_d(r7169508, MPFR_RNDN);
}

static mpfr_t r7169509, r7169510, r7169511, r7169512, r7169513, r7169514, r7169515, r7169516, r7169517, r7169518, r7169519, r7169520, r7169521, r7169522, r7169523, r7169524, r7169525, r7169526, r7169527, r7169528, r7169529, r7169530, r7169531, r7169532, r7169533, r7169534, r7169535, r7169536, r7169537, r7169538, r7169539, r7169540;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7169509);
        mpfr_init(r7169510);
        mpfr_init_set_str(r7169511, "3", 10, MPFR_RNDN);
        mpfr_init(r7169512);
        mpfr_init(r7169513);
        mpfr_init(r7169514);
        mpfr_init(r7169515);
        mpfr_init_set_str(r7169516, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7169517);
        mpfr_init_set_str(r7169518, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r7169519);
        mpfr_init(r7169520);
        mpfr_init_set_str(r7169521, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7169522);
        mpfr_init(r7169523);
        mpfr_init(r7169524);
        mpfr_init_set_str(r7169525, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7169526);
        mpfr_init_set_str(r7169527, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7169528);
        mpfr_init(r7169529);
        mpfr_init(r7169530);
        mpfr_init(r7169531);
        mpfr_init(r7169532);
        mpfr_init_set_str(r7169533, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169534, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7169535);
        mpfr_init(r7169536);
        mpfr_init(r7169537);
        mpfr_init(r7169538);
        mpfr_init(r7169539);
        mpfr_init(r7169540);
}

double f_fm(double x) {
        mpfr_set_d(r7169509, x, MPFR_RNDN);
        mpfr_mul(r7169510, r7169509, r7169509, MPFR_RNDN);
        ;
        mpfr_pow(r7169512, r7169509, r7169511, MPFR_RNDN);
        mpfr_mul(r7169513, r7169512, r7169512, MPFR_RNDN);
        mpfr_mul(r7169514, r7169512, r7169513, MPFR_RNDN);
        mpfr_mul(r7169515, r7169510, r7169514, MPFR_RNDN);
        ;
        mpfr_mul(r7169517, r7169510, r7169516, MPFR_RNDN);
        ;
        mpfr_add(r7169519, r7169517, r7169518, MPFR_RNDN);
        mpfr_mul(r7169520, r7169515, r7169519, MPFR_RNDN);
        ;
        mpfr_mul(r7169522, r7169509, r7169521, MPFR_RNDN);
        mpfr_mul(r7169523, r7169522, r7169510, MPFR_RNDN);
        mpfr_mul(r7169524, r7169510, r7169523, MPFR_RNDN);
        ;
        mpfr_mul(r7169526, r7169525, r7169509, MPFR_RNDN);
        ;
        mpfr_mul(r7169528, r7169527, r7169509, MPFR_RNDN);
        mpfr_mul(r7169529, r7169510, r7169528, MPFR_RNDN);
        mpfr_add(r7169530, r7169526, r7169529, MPFR_RNDN);
        mpfr_add(r7169531, r7169524, r7169530, MPFR_RNDN);
        mpfr_mul(r7169532, r7169513, r7169509, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7169535, r7169534, r7169509, MPFR_RNDN);
        mpfr_mul(r7169536, r7169509, r7169535, MPFR_RNDN);
        mpfr_add(r7169537, r7169533, r7169536, MPFR_RNDN);
        mpfr_mul(r7169538, r7169532, r7169537, MPFR_RNDN);
        mpfr_add(r7169539, r7169531, r7169538, MPFR_RNDN);
        mpfr_add(r7169540, r7169520, r7169539, MPFR_RNDN);
        return mpfr_get_d(r7169540, MPFR_RNDN);
}

static mpfr_t r7169541, r7169542, r7169543, r7169544, r7169545, r7169546, r7169547, r7169548, r7169549, r7169550, r7169551, r7169552, r7169553, r7169554, r7169555, r7169556, r7169557, r7169558, r7169559, r7169560, r7169561, r7169562, r7169563, r7169564, r7169565, r7169566, r7169567, r7169568, r7169569, r7169570, r7169571, r7169572;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7169541);
        mpfr_init(r7169542);
        mpfr_init_set_str(r7169543, "3", 10, MPFR_RNDN);
        mpfr_init(r7169544);
        mpfr_init(r7169545);
        mpfr_init(r7169546);
        mpfr_init(r7169547);
        mpfr_init_set_str(r7169548, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7169549);
        mpfr_init_set_str(r7169550, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r7169551);
        mpfr_init(r7169552);
        mpfr_init_set_str(r7169553, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7169554);
        mpfr_init(r7169555);
        mpfr_init(r7169556);
        mpfr_init_set_str(r7169557, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7169558);
        mpfr_init_set_str(r7169559, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7169560);
        mpfr_init(r7169561);
        mpfr_init(r7169562);
        mpfr_init(r7169563);
        mpfr_init(r7169564);
        mpfr_init_set_str(r7169565, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169566, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7169567);
        mpfr_init(r7169568);
        mpfr_init(r7169569);
        mpfr_init(r7169570);
        mpfr_init(r7169571);
        mpfr_init(r7169572);
}

double f_dm(double x) {
        mpfr_set_d(r7169541, x, MPFR_RNDN);
        mpfr_mul(r7169542, r7169541, r7169541, MPFR_RNDN);
        ;
        mpfr_pow(r7169544, r7169541, r7169543, MPFR_RNDN);
        mpfr_mul(r7169545, r7169544, r7169544, MPFR_RNDN);
        mpfr_mul(r7169546, r7169544, r7169545, MPFR_RNDN);
        mpfr_mul(r7169547, r7169542, r7169546, MPFR_RNDN);
        ;
        mpfr_mul(r7169549, r7169542, r7169548, MPFR_RNDN);
        ;
        mpfr_add(r7169551, r7169549, r7169550, MPFR_RNDN);
        mpfr_mul(r7169552, r7169547, r7169551, MPFR_RNDN);
        ;
        mpfr_mul(r7169554, r7169541, r7169553, MPFR_RNDN);
        mpfr_mul(r7169555, r7169554, r7169542, MPFR_RNDN);
        mpfr_mul(r7169556, r7169542, r7169555, MPFR_RNDN);
        ;
        mpfr_mul(r7169558, r7169557, r7169541, MPFR_RNDN);
        ;
        mpfr_mul(r7169560, r7169559, r7169541, MPFR_RNDN);
        mpfr_mul(r7169561, r7169542, r7169560, MPFR_RNDN);
        mpfr_add(r7169562, r7169558, r7169561, MPFR_RNDN);
        mpfr_add(r7169563, r7169556, r7169562, MPFR_RNDN);
        mpfr_mul(r7169564, r7169545, r7169541, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7169567, r7169566, r7169541, MPFR_RNDN);
        mpfr_mul(r7169568, r7169541, r7169567, MPFR_RNDN);
        mpfr_add(r7169569, r7169565, r7169568, MPFR_RNDN);
        mpfr_mul(r7169570, r7169564, r7169569, MPFR_RNDN);
        mpfr_add(r7169571, r7169563, r7169570, MPFR_RNDN);
        mpfr_add(r7169572, r7169552, r7169571, MPFR_RNDN);
        return mpfr_get_d(r7169572, MPFR_RNDN);
}

