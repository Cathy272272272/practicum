#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6179228 = 0.273438;
        float r6179229 = -9.84375;
        float r6179230 = x;
        float r6179231 = r6179230 * r6179230;
        float r6179232 = r6179229 * r6179231;
        float r6179233 = r6179228 + r6179232;
        float r6179234 = 54.140625;
        float r6179235 = r6179231 * r6179230;
        float r6179236 = r6179235 * r6179230;
        float r6179237 = r6179234 * r6179236;
        float r6179238 = r6179233 + r6179237;
        float r6179239 = -93.84375;
        float r6179240 = r6179236 * r6179230;
        float r6179241 = r6179240 * r6179230;
        float r6179242 = r6179239 * r6179241;
        float r6179243 = r6179238 + r6179242;
        float r6179244 = 50.273438;
        float r6179245 = r6179241 * r6179230;
        float r6179246 = r6179245 * r6179230;
        float r6179247 = r6179244 * r6179246;
        float r6179248 = r6179243 + r6179247;
        return r6179248;
}

double f_id(double x) {
        double r6179249 = 0.273438;
        double r6179250 = -9.84375;
        double r6179251 = x;
        double r6179252 = r6179251 * r6179251;
        double r6179253 = r6179250 * r6179252;
        double r6179254 = r6179249 + r6179253;
        double r6179255 = 54.140625;
        double r6179256 = r6179252 * r6179251;
        double r6179257 = r6179256 * r6179251;
        double r6179258 = r6179255 * r6179257;
        double r6179259 = r6179254 + r6179258;
        double r6179260 = -93.84375;
        double r6179261 = r6179257 * r6179251;
        double r6179262 = r6179261 * r6179251;
        double r6179263 = r6179260 * r6179262;
        double r6179264 = r6179259 + r6179263;
        double r6179265 = 50.273438;
        double r6179266 = r6179262 * r6179251;
        double r6179267 = r6179266 * r6179251;
        double r6179268 = r6179265 * r6179267;
        double r6179269 = r6179264 + r6179268;
        return r6179269;
}


double f_of(float x) {
        float r6179270 = x;
        float r6179271 = 54.140625;
        float r6179272 = r6179270 * r6179271;
        float r6179273 = 3;
        float r6179274 = pow(r6179270, r6179273);
        float r6179275 = r6179272 * r6179274;
        float r6179276 = -9.84375;
        float r6179277 = r6179270 * r6179276;
        float r6179278 = r6179270 * r6179277;
        float r6179279 = r6179275 + r6179278;
        float r6179280 = 0.273438;
        float r6179281 = r6179279 + r6179280;
        float r6179282 = r6179274 * r6179274;
        float r6179283 = -93.84375;
        float r6179284 = 50.273438;
        float r6179285 = r6179284 * r6179270;
        float r6179286 = r6179285 * r6179270;
        float r6179287 = r6179283 + r6179286;
        float r6179288 = r6179282 * r6179287;
        float r6179289 = r6179281 + r6179288;
        return r6179289;
}

double f_od(double x) {
        double r6179290 = x;
        double r6179291 = 54.140625;
        double r6179292 = r6179290 * r6179291;
        double r6179293 = 3;
        double r6179294 = pow(r6179290, r6179293);
        double r6179295 = r6179292 * r6179294;
        double r6179296 = -9.84375;
        double r6179297 = r6179290 * r6179296;
        double r6179298 = r6179290 * r6179297;
        double r6179299 = r6179295 + r6179298;
        double r6179300 = 0.273438;
        double r6179301 = r6179299 + r6179300;
        double r6179302 = r6179294 * r6179294;
        double r6179303 = -93.84375;
        double r6179304 = 50.273438;
        double r6179305 = r6179304 * r6179290;
        double r6179306 = r6179305 * r6179290;
        double r6179307 = r6179303 + r6179306;
        double r6179308 = r6179302 * r6179307;
        double r6179309 = r6179301 + r6179308;
        return r6179309;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179310, r6179311, r6179312, r6179313, r6179314, r6179315, r6179316, r6179317, r6179318, r6179319, r6179320, r6179321, r6179322, r6179323, r6179324, r6179325, r6179326, r6179327, r6179328, r6179329, r6179330;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179310, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179311, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6179312);
        mpfr_init(r6179313);
        mpfr_init(r6179314);
        mpfr_init(r6179315);
        mpfr_init_set_str(r6179316, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6179317);
        mpfr_init(r6179318);
        mpfr_init(r6179319);
        mpfr_init(r6179320);
        mpfr_init_set_str(r6179321, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6179322);
        mpfr_init(r6179323);
        mpfr_init(r6179324);
        mpfr_init(r6179325);
        mpfr_init_set_str(r6179326, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6179327);
        mpfr_init(r6179328);
        mpfr_init(r6179329);
        mpfr_init(r6179330);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6179312, x, MPFR_RNDN);
        mpfr_mul(r6179313, r6179312, r6179312, MPFR_RNDN);
        mpfr_mul(r6179314, r6179311, r6179313, MPFR_RNDN);
        mpfr_add(r6179315, r6179310, r6179314, MPFR_RNDN);
        ;
        mpfr_mul(r6179317, r6179313, r6179312, MPFR_RNDN);
        mpfr_mul(r6179318, r6179317, r6179312, MPFR_RNDN);
        mpfr_mul(r6179319, r6179316, r6179318, MPFR_RNDN);
        mpfr_add(r6179320, r6179315, r6179319, MPFR_RNDN);
        ;
        mpfr_mul(r6179322, r6179318, r6179312, MPFR_RNDN);
        mpfr_mul(r6179323, r6179322, r6179312, MPFR_RNDN);
        mpfr_mul(r6179324, r6179321, r6179323, MPFR_RNDN);
        mpfr_add(r6179325, r6179320, r6179324, MPFR_RNDN);
        ;
        mpfr_mul(r6179327, r6179323, r6179312, MPFR_RNDN);
        mpfr_mul(r6179328, r6179327, r6179312, MPFR_RNDN);
        mpfr_mul(r6179329, r6179326, r6179328, MPFR_RNDN);
        mpfr_add(r6179330, r6179325, r6179329, MPFR_RNDN);
        return mpfr_get_d(r6179330, MPFR_RNDN);
}

static mpfr_t r6179331, r6179332, r6179333, r6179334, r6179335, r6179336, r6179337, r6179338, r6179339, r6179340, r6179341, r6179342, r6179343, r6179344, r6179345, r6179346, r6179347, r6179348, r6179349, r6179350;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6179331);
        mpfr_init_set_str(r6179332, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6179333);
        mpfr_init_set_str(r6179334, "3", 10, MPFR_RNDN);
        mpfr_init(r6179335);
        mpfr_init(r6179336);
        mpfr_init_set_str(r6179337, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6179338);
        mpfr_init(r6179339);
        mpfr_init(r6179340);
        mpfr_init_set_str(r6179341, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6179342);
        mpfr_init(r6179343);
        mpfr_init_set_str(r6179344, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179345, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6179346);
        mpfr_init(r6179347);
        mpfr_init(r6179348);
        mpfr_init(r6179349);
        mpfr_init(r6179350);
}

double f_fm(double x) {
        mpfr_set_d(r6179331, x, MPFR_RNDN);
        ;
        mpfr_mul(r6179333, r6179331, r6179332, MPFR_RNDN);
        ;
        mpfr_pow(r6179335, r6179331, r6179334, MPFR_RNDN);
        mpfr_mul(r6179336, r6179333, r6179335, MPFR_RNDN);
        ;
        mpfr_mul(r6179338, r6179331, r6179337, MPFR_RNDN);
        mpfr_mul(r6179339, r6179331, r6179338, MPFR_RNDN);
        mpfr_add(r6179340, r6179336, r6179339, MPFR_RNDN);
        ;
        mpfr_add(r6179342, r6179340, r6179341, MPFR_RNDN);
        mpfr_mul(r6179343, r6179335, r6179335, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6179346, r6179345, r6179331, MPFR_RNDN);
        mpfr_mul(r6179347, r6179346, r6179331, MPFR_RNDN);
        mpfr_add(r6179348, r6179344, r6179347, MPFR_RNDN);
        mpfr_mul(r6179349, r6179343, r6179348, MPFR_RNDN);
        mpfr_add(r6179350, r6179342, r6179349, MPFR_RNDN);
        return mpfr_get_d(r6179350, MPFR_RNDN);
}

static mpfr_t r6179351, r6179352, r6179353, r6179354, r6179355, r6179356, r6179357, r6179358, r6179359, r6179360, r6179361, r6179362, r6179363, r6179364, r6179365, r6179366, r6179367, r6179368, r6179369, r6179370;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6179351);
        mpfr_init_set_str(r6179352, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6179353);
        mpfr_init_set_str(r6179354, "3", 10, MPFR_RNDN);
        mpfr_init(r6179355);
        mpfr_init(r6179356);
        mpfr_init_set_str(r6179357, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6179358);
        mpfr_init(r6179359);
        mpfr_init(r6179360);
        mpfr_init_set_str(r6179361, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6179362);
        mpfr_init(r6179363);
        mpfr_init_set_str(r6179364, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179365, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6179366);
        mpfr_init(r6179367);
        mpfr_init(r6179368);
        mpfr_init(r6179369);
        mpfr_init(r6179370);
}

double f_dm(double x) {
        mpfr_set_d(r6179351, x, MPFR_RNDN);
        ;
        mpfr_mul(r6179353, r6179351, r6179352, MPFR_RNDN);
        ;
        mpfr_pow(r6179355, r6179351, r6179354, MPFR_RNDN);
        mpfr_mul(r6179356, r6179353, r6179355, MPFR_RNDN);
        ;
        mpfr_mul(r6179358, r6179351, r6179357, MPFR_RNDN);
        mpfr_mul(r6179359, r6179351, r6179358, MPFR_RNDN);
        mpfr_add(r6179360, r6179356, r6179359, MPFR_RNDN);
        ;
        mpfr_add(r6179362, r6179360, r6179361, MPFR_RNDN);
        mpfr_mul(r6179363, r6179355, r6179355, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6179366, r6179365, r6179351, MPFR_RNDN);
        mpfr_mul(r6179367, r6179366, r6179351, MPFR_RNDN);
        mpfr_add(r6179368, r6179364, r6179367, MPFR_RNDN);
        mpfr_mul(r6179369, r6179363, r6179368, MPFR_RNDN);
        mpfr_add(r6179370, r6179362, r6179369, MPFR_RNDN);
        return mpfr_get_d(r6179370, MPFR_RNDN);
}

