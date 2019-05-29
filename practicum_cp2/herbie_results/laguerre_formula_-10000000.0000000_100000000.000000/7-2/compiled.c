#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r11730205 = 1.0;
        float r11730206 = -2.0;
        float r11730207 = x;
        float r11730208 = r11730206 * r11730207;
        float r11730209 = r11730205 + r11730208;
        float r11730210 = 0.5;
        float r11730211 = r11730207 * r11730207;
        float r11730212 = r11730210 * r11730211;
        float r11730213 = r11730209 + r11730212;
        return r11730213;
}

double f_id(double x) {
        double r11730214 = 1.0;
        double r11730215 = -2.0;
        double r11730216 = x;
        double r11730217 = r11730215 * r11730216;
        double r11730218 = r11730214 + r11730217;
        double r11730219 = 0.5;
        double r11730220 = r11730216 * r11730216;
        double r11730221 = r11730219 * r11730220;
        double r11730222 = r11730218 + r11730221;
        return r11730222;
}


double f_of(float x) {
        float r11730223 = 1.0;
        float r11730224 = -2.0;
        float r11730225 = x;
        float r11730226 = r11730224 * r11730225;
        float r11730227 = r11730223 + r11730226;
        float r11730228 = 0.5;
        float r11730229 = r11730225 * r11730225;
        float r11730230 = r11730228 * r11730229;
        float r11730231 = r11730227 + r11730230;
        return r11730231;
}

double f_od(double x) {
        double r11730232 = 1.0;
        double r11730233 = -2.0;
        double r11730234 = x;
        double r11730235 = r11730233 * r11730234;
        double r11730236 = r11730232 + r11730235;
        double r11730237 = 0.5;
        double r11730238 = r11730234 * r11730234;
        double r11730239 = r11730237 * r11730238;
        double r11730240 = r11730236 + r11730239;
        return r11730240;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11730241, r11730242, r11730243, r11730244, r11730245, r11730246, r11730247, r11730248, r11730249;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11730241, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730242, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11730243);
        mpfr_init(r11730244);
        mpfr_init(r11730245);
        mpfr_init_set_str(r11730246, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11730247);
        mpfr_init(r11730248);
        mpfr_init(r11730249);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11730243, x, MPFR_RNDN);
        mpfr_mul(r11730244, r11730242, r11730243, MPFR_RNDN);
        mpfr_add(r11730245, r11730241, r11730244, MPFR_RNDN);
        ;
        mpfr_mul(r11730247, r11730243, r11730243, MPFR_RNDN);
        mpfr_mul(r11730248, r11730246, r11730247, MPFR_RNDN);
        mpfr_add(r11730249, r11730245, r11730248, MPFR_RNDN);
        return mpfr_get_d(r11730249, MPFR_RNDN);
}

static mpfr_t r11730250, r11730251, r11730252, r11730253, r11730254, r11730255, r11730256, r11730257, r11730258;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11730250, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730251, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11730252);
        mpfr_init(r11730253);
        mpfr_init(r11730254);
        mpfr_init_set_str(r11730255, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11730256);
        mpfr_init(r11730257);
        mpfr_init(r11730258);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11730252, x, MPFR_RNDN);
        mpfr_mul(r11730253, r11730251, r11730252, MPFR_RNDN);
        mpfr_add(r11730254, r11730250, r11730253, MPFR_RNDN);
        ;
        mpfr_mul(r11730256, r11730252, r11730252, MPFR_RNDN);
        mpfr_mul(r11730257, r11730255, r11730256, MPFR_RNDN);
        mpfr_add(r11730258, r11730254, r11730257, MPFR_RNDN);
        return mpfr_get_d(r11730258, MPFR_RNDN);
}

static mpfr_t r11730259, r11730260, r11730261, r11730262, r11730263, r11730264, r11730265, r11730266, r11730267;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11730259, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730260, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11730261);
        mpfr_init(r11730262);
        mpfr_init(r11730263);
        mpfr_init_set_str(r11730264, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11730265);
        mpfr_init(r11730266);
        mpfr_init(r11730267);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11730261, x, MPFR_RNDN);
        mpfr_mul(r11730262, r11730260, r11730261, MPFR_RNDN);
        mpfr_add(r11730263, r11730259, r11730262, MPFR_RNDN);
        ;
        mpfr_mul(r11730265, r11730261, r11730261, MPFR_RNDN);
        mpfr_mul(r11730266, r11730264, r11730265, MPFR_RNDN);
        mpfr_add(r11730267, r11730263, r11730266, MPFR_RNDN);
        return mpfr_get_d(r11730267, MPFR_RNDN);
}

