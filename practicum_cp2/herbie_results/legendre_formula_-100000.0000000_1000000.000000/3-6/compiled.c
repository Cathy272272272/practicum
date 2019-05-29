#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6176727 = -0.3125;
        float r6176728 = 6.5625;
        float r6176729 = x;
        float r6176730 = r6176729 * r6176729;
        float r6176731 = r6176728 * r6176730;
        float r6176732 = r6176727 + r6176731;
        float r6176733 = -19.6875;
        float r6176734 = r6176730 * r6176729;
        float r6176735 = r6176734 * r6176729;
        float r6176736 = r6176733 * r6176735;
        float r6176737 = r6176732 + r6176736;
        float r6176738 = 14.4375;
        float r6176739 = r6176735 * r6176729;
        float r6176740 = r6176739 * r6176729;
        float r6176741 = r6176738 * r6176740;
        float r6176742 = r6176737 + r6176741;
        return r6176742;
}

double f_id(double x) {
        double r6176743 = -0.3125;
        double r6176744 = 6.5625;
        double r6176745 = x;
        double r6176746 = r6176745 * r6176745;
        double r6176747 = r6176744 * r6176746;
        double r6176748 = r6176743 + r6176747;
        double r6176749 = -19.6875;
        double r6176750 = r6176746 * r6176745;
        double r6176751 = r6176750 * r6176745;
        double r6176752 = r6176749 * r6176751;
        double r6176753 = r6176748 + r6176752;
        double r6176754 = 14.4375;
        double r6176755 = r6176751 * r6176745;
        double r6176756 = r6176755 * r6176745;
        double r6176757 = r6176754 * r6176756;
        double r6176758 = r6176753 + r6176757;
        return r6176758;
}


double f_of(float x) {
        float r6176759 = -0.3125;
        float r6176760 = 6.5625;
        float r6176761 = x;
        float r6176762 = r6176761 * r6176761;
        float r6176763 = r6176760 * r6176762;
        float r6176764 = r6176759 + r6176763;
        float r6176765 = -19.6875;
        float r6176766 = r6176762 * r6176761;
        float r6176767 = r6176766 * r6176761;
        float r6176768 = r6176765 * r6176767;
        float r6176769 = r6176764 + r6176768;
        float r6176770 = 14.4375;
        float r6176771 = r6176767 * r6176761;
        float r6176772 = r6176771 * r6176761;
        float r6176773 = r6176770 * r6176772;
        float r6176774 = r6176769 + r6176773;
        return r6176774;
}

double f_od(double x) {
        double r6176775 = -0.3125;
        double r6176776 = 6.5625;
        double r6176777 = x;
        double r6176778 = r6176777 * r6176777;
        double r6176779 = r6176776 * r6176778;
        double r6176780 = r6176775 + r6176779;
        double r6176781 = -19.6875;
        double r6176782 = r6176778 * r6176777;
        double r6176783 = r6176782 * r6176777;
        double r6176784 = r6176781 * r6176783;
        double r6176785 = r6176780 + r6176784;
        double r6176786 = 14.4375;
        double r6176787 = r6176783 * r6176777;
        double r6176788 = r6176787 * r6176777;
        double r6176789 = r6176786 * r6176788;
        double r6176790 = r6176785 + r6176789;
        return r6176790;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6176791, r6176792, r6176793, r6176794, r6176795, r6176796, r6176797, r6176798, r6176799, r6176800, r6176801, r6176802, r6176803, r6176804, r6176805, r6176806;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6176791, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6176792, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6176793);
        mpfr_init(r6176794);
        mpfr_init(r6176795);
        mpfr_init(r6176796);
        mpfr_init_set_str(r6176797, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6176798);
        mpfr_init(r6176799);
        mpfr_init(r6176800);
        mpfr_init(r6176801);
        mpfr_init_set_str(r6176802, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6176803);
        mpfr_init(r6176804);
        mpfr_init(r6176805);
        mpfr_init(r6176806);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6176793, x, MPFR_RNDN);
        mpfr_mul(r6176794, r6176793, r6176793, MPFR_RNDN);
        mpfr_mul(r6176795, r6176792, r6176794, MPFR_RNDN);
        mpfr_add(r6176796, r6176791, r6176795, MPFR_RNDN);
        ;
        mpfr_mul(r6176798, r6176794, r6176793, MPFR_RNDN);
        mpfr_mul(r6176799, r6176798, r6176793, MPFR_RNDN);
        mpfr_mul(r6176800, r6176797, r6176799, MPFR_RNDN);
        mpfr_add(r6176801, r6176796, r6176800, MPFR_RNDN);
        ;
        mpfr_mul(r6176803, r6176799, r6176793, MPFR_RNDN);
        mpfr_mul(r6176804, r6176803, r6176793, MPFR_RNDN);
        mpfr_mul(r6176805, r6176802, r6176804, MPFR_RNDN);
        mpfr_add(r6176806, r6176801, r6176805, MPFR_RNDN);
        return mpfr_get_d(r6176806, MPFR_RNDN);
}

static mpfr_t r6176807, r6176808, r6176809, r6176810, r6176811, r6176812, r6176813, r6176814, r6176815, r6176816, r6176817, r6176818, r6176819, r6176820, r6176821, r6176822;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6176807, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6176808, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6176809);
        mpfr_init(r6176810);
        mpfr_init(r6176811);
        mpfr_init(r6176812);
        mpfr_init_set_str(r6176813, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6176814);
        mpfr_init(r6176815);
        mpfr_init(r6176816);
        mpfr_init(r6176817);
        mpfr_init_set_str(r6176818, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6176819);
        mpfr_init(r6176820);
        mpfr_init(r6176821);
        mpfr_init(r6176822);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6176809, x, MPFR_RNDN);
        mpfr_mul(r6176810, r6176809, r6176809, MPFR_RNDN);
        mpfr_mul(r6176811, r6176808, r6176810, MPFR_RNDN);
        mpfr_add(r6176812, r6176807, r6176811, MPFR_RNDN);
        ;
        mpfr_mul(r6176814, r6176810, r6176809, MPFR_RNDN);
        mpfr_mul(r6176815, r6176814, r6176809, MPFR_RNDN);
        mpfr_mul(r6176816, r6176813, r6176815, MPFR_RNDN);
        mpfr_add(r6176817, r6176812, r6176816, MPFR_RNDN);
        ;
        mpfr_mul(r6176819, r6176815, r6176809, MPFR_RNDN);
        mpfr_mul(r6176820, r6176819, r6176809, MPFR_RNDN);
        mpfr_mul(r6176821, r6176818, r6176820, MPFR_RNDN);
        mpfr_add(r6176822, r6176817, r6176821, MPFR_RNDN);
        return mpfr_get_d(r6176822, MPFR_RNDN);
}

static mpfr_t r6176823, r6176824, r6176825, r6176826, r6176827, r6176828, r6176829, r6176830, r6176831, r6176832, r6176833, r6176834, r6176835, r6176836, r6176837, r6176838;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6176823, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6176824, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6176825);
        mpfr_init(r6176826);
        mpfr_init(r6176827);
        mpfr_init(r6176828);
        mpfr_init_set_str(r6176829, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6176830);
        mpfr_init(r6176831);
        mpfr_init(r6176832);
        mpfr_init(r6176833);
        mpfr_init_set_str(r6176834, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6176835);
        mpfr_init(r6176836);
        mpfr_init(r6176837);
        mpfr_init(r6176838);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6176825, x, MPFR_RNDN);
        mpfr_mul(r6176826, r6176825, r6176825, MPFR_RNDN);
        mpfr_mul(r6176827, r6176824, r6176826, MPFR_RNDN);
        mpfr_add(r6176828, r6176823, r6176827, MPFR_RNDN);
        ;
        mpfr_mul(r6176830, r6176826, r6176825, MPFR_RNDN);
        mpfr_mul(r6176831, r6176830, r6176825, MPFR_RNDN);
        mpfr_mul(r6176832, r6176829, r6176831, MPFR_RNDN);
        mpfr_add(r6176833, r6176828, r6176832, MPFR_RNDN);
        ;
        mpfr_mul(r6176835, r6176831, r6176825, MPFR_RNDN);
        mpfr_mul(r6176836, r6176835, r6176825, MPFR_RNDN);
        mpfr_mul(r6176837, r6176834, r6176836, MPFR_RNDN);
        mpfr_add(r6176838, r6176833, r6176837, MPFR_RNDN);
        return mpfr_get_d(r6176838, MPFR_RNDN);
}

