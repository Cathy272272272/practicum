#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r4598414 = 2.460938;
        float r4598415 = x;
        float r4598416 = r4598414 * r4598415;
        float r4598417 = -36.09375;
        float r4598418 = r4598415 * r4598415;
        float r4598419 = r4598418 * r4598415;
        float r4598420 = r4598417 * r4598419;
        float r4598421 = r4598416 + r4598420;
        float r4598422 = 140.765625;
        float r4598423 = r4598419 * r4598415;
        float r4598424 = r4598423 * r4598415;
        float r4598425 = r4598422 * r4598424;
        float r4598426 = r4598421 + r4598425;
        float r4598427 = -201.09375;
        float r4598428 = r4598424 * r4598415;
        float r4598429 = r4598428 * r4598415;
        float r4598430 = r4598427 * r4598429;
        float r4598431 = r4598426 + r4598430;
        float r4598432 = 94.960938;
        float r4598433 = r4598429 * r4598415;
        float r4598434 = r4598433 * r4598415;
        float r4598435 = r4598432 * r4598434;
        float r4598436 = r4598431 + r4598435;
        return r4598436;
}

double f_id(double x) {
        double r4598437 = 2.460938;
        double r4598438 = x;
        double r4598439 = r4598437 * r4598438;
        double r4598440 = -36.09375;
        double r4598441 = r4598438 * r4598438;
        double r4598442 = r4598441 * r4598438;
        double r4598443 = r4598440 * r4598442;
        double r4598444 = r4598439 + r4598443;
        double r4598445 = 140.765625;
        double r4598446 = r4598442 * r4598438;
        double r4598447 = r4598446 * r4598438;
        double r4598448 = r4598445 * r4598447;
        double r4598449 = r4598444 + r4598448;
        double r4598450 = -201.09375;
        double r4598451 = r4598447 * r4598438;
        double r4598452 = r4598451 * r4598438;
        double r4598453 = r4598450 * r4598452;
        double r4598454 = r4598449 + r4598453;
        double r4598455 = 94.960938;
        double r4598456 = r4598452 * r4598438;
        double r4598457 = r4598456 * r4598438;
        double r4598458 = r4598455 * r4598457;
        double r4598459 = r4598454 + r4598458;
        return r4598459;
}


double f_of(float x) {
        float r4598460 = 2.460938;
        float r4598461 = x;
        float r4598462 = r4598460 * r4598461;
        float r4598463 = -36.09375;
        float r4598464 = r4598461 * r4598461;
        float r4598465 = r4598464 * r4598461;
        float r4598466 = r4598463 * r4598465;
        float r4598467 = r4598462 + r4598466;
        float r4598468 = 140.765625;
        float r4598469 = r4598465 * r4598461;
        float r4598470 = r4598469 * r4598461;
        float r4598471 = r4598468 * r4598470;
        float r4598472 = r4598467 + r4598471;
        float r4598473 = -201.09375;
        float r4598474 = r4598470 * r4598461;
        float r4598475 = r4598474 * r4598461;
        float r4598476 = r4598473 * r4598475;
        float r4598477 = r4598472 + r4598476;
        float r4598478 = 94.960938;
        float r4598479 = r4598475 * r4598461;
        float r4598480 = r4598479 * r4598461;
        float r4598481 = r4598478 * r4598480;
        float r4598482 = r4598477 + r4598481;
        return r4598482;
}

double f_od(double x) {
        double r4598483 = 2.460938;
        double r4598484 = x;
        double r4598485 = r4598483 * r4598484;
        double r4598486 = -36.09375;
        double r4598487 = r4598484 * r4598484;
        double r4598488 = r4598487 * r4598484;
        double r4598489 = r4598486 * r4598488;
        double r4598490 = r4598485 + r4598489;
        double r4598491 = 140.765625;
        double r4598492 = r4598488 * r4598484;
        double r4598493 = r4598492 * r4598484;
        double r4598494 = r4598491 * r4598493;
        double r4598495 = r4598490 + r4598494;
        double r4598496 = -201.09375;
        double r4598497 = r4598493 * r4598484;
        double r4598498 = r4598497 * r4598484;
        double r4598499 = r4598496 * r4598498;
        double r4598500 = r4598495 + r4598499;
        double r4598501 = 94.960938;
        double r4598502 = r4598498 * r4598484;
        double r4598503 = r4598502 * r4598484;
        double r4598504 = r4598501 * r4598503;
        double r4598505 = r4598500 + r4598504;
        return r4598505;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4598506, r4598507, r4598508, r4598509, r4598510, r4598511, r4598512, r4598513, r4598514, r4598515, r4598516, r4598517, r4598518, r4598519, r4598520, r4598521, r4598522, r4598523, r4598524, r4598525, r4598526, r4598527, r4598528;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4598506, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4598507);
        mpfr_init(r4598508);
        mpfr_init_set_str(r4598509, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4598510);
        mpfr_init(r4598511);
        mpfr_init(r4598512);
        mpfr_init(r4598513);
        mpfr_init_set_str(r4598514, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4598515);
        mpfr_init(r4598516);
        mpfr_init(r4598517);
        mpfr_init(r4598518);
        mpfr_init_set_str(r4598519, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4598520);
        mpfr_init(r4598521);
        mpfr_init(r4598522);
        mpfr_init(r4598523);
        mpfr_init_set_str(r4598524, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4598525);
        mpfr_init(r4598526);
        mpfr_init(r4598527);
        mpfr_init(r4598528);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4598507, x, MPFR_RNDN);
        mpfr_mul(r4598508, r4598506, r4598507, MPFR_RNDN);
        ;
        mpfr_mul(r4598510, r4598507, r4598507, MPFR_RNDN);
        mpfr_mul(r4598511, r4598510, r4598507, MPFR_RNDN);
        mpfr_mul(r4598512, r4598509, r4598511, MPFR_RNDN);
        mpfr_add(r4598513, r4598508, r4598512, MPFR_RNDN);
        ;
        mpfr_mul(r4598515, r4598511, r4598507, MPFR_RNDN);
        mpfr_mul(r4598516, r4598515, r4598507, MPFR_RNDN);
        mpfr_mul(r4598517, r4598514, r4598516, MPFR_RNDN);
        mpfr_add(r4598518, r4598513, r4598517, MPFR_RNDN);
        ;
        mpfr_mul(r4598520, r4598516, r4598507, MPFR_RNDN);
        mpfr_mul(r4598521, r4598520, r4598507, MPFR_RNDN);
        mpfr_mul(r4598522, r4598519, r4598521, MPFR_RNDN);
        mpfr_add(r4598523, r4598518, r4598522, MPFR_RNDN);
        ;
        mpfr_mul(r4598525, r4598521, r4598507, MPFR_RNDN);
        mpfr_mul(r4598526, r4598525, r4598507, MPFR_RNDN);
        mpfr_mul(r4598527, r4598524, r4598526, MPFR_RNDN);
        mpfr_add(r4598528, r4598523, r4598527, MPFR_RNDN);
        return mpfr_get_d(r4598528, MPFR_RNDN);
}

static mpfr_t r4598529, r4598530, r4598531, r4598532, r4598533, r4598534, r4598535, r4598536, r4598537, r4598538, r4598539, r4598540, r4598541, r4598542, r4598543, r4598544, r4598545, r4598546, r4598547, r4598548, r4598549, r4598550, r4598551;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4598529, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4598530);
        mpfr_init(r4598531);
        mpfr_init_set_str(r4598532, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4598533);
        mpfr_init(r4598534);
        mpfr_init(r4598535);
        mpfr_init(r4598536);
        mpfr_init_set_str(r4598537, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4598538);
        mpfr_init(r4598539);
        mpfr_init(r4598540);
        mpfr_init(r4598541);
        mpfr_init_set_str(r4598542, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4598543);
        mpfr_init(r4598544);
        mpfr_init(r4598545);
        mpfr_init(r4598546);
        mpfr_init_set_str(r4598547, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4598548);
        mpfr_init(r4598549);
        mpfr_init(r4598550);
        mpfr_init(r4598551);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4598530, x, MPFR_RNDN);
        mpfr_mul(r4598531, r4598529, r4598530, MPFR_RNDN);
        ;
        mpfr_mul(r4598533, r4598530, r4598530, MPFR_RNDN);
        mpfr_mul(r4598534, r4598533, r4598530, MPFR_RNDN);
        mpfr_mul(r4598535, r4598532, r4598534, MPFR_RNDN);
        mpfr_add(r4598536, r4598531, r4598535, MPFR_RNDN);
        ;
        mpfr_mul(r4598538, r4598534, r4598530, MPFR_RNDN);
        mpfr_mul(r4598539, r4598538, r4598530, MPFR_RNDN);
        mpfr_mul(r4598540, r4598537, r4598539, MPFR_RNDN);
        mpfr_add(r4598541, r4598536, r4598540, MPFR_RNDN);
        ;
        mpfr_mul(r4598543, r4598539, r4598530, MPFR_RNDN);
        mpfr_mul(r4598544, r4598543, r4598530, MPFR_RNDN);
        mpfr_mul(r4598545, r4598542, r4598544, MPFR_RNDN);
        mpfr_add(r4598546, r4598541, r4598545, MPFR_RNDN);
        ;
        mpfr_mul(r4598548, r4598544, r4598530, MPFR_RNDN);
        mpfr_mul(r4598549, r4598548, r4598530, MPFR_RNDN);
        mpfr_mul(r4598550, r4598547, r4598549, MPFR_RNDN);
        mpfr_add(r4598551, r4598546, r4598550, MPFR_RNDN);
        return mpfr_get_d(r4598551, MPFR_RNDN);
}

static mpfr_t r4598552, r4598553, r4598554, r4598555, r4598556, r4598557, r4598558, r4598559, r4598560, r4598561, r4598562, r4598563, r4598564, r4598565, r4598566, r4598567, r4598568, r4598569, r4598570, r4598571, r4598572, r4598573, r4598574;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4598552, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4598553);
        mpfr_init(r4598554);
        mpfr_init_set_str(r4598555, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4598556);
        mpfr_init(r4598557);
        mpfr_init(r4598558);
        mpfr_init(r4598559);
        mpfr_init_set_str(r4598560, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4598561);
        mpfr_init(r4598562);
        mpfr_init(r4598563);
        mpfr_init(r4598564);
        mpfr_init_set_str(r4598565, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4598566);
        mpfr_init(r4598567);
        mpfr_init(r4598568);
        mpfr_init(r4598569);
        mpfr_init_set_str(r4598570, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4598571);
        mpfr_init(r4598572);
        mpfr_init(r4598573);
        mpfr_init(r4598574);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4598553, x, MPFR_RNDN);
        mpfr_mul(r4598554, r4598552, r4598553, MPFR_RNDN);
        ;
        mpfr_mul(r4598556, r4598553, r4598553, MPFR_RNDN);
        mpfr_mul(r4598557, r4598556, r4598553, MPFR_RNDN);
        mpfr_mul(r4598558, r4598555, r4598557, MPFR_RNDN);
        mpfr_add(r4598559, r4598554, r4598558, MPFR_RNDN);
        ;
        mpfr_mul(r4598561, r4598557, r4598553, MPFR_RNDN);
        mpfr_mul(r4598562, r4598561, r4598553, MPFR_RNDN);
        mpfr_mul(r4598563, r4598560, r4598562, MPFR_RNDN);
        mpfr_add(r4598564, r4598559, r4598563, MPFR_RNDN);
        ;
        mpfr_mul(r4598566, r4598562, r4598553, MPFR_RNDN);
        mpfr_mul(r4598567, r4598566, r4598553, MPFR_RNDN);
        mpfr_mul(r4598568, r4598565, r4598567, MPFR_RNDN);
        mpfr_add(r4598569, r4598564, r4598568, MPFR_RNDN);
        ;
        mpfr_mul(r4598571, r4598567, r4598553, MPFR_RNDN);
        mpfr_mul(r4598572, r4598571, r4598553, MPFR_RNDN);
        mpfr_mul(r4598573, r4598570, r4598572, MPFR_RNDN);
        mpfr_add(r4598574, r4598569, r4598573, MPFR_RNDN);
        return mpfr_get_d(r4598574, MPFR_RNDN);
}

