#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6512631 = 1.0;
        float r6512632 = -8.0;
        float r6512633 = x;
        float r6512634 = r6512632 * r6512633;
        float r6512635 = r6512631 + r6512634;
        float r6512636 = 14.0;
        float r6512637 = r6512633 * r6512633;
        float r6512638 = r6512636 * r6512637;
        float r6512639 = r6512635 + r6512638;
        float r6512640 = -9.333333;
        float r6512641 = r6512637 * r6512633;
        float r6512642 = r6512640 * r6512641;
        float r6512643 = r6512639 + r6512642;
        float r6512644 = 2.916667;
        float r6512645 = r6512641 * r6512633;
        float r6512646 = r6512644 * r6512645;
        float r6512647 = r6512643 + r6512646;
        float r6512648 = -0.466667;
        float r6512649 = r6512645 * r6512633;
        float r6512650 = r6512648 * r6512649;
        float r6512651 = r6512647 + r6512650;
        float r6512652 = 0.038889;
        float r6512653 = r6512649 * r6512633;
        float r6512654 = r6512652 * r6512653;
        float r6512655 = r6512651 + r6512654;
        float r6512656 = -0.001587;
        float r6512657 = r6512653 * r6512633;
        float r6512658 = r6512656 * r6512657;
        float r6512659 = r6512655 + r6512658;
        float r6512660 = 2.5e-05;
        float r6512661 = r6512657 * r6512633;
        float r6512662 = r6512660 * r6512661;
        float r6512663 = r6512659 + r6512662;
        return r6512663;
}

double f_id(double x) {
        double r6512664 = 1.0;
        double r6512665 = -8.0;
        double r6512666 = x;
        double r6512667 = r6512665 * r6512666;
        double r6512668 = r6512664 + r6512667;
        double r6512669 = 14.0;
        double r6512670 = r6512666 * r6512666;
        double r6512671 = r6512669 * r6512670;
        double r6512672 = r6512668 + r6512671;
        double r6512673 = -9.333333;
        double r6512674 = r6512670 * r6512666;
        double r6512675 = r6512673 * r6512674;
        double r6512676 = r6512672 + r6512675;
        double r6512677 = 2.916667;
        double r6512678 = r6512674 * r6512666;
        double r6512679 = r6512677 * r6512678;
        double r6512680 = r6512676 + r6512679;
        double r6512681 = -0.466667;
        double r6512682 = r6512678 * r6512666;
        double r6512683 = r6512681 * r6512682;
        double r6512684 = r6512680 + r6512683;
        double r6512685 = 0.038889;
        double r6512686 = r6512682 * r6512666;
        double r6512687 = r6512685 * r6512686;
        double r6512688 = r6512684 + r6512687;
        double r6512689 = -0.001587;
        double r6512690 = r6512686 * r6512666;
        double r6512691 = r6512689 * r6512690;
        double r6512692 = r6512688 + r6512691;
        double r6512693 = 2.5e-05;
        double r6512694 = r6512690 * r6512666;
        double r6512695 = r6512693 * r6512694;
        double r6512696 = r6512692 + r6512695;
        return r6512696;
}


double f_of(float x) {
        float r6512697 = x;
        float r6512698 = r6512697 * r6512697;
        float r6512699 = 3;
        float r6512700 = pow(r6512698, r6512699);
        float r6512701 = 2.5e-05;
        float r6512702 = r6512701 * r6512698;
        float r6512703 = r6512700 * r6512702;
        float r6512704 = -0.001587;
        float r6512705 = r6512704 * r6512697;
        float r6512706 = 0.038889;
        float r6512707 = r6512705 + r6512706;
        float r6512708 = r6512700 * r6512707;
        float r6512709 = r6512703 + r6512708;
        float r6512710 = -9.333333;
        float r6512711 = r6512710 * r6512697;
        float r6512712 = 14.0;
        float r6512713 = r6512711 + r6512712;
        float r6512714 = r6512698 * r6512713;
        float r6512715 = r6512698 * r6512698;
        float r6512716 = 2.916667;
        float r6512717 = -0.466667;
        float r6512718 = r6512717 * r6512697;
        float r6512719 = r6512716 + r6512718;
        float r6512720 = r6512715 * r6512719;
        float r6512721 = r6512714 + r6512720;
        float r6512722 = -8.0;
        float r6512723 = r6512697 * r6512722;
        float r6512724 = 1.0;
        float r6512725 = r6512723 + r6512724;
        float r6512726 = r6512721 + r6512725;
        float r6512727 = r6512709 + r6512726;
        return r6512727;
}

double f_od(double x) {
        double r6512728 = x;
        double r6512729 = r6512728 * r6512728;
        double r6512730 = 3;
        double r6512731 = pow(r6512729, r6512730);
        double r6512732 = 2.5e-05;
        double r6512733 = r6512732 * r6512729;
        double r6512734 = r6512731 * r6512733;
        double r6512735 = -0.001587;
        double r6512736 = r6512735 * r6512728;
        double r6512737 = 0.038889;
        double r6512738 = r6512736 + r6512737;
        double r6512739 = r6512731 * r6512738;
        double r6512740 = r6512734 + r6512739;
        double r6512741 = -9.333333;
        double r6512742 = r6512741 * r6512728;
        double r6512743 = 14.0;
        double r6512744 = r6512742 + r6512743;
        double r6512745 = r6512729 * r6512744;
        double r6512746 = r6512729 * r6512729;
        double r6512747 = 2.916667;
        double r6512748 = -0.466667;
        double r6512749 = r6512748 * r6512728;
        double r6512750 = r6512747 + r6512749;
        double r6512751 = r6512746 * r6512750;
        double r6512752 = r6512745 + r6512751;
        double r6512753 = -8.0;
        double r6512754 = r6512728 * r6512753;
        double r6512755 = 1.0;
        double r6512756 = r6512754 + r6512755;
        double r6512757 = r6512752 + r6512756;
        double r6512758 = r6512740 + r6512757;
        return r6512758;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6512759, r6512760, r6512761, r6512762, r6512763, r6512764, r6512765, r6512766, r6512767, r6512768, r6512769, r6512770, r6512771, r6512772, r6512773, r6512774, r6512775, r6512776, r6512777, r6512778, r6512779, r6512780, r6512781, r6512782, r6512783, r6512784, r6512785, r6512786, r6512787, r6512788, r6512789, r6512790, r6512791;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6512759, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6512760, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r6512761);
        mpfr_init(r6512762);
        mpfr_init(r6512763);
        mpfr_init_set_str(r6512764, "14.0", 10, MPFR_RNDN);
        mpfr_init(r6512765);
        mpfr_init(r6512766);
        mpfr_init(r6512767);
        mpfr_init_set_str(r6512768, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r6512769);
        mpfr_init(r6512770);
        mpfr_init(r6512771);
        mpfr_init_set_str(r6512772, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r6512773);
        mpfr_init(r6512774);
        mpfr_init(r6512775);
        mpfr_init_set_str(r6512776, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r6512777);
        mpfr_init(r6512778);
        mpfr_init(r6512779);
        mpfr_init_set_str(r6512780, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r6512781);
        mpfr_init(r6512782);
        mpfr_init(r6512783);
        mpfr_init_set_str(r6512784, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r6512785);
        mpfr_init(r6512786);
        mpfr_init(r6512787);
        mpfr_init_set_str(r6512788, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r6512789);
        mpfr_init(r6512790);
        mpfr_init(r6512791);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6512761, x, MPFR_RNDN);
        mpfr_mul(r6512762, r6512760, r6512761, MPFR_RNDN);
        mpfr_add(r6512763, r6512759, r6512762, MPFR_RNDN);
        ;
        mpfr_mul(r6512765, r6512761, r6512761, MPFR_RNDN);
        mpfr_mul(r6512766, r6512764, r6512765, MPFR_RNDN);
        mpfr_add(r6512767, r6512763, r6512766, MPFR_RNDN);
        ;
        mpfr_mul(r6512769, r6512765, r6512761, MPFR_RNDN);
        mpfr_mul(r6512770, r6512768, r6512769, MPFR_RNDN);
        mpfr_add(r6512771, r6512767, r6512770, MPFR_RNDN);
        ;
        mpfr_mul(r6512773, r6512769, r6512761, MPFR_RNDN);
        mpfr_mul(r6512774, r6512772, r6512773, MPFR_RNDN);
        mpfr_add(r6512775, r6512771, r6512774, MPFR_RNDN);
        ;
        mpfr_mul(r6512777, r6512773, r6512761, MPFR_RNDN);
        mpfr_mul(r6512778, r6512776, r6512777, MPFR_RNDN);
        mpfr_add(r6512779, r6512775, r6512778, MPFR_RNDN);
        ;
        mpfr_mul(r6512781, r6512777, r6512761, MPFR_RNDN);
        mpfr_mul(r6512782, r6512780, r6512781, MPFR_RNDN);
        mpfr_add(r6512783, r6512779, r6512782, MPFR_RNDN);
        ;
        mpfr_mul(r6512785, r6512781, r6512761, MPFR_RNDN);
        mpfr_mul(r6512786, r6512784, r6512785, MPFR_RNDN);
        mpfr_add(r6512787, r6512783, r6512786, MPFR_RNDN);
        ;
        mpfr_mul(r6512789, r6512785, r6512761, MPFR_RNDN);
        mpfr_mul(r6512790, r6512788, r6512789, MPFR_RNDN);
        mpfr_add(r6512791, r6512787, r6512790, MPFR_RNDN);
        return mpfr_get_d(r6512791, MPFR_RNDN);
}

static mpfr_t r6512792, r6512793, r6512794, r6512795, r6512796, r6512797, r6512798, r6512799, r6512800, r6512801, r6512802, r6512803, r6512804, r6512805, r6512806, r6512807, r6512808, r6512809, r6512810, r6512811, r6512812, r6512813, r6512814, r6512815, r6512816, r6512817, r6512818, r6512819, r6512820, r6512821, r6512822;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6512792);
        mpfr_init(r6512793);
        mpfr_init_set_str(r6512794, "3", 10, MPFR_RNDN);
        mpfr_init(r6512795);
        mpfr_init_set_str(r6512796, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r6512797);
        mpfr_init(r6512798);
        mpfr_init_set_str(r6512799, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r6512800);
        mpfr_init_set_str(r6512801, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r6512802);
        mpfr_init(r6512803);
        mpfr_init(r6512804);
        mpfr_init_set_str(r6512805, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r6512806);
        mpfr_init_set_str(r6512807, "14.0", 10, MPFR_RNDN);
        mpfr_init(r6512808);
        mpfr_init(r6512809);
        mpfr_init(r6512810);
        mpfr_init_set_str(r6512811, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r6512812, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r6512813);
        mpfr_init(r6512814);
        mpfr_init(r6512815);
        mpfr_init(r6512816);
        mpfr_init_set_str(r6512817, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r6512818);
        mpfr_init_set_str(r6512819, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6512820);
        mpfr_init(r6512821);
        mpfr_init(r6512822);
}

double f_fm(double x) {
        mpfr_set_d(r6512792, x, MPFR_RNDN);
        mpfr_mul(r6512793, r6512792, r6512792, MPFR_RNDN);
        ;
        mpfr_pow(r6512795, r6512793, r6512794, MPFR_RNDN);
        ;
        mpfr_mul(r6512797, r6512796, r6512793, MPFR_RNDN);
        mpfr_mul(r6512798, r6512795, r6512797, MPFR_RNDN);
        ;
        mpfr_mul(r6512800, r6512799, r6512792, MPFR_RNDN);
        ;
        mpfr_add(r6512802, r6512800, r6512801, MPFR_RNDN);
        mpfr_mul(r6512803, r6512795, r6512802, MPFR_RNDN);
        mpfr_add(r6512804, r6512798, r6512803, MPFR_RNDN);
        ;
        mpfr_mul(r6512806, r6512805, r6512792, MPFR_RNDN);
        ;
        mpfr_add(r6512808, r6512806, r6512807, MPFR_RNDN);
        mpfr_mul(r6512809, r6512793, r6512808, MPFR_RNDN);
        mpfr_mul(r6512810, r6512793, r6512793, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6512813, r6512812, r6512792, MPFR_RNDN);
        mpfr_add(r6512814, r6512811, r6512813, MPFR_RNDN);
        mpfr_mul(r6512815, r6512810, r6512814, MPFR_RNDN);
        mpfr_add(r6512816, r6512809, r6512815, MPFR_RNDN);
        ;
        mpfr_mul(r6512818, r6512792, r6512817, MPFR_RNDN);
        ;
        mpfr_add(r6512820, r6512818, r6512819, MPFR_RNDN);
        mpfr_add(r6512821, r6512816, r6512820, MPFR_RNDN);
        mpfr_add(r6512822, r6512804, r6512821, MPFR_RNDN);
        return mpfr_get_d(r6512822, MPFR_RNDN);
}

static mpfr_t r6512823, r6512824, r6512825, r6512826, r6512827, r6512828, r6512829, r6512830, r6512831, r6512832, r6512833, r6512834, r6512835, r6512836, r6512837, r6512838, r6512839, r6512840, r6512841, r6512842, r6512843, r6512844, r6512845, r6512846, r6512847, r6512848, r6512849, r6512850, r6512851, r6512852, r6512853;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6512823);
        mpfr_init(r6512824);
        mpfr_init_set_str(r6512825, "3", 10, MPFR_RNDN);
        mpfr_init(r6512826);
        mpfr_init_set_str(r6512827, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r6512828);
        mpfr_init(r6512829);
        mpfr_init_set_str(r6512830, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r6512831);
        mpfr_init_set_str(r6512832, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r6512833);
        mpfr_init(r6512834);
        mpfr_init(r6512835);
        mpfr_init_set_str(r6512836, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r6512837);
        mpfr_init_set_str(r6512838, "14.0", 10, MPFR_RNDN);
        mpfr_init(r6512839);
        mpfr_init(r6512840);
        mpfr_init(r6512841);
        mpfr_init_set_str(r6512842, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r6512843, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r6512844);
        mpfr_init(r6512845);
        mpfr_init(r6512846);
        mpfr_init(r6512847);
        mpfr_init_set_str(r6512848, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r6512849);
        mpfr_init_set_str(r6512850, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6512851);
        mpfr_init(r6512852);
        mpfr_init(r6512853);
}

double f_dm(double x) {
        mpfr_set_d(r6512823, x, MPFR_RNDN);
        mpfr_mul(r6512824, r6512823, r6512823, MPFR_RNDN);
        ;
        mpfr_pow(r6512826, r6512824, r6512825, MPFR_RNDN);
        ;
        mpfr_mul(r6512828, r6512827, r6512824, MPFR_RNDN);
        mpfr_mul(r6512829, r6512826, r6512828, MPFR_RNDN);
        ;
        mpfr_mul(r6512831, r6512830, r6512823, MPFR_RNDN);
        ;
        mpfr_add(r6512833, r6512831, r6512832, MPFR_RNDN);
        mpfr_mul(r6512834, r6512826, r6512833, MPFR_RNDN);
        mpfr_add(r6512835, r6512829, r6512834, MPFR_RNDN);
        ;
        mpfr_mul(r6512837, r6512836, r6512823, MPFR_RNDN);
        ;
        mpfr_add(r6512839, r6512837, r6512838, MPFR_RNDN);
        mpfr_mul(r6512840, r6512824, r6512839, MPFR_RNDN);
        mpfr_mul(r6512841, r6512824, r6512824, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6512844, r6512843, r6512823, MPFR_RNDN);
        mpfr_add(r6512845, r6512842, r6512844, MPFR_RNDN);
        mpfr_mul(r6512846, r6512841, r6512845, MPFR_RNDN);
        mpfr_add(r6512847, r6512840, r6512846, MPFR_RNDN);
        ;
        mpfr_mul(r6512849, r6512823, r6512848, MPFR_RNDN);
        ;
        mpfr_add(r6512851, r6512849, r6512850, MPFR_RNDN);
        mpfr_add(r6512852, r6512847, r6512851, MPFR_RNDN);
        mpfr_add(r6512853, r6512835, r6512852, MPFR_RNDN);
        return mpfr_get_d(r6512853, MPFR_RNDN);
}

