#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r83942561 = 1.0;
        float r83942562 = -8.0;
        float r83942563 = x;
        float r83942564 = r83942562 * r83942563;
        float r83942565 = r83942561 + r83942564;
        float r83942566 = 14.0;
        float r83942567 = r83942563 * r83942563;
        float r83942568 = r83942566 * r83942567;
        float r83942569 = r83942565 + r83942568;
        float r83942570 = -9.333333;
        float r83942571 = r83942567 * r83942563;
        float r83942572 = r83942570 * r83942571;
        float r83942573 = r83942569 + r83942572;
        float r83942574 = 2.916667;
        float r83942575 = r83942571 * r83942563;
        float r83942576 = r83942574 * r83942575;
        float r83942577 = r83942573 + r83942576;
        float r83942578 = -0.466667;
        float r83942579 = r83942575 * r83942563;
        float r83942580 = r83942578 * r83942579;
        float r83942581 = r83942577 + r83942580;
        float r83942582 = 0.038889;
        float r83942583 = r83942579 * r83942563;
        float r83942584 = r83942582 * r83942583;
        float r83942585 = r83942581 + r83942584;
        float r83942586 = -0.001587;
        float r83942587 = r83942583 * r83942563;
        float r83942588 = r83942586 * r83942587;
        float r83942589 = r83942585 + r83942588;
        float r83942590 = 2.5e-05;
        float r83942591 = r83942587 * r83942563;
        float r83942592 = r83942590 * r83942591;
        float r83942593 = r83942589 + r83942592;
        return r83942593;
}

double f_id(double x) {
        double r83942594 = 1.0;
        double r83942595 = -8.0;
        double r83942596 = x;
        double r83942597 = r83942595 * r83942596;
        double r83942598 = r83942594 + r83942597;
        double r83942599 = 14.0;
        double r83942600 = r83942596 * r83942596;
        double r83942601 = r83942599 * r83942600;
        double r83942602 = r83942598 + r83942601;
        double r83942603 = -9.333333;
        double r83942604 = r83942600 * r83942596;
        double r83942605 = r83942603 * r83942604;
        double r83942606 = r83942602 + r83942605;
        double r83942607 = 2.916667;
        double r83942608 = r83942604 * r83942596;
        double r83942609 = r83942607 * r83942608;
        double r83942610 = r83942606 + r83942609;
        double r83942611 = -0.466667;
        double r83942612 = r83942608 * r83942596;
        double r83942613 = r83942611 * r83942612;
        double r83942614 = r83942610 + r83942613;
        double r83942615 = 0.038889;
        double r83942616 = r83942612 * r83942596;
        double r83942617 = r83942615 * r83942616;
        double r83942618 = r83942614 + r83942617;
        double r83942619 = -0.001587;
        double r83942620 = r83942616 * r83942596;
        double r83942621 = r83942619 * r83942620;
        double r83942622 = r83942618 + r83942621;
        double r83942623 = 2.5e-05;
        double r83942624 = r83942620 * r83942596;
        double r83942625 = r83942623 * r83942624;
        double r83942626 = r83942622 + r83942625;
        return r83942626;
}


double f_of(float x) {
        float r83942627 = x;
        float r83942628 = r83942627 * r83942627;
        float r83942629 = 3;
        float r83942630 = pow(r83942628, r83942629);
        float r83942631 = 2.5e-05;
        float r83942632 = r83942631 * r83942628;
        float r83942633 = r83942630 * r83942632;
        float r83942634 = r83942628 * r83942628;
        float r83942635 = r83942634 * r83942628;
        float r83942636 = -0.001587;
        float r83942637 = r83942636 * r83942627;
        float r83942638 = 0.038889;
        float r83942639 = r83942637 + r83942638;
        float r83942640 = r83942635 * r83942639;
        float r83942641 = r83942633 + r83942640;
        float r83942642 = exp(r83942627);
        float r83942643 = pow(r83942627, r83942629);
        float r83942644 = pow(r83942642, r83942643);
        float r83942645 = -0.466667;
        float r83942646 = r83942627 * r83942645;
        float r83942647 = 2.916667;
        float r83942648 = r83942646 + r83942647;
        float r83942649 = sqrt(r83942648);
        float r83942650 = pow(r83942644, r83942649);
        float r83942651 = pow(r83942650, r83942649);
        float r83942652 = 1.0;
        float r83942653 = -8.0;
        float r83942654 = r83942653 * r83942627;
        float r83942655 = r83942652 + r83942654;
        float r83942656 = exp(r83942655);
        float r83942657 = exp(r83942628);
        float r83942658 = -9.333333;
        float r83942659 = r83942627 * r83942658;
        float r83942660 = 14.0;
        float r83942661 = r83942659 + r83942660;
        float r83942662 = pow(r83942657, r83942661);
        float r83942663 = r83942656 * r83942662;
        float r83942664 = r83942651 * r83942663;
        float r83942665 = log(r83942664);
        float r83942666 = r83942641 + r83942665;
        return r83942666;
}

double f_od(double x) {
        double r83942667 = x;
        double r83942668 = r83942667 * r83942667;
        double r83942669 = 3;
        double r83942670 = pow(r83942668, r83942669);
        double r83942671 = 2.5e-05;
        double r83942672 = r83942671 * r83942668;
        double r83942673 = r83942670 * r83942672;
        double r83942674 = r83942668 * r83942668;
        double r83942675 = r83942674 * r83942668;
        double r83942676 = -0.001587;
        double r83942677 = r83942676 * r83942667;
        double r83942678 = 0.038889;
        double r83942679 = r83942677 + r83942678;
        double r83942680 = r83942675 * r83942679;
        double r83942681 = r83942673 + r83942680;
        double r83942682 = exp(r83942667);
        double r83942683 = pow(r83942667, r83942669);
        double r83942684 = pow(r83942682, r83942683);
        double r83942685 = -0.466667;
        double r83942686 = r83942667 * r83942685;
        double r83942687 = 2.916667;
        double r83942688 = r83942686 + r83942687;
        double r83942689 = sqrt(r83942688);
        double r83942690 = pow(r83942684, r83942689);
        double r83942691 = pow(r83942690, r83942689);
        double r83942692 = 1.0;
        double r83942693 = -8.0;
        double r83942694 = r83942693 * r83942667;
        double r83942695 = r83942692 + r83942694;
        double r83942696 = exp(r83942695);
        double r83942697 = exp(r83942668);
        double r83942698 = -9.333333;
        double r83942699 = r83942667 * r83942698;
        double r83942700 = 14.0;
        double r83942701 = r83942699 + r83942700;
        double r83942702 = pow(r83942697, r83942701);
        double r83942703 = r83942696 * r83942702;
        double r83942704 = r83942691 * r83942703;
        double r83942705 = log(r83942704);
        double r83942706 = r83942681 + r83942705;
        return r83942706;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83942707, r83942708, r83942709, r83942710, r83942711, r83942712, r83942713, r83942714, r83942715, r83942716, r83942717, r83942718, r83942719, r83942720, r83942721, r83942722, r83942723, r83942724, r83942725, r83942726, r83942727, r83942728, r83942729, r83942730, r83942731, r83942732, r83942733, r83942734, r83942735, r83942736, r83942737, r83942738, r83942739;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83942707, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83942708, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r83942709);
        mpfr_init(r83942710);
        mpfr_init(r83942711);
        mpfr_init_set_str(r83942712, "14.0", 10, MPFR_RNDN);
        mpfr_init(r83942713);
        mpfr_init(r83942714);
        mpfr_init(r83942715);
        mpfr_init_set_str(r83942716, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r83942717);
        mpfr_init(r83942718);
        mpfr_init(r83942719);
        mpfr_init_set_str(r83942720, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r83942721);
        mpfr_init(r83942722);
        mpfr_init(r83942723);
        mpfr_init_set_str(r83942724, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r83942725);
        mpfr_init(r83942726);
        mpfr_init(r83942727);
        mpfr_init_set_str(r83942728, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r83942729);
        mpfr_init(r83942730);
        mpfr_init(r83942731);
        mpfr_init_set_str(r83942732, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r83942733);
        mpfr_init(r83942734);
        mpfr_init(r83942735);
        mpfr_init_set_str(r83942736, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r83942737);
        mpfr_init(r83942738);
        mpfr_init(r83942739);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83942709, x, MPFR_RNDN);
        mpfr_mul(r83942710, r83942708, r83942709, MPFR_RNDN);
        mpfr_add(r83942711, r83942707, r83942710, MPFR_RNDN);
        ;
        mpfr_mul(r83942713, r83942709, r83942709, MPFR_RNDN);
        mpfr_mul(r83942714, r83942712, r83942713, MPFR_RNDN);
        mpfr_add(r83942715, r83942711, r83942714, MPFR_RNDN);
        ;
        mpfr_mul(r83942717, r83942713, r83942709, MPFR_RNDN);
        mpfr_mul(r83942718, r83942716, r83942717, MPFR_RNDN);
        mpfr_add(r83942719, r83942715, r83942718, MPFR_RNDN);
        ;
        mpfr_mul(r83942721, r83942717, r83942709, MPFR_RNDN);
        mpfr_mul(r83942722, r83942720, r83942721, MPFR_RNDN);
        mpfr_add(r83942723, r83942719, r83942722, MPFR_RNDN);
        ;
        mpfr_mul(r83942725, r83942721, r83942709, MPFR_RNDN);
        mpfr_mul(r83942726, r83942724, r83942725, MPFR_RNDN);
        mpfr_add(r83942727, r83942723, r83942726, MPFR_RNDN);
        ;
        mpfr_mul(r83942729, r83942725, r83942709, MPFR_RNDN);
        mpfr_mul(r83942730, r83942728, r83942729, MPFR_RNDN);
        mpfr_add(r83942731, r83942727, r83942730, MPFR_RNDN);
        ;
        mpfr_mul(r83942733, r83942729, r83942709, MPFR_RNDN);
        mpfr_mul(r83942734, r83942732, r83942733, MPFR_RNDN);
        mpfr_add(r83942735, r83942731, r83942734, MPFR_RNDN);
        ;
        mpfr_mul(r83942737, r83942733, r83942709, MPFR_RNDN);
        mpfr_mul(r83942738, r83942736, r83942737, MPFR_RNDN);
        mpfr_add(r83942739, r83942735, r83942738, MPFR_RNDN);
        return mpfr_get_d(r83942739, MPFR_RNDN);
}

static mpfr_t r83942740, r83942741, r83942742, r83942743, r83942744, r83942745, r83942746, r83942747, r83942748, r83942749, r83942750, r83942751, r83942752, r83942753, r83942754, r83942755, r83942756, r83942757, r83942758, r83942759, r83942760, r83942761, r83942762, r83942763, r83942764, r83942765, r83942766, r83942767, r83942768, r83942769, r83942770, r83942771, r83942772, r83942773, r83942774, r83942775, r83942776, r83942777, r83942778, r83942779;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83942740);
        mpfr_init(r83942741);
        mpfr_init_set_str(r83942742, "3", 10, MPFR_RNDN);
        mpfr_init(r83942743);
        mpfr_init_set_str(r83942744, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r83942745);
        mpfr_init(r83942746);
        mpfr_init(r83942747);
        mpfr_init(r83942748);
        mpfr_init_set_str(r83942749, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r83942750);
        mpfr_init_set_str(r83942751, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r83942752);
        mpfr_init(r83942753);
        mpfr_init(r83942754);
        mpfr_init(r83942755);
        mpfr_init(r83942756);
        mpfr_init(r83942757);
        mpfr_init_set_str(r83942758, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r83942759);
        mpfr_init_set_str(r83942760, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r83942761);
        mpfr_init(r83942762);
        mpfr_init(r83942763);
        mpfr_init(r83942764);
        mpfr_init_set_str(r83942765, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83942766, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r83942767);
        mpfr_init(r83942768);
        mpfr_init(r83942769);
        mpfr_init(r83942770);
        mpfr_init_set_str(r83942771, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r83942772);
        mpfr_init_set_str(r83942773, "14.0", 10, MPFR_RNDN);
        mpfr_init(r83942774);
        mpfr_init(r83942775);
        mpfr_init(r83942776);
        mpfr_init(r83942777);
        mpfr_init(r83942778);
        mpfr_init(r83942779);
}

double f_fm(double x) {
        mpfr_set_d(r83942740, x, MPFR_RNDN);
        mpfr_mul(r83942741, r83942740, r83942740, MPFR_RNDN);
        ;
        mpfr_pow(r83942743, r83942741, r83942742, MPFR_RNDN);
        ;
        mpfr_mul(r83942745, r83942744, r83942741, MPFR_RNDN);
        mpfr_mul(r83942746, r83942743, r83942745, MPFR_RNDN);
        mpfr_mul(r83942747, r83942741, r83942741, MPFR_RNDN);
        mpfr_mul(r83942748, r83942747, r83942741, MPFR_RNDN);
        ;
        mpfr_mul(r83942750, r83942749, r83942740, MPFR_RNDN);
        ;
        mpfr_add(r83942752, r83942750, r83942751, MPFR_RNDN);
        mpfr_mul(r83942753, r83942748, r83942752, MPFR_RNDN);
        mpfr_add(r83942754, r83942746, r83942753, MPFR_RNDN);
        mpfr_exp(r83942755, r83942740, MPFR_RNDN);
        mpfr_pow(r83942756, r83942740, r83942742, MPFR_RNDN);
        mpfr_pow(r83942757, r83942755, r83942756, MPFR_RNDN);
        ;
        mpfr_mul(r83942759, r83942740, r83942758, MPFR_RNDN);
        ;
        mpfr_add(r83942761, r83942759, r83942760, MPFR_RNDN);
        mpfr_sqrt(r83942762, r83942761, MPFR_RNDN);
        mpfr_pow(r83942763, r83942757, r83942762, MPFR_RNDN);
        mpfr_pow(r83942764, r83942763, r83942762, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83942767, r83942766, r83942740, MPFR_RNDN);
        mpfr_add(r83942768, r83942765, r83942767, MPFR_RNDN);
        mpfr_exp(r83942769, r83942768, MPFR_RNDN);
        mpfr_exp(r83942770, r83942741, MPFR_RNDN);
        ;
        mpfr_mul(r83942772, r83942740, r83942771, MPFR_RNDN);
        ;
        mpfr_add(r83942774, r83942772, r83942773, MPFR_RNDN);
        mpfr_pow(r83942775, r83942770, r83942774, MPFR_RNDN);
        mpfr_mul(r83942776, r83942769, r83942775, MPFR_RNDN);
        mpfr_mul(r83942777, r83942764, r83942776, MPFR_RNDN);
        mpfr_log(r83942778, r83942777, MPFR_RNDN);
        mpfr_add(r83942779, r83942754, r83942778, MPFR_RNDN);
        return mpfr_get_d(r83942779, MPFR_RNDN);
}

static mpfr_t r83942780, r83942781, r83942782, r83942783, r83942784, r83942785, r83942786, r83942787, r83942788, r83942789, r83942790, r83942791, r83942792, r83942793, r83942794, r83942795, r83942796, r83942797, r83942798, r83942799, r83942800, r83942801, r83942802, r83942803, r83942804, r83942805, r83942806, r83942807, r83942808, r83942809, r83942810, r83942811, r83942812, r83942813, r83942814, r83942815, r83942816, r83942817, r83942818, r83942819;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83942780);
        mpfr_init(r83942781);
        mpfr_init_set_str(r83942782, "3", 10, MPFR_RNDN);
        mpfr_init(r83942783);
        mpfr_init_set_str(r83942784, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r83942785);
        mpfr_init(r83942786);
        mpfr_init(r83942787);
        mpfr_init(r83942788);
        mpfr_init_set_str(r83942789, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r83942790);
        mpfr_init_set_str(r83942791, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r83942792);
        mpfr_init(r83942793);
        mpfr_init(r83942794);
        mpfr_init(r83942795);
        mpfr_init(r83942796);
        mpfr_init(r83942797);
        mpfr_init_set_str(r83942798, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r83942799);
        mpfr_init_set_str(r83942800, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r83942801);
        mpfr_init(r83942802);
        mpfr_init(r83942803);
        mpfr_init(r83942804);
        mpfr_init_set_str(r83942805, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83942806, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r83942807);
        mpfr_init(r83942808);
        mpfr_init(r83942809);
        mpfr_init(r83942810);
        mpfr_init_set_str(r83942811, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r83942812);
        mpfr_init_set_str(r83942813, "14.0", 10, MPFR_RNDN);
        mpfr_init(r83942814);
        mpfr_init(r83942815);
        mpfr_init(r83942816);
        mpfr_init(r83942817);
        mpfr_init(r83942818);
        mpfr_init(r83942819);
}

double f_dm(double x) {
        mpfr_set_d(r83942780, x, MPFR_RNDN);
        mpfr_mul(r83942781, r83942780, r83942780, MPFR_RNDN);
        ;
        mpfr_pow(r83942783, r83942781, r83942782, MPFR_RNDN);
        ;
        mpfr_mul(r83942785, r83942784, r83942781, MPFR_RNDN);
        mpfr_mul(r83942786, r83942783, r83942785, MPFR_RNDN);
        mpfr_mul(r83942787, r83942781, r83942781, MPFR_RNDN);
        mpfr_mul(r83942788, r83942787, r83942781, MPFR_RNDN);
        ;
        mpfr_mul(r83942790, r83942789, r83942780, MPFR_RNDN);
        ;
        mpfr_add(r83942792, r83942790, r83942791, MPFR_RNDN);
        mpfr_mul(r83942793, r83942788, r83942792, MPFR_RNDN);
        mpfr_add(r83942794, r83942786, r83942793, MPFR_RNDN);
        mpfr_exp(r83942795, r83942780, MPFR_RNDN);
        mpfr_pow(r83942796, r83942780, r83942782, MPFR_RNDN);
        mpfr_pow(r83942797, r83942795, r83942796, MPFR_RNDN);
        ;
        mpfr_mul(r83942799, r83942780, r83942798, MPFR_RNDN);
        ;
        mpfr_add(r83942801, r83942799, r83942800, MPFR_RNDN);
        mpfr_sqrt(r83942802, r83942801, MPFR_RNDN);
        mpfr_pow(r83942803, r83942797, r83942802, MPFR_RNDN);
        mpfr_pow(r83942804, r83942803, r83942802, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83942807, r83942806, r83942780, MPFR_RNDN);
        mpfr_add(r83942808, r83942805, r83942807, MPFR_RNDN);
        mpfr_exp(r83942809, r83942808, MPFR_RNDN);
        mpfr_exp(r83942810, r83942781, MPFR_RNDN);
        ;
        mpfr_mul(r83942812, r83942780, r83942811, MPFR_RNDN);
        ;
        mpfr_add(r83942814, r83942812, r83942813, MPFR_RNDN);
        mpfr_pow(r83942815, r83942810, r83942814, MPFR_RNDN);
        mpfr_mul(r83942816, r83942809, r83942815, MPFR_RNDN);
        mpfr_mul(r83942817, r83942804, r83942816, MPFR_RNDN);
        mpfr_log(r83942818, r83942817, MPFR_RNDN);
        mpfr_add(r83942819, r83942794, r83942818, MPFR_RNDN);
        return mpfr_get_d(r83942819, MPFR_RNDN);
}

