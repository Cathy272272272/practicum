#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r20872719 = 1.0;
        float r20872720 = -3.0;
        float r20872721 = x;
        float r20872722 = r20872720 * r20872721;
        float r20872723 = r20872719 + r20872722;
        float r20872724 = 1.5;
        float r20872725 = r20872721 * r20872721;
        float r20872726 = r20872724 * r20872725;
        float r20872727 = r20872723 + r20872726;
        float r20872728 = -0.166667;
        float r20872729 = r20872725 * r20872721;
        float r20872730 = r20872728 * r20872729;
        float r20872731 = r20872727 + r20872730;
        return r20872731;
}

double f_id(double x) {
        double r20872732 = 1.0;
        double r20872733 = -3.0;
        double r20872734 = x;
        double r20872735 = r20872733 * r20872734;
        double r20872736 = r20872732 + r20872735;
        double r20872737 = 1.5;
        double r20872738 = r20872734 * r20872734;
        double r20872739 = r20872737 * r20872738;
        double r20872740 = r20872736 + r20872739;
        double r20872741 = -0.166667;
        double r20872742 = r20872738 * r20872734;
        double r20872743 = r20872741 * r20872742;
        double r20872744 = r20872740 + r20872743;
        return r20872744;
}


double f_of(float x) {
        float r20872745 = 1.0;
        float r20872746 = -3.0;
        float r20872747 = x;
        float r20872748 = r20872746 * r20872747;
        float r20872749 = r20872745 + r20872748;
        float r20872750 = 1.5;
        float r20872751 = r20872747 * r20872747;
        float r20872752 = r20872750 * r20872751;
        float r20872753 = r20872749 + r20872752;
        float r20872754 = -0.166667;
        float r20872755 = r20872751 * r20872747;
        float r20872756 = r20872754 * r20872755;
        float r20872757 = r20872753 + r20872756;
        return r20872757;
}

double f_od(double x) {
        double r20872758 = 1.0;
        double r20872759 = -3.0;
        double r20872760 = x;
        double r20872761 = r20872759 * r20872760;
        double r20872762 = r20872758 + r20872761;
        double r20872763 = 1.5;
        double r20872764 = r20872760 * r20872760;
        double r20872765 = r20872763 * r20872764;
        double r20872766 = r20872762 + r20872765;
        double r20872767 = -0.166667;
        double r20872768 = r20872764 * r20872760;
        double r20872769 = r20872767 * r20872768;
        double r20872770 = r20872766 + r20872769;
        return r20872770;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20872771, r20872772, r20872773, r20872774, r20872775, r20872776, r20872777, r20872778, r20872779, r20872780, r20872781, r20872782, r20872783;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20872771, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20872772, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r20872773);
        mpfr_init(r20872774);
        mpfr_init(r20872775);
        mpfr_init_set_str(r20872776, "1.5", 10, MPFR_RNDN);
        mpfr_init(r20872777);
        mpfr_init(r20872778);
        mpfr_init(r20872779);
        mpfr_init_set_str(r20872780, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r20872781);
        mpfr_init(r20872782);
        mpfr_init(r20872783);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20872773, x, MPFR_RNDN);
        mpfr_mul(r20872774, r20872772, r20872773, MPFR_RNDN);
        mpfr_add(r20872775, r20872771, r20872774, MPFR_RNDN);
        ;
        mpfr_mul(r20872777, r20872773, r20872773, MPFR_RNDN);
        mpfr_mul(r20872778, r20872776, r20872777, MPFR_RNDN);
        mpfr_add(r20872779, r20872775, r20872778, MPFR_RNDN);
        ;
        mpfr_mul(r20872781, r20872777, r20872773, MPFR_RNDN);
        mpfr_mul(r20872782, r20872780, r20872781, MPFR_RNDN);
        mpfr_add(r20872783, r20872779, r20872782, MPFR_RNDN);
        return mpfr_get_d(r20872783, MPFR_RNDN);
}

static mpfr_t r20872784, r20872785, r20872786, r20872787, r20872788, r20872789, r20872790, r20872791, r20872792, r20872793, r20872794, r20872795, r20872796;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20872784, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20872785, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r20872786);
        mpfr_init(r20872787);
        mpfr_init(r20872788);
        mpfr_init_set_str(r20872789, "1.5", 10, MPFR_RNDN);
        mpfr_init(r20872790);
        mpfr_init(r20872791);
        mpfr_init(r20872792);
        mpfr_init_set_str(r20872793, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r20872794);
        mpfr_init(r20872795);
        mpfr_init(r20872796);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r20872786, x, MPFR_RNDN);
        mpfr_mul(r20872787, r20872785, r20872786, MPFR_RNDN);
        mpfr_add(r20872788, r20872784, r20872787, MPFR_RNDN);
        ;
        mpfr_mul(r20872790, r20872786, r20872786, MPFR_RNDN);
        mpfr_mul(r20872791, r20872789, r20872790, MPFR_RNDN);
        mpfr_add(r20872792, r20872788, r20872791, MPFR_RNDN);
        ;
        mpfr_mul(r20872794, r20872790, r20872786, MPFR_RNDN);
        mpfr_mul(r20872795, r20872793, r20872794, MPFR_RNDN);
        mpfr_add(r20872796, r20872792, r20872795, MPFR_RNDN);
        return mpfr_get_d(r20872796, MPFR_RNDN);
}

static mpfr_t r20872797, r20872798, r20872799, r20872800, r20872801, r20872802, r20872803, r20872804, r20872805, r20872806, r20872807, r20872808, r20872809;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20872797, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20872798, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r20872799);
        mpfr_init(r20872800);
        mpfr_init(r20872801);
        mpfr_init_set_str(r20872802, "1.5", 10, MPFR_RNDN);
        mpfr_init(r20872803);
        mpfr_init(r20872804);
        mpfr_init(r20872805);
        mpfr_init_set_str(r20872806, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r20872807);
        mpfr_init(r20872808);
        mpfr_init(r20872809);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r20872799, x, MPFR_RNDN);
        mpfr_mul(r20872800, r20872798, r20872799, MPFR_RNDN);
        mpfr_add(r20872801, r20872797, r20872800, MPFR_RNDN);
        ;
        mpfr_mul(r20872803, r20872799, r20872799, MPFR_RNDN);
        mpfr_mul(r20872804, r20872802, r20872803, MPFR_RNDN);
        mpfr_add(r20872805, r20872801, r20872804, MPFR_RNDN);
        ;
        mpfr_mul(r20872807, r20872803, r20872799, MPFR_RNDN);
        mpfr_mul(r20872808, r20872806, r20872807, MPFR_RNDN);
        mpfr_add(r20872809, r20872805, r20872808, MPFR_RNDN);
        return mpfr_get_d(r20872809, MPFR_RNDN);
}

