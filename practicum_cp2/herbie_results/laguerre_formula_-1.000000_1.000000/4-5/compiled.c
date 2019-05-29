#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r20862383 = 1.0;
        float r20862384 = -5.0;
        float r20862385 = x;
        float r20862386 = r20862384 * r20862385;
        float r20862387 = r20862383 + r20862386;
        float r20862388 = 5.0;
        float r20862389 = r20862385 * r20862385;
        float r20862390 = r20862388 * r20862389;
        float r20862391 = r20862387 + r20862390;
        float r20862392 = -1.666667;
        float r20862393 = r20862389 * r20862385;
        float r20862394 = r20862392 * r20862393;
        float r20862395 = r20862391 + r20862394;
        float r20862396 = 0.208333;
        float r20862397 = r20862393 * r20862385;
        float r20862398 = r20862396 * r20862397;
        float r20862399 = r20862395 + r20862398;
        float r20862400 = -0.008333;
        float r20862401 = r20862397 * r20862385;
        float r20862402 = r20862400 * r20862401;
        float r20862403 = r20862399 + r20862402;
        return r20862403;
}

double f_id(double x) {
        double r20862404 = 1.0;
        double r20862405 = -5.0;
        double r20862406 = x;
        double r20862407 = r20862405 * r20862406;
        double r20862408 = r20862404 + r20862407;
        double r20862409 = 5.0;
        double r20862410 = r20862406 * r20862406;
        double r20862411 = r20862409 * r20862410;
        double r20862412 = r20862408 + r20862411;
        double r20862413 = -1.666667;
        double r20862414 = r20862410 * r20862406;
        double r20862415 = r20862413 * r20862414;
        double r20862416 = r20862412 + r20862415;
        double r20862417 = 0.208333;
        double r20862418 = r20862414 * r20862406;
        double r20862419 = r20862417 * r20862418;
        double r20862420 = r20862416 + r20862419;
        double r20862421 = -0.008333;
        double r20862422 = r20862418 * r20862406;
        double r20862423 = r20862421 * r20862422;
        double r20862424 = r20862420 + r20862423;
        return r20862424;
}


double f_of(float x) {
        float r20862425 = x;
        float r20862426 = -5.0;
        float r20862427 = r20862425 * r20862426;
        float r20862428 = 1.0;
        float r20862429 = r20862427 + r20862428;
        float r20862430 = r20862425 * r20862425;
        float r20862431 = r20862430 * r20862430;
        float r20862432 = -0.008333;
        float r20862433 = r20862432 * r20862425;
        float r20862434 = 0.208333;
        float r20862435 = r20862433 + r20862434;
        float r20862436 = r20862431 * r20862435;
        float r20862437 = log(r20862430);
        float r20862438 = -1.666667;
        float r20862439 = r20862438 * r20862425;
        float r20862440 = 5.0;
        float r20862441 = r20862439 + r20862440;
        float r20862442 = log(r20862441);
        float r20862443 = r20862437 + r20862442;
        float r20862444 = exp(r20862443);
        float r20862445 = r20862436 + r20862444;
        float r20862446 = r20862429 + r20862445;
        return r20862446;
}

double f_od(double x) {
        double r20862447 = x;
        double r20862448 = -5.0;
        double r20862449 = r20862447 * r20862448;
        double r20862450 = 1.0;
        double r20862451 = r20862449 + r20862450;
        double r20862452 = r20862447 * r20862447;
        double r20862453 = r20862452 * r20862452;
        double r20862454 = -0.008333;
        double r20862455 = r20862454 * r20862447;
        double r20862456 = 0.208333;
        double r20862457 = r20862455 + r20862456;
        double r20862458 = r20862453 * r20862457;
        double r20862459 = log(r20862452);
        double r20862460 = -1.666667;
        double r20862461 = r20862460 * r20862447;
        double r20862462 = 5.0;
        double r20862463 = r20862461 + r20862462;
        double r20862464 = log(r20862463);
        double r20862465 = r20862459 + r20862464;
        double r20862466 = exp(r20862465);
        double r20862467 = r20862458 + r20862466;
        double r20862468 = r20862451 + r20862467;
        return r20862468;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20862469, r20862470, r20862471, r20862472, r20862473, r20862474, r20862475, r20862476, r20862477, r20862478, r20862479, r20862480, r20862481, r20862482, r20862483, r20862484, r20862485, r20862486, r20862487, r20862488, r20862489;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20862469, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862470, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r20862471);
        mpfr_init(r20862472);
        mpfr_init(r20862473);
        mpfr_init_set_str(r20862474, "5.0", 10, MPFR_RNDN);
        mpfr_init(r20862475);
        mpfr_init(r20862476);
        mpfr_init(r20862477);
        mpfr_init_set_str(r20862478, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r20862479);
        mpfr_init(r20862480);
        mpfr_init(r20862481);
        mpfr_init_set_str(r20862482, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r20862483);
        mpfr_init(r20862484);
        mpfr_init(r20862485);
        mpfr_init_set_str(r20862486, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r20862487);
        mpfr_init(r20862488);
        mpfr_init(r20862489);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20862471, x, MPFR_RNDN);
        mpfr_mul(r20862472, r20862470, r20862471, MPFR_RNDN);
        mpfr_add(r20862473, r20862469, r20862472, MPFR_RNDN);
        ;
        mpfr_mul(r20862475, r20862471, r20862471, MPFR_RNDN);
        mpfr_mul(r20862476, r20862474, r20862475, MPFR_RNDN);
        mpfr_add(r20862477, r20862473, r20862476, MPFR_RNDN);
        ;
        mpfr_mul(r20862479, r20862475, r20862471, MPFR_RNDN);
        mpfr_mul(r20862480, r20862478, r20862479, MPFR_RNDN);
        mpfr_add(r20862481, r20862477, r20862480, MPFR_RNDN);
        ;
        mpfr_mul(r20862483, r20862479, r20862471, MPFR_RNDN);
        mpfr_mul(r20862484, r20862482, r20862483, MPFR_RNDN);
        mpfr_add(r20862485, r20862481, r20862484, MPFR_RNDN);
        ;
        mpfr_mul(r20862487, r20862483, r20862471, MPFR_RNDN);
        mpfr_mul(r20862488, r20862486, r20862487, MPFR_RNDN);
        mpfr_add(r20862489, r20862485, r20862488, MPFR_RNDN);
        return mpfr_get_d(r20862489, MPFR_RNDN);
}

static mpfr_t r20862490, r20862491, r20862492, r20862493, r20862494, r20862495, r20862496, r20862497, r20862498, r20862499, r20862500, r20862501, r20862502, r20862503, r20862504, r20862505, r20862506, r20862507, r20862508, r20862509, r20862510, r20862511;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20862490);
        mpfr_init_set_str(r20862491, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r20862492);
        mpfr_init_set_str(r20862493, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20862494);
        mpfr_init(r20862495);
        mpfr_init(r20862496);
        mpfr_init_set_str(r20862497, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r20862498);
        mpfr_init_set_str(r20862499, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r20862500);
        mpfr_init(r20862501);
        mpfr_init(r20862502);
        mpfr_init_set_str(r20862503, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r20862504);
        mpfr_init_set_str(r20862505, "5.0", 10, MPFR_RNDN);
        mpfr_init(r20862506);
        mpfr_init(r20862507);
        mpfr_init(r20862508);
        mpfr_init(r20862509);
        mpfr_init(r20862510);
        mpfr_init(r20862511);
}

double f_fm(double x) {
        mpfr_set_d(r20862490, x, MPFR_RNDN);
        ;
        mpfr_mul(r20862492, r20862490, r20862491, MPFR_RNDN);
        ;
        mpfr_add(r20862494, r20862492, r20862493, MPFR_RNDN);
        mpfr_mul(r20862495, r20862490, r20862490, MPFR_RNDN);
        mpfr_mul(r20862496, r20862495, r20862495, MPFR_RNDN);
        ;
        mpfr_mul(r20862498, r20862497, r20862490, MPFR_RNDN);
        ;
        mpfr_add(r20862500, r20862498, r20862499, MPFR_RNDN);
        mpfr_mul(r20862501, r20862496, r20862500, MPFR_RNDN);
        mpfr_log(r20862502, r20862495, MPFR_RNDN);
        ;
        mpfr_mul(r20862504, r20862503, r20862490, MPFR_RNDN);
        ;
        mpfr_add(r20862506, r20862504, r20862505, MPFR_RNDN);
        mpfr_log(r20862507, r20862506, MPFR_RNDN);
        mpfr_add(r20862508, r20862502, r20862507, MPFR_RNDN);
        mpfr_exp(r20862509, r20862508, MPFR_RNDN);
        mpfr_add(r20862510, r20862501, r20862509, MPFR_RNDN);
        mpfr_add(r20862511, r20862494, r20862510, MPFR_RNDN);
        return mpfr_get_d(r20862511, MPFR_RNDN);
}

static mpfr_t r20862512, r20862513, r20862514, r20862515, r20862516, r20862517, r20862518, r20862519, r20862520, r20862521, r20862522, r20862523, r20862524, r20862525, r20862526, r20862527, r20862528, r20862529, r20862530, r20862531, r20862532, r20862533;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20862512);
        mpfr_init_set_str(r20862513, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r20862514);
        mpfr_init_set_str(r20862515, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20862516);
        mpfr_init(r20862517);
        mpfr_init(r20862518);
        mpfr_init_set_str(r20862519, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r20862520);
        mpfr_init_set_str(r20862521, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r20862522);
        mpfr_init(r20862523);
        mpfr_init(r20862524);
        mpfr_init_set_str(r20862525, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r20862526);
        mpfr_init_set_str(r20862527, "5.0", 10, MPFR_RNDN);
        mpfr_init(r20862528);
        mpfr_init(r20862529);
        mpfr_init(r20862530);
        mpfr_init(r20862531);
        mpfr_init(r20862532);
        mpfr_init(r20862533);
}

double f_dm(double x) {
        mpfr_set_d(r20862512, x, MPFR_RNDN);
        ;
        mpfr_mul(r20862514, r20862512, r20862513, MPFR_RNDN);
        ;
        mpfr_add(r20862516, r20862514, r20862515, MPFR_RNDN);
        mpfr_mul(r20862517, r20862512, r20862512, MPFR_RNDN);
        mpfr_mul(r20862518, r20862517, r20862517, MPFR_RNDN);
        ;
        mpfr_mul(r20862520, r20862519, r20862512, MPFR_RNDN);
        ;
        mpfr_add(r20862522, r20862520, r20862521, MPFR_RNDN);
        mpfr_mul(r20862523, r20862518, r20862522, MPFR_RNDN);
        mpfr_log(r20862524, r20862517, MPFR_RNDN);
        ;
        mpfr_mul(r20862526, r20862525, r20862512, MPFR_RNDN);
        ;
        mpfr_add(r20862528, r20862526, r20862527, MPFR_RNDN);
        mpfr_log(r20862529, r20862528, MPFR_RNDN);
        mpfr_add(r20862530, r20862524, r20862529, MPFR_RNDN);
        mpfr_exp(r20862531, r20862530, MPFR_RNDN);
        mpfr_add(r20862532, r20862523, r20862531, MPFR_RNDN);
        mpfr_add(r20862533, r20862516, r20862532, MPFR_RNDN);
        return mpfr_get_d(r20862533, MPFR_RNDN);
}

