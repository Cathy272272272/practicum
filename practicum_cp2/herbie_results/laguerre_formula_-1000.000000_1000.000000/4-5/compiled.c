#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6513228 = 1.0;
        float r6513229 = -5.0;
        float r6513230 = x;
        float r6513231 = r6513229 * r6513230;
        float r6513232 = r6513228 + r6513231;
        float r6513233 = 5.0;
        float r6513234 = r6513230 * r6513230;
        float r6513235 = r6513233 * r6513234;
        float r6513236 = r6513232 + r6513235;
        float r6513237 = -1.666667;
        float r6513238 = r6513234 * r6513230;
        float r6513239 = r6513237 * r6513238;
        float r6513240 = r6513236 + r6513239;
        float r6513241 = 0.208333;
        float r6513242 = r6513238 * r6513230;
        float r6513243 = r6513241 * r6513242;
        float r6513244 = r6513240 + r6513243;
        float r6513245 = -0.008333;
        float r6513246 = r6513242 * r6513230;
        float r6513247 = r6513245 * r6513246;
        float r6513248 = r6513244 + r6513247;
        return r6513248;
}

double f_id(double x) {
        double r6513249 = 1.0;
        double r6513250 = -5.0;
        double r6513251 = x;
        double r6513252 = r6513250 * r6513251;
        double r6513253 = r6513249 + r6513252;
        double r6513254 = 5.0;
        double r6513255 = r6513251 * r6513251;
        double r6513256 = r6513254 * r6513255;
        double r6513257 = r6513253 + r6513256;
        double r6513258 = -1.666667;
        double r6513259 = r6513255 * r6513251;
        double r6513260 = r6513258 * r6513259;
        double r6513261 = r6513257 + r6513260;
        double r6513262 = 0.208333;
        double r6513263 = r6513259 * r6513251;
        double r6513264 = r6513262 * r6513263;
        double r6513265 = r6513261 + r6513264;
        double r6513266 = -0.008333;
        double r6513267 = r6513263 * r6513251;
        double r6513268 = r6513266 * r6513267;
        double r6513269 = r6513265 + r6513268;
        return r6513269;
}


double f_of(float x) {
        float r6513270 = 1.0;
        float r6513271 = -5.0;
        float r6513272 = x;
        float r6513273 = r6513271 * r6513272;
        float r6513274 = r6513270 + r6513273;
        float r6513275 = 5.0;
        float r6513276 = r6513272 * r6513272;
        float r6513277 = r6513275 * r6513276;
        float r6513278 = r6513274 + r6513277;
        float r6513279 = -1.666667;
        float r6513280 = r6513276 * r6513272;
        float r6513281 = r6513279 * r6513280;
        float r6513282 = r6513278 + r6513281;
        float r6513283 = 0.208333;
        float r6513284 = r6513280 * r6513272;
        float r6513285 = r6513283 * r6513284;
        float r6513286 = r6513282 + r6513285;
        float r6513287 = -0.008333;
        float r6513288 = r6513284 * r6513272;
        float r6513289 = r6513287 * r6513288;
        float r6513290 = r6513286 + r6513289;
        return r6513290;
}

double f_od(double x) {
        double r6513291 = 1.0;
        double r6513292 = -5.0;
        double r6513293 = x;
        double r6513294 = r6513292 * r6513293;
        double r6513295 = r6513291 + r6513294;
        double r6513296 = 5.0;
        double r6513297 = r6513293 * r6513293;
        double r6513298 = r6513296 * r6513297;
        double r6513299 = r6513295 + r6513298;
        double r6513300 = -1.666667;
        double r6513301 = r6513297 * r6513293;
        double r6513302 = r6513300 * r6513301;
        double r6513303 = r6513299 + r6513302;
        double r6513304 = 0.208333;
        double r6513305 = r6513301 * r6513293;
        double r6513306 = r6513304 * r6513305;
        double r6513307 = r6513303 + r6513306;
        double r6513308 = -0.008333;
        double r6513309 = r6513305 * r6513293;
        double r6513310 = r6513308 * r6513309;
        double r6513311 = r6513307 + r6513310;
        return r6513311;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6513312, r6513313, r6513314, r6513315, r6513316, r6513317, r6513318, r6513319, r6513320, r6513321, r6513322, r6513323, r6513324, r6513325, r6513326, r6513327, r6513328, r6513329, r6513330, r6513331, r6513332;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6513312, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513313, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r6513314);
        mpfr_init(r6513315);
        mpfr_init(r6513316);
        mpfr_init_set_str(r6513317, "5.0", 10, MPFR_RNDN);
        mpfr_init(r6513318);
        mpfr_init(r6513319);
        mpfr_init(r6513320);
        mpfr_init_set_str(r6513321, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r6513322);
        mpfr_init(r6513323);
        mpfr_init(r6513324);
        mpfr_init_set_str(r6513325, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r6513326);
        mpfr_init(r6513327);
        mpfr_init(r6513328);
        mpfr_init_set_str(r6513329, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r6513330);
        mpfr_init(r6513331);
        mpfr_init(r6513332);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6513314, x, MPFR_RNDN);
        mpfr_mul(r6513315, r6513313, r6513314, MPFR_RNDN);
        mpfr_add(r6513316, r6513312, r6513315, MPFR_RNDN);
        ;
        mpfr_mul(r6513318, r6513314, r6513314, MPFR_RNDN);
        mpfr_mul(r6513319, r6513317, r6513318, MPFR_RNDN);
        mpfr_add(r6513320, r6513316, r6513319, MPFR_RNDN);
        ;
        mpfr_mul(r6513322, r6513318, r6513314, MPFR_RNDN);
        mpfr_mul(r6513323, r6513321, r6513322, MPFR_RNDN);
        mpfr_add(r6513324, r6513320, r6513323, MPFR_RNDN);
        ;
        mpfr_mul(r6513326, r6513322, r6513314, MPFR_RNDN);
        mpfr_mul(r6513327, r6513325, r6513326, MPFR_RNDN);
        mpfr_add(r6513328, r6513324, r6513327, MPFR_RNDN);
        ;
        mpfr_mul(r6513330, r6513326, r6513314, MPFR_RNDN);
        mpfr_mul(r6513331, r6513329, r6513330, MPFR_RNDN);
        mpfr_add(r6513332, r6513328, r6513331, MPFR_RNDN);
        return mpfr_get_d(r6513332, MPFR_RNDN);
}

static mpfr_t r6513333, r6513334, r6513335, r6513336, r6513337, r6513338, r6513339, r6513340, r6513341, r6513342, r6513343, r6513344, r6513345, r6513346, r6513347, r6513348, r6513349, r6513350, r6513351, r6513352, r6513353;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6513333, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513334, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r6513335);
        mpfr_init(r6513336);
        mpfr_init(r6513337);
        mpfr_init_set_str(r6513338, "5.0", 10, MPFR_RNDN);
        mpfr_init(r6513339);
        mpfr_init(r6513340);
        mpfr_init(r6513341);
        mpfr_init_set_str(r6513342, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r6513343);
        mpfr_init(r6513344);
        mpfr_init(r6513345);
        mpfr_init_set_str(r6513346, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r6513347);
        mpfr_init(r6513348);
        mpfr_init(r6513349);
        mpfr_init_set_str(r6513350, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r6513351);
        mpfr_init(r6513352);
        mpfr_init(r6513353);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6513335, x, MPFR_RNDN);
        mpfr_mul(r6513336, r6513334, r6513335, MPFR_RNDN);
        mpfr_add(r6513337, r6513333, r6513336, MPFR_RNDN);
        ;
        mpfr_mul(r6513339, r6513335, r6513335, MPFR_RNDN);
        mpfr_mul(r6513340, r6513338, r6513339, MPFR_RNDN);
        mpfr_add(r6513341, r6513337, r6513340, MPFR_RNDN);
        ;
        mpfr_mul(r6513343, r6513339, r6513335, MPFR_RNDN);
        mpfr_mul(r6513344, r6513342, r6513343, MPFR_RNDN);
        mpfr_add(r6513345, r6513341, r6513344, MPFR_RNDN);
        ;
        mpfr_mul(r6513347, r6513343, r6513335, MPFR_RNDN);
        mpfr_mul(r6513348, r6513346, r6513347, MPFR_RNDN);
        mpfr_add(r6513349, r6513345, r6513348, MPFR_RNDN);
        ;
        mpfr_mul(r6513351, r6513347, r6513335, MPFR_RNDN);
        mpfr_mul(r6513352, r6513350, r6513351, MPFR_RNDN);
        mpfr_add(r6513353, r6513349, r6513352, MPFR_RNDN);
        return mpfr_get_d(r6513353, MPFR_RNDN);
}

static mpfr_t r6513354, r6513355, r6513356, r6513357, r6513358, r6513359, r6513360, r6513361, r6513362, r6513363, r6513364, r6513365, r6513366, r6513367, r6513368, r6513369, r6513370, r6513371, r6513372, r6513373, r6513374;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6513354, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513355, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r6513356);
        mpfr_init(r6513357);
        mpfr_init(r6513358);
        mpfr_init_set_str(r6513359, "5.0", 10, MPFR_RNDN);
        mpfr_init(r6513360);
        mpfr_init(r6513361);
        mpfr_init(r6513362);
        mpfr_init_set_str(r6513363, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r6513364);
        mpfr_init(r6513365);
        mpfr_init(r6513366);
        mpfr_init_set_str(r6513367, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r6513368);
        mpfr_init(r6513369);
        mpfr_init(r6513370);
        mpfr_init_set_str(r6513371, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r6513372);
        mpfr_init(r6513373);
        mpfr_init(r6513374);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6513356, x, MPFR_RNDN);
        mpfr_mul(r6513357, r6513355, r6513356, MPFR_RNDN);
        mpfr_add(r6513358, r6513354, r6513357, MPFR_RNDN);
        ;
        mpfr_mul(r6513360, r6513356, r6513356, MPFR_RNDN);
        mpfr_mul(r6513361, r6513359, r6513360, MPFR_RNDN);
        mpfr_add(r6513362, r6513358, r6513361, MPFR_RNDN);
        ;
        mpfr_mul(r6513364, r6513360, r6513356, MPFR_RNDN);
        mpfr_mul(r6513365, r6513363, r6513364, MPFR_RNDN);
        mpfr_add(r6513366, r6513362, r6513365, MPFR_RNDN);
        ;
        mpfr_mul(r6513368, r6513364, r6513356, MPFR_RNDN);
        mpfr_mul(r6513369, r6513367, r6513368, MPFR_RNDN);
        mpfr_add(r6513370, r6513366, r6513369, MPFR_RNDN);
        ;
        mpfr_mul(r6513372, r6513368, r6513356, MPFR_RNDN);
        mpfr_mul(r6513373, r6513371, r6513372, MPFR_RNDN);
        mpfr_add(r6513374, r6513370, r6513373, MPFR_RNDN);
        return mpfr_get_d(r6513374, MPFR_RNDN);
}

