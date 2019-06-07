#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r9582253 = 1.0;
        float r9582254 = -4.0;
        float r9582255 = x;
        float r9582256 = r9582254 * r9582255;
        float r9582257 = r9582253 + r9582256;
        float r9582258 = 3.0;
        float r9582259 = r9582255 * r9582255;
        float r9582260 = r9582258 * r9582259;
        float r9582261 = r9582257 + r9582260;
        float r9582262 = -0.666667;
        float r9582263 = r9582259 * r9582255;
        float r9582264 = r9582262 * r9582263;
        float r9582265 = r9582261 + r9582264;
        float r9582266 = 0.041667;
        float r9582267 = r9582263 * r9582255;
        float r9582268 = r9582266 * r9582267;
        float r9582269 = r9582265 + r9582268;
        return r9582269;
}

double f_id(double x) {
        double r9582270 = 1.0;
        double r9582271 = -4.0;
        double r9582272 = x;
        double r9582273 = r9582271 * r9582272;
        double r9582274 = r9582270 + r9582273;
        double r9582275 = 3.0;
        double r9582276 = r9582272 * r9582272;
        double r9582277 = r9582275 * r9582276;
        double r9582278 = r9582274 + r9582277;
        double r9582279 = -0.666667;
        double r9582280 = r9582276 * r9582272;
        double r9582281 = r9582279 * r9582280;
        double r9582282 = r9582278 + r9582281;
        double r9582283 = 0.041667;
        double r9582284 = r9582280 * r9582272;
        double r9582285 = r9582283 * r9582284;
        double r9582286 = r9582282 + r9582285;
        return r9582286;
}


double f_of(float x) {
        float r9582287 = 1.0;
        float r9582288 = -4.0;
        float r9582289 = x;
        float r9582290 = r9582288 * r9582289;
        float r9582291 = r9582287 + r9582290;
        float r9582292 = 3.0;
        float r9582293 = r9582289 * r9582289;
        float r9582294 = r9582292 * r9582293;
        float r9582295 = cbrt(r9582294);
        float r9582296 = r9582295 * r9582295;
        float r9582297 = r9582296 * r9582295;
        float r9582298 = r9582291 + r9582297;
        float r9582299 = -0.666667;
        float r9582300 = r9582293 * r9582289;
        float r9582301 = r9582299 * r9582300;
        float r9582302 = r9582298 + r9582301;
        float r9582303 = 0.041667;
        float r9582304 = r9582300 * r9582289;
        float r9582305 = r9582303 * r9582304;
        float r9582306 = r9582302 + r9582305;
        return r9582306;
}

double f_od(double x) {
        double r9582307 = 1.0;
        double r9582308 = -4.0;
        double r9582309 = x;
        double r9582310 = r9582308 * r9582309;
        double r9582311 = r9582307 + r9582310;
        double r9582312 = 3.0;
        double r9582313 = r9582309 * r9582309;
        double r9582314 = r9582312 * r9582313;
        double r9582315 = cbrt(r9582314);
        double r9582316 = r9582315 * r9582315;
        double r9582317 = r9582316 * r9582315;
        double r9582318 = r9582311 + r9582317;
        double r9582319 = -0.666667;
        double r9582320 = r9582313 * r9582309;
        double r9582321 = r9582319 * r9582320;
        double r9582322 = r9582318 + r9582321;
        double r9582323 = 0.041667;
        double r9582324 = r9582320 * r9582309;
        double r9582325 = r9582323 * r9582324;
        double r9582326 = r9582322 + r9582325;
        return r9582326;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9582327, r9582328, r9582329, r9582330, r9582331, r9582332, r9582333, r9582334, r9582335, r9582336, r9582337, r9582338, r9582339, r9582340, r9582341, r9582342, r9582343;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9582327, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582328, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9582329);
        mpfr_init(r9582330);
        mpfr_init(r9582331);
        mpfr_init_set_str(r9582332, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9582333);
        mpfr_init(r9582334);
        mpfr_init(r9582335);
        mpfr_init_set_str(r9582336, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9582337);
        mpfr_init(r9582338);
        mpfr_init(r9582339);
        mpfr_init_set_str(r9582340, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9582341);
        mpfr_init(r9582342);
        mpfr_init(r9582343);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9582329, x, MPFR_RNDN);
        mpfr_mul(r9582330, r9582328, r9582329, MPFR_RNDN);
        mpfr_add(r9582331, r9582327, r9582330, MPFR_RNDN);
        ;
        mpfr_mul(r9582333, r9582329, r9582329, MPFR_RNDN);
        mpfr_mul(r9582334, r9582332, r9582333, MPFR_RNDN);
        mpfr_add(r9582335, r9582331, r9582334, MPFR_RNDN);
        ;
        mpfr_mul(r9582337, r9582333, r9582329, MPFR_RNDN);
        mpfr_mul(r9582338, r9582336, r9582337, MPFR_RNDN);
        mpfr_add(r9582339, r9582335, r9582338, MPFR_RNDN);
        ;
        mpfr_mul(r9582341, r9582337, r9582329, MPFR_RNDN);
        mpfr_mul(r9582342, r9582340, r9582341, MPFR_RNDN);
        mpfr_add(r9582343, r9582339, r9582342, MPFR_RNDN);
        return mpfr_get_d(r9582343, MPFR_RNDN);
}

static mpfr_t r9582344, r9582345, r9582346, r9582347, r9582348, r9582349, r9582350, r9582351, r9582352, r9582353, r9582354, r9582355, r9582356, r9582357, r9582358, r9582359, r9582360, r9582361, r9582362, r9582363;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9582344, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582345, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9582346);
        mpfr_init(r9582347);
        mpfr_init(r9582348);
        mpfr_init_set_str(r9582349, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9582350);
        mpfr_init(r9582351);
        mpfr_init(r9582352);
        mpfr_init(r9582353);
        mpfr_init(r9582354);
        mpfr_init(r9582355);
        mpfr_init_set_str(r9582356, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9582357);
        mpfr_init(r9582358);
        mpfr_init(r9582359);
        mpfr_init_set_str(r9582360, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9582361);
        mpfr_init(r9582362);
        mpfr_init(r9582363);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9582346, x, MPFR_RNDN);
        mpfr_mul(r9582347, r9582345, r9582346, MPFR_RNDN);
        mpfr_add(r9582348, r9582344, r9582347, MPFR_RNDN);
        ;
        mpfr_mul(r9582350, r9582346, r9582346, MPFR_RNDN);
        mpfr_mul(r9582351, r9582349, r9582350, MPFR_RNDN);
        mpfr_cbrt(r9582352, r9582351, MPFR_RNDN);
        mpfr_mul(r9582353, r9582352, r9582352, MPFR_RNDN);
        mpfr_mul(r9582354, r9582353, r9582352, MPFR_RNDN);
        mpfr_add(r9582355, r9582348, r9582354, MPFR_RNDN);
        ;
        mpfr_mul(r9582357, r9582350, r9582346, MPFR_RNDN);
        mpfr_mul(r9582358, r9582356, r9582357, MPFR_RNDN);
        mpfr_add(r9582359, r9582355, r9582358, MPFR_RNDN);
        ;
        mpfr_mul(r9582361, r9582357, r9582346, MPFR_RNDN);
        mpfr_mul(r9582362, r9582360, r9582361, MPFR_RNDN);
        mpfr_add(r9582363, r9582359, r9582362, MPFR_RNDN);
        return mpfr_get_d(r9582363, MPFR_RNDN);
}

static mpfr_t r9582364, r9582365, r9582366, r9582367, r9582368, r9582369, r9582370, r9582371, r9582372, r9582373, r9582374, r9582375, r9582376, r9582377, r9582378, r9582379, r9582380, r9582381, r9582382, r9582383;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9582364, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582365, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9582366);
        mpfr_init(r9582367);
        mpfr_init(r9582368);
        mpfr_init_set_str(r9582369, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9582370);
        mpfr_init(r9582371);
        mpfr_init(r9582372);
        mpfr_init(r9582373);
        mpfr_init(r9582374);
        mpfr_init(r9582375);
        mpfr_init_set_str(r9582376, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9582377);
        mpfr_init(r9582378);
        mpfr_init(r9582379);
        mpfr_init_set_str(r9582380, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9582381);
        mpfr_init(r9582382);
        mpfr_init(r9582383);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9582366, x, MPFR_RNDN);
        mpfr_mul(r9582367, r9582365, r9582366, MPFR_RNDN);
        mpfr_add(r9582368, r9582364, r9582367, MPFR_RNDN);
        ;
        mpfr_mul(r9582370, r9582366, r9582366, MPFR_RNDN);
        mpfr_mul(r9582371, r9582369, r9582370, MPFR_RNDN);
        mpfr_cbrt(r9582372, r9582371, MPFR_RNDN);
        mpfr_mul(r9582373, r9582372, r9582372, MPFR_RNDN);
        mpfr_mul(r9582374, r9582373, r9582372, MPFR_RNDN);
        mpfr_add(r9582375, r9582368, r9582374, MPFR_RNDN);
        ;
        mpfr_mul(r9582377, r9582370, r9582366, MPFR_RNDN);
        mpfr_mul(r9582378, r9582376, r9582377, MPFR_RNDN);
        mpfr_add(r9582379, r9582375, r9582378, MPFR_RNDN);
        ;
        mpfr_mul(r9582381, r9582377, r9582366, MPFR_RNDN);
        mpfr_mul(r9582382, r9582380, r9582381, MPFR_RNDN);
        mpfr_add(r9582383, r9582379, r9582382, MPFR_RNDN);
        return mpfr_get_d(r9582383, MPFR_RNDN);
}

