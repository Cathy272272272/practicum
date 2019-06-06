#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r60543589 = -2.0;
        float r60543590 = 4.0;
        float r60543591 = x;
        float r60543592 = r60543591 * r60543591;
        float r60543593 = r60543590 * r60543592;
        float r60543594 = r60543589 + r60543593;
        return r60543594;
}

double f_id(double x) {
        double r60543595 = -2.0;
        double r60543596 = 4.0;
        double r60543597 = x;
        double r60543598 = r60543597 * r60543597;
        double r60543599 = r60543596 * r60543598;
        double r60543600 = r60543595 + r60543599;
        return r60543600;
}


double f_of(float x) {
        float r60543601 = -2.0;
        float r60543602 = r60543601 * r60543601;
        float r60543603 = 4.0;
        float r60543604 = x;
        float r60543605 = 3;
        float r60543606 = pow(r60543604, r60543605);
        float r60543607 = r60543604 * r60543603;
        float r60543608 = r60543606 * r60543607;
        float r60543609 = r60543603 * r60543608;
        float r60543610 = r60543602 - r60543609;
        float r60543611 = r60543604 * r60543604;
        float r60543612 = r60543603 * r60543611;
        float r60543613 = r60543601 - r60543612;
        float r60543614 = r60543610 / r60543613;
        return r60543614;
}

double f_od(double x) {
        double r60543615 = -2.0;
        double r60543616 = r60543615 * r60543615;
        double r60543617 = 4.0;
        double r60543618 = x;
        double r60543619 = 3;
        double r60543620 = pow(r60543618, r60543619);
        double r60543621 = r60543618 * r60543617;
        double r60543622 = r60543620 * r60543621;
        double r60543623 = r60543617 * r60543622;
        double r60543624 = r60543616 - r60543623;
        double r60543625 = r60543618 * r60543618;
        double r60543626 = r60543617 * r60543625;
        double r60543627 = r60543615 - r60543626;
        double r60543628 = r60543624 / r60543627;
        return r60543628;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60543629, r60543630, r60543631, r60543632, r60543633, r60543634;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543629, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60543630, "4.0", 10, MPFR_RNDN);
        mpfr_init(r60543631);
        mpfr_init(r60543632);
        mpfr_init(r60543633);
        mpfr_init(r60543634);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60543631, x, MPFR_RNDN);
        mpfr_mul(r60543632, r60543631, r60543631, MPFR_RNDN);
        mpfr_mul(r60543633, r60543630, r60543632, MPFR_RNDN);
        mpfr_add(r60543634, r60543629, r60543633, MPFR_RNDN);
        return mpfr_get_d(r60543634, MPFR_RNDN);
}

static mpfr_t r60543635, r60543636, r60543637, r60543638, r60543639, r60543640, r60543641, r60543642, r60543643, r60543644, r60543645, r60543646, r60543647, r60543648;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543635, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r60543636);
        mpfr_init_set_str(r60543637, "4.0", 10, MPFR_RNDN);
        mpfr_init(r60543638);
        mpfr_init_set_str(r60543639, "3", 10, MPFR_RNDN);
        mpfr_init(r60543640);
        mpfr_init(r60543641);
        mpfr_init(r60543642);
        mpfr_init(r60543643);
        mpfr_init(r60543644);
        mpfr_init(r60543645);
        mpfr_init(r60543646);
        mpfr_init(r60543647);
        mpfr_init(r60543648);
}

double f_fm(double x) {
        ;
        mpfr_mul(r60543636, r60543635, r60543635, MPFR_RNDN);
        ;
        mpfr_set_d(r60543638, x, MPFR_RNDN);
        ;
        mpfr_pow(r60543640, r60543638, r60543639, MPFR_RNDN);
        mpfr_mul(r60543641, r60543638, r60543637, MPFR_RNDN);
        mpfr_mul(r60543642, r60543640, r60543641, MPFR_RNDN);
        mpfr_mul(r60543643, r60543637, r60543642, MPFR_RNDN);
        mpfr_sub(r60543644, r60543636, r60543643, MPFR_RNDN);
        mpfr_mul(r60543645, r60543638, r60543638, MPFR_RNDN);
        mpfr_mul(r60543646, r60543637, r60543645, MPFR_RNDN);
        mpfr_sub(r60543647, r60543635, r60543646, MPFR_RNDN);
        mpfr_div(r60543648, r60543644, r60543647, MPFR_RNDN);
        return mpfr_get_d(r60543648, MPFR_RNDN);
}

static mpfr_t r60543649, r60543650, r60543651, r60543652, r60543653, r60543654, r60543655, r60543656, r60543657, r60543658, r60543659, r60543660, r60543661, r60543662;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543649, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r60543650);
        mpfr_init_set_str(r60543651, "4.0", 10, MPFR_RNDN);
        mpfr_init(r60543652);
        mpfr_init_set_str(r60543653, "3", 10, MPFR_RNDN);
        mpfr_init(r60543654);
        mpfr_init(r60543655);
        mpfr_init(r60543656);
        mpfr_init(r60543657);
        mpfr_init(r60543658);
        mpfr_init(r60543659);
        mpfr_init(r60543660);
        mpfr_init(r60543661);
        mpfr_init(r60543662);
}

double f_dm(double x) {
        ;
        mpfr_mul(r60543650, r60543649, r60543649, MPFR_RNDN);
        ;
        mpfr_set_d(r60543652, x, MPFR_RNDN);
        ;
        mpfr_pow(r60543654, r60543652, r60543653, MPFR_RNDN);
        mpfr_mul(r60543655, r60543652, r60543651, MPFR_RNDN);
        mpfr_mul(r60543656, r60543654, r60543655, MPFR_RNDN);
        mpfr_mul(r60543657, r60543651, r60543656, MPFR_RNDN);
        mpfr_sub(r60543658, r60543650, r60543657, MPFR_RNDN);
        mpfr_mul(r60543659, r60543652, r60543652, MPFR_RNDN);
        mpfr_mul(r60543660, r60543651, r60543659, MPFR_RNDN);
        mpfr_sub(r60543661, r60543649, r60543660, MPFR_RNDN);
        mpfr_div(r60543662, r60543658, r60543661, MPFR_RNDN);
        return mpfr_get_d(r60543662, MPFR_RNDN);
}

