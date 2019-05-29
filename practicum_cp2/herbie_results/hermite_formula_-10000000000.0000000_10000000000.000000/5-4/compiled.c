#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r9402739 = 12.0;
        float r9402740 = -48.0;
        float r9402741 = x;
        float r9402742 = r9402741 * r9402741;
        float r9402743 = r9402740 * r9402742;
        float r9402744 = r9402739 + r9402743;
        float r9402745 = 16.0;
        float r9402746 = r9402742 * r9402741;
        float r9402747 = r9402746 * r9402741;
        float r9402748 = r9402745 * r9402747;
        float r9402749 = r9402744 + r9402748;
        return r9402749;
}

double f_id(double x) {
        double r9402750 = 12.0;
        double r9402751 = -48.0;
        double r9402752 = x;
        double r9402753 = r9402752 * r9402752;
        double r9402754 = r9402751 * r9402753;
        double r9402755 = r9402750 + r9402754;
        double r9402756 = 16.0;
        double r9402757 = r9402753 * r9402752;
        double r9402758 = r9402757 * r9402752;
        double r9402759 = r9402756 * r9402758;
        double r9402760 = r9402755 + r9402759;
        return r9402760;
}


double f_of(float x) {
        float r9402761 = 12.0;
        float r9402762 = x;
        float r9402763 = 16.0;
        float r9402764 = r9402762 * r9402763;
        float r9402765 = 3;
        float r9402766 = pow(r9402762, r9402765);
        float r9402767 = r9402764 * r9402766;
        float r9402768 = -48.0;
        float r9402769 = r9402762 * r9402768;
        float r9402770 = r9402769 * r9402762;
        float r9402771 = r9402767 + r9402770;
        float r9402772 = r9402761 + r9402771;
        return r9402772;
}

double f_od(double x) {
        double r9402773 = 12.0;
        double r9402774 = x;
        double r9402775 = 16.0;
        double r9402776 = r9402774 * r9402775;
        double r9402777 = 3;
        double r9402778 = pow(r9402774, r9402777);
        double r9402779 = r9402776 * r9402778;
        double r9402780 = -48.0;
        double r9402781 = r9402774 * r9402780;
        double r9402782 = r9402781 * r9402774;
        double r9402783 = r9402779 + r9402782;
        double r9402784 = r9402773 + r9402783;
        return r9402784;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9402785, r9402786, r9402787, r9402788, r9402789, r9402790, r9402791, r9402792, r9402793, r9402794, r9402795;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402785, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402786, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9402787);
        mpfr_init(r9402788);
        mpfr_init(r9402789);
        mpfr_init(r9402790);
        mpfr_init_set_str(r9402791, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9402792);
        mpfr_init(r9402793);
        mpfr_init(r9402794);
        mpfr_init(r9402795);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9402787, x, MPFR_RNDN);
        mpfr_mul(r9402788, r9402787, r9402787, MPFR_RNDN);
        mpfr_mul(r9402789, r9402786, r9402788, MPFR_RNDN);
        mpfr_add(r9402790, r9402785, r9402789, MPFR_RNDN);
        ;
        mpfr_mul(r9402792, r9402788, r9402787, MPFR_RNDN);
        mpfr_mul(r9402793, r9402792, r9402787, MPFR_RNDN);
        mpfr_mul(r9402794, r9402791, r9402793, MPFR_RNDN);
        mpfr_add(r9402795, r9402790, r9402794, MPFR_RNDN);
        return mpfr_get_d(r9402795, MPFR_RNDN);
}

static mpfr_t r9402796, r9402797, r9402798, r9402799, r9402800, r9402801, r9402802, r9402803, r9402804, r9402805, r9402806, r9402807;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402796, "12.0", 10, MPFR_RNDN);
        mpfr_init(r9402797);
        mpfr_init_set_str(r9402798, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9402799);
        mpfr_init_set_str(r9402800, "3", 10, MPFR_RNDN);
        mpfr_init(r9402801);
        mpfr_init(r9402802);
        mpfr_init_set_str(r9402803, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9402804);
        mpfr_init(r9402805);
        mpfr_init(r9402806);
        mpfr_init(r9402807);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9402797, x, MPFR_RNDN);
        ;
        mpfr_mul(r9402799, r9402797, r9402798, MPFR_RNDN);
        ;
        mpfr_pow(r9402801, r9402797, r9402800, MPFR_RNDN);
        mpfr_mul(r9402802, r9402799, r9402801, MPFR_RNDN);
        ;
        mpfr_mul(r9402804, r9402797, r9402803, MPFR_RNDN);
        mpfr_mul(r9402805, r9402804, r9402797, MPFR_RNDN);
        mpfr_add(r9402806, r9402802, r9402805, MPFR_RNDN);
        mpfr_add(r9402807, r9402796, r9402806, MPFR_RNDN);
        return mpfr_get_d(r9402807, MPFR_RNDN);
}

static mpfr_t r9402808, r9402809, r9402810, r9402811, r9402812, r9402813, r9402814, r9402815, r9402816, r9402817, r9402818, r9402819;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402808, "12.0", 10, MPFR_RNDN);
        mpfr_init(r9402809);
        mpfr_init_set_str(r9402810, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9402811);
        mpfr_init_set_str(r9402812, "3", 10, MPFR_RNDN);
        mpfr_init(r9402813);
        mpfr_init(r9402814);
        mpfr_init_set_str(r9402815, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9402816);
        mpfr_init(r9402817);
        mpfr_init(r9402818);
        mpfr_init(r9402819);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9402809, x, MPFR_RNDN);
        ;
        mpfr_mul(r9402811, r9402809, r9402810, MPFR_RNDN);
        ;
        mpfr_pow(r9402813, r9402809, r9402812, MPFR_RNDN);
        mpfr_mul(r9402814, r9402811, r9402813, MPFR_RNDN);
        ;
        mpfr_mul(r9402816, r9402809, r9402815, MPFR_RNDN);
        mpfr_mul(r9402817, r9402816, r9402809, MPFR_RNDN);
        mpfr_add(r9402818, r9402814, r9402817, MPFR_RNDN);
        mpfr_add(r9402819, r9402808, r9402818, MPFR_RNDN);
        return mpfr_get_d(r9402819, MPFR_RNDN);
}

