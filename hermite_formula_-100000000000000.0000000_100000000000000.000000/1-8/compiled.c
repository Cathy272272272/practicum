#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r9959517 = 1680.0;
        float r9959518 = -13440.0;
        float r9959519 = x;
        float r9959520 = r9959519 * r9959519;
        float r9959521 = r9959518 * r9959520;
        float r9959522 = r9959517 + r9959521;
        float r9959523 = 13440.0;
        float r9959524 = r9959520 * r9959519;
        float r9959525 = r9959524 * r9959519;
        float r9959526 = r9959523 * r9959525;
        float r9959527 = r9959522 + r9959526;
        float r9959528 = -3584.0;
        float r9959529 = r9959525 * r9959519;
        float r9959530 = r9959529 * r9959519;
        float r9959531 = r9959528 * r9959530;
        float r9959532 = r9959527 + r9959531;
        float r9959533 = 256.0;
        float r9959534 = r9959530 * r9959519;
        float r9959535 = r9959534 * r9959519;
        float r9959536 = r9959533 * r9959535;
        float r9959537 = r9959532 + r9959536;
        return r9959537;
}

double f_id(double x) {
        double r9959538 = 1680.0;
        double r9959539 = -13440.0;
        double r9959540 = x;
        double r9959541 = r9959540 * r9959540;
        double r9959542 = r9959539 * r9959541;
        double r9959543 = r9959538 + r9959542;
        double r9959544 = 13440.0;
        double r9959545 = r9959541 * r9959540;
        double r9959546 = r9959545 * r9959540;
        double r9959547 = r9959544 * r9959546;
        double r9959548 = r9959543 + r9959547;
        double r9959549 = -3584.0;
        double r9959550 = r9959546 * r9959540;
        double r9959551 = r9959550 * r9959540;
        double r9959552 = r9959549 * r9959551;
        double r9959553 = r9959548 + r9959552;
        double r9959554 = 256.0;
        double r9959555 = r9959551 * r9959540;
        double r9959556 = r9959555 * r9959540;
        double r9959557 = r9959554 * r9959556;
        double r9959558 = r9959553 + r9959557;
        return r9959558;
}


double f_of(float x) {
        float r9959559 = x;
        float r9959560 = 13440.0;
        float r9959561 = r9959559 * r9959560;
        float r9959562 = 3;
        float r9959563 = pow(r9959559, r9959562);
        float r9959564 = r9959561 * r9959563;
        float r9959565 = -13440.0;
        float r9959566 = r9959559 * r9959565;
        float r9959567 = r9959559 * r9959566;
        float r9959568 = r9959564 + r9959567;
        float r9959569 = 1680.0;
        float r9959570 = r9959568 + r9959569;
        float r9959571 = r9959563 * r9959563;
        float r9959572 = -3584.0;
        float r9959573 = 256.0;
        float r9959574 = r9959573 * r9959559;
        float r9959575 = r9959574 * r9959559;
        float r9959576 = r9959572 + r9959575;
        float r9959577 = r9959571 * r9959576;
        float r9959578 = r9959570 + r9959577;
        return r9959578;
}

double f_od(double x) {
        double r9959579 = x;
        double r9959580 = 13440.0;
        double r9959581 = r9959579 * r9959580;
        double r9959582 = 3;
        double r9959583 = pow(r9959579, r9959582);
        double r9959584 = r9959581 * r9959583;
        double r9959585 = -13440.0;
        double r9959586 = r9959579 * r9959585;
        double r9959587 = r9959579 * r9959586;
        double r9959588 = r9959584 + r9959587;
        double r9959589 = 1680.0;
        double r9959590 = r9959588 + r9959589;
        double r9959591 = r9959583 * r9959583;
        double r9959592 = -3584.0;
        double r9959593 = 256.0;
        double r9959594 = r9959593 * r9959579;
        double r9959595 = r9959594 * r9959579;
        double r9959596 = r9959592 + r9959595;
        double r9959597 = r9959591 * r9959596;
        double r9959598 = r9959590 + r9959597;
        return r9959598;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9959599, r9959600, r9959601, r9959602, r9959603, r9959604, r9959605, r9959606, r9959607, r9959608, r9959609, r9959610, r9959611, r9959612, r9959613, r9959614, r9959615, r9959616, r9959617, r9959618, r9959619;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9959599, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9959600, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9959601);
        mpfr_init(r9959602);
        mpfr_init(r9959603);
        mpfr_init(r9959604);
        mpfr_init_set_str(r9959605, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9959606);
        mpfr_init(r9959607);
        mpfr_init(r9959608);
        mpfr_init(r9959609);
        mpfr_init_set_str(r9959610, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r9959611);
        mpfr_init(r9959612);
        mpfr_init(r9959613);
        mpfr_init(r9959614);
        mpfr_init_set_str(r9959615, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9959616);
        mpfr_init(r9959617);
        mpfr_init(r9959618);
        mpfr_init(r9959619);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9959601, x, MPFR_RNDN);
        mpfr_mul(r9959602, r9959601, r9959601, MPFR_RNDN);
        mpfr_mul(r9959603, r9959600, r9959602, MPFR_RNDN);
        mpfr_add(r9959604, r9959599, r9959603, MPFR_RNDN);
        ;
        mpfr_mul(r9959606, r9959602, r9959601, MPFR_RNDN);
        mpfr_mul(r9959607, r9959606, r9959601, MPFR_RNDN);
        mpfr_mul(r9959608, r9959605, r9959607, MPFR_RNDN);
        mpfr_add(r9959609, r9959604, r9959608, MPFR_RNDN);
        ;
        mpfr_mul(r9959611, r9959607, r9959601, MPFR_RNDN);
        mpfr_mul(r9959612, r9959611, r9959601, MPFR_RNDN);
        mpfr_mul(r9959613, r9959610, r9959612, MPFR_RNDN);
        mpfr_add(r9959614, r9959609, r9959613, MPFR_RNDN);
        ;
        mpfr_mul(r9959616, r9959612, r9959601, MPFR_RNDN);
        mpfr_mul(r9959617, r9959616, r9959601, MPFR_RNDN);
        mpfr_mul(r9959618, r9959615, r9959617, MPFR_RNDN);
        mpfr_add(r9959619, r9959614, r9959618, MPFR_RNDN);
        return mpfr_get_d(r9959619, MPFR_RNDN);
}

static mpfr_t r9959620, r9959621, r9959622, r9959623, r9959624, r9959625, r9959626, r9959627, r9959628, r9959629, r9959630, r9959631, r9959632, r9959633, r9959634, r9959635, r9959636, r9959637, r9959638, r9959639;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9959620);
        mpfr_init_set_str(r9959621, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9959622);
        mpfr_init_set_str(r9959623, "3", 10, MPFR_RNDN);
        mpfr_init(r9959624);
        mpfr_init(r9959625);
        mpfr_init_set_str(r9959626, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9959627);
        mpfr_init(r9959628);
        mpfr_init(r9959629);
        mpfr_init_set_str(r9959630, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r9959631);
        mpfr_init(r9959632);
        mpfr_init_set_str(r9959633, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9959634, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9959635);
        mpfr_init(r9959636);
        mpfr_init(r9959637);
        mpfr_init(r9959638);
        mpfr_init(r9959639);
}

double f_fm(double x) {
        mpfr_set_d(r9959620, x, MPFR_RNDN);
        ;
        mpfr_mul(r9959622, r9959620, r9959621, MPFR_RNDN);
        ;
        mpfr_pow(r9959624, r9959620, r9959623, MPFR_RNDN);
        mpfr_mul(r9959625, r9959622, r9959624, MPFR_RNDN);
        ;
        mpfr_mul(r9959627, r9959620, r9959626, MPFR_RNDN);
        mpfr_mul(r9959628, r9959620, r9959627, MPFR_RNDN);
        mpfr_add(r9959629, r9959625, r9959628, MPFR_RNDN);
        ;
        mpfr_add(r9959631, r9959629, r9959630, MPFR_RNDN);
        mpfr_mul(r9959632, r9959624, r9959624, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9959635, r9959634, r9959620, MPFR_RNDN);
        mpfr_mul(r9959636, r9959635, r9959620, MPFR_RNDN);
        mpfr_add(r9959637, r9959633, r9959636, MPFR_RNDN);
        mpfr_mul(r9959638, r9959632, r9959637, MPFR_RNDN);
        mpfr_add(r9959639, r9959631, r9959638, MPFR_RNDN);
        return mpfr_get_d(r9959639, MPFR_RNDN);
}

static mpfr_t r9959640, r9959641, r9959642, r9959643, r9959644, r9959645, r9959646, r9959647, r9959648, r9959649, r9959650, r9959651, r9959652, r9959653, r9959654, r9959655, r9959656, r9959657, r9959658, r9959659;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9959640);
        mpfr_init_set_str(r9959641, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9959642);
        mpfr_init_set_str(r9959643, "3", 10, MPFR_RNDN);
        mpfr_init(r9959644);
        mpfr_init(r9959645);
        mpfr_init_set_str(r9959646, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9959647);
        mpfr_init(r9959648);
        mpfr_init(r9959649);
        mpfr_init_set_str(r9959650, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r9959651);
        mpfr_init(r9959652);
        mpfr_init_set_str(r9959653, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9959654, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9959655);
        mpfr_init(r9959656);
        mpfr_init(r9959657);
        mpfr_init(r9959658);
        mpfr_init(r9959659);
}

double f_dm(double x) {
        mpfr_set_d(r9959640, x, MPFR_RNDN);
        ;
        mpfr_mul(r9959642, r9959640, r9959641, MPFR_RNDN);
        ;
        mpfr_pow(r9959644, r9959640, r9959643, MPFR_RNDN);
        mpfr_mul(r9959645, r9959642, r9959644, MPFR_RNDN);
        ;
        mpfr_mul(r9959647, r9959640, r9959646, MPFR_RNDN);
        mpfr_mul(r9959648, r9959640, r9959647, MPFR_RNDN);
        mpfr_add(r9959649, r9959645, r9959648, MPFR_RNDN);
        ;
        mpfr_add(r9959651, r9959649, r9959650, MPFR_RNDN);
        mpfr_mul(r9959652, r9959644, r9959644, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9959655, r9959654, r9959640, MPFR_RNDN);
        mpfr_mul(r9959656, r9959655, r9959640, MPFR_RNDN);
        mpfr_add(r9959657, r9959653, r9959656, MPFR_RNDN);
        mpfr_mul(r9959658, r9959652, r9959657, MPFR_RNDN);
        mpfr_add(r9959659, r9959651, r9959658, MPFR_RNDN);
        return mpfr_get_d(r9959659, MPFR_RNDN);
}

