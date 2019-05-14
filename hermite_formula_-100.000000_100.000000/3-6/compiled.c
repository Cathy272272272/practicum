#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7079587 = -120.0;
        float r7079588 = 720.0;
        float r7079589 = x;
        float r7079590 = r7079589 * r7079589;
        float r7079591 = r7079588 * r7079590;
        float r7079592 = r7079587 + r7079591;
        float r7079593 = -480.0;
        float r7079594 = r7079590 * r7079589;
        float r7079595 = r7079594 * r7079589;
        float r7079596 = r7079593 * r7079595;
        float r7079597 = r7079592 + r7079596;
        float r7079598 = 64.0;
        float r7079599 = r7079595 * r7079589;
        float r7079600 = r7079599 * r7079589;
        float r7079601 = r7079598 * r7079600;
        float r7079602 = r7079597 + r7079601;
        return r7079602;
}

double f_id(double x) {
        double r7079603 = -120.0;
        double r7079604 = 720.0;
        double r7079605 = x;
        double r7079606 = r7079605 * r7079605;
        double r7079607 = r7079604 * r7079606;
        double r7079608 = r7079603 + r7079607;
        double r7079609 = -480.0;
        double r7079610 = r7079606 * r7079605;
        double r7079611 = r7079610 * r7079605;
        double r7079612 = r7079609 * r7079611;
        double r7079613 = r7079608 + r7079612;
        double r7079614 = 64.0;
        double r7079615 = r7079611 * r7079605;
        double r7079616 = r7079615 * r7079605;
        double r7079617 = r7079614 * r7079616;
        double r7079618 = r7079613 + r7079617;
        return r7079618;
}


double f_of(float x) {
        float r7079619 = x;
        float r7079620 = 720.0;
        float r7079621 = r7079619 * r7079620;
        float r7079622 = r7079621 * r7079619;
        float r7079623 = -120.0;
        float r7079624 = r7079622 + r7079623;
        float r7079625 = r7079619 * r7079619;
        float r7079626 = r7079625 * r7079625;
        float r7079627 = -480.0;
        float r7079628 = 64.0;
        float r7079629 = r7079625 * r7079628;
        float r7079630 = r7079627 + r7079629;
        float r7079631 = r7079626 * r7079630;
        float r7079632 = r7079624 + r7079631;
        return r7079632;
}

double f_od(double x) {
        double r7079633 = x;
        double r7079634 = 720.0;
        double r7079635 = r7079633 * r7079634;
        double r7079636 = r7079635 * r7079633;
        double r7079637 = -120.0;
        double r7079638 = r7079636 + r7079637;
        double r7079639 = r7079633 * r7079633;
        double r7079640 = r7079639 * r7079639;
        double r7079641 = -480.0;
        double r7079642 = 64.0;
        double r7079643 = r7079639 * r7079642;
        double r7079644 = r7079641 + r7079643;
        double r7079645 = r7079640 * r7079644;
        double r7079646 = r7079638 + r7079645;
        return r7079646;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7079647, r7079648, r7079649, r7079650, r7079651, r7079652, r7079653, r7079654, r7079655, r7079656, r7079657, r7079658, r7079659, r7079660, r7079661, r7079662;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7079647, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079648, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7079649);
        mpfr_init(r7079650);
        mpfr_init(r7079651);
        mpfr_init(r7079652);
        mpfr_init_set_str(r7079653, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7079654);
        mpfr_init(r7079655);
        mpfr_init(r7079656);
        mpfr_init(r7079657);
        mpfr_init_set_str(r7079658, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7079659);
        mpfr_init(r7079660);
        mpfr_init(r7079661);
        mpfr_init(r7079662);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7079649, x, MPFR_RNDN);
        mpfr_mul(r7079650, r7079649, r7079649, MPFR_RNDN);
        mpfr_mul(r7079651, r7079648, r7079650, MPFR_RNDN);
        mpfr_add(r7079652, r7079647, r7079651, MPFR_RNDN);
        ;
        mpfr_mul(r7079654, r7079650, r7079649, MPFR_RNDN);
        mpfr_mul(r7079655, r7079654, r7079649, MPFR_RNDN);
        mpfr_mul(r7079656, r7079653, r7079655, MPFR_RNDN);
        mpfr_add(r7079657, r7079652, r7079656, MPFR_RNDN);
        ;
        mpfr_mul(r7079659, r7079655, r7079649, MPFR_RNDN);
        mpfr_mul(r7079660, r7079659, r7079649, MPFR_RNDN);
        mpfr_mul(r7079661, r7079658, r7079660, MPFR_RNDN);
        mpfr_add(r7079662, r7079657, r7079661, MPFR_RNDN);
        return mpfr_get_d(r7079662, MPFR_RNDN);
}

static mpfr_t r7079663, r7079664, r7079665, r7079666, r7079667, r7079668, r7079669, r7079670, r7079671, r7079672, r7079673, r7079674, r7079675, r7079676;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7079663);
        mpfr_init_set_str(r7079664, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7079665);
        mpfr_init(r7079666);
        mpfr_init_set_str(r7079667, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r7079668);
        mpfr_init(r7079669);
        mpfr_init(r7079670);
        mpfr_init_set_str(r7079671, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079672, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7079673);
        mpfr_init(r7079674);
        mpfr_init(r7079675);
        mpfr_init(r7079676);
}

double f_fm(double x) {
        mpfr_set_d(r7079663, x, MPFR_RNDN);
        ;
        mpfr_mul(r7079665, r7079663, r7079664, MPFR_RNDN);
        mpfr_mul(r7079666, r7079665, r7079663, MPFR_RNDN);
        ;
        mpfr_add(r7079668, r7079666, r7079667, MPFR_RNDN);
        mpfr_mul(r7079669, r7079663, r7079663, MPFR_RNDN);
        mpfr_mul(r7079670, r7079669, r7079669, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7079673, r7079669, r7079672, MPFR_RNDN);
        mpfr_add(r7079674, r7079671, r7079673, MPFR_RNDN);
        mpfr_mul(r7079675, r7079670, r7079674, MPFR_RNDN);
        mpfr_add(r7079676, r7079668, r7079675, MPFR_RNDN);
        return mpfr_get_d(r7079676, MPFR_RNDN);
}

static mpfr_t r7079677, r7079678, r7079679, r7079680, r7079681, r7079682, r7079683, r7079684, r7079685, r7079686, r7079687, r7079688, r7079689, r7079690;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7079677);
        mpfr_init_set_str(r7079678, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7079679);
        mpfr_init(r7079680);
        mpfr_init_set_str(r7079681, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r7079682);
        mpfr_init(r7079683);
        mpfr_init(r7079684);
        mpfr_init_set_str(r7079685, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079686, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7079687);
        mpfr_init(r7079688);
        mpfr_init(r7079689);
        mpfr_init(r7079690);
}

double f_dm(double x) {
        mpfr_set_d(r7079677, x, MPFR_RNDN);
        ;
        mpfr_mul(r7079679, r7079677, r7079678, MPFR_RNDN);
        mpfr_mul(r7079680, r7079679, r7079677, MPFR_RNDN);
        ;
        mpfr_add(r7079682, r7079680, r7079681, MPFR_RNDN);
        mpfr_mul(r7079683, r7079677, r7079677, MPFR_RNDN);
        mpfr_mul(r7079684, r7079683, r7079683, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7079687, r7079683, r7079686, MPFR_RNDN);
        mpfr_add(r7079688, r7079685, r7079687, MPFR_RNDN);
        mpfr_mul(r7079689, r7079684, r7079688, MPFR_RNDN);
        mpfr_add(r7079690, r7079682, r7079689, MPFR_RNDN);
        return mpfr_get_d(r7079690, MPFR_RNDN);
}

