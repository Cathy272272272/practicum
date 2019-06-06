#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r63170234 = 1680.0;
        float r63170235 = -13440.0;
        float r63170236 = x;
        float r63170237 = r63170236 * r63170236;
        float r63170238 = r63170235 * r63170237;
        float r63170239 = r63170234 + r63170238;
        float r63170240 = 13440.0;
        float r63170241 = r63170237 * r63170236;
        float r63170242 = r63170241 * r63170236;
        float r63170243 = r63170240 * r63170242;
        float r63170244 = r63170239 + r63170243;
        float r63170245 = -3584.0;
        float r63170246 = r63170242 * r63170236;
        float r63170247 = r63170246 * r63170236;
        float r63170248 = r63170245 * r63170247;
        float r63170249 = r63170244 + r63170248;
        float r63170250 = 256.0;
        float r63170251 = r63170247 * r63170236;
        float r63170252 = r63170251 * r63170236;
        float r63170253 = r63170250 * r63170252;
        float r63170254 = r63170249 + r63170253;
        return r63170254;
}

double f_id(double x) {
        double r63170255 = 1680.0;
        double r63170256 = -13440.0;
        double r63170257 = x;
        double r63170258 = r63170257 * r63170257;
        double r63170259 = r63170256 * r63170258;
        double r63170260 = r63170255 + r63170259;
        double r63170261 = 13440.0;
        double r63170262 = r63170258 * r63170257;
        double r63170263 = r63170262 * r63170257;
        double r63170264 = r63170261 * r63170263;
        double r63170265 = r63170260 + r63170264;
        double r63170266 = -3584.0;
        double r63170267 = r63170263 * r63170257;
        double r63170268 = r63170267 * r63170257;
        double r63170269 = r63170266 * r63170268;
        double r63170270 = r63170265 + r63170269;
        double r63170271 = 256.0;
        double r63170272 = r63170268 * r63170257;
        double r63170273 = r63170272 * r63170257;
        double r63170274 = r63170271 * r63170273;
        double r63170275 = r63170270 + r63170274;
        return r63170275;
}


double f_of(float x) {
        float r63170276 = x;
        float r63170277 = 3;
        float r63170278 = pow(r63170276, r63170277);
        float r63170279 = r63170278 * r63170278;
        float r63170280 = 256.0;
        float r63170281 = r63170276 * r63170276;
        float r63170282 = r63170280 * r63170281;
        float r63170283 = 3584.0;
        float r63170284 = r63170282 - r63170283;
        float r63170285 = r63170279 * r63170284;
        float r63170286 = pow(r63170278, r63170277);
        float r63170287 = r63170286 - r63170278;
        float r63170288 = r63170278 * r63170276;
        float r63170289 = r63170281 + r63170288;
        float r63170290 = r63170279 + r63170289;
        float r63170291 = r63170287 / r63170290;
        float r63170292 = 13440.0;
        float r63170293 = r63170292 * r63170276;
        float r63170294 = r63170291 * r63170293;
        float r63170295 = 1680.0;
        float r63170296 = r63170294 + r63170295;
        float r63170297 = r63170285 + r63170296;
        return r63170297;
}

double f_od(double x) {
        double r63170298 = x;
        double r63170299 = 3;
        double r63170300 = pow(r63170298, r63170299);
        double r63170301 = r63170300 * r63170300;
        double r63170302 = 256.0;
        double r63170303 = r63170298 * r63170298;
        double r63170304 = r63170302 * r63170303;
        double r63170305 = 3584.0;
        double r63170306 = r63170304 - r63170305;
        double r63170307 = r63170301 * r63170306;
        double r63170308 = pow(r63170300, r63170299);
        double r63170309 = r63170308 - r63170300;
        double r63170310 = r63170300 * r63170298;
        double r63170311 = r63170303 + r63170310;
        double r63170312 = r63170301 + r63170311;
        double r63170313 = r63170309 / r63170312;
        double r63170314 = 13440.0;
        double r63170315 = r63170314 * r63170298;
        double r63170316 = r63170313 * r63170315;
        double r63170317 = 1680.0;
        double r63170318 = r63170316 + r63170317;
        double r63170319 = r63170307 + r63170318;
        return r63170319;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63170320, r63170321, r63170322, r63170323, r63170324, r63170325, r63170326, r63170327, r63170328, r63170329, r63170330, r63170331, r63170332, r63170333, r63170334, r63170335, r63170336, r63170337, r63170338, r63170339, r63170340;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170320, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170321, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r63170322);
        mpfr_init(r63170323);
        mpfr_init(r63170324);
        mpfr_init(r63170325);
        mpfr_init_set_str(r63170326, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r63170327);
        mpfr_init(r63170328);
        mpfr_init(r63170329);
        mpfr_init(r63170330);
        mpfr_init_set_str(r63170331, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r63170332);
        mpfr_init(r63170333);
        mpfr_init(r63170334);
        mpfr_init(r63170335);
        mpfr_init_set_str(r63170336, "256.0", 10, MPFR_RNDN);
        mpfr_init(r63170337);
        mpfr_init(r63170338);
        mpfr_init(r63170339);
        mpfr_init(r63170340);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r63170322, x, MPFR_RNDN);
        mpfr_mul(r63170323, r63170322, r63170322, MPFR_RNDN);
        mpfr_mul(r63170324, r63170321, r63170323, MPFR_RNDN);
        mpfr_add(r63170325, r63170320, r63170324, MPFR_RNDN);
        ;
        mpfr_mul(r63170327, r63170323, r63170322, MPFR_RNDN);
        mpfr_mul(r63170328, r63170327, r63170322, MPFR_RNDN);
        mpfr_mul(r63170329, r63170326, r63170328, MPFR_RNDN);
        mpfr_add(r63170330, r63170325, r63170329, MPFR_RNDN);
        ;
        mpfr_mul(r63170332, r63170328, r63170322, MPFR_RNDN);
        mpfr_mul(r63170333, r63170332, r63170322, MPFR_RNDN);
        mpfr_mul(r63170334, r63170331, r63170333, MPFR_RNDN);
        mpfr_add(r63170335, r63170330, r63170334, MPFR_RNDN);
        ;
        mpfr_mul(r63170337, r63170333, r63170322, MPFR_RNDN);
        mpfr_mul(r63170338, r63170337, r63170322, MPFR_RNDN);
        mpfr_mul(r63170339, r63170336, r63170338, MPFR_RNDN);
        mpfr_add(r63170340, r63170335, r63170339, MPFR_RNDN);
        return mpfr_get_d(r63170340, MPFR_RNDN);
}

static mpfr_t r63170341, r63170342, r63170343, r63170344, r63170345, r63170346, r63170347, r63170348, r63170349, r63170350, r63170351, r63170352, r63170353, r63170354, r63170355, r63170356, r63170357, r63170358, r63170359, r63170360, r63170361, r63170362;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r63170341);
        mpfr_init_set_str(r63170342, "3", 10, MPFR_RNDN);
        mpfr_init(r63170343);
        mpfr_init(r63170344);
        mpfr_init_set_str(r63170345, "256.0", 10, MPFR_RNDN);
        mpfr_init(r63170346);
        mpfr_init(r63170347);
        mpfr_init_set_str(r63170348, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r63170349);
        mpfr_init(r63170350);
        mpfr_init(r63170351);
        mpfr_init(r63170352);
        mpfr_init(r63170353);
        mpfr_init(r63170354);
        mpfr_init(r63170355);
        mpfr_init(r63170356);
        mpfr_init_set_str(r63170357, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r63170358);
        mpfr_init(r63170359);
        mpfr_init_set_str(r63170360, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r63170361);
        mpfr_init(r63170362);
}

double f_fm(double x) {
        mpfr_set_d(r63170341, x, MPFR_RNDN);
        ;
        mpfr_pow(r63170343, r63170341, r63170342, MPFR_RNDN);
        mpfr_mul(r63170344, r63170343, r63170343, MPFR_RNDN);
        ;
        mpfr_mul(r63170346, r63170341, r63170341, MPFR_RNDN);
        mpfr_mul(r63170347, r63170345, r63170346, MPFR_RNDN);
        ;
        mpfr_sub(r63170349, r63170347, r63170348, MPFR_RNDN);
        mpfr_mul(r63170350, r63170344, r63170349, MPFR_RNDN);
        mpfr_pow(r63170351, r63170343, r63170342, MPFR_RNDN);
        mpfr_sub(r63170352, r63170351, r63170343, MPFR_RNDN);
        mpfr_mul(r63170353, r63170343, r63170341, MPFR_RNDN);
        mpfr_add(r63170354, r63170346, r63170353, MPFR_RNDN);
        mpfr_add(r63170355, r63170344, r63170354, MPFR_RNDN);
        mpfr_div(r63170356, r63170352, r63170355, MPFR_RNDN);
        ;
        mpfr_mul(r63170358, r63170357, r63170341, MPFR_RNDN);
        mpfr_mul(r63170359, r63170356, r63170358, MPFR_RNDN);
        ;
        mpfr_add(r63170361, r63170359, r63170360, MPFR_RNDN);
        mpfr_add(r63170362, r63170350, r63170361, MPFR_RNDN);
        return mpfr_get_d(r63170362, MPFR_RNDN);
}

static mpfr_t r63170363, r63170364, r63170365, r63170366, r63170367, r63170368, r63170369, r63170370, r63170371, r63170372, r63170373, r63170374, r63170375, r63170376, r63170377, r63170378, r63170379, r63170380, r63170381, r63170382, r63170383, r63170384;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r63170363);
        mpfr_init_set_str(r63170364, "3", 10, MPFR_RNDN);
        mpfr_init(r63170365);
        mpfr_init(r63170366);
        mpfr_init_set_str(r63170367, "256.0", 10, MPFR_RNDN);
        mpfr_init(r63170368);
        mpfr_init(r63170369);
        mpfr_init_set_str(r63170370, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r63170371);
        mpfr_init(r63170372);
        mpfr_init(r63170373);
        mpfr_init(r63170374);
        mpfr_init(r63170375);
        mpfr_init(r63170376);
        mpfr_init(r63170377);
        mpfr_init(r63170378);
        mpfr_init_set_str(r63170379, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r63170380);
        mpfr_init(r63170381);
        mpfr_init_set_str(r63170382, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r63170383);
        mpfr_init(r63170384);
}

double f_dm(double x) {
        mpfr_set_d(r63170363, x, MPFR_RNDN);
        ;
        mpfr_pow(r63170365, r63170363, r63170364, MPFR_RNDN);
        mpfr_mul(r63170366, r63170365, r63170365, MPFR_RNDN);
        ;
        mpfr_mul(r63170368, r63170363, r63170363, MPFR_RNDN);
        mpfr_mul(r63170369, r63170367, r63170368, MPFR_RNDN);
        ;
        mpfr_sub(r63170371, r63170369, r63170370, MPFR_RNDN);
        mpfr_mul(r63170372, r63170366, r63170371, MPFR_RNDN);
        mpfr_pow(r63170373, r63170365, r63170364, MPFR_RNDN);
        mpfr_sub(r63170374, r63170373, r63170365, MPFR_RNDN);
        mpfr_mul(r63170375, r63170365, r63170363, MPFR_RNDN);
        mpfr_add(r63170376, r63170368, r63170375, MPFR_RNDN);
        mpfr_add(r63170377, r63170366, r63170376, MPFR_RNDN);
        mpfr_div(r63170378, r63170374, r63170377, MPFR_RNDN);
        ;
        mpfr_mul(r63170380, r63170379, r63170363, MPFR_RNDN);
        mpfr_mul(r63170381, r63170378, r63170380, MPFR_RNDN);
        ;
        mpfr_add(r63170383, r63170381, r63170382, MPFR_RNDN);
        mpfr_add(r63170384, r63170372, r63170383, MPFR_RNDN);
        return mpfr_get_d(r63170384, MPFR_RNDN);
}

