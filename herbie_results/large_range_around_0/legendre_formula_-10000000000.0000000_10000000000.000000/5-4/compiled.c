#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r8924755 = 0.375;
        float r8924756 = -3.75;
        float r8924757 = x;
        float r8924758 = r8924757 * r8924757;
        float r8924759 = r8924756 * r8924758;
        float r8924760 = r8924755 + r8924759;
        float r8924761 = 4.375;
        float r8924762 = r8924758 * r8924757;
        float r8924763 = r8924762 * r8924757;
        float r8924764 = r8924761 * r8924763;
        float r8924765 = r8924760 + r8924764;
        return r8924765;
}

double f_id(double x) {
        double r8924766 = 0.375;
        double r8924767 = -3.75;
        double r8924768 = x;
        double r8924769 = r8924768 * r8924768;
        double r8924770 = r8924767 * r8924769;
        double r8924771 = r8924766 + r8924770;
        double r8924772 = 4.375;
        double r8924773 = r8924769 * r8924768;
        double r8924774 = r8924773 * r8924768;
        double r8924775 = r8924772 * r8924774;
        double r8924776 = r8924771 + r8924775;
        return r8924776;
}


double f_of(float x) {
        float r8924777 = 0.375;
        float r8924778 = x;
        float r8924779 = 4.375;
        float r8924780 = r8924778 * r8924779;
        float r8924781 = 3;
        float r8924782 = pow(r8924778, r8924781);
        float r8924783 = r8924780 * r8924782;
        float r8924784 = -3.75;
        float r8924785 = 2;
        float r8924786 = pow(r8924778, r8924785);
        float r8924787 = r8924784 * r8924786;
        float r8924788 = r8924783 + r8924787;
        float r8924789 = r8924777 + r8924788;
        return r8924789;
}

double f_od(double x) {
        double r8924790 = 0.375;
        double r8924791 = x;
        double r8924792 = 4.375;
        double r8924793 = r8924791 * r8924792;
        double r8924794 = 3;
        double r8924795 = pow(r8924791, r8924794);
        double r8924796 = r8924793 * r8924795;
        double r8924797 = -3.75;
        double r8924798 = 2;
        double r8924799 = pow(r8924791, r8924798);
        double r8924800 = r8924797 * r8924799;
        double r8924801 = r8924796 + r8924800;
        double r8924802 = r8924790 + r8924801;
        return r8924802;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8924803, r8924804, r8924805, r8924806, r8924807, r8924808, r8924809, r8924810, r8924811, r8924812, r8924813;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8924803, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924804, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r8924805);
        mpfr_init(r8924806);
        mpfr_init(r8924807);
        mpfr_init(r8924808);
        mpfr_init_set_str(r8924809, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8924810);
        mpfr_init(r8924811);
        mpfr_init(r8924812);
        mpfr_init(r8924813);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8924805, x, MPFR_RNDN);
        mpfr_mul(r8924806, r8924805, r8924805, MPFR_RNDN);
        mpfr_mul(r8924807, r8924804, r8924806, MPFR_RNDN);
        mpfr_add(r8924808, r8924803, r8924807, MPFR_RNDN);
        ;
        mpfr_mul(r8924810, r8924806, r8924805, MPFR_RNDN);
        mpfr_mul(r8924811, r8924810, r8924805, MPFR_RNDN);
        mpfr_mul(r8924812, r8924809, r8924811, MPFR_RNDN);
        mpfr_add(r8924813, r8924808, r8924812, MPFR_RNDN);
        return mpfr_get_d(r8924813, MPFR_RNDN);
}

static mpfr_t r8924814, r8924815, r8924816, r8924817, r8924818, r8924819, r8924820, r8924821, r8924822, r8924823, r8924824, r8924825, r8924826;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8924814, "0.375", 10, MPFR_RNDN);
        mpfr_init(r8924815);
        mpfr_init_set_str(r8924816, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8924817);
        mpfr_init_set_str(r8924818, "3", 10, MPFR_RNDN);
        mpfr_init(r8924819);
        mpfr_init(r8924820);
        mpfr_init_set_str(r8924821, "-3.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924822, "2", 10, MPFR_RNDN);
        mpfr_init(r8924823);
        mpfr_init(r8924824);
        mpfr_init(r8924825);
        mpfr_init(r8924826);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8924815, x, MPFR_RNDN);
        ;
        mpfr_mul(r8924817, r8924815, r8924816, MPFR_RNDN);
        ;
        mpfr_pow(r8924819, r8924815, r8924818, MPFR_RNDN);
        mpfr_mul(r8924820, r8924817, r8924819, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8924823, r8924815, r8924822, MPFR_RNDN);
        mpfr_mul(r8924824, r8924821, r8924823, MPFR_RNDN);
        mpfr_add(r8924825, r8924820, r8924824, MPFR_RNDN);
        mpfr_add(r8924826, r8924814, r8924825, MPFR_RNDN);
        return mpfr_get_d(r8924826, MPFR_RNDN);
}

static mpfr_t r8924827, r8924828, r8924829, r8924830, r8924831, r8924832, r8924833, r8924834, r8924835, r8924836, r8924837, r8924838, r8924839;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8924827, "0.375", 10, MPFR_RNDN);
        mpfr_init(r8924828);
        mpfr_init_set_str(r8924829, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8924830);
        mpfr_init_set_str(r8924831, "3", 10, MPFR_RNDN);
        mpfr_init(r8924832);
        mpfr_init(r8924833);
        mpfr_init_set_str(r8924834, "-3.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924835, "2", 10, MPFR_RNDN);
        mpfr_init(r8924836);
        mpfr_init(r8924837);
        mpfr_init(r8924838);
        mpfr_init(r8924839);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8924828, x, MPFR_RNDN);
        ;
        mpfr_mul(r8924830, r8924828, r8924829, MPFR_RNDN);
        ;
        mpfr_pow(r8924832, r8924828, r8924831, MPFR_RNDN);
        mpfr_mul(r8924833, r8924830, r8924832, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8924836, r8924828, r8924835, MPFR_RNDN);
        mpfr_mul(r8924837, r8924834, r8924836, MPFR_RNDN);
        mpfr_add(r8924838, r8924833, r8924837, MPFR_RNDN);
        mpfr_add(r8924839, r8924827, r8924838, MPFR_RNDN);
        return mpfr_get_d(r8924839, MPFR_RNDN);
}

