#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6432423 = -2.1875;
        float r6432424 = x;
        float r6432425 = r6432423 * r6432424;
        float r6432426 = 19.6875;
        float r6432427 = r6432424 * r6432424;
        float r6432428 = r6432427 * r6432424;
        float r6432429 = r6432426 * r6432428;
        float r6432430 = r6432425 + r6432429;
        float r6432431 = -43.3125;
        float r6432432 = r6432428 * r6432424;
        float r6432433 = r6432432 * r6432424;
        float r6432434 = r6432431 * r6432433;
        float r6432435 = r6432430 + r6432434;
        float r6432436 = 26.8125;
        float r6432437 = r6432433 * r6432424;
        float r6432438 = r6432437 * r6432424;
        float r6432439 = r6432436 * r6432438;
        float r6432440 = r6432435 + r6432439;
        return r6432440;
}

double f_id(double x) {
        double r6432441 = -2.1875;
        double r6432442 = x;
        double r6432443 = r6432441 * r6432442;
        double r6432444 = 19.6875;
        double r6432445 = r6432442 * r6432442;
        double r6432446 = r6432445 * r6432442;
        double r6432447 = r6432444 * r6432446;
        double r6432448 = r6432443 + r6432447;
        double r6432449 = -43.3125;
        double r6432450 = r6432446 * r6432442;
        double r6432451 = r6432450 * r6432442;
        double r6432452 = r6432449 * r6432451;
        double r6432453 = r6432448 + r6432452;
        double r6432454 = 26.8125;
        double r6432455 = r6432451 * r6432442;
        double r6432456 = r6432455 * r6432442;
        double r6432457 = r6432454 * r6432456;
        double r6432458 = r6432453 + r6432457;
        return r6432458;
}


double f_of(float x) {
        float r6432459 = x;
        float r6432460 = r6432459 * r6432459;
        float r6432461 = r6432460 * r6432460;
        float r6432462 = 3;
        float r6432463 = pow(r6432459, r6432462);
        float r6432464 = r6432463 * r6432463;
        float r6432465 = 26.8125;
        float r6432466 = r6432459 * r6432465;
        float r6432467 = pow(r6432466, r6432462);
        float r6432468 = r6432464 * r6432467;
        float r6432469 = cbrt(r6432468);
        float r6432470 = -43.3125;
        float r6432471 = r6432459 * r6432470;
        float r6432472 = r6432469 + r6432471;
        float r6432473 = r6432461 * r6432472;
        float r6432474 = -2.1875;
        float r6432475 = r6432474 * r6432459;
        float r6432476 = 19.6875;
        float r6432477 = r6432476 * r6432459;
        float r6432478 = r6432460 * r6432477;
        float r6432479 = r6432475 + r6432478;
        float r6432480 = r6432473 + r6432479;
        return r6432480;
}

double f_od(double x) {
        double r6432481 = x;
        double r6432482 = r6432481 * r6432481;
        double r6432483 = r6432482 * r6432482;
        double r6432484 = 3;
        double r6432485 = pow(r6432481, r6432484);
        double r6432486 = r6432485 * r6432485;
        double r6432487 = 26.8125;
        double r6432488 = r6432481 * r6432487;
        double r6432489 = pow(r6432488, r6432484);
        double r6432490 = r6432486 * r6432489;
        double r6432491 = cbrt(r6432490);
        double r6432492 = -43.3125;
        double r6432493 = r6432481 * r6432492;
        double r6432494 = r6432491 + r6432493;
        double r6432495 = r6432483 * r6432494;
        double r6432496 = -2.1875;
        double r6432497 = r6432496 * r6432481;
        double r6432498 = 19.6875;
        double r6432499 = r6432498 * r6432481;
        double r6432500 = r6432482 * r6432499;
        double r6432501 = r6432497 + r6432500;
        double r6432502 = r6432495 + r6432501;
        return r6432502;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6432503, r6432504, r6432505, r6432506, r6432507, r6432508, r6432509, r6432510, r6432511, r6432512, r6432513, r6432514, r6432515, r6432516, r6432517, r6432518, r6432519, r6432520;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6432503, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6432504);
        mpfr_init(r6432505);
        mpfr_init_set_str(r6432506, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6432507);
        mpfr_init(r6432508);
        mpfr_init(r6432509);
        mpfr_init(r6432510);
        mpfr_init_set_str(r6432511, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6432512);
        mpfr_init(r6432513);
        mpfr_init(r6432514);
        mpfr_init(r6432515);
        mpfr_init_set_str(r6432516, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6432517);
        mpfr_init(r6432518);
        mpfr_init(r6432519);
        mpfr_init(r6432520);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6432504, x, MPFR_RNDN);
        mpfr_mul(r6432505, r6432503, r6432504, MPFR_RNDN);
        ;
        mpfr_mul(r6432507, r6432504, r6432504, MPFR_RNDN);
        mpfr_mul(r6432508, r6432507, r6432504, MPFR_RNDN);
        mpfr_mul(r6432509, r6432506, r6432508, MPFR_RNDN);
        mpfr_add(r6432510, r6432505, r6432509, MPFR_RNDN);
        ;
        mpfr_mul(r6432512, r6432508, r6432504, MPFR_RNDN);
        mpfr_mul(r6432513, r6432512, r6432504, MPFR_RNDN);
        mpfr_mul(r6432514, r6432511, r6432513, MPFR_RNDN);
        mpfr_add(r6432515, r6432510, r6432514, MPFR_RNDN);
        ;
        mpfr_mul(r6432517, r6432513, r6432504, MPFR_RNDN);
        mpfr_mul(r6432518, r6432517, r6432504, MPFR_RNDN);
        mpfr_mul(r6432519, r6432516, r6432518, MPFR_RNDN);
        mpfr_add(r6432520, r6432515, r6432519, MPFR_RNDN);
        return mpfr_get_d(r6432520, MPFR_RNDN);
}

static mpfr_t r6432521, r6432522, r6432523, r6432524, r6432525, r6432526, r6432527, r6432528, r6432529, r6432530, r6432531, r6432532, r6432533, r6432534, r6432535, r6432536, r6432537, r6432538, r6432539, r6432540, r6432541, r6432542;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6432521);
        mpfr_init(r6432522);
        mpfr_init(r6432523);
        mpfr_init_set_str(r6432524, "3", 10, MPFR_RNDN);
        mpfr_init(r6432525);
        mpfr_init(r6432526);
        mpfr_init_set_str(r6432527, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6432528);
        mpfr_init(r6432529);
        mpfr_init(r6432530);
        mpfr_init(r6432531);
        mpfr_init_set_str(r6432532, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6432533);
        mpfr_init(r6432534);
        mpfr_init(r6432535);
        mpfr_init_set_str(r6432536, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6432537);
        mpfr_init_set_str(r6432538, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6432539);
        mpfr_init(r6432540);
        mpfr_init(r6432541);
        mpfr_init(r6432542);
}

double f_fm(double x) {
        mpfr_set_d(r6432521, x, MPFR_RNDN);
        mpfr_mul(r6432522, r6432521, r6432521, MPFR_RNDN);
        mpfr_mul(r6432523, r6432522, r6432522, MPFR_RNDN);
        ;
        mpfr_pow(r6432525, r6432521, r6432524, MPFR_RNDN);
        mpfr_mul(r6432526, r6432525, r6432525, MPFR_RNDN);
        ;
        mpfr_mul(r6432528, r6432521, r6432527, MPFR_RNDN);
        mpfr_pow(r6432529, r6432528, r6432524, MPFR_RNDN);
        mpfr_mul(r6432530, r6432526, r6432529, MPFR_RNDN);
        mpfr_cbrt(r6432531, r6432530, MPFR_RNDN);
        ;
        mpfr_mul(r6432533, r6432521, r6432532, MPFR_RNDN);
        mpfr_add(r6432534, r6432531, r6432533, MPFR_RNDN);
        mpfr_mul(r6432535, r6432523, r6432534, MPFR_RNDN);
        ;
        mpfr_mul(r6432537, r6432536, r6432521, MPFR_RNDN);
        ;
        mpfr_mul(r6432539, r6432538, r6432521, MPFR_RNDN);
        mpfr_mul(r6432540, r6432522, r6432539, MPFR_RNDN);
        mpfr_add(r6432541, r6432537, r6432540, MPFR_RNDN);
        mpfr_add(r6432542, r6432535, r6432541, MPFR_RNDN);
        return mpfr_get_d(r6432542, MPFR_RNDN);
}

static mpfr_t r6432543, r6432544, r6432545, r6432546, r6432547, r6432548, r6432549, r6432550, r6432551, r6432552, r6432553, r6432554, r6432555, r6432556, r6432557, r6432558, r6432559, r6432560, r6432561, r6432562, r6432563, r6432564;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6432543);
        mpfr_init(r6432544);
        mpfr_init(r6432545);
        mpfr_init_set_str(r6432546, "3", 10, MPFR_RNDN);
        mpfr_init(r6432547);
        mpfr_init(r6432548);
        mpfr_init_set_str(r6432549, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6432550);
        mpfr_init(r6432551);
        mpfr_init(r6432552);
        mpfr_init(r6432553);
        mpfr_init_set_str(r6432554, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6432555);
        mpfr_init(r6432556);
        mpfr_init(r6432557);
        mpfr_init_set_str(r6432558, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6432559);
        mpfr_init_set_str(r6432560, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6432561);
        mpfr_init(r6432562);
        mpfr_init(r6432563);
        mpfr_init(r6432564);
}

double f_dm(double x) {
        mpfr_set_d(r6432543, x, MPFR_RNDN);
        mpfr_mul(r6432544, r6432543, r6432543, MPFR_RNDN);
        mpfr_mul(r6432545, r6432544, r6432544, MPFR_RNDN);
        ;
        mpfr_pow(r6432547, r6432543, r6432546, MPFR_RNDN);
        mpfr_mul(r6432548, r6432547, r6432547, MPFR_RNDN);
        ;
        mpfr_mul(r6432550, r6432543, r6432549, MPFR_RNDN);
        mpfr_pow(r6432551, r6432550, r6432546, MPFR_RNDN);
        mpfr_mul(r6432552, r6432548, r6432551, MPFR_RNDN);
        mpfr_cbrt(r6432553, r6432552, MPFR_RNDN);
        ;
        mpfr_mul(r6432555, r6432543, r6432554, MPFR_RNDN);
        mpfr_add(r6432556, r6432553, r6432555, MPFR_RNDN);
        mpfr_mul(r6432557, r6432545, r6432556, MPFR_RNDN);
        ;
        mpfr_mul(r6432559, r6432558, r6432543, MPFR_RNDN);
        ;
        mpfr_mul(r6432561, r6432560, r6432543, MPFR_RNDN);
        mpfr_mul(r6432562, r6432544, r6432561, MPFR_RNDN);
        mpfr_add(r6432563, r6432559, r6432562, MPFR_RNDN);
        mpfr_add(r6432564, r6432557, r6432563, MPFR_RNDN);
        return mpfr_get_d(r6432564, MPFR_RNDN);
}

