#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r8596241 = 1.0;
        float r8596242 = -2.0;
        float r8596243 = x;
        float r8596244 = r8596242 * r8596243;
        float r8596245 = r8596241 + r8596244;
        float r8596246 = 0.5;
        float r8596247 = r8596243 * r8596243;
        float r8596248 = r8596246 * r8596247;
        float r8596249 = r8596245 + r8596248;
        return r8596249;
}

double f_id(double x) {
        double r8596250 = 1.0;
        double r8596251 = -2.0;
        double r8596252 = x;
        double r8596253 = r8596251 * r8596252;
        double r8596254 = r8596250 + r8596253;
        double r8596255 = 0.5;
        double r8596256 = r8596252 * r8596252;
        double r8596257 = r8596255 * r8596256;
        double r8596258 = r8596254 + r8596257;
        return r8596258;
}


double f_of(float x) {
        float r8596259 = 1.0;
        float r8596260 = -2.0;
        float r8596261 = x;
        float r8596262 = r8596260 * r8596261;
        float r8596263 = r8596259 + r8596262;
        float r8596264 = 0.5;
        float r8596265 = r8596261 * r8596261;
        float r8596266 = r8596264 * r8596265;
        float r8596267 = r8596263 + r8596266;
        return r8596267;
}

double f_od(double x) {
        double r8596268 = 1.0;
        double r8596269 = -2.0;
        double r8596270 = x;
        double r8596271 = r8596269 * r8596270;
        double r8596272 = r8596268 + r8596271;
        double r8596273 = 0.5;
        double r8596274 = r8596270 * r8596270;
        double r8596275 = r8596273 * r8596274;
        double r8596276 = r8596272 + r8596275;
        return r8596276;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8596277, r8596278, r8596279, r8596280, r8596281, r8596282, r8596283, r8596284, r8596285;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8596277, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596278, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r8596279);
        mpfr_init(r8596280);
        mpfr_init(r8596281);
        mpfr_init_set_str(r8596282, "0.5", 10, MPFR_RNDN);
        mpfr_init(r8596283);
        mpfr_init(r8596284);
        mpfr_init(r8596285);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8596279, x, MPFR_RNDN);
        mpfr_mul(r8596280, r8596278, r8596279, MPFR_RNDN);
        mpfr_add(r8596281, r8596277, r8596280, MPFR_RNDN);
        ;
        mpfr_mul(r8596283, r8596279, r8596279, MPFR_RNDN);
        mpfr_mul(r8596284, r8596282, r8596283, MPFR_RNDN);
        mpfr_add(r8596285, r8596281, r8596284, MPFR_RNDN);
        return mpfr_get_d(r8596285, MPFR_RNDN);
}

static mpfr_t r8596286, r8596287, r8596288, r8596289, r8596290, r8596291, r8596292, r8596293, r8596294;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8596286, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596287, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r8596288);
        mpfr_init(r8596289);
        mpfr_init(r8596290);
        mpfr_init_set_str(r8596291, "0.5", 10, MPFR_RNDN);
        mpfr_init(r8596292);
        mpfr_init(r8596293);
        mpfr_init(r8596294);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8596288, x, MPFR_RNDN);
        mpfr_mul(r8596289, r8596287, r8596288, MPFR_RNDN);
        mpfr_add(r8596290, r8596286, r8596289, MPFR_RNDN);
        ;
        mpfr_mul(r8596292, r8596288, r8596288, MPFR_RNDN);
        mpfr_mul(r8596293, r8596291, r8596292, MPFR_RNDN);
        mpfr_add(r8596294, r8596290, r8596293, MPFR_RNDN);
        return mpfr_get_d(r8596294, MPFR_RNDN);
}

static mpfr_t r8596295, r8596296, r8596297, r8596298, r8596299, r8596300, r8596301, r8596302, r8596303;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8596295, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596296, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r8596297);
        mpfr_init(r8596298);
        mpfr_init(r8596299);
        mpfr_init_set_str(r8596300, "0.5", 10, MPFR_RNDN);
        mpfr_init(r8596301);
        mpfr_init(r8596302);
        mpfr_init(r8596303);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8596297, x, MPFR_RNDN);
        mpfr_mul(r8596298, r8596296, r8596297, MPFR_RNDN);
        mpfr_add(r8596299, r8596295, r8596298, MPFR_RNDN);
        ;
        mpfr_mul(r8596301, r8596297, r8596297, MPFR_RNDN);
        mpfr_mul(r8596302, r8596300, r8596301, MPFR_RNDN);
        mpfr_add(r8596303, r8596299, r8596302, MPFR_RNDN);
        return mpfr_get_d(r8596303, MPFR_RNDN);
}

