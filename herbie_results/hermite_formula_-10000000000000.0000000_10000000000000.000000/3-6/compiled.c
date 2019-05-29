#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r5316210 = -120.0;
        float r5316211 = 720.0;
        float r5316212 = x;
        float r5316213 = r5316212 * r5316212;
        float r5316214 = r5316211 * r5316213;
        float r5316215 = r5316210 + r5316214;
        float r5316216 = -480.0;
        float r5316217 = r5316213 * r5316212;
        float r5316218 = r5316217 * r5316212;
        float r5316219 = r5316216 * r5316218;
        float r5316220 = r5316215 + r5316219;
        float r5316221 = 64.0;
        float r5316222 = r5316218 * r5316212;
        float r5316223 = r5316222 * r5316212;
        float r5316224 = r5316221 * r5316223;
        float r5316225 = r5316220 + r5316224;
        return r5316225;
}

double f_id(double x) {
        double r5316226 = -120.0;
        double r5316227 = 720.0;
        double r5316228 = x;
        double r5316229 = r5316228 * r5316228;
        double r5316230 = r5316227 * r5316229;
        double r5316231 = r5316226 + r5316230;
        double r5316232 = -480.0;
        double r5316233 = r5316229 * r5316228;
        double r5316234 = r5316233 * r5316228;
        double r5316235 = r5316232 * r5316234;
        double r5316236 = r5316231 + r5316235;
        double r5316237 = 64.0;
        double r5316238 = r5316234 * r5316228;
        double r5316239 = r5316238 * r5316228;
        double r5316240 = r5316237 * r5316239;
        double r5316241 = r5316236 + r5316240;
        return r5316241;
}


double f_of(float x) {
        float r5316242 = x;
        float r5316243 = 720.0;
        float r5316244 = r5316242 * r5316243;
        float r5316245 = r5316244 * r5316242;
        float r5316246 = -120.0;
        float r5316247 = r5316245 + r5316246;
        float r5316248 = r5316242 * r5316242;
        float r5316249 = r5316248 * r5316248;
        float r5316250 = -480.0;
        float r5316251 = 64.0;
        float r5316252 = r5316248 * r5316251;
        float r5316253 = cbrt(r5316252);
        float r5316254 = r5316253 * r5316253;
        float r5316255 = r5316254 * r5316253;
        float r5316256 = r5316250 + r5316255;
        float r5316257 = r5316249 * r5316256;
        float r5316258 = r5316247 + r5316257;
        return r5316258;
}

double f_od(double x) {
        double r5316259 = x;
        double r5316260 = 720.0;
        double r5316261 = r5316259 * r5316260;
        double r5316262 = r5316261 * r5316259;
        double r5316263 = -120.0;
        double r5316264 = r5316262 + r5316263;
        double r5316265 = r5316259 * r5316259;
        double r5316266 = r5316265 * r5316265;
        double r5316267 = -480.0;
        double r5316268 = 64.0;
        double r5316269 = r5316265 * r5316268;
        double r5316270 = cbrt(r5316269);
        double r5316271 = r5316270 * r5316270;
        double r5316272 = r5316271 * r5316270;
        double r5316273 = r5316267 + r5316272;
        double r5316274 = r5316266 * r5316273;
        double r5316275 = r5316264 + r5316274;
        return r5316275;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5316276, r5316277, r5316278, r5316279, r5316280, r5316281, r5316282, r5316283, r5316284, r5316285, r5316286, r5316287, r5316288, r5316289, r5316290, r5316291;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5316276, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316277, "720.0", 10, MPFR_RNDN);
        mpfr_init(r5316278);
        mpfr_init(r5316279);
        mpfr_init(r5316280);
        mpfr_init(r5316281);
        mpfr_init_set_str(r5316282, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r5316283);
        mpfr_init(r5316284);
        mpfr_init(r5316285);
        mpfr_init(r5316286);
        mpfr_init_set_str(r5316287, "64.0", 10, MPFR_RNDN);
        mpfr_init(r5316288);
        mpfr_init(r5316289);
        mpfr_init(r5316290);
        mpfr_init(r5316291);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5316278, x, MPFR_RNDN);
        mpfr_mul(r5316279, r5316278, r5316278, MPFR_RNDN);
        mpfr_mul(r5316280, r5316277, r5316279, MPFR_RNDN);
        mpfr_add(r5316281, r5316276, r5316280, MPFR_RNDN);
        ;
        mpfr_mul(r5316283, r5316279, r5316278, MPFR_RNDN);
        mpfr_mul(r5316284, r5316283, r5316278, MPFR_RNDN);
        mpfr_mul(r5316285, r5316282, r5316284, MPFR_RNDN);
        mpfr_add(r5316286, r5316281, r5316285, MPFR_RNDN);
        ;
        mpfr_mul(r5316288, r5316284, r5316278, MPFR_RNDN);
        mpfr_mul(r5316289, r5316288, r5316278, MPFR_RNDN);
        mpfr_mul(r5316290, r5316287, r5316289, MPFR_RNDN);
        mpfr_add(r5316291, r5316286, r5316290, MPFR_RNDN);
        return mpfr_get_d(r5316291, MPFR_RNDN);
}

static mpfr_t r5316292, r5316293, r5316294, r5316295, r5316296, r5316297, r5316298, r5316299, r5316300, r5316301, r5316302, r5316303, r5316304, r5316305, r5316306, r5316307, r5316308;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5316292);
        mpfr_init_set_str(r5316293, "720.0", 10, MPFR_RNDN);
        mpfr_init(r5316294);
        mpfr_init(r5316295);
        mpfr_init_set_str(r5316296, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r5316297);
        mpfr_init(r5316298);
        mpfr_init(r5316299);
        mpfr_init_set_str(r5316300, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316301, "64.0", 10, MPFR_RNDN);
        mpfr_init(r5316302);
        mpfr_init(r5316303);
        mpfr_init(r5316304);
        mpfr_init(r5316305);
        mpfr_init(r5316306);
        mpfr_init(r5316307);
        mpfr_init(r5316308);
}

double f_fm(double x) {
        mpfr_set_d(r5316292, x, MPFR_RNDN);
        ;
        mpfr_mul(r5316294, r5316292, r5316293, MPFR_RNDN);
        mpfr_mul(r5316295, r5316294, r5316292, MPFR_RNDN);
        ;
        mpfr_add(r5316297, r5316295, r5316296, MPFR_RNDN);
        mpfr_mul(r5316298, r5316292, r5316292, MPFR_RNDN);
        mpfr_mul(r5316299, r5316298, r5316298, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5316302, r5316298, r5316301, MPFR_RNDN);
        mpfr_cbrt(r5316303, r5316302, MPFR_RNDN);
        mpfr_mul(r5316304, r5316303, r5316303, MPFR_RNDN);
        mpfr_mul(r5316305, r5316304, r5316303, MPFR_RNDN);
        mpfr_add(r5316306, r5316300, r5316305, MPFR_RNDN);
        mpfr_mul(r5316307, r5316299, r5316306, MPFR_RNDN);
        mpfr_add(r5316308, r5316297, r5316307, MPFR_RNDN);
        return mpfr_get_d(r5316308, MPFR_RNDN);
}

static mpfr_t r5316309, r5316310, r5316311, r5316312, r5316313, r5316314, r5316315, r5316316, r5316317, r5316318, r5316319, r5316320, r5316321, r5316322, r5316323, r5316324, r5316325;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5316309);
        mpfr_init_set_str(r5316310, "720.0", 10, MPFR_RNDN);
        mpfr_init(r5316311);
        mpfr_init(r5316312);
        mpfr_init_set_str(r5316313, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r5316314);
        mpfr_init(r5316315);
        mpfr_init(r5316316);
        mpfr_init_set_str(r5316317, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316318, "64.0", 10, MPFR_RNDN);
        mpfr_init(r5316319);
        mpfr_init(r5316320);
        mpfr_init(r5316321);
        mpfr_init(r5316322);
        mpfr_init(r5316323);
        mpfr_init(r5316324);
        mpfr_init(r5316325);
}

double f_dm(double x) {
        mpfr_set_d(r5316309, x, MPFR_RNDN);
        ;
        mpfr_mul(r5316311, r5316309, r5316310, MPFR_RNDN);
        mpfr_mul(r5316312, r5316311, r5316309, MPFR_RNDN);
        ;
        mpfr_add(r5316314, r5316312, r5316313, MPFR_RNDN);
        mpfr_mul(r5316315, r5316309, r5316309, MPFR_RNDN);
        mpfr_mul(r5316316, r5316315, r5316315, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5316319, r5316315, r5316318, MPFR_RNDN);
        mpfr_cbrt(r5316320, r5316319, MPFR_RNDN);
        mpfr_mul(r5316321, r5316320, r5316320, MPFR_RNDN);
        mpfr_mul(r5316322, r5316321, r5316320, MPFR_RNDN);
        mpfr_add(r5316323, r5316317, r5316322, MPFR_RNDN);
        mpfr_mul(r5316324, r5316316, r5316323, MPFR_RNDN);
        mpfr_add(r5316325, r5316314, r5316324, MPFR_RNDN);
        return mpfr_get_d(r5316325, MPFR_RNDN);
}

