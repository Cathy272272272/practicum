#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r4112281 = 120.0;
        float r4112282 = x;
        float r4112283 = r4112281 * r4112282;
        float r4112284 = -160.0;
        float r4112285 = r4112282 * r4112282;
        float r4112286 = r4112285 * r4112282;
        float r4112287 = r4112284 * r4112286;
        float r4112288 = r4112283 + r4112287;
        float r4112289 = 32.0;
        float r4112290 = r4112286 * r4112282;
        float r4112291 = r4112290 * r4112282;
        float r4112292 = r4112289 * r4112291;
        float r4112293 = r4112288 + r4112292;
        return r4112293;
}

double f_id(double x) {
        double r4112294 = 120.0;
        double r4112295 = x;
        double r4112296 = r4112294 * r4112295;
        double r4112297 = -160.0;
        double r4112298 = r4112295 * r4112295;
        double r4112299 = r4112298 * r4112295;
        double r4112300 = r4112297 * r4112299;
        double r4112301 = r4112296 + r4112300;
        double r4112302 = 32.0;
        double r4112303 = r4112299 * r4112295;
        double r4112304 = r4112303 * r4112295;
        double r4112305 = r4112302 * r4112304;
        double r4112306 = r4112301 + r4112305;
        return r4112306;
}


double f_of(float x) {
        float r4112307 = 120.0;
        float r4112308 = x;
        float r4112309 = r4112307 * r4112308;
        float r4112310 = -160.0;
        float r4112311 = r4112308 * r4112308;
        float r4112312 = r4112311 * r4112308;
        float r4112313 = r4112310 * r4112312;
        float r4112314 = r4112309 + r4112313;
        float r4112315 = 32.0;
        float r4112316 = r4112312 * r4112308;
        float r4112317 = r4112316 * r4112308;
        float r4112318 = r4112315 * r4112317;
        float r4112319 = r4112314 + r4112318;
        return r4112319;
}

double f_od(double x) {
        double r4112320 = 120.0;
        double r4112321 = x;
        double r4112322 = r4112320 * r4112321;
        double r4112323 = -160.0;
        double r4112324 = r4112321 * r4112321;
        double r4112325 = r4112324 * r4112321;
        double r4112326 = r4112323 * r4112325;
        double r4112327 = r4112322 + r4112326;
        double r4112328 = 32.0;
        double r4112329 = r4112325 * r4112321;
        double r4112330 = r4112329 * r4112321;
        double r4112331 = r4112328 * r4112330;
        double r4112332 = r4112327 + r4112331;
        return r4112332;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4112333, r4112334, r4112335, r4112336, r4112337, r4112338, r4112339, r4112340, r4112341, r4112342, r4112343, r4112344, r4112345;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112333, "120.0", 10, MPFR_RNDN);
        mpfr_init(r4112334);
        mpfr_init(r4112335);
        mpfr_init_set_str(r4112336, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r4112337);
        mpfr_init(r4112338);
        mpfr_init(r4112339);
        mpfr_init(r4112340);
        mpfr_init_set_str(r4112341, "32.0", 10, MPFR_RNDN);
        mpfr_init(r4112342);
        mpfr_init(r4112343);
        mpfr_init(r4112344);
        mpfr_init(r4112345);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4112334, x, MPFR_RNDN);
        mpfr_mul(r4112335, r4112333, r4112334, MPFR_RNDN);
        ;
        mpfr_mul(r4112337, r4112334, r4112334, MPFR_RNDN);
        mpfr_mul(r4112338, r4112337, r4112334, MPFR_RNDN);
        mpfr_mul(r4112339, r4112336, r4112338, MPFR_RNDN);
        mpfr_add(r4112340, r4112335, r4112339, MPFR_RNDN);
        ;
        mpfr_mul(r4112342, r4112338, r4112334, MPFR_RNDN);
        mpfr_mul(r4112343, r4112342, r4112334, MPFR_RNDN);
        mpfr_mul(r4112344, r4112341, r4112343, MPFR_RNDN);
        mpfr_add(r4112345, r4112340, r4112344, MPFR_RNDN);
        return mpfr_get_d(r4112345, MPFR_RNDN);
}

static mpfr_t r4112346, r4112347, r4112348, r4112349, r4112350, r4112351, r4112352, r4112353, r4112354, r4112355, r4112356, r4112357, r4112358;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112346, "120.0", 10, MPFR_RNDN);
        mpfr_init(r4112347);
        mpfr_init(r4112348);
        mpfr_init_set_str(r4112349, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r4112350);
        mpfr_init(r4112351);
        mpfr_init(r4112352);
        mpfr_init(r4112353);
        mpfr_init_set_str(r4112354, "32.0", 10, MPFR_RNDN);
        mpfr_init(r4112355);
        mpfr_init(r4112356);
        mpfr_init(r4112357);
        mpfr_init(r4112358);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4112347, x, MPFR_RNDN);
        mpfr_mul(r4112348, r4112346, r4112347, MPFR_RNDN);
        ;
        mpfr_mul(r4112350, r4112347, r4112347, MPFR_RNDN);
        mpfr_mul(r4112351, r4112350, r4112347, MPFR_RNDN);
        mpfr_mul(r4112352, r4112349, r4112351, MPFR_RNDN);
        mpfr_add(r4112353, r4112348, r4112352, MPFR_RNDN);
        ;
        mpfr_mul(r4112355, r4112351, r4112347, MPFR_RNDN);
        mpfr_mul(r4112356, r4112355, r4112347, MPFR_RNDN);
        mpfr_mul(r4112357, r4112354, r4112356, MPFR_RNDN);
        mpfr_add(r4112358, r4112353, r4112357, MPFR_RNDN);
        return mpfr_get_d(r4112358, MPFR_RNDN);
}

static mpfr_t r4112359, r4112360, r4112361, r4112362, r4112363, r4112364, r4112365, r4112366, r4112367, r4112368, r4112369, r4112370, r4112371;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112359, "120.0", 10, MPFR_RNDN);
        mpfr_init(r4112360);
        mpfr_init(r4112361);
        mpfr_init_set_str(r4112362, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r4112363);
        mpfr_init(r4112364);
        mpfr_init(r4112365);
        mpfr_init(r4112366);
        mpfr_init_set_str(r4112367, "32.0", 10, MPFR_RNDN);
        mpfr_init(r4112368);
        mpfr_init(r4112369);
        mpfr_init(r4112370);
        mpfr_init(r4112371);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4112360, x, MPFR_RNDN);
        mpfr_mul(r4112361, r4112359, r4112360, MPFR_RNDN);
        ;
        mpfr_mul(r4112363, r4112360, r4112360, MPFR_RNDN);
        mpfr_mul(r4112364, r4112363, r4112360, MPFR_RNDN);
        mpfr_mul(r4112365, r4112362, r4112364, MPFR_RNDN);
        mpfr_add(r4112366, r4112361, r4112365, MPFR_RNDN);
        ;
        mpfr_mul(r4112368, r4112364, r4112360, MPFR_RNDN);
        mpfr_mul(r4112369, r4112368, r4112360, MPFR_RNDN);
        mpfr_mul(r4112370, r4112367, r4112369, MPFR_RNDN);
        mpfr_add(r4112371, r4112366, r4112370, MPFR_RNDN);
        return mpfr_get_d(r4112371, MPFR_RNDN);
}

