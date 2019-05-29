#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r8206993 = 2.0;
        float r8206994 = x;
        float r8206995 = r8206993 * r8206994;
        return r8206995;
}

double f_id(double x) {
        double r8206996 = 2.0;
        double r8206997 = x;
        double r8206998 = r8206996 * r8206997;
        return r8206998;
}


double f_of(float x) {
        float r8206999 = 2.0;
        float r8207000 = x;
        float r8207001 = r8206999 * r8207000;
        return r8207001;
}

double f_od(double x) {
        double r8207002 = 2.0;
        double r8207003 = x;
        double r8207004 = r8207002 * r8207003;
        return r8207004;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8207005, r8207006, r8207007;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8207005, "2.0", 10, MPFR_RNDN);
        mpfr_init(r8207006);
        mpfr_init(r8207007);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8207006, x, MPFR_RNDN);
        mpfr_mul(r8207007, r8207005, r8207006, MPFR_RNDN);
        return mpfr_get_d(r8207007, MPFR_RNDN);
}

static mpfr_t r8207008, r8207009, r8207010;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8207008, "2.0", 10, MPFR_RNDN);
        mpfr_init(r8207009);
        mpfr_init(r8207010);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8207009, x, MPFR_RNDN);
        mpfr_mul(r8207010, r8207008, r8207009, MPFR_RNDN);
        return mpfr_get_d(r8207010, MPFR_RNDN);
}

static mpfr_t r8207011, r8207012, r8207013;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8207011, "2.0", 10, MPFR_RNDN);
        mpfr_init(r8207012);
        mpfr_init(r8207013);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8207012, x, MPFR_RNDN);
        mpfr_mul(r8207013, r8207011, r8207012, MPFR_RNDN);
        return mpfr_get_d(r8207013, MPFR_RNDN);
}

