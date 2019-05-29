#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r8099479 = 2.460938;
        float r8099480 = x;
        float r8099481 = r8099479 * r8099480;
        float r8099482 = -36.09375;
        float r8099483 = r8099480 * r8099480;
        float r8099484 = r8099483 * r8099480;
        float r8099485 = r8099482 * r8099484;
        float r8099486 = r8099481 + r8099485;
        float r8099487 = 140.765625;
        float r8099488 = r8099484 * r8099480;
        float r8099489 = r8099488 * r8099480;
        float r8099490 = r8099487 * r8099489;
        float r8099491 = r8099486 + r8099490;
        float r8099492 = -201.09375;
        float r8099493 = r8099489 * r8099480;
        float r8099494 = r8099493 * r8099480;
        float r8099495 = r8099492 * r8099494;
        float r8099496 = r8099491 + r8099495;
        float r8099497 = 94.960938;
        float r8099498 = r8099494 * r8099480;
        float r8099499 = r8099498 * r8099480;
        float r8099500 = r8099497 * r8099499;
        float r8099501 = r8099496 + r8099500;
        return r8099501;
}

double f_id(double x) {
        double r8099502 = 2.460938;
        double r8099503 = x;
        double r8099504 = r8099502 * r8099503;
        double r8099505 = -36.09375;
        double r8099506 = r8099503 * r8099503;
        double r8099507 = r8099506 * r8099503;
        double r8099508 = r8099505 * r8099507;
        double r8099509 = r8099504 + r8099508;
        double r8099510 = 140.765625;
        double r8099511 = r8099507 * r8099503;
        double r8099512 = r8099511 * r8099503;
        double r8099513 = r8099510 * r8099512;
        double r8099514 = r8099509 + r8099513;
        double r8099515 = -201.09375;
        double r8099516 = r8099512 * r8099503;
        double r8099517 = r8099516 * r8099503;
        double r8099518 = r8099515 * r8099517;
        double r8099519 = r8099514 + r8099518;
        double r8099520 = 94.960938;
        double r8099521 = r8099517 * r8099503;
        double r8099522 = r8099521 * r8099503;
        double r8099523 = r8099520 * r8099522;
        double r8099524 = r8099519 + r8099523;
        return r8099524;
}


double f_of(float x) {
        float r8099525 = x;
        float r8099526 = r8099525 * r8099525;
        float r8099527 = 140.765625;
        float r8099528 = r8099525 * r8099527;
        float r8099529 = r8099526 * r8099528;
        float r8099530 = r8099526 * r8099529;
        float r8099531 = 2.460938;
        float r8099532 = r8099531 * r8099525;
        float r8099533 = -36.09375;
        float r8099534 = r8099533 * r8099525;
        float r8099535 = r8099534 * r8099525;
        float r8099536 = exp(r8099535);
        float r8099537 = sqrt(r8099536);
        float r8099538 = log(r8099537);
        float r8099539 = r8099538 + r8099538;
        float r8099540 = r8099539 * r8099525;
        float r8099541 = r8099532 + r8099540;
        float r8099542 = r8099530 + r8099541;
        float r8099543 = 3;
        float r8099544 = pow(r8099525, r8099543);
        float r8099545 = r8099544 * r8099544;
        float r8099546 = r8099545 * r8099525;
        float r8099547 = -201.09375;
        float r8099548 = 94.960938;
        float r8099549 = r8099548 * r8099525;
        float r8099550 = r8099525 * r8099549;
        float r8099551 = r8099547 + r8099550;
        float r8099552 = r8099546 * r8099551;
        float r8099553 = r8099542 + r8099552;
        return r8099553;
}

double f_od(double x) {
        double r8099554 = x;
        double r8099555 = r8099554 * r8099554;
        double r8099556 = 140.765625;
        double r8099557 = r8099554 * r8099556;
        double r8099558 = r8099555 * r8099557;
        double r8099559 = r8099555 * r8099558;
        double r8099560 = 2.460938;
        double r8099561 = r8099560 * r8099554;
        double r8099562 = -36.09375;
        double r8099563 = r8099562 * r8099554;
        double r8099564 = r8099563 * r8099554;
        double r8099565 = exp(r8099564);
        double r8099566 = sqrt(r8099565);
        double r8099567 = log(r8099566);
        double r8099568 = r8099567 + r8099567;
        double r8099569 = r8099568 * r8099554;
        double r8099570 = r8099561 + r8099569;
        double r8099571 = r8099559 + r8099570;
        double r8099572 = 3;
        double r8099573 = pow(r8099554, r8099572);
        double r8099574 = r8099573 * r8099573;
        double r8099575 = r8099574 * r8099554;
        double r8099576 = -201.09375;
        double r8099577 = 94.960938;
        double r8099578 = r8099577 * r8099554;
        double r8099579 = r8099554 * r8099578;
        double r8099580 = r8099576 + r8099579;
        double r8099581 = r8099575 * r8099580;
        double r8099582 = r8099571 + r8099581;
        return r8099582;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8099583, r8099584, r8099585, r8099586, r8099587, r8099588, r8099589, r8099590, r8099591, r8099592, r8099593, r8099594, r8099595, r8099596, r8099597, r8099598, r8099599, r8099600, r8099601, r8099602, r8099603, r8099604, r8099605;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8099583, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8099584);
        mpfr_init(r8099585);
        mpfr_init_set_str(r8099586, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8099587);
        mpfr_init(r8099588);
        mpfr_init(r8099589);
        mpfr_init(r8099590);
        mpfr_init_set_str(r8099591, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8099592);
        mpfr_init(r8099593);
        mpfr_init(r8099594);
        mpfr_init(r8099595);
        mpfr_init_set_str(r8099596, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r8099597);
        mpfr_init(r8099598);
        mpfr_init(r8099599);
        mpfr_init(r8099600);
        mpfr_init_set_str(r8099601, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8099602);
        mpfr_init(r8099603);
        mpfr_init(r8099604);
        mpfr_init(r8099605);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8099584, x, MPFR_RNDN);
        mpfr_mul(r8099585, r8099583, r8099584, MPFR_RNDN);
        ;
        mpfr_mul(r8099587, r8099584, r8099584, MPFR_RNDN);
        mpfr_mul(r8099588, r8099587, r8099584, MPFR_RNDN);
        mpfr_mul(r8099589, r8099586, r8099588, MPFR_RNDN);
        mpfr_add(r8099590, r8099585, r8099589, MPFR_RNDN);
        ;
        mpfr_mul(r8099592, r8099588, r8099584, MPFR_RNDN);
        mpfr_mul(r8099593, r8099592, r8099584, MPFR_RNDN);
        mpfr_mul(r8099594, r8099591, r8099593, MPFR_RNDN);
        mpfr_add(r8099595, r8099590, r8099594, MPFR_RNDN);
        ;
        mpfr_mul(r8099597, r8099593, r8099584, MPFR_RNDN);
        mpfr_mul(r8099598, r8099597, r8099584, MPFR_RNDN);
        mpfr_mul(r8099599, r8099596, r8099598, MPFR_RNDN);
        mpfr_add(r8099600, r8099595, r8099599, MPFR_RNDN);
        ;
        mpfr_mul(r8099602, r8099598, r8099584, MPFR_RNDN);
        mpfr_mul(r8099603, r8099602, r8099584, MPFR_RNDN);
        mpfr_mul(r8099604, r8099601, r8099603, MPFR_RNDN);
        mpfr_add(r8099605, r8099600, r8099604, MPFR_RNDN);
        return mpfr_get_d(r8099605, MPFR_RNDN);
}

static mpfr_t r8099606, r8099607, r8099608, r8099609, r8099610, r8099611, r8099612, r8099613, r8099614, r8099615, r8099616, r8099617, r8099618, r8099619, r8099620, r8099621, r8099622, r8099623, r8099624, r8099625, r8099626, r8099627, r8099628, r8099629, r8099630, r8099631, r8099632, r8099633, r8099634;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8099606);
        mpfr_init(r8099607);
        mpfr_init_set_str(r8099608, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8099609);
        mpfr_init(r8099610);
        mpfr_init(r8099611);
        mpfr_init_set_str(r8099612, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8099613);
        mpfr_init_set_str(r8099614, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8099615);
        mpfr_init(r8099616);
        mpfr_init(r8099617);
        mpfr_init(r8099618);
        mpfr_init(r8099619);
        mpfr_init(r8099620);
        mpfr_init(r8099621);
        mpfr_init(r8099622);
        mpfr_init(r8099623);
        mpfr_init_set_str(r8099624, "3", 10, MPFR_RNDN);
        mpfr_init(r8099625);
        mpfr_init(r8099626);
        mpfr_init(r8099627);
        mpfr_init_set_str(r8099628, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8099629, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8099630);
        mpfr_init(r8099631);
        mpfr_init(r8099632);
        mpfr_init(r8099633);
        mpfr_init(r8099634);
}

double f_fm(double x) {
        mpfr_set_d(r8099606, x, MPFR_RNDN);
        mpfr_mul(r8099607, r8099606, r8099606, MPFR_RNDN);
        ;
        mpfr_mul(r8099609, r8099606, r8099608, MPFR_RNDN);
        mpfr_mul(r8099610, r8099607, r8099609, MPFR_RNDN);
        mpfr_mul(r8099611, r8099607, r8099610, MPFR_RNDN);
        ;
        mpfr_mul(r8099613, r8099612, r8099606, MPFR_RNDN);
        ;
        mpfr_mul(r8099615, r8099614, r8099606, MPFR_RNDN);
        mpfr_mul(r8099616, r8099615, r8099606, MPFR_RNDN);
        mpfr_exp(r8099617, r8099616, MPFR_RNDN);
        mpfr_sqrt(r8099618, r8099617, MPFR_RNDN);
        mpfr_log(r8099619, r8099618, MPFR_RNDN);
        mpfr_add(r8099620, r8099619, r8099619, MPFR_RNDN);
        mpfr_mul(r8099621, r8099620, r8099606, MPFR_RNDN);
        mpfr_add(r8099622, r8099613, r8099621, MPFR_RNDN);
        mpfr_add(r8099623, r8099611, r8099622, MPFR_RNDN);
        ;
        mpfr_pow(r8099625, r8099606, r8099624, MPFR_RNDN);
        mpfr_mul(r8099626, r8099625, r8099625, MPFR_RNDN);
        mpfr_mul(r8099627, r8099626, r8099606, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8099630, r8099629, r8099606, MPFR_RNDN);
        mpfr_mul(r8099631, r8099606, r8099630, MPFR_RNDN);
        mpfr_add(r8099632, r8099628, r8099631, MPFR_RNDN);
        mpfr_mul(r8099633, r8099627, r8099632, MPFR_RNDN);
        mpfr_add(r8099634, r8099623, r8099633, MPFR_RNDN);
        return mpfr_get_d(r8099634, MPFR_RNDN);
}

static mpfr_t r8099635, r8099636, r8099637, r8099638, r8099639, r8099640, r8099641, r8099642, r8099643, r8099644, r8099645, r8099646, r8099647, r8099648, r8099649, r8099650, r8099651, r8099652, r8099653, r8099654, r8099655, r8099656, r8099657, r8099658, r8099659, r8099660, r8099661, r8099662, r8099663;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8099635);
        mpfr_init(r8099636);
        mpfr_init_set_str(r8099637, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8099638);
        mpfr_init(r8099639);
        mpfr_init(r8099640);
        mpfr_init_set_str(r8099641, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8099642);
        mpfr_init_set_str(r8099643, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8099644);
        mpfr_init(r8099645);
        mpfr_init(r8099646);
        mpfr_init(r8099647);
        mpfr_init(r8099648);
        mpfr_init(r8099649);
        mpfr_init(r8099650);
        mpfr_init(r8099651);
        mpfr_init(r8099652);
        mpfr_init_set_str(r8099653, "3", 10, MPFR_RNDN);
        mpfr_init(r8099654);
        mpfr_init(r8099655);
        mpfr_init(r8099656);
        mpfr_init_set_str(r8099657, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8099658, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8099659);
        mpfr_init(r8099660);
        mpfr_init(r8099661);
        mpfr_init(r8099662);
        mpfr_init(r8099663);
}

double f_dm(double x) {
        mpfr_set_d(r8099635, x, MPFR_RNDN);
        mpfr_mul(r8099636, r8099635, r8099635, MPFR_RNDN);
        ;
        mpfr_mul(r8099638, r8099635, r8099637, MPFR_RNDN);
        mpfr_mul(r8099639, r8099636, r8099638, MPFR_RNDN);
        mpfr_mul(r8099640, r8099636, r8099639, MPFR_RNDN);
        ;
        mpfr_mul(r8099642, r8099641, r8099635, MPFR_RNDN);
        ;
        mpfr_mul(r8099644, r8099643, r8099635, MPFR_RNDN);
        mpfr_mul(r8099645, r8099644, r8099635, MPFR_RNDN);
        mpfr_exp(r8099646, r8099645, MPFR_RNDN);
        mpfr_sqrt(r8099647, r8099646, MPFR_RNDN);
        mpfr_log(r8099648, r8099647, MPFR_RNDN);
        mpfr_add(r8099649, r8099648, r8099648, MPFR_RNDN);
        mpfr_mul(r8099650, r8099649, r8099635, MPFR_RNDN);
        mpfr_add(r8099651, r8099642, r8099650, MPFR_RNDN);
        mpfr_add(r8099652, r8099640, r8099651, MPFR_RNDN);
        ;
        mpfr_pow(r8099654, r8099635, r8099653, MPFR_RNDN);
        mpfr_mul(r8099655, r8099654, r8099654, MPFR_RNDN);
        mpfr_mul(r8099656, r8099655, r8099635, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8099659, r8099658, r8099635, MPFR_RNDN);
        mpfr_mul(r8099660, r8099635, r8099659, MPFR_RNDN);
        mpfr_add(r8099661, r8099657, r8099660, MPFR_RNDN);
        mpfr_mul(r8099662, r8099656, r8099661, MPFR_RNDN);
        mpfr_add(r8099663, r8099652, r8099662, MPFR_RNDN);
        return mpfr_get_d(r8099663, MPFR_RNDN);
}

