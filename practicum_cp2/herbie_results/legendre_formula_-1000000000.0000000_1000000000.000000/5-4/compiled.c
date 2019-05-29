#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r5021137 = 0.375;
        float r5021138 = -3.75;
        float r5021139 = x;
        float r5021140 = r5021139 * r5021139;
        float r5021141 = r5021138 * r5021140;
        float r5021142 = r5021137 + r5021141;
        float r5021143 = 4.375;
        float r5021144 = r5021140 * r5021139;
        float r5021145 = r5021144 * r5021139;
        float r5021146 = r5021143 * r5021145;
        float r5021147 = r5021142 + r5021146;
        return r5021147;
}

double f_id(double x) {
        double r5021148 = 0.375;
        double r5021149 = -3.75;
        double r5021150 = x;
        double r5021151 = r5021150 * r5021150;
        double r5021152 = r5021149 * r5021151;
        double r5021153 = r5021148 + r5021152;
        double r5021154 = 4.375;
        double r5021155 = r5021151 * r5021150;
        double r5021156 = r5021155 * r5021150;
        double r5021157 = r5021154 * r5021156;
        double r5021158 = r5021153 + r5021157;
        return r5021158;
}


double f_of(float x) {
        float r5021159 = 0.375;
        float r5021160 = -3.75;
        float r5021161 = x;
        float r5021162 = r5021161 * r5021161;
        float r5021163 = r5021160 * r5021162;
        float r5021164 = r5021159 + r5021163;
        float r5021165 = 4.375;
        float r5021166 = 3;
        float r5021167 = pow(r5021161, r5021166);
        float r5021168 = r5021167 * r5021161;
        float r5021169 = r5021165 * r5021168;
        float r5021170 = r5021164 + r5021169;
        return r5021170;
}

double f_od(double x) {
        double r5021171 = 0.375;
        double r5021172 = -3.75;
        double r5021173 = x;
        double r5021174 = r5021173 * r5021173;
        double r5021175 = r5021172 * r5021174;
        double r5021176 = r5021171 + r5021175;
        double r5021177 = 4.375;
        double r5021178 = 3;
        double r5021179 = pow(r5021173, r5021178);
        double r5021180 = r5021179 * r5021173;
        double r5021181 = r5021177 * r5021180;
        double r5021182 = r5021176 + r5021181;
        return r5021182;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5021183, r5021184, r5021185, r5021186, r5021187, r5021188, r5021189, r5021190, r5021191, r5021192, r5021193;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5021183, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021184, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r5021185);
        mpfr_init(r5021186);
        mpfr_init(r5021187);
        mpfr_init(r5021188);
        mpfr_init_set_str(r5021189, "4.375", 10, MPFR_RNDN);
        mpfr_init(r5021190);
        mpfr_init(r5021191);
        mpfr_init(r5021192);
        mpfr_init(r5021193);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5021185, x, MPFR_RNDN);
        mpfr_mul(r5021186, r5021185, r5021185, MPFR_RNDN);
        mpfr_mul(r5021187, r5021184, r5021186, MPFR_RNDN);
        mpfr_add(r5021188, r5021183, r5021187, MPFR_RNDN);
        ;
        mpfr_mul(r5021190, r5021186, r5021185, MPFR_RNDN);
        mpfr_mul(r5021191, r5021190, r5021185, MPFR_RNDN);
        mpfr_mul(r5021192, r5021189, r5021191, MPFR_RNDN);
        mpfr_add(r5021193, r5021188, r5021192, MPFR_RNDN);
        return mpfr_get_d(r5021193, MPFR_RNDN);
}

static mpfr_t r5021194, r5021195, r5021196, r5021197, r5021198, r5021199, r5021200, r5021201, r5021202, r5021203, r5021204, r5021205;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5021194, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021195, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r5021196);
        mpfr_init(r5021197);
        mpfr_init(r5021198);
        mpfr_init(r5021199);
        mpfr_init_set_str(r5021200, "4.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021201, "3", 10, MPFR_RNDN);
        mpfr_init(r5021202);
        mpfr_init(r5021203);
        mpfr_init(r5021204);
        mpfr_init(r5021205);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5021196, x, MPFR_RNDN);
        mpfr_mul(r5021197, r5021196, r5021196, MPFR_RNDN);
        mpfr_mul(r5021198, r5021195, r5021197, MPFR_RNDN);
        mpfr_add(r5021199, r5021194, r5021198, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r5021202, r5021196, r5021201, MPFR_RNDN);
        mpfr_mul(r5021203, r5021202, r5021196, MPFR_RNDN);
        mpfr_mul(r5021204, r5021200, r5021203, MPFR_RNDN);
        mpfr_add(r5021205, r5021199, r5021204, MPFR_RNDN);
        return mpfr_get_d(r5021205, MPFR_RNDN);
}

static mpfr_t r5021206, r5021207, r5021208, r5021209, r5021210, r5021211, r5021212, r5021213, r5021214, r5021215, r5021216, r5021217;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5021206, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021207, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r5021208);
        mpfr_init(r5021209);
        mpfr_init(r5021210);
        mpfr_init(r5021211);
        mpfr_init_set_str(r5021212, "4.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021213, "3", 10, MPFR_RNDN);
        mpfr_init(r5021214);
        mpfr_init(r5021215);
        mpfr_init(r5021216);
        mpfr_init(r5021217);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5021208, x, MPFR_RNDN);
        mpfr_mul(r5021209, r5021208, r5021208, MPFR_RNDN);
        mpfr_mul(r5021210, r5021207, r5021209, MPFR_RNDN);
        mpfr_add(r5021211, r5021206, r5021210, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r5021214, r5021208, r5021213, MPFR_RNDN);
        mpfr_mul(r5021215, r5021214, r5021208, MPFR_RNDN);
        mpfr_mul(r5021216, r5021212, r5021215, MPFR_RNDN);
        mpfr_add(r5021217, r5021211, r5021216, MPFR_RNDN);
        return mpfr_get_d(r5021217, MPFR_RNDN);
}

