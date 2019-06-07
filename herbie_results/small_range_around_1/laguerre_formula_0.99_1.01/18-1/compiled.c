#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r83192651 = 1.0;
        float r83192652 = -1.0;
        float r83192653 = x;
        float r83192654 = r83192652 * r83192653;
        float r83192655 = r83192651 + r83192654;
        return r83192655;
}

double f_id(double x) {
        double r83192656 = 1.0;
        double r83192657 = -1.0;
        double r83192658 = x;
        double r83192659 = r83192657 * r83192658;
        double r83192660 = r83192656 + r83192659;
        return r83192660;
}


double f_of(float x) {
        float r83192661 = 1.0;
        float r83192662 = -1.0;
        float r83192663 = x;
        float r83192664 = r83192662 * r83192663;
        float r83192665 = r83192661 + r83192664;
        return r83192665;
}

double f_od(double x) {
        double r83192666 = 1.0;
        double r83192667 = -1.0;
        double r83192668 = x;
        double r83192669 = r83192667 * r83192668;
        double r83192670 = r83192666 + r83192669;
        return r83192670;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83192671, r83192672, r83192673, r83192674, r83192675;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83192671, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83192672, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r83192673);
        mpfr_init(r83192674);
        mpfr_init(r83192675);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83192673, x, MPFR_RNDN);
        mpfr_mul(r83192674, r83192672, r83192673, MPFR_RNDN);
        mpfr_add(r83192675, r83192671, r83192674, MPFR_RNDN);
        return mpfr_get_d(r83192675, MPFR_RNDN);
}

static mpfr_t r83192676, r83192677, r83192678, r83192679, r83192680;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83192676, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83192677, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r83192678);
        mpfr_init(r83192679);
        mpfr_init(r83192680);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r83192678, x, MPFR_RNDN);
        mpfr_mul(r83192679, r83192677, r83192678, MPFR_RNDN);
        mpfr_add(r83192680, r83192676, r83192679, MPFR_RNDN);
        return mpfr_get_d(r83192680, MPFR_RNDN);
}

static mpfr_t r83192681, r83192682, r83192683, r83192684, r83192685;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83192681, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83192682, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r83192683);
        mpfr_init(r83192684);
        mpfr_init(r83192685);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r83192683, x, MPFR_RNDN);
        mpfr_mul(r83192684, r83192682, r83192683, MPFR_RNDN);
        mpfr_add(r83192685, r83192681, r83192684, MPFR_RNDN);
        return mpfr_get_d(r83192685, MPFR_RNDN);
}

