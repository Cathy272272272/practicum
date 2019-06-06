#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r60479557 = -120.0;
        float r60479558 = 720.0;
        float r60479559 = x;
        float r60479560 = r60479559 * r60479559;
        float r60479561 = r60479558 * r60479560;
        float r60479562 = r60479557 + r60479561;
        float r60479563 = -480.0;
        float r60479564 = r60479560 * r60479559;
        float r60479565 = r60479564 * r60479559;
        float r60479566 = r60479563 * r60479565;
        float r60479567 = r60479562 + r60479566;
        float r60479568 = 64.0;
        float r60479569 = r60479565 * r60479559;
        float r60479570 = r60479569 * r60479559;
        float r60479571 = r60479568 * r60479570;
        float r60479572 = r60479567 + r60479571;
        return r60479572;
}

double f_id(double x) {
        double r60479573 = -120.0;
        double r60479574 = 720.0;
        double r60479575 = x;
        double r60479576 = r60479575 * r60479575;
        double r60479577 = r60479574 * r60479576;
        double r60479578 = r60479573 + r60479577;
        double r60479579 = -480.0;
        double r60479580 = r60479576 * r60479575;
        double r60479581 = r60479580 * r60479575;
        double r60479582 = r60479579 * r60479581;
        double r60479583 = r60479578 + r60479582;
        double r60479584 = 64.0;
        double r60479585 = r60479581 * r60479575;
        double r60479586 = r60479585 * r60479575;
        double r60479587 = r60479584 * r60479586;
        double r60479588 = r60479583 + r60479587;
        return r60479588;
}


double f_of(float x) {
        float r60479589 = -120.0;
        float r60479590 = 720.0;
        float r60479591 = x;
        float r60479592 = r60479591 * r60479591;
        float r60479593 = r60479590 * r60479592;
        float r60479594 = r60479589 + r60479593;
        float r60479595 = -480.0;
        float r60479596 = r60479595 * r60479592;
        float r60479597 = r60479596 * r60479592;
        float r60479598 = r60479594 + r60479597;
        float r60479599 = 64.0;
        float r60479600 = 3;
        float r60479601 = pow(r60479592, r60479600);
        float r60479602 = exp(r60479601);
        float r60479603 = log(r60479602);
        float r60479604 = r60479599 * r60479603;
        float r60479605 = r60479598 + r60479604;
        return r60479605;
}

double f_od(double x) {
        double r60479606 = -120.0;
        double r60479607 = 720.0;
        double r60479608 = x;
        double r60479609 = r60479608 * r60479608;
        double r60479610 = r60479607 * r60479609;
        double r60479611 = r60479606 + r60479610;
        double r60479612 = -480.0;
        double r60479613 = r60479612 * r60479609;
        double r60479614 = r60479613 * r60479609;
        double r60479615 = r60479611 + r60479614;
        double r60479616 = 64.0;
        double r60479617 = 3;
        double r60479618 = pow(r60479609, r60479617);
        double r60479619 = exp(r60479618);
        double r60479620 = log(r60479619);
        double r60479621 = r60479616 * r60479620;
        double r60479622 = r60479615 + r60479621;
        return r60479622;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60479623, r60479624, r60479625, r60479626, r60479627, r60479628, r60479629, r60479630, r60479631, r60479632, r60479633, r60479634, r60479635, r60479636, r60479637, r60479638;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479623, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479624, "720.0", 10, MPFR_RNDN);
        mpfr_init(r60479625);
        mpfr_init(r60479626);
        mpfr_init(r60479627);
        mpfr_init(r60479628);
        mpfr_init_set_str(r60479629, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r60479630);
        mpfr_init(r60479631);
        mpfr_init(r60479632);
        mpfr_init(r60479633);
        mpfr_init_set_str(r60479634, "64.0", 10, MPFR_RNDN);
        mpfr_init(r60479635);
        mpfr_init(r60479636);
        mpfr_init(r60479637);
        mpfr_init(r60479638);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60479625, x, MPFR_RNDN);
        mpfr_mul(r60479626, r60479625, r60479625, MPFR_RNDN);
        mpfr_mul(r60479627, r60479624, r60479626, MPFR_RNDN);
        mpfr_add(r60479628, r60479623, r60479627, MPFR_RNDN);
        ;
        mpfr_mul(r60479630, r60479626, r60479625, MPFR_RNDN);
        mpfr_mul(r60479631, r60479630, r60479625, MPFR_RNDN);
        mpfr_mul(r60479632, r60479629, r60479631, MPFR_RNDN);
        mpfr_add(r60479633, r60479628, r60479632, MPFR_RNDN);
        ;
        mpfr_mul(r60479635, r60479631, r60479625, MPFR_RNDN);
        mpfr_mul(r60479636, r60479635, r60479625, MPFR_RNDN);
        mpfr_mul(r60479637, r60479634, r60479636, MPFR_RNDN);
        mpfr_add(r60479638, r60479633, r60479637, MPFR_RNDN);
        return mpfr_get_d(r60479638, MPFR_RNDN);
}

static mpfr_t r60479639, r60479640, r60479641, r60479642, r60479643, r60479644, r60479645, r60479646, r60479647, r60479648, r60479649, r60479650, r60479651, r60479652, r60479653, r60479654, r60479655;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479639, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479640, "720.0", 10, MPFR_RNDN);
        mpfr_init(r60479641);
        mpfr_init(r60479642);
        mpfr_init(r60479643);
        mpfr_init(r60479644);
        mpfr_init_set_str(r60479645, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r60479646);
        mpfr_init(r60479647);
        mpfr_init(r60479648);
        mpfr_init_set_str(r60479649, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479650, "3", 10, MPFR_RNDN);
        mpfr_init(r60479651);
        mpfr_init(r60479652);
        mpfr_init(r60479653);
        mpfr_init(r60479654);
        mpfr_init(r60479655);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r60479641, x, MPFR_RNDN);
        mpfr_mul(r60479642, r60479641, r60479641, MPFR_RNDN);
        mpfr_mul(r60479643, r60479640, r60479642, MPFR_RNDN);
        mpfr_add(r60479644, r60479639, r60479643, MPFR_RNDN);
        ;
        mpfr_mul(r60479646, r60479645, r60479642, MPFR_RNDN);
        mpfr_mul(r60479647, r60479646, r60479642, MPFR_RNDN);
        mpfr_add(r60479648, r60479644, r60479647, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r60479651, r60479642, r60479650, MPFR_RNDN);
        mpfr_exp(r60479652, r60479651, MPFR_RNDN);
        mpfr_log(r60479653, r60479652, MPFR_RNDN);
        mpfr_mul(r60479654, r60479649, r60479653, MPFR_RNDN);
        mpfr_add(r60479655, r60479648, r60479654, MPFR_RNDN);
        return mpfr_get_d(r60479655, MPFR_RNDN);
}

static mpfr_t r60479656, r60479657, r60479658, r60479659, r60479660, r60479661, r60479662, r60479663, r60479664, r60479665, r60479666, r60479667, r60479668, r60479669, r60479670, r60479671, r60479672;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479656, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479657, "720.0", 10, MPFR_RNDN);
        mpfr_init(r60479658);
        mpfr_init(r60479659);
        mpfr_init(r60479660);
        mpfr_init(r60479661);
        mpfr_init_set_str(r60479662, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r60479663);
        mpfr_init(r60479664);
        mpfr_init(r60479665);
        mpfr_init_set_str(r60479666, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479667, "3", 10, MPFR_RNDN);
        mpfr_init(r60479668);
        mpfr_init(r60479669);
        mpfr_init(r60479670);
        mpfr_init(r60479671);
        mpfr_init(r60479672);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r60479658, x, MPFR_RNDN);
        mpfr_mul(r60479659, r60479658, r60479658, MPFR_RNDN);
        mpfr_mul(r60479660, r60479657, r60479659, MPFR_RNDN);
        mpfr_add(r60479661, r60479656, r60479660, MPFR_RNDN);
        ;
        mpfr_mul(r60479663, r60479662, r60479659, MPFR_RNDN);
        mpfr_mul(r60479664, r60479663, r60479659, MPFR_RNDN);
        mpfr_add(r60479665, r60479661, r60479664, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r60479668, r60479659, r60479667, MPFR_RNDN);
        mpfr_exp(r60479669, r60479668, MPFR_RNDN);
        mpfr_log(r60479670, r60479669, MPFR_RNDN);
        mpfr_mul(r60479671, r60479666, r60479670, MPFR_RNDN);
        mpfr_add(r60479672, r60479665, r60479671, MPFR_RNDN);
        return mpfr_get_d(r60479672, MPFR_RNDN);
}

