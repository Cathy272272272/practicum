#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r8032215 = -0.5;
        float r8032216 = 1.5;
        float r8032217 = x;
        float r8032218 = r8032217 * r8032217;
        float r8032219 = r8032216 * r8032218;
        float r8032220 = r8032215 + r8032219;
        return r8032220;
}

double f_id(double x) {
        double r8032221 = -0.5;
        double r8032222 = 1.5;
        double r8032223 = x;
        double r8032224 = r8032223 * r8032223;
        double r8032225 = r8032222 * r8032224;
        double r8032226 = r8032221 + r8032225;
        return r8032226;
}


double f_of(float x) {
        float r8032227 = -0.5;
        float r8032228 = r8032227 * r8032227;
        float r8032229 = 1.5;
        float r8032230 = x;
        float r8032231 = r8032230 * r8032230;
        float r8032232 = r8032229 * r8032231;
        float r8032233 = r8032232 * r8032232;
        float r8032234 = r8032228 - r8032233;
        float r8032235 = r8032227 - r8032232;
        float r8032236 = r8032234 / r8032235;
        return r8032236;
}

double f_od(double x) {
        double r8032237 = -0.5;
        double r8032238 = r8032237 * r8032237;
        double r8032239 = 1.5;
        double r8032240 = x;
        double r8032241 = r8032240 * r8032240;
        double r8032242 = r8032239 * r8032241;
        double r8032243 = r8032242 * r8032242;
        double r8032244 = r8032238 - r8032243;
        double r8032245 = r8032237 - r8032242;
        double r8032246 = r8032244 / r8032245;
        return r8032246;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8032247, r8032248, r8032249, r8032250, r8032251, r8032252;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8032247, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8032248, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8032249);
        mpfr_init(r8032250);
        mpfr_init(r8032251);
        mpfr_init(r8032252);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8032249, x, MPFR_RNDN);
        mpfr_mul(r8032250, r8032249, r8032249, MPFR_RNDN);
        mpfr_mul(r8032251, r8032248, r8032250, MPFR_RNDN);
        mpfr_add(r8032252, r8032247, r8032251, MPFR_RNDN);
        return mpfr_get_d(r8032252, MPFR_RNDN);
}

static mpfr_t r8032253, r8032254, r8032255, r8032256, r8032257, r8032258, r8032259, r8032260, r8032261, r8032262;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8032253, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r8032254);
        mpfr_init_set_str(r8032255, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8032256);
        mpfr_init(r8032257);
        mpfr_init(r8032258);
        mpfr_init(r8032259);
        mpfr_init(r8032260);
        mpfr_init(r8032261);
        mpfr_init(r8032262);
}

double f_fm(double x) {
        ;
        mpfr_mul(r8032254, r8032253, r8032253, MPFR_RNDN);
        ;
        mpfr_set_d(r8032256, x, MPFR_RNDN);
        mpfr_mul(r8032257, r8032256, r8032256, MPFR_RNDN);
        mpfr_mul(r8032258, r8032255, r8032257, MPFR_RNDN);
        mpfr_mul(r8032259, r8032258, r8032258, MPFR_RNDN);
        mpfr_sub(r8032260, r8032254, r8032259, MPFR_RNDN);
        mpfr_sub(r8032261, r8032253, r8032258, MPFR_RNDN);
        mpfr_div(r8032262, r8032260, r8032261, MPFR_RNDN);
        return mpfr_get_d(r8032262, MPFR_RNDN);
}

static mpfr_t r8032263, r8032264, r8032265, r8032266, r8032267, r8032268, r8032269, r8032270, r8032271, r8032272;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8032263, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r8032264);
        mpfr_init_set_str(r8032265, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8032266);
        mpfr_init(r8032267);
        mpfr_init(r8032268);
        mpfr_init(r8032269);
        mpfr_init(r8032270);
        mpfr_init(r8032271);
        mpfr_init(r8032272);
}

double f_dm(double x) {
        ;
        mpfr_mul(r8032264, r8032263, r8032263, MPFR_RNDN);
        ;
        mpfr_set_d(r8032266, x, MPFR_RNDN);
        mpfr_mul(r8032267, r8032266, r8032266, MPFR_RNDN);
        mpfr_mul(r8032268, r8032265, r8032267, MPFR_RNDN);
        mpfr_mul(r8032269, r8032268, r8032268, MPFR_RNDN);
        mpfr_sub(r8032270, r8032264, r8032269, MPFR_RNDN);
        mpfr_sub(r8032271, r8032263, r8032268, MPFR_RNDN);
        mpfr_div(r8032272, r8032270, r8032271, MPFR_RNDN);
        return mpfr_get_d(r8032272, MPFR_RNDN);
}

