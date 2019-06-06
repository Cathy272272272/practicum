#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r64037228 = -120.0;
        float r64037229 = 720.0;
        float r64037230 = x;
        float r64037231 = r64037230 * r64037230;
        float r64037232 = r64037229 * r64037231;
        float r64037233 = r64037228 + r64037232;
        float r64037234 = -480.0;
        float r64037235 = r64037231 * r64037230;
        float r64037236 = r64037235 * r64037230;
        float r64037237 = r64037234 * r64037236;
        float r64037238 = r64037233 + r64037237;
        float r64037239 = 64.0;
        float r64037240 = r64037236 * r64037230;
        float r64037241 = r64037240 * r64037230;
        float r64037242 = r64037239 * r64037241;
        float r64037243 = r64037238 + r64037242;
        return r64037243;
}

double f_id(double x) {
        double r64037244 = -120.0;
        double r64037245 = 720.0;
        double r64037246 = x;
        double r64037247 = r64037246 * r64037246;
        double r64037248 = r64037245 * r64037247;
        double r64037249 = r64037244 + r64037248;
        double r64037250 = -480.0;
        double r64037251 = r64037247 * r64037246;
        double r64037252 = r64037251 * r64037246;
        double r64037253 = r64037250 * r64037252;
        double r64037254 = r64037249 + r64037253;
        double r64037255 = 64.0;
        double r64037256 = r64037252 * r64037246;
        double r64037257 = r64037256 * r64037246;
        double r64037258 = r64037255 * r64037257;
        double r64037259 = r64037254 + r64037258;
        return r64037259;
}


double f_of(float x) {
        float r64037260 = -120.0;
        float r64037261 = 720.0;
        float r64037262 = x;
        float r64037263 = r64037262 * r64037262;
        float r64037264 = r64037261 * r64037263;
        float r64037265 = r64037260 + r64037264;
        float r64037266 = -480.0;
        float r64037267 = r64037263 * r64037262;
        float r64037268 = r64037267 * r64037262;
        float r64037269 = r64037266 * r64037268;
        float r64037270 = r64037265 + r64037269;
        float r64037271 = 64.0;
        float r64037272 = exp(r64037268);
        float r64037273 = cbrt(r64037272);
        float r64037274 = r64037273 * r64037273;
        float r64037275 = log(r64037274);
        float r64037276 = sqrt(r64037273);
        float r64037277 = log(r64037276);
        float r64037278 = r64037277 + r64037277;
        float r64037279 = r64037275 + r64037278;
        float r64037280 = r64037279 * r64037262;
        float r64037281 = r64037280 * r64037262;
        float r64037282 = r64037271 * r64037281;
        float r64037283 = r64037270 + r64037282;
        return r64037283;
}

double f_od(double x) {
        double r64037284 = -120.0;
        double r64037285 = 720.0;
        double r64037286 = x;
        double r64037287 = r64037286 * r64037286;
        double r64037288 = r64037285 * r64037287;
        double r64037289 = r64037284 + r64037288;
        double r64037290 = -480.0;
        double r64037291 = r64037287 * r64037286;
        double r64037292 = r64037291 * r64037286;
        double r64037293 = r64037290 * r64037292;
        double r64037294 = r64037289 + r64037293;
        double r64037295 = 64.0;
        double r64037296 = exp(r64037292);
        double r64037297 = cbrt(r64037296);
        double r64037298 = r64037297 * r64037297;
        double r64037299 = log(r64037298);
        double r64037300 = sqrt(r64037297);
        double r64037301 = log(r64037300);
        double r64037302 = r64037301 + r64037301;
        double r64037303 = r64037299 + r64037302;
        double r64037304 = r64037303 * r64037286;
        double r64037305 = r64037304 * r64037286;
        double r64037306 = r64037295 * r64037305;
        double r64037307 = r64037294 + r64037306;
        return r64037307;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64037308, r64037309, r64037310, r64037311, r64037312, r64037313, r64037314, r64037315, r64037316, r64037317, r64037318, r64037319, r64037320, r64037321, r64037322, r64037323;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037308, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r64037309, "720.0", 10, MPFR_RNDN);
        mpfr_init(r64037310);
        mpfr_init(r64037311);
        mpfr_init(r64037312);
        mpfr_init(r64037313);
        mpfr_init_set_str(r64037314, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r64037315);
        mpfr_init(r64037316);
        mpfr_init(r64037317);
        mpfr_init(r64037318);
        mpfr_init_set_str(r64037319, "64.0", 10, MPFR_RNDN);
        mpfr_init(r64037320);
        mpfr_init(r64037321);
        mpfr_init(r64037322);
        mpfr_init(r64037323);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r64037310, x, MPFR_RNDN);
        mpfr_mul(r64037311, r64037310, r64037310, MPFR_RNDN);
        mpfr_mul(r64037312, r64037309, r64037311, MPFR_RNDN);
        mpfr_add(r64037313, r64037308, r64037312, MPFR_RNDN);
        ;
        mpfr_mul(r64037315, r64037311, r64037310, MPFR_RNDN);
        mpfr_mul(r64037316, r64037315, r64037310, MPFR_RNDN);
        mpfr_mul(r64037317, r64037314, r64037316, MPFR_RNDN);
        mpfr_add(r64037318, r64037313, r64037317, MPFR_RNDN);
        ;
        mpfr_mul(r64037320, r64037316, r64037310, MPFR_RNDN);
        mpfr_mul(r64037321, r64037320, r64037310, MPFR_RNDN);
        mpfr_mul(r64037322, r64037319, r64037321, MPFR_RNDN);
        mpfr_add(r64037323, r64037318, r64037322, MPFR_RNDN);
        return mpfr_get_d(r64037323, MPFR_RNDN);
}

static mpfr_t r64037324, r64037325, r64037326, r64037327, r64037328, r64037329, r64037330, r64037331, r64037332, r64037333, r64037334, r64037335, r64037336, r64037337, r64037338, r64037339, r64037340, r64037341, r64037342, r64037343, r64037344, r64037345, r64037346, r64037347;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037324, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r64037325, "720.0", 10, MPFR_RNDN);
        mpfr_init(r64037326);
        mpfr_init(r64037327);
        mpfr_init(r64037328);
        mpfr_init(r64037329);
        mpfr_init_set_str(r64037330, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r64037331);
        mpfr_init(r64037332);
        mpfr_init(r64037333);
        mpfr_init(r64037334);
        mpfr_init_set_str(r64037335, "64.0", 10, MPFR_RNDN);
        mpfr_init(r64037336);
        mpfr_init(r64037337);
        mpfr_init(r64037338);
        mpfr_init(r64037339);
        mpfr_init(r64037340);
        mpfr_init(r64037341);
        mpfr_init(r64037342);
        mpfr_init(r64037343);
        mpfr_init(r64037344);
        mpfr_init(r64037345);
        mpfr_init(r64037346);
        mpfr_init(r64037347);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r64037326, x, MPFR_RNDN);
        mpfr_mul(r64037327, r64037326, r64037326, MPFR_RNDN);
        mpfr_mul(r64037328, r64037325, r64037327, MPFR_RNDN);
        mpfr_add(r64037329, r64037324, r64037328, MPFR_RNDN);
        ;
        mpfr_mul(r64037331, r64037327, r64037326, MPFR_RNDN);
        mpfr_mul(r64037332, r64037331, r64037326, MPFR_RNDN);
        mpfr_mul(r64037333, r64037330, r64037332, MPFR_RNDN);
        mpfr_add(r64037334, r64037329, r64037333, MPFR_RNDN);
        ;
        mpfr_exp(r64037336, r64037332, MPFR_RNDN);
        mpfr_cbrt(r64037337, r64037336, MPFR_RNDN);
        mpfr_mul(r64037338, r64037337, r64037337, MPFR_RNDN);
        mpfr_log(r64037339, r64037338, MPFR_RNDN);
        mpfr_sqrt(r64037340, r64037337, MPFR_RNDN);
        mpfr_log(r64037341, r64037340, MPFR_RNDN);
        mpfr_add(r64037342, r64037341, r64037341, MPFR_RNDN);
        mpfr_add(r64037343, r64037339, r64037342, MPFR_RNDN);
        mpfr_mul(r64037344, r64037343, r64037326, MPFR_RNDN);
        mpfr_mul(r64037345, r64037344, r64037326, MPFR_RNDN);
        mpfr_mul(r64037346, r64037335, r64037345, MPFR_RNDN);
        mpfr_add(r64037347, r64037334, r64037346, MPFR_RNDN);
        return mpfr_get_d(r64037347, MPFR_RNDN);
}

static mpfr_t r64037348, r64037349, r64037350, r64037351, r64037352, r64037353, r64037354, r64037355, r64037356, r64037357, r64037358, r64037359, r64037360, r64037361, r64037362, r64037363, r64037364, r64037365, r64037366, r64037367, r64037368, r64037369, r64037370, r64037371;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037348, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r64037349, "720.0", 10, MPFR_RNDN);
        mpfr_init(r64037350);
        mpfr_init(r64037351);
        mpfr_init(r64037352);
        mpfr_init(r64037353);
        mpfr_init_set_str(r64037354, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r64037355);
        mpfr_init(r64037356);
        mpfr_init(r64037357);
        mpfr_init(r64037358);
        mpfr_init_set_str(r64037359, "64.0", 10, MPFR_RNDN);
        mpfr_init(r64037360);
        mpfr_init(r64037361);
        mpfr_init(r64037362);
        mpfr_init(r64037363);
        mpfr_init(r64037364);
        mpfr_init(r64037365);
        mpfr_init(r64037366);
        mpfr_init(r64037367);
        mpfr_init(r64037368);
        mpfr_init(r64037369);
        mpfr_init(r64037370);
        mpfr_init(r64037371);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r64037350, x, MPFR_RNDN);
        mpfr_mul(r64037351, r64037350, r64037350, MPFR_RNDN);
        mpfr_mul(r64037352, r64037349, r64037351, MPFR_RNDN);
        mpfr_add(r64037353, r64037348, r64037352, MPFR_RNDN);
        ;
        mpfr_mul(r64037355, r64037351, r64037350, MPFR_RNDN);
        mpfr_mul(r64037356, r64037355, r64037350, MPFR_RNDN);
        mpfr_mul(r64037357, r64037354, r64037356, MPFR_RNDN);
        mpfr_add(r64037358, r64037353, r64037357, MPFR_RNDN);
        ;
        mpfr_exp(r64037360, r64037356, MPFR_RNDN);
        mpfr_cbrt(r64037361, r64037360, MPFR_RNDN);
        mpfr_mul(r64037362, r64037361, r64037361, MPFR_RNDN);
        mpfr_log(r64037363, r64037362, MPFR_RNDN);
        mpfr_sqrt(r64037364, r64037361, MPFR_RNDN);
        mpfr_log(r64037365, r64037364, MPFR_RNDN);
        mpfr_add(r64037366, r64037365, r64037365, MPFR_RNDN);
        mpfr_add(r64037367, r64037363, r64037366, MPFR_RNDN);
        mpfr_mul(r64037368, r64037367, r64037350, MPFR_RNDN);
        mpfr_mul(r64037369, r64037368, r64037350, MPFR_RNDN);
        mpfr_mul(r64037370, r64037359, r64037369, MPFR_RNDN);
        mpfr_add(r64037371, r64037358, r64037370, MPFR_RNDN);
        return mpfr_get_d(r64037371, MPFR_RNDN);
}

