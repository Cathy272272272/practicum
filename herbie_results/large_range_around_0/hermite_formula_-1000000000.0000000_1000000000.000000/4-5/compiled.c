#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7030496 = 120.0;
        float r7030497 = x;
        float r7030498 = r7030496 * r7030497;
        float r7030499 = -160.0;
        float r7030500 = r7030497 * r7030497;
        float r7030501 = r7030500 * r7030497;
        float r7030502 = r7030499 * r7030501;
        float r7030503 = r7030498 + r7030502;
        float r7030504 = 32.0;
        float r7030505 = r7030501 * r7030497;
        float r7030506 = r7030505 * r7030497;
        float r7030507 = r7030504 * r7030506;
        float r7030508 = r7030503 + r7030507;
        return r7030508;
}

double f_id(double x) {
        double r7030509 = 120.0;
        double r7030510 = x;
        double r7030511 = r7030509 * r7030510;
        double r7030512 = -160.0;
        double r7030513 = r7030510 * r7030510;
        double r7030514 = r7030513 * r7030510;
        double r7030515 = r7030512 * r7030514;
        double r7030516 = r7030511 + r7030515;
        double r7030517 = 32.0;
        double r7030518 = r7030514 * r7030510;
        double r7030519 = r7030518 * r7030510;
        double r7030520 = r7030517 * r7030519;
        double r7030521 = r7030516 + r7030520;
        return r7030521;
}


double f_of(float x) {
        float r7030522 = 120.0;
        float r7030523 = x;
        float r7030524 = r7030522 * r7030523;
        float r7030525 = -160.0;
        float r7030526 = r7030523 * r7030523;
        float r7030527 = r7030526 * r7030523;
        float r7030528 = r7030525 * r7030527;
        float r7030529 = r7030524 + r7030528;
        float r7030530 = 32.0;
        float r7030531 = 3;
        float r7030532 = pow(r7030523, r7030531);
        float r7030533 = r7030532 * r7030523;
        float r7030534 = r7030533 * r7030523;
        float r7030535 = r7030530 * r7030534;
        float r7030536 = r7030529 + r7030535;
        return r7030536;
}

double f_od(double x) {
        double r7030537 = 120.0;
        double r7030538 = x;
        double r7030539 = r7030537 * r7030538;
        double r7030540 = -160.0;
        double r7030541 = r7030538 * r7030538;
        double r7030542 = r7030541 * r7030538;
        double r7030543 = r7030540 * r7030542;
        double r7030544 = r7030539 + r7030543;
        double r7030545 = 32.0;
        double r7030546 = 3;
        double r7030547 = pow(r7030538, r7030546);
        double r7030548 = r7030547 * r7030538;
        double r7030549 = r7030548 * r7030538;
        double r7030550 = r7030545 * r7030549;
        double r7030551 = r7030544 + r7030550;
        return r7030551;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7030552, r7030553, r7030554, r7030555, r7030556, r7030557, r7030558, r7030559, r7030560, r7030561, r7030562, r7030563, r7030564;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030552, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7030553);
        mpfr_init(r7030554);
        mpfr_init_set_str(r7030555, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7030556);
        mpfr_init(r7030557);
        mpfr_init(r7030558);
        mpfr_init(r7030559);
        mpfr_init_set_str(r7030560, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7030561);
        mpfr_init(r7030562);
        mpfr_init(r7030563);
        mpfr_init(r7030564);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7030553, x, MPFR_RNDN);
        mpfr_mul(r7030554, r7030552, r7030553, MPFR_RNDN);
        ;
        mpfr_mul(r7030556, r7030553, r7030553, MPFR_RNDN);
        mpfr_mul(r7030557, r7030556, r7030553, MPFR_RNDN);
        mpfr_mul(r7030558, r7030555, r7030557, MPFR_RNDN);
        mpfr_add(r7030559, r7030554, r7030558, MPFR_RNDN);
        ;
        mpfr_mul(r7030561, r7030557, r7030553, MPFR_RNDN);
        mpfr_mul(r7030562, r7030561, r7030553, MPFR_RNDN);
        mpfr_mul(r7030563, r7030560, r7030562, MPFR_RNDN);
        mpfr_add(r7030564, r7030559, r7030563, MPFR_RNDN);
        return mpfr_get_d(r7030564, MPFR_RNDN);
}

static mpfr_t r7030565, r7030566, r7030567, r7030568, r7030569, r7030570, r7030571, r7030572, r7030573, r7030574, r7030575, r7030576, r7030577, r7030578, r7030579;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030565, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7030566);
        mpfr_init(r7030567);
        mpfr_init_set_str(r7030568, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7030569);
        mpfr_init(r7030570);
        mpfr_init(r7030571);
        mpfr_init(r7030572);
        mpfr_init_set_str(r7030573, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030574, "3", 10, MPFR_RNDN);
        mpfr_init(r7030575);
        mpfr_init(r7030576);
        mpfr_init(r7030577);
        mpfr_init(r7030578);
        mpfr_init(r7030579);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7030566, x, MPFR_RNDN);
        mpfr_mul(r7030567, r7030565, r7030566, MPFR_RNDN);
        ;
        mpfr_mul(r7030569, r7030566, r7030566, MPFR_RNDN);
        mpfr_mul(r7030570, r7030569, r7030566, MPFR_RNDN);
        mpfr_mul(r7030571, r7030568, r7030570, MPFR_RNDN);
        mpfr_add(r7030572, r7030567, r7030571, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7030575, r7030566, r7030574, MPFR_RNDN);
        mpfr_mul(r7030576, r7030575, r7030566, MPFR_RNDN);
        mpfr_mul(r7030577, r7030576, r7030566, MPFR_RNDN);
        mpfr_mul(r7030578, r7030573, r7030577, MPFR_RNDN);
        mpfr_add(r7030579, r7030572, r7030578, MPFR_RNDN);
        return mpfr_get_d(r7030579, MPFR_RNDN);
}

static mpfr_t r7030580, r7030581, r7030582, r7030583, r7030584, r7030585, r7030586, r7030587, r7030588, r7030589, r7030590, r7030591, r7030592, r7030593, r7030594;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030580, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7030581);
        mpfr_init(r7030582);
        mpfr_init_set_str(r7030583, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7030584);
        mpfr_init(r7030585);
        mpfr_init(r7030586);
        mpfr_init(r7030587);
        mpfr_init_set_str(r7030588, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030589, "3", 10, MPFR_RNDN);
        mpfr_init(r7030590);
        mpfr_init(r7030591);
        mpfr_init(r7030592);
        mpfr_init(r7030593);
        mpfr_init(r7030594);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7030581, x, MPFR_RNDN);
        mpfr_mul(r7030582, r7030580, r7030581, MPFR_RNDN);
        ;
        mpfr_mul(r7030584, r7030581, r7030581, MPFR_RNDN);
        mpfr_mul(r7030585, r7030584, r7030581, MPFR_RNDN);
        mpfr_mul(r7030586, r7030583, r7030585, MPFR_RNDN);
        mpfr_add(r7030587, r7030582, r7030586, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7030590, r7030581, r7030589, MPFR_RNDN);
        mpfr_mul(r7030591, r7030590, r7030581, MPFR_RNDN);
        mpfr_mul(r7030592, r7030591, r7030581, MPFR_RNDN);
        mpfr_mul(r7030593, r7030588, r7030592, MPFR_RNDN);
        mpfr_add(r7030594, r7030587, r7030593, MPFR_RNDN);
        return mpfr_get_d(r7030594, MPFR_RNDN);
}

