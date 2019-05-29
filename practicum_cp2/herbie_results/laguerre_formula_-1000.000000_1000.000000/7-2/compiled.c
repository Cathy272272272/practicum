#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6513597 = 1.0;
        float r6513598 = -2.0;
        float r6513599 = x;
        float r6513600 = r6513598 * r6513599;
        float r6513601 = r6513597 + r6513600;
        float r6513602 = 0.5;
        float r6513603 = r6513599 * r6513599;
        float r6513604 = r6513602 * r6513603;
        float r6513605 = r6513601 + r6513604;
        return r6513605;
}

double f_id(double x) {
        double r6513606 = 1.0;
        double r6513607 = -2.0;
        double r6513608 = x;
        double r6513609 = r6513607 * r6513608;
        double r6513610 = r6513606 + r6513609;
        double r6513611 = 0.5;
        double r6513612 = r6513608 * r6513608;
        double r6513613 = r6513611 * r6513612;
        double r6513614 = r6513610 + r6513613;
        return r6513614;
}


double f_of(float x) {
        float r6513615 = 1.0;
        float r6513616 = -2.0;
        float r6513617 = x;
        float r6513618 = r6513616 * r6513617;
        float r6513619 = r6513615 + r6513618;
        float r6513620 = 0.5;
        float r6513621 = r6513617 * r6513617;
        float r6513622 = r6513620 * r6513621;
        float r6513623 = cbrt(r6513622);
        float r6513624 = r6513623 * r6513623;
        float r6513625 = r6513624 * r6513623;
        float r6513626 = r6513619 + r6513625;
        return r6513626;
}

double f_od(double x) {
        double r6513627 = 1.0;
        double r6513628 = -2.0;
        double r6513629 = x;
        double r6513630 = r6513628 * r6513629;
        double r6513631 = r6513627 + r6513630;
        double r6513632 = 0.5;
        double r6513633 = r6513629 * r6513629;
        double r6513634 = r6513632 * r6513633;
        double r6513635 = cbrt(r6513634);
        double r6513636 = r6513635 * r6513635;
        double r6513637 = r6513636 * r6513635;
        double r6513638 = r6513631 + r6513637;
        return r6513638;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6513639, r6513640, r6513641, r6513642, r6513643, r6513644, r6513645, r6513646, r6513647;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6513639, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513640, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r6513641);
        mpfr_init(r6513642);
        mpfr_init(r6513643);
        mpfr_init_set_str(r6513644, "0.5", 10, MPFR_RNDN);
        mpfr_init(r6513645);
        mpfr_init(r6513646);
        mpfr_init(r6513647);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6513641, x, MPFR_RNDN);
        mpfr_mul(r6513642, r6513640, r6513641, MPFR_RNDN);
        mpfr_add(r6513643, r6513639, r6513642, MPFR_RNDN);
        ;
        mpfr_mul(r6513645, r6513641, r6513641, MPFR_RNDN);
        mpfr_mul(r6513646, r6513644, r6513645, MPFR_RNDN);
        mpfr_add(r6513647, r6513643, r6513646, MPFR_RNDN);
        return mpfr_get_d(r6513647, MPFR_RNDN);
}

static mpfr_t r6513648, r6513649, r6513650, r6513651, r6513652, r6513653, r6513654, r6513655, r6513656, r6513657, r6513658, r6513659;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6513648, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513649, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r6513650);
        mpfr_init(r6513651);
        mpfr_init(r6513652);
        mpfr_init_set_str(r6513653, "0.5", 10, MPFR_RNDN);
        mpfr_init(r6513654);
        mpfr_init(r6513655);
        mpfr_init(r6513656);
        mpfr_init(r6513657);
        mpfr_init(r6513658);
        mpfr_init(r6513659);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6513650, x, MPFR_RNDN);
        mpfr_mul(r6513651, r6513649, r6513650, MPFR_RNDN);
        mpfr_add(r6513652, r6513648, r6513651, MPFR_RNDN);
        ;
        mpfr_mul(r6513654, r6513650, r6513650, MPFR_RNDN);
        mpfr_mul(r6513655, r6513653, r6513654, MPFR_RNDN);
        mpfr_cbrt(r6513656, r6513655, MPFR_RNDN);
        mpfr_mul(r6513657, r6513656, r6513656, MPFR_RNDN);
        mpfr_mul(r6513658, r6513657, r6513656, MPFR_RNDN);
        mpfr_add(r6513659, r6513652, r6513658, MPFR_RNDN);
        return mpfr_get_d(r6513659, MPFR_RNDN);
}

static mpfr_t r6513660, r6513661, r6513662, r6513663, r6513664, r6513665, r6513666, r6513667, r6513668, r6513669, r6513670, r6513671;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6513660, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513661, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r6513662);
        mpfr_init(r6513663);
        mpfr_init(r6513664);
        mpfr_init_set_str(r6513665, "0.5", 10, MPFR_RNDN);
        mpfr_init(r6513666);
        mpfr_init(r6513667);
        mpfr_init(r6513668);
        mpfr_init(r6513669);
        mpfr_init(r6513670);
        mpfr_init(r6513671);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6513662, x, MPFR_RNDN);
        mpfr_mul(r6513663, r6513661, r6513662, MPFR_RNDN);
        mpfr_add(r6513664, r6513660, r6513663, MPFR_RNDN);
        ;
        mpfr_mul(r6513666, r6513662, r6513662, MPFR_RNDN);
        mpfr_mul(r6513667, r6513665, r6513666, MPFR_RNDN);
        mpfr_cbrt(r6513668, r6513667, MPFR_RNDN);
        mpfr_mul(r6513669, r6513668, r6513668, MPFR_RNDN);
        mpfr_mul(r6513670, r6513669, r6513668, MPFR_RNDN);
        mpfr_add(r6513671, r6513664, r6513670, MPFR_RNDN);
        return mpfr_get_d(r6513671, MPFR_RNDN);
}

