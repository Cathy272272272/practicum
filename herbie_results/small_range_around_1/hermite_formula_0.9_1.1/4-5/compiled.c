#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r46349123 = 120.0;
        float r46349124 = x;
        float r46349125 = r46349123 * r46349124;
        float r46349126 = -160.0;
        float r46349127 = r46349124 * r46349124;
        float r46349128 = r46349127 * r46349124;
        float r46349129 = r46349126 * r46349128;
        float r46349130 = r46349125 + r46349129;
        float r46349131 = 32.0;
        float r46349132 = r46349128 * r46349124;
        float r46349133 = r46349132 * r46349124;
        float r46349134 = r46349131 * r46349133;
        float r46349135 = r46349130 + r46349134;
        return r46349135;
}

double f_id(double x) {
        double r46349136 = 120.0;
        double r46349137 = x;
        double r46349138 = r46349136 * r46349137;
        double r46349139 = -160.0;
        double r46349140 = r46349137 * r46349137;
        double r46349141 = r46349140 * r46349137;
        double r46349142 = r46349139 * r46349141;
        double r46349143 = r46349138 + r46349142;
        double r46349144 = 32.0;
        double r46349145 = r46349141 * r46349137;
        double r46349146 = r46349145 * r46349137;
        double r46349147 = r46349144 * r46349146;
        double r46349148 = r46349143 + r46349147;
        return r46349148;
}


double f_of(float x) {
        float r46349149 = 32.0;
        float r46349150 = exp(r46349149);
        float r46349151 = x;
        float r46349152 = 3;
        float r46349153 = pow(r46349151, r46349152);
        float r46349154 = pow(r46349150, r46349153);
        float r46349155 = r46349153 * r46349153;
        float r46349156 = cbrt(r46349155);
        float r46349157 = pow(r46349154, r46349156);
        float r46349158 = 120.0;
        float r46349159 = exp(r46349158);
        float r46349160 = pow(r46349159, r46349151);
        float r46349161 = -160.0;
        float r46349162 = exp(r46349161);
        float r46349163 = pow(r46349162, r46349153);
        float r46349164 = r46349160 * r46349163;
        float r46349165 = r46349157 * r46349164;
        float r46349166 = log(r46349165);
        return r46349166;
}

double f_od(double x) {
        double r46349167 = 32.0;
        double r46349168 = exp(r46349167);
        double r46349169 = x;
        double r46349170 = 3;
        double r46349171 = pow(r46349169, r46349170);
        double r46349172 = pow(r46349168, r46349171);
        double r46349173 = r46349171 * r46349171;
        double r46349174 = cbrt(r46349173);
        double r46349175 = pow(r46349172, r46349174);
        double r46349176 = 120.0;
        double r46349177 = exp(r46349176);
        double r46349178 = pow(r46349177, r46349169);
        double r46349179 = -160.0;
        double r46349180 = exp(r46349179);
        double r46349181 = pow(r46349180, r46349171);
        double r46349182 = r46349178 * r46349181;
        double r46349183 = r46349175 * r46349182;
        double r46349184 = log(r46349183);
        return r46349184;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46349185, r46349186, r46349187, r46349188, r46349189, r46349190, r46349191, r46349192, r46349193, r46349194, r46349195, r46349196, r46349197;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349185, "120.0", 10, MPFR_RNDN);
        mpfr_init(r46349186);
        mpfr_init(r46349187);
        mpfr_init_set_str(r46349188, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r46349189);
        mpfr_init(r46349190);
        mpfr_init(r46349191);
        mpfr_init(r46349192);
        mpfr_init_set_str(r46349193, "32.0", 10, MPFR_RNDN);
        mpfr_init(r46349194);
        mpfr_init(r46349195);
        mpfr_init(r46349196);
        mpfr_init(r46349197);
}

double f_im(double x) {
        ;
        mpfr_set_d(r46349186, x, MPFR_RNDN);
        mpfr_mul(r46349187, r46349185, r46349186, MPFR_RNDN);
        ;
        mpfr_mul(r46349189, r46349186, r46349186, MPFR_RNDN);
        mpfr_mul(r46349190, r46349189, r46349186, MPFR_RNDN);
        mpfr_mul(r46349191, r46349188, r46349190, MPFR_RNDN);
        mpfr_add(r46349192, r46349187, r46349191, MPFR_RNDN);
        ;
        mpfr_mul(r46349194, r46349190, r46349186, MPFR_RNDN);
        mpfr_mul(r46349195, r46349194, r46349186, MPFR_RNDN);
        mpfr_mul(r46349196, r46349193, r46349195, MPFR_RNDN);
        mpfr_add(r46349197, r46349192, r46349196, MPFR_RNDN);
        return mpfr_get_d(r46349197, MPFR_RNDN);
}

static mpfr_t r46349198, r46349199, r46349200, r46349201, r46349202, r46349203, r46349204, r46349205, r46349206, r46349207, r46349208, r46349209, r46349210, r46349211, r46349212, r46349213, r46349214, r46349215;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349198, "32.0", 10, MPFR_RNDN);
        mpfr_init(r46349199);
        mpfr_init(r46349200);
        mpfr_init_set_str(r46349201, "3", 10, MPFR_RNDN);
        mpfr_init(r46349202);
        mpfr_init(r46349203);
        mpfr_init(r46349204);
        mpfr_init(r46349205);
        mpfr_init(r46349206);
        mpfr_init_set_str(r46349207, "120.0", 10, MPFR_RNDN);
        mpfr_init(r46349208);
        mpfr_init(r46349209);
        mpfr_init_set_str(r46349210, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r46349211);
        mpfr_init(r46349212);
        mpfr_init(r46349213);
        mpfr_init(r46349214);
        mpfr_init(r46349215);
}

double f_fm(double x) {
        ;
        mpfr_exp(r46349199, r46349198, MPFR_RNDN);
        mpfr_set_d(r46349200, x, MPFR_RNDN);
        ;
        mpfr_pow(r46349202, r46349200, r46349201, MPFR_RNDN);
        mpfr_pow(r46349203, r46349199, r46349202, MPFR_RNDN);
        mpfr_mul(r46349204, r46349202, r46349202, MPFR_RNDN);
        mpfr_cbrt(r46349205, r46349204, MPFR_RNDN);
        mpfr_pow(r46349206, r46349203, r46349205, MPFR_RNDN);
        ;
        mpfr_exp(r46349208, r46349207, MPFR_RNDN);
        mpfr_pow(r46349209, r46349208, r46349200, MPFR_RNDN);
        ;
        mpfr_exp(r46349211, r46349210, MPFR_RNDN);
        mpfr_pow(r46349212, r46349211, r46349202, MPFR_RNDN);
        mpfr_mul(r46349213, r46349209, r46349212, MPFR_RNDN);
        mpfr_mul(r46349214, r46349206, r46349213, MPFR_RNDN);
        mpfr_log(r46349215, r46349214, MPFR_RNDN);
        return mpfr_get_d(r46349215, MPFR_RNDN);
}

static mpfr_t r46349216, r46349217, r46349218, r46349219, r46349220, r46349221, r46349222, r46349223, r46349224, r46349225, r46349226, r46349227, r46349228, r46349229, r46349230, r46349231, r46349232, r46349233;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349216, "32.0", 10, MPFR_RNDN);
        mpfr_init(r46349217);
        mpfr_init(r46349218);
        mpfr_init_set_str(r46349219, "3", 10, MPFR_RNDN);
        mpfr_init(r46349220);
        mpfr_init(r46349221);
        mpfr_init(r46349222);
        mpfr_init(r46349223);
        mpfr_init(r46349224);
        mpfr_init_set_str(r46349225, "120.0", 10, MPFR_RNDN);
        mpfr_init(r46349226);
        mpfr_init(r46349227);
        mpfr_init_set_str(r46349228, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r46349229);
        mpfr_init(r46349230);
        mpfr_init(r46349231);
        mpfr_init(r46349232);
        mpfr_init(r46349233);
}

double f_dm(double x) {
        ;
        mpfr_exp(r46349217, r46349216, MPFR_RNDN);
        mpfr_set_d(r46349218, x, MPFR_RNDN);
        ;
        mpfr_pow(r46349220, r46349218, r46349219, MPFR_RNDN);
        mpfr_pow(r46349221, r46349217, r46349220, MPFR_RNDN);
        mpfr_mul(r46349222, r46349220, r46349220, MPFR_RNDN);
        mpfr_cbrt(r46349223, r46349222, MPFR_RNDN);
        mpfr_pow(r46349224, r46349221, r46349223, MPFR_RNDN);
        ;
        mpfr_exp(r46349226, r46349225, MPFR_RNDN);
        mpfr_pow(r46349227, r46349226, r46349218, MPFR_RNDN);
        ;
        mpfr_exp(r46349229, r46349228, MPFR_RNDN);
        mpfr_pow(r46349230, r46349229, r46349220, MPFR_RNDN);
        mpfr_mul(r46349231, r46349227, r46349230, MPFR_RNDN);
        mpfr_mul(r46349232, r46349224, r46349231, MPFR_RNDN);
        mpfr_log(r46349233, r46349232, MPFR_RNDN);
        return mpfr_get_d(r46349233, MPFR_RNDN);
}

