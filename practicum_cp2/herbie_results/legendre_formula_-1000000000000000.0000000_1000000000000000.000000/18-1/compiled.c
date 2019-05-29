#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r8034843 = 1.0;
        float r8034844 = x;
        float r8034845 = r8034843 * r8034844;
        return r8034845;
}

double f_id(double x) {
        double r8034846 = 1.0;
        double r8034847 = x;
        double r8034848 = r8034846 * r8034847;
        return r8034848;
}


double f_of(float x) {
        float r8034849 = 1.0;
        float r8034850 = x;
        float r8034851 = r8034849 * r8034850;
        return r8034851;
}

double f_od(double x) {
        double r8034852 = 1.0;
        double r8034853 = x;
        double r8034854 = r8034852 * r8034853;
        return r8034854;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8034855, r8034856, r8034857;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8034855, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8034856);
        mpfr_init(r8034857);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8034856, x, MPFR_RNDN);
        mpfr_mul(r8034857, r8034855, r8034856, MPFR_RNDN);
        return mpfr_get_d(r8034857, MPFR_RNDN);
}

static mpfr_t r8034858, r8034859, r8034860;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8034858, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8034859);
        mpfr_init(r8034860);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8034859, x, MPFR_RNDN);
        mpfr_mul(r8034860, r8034858, r8034859, MPFR_RNDN);
        return mpfr_get_d(r8034860, MPFR_RNDN);
}

static mpfr_t r8034861, r8034862, r8034863;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8034861, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8034862);
        mpfr_init(r8034863);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8034862, x, MPFR_RNDN);
        mpfr_mul(r8034863, r8034861, r8034862, MPFR_RNDN);
        return mpfr_get_d(r8034863, MPFR_RNDN);
}

