#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7603819 = -2.0;
        float r7603820 = 4.0;
        float r7603821 = x;
        float r7603822 = r7603821 * r7603821;
        float r7603823 = r7603820 * r7603822;
        float r7603824 = r7603819 + r7603823;
        return r7603824;
}

double f_id(double x) {
        double r7603825 = -2.0;
        double r7603826 = 4.0;
        double r7603827 = x;
        double r7603828 = r7603827 * r7603827;
        double r7603829 = r7603826 * r7603828;
        double r7603830 = r7603825 + r7603829;
        return r7603830;
}


double f_of(float x) {
        float r7603831 = -2.0;
        float r7603832 = 4.0;
        float r7603833 = x;
        float r7603834 = r7603833 * r7603833;
        float r7603835 = r7603832 * r7603834;
        float r7603836 = r7603831 + r7603835;
        return r7603836;
}

double f_od(double x) {
        double r7603837 = -2.0;
        double r7603838 = 4.0;
        double r7603839 = x;
        double r7603840 = r7603839 * r7603839;
        double r7603841 = r7603838 * r7603840;
        double r7603842 = r7603837 + r7603841;
        return r7603842;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7603843, r7603844, r7603845, r7603846, r7603847, r7603848;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603843, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603844, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7603845);
        mpfr_init(r7603846);
        mpfr_init(r7603847);
        mpfr_init(r7603848);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7603845, x, MPFR_RNDN);
        mpfr_mul(r7603846, r7603845, r7603845, MPFR_RNDN);
        mpfr_mul(r7603847, r7603844, r7603846, MPFR_RNDN);
        mpfr_add(r7603848, r7603843, r7603847, MPFR_RNDN);
        return mpfr_get_d(r7603848, MPFR_RNDN);
}

static mpfr_t r7603849, r7603850, r7603851, r7603852, r7603853, r7603854;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603849, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603850, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7603851);
        mpfr_init(r7603852);
        mpfr_init(r7603853);
        mpfr_init(r7603854);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7603851, x, MPFR_RNDN);
        mpfr_mul(r7603852, r7603851, r7603851, MPFR_RNDN);
        mpfr_mul(r7603853, r7603850, r7603852, MPFR_RNDN);
        mpfr_add(r7603854, r7603849, r7603853, MPFR_RNDN);
        return mpfr_get_d(r7603854, MPFR_RNDN);
}

static mpfr_t r7603855, r7603856, r7603857, r7603858, r7603859, r7603860;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603855, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603856, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7603857);
        mpfr_init(r7603858);
        mpfr_init(r7603859);
        mpfr_init(r7603860);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7603857, x, MPFR_RNDN);
        mpfr_mul(r7603858, r7603857, r7603857, MPFR_RNDN);
        mpfr_mul(r7603859, r7603856, r7603858, MPFR_RNDN);
        mpfr_add(r7603860, r7603855, r7603859, MPFR_RNDN);
        return mpfr_get_d(r7603860, MPFR_RNDN);
}

