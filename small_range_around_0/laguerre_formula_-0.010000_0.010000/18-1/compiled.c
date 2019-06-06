#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r3281786 = 1.0;
        float r3281787 = -1.0;
        float r3281788 = x;
        float r3281789 = r3281787 * r3281788;
        float r3281790 = r3281786 + r3281789;
        return r3281790;
}

double f_id(double x) {
        double r3281791 = 1.0;
        double r3281792 = -1.0;
        double r3281793 = x;
        double r3281794 = r3281792 * r3281793;
        double r3281795 = r3281791 + r3281794;
        return r3281795;
}


double f_of(float x) {
        float r3281796 = 1.0;
        float r3281797 = -1.0;
        float r3281798 = x;
        float r3281799 = r3281797 * r3281798;
        float r3281800 = r3281796 + r3281799;
        return r3281800;
}

double f_od(double x) {
        double r3281801 = 1.0;
        double r3281802 = -1.0;
        double r3281803 = x;
        double r3281804 = r3281802 * r3281803;
        double r3281805 = r3281801 + r3281804;
        return r3281805;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3281806, r3281807, r3281808, r3281809, r3281810;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3281806, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281807, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r3281808);
        mpfr_init(r3281809);
        mpfr_init(r3281810);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3281808, x, MPFR_RNDN);
        mpfr_mul(r3281809, r3281807, r3281808, MPFR_RNDN);
        mpfr_add(r3281810, r3281806, r3281809, MPFR_RNDN);
        return mpfr_get_d(r3281810, MPFR_RNDN);
}

static mpfr_t r3281811, r3281812, r3281813, r3281814, r3281815;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3281811, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281812, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r3281813);
        mpfr_init(r3281814);
        mpfr_init(r3281815);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3281813, x, MPFR_RNDN);
        mpfr_mul(r3281814, r3281812, r3281813, MPFR_RNDN);
        mpfr_add(r3281815, r3281811, r3281814, MPFR_RNDN);
        return mpfr_get_d(r3281815, MPFR_RNDN);
}

static mpfr_t r3281816, r3281817, r3281818, r3281819, r3281820;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3281816, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281817, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r3281818);
        mpfr_init(r3281819);
        mpfr_init(r3281820);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3281818, x, MPFR_RNDN);
        mpfr_mul(r3281819, r3281817, r3281818, MPFR_RNDN);
        mpfr_add(r3281820, r3281816, r3281819, MPFR_RNDN);
        return mpfr_get_d(r3281820, MPFR_RNDN);
}

