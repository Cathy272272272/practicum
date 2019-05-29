#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7639132 = -120.0;
        float r7639133 = 720.0;
        float r7639134 = x;
        float r7639135 = r7639134 * r7639134;
        float r7639136 = r7639133 * r7639135;
        float r7639137 = r7639132 + r7639136;
        float r7639138 = -480.0;
        float r7639139 = r7639135 * r7639134;
        float r7639140 = r7639139 * r7639134;
        float r7639141 = r7639138 * r7639140;
        float r7639142 = r7639137 + r7639141;
        float r7639143 = 64.0;
        float r7639144 = r7639140 * r7639134;
        float r7639145 = r7639144 * r7639134;
        float r7639146 = r7639143 * r7639145;
        float r7639147 = r7639142 + r7639146;
        return r7639147;
}

double f_id(double x) {
        double r7639148 = -120.0;
        double r7639149 = 720.0;
        double r7639150 = x;
        double r7639151 = r7639150 * r7639150;
        double r7639152 = r7639149 * r7639151;
        double r7639153 = r7639148 + r7639152;
        double r7639154 = -480.0;
        double r7639155 = r7639151 * r7639150;
        double r7639156 = r7639155 * r7639150;
        double r7639157 = r7639154 * r7639156;
        double r7639158 = r7639153 + r7639157;
        double r7639159 = 64.0;
        double r7639160 = r7639156 * r7639150;
        double r7639161 = r7639160 * r7639150;
        double r7639162 = r7639159 * r7639161;
        double r7639163 = r7639158 + r7639162;
        return r7639163;
}


double f_of(float x) {
        float r7639164 = -120.0;
        float r7639165 = 720.0;
        float r7639166 = x;
        float r7639167 = r7639166 * r7639166;
        float r7639168 = r7639165 * r7639167;
        float r7639169 = r7639164 + r7639168;
        float r7639170 = -480.0;
        float r7639171 = r7639167 * r7639166;
        float r7639172 = r7639171 * r7639166;
        float r7639173 = r7639170 * r7639172;
        float r7639174 = r7639169 + r7639173;
        float r7639175 = 64.0;
        float r7639176 = 3;
        float r7639177 = pow(r7639166, r7639176);
        float r7639178 = r7639177 * r7639166;
        float r7639179 = r7639178 * r7639166;
        float r7639180 = r7639179 * r7639166;
        float r7639181 = r7639175 * r7639180;
        float r7639182 = r7639174 + r7639181;
        return r7639182;
}

double f_od(double x) {
        double r7639183 = -120.0;
        double r7639184 = 720.0;
        double r7639185 = x;
        double r7639186 = r7639185 * r7639185;
        double r7639187 = r7639184 * r7639186;
        double r7639188 = r7639183 + r7639187;
        double r7639189 = -480.0;
        double r7639190 = r7639186 * r7639185;
        double r7639191 = r7639190 * r7639185;
        double r7639192 = r7639189 * r7639191;
        double r7639193 = r7639188 + r7639192;
        double r7639194 = 64.0;
        double r7639195 = 3;
        double r7639196 = pow(r7639185, r7639195);
        double r7639197 = r7639196 * r7639185;
        double r7639198 = r7639197 * r7639185;
        double r7639199 = r7639198 * r7639185;
        double r7639200 = r7639194 * r7639199;
        double r7639201 = r7639193 + r7639200;
        return r7639201;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7639202, r7639203, r7639204, r7639205, r7639206, r7639207, r7639208, r7639209, r7639210, r7639211, r7639212, r7639213, r7639214, r7639215, r7639216, r7639217;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7639202, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639203, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7639204);
        mpfr_init(r7639205);
        mpfr_init(r7639206);
        mpfr_init(r7639207);
        mpfr_init_set_str(r7639208, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7639209);
        mpfr_init(r7639210);
        mpfr_init(r7639211);
        mpfr_init(r7639212);
        mpfr_init_set_str(r7639213, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7639214);
        mpfr_init(r7639215);
        mpfr_init(r7639216);
        mpfr_init(r7639217);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7639204, x, MPFR_RNDN);
        mpfr_mul(r7639205, r7639204, r7639204, MPFR_RNDN);
        mpfr_mul(r7639206, r7639203, r7639205, MPFR_RNDN);
        mpfr_add(r7639207, r7639202, r7639206, MPFR_RNDN);
        ;
        mpfr_mul(r7639209, r7639205, r7639204, MPFR_RNDN);
        mpfr_mul(r7639210, r7639209, r7639204, MPFR_RNDN);
        mpfr_mul(r7639211, r7639208, r7639210, MPFR_RNDN);
        mpfr_add(r7639212, r7639207, r7639211, MPFR_RNDN);
        ;
        mpfr_mul(r7639214, r7639210, r7639204, MPFR_RNDN);
        mpfr_mul(r7639215, r7639214, r7639204, MPFR_RNDN);
        mpfr_mul(r7639216, r7639213, r7639215, MPFR_RNDN);
        mpfr_add(r7639217, r7639212, r7639216, MPFR_RNDN);
        return mpfr_get_d(r7639217, MPFR_RNDN);
}

static mpfr_t r7639218, r7639219, r7639220, r7639221, r7639222, r7639223, r7639224, r7639225, r7639226, r7639227, r7639228, r7639229, r7639230, r7639231, r7639232, r7639233, r7639234, r7639235, r7639236;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7639218, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639219, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7639220);
        mpfr_init(r7639221);
        mpfr_init(r7639222);
        mpfr_init(r7639223);
        mpfr_init_set_str(r7639224, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7639225);
        mpfr_init(r7639226);
        mpfr_init(r7639227);
        mpfr_init(r7639228);
        mpfr_init_set_str(r7639229, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639230, "3", 10, MPFR_RNDN);
        mpfr_init(r7639231);
        mpfr_init(r7639232);
        mpfr_init(r7639233);
        mpfr_init(r7639234);
        mpfr_init(r7639235);
        mpfr_init(r7639236);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7639220, x, MPFR_RNDN);
        mpfr_mul(r7639221, r7639220, r7639220, MPFR_RNDN);
        mpfr_mul(r7639222, r7639219, r7639221, MPFR_RNDN);
        mpfr_add(r7639223, r7639218, r7639222, MPFR_RNDN);
        ;
        mpfr_mul(r7639225, r7639221, r7639220, MPFR_RNDN);
        mpfr_mul(r7639226, r7639225, r7639220, MPFR_RNDN);
        mpfr_mul(r7639227, r7639224, r7639226, MPFR_RNDN);
        mpfr_add(r7639228, r7639223, r7639227, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7639231, r7639220, r7639230, MPFR_RNDN);
        mpfr_mul(r7639232, r7639231, r7639220, MPFR_RNDN);
        mpfr_mul(r7639233, r7639232, r7639220, MPFR_RNDN);
        mpfr_mul(r7639234, r7639233, r7639220, MPFR_RNDN);
        mpfr_mul(r7639235, r7639229, r7639234, MPFR_RNDN);
        mpfr_add(r7639236, r7639228, r7639235, MPFR_RNDN);
        return mpfr_get_d(r7639236, MPFR_RNDN);
}

static mpfr_t r7639237, r7639238, r7639239, r7639240, r7639241, r7639242, r7639243, r7639244, r7639245, r7639246, r7639247, r7639248, r7639249, r7639250, r7639251, r7639252, r7639253, r7639254, r7639255;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7639237, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639238, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7639239);
        mpfr_init(r7639240);
        mpfr_init(r7639241);
        mpfr_init(r7639242);
        mpfr_init_set_str(r7639243, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7639244);
        mpfr_init(r7639245);
        mpfr_init(r7639246);
        mpfr_init(r7639247);
        mpfr_init_set_str(r7639248, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639249, "3", 10, MPFR_RNDN);
        mpfr_init(r7639250);
        mpfr_init(r7639251);
        mpfr_init(r7639252);
        mpfr_init(r7639253);
        mpfr_init(r7639254);
        mpfr_init(r7639255);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7639239, x, MPFR_RNDN);
        mpfr_mul(r7639240, r7639239, r7639239, MPFR_RNDN);
        mpfr_mul(r7639241, r7639238, r7639240, MPFR_RNDN);
        mpfr_add(r7639242, r7639237, r7639241, MPFR_RNDN);
        ;
        mpfr_mul(r7639244, r7639240, r7639239, MPFR_RNDN);
        mpfr_mul(r7639245, r7639244, r7639239, MPFR_RNDN);
        mpfr_mul(r7639246, r7639243, r7639245, MPFR_RNDN);
        mpfr_add(r7639247, r7639242, r7639246, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7639250, r7639239, r7639249, MPFR_RNDN);
        mpfr_mul(r7639251, r7639250, r7639239, MPFR_RNDN);
        mpfr_mul(r7639252, r7639251, r7639239, MPFR_RNDN);
        mpfr_mul(r7639253, r7639252, r7639239, MPFR_RNDN);
        mpfr_mul(r7639254, r7639248, r7639253, MPFR_RNDN);
        mpfr_add(r7639255, r7639247, r7639254, MPFR_RNDN);
        return mpfr_get_d(r7639255, MPFR_RNDN);
}

