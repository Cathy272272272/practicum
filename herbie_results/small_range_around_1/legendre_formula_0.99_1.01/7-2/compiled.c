#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r49140180 = -0.5;
        float r49140181 = 1.5;
        float r49140182 = x;
        float r49140183 = r49140182 * r49140182;
        float r49140184 = r49140181 * r49140183;
        float r49140185 = r49140180 + r49140184;
        return r49140185;
}

double f_id(double x) {
        double r49140186 = -0.5;
        double r49140187 = 1.5;
        double r49140188 = x;
        double r49140189 = r49140188 * r49140188;
        double r49140190 = r49140187 * r49140189;
        double r49140191 = r49140186 + r49140190;
        return r49140191;
}


double f_of(float x) {
        float r49140192 = x;
        float r49140193 = 1.5;
        float r49140194 = r49140192 * r49140193;
        float r49140195 = r49140192 * r49140194;
        float r49140196 = -0.5;
        float r49140197 = r49140195 + r49140196;
        float r49140198 = r49140195 * r49140195;
        float r49140199 = r49140196 * r49140196;
        float r49140200 = r49140198 - r49140199;
        float r49140201 = r49140197 * r49140200;
        float r49140202 = r49140192 * r49140192;
        float r49140203 = r49140202 * r49140193;
        float r49140204 = r49140203 * r49140203;
        float r49140205 = r49140204 - r49140199;
        float r49140206 = r49140201 * r49140205;
        float r49140207 = r49140195 - r49140196;
        float r49140208 = r49140203 - r49140196;
        float r49140209 = r49140207 * r49140208;
        float r49140210 = r49140206 / r49140209;
        float r49140211 = cbrt(r49140210);
        return r49140211;
}

double f_od(double x) {
        double r49140212 = x;
        double r49140213 = 1.5;
        double r49140214 = r49140212 * r49140213;
        double r49140215 = r49140212 * r49140214;
        double r49140216 = -0.5;
        double r49140217 = r49140215 + r49140216;
        double r49140218 = r49140215 * r49140215;
        double r49140219 = r49140216 * r49140216;
        double r49140220 = r49140218 - r49140219;
        double r49140221 = r49140217 * r49140220;
        double r49140222 = r49140212 * r49140212;
        double r49140223 = r49140222 * r49140213;
        double r49140224 = r49140223 * r49140223;
        double r49140225 = r49140224 - r49140219;
        double r49140226 = r49140221 * r49140225;
        double r49140227 = r49140215 - r49140216;
        double r49140228 = r49140223 - r49140216;
        double r49140229 = r49140227 * r49140228;
        double r49140230 = r49140226 / r49140229;
        double r49140231 = cbrt(r49140230);
        return r49140231;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49140232, r49140233, r49140234, r49140235, r49140236, r49140237;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49140232, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r49140233, "1.5", 10, MPFR_RNDN);
        mpfr_init(r49140234);
        mpfr_init(r49140235);
        mpfr_init(r49140236);
        mpfr_init(r49140237);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r49140234, x, MPFR_RNDN);
        mpfr_mul(r49140235, r49140234, r49140234, MPFR_RNDN);
        mpfr_mul(r49140236, r49140233, r49140235, MPFR_RNDN);
        mpfr_add(r49140237, r49140232, r49140236, MPFR_RNDN);
        return mpfr_get_d(r49140237, MPFR_RNDN);
}

static mpfr_t r49140238, r49140239, r49140240, r49140241, r49140242, r49140243, r49140244, r49140245, r49140246, r49140247, r49140248, r49140249, r49140250, r49140251, r49140252, r49140253, r49140254, r49140255, r49140256, r49140257;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49140238);
        mpfr_init_set_str(r49140239, "1.5", 10, MPFR_RNDN);
        mpfr_init(r49140240);
        mpfr_init(r49140241);
        mpfr_init_set_str(r49140242, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r49140243);
        mpfr_init(r49140244);
        mpfr_init(r49140245);
        mpfr_init(r49140246);
        mpfr_init(r49140247);
        mpfr_init(r49140248);
        mpfr_init(r49140249);
        mpfr_init(r49140250);
        mpfr_init(r49140251);
        mpfr_init(r49140252);
        mpfr_init(r49140253);
        mpfr_init(r49140254);
        mpfr_init(r49140255);
        mpfr_init(r49140256);
        mpfr_init(r49140257);
}

double f_fm(double x) {
        mpfr_set_d(r49140238, x, MPFR_RNDN);
        ;
        mpfr_mul(r49140240, r49140238, r49140239, MPFR_RNDN);
        mpfr_mul(r49140241, r49140238, r49140240, MPFR_RNDN);
        ;
        mpfr_add(r49140243, r49140241, r49140242, MPFR_RNDN);
        mpfr_mul(r49140244, r49140241, r49140241, MPFR_RNDN);
        mpfr_mul(r49140245, r49140242, r49140242, MPFR_RNDN);
        mpfr_sub(r49140246, r49140244, r49140245, MPFR_RNDN);
        mpfr_mul(r49140247, r49140243, r49140246, MPFR_RNDN);
        mpfr_mul(r49140248, r49140238, r49140238, MPFR_RNDN);
        mpfr_mul(r49140249, r49140248, r49140239, MPFR_RNDN);
        mpfr_mul(r49140250, r49140249, r49140249, MPFR_RNDN);
        mpfr_sub(r49140251, r49140250, r49140245, MPFR_RNDN);
        mpfr_mul(r49140252, r49140247, r49140251, MPFR_RNDN);
        mpfr_sub(r49140253, r49140241, r49140242, MPFR_RNDN);
        mpfr_sub(r49140254, r49140249, r49140242, MPFR_RNDN);
        mpfr_mul(r49140255, r49140253, r49140254, MPFR_RNDN);
        mpfr_div(r49140256, r49140252, r49140255, MPFR_RNDN);
        mpfr_cbrt(r49140257, r49140256, MPFR_RNDN);
        return mpfr_get_d(r49140257, MPFR_RNDN);
}

static mpfr_t r49140258, r49140259, r49140260, r49140261, r49140262, r49140263, r49140264, r49140265, r49140266, r49140267, r49140268, r49140269, r49140270, r49140271, r49140272, r49140273, r49140274, r49140275, r49140276, r49140277;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49140258);
        mpfr_init_set_str(r49140259, "1.5", 10, MPFR_RNDN);
        mpfr_init(r49140260);
        mpfr_init(r49140261);
        mpfr_init_set_str(r49140262, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r49140263);
        mpfr_init(r49140264);
        mpfr_init(r49140265);
        mpfr_init(r49140266);
        mpfr_init(r49140267);
        mpfr_init(r49140268);
        mpfr_init(r49140269);
        mpfr_init(r49140270);
        mpfr_init(r49140271);
        mpfr_init(r49140272);
        mpfr_init(r49140273);
        mpfr_init(r49140274);
        mpfr_init(r49140275);
        mpfr_init(r49140276);
        mpfr_init(r49140277);
}

double f_dm(double x) {
        mpfr_set_d(r49140258, x, MPFR_RNDN);
        ;
        mpfr_mul(r49140260, r49140258, r49140259, MPFR_RNDN);
        mpfr_mul(r49140261, r49140258, r49140260, MPFR_RNDN);
        ;
        mpfr_add(r49140263, r49140261, r49140262, MPFR_RNDN);
        mpfr_mul(r49140264, r49140261, r49140261, MPFR_RNDN);
        mpfr_mul(r49140265, r49140262, r49140262, MPFR_RNDN);
        mpfr_sub(r49140266, r49140264, r49140265, MPFR_RNDN);
        mpfr_mul(r49140267, r49140263, r49140266, MPFR_RNDN);
        mpfr_mul(r49140268, r49140258, r49140258, MPFR_RNDN);
        mpfr_mul(r49140269, r49140268, r49140259, MPFR_RNDN);
        mpfr_mul(r49140270, r49140269, r49140269, MPFR_RNDN);
        mpfr_sub(r49140271, r49140270, r49140265, MPFR_RNDN);
        mpfr_mul(r49140272, r49140267, r49140271, MPFR_RNDN);
        mpfr_sub(r49140273, r49140261, r49140262, MPFR_RNDN);
        mpfr_sub(r49140274, r49140269, r49140262, MPFR_RNDN);
        mpfr_mul(r49140275, r49140273, r49140274, MPFR_RNDN);
        mpfr_div(r49140276, r49140272, r49140275, MPFR_RNDN);
        mpfr_cbrt(r49140277, r49140276, MPFR_RNDN);
        return mpfr_get_d(r49140277, MPFR_RNDN);
}

