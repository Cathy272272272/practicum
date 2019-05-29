#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6432780 = 0.375;
        float r6432781 = -3.75;
        float r6432782 = x;
        float r6432783 = r6432782 * r6432782;
        float r6432784 = r6432781 * r6432783;
        float r6432785 = r6432780 + r6432784;
        float r6432786 = 4.375;
        float r6432787 = r6432783 * r6432782;
        float r6432788 = r6432787 * r6432782;
        float r6432789 = r6432786 * r6432788;
        float r6432790 = r6432785 + r6432789;
        return r6432790;
}

double f_id(double x) {
        double r6432791 = 0.375;
        double r6432792 = -3.75;
        double r6432793 = x;
        double r6432794 = r6432793 * r6432793;
        double r6432795 = r6432792 * r6432794;
        double r6432796 = r6432791 + r6432795;
        double r6432797 = 4.375;
        double r6432798 = r6432794 * r6432793;
        double r6432799 = r6432798 * r6432793;
        double r6432800 = r6432797 * r6432799;
        double r6432801 = r6432796 + r6432800;
        return r6432801;
}


double f_of(float x) {
        float r6432802 = 0.375;
        float r6432803 = x;
        float r6432804 = 4.375;
        float r6432805 = r6432803 * r6432804;
        float r6432806 = 3;
        float r6432807 = pow(r6432803, r6432806);
        float r6432808 = r6432805 * r6432807;
        float r6432809 = -3.75;
        float r6432810 = r6432803 * r6432809;
        float r6432811 = r6432810 * r6432803;
        float r6432812 = r6432808 + r6432811;
        float r6432813 = r6432802 + r6432812;
        return r6432813;
}

double f_od(double x) {
        double r6432814 = 0.375;
        double r6432815 = x;
        double r6432816 = 4.375;
        double r6432817 = r6432815 * r6432816;
        double r6432818 = 3;
        double r6432819 = pow(r6432815, r6432818);
        double r6432820 = r6432817 * r6432819;
        double r6432821 = -3.75;
        double r6432822 = r6432815 * r6432821;
        double r6432823 = r6432822 * r6432815;
        double r6432824 = r6432820 + r6432823;
        double r6432825 = r6432814 + r6432824;
        return r6432825;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6432826, r6432827, r6432828, r6432829, r6432830, r6432831, r6432832, r6432833, r6432834, r6432835, r6432836;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6432826, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432827, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6432828);
        mpfr_init(r6432829);
        mpfr_init(r6432830);
        mpfr_init(r6432831);
        mpfr_init_set_str(r6432832, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6432833);
        mpfr_init(r6432834);
        mpfr_init(r6432835);
        mpfr_init(r6432836);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6432828, x, MPFR_RNDN);
        mpfr_mul(r6432829, r6432828, r6432828, MPFR_RNDN);
        mpfr_mul(r6432830, r6432827, r6432829, MPFR_RNDN);
        mpfr_add(r6432831, r6432826, r6432830, MPFR_RNDN);
        ;
        mpfr_mul(r6432833, r6432829, r6432828, MPFR_RNDN);
        mpfr_mul(r6432834, r6432833, r6432828, MPFR_RNDN);
        mpfr_mul(r6432835, r6432832, r6432834, MPFR_RNDN);
        mpfr_add(r6432836, r6432831, r6432835, MPFR_RNDN);
        return mpfr_get_d(r6432836, MPFR_RNDN);
}

static mpfr_t r6432837, r6432838, r6432839, r6432840, r6432841, r6432842, r6432843, r6432844, r6432845, r6432846, r6432847, r6432848;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6432837, "0.375", 10, MPFR_RNDN);
        mpfr_init(r6432838);
        mpfr_init_set_str(r6432839, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6432840);
        mpfr_init_set_str(r6432841, "3", 10, MPFR_RNDN);
        mpfr_init(r6432842);
        mpfr_init(r6432843);
        mpfr_init_set_str(r6432844, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6432845);
        mpfr_init(r6432846);
        mpfr_init(r6432847);
        mpfr_init(r6432848);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6432838, x, MPFR_RNDN);
        ;
        mpfr_mul(r6432840, r6432838, r6432839, MPFR_RNDN);
        ;
        mpfr_pow(r6432842, r6432838, r6432841, MPFR_RNDN);
        mpfr_mul(r6432843, r6432840, r6432842, MPFR_RNDN);
        ;
        mpfr_mul(r6432845, r6432838, r6432844, MPFR_RNDN);
        mpfr_mul(r6432846, r6432845, r6432838, MPFR_RNDN);
        mpfr_add(r6432847, r6432843, r6432846, MPFR_RNDN);
        mpfr_add(r6432848, r6432837, r6432847, MPFR_RNDN);
        return mpfr_get_d(r6432848, MPFR_RNDN);
}

static mpfr_t r6432849, r6432850, r6432851, r6432852, r6432853, r6432854, r6432855, r6432856, r6432857, r6432858, r6432859, r6432860;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6432849, "0.375", 10, MPFR_RNDN);
        mpfr_init(r6432850);
        mpfr_init_set_str(r6432851, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6432852);
        mpfr_init_set_str(r6432853, "3", 10, MPFR_RNDN);
        mpfr_init(r6432854);
        mpfr_init(r6432855);
        mpfr_init_set_str(r6432856, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6432857);
        mpfr_init(r6432858);
        mpfr_init(r6432859);
        mpfr_init(r6432860);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6432850, x, MPFR_RNDN);
        ;
        mpfr_mul(r6432852, r6432850, r6432851, MPFR_RNDN);
        ;
        mpfr_pow(r6432854, r6432850, r6432853, MPFR_RNDN);
        mpfr_mul(r6432855, r6432852, r6432854, MPFR_RNDN);
        ;
        mpfr_mul(r6432857, r6432850, r6432856, MPFR_RNDN);
        mpfr_mul(r6432858, r6432857, r6432850, MPFR_RNDN);
        mpfr_add(r6432859, r6432855, r6432858, MPFR_RNDN);
        mpfr_add(r6432860, r6432849, r6432859, MPFR_RNDN);
        return mpfr_get_d(r6432860, MPFR_RNDN);
}

