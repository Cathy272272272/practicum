#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r11730118 = 1.0;
        float r11730119 = -3.0;
        float r11730120 = x;
        float r11730121 = r11730119 * r11730120;
        float r11730122 = r11730118 + r11730121;
        float r11730123 = 1.5;
        float r11730124 = r11730120 * r11730120;
        float r11730125 = r11730123 * r11730124;
        float r11730126 = r11730122 + r11730125;
        float r11730127 = -0.166667;
        float r11730128 = r11730124 * r11730120;
        float r11730129 = r11730127 * r11730128;
        float r11730130 = r11730126 + r11730129;
        return r11730130;
}

double f_id(double x) {
        double r11730131 = 1.0;
        double r11730132 = -3.0;
        double r11730133 = x;
        double r11730134 = r11730132 * r11730133;
        double r11730135 = r11730131 + r11730134;
        double r11730136 = 1.5;
        double r11730137 = r11730133 * r11730133;
        double r11730138 = r11730136 * r11730137;
        double r11730139 = r11730135 + r11730138;
        double r11730140 = -0.166667;
        double r11730141 = r11730137 * r11730133;
        double r11730142 = r11730140 * r11730141;
        double r11730143 = r11730139 + r11730142;
        return r11730143;
}


double f_of(float x) {
        float r11730144 = x;
        float r11730145 = -3.0;
        float r11730146 = r11730144 * r11730145;
        float r11730147 = 1.0;
        float r11730148 = r11730146 + r11730147;
        float r11730149 = 1.5;
        float r11730150 = -0.166667;
        float r11730151 = r11730150 * r11730144;
        float r11730152 = r11730149 + r11730151;
        float r11730153 = r11730152 * r11730144;
        float r11730154 = r11730153 * r11730144;
        float r11730155 = r11730148 + r11730154;
        return r11730155;
}

double f_od(double x) {
        double r11730156 = x;
        double r11730157 = -3.0;
        double r11730158 = r11730156 * r11730157;
        double r11730159 = 1.0;
        double r11730160 = r11730158 + r11730159;
        double r11730161 = 1.5;
        double r11730162 = -0.166667;
        double r11730163 = r11730162 * r11730156;
        double r11730164 = r11730161 + r11730163;
        double r11730165 = r11730164 * r11730156;
        double r11730166 = r11730165 * r11730156;
        double r11730167 = r11730160 + r11730166;
        return r11730167;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11730168, r11730169, r11730170, r11730171, r11730172, r11730173, r11730174, r11730175, r11730176, r11730177, r11730178, r11730179, r11730180;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11730168, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730169, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11730170);
        mpfr_init(r11730171);
        mpfr_init(r11730172);
        mpfr_init_set_str(r11730173, "1.5", 10, MPFR_RNDN);
        mpfr_init(r11730174);
        mpfr_init(r11730175);
        mpfr_init(r11730176);
        mpfr_init_set_str(r11730177, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11730178);
        mpfr_init(r11730179);
        mpfr_init(r11730180);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11730170, x, MPFR_RNDN);
        mpfr_mul(r11730171, r11730169, r11730170, MPFR_RNDN);
        mpfr_add(r11730172, r11730168, r11730171, MPFR_RNDN);
        ;
        mpfr_mul(r11730174, r11730170, r11730170, MPFR_RNDN);
        mpfr_mul(r11730175, r11730173, r11730174, MPFR_RNDN);
        mpfr_add(r11730176, r11730172, r11730175, MPFR_RNDN);
        ;
        mpfr_mul(r11730178, r11730174, r11730170, MPFR_RNDN);
        mpfr_mul(r11730179, r11730177, r11730178, MPFR_RNDN);
        mpfr_add(r11730180, r11730176, r11730179, MPFR_RNDN);
        return mpfr_get_d(r11730180, MPFR_RNDN);
}

static mpfr_t r11730181, r11730182, r11730183, r11730184, r11730185, r11730186, r11730187, r11730188, r11730189, r11730190, r11730191, r11730192;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11730181);
        mpfr_init_set_str(r11730182, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11730183);
        mpfr_init_set_str(r11730184, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11730185);
        mpfr_init_set_str(r11730186, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730187, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11730188);
        mpfr_init(r11730189);
        mpfr_init(r11730190);
        mpfr_init(r11730191);
        mpfr_init(r11730192);
}

double f_fm(double x) {
        mpfr_set_d(r11730181, x, MPFR_RNDN);
        ;
        mpfr_mul(r11730183, r11730181, r11730182, MPFR_RNDN);
        ;
        mpfr_add(r11730185, r11730183, r11730184, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11730188, r11730187, r11730181, MPFR_RNDN);
        mpfr_add(r11730189, r11730186, r11730188, MPFR_RNDN);
        mpfr_mul(r11730190, r11730189, r11730181, MPFR_RNDN);
        mpfr_mul(r11730191, r11730190, r11730181, MPFR_RNDN);
        mpfr_add(r11730192, r11730185, r11730191, MPFR_RNDN);
        return mpfr_get_d(r11730192, MPFR_RNDN);
}

static mpfr_t r11730193, r11730194, r11730195, r11730196, r11730197, r11730198, r11730199, r11730200, r11730201, r11730202, r11730203, r11730204;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11730193);
        mpfr_init_set_str(r11730194, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11730195);
        mpfr_init_set_str(r11730196, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11730197);
        mpfr_init_set_str(r11730198, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730199, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11730200);
        mpfr_init(r11730201);
        mpfr_init(r11730202);
        mpfr_init(r11730203);
        mpfr_init(r11730204);
}

double f_dm(double x) {
        mpfr_set_d(r11730193, x, MPFR_RNDN);
        ;
        mpfr_mul(r11730195, r11730193, r11730194, MPFR_RNDN);
        ;
        mpfr_add(r11730197, r11730195, r11730196, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11730200, r11730199, r11730193, MPFR_RNDN);
        mpfr_add(r11730201, r11730198, r11730200, MPFR_RNDN);
        mpfr_mul(r11730202, r11730201, r11730193, MPFR_RNDN);
        mpfr_mul(r11730203, r11730202, r11730193, MPFR_RNDN);
        mpfr_add(r11730204, r11730197, r11730203, MPFR_RNDN);
        return mpfr_get_d(r11730204, MPFR_RNDN);
}

