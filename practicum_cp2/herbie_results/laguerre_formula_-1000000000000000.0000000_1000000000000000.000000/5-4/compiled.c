#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r10198690 = 1.0;
        float r10198691 = -4.0;
        float r10198692 = x;
        float r10198693 = r10198691 * r10198692;
        float r10198694 = r10198690 + r10198693;
        float r10198695 = 3.0;
        float r10198696 = r10198692 * r10198692;
        float r10198697 = r10198695 * r10198696;
        float r10198698 = r10198694 + r10198697;
        float r10198699 = -0.666667;
        float r10198700 = r10198696 * r10198692;
        float r10198701 = r10198699 * r10198700;
        float r10198702 = r10198698 + r10198701;
        float r10198703 = 0.041667;
        float r10198704 = r10198700 * r10198692;
        float r10198705 = r10198703 * r10198704;
        float r10198706 = r10198702 + r10198705;
        return r10198706;
}

double f_id(double x) {
        double r10198707 = 1.0;
        double r10198708 = -4.0;
        double r10198709 = x;
        double r10198710 = r10198708 * r10198709;
        double r10198711 = r10198707 + r10198710;
        double r10198712 = 3.0;
        double r10198713 = r10198709 * r10198709;
        double r10198714 = r10198712 * r10198713;
        double r10198715 = r10198711 + r10198714;
        double r10198716 = -0.666667;
        double r10198717 = r10198713 * r10198709;
        double r10198718 = r10198716 * r10198717;
        double r10198719 = r10198715 + r10198718;
        double r10198720 = 0.041667;
        double r10198721 = r10198717 * r10198709;
        double r10198722 = r10198720 * r10198721;
        double r10198723 = r10198719 + r10198722;
        return r10198723;
}


double f_of(float x) {
        float r10198724 = x;
        float r10198725 = 3;
        float r10198726 = pow(r10198724, r10198725);
        float r10198727 = 0.041667;
        float r10198728 = r10198727 * r10198724;
        float r10198729 = r10198726 * r10198728;
        float r10198730 = -0.666667;
        float r10198731 = r10198726 * r10198730;
        float r10198732 = r10198729 + r10198731;
        float r10198733 = 3.0;
        float r10198734 = r10198724 * r10198733;
        float r10198735 = r10198734 * r10198724;
        float r10198736 = -4.0;
        float r10198737 = r10198724 * r10198736;
        float r10198738 = 1.0;
        float r10198739 = r10198737 + r10198738;
        float r10198740 = r10198735 + r10198739;
        float r10198741 = r10198732 + r10198740;
        return r10198741;
}

double f_od(double x) {
        double r10198742 = x;
        double r10198743 = 3;
        double r10198744 = pow(r10198742, r10198743);
        double r10198745 = 0.041667;
        double r10198746 = r10198745 * r10198742;
        double r10198747 = r10198744 * r10198746;
        double r10198748 = -0.666667;
        double r10198749 = r10198744 * r10198748;
        double r10198750 = r10198747 + r10198749;
        double r10198751 = 3.0;
        double r10198752 = r10198742 * r10198751;
        double r10198753 = r10198752 * r10198742;
        double r10198754 = -4.0;
        double r10198755 = r10198742 * r10198754;
        double r10198756 = 1.0;
        double r10198757 = r10198755 + r10198756;
        double r10198758 = r10198753 + r10198757;
        double r10198759 = r10198750 + r10198758;
        return r10198759;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10198760, r10198761, r10198762, r10198763, r10198764, r10198765, r10198766, r10198767, r10198768, r10198769, r10198770, r10198771, r10198772, r10198773, r10198774, r10198775, r10198776;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10198760, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198761, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10198762);
        mpfr_init(r10198763);
        mpfr_init(r10198764);
        mpfr_init_set_str(r10198765, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10198766);
        mpfr_init(r10198767);
        mpfr_init(r10198768);
        mpfr_init_set_str(r10198769, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10198770);
        mpfr_init(r10198771);
        mpfr_init(r10198772);
        mpfr_init_set_str(r10198773, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10198774);
        mpfr_init(r10198775);
        mpfr_init(r10198776);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10198762, x, MPFR_RNDN);
        mpfr_mul(r10198763, r10198761, r10198762, MPFR_RNDN);
        mpfr_add(r10198764, r10198760, r10198763, MPFR_RNDN);
        ;
        mpfr_mul(r10198766, r10198762, r10198762, MPFR_RNDN);
        mpfr_mul(r10198767, r10198765, r10198766, MPFR_RNDN);
        mpfr_add(r10198768, r10198764, r10198767, MPFR_RNDN);
        ;
        mpfr_mul(r10198770, r10198766, r10198762, MPFR_RNDN);
        mpfr_mul(r10198771, r10198769, r10198770, MPFR_RNDN);
        mpfr_add(r10198772, r10198768, r10198771, MPFR_RNDN);
        ;
        mpfr_mul(r10198774, r10198770, r10198762, MPFR_RNDN);
        mpfr_mul(r10198775, r10198773, r10198774, MPFR_RNDN);
        mpfr_add(r10198776, r10198772, r10198775, MPFR_RNDN);
        return mpfr_get_d(r10198776, MPFR_RNDN);
}

static mpfr_t r10198777, r10198778, r10198779, r10198780, r10198781, r10198782, r10198783, r10198784, r10198785, r10198786, r10198787, r10198788, r10198789, r10198790, r10198791, r10198792, r10198793, r10198794;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10198777);
        mpfr_init_set_str(r10198778, "3", 10, MPFR_RNDN);
        mpfr_init(r10198779);
        mpfr_init_set_str(r10198780, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10198781);
        mpfr_init(r10198782);
        mpfr_init_set_str(r10198783, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10198784);
        mpfr_init(r10198785);
        mpfr_init_set_str(r10198786, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10198787);
        mpfr_init(r10198788);
        mpfr_init_set_str(r10198789, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10198790);
        mpfr_init_set_str(r10198791, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198792);
        mpfr_init(r10198793);
        mpfr_init(r10198794);
}

double f_fm(double x) {
        mpfr_set_d(r10198777, x, MPFR_RNDN);
        ;
        mpfr_pow(r10198779, r10198777, r10198778, MPFR_RNDN);
        ;
        mpfr_mul(r10198781, r10198780, r10198777, MPFR_RNDN);
        mpfr_mul(r10198782, r10198779, r10198781, MPFR_RNDN);
        ;
        mpfr_mul(r10198784, r10198779, r10198783, MPFR_RNDN);
        mpfr_add(r10198785, r10198782, r10198784, MPFR_RNDN);
        ;
        mpfr_mul(r10198787, r10198777, r10198786, MPFR_RNDN);
        mpfr_mul(r10198788, r10198787, r10198777, MPFR_RNDN);
        ;
        mpfr_mul(r10198790, r10198777, r10198789, MPFR_RNDN);
        ;
        mpfr_add(r10198792, r10198790, r10198791, MPFR_RNDN);
        mpfr_add(r10198793, r10198788, r10198792, MPFR_RNDN);
        mpfr_add(r10198794, r10198785, r10198793, MPFR_RNDN);
        return mpfr_get_d(r10198794, MPFR_RNDN);
}

static mpfr_t r10198795, r10198796, r10198797, r10198798, r10198799, r10198800, r10198801, r10198802, r10198803, r10198804, r10198805, r10198806, r10198807, r10198808, r10198809, r10198810, r10198811, r10198812;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10198795);
        mpfr_init_set_str(r10198796, "3", 10, MPFR_RNDN);
        mpfr_init(r10198797);
        mpfr_init_set_str(r10198798, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10198799);
        mpfr_init(r10198800);
        mpfr_init_set_str(r10198801, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10198802);
        mpfr_init(r10198803);
        mpfr_init_set_str(r10198804, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10198805);
        mpfr_init(r10198806);
        mpfr_init_set_str(r10198807, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10198808);
        mpfr_init_set_str(r10198809, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198810);
        mpfr_init(r10198811);
        mpfr_init(r10198812);
}

double f_dm(double x) {
        mpfr_set_d(r10198795, x, MPFR_RNDN);
        ;
        mpfr_pow(r10198797, r10198795, r10198796, MPFR_RNDN);
        ;
        mpfr_mul(r10198799, r10198798, r10198795, MPFR_RNDN);
        mpfr_mul(r10198800, r10198797, r10198799, MPFR_RNDN);
        ;
        mpfr_mul(r10198802, r10198797, r10198801, MPFR_RNDN);
        mpfr_add(r10198803, r10198800, r10198802, MPFR_RNDN);
        ;
        mpfr_mul(r10198805, r10198795, r10198804, MPFR_RNDN);
        mpfr_mul(r10198806, r10198805, r10198795, MPFR_RNDN);
        ;
        mpfr_mul(r10198808, r10198795, r10198807, MPFR_RNDN);
        ;
        mpfr_add(r10198810, r10198808, r10198809, MPFR_RNDN);
        mpfr_add(r10198811, r10198806, r10198810, MPFR_RNDN);
        mpfr_add(r10198812, r10198803, r10198811, MPFR_RNDN);
        return mpfr_get_d(r10198812, MPFR_RNDN);
}

