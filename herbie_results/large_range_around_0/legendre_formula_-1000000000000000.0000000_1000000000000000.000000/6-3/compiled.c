#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r8032159 = -1.5;
        float r8032160 = x;
        float r8032161 = r8032159 * r8032160;
        float r8032162 = 2.5;
        float r8032163 = r8032160 * r8032160;
        float r8032164 = r8032163 * r8032160;
        float r8032165 = r8032162 * r8032164;
        float r8032166 = r8032161 + r8032165;
        return r8032166;
}

double f_id(double x) {
        double r8032167 = -1.5;
        double r8032168 = x;
        double r8032169 = r8032167 * r8032168;
        double r8032170 = 2.5;
        double r8032171 = r8032168 * r8032168;
        double r8032172 = r8032171 * r8032168;
        double r8032173 = r8032170 * r8032172;
        double r8032174 = r8032169 + r8032173;
        return r8032174;
}


double f_of(float x) {
        float r8032175 = -1.5;
        float r8032176 = x;
        float r8032177 = r8032175 * r8032176;
        float r8032178 = 2.5;
        float r8032179 = r8032176 * r8032176;
        float r8032180 = r8032179 * r8032176;
        float r8032181 = r8032178 * r8032180;
        float r8032182 = r8032177 + r8032181;
        return r8032182;
}

double f_od(double x) {
        double r8032183 = -1.5;
        double r8032184 = x;
        double r8032185 = r8032183 * r8032184;
        double r8032186 = 2.5;
        double r8032187 = r8032184 * r8032184;
        double r8032188 = r8032187 * r8032184;
        double r8032189 = r8032186 * r8032188;
        double r8032190 = r8032185 + r8032189;
        return r8032190;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8032191, r8032192, r8032193, r8032194, r8032195, r8032196, r8032197, r8032198;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8032191, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8032192);
        mpfr_init(r8032193);
        mpfr_init_set_str(r8032194, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8032195);
        mpfr_init(r8032196);
        mpfr_init(r8032197);
        mpfr_init(r8032198);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8032192, x, MPFR_RNDN);
        mpfr_mul(r8032193, r8032191, r8032192, MPFR_RNDN);
        ;
        mpfr_mul(r8032195, r8032192, r8032192, MPFR_RNDN);
        mpfr_mul(r8032196, r8032195, r8032192, MPFR_RNDN);
        mpfr_mul(r8032197, r8032194, r8032196, MPFR_RNDN);
        mpfr_add(r8032198, r8032193, r8032197, MPFR_RNDN);
        return mpfr_get_d(r8032198, MPFR_RNDN);
}

static mpfr_t r8032199, r8032200, r8032201, r8032202, r8032203, r8032204, r8032205, r8032206;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8032199, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8032200);
        mpfr_init(r8032201);
        mpfr_init_set_str(r8032202, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8032203);
        mpfr_init(r8032204);
        mpfr_init(r8032205);
        mpfr_init(r8032206);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8032200, x, MPFR_RNDN);
        mpfr_mul(r8032201, r8032199, r8032200, MPFR_RNDN);
        ;
        mpfr_mul(r8032203, r8032200, r8032200, MPFR_RNDN);
        mpfr_mul(r8032204, r8032203, r8032200, MPFR_RNDN);
        mpfr_mul(r8032205, r8032202, r8032204, MPFR_RNDN);
        mpfr_add(r8032206, r8032201, r8032205, MPFR_RNDN);
        return mpfr_get_d(r8032206, MPFR_RNDN);
}

static mpfr_t r8032207, r8032208, r8032209, r8032210, r8032211, r8032212, r8032213, r8032214;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8032207, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8032208);
        mpfr_init(r8032209);
        mpfr_init_set_str(r8032210, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8032211);
        mpfr_init(r8032212);
        mpfr_init(r8032213);
        mpfr_init(r8032214);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8032208, x, MPFR_RNDN);
        mpfr_mul(r8032209, r8032207, r8032208, MPFR_RNDN);
        ;
        mpfr_mul(r8032211, r8032208, r8032208, MPFR_RNDN);
        mpfr_mul(r8032212, r8032211, r8032208, MPFR_RNDN);
        mpfr_mul(r8032213, r8032210, r8032212, MPFR_RNDN);
        mpfr_add(r8032214, r8032209, r8032213, MPFR_RNDN);
        return mpfr_get_d(r8032214, MPFR_RNDN);
}

