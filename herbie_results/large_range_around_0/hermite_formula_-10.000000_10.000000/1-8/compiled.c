#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r9828579 = 1680.0;
        float r9828580 = -13440.0;
        float r9828581 = x;
        float r9828582 = r9828581 * r9828581;
        float r9828583 = r9828580 * r9828582;
        float r9828584 = r9828579 + r9828583;
        float r9828585 = 13440.0;
        float r9828586 = r9828582 * r9828581;
        float r9828587 = r9828586 * r9828581;
        float r9828588 = r9828585 * r9828587;
        float r9828589 = r9828584 + r9828588;
        float r9828590 = -3584.0;
        float r9828591 = r9828587 * r9828581;
        float r9828592 = r9828591 * r9828581;
        float r9828593 = r9828590 * r9828592;
        float r9828594 = r9828589 + r9828593;
        float r9828595 = 256.0;
        float r9828596 = r9828592 * r9828581;
        float r9828597 = r9828596 * r9828581;
        float r9828598 = r9828595 * r9828597;
        float r9828599 = r9828594 + r9828598;
        return r9828599;
}

double f_id(double x) {
        double r9828600 = 1680.0;
        double r9828601 = -13440.0;
        double r9828602 = x;
        double r9828603 = r9828602 * r9828602;
        double r9828604 = r9828601 * r9828603;
        double r9828605 = r9828600 + r9828604;
        double r9828606 = 13440.0;
        double r9828607 = r9828603 * r9828602;
        double r9828608 = r9828607 * r9828602;
        double r9828609 = r9828606 * r9828608;
        double r9828610 = r9828605 + r9828609;
        double r9828611 = -3584.0;
        double r9828612 = r9828608 * r9828602;
        double r9828613 = r9828612 * r9828602;
        double r9828614 = r9828611 * r9828613;
        double r9828615 = r9828610 + r9828614;
        double r9828616 = 256.0;
        double r9828617 = r9828613 * r9828602;
        double r9828618 = r9828617 * r9828602;
        double r9828619 = r9828616 * r9828618;
        double r9828620 = r9828615 + r9828619;
        return r9828620;
}


double f_of(float x) {
        float r9828621 = x;
        float r9828622 = 13440.0;
        float r9828623 = r9828621 * r9828622;
        float r9828624 = 3;
        float r9828625 = pow(r9828621, r9828624);
        float r9828626 = r9828623 * r9828625;
        float r9828627 = cbrt(r9828626);
        float r9828628 = r9828627 * r9828627;
        float r9828629 = r9828628 * r9828627;
        float r9828630 = -13440.0;
        float r9828631 = r9828621 * r9828630;
        float r9828632 = r9828621 * r9828631;
        float r9828633 = r9828629 + r9828632;
        float r9828634 = 1680.0;
        float r9828635 = r9828633 + r9828634;
        float r9828636 = r9828625 * r9828625;
        float r9828637 = -3584.0;
        float r9828638 = 256.0;
        float r9828639 = r9828638 * r9828621;
        float r9828640 = r9828639 * r9828621;
        float r9828641 = r9828637 + r9828640;
        float r9828642 = r9828636 * r9828641;
        float r9828643 = r9828635 + r9828642;
        return r9828643;
}

double f_od(double x) {
        double r9828644 = x;
        double r9828645 = 13440.0;
        double r9828646 = r9828644 * r9828645;
        double r9828647 = 3;
        double r9828648 = pow(r9828644, r9828647);
        double r9828649 = r9828646 * r9828648;
        double r9828650 = cbrt(r9828649);
        double r9828651 = r9828650 * r9828650;
        double r9828652 = r9828651 * r9828650;
        double r9828653 = -13440.0;
        double r9828654 = r9828644 * r9828653;
        double r9828655 = r9828644 * r9828654;
        double r9828656 = r9828652 + r9828655;
        double r9828657 = 1680.0;
        double r9828658 = r9828656 + r9828657;
        double r9828659 = r9828648 * r9828648;
        double r9828660 = -3584.0;
        double r9828661 = 256.0;
        double r9828662 = r9828661 * r9828644;
        double r9828663 = r9828662 * r9828644;
        double r9828664 = r9828660 + r9828663;
        double r9828665 = r9828659 * r9828664;
        double r9828666 = r9828658 + r9828665;
        return r9828666;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9828667, r9828668, r9828669, r9828670, r9828671, r9828672, r9828673, r9828674, r9828675, r9828676, r9828677, r9828678, r9828679, r9828680, r9828681, r9828682, r9828683, r9828684, r9828685, r9828686, r9828687;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9828667, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9828668, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9828669);
        mpfr_init(r9828670);
        mpfr_init(r9828671);
        mpfr_init(r9828672);
        mpfr_init_set_str(r9828673, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9828674);
        mpfr_init(r9828675);
        mpfr_init(r9828676);
        mpfr_init(r9828677);
        mpfr_init_set_str(r9828678, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r9828679);
        mpfr_init(r9828680);
        mpfr_init(r9828681);
        mpfr_init(r9828682);
        mpfr_init_set_str(r9828683, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9828684);
        mpfr_init(r9828685);
        mpfr_init(r9828686);
        mpfr_init(r9828687);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9828669, x, MPFR_RNDN);
        mpfr_mul(r9828670, r9828669, r9828669, MPFR_RNDN);
        mpfr_mul(r9828671, r9828668, r9828670, MPFR_RNDN);
        mpfr_add(r9828672, r9828667, r9828671, MPFR_RNDN);
        ;
        mpfr_mul(r9828674, r9828670, r9828669, MPFR_RNDN);
        mpfr_mul(r9828675, r9828674, r9828669, MPFR_RNDN);
        mpfr_mul(r9828676, r9828673, r9828675, MPFR_RNDN);
        mpfr_add(r9828677, r9828672, r9828676, MPFR_RNDN);
        ;
        mpfr_mul(r9828679, r9828675, r9828669, MPFR_RNDN);
        mpfr_mul(r9828680, r9828679, r9828669, MPFR_RNDN);
        mpfr_mul(r9828681, r9828678, r9828680, MPFR_RNDN);
        mpfr_add(r9828682, r9828677, r9828681, MPFR_RNDN);
        ;
        mpfr_mul(r9828684, r9828680, r9828669, MPFR_RNDN);
        mpfr_mul(r9828685, r9828684, r9828669, MPFR_RNDN);
        mpfr_mul(r9828686, r9828683, r9828685, MPFR_RNDN);
        mpfr_add(r9828687, r9828682, r9828686, MPFR_RNDN);
        return mpfr_get_d(r9828687, MPFR_RNDN);
}

static mpfr_t r9828688, r9828689, r9828690, r9828691, r9828692, r9828693, r9828694, r9828695, r9828696, r9828697, r9828698, r9828699, r9828700, r9828701, r9828702, r9828703, r9828704, r9828705, r9828706, r9828707, r9828708, r9828709, r9828710;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9828688);
        mpfr_init_set_str(r9828689, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9828690);
        mpfr_init_set_str(r9828691, "3", 10, MPFR_RNDN);
        mpfr_init(r9828692);
        mpfr_init(r9828693);
        mpfr_init(r9828694);
        mpfr_init(r9828695);
        mpfr_init(r9828696);
        mpfr_init_set_str(r9828697, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9828698);
        mpfr_init(r9828699);
        mpfr_init(r9828700);
        mpfr_init_set_str(r9828701, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r9828702);
        mpfr_init(r9828703);
        mpfr_init_set_str(r9828704, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9828705, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9828706);
        mpfr_init(r9828707);
        mpfr_init(r9828708);
        mpfr_init(r9828709);
        mpfr_init(r9828710);
}

double f_fm(double x) {
        mpfr_set_d(r9828688, x, MPFR_RNDN);
        ;
        mpfr_mul(r9828690, r9828688, r9828689, MPFR_RNDN);
        ;
        mpfr_pow(r9828692, r9828688, r9828691, MPFR_RNDN);
        mpfr_mul(r9828693, r9828690, r9828692, MPFR_RNDN);
        mpfr_cbrt(r9828694, r9828693, MPFR_RNDN);
        mpfr_mul(r9828695, r9828694, r9828694, MPFR_RNDN);
        mpfr_mul(r9828696, r9828695, r9828694, MPFR_RNDN);
        ;
        mpfr_mul(r9828698, r9828688, r9828697, MPFR_RNDN);
        mpfr_mul(r9828699, r9828688, r9828698, MPFR_RNDN);
        mpfr_add(r9828700, r9828696, r9828699, MPFR_RNDN);
        ;
        mpfr_add(r9828702, r9828700, r9828701, MPFR_RNDN);
        mpfr_mul(r9828703, r9828692, r9828692, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9828706, r9828705, r9828688, MPFR_RNDN);
        mpfr_mul(r9828707, r9828706, r9828688, MPFR_RNDN);
        mpfr_add(r9828708, r9828704, r9828707, MPFR_RNDN);
        mpfr_mul(r9828709, r9828703, r9828708, MPFR_RNDN);
        mpfr_add(r9828710, r9828702, r9828709, MPFR_RNDN);
        return mpfr_get_d(r9828710, MPFR_RNDN);
}

static mpfr_t r9828711, r9828712, r9828713, r9828714, r9828715, r9828716, r9828717, r9828718, r9828719, r9828720, r9828721, r9828722, r9828723, r9828724, r9828725, r9828726, r9828727, r9828728, r9828729, r9828730, r9828731, r9828732, r9828733;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9828711);
        mpfr_init_set_str(r9828712, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9828713);
        mpfr_init_set_str(r9828714, "3", 10, MPFR_RNDN);
        mpfr_init(r9828715);
        mpfr_init(r9828716);
        mpfr_init(r9828717);
        mpfr_init(r9828718);
        mpfr_init(r9828719);
        mpfr_init_set_str(r9828720, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9828721);
        mpfr_init(r9828722);
        mpfr_init(r9828723);
        mpfr_init_set_str(r9828724, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r9828725);
        mpfr_init(r9828726);
        mpfr_init_set_str(r9828727, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9828728, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9828729);
        mpfr_init(r9828730);
        mpfr_init(r9828731);
        mpfr_init(r9828732);
        mpfr_init(r9828733);
}

double f_dm(double x) {
        mpfr_set_d(r9828711, x, MPFR_RNDN);
        ;
        mpfr_mul(r9828713, r9828711, r9828712, MPFR_RNDN);
        ;
        mpfr_pow(r9828715, r9828711, r9828714, MPFR_RNDN);
        mpfr_mul(r9828716, r9828713, r9828715, MPFR_RNDN);
        mpfr_cbrt(r9828717, r9828716, MPFR_RNDN);
        mpfr_mul(r9828718, r9828717, r9828717, MPFR_RNDN);
        mpfr_mul(r9828719, r9828718, r9828717, MPFR_RNDN);
        ;
        mpfr_mul(r9828721, r9828711, r9828720, MPFR_RNDN);
        mpfr_mul(r9828722, r9828711, r9828721, MPFR_RNDN);
        mpfr_add(r9828723, r9828719, r9828722, MPFR_RNDN);
        ;
        mpfr_add(r9828725, r9828723, r9828724, MPFR_RNDN);
        mpfr_mul(r9828726, r9828715, r9828715, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9828729, r9828728, r9828711, MPFR_RNDN);
        mpfr_mul(r9828730, r9828729, r9828711, MPFR_RNDN);
        mpfr_add(r9828731, r9828727, r9828730, MPFR_RNDN);
        mpfr_mul(r9828732, r9828726, r9828731, MPFR_RNDN);
        mpfr_add(r9828733, r9828725, r9828732, MPFR_RNDN);
        return mpfr_get_d(r9828733, MPFR_RNDN);
}

