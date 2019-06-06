#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r4486584 = 0.196381;
        float r4486585 = -26.707764;
        float r4486586 = x;
        float r4486587 = r4486586 * r4486586;
        float r4486588 = r4486585 * r4486587;
        float r4486589 = r4486584 + r4486588;
        float r4486590 = 592.022095;
        float r4486591 = r4486587 * r4486586;
        float r4486592 = r4486591 * r4486586;
        float r4486593 = r4486590 * r4486592;
        float r4486594 = r4486589 + r4486593;
        float r4486595 = -4972.985596;
        float r4486596 = r4486592 * r4486586;
        float r4486597 = r4486596 * r4486586;
        float r4486598 = r4486595 * r4486597;
        float r4486599 = r4486594 + r4486598;
        float r4486600 = 20424.762268;
        float r4486601 = r4486597 * r4486586;
        float r4486602 = r4486601 * r4486586;
        float r4486603 = r4486600 * r4486602;
        float r4486604 = r4486599 + r4486603;
        float r4486605 = -45388.360596;
        float r4486606 = r4486602 * r4486586;
        float r4486607 = r4486606 * r4486586;
        float r4486608 = r4486605 * r4486607;
        float r4486609 = r4486604 + r4486608;
        float r4486610 = 55703.897095;
        float r4486611 = r4486607 * r4486586;
        float r4486612 = r4486611 * r4486586;
        float r4486613 = r4486610 * r4486612;
        float r4486614 = r4486609 + r4486613;
        float r4486615 = -35503.582764;
        float r4486616 = r4486612 * r4486586;
        float r4486617 = r4486616 * r4486586;
        float r4486618 = r4486615 * r4486617;
        float r4486619 = r4486614 + r4486618;
        float r4486620 = 9171.758881;
        float r4486621 = r4486617 * r4486586;
        float r4486622 = r4486621 * r4486586;
        float r4486623 = r4486620 * r4486622;
        float r4486624 = r4486619 + r4486623;
        return r4486624;
}

double f_id(double x) {
        double r4486625 = 0.196381;
        double r4486626 = -26.707764;
        double r4486627 = x;
        double r4486628 = r4486627 * r4486627;
        double r4486629 = r4486626 * r4486628;
        double r4486630 = r4486625 + r4486629;
        double r4486631 = 592.022095;
        double r4486632 = r4486628 * r4486627;
        double r4486633 = r4486632 * r4486627;
        double r4486634 = r4486631 * r4486633;
        double r4486635 = r4486630 + r4486634;
        double r4486636 = -4972.985596;
        double r4486637 = r4486633 * r4486627;
        double r4486638 = r4486637 * r4486627;
        double r4486639 = r4486636 * r4486638;
        double r4486640 = r4486635 + r4486639;
        double r4486641 = 20424.762268;
        double r4486642 = r4486638 * r4486627;
        double r4486643 = r4486642 * r4486627;
        double r4486644 = r4486641 * r4486643;
        double r4486645 = r4486640 + r4486644;
        double r4486646 = -45388.360596;
        double r4486647 = r4486643 * r4486627;
        double r4486648 = r4486647 * r4486627;
        double r4486649 = r4486646 * r4486648;
        double r4486650 = r4486645 + r4486649;
        double r4486651 = 55703.897095;
        double r4486652 = r4486648 * r4486627;
        double r4486653 = r4486652 * r4486627;
        double r4486654 = r4486651 * r4486653;
        double r4486655 = r4486650 + r4486654;
        double r4486656 = -35503.582764;
        double r4486657 = r4486653 * r4486627;
        double r4486658 = r4486657 * r4486627;
        double r4486659 = r4486656 * r4486658;
        double r4486660 = r4486655 + r4486659;
        double r4486661 = 9171.758881;
        double r4486662 = r4486658 * r4486627;
        double r4486663 = r4486662 * r4486627;
        double r4486664 = r4486661 * r4486663;
        double r4486665 = r4486660 + r4486664;
        return r4486665;
}


double f_of(float x) {
        float r4486666 = 0.196381;
        float r4486667 = -26.707764;
        float r4486668 = x;
        float r4486669 = r4486668 * r4486668;
        float r4486670 = r4486667 * r4486669;
        float r4486671 = r4486666 + r4486670;
        float r4486672 = 592.022095;
        float r4486673 = r4486669 * r4486668;
        float r4486674 = r4486673 * r4486668;
        float r4486675 = r4486672 * r4486674;
        float r4486676 = r4486671 + r4486675;
        float r4486677 = -4972.985596;
        float r4486678 = r4486674 * r4486668;
        float r4486679 = r4486678 * r4486668;
        float r4486680 = r4486677 * r4486679;
        float r4486681 = r4486676 + r4486680;
        float r4486682 = 20424.762268;
        float r4486683 = r4486679 * r4486668;
        float r4486684 = r4486683 * r4486668;
        float r4486685 = r4486682 * r4486684;
        float r4486686 = r4486681 + r4486685;
        float r4486687 = -45388.360596;
        float r4486688 = r4486684 * r4486668;
        float r4486689 = r4486688 * r4486668;
        float r4486690 = r4486687 * r4486689;
        float r4486691 = r4486686 + r4486690;
        float r4486692 = 55703.897095;
        float r4486693 = r4486689 * r4486668;
        float r4486694 = r4486693 * r4486668;
        float r4486695 = r4486692 * r4486694;
        float r4486696 = r4486691 + r4486695;
        float r4486697 = -35503.582764;
        float r4486698 = r4486694 * r4486668;
        float r4486699 = r4486698 * r4486668;
        float r4486700 = r4486697 * r4486699;
        float r4486701 = r4486696 + r4486700;
        float r4486702 = 9171.758881;
        float r4486703 = r4486699 * r4486668;
        float r4486704 = r4486703 * r4486668;
        float r4486705 = r4486702 * r4486704;
        float r4486706 = r4486701 + r4486705;
        return r4486706;
}

double f_od(double x) {
        double r4486707 = 0.196381;
        double r4486708 = -26.707764;
        double r4486709 = x;
        double r4486710 = r4486709 * r4486709;
        double r4486711 = r4486708 * r4486710;
        double r4486712 = r4486707 + r4486711;
        double r4486713 = 592.022095;
        double r4486714 = r4486710 * r4486709;
        double r4486715 = r4486714 * r4486709;
        double r4486716 = r4486713 * r4486715;
        double r4486717 = r4486712 + r4486716;
        double r4486718 = -4972.985596;
        double r4486719 = r4486715 * r4486709;
        double r4486720 = r4486719 * r4486709;
        double r4486721 = r4486718 * r4486720;
        double r4486722 = r4486717 + r4486721;
        double r4486723 = 20424.762268;
        double r4486724 = r4486720 * r4486709;
        double r4486725 = r4486724 * r4486709;
        double r4486726 = r4486723 * r4486725;
        double r4486727 = r4486722 + r4486726;
        double r4486728 = -45388.360596;
        double r4486729 = r4486725 * r4486709;
        double r4486730 = r4486729 * r4486709;
        double r4486731 = r4486728 * r4486730;
        double r4486732 = r4486727 + r4486731;
        double r4486733 = 55703.897095;
        double r4486734 = r4486730 * r4486709;
        double r4486735 = r4486734 * r4486709;
        double r4486736 = r4486733 * r4486735;
        double r4486737 = r4486732 + r4486736;
        double r4486738 = -35503.582764;
        double r4486739 = r4486735 * r4486709;
        double r4486740 = r4486739 * r4486709;
        double r4486741 = r4486738 * r4486740;
        double r4486742 = r4486737 + r4486741;
        double r4486743 = 9171.758881;
        double r4486744 = r4486740 * r4486709;
        double r4486745 = r4486744 * r4486709;
        double r4486746 = r4486743 * r4486745;
        double r4486747 = r4486742 + r4486746;
        return r4486747;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4486748, r4486749, r4486750, r4486751, r4486752, r4486753, r4486754, r4486755, r4486756, r4486757, r4486758, r4486759, r4486760, r4486761, r4486762, r4486763, r4486764, r4486765, r4486766, r4486767, r4486768, r4486769, r4486770, r4486771, r4486772, r4486773, r4486774, r4486775, r4486776, r4486777, r4486778, r4486779, r4486780, r4486781, r4486782, r4486783, r4486784, r4486785, r4486786, r4486787, r4486788;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4486748, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r4486749, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r4486750);
        mpfr_init(r4486751);
        mpfr_init(r4486752);
        mpfr_init(r4486753);
        mpfr_init_set_str(r4486754, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r4486755);
        mpfr_init(r4486756);
        mpfr_init(r4486757);
        mpfr_init(r4486758);
        mpfr_init_set_str(r4486759, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r4486760);
        mpfr_init(r4486761);
        mpfr_init(r4486762);
        mpfr_init(r4486763);
        mpfr_init_set_str(r4486764, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r4486765);
        mpfr_init(r4486766);
        mpfr_init(r4486767);
        mpfr_init(r4486768);
        mpfr_init_set_str(r4486769, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r4486770);
        mpfr_init(r4486771);
        mpfr_init(r4486772);
        mpfr_init(r4486773);
        mpfr_init_set_str(r4486774, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r4486775);
        mpfr_init(r4486776);
        mpfr_init(r4486777);
        mpfr_init(r4486778);
        mpfr_init_set_str(r4486779, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r4486780);
        mpfr_init(r4486781);
        mpfr_init(r4486782);
        mpfr_init(r4486783);
        mpfr_init_set_str(r4486784, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r4486785);
        mpfr_init(r4486786);
        mpfr_init(r4486787);
        mpfr_init(r4486788);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4486750, x, MPFR_RNDN);
        mpfr_mul(r4486751, r4486750, r4486750, MPFR_RNDN);
        mpfr_mul(r4486752, r4486749, r4486751, MPFR_RNDN);
        mpfr_add(r4486753, r4486748, r4486752, MPFR_RNDN);
        ;
        mpfr_mul(r4486755, r4486751, r4486750, MPFR_RNDN);
        mpfr_mul(r4486756, r4486755, r4486750, MPFR_RNDN);
        mpfr_mul(r4486757, r4486754, r4486756, MPFR_RNDN);
        mpfr_add(r4486758, r4486753, r4486757, MPFR_RNDN);
        ;
        mpfr_mul(r4486760, r4486756, r4486750, MPFR_RNDN);
        mpfr_mul(r4486761, r4486760, r4486750, MPFR_RNDN);
        mpfr_mul(r4486762, r4486759, r4486761, MPFR_RNDN);
        mpfr_add(r4486763, r4486758, r4486762, MPFR_RNDN);
        ;
        mpfr_mul(r4486765, r4486761, r4486750, MPFR_RNDN);
        mpfr_mul(r4486766, r4486765, r4486750, MPFR_RNDN);
        mpfr_mul(r4486767, r4486764, r4486766, MPFR_RNDN);
        mpfr_add(r4486768, r4486763, r4486767, MPFR_RNDN);
        ;
        mpfr_mul(r4486770, r4486766, r4486750, MPFR_RNDN);
        mpfr_mul(r4486771, r4486770, r4486750, MPFR_RNDN);
        mpfr_mul(r4486772, r4486769, r4486771, MPFR_RNDN);
        mpfr_add(r4486773, r4486768, r4486772, MPFR_RNDN);
        ;
        mpfr_mul(r4486775, r4486771, r4486750, MPFR_RNDN);
        mpfr_mul(r4486776, r4486775, r4486750, MPFR_RNDN);
        mpfr_mul(r4486777, r4486774, r4486776, MPFR_RNDN);
        mpfr_add(r4486778, r4486773, r4486777, MPFR_RNDN);
        ;
        mpfr_mul(r4486780, r4486776, r4486750, MPFR_RNDN);
        mpfr_mul(r4486781, r4486780, r4486750, MPFR_RNDN);
        mpfr_mul(r4486782, r4486779, r4486781, MPFR_RNDN);
        mpfr_add(r4486783, r4486778, r4486782, MPFR_RNDN);
        ;
        mpfr_mul(r4486785, r4486781, r4486750, MPFR_RNDN);
        mpfr_mul(r4486786, r4486785, r4486750, MPFR_RNDN);
        mpfr_mul(r4486787, r4486784, r4486786, MPFR_RNDN);
        mpfr_add(r4486788, r4486783, r4486787, MPFR_RNDN);
        return mpfr_get_d(r4486788, MPFR_RNDN);
}

static mpfr_t r4486789, r4486790, r4486791, r4486792, r4486793, r4486794, r4486795, r4486796, r4486797, r4486798, r4486799, r4486800, r4486801, r4486802, r4486803, r4486804, r4486805, r4486806, r4486807, r4486808, r4486809, r4486810, r4486811, r4486812, r4486813, r4486814, r4486815, r4486816, r4486817, r4486818, r4486819, r4486820, r4486821, r4486822, r4486823, r4486824, r4486825, r4486826, r4486827, r4486828, r4486829;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4486789, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r4486790, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r4486791);
        mpfr_init(r4486792);
        mpfr_init(r4486793);
        mpfr_init(r4486794);
        mpfr_init_set_str(r4486795, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r4486796);
        mpfr_init(r4486797);
        mpfr_init(r4486798);
        mpfr_init(r4486799);
        mpfr_init_set_str(r4486800, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r4486801);
        mpfr_init(r4486802);
        mpfr_init(r4486803);
        mpfr_init(r4486804);
        mpfr_init_set_str(r4486805, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r4486806);
        mpfr_init(r4486807);
        mpfr_init(r4486808);
        mpfr_init(r4486809);
        mpfr_init_set_str(r4486810, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r4486811);
        mpfr_init(r4486812);
        mpfr_init(r4486813);
        mpfr_init(r4486814);
        mpfr_init_set_str(r4486815, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r4486816);
        mpfr_init(r4486817);
        mpfr_init(r4486818);
        mpfr_init(r4486819);
        mpfr_init_set_str(r4486820, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r4486821);
        mpfr_init(r4486822);
        mpfr_init(r4486823);
        mpfr_init(r4486824);
        mpfr_init_set_str(r4486825, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r4486826);
        mpfr_init(r4486827);
        mpfr_init(r4486828);
        mpfr_init(r4486829);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4486791, x, MPFR_RNDN);
        mpfr_mul(r4486792, r4486791, r4486791, MPFR_RNDN);
        mpfr_mul(r4486793, r4486790, r4486792, MPFR_RNDN);
        mpfr_add(r4486794, r4486789, r4486793, MPFR_RNDN);
        ;
        mpfr_mul(r4486796, r4486792, r4486791, MPFR_RNDN);
        mpfr_mul(r4486797, r4486796, r4486791, MPFR_RNDN);
        mpfr_mul(r4486798, r4486795, r4486797, MPFR_RNDN);
        mpfr_add(r4486799, r4486794, r4486798, MPFR_RNDN);
        ;
        mpfr_mul(r4486801, r4486797, r4486791, MPFR_RNDN);
        mpfr_mul(r4486802, r4486801, r4486791, MPFR_RNDN);
        mpfr_mul(r4486803, r4486800, r4486802, MPFR_RNDN);
        mpfr_add(r4486804, r4486799, r4486803, MPFR_RNDN);
        ;
        mpfr_mul(r4486806, r4486802, r4486791, MPFR_RNDN);
        mpfr_mul(r4486807, r4486806, r4486791, MPFR_RNDN);
        mpfr_mul(r4486808, r4486805, r4486807, MPFR_RNDN);
        mpfr_add(r4486809, r4486804, r4486808, MPFR_RNDN);
        ;
        mpfr_mul(r4486811, r4486807, r4486791, MPFR_RNDN);
        mpfr_mul(r4486812, r4486811, r4486791, MPFR_RNDN);
        mpfr_mul(r4486813, r4486810, r4486812, MPFR_RNDN);
        mpfr_add(r4486814, r4486809, r4486813, MPFR_RNDN);
        ;
        mpfr_mul(r4486816, r4486812, r4486791, MPFR_RNDN);
        mpfr_mul(r4486817, r4486816, r4486791, MPFR_RNDN);
        mpfr_mul(r4486818, r4486815, r4486817, MPFR_RNDN);
        mpfr_add(r4486819, r4486814, r4486818, MPFR_RNDN);
        ;
        mpfr_mul(r4486821, r4486817, r4486791, MPFR_RNDN);
        mpfr_mul(r4486822, r4486821, r4486791, MPFR_RNDN);
        mpfr_mul(r4486823, r4486820, r4486822, MPFR_RNDN);
        mpfr_add(r4486824, r4486819, r4486823, MPFR_RNDN);
        ;
        mpfr_mul(r4486826, r4486822, r4486791, MPFR_RNDN);
        mpfr_mul(r4486827, r4486826, r4486791, MPFR_RNDN);
        mpfr_mul(r4486828, r4486825, r4486827, MPFR_RNDN);
        mpfr_add(r4486829, r4486824, r4486828, MPFR_RNDN);
        return mpfr_get_d(r4486829, MPFR_RNDN);
}

static mpfr_t r4486830, r4486831, r4486832, r4486833, r4486834, r4486835, r4486836, r4486837, r4486838, r4486839, r4486840, r4486841, r4486842, r4486843, r4486844, r4486845, r4486846, r4486847, r4486848, r4486849, r4486850, r4486851, r4486852, r4486853, r4486854, r4486855, r4486856, r4486857, r4486858, r4486859, r4486860, r4486861, r4486862, r4486863, r4486864, r4486865, r4486866, r4486867, r4486868, r4486869, r4486870;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4486830, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r4486831, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r4486832);
        mpfr_init(r4486833);
        mpfr_init(r4486834);
        mpfr_init(r4486835);
        mpfr_init_set_str(r4486836, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r4486837);
        mpfr_init(r4486838);
        mpfr_init(r4486839);
        mpfr_init(r4486840);
        mpfr_init_set_str(r4486841, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r4486842);
        mpfr_init(r4486843);
        mpfr_init(r4486844);
        mpfr_init(r4486845);
        mpfr_init_set_str(r4486846, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r4486847);
        mpfr_init(r4486848);
        mpfr_init(r4486849);
        mpfr_init(r4486850);
        mpfr_init_set_str(r4486851, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r4486852);
        mpfr_init(r4486853);
        mpfr_init(r4486854);
        mpfr_init(r4486855);
        mpfr_init_set_str(r4486856, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r4486857);
        mpfr_init(r4486858);
        mpfr_init(r4486859);
        mpfr_init(r4486860);
        mpfr_init_set_str(r4486861, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r4486862);
        mpfr_init(r4486863);
        mpfr_init(r4486864);
        mpfr_init(r4486865);
        mpfr_init_set_str(r4486866, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r4486867);
        mpfr_init(r4486868);
        mpfr_init(r4486869);
        mpfr_init(r4486870);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4486832, x, MPFR_RNDN);
        mpfr_mul(r4486833, r4486832, r4486832, MPFR_RNDN);
        mpfr_mul(r4486834, r4486831, r4486833, MPFR_RNDN);
        mpfr_add(r4486835, r4486830, r4486834, MPFR_RNDN);
        ;
        mpfr_mul(r4486837, r4486833, r4486832, MPFR_RNDN);
        mpfr_mul(r4486838, r4486837, r4486832, MPFR_RNDN);
        mpfr_mul(r4486839, r4486836, r4486838, MPFR_RNDN);
        mpfr_add(r4486840, r4486835, r4486839, MPFR_RNDN);
        ;
        mpfr_mul(r4486842, r4486838, r4486832, MPFR_RNDN);
        mpfr_mul(r4486843, r4486842, r4486832, MPFR_RNDN);
        mpfr_mul(r4486844, r4486841, r4486843, MPFR_RNDN);
        mpfr_add(r4486845, r4486840, r4486844, MPFR_RNDN);
        ;
        mpfr_mul(r4486847, r4486843, r4486832, MPFR_RNDN);
        mpfr_mul(r4486848, r4486847, r4486832, MPFR_RNDN);
        mpfr_mul(r4486849, r4486846, r4486848, MPFR_RNDN);
        mpfr_add(r4486850, r4486845, r4486849, MPFR_RNDN);
        ;
        mpfr_mul(r4486852, r4486848, r4486832, MPFR_RNDN);
        mpfr_mul(r4486853, r4486852, r4486832, MPFR_RNDN);
        mpfr_mul(r4486854, r4486851, r4486853, MPFR_RNDN);
        mpfr_add(r4486855, r4486850, r4486854, MPFR_RNDN);
        ;
        mpfr_mul(r4486857, r4486853, r4486832, MPFR_RNDN);
        mpfr_mul(r4486858, r4486857, r4486832, MPFR_RNDN);
        mpfr_mul(r4486859, r4486856, r4486858, MPFR_RNDN);
        mpfr_add(r4486860, r4486855, r4486859, MPFR_RNDN);
        ;
        mpfr_mul(r4486862, r4486858, r4486832, MPFR_RNDN);
        mpfr_mul(r4486863, r4486862, r4486832, MPFR_RNDN);
        mpfr_mul(r4486864, r4486861, r4486863, MPFR_RNDN);
        mpfr_add(r4486865, r4486860, r4486864, MPFR_RNDN);
        ;
        mpfr_mul(r4486867, r4486863, r4486832, MPFR_RNDN);
        mpfr_mul(r4486868, r4486867, r4486832, MPFR_RNDN);
        mpfr_mul(r4486869, r4486866, r4486868, MPFR_RNDN);
        mpfr_add(r4486870, r4486865, r4486869, MPFR_RNDN);
        return mpfr_get_d(r4486870, MPFR_RNDN);
}

