#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7983115 = 120.0;
        float r7983116 = x;
        float r7983117 = r7983115 * r7983116;
        float r7983118 = -160.0;
        float r7983119 = r7983116 * r7983116;
        float r7983120 = r7983119 * r7983116;
        float r7983121 = r7983118 * r7983120;
        float r7983122 = r7983117 + r7983121;
        float r7983123 = 32.0;
        float r7983124 = r7983120 * r7983116;
        float r7983125 = r7983124 * r7983116;
        float r7983126 = r7983123 * r7983125;
        float r7983127 = r7983122 + r7983126;
        return r7983127;
}

double f_id(double x) {
        double r7983128 = 120.0;
        double r7983129 = x;
        double r7983130 = r7983128 * r7983129;
        double r7983131 = -160.0;
        double r7983132 = r7983129 * r7983129;
        double r7983133 = r7983132 * r7983129;
        double r7983134 = r7983131 * r7983133;
        double r7983135 = r7983130 + r7983134;
        double r7983136 = 32.0;
        double r7983137 = r7983133 * r7983129;
        double r7983138 = r7983137 * r7983129;
        double r7983139 = r7983136 * r7983138;
        double r7983140 = r7983135 + r7983139;
        return r7983140;
}


double f_of(float x) {
        float r7983141 = 120.0;
        float r7983142 = x;
        float r7983143 = r7983141 * r7983142;
        float r7983144 = -160.0;
        float r7983145 = r7983142 * r7983142;
        float r7983146 = r7983145 * r7983142;
        float r7983147 = r7983144 * r7983146;
        float r7983148 = r7983143 + r7983147;
        float r7983149 = 32.0;
        float r7983150 = exp(r7983149);
        float r7983151 = 3;
        float r7983152 = pow(r7983142, r7983151);
        float r7983153 = r7983145 * r7983152;
        float r7983154 = pow(r7983150, r7983153);
        float r7983155 = log(r7983154);
        float r7983156 = r7983148 + r7983155;
        return r7983156;
}

double f_od(double x) {
        double r7983157 = 120.0;
        double r7983158 = x;
        double r7983159 = r7983157 * r7983158;
        double r7983160 = -160.0;
        double r7983161 = r7983158 * r7983158;
        double r7983162 = r7983161 * r7983158;
        double r7983163 = r7983160 * r7983162;
        double r7983164 = r7983159 + r7983163;
        double r7983165 = 32.0;
        double r7983166 = exp(r7983165);
        double r7983167 = 3;
        double r7983168 = pow(r7983158, r7983167);
        double r7983169 = r7983161 * r7983168;
        double r7983170 = pow(r7983166, r7983169);
        double r7983171 = log(r7983170);
        double r7983172 = r7983164 + r7983171;
        return r7983172;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7983173, r7983174, r7983175, r7983176, r7983177, r7983178, r7983179, r7983180, r7983181, r7983182, r7983183, r7983184, r7983185;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7983173, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7983174);
        mpfr_init(r7983175);
        mpfr_init_set_str(r7983176, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7983177);
        mpfr_init(r7983178);
        mpfr_init(r7983179);
        mpfr_init(r7983180);
        mpfr_init_set_str(r7983181, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7983182);
        mpfr_init(r7983183);
        mpfr_init(r7983184);
        mpfr_init(r7983185);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7983174, x, MPFR_RNDN);
        mpfr_mul(r7983175, r7983173, r7983174, MPFR_RNDN);
        ;
        mpfr_mul(r7983177, r7983174, r7983174, MPFR_RNDN);
        mpfr_mul(r7983178, r7983177, r7983174, MPFR_RNDN);
        mpfr_mul(r7983179, r7983176, r7983178, MPFR_RNDN);
        mpfr_add(r7983180, r7983175, r7983179, MPFR_RNDN);
        ;
        mpfr_mul(r7983182, r7983178, r7983174, MPFR_RNDN);
        mpfr_mul(r7983183, r7983182, r7983174, MPFR_RNDN);
        mpfr_mul(r7983184, r7983181, r7983183, MPFR_RNDN);
        mpfr_add(r7983185, r7983180, r7983184, MPFR_RNDN);
        return mpfr_get_d(r7983185, MPFR_RNDN);
}

static mpfr_t r7983186, r7983187, r7983188, r7983189, r7983190, r7983191, r7983192, r7983193, r7983194, r7983195, r7983196, r7983197, r7983198, r7983199, r7983200, r7983201;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7983186, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7983187);
        mpfr_init(r7983188);
        mpfr_init_set_str(r7983189, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7983190);
        mpfr_init(r7983191);
        mpfr_init(r7983192);
        mpfr_init(r7983193);
        mpfr_init_set_str(r7983194, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7983195);
        mpfr_init_set_str(r7983196, "3", 10, MPFR_RNDN);
        mpfr_init(r7983197);
        mpfr_init(r7983198);
        mpfr_init(r7983199);
        mpfr_init(r7983200);
        mpfr_init(r7983201);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7983187, x, MPFR_RNDN);
        mpfr_mul(r7983188, r7983186, r7983187, MPFR_RNDN);
        ;
        mpfr_mul(r7983190, r7983187, r7983187, MPFR_RNDN);
        mpfr_mul(r7983191, r7983190, r7983187, MPFR_RNDN);
        mpfr_mul(r7983192, r7983189, r7983191, MPFR_RNDN);
        mpfr_add(r7983193, r7983188, r7983192, MPFR_RNDN);
        ;
        mpfr_exp(r7983195, r7983194, MPFR_RNDN);
        ;
        mpfr_pow(r7983197, r7983187, r7983196, MPFR_RNDN);
        mpfr_mul(r7983198, r7983190, r7983197, MPFR_RNDN);
        mpfr_pow(r7983199, r7983195, r7983198, MPFR_RNDN);
        mpfr_log(r7983200, r7983199, MPFR_RNDN);
        mpfr_add(r7983201, r7983193, r7983200, MPFR_RNDN);
        return mpfr_get_d(r7983201, MPFR_RNDN);
}

static mpfr_t r7983202, r7983203, r7983204, r7983205, r7983206, r7983207, r7983208, r7983209, r7983210, r7983211, r7983212, r7983213, r7983214, r7983215, r7983216, r7983217;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7983202, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7983203);
        mpfr_init(r7983204);
        mpfr_init_set_str(r7983205, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7983206);
        mpfr_init(r7983207);
        mpfr_init(r7983208);
        mpfr_init(r7983209);
        mpfr_init_set_str(r7983210, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7983211);
        mpfr_init_set_str(r7983212, "3", 10, MPFR_RNDN);
        mpfr_init(r7983213);
        mpfr_init(r7983214);
        mpfr_init(r7983215);
        mpfr_init(r7983216);
        mpfr_init(r7983217);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7983203, x, MPFR_RNDN);
        mpfr_mul(r7983204, r7983202, r7983203, MPFR_RNDN);
        ;
        mpfr_mul(r7983206, r7983203, r7983203, MPFR_RNDN);
        mpfr_mul(r7983207, r7983206, r7983203, MPFR_RNDN);
        mpfr_mul(r7983208, r7983205, r7983207, MPFR_RNDN);
        mpfr_add(r7983209, r7983204, r7983208, MPFR_RNDN);
        ;
        mpfr_exp(r7983211, r7983210, MPFR_RNDN);
        ;
        mpfr_pow(r7983213, r7983203, r7983212, MPFR_RNDN);
        mpfr_mul(r7983214, r7983206, r7983213, MPFR_RNDN);
        mpfr_pow(r7983215, r7983211, r7983214, MPFR_RNDN);
        mpfr_log(r7983216, r7983215, MPFR_RNDN);
        mpfr_add(r7983217, r7983209, r7983216, MPFR_RNDN);
        return mpfr_get_d(r7983217, MPFR_RNDN);
}

