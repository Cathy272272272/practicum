#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r10216755 = 1.0;
        float r10216756 = -2.0;
        float r10216757 = x;
        float r10216758 = r10216756 * r10216757;
        float r10216759 = r10216755 + r10216758;
        float r10216760 = 0.5;
        float r10216761 = r10216757 * r10216757;
        float r10216762 = r10216760 * r10216761;
        float r10216763 = r10216759 + r10216762;
        return r10216763;
}

double f_id(double x) {
        double r10216764 = 1.0;
        double r10216765 = -2.0;
        double r10216766 = x;
        double r10216767 = r10216765 * r10216766;
        double r10216768 = r10216764 + r10216767;
        double r10216769 = 0.5;
        double r10216770 = r10216766 * r10216766;
        double r10216771 = r10216769 * r10216770;
        double r10216772 = r10216768 + r10216771;
        return r10216772;
}


double f_of(float x) {
        float r10216773 = 1.0;
        float r10216774 = -2.0;
        float r10216775 = x;
        float r10216776 = r10216774 * r10216775;
        float r10216777 = r10216773 + r10216776;
        float r10216778 = 0.5;
        float r10216779 = r10216775 * r10216775;
        float r10216780 = r10216778 * r10216779;
        float r10216781 = r10216777 + r10216780;
        return r10216781;
}

double f_od(double x) {
        double r10216782 = 1.0;
        double r10216783 = -2.0;
        double r10216784 = x;
        double r10216785 = r10216783 * r10216784;
        double r10216786 = r10216782 + r10216785;
        double r10216787 = 0.5;
        double r10216788 = r10216784 * r10216784;
        double r10216789 = r10216787 * r10216788;
        double r10216790 = r10216786 + r10216789;
        return r10216790;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10216791, r10216792, r10216793, r10216794, r10216795, r10216796, r10216797, r10216798, r10216799;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10216791, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216792, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10216793);
        mpfr_init(r10216794);
        mpfr_init(r10216795);
        mpfr_init_set_str(r10216796, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10216797);
        mpfr_init(r10216798);
        mpfr_init(r10216799);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10216793, x, MPFR_RNDN);
        mpfr_mul(r10216794, r10216792, r10216793, MPFR_RNDN);
        mpfr_add(r10216795, r10216791, r10216794, MPFR_RNDN);
        ;
        mpfr_mul(r10216797, r10216793, r10216793, MPFR_RNDN);
        mpfr_mul(r10216798, r10216796, r10216797, MPFR_RNDN);
        mpfr_add(r10216799, r10216795, r10216798, MPFR_RNDN);
        return mpfr_get_d(r10216799, MPFR_RNDN);
}

static mpfr_t r10216800, r10216801, r10216802, r10216803, r10216804, r10216805, r10216806, r10216807, r10216808;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10216800, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216801, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10216802);
        mpfr_init(r10216803);
        mpfr_init(r10216804);
        mpfr_init_set_str(r10216805, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10216806);
        mpfr_init(r10216807);
        mpfr_init(r10216808);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10216802, x, MPFR_RNDN);
        mpfr_mul(r10216803, r10216801, r10216802, MPFR_RNDN);
        mpfr_add(r10216804, r10216800, r10216803, MPFR_RNDN);
        ;
        mpfr_mul(r10216806, r10216802, r10216802, MPFR_RNDN);
        mpfr_mul(r10216807, r10216805, r10216806, MPFR_RNDN);
        mpfr_add(r10216808, r10216804, r10216807, MPFR_RNDN);
        return mpfr_get_d(r10216808, MPFR_RNDN);
}

static mpfr_t r10216809, r10216810, r10216811, r10216812, r10216813, r10216814, r10216815, r10216816, r10216817;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10216809, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216810, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10216811);
        mpfr_init(r10216812);
        mpfr_init(r10216813);
        mpfr_init_set_str(r10216814, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10216815);
        mpfr_init(r10216816);
        mpfr_init(r10216817);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10216811, x, MPFR_RNDN);
        mpfr_mul(r10216812, r10216810, r10216811, MPFR_RNDN);
        mpfr_add(r10216813, r10216809, r10216812, MPFR_RNDN);
        ;
        mpfr_mul(r10216815, r10216811, r10216811, MPFR_RNDN);
        mpfr_mul(r10216816, r10216814, r10216815, MPFR_RNDN);
        mpfr_add(r10216817, r10216813, r10216816, MPFR_RNDN);
        return mpfr_get_d(r10216817, MPFR_RNDN);
}

