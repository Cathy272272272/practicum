#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6904116 = -0.5;
        float r6904117 = 1.5;
        float r6904118 = x;
        float r6904119 = r6904118 * r6904118;
        float r6904120 = r6904117 * r6904119;
        float r6904121 = r6904116 + r6904120;
        return r6904121;
}

double f_id(double x) {
        double r6904122 = -0.5;
        double r6904123 = 1.5;
        double r6904124 = x;
        double r6904125 = r6904124 * r6904124;
        double r6904126 = r6904123 * r6904125;
        double r6904127 = r6904122 + r6904126;
        return r6904127;
}


double f_of(float x) {
        float r6904128 = -0.5;
        float r6904129 = 1.5;
        float r6904130 = x;
        float r6904131 = r6904129 * r6904130;
        float r6904132 = r6904131 * r6904130;
        float r6904133 = r6904128 + r6904132;
        return r6904133;
}

double f_od(double x) {
        double r6904134 = -0.5;
        double r6904135 = 1.5;
        double r6904136 = x;
        double r6904137 = r6904135 * r6904136;
        double r6904138 = r6904137 * r6904136;
        double r6904139 = r6904134 + r6904138;
        return r6904139;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6904140, r6904141, r6904142, r6904143, r6904144, r6904145;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6904140, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6904141, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6904142);
        mpfr_init(r6904143);
        mpfr_init(r6904144);
        mpfr_init(r6904145);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6904142, x, MPFR_RNDN);
        mpfr_mul(r6904143, r6904142, r6904142, MPFR_RNDN);
        mpfr_mul(r6904144, r6904141, r6904143, MPFR_RNDN);
        mpfr_add(r6904145, r6904140, r6904144, MPFR_RNDN);
        return mpfr_get_d(r6904145, MPFR_RNDN);
}

static mpfr_t r6904146, r6904147, r6904148, r6904149, r6904150, r6904151;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6904146, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6904147, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6904148);
        mpfr_init(r6904149);
        mpfr_init(r6904150);
        mpfr_init(r6904151);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6904148, x, MPFR_RNDN);
        mpfr_mul(r6904149, r6904147, r6904148, MPFR_RNDN);
        mpfr_mul(r6904150, r6904149, r6904148, MPFR_RNDN);
        mpfr_add(r6904151, r6904146, r6904150, MPFR_RNDN);
        return mpfr_get_d(r6904151, MPFR_RNDN);
}

static mpfr_t r6904152, r6904153, r6904154, r6904155, r6904156, r6904157;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6904152, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6904153, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6904154);
        mpfr_init(r6904155);
        mpfr_init(r6904156);
        mpfr_init(r6904157);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6904154, x, MPFR_RNDN);
        mpfr_mul(r6904155, r6904153, r6904154, MPFR_RNDN);
        mpfr_mul(r6904156, r6904155, r6904154, MPFR_RNDN);
        mpfr_add(r6904157, r6904152, r6904156, MPFR_RNDN);
        return mpfr_get_d(r6904157, MPFR_RNDN);
}

