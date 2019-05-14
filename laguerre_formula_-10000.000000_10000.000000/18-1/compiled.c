#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r10747821 = 1.0;
        float r10747822 = -1.0;
        float r10747823 = x;
        float r10747824 = r10747822 * r10747823;
        float r10747825 = r10747821 + r10747824;
        return r10747825;
}

double f_id(double x) {
        double r10747826 = 1.0;
        double r10747827 = -1.0;
        double r10747828 = x;
        double r10747829 = r10747827 * r10747828;
        double r10747830 = r10747826 + r10747829;
        return r10747830;
}


double f_of(float x) {
        float r10747831 = 1.0;
        float r10747832 = -1.0;
        float r10747833 = x;
        float r10747834 = r10747832 * r10747833;
        float r10747835 = r10747831 + r10747834;
        return r10747835;
}

double f_od(double x) {
        double r10747836 = 1.0;
        double r10747837 = -1.0;
        double r10747838 = x;
        double r10747839 = r10747837 * r10747838;
        double r10747840 = r10747836 + r10747839;
        return r10747840;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10747841, r10747842, r10747843, r10747844, r10747845;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10747841, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10747842, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10747843);
        mpfr_init(r10747844);
        mpfr_init(r10747845);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10747843, x, MPFR_RNDN);
        mpfr_mul(r10747844, r10747842, r10747843, MPFR_RNDN);
        mpfr_add(r10747845, r10747841, r10747844, MPFR_RNDN);
        return mpfr_get_d(r10747845, MPFR_RNDN);
}

static mpfr_t r10747846, r10747847, r10747848, r10747849, r10747850;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10747846, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10747847, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10747848);
        mpfr_init(r10747849);
        mpfr_init(r10747850);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10747848, x, MPFR_RNDN);
        mpfr_mul(r10747849, r10747847, r10747848, MPFR_RNDN);
        mpfr_add(r10747850, r10747846, r10747849, MPFR_RNDN);
        return mpfr_get_d(r10747850, MPFR_RNDN);
}

static mpfr_t r10747851, r10747852, r10747853, r10747854, r10747855;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10747851, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10747852, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10747853);
        mpfr_init(r10747854);
        mpfr_init(r10747855);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10747853, x, MPFR_RNDN);
        mpfr_mul(r10747854, r10747852, r10747853, MPFR_RNDN);
        mpfr_add(r10747855, r10747851, r10747854, MPFR_RNDN);
        return mpfr_get_d(r10747855, MPFR_RNDN);
}

