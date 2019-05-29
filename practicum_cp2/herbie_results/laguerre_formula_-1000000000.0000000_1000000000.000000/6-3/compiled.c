#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r13458137 = 1.0;
        float r13458138 = -3.0;
        float r13458139 = x;
        float r13458140 = r13458138 * r13458139;
        float r13458141 = r13458137 + r13458140;
        float r13458142 = 1.5;
        float r13458143 = r13458139 * r13458139;
        float r13458144 = r13458142 * r13458143;
        float r13458145 = r13458141 + r13458144;
        float r13458146 = -0.166667;
        float r13458147 = r13458143 * r13458139;
        float r13458148 = r13458146 * r13458147;
        float r13458149 = r13458145 + r13458148;
        return r13458149;
}

double f_id(double x) {
        double r13458150 = 1.0;
        double r13458151 = -3.0;
        double r13458152 = x;
        double r13458153 = r13458151 * r13458152;
        double r13458154 = r13458150 + r13458153;
        double r13458155 = 1.5;
        double r13458156 = r13458152 * r13458152;
        double r13458157 = r13458155 * r13458156;
        double r13458158 = r13458154 + r13458157;
        double r13458159 = -0.166667;
        double r13458160 = r13458156 * r13458152;
        double r13458161 = r13458159 * r13458160;
        double r13458162 = r13458158 + r13458161;
        return r13458162;
}


double f_of(float x) {
        float r13458163 = x;
        float r13458164 = -3.0;
        float r13458165 = r13458163 * r13458164;
        float r13458166 = 1.0;
        float r13458167 = r13458165 + r13458166;
        float r13458168 = 1.5;
        float r13458169 = -0.166667;
        float r13458170 = r13458169 * r13458163;
        float r13458171 = r13458168 + r13458170;
        float r13458172 = r13458163 * r13458163;
        float r13458173 = r13458171 * r13458172;
        float r13458174 = r13458167 + r13458173;
        return r13458174;
}

double f_od(double x) {
        double r13458175 = x;
        double r13458176 = -3.0;
        double r13458177 = r13458175 * r13458176;
        double r13458178 = 1.0;
        double r13458179 = r13458177 + r13458178;
        double r13458180 = 1.5;
        double r13458181 = -0.166667;
        double r13458182 = r13458181 * r13458175;
        double r13458183 = r13458180 + r13458182;
        double r13458184 = r13458175 * r13458175;
        double r13458185 = r13458183 * r13458184;
        double r13458186 = r13458179 + r13458185;
        return r13458186;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13458187, r13458188, r13458189, r13458190, r13458191, r13458192, r13458193, r13458194, r13458195, r13458196, r13458197, r13458198, r13458199;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13458187, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458188, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r13458189);
        mpfr_init(r13458190);
        mpfr_init(r13458191);
        mpfr_init_set_str(r13458192, "1.5", 10, MPFR_RNDN);
        mpfr_init(r13458193);
        mpfr_init(r13458194);
        mpfr_init(r13458195);
        mpfr_init_set_str(r13458196, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r13458197);
        mpfr_init(r13458198);
        mpfr_init(r13458199);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13458189, x, MPFR_RNDN);
        mpfr_mul(r13458190, r13458188, r13458189, MPFR_RNDN);
        mpfr_add(r13458191, r13458187, r13458190, MPFR_RNDN);
        ;
        mpfr_mul(r13458193, r13458189, r13458189, MPFR_RNDN);
        mpfr_mul(r13458194, r13458192, r13458193, MPFR_RNDN);
        mpfr_add(r13458195, r13458191, r13458194, MPFR_RNDN);
        ;
        mpfr_mul(r13458197, r13458193, r13458189, MPFR_RNDN);
        mpfr_mul(r13458198, r13458196, r13458197, MPFR_RNDN);
        mpfr_add(r13458199, r13458195, r13458198, MPFR_RNDN);
        return mpfr_get_d(r13458199, MPFR_RNDN);
}

static mpfr_t r13458200, r13458201, r13458202, r13458203, r13458204, r13458205, r13458206, r13458207, r13458208, r13458209, r13458210, r13458211;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r13458200);
        mpfr_init_set_str(r13458201, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r13458202);
        mpfr_init_set_str(r13458203, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13458204);
        mpfr_init_set_str(r13458205, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458206, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r13458207);
        mpfr_init(r13458208);
        mpfr_init(r13458209);
        mpfr_init(r13458210);
        mpfr_init(r13458211);
}

double f_fm(double x) {
        mpfr_set_d(r13458200, x, MPFR_RNDN);
        ;
        mpfr_mul(r13458202, r13458200, r13458201, MPFR_RNDN);
        ;
        mpfr_add(r13458204, r13458202, r13458203, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13458207, r13458206, r13458200, MPFR_RNDN);
        mpfr_add(r13458208, r13458205, r13458207, MPFR_RNDN);
        mpfr_mul(r13458209, r13458200, r13458200, MPFR_RNDN);
        mpfr_mul(r13458210, r13458208, r13458209, MPFR_RNDN);
        mpfr_add(r13458211, r13458204, r13458210, MPFR_RNDN);
        return mpfr_get_d(r13458211, MPFR_RNDN);
}

static mpfr_t r13458212, r13458213, r13458214, r13458215, r13458216, r13458217, r13458218, r13458219, r13458220, r13458221, r13458222, r13458223;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r13458212);
        mpfr_init_set_str(r13458213, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r13458214);
        mpfr_init_set_str(r13458215, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13458216);
        mpfr_init_set_str(r13458217, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458218, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r13458219);
        mpfr_init(r13458220);
        mpfr_init(r13458221);
        mpfr_init(r13458222);
        mpfr_init(r13458223);
}

double f_dm(double x) {
        mpfr_set_d(r13458212, x, MPFR_RNDN);
        ;
        mpfr_mul(r13458214, r13458212, r13458213, MPFR_RNDN);
        ;
        mpfr_add(r13458216, r13458214, r13458215, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13458219, r13458218, r13458212, MPFR_RNDN);
        mpfr_add(r13458220, r13458217, r13458219, MPFR_RNDN);
        mpfr_mul(r13458221, r13458212, r13458212, MPFR_RNDN);
        mpfr_mul(r13458222, r13458220, r13458221, MPFR_RNDN);
        mpfr_add(r13458223, r13458216, r13458222, MPFR_RNDN);
        return mpfr_get_d(r13458223, MPFR_RNDN);
}

