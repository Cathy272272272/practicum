#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r12290161 = -12.0;
        float r12290162 = x;
        float r12290163 = r12290161 * r12290162;
        float r12290164 = 8.0;
        float r12290165 = r12290162 * r12290162;
        float r12290166 = r12290165 * r12290162;
        float r12290167 = r12290164 * r12290166;
        float r12290168 = r12290163 + r12290167;
        return r12290168;
}

double f_id(double x) {
        double r12290169 = -12.0;
        double r12290170 = x;
        double r12290171 = r12290169 * r12290170;
        double r12290172 = 8.0;
        double r12290173 = r12290170 * r12290170;
        double r12290174 = r12290173 * r12290170;
        double r12290175 = r12290172 * r12290174;
        double r12290176 = r12290171 + r12290175;
        return r12290176;
}


double f_of(float x) {
        float r12290177 = -12.0;
        float r12290178 = x;
        float r12290179 = r12290177 * r12290178;
        float r12290180 = 8.0;
        float r12290181 = r12290178 * r12290178;
        float r12290182 = r12290181 * r12290178;
        float r12290183 = r12290180 * r12290182;
        float r12290184 = r12290179 + r12290183;
        return r12290184;
}

double f_od(double x) {
        double r12290185 = -12.0;
        double r12290186 = x;
        double r12290187 = r12290185 * r12290186;
        double r12290188 = 8.0;
        double r12290189 = r12290186 * r12290186;
        double r12290190 = r12290189 * r12290186;
        double r12290191 = r12290188 * r12290190;
        double r12290192 = r12290187 + r12290191;
        return r12290192;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12290193, r12290194, r12290195, r12290196, r12290197, r12290198, r12290199, r12290200;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r12290193, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r12290194);
        mpfr_init(r12290195);
        mpfr_init_set_str(r12290196, "8.0", 10, MPFR_RNDN);
        mpfr_init(r12290197);
        mpfr_init(r12290198);
        mpfr_init(r12290199);
        mpfr_init(r12290200);
}

double f_im(double x) {
        ;
        mpfr_set_d(r12290194, x, MPFR_RNDN);
        mpfr_mul(r12290195, r12290193, r12290194, MPFR_RNDN);
        ;
        mpfr_mul(r12290197, r12290194, r12290194, MPFR_RNDN);
        mpfr_mul(r12290198, r12290197, r12290194, MPFR_RNDN);
        mpfr_mul(r12290199, r12290196, r12290198, MPFR_RNDN);
        mpfr_add(r12290200, r12290195, r12290199, MPFR_RNDN);
        return mpfr_get_d(r12290200, MPFR_RNDN);
}

static mpfr_t r12290201, r12290202, r12290203, r12290204, r12290205, r12290206, r12290207, r12290208;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r12290201, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r12290202);
        mpfr_init(r12290203);
        mpfr_init_set_str(r12290204, "8.0", 10, MPFR_RNDN);
        mpfr_init(r12290205);
        mpfr_init(r12290206);
        mpfr_init(r12290207);
        mpfr_init(r12290208);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r12290202, x, MPFR_RNDN);
        mpfr_mul(r12290203, r12290201, r12290202, MPFR_RNDN);
        ;
        mpfr_mul(r12290205, r12290202, r12290202, MPFR_RNDN);
        mpfr_mul(r12290206, r12290205, r12290202, MPFR_RNDN);
        mpfr_mul(r12290207, r12290204, r12290206, MPFR_RNDN);
        mpfr_add(r12290208, r12290203, r12290207, MPFR_RNDN);
        return mpfr_get_d(r12290208, MPFR_RNDN);
}

static mpfr_t r12290209, r12290210, r12290211, r12290212, r12290213, r12290214, r12290215, r12290216;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r12290209, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r12290210);
        mpfr_init(r12290211);
        mpfr_init_set_str(r12290212, "8.0", 10, MPFR_RNDN);
        mpfr_init(r12290213);
        mpfr_init(r12290214);
        mpfr_init(r12290215);
        mpfr_init(r12290216);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r12290210, x, MPFR_RNDN);
        mpfr_mul(r12290211, r12290209, r12290210, MPFR_RNDN);
        ;
        mpfr_mul(r12290213, r12290210, r12290210, MPFR_RNDN);
        mpfr_mul(r12290214, r12290213, r12290210, MPFR_RNDN);
        mpfr_mul(r12290215, r12290212, r12290214, MPFR_RNDN);
        mpfr_add(r12290216, r12290211, r12290215, MPFR_RNDN);
        return mpfr_get_d(r12290216, MPFR_RNDN);
}

