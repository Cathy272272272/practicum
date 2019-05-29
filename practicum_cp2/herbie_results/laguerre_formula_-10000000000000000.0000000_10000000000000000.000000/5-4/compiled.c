#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r10002216 = 1.0;
        float r10002217 = -4.0;
        float r10002218 = x;
        float r10002219 = r10002217 * r10002218;
        float r10002220 = r10002216 + r10002219;
        float r10002221 = 3.0;
        float r10002222 = r10002218 * r10002218;
        float r10002223 = r10002221 * r10002222;
        float r10002224 = r10002220 + r10002223;
        float r10002225 = -0.666667;
        float r10002226 = r10002222 * r10002218;
        float r10002227 = r10002225 * r10002226;
        float r10002228 = r10002224 + r10002227;
        float r10002229 = 0.041667;
        float r10002230 = r10002226 * r10002218;
        float r10002231 = r10002229 * r10002230;
        float r10002232 = r10002228 + r10002231;
        return r10002232;
}

double f_id(double x) {
        double r10002233 = 1.0;
        double r10002234 = -4.0;
        double r10002235 = x;
        double r10002236 = r10002234 * r10002235;
        double r10002237 = r10002233 + r10002236;
        double r10002238 = 3.0;
        double r10002239 = r10002235 * r10002235;
        double r10002240 = r10002238 * r10002239;
        double r10002241 = r10002237 + r10002240;
        double r10002242 = -0.666667;
        double r10002243 = r10002239 * r10002235;
        double r10002244 = r10002242 * r10002243;
        double r10002245 = r10002241 + r10002244;
        double r10002246 = 0.041667;
        double r10002247 = r10002243 * r10002235;
        double r10002248 = r10002246 * r10002247;
        double r10002249 = r10002245 + r10002248;
        return r10002249;
}


double f_of(float x) {
        float r10002250 = 1.0;
        float r10002251 = -4.0;
        float r10002252 = x;
        float r10002253 = r10002251 * r10002252;
        float r10002254 = r10002250 + r10002253;
        float r10002255 = 3.0;
        float r10002256 = r10002252 * r10002252;
        float r10002257 = r10002255 * r10002256;
        float r10002258 = r10002254 + r10002257;
        float r10002259 = -0.666667;
        float r10002260 = r10002256 * r10002252;
        float r10002261 = r10002259 * r10002260;
        float r10002262 = r10002258 + r10002261;
        float r10002263 = 0.041667;
        float r10002264 = r10002260 * r10002252;
        float r10002265 = r10002263 * r10002264;
        float r10002266 = r10002262 + r10002265;
        return r10002266;
}

double f_od(double x) {
        double r10002267 = 1.0;
        double r10002268 = -4.0;
        double r10002269 = x;
        double r10002270 = r10002268 * r10002269;
        double r10002271 = r10002267 + r10002270;
        double r10002272 = 3.0;
        double r10002273 = r10002269 * r10002269;
        double r10002274 = r10002272 * r10002273;
        double r10002275 = r10002271 + r10002274;
        double r10002276 = -0.666667;
        double r10002277 = r10002273 * r10002269;
        double r10002278 = r10002276 * r10002277;
        double r10002279 = r10002275 + r10002278;
        double r10002280 = 0.041667;
        double r10002281 = r10002277 * r10002269;
        double r10002282 = r10002280 * r10002281;
        double r10002283 = r10002279 + r10002282;
        return r10002283;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10002284, r10002285, r10002286, r10002287, r10002288, r10002289, r10002290, r10002291, r10002292, r10002293, r10002294, r10002295, r10002296, r10002297, r10002298, r10002299, r10002300;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10002284, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002285, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10002286);
        mpfr_init(r10002287);
        mpfr_init(r10002288);
        mpfr_init_set_str(r10002289, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10002290);
        mpfr_init(r10002291);
        mpfr_init(r10002292);
        mpfr_init_set_str(r10002293, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10002294);
        mpfr_init(r10002295);
        mpfr_init(r10002296);
        mpfr_init_set_str(r10002297, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10002298);
        mpfr_init(r10002299);
        mpfr_init(r10002300);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10002286, x, MPFR_RNDN);
        mpfr_mul(r10002287, r10002285, r10002286, MPFR_RNDN);
        mpfr_add(r10002288, r10002284, r10002287, MPFR_RNDN);
        ;
        mpfr_mul(r10002290, r10002286, r10002286, MPFR_RNDN);
        mpfr_mul(r10002291, r10002289, r10002290, MPFR_RNDN);
        mpfr_add(r10002292, r10002288, r10002291, MPFR_RNDN);
        ;
        mpfr_mul(r10002294, r10002290, r10002286, MPFR_RNDN);
        mpfr_mul(r10002295, r10002293, r10002294, MPFR_RNDN);
        mpfr_add(r10002296, r10002292, r10002295, MPFR_RNDN);
        ;
        mpfr_mul(r10002298, r10002294, r10002286, MPFR_RNDN);
        mpfr_mul(r10002299, r10002297, r10002298, MPFR_RNDN);
        mpfr_add(r10002300, r10002296, r10002299, MPFR_RNDN);
        return mpfr_get_d(r10002300, MPFR_RNDN);
}

static mpfr_t r10002301, r10002302, r10002303, r10002304, r10002305, r10002306, r10002307, r10002308, r10002309, r10002310, r10002311, r10002312, r10002313, r10002314, r10002315, r10002316, r10002317;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10002301, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002302, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10002303);
        mpfr_init(r10002304);
        mpfr_init(r10002305);
        mpfr_init_set_str(r10002306, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10002307);
        mpfr_init(r10002308);
        mpfr_init(r10002309);
        mpfr_init_set_str(r10002310, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10002311);
        mpfr_init(r10002312);
        mpfr_init(r10002313);
        mpfr_init_set_str(r10002314, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10002315);
        mpfr_init(r10002316);
        mpfr_init(r10002317);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10002303, x, MPFR_RNDN);
        mpfr_mul(r10002304, r10002302, r10002303, MPFR_RNDN);
        mpfr_add(r10002305, r10002301, r10002304, MPFR_RNDN);
        ;
        mpfr_mul(r10002307, r10002303, r10002303, MPFR_RNDN);
        mpfr_mul(r10002308, r10002306, r10002307, MPFR_RNDN);
        mpfr_add(r10002309, r10002305, r10002308, MPFR_RNDN);
        ;
        mpfr_mul(r10002311, r10002307, r10002303, MPFR_RNDN);
        mpfr_mul(r10002312, r10002310, r10002311, MPFR_RNDN);
        mpfr_add(r10002313, r10002309, r10002312, MPFR_RNDN);
        ;
        mpfr_mul(r10002315, r10002311, r10002303, MPFR_RNDN);
        mpfr_mul(r10002316, r10002314, r10002315, MPFR_RNDN);
        mpfr_add(r10002317, r10002313, r10002316, MPFR_RNDN);
        return mpfr_get_d(r10002317, MPFR_RNDN);
}

static mpfr_t r10002318, r10002319, r10002320, r10002321, r10002322, r10002323, r10002324, r10002325, r10002326, r10002327, r10002328, r10002329, r10002330, r10002331, r10002332, r10002333, r10002334;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10002318, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002319, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10002320);
        mpfr_init(r10002321);
        mpfr_init(r10002322);
        mpfr_init_set_str(r10002323, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10002324);
        mpfr_init(r10002325);
        mpfr_init(r10002326);
        mpfr_init_set_str(r10002327, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10002328);
        mpfr_init(r10002329);
        mpfr_init(r10002330);
        mpfr_init_set_str(r10002331, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10002332);
        mpfr_init(r10002333);
        mpfr_init(r10002334);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10002320, x, MPFR_RNDN);
        mpfr_mul(r10002321, r10002319, r10002320, MPFR_RNDN);
        mpfr_add(r10002322, r10002318, r10002321, MPFR_RNDN);
        ;
        mpfr_mul(r10002324, r10002320, r10002320, MPFR_RNDN);
        mpfr_mul(r10002325, r10002323, r10002324, MPFR_RNDN);
        mpfr_add(r10002326, r10002322, r10002325, MPFR_RNDN);
        ;
        mpfr_mul(r10002328, r10002324, r10002320, MPFR_RNDN);
        mpfr_mul(r10002329, r10002327, r10002328, MPFR_RNDN);
        mpfr_add(r10002330, r10002326, r10002329, MPFR_RNDN);
        ;
        mpfr_mul(r10002332, r10002328, r10002320, MPFR_RNDN);
        mpfr_mul(r10002333, r10002331, r10002332, MPFR_RNDN);
        mpfr_add(r10002334, r10002330, r10002333, MPFR_RNDN);
        return mpfr_get_d(r10002334, MPFR_RNDN);
}

