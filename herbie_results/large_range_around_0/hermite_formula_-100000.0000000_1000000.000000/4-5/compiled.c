#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7639256 = 120.0;
        float r7639257 = x;
        float r7639258 = r7639256 * r7639257;
        float r7639259 = -160.0;
        float r7639260 = r7639257 * r7639257;
        float r7639261 = r7639260 * r7639257;
        float r7639262 = r7639259 * r7639261;
        float r7639263 = r7639258 + r7639262;
        float r7639264 = 32.0;
        float r7639265 = r7639261 * r7639257;
        float r7639266 = r7639265 * r7639257;
        float r7639267 = r7639264 * r7639266;
        float r7639268 = r7639263 + r7639267;
        return r7639268;
}

double f_id(double x) {
        double r7639269 = 120.0;
        double r7639270 = x;
        double r7639271 = r7639269 * r7639270;
        double r7639272 = -160.0;
        double r7639273 = r7639270 * r7639270;
        double r7639274 = r7639273 * r7639270;
        double r7639275 = r7639272 * r7639274;
        double r7639276 = r7639271 + r7639275;
        double r7639277 = 32.0;
        double r7639278 = r7639274 * r7639270;
        double r7639279 = r7639278 * r7639270;
        double r7639280 = r7639277 * r7639279;
        double r7639281 = r7639276 + r7639280;
        return r7639281;
}


double f_of(float x) {
        float r7639282 = 120.0;
        float r7639283 = x;
        float r7639284 = r7639282 * r7639283;
        float r7639285 = -160.0;
        float r7639286 = r7639283 * r7639283;
        float r7639287 = r7639286 * r7639283;
        float r7639288 = r7639285 * r7639287;
        float r7639289 = r7639284 + r7639288;
        float r7639290 = 32.0;
        float r7639291 = 3;
        float r7639292 = pow(r7639283, r7639291);
        float r7639293 = r7639292 * r7639283;
        float r7639294 = r7639293 * r7639283;
        float r7639295 = r7639290 * r7639294;
        float r7639296 = r7639289 + r7639295;
        return r7639296;
}

double f_od(double x) {
        double r7639297 = 120.0;
        double r7639298 = x;
        double r7639299 = r7639297 * r7639298;
        double r7639300 = -160.0;
        double r7639301 = r7639298 * r7639298;
        double r7639302 = r7639301 * r7639298;
        double r7639303 = r7639300 * r7639302;
        double r7639304 = r7639299 + r7639303;
        double r7639305 = 32.0;
        double r7639306 = 3;
        double r7639307 = pow(r7639298, r7639306);
        double r7639308 = r7639307 * r7639298;
        double r7639309 = r7639308 * r7639298;
        double r7639310 = r7639305 * r7639309;
        double r7639311 = r7639304 + r7639310;
        return r7639311;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7639312, r7639313, r7639314, r7639315, r7639316, r7639317, r7639318, r7639319, r7639320, r7639321, r7639322, r7639323, r7639324;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639312, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7639313);
        mpfr_init(r7639314);
        mpfr_init_set_str(r7639315, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7639316);
        mpfr_init(r7639317);
        mpfr_init(r7639318);
        mpfr_init(r7639319);
        mpfr_init_set_str(r7639320, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7639321);
        mpfr_init(r7639322);
        mpfr_init(r7639323);
        mpfr_init(r7639324);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7639313, x, MPFR_RNDN);
        mpfr_mul(r7639314, r7639312, r7639313, MPFR_RNDN);
        ;
        mpfr_mul(r7639316, r7639313, r7639313, MPFR_RNDN);
        mpfr_mul(r7639317, r7639316, r7639313, MPFR_RNDN);
        mpfr_mul(r7639318, r7639315, r7639317, MPFR_RNDN);
        mpfr_add(r7639319, r7639314, r7639318, MPFR_RNDN);
        ;
        mpfr_mul(r7639321, r7639317, r7639313, MPFR_RNDN);
        mpfr_mul(r7639322, r7639321, r7639313, MPFR_RNDN);
        mpfr_mul(r7639323, r7639320, r7639322, MPFR_RNDN);
        mpfr_add(r7639324, r7639319, r7639323, MPFR_RNDN);
        return mpfr_get_d(r7639324, MPFR_RNDN);
}

static mpfr_t r7639325, r7639326, r7639327, r7639328, r7639329, r7639330, r7639331, r7639332, r7639333, r7639334, r7639335, r7639336, r7639337, r7639338, r7639339;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639325, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7639326);
        mpfr_init(r7639327);
        mpfr_init_set_str(r7639328, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7639329);
        mpfr_init(r7639330);
        mpfr_init(r7639331);
        mpfr_init(r7639332);
        mpfr_init_set_str(r7639333, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639334, "3", 10, MPFR_RNDN);
        mpfr_init(r7639335);
        mpfr_init(r7639336);
        mpfr_init(r7639337);
        mpfr_init(r7639338);
        mpfr_init(r7639339);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7639326, x, MPFR_RNDN);
        mpfr_mul(r7639327, r7639325, r7639326, MPFR_RNDN);
        ;
        mpfr_mul(r7639329, r7639326, r7639326, MPFR_RNDN);
        mpfr_mul(r7639330, r7639329, r7639326, MPFR_RNDN);
        mpfr_mul(r7639331, r7639328, r7639330, MPFR_RNDN);
        mpfr_add(r7639332, r7639327, r7639331, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7639335, r7639326, r7639334, MPFR_RNDN);
        mpfr_mul(r7639336, r7639335, r7639326, MPFR_RNDN);
        mpfr_mul(r7639337, r7639336, r7639326, MPFR_RNDN);
        mpfr_mul(r7639338, r7639333, r7639337, MPFR_RNDN);
        mpfr_add(r7639339, r7639332, r7639338, MPFR_RNDN);
        return mpfr_get_d(r7639339, MPFR_RNDN);
}

static mpfr_t r7639340, r7639341, r7639342, r7639343, r7639344, r7639345, r7639346, r7639347, r7639348, r7639349, r7639350, r7639351, r7639352, r7639353, r7639354;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639340, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7639341);
        mpfr_init(r7639342);
        mpfr_init_set_str(r7639343, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7639344);
        mpfr_init(r7639345);
        mpfr_init(r7639346);
        mpfr_init(r7639347);
        mpfr_init_set_str(r7639348, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639349, "3", 10, MPFR_RNDN);
        mpfr_init(r7639350);
        mpfr_init(r7639351);
        mpfr_init(r7639352);
        mpfr_init(r7639353);
        mpfr_init(r7639354);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7639341, x, MPFR_RNDN);
        mpfr_mul(r7639342, r7639340, r7639341, MPFR_RNDN);
        ;
        mpfr_mul(r7639344, r7639341, r7639341, MPFR_RNDN);
        mpfr_mul(r7639345, r7639344, r7639341, MPFR_RNDN);
        mpfr_mul(r7639346, r7639343, r7639345, MPFR_RNDN);
        mpfr_add(r7639347, r7639342, r7639346, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7639350, r7639341, r7639349, MPFR_RNDN);
        mpfr_mul(r7639351, r7639350, r7639341, MPFR_RNDN);
        mpfr_mul(r7639352, r7639351, r7639341, MPFR_RNDN);
        mpfr_mul(r7639353, r7639348, r7639352, MPFR_RNDN);
        mpfr_add(r7639354, r7639347, r7639353, MPFR_RNDN);
        return mpfr_get_d(r7639354, MPFR_RNDN);
}

