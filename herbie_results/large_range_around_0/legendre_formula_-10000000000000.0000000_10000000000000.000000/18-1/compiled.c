#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7516995 = 1.0;
        float r7516996 = x;
        float r7516997 = r7516995 * r7516996;
        return r7516997;
}

double f_id(double x) {
        double r7516998 = 1.0;
        double r7516999 = x;
        double r7517000 = r7516998 * r7516999;
        return r7517000;
}


double f_of(float x) {
        float r7517001 = 1.0;
        float r7517002 = x;
        float r7517003 = r7517001 * r7517002;
        return r7517003;
}

double f_od(double x) {
        double r7517004 = 1.0;
        double r7517005 = x;
        double r7517006 = r7517004 * r7517005;
        return r7517006;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7517007, r7517008, r7517009;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7517007, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7517008);
        mpfr_init(r7517009);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7517008, x, MPFR_RNDN);
        mpfr_mul(r7517009, r7517007, r7517008, MPFR_RNDN);
        return mpfr_get_d(r7517009, MPFR_RNDN);
}

static mpfr_t r7517010, r7517011, r7517012;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7517010, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7517011);
        mpfr_init(r7517012);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7517011, x, MPFR_RNDN);
        mpfr_mul(r7517012, r7517010, r7517011, MPFR_RNDN);
        return mpfr_get_d(r7517012, MPFR_RNDN);
}

static mpfr_t r7517013, r7517014, r7517015;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7517013, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7517014);
        mpfr_init(r7517015);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7517014, x, MPFR_RNDN);
        mpfr_mul(r7517015, r7517013, r7517014, MPFR_RNDN);
        return mpfr_get_d(r7517015, MPFR_RNDN);
}

