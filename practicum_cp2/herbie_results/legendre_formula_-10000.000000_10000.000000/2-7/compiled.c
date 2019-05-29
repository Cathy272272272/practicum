#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6860592 = -2.1875;
        float r6860593 = x;
        float r6860594 = r6860592 * r6860593;
        float r6860595 = 19.6875;
        float r6860596 = r6860593 * r6860593;
        float r6860597 = r6860596 * r6860593;
        float r6860598 = r6860595 * r6860597;
        float r6860599 = r6860594 + r6860598;
        float r6860600 = -43.3125;
        float r6860601 = r6860597 * r6860593;
        float r6860602 = r6860601 * r6860593;
        float r6860603 = r6860600 * r6860602;
        float r6860604 = r6860599 + r6860603;
        float r6860605 = 26.8125;
        float r6860606 = r6860602 * r6860593;
        float r6860607 = r6860606 * r6860593;
        float r6860608 = r6860605 * r6860607;
        float r6860609 = r6860604 + r6860608;
        return r6860609;
}

double f_id(double x) {
        double r6860610 = -2.1875;
        double r6860611 = x;
        double r6860612 = r6860610 * r6860611;
        double r6860613 = 19.6875;
        double r6860614 = r6860611 * r6860611;
        double r6860615 = r6860614 * r6860611;
        double r6860616 = r6860613 * r6860615;
        double r6860617 = r6860612 + r6860616;
        double r6860618 = -43.3125;
        double r6860619 = r6860615 * r6860611;
        double r6860620 = r6860619 * r6860611;
        double r6860621 = r6860618 * r6860620;
        double r6860622 = r6860617 + r6860621;
        double r6860623 = 26.8125;
        double r6860624 = r6860620 * r6860611;
        double r6860625 = r6860624 * r6860611;
        double r6860626 = r6860623 * r6860625;
        double r6860627 = r6860622 + r6860626;
        return r6860627;
}


double f_of(float x) {
        float r6860628 = x;
        float r6860629 = r6860628 * r6860628;
        float r6860630 = 19.6875;
        float r6860631 = r6860630 * r6860628;
        float r6860632 = -43.3125;
        float r6860633 = r6860632 * r6860628;
        float r6860634 = r6860629 * r6860633;
        float r6860635 = r6860631 + r6860634;
        float r6860636 = r6860629 * r6860635;
        float r6860637 = -2.1875;
        float r6860638 = r6860637 * r6860628;
        float r6860639 = 26.8125;
        float r6860640 = r6860639 * r6860628;
        float r6860641 = 4;
        float r6860642 = pow(r6860628, r6860641);
        float r6860643 = r6860640 * r6860642;
        float r6860644 = r6860629 * r6860643;
        float r6860645 = r6860638 + r6860644;
        float r6860646 = r6860636 + r6860645;
        return r6860646;
}

double f_od(double x) {
        double r6860647 = x;
        double r6860648 = r6860647 * r6860647;
        double r6860649 = 19.6875;
        double r6860650 = r6860649 * r6860647;
        double r6860651 = -43.3125;
        double r6860652 = r6860651 * r6860647;
        double r6860653 = r6860648 * r6860652;
        double r6860654 = r6860650 + r6860653;
        double r6860655 = r6860648 * r6860654;
        double r6860656 = -2.1875;
        double r6860657 = r6860656 * r6860647;
        double r6860658 = 26.8125;
        double r6860659 = r6860658 * r6860647;
        double r6860660 = 4;
        double r6860661 = pow(r6860647, r6860660);
        double r6860662 = r6860659 * r6860661;
        double r6860663 = r6860648 * r6860662;
        double r6860664 = r6860657 + r6860663;
        double r6860665 = r6860655 + r6860664;
        return r6860665;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6860666, r6860667, r6860668, r6860669, r6860670, r6860671, r6860672, r6860673, r6860674, r6860675, r6860676, r6860677, r6860678, r6860679, r6860680, r6860681, r6860682, r6860683;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6860666, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6860667);
        mpfr_init(r6860668);
        mpfr_init_set_str(r6860669, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6860670);
        mpfr_init(r6860671);
        mpfr_init(r6860672);
        mpfr_init(r6860673);
        mpfr_init_set_str(r6860674, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6860675);
        mpfr_init(r6860676);
        mpfr_init(r6860677);
        mpfr_init(r6860678);
        mpfr_init_set_str(r6860679, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6860680);
        mpfr_init(r6860681);
        mpfr_init(r6860682);
        mpfr_init(r6860683);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6860667, x, MPFR_RNDN);
        mpfr_mul(r6860668, r6860666, r6860667, MPFR_RNDN);
        ;
        mpfr_mul(r6860670, r6860667, r6860667, MPFR_RNDN);
        mpfr_mul(r6860671, r6860670, r6860667, MPFR_RNDN);
        mpfr_mul(r6860672, r6860669, r6860671, MPFR_RNDN);
        mpfr_add(r6860673, r6860668, r6860672, MPFR_RNDN);
        ;
        mpfr_mul(r6860675, r6860671, r6860667, MPFR_RNDN);
        mpfr_mul(r6860676, r6860675, r6860667, MPFR_RNDN);
        mpfr_mul(r6860677, r6860674, r6860676, MPFR_RNDN);
        mpfr_add(r6860678, r6860673, r6860677, MPFR_RNDN);
        ;
        mpfr_mul(r6860680, r6860676, r6860667, MPFR_RNDN);
        mpfr_mul(r6860681, r6860680, r6860667, MPFR_RNDN);
        mpfr_mul(r6860682, r6860679, r6860681, MPFR_RNDN);
        mpfr_add(r6860683, r6860678, r6860682, MPFR_RNDN);
        return mpfr_get_d(r6860683, MPFR_RNDN);
}

static mpfr_t r6860684, r6860685, r6860686, r6860687, r6860688, r6860689, r6860690, r6860691, r6860692, r6860693, r6860694, r6860695, r6860696, r6860697, r6860698, r6860699, r6860700, r6860701, r6860702;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6860684);
        mpfr_init(r6860685);
        mpfr_init_set_str(r6860686, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6860687);
        mpfr_init_set_str(r6860688, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6860689);
        mpfr_init(r6860690);
        mpfr_init(r6860691);
        mpfr_init(r6860692);
        mpfr_init_set_str(r6860693, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6860694);
        mpfr_init_set_str(r6860695, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6860696);
        mpfr_init_set_str(r6860697, "4", 10, MPFR_RNDN);
        mpfr_init(r6860698);
        mpfr_init(r6860699);
        mpfr_init(r6860700);
        mpfr_init(r6860701);
        mpfr_init(r6860702);
}

double f_fm(double x) {
        mpfr_set_d(r6860684, x, MPFR_RNDN);
        mpfr_mul(r6860685, r6860684, r6860684, MPFR_RNDN);
        ;
        mpfr_mul(r6860687, r6860686, r6860684, MPFR_RNDN);
        ;
        mpfr_mul(r6860689, r6860688, r6860684, MPFR_RNDN);
        mpfr_mul(r6860690, r6860685, r6860689, MPFR_RNDN);
        mpfr_add(r6860691, r6860687, r6860690, MPFR_RNDN);
        mpfr_mul(r6860692, r6860685, r6860691, MPFR_RNDN);
        ;
        mpfr_mul(r6860694, r6860693, r6860684, MPFR_RNDN);
        ;
        mpfr_mul(r6860696, r6860695, r6860684, MPFR_RNDN);
        ;
        mpfr_pow(r6860698, r6860684, r6860697, MPFR_RNDN);
        mpfr_mul(r6860699, r6860696, r6860698, MPFR_RNDN);
        mpfr_mul(r6860700, r6860685, r6860699, MPFR_RNDN);
        mpfr_add(r6860701, r6860694, r6860700, MPFR_RNDN);
        mpfr_add(r6860702, r6860692, r6860701, MPFR_RNDN);
        return mpfr_get_d(r6860702, MPFR_RNDN);
}

static mpfr_t r6860703, r6860704, r6860705, r6860706, r6860707, r6860708, r6860709, r6860710, r6860711, r6860712, r6860713, r6860714, r6860715, r6860716, r6860717, r6860718, r6860719, r6860720, r6860721;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6860703);
        mpfr_init(r6860704);
        mpfr_init_set_str(r6860705, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6860706);
        mpfr_init_set_str(r6860707, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6860708);
        mpfr_init(r6860709);
        mpfr_init(r6860710);
        mpfr_init(r6860711);
        mpfr_init_set_str(r6860712, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6860713);
        mpfr_init_set_str(r6860714, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6860715);
        mpfr_init_set_str(r6860716, "4", 10, MPFR_RNDN);
        mpfr_init(r6860717);
        mpfr_init(r6860718);
        mpfr_init(r6860719);
        mpfr_init(r6860720);
        mpfr_init(r6860721);
}

double f_dm(double x) {
        mpfr_set_d(r6860703, x, MPFR_RNDN);
        mpfr_mul(r6860704, r6860703, r6860703, MPFR_RNDN);
        ;
        mpfr_mul(r6860706, r6860705, r6860703, MPFR_RNDN);
        ;
        mpfr_mul(r6860708, r6860707, r6860703, MPFR_RNDN);
        mpfr_mul(r6860709, r6860704, r6860708, MPFR_RNDN);
        mpfr_add(r6860710, r6860706, r6860709, MPFR_RNDN);
        mpfr_mul(r6860711, r6860704, r6860710, MPFR_RNDN);
        ;
        mpfr_mul(r6860713, r6860712, r6860703, MPFR_RNDN);
        ;
        mpfr_mul(r6860715, r6860714, r6860703, MPFR_RNDN);
        ;
        mpfr_pow(r6860717, r6860703, r6860716, MPFR_RNDN);
        mpfr_mul(r6860718, r6860715, r6860717, MPFR_RNDN);
        mpfr_mul(r6860719, r6860704, r6860718, MPFR_RNDN);
        mpfr_add(r6860720, r6860713, r6860719, MPFR_RNDN);
        mpfr_add(r6860721, r6860711, r6860720, MPFR_RNDN);
        return mpfr_get_d(r6860721, MPFR_RNDN);
}

