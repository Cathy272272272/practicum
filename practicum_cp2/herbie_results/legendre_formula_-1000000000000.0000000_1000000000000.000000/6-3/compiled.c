#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r7167774 = -1.5;
        float r7167775 = x;
        float r7167776 = r7167774 * r7167775;
        float r7167777 = 2.5;
        float r7167778 = r7167775 * r7167775;
        float r7167779 = r7167778 * r7167775;
        float r7167780 = r7167777 * r7167779;
        float r7167781 = r7167776 + r7167780;
        return r7167781;
}

double f_id(double x) {
        double r7167782 = -1.5;
        double r7167783 = x;
        double r7167784 = r7167782 * r7167783;
        double r7167785 = 2.5;
        double r7167786 = r7167783 * r7167783;
        double r7167787 = r7167786 * r7167783;
        double r7167788 = r7167785 * r7167787;
        double r7167789 = r7167784 + r7167788;
        return r7167789;
}


double f_of(float x) {
        float r7167790 = -1.5;
        float r7167791 = x;
        float r7167792 = r7167790 * r7167791;
        float r7167793 = 2.5;
        float r7167794 = 3;
        float r7167795 = pow(r7167791, r7167794);
        float r7167796 = r7167793 * r7167795;
        float r7167797 = r7167792 + r7167796;
        return r7167797;
}

double f_od(double x) {
        double r7167798 = -1.5;
        double r7167799 = x;
        double r7167800 = r7167798 * r7167799;
        double r7167801 = 2.5;
        double r7167802 = 3;
        double r7167803 = pow(r7167799, r7167802);
        double r7167804 = r7167801 * r7167803;
        double r7167805 = r7167800 + r7167804;
        return r7167805;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7167806, r7167807, r7167808, r7167809, r7167810, r7167811, r7167812, r7167813;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7167806, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7167807);
        mpfr_init(r7167808);
        mpfr_init_set_str(r7167809, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7167810);
        mpfr_init(r7167811);
        mpfr_init(r7167812);
        mpfr_init(r7167813);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7167807, x, MPFR_RNDN);
        mpfr_mul(r7167808, r7167806, r7167807, MPFR_RNDN);
        ;
        mpfr_mul(r7167810, r7167807, r7167807, MPFR_RNDN);
        mpfr_mul(r7167811, r7167810, r7167807, MPFR_RNDN);
        mpfr_mul(r7167812, r7167809, r7167811, MPFR_RNDN);
        mpfr_add(r7167813, r7167808, r7167812, MPFR_RNDN);
        return mpfr_get_d(r7167813, MPFR_RNDN);
}

static mpfr_t r7167814, r7167815, r7167816, r7167817, r7167818, r7167819, r7167820, r7167821;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7167814, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7167815);
        mpfr_init(r7167816);
        mpfr_init_set_str(r7167817, "2.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167818, "3", 10, MPFR_RNDN);
        mpfr_init(r7167819);
        mpfr_init(r7167820);
        mpfr_init(r7167821);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7167815, x, MPFR_RNDN);
        mpfr_mul(r7167816, r7167814, r7167815, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7167819, r7167815, r7167818, MPFR_RNDN);
        mpfr_mul(r7167820, r7167817, r7167819, MPFR_RNDN);
        mpfr_add(r7167821, r7167816, r7167820, MPFR_RNDN);
        return mpfr_get_d(r7167821, MPFR_RNDN);
}

static mpfr_t r7167822, r7167823, r7167824, r7167825, r7167826, r7167827, r7167828, r7167829;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7167822, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7167823);
        mpfr_init(r7167824);
        mpfr_init_set_str(r7167825, "2.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167826, "3", 10, MPFR_RNDN);
        mpfr_init(r7167827);
        mpfr_init(r7167828);
        mpfr_init(r7167829);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7167823, x, MPFR_RNDN);
        mpfr_mul(r7167824, r7167822, r7167823, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7167827, r7167823, r7167826, MPFR_RNDN);
        mpfr_mul(r7167828, r7167825, r7167827, MPFR_RNDN);
        mpfr_add(r7167829, r7167824, r7167828, MPFR_RNDN);
        return mpfr_get_d(r7167829, MPFR_RNDN);
}

