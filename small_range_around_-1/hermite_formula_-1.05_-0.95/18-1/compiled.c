#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r60546198 = 2.0;
        float r60546199 = x;
        float r60546200 = r60546198 * r60546199;
        return r60546200;
}

double f_id(double x) {
        double r60546201 = 2.0;
        double r60546202 = x;
        double r60546203 = r60546201 * r60546202;
        return r60546203;
}


double f_of(float x) {
        float r60546204 = 2.0;
        float r60546205 = x;
        float r60546206 = r60546204 * r60546205;
        return r60546206;
}

double f_od(double x) {
        double r60546207 = 2.0;
        double r60546208 = x;
        double r60546209 = r60546207 * r60546208;
        return r60546209;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60546210, r60546211, r60546212;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60546210, "2.0", 10, MPFR_RNDN);
        mpfr_init(r60546211);
        mpfr_init(r60546212);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60546211, x, MPFR_RNDN);
        mpfr_mul(r60546212, r60546210, r60546211, MPFR_RNDN);
        return mpfr_get_d(r60546212, MPFR_RNDN);
}

static mpfr_t r60546213, r60546214, r60546215;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60546213, "2.0", 10, MPFR_RNDN);
        mpfr_init(r60546214);
        mpfr_init(r60546215);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r60546214, x, MPFR_RNDN);
        mpfr_mul(r60546215, r60546213, r60546214, MPFR_RNDN);
        return mpfr_get_d(r60546215, MPFR_RNDN);
}

static mpfr_t r60546216, r60546217, r60546218;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60546216, "2.0", 10, MPFR_RNDN);
        mpfr_init(r60546217);
        mpfr_init(r60546218);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r60546217, x, MPFR_RNDN);
        mpfr_mul(r60546218, r60546216, r60546217, MPFR_RNDN);
        return mpfr_get_d(r60546218, MPFR_RNDN);
}

