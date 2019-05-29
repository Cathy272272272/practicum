#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r11056621 = 2.0;
        float r11056622 = x;
        float r11056623 = r11056621 * r11056622;
        return r11056623;
}

double f_id(double x) {
        double r11056624 = 2.0;
        double r11056625 = x;
        double r11056626 = r11056624 * r11056625;
        return r11056626;
}


double f_of(float x) {
        float r11056627 = 2.0;
        float r11056628 = x;
        float r11056629 = r11056627 * r11056628;
        return r11056629;
}

double f_od(double x) {
        double r11056630 = 2.0;
        double r11056631 = x;
        double r11056632 = r11056630 * r11056631;
        return r11056632;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11056633, r11056634, r11056635;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11056633, "2.0", 10, MPFR_RNDN);
        mpfr_init(r11056634);
        mpfr_init(r11056635);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11056634, x, MPFR_RNDN);
        mpfr_mul(r11056635, r11056633, r11056634, MPFR_RNDN);
        return mpfr_get_d(r11056635, MPFR_RNDN);
}

static mpfr_t r11056636, r11056637, r11056638;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11056636, "2.0", 10, MPFR_RNDN);
        mpfr_init(r11056637);
        mpfr_init(r11056638);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11056637, x, MPFR_RNDN);
        mpfr_mul(r11056638, r11056636, r11056637, MPFR_RNDN);
        return mpfr_get_d(r11056638, MPFR_RNDN);
}

static mpfr_t r11056639, r11056640, r11056641;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11056639, "2.0", 10, MPFR_RNDN);
        mpfr_init(r11056640);
        mpfr_init(r11056641);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11056640, x, MPFR_RNDN);
        mpfr_mul(r11056641, r11056639, r11056640, MPFR_RNDN);
        return mpfr_get_d(r11056641, MPFR_RNDN);
}

