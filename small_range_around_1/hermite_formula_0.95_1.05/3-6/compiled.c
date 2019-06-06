#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r63170583 = -120.0;
        float r63170584 = 720.0;
        float r63170585 = x;
        float r63170586 = r63170585 * r63170585;
        float r63170587 = r63170584 * r63170586;
        float r63170588 = r63170583 + r63170587;
        float r63170589 = -480.0;
        float r63170590 = r63170586 * r63170585;
        float r63170591 = r63170590 * r63170585;
        float r63170592 = r63170589 * r63170591;
        float r63170593 = r63170588 + r63170592;
        float r63170594 = 64.0;
        float r63170595 = r63170591 * r63170585;
        float r63170596 = r63170595 * r63170585;
        float r63170597 = r63170594 * r63170596;
        float r63170598 = r63170593 + r63170597;
        return r63170598;
}

double f_id(double x) {
        double r63170599 = -120.0;
        double r63170600 = 720.0;
        double r63170601 = x;
        double r63170602 = r63170601 * r63170601;
        double r63170603 = r63170600 * r63170602;
        double r63170604 = r63170599 + r63170603;
        double r63170605 = -480.0;
        double r63170606 = r63170602 * r63170601;
        double r63170607 = r63170606 * r63170601;
        double r63170608 = r63170605 * r63170607;
        double r63170609 = r63170604 + r63170608;
        double r63170610 = 64.0;
        double r63170611 = r63170607 * r63170601;
        double r63170612 = r63170611 * r63170601;
        double r63170613 = r63170610 * r63170612;
        double r63170614 = r63170609 + r63170613;
        return r63170614;
}


double f_of(float x) {
        float r63170615 = -120.0;
        float r63170616 = 720.0;
        float r63170617 = x;
        float r63170618 = r63170617 * r63170617;
        float r63170619 = r63170616 * r63170618;
        float r63170620 = r63170615 + r63170619;
        float r63170621 = -480.0;
        float r63170622 = r63170618 * r63170617;
        float r63170623 = r63170621 * r63170622;
        float r63170624 = r63170623 * r63170617;
        float r63170625 = r63170620 + r63170624;
        float r63170626 = 64.0;
        float r63170627 = 3;
        float r63170628 = pow(r63170617, r63170627);
        float r63170629 = 1;
        float r63170630 = r63170629 + r63170627;
        float r63170631 = pow(r63170628, r63170630);
        float r63170632 = cbrt(r63170631);
        float r63170633 = r63170632 * r63170617;
        float r63170634 = r63170633 * r63170617;
        float r63170635 = r63170626 * r63170634;
        float r63170636 = r63170625 + r63170635;
        return r63170636;
}

double f_od(double x) {
        double r63170637 = -120.0;
        double r63170638 = 720.0;
        double r63170639 = x;
        double r63170640 = r63170639 * r63170639;
        double r63170641 = r63170638 * r63170640;
        double r63170642 = r63170637 + r63170641;
        double r63170643 = -480.0;
        double r63170644 = r63170640 * r63170639;
        double r63170645 = r63170643 * r63170644;
        double r63170646 = r63170645 * r63170639;
        double r63170647 = r63170642 + r63170646;
        double r63170648 = 64.0;
        double r63170649 = 3;
        double r63170650 = pow(r63170639, r63170649);
        double r63170651 = 1;
        double r63170652 = r63170651 + r63170649;
        double r63170653 = pow(r63170650, r63170652);
        double r63170654 = cbrt(r63170653);
        double r63170655 = r63170654 * r63170639;
        double r63170656 = r63170655 * r63170639;
        double r63170657 = r63170648 * r63170656;
        double r63170658 = r63170647 + r63170657;
        return r63170658;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63170659, r63170660, r63170661, r63170662, r63170663, r63170664, r63170665, r63170666, r63170667, r63170668, r63170669, r63170670, r63170671, r63170672, r63170673, r63170674;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170659, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170660, "720.0", 10, MPFR_RNDN);
        mpfr_init(r63170661);
        mpfr_init(r63170662);
        mpfr_init(r63170663);
        mpfr_init(r63170664);
        mpfr_init_set_str(r63170665, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r63170666);
        mpfr_init(r63170667);
        mpfr_init(r63170668);
        mpfr_init(r63170669);
        mpfr_init_set_str(r63170670, "64.0", 10, MPFR_RNDN);
        mpfr_init(r63170671);
        mpfr_init(r63170672);
        mpfr_init(r63170673);
        mpfr_init(r63170674);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r63170661, x, MPFR_RNDN);
        mpfr_mul(r63170662, r63170661, r63170661, MPFR_RNDN);
        mpfr_mul(r63170663, r63170660, r63170662, MPFR_RNDN);
        mpfr_add(r63170664, r63170659, r63170663, MPFR_RNDN);
        ;
        mpfr_mul(r63170666, r63170662, r63170661, MPFR_RNDN);
        mpfr_mul(r63170667, r63170666, r63170661, MPFR_RNDN);
        mpfr_mul(r63170668, r63170665, r63170667, MPFR_RNDN);
        mpfr_add(r63170669, r63170664, r63170668, MPFR_RNDN);
        ;
        mpfr_mul(r63170671, r63170667, r63170661, MPFR_RNDN);
        mpfr_mul(r63170672, r63170671, r63170661, MPFR_RNDN);
        mpfr_mul(r63170673, r63170670, r63170672, MPFR_RNDN);
        mpfr_add(r63170674, r63170669, r63170673, MPFR_RNDN);
        return mpfr_get_d(r63170674, MPFR_RNDN);
}

static mpfr_t r63170675, r63170676, r63170677, r63170678, r63170679, r63170680, r63170681, r63170682, r63170683, r63170684, r63170685, r63170686, r63170687, r63170688, r63170689, r63170690, r63170691, r63170692, r63170693, r63170694, r63170695, r63170696;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170675, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170676, "720.0", 10, MPFR_RNDN);
        mpfr_init(r63170677);
        mpfr_init(r63170678);
        mpfr_init(r63170679);
        mpfr_init(r63170680);
        mpfr_init_set_str(r63170681, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r63170682);
        mpfr_init(r63170683);
        mpfr_init(r63170684);
        mpfr_init(r63170685);
        mpfr_init_set_str(r63170686, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170687, "3", 10, MPFR_RNDN);
        mpfr_init(r63170688);
        mpfr_init_set_str(r63170689, "1", 10, MPFR_RNDN);
        mpfr_init(r63170690);
        mpfr_init(r63170691);
        mpfr_init(r63170692);
        mpfr_init(r63170693);
        mpfr_init(r63170694);
        mpfr_init(r63170695);
        mpfr_init(r63170696);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r63170677, x, MPFR_RNDN);
        mpfr_mul(r63170678, r63170677, r63170677, MPFR_RNDN);
        mpfr_mul(r63170679, r63170676, r63170678, MPFR_RNDN);
        mpfr_add(r63170680, r63170675, r63170679, MPFR_RNDN);
        ;
        mpfr_mul(r63170682, r63170678, r63170677, MPFR_RNDN);
        mpfr_mul(r63170683, r63170681, r63170682, MPFR_RNDN);
        mpfr_mul(r63170684, r63170683, r63170677, MPFR_RNDN);
        mpfr_add(r63170685, r63170680, r63170684, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r63170688, r63170677, r63170687, MPFR_RNDN);
        ;
        mpfr_add(r63170690, r63170689, r63170687, MPFR_RNDN);
        mpfr_pow(r63170691, r63170688, r63170690, MPFR_RNDN);
        mpfr_cbrt(r63170692, r63170691, MPFR_RNDN);
        mpfr_mul(r63170693, r63170692, r63170677, MPFR_RNDN);
        mpfr_mul(r63170694, r63170693, r63170677, MPFR_RNDN);
        mpfr_mul(r63170695, r63170686, r63170694, MPFR_RNDN);
        mpfr_add(r63170696, r63170685, r63170695, MPFR_RNDN);
        return mpfr_get_d(r63170696, MPFR_RNDN);
}

static mpfr_t r63170697, r63170698, r63170699, r63170700, r63170701, r63170702, r63170703, r63170704, r63170705, r63170706, r63170707, r63170708, r63170709, r63170710, r63170711, r63170712, r63170713, r63170714, r63170715, r63170716, r63170717, r63170718;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170697, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170698, "720.0", 10, MPFR_RNDN);
        mpfr_init(r63170699);
        mpfr_init(r63170700);
        mpfr_init(r63170701);
        mpfr_init(r63170702);
        mpfr_init_set_str(r63170703, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r63170704);
        mpfr_init(r63170705);
        mpfr_init(r63170706);
        mpfr_init(r63170707);
        mpfr_init_set_str(r63170708, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170709, "3", 10, MPFR_RNDN);
        mpfr_init(r63170710);
        mpfr_init_set_str(r63170711, "1", 10, MPFR_RNDN);
        mpfr_init(r63170712);
        mpfr_init(r63170713);
        mpfr_init(r63170714);
        mpfr_init(r63170715);
        mpfr_init(r63170716);
        mpfr_init(r63170717);
        mpfr_init(r63170718);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r63170699, x, MPFR_RNDN);
        mpfr_mul(r63170700, r63170699, r63170699, MPFR_RNDN);
        mpfr_mul(r63170701, r63170698, r63170700, MPFR_RNDN);
        mpfr_add(r63170702, r63170697, r63170701, MPFR_RNDN);
        ;
        mpfr_mul(r63170704, r63170700, r63170699, MPFR_RNDN);
        mpfr_mul(r63170705, r63170703, r63170704, MPFR_RNDN);
        mpfr_mul(r63170706, r63170705, r63170699, MPFR_RNDN);
        mpfr_add(r63170707, r63170702, r63170706, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r63170710, r63170699, r63170709, MPFR_RNDN);
        ;
        mpfr_add(r63170712, r63170711, r63170709, MPFR_RNDN);
        mpfr_pow(r63170713, r63170710, r63170712, MPFR_RNDN);
        mpfr_cbrt(r63170714, r63170713, MPFR_RNDN);
        mpfr_mul(r63170715, r63170714, r63170699, MPFR_RNDN);
        mpfr_mul(r63170716, r63170715, r63170699, MPFR_RNDN);
        mpfr_mul(r63170717, r63170708, r63170716, MPFR_RNDN);
        mpfr_add(r63170718, r63170707, r63170717, MPFR_RNDN);
        return mpfr_get_d(r63170718, MPFR_RNDN);
}

