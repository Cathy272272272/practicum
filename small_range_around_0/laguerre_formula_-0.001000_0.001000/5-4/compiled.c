#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r3749216 = 1.0;
        float r3749217 = -4.0;
        float r3749218 = x;
        float r3749219 = r3749217 * r3749218;
        float r3749220 = r3749216 + r3749219;
        float r3749221 = 3.0;
        float r3749222 = r3749218 * r3749218;
        float r3749223 = r3749221 * r3749222;
        float r3749224 = r3749220 + r3749223;
        float r3749225 = -0.666667;
        float r3749226 = r3749222 * r3749218;
        float r3749227 = r3749225 * r3749226;
        float r3749228 = r3749224 + r3749227;
        float r3749229 = 0.041667;
        float r3749230 = r3749226 * r3749218;
        float r3749231 = r3749229 * r3749230;
        float r3749232 = r3749228 + r3749231;
        return r3749232;
}

double f_id(double x) {
        double r3749233 = 1.0;
        double r3749234 = -4.0;
        double r3749235 = x;
        double r3749236 = r3749234 * r3749235;
        double r3749237 = r3749233 + r3749236;
        double r3749238 = 3.0;
        double r3749239 = r3749235 * r3749235;
        double r3749240 = r3749238 * r3749239;
        double r3749241 = r3749237 + r3749240;
        double r3749242 = -0.666667;
        double r3749243 = r3749239 * r3749235;
        double r3749244 = r3749242 * r3749243;
        double r3749245 = r3749241 + r3749244;
        double r3749246 = 0.041667;
        double r3749247 = r3749243 * r3749235;
        double r3749248 = r3749246 * r3749247;
        double r3749249 = r3749245 + r3749248;
        return r3749249;
}


double f_of(float x) {
        float r3749250 = 1.0;
        float r3749251 = -4.0;
        float r3749252 = x;
        float r3749253 = r3749251 * r3749252;
        float r3749254 = r3749250 + r3749253;
        float r3749255 = 3.0;
        float r3749256 = r3749252 * r3749252;
        float r3749257 = r3749255 * r3749256;
        float r3749258 = exp(r3749257);
        float r3749259 = log(r3749258);
        float r3749260 = r3749254 + r3749259;
        float r3749261 = -0.666667;
        float r3749262 = r3749256 * r3749252;
        float r3749263 = r3749261 * r3749262;
        float r3749264 = r3749260 + r3749263;
        float r3749265 = 0.041667;
        float r3749266 = r3749262 * r3749252;
        float r3749267 = r3749265 * r3749266;
        float r3749268 = r3749264 + r3749267;
        return r3749268;
}

double f_od(double x) {
        double r3749269 = 1.0;
        double r3749270 = -4.0;
        double r3749271 = x;
        double r3749272 = r3749270 * r3749271;
        double r3749273 = r3749269 + r3749272;
        double r3749274 = 3.0;
        double r3749275 = r3749271 * r3749271;
        double r3749276 = r3749274 * r3749275;
        double r3749277 = exp(r3749276);
        double r3749278 = log(r3749277);
        double r3749279 = r3749273 + r3749278;
        double r3749280 = -0.666667;
        double r3749281 = r3749275 * r3749271;
        double r3749282 = r3749280 * r3749281;
        double r3749283 = r3749279 + r3749282;
        double r3749284 = 0.041667;
        double r3749285 = r3749281 * r3749271;
        double r3749286 = r3749284 * r3749285;
        double r3749287 = r3749283 + r3749286;
        return r3749287;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3749288, r3749289, r3749290, r3749291, r3749292, r3749293, r3749294, r3749295, r3749296, r3749297, r3749298, r3749299, r3749300, r3749301, r3749302, r3749303, r3749304;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749288, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749289, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r3749290);
        mpfr_init(r3749291);
        mpfr_init(r3749292);
        mpfr_init_set_str(r3749293, "3.0", 10, MPFR_RNDN);
        mpfr_init(r3749294);
        mpfr_init(r3749295);
        mpfr_init(r3749296);
        mpfr_init_set_str(r3749297, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r3749298);
        mpfr_init(r3749299);
        mpfr_init(r3749300);
        mpfr_init_set_str(r3749301, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r3749302);
        mpfr_init(r3749303);
        mpfr_init(r3749304);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3749290, x, MPFR_RNDN);
        mpfr_mul(r3749291, r3749289, r3749290, MPFR_RNDN);
        mpfr_add(r3749292, r3749288, r3749291, MPFR_RNDN);
        ;
        mpfr_mul(r3749294, r3749290, r3749290, MPFR_RNDN);
        mpfr_mul(r3749295, r3749293, r3749294, MPFR_RNDN);
        mpfr_add(r3749296, r3749292, r3749295, MPFR_RNDN);
        ;
        mpfr_mul(r3749298, r3749294, r3749290, MPFR_RNDN);
        mpfr_mul(r3749299, r3749297, r3749298, MPFR_RNDN);
        mpfr_add(r3749300, r3749296, r3749299, MPFR_RNDN);
        ;
        mpfr_mul(r3749302, r3749298, r3749290, MPFR_RNDN);
        mpfr_mul(r3749303, r3749301, r3749302, MPFR_RNDN);
        mpfr_add(r3749304, r3749300, r3749303, MPFR_RNDN);
        return mpfr_get_d(r3749304, MPFR_RNDN);
}

static mpfr_t r3749305, r3749306, r3749307, r3749308, r3749309, r3749310, r3749311, r3749312, r3749313, r3749314, r3749315, r3749316, r3749317, r3749318, r3749319, r3749320, r3749321, r3749322, r3749323;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749305, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749306, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r3749307);
        mpfr_init(r3749308);
        mpfr_init(r3749309);
        mpfr_init_set_str(r3749310, "3.0", 10, MPFR_RNDN);
        mpfr_init(r3749311);
        mpfr_init(r3749312);
        mpfr_init(r3749313);
        mpfr_init(r3749314);
        mpfr_init(r3749315);
        mpfr_init_set_str(r3749316, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r3749317);
        mpfr_init(r3749318);
        mpfr_init(r3749319);
        mpfr_init_set_str(r3749320, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r3749321);
        mpfr_init(r3749322);
        mpfr_init(r3749323);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3749307, x, MPFR_RNDN);
        mpfr_mul(r3749308, r3749306, r3749307, MPFR_RNDN);
        mpfr_add(r3749309, r3749305, r3749308, MPFR_RNDN);
        ;
        mpfr_mul(r3749311, r3749307, r3749307, MPFR_RNDN);
        mpfr_mul(r3749312, r3749310, r3749311, MPFR_RNDN);
        mpfr_exp(r3749313, r3749312, MPFR_RNDN);
        mpfr_log(r3749314, r3749313, MPFR_RNDN);
        mpfr_add(r3749315, r3749309, r3749314, MPFR_RNDN);
        ;
        mpfr_mul(r3749317, r3749311, r3749307, MPFR_RNDN);
        mpfr_mul(r3749318, r3749316, r3749317, MPFR_RNDN);
        mpfr_add(r3749319, r3749315, r3749318, MPFR_RNDN);
        ;
        mpfr_mul(r3749321, r3749317, r3749307, MPFR_RNDN);
        mpfr_mul(r3749322, r3749320, r3749321, MPFR_RNDN);
        mpfr_add(r3749323, r3749319, r3749322, MPFR_RNDN);
        return mpfr_get_d(r3749323, MPFR_RNDN);
}

static mpfr_t r3749324, r3749325, r3749326, r3749327, r3749328, r3749329, r3749330, r3749331, r3749332, r3749333, r3749334, r3749335, r3749336, r3749337, r3749338, r3749339, r3749340, r3749341, r3749342;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749324, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749325, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r3749326);
        mpfr_init(r3749327);
        mpfr_init(r3749328);
        mpfr_init_set_str(r3749329, "3.0", 10, MPFR_RNDN);
        mpfr_init(r3749330);
        mpfr_init(r3749331);
        mpfr_init(r3749332);
        mpfr_init(r3749333);
        mpfr_init(r3749334);
        mpfr_init_set_str(r3749335, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r3749336);
        mpfr_init(r3749337);
        mpfr_init(r3749338);
        mpfr_init_set_str(r3749339, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r3749340);
        mpfr_init(r3749341);
        mpfr_init(r3749342);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3749326, x, MPFR_RNDN);
        mpfr_mul(r3749327, r3749325, r3749326, MPFR_RNDN);
        mpfr_add(r3749328, r3749324, r3749327, MPFR_RNDN);
        ;
        mpfr_mul(r3749330, r3749326, r3749326, MPFR_RNDN);
        mpfr_mul(r3749331, r3749329, r3749330, MPFR_RNDN);
        mpfr_exp(r3749332, r3749331, MPFR_RNDN);
        mpfr_log(r3749333, r3749332, MPFR_RNDN);
        mpfr_add(r3749334, r3749328, r3749333, MPFR_RNDN);
        ;
        mpfr_mul(r3749336, r3749330, r3749326, MPFR_RNDN);
        mpfr_mul(r3749337, r3749335, r3749336, MPFR_RNDN);
        mpfr_add(r3749338, r3749334, r3749337, MPFR_RNDN);
        ;
        mpfr_mul(r3749340, r3749336, r3749326, MPFR_RNDN);
        mpfr_mul(r3749341, r3749339, r3749340, MPFR_RNDN);
        mpfr_add(r3749342, r3749338, r3749341, MPFR_RNDN);
        return mpfr_get_d(r3749342, MPFR_RNDN);
}

