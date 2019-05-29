#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r8100148 = 0.375;
        float r8100149 = -3.75;
        float r8100150 = x;
        float r8100151 = r8100150 * r8100150;
        float r8100152 = r8100149 * r8100151;
        float r8100153 = r8100148 + r8100152;
        float r8100154 = 4.375;
        float r8100155 = r8100151 * r8100150;
        float r8100156 = r8100155 * r8100150;
        float r8100157 = r8100154 * r8100156;
        float r8100158 = r8100153 + r8100157;
        return r8100158;
}

double f_id(double x) {
        double r8100159 = 0.375;
        double r8100160 = -3.75;
        double r8100161 = x;
        double r8100162 = r8100161 * r8100161;
        double r8100163 = r8100160 * r8100162;
        double r8100164 = r8100159 + r8100163;
        double r8100165 = 4.375;
        double r8100166 = r8100162 * r8100161;
        double r8100167 = r8100166 * r8100161;
        double r8100168 = r8100165 * r8100167;
        double r8100169 = r8100164 + r8100168;
        return r8100169;
}


double f_of(float x) {
        float r8100170 = 0.375;
        float r8100171 = x;
        float r8100172 = 4.375;
        float r8100173 = r8100171 * r8100172;
        float r8100174 = 3;
        float r8100175 = pow(r8100171, r8100174);
        float r8100176 = r8100173 * r8100175;
        float r8100177 = -3.75;
        float r8100178 = r8100171 * r8100177;
        float r8100179 = r8100178 * r8100171;
        float r8100180 = r8100176 + r8100179;
        float r8100181 = r8100170 + r8100180;
        return r8100181;
}

double f_od(double x) {
        double r8100182 = 0.375;
        double r8100183 = x;
        double r8100184 = 4.375;
        double r8100185 = r8100183 * r8100184;
        double r8100186 = 3;
        double r8100187 = pow(r8100183, r8100186);
        double r8100188 = r8100185 * r8100187;
        double r8100189 = -3.75;
        double r8100190 = r8100183 * r8100189;
        double r8100191 = r8100190 * r8100183;
        double r8100192 = r8100188 + r8100191;
        double r8100193 = r8100182 + r8100192;
        return r8100193;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8100194, r8100195, r8100196, r8100197, r8100198, r8100199, r8100200, r8100201, r8100202, r8100203, r8100204;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8100194, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100195, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r8100196);
        mpfr_init(r8100197);
        mpfr_init(r8100198);
        mpfr_init(r8100199);
        mpfr_init_set_str(r8100200, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8100201);
        mpfr_init(r8100202);
        mpfr_init(r8100203);
        mpfr_init(r8100204);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8100196, x, MPFR_RNDN);
        mpfr_mul(r8100197, r8100196, r8100196, MPFR_RNDN);
        mpfr_mul(r8100198, r8100195, r8100197, MPFR_RNDN);
        mpfr_add(r8100199, r8100194, r8100198, MPFR_RNDN);
        ;
        mpfr_mul(r8100201, r8100197, r8100196, MPFR_RNDN);
        mpfr_mul(r8100202, r8100201, r8100196, MPFR_RNDN);
        mpfr_mul(r8100203, r8100200, r8100202, MPFR_RNDN);
        mpfr_add(r8100204, r8100199, r8100203, MPFR_RNDN);
        return mpfr_get_d(r8100204, MPFR_RNDN);
}

static mpfr_t r8100205, r8100206, r8100207, r8100208, r8100209, r8100210, r8100211, r8100212, r8100213, r8100214, r8100215, r8100216;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8100205, "0.375", 10, MPFR_RNDN);
        mpfr_init(r8100206);
        mpfr_init_set_str(r8100207, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8100208);
        mpfr_init_set_str(r8100209, "3", 10, MPFR_RNDN);
        mpfr_init(r8100210);
        mpfr_init(r8100211);
        mpfr_init_set_str(r8100212, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r8100213);
        mpfr_init(r8100214);
        mpfr_init(r8100215);
        mpfr_init(r8100216);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8100206, x, MPFR_RNDN);
        ;
        mpfr_mul(r8100208, r8100206, r8100207, MPFR_RNDN);
        ;
        mpfr_pow(r8100210, r8100206, r8100209, MPFR_RNDN);
        mpfr_mul(r8100211, r8100208, r8100210, MPFR_RNDN);
        ;
        mpfr_mul(r8100213, r8100206, r8100212, MPFR_RNDN);
        mpfr_mul(r8100214, r8100213, r8100206, MPFR_RNDN);
        mpfr_add(r8100215, r8100211, r8100214, MPFR_RNDN);
        mpfr_add(r8100216, r8100205, r8100215, MPFR_RNDN);
        return mpfr_get_d(r8100216, MPFR_RNDN);
}

static mpfr_t r8100217, r8100218, r8100219, r8100220, r8100221, r8100222, r8100223, r8100224, r8100225, r8100226, r8100227, r8100228;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8100217, "0.375", 10, MPFR_RNDN);
        mpfr_init(r8100218);
        mpfr_init_set_str(r8100219, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8100220);
        mpfr_init_set_str(r8100221, "3", 10, MPFR_RNDN);
        mpfr_init(r8100222);
        mpfr_init(r8100223);
        mpfr_init_set_str(r8100224, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r8100225);
        mpfr_init(r8100226);
        mpfr_init(r8100227);
        mpfr_init(r8100228);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8100218, x, MPFR_RNDN);
        ;
        mpfr_mul(r8100220, r8100218, r8100219, MPFR_RNDN);
        ;
        mpfr_pow(r8100222, r8100218, r8100221, MPFR_RNDN);
        mpfr_mul(r8100223, r8100220, r8100222, MPFR_RNDN);
        ;
        mpfr_mul(r8100225, r8100218, r8100224, MPFR_RNDN);
        mpfr_mul(r8100226, r8100225, r8100218, MPFR_RNDN);
        mpfr_add(r8100227, r8100223, r8100226, MPFR_RNDN);
        mpfr_add(r8100228, r8100217, r8100227, MPFR_RNDN);
        return mpfr_get_d(r8100228, MPFR_RNDN);
}

