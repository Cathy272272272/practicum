#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r10921270 = 1.0;
        float r10921271 = -4.0;
        float r10921272 = x;
        float r10921273 = r10921271 * r10921272;
        float r10921274 = r10921270 + r10921273;
        float r10921275 = 3.0;
        float r10921276 = r10921272 * r10921272;
        float r10921277 = r10921275 * r10921276;
        float r10921278 = r10921274 + r10921277;
        float r10921279 = -0.666667;
        float r10921280 = r10921276 * r10921272;
        float r10921281 = r10921279 * r10921280;
        float r10921282 = r10921278 + r10921281;
        float r10921283 = 0.041667;
        float r10921284 = r10921280 * r10921272;
        float r10921285 = r10921283 * r10921284;
        float r10921286 = r10921282 + r10921285;
        return r10921286;
}

double f_id(double x) {
        double r10921287 = 1.0;
        double r10921288 = -4.0;
        double r10921289 = x;
        double r10921290 = r10921288 * r10921289;
        double r10921291 = r10921287 + r10921290;
        double r10921292 = 3.0;
        double r10921293 = r10921289 * r10921289;
        double r10921294 = r10921292 * r10921293;
        double r10921295 = r10921291 + r10921294;
        double r10921296 = -0.666667;
        double r10921297 = r10921293 * r10921289;
        double r10921298 = r10921296 * r10921297;
        double r10921299 = r10921295 + r10921298;
        double r10921300 = 0.041667;
        double r10921301 = r10921297 * r10921289;
        double r10921302 = r10921300 * r10921301;
        double r10921303 = r10921299 + r10921302;
        return r10921303;
}


double f_of(float x) {
        float r10921304 = 1.0;
        float r10921305 = -4.0;
        float r10921306 = x;
        float r10921307 = r10921305 * r10921306;
        float r10921308 = r10921304 + r10921307;
        float r10921309 = 3.0;
        float r10921310 = r10921306 * r10921306;
        float r10921311 = r10921309 * r10921310;
        float r10921312 = r10921308 + r10921311;
        float r10921313 = -0.666667;
        float r10921314 = r10921310 * r10921306;
        float r10921315 = r10921313 * r10921314;
        float r10921316 = r10921312 + r10921315;
        float r10921317 = 0.041667;
        float r10921318 = 3;
        float r10921319 = 1;
        float r10921320 = r10921318 + r10921319;
        float r10921321 = pow(r10921306, r10921320);
        float r10921322 = r10921317 * r10921321;
        float r10921323 = r10921316 + r10921322;
        return r10921323;
}

double f_od(double x) {
        double r10921324 = 1.0;
        double r10921325 = -4.0;
        double r10921326 = x;
        double r10921327 = r10921325 * r10921326;
        double r10921328 = r10921324 + r10921327;
        double r10921329 = 3.0;
        double r10921330 = r10921326 * r10921326;
        double r10921331 = r10921329 * r10921330;
        double r10921332 = r10921328 + r10921331;
        double r10921333 = -0.666667;
        double r10921334 = r10921330 * r10921326;
        double r10921335 = r10921333 * r10921334;
        double r10921336 = r10921332 + r10921335;
        double r10921337 = 0.041667;
        double r10921338 = 3;
        double r10921339 = 1;
        double r10921340 = r10921338 + r10921339;
        double r10921341 = pow(r10921326, r10921340);
        double r10921342 = r10921337 * r10921341;
        double r10921343 = r10921336 + r10921342;
        return r10921343;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10921344, r10921345, r10921346, r10921347, r10921348, r10921349, r10921350, r10921351, r10921352, r10921353, r10921354, r10921355, r10921356, r10921357, r10921358, r10921359, r10921360;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10921344, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921345, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10921346);
        mpfr_init(r10921347);
        mpfr_init(r10921348);
        mpfr_init_set_str(r10921349, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10921350);
        mpfr_init(r10921351);
        mpfr_init(r10921352);
        mpfr_init_set_str(r10921353, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10921354);
        mpfr_init(r10921355);
        mpfr_init(r10921356);
        mpfr_init_set_str(r10921357, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10921358);
        mpfr_init(r10921359);
        mpfr_init(r10921360);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10921346, x, MPFR_RNDN);
        mpfr_mul(r10921347, r10921345, r10921346, MPFR_RNDN);
        mpfr_add(r10921348, r10921344, r10921347, MPFR_RNDN);
        ;
        mpfr_mul(r10921350, r10921346, r10921346, MPFR_RNDN);
        mpfr_mul(r10921351, r10921349, r10921350, MPFR_RNDN);
        mpfr_add(r10921352, r10921348, r10921351, MPFR_RNDN);
        ;
        mpfr_mul(r10921354, r10921350, r10921346, MPFR_RNDN);
        mpfr_mul(r10921355, r10921353, r10921354, MPFR_RNDN);
        mpfr_add(r10921356, r10921352, r10921355, MPFR_RNDN);
        ;
        mpfr_mul(r10921358, r10921354, r10921346, MPFR_RNDN);
        mpfr_mul(r10921359, r10921357, r10921358, MPFR_RNDN);
        mpfr_add(r10921360, r10921356, r10921359, MPFR_RNDN);
        return mpfr_get_d(r10921360, MPFR_RNDN);
}

static mpfr_t r10921361, r10921362, r10921363, r10921364, r10921365, r10921366, r10921367, r10921368, r10921369, r10921370, r10921371, r10921372, r10921373, r10921374, r10921375, r10921376, r10921377, r10921378, r10921379, r10921380;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10921361, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921362, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10921363);
        mpfr_init(r10921364);
        mpfr_init(r10921365);
        mpfr_init_set_str(r10921366, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10921367);
        mpfr_init(r10921368);
        mpfr_init(r10921369);
        mpfr_init_set_str(r10921370, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10921371);
        mpfr_init(r10921372);
        mpfr_init(r10921373);
        mpfr_init_set_str(r10921374, "0.041667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921375, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921376, "1", 10, MPFR_RNDN);
        mpfr_init(r10921377);
        mpfr_init(r10921378);
        mpfr_init(r10921379);
        mpfr_init(r10921380);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10921363, x, MPFR_RNDN);
        mpfr_mul(r10921364, r10921362, r10921363, MPFR_RNDN);
        mpfr_add(r10921365, r10921361, r10921364, MPFR_RNDN);
        ;
        mpfr_mul(r10921367, r10921363, r10921363, MPFR_RNDN);
        mpfr_mul(r10921368, r10921366, r10921367, MPFR_RNDN);
        mpfr_add(r10921369, r10921365, r10921368, MPFR_RNDN);
        ;
        mpfr_mul(r10921371, r10921367, r10921363, MPFR_RNDN);
        mpfr_mul(r10921372, r10921370, r10921371, MPFR_RNDN);
        mpfr_add(r10921373, r10921369, r10921372, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r10921377, r10921375, r10921376, MPFR_RNDN);
        mpfr_pow(r10921378, r10921363, r10921377, MPFR_RNDN);
        mpfr_mul(r10921379, r10921374, r10921378, MPFR_RNDN);
        mpfr_add(r10921380, r10921373, r10921379, MPFR_RNDN);
        return mpfr_get_d(r10921380, MPFR_RNDN);
}

static mpfr_t r10921381, r10921382, r10921383, r10921384, r10921385, r10921386, r10921387, r10921388, r10921389, r10921390, r10921391, r10921392, r10921393, r10921394, r10921395, r10921396, r10921397, r10921398, r10921399, r10921400;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10921381, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921382, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10921383);
        mpfr_init(r10921384);
        mpfr_init(r10921385);
        mpfr_init_set_str(r10921386, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10921387);
        mpfr_init(r10921388);
        mpfr_init(r10921389);
        mpfr_init_set_str(r10921390, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10921391);
        mpfr_init(r10921392);
        mpfr_init(r10921393);
        mpfr_init_set_str(r10921394, "0.041667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921395, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921396, "1", 10, MPFR_RNDN);
        mpfr_init(r10921397);
        mpfr_init(r10921398);
        mpfr_init(r10921399);
        mpfr_init(r10921400);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10921383, x, MPFR_RNDN);
        mpfr_mul(r10921384, r10921382, r10921383, MPFR_RNDN);
        mpfr_add(r10921385, r10921381, r10921384, MPFR_RNDN);
        ;
        mpfr_mul(r10921387, r10921383, r10921383, MPFR_RNDN);
        mpfr_mul(r10921388, r10921386, r10921387, MPFR_RNDN);
        mpfr_add(r10921389, r10921385, r10921388, MPFR_RNDN);
        ;
        mpfr_mul(r10921391, r10921387, r10921383, MPFR_RNDN);
        mpfr_mul(r10921392, r10921390, r10921391, MPFR_RNDN);
        mpfr_add(r10921393, r10921389, r10921392, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r10921397, r10921395, r10921396, MPFR_RNDN);
        mpfr_pow(r10921398, r10921383, r10921397, MPFR_RNDN);
        mpfr_mul(r10921399, r10921394, r10921398, MPFR_RNDN);
        mpfr_add(r10921400, r10921393, r10921399, MPFR_RNDN);
        return mpfr_get_d(r10921400, MPFR_RNDN);
}

