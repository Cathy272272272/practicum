#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r4211120 = 12.0;
        float r4211121 = -48.0;
        float r4211122 = x;
        float r4211123 = r4211122 * r4211122;
        float r4211124 = r4211121 * r4211123;
        float r4211125 = r4211120 + r4211124;
        float r4211126 = 16.0;
        float r4211127 = r4211123 * r4211122;
        float r4211128 = r4211127 * r4211122;
        float r4211129 = r4211126 * r4211128;
        float r4211130 = r4211125 + r4211129;
        return r4211130;
}

double f_id(double x) {
        double r4211131 = 12.0;
        double r4211132 = -48.0;
        double r4211133 = x;
        double r4211134 = r4211133 * r4211133;
        double r4211135 = r4211132 * r4211134;
        double r4211136 = r4211131 + r4211135;
        double r4211137 = 16.0;
        double r4211138 = r4211134 * r4211133;
        double r4211139 = r4211138 * r4211133;
        double r4211140 = r4211137 * r4211139;
        double r4211141 = r4211136 + r4211140;
        return r4211141;
}


double f_of(float x) {
        float r4211142 = 12.0;
        float r4211143 = x;
        float r4211144 = 16.0;
        float r4211145 = r4211143 * r4211144;
        float r4211146 = 3;
        float r4211147 = pow(r4211143, r4211146);
        float r4211148 = r4211145 * r4211147;
        float r4211149 = -48.0;
        float r4211150 = r4211143 * r4211149;
        float r4211151 = r4211150 * r4211143;
        float r4211152 = r4211148 + r4211151;
        float r4211153 = r4211142 + r4211152;
        return r4211153;
}

double f_od(double x) {
        double r4211154 = 12.0;
        double r4211155 = x;
        double r4211156 = 16.0;
        double r4211157 = r4211155 * r4211156;
        double r4211158 = 3;
        double r4211159 = pow(r4211155, r4211158);
        double r4211160 = r4211157 * r4211159;
        double r4211161 = -48.0;
        double r4211162 = r4211155 * r4211161;
        double r4211163 = r4211162 * r4211155;
        double r4211164 = r4211160 + r4211163;
        double r4211165 = r4211154 + r4211164;
        return r4211165;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4211166, r4211167, r4211168, r4211169, r4211170, r4211171, r4211172, r4211173, r4211174, r4211175, r4211176;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4211166, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211167, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r4211168);
        mpfr_init(r4211169);
        mpfr_init(r4211170);
        mpfr_init(r4211171);
        mpfr_init_set_str(r4211172, "16.0", 10, MPFR_RNDN);
        mpfr_init(r4211173);
        mpfr_init(r4211174);
        mpfr_init(r4211175);
        mpfr_init(r4211176);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4211168, x, MPFR_RNDN);
        mpfr_mul(r4211169, r4211168, r4211168, MPFR_RNDN);
        mpfr_mul(r4211170, r4211167, r4211169, MPFR_RNDN);
        mpfr_add(r4211171, r4211166, r4211170, MPFR_RNDN);
        ;
        mpfr_mul(r4211173, r4211169, r4211168, MPFR_RNDN);
        mpfr_mul(r4211174, r4211173, r4211168, MPFR_RNDN);
        mpfr_mul(r4211175, r4211172, r4211174, MPFR_RNDN);
        mpfr_add(r4211176, r4211171, r4211175, MPFR_RNDN);
        return mpfr_get_d(r4211176, MPFR_RNDN);
}

static mpfr_t r4211177, r4211178, r4211179, r4211180, r4211181, r4211182, r4211183, r4211184, r4211185, r4211186, r4211187, r4211188;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4211177, "12.0", 10, MPFR_RNDN);
        mpfr_init(r4211178);
        mpfr_init_set_str(r4211179, "16.0", 10, MPFR_RNDN);
        mpfr_init(r4211180);
        mpfr_init_set_str(r4211181, "3", 10, MPFR_RNDN);
        mpfr_init(r4211182);
        mpfr_init(r4211183);
        mpfr_init_set_str(r4211184, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r4211185);
        mpfr_init(r4211186);
        mpfr_init(r4211187);
        mpfr_init(r4211188);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4211178, x, MPFR_RNDN);
        ;
        mpfr_mul(r4211180, r4211178, r4211179, MPFR_RNDN);
        ;
        mpfr_pow(r4211182, r4211178, r4211181, MPFR_RNDN);
        mpfr_mul(r4211183, r4211180, r4211182, MPFR_RNDN);
        ;
        mpfr_mul(r4211185, r4211178, r4211184, MPFR_RNDN);
        mpfr_mul(r4211186, r4211185, r4211178, MPFR_RNDN);
        mpfr_add(r4211187, r4211183, r4211186, MPFR_RNDN);
        mpfr_add(r4211188, r4211177, r4211187, MPFR_RNDN);
        return mpfr_get_d(r4211188, MPFR_RNDN);
}

static mpfr_t r4211189, r4211190, r4211191, r4211192, r4211193, r4211194, r4211195, r4211196, r4211197, r4211198, r4211199, r4211200;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4211189, "12.0", 10, MPFR_RNDN);
        mpfr_init(r4211190);
        mpfr_init_set_str(r4211191, "16.0", 10, MPFR_RNDN);
        mpfr_init(r4211192);
        mpfr_init_set_str(r4211193, "3", 10, MPFR_RNDN);
        mpfr_init(r4211194);
        mpfr_init(r4211195);
        mpfr_init_set_str(r4211196, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r4211197);
        mpfr_init(r4211198);
        mpfr_init(r4211199);
        mpfr_init(r4211200);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4211190, x, MPFR_RNDN);
        ;
        mpfr_mul(r4211192, r4211190, r4211191, MPFR_RNDN);
        ;
        mpfr_pow(r4211194, r4211190, r4211193, MPFR_RNDN);
        mpfr_mul(r4211195, r4211192, r4211194, MPFR_RNDN);
        ;
        mpfr_mul(r4211197, r4211190, r4211196, MPFR_RNDN);
        mpfr_mul(r4211198, r4211197, r4211190, MPFR_RNDN);
        mpfr_add(r4211199, r4211195, r4211198, MPFR_RNDN);
        mpfr_add(r4211200, r4211189, r4211199, MPFR_RNDN);
        return mpfr_get_d(r4211200, MPFR_RNDN);
}

