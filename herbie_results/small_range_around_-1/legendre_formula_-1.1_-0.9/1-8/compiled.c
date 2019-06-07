#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r29570391 = 0.273438;
        float r29570392 = -9.84375;
        float r29570393 = x;
        float r29570394 = r29570393 * r29570393;
        float r29570395 = r29570392 * r29570394;
        float r29570396 = r29570391 + r29570395;
        float r29570397 = 54.140625;
        float r29570398 = r29570394 * r29570393;
        float r29570399 = r29570398 * r29570393;
        float r29570400 = r29570397 * r29570399;
        float r29570401 = r29570396 + r29570400;
        float r29570402 = -93.84375;
        float r29570403 = r29570399 * r29570393;
        float r29570404 = r29570403 * r29570393;
        float r29570405 = r29570402 * r29570404;
        float r29570406 = r29570401 + r29570405;
        float r29570407 = 50.273438;
        float r29570408 = r29570404 * r29570393;
        float r29570409 = r29570408 * r29570393;
        float r29570410 = r29570407 * r29570409;
        float r29570411 = r29570406 + r29570410;
        return r29570411;
}

double f_id(double x) {
        double r29570412 = 0.273438;
        double r29570413 = -9.84375;
        double r29570414 = x;
        double r29570415 = r29570414 * r29570414;
        double r29570416 = r29570413 * r29570415;
        double r29570417 = r29570412 + r29570416;
        double r29570418 = 54.140625;
        double r29570419 = r29570415 * r29570414;
        double r29570420 = r29570419 * r29570414;
        double r29570421 = r29570418 * r29570420;
        double r29570422 = r29570417 + r29570421;
        double r29570423 = -93.84375;
        double r29570424 = r29570420 * r29570414;
        double r29570425 = r29570424 * r29570414;
        double r29570426 = r29570423 * r29570425;
        double r29570427 = r29570422 + r29570426;
        double r29570428 = 50.273438;
        double r29570429 = r29570425 * r29570414;
        double r29570430 = r29570429 * r29570414;
        double r29570431 = r29570428 * r29570430;
        double r29570432 = r29570427 + r29570431;
        return r29570432;
}


double f_of(float x) {
        float r29570433 = x;
        float r29570434 = 54.140625;
        float r29570435 = r29570433 * r29570434;
        float r29570436 = 3;
        float r29570437 = pow(r29570433, r29570436);
        float r29570438 = r29570435 * r29570437;
        float r29570439 = -9.84375;
        float r29570440 = r29570433 * r29570439;
        float r29570441 = r29570433 * r29570440;
        float r29570442 = r29570438 + r29570441;
        float r29570443 = exp(r29570442);
        float r29570444 = 0.273438;
        float r29570445 = exp(r29570444);
        float r29570446 = r29570443 * r29570445;
        float r29570447 = r29570437 * r29570437;
        float r29570448 = exp(r29570447);
        float r29570449 = 50.273438;
        float r29570450 = r29570449 * r29570433;
        float r29570451 = r29570433 * r29570450;
        float r29570452 = -93.84375;
        float r29570453 = r29570451 + r29570452;
        float r29570454 = pow(r29570448, r29570453);
        float r29570455 = sqrt(r29570454);
        float r29570456 = r29570455 * r29570455;
        float r29570457 = r29570446 * r29570456;
        float r29570458 = log(r29570457);
        return r29570458;
}

double f_od(double x) {
        double r29570459 = x;
        double r29570460 = 54.140625;
        double r29570461 = r29570459 * r29570460;
        double r29570462 = 3;
        double r29570463 = pow(r29570459, r29570462);
        double r29570464 = r29570461 * r29570463;
        double r29570465 = -9.84375;
        double r29570466 = r29570459 * r29570465;
        double r29570467 = r29570459 * r29570466;
        double r29570468 = r29570464 + r29570467;
        double r29570469 = exp(r29570468);
        double r29570470 = 0.273438;
        double r29570471 = exp(r29570470);
        double r29570472 = r29570469 * r29570471;
        double r29570473 = r29570463 * r29570463;
        double r29570474 = exp(r29570473);
        double r29570475 = 50.273438;
        double r29570476 = r29570475 * r29570459;
        double r29570477 = r29570459 * r29570476;
        double r29570478 = -93.84375;
        double r29570479 = r29570477 + r29570478;
        double r29570480 = pow(r29570474, r29570479);
        double r29570481 = sqrt(r29570480);
        double r29570482 = r29570481 * r29570481;
        double r29570483 = r29570472 * r29570482;
        double r29570484 = log(r29570483);
        return r29570484;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29570485, r29570486, r29570487, r29570488, r29570489, r29570490, r29570491, r29570492, r29570493, r29570494, r29570495, r29570496, r29570497, r29570498, r29570499, r29570500, r29570501, r29570502, r29570503, r29570504, r29570505;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29570485, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r29570486, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r29570487);
        mpfr_init(r29570488);
        mpfr_init(r29570489);
        mpfr_init(r29570490);
        mpfr_init_set_str(r29570491, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r29570492);
        mpfr_init(r29570493);
        mpfr_init(r29570494);
        mpfr_init(r29570495);
        mpfr_init_set_str(r29570496, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r29570497);
        mpfr_init(r29570498);
        mpfr_init(r29570499);
        mpfr_init(r29570500);
        mpfr_init_set_str(r29570501, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r29570502);
        mpfr_init(r29570503);
        mpfr_init(r29570504);
        mpfr_init(r29570505);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r29570487, x, MPFR_RNDN);
        mpfr_mul(r29570488, r29570487, r29570487, MPFR_RNDN);
        mpfr_mul(r29570489, r29570486, r29570488, MPFR_RNDN);
        mpfr_add(r29570490, r29570485, r29570489, MPFR_RNDN);
        ;
        mpfr_mul(r29570492, r29570488, r29570487, MPFR_RNDN);
        mpfr_mul(r29570493, r29570492, r29570487, MPFR_RNDN);
        mpfr_mul(r29570494, r29570491, r29570493, MPFR_RNDN);
        mpfr_add(r29570495, r29570490, r29570494, MPFR_RNDN);
        ;
        mpfr_mul(r29570497, r29570493, r29570487, MPFR_RNDN);
        mpfr_mul(r29570498, r29570497, r29570487, MPFR_RNDN);
        mpfr_mul(r29570499, r29570496, r29570498, MPFR_RNDN);
        mpfr_add(r29570500, r29570495, r29570499, MPFR_RNDN);
        ;
        mpfr_mul(r29570502, r29570498, r29570487, MPFR_RNDN);
        mpfr_mul(r29570503, r29570502, r29570487, MPFR_RNDN);
        mpfr_mul(r29570504, r29570501, r29570503, MPFR_RNDN);
        mpfr_add(r29570505, r29570500, r29570504, MPFR_RNDN);
        return mpfr_get_d(r29570505, MPFR_RNDN);
}

static mpfr_t r29570506, r29570507, r29570508, r29570509, r29570510, r29570511, r29570512, r29570513, r29570514, r29570515, r29570516, r29570517, r29570518, r29570519, r29570520, r29570521, r29570522, r29570523, r29570524, r29570525, r29570526, r29570527, r29570528, r29570529, r29570530, r29570531;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29570506);
        mpfr_init_set_str(r29570507, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r29570508);
        mpfr_init_set_str(r29570509, "3", 10, MPFR_RNDN);
        mpfr_init(r29570510);
        mpfr_init(r29570511);
        mpfr_init_set_str(r29570512, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r29570513);
        mpfr_init(r29570514);
        mpfr_init(r29570515);
        mpfr_init(r29570516);
        mpfr_init_set_str(r29570517, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r29570518);
        mpfr_init(r29570519);
        mpfr_init(r29570520);
        mpfr_init(r29570521);
        mpfr_init_set_str(r29570522, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r29570523);
        mpfr_init(r29570524);
        mpfr_init_set_str(r29570525, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r29570526);
        mpfr_init(r29570527);
        mpfr_init(r29570528);
        mpfr_init(r29570529);
        mpfr_init(r29570530);
        mpfr_init(r29570531);
}

double f_fm(double x) {
        mpfr_set_d(r29570506, x, MPFR_RNDN);
        ;
        mpfr_mul(r29570508, r29570506, r29570507, MPFR_RNDN);
        ;
        mpfr_pow(r29570510, r29570506, r29570509, MPFR_RNDN);
        mpfr_mul(r29570511, r29570508, r29570510, MPFR_RNDN);
        ;
        mpfr_mul(r29570513, r29570506, r29570512, MPFR_RNDN);
        mpfr_mul(r29570514, r29570506, r29570513, MPFR_RNDN);
        mpfr_add(r29570515, r29570511, r29570514, MPFR_RNDN);
        mpfr_exp(r29570516, r29570515, MPFR_RNDN);
        ;
        mpfr_exp(r29570518, r29570517, MPFR_RNDN);
        mpfr_mul(r29570519, r29570516, r29570518, MPFR_RNDN);
        mpfr_mul(r29570520, r29570510, r29570510, MPFR_RNDN);
        mpfr_exp(r29570521, r29570520, MPFR_RNDN);
        ;
        mpfr_mul(r29570523, r29570522, r29570506, MPFR_RNDN);
        mpfr_mul(r29570524, r29570506, r29570523, MPFR_RNDN);
        ;
        mpfr_add(r29570526, r29570524, r29570525, MPFR_RNDN);
        mpfr_pow(r29570527, r29570521, r29570526, MPFR_RNDN);
        mpfr_sqrt(r29570528, r29570527, MPFR_RNDN);
        mpfr_mul(r29570529, r29570528, r29570528, MPFR_RNDN);
        mpfr_mul(r29570530, r29570519, r29570529, MPFR_RNDN);
        mpfr_log(r29570531, r29570530, MPFR_RNDN);
        return mpfr_get_d(r29570531, MPFR_RNDN);
}

static mpfr_t r29570532, r29570533, r29570534, r29570535, r29570536, r29570537, r29570538, r29570539, r29570540, r29570541, r29570542, r29570543, r29570544, r29570545, r29570546, r29570547, r29570548, r29570549, r29570550, r29570551, r29570552, r29570553, r29570554, r29570555, r29570556, r29570557;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29570532);
        mpfr_init_set_str(r29570533, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r29570534);
        mpfr_init_set_str(r29570535, "3", 10, MPFR_RNDN);
        mpfr_init(r29570536);
        mpfr_init(r29570537);
        mpfr_init_set_str(r29570538, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r29570539);
        mpfr_init(r29570540);
        mpfr_init(r29570541);
        mpfr_init(r29570542);
        mpfr_init_set_str(r29570543, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r29570544);
        mpfr_init(r29570545);
        mpfr_init(r29570546);
        mpfr_init(r29570547);
        mpfr_init_set_str(r29570548, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r29570549);
        mpfr_init(r29570550);
        mpfr_init_set_str(r29570551, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r29570552);
        mpfr_init(r29570553);
        mpfr_init(r29570554);
        mpfr_init(r29570555);
        mpfr_init(r29570556);
        mpfr_init(r29570557);
}

double f_dm(double x) {
        mpfr_set_d(r29570532, x, MPFR_RNDN);
        ;
        mpfr_mul(r29570534, r29570532, r29570533, MPFR_RNDN);
        ;
        mpfr_pow(r29570536, r29570532, r29570535, MPFR_RNDN);
        mpfr_mul(r29570537, r29570534, r29570536, MPFR_RNDN);
        ;
        mpfr_mul(r29570539, r29570532, r29570538, MPFR_RNDN);
        mpfr_mul(r29570540, r29570532, r29570539, MPFR_RNDN);
        mpfr_add(r29570541, r29570537, r29570540, MPFR_RNDN);
        mpfr_exp(r29570542, r29570541, MPFR_RNDN);
        ;
        mpfr_exp(r29570544, r29570543, MPFR_RNDN);
        mpfr_mul(r29570545, r29570542, r29570544, MPFR_RNDN);
        mpfr_mul(r29570546, r29570536, r29570536, MPFR_RNDN);
        mpfr_exp(r29570547, r29570546, MPFR_RNDN);
        ;
        mpfr_mul(r29570549, r29570548, r29570532, MPFR_RNDN);
        mpfr_mul(r29570550, r29570532, r29570549, MPFR_RNDN);
        ;
        mpfr_add(r29570552, r29570550, r29570551, MPFR_RNDN);
        mpfr_pow(r29570553, r29570547, r29570552, MPFR_RNDN);
        mpfr_sqrt(r29570554, r29570553, MPFR_RNDN);
        mpfr_mul(r29570555, r29570554, r29570554, MPFR_RNDN);
        mpfr_mul(r29570556, r29570545, r29570555, MPFR_RNDN);
        mpfr_log(r29570557, r29570556, MPFR_RNDN);
        return mpfr_get_d(r29570557, MPFR_RNDN);
}

