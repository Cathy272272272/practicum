#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6516998 = 1.0;
        float r6516999 = -1.0;
        float r6517000 = x;
        float r6517001 = r6516999 * r6517000;
        float r6517002 = r6516998 + r6517001;
        return r6517002;
}

double f_id(double x) {
        double r6517003 = 1.0;
        double r6517004 = -1.0;
        double r6517005 = x;
        double r6517006 = r6517004 * r6517005;
        double r6517007 = r6517003 + r6517006;
        return r6517007;
}


double f_of(float x) {
        float r6517008 = 1.0;
        float r6517009 = -1.0;
        float r6517010 = x;
        float r6517011 = r6517009 * r6517010;
        float r6517012 = r6517008 + r6517011;
        return r6517012;
}

double f_od(double x) {
        double r6517013 = 1.0;
        double r6517014 = -1.0;
        double r6517015 = x;
        double r6517016 = r6517014 * r6517015;
        double r6517017 = r6517013 + r6517016;
        return r6517017;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6517018, r6517019, r6517020, r6517021, r6517022;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6517018, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6517019, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r6517020);
        mpfr_init(r6517021);
        mpfr_init(r6517022);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6517020, x, MPFR_RNDN);
        mpfr_mul(r6517021, r6517019, r6517020, MPFR_RNDN);
        mpfr_add(r6517022, r6517018, r6517021, MPFR_RNDN);
        return mpfr_get_d(r6517022, MPFR_RNDN);
}

static mpfr_t r6517023, r6517024, r6517025, r6517026, r6517027;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6517023, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6517024, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r6517025);
        mpfr_init(r6517026);
        mpfr_init(r6517027);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6517025, x, MPFR_RNDN);
        mpfr_mul(r6517026, r6517024, r6517025, MPFR_RNDN);
        mpfr_add(r6517027, r6517023, r6517026, MPFR_RNDN);
        return mpfr_get_d(r6517027, MPFR_RNDN);
}

static mpfr_t r6517028, r6517029, r6517030, r6517031, r6517032;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6517028, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6517029, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r6517030);
        mpfr_init(r6517031);
        mpfr_init(r6517032);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6517030, x, MPFR_RNDN);
        mpfr_mul(r6517031, r6517029, r6517030, MPFR_RNDN);
        mpfr_add(r6517032, r6517028, r6517031, MPFR_RNDN);
        return mpfr_get_d(r6517032, MPFR_RNDN);
}

