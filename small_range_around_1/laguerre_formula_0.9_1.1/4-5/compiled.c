#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r98658148 = 1.0;
        float r98658149 = -5.0;
        float r98658150 = x;
        float r98658151 = r98658149 * r98658150;
        float r98658152 = r98658148 + r98658151;
        float r98658153 = 5.0;
        float r98658154 = r98658150 * r98658150;
        float r98658155 = r98658153 * r98658154;
        float r98658156 = r98658152 + r98658155;
        float r98658157 = -1.666667;
        float r98658158 = r98658154 * r98658150;
        float r98658159 = r98658157 * r98658158;
        float r98658160 = r98658156 + r98658159;
        float r98658161 = 0.208333;
        float r98658162 = r98658158 * r98658150;
        float r98658163 = r98658161 * r98658162;
        float r98658164 = r98658160 + r98658163;
        float r98658165 = -0.008333;
        float r98658166 = r98658162 * r98658150;
        float r98658167 = r98658165 * r98658166;
        float r98658168 = r98658164 + r98658167;
        return r98658168;
}

double f_id(double x) {
        double r98658169 = 1.0;
        double r98658170 = -5.0;
        double r98658171 = x;
        double r98658172 = r98658170 * r98658171;
        double r98658173 = r98658169 + r98658172;
        double r98658174 = 5.0;
        double r98658175 = r98658171 * r98658171;
        double r98658176 = r98658174 * r98658175;
        double r98658177 = r98658173 + r98658176;
        double r98658178 = -1.666667;
        double r98658179 = r98658175 * r98658171;
        double r98658180 = r98658178 * r98658179;
        double r98658181 = r98658177 + r98658180;
        double r98658182 = 0.208333;
        double r98658183 = r98658179 * r98658171;
        double r98658184 = r98658182 * r98658183;
        double r98658185 = r98658181 + r98658184;
        double r98658186 = -0.008333;
        double r98658187 = r98658183 * r98658171;
        double r98658188 = r98658186 * r98658187;
        double r98658189 = r98658185 + r98658188;
        return r98658189;
}


double f_of(float x) {
        float r98658190 = x;
        float r98658191 = r98658190 * r98658190;
        float r98658192 = -1.666667;
        float r98658193 = r98658192 * r98658190;
        float r98658194 = 5.0;
        float r98658195 = r98658193 + r98658194;
        float r98658196 = r98658191 * r98658195;
        float r98658197 = -5.0;
        float r98658198 = r98658190 * r98658197;
        float r98658199 = r98658196 + r98658198;
        float r98658200 = 1.0;
        float r98658201 = -0.008333;
        float r98658202 = r98658190 * r98658201;
        float r98658203 = 0.208333;
        float r98658204 = r98658202 + r98658203;
        float r98658205 = 4;
        float r98658206 = pow(r98658190, r98658205);
        float r98658207 = r98658204 * r98658206;
        float r98658208 = r98658200 + r98658207;
        float r98658209 = r98658199 + r98658208;
        return r98658209;
}

double f_od(double x) {
        double r98658210 = x;
        double r98658211 = r98658210 * r98658210;
        double r98658212 = -1.666667;
        double r98658213 = r98658212 * r98658210;
        double r98658214 = 5.0;
        double r98658215 = r98658213 + r98658214;
        double r98658216 = r98658211 * r98658215;
        double r98658217 = -5.0;
        double r98658218 = r98658210 * r98658217;
        double r98658219 = r98658216 + r98658218;
        double r98658220 = 1.0;
        double r98658221 = -0.008333;
        double r98658222 = r98658210 * r98658221;
        double r98658223 = 0.208333;
        double r98658224 = r98658222 + r98658223;
        double r98658225 = 4;
        double r98658226 = pow(r98658210, r98658225);
        double r98658227 = r98658224 * r98658226;
        double r98658228 = r98658220 + r98658227;
        double r98658229 = r98658219 + r98658228;
        return r98658229;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r98658230, r98658231, r98658232, r98658233, r98658234, r98658235, r98658236, r98658237, r98658238, r98658239, r98658240, r98658241, r98658242, r98658243, r98658244, r98658245, r98658246, r98658247, r98658248, r98658249, r98658250;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658230, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658231, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r98658232);
        mpfr_init(r98658233);
        mpfr_init(r98658234);
        mpfr_init_set_str(r98658235, "5.0", 10, MPFR_RNDN);
        mpfr_init(r98658236);
        mpfr_init(r98658237);
        mpfr_init(r98658238);
        mpfr_init_set_str(r98658239, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r98658240);
        mpfr_init(r98658241);
        mpfr_init(r98658242);
        mpfr_init_set_str(r98658243, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r98658244);
        mpfr_init(r98658245);
        mpfr_init(r98658246);
        mpfr_init_set_str(r98658247, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r98658248);
        mpfr_init(r98658249);
        mpfr_init(r98658250);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r98658232, x, MPFR_RNDN);
        mpfr_mul(r98658233, r98658231, r98658232, MPFR_RNDN);
        mpfr_add(r98658234, r98658230, r98658233, MPFR_RNDN);
        ;
        mpfr_mul(r98658236, r98658232, r98658232, MPFR_RNDN);
        mpfr_mul(r98658237, r98658235, r98658236, MPFR_RNDN);
        mpfr_add(r98658238, r98658234, r98658237, MPFR_RNDN);
        ;
        mpfr_mul(r98658240, r98658236, r98658232, MPFR_RNDN);
        mpfr_mul(r98658241, r98658239, r98658240, MPFR_RNDN);
        mpfr_add(r98658242, r98658238, r98658241, MPFR_RNDN);
        ;
        mpfr_mul(r98658244, r98658240, r98658232, MPFR_RNDN);
        mpfr_mul(r98658245, r98658243, r98658244, MPFR_RNDN);
        mpfr_add(r98658246, r98658242, r98658245, MPFR_RNDN);
        ;
        mpfr_mul(r98658248, r98658244, r98658232, MPFR_RNDN);
        mpfr_mul(r98658249, r98658247, r98658248, MPFR_RNDN);
        mpfr_add(r98658250, r98658246, r98658249, MPFR_RNDN);
        return mpfr_get_d(r98658250, MPFR_RNDN);
}

static mpfr_t r98658251, r98658252, r98658253, r98658254, r98658255, r98658256, r98658257, r98658258, r98658259, r98658260, r98658261, r98658262, r98658263, r98658264, r98658265, r98658266, r98658267, r98658268, r98658269, r98658270;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r98658251);
        mpfr_init(r98658252);
        mpfr_init_set_str(r98658253, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r98658254);
        mpfr_init_set_str(r98658255, "5.0", 10, MPFR_RNDN);
        mpfr_init(r98658256);
        mpfr_init(r98658257);
        mpfr_init_set_str(r98658258, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r98658259);
        mpfr_init(r98658260);
        mpfr_init_set_str(r98658261, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658262, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r98658263);
        mpfr_init_set_str(r98658264, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r98658265);
        mpfr_init_set_str(r98658266, "4", 10, MPFR_RNDN);
        mpfr_init(r98658267);
        mpfr_init(r98658268);
        mpfr_init(r98658269);
        mpfr_init(r98658270);
}

double f_fm(double x) {
        mpfr_set_d(r98658251, x, MPFR_RNDN);
        mpfr_mul(r98658252, r98658251, r98658251, MPFR_RNDN);
        ;
        mpfr_mul(r98658254, r98658253, r98658251, MPFR_RNDN);
        ;
        mpfr_add(r98658256, r98658254, r98658255, MPFR_RNDN);
        mpfr_mul(r98658257, r98658252, r98658256, MPFR_RNDN);
        ;
        mpfr_mul(r98658259, r98658251, r98658258, MPFR_RNDN);
        mpfr_add(r98658260, r98658257, r98658259, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r98658263, r98658251, r98658262, MPFR_RNDN);
        ;
        mpfr_add(r98658265, r98658263, r98658264, MPFR_RNDN);
        ;
        mpfr_pow(r98658267, r98658251, r98658266, MPFR_RNDN);
        mpfr_mul(r98658268, r98658265, r98658267, MPFR_RNDN);
        mpfr_add(r98658269, r98658261, r98658268, MPFR_RNDN);
        mpfr_add(r98658270, r98658260, r98658269, MPFR_RNDN);
        return mpfr_get_d(r98658270, MPFR_RNDN);
}

static mpfr_t r98658271, r98658272, r98658273, r98658274, r98658275, r98658276, r98658277, r98658278, r98658279, r98658280, r98658281, r98658282, r98658283, r98658284, r98658285, r98658286, r98658287, r98658288, r98658289, r98658290;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r98658271);
        mpfr_init(r98658272);
        mpfr_init_set_str(r98658273, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r98658274);
        mpfr_init_set_str(r98658275, "5.0", 10, MPFR_RNDN);
        mpfr_init(r98658276);
        mpfr_init(r98658277);
        mpfr_init_set_str(r98658278, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r98658279);
        mpfr_init(r98658280);
        mpfr_init_set_str(r98658281, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658282, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r98658283);
        mpfr_init_set_str(r98658284, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r98658285);
        mpfr_init_set_str(r98658286, "4", 10, MPFR_RNDN);
        mpfr_init(r98658287);
        mpfr_init(r98658288);
        mpfr_init(r98658289);
        mpfr_init(r98658290);
}

double f_dm(double x) {
        mpfr_set_d(r98658271, x, MPFR_RNDN);
        mpfr_mul(r98658272, r98658271, r98658271, MPFR_RNDN);
        ;
        mpfr_mul(r98658274, r98658273, r98658271, MPFR_RNDN);
        ;
        mpfr_add(r98658276, r98658274, r98658275, MPFR_RNDN);
        mpfr_mul(r98658277, r98658272, r98658276, MPFR_RNDN);
        ;
        mpfr_mul(r98658279, r98658271, r98658278, MPFR_RNDN);
        mpfr_add(r98658280, r98658277, r98658279, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r98658283, r98658271, r98658282, MPFR_RNDN);
        ;
        mpfr_add(r98658285, r98658283, r98658284, MPFR_RNDN);
        ;
        mpfr_pow(r98658287, r98658271, r98658286, MPFR_RNDN);
        mpfr_mul(r98658288, r98658285, r98658287, MPFR_RNDN);
        mpfr_add(r98658289, r98658281, r98658288, MPFR_RNDN);
        mpfr_add(r98658290, r98658280, r98658289, MPFR_RNDN);
        return mpfr_get_d(r98658290, MPFR_RNDN);
}

