#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r9405382 = -30240.0;
        float r9405383 = 302400.0;
        float r9405384 = x;
        float r9405385 = r9405384 * r9405384;
        float r9405386 = r9405383 * r9405385;
        float r9405387 = r9405382 + r9405386;
        float r9405388 = -403200.0;
        float r9405389 = r9405385 * r9405384;
        float r9405390 = r9405389 * r9405384;
        float r9405391 = r9405388 * r9405390;
        float r9405392 = r9405387 + r9405391;
        float r9405393 = 161280.0;
        float r9405394 = r9405390 * r9405384;
        float r9405395 = r9405394 * r9405384;
        float r9405396 = r9405393 * r9405395;
        float r9405397 = r9405392 + r9405396;
        float r9405398 = -23040.0;
        float r9405399 = r9405395 * r9405384;
        float r9405400 = r9405399 * r9405384;
        float r9405401 = r9405398 * r9405400;
        float r9405402 = r9405397 + r9405401;
        float r9405403 = 1024.0;
        float r9405404 = r9405400 * r9405384;
        float r9405405 = r9405404 * r9405384;
        float r9405406 = r9405403 * r9405405;
        float r9405407 = r9405402 + r9405406;
        return r9405407;
}

double f_id(double x) {
        double r9405408 = -30240.0;
        double r9405409 = 302400.0;
        double r9405410 = x;
        double r9405411 = r9405410 * r9405410;
        double r9405412 = r9405409 * r9405411;
        double r9405413 = r9405408 + r9405412;
        double r9405414 = -403200.0;
        double r9405415 = r9405411 * r9405410;
        double r9405416 = r9405415 * r9405410;
        double r9405417 = r9405414 * r9405416;
        double r9405418 = r9405413 + r9405417;
        double r9405419 = 161280.0;
        double r9405420 = r9405416 * r9405410;
        double r9405421 = r9405420 * r9405410;
        double r9405422 = r9405419 * r9405421;
        double r9405423 = r9405418 + r9405422;
        double r9405424 = -23040.0;
        double r9405425 = r9405421 * r9405410;
        double r9405426 = r9405425 * r9405410;
        double r9405427 = r9405424 * r9405426;
        double r9405428 = r9405423 + r9405427;
        double r9405429 = 1024.0;
        double r9405430 = r9405426 * r9405410;
        double r9405431 = r9405430 * r9405410;
        double r9405432 = r9405429 * r9405431;
        double r9405433 = r9405428 + r9405432;
        return r9405433;
}


double f_of(float x) {
        float r9405434 = -30240.0;
        float r9405435 = 302400.0;
        float r9405436 = x;
        float r9405437 = r9405436 * r9405436;
        float r9405438 = r9405435 * r9405437;
        float r9405439 = r9405434 + r9405438;
        float r9405440 = -403200.0;
        float r9405441 = r9405437 * r9405436;
        float r9405442 = r9405441 * r9405436;
        float r9405443 = r9405440 * r9405442;
        float r9405444 = r9405439 + r9405443;
        float r9405445 = 161280.0;
        float r9405446 = r9405442 * r9405436;
        float r9405447 = r9405446 * r9405436;
        float r9405448 = r9405445 * r9405447;
        float r9405449 = r9405444 + r9405448;
        float r9405450 = -23040.0;
        float r9405451 = r9405447 * r9405436;
        float r9405452 = r9405451 * r9405436;
        float r9405453 = r9405450 * r9405452;
        float r9405454 = r9405449 + r9405453;
        float r9405455 = 1024.0;
        float r9405456 = r9405452 * r9405436;
        float r9405457 = r9405456 * r9405436;
        float r9405458 = r9405455 * r9405457;
        float r9405459 = r9405454 + r9405458;
        return r9405459;
}

double f_od(double x) {
        double r9405460 = -30240.0;
        double r9405461 = 302400.0;
        double r9405462 = x;
        double r9405463 = r9405462 * r9405462;
        double r9405464 = r9405461 * r9405463;
        double r9405465 = r9405460 + r9405464;
        double r9405466 = -403200.0;
        double r9405467 = r9405463 * r9405462;
        double r9405468 = r9405467 * r9405462;
        double r9405469 = r9405466 * r9405468;
        double r9405470 = r9405465 + r9405469;
        double r9405471 = 161280.0;
        double r9405472 = r9405468 * r9405462;
        double r9405473 = r9405472 * r9405462;
        double r9405474 = r9405471 * r9405473;
        double r9405475 = r9405470 + r9405474;
        double r9405476 = -23040.0;
        double r9405477 = r9405473 * r9405462;
        double r9405478 = r9405477 * r9405462;
        double r9405479 = r9405476 * r9405478;
        double r9405480 = r9405475 + r9405479;
        double r9405481 = 1024.0;
        double r9405482 = r9405478 * r9405462;
        double r9405483 = r9405482 * r9405462;
        double r9405484 = r9405481 * r9405483;
        double r9405485 = r9405480 + r9405484;
        return r9405485;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9405486, r9405487, r9405488, r9405489, r9405490, r9405491, r9405492, r9405493, r9405494, r9405495, r9405496, r9405497, r9405498, r9405499, r9405500, r9405501, r9405502, r9405503, r9405504, r9405505, r9405506, r9405507, r9405508, r9405509, r9405510, r9405511;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9405486, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9405487, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9405488);
        mpfr_init(r9405489);
        mpfr_init(r9405490);
        mpfr_init(r9405491);
        mpfr_init_set_str(r9405492, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9405493);
        mpfr_init(r9405494);
        mpfr_init(r9405495);
        mpfr_init(r9405496);
        mpfr_init_set_str(r9405497, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9405498);
        mpfr_init(r9405499);
        mpfr_init(r9405500);
        mpfr_init(r9405501);
        mpfr_init_set_str(r9405502, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9405503);
        mpfr_init(r9405504);
        mpfr_init(r9405505);
        mpfr_init(r9405506);
        mpfr_init_set_str(r9405507, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9405508);
        mpfr_init(r9405509);
        mpfr_init(r9405510);
        mpfr_init(r9405511);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9405488, x, MPFR_RNDN);
        mpfr_mul(r9405489, r9405488, r9405488, MPFR_RNDN);
        mpfr_mul(r9405490, r9405487, r9405489, MPFR_RNDN);
        mpfr_add(r9405491, r9405486, r9405490, MPFR_RNDN);
        ;
        mpfr_mul(r9405493, r9405489, r9405488, MPFR_RNDN);
        mpfr_mul(r9405494, r9405493, r9405488, MPFR_RNDN);
        mpfr_mul(r9405495, r9405492, r9405494, MPFR_RNDN);
        mpfr_add(r9405496, r9405491, r9405495, MPFR_RNDN);
        ;
        mpfr_mul(r9405498, r9405494, r9405488, MPFR_RNDN);
        mpfr_mul(r9405499, r9405498, r9405488, MPFR_RNDN);
        mpfr_mul(r9405500, r9405497, r9405499, MPFR_RNDN);
        mpfr_add(r9405501, r9405496, r9405500, MPFR_RNDN);
        ;
        mpfr_mul(r9405503, r9405499, r9405488, MPFR_RNDN);
        mpfr_mul(r9405504, r9405503, r9405488, MPFR_RNDN);
        mpfr_mul(r9405505, r9405502, r9405504, MPFR_RNDN);
        mpfr_add(r9405506, r9405501, r9405505, MPFR_RNDN);
        ;
        mpfr_mul(r9405508, r9405504, r9405488, MPFR_RNDN);
        mpfr_mul(r9405509, r9405508, r9405488, MPFR_RNDN);
        mpfr_mul(r9405510, r9405507, r9405509, MPFR_RNDN);
        mpfr_add(r9405511, r9405506, r9405510, MPFR_RNDN);
        return mpfr_get_d(r9405511, MPFR_RNDN);
}

static mpfr_t r9405512, r9405513, r9405514, r9405515, r9405516, r9405517, r9405518, r9405519, r9405520, r9405521, r9405522, r9405523, r9405524, r9405525, r9405526, r9405527, r9405528, r9405529, r9405530, r9405531, r9405532, r9405533, r9405534, r9405535, r9405536, r9405537;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9405512, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9405513, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9405514);
        mpfr_init(r9405515);
        mpfr_init(r9405516);
        mpfr_init(r9405517);
        mpfr_init_set_str(r9405518, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9405519);
        mpfr_init(r9405520);
        mpfr_init(r9405521);
        mpfr_init(r9405522);
        mpfr_init_set_str(r9405523, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9405524);
        mpfr_init(r9405525);
        mpfr_init(r9405526);
        mpfr_init(r9405527);
        mpfr_init_set_str(r9405528, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9405529);
        mpfr_init(r9405530);
        mpfr_init(r9405531);
        mpfr_init(r9405532);
        mpfr_init_set_str(r9405533, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9405534);
        mpfr_init(r9405535);
        mpfr_init(r9405536);
        mpfr_init(r9405537);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9405514, x, MPFR_RNDN);
        mpfr_mul(r9405515, r9405514, r9405514, MPFR_RNDN);
        mpfr_mul(r9405516, r9405513, r9405515, MPFR_RNDN);
        mpfr_add(r9405517, r9405512, r9405516, MPFR_RNDN);
        ;
        mpfr_mul(r9405519, r9405515, r9405514, MPFR_RNDN);
        mpfr_mul(r9405520, r9405519, r9405514, MPFR_RNDN);
        mpfr_mul(r9405521, r9405518, r9405520, MPFR_RNDN);
        mpfr_add(r9405522, r9405517, r9405521, MPFR_RNDN);
        ;
        mpfr_mul(r9405524, r9405520, r9405514, MPFR_RNDN);
        mpfr_mul(r9405525, r9405524, r9405514, MPFR_RNDN);
        mpfr_mul(r9405526, r9405523, r9405525, MPFR_RNDN);
        mpfr_add(r9405527, r9405522, r9405526, MPFR_RNDN);
        ;
        mpfr_mul(r9405529, r9405525, r9405514, MPFR_RNDN);
        mpfr_mul(r9405530, r9405529, r9405514, MPFR_RNDN);
        mpfr_mul(r9405531, r9405528, r9405530, MPFR_RNDN);
        mpfr_add(r9405532, r9405527, r9405531, MPFR_RNDN);
        ;
        mpfr_mul(r9405534, r9405530, r9405514, MPFR_RNDN);
        mpfr_mul(r9405535, r9405534, r9405514, MPFR_RNDN);
        mpfr_mul(r9405536, r9405533, r9405535, MPFR_RNDN);
        mpfr_add(r9405537, r9405532, r9405536, MPFR_RNDN);
        return mpfr_get_d(r9405537, MPFR_RNDN);
}

static mpfr_t r9405538, r9405539, r9405540, r9405541, r9405542, r9405543, r9405544, r9405545, r9405546, r9405547, r9405548, r9405549, r9405550, r9405551, r9405552, r9405553, r9405554, r9405555, r9405556, r9405557, r9405558, r9405559, r9405560, r9405561, r9405562, r9405563;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9405538, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9405539, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9405540);
        mpfr_init(r9405541);
        mpfr_init(r9405542);
        mpfr_init(r9405543);
        mpfr_init_set_str(r9405544, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9405545);
        mpfr_init(r9405546);
        mpfr_init(r9405547);
        mpfr_init(r9405548);
        mpfr_init_set_str(r9405549, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9405550);
        mpfr_init(r9405551);
        mpfr_init(r9405552);
        mpfr_init(r9405553);
        mpfr_init_set_str(r9405554, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9405555);
        mpfr_init(r9405556);
        mpfr_init(r9405557);
        mpfr_init(r9405558);
        mpfr_init_set_str(r9405559, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9405560);
        mpfr_init(r9405561);
        mpfr_init(r9405562);
        mpfr_init(r9405563);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9405540, x, MPFR_RNDN);
        mpfr_mul(r9405541, r9405540, r9405540, MPFR_RNDN);
        mpfr_mul(r9405542, r9405539, r9405541, MPFR_RNDN);
        mpfr_add(r9405543, r9405538, r9405542, MPFR_RNDN);
        ;
        mpfr_mul(r9405545, r9405541, r9405540, MPFR_RNDN);
        mpfr_mul(r9405546, r9405545, r9405540, MPFR_RNDN);
        mpfr_mul(r9405547, r9405544, r9405546, MPFR_RNDN);
        mpfr_add(r9405548, r9405543, r9405547, MPFR_RNDN);
        ;
        mpfr_mul(r9405550, r9405546, r9405540, MPFR_RNDN);
        mpfr_mul(r9405551, r9405550, r9405540, MPFR_RNDN);
        mpfr_mul(r9405552, r9405549, r9405551, MPFR_RNDN);
        mpfr_add(r9405553, r9405548, r9405552, MPFR_RNDN);
        ;
        mpfr_mul(r9405555, r9405551, r9405540, MPFR_RNDN);
        mpfr_mul(r9405556, r9405555, r9405540, MPFR_RNDN);
        mpfr_mul(r9405557, r9405554, r9405556, MPFR_RNDN);
        mpfr_add(r9405558, r9405553, r9405557, MPFR_RNDN);
        ;
        mpfr_mul(r9405560, r9405556, r9405540, MPFR_RNDN);
        mpfr_mul(r9405561, r9405560, r9405540, MPFR_RNDN);
        mpfr_mul(r9405562, r9405559, r9405561, MPFR_RNDN);
        mpfr_add(r9405563, r9405558, r9405562, MPFR_RNDN);
        return mpfr_get_d(r9405563, MPFR_RNDN);
}

