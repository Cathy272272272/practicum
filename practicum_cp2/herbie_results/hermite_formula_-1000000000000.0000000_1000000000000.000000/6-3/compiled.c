#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r7603763 = -12.0;
        float r7603764 = x;
        float r7603765 = r7603763 * r7603764;
        float r7603766 = 8.0;
        float r7603767 = r7603764 * r7603764;
        float r7603768 = r7603767 * r7603764;
        float r7603769 = r7603766 * r7603768;
        float r7603770 = r7603765 + r7603769;
        return r7603770;
}

double f_id(double x) {
        double r7603771 = -12.0;
        double r7603772 = x;
        double r7603773 = r7603771 * r7603772;
        double r7603774 = 8.0;
        double r7603775 = r7603772 * r7603772;
        double r7603776 = r7603775 * r7603772;
        double r7603777 = r7603774 * r7603776;
        double r7603778 = r7603773 + r7603777;
        return r7603778;
}


double f_of(float x) {
        float r7603779 = -12.0;
        float r7603780 = x;
        float r7603781 = r7603779 * r7603780;
        float r7603782 = 8.0;
        float r7603783 = 3;
        float r7603784 = pow(r7603780, r7603783);
        float r7603785 = r7603782 * r7603784;
        float r7603786 = r7603781 + r7603785;
        return r7603786;
}

double f_od(double x) {
        double r7603787 = -12.0;
        double r7603788 = x;
        double r7603789 = r7603787 * r7603788;
        double r7603790 = 8.0;
        double r7603791 = 3;
        double r7603792 = pow(r7603788, r7603791);
        double r7603793 = r7603790 * r7603792;
        double r7603794 = r7603789 + r7603793;
        return r7603794;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7603795, r7603796, r7603797, r7603798, r7603799, r7603800, r7603801, r7603802;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603795, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7603796);
        mpfr_init(r7603797);
        mpfr_init_set_str(r7603798, "8.0", 10, MPFR_RNDN);
        mpfr_init(r7603799);
        mpfr_init(r7603800);
        mpfr_init(r7603801);
        mpfr_init(r7603802);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7603796, x, MPFR_RNDN);
        mpfr_mul(r7603797, r7603795, r7603796, MPFR_RNDN);
        ;
        mpfr_mul(r7603799, r7603796, r7603796, MPFR_RNDN);
        mpfr_mul(r7603800, r7603799, r7603796, MPFR_RNDN);
        mpfr_mul(r7603801, r7603798, r7603800, MPFR_RNDN);
        mpfr_add(r7603802, r7603797, r7603801, MPFR_RNDN);
        return mpfr_get_d(r7603802, MPFR_RNDN);
}

static mpfr_t r7603803, r7603804, r7603805, r7603806, r7603807, r7603808, r7603809, r7603810;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603803, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7603804);
        mpfr_init(r7603805);
        mpfr_init_set_str(r7603806, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603807, "3", 10, MPFR_RNDN);
        mpfr_init(r7603808);
        mpfr_init(r7603809);
        mpfr_init(r7603810);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7603804, x, MPFR_RNDN);
        mpfr_mul(r7603805, r7603803, r7603804, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7603808, r7603804, r7603807, MPFR_RNDN);
        mpfr_mul(r7603809, r7603806, r7603808, MPFR_RNDN);
        mpfr_add(r7603810, r7603805, r7603809, MPFR_RNDN);
        return mpfr_get_d(r7603810, MPFR_RNDN);
}

static mpfr_t r7603811, r7603812, r7603813, r7603814, r7603815, r7603816, r7603817, r7603818;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603811, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7603812);
        mpfr_init(r7603813);
        mpfr_init_set_str(r7603814, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603815, "3", 10, MPFR_RNDN);
        mpfr_init(r7603816);
        mpfr_init(r7603817);
        mpfr_init(r7603818);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7603812, x, MPFR_RNDN);
        mpfr_mul(r7603813, r7603811, r7603812, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7603816, r7603812, r7603815, MPFR_RNDN);
        mpfr_mul(r7603817, r7603814, r7603816, MPFR_RNDN);
        mpfr_add(r7603818, r7603813, r7603817, MPFR_RNDN);
        return mpfr_get_d(r7603818, MPFR_RNDN);
}

