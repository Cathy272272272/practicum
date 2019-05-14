#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r5394304 = 0.375;
        float r5394305 = -3.75;
        float r5394306 = x;
        float r5394307 = r5394306 * r5394306;
        float r5394308 = r5394305 * r5394307;
        float r5394309 = r5394304 + r5394308;
        float r5394310 = 4.375;
        float r5394311 = r5394307 * r5394306;
        float r5394312 = r5394311 * r5394306;
        float r5394313 = r5394310 * r5394312;
        float r5394314 = r5394309 + r5394313;
        return r5394314;
}

double f_id(double x) {
        double r5394315 = 0.375;
        double r5394316 = -3.75;
        double r5394317 = x;
        double r5394318 = r5394317 * r5394317;
        double r5394319 = r5394316 * r5394318;
        double r5394320 = r5394315 + r5394319;
        double r5394321 = 4.375;
        double r5394322 = r5394318 * r5394317;
        double r5394323 = r5394322 * r5394317;
        double r5394324 = r5394321 * r5394323;
        double r5394325 = r5394320 + r5394324;
        return r5394325;
}


double f_of(float x) {
        float r5394326 = 0.375;
        float r5394327 = -3.75;
        float r5394328 = x;
        float r5394329 = r5394328 * r5394328;
        float r5394330 = r5394327 * r5394329;
        float r5394331 = r5394326 + r5394330;
        float r5394332 = 4.375;
        float r5394333 = r5394329 * r5394328;
        float r5394334 = r5394333 * r5394328;
        float r5394335 = r5394332 * r5394334;
        float r5394336 = r5394331 + r5394335;
        return r5394336;
}

double f_od(double x) {
        double r5394337 = 0.375;
        double r5394338 = -3.75;
        double r5394339 = x;
        double r5394340 = r5394339 * r5394339;
        double r5394341 = r5394338 * r5394340;
        double r5394342 = r5394337 + r5394341;
        double r5394343 = 4.375;
        double r5394344 = r5394340 * r5394339;
        double r5394345 = r5394344 * r5394339;
        double r5394346 = r5394343 * r5394345;
        double r5394347 = r5394342 + r5394346;
        return r5394347;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5394348, r5394349, r5394350, r5394351, r5394352, r5394353, r5394354, r5394355, r5394356, r5394357, r5394358;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394348, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394349, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r5394350);
        mpfr_init(r5394351);
        mpfr_init(r5394352);
        mpfr_init(r5394353);
        mpfr_init_set_str(r5394354, "4.375", 10, MPFR_RNDN);
        mpfr_init(r5394355);
        mpfr_init(r5394356);
        mpfr_init(r5394357);
        mpfr_init(r5394358);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5394350, x, MPFR_RNDN);
        mpfr_mul(r5394351, r5394350, r5394350, MPFR_RNDN);
        mpfr_mul(r5394352, r5394349, r5394351, MPFR_RNDN);
        mpfr_add(r5394353, r5394348, r5394352, MPFR_RNDN);
        ;
        mpfr_mul(r5394355, r5394351, r5394350, MPFR_RNDN);
        mpfr_mul(r5394356, r5394355, r5394350, MPFR_RNDN);
        mpfr_mul(r5394357, r5394354, r5394356, MPFR_RNDN);
        mpfr_add(r5394358, r5394353, r5394357, MPFR_RNDN);
        return mpfr_get_d(r5394358, MPFR_RNDN);
}

static mpfr_t r5394359, r5394360, r5394361, r5394362, r5394363, r5394364, r5394365, r5394366, r5394367, r5394368, r5394369;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394359, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394360, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r5394361);
        mpfr_init(r5394362);
        mpfr_init(r5394363);
        mpfr_init(r5394364);
        mpfr_init_set_str(r5394365, "4.375", 10, MPFR_RNDN);
        mpfr_init(r5394366);
        mpfr_init(r5394367);
        mpfr_init(r5394368);
        mpfr_init(r5394369);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5394361, x, MPFR_RNDN);
        mpfr_mul(r5394362, r5394361, r5394361, MPFR_RNDN);
        mpfr_mul(r5394363, r5394360, r5394362, MPFR_RNDN);
        mpfr_add(r5394364, r5394359, r5394363, MPFR_RNDN);
        ;
        mpfr_mul(r5394366, r5394362, r5394361, MPFR_RNDN);
        mpfr_mul(r5394367, r5394366, r5394361, MPFR_RNDN);
        mpfr_mul(r5394368, r5394365, r5394367, MPFR_RNDN);
        mpfr_add(r5394369, r5394364, r5394368, MPFR_RNDN);
        return mpfr_get_d(r5394369, MPFR_RNDN);
}

static mpfr_t r5394370, r5394371, r5394372, r5394373, r5394374, r5394375, r5394376, r5394377, r5394378, r5394379, r5394380;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394370, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394371, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r5394372);
        mpfr_init(r5394373);
        mpfr_init(r5394374);
        mpfr_init(r5394375);
        mpfr_init_set_str(r5394376, "4.375", 10, MPFR_RNDN);
        mpfr_init(r5394377);
        mpfr_init(r5394378);
        mpfr_init(r5394379);
        mpfr_init(r5394380);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5394372, x, MPFR_RNDN);
        mpfr_mul(r5394373, r5394372, r5394372, MPFR_RNDN);
        mpfr_mul(r5394374, r5394371, r5394373, MPFR_RNDN);
        mpfr_add(r5394375, r5394370, r5394374, MPFR_RNDN);
        ;
        mpfr_mul(r5394377, r5394373, r5394372, MPFR_RNDN);
        mpfr_mul(r5394378, r5394377, r5394372, MPFR_RNDN);
        mpfr_mul(r5394379, r5394376, r5394378, MPFR_RNDN);
        mpfr_add(r5394380, r5394375, r5394379, MPFR_RNDN);
        return mpfr_get_d(r5394380, MPFR_RNDN);
}

