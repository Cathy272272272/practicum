#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r7056211 = -1.5;
        float r7056212 = x;
        float r7056213 = r7056211 * r7056212;
        float r7056214 = 2.5;
        float r7056215 = r7056212 * r7056212;
        float r7056216 = r7056215 * r7056212;
        float r7056217 = r7056214 * r7056216;
        float r7056218 = r7056213 + r7056217;
        return r7056218;
}

double f_id(double x) {
        double r7056219 = -1.5;
        double r7056220 = x;
        double r7056221 = r7056219 * r7056220;
        double r7056222 = 2.5;
        double r7056223 = r7056220 * r7056220;
        double r7056224 = r7056223 * r7056220;
        double r7056225 = r7056222 * r7056224;
        double r7056226 = r7056221 + r7056225;
        return r7056226;
}


double f_of(float x) {
        float r7056227 = -1.5;
        float r7056228 = x;
        float r7056229 = r7056227 * r7056228;
        float r7056230 = 2.5;
        float r7056231 = r7056228 * r7056228;
        float r7056232 = r7056231 * r7056228;
        float r7056233 = r7056230 * r7056232;
        float r7056234 = r7056229 + r7056233;
        return r7056234;
}

double f_od(double x) {
        double r7056235 = -1.5;
        double r7056236 = x;
        double r7056237 = r7056235 * r7056236;
        double r7056238 = 2.5;
        double r7056239 = r7056236 * r7056236;
        double r7056240 = r7056239 * r7056236;
        double r7056241 = r7056238 * r7056240;
        double r7056242 = r7056237 + r7056241;
        return r7056242;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7056243, r7056244, r7056245, r7056246, r7056247, r7056248, r7056249, r7056250;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7056243, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7056244);
        mpfr_init(r7056245);
        mpfr_init_set_str(r7056246, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7056247);
        mpfr_init(r7056248);
        mpfr_init(r7056249);
        mpfr_init(r7056250);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7056244, x, MPFR_RNDN);
        mpfr_mul(r7056245, r7056243, r7056244, MPFR_RNDN);
        ;
        mpfr_mul(r7056247, r7056244, r7056244, MPFR_RNDN);
        mpfr_mul(r7056248, r7056247, r7056244, MPFR_RNDN);
        mpfr_mul(r7056249, r7056246, r7056248, MPFR_RNDN);
        mpfr_add(r7056250, r7056245, r7056249, MPFR_RNDN);
        return mpfr_get_d(r7056250, MPFR_RNDN);
}

static mpfr_t r7056251, r7056252, r7056253, r7056254, r7056255, r7056256, r7056257, r7056258;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7056251, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7056252);
        mpfr_init(r7056253);
        mpfr_init_set_str(r7056254, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7056255);
        mpfr_init(r7056256);
        mpfr_init(r7056257);
        mpfr_init(r7056258);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7056252, x, MPFR_RNDN);
        mpfr_mul(r7056253, r7056251, r7056252, MPFR_RNDN);
        ;
        mpfr_mul(r7056255, r7056252, r7056252, MPFR_RNDN);
        mpfr_mul(r7056256, r7056255, r7056252, MPFR_RNDN);
        mpfr_mul(r7056257, r7056254, r7056256, MPFR_RNDN);
        mpfr_add(r7056258, r7056253, r7056257, MPFR_RNDN);
        return mpfr_get_d(r7056258, MPFR_RNDN);
}

static mpfr_t r7056259, r7056260, r7056261, r7056262, r7056263, r7056264, r7056265, r7056266;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7056259, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7056260);
        mpfr_init(r7056261);
        mpfr_init_set_str(r7056262, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7056263);
        mpfr_init(r7056264);
        mpfr_init(r7056265);
        mpfr_init(r7056266);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7056260, x, MPFR_RNDN);
        mpfr_mul(r7056261, r7056259, r7056260, MPFR_RNDN);
        ;
        mpfr_mul(r7056263, r7056260, r7056260, MPFR_RNDN);
        mpfr_mul(r7056264, r7056263, r7056260, MPFR_RNDN);
        mpfr_mul(r7056265, r7056262, r7056264, MPFR_RNDN);
        mpfr_add(r7056266, r7056261, r7056265, MPFR_RNDN);
        return mpfr_get_d(r7056266, MPFR_RNDN);
}

