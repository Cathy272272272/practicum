#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6764597 = -0.3125;
        float r6764598 = 6.5625;
        float r6764599 = x;
        float r6764600 = r6764599 * r6764599;
        float r6764601 = r6764598 * r6764600;
        float r6764602 = r6764597 + r6764601;
        float r6764603 = -19.6875;
        float r6764604 = r6764600 * r6764599;
        float r6764605 = r6764604 * r6764599;
        float r6764606 = r6764603 * r6764605;
        float r6764607 = r6764602 + r6764606;
        float r6764608 = 14.4375;
        float r6764609 = r6764605 * r6764599;
        float r6764610 = r6764609 * r6764599;
        float r6764611 = r6764608 * r6764610;
        float r6764612 = r6764607 + r6764611;
        return r6764612;
}

double f_id(double x) {
        double r6764613 = -0.3125;
        double r6764614 = 6.5625;
        double r6764615 = x;
        double r6764616 = r6764615 * r6764615;
        double r6764617 = r6764614 * r6764616;
        double r6764618 = r6764613 + r6764617;
        double r6764619 = -19.6875;
        double r6764620 = r6764616 * r6764615;
        double r6764621 = r6764620 * r6764615;
        double r6764622 = r6764619 * r6764621;
        double r6764623 = r6764618 + r6764622;
        double r6764624 = 14.4375;
        double r6764625 = r6764621 * r6764615;
        double r6764626 = r6764625 * r6764615;
        double r6764627 = r6764624 * r6764626;
        double r6764628 = r6764623 + r6764627;
        return r6764628;
}


double f_of(float x) {
        float r6764629 = x;
        float r6764630 = 6.5625;
        float r6764631 = r6764629 * r6764630;
        float r6764632 = r6764631 * r6764629;
        float r6764633 = -0.3125;
        float r6764634 = r6764632 + r6764633;
        float r6764635 = r6764629 * r6764629;
        float r6764636 = r6764635 * r6764635;
        float r6764637 = -19.6875;
        float r6764638 = 14.4375;
        float r6764639 = r6764635 * r6764638;
        float r6764640 = r6764637 + r6764639;
        float r6764641 = r6764636 * r6764640;
        float r6764642 = r6764634 + r6764641;
        return r6764642;
}

double f_od(double x) {
        double r6764643 = x;
        double r6764644 = 6.5625;
        double r6764645 = r6764643 * r6764644;
        double r6764646 = r6764645 * r6764643;
        double r6764647 = -0.3125;
        double r6764648 = r6764646 + r6764647;
        double r6764649 = r6764643 * r6764643;
        double r6764650 = r6764649 * r6764649;
        double r6764651 = -19.6875;
        double r6764652 = 14.4375;
        double r6764653 = r6764649 * r6764652;
        double r6764654 = r6764651 + r6764653;
        double r6764655 = r6764650 * r6764654;
        double r6764656 = r6764648 + r6764655;
        return r6764656;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6764657, r6764658, r6764659, r6764660, r6764661, r6764662, r6764663, r6764664, r6764665, r6764666, r6764667, r6764668, r6764669, r6764670, r6764671, r6764672;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6764657, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764658, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6764659);
        mpfr_init(r6764660);
        mpfr_init(r6764661);
        mpfr_init(r6764662);
        mpfr_init_set_str(r6764663, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6764664);
        mpfr_init(r6764665);
        mpfr_init(r6764666);
        mpfr_init(r6764667);
        mpfr_init_set_str(r6764668, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6764669);
        mpfr_init(r6764670);
        mpfr_init(r6764671);
        mpfr_init(r6764672);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6764659, x, MPFR_RNDN);
        mpfr_mul(r6764660, r6764659, r6764659, MPFR_RNDN);
        mpfr_mul(r6764661, r6764658, r6764660, MPFR_RNDN);
        mpfr_add(r6764662, r6764657, r6764661, MPFR_RNDN);
        ;
        mpfr_mul(r6764664, r6764660, r6764659, MPFR_RNDN);
        mpfr_mul(r6764665, r6764664, r6764659, MPFR_RNDN);
        mpfr_mul(r6764666, r6764663, r6764665, MPFR_RNDN);
        mpfr_add(r6764667, r6764662, r6764666, MPFR_RNDN);
        ;
        mpfr_mul(r6764669, r6764665, r6764659, MPFR_RNDN);
        mpfr_mul(r6764670, r6764669, r6764659, MPFR_RNDN);
        mpfr_mul(r6764671, r6764668, r6764670, MPFR_RNDN);
        mpfr_add(r6764672, r6764667, r6764671, MPFR_RNDN);
        return mpfr_get_d(r6764672, MPFR_RNDN);
}

static mpfr_t r6764673, r6764674, r6764675, r6764676, r6764677, r6764678, r6764679, r6764680, r6764681, r6764682, r6764683, r6764684, r6764685, r6764686;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6764673);
        mpfr_init_set_str(r6764674, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6764675);
        mpfr_init(r6764676);
        mpfr_init_set_str(r6764677, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6764678);
        mpfr_init(r6764679);
        mpfr_init(r6764680);
        mpfr_init_set_str(r6764681, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764682, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6764683);
        mpfr_init(r6764684);
        mpfr_init(r6764685);
        mpfr_init(r6764686);
}

double f_fm(double x) {
        mpfr_set_d(r6764673, x, MPFR_RNDN);
        ;
        mpfr_mul(r6764675, r6764673, r6764674, MPFR_RNDN);
        mpfr_mul(r6764676, r6764675, r6764673, MPFR_RNDN);
        ;
        mpfr_add(r6764678, r6764676, r6764677, MPFR_RNDN);
        mpfr_mul(r6764679, r6764673, r6764673, MPFR_RNDN);
        mpfr_mul(r6764680, r6764679, r6764679, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6764683, r6764679, r6764682, MPFR_RNDN);
        mpfr_add(r6764684, r6764681, r6764683, MPFR_RNDN);
        mpfr_mul(r6764685, r6764680, r6764684, MPFR_RNDN);
        mpfr_add(r6764686, r6764678, r6764685, MPFR_RNDN);
        return mpfr_get_d(r6764686, MPFR_RNDN);
}

static mpfr_t r6764687, r6764688, r6764689, r6764690, r6764691, r6764692, r6764693, r6764694, r6764695, r6764696, r6764697, r6764698, r6764699, r6764700;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6764687);
        mpfr_init_set_str(r6764688, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6764689);
        mpfr_init(r6764690);
        mpfr_init_set_str(r6764691, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6764692);
        mpfr_init(r6764693);
        mpfr_init(r6764694);
        mpfr_init_set_str(r6764695, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764696, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6764697);
        mpfr_init(r6764698);
        mpfr_init(r6764699);
        mpfr_init(r6764700);
}

double f_dm(double x) {
        mpfr_set_d(r6764687, x, MPFR_RNDN);
        ;
        mpfr_mul(r6764689, r6764687, r6764688, MPFR_RNDN);
        mpfr_mul(r6764690, r6764689, r6764687, MPFR_RNDN);
        ;
        mpfr_add(r6764692, r6764690, r6764691, MPFR_RNDN);
        mpfr_mul(r6764693, r6764687, r6764687, MPFR_RNDN);
        mpfr_mul(r6764694, r6764693, r6764693, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6764697, r6764693, r6764696, MPFR_RNDN);
        mpfr_add(r6764698, r6764695, r6764697, MPFR_RNDN);
        mpfr_mul(r6764699, r6764694, r6764698, MPFR_RNDN);
        mpfr_add(r6764700, r6764692, r6764699, MPFR_RNDN);
        return mpfr_get_d(r6764700, MPFR_RNDN);
}

