#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r26948479 = -0.3125;
        float r26948480 = 6.5625;
        float r26948481 = x;
        float r26948482 = r26948481 * r26948481;
        float r26948483 = r26948480 * r26948482;
        float r26948484 = r26948479 + r26948483;
        float r26948485 = -19.6875;
        float r26948486 = r26948482 * r26948481;
        float r26948487 = r26948486 * r26948481;
        float r26948488 = r26948485 * r26948487;
        float r26948489 = r26948484 + r26948488;
        float r26948490 = 14.4375;
        float r26948491 = r26948487 * r26948481;
        float r26948492 = r26948491 * r26948481;
        float r26948493 = r26948490 * r26948492;
        float r26948494 = r26948489 + r26948493;
        return r26948494;
}

double f_id(double x) {
        double r26948495 = -0.3125;
        double r26948496 = 6.5625;
        double r26948497 = x;
        double r26948498 = r26948497 * r26948497;
        double r26948499 = r26948496 * r26948498;
        double r26948500 = r26948495 + r26948499;
        double r26948501 = -19.6875;
        double r26948502 = r26948498 * r26948497;
        double r26948503 = r26948502 * r26948497;
        double r26948504 = r26948501 * r26948503;
        double r26948505 = r26948500 + r26948504;
        double r26948506 = 14.4375;
        double r26948507 = r26948503 * r26948497;
        double r26948508 = r26948507 * r26948497;
        double r26948509 = r26948506 * r26948508;
        double r26948510 = r26948505 + r26948509;
        return r26948510;
}


double f_of(float x) {
        float r26948511 = x;
        float r26948512 = 6.5625;
        float r26948513 = r26948511 * r26948512;
        float r26948514 = r26948513 * r26948511;
        float r26948515 = -0.3125;
        float r26948516 = r26948514 + r26948515;
        float r26948517 = 3;
        float r26948518 = pow(r26948516, r26948517);
        float r26948519 = r26948511 * r26948511;
        float r26948520 = -19.6875;
        float r26948521 = 14.4375;
        float r26948522 = r26948519 * r26948521;
        float r26948523 = r26948520 + r26948522;
        float r26948524 = r26948519 * r26948523;
        float r26948525 = r26948519 * r26948524;
        float r26948526 = pow(r26948525, r26948517);
        float r26948527 = r26948518 + r26948526;
        float r26948528 = cbrt(r26948527);
        float r26948529 = r26948528 * r26948528;
        float r26948530 = r26948529 * r26948528;
        float r26948531 = r26948519 * r26948519;
        float r26948532 = r26948521 * r26948511;
        float r26948533 = r26948532 * r26948511;
        float r26948534 = r26948520 + r26948533;
        float r26948535 = r26948531 * r26948534;
        float r26948536 = r26948535 * r26948535;
        float r26948537 = r26948511 * r26948513;
        float r26948538 = r26948537 + r26948515;
        float r26948539 = r26948535 - r26948538;
        float r26948540 = r26948538 * r26948539;
        float r26948541 = r26948536 - r26948540;
        float r26948542 = r26948530 / r26948541;
        return r26948542;
}

double f_od(double x) {
        double r26948543 = x;
        double r26948544 = 6.5625;
        double r26948545 = r26948543 * r26948544;
        double r26948546 = r26948545 * r26948543;
        double r26948547 = -0.3125;
        double r26948548 = r26948546 + r26948547;
        double r26948549 = 3;
        double r26948550 = pow(r26948548, r26948549);
        double r26948551 = r26948543 * r26948543;
        double r26948552 = -19.6875;
        double r26948553 = 14.4375;
        double r26948554 = r26948551 * r26948553;
        double r26948555 = r26948552 + r26948554;
        double r26948556 = r26948551 * r26948555;
        double r26948557 = r26948551 * r26948556;
        double r26948558 = pow(r26948557, r26948549);
        double r26948559 = r26948550 + r26948558;
        double r26948560 = cbrt(r26948559);
        double r26948561 = r26948560 * r26948560;
        double r26948562 = r26948561 * r26948560;
        double r26948563 = r26948551 * r26948551;
        double r26948564 = r26948553 * r26948543;
        double r26948565 = r26948564 * r26948543;
        double r26948566 = r26948552 + r26948565;
        double r26948567 = r26948563 * r26948566;
        double r26948568 = r26948567 * r26948567;
        double r26948569 = r26948543 * r26948545;
        double r26948570 = r26948569 + r26948547;
        double r26948571 = r26948567 - r26948570;
        double r26948572 = r26948570 * r26948571;
        double r26948573 = r26948568 - r26948572;
        double r26948574 = r26948562 / r26948573;
        return r26948574;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26948575, r26948576, r26948577, r26948578, r26948579, r26948580, r26948581, r26948582, r26948583, r26948584, r26948585, r26948586, r26948587, r26948588, r26948589, r26948590;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948575, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948576, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r26948577);
        mpfr_init(r26948578);
        mpfr_init(r26948579);
        mpfr_init(r26948580);
        mpfr_init_set_str(r26948581, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r26948582);
        mpfr_init(r26948583);
        mpfr_init(r26948584);
        mpfr_init(r26948585);
        mpfr_init_set_str(r26948586, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r26948587);
        mpfr_init(r26948588);
        mpfr_init(r26948589);
        mpfr_init(r26948590);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r26948577, x, MPFR_RNDN);
        mpfr_mul(r26948578, r26948577, r26948577, MPFR_RNDN);
        mpfr_mul(r26948579, r26948576, r26948578, MPFR_RNDN);
        mpfr_add(r26948580, r26948575, r26948579, MPFR_RNDN);
        ;
        mpfr_mul(r26948582, r26948578, r26948577, MPFR_RNDN);
        mpfr_mul(r26948583, r26948582, r26948577, MPFR_RNDN);
        mpfr_mul(r26948584, r26948581, r26948583, MPFR_RNDN);
        mpfr_add(r26948585, r26948580, r26948584, MPFR_RNDN);
        ;
        mpfr_mul(r26948587, r26948583, r26948577, MPFR_RNDN);
        mpfr_mul(r26948588, r26948587, r26948577, MPFR_RNDN);
        mpfr_mul(r26948589, r26948586, r26948588, MPFR_RNDN);
        mpfr_add(r26948590, r26948585, r26948589, MPFR_RNDN);
        return mpfr_get_d(r26948590, MPFR_RNDN);
}

static mpfr_t r26948591, r26948592, r26948593, r26948594, r26948595, r26948596, r26948597, r26948598, r26948599, r26948600, r26948601, r26948602, r26948603, r26948604, r26948605, r26948606, r26948607, r26948608, r26948609, r26948610, r26948611, r26948612, r26948613, r26948614, r26948615, r26948616, r26948617, r26948618, r26948619, r26948620, r26948621, r26948622;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26948591);
        mpfr_init_set_str(r26948592, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r26948593);
        mpfr_init(r26948594);
        mpfr_init_set_str(r26948595, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r26948596);
        mpfr_init_set_str(r26948597, "3", 10, MPFR_RNDN);
        mpfr_init(r26948598);
        mpfr_init(r26948599);
        mpfr_init_set_str(r26948600, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948601, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r26948602);
        mpfr_init(r26948603);
        mpfr_init(r26948604);
        mpfr_init(r26948605);
        mpfr_init(r26948606);
        mpfr_init(r26948607);
        mpfr_init(r26948608);
        mpfr_init(r26948609);
        mpfr_init(r26948610);
        mpfr_init(r26948611);
        mpfr_init(r26948612);
        mpfr_init(r26948613);
        mpfr_init(r26948614);
        mpfr_init(r26948615);
        mpfr_init(r26948616);
        mpfr_init(r26948617);
        mpfr_init(r26948618);
        mpfr_init(r26948619);
        mpfr_init(r26948620);
        mpfr_init(r26948621);
        mpfr_init(r26948622);
}

double f_fm(double x) {
        mpfr_set_d(r26948591, x, MPFR_RNDN);
        ;
        mpfr_mul(r26948593, r26948591, r26948592, MPFR_RNDN);
        mpfr_mul(r26948594, r26948593, r26948591, MPFR_RNDN);
        ;
        mpfr_add(r26948596, r26948594, r26948595, MPFR_RNDN);
        ;
        mpfr_pow(r26948598, r26948596, r26948597, MPFR_RNDN);
        mpfr_mul(r26948599, r26948591, r26948591, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r26948602, r26948599, r26948601, MPFR_RNDN);
        mpfr_add(r26948603, r26948600, r26948602, MPFR_RNDN);
        mpfr_mul(r26948604, r26948599, r26948603, MPFR_RNDN);
        mpfr_mul(r26948605, r26948599, r26948604, MPFR_RNDN);
        mpfr_pow(r26948606, r26948605, r26948597, MPFR_RNDN);
        mpfr_add(r26948607, r26948598, r26948606, MPFR_RNDN);
        mpfr_cbrt(r26948608, r26948607, MPFR_RNDN);
        mpfr_mul(r26948609, r26948608, r26948608, MPFR_RNDN);
        mpfr_mul(r26948610, r26948609, r26948608, MPFR_RNDN);
        mpfr_mul(r26948611, r26948599, r26948599, MPFR_RNDN);
        mpfr_mul(r26948612, r26948601, r26948591, MPFR_RNDN);
        mpfr_mul(r26948613, r26948612, r26948591, MPFR_RNDN);
        mpfr_add(r26948614, r26948600, r26948613, MPFR_RNDN);
        mpfr_mul(r26948615, r26948611, r26948614, MPFR_RNDN);
        mpfr_mul(r26948616, r26948615, r26948615, MPFR_RNDN);
        mpfr_mul(r26948617, r26948591, r26948593, MPFR_RNDN);
        mpfr_add(r26948618, r26948617, r26948595, MPFR_RNDN);
        mpfr_sub(r26948619, r26948615, r26948618, MPFR_RNDN);
        mpfr_mul(r26948620, r26948618, r26948619, MPFR_RNDN);
        mpfr_sub(r26948621, r26948616, r26948620, MPFR_RNDN);
        mpfr_div(r26948622, r26948610, r26948621, MPFR_RNDN);
        return mpfr_get_d(r26948622, MPFR_RNDN);
}

static mpfr_t r26948623, r26948624, r26948625, r26948626, r26948627, r26948628, r26948629, r26948630, r26948631, r26948632, r26948633, r26948634, r26948635, r26948636, r26948637, r26948638, r26948639, r26948640, r26948641, r26948642, r26948643, r26948644, r26948645, r26948646, r26948647, r26948648, r26948649, r26948650, r26948651, r26948652, r26948653, r26948654;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26948623);
        mpfr_init_set_str(r26948624, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r26948625);
        mpfr_init(r26948626);
        mpfr_init_set_str(r26948627, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r26948628);
        mpfr_init_set_str(r26948629, "3", 10, MPFR_RNDN);
        mpfr_init(r26948630);
        mpfr_init(r26948631);
        mpfr_init_set_str(r26948632, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948633, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r26948634);
        mpfr_init(r26948635);
        mpfr_init(r26948636);
        mpfr_init(r26948637);
        mpfr_init(r26948638);
        mpfr_init(r26948639);
        mpfr_init(r26948640);
        mpfr_init(r26948641);
        mpfr_init(r26948642);
        mpfr_init(r26948643);
        mpfr_init(r26948644);
        mpfr_init(r26948645);
        mpfr_init(r26948646);
        mpfr_init(r26948647);
        mpfr_init(r26948648);
        mpfr_init(r26948649);
        mpfr_init(r26948650);
        mpfr_init(r26948651);
        mpfr_init(r26948652);
        mpfr_init(r26948653);
        mpfr_init(r26948654);
}

double f_dm(double x) {
        mpfr_set_d(r26948623, x, MPFR_RNDN);
        ;
        mpfr_mul(r26948625, r26948623, r26948624, MPFR_RNDN);
        mpfr_mul(r26948626, r26948625, r26948623, MPFR_RNDN);
        ;
        mpfr_add(r26948628, r26948626, r26948627, MPFR_RNDN);
        ;
        mpfr_pow(r26948630, r26948628, r26948629, MPFR_RNDN);
        mpfr_mul(r26948631, r26948623, r26948623, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r26948634, r26948631, r26948633, MPFR_RNDN);
        mpfr_add(r26948635, r26948632, r26948634, MPFR_RNDN);
        mpfr_mul(r26948636, r26948631, r26948635, MPFR_RNDN);
        mpfr_mul(r26948637, r26948631, r26948636, MPFR_RNDN);
        mpfr_pow(r26948638, r26948637, r26948629, MPFR_RNDN);
        mpfr_add(r26948639, r26948630, r26948638, MPFR_RNDN);
        mpfr_cbrt(r26948640, r26948639, MPFR_RNDN);
        mpfr_mul(r26948641, r26948640, r26948640, MPFR_RNDN);
        mpfr_mul(r26948642, r26948641, r26948640, MPFR_RNDN);
        mpfr_mul(r26948643, r26948631, r26948631, MPFR_RNDN);
        mpfr_mul(r26948644, r26948633, r26948623, MPFR_RNDN);
        mpfr_mul(r26948645, r26948644, r26948623, MPFR_RNDN);
        mpfr_add(r26948646, r26948632, r26948645, MPFR_RNDN);
        mpfr_mul(r26948647, r26948643, r26948646, MPFR_RNDN);
        mpfr_mul(r26948648, r26948647, r26948647, MPFR_RNDN);
        mpfr_mul(r26948649, r26948623, r26948625, MPFR_RNDN);
        mpfr_add(r26948650, r26948649, r26948627, MPFR_RNDN);
        mpfr_sub(r26948651, r26948647, r26948650, MPFR_RNDN);
        mpfr_mul(r26948652, r26948650, r26948651, MPFR_RNDN);
        mpfr_sub(r26948653, r26948648, r26948652, MPFR_RNDN);
        mpfr_div(r26948654, r26948642, r26948653, MPFR_RNDN);
        return mpfr_get_d(r26948654, MPFR_RNDN);
}

