#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r8953541 = -120.0;
        float r8953542 = 720.0;
        float r8953543 = x;
        float r8953544 = r8953543 * r8953543;
        float r8953545 = r8953542 * r8953544;
        float r8953546 = r8953541 + r8953545;
        float r8953547 = -480.0;
        float r8953548 = r8953544 * r8953543;
        float r8953549 = r8953548 * r8953543;
        float r8953550 = r8953547 * r8953549;
        float r8953551 = r8953546 + r8953550;
        float r8953552 = 64.0;
        float r8953553 = r8953549 * r8953543;
        float r8953554 = r8953553 * r8953543;
        float r8953555 = r8953552 * r8953554;
        float r8953556 = r8953551 + r8953555;
        return r8953556;
}

double f_id(double x) {
        double r8953557 = -120.0;
        double r8953558 = 720.0;
        double r8953559 = x;
        double r8953560 = r8953559 * r8953559;
        double r8953561 = r8953558 * r8953560;
        double r8953562 = r8953557 + r8953561;
        double r8953563 = -480.0;
        double r8953564 = r8953560 * r8953559;
        double r8953565 = r8953564 * r8953559;
        double r8953566 = r8953563 * r8953565;
        double r8953567 = r8953562 + r8953566;
        double r8953568 = 64.0;
        double r8953569 = r8953565 * r8953559;
        double r8953570 = r8953569 * r8953559;
        double r8953571 = r8953568 * r8953570;
        double r8953572 = r8953567 + r8953571;
        return r8953572;
}


double f_of(float x) {
        float r8953573 = -120.0;
        float r8953574 = 720.0;
        float r8953575 = x;
        float r8953576 = r8953575 * r8953575;
        float r8953577 = r8953574 * r8953576;
        float r8953578 = r8953573 + r8953577;
        float r8953579 = -480.0;
        float r8953580 = r8953576 * r8953575;
        float r8953581 = r8953580 * r8953575;
        float r8953582 = r8953579 * r8953581;
        float r8953583 = r8953578 + r8953582;
        float r8953584 = 64.0;
        float r8953585 = 3;
        float r8953586 = 1;
        float r8953587 = r8953585 + r8953586;
        float r8953588 = r8953587 + r8953586;
        float r8953589 = r8953588 + r8953586;
        float r8953590 = pow(r8953575, r8953589);
        float r8953591 = r8953584 * r8953590;
        float r8953592 = r8953583 + r8953591;
        return r8953592;
}

double f_od(double x) {
        double r8953593 = -120.0;
        double r8953594 = 720.0;
        double r8953595 = x;
        double r8953596 = r8953595 * r8953595;
        double r8953597 = r8953594 * r8953596;
        double r8953598 = r8953593 + r8953597;
        double r8953599 = -480.0;
        double r8953600 = r8953596 * r8953595;
        double r8953601 = r8953600 * r8953595;
        double r8953602 = r8953599 * r8953601;
        double r8953603 = r8953598 + r8953602;
        double r8953604 = 64.0;
        double r8953605 = 3;
        double r8953606 = 1;
        double r8953607 = r8953605 + r8953606;
        double r8953608 = r8953607 + r8953606;
        double r8953609 = r8953608 + r8953606;
        double r8953610 = pow(r8953595, r8953609);
        double r8953611 = r8953604 * r8953610;
        double r8953612 = r8953603 + r8953611;
        return r8953612;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8953613, r8953614, r8953615, r8953616, r8953617, r8953618, r8953619, r8953620, r8953621, r8953622, r8953623, r8953624, r8953625, r8953626, r8953627, r8953628;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953613, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953614, "720.0", 10, MPFR_RNDN);
        mpfr_init(r8953615);
        mpfr_init(r8953616);
        mpfr_init(r8953617);
        mpfr_init(r8953618);
        mpfr_init_set_str(r8953619, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r8953620);
        mpfr_init(r8953621);
        mpfr_init(r8953622);
        mpfr_init(r8953623);
        mpfr_init_set_str(r8953624, "64.0", 10, MPFR_RNDN);
        mpfr_init(r8953625);
        mpfr_init(r8953626);
        mpfr_init(r8953627);
        mpfr_init(r8953628);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8953615, x, MPFR_RNDN);
        mpfr_mul(r8953616, r8953615, r8953615, MPFR_RNDN);
        mpfr_mul(r8953617, r8953614, r8953616, MPFR_RNDN);
        mpfr_add(r8953618, r8953613, r8953617, MPFR_RNDN);
        ;
        mpfr_mul(r8953620, r8953616, r8953615, MPFR_RNDN);
        mpfr_mul(r8953621, r8953620, r8953615, MPFR_RNDN);
        mpfr_mul(r8953622, r8953619, r8953621, MPFR_RNDN);
        mpfr_add(r8953623, r8953618, r8953622, MPFR_RNDN);
        ;
        mpfr_mul(r8953625, r8953621, r8953615, MPFR_RNDN);
        mpfr_mul(r8953626, r8953625, r8953615, MPFR_RNDN);
        mpfr_mul(r8953627, r8953624, r8953626, MPFR_RNDN);
        mpfr_add(r8953628, r8953623, r8953627, MPFR_RNDN);
        return mpfr_get_d(r8953628, MPFR_RNDN);
}

static mpfr_t r8953629, r8953630, r8953631, r8953632, r8953633, r8953634, r8953635, r8953636, r8953637, r8953638, r8953639, r8953640, r8953641, r8953642, r8953643, r8953644, r8953645, r8953646, r8953647, r8953648;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953629, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953630, "720.0", 10, MPFR_RNDN);
        mpfr_init(r8953631);
        mpfr_init(r8953632);
        mpfr_init(r8953633);
        mpfr_init(r8953634);
        mpfr_init_set_str(r8953635, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r8953636);
        mpfr_init(r8953637);
        mpfr_init(r8953638);
        mpfr_init(r8953639);
        mpfr_init_set_str(r8953640, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953641, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953642, "1", 10, MPFR_RNDN);
        mpfr_init(r8953643);
        mpfr_init(r8953644);
        mpfr_init(r8953645);
        mpfr_init(r8953646);
        mpfr_init(r8953647);
        mpfr_init(r8953648);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8953631, x, MPFR_RNDN);
        mpfr_mul(r8953632, r8953631, r8953631, MPFR_RNDN);
        mpfr_mul(r8953633, r8953630, r8953632, MPFR_RNDN);
        mpfr_add(r8953634, r8953629, r8953633, MPFR_RNDN);
        ;
        mpfr_mul(r8953636, r8953632, r8953631, MPFR_RNDN);
        mpfr_mul(r8953637, r8953636, r8953631, MPFR_RNDN);
        mpfr_mul(r8953638, r8953635, r8953637, MPFR_RNDN);
        mpfr_add(r8953639, r8953634, r8953638, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8953643, r8953641, r8953642, MPFR_RNDN);
        mpfr_add(r8953644, r8953643, r8953642, MPFR_RNDN);
        mpfr_add(r8953645, r8953644, r8953642, MPFR_RNDN);
        mpfr_pow(r8953646, r8953631, r8953645, MPFR_RNDN);
        mpfr_mul(r8953647, r8953640, r8953646, MPFR_RNDN);
        mpfr_add(r8953648, r8953639, r8953647, MPFR_RNDN);
        return mpfr_get_d(r8953648, MPFR_RNDN);
}

static mpfr_t r8953649, r8953650, r8953651, r8953652, r8953653, r8953654, r8953655, r8953656, r8953657, r8953658, r8953659, r8953660, r8953661, r8953662, r8953663, r8953664, r8953665, r8953666, r8953667, r8953668;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953649, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953650, "720.0", 10, MPFR_RNDN);
        mpfr_init(r8953651);
        mpfr_init(r8953652);
        mpfr_init(r8953653);
        mpfr_init(r8953654);
        mpfr_init_set_str(r8953655, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r8953656);
        mpfr_init(r8953657);
        mpfr_init(r8953658);
        mpfr_init(r8953659);
        mpfr_init_set_str(r8953660, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953661, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953662, "1", 10, MPFR_RNDN);
        mpfr_init(r8953663);
        mpfr_init(r8953664);
        mpfr_init(r8953665);
        mpfr_init(r8953666);
        mpfr_init(r8953667);
        mpfr_init(r8953668);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8953651, x, MPFR_RNDN);
        mpfr_mul(r8953652, r8953651, r8953651, MPFR_RNDN);
        mpfr_mul(r8953653, r8953650, r8953652, MPFR_RNDN);
        mpfr_add(r8953654, r8953649, r8953653, MPFR_RNDN);
        ;
        mpfr_mul(r8953656, r8953652, r8953651, MPFR_RNDN);
        mpfr_mul(r8953657, r8953656, r8953651, MPFR_RNDN);
        mpfr_mul(r8953658, r8953655, r8953657, MPFR_RNDN);
        mpfr_add(r8953659, r8953654, r8953658, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8953663, r8953661, r8953662, MPFR_RNDN);
        mpfr_add(r8953664, r8953663, r8953662, MPFR_RNDN);
        mpfr_add(r8953665, r8953664, r8953662, MPFR_RNDN);
        mpfr_pow(r8953666, r8953651, r8953665, MPFR_RNDN);
        mpfr_mul(r8953667, r8953660, r8953666, MPFR_RNDN);
        mpfr_add(r8953668, r8953659, r8953667, MPFR_RNDN);
        return mpfr_get_d(r8953668, MPFR_RNDN);
}

