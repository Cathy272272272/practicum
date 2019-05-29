#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r8956669 = 2.0;
        float r8956670 = x;
        float r8956671 = r8956669 * r8956670;
        return r8956671;
}

double f_id(double x) {
        double r8956672 = 2.0;
        double r8956673 = x;
        double r8956674 = r8956672 * r8956673;
        return r8956674;
}


double f_of(float x) {
        float r8956675 = 2.0;
        float r8956676 = x;
        float r8956677 = r8956675 * r8956676;
        return r8956677;
}

double f_od(double x) {
        double r8956678 = 2.0;
        double r8956679 = x;
        double r8956680 = r8956678 * r8956679;
        return r8956680;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8956681, r8956682, r8956683;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8956681, "2.0", 10, MPFR_RNDN);
        mpfr_init(r8956682);
        mpfr_init(r8956683);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8956682, x, MPFR_RNDN);
        mpfr_mul(r8956683, r8956681, r8956682, MPFR_RNDN);
        return mpfr_get_d(r8956683, MPFR_RNDN);
}

static mpfr_t r8956684, r8956685, r8956686;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8956684, "2.0", 10, MPFR_RNDN);
        mpfr_init(r8956685);
        mpfr_init(r8956686);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8956685, x, MPFR_RNDN);
        mpfr_mul(r8956686, r8956684, r8956685, MPFR_RNDN);
        return mpfr_get_d(r8956686, MPFR_RNDN);
}

static mpfr_t r8956687, r8956688, r8956689;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8956687, "2.0", 10, MPFR_RNDN);
        mpfr_init(r8956688);
        mpfr_init(r8956689);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8956688, x, MPFR_RNDN);
        mpfr_mul(r8956689, r8956687, r8956688, MPFR_RNDN);
        return mpfr_get_d(r8956689, MPFR_RNDN);
}

