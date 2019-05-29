#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r8031385 = 2.460938;
        float r8031386 = x;
        float r8031387 = r8031385 * r8031386;
        float r8031388 = -36.09375;
        float r8031389 = r8031386 * r8031386;
        float r8031390 = r8031389 * r8031386;
        float r8031391 = r8031388 * r8031390;
        float r8031392 = r8031387 + r8031391;
        float r8031393 = 140.765625;
        float r8031394 = r8031390 * r8031386;
        float r8031395 = r8031394 * r8031386;
        float r8031396 = r8031393 * r8031395;
        float r8031397 = r8031392 + r8031396;
        float r8031398 = -201.09375;
        float r8031399 = r8031395 * r8031386;
        float r8031400 = r8031399 * r8031386;
        float r8031401 = r8031398 * r8031400;
        float r8031402 = r8031397 + r8031401;
        float r8031403 = 94.960938;
        float r8031404 = r8031400 * r8031386;
        float r8031405 = r8031404 * r8031386;
        float r8031406 = r8031403 * r8031405;
        float r8031407 = r8031402 + r8031406;
        return r8031407;
}

double f_id(double x) {
        double r8031408 = 2.460938;
        double r8031409 = x;
        double r8031410 = r8031408 * r8031409;
        double r8031411 = -36.09375;
        double r8031412 = r8031409 * r8031409;
        double r8031413 = r8031412 * r8031409;
        double r8031414 = r8031411 * r8031413;
        double r8031415 = r8031410 + r8031414;
        double r8031416 = 140.765625;
        double r8031417 = r8031413 * r8031409;
        double r8031418 = r8031417 * r8031409;
        double r8031419 = r8031416 * r8031418;
        double r8031420 = r8031415 + r8031419;
        double r8031421 = -201.09375;
        double r8031422 = r8031418 * r8031409;
        double r8031423 = r8031422 * r8031409;
        double r8031424 = r8031421 * r8031423;
        double r8031425 = r8031420 + r8031424;
        double r8031426 = 94.960938;
        double r8031427 = r8031423 * r8031409;
        double r8031428 = r8031427 * r8031409;
        double r8031429 = r8031426 * r8031428;
        double r8031430 = r8031425 + r8031429;
        return r8031430;
}


double f_of(float x) {
        float r8031431 = 2.460938;
        float r8031432 = x;
        float r8031433 = r8031431 * r8031432;
        float r8031434 = -36.09375;
        float r8031435 = r8031432 * r8031432;
        float r8031436 = r8031435 * r8031432;
        float r8031437 = r8031434 * r8031436;
        float r8031438 = r8031433 + r8031437;
        float r8031439 = 140.765625;
        float r8031440 = r8031436 * r8031432;
        float r8031441 = r8031440 * r8031432;
        float r8031442 = r8031439 * r8031441;
        float r8031443 = r8031438 + r8031442;
        float r8031444 = -201.09375;
        float r8031445 = r8031441 * r8031432;
        float r8031446 = r8031445 * r8031432;
        float r8031447 = r8031444 * r8031446;
        float r8031448 = cbrt(r8031447);
        float r8031449 = r8031448 * r8031448;
        float r8031450 = r8031449 * r8031448;
        float r8031451 = r8031443 + r8031450;
        float r8031452 = 94.960938;
        float r8031453 = r8031446 * r8031432;
        float r8031454 = r8031453 * r8031432;
        float r8031455 = r8031452 * r8031454;
        float r8031456 = r8031451 + r8031455;
        return r8031456;
}

double f_od(double x) {
        double r8031457 = 2.460938;
        double r8031458 = x;
        double r8031459 = r8031457 * r8031458;
        double r8031460 = -36.09375;
        double r8031461 = r8031458 * r8031458;
        double r8031462 = r8031461 * r8031458;
        double r8031463 = r8031460 * r8031462;
        double r8031464 = r8031459 + r8031463;
        double r8031465 = 140.765625;
        double r8031466 = r8031462 * r8031458;
        double r8031467 = r8031466 * r8031458;
        double r8031468 = r8031465 * r8031467;
        double r8031469 = r8031464 + r8031468;
        double r8031470 = -201.09375;
        double r8031471 = r8031467 * r8031458;
        double r8031472 = r8031471 * r8031458;
        double r8031473 = r8031470 * r8031472;
        double r8031474 = cbrt(r8031473);
        double r8031475 = r8031474 * r8031474;
        double r8031476 = r8031475 * r8031474;
        double r8031477 = r8031469 + r8031476;
        double r8031478 = 94.960938;
        double r8031479 = r8031472 * r8031458;
        double r8031480 = r8031479 * r8031458;
        double r8031481 = r8031478 * r8031480;
        double r8031482 = r8031477 + r8031481;
        return r8031482;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8031483, r8031484, r8031485, r8031486, r8031487, r8031488, r8031489, r8031490, r8031491, r8031492, r8031493, r8031494, r8031495, r8031496, r8031497, r8031498, r8031499, r8031500, r8031501, r8031502, r8031503, r8031504, r8031505;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8031483, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8031484);
        mpfr_init(r8031485);
        mpfr_init_set_str(r8031486, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8031487);
        mpfr_init(r8031488);
        mpfr_init(r8031489);
        mpfr_init(r8031490);
        mpfr_init_set_str(r8031491, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8031492);
        mpfr_init(r8031493);
        mpfr_init(r8031494);
        mpfr_init(r8031495);
        mpfr_init_set_str(r8031496, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r8031497);
        mpfr_init(r8031498);
        mpfr_init(r8031499);
        mpfr_init(r8031500);
        mpfr_init_set_str(r8031501, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8031502);
        mpfr_init(r8031503);
        mpfr_init(r8031504);
        mpfr_init(r8031505);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8031484, x, MPFR_RNDN);
        mpfr_mul(r8031485, r8031483, r8031484, MPFR_RNDN);
        ;
        mpfr_mul(r8031487, r8031484, r8031484, MPFR_RNDN);
        mpfr_mul(r8031488, r8031487, r8031484, MPFR_RNDN);
        mpfr_mul(r8031489, r8031486, r8031488, MPFR_RNDN);
        mpfr_add(r8031490, r8031485, r8031489, MPFR_RNDN);
        ;
        mpfr_mul(r8031492, r8031488, r8031484, MPFR_RNDN);
        mpfr_mul(r8031493, r8031492, r8031484, MPFR_RNDN);
        mpfr_mul(r8031494, r8031491, r8031493, MPFR_RNDN);
        mpfr_add(r8031495, r8031490, r8031494, MPFR_RNDN);
        ;
        mpfr_mul(r8031497, r8031493, r8031484, MPFR_RNDN);
        mpfr_mul(r8031498, r8031497, r8031484, MPFR_RNDN);
        mpfr_mul(r8031499, r8031496, r8031498, MPFR_RNDN);
        mpfr_add(r8031500, r8031495, r8031499, MPFR_RNDN);
        ;
        mpfr_mul(r8031502, r8031498, r8031484, MPFR_RNDN);
        mpfr_mul(r8031503, r8031502, r8031484, MPFR_RNDN);
        mpfr_mul(r8031504, r8031501, r8031503, MPFR_RNDN);
        mpfr_add(r8031505, r8031500, r8031504, MPFR_RNDN);
        return mpfr_get_d(r8031505, MPFR_RNDN);
}

static mpfr_t r8031506, r8031507, r8031508, r8031509, r8031510, r8031511, r8031512, r8031513, r8031514, r8031515, r8031516, r8031517, r8031518, r8031519, r8031520, r8031521, r8031522, r8031523, r8031524, r8031525, r8031526, r8031527, r8031528, r8031529, r8031530, r8031531;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8031506, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8031507);
        mpfr_init(r8031508);
        mpfr_init_set_str(r8031509, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8031510);
        mpfr_init(r8031511);
        mpfr_init(r8031512);
        mpfr_init(r8031513);
        mpfr_init_set_str(r8031514, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8031515);
        mpfr_init(r8031516);
        mpfr_init(r8031517);
        mpfr_init(r8031518);
        mpfr_init_set_str(r8031519, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r8031520);
        mpfr_init(r8031521);
        mpfr_init(r8031522);
        mpfr_init(r8031523);
        mpfr_init(r8031524);
        mpfr_init(r8031525);
        mpfr_init(r8031526);
        mpfr_init_set_str(r8031527, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8031528);
        mpfr_init(r8031529);
        mpfr_init(r8031530);
        mpfr_init(r8031531);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8031507, x, MPFR_RNDN);
        mpfr_mul(r8031508, r8031506, r8031507, MPFR_RNDN);
        ;
        mpfr_mul(r8031510, r8031507, r8031507, MPFR_RNDN);
        mpfr_mul(r8031511, r8031510, r8031507, MPFR_RNDN);
        mpfr_mul(r8031512, r8031509, r8031511, MPFR_RNDN);
        mpfr_add(r8031513, r8031508, r8031512, MPFR_RNDN);
        ;
        mpfr_mul(r8031515, r8031511, r8031507, MPFR_RNDN);
        mpfr_mul(r8031516, r8031515, r8031507, MPFR_RNDN);
        mpfr_mul(r8031517, r8031514, r8031516, MPFR_RNDN);
        mpfr_add(r8031518, r8031513, r8031517, MPFR_RNDN);
        ;
        mpfr_mul(r8031520, r8031516, r8031507, MPFR_RNDN);
        mpfr_mul(r8031521, r8031520, r8031507, MPFR_RNDN);
        mpfr_mul(r8031522, r8031519, r8031521, MPFR_RNDN);
        mpfr_cbrt(r8031523, r8031522, MPFR_RNDN);
        mpfr_mul(r8031524, r8031523, r8031523, MPFR_RNDN);
        mpfr_mul(r8031525, r8031524, r8031523, MPFR_RNDN);
        mpfr_add(r8031526, r8031518, r8031525, MPFR_RNDN);
        ;
        mpfr_mul(r8031528, r8031521, r8031507, MPFR_RNDN);
        mpfr_mul(r8031529, r8031528, r8031507, MPFR_RNDN);
        mpfr_mul(r8031530, r8031527, r8031529, MPFR_RNDN);
        mpfr_add(r8031531, r8031526, r8031530, MPFR_RNDN);
        return mpfr_get_d(r8031531, MPFR_RNDN);
}

static mpfr_t r8031532, r8031533, r8031534, r8031535, r8031536, r8031537, r8031538, r8031539, r8031540, r8031541, r8031542, r8031543, r8031544, r8031545, r8031546, r8031547, r8031548, r8031549, r8031550, r8031551, r8031552, r8031553, r8031554, r8031555, r8031556, r8031557;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8031532, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8031533);
        mpfr_init(r8031534);
        mpfr_init_set_str(r8031535, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8031536);
        mpfr_init(r8031537);
        mpfr_init(r8031538);
        mpfr_init(r8031539);
        mpfr_init_set_str(r8031540, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8031541);
        mpfr_init(r8031542);
        mpfr_init(r8031543);
        mpfr_init(r8031544);
        mpfr_init_set_str(r8031545, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r8031546);
        mpfr_init(r8031547);
        mpfr_init(r8031548);
        mpfr_init(r8031549);
        mpfr_init(r8031550);
        mpfr_init(r8031551);
        mpfr_init(r8031552);
        mpfr_init_set_str(r8031553, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8031554);
        mpfr_init(r8031555);
        mpfr_init(r8031556);
        mpfr_init(r8031557);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8031533, x, MPFR_RNDN);
        mpfr_mul(r8031534, r8031532, r8031533, MPFR_RNDN);
        ;
        mpfr_mul(r8031536, r8031533, r8031533, MPFR_RNDN);
        mpfr_mul(r8031537, r8031536, r8031533, MPFR_RNDN);
        mpfr_mul(r8031538, r8031535, r8031537, MPFR_RNDN);
        mpfr_add(r8031539, r8031534, r8031538, MPFR_RNDN);
        ;
        mpfr_mul(r8031541, r8031537, r8031533, MPFR_RNDN);
        mpfr_mul(r8031542, r8031541, r8031533, MPFR_RNDN);
        mpfr_mul(r8031543, r8031540, r8031542, MPFR_RNDN);
        mpfr_add(r8031544, r8031539, r8031543, MPFR_RNDN);
        ;
        mpfr_mul(r8031546, r8031542, r8031533, MPFR_RNDN);
        mpfr_mul(r8031547, r8031546, r8031533, MPFR_RNDN);
        mpfr_mul(r8031548, r8031545, r8031547, MPFR_RNDN);
        mpfr_cbrt(r8031549, r8031548, MPFR_RNDN);
        mpfr_mul(r8031550, r8031549, r8031549, MPFR_RNDN);
        mpfr_mul(r8031551, r8031550, r8031549, MPFR_RNDN);
        mpfr_add(r8031552, r8031544, r8031551, MPFR_RNDN);
        ;
        mpfr_mul(r8031554, r8031547, r8031533, MPFR_RNDN);
        mpfr_mul(r8031555, r8031554, r8031533, MPFR_RNDN);
        mpfr_mul(r8031556, r8031553, r8031555, MPFR_RNDN);
        mpfr_add(r8031557, r8031552, r8031556, MPFR_RNDN);
        return mpfr_get_d(r8031557, MPFR_RNDN);
}

