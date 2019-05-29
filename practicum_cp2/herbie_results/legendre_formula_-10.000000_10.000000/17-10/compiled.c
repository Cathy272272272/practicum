#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r8102385 = -0.246094;
        float r8102386 = 13.535156;
        float r8102387 = x;
        float r8102388 = r8102387 * r8102387;
        float r8102389 = r8102386 * r8102388;
        float r8102390 = r8102385 + r8102389;
        float r8102391 = -117.304688;
        float r8102392 = r8102388 * r8102387;
        float r8102393 = r8102392 * r8102387;
        float r8102394 = r8102391 * r8102393;
        float r8102395 = r8102390 + r8102394;
        float r8102396 = 351.914062;
        float r8102397 = r8102393 * r8102387;
        float r8102398 = r8102397 * r8102387;
        float r8102399 = r8102396 * r8102398;
        float r8102400 = r8102395 + r8102399;
        float r8102401 = -427.324219;
        float r8102402 = r8102398 * r8102387;
        float r8102403 = r8102402 * r8102387;
        float r8102404 = r8102401 * r8102403;
        float r8102405 = r8102400 + r8102404;
        float r8102406 = 180.425781;
        float r8102407 = r8102403 * r8102387;
        float r8102408 = r8102407 * r8102387;
        float r8102409 = r8102406 * r8102408;
        float r8102410 = r8102405 + r8102409;
        return r8102410;
}

double f_id(double x) {
        double r8102411 = -0.246094;
        double r8102412 = 13.535156;
        double r8102413 = x;
        double r8102414 = r8102413 * r8102413;
        double r8102415 = r8102412 * r8102414;
        double r8102416 = r8102411 + r8102415;
        double r8102417 = -117.304688;
        double r8102418 = r8102414 * r8102413;
        double r8102419 = r8102418 * r8102413;
        double r8102420 = r8102417 * r8102419;
        double r8102421 = r8102416 + r8102420;
        double r8102422 = 351.914062;
        double r8102423 = r8102419 * r8102413;
        double r8102424 = r8102423 * r8102413;
        double r8102425 = r8102422 * r8102424;
        double r8102426 = r8102421 + r8102425;
        double r8102427 = -427.324219;
        double r8102428 = r8102424 * r8102413;
        double r8102429 = r8102428 * r8102413;
        double r8102430 = r8102427 * r8102429;
        double r8102431 = r8102426 + r8102430;
        double r8102432 = 180.425781;
        double r8102433 = r8102429 * r8102413;
        double r8102434 = r8102433 * r8102413;
        double r8102435 = r8102432 * r8102434;
        double r8102436 = r8102431 + r8102435;
        return r8102436;
}


double f_of(float x) {
        float r8102437 = -0.246094;
        float r8102438 = 13.535156;
        float r8102439 = x;
        float r8102440 = r8102439 * r8102439;
        float r8102441 = r8102438 * r8102440;
        float r8102442 = sqrt(r8102441);
        float r8102443 = r8102442 * r8102442;
        float r8102444 = r8102437 + r8102443;
        float r8102445 = -117.304688;
        float r8102446 = r8102440 * r8102439;
        float r8102447 = r8102446 * r8102439;
        float r8102448 = r8102445 * r8102447;
        float r8102449 = r8102444 + r8102448;
        float r8102450 = 351.914062;
        float r8102451 = r8102447 * r8102439;
        float r8102452 = r8102451 * r8102439;
        float r8102453 = r8102450 * r8102452;
        float r8102454 = r8102449 + r8102453;
        float r8102455 = -427.324219;
        float r8102456 = r8102452 * r8102439;
        float r8102457 = r8102456 * r8102439;
        float r8102458 = r8102455 * r8102457;
        float r8102459 = r8102454 + r8102458;
        float r8102460 = 180.425781;
        float r8102461 = r8102457 * r8102439;
        float r8102462 = r8102461 * r8102439;
        float r8102463 = r8102460 * r8102462;
        float r8102464 = r8102459 + r8102463;
        return r8102464;
}

double f_od(double x) {
        double r8102465 = -0.246094;
        double r8102466 = 13.535156;
        double r8102467 = x;
        double r8102468 = r8102467 * r8102467;
        double r8102469 = r8102466 * r8102468;
        double r8102470 = sqrt(r8102469);
        double r8102471 = r8102470 * r8102470;
        double r8102472 = r8102465 + r8102471;
        double r8102473 = -117.304688;
        double r8102474 = r8102468 * r8102467;
        double r8102475 = r8102474 * r8102467;
        double r8102476 = r8102473 * r8102475;
        double r8102477 = r8102472 + r8102476;
        double r8102478 = 351.914062;
        double r8102479 = r8102475 * r8102467;
        double r8102480 = r8102479 * r8102467;
        double r8102481 = r8102478 * r8102480;
        double r8102482 = r8102477 + r8102481;
        double r8102483 = -427.324219;
        double r8102484 = r8102480 * r8102467;
        double r8102485 = r8102484 * r8102467;
        double r8102486 = r8102483 * r8102485;
        double r8102487 = r8102482 + r8102486;
        double r8102488 = 180.425781;
        double r8102489 = r8102485 * r8102467;
        double r8102490 = r8102489 * r8102467;
        double r8102491 = r8102488 * r8102490;
        double r8102492 = r8102487 + r8102491;
        return r8102492;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8102493, r8102494, r8102495, r8102496, r8102497, r8102498, r8102499, r8102500, r8102501, r8102502, r8102503, r8102504, r8102505, r8102506, r8102507, r8102508, r8102509, r8102510, r8102511, r8102512, r8102513, r8102514, r8102515, r8102516, r8102517, r8102518;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102493, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r8102494, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8102495);
        mpfr_init(r8102496);
        mpfr_init(r8102497);
        mpfr_init(r8102498);
        mpfr_init_set_str(r8102499, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r8102500);
        mpfr_init(r8102501);
        mpfr_init(r8102502);
        mpfr_init(r8102503);
        mpfr_init_set_str(r8102504, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8102505);
        mpfr_init(r8102506);
        mpfr_init(r8102507);
        mpfr_init(r8102508);
        mpfr_init_set_str(r8102509, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r8102510);
        mpfr_init(r8102511);
        mpfr_init(r8102512);
        mpfr_init(r8102513);
        mpfr_init_set_str(r8102514, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8102515);
        mpfr_init(r8102516);
        mpfr_init(r8102517);
        mpfr_init(r8102518);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8102495, x, MPFR_RNDN);
        mpfr_mul(r8102496, r8102495, r8102495, MPFR_RNDN);
        mpfr_mul(r8102497, r8102494, r8102496, MPFR_RNDN);
        mpfr_add(r8102498, r8102493, r8102497, MPFR_RNDN);
        ;
        mpfr_mul(r8102500, r8102496, r8102495, MPFR_RNDN);
        mpfr_mul(r8102501, r8102500, r8102495, MPFR_RNDN);
        mpfr_mul(r8102502, r8102499, r8102501, MPFR_RNDN);
        mpfr_add(r8102503, r8102498, r8102502, MPFR_RNDN);
        ;
        mpfr_mul(r8102505, r8102501, r8102495, MPFR_RNDN);
        mpfr_mul(r8102506, r8102505, r8102495, MPFR_RNDN);
        mpfr_mul(r8102507, r8102504, r8102506, MPFR_RNDN);
        mpfr_add(r8102508, r8102503, r8102507, MPFR_RNDN);
        ;
        mpfr_mul(r8102510, r8102506, r8102495, MPFR_RNDN);
        mpfr_mul(r8102511, r8102510, r8102495, MPFR_RNDN);
        mpfr_mul(r8102512, r8102509, r8102511, MPFR_RNDN);
        mpfr_add(r8102513, r8102508, r8102512, MPFR_RNDN);
        ;
        mpfr_mul(r8102515, r8102511, r8102495, MPFR_RNDN);
        mpfr_mul(r8102516, r8102515, r8102495, MPFR_RNDN);
        mpfr_mul(r8102517, r8102514, r8102516, MPFR_RNDN);
        mpfr_add(r8102518, r8102513, r8102517, MPFR_RNDN);
        return mpfr_get_d(r8102518, MPFR_RNDN);
}

static mpfr_t r8102519, r8102520, r8102521, r8102522, r8102523, r8102524, r8102525, r8102526, r8102527, r8102528, r8102529, r8102530, r8102531, r8102532, r8102533, r8102534, r8102535, r8102536, r8102537, r8102538, r8102539, r8102540, r8102541, r8102542, r8102543, r8102544, r8102545, r8102546;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102519, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r8102520, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8102521);
        mpfr_init(r8102522);
        mpfr_init(r8102523);
        mpfr_init(r8102524);
        mpfr_init(r8102525);
        mpfr_init(r8102526);
        mpfr_init_set_str(r8102527, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r8102528);
        mpfr_init(r8102529);
        mpfr_init(r8102530);
        mpfr_init(r8102531);
        mpfr_init_set_str(r8102532, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8102533);
        mpfr_init(r8102534);
        mpfr_init(r8102535);
        mpfr_init(r8102536);
        mpfr_init_set_str(r8102537, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r8102538);
        mpfr_init(r8102539);
        mpfr_init(r8102540);
        mpfr_init(r8102541);
        mpfr_init_set_str(r8102542, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8102543);
        mpfr_init(r8102544);
        mpfr_init(r8102545);
        mpfr_init(r8102546);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8102521, x, MPFR_RNDN);
        mpfr_mul(r8102522, r8102521, r8102521, MPFR_RNDN);
        mpfr_mul(r8102523, r8102520, r8102522, MPFR_RNDN);
        mpfr_sqrt(r8102524, r8102523, MPFR_RNDN);
        mpfr_mul(r8102525, r8102524, r8102524, MPFR_RNDN);
        mpfr_add(r8102526, r8102519, r8102525, MPFR_RNDN);
        ;
        mpfr_mul(r8102528, r8102522, r8102521, MPFR_RNDN);
        mpfr_mul(r8102529, r8102528, r8102521, MPFR_RNDN);
        mpfr_mul(r8102530, r8102527, r8102529, MPFR_RNDN);
        mpfr_add(r8102531, r8102526, r8102530, MPFR_RNDN);
        ;
        mpfr_mul(r8102533, r8102529, r8102521, MPFR_RNDN);
        mpfr_mul(r8102534, r8102533, r8102521, MPFR_RNDN);
        mpfr_mul(r8102535, r8102532, r8102534, MPFR_RNDN);
        mpfr_add(r8102536, r8102531, r8102535, MPFR_RNDN);
        ;
        mpfr_mul(r8102538, r8102534, r8102521, MPFR_RNDN);
        mpfr_mul(r8102539, r8102538, r8102521, MPFR_RNDN);
        mpfr_mul(r8102540, r8102537, r8102539, MPFR_RNDN);
        mpfr_add(r8102541, r8102536, r8102540, MPFR_RNDN);
        ;
        mpfr_mul(r8102543, r8102539, r8102521, MPFR_RNDN);
        mpfr_mul(r8102544, r8102543, r8102521, MPFR_RNDN);
        mpfr_mul(r8102545, r8102542, r8102544, MPFR_RNDN);
        mpfr_add(r8102546, r8102541, r8102545, MPFR_RNDN);
        return mpfr_get_d(r8102546, MPFR_RNDN);
}

static mpfr_t r8102547, r8102548, r8102549, r8102550, r8102551, r8102552, r8102553, r8102554, r8102555, r8102556, r8102557, r8102558, r8102559, r8102560, r8102561, r8102562, r8102563, r8102564, r8102565, r8102566, r8102567, r8102568, r8102569, r8102570, r8102571, r8102572, r8102573, r8102574;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8102547, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r8102548, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8102549);
        mpfr_init(r8102550);
        mpfr_init(r8102551);
        mpfr_init(r8102552);
        mpfr_init(r8102553);
        mpfr_init(r8102554);
        mpfr_init_set_str(r8102555, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r8102556);
        mpfr_init(r8102557);
        mpfr_init(r8102558);
        mpfr_init(r8102559);
        mpfr_init_set_str(r8102560, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8102561);
        mpfr_init(r8102562);
        mpfr_init(r8102563);
        mpfr_init(r8102564);
        mpfr_init_set_str(r8102565, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r8102566);
        mpfr_init(r8102567);
        mpfr_init(r8102568);
        mpfr_init(r8102569);
        mpfr_init_set_str(r8102570, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8102571);
        mpfr_init(r8102572);
        mpfr_init(r8102573);
        mpfr_init(r8102574);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8102549, x, MPFR_RNDN);
        mpfr_mul(r8102550, r8102549, r8102549, MPFR_RNDN);
        mpfr_mul(r8102551, r8102548, r8102550, MPFR_RNDN);
        mpfr_sqrt(r8102552, r8102551, MPFR_RNDN);
        mpfr_mul(r8102553, r8102552, r8102552, MPFR_RNDN);
        mpfr_add(r8102554, r8102547, r8102553, MPFR_RNDN);
        ;
        mpfr_mul(r8102556, r8102550, r8102549, MPFR_RNDN);
        mpfr_mul(r8102557, r8102556, r8102549, MPFR_RNDN);
        mpfr_mul(r8102558, r8102555, r8102557, MPFR_RNDN);
        mpfr_add(r8102559, r8102554, r8102558, MPFR_RNDN);
        ;
        mpfr_mul(r8102561, r8102557, r8102549, MPFR_RNDN);
        mpfr_mul(r8102562, r8102561, r8102549, MPFR_RNDN);
        mpfr_mul(r8102563, r8102560, r8102562, MPFR_RNDN);
        mpfr_add(r8102564, r8102559, r8102563, MPFR_RNDN);
        ;
        mpfr_mul(r8102566, r8102562, r8102549, MPFR_RNDN);
        mpfr_mul(r8102567, r8102566, r8102549, MPFR_RNDN);
        mpfr_mul(r8102568, r8102565, r8102567, MPFR_RNDN);
        mpfr_add(r8102569, r8102564, r8102568, MPFR_RNDN);
        ;
        mpfr_mul(r8102571, r8102567, r8102549, MPFR_RNDN);
        mpfr_mul(r8102572, r8102571, r8102549, MPFR_RNDN);
        mpfr_mul(r8102573, r8102570, r8102572, MPFR_RNDN);
        mpfr_add(r8102574, r8102569, r8102573, MPFR_RNDN);
        return mpfr_get_d(r8102574, MPFR_RNDN);
}

