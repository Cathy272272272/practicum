#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7030595 = 12.0;
        float r7030596 = -48.0;
        float r7030597 = x;
        float r7030598 = r7030597 * r7030597;
        float r7030599 = r7030596 * r7030598;
        float r7030600 = r7030595 + r7030599;
        float r7030601 = 16.0;
        float r7030602 = r7030598 * r7030597;
        float r7030603 = r7030602 * r7030597;
        float r7030604 = r7030601 * r7030603;
        float r7030605 = r7030600 + r7030604;
        return r7030605;
}

double f_id(double x) {
        double r7030606 = 12.0;
        double r7030607 = -48.0;
        double r7030608 = x;
        double r7030609 = r7030608 * r7030608;
        double r7030610 = r7030607 * r7030609;
        double r7030611 = r7030606 + r7030610;
        double r7030612 = 16.0;
        double r7030613 = r7030609 * r7030608;
        double r7030614 = r7030613 * r7030608;
        double r7030615 = r7030612 * r7030614;
        double r7030616 = r7030611 + r7030615;
        return r7030616;
}


double f_of(float x) {
        float r7030617 = 12.0;
        float r7030618 = x;
        float r7030619 = 16.0;
        float r7030620 = r7030618 * r7030619;
        float r7030621 = 3;
        float r7030622 = pow(r7030618, r7030621);
        float r7030623 = r7030620 * r7030622;
        float r7030624 = -48.0;
        float r7030625 = r7030618 * r7030624;
        float r7030626 = r7030625 * r7030618;
        float r7030627 = r7030623 + r7030626;
        float r7030628 = r7030617 + r7030627;
        return r7030628;
}

double f_od(double x) {
        double r7030629 = 12.0;
        double r7030630 = x;
        double r7030631 = 16.0;
        double r7030632 = r7030630 * r7030631;
        double r7030633 = 3;
        double r7030634 = pow(r7030630, r7030633);
        double r7030635 = r7030632 * r7030634;
        double r7030636 = -48.0;
        double r7030637 = r7030630 * r7030636;
        double r7030638 = r7030637 * r7030630;
        double r7030639 = r7030635 + r7030638;
        double r7030640 = r7030629 + r7030639;
        return r7030640;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7030641, r7030642, r7030643, r7030644, r7030645, r7030646, r7030647, r7030648, r7030649, r7030650, r7030651;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030641, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030642, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7030643);
        mpfr_init(r7030644);
        mpfr_init(r7030645);
        mpfr_init(r7030646);
        mpfr_init_set_str(r7030647, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7030648);
        mpfr_init(r7030649);
        mpfr_init(r7030650);
        mpfr_init(r7030651);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7030643, x, MPFR_RNDN);
        mpfr_mul(r7030644, r7030643, r7030643, MPFR_RNDN);
        mpfr_mul(r7030645, r7030642, r7030644, MPFR_RNDN);
        mpfr_add(r7030646, r7030641, r7030645, MPFR_RNDN);
        ;
        mpfr_mul(r7030648, r7030644, r7030643, MPFR_RNDN);
        mpfr_mul(r7030649, r7030648, r7030643, MPFR_RNDN);
        mpfr_mul(r7030650, r7030647, r7030649, MPFR_RNDN);
        mpfr_add(r7030651, r7030646, r7030650, MPFR_RNDN);
        return mpfr_get_d(r7030651, MPFR_RNDN);
}

static mpfr_t r7030652, r7030653, r7030654, r7030655, r7030656, r7030657, r7030658, r7030659, r7030660, r7030661, r7030662, r7030663;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030652, "12.0", 10, MPFR_RNDN);
        mpfr_init(r7030653);
        mpfr_init_set_str(r7030654, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7030655);
        mpfr_init_set_str(r7030656, "3", 10, MPFR_RNDN);
        mpfr_init(r7030657);
        mpfr_init(r7030658);
        mpfr_init_set_str(r7030659, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7030660);
        mpfr_init(r7030661);
        mpfr_init(r7030662);
        mpfr_init(r7030663);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7030653, x, MPFR_RNDN);
        ;
        mpfr_mul(r7030655, r7030653, r7030654, MPFR_RNDN);
        ;
        mpfr_pow(r7030657, r7030653, r7030656, MPFR_RNDN);
        mpfr_mul(r7030658, r7030655, r7030657, MPFR_RNDN);
        ;
        mpfr_mul(r7030660, r7030653, r7030659, MPFR_RNDN);
        mpfr_mul(r7030661, r7030660, r7030653, MPFR_RNDN);
        mpfr_add(r7030662, r7030658, r7030661, MPFR_RNDN);
        mpfr_add(r7030663, r7030652, r7030662, MPFR_RNDN);
        return mpfr_get_d(r7030663, MPFR_RNDN);
}

static mpfr_t r7030664, r7030665, r7030666, r7030667, r7030668, r7030669, r7030670, r7030671, r7030672, r7030673, r7030674, r7030675;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030664, "12.0", 10, MPFR_RNDN);
        mpfr_init(r7030665);
        mpfr_init_set_str(r7030666, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7030667);
        mpfr_init_set_str(r7030668, "3", 10, MPFR_RNDN);
        mpfr_init(r7030669);
        mpfr_init(r7030670);
        mpfr_init_set_str(r7030671, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7030672);
        mpfr_init(r7030673);
        mpfr_init(r7030674);
        mpfr_init(r7030675);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7030665, x, MPFR_RNDN);
        ;
        mpfr_mul(r7030667, r7030665, r7030666, MPFR_RNDN);
        ;
        mpfr_pow(r7030669, r7030665, r7030668, MPFR_RNDN);
        mpfr_mul(r7030670, r7030667, r7030669, MPFR_RNDN);
        ;
        mpfr_mul(r7030672, r7030665, r7030671, MPFR_RNDN);
        mpfr_mul(r7030673, r7030672, r7030665, MPFR_RNDN);
        mpfr_add(r7030674, r7030670, r7030673, MPFR_RNDN);
        mpfr_add(r7030675, r7030664, r7030674, MPFR_RNDN);
        return mpfr_get_d(r7030675, MPFR_RNDN);
}

