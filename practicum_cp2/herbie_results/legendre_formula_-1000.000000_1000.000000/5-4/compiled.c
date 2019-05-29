#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7056130 = 0.375;
        float r7056131 = -3.75;
        float r7056132 = x;
        float r7056133 = r7056132 * r7056132;
        float r7056134 = r7056131 * r7056133;
        float r7056135 = r7056130 + r7056134;
        float r7056136 = 4.375;
        float r7056137 = r7056133 * r7056132;
        float r7056138 = r7056137 * r7056132;
        float r7056139 = r7056136 * r7056138;
        float r7056140 = r7056135 + r7056139;
        return r7056140;
}

double f_id(double x) {
        double r7056141 = 0.375;
        double r7056142 = -3.75;
        double r7056143 = x;
        double r7056144 = r7056143 * r7056143;
        double r7056145 = r7056142 * r7056144;
        double r7056146 = r7056141 + r7056145;
        double r7056147 = 4.375;
        double r7056148 = r7056144 * r7056143;
        double r7056149 = r7056148 * r7056143;
        double r7056150 = r7056147 * r7056149;
        double r7056151 = r7056146 + r7056150;
        return r7056151;
}


double f_of(float x) {
        float r7056152 = 0.375;
        float r7056153 = x;
        float r7056154 = 4.375;
        float r7056155 = r7056153 * r7056154;
        float r7056156 = 3;
        float r7056157 = pow(r7056153, r7056156);
        float r7056158 = r7056155 * r7056157;
        float r7056159 = -3.75;
        float r7056160 = r7056153 * r7056159;
        float r7056161 = r7056160 * r7056153;
        float r7056162 = r7056158 + r7056161;
        float r7056163 = r7056152 + r7056162;
        return r7056163;
}

double f_od(double x) {
        double r7056164 = 0.375;
        double r7056165 = x;
        double r7056166 = 4.375;
        double r7056167 = r7056165 * r7056166;
        double r7056168 = 3;
        double r7056169 = pow(r7056165, r7056168);
        double r7056170 = r7056167 * r7056169;
        double r7056171 = -3.75;
        double r7056172 = r7056165 * r7056171;
        double r7056173 = r7056172 * r7056165;
        double r7056174 = r7056170 + r7056173;
        double r7056175 = r7056164 + r7056174;
        return r7056175;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7056176, r7056177, r7056178, r7056179, r7056180, r7056181, r7056182, r7056183, r7056184, r7056185, r7056186;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7056176, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056177, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7056178);
        mpfr_init(r7056179);
        mpfr_init(r7056180);
        mpfr_init(r7056181);
        mpfr_init_set_str(r7056182, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7056183);
        mpfr_init(r7056184);
        mpfr_init(r7056185);
        mpfr_init(r7056186);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7056178, x, MPFR_RNDN);
        mpfr_mul(r7056179, r7056178, r7056178, MPFR_RNDN);
        mpfr_mul(r7056180, r7056177, r7056179, MPFR_RNDN);
        mpfr_add(r7056181, r7056176, r7056180, MPFR_RNDN);
        ;
        mpfr_mul(r7056183, r7056179, r7056178, MPFR_RNDN);
        mpfr_mul(r7056184, r7056183, r7056178, MPFR_RNDN);
        mpfr_mul(r7056185, r7056182, r7056184, MPFR_RNDN);
        mpfr_add(r7056186, r7056181, r7056185, MPFR_RNDN);
        return mpfr_get_d(r7056186, MPFR_RNDN);
}

static mpfr_t r7056187, r7056188, r7056189, r7056190, r7056191, r7056192, r7056193, r7056194, r7056195, r7056196, r7056197, r7056198;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7056187, "0.375", 10, MPFR_RNDN);
        mpfr_init(r7056188);
        mpfr_init_set_str(r7056189, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7056190);
        mpfr_init_set_str(r7056191, "3", 10, MPFR_RNDN);
        mpfr_init(r7056192);
        mpfr_init(r7056193);
        mpfr_init_set_str(r7056194, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7056195);
        mpfr_init(r7056196);
        mpfr_init(r7056197);
        mpfr_init(r7056198);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7056188, x, MPFR_RNDN);
        ;
        mpfr_mul(r7056190, r7056188, r7056189, MPFR_RNDN);
        ;
        mpfr_pow(r7056192, r7056188, r7056191, MPFR_RNDN);
        mpfr_mul(r7056193, r7056190, r7056192, MPFR_RNDN);
        ;
        mpfr_mul(r7056195, r7056188, r7056194, MPFR_RNDN);
        mpfr_mul(r7056196, r7056195, r7056188, MPFR_RNDN);
        mpfr_add(r7056197, r7056193, r7056196, MPFR_RNDN);
        mpfr_add(r7056198, r7056187, r7056197, MPFR_RNDN);
        return mpfr_get_d(r7056198, MPFR_RNDN);
}

static mpfr_t r7056199, r7056200, r7056201, r7056202, r7056203, r7056204, r7056205, r7056206, r7056207, r7056208, r7056209, r7056210;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7056199, "0.375", 10, MPFR_RNDN);
        mpfr_init(r7056200);
        mpfr_init_set_str(r7056201, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7056202);
        mpfr_init_set_str(r7056203, "3", 10, MPFR_RNDN);
        mpfr_init(r7056204);
        mpfr_init(r7056205);
        mpfr_init_set_str(r7056206, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7056207);
        mpfr_init(r7056208);
        mpfr_init(r7056209);
        mpfr_init(r7056210);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7056200, x, MPFR_RNDN);
        ;
        mpfr_mul(r7056202, r7056200, r7056201, MPFR_RNDN);
        ;
        mpfr_pow(r7056204, r7056200, r7056203, MPFR_RNDN);
        mpfr_mul(r7056205, r7056202, r7056204, MPFR_RNDN);
        ;
        mpfr_mul(r7056207, r7056200, r7056206, MPFR_RNDN);
        mpfr_mul(r7056208, r7056207, r7056200, MPFR_RNDN);
        mpfr_add(r7056209, r7056205, r7056208, MPFR_RNDN);
        mpfr_add(r7056210, r7056199, r7056209, MPFR_RNDN);
        return mpfr_get_d(r7056210, MPFR_RNDN);
}

