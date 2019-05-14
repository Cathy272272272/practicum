#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r9373719 = 1.0;
        float r9373720 = -4.0;
        float r9373721 = x;
        float r9373722 = r9373720 * r9373721;
        float r9373723 = r9373719 + r9373722;
        float r9373724 = 3.0;
        float r9373725 = r9373721 * r9373721;
        float r9373726 = r9373724 * r9373725;
        float r9373727 = r9373723 + r9373726;
        float r9373728 = -0.666667;
        float r9373729 = r9373725 * r9373721;
        float r9373730 = r9373728 * r9373729;
        float r9373731 = r9373727 + r9373730;
        float r9373732 = 0.041667;
        float r9373733 = r9373729 * r9373721;
        float r9373734 = r9373732 * r9373733;
        float r9373735 = r9373731 + r9373734;
        return r9373735;
}

double f_id(double x) {
        double r9373736 = 1.0;
        double r9373737 = -4.0;
        double r9373738 = x;
        double r9373739 = r9373737 * r9373738;
        double r9373740 = r9373736 + r9373739;
        double r9373741 = 3.0;
        double r9373742 = r9373738 * r9373738;
        double r9373743 = r9373741 * r9373742;
        double r9373744 = r9373740 + r9373743;
        double r9373745 = -0.666667;
        double r9373746 = r9373742 * r9373738;
        double r9373747 = r9373745 * r9373746;
        double r9373748 = r9373744 + r9373747;
        double r9373749 = 0.041667;
        double r9373750 = r9373746 * r9373738;
        double r9373751 = r9373749 * r9373750;
        double r9373752 = r9373748 + r9373751;
        return r9373752;
}


double f_of(float x) {
        float r9373753 = 1.0;
        float r9373754 = -4.0;
        float r9373755 = x;
        float r9373756 = r9373754 * r9373755;
        float r9373757 = r9373753 + r9373756;
        float r9373758 = 3.0;
        float r9373759 = r9373755 * r9373755;
        float r9373760 = r9373758 * r9373759;
        float r9373761 = r9373757 + r9373760;
        float r9373762 = -0.666667;
        float r9373763 = r9373759 * r9373755;
        float r9373764 = r9373762 * r9373763;
        float r9373765 = r9373761 + r9373764;
        float r9373766 = 0.041667;
        float r9373767 = r9373763 * r9373755;
        float r9373768 = r9373766 * r9373767;
        float r9373769 = r9373765 + r9373768;
        return r9373769;
}

double f_od(double x) {
        double r9373770 = 1.0;
        double r9373771 = -4.0;
        double r9373772 = x;
        double r9373773 = r9373771 * r9373772;
        double r9373774 = r9373770 + r9373773;
        double r9373775 = 3.0;
        double r9373776 = r9373772 * r9373772;
        double r9373777 = r9373775 * r9373776;
        double r9373778 = r9373774 + r9373777;
        double r9373779 = -0.666667;
        double r9373780 = r9373776 * r9373772;
        double r9373781 = r9373779 * r9373780;
        double r9373782 = r9373778 + r9373781;
        double r9373783 = 0.041667;
        double r9373784 = r9373780 * r9373772;
        double r9373785 = r9373783 * r9373784;
        double r9373786 = r9373782 + r9373785;
        return r9373786;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9373787, r9373788, r9373789, r9373790, r9373791, r9373792, r9373793, r9373794, r9373795, r9373796, r9373797, r9373798, r9373799, r9373800, r9373801, r9373802, r9373803;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373787, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373788, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9373789);
        mpfr_init(r9373790);
        mpfr_init(r9373791);
        mpfr_init_set_str(r9373792, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9373793);
        mpfr_init(r9373794);
        mpfr_init(r9373795);
        mpfr_init_set_str(r9373796, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9373797);
        mpfr_init(r9373798);
        mpfr_init(r9373799);
        mpfr_init_set_str(r9373800, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9373801);
        mpfr_init(r9373802);
        mpfr_init(r9373803);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9373789, x, MPFR_RNDN);
        mpfr_mul(r9373790, r9373788, r9373789, MPFR_RNDN);
        mpfr_add(r9373791, r9373787, r9373790, MPFR_RNDN);
        ;
        mpfr_mul(r9373793, r9373789, r9373789, MPFR_RNDN);
        mpfr_mul(r9373794, r9373792, r9373793, MPFR_RNDN);
        mpfr_add(r9373795, r9373791, r9373794, MPFR_RNDN);
        ;
        mpfr_mul(r9373797, r9373793, r9373789, MPFR_RNDN);
        mpfr_mul(r9373798, r9373796, r9373797, MPFR_RNDN);
        mpfr_add(r9373799, r9373795, r9373798, MPFR_RNDN);
        ;
        mpfr_mul(r9373801, r9373797, r9373789, MPFR_RNDN);
        mpfr_mul(r9373802, r9373800, r9373801, MPFR_RNDN);
        mpfr_add(r9373803, r9373799, r9373802, MPFR_RNDN);
        return mpfr_get_d(r9373803, MPFR_RNDN);
}

static mpfr_t r9373804, r9373805, r9373806, r9373807, r9373808, r9373809, r9373810, r9373811, r9373812, r9373813, r9373814, r9373815, r9373816, r9373817, r9373818, r9373819, r9373820;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373804, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373805, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9373806);
        mpfr_init(r9373807);
        mpfr_init(r9373808);
        mpfr_init_set_str(r9373809, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9373810);
        mpfr_init(r9373811);
        mpfr_init(r9373812);
        mpfr_init_set_str(r9373813, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9373814);
        mpfr_init(r9373815);
        mpfr_init(r9373816);
        mpfr_init_set_str(r9373817, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9373818);
        mpfr_init(r9373819);
        mpfr_init(r9373820);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9373806, x, MPFR_RNDN);
        mpfr_mul(r9373807, r9373805, r9373806, MPFR_RNDN);
        mpfr_add(r9373808, r9373804, r9373807, MPFR_RNDN);
        ;
        mpfr_mul(r9373810, r9373806, r9373806, MPFR_RNDN);
        mpfr_mul(r9373811, r9373809, r9373810, MPFR_RNDN);
        mpfr_add(r9373812, r9373808, r9373811, MPFR_RNDN);
        ;
        mpfr_mul(r9373814, r9373810, r9373806, MPFR_RNDN);
        mpfr_mul(r9373815, r9373813, r9373814, MPFR_RNDN);
        mpfr_add(r9373816, r9373812, r9373815, MPFR_RNDN);
        ;
        mpfr_mul(r9373818, r9373814, r9373806, MPFR_RNDN);
        mpfr_mul(r9373819, r9373817, r9373818, MPFR_RNDN);
        mpfr_add(r9373820, r9373816, r9373819, MPFR_RNDN);
        return mpfr_get_d(r9373820, MPFR_RNDN);
}

static mpfr_t r9373821, r9373822, r9373823, r9373824, r9373825, r9373826, r9373827, r9373828, r9373829, r9373830, r9373831, r9373832, r9373833, r9373834, r9373835, r9373836, r9373837;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373821, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373822, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9373823);
        mpfr_init(r9373824);
        mpfr_init(r9373825);
        mpfr_init_set_str(r9373826, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9373827);
        mpfr_init(r9373828);
        mpfr_init(r9373829);
        mpfr_init_set_str(r9373830, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9373831);
        mpfr_init(r9373832);
        mpfr_init(r9373833);
        mpfr_init_set_str(r9373834, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9373835);
        mpfr_init(r9373836);
        mpfr_init(r9373837);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9373823, x, MPFR_RNDN);
        mpfr_mul(r9373824, r9373822, r9373823, MPFR_RNDN);
        mpfr_add(r9373825, r9373821, r9373824, MPFR_RNDN);
        ;
        mpfr_mul(r9373827, r9373823, r9373823, MPFR_RNDN);
        mpfr_mul(r9373828, r9373826, r9373827, MPFR_RNDN);
        mpfr_add(r9373829, r9373825, r9373828, MPFR_RNDN);
        ;
        mpfr_mul(r9373831, r9373827, r9373823, MPFR_RNDN);
        mpfr_mul(r9373832, r9373830, r9373831, MPFR_RNDN);
        mpfr_add(r9373833, r9373829, r9373832, MPFR_RNDN);
        ;
        mpfr_mul(r9373835, r9373831, r9373823, MPFR_RNDN);
        mpfr_mul(r9373836, r9373834, r9373835, MPFR_RNDN);
        mpfr_add(r9373837, r9373833, r9373836, MPFR_RNDN);
        return mpfr_get_d(r9373837, MPFR_RNDN);
}

