#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r9960134 = -2.0;
        float r9960135 = 4.0;
        float r9960136 = x;
        float r9960137 = r9960136 * r9960136;
        float r9960138 = r9960135 * r9960137;
        float r9960139 = r9960134 + r9960138;
        return r9960139;
}

double f_id(double x) {
        double r9960140 = -2.0;
        double r9960141 = 4.0;
        double r9960142 = x;
        double r9960143 = r9960142 * r9960142;
        double r9960144 = r9960141 * r9960143;
        double r9960145 = r9960140 + r9960144;
        return r9960145;
}


double f_of(float x) {
        float r9960146 = -2.0;
        float r9960147 = 4.0;
        float r9960148 = x;
        float r9960149 = r9960148 * r9960148;
        float r9960150 = r9960147 * r9960149;
        float r9960151 = r9960146 + r9960150;
        return r9960151;
}

double f_od(double x) {
        double r9960152 = -2.0;
        double r9960153 = 4.0;
        double r9960154 = x;
        double r9960155 = r9960154 * r9960154;
        double r9960156 = r9960153 * r9960155;
        double r9960157 = r9960152 + r9960156;
        return r9960157;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9960158, r9960159, r9960160, r9960161, r9960162, r9960163;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9960158, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9960159, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9960160);
        mpfr_init(r9960161);
        mpfr_init(r9960162);
        mpfr_init(r9960163);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9960160, x, MPFR_RNDN);
        mpfr_mul(r9960161, r9960160, r9960160, MPFR_RNDN);
        mpfr_mul(r9960162, r9960159, r9960161, MPFR_RNDN);
        mpfr_add(r9960163, r9960158, r9960162, MPFR_RNDN);
        return mpfr_get_d(r9960163, MPFR_RNDN);
}

static mpfr_t r9960164, r9960165, r9960166, r9960167, r9960168, r9960169;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9960164, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9960165, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9960166);
        mpfr_init(r9960167);
        mpfr_init(r9960168);
        mpfr_init(r9960169);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9960166, x, MPFR_RNDN);
        mpfr_mul(r9960167, r9960166, r9960166, MPFR_RNDN);
        mpfr_mul(r9960168, r9960165, r9960167, MPFR_RNDN);
        mpfr_add(r9960169, r9960164, r9960168, MPFR_RNDN);
        return mpfr_get_d(r9960169, MPFR_RNDN);
}

static mpfr_t r9960170, r9960171, r9960172, r9960173, r9960174, r9960175;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9960170, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9960171, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9960172);
        mpfr_init(r9960173);
        mpfr_init(r9960174);
        mpfr_init(r9960175);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9960172, x, MPFR_RNDN);
        mpfr_mul(r9960173, r9960172, r9960172, MPFR_RNDN);
        mpfr_mul(r9960174, r9960171, r9960173, MPFR_RNDN);
        mpfr_add(r9960175, r9960170, r9960174, MPFR_RNDN);
        return mpfr_get_d(r9960175, MPFR_RNDN);
}

