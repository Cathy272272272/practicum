#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7167830 = -0.5;
        float r7167831 = 1.5;
        float r7167832 = x;
        float r7167833 = r7167832 * r7167832;
        float r7167834 = r7167831 * r7167833;
        float r7167835 = r7167830 + r7167834;
        return r7167835;
}

double f_id(double x) {
        double r7167836 = -0.5;
        double r7167837 = 1.5;
        double r7167838 = x;
        double r7167839 = r7167838 * r7167838;
        double r7167840 = r7167837 * r7167839;
        double r7167841 = r7167836 + r7167840;
        return r7167841;
}


double f_of(float x) {
        float r7167842 = -0.5;
        float r7167843 = 1.5;
        float r7167844 = x;
        float r7167845 = r7167843 * r7167844;
        float r7167846 = r7167845 * r7167844;
        float r7167847 = r7167842 + r7167846;
        return r7167847;
}

double f_od(double x) {
        double r7167848 = -0.5;
        double r7167849 = 1.5;
        double r7167850 = x;
        double r7167851 = r7167849 * r7167850;
        double r7167852 = r7167851 * r7167850;
        double r7167853 = r7167848 + r7167852;
        return r7167853;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7167854, r7167855, r7167856, r7167857, r7167858, r7167859;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7167854, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167855, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7167856);
        mpfr_init(r7167857);
        mpfr_init(r7167858);
        mpfr_init(r7167859);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7167856, x, MPFR_RNDN);
        mpfr_mul(r7167857, r7167856, r7167856, MPFR_RNDN);
        mpfr_mul(r7167858, r7167855, r7167857, MPFR_RNDN);
        mpfr_add(r7167859, r7167854, r7167858, MPFR_RNDN);
        return mpfr_get_d(r7167859, MPFR_RNDN);
}

static mpfr_t r7167860, r7167861, r7167862, r7167863, r7167864, r7167865;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7167860, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167861, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7167862);
        mpfr_init(r7167863);
        mpfr_init(r7167864);
        mpfr_init(r7167865);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7167862, x, MPFR_RNDN);
        mpfr_mul(r7167863, r7167861, r7167862, MPFR_RNDN);
        mpfr_mul(r7167864, r7167863, r7167862, MPFR_RNDN);
        mpfr_add(r7167865, r7167860, r7167864, MPFR_RNDN);
        return mpfr_get_d(r7167865, MPFR_RNDN);
}

static mpfr_t r7167866, r7167867, r7167868, r7167869, r7167870, r7167871;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7167866, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167867, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7167868);
        mpfr_init(r7167869);
        mpfr_init(r7167870);
        mpfr_init(r7167871);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7167868, x, MPFR_RNDN);
        mpfr_mul(r7167869, r7167867, r7167868, MPFR_RNDN);
        mpfr_mul(r7167870, r7167869, r7167868, MPFR_RNDN);
        mpfr_add(r7167871, r7167866, r7167870, MPFR_RNDN);
        return mpfr_get_d(r7167871, MPFR_RNDN);
}

