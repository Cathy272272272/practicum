#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r4485223 = -0.3125;
        float r4485224 = 6.5625;
        float r4485225 = x;
        float r4485226 = r4485225 * r4485225;
        float r4485227 = r4485224 * r4485226;
        float r4485228 = r4485223 + r4485227;
        float r4485229 = -19.6875;
        float r4485230 = r4485226 * r4485225;
        float r4485231 = r4485230 * r4485225;
        float r4485232 = r4485229 * r4485231;
        float r4485233 = r4485228 + r4485232;
        float r4485234 = 14.4375;
        float r4485235 = r4485231 * r4485225;
        float r4485236 = r4485235 * r4485225;
        float r4485237 = r4485234 * r4485236;
        float r4485238 = r4485233 + r4485237;
        return r4485238;
}

double f_id(double x) {
        double r4485239 = -0.3125;
        double r4485240 = 6.5625;
        double r4485241 = x;
        double r4485242 = r4485241 * r4485241;
        double r4485243 = r4485240 * r4485242;
        double r4485244 = r4485239 + r4485243;
        double r4485245 = -19.6875;
        double r4485246 = r4485242 * r4485241;
        double r4485247 = r4485246 * r4485241;
        double r4485248 = r4485245 * r4485247;
        double r4485249 = r4485244 + r4485248;
        double r4485250 = 14.4375;
        double r4485251 = r4485247 * r4485241;
        double r4485252 = r4485251 * r4485241;
        double r4485253 = r4485250 * r4485252;
        double r4485254 = r4485249 + r4485253;
        return r4485254;
}


double f_of(float x) {
        float r4485255 = -0.3125;
        float r4485256 = 6.5625;
        float r4485257 = x;
        float r4485258 = r4485257 * r4485257;
        float r4485259 = r4485256 * r4485258;
        float r4485260 = r4485255 + r4485259;
        float r4485261 = -19.6875;
        float r4485262 = r4485258 * r4485257;
        float r4485263 = r4485262 * r4485257;
        float r4485264 = r4485261 * r4485263;
        float r4485265 = exp(r4485264);
        float r4485266 = log(r4485265);
        float r4485267 = r4485260 + r4485266;
        float r4485268 = 14.4375;
        float r4485269 = r4485263 * r4485257;
        float r4485270 = r4485269 * r4485257;
        float r4485271 = r4485268 * r4485270;
        float r4485272 = r4485267 + r4485271;
        return r4485272;
}

double f_od(double x) {
        double r4485273 = -0.3125;
        double r4485274 = 6.5625;
        double r4485275 = x;
        double r4485276 = r4485275 * r4485275;
        double r4485277 = r4485274 * r4485276;
        double r4485278 = r4485273 + r4485277;
        double r4485279 = -19.6875;
        double r4485280 = r4485276 * r4485275;
        double r4485281 = r4485280 * r4485275;
        double r4485282 = r4485279 * r4485281;
        double r4485283 = exp(r4485282);
        double r4485284 = log(r4485283);
        double r4485285 = r4485278 + r4485284;
        double r4485286 = 14.4375;
        double r4485287 = r4485281 * r4485275;
        double r4485288 = r4485287 * r4485275;
        double r4485289 = r4485286 * r4485288;
        double r4485290 = r4485285 + r4485289;
        return r4485290;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4485291, r4485292, r4485293, r4485294, r4485295, r4485296, r4485297, r4485298, r4485299, r4485300, r4485301, r4485302, r4485303, r4485304, r4485305, r4485306;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485291, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485292, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4485293);
        mpfr_init(r4485294);
        mpfr_init(r4485295);
        mpfr_init(r4485296);
        mpfr_init_set_str(r4485297, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4485298);
        mpfr_init(r4485299);
        mpfr_init(r4485300);
        mpfr_init(r4485301);
        mpfr_init_set_str(r4485302, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4485303);
        mpfr_init(r4485304);
        mpfr_init(r4485305);
        mpfr_init(r4485306);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4485293, x, MPFR_RNDN);
        mpfr_mul(r4485294, r4485293, r4485293, MPFR_RNDN);
        mpfr_mul(r4485295, r4485292, r4485294, MPFR_RNDN);
        mpfr_add(r4485296, r4485291, r4485295, MPFR_RNDN);
        ;
        mpfr_mul(r4485298, r4485294, r4485293, MPFR_RNDN);
        mpfr_mul(r4485299, r4485298, r4485293, MPFR_RNDN);
        mpfr_mul(r4485300, r4485297, r4485299, MPFR_RNDN);
        mpfr_add(r4485301, r4485296, r4485300, MPFR_RNDN);
        ;
        mpfr_mul(r4485303, r4485299, r4485293, MPFR_RNDN);
        mpfr_mul(r4485304, r4485303, r4485293, MPFR_RNDN);
        mpfr_mul(r4485305, r4485302, r4485304, MPFR_RNDN);
        mpfr_add(r4485306, r4485301, r4485305, MPFR_RNDN);
        return mpfr_get_d(r4485306, MPFR_RNDN);
}

static mpfr_t r4485307, r4485308, r4485309, r4485310, r4485311, r4485312, r4485313, r4485314, r4485315, r4485316, r4485317, r4485318, r4485319, r4485320, r4485321, r4485322, r4485323, r4485324;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485307, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485308, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4485309);
        mpfr_init(r4485310);
        mpfr_init(r4485311);
        mpfr_init(r4485312);
        mpfr_init_set_str(r4485313, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4485314);
        mpfr_init(r4485315);
        mpfr_init(r4485316);
        mpfr_init(r4485317);
        mpfr_init(r4485318);
        mpfr_init(r4485319);
        mpfr_init_set_str(r4485320, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4485321);
        mpfr_init(r4485322);
        mpfr_init(r4485323);
        mpfr_init(r4485324);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4485309, x, MPFR_RNDN);
        mpfr_mul(r4485310, r4485309, r4485309, MPFR_RNDN);
        mpfr_mul(r4485311, r4485308, r4485310, MPFR_RNDN);
        mpfr_add(r4485312, r4485307, r4485311, MPFR_RNDN);
        ;
        mpfr_mul(r4485314, r4485310, r4485309, MPFR_RNDN);
        mpfr_mul(r4485315, r4485314, r4485309, MPFR_RNDN);
        mpfr_mul(r4485316, r4485313, r4485315, MPFR_RNDN);
        mpfr_exp(r4485317, r4485316, MPFR_RNDN);
        mpfr_log(r4485318, r4485317, MPFR_RNDN);
        mpfr_add(r4485319, r4485312, r4485318, MPFR_RNDN);
        ;
        mpfr_mul(r4485321, r4485315, r4485309, MPFR_RNDN);
        mpfr_mul(r4485322, r4485321, r4485309, MPFR_RNDN);
        mpfr_mul(r4485323, r4485320, r4485322, MPFR_RNDN);
        mpfr_add(r4485324, r4485319, r4485323, MPFR_RNDN);
        return mpfr_get_d(r4485324, MPFR_RNDN);
}

static mpfr_t r4485325, r4485326, r4485327, r4485328, r4485329, r4485330, r4485331, r4485332, r4485333, r4485334, r4485335, r4485336, r4485337, r4485338, r4485339, r4485340, r4485341, r4485342;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485325, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485326, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4485327);
        mpfr_init(r4485328);
        mpfr_init(r4485329);
        mpfr_init(r4485330);
        mpfr_init_set_str(r4485331, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4485332);
        mpfr_init(r4485333);
        mpfr_init(r4485334);
        mpfr_init(r4485335);
        mpfr_init(r4485336);
        mpfr_init(r4485337);
        mpfr_init_set_str(r4485338, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4485339);
        mpfr_init(r4485340);
        mpfr_init(r4485341);
        mpfr_init(r4485342);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4485327, x, MPFR_RNDN);
        mpfr_mul(r4485328, r4485327, r4485327, MPFR_RNDN);
        mpfr_mul(r4485329, r4485326, r4485328, MPFR_RNDN);
        mpfr_add(r4485330, r4485325, r4485329, MPFR_RNDN);
        ;
        mpfr_mul(r4485332, r4485328, r4485327, MPFR_RNDN);
        mpfr_mul(r4485333, r4485332, r4485327, MPFR_RNDN);
        mpfr_mul(r4485334, r4485331, r4485333, MPFR_RNDN);
        mpfr_exp(r4485335, r4485334, MPFR_RNDN);
        mpfr_log(r4485336, r4485335, MPFR_RNDN);
        mpfr_add(r4485337, r4485330, r4485336, MPFR_RNDN);
        ;
        mpfr_mul(r4485339, r4485333, r4485327, MPFR_RNDN);
        mpfr_mul(r4485340, r4485339, r4485327, MPFR_RNDN);
        mpfr_mul(r4485341, r4485338, r4485340, MPFR_RNDN);
        mpfr_add(r4485342, r4485337, r4485341, MPFR_RNDN);
        return mpfr_get_d(r4485342, MPFR_RNDN);
}

