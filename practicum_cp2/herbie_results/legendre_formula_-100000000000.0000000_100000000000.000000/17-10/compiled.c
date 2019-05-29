#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6767371 = -0.246094;
        float r6767372 = 13.535156;
        float r6767373 = x;
        float r6767374 = r6767373 * r6767373;
        float r6767375 = r6767372 * r6767374;
        float r6767376 = r6767371 + r6767375;
        float r6767377 = -117.304688;
        float r6767378 = r6767374 * r6767373;
        float r6767379 = r6767378 * r6767373;
        float r6767380 = r6767377 * r6767379;
        float r6767381 = r6767376 + r6767380;
        float r6767382 = 351.914062;
        float r6767383 = r6767379 * r6767373;
        float r6767384 = r6767383 * r6767373;
        float r6767385 = r6767382 * r6767384;
        float r6767386 = r6767381 + r6767385;
        float r6767387 = -427.324219;
        float r6767388 = r6767384 * r6767373;
        float r6767389 = r6767388 * r6767373;
        float r6767390 = r6767387 * r6767389;
        float r6767391 = r6767386 + r6767390;
        float r6767392 = 180.425781;
        float r6767393 = r6767389 * r6767373;
        float r6767394 = r6767393 * r6767373;
        float r6767395 = r6767392 * r6767394;
        float r6767396 = r6767391 + r6767395;
        return r6767396;
}

double f_id(double x) {
        double r6767397 = -0.246094;
        double r6767398 = 13.535156;
        double r6767399 = x;
        double r6767400 = r6767399 * r6767399;
        double r6767401 = r6767398 * r6767400;
        double r6767402 = r6767397 + r6767401;
        double r6767403 = -117.304688;
        double r6767404 = r6767400 * r6767399;
        double r6767405 = r6767404 * r6767399;
        double r6767406 = r6767403 * r6767405;
        double r6767407 = r6767402 + r6767406;
        double r6767408 = 351.914062;
        double r6767409 = r6767405 * r6767399;
        double r6767410 = r6767409 * r6767399;
        double r6767411 = r6767408 * r6767410;
        double r6767412 = r6767407 + r6767411;
        double r6767413 = -427.324219;
        double r6767414 = r6767410 * r6767399;
        double r6767415 = r6767414 * r6767399;
        double r6767416 = r6767413 * r6767415;
        double r6767417 = r6767412 + r6767416;
        double r6767418 = 180.425781;
        double r6767419 = r6767415 * r6767399;
        double r6767420 = r6767419 * r6767399;
        double r6767421 = r6767418 * r6767420;
        double r6767422 = r6767417 + r6767421;
        return r6767422;
}


double f_of(float x) {
        float r6767423 = x;
        float r6767424 = r6767423 * r6767423;
        float r6767425 = 13.535156;
        float r6767426 = r6767424 * r6767425;
        float r6767427 = -0.246094;
        float r6767428 = r6767426 + r6767427;
        float r6767429 = r6767424 * r6767424;
        float r6767430 = r6767429 * r6767429;
        float r6767431 = 180.425781;
        float r6767432 = r6767431 * r6767423;
        float r6767433 = r6767423 * r6767432;
        float r6767434 = -427.324219;
        float r6767435 = r6767433 + r6767434;
        float r6767436 = r6767430 * r6767435;
        float r6767437 = 351.914062;
        float r6767438 = r6767424 * r6767437;
        float r6767439 = -117.304688;
        float r6767440 = r6767438 + r6767439;
        float r6767441 = r6767429 * r6767440;
        float r6767442 = r6767436 + r6767441;
        float r6767443 = r6767428 + r6767442;
        return r6767443;
}

double f_od(double x) {
        double r6767444 = x;
        double r6767445 = r6767444 * r6767444;
        double r6767446 = 13.535156;
        double r6767447 = r6767445 * r6767446;
        double r6767448 = -0.246094;
        double r6767449 = r6767447 + r6767448;
        double r6767450 = r6767445 * r6767445;
        double r6767451 = r6767450 * r6767450;
        double r6767452 = 180.425781;
        double r6767453 = r6767452 * r6767444;
        double r6767454 = r6767444 * r6767453;
        double r6767455 = -427.324219;
        double r6767456 = r6767454 + r6767455;
        double r6767457 = r6767451 * r6767456;
        double r6767458 = 351.914062;
        double r6767459 = r6767445 * r6767458;
        double r6767460 = -117.304688;
        double r6767461 = r6767459 + r6767460;
        double r6767462 = r6767450 * r6767461;
        double r6767463 = r6767457 + r6767462;
        double r6767464 = r6767449 + r6767463;
        return r6767464;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6767465, r6767466, r6767467, r6767468, r6767469, r6767470, r6767471, r6767472, r6767473, r6767474, r6767475, r6767476, r6767477, r6767478, r6767479, r6767480, r6767481, r6767482, r6767483, r6767484, r6767485, r6767486, r6767487, r6767488, r6767489, r6767490;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6767465, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6767466, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6767467);
        mpfr_init(r6767468);
        mpfr_init(r6767469);
        mpfr_init(r6767470);
        mpfr_init_set_str(r6767471, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6767472);
        mpfr_init(r6767473);
        mpfr_init(r6767474);
        mpfr_init(r6767475);
        mpfr_init_set_str(r6767476, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6767477);
        mpfr_init(r6767478);
        mpfr_init(r6767479);
        mpfr_init(r6767480);
        mpfr_init_set_str(r6767481, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6767482);
        mpfr_init(r6767483);
        mpfr_init(r6767484);
        mpfr_init(r6767485);
        mpfr_init_set_str(r6767486, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6767487);
        mpfr_init(r6767488);
        mpfr_init(r6767489);
        mpfr_init(r6767490);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6767467, x, MPFR_RNDN);
        mpfr_mul(r6767468, r6767467, r6767467, MPFR_RNDN);
        mpfr_mul(r6767469, r6767466, r6767468, MPFR_RNDN);
        mpfr_add(r6767470, r6767465, r6767469, MPFR_RNDN);
        ;
        mpfr_mul(r6767472, r6767468, r6767467, MPFR_RNDN);
        mpfr_mul(r6767473, r6767472, r6767467, MPFR_RNDN);
        mpfr_mul(r6767474, r6767471, r6767473, MPFR_RNDN);
        mpfr_add(r6767475, r6767470, r6767474, MPFR_RNDN);
        ;
        mpfr_mul(r6767477, r6767473, r6767467, MPFR_RNDN);
        mpfr_mul(r6767478, r6767477, r6767467, MPFR_RNDN);
        mpfr_mul(r6767479, r6767476, r6767478, MPFR_RNDN);
        mpfr_add(r6767480, r6767475, r6767479, MPFR_RNDN);
        ;
        mpfr_mul(r6767482, r6767478, r6767467, MPFR_RNDN);
        mpfr_mul(r6767483, r6767482, r6767467, MPFR_RNDN);
        mpfr_mul(r6767484, r6767481, r6767483, MPFR_RNDN);
        mpfr_add(r6767485, r6767480, r6767484, MPFR_RNDN);
        ;
        mpfr_mul(r6767487, r6767483, r6767467, MPFR_RNDN);
        mpfr_mul(r6767488, r6767487, r6767467, MPFR_RNDN);
        mpfr_mul(r6767489, r6767486, r6767488, MPFR_RNDN);
        mpfr_add(r6767490, r6767485, r6767489, MPFR_RNDN);
        return mpfr_get_d(r6767490, MPFR_RNDN);
}

static mpfr_t r6767491, r6767492, r6767493, r6767494, r6767495, r6767496, r6767497, r6767498, r6767499, r6767500, r6767501, r6767502, r6767503, r6767504, r6767505, r6767506, r6767507, r6767508, r6767509, r6767510, r6767511;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6767491);
        mpfr_init(r6767492);
        mpfr_init_set_str(r6767493, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6767494);
        mpfr_init_set_str(r6767495, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r6767496);
        mpfr_init(r6767497);
        mpfr_init(r6767498);
        mpfr_init_set_str(r6767499, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6767500);
        mpfr_init(r6767501);
        mpfr_init_set_str(r6767502, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6767503);
        mpfr_init(r6767504);
        mpfr_init_set_str(r6767505, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6767506);
        mpfr_init_set_str(r6767507, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6767508);
        mpfr_init(r6767509);
        mpfr_init(r6767510);
        mpfr_init(r6767511);
}

double f_fm(double x) {
        mpfr_set_d(r6767491, x, MPFR_RNDN);
        mpfr_mul(r6767492, r6767491, r6767491, MPFR_RNDN);
        ;
        mpfr_mul(r6767494, r6767492, r6767493, MPFR_RNDN);
        ;
        mpfr_add(r6767496, r6767494, r6767495, MPFR_RNDN);
        mpfr_mul(r6767497, r6767492, r6767492, MPFR_RNDN);
        mpfr_mul(r6767498, r6767497, r6767497, MPFR_RNDN);
        ;
        mpfr_mul(r6767500, r6767499, r6767491, MPFR_RNDN);
        mpfr_mul(r6767501, r6767491, r6767500, MPFR_RNDN);
        ;
        mpfr_add(r6767503, r6767501, r6767502, MPFR_RNDN);
        mpfr_mul(r6767504, r6767498, r6767503, MPFR_RNDN);
        ;
        mpfr_mul(r6767506, r6767492, r6767505, MPFR_RNDN);
        ;
        mpfr_add(r6767508, r6767506, r6767507, MPFR_RNDN);
        mpfr_mul(r6767509, r6767497, r6767508, MPFR_RNDN);
        mpfr_add(r6767510, r6767504, r6767509, MPFR_RNDN);
        mpfr_add(r6767511, r6767496, r6767510, MPFR_RNDN);
        return mpfr_get_d(r6767511, MPFR_RNDN);
}

static mpfr_t r6767512, r6767513, r6767514, r6767515, r6767516, r6767517, r6767518, r6767519, r6767520, r6767521, r6767522, r6767523, r6767524, r6767525, r6767526, r6767527, r6767528, r6767529, r6767530, r6767531, r6767532;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6767512);
        mpfr_init(r6767513);
        mpfr_init_set_str(r6767514, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6767515);
        mpfr_init_set_str(r6767516, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r6767517);
        mpfr_init(r6767518);
        mpfr_init(r6767519);
        mpfr_init_set_str(r6767520, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6767521);
        mpfr_init(r6767522);
        mpfr_init_set_str(r6767523, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6767524);
        mpfr_init(r6767525);
        mpfr_init_set_str(r6767526, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6767527);
        mpfr_init_set_str(r6767528, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6767529);
        mpfr_init(r6767530);
        mpfr_init(r6767531);
        mpfr_init(r6767532);
}

double f_dm(double x) {
        mpfr_set_d(r6767512, x, MPFR_RNDN);
        mpfr_mul(r6767513, r6767512, r6767512, MPFR_RNDN);
        ;
        mpfr_mul(r6767515, r6767513, r6767514, MPFR_RNDN);
        ;
        mpfr_add(r6767517, r6767515, r6767516, MPFR_RNDN);
        mpfr_mul(r6767518, r6767513, r6767513, MPFR_RNDN);
        mpfr_mul(r6767519, r6767518, r6767518, MPFR_RNDN);
        ;
        mpfr_mul(r6767521, r6767520, r6767512, MPFR_RNDN);
        mpfr_mul(r6767522, r6767512, r6767521, MPFR_RNDN);
        ;
        mpfr_add(r6767524, r6767522, r6767523, MPFR_RNDN);
        mpfr_mul(r6767525, r6767519, r6767524, MPFR_RNDN);
        ;
        mpfr_mul(r6767527, r6767513, r6767526, MPFR_RNDN);
        ;
        mpfr_add(r6767529, r6767527, r6767528, MPFR_RNDN);
        mpfr_mul(r6767530, r6767518, r6767529, MPFR_RNDN);
        mpfr_add(r6767531, r6767525, r6767530, MPFR_RNDN);
        mpfr_add(r6767532, r6767517, r6767531, MPFR_RNDN);
        return mpfr_get_d(r6767532, MPFR_RNDN);
}

