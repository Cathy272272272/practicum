#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r11626474 = 12.0;
        float r11626475 = -48.0;
        float r11626476 = x;
        float r11626477 = r11626476 * r11626476;
        float r11626478 = r11626475 * r11626477;
        float r11626479 = r11626474 + r11626478;
        float r11626480 = 16.0;
        float r11626481 = r11626477 * r11626476;
        float r11626482 = r11626481 * r11626476;
        float r11626483 = r11626480 * r11626482;
        float r11626484 = r11626479 + r11626483;
        return r11626484;
}

double f_id(double x) {
        double r11626485 = 12.0;
        double r11626486 = -48.0;
        double r11626487 = x;
        double r11626488 = r11626487 * r11626487;
        double r11626489 = r11626486 * r11626488;
        double r11626490 = r11626485 + r11626489;
        double r11626491 = 16.0;
        double r11626492 = r11626488 * r11626487;
        double r11626493 = r11626492 * r11626487;
        double r11626494 = r11626491 * r11626493;
        double r11626495 = r11626490 + r11626494;
        return r11626495;
}


double f_of(float x) {
        float r11626496 = 12.0;
        float r11626497 = x;
        float r11626498 = 3;
        float r11626499 = pow(r11626497, r11626498);
        float r11626500 = pow(r11626499, r11626498);
        float r11626501 = 16.0;
        float r11626502 = r11626497 * r11626501;
        float r11626503 = pow(r11626502, r11626498);
        float r11626504 = r11626500 * r11626503;
        float r11626505 = cbrt(r11626504);
        float r11626506 = -48.0;
        float r11626507 = r11626497 * r11626506;
        float r11626508 = r11626507 * r11626497;
        float r11626509 = r11626505 + r11626508;
        float r11626510 = r11626496 + r11626509;
        return r11626510;
}

double f_od(double x) {
        double r11626511 = 12.0;
        double r11626512 = x;
        double r11626513 = 3;
        double r11626514 = pow(r11626512, r11626513);
        double r11626515 = pow(r11626514, r11626513);
        double r11626516 = 16.0;
        double r11626517 = r11626512 * r11626516;
        double r11626518 = pow(r11626517, r11626513);
        double r11626519 = r11626515 * r11626518;
        double r11626520 = cbrt(r11626519);
        double r11626521 = -48.0;
        double r11626522 = r11626512 * r11626521;
        double r11626523 = r11626522 * r11626512;
        double r11626524 = r11626520 + r11626523;
        double r11626525 = r11626511 + r11626524;
        return r11626525;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11626526, r11626527, r11626528, r11626529, r11626530, r11626531, r11626532, r11626533, r11626534, r11626535, r11626536;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626526, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626527, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r11626528);
        mpfr_init(r11626529);
        mpfr_init(r11626530);
        mpfr_init(r11626531);
        mpfr_init_set_str(r11626532, "16.0", 10, MPFR_RNDN);
        mpfr_init(r11626533);
        mpfr_init(r11626534);
        mpfr_init(r11626535);
        mpfr_init(r11626536);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11626528, x, MPFR_RNDN);
        mpfr_mul(r11626529, r11626528, r11626528, MPFR_RNDN);
        mpfr_mul(r11626530, r11626527, r11626529, MPFR_RNDN);
        mpfr_add(r11626531, r11626526, r11626530, MPFR_RNDN);
        ;
        mpfr_mul(r11626533, r11626529, r11626528, MPFR_RNDN);
        mpfr_mul(r11626534, r11626533, r11626528, MPFR_RNDN);
        mpfr_mul(r11626535, r11626532, r11626534, MPFR_RNDN);
        mpfr_add(r11626536, r11626531, r11626535, MPFR_RNDN);
        return mpfr_get_d(r11626536, MPFR_RNDN);
}

static mpfr_t r11626537, r11626538, r11626539, r11626540, r11626541, r11626542, r11626543, r11626544, r11626545, r11626546, r11626547, r11626548, r11626549, r11626550, r11626551;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626537, "12.0", 10, MPFR_RNDN);
        mpfr_init(r11626538);
        mpfr_init_set_str(r11626539, "3", 10, MPFR_RNDN);
        mpfr_init(r11626540);
        mpfr_init(r11626541);
        mpfr_init_set_str(r11626542, "16.0", 10, MPFR_RNDN);
        mpfr_init(r11626543);
        mpfr_init(r11626544);
        mpfr_init(r11626545);
        mpfr_init(r11626546);
        mpfr_init_set_str(r11626547, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r11626548);
        mpfr_init(r11626549);
        mpfr_init(r11626550);
        mpfr_init(r11626551);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11626538, x, MPFR_RNDN);
        ;
        mpfr_pow(r11626540, r11626538, r11626539, MPFR_RNDN);
        mpfr_pow(r11626541, r11626540, r11626539, MPFR_RNDN);
        ;
        mpfr_mul(r11626543, r11626538, r11626542, MPFR_RNDN);
        mpfr_pow(r11626544, r11626543, r11626539, MPFR_RNDN);
        mpfr_mul(r11626545, r11626541, r11626544, MPFR_RNDN);
        mpfr_cbrt(r11626546, r11626545, MPFR_RNDN);
        ;
        mpfr_mul(r11626548, r11626538, r11626547, MPFR_RNDN);
        mpfr_mul(r11626549, r11626548, r11626538, MPFR_RNDN);
        mpfr_add(r11626550, r11626546, r11626549, MPFR_RNDN);
        mpfr_add(r11626551, r11626537, r11626550, MPFR_RNDN);
        return mpfr_get_d(r11626551, MPFR_RNDN);
}

static mpfr_t r11626552, r11626553, r11626554, r11626555, r11626556, r11626557, r11626558, r11626559, r11626560, r11626561, r11626562, r11626563, r11626564, r11626565, r11626566;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626552, "12.0", 10, MPFR_RNDN);
        mpfr_init(r11626553);
        mpfr_init_set_str(r11626554, "3", 10, MPFR_RNDN);
        mpfr_init(r11626555);
        mpfr_init(r11626556);
        mpfr_init_set_str(r11626557, "16.0", 10, MPFR_RNDN);
        mpfr_init(r11626558);
        mpfr_init(r11626559);
        mpfr_init(r11626560);
        mpfr_init(r11626561);
        mpfr_init_set_str(r11626562, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r11626563);
        mpfr_init(r11626564);
        mpfr_init(r11626565);
        mpfr_init(r11626566);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11626553, x, MPFR_RNDN);
        ;
        mpfr_pow(r11626555, r11626553, r11626554, MPFR_RNDN);
        mpfr_pow(r11626556, r11626555, r11626554, MPFR_RNDN);
        ;
        mpfr_mul(r11626558, r11626553, r11626557, MPFR_RNDN);
        mpfr_pow(r11626559, r11626558, r11626554, MPFR_RNDN);
        mpfr_mul(r11626560, r11626556, r11626559, MPFR_RNDN);
        mpfr_cbrt(r11626561, r11626560, MPFR_RNDN);
        ;
        mpfr_mul(r11626563, r11626553, r11626562, MPFR_RNDN);
        mpfr_mul(r11626564, r11626563, r11626553, MPFR_RNDN);
        mpfr_add(r11626565, r11626561, r11626564, MPFR_RNDN);
        mpfr_add(r11626566, r11626552, r11626565, MPFR_RNDN);
        return mpfr_get_d(r11626566, MPFR_RNDN);
}

