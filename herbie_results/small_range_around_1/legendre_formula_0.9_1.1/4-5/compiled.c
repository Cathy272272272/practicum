#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r31481106 = 1.875;
        float r31481107 = x;
        float r31481108 = r31481106 * r31481107;
        float r31481109 = -8.75;
        float r31481110 = r31481107 * r31481107;
        float r31481111 = r31481110 * r31481107;
        float r31481112 = r31481109 * r31481111;
        float r31481113 = r31481108 + r31481112;
        float r31481114 = 7.875;
        float r31481115 = r31481111 * r31481107;
        float r31481116 = r31481115 * r31481107;
        float r31481117 = r31481114 * r31481116;
        float r31481118 = r31481113 + r31481117;
        return r31481118;
}

double f_id(double x) {
        double r31481119 = 1.875;
        double r31481120 = x;
        double r31481121 = r31481119 * r31481120;
        double r31481122 = -8.75;
        double r31481123 = r31481120 * r31481120;
        double r31481124 = r31481123 * r31481120;
        double r31481125 = r31481122 * r31481124;
        double r31481126 = r31481121 + r31481125;
        double r31481127 = 7.875;
        double r31481128 = r31481124 * r31481120;
        double r31481129 = r31481128 * r31481120;
        double r31481130 = r31481127 * r31481129;
        double r31481131 = r31481126 + r31481130;
        return r31481131;
}


double f_of(float x) {
        float r31481132 = 7.875;
        float r31481133 = exp(r31481132);
        float r31481134 = cbrt(r31481133);
        float r31481135 = r31481134 * r31481134;
        float r31481136 = x;
        float r31481137 = 3;
        float r31481138 = pow(r31481136, r31481137);
        float r31481139 = pow(r31481135, r31481138);
        float r31481140 = pow(r31481134, r31481138);
        float r31481141 = r31481139 * r31481140;
        float r31481142 = pow(r31481141, r31481136);
        float r31481143 = pow(r31481142, r31481136);
        float r31481144 = 1.875;
        float r31481145 = r31481144 * r31481136;
        float r31481146 = exp(r31481145);
        float r31481147 = -8.75;
        float r31481148 = exp(r31481147);
        float r31481149 = pow(r31481148, r31481138);
        float r31481150 = r31481146 * r31481149;
        float r31481151 = r31481143 * r31481150;
        float r31481152 = log(r31481151);
        return r31481152;
}

double f_od(double x) {
        double r31481153 = 7.875;
        double r31481154 = exp(r31481153);
        double r31481155 = cbrt(r31481154);
        double r31481156 = r31481155 * r31481155;
        double r31481157 = x;
        double r31481158 = 3;
        double r31481159 = pow(r31481157, r31481158);
        double r31481160 = pow(r31481156, r31481159);
        double r31481161 = pow(r31481155, r31481159);
        double r31481162 = r31481160 * r31481161;
        double r31481163 = pow(r31481162, r31481157);
        double r31481164 = pow(r31481163, r31481157);
        double r31481165 = 1.875;
        double r31481166 = r31481165 * r31481157;
        double r31481167 = exp(r31481166);
        double r31481168 = -8.75;
        double r31481169 = exp(r31481168);
        double r31481170 = pow(r31481169, r31481159);
        double r31481171 = r31481167 * r31481170;
        double r31481172 = r31481164 * r31481171;
        double r31481173 = log(r31481172);
        return r31481173;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31481174, r31481175, r31481176, r31481177, r31481178, r31481179, r31481180, r31481181, r31481182, r31481183, r31481184, r31481185, r31481186;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481174, "1.875", 10, MPFR_RNDN);
        mpfr_init(r31481175);
        mpfr_init(r31481176);
        mpfr_init_set_str(r31481177, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r31481178);
        mpfr_init(r31481179);
        mpfr_init(r31481180);
        mpfr_init(r31481181);
        mpfr_init_set_str(r31481182, "7.875", 10, MPFR_RNDN);
        mpfr_init(r31481183);
        mpfr_init(r31481184);
        mpfr_init(r31481185);
        mpfr_init(r31481186);
}

double f_im(double x) {
        ;
        mpfr_set_d(r31481175, x, MPFR_RNDN);
        mpfr_mul(r31481176, r31481174, r31481175, MPFR_RNDN);
        ;
        mpfr_mul(r31481178, r31481175, r31481175, MPFR_RNDN);
        mpfr_mul(r31481179, r31481178, r31481175, MPFR_RNDN);
        mpfr_mul(r31481180, r31481177, r31481179, MPFR_RNDN);
        mpfr_add(r31481181, r31481176, r31481180, MPFR_RNDN);
        ;
        mpfr_mul(r31481183, r31481179, r31481175, MPFR_RNDN);
        mpfr_mul(r31481184, r31481183, r31481175, MPFR_RNDN);
        mpfr_mul(r31481185, r31481182, r31481184, MPFR_RNDN);
        mpfr_add(r31481186, r31481181, r31481185, MPFR_RNDN);
        return mpfr_get_d(r31481186, MPFR_RNDN);
}

static mpfr_t r31481187, r31481188, r31481189, r31481190, r31481191, r31481192, r31481193, r31481194, r31481195, r31481196, r31481197, r31481198, r31481199, r31481200, r31481201, r31481202, r31481203, r31481204, r31481205, r31481206, r31481207;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481187, "7.875", 10, MPFR_RNDN);
        mpfr_init(r31481188);
        mpfr_init(r31481189);
        mpfr_init(r31481190);
        mpfr_init(r31481191);
        mpfr_init_set_str(r31481192, "3", 10, MPFR_RNDN);
        mpfr_init(r31481193);
        mpfr_init(r31481194);
        mpfr_init(r31481195);
        mpfr_init(r31481196);
        mpfr_init(r31481197);
        mpfr_init(r31481198);
        mpfr_init_set_str(r31481199, "1.875", 10, MPFR_RNDN);
        mpfr_init(r31481200);
        mpfr_init(r31481201);
        mpfr_init_set_str(r31481202, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r31481203);
        mpfr_init(r31481204);
        mpfr_init(r31481205);
        mpfr_init(r31481206);
        mpfr_init(r31481207);
}

double f_fm(double x) {
        ;
        mpfr_exp(r31481188, r31481187, MPFR_RNDN);
        mpfr_cbrt(r31481189, r31481188, MPFR_RNDN);
        mpfr_mul(r31481190, r31481189, r31481189, MPFR_RNDN);
        mpfr_set_d(r31481191, x, MPFR_RNDN);
        ;
        mpfr_pow(r31481193, r31481191, r31481192, MPFR_RNDN);
        mpfr_pow(r31481194, r31481190, r31481193, MPFR_RNDN);
        mpfr_pow(r31481195, r31481189, r31481193, MPFR_RNDN);
        mpfr_mul(r31481196, r31481194, r31481195, MPFR_RNDN);
        mpfr_pow(r31481197, r31481196, r31481191, MPFR_RNDN);
        mpfr_pow(r31481198, r31481197, r31481191, MPFR_RNDN);
        ;
        mpfr_mul(r31481200, r31481199, r31481191, MPFR_RNDN);
        mpfr_exp(r31481201, r31481200, MPFR_RNDN);
        ;
        mpfr_exp(r31481203, r31481202, MPFR_RNDN);
        mpfr_pow(r31481204, r31481203, r31481193, MPFR_RNDN);
        mpfr_mul(r31481205, r31481201, r31481204, MPFR_RNDN);
        mpfr_mul(r31481206, r31481198, r31481205, MPFR_RNDN);
        mpfr_log(r31481207, r31481206, MPFR_RNDN);
        return mpfr_get_d(r31481207, MPFR_RNDN);
}

static mpfr_t r31481208, r31481209, r31481210, r31481211, r31481212, r31481213, r31481214, r31481215, r31481216, r31481217, r31481218, r31481219, r31481220, r31481221, r31481222, r31481223, r31481224, r31481225, r31481226, r31481227, r31481228;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481208, "7.875", 10, MPFR_RNDN);
        mpfr_init(r31481209);
        mpfr_init(r31481210);
        mpfr_init(r31481211);
        mpfr_init(r31481212);
        mpfr_init_set_str(r31481213, "3", 10, MPFR_RNDN);
        mpfr_init(r31481214);
        mpfr_init(r31481215);
        mpfr_init(r31481216);
        mpfr_init(r31481217);
        mpfr_init(r31481218);
        mpfr_init(r31481219);
        mpfr_init_set_str(r31481220, "1.875", 10, MPFR_RNDN);
        mpfr_init(r31481221);
        mpfr_init(r31481222);
        mpfr_init_set_str(r31481223, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r31481224);
        mpfr_init(r31481225);
        mpfr_init(r31481226);
        mpfr_init(r31481227);
        mpfr_init(r31481228);
}

double f_dm(double x) {
        ;
        mpfr_exp(r31481209, r31481208, MPFR_RNDN);
        mpfr_cbrt(r31481210, r31481209, MPFR_RNDN);
        mpfr_mul(r31481211, r31481210, r31481210, MPFR_RNDN);
        mpfr_set_d(r31481212, x, MPFR_RNDN);
        ;
        mpfr_pow(r31481214, r31481212, r31481213, MPFR_RNDN);
        mpfr_pow(r31481215, r31481211, r31481214, MPFR_RNDN);
        mpfr_pow(r31481216, r31481210, r31481214, MPFR_RNDN);
        mpfr_mul(r31481217, r31481215, r31481216, MPFR_RNDN);
        mpfr_pow(r31481218, r31481217, r31481212, MPFR_RNDN);
        mpfr_pow(r31481219, r31481218, r31481212, MPFR_RNDN);
        ;
        mpfr_mul(r31481221, r31481220, r31481212, MPFR_RNDN);
        mpfr_exp(r31481222, r31481221, MPFR_RNDN);
        ;
        mpfr_exp(r31481224, r31481223, MPFR_RNDN);
        mpfr_pow(r31481225, r31481224, r31481214, MPFR_RNDN);
        mpfr_mul(r31481226, r31481222, r31481225, MPFR_RNDN);
        mpfr_mul(r31481227, r31481219, r31481226, MPFR_RNDN);
        mpfr_log(r31481228, r31481227, MPFR_RNDN);
        return mpfr_get_d(r31481228, MPFR_RNDN);
}

