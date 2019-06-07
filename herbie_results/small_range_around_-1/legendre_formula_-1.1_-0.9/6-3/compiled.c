#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r29571184 = -1.5;
        float r29571185 = x;
        float r29571186 = r29571184 * r29571185;
        float r29571187 = 2.5;
        float r29571188 = r29571185 * r29571185;
        float r29571189 = r29571188 * r29571185;
        float r29571190 = r29571187 * r29571189;
        float r29571191 = r29571186 + r29571190;
        return r29571191;
}

double f_id(double x) {
        double r29571192 = -1.5;
        double r29571193 = x;
        double r29571194 = r29571192 * r29571193;
        double r29571195 = 2.5;
        double r29571196 = r29571193 * r29571193;
        double r29571197 = r29571196 * r29571193;
        double r29571198 = r29571195 * r29571197;
        double r29571199 = r29571194 + r29571198;
        return r29571199;
}


double f_of(float x) {
        float r29571200 = -1.5;
        float r29571201 = x;
        float r29571202 = r29571200 * r29571201;
        float r29571203 = exp(r29571202);
        float r29571204 = 2.5;
        float r29571205 = exp(r29571204);
        float r29571206 = pow(r29571205, r29571201);
        float r29571207 = pow(r29571206, r29571201);
        float r29571208 = pow(r29571207, r29571201);
        float r29571209 = r29571203 * r29571208;
        float r29571210 = log(r29571209);
        return r29571210;
}

double f_od(double x) {
        double r29571211 = -1.5;
        double r29571212 = x;
        double r29571213 = r29571211 * r29571212;
        double r29571214 = exp(r29571213);
        double r29571215 = 2.5;
        double r29571216 = exp(r29571215);
        double r29571217 = pow(r29571216, r29571212);
        double r29571218 = pow(r29571217, r29571212);
        double r29571219 = pow(r29571218, r29571212);
        double r29571220 = r29571214 * r29571219;
        double r29571221 = log(r29571220);
        return r29571221;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29571222, r29571223, r29571224, r29571225, r29571226, r29571227, r29571228, r29571229;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571222, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r29571223);
        mpfr_init(r29571224);
        mpfr_init_set_str(r29571225, "2.5", 10, MPFR_RNDN);
        mpfr_init(r29571226);
        mpfr_init(r29571227);
        mpfr_init(r29571228);
        mpfr_init(r29571229);
}

double f_im(double x) {
        ;
        mpfr_set_d(r29571223, x, MPFR_RNDN);
        mpfr_mul(r29571224, r29571222, r29571223, MPFR_RNDN);
        ;
        mpfr_mul(r29571226, r29571223, r29571223, MPFR_RNDN);
        mpfr_mul(r29571227, r29571226, r29571223, MPFR_RNDN);
        mpfr_mul(r29571228, r29571225, r29571227, MPFR_RNDN);
        mpfr_add(r29571229, r29571224, r29571228, MPFR_RNDN);
        return mpfr_get_d(r29571229, MPFR_RNDN);
}

static mpfr_t r29571230, r29571231, r29571232, r29571233, r29571234, r29571235, r29571236, r29571237, r29571238, r29571239, r29571240;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571230, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r29571231);
        mpfr_init(r29571232);
        mpfr_init(r29571233);
        mpfr_init_set_str(r29571234, "2.5", 10, MPFR_RNDN);
        mpfr_init(r29571235);
        mpfr_init(r29571236);
        mpfr_init(r29571237);
        mpfr_init(r29571238);
        mpfr_init(r29571239);
        mpfr_init(r29571240);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r29571231, x, MPFR_RNDN);
        mpfr_mul(r29571232, r29571230, r29571231, MPFR_RNDN);
        mpfr_exp(r29571233, r29571232, MPFR_RNDN);
        ;
        mpfr_exp(r29571235, r29571234, MPFR_RNDN);
        mpfr_pow(r29571236, r29571235, r29571231, MPFR_RNDN);
        mpfr_pow(r29571237, r29571236, r29571231, MPFR_RNDN);
        mpfr_pow(r29571238, r29571237, r29571231, MPFR_RNDN);
        mpfr_mul(r29571239, r29571233, r29571238, MPFR_RNDN);
        mpfr_log(r29571240, r29571239, MPFR_RNDN);
        return mpfr_get_d(r29571240, MPFR_RNDN);
}

static mpfr_t r29571241, r29571242, r29571243, r29571244, r29571245, r29571246, r29571247, r29571248, r29571249, r29571250, r29571251;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571241, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r29571242);
        mpfr_init(r29571243);
        mpfr_init(r29571244);
        mpfr_init_set_str(r29571245, "2.5", 10, MPFR_RNDN);
        mpfr_init(r29571246);
        mpfr_init(r29571247);
        mpfr_init(r29571248);
        mpfr_init(r29571249);
        mpfr_init(r29571250);
        mpfr_init(r29571251);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r29571242, x, MPFR_RNDN);
        mpfr_mul(r29571243, r29571241, r29571242, MPFR_RNDN);
        mpfr_exp(r29571244, r29571243, MPFR_RNDN);
        ;
        mpfr_exp(r29571246, r29571245, MPFR_RNDN);
        mpfr_pow(r29571247, r29571246, r29571242, MPFR_RNDN);
        mpfr_pow(r29571248, r29571247, r29571242, MPFR_RNDN);
        mpfr_pow(r29571249, r29571248, r29571242, MPFR_RNDN);
        mpfr_mul(r29571250, r29571244, r29571249, MPFR_RNDN);
        mpfr_log(r29571251, r29571250, MPFR_RNDN);
        return mpfr_get_d(r29571251, MPFR_RNDN);
}

