#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r98658291 = 1.0;
        float r98658292 = -4.0;
        float r98658293 = x;
        float r98658294 = r98658292 * r98658293;
        float r98658295 = r98658291 + r98658294;
        float r98658296 = 3.0;
        float r98658297 = r98658293 * r98658293;
        float r98658298 = r98658296 * r98658297;
        float r98658299 = r98658295 + r98658298;
        float r98658300 = -0.666667;
        float r98658301 = r98658297 * r98658293;
        float r98658302 = r98658300 * r98658301;
        float r98658303 = r98658299 + r98658302;
        float r98658304 = 0.041667;
        float r98658305 = r98658301 * r98658293;
        float r98658306 = r98658304 * r98658305;
        float r98658307 = r98658303 + r98658306;
        return r98658307;
}

double f_id(double x) {
        double r98658308 = 1.0;
        double r98658309 = -4.0;
        double r98658310 = x;
        double r98658311 = r98658309 * r98658310;
        double r98658312 = r98658308 + r98658311;
        double r98658313 = 3.0;
        double r98658314 = r98658310 * r98658310;
        double r98658315 = r98658313 * r98658314;
        double r98658316 = r98658312 + r98658315;
        double r98658317 = -0.666667;
        double r98658318 = r98658314 * r98658310;
        double r98658319 = r98658317 * r98658318;
        double r98658320 = r98658316 + r98658319;
        double r98658321 = 0.041667;
        double r98658322 = r98658318 * r98658310;
        double r98658323 = r98658321 * r98658322;
        double r98658324 = r98658320 + r98658323;
        return r98658324;
}


double f_of(float x) {
        float r98658325 = x;
        float r98658326 = 3;
        float r98658327 = pow(r98658325, r98658326);
        float r98658328 = 0.041667;
        float r98658329 = r98658328 * r98658325;
        float r98658330 = -0.666667;
        float r98658331 = r98658329 + r98658330;
        float r98658332 = r98658327 * r98658331;
        float r98658333 = exp(r98658332);
        float r98658334 = log(r98658333);
        float r98658335 = -4.0;
        float r98658336 = 3.0;
        float r98658337 = r98658325 * r98658336;
        float r98658338 = r98658335 + r98658337;
        float r98658339 = r98658325 * r98658338;
        float r98658340 = 1.0;
        float r98658341 = r98658339 + r98658340;
        float r98658342 = r98658334 + r98658341;
        return r98658342;
}

double f_od(double x) {
        double r98658343 = x;
        double r98658344 = 3;
        double r98658345 = pow(r98658343, r98658344);
        double r98658346 = 0.041667;
        double r98658347 = r98658346 * r98658343;
        double r98658348 = -0.666667;
        double r98658349 = r98658347 + r98658348;
        double r98658350 = r98658345 * r98658349;
        double r98658351 = exp(r98658350);
        double r98658352 = log(r98658351);
        double r98658353 = -4.0;
        double r98658354 = 3.0;
        double r98658355 = r98658343 * r98658354;
        double r98658356 = r98658353 + r98658355;
        double r98658357 = r98658343 * r98658356;
        double r98658358 = 1.0;
        double r98658359 = r98658357 + r98658358;
        double r98658360 = r98658352 + r98658359;
        return r98658360;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r98658361, r98658362, r98658363, r98658364, r98658365, r98658366, r98658367, r98658368, r98658369, r98658370, r98658371, r98658372, r98658373, r98658374, r98658375, r98658376, r98658377;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658361, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658362, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r98658363);
        mpfr_init(r98658364);
        mpfr_init(r98658365);
        mpfr_init_set_str(r98658366, "3.0", 10, MPFR_RNDN);
        mpfr_init(r98658367);
        mpfr_init(r98658368);
        mpfr_init(r98658369);
        mpfr_init_set_str(r98658370, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r98658371);
        mpfr_init(r98658372);
        mpfr_init(r98658373);
        mpfr_init_set_str(r98658374, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r98658375);
        mpfr_init(r98658376);
        mpfr_init(r98658377);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r98658363, x, MPFR_RNDN);
        mpfr_mul(r98658364, r98658362, r98658363, MPFR_RNDN);
        mpfr_add(r98658365, r98658361, r98658364, MPFR_RNDN);
        ;
        mpfr_mul(r98658367, r98658363, r98658363, MPFR_RNDN);
        mpfr_mul(r98658368, r98658366, r98658367, MPFR_RNDN);
        mpfr_add(r98658369, r98658365, r98658368, MPFR_RNDN);
        ;
        mpfr_mul(r98658371, r98658367, r98658363, MPFR_RNDN);
        mpfr_mul(r98658372, r98658370, r98658371, MPFR_RNDN);
        mpfr_add(r98658373, r98658369, r98658372, MPFR_RNDN);
        ;
        mpfr_mul(r98658375, r98658371, r98658363, MPFR_RNDN);
        mpfr_mul(r98658376, r98658374, r98658375, MPFR_RNDN);
        mpfr_add(r98658377, r98658373, r98658376, MPFR_RNDN);
        return mpfr_get_d(r98658377, MPFR_RNDN);
}

static mpfr_t r98658378, r98658379, r98658380, r98658381, r98658382, r98658383, r98658384, r98658385, r98658386, r98658387, r98658388, r98658389, r98658390, r98658391, r98658392, r98658393, r98658394, r98658395;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r98658378);
        mpfr_init_set_str(r98658379, "3", 10, MPFR_RNDN);
        mpfr_init(r98658380);
        mpfr_init_set_str(r98658381, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r98658382);
        mpfr_init_set_str(r98658383, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r98658384);
        mpfr_init(r98658385);
        mpfr_init(r98658386);
        mpfr_init(r98658387);
        mpfr_init_set_str(r98658388, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658389, "3.0", 10, MPFR_RNDN);
        mpfr_init(r98658390);
        mpfr_init(r98658391);
        mpfr_init(r98658392);
        mpfr_init_set_str(r98658393, "1.0", 10, MPFR_RNDN);
        mpfr_init(r98658394);
        mpfr_init(r98658395);
}

double f_fm(double x) {
        mpfr_set_d(r98658378, x, MPFR_RNDN);
        ;
        mpfr_pow(r98658380, r98658378, r98658379, MPFR_RNDN);
        ;
        mpfr_mul(r98658382, r98658381, r98658378, MPFR_RNDN);
        ;
        mpfr_add(r98658384, r98658382, r98658383, MPFR_RNDN);
        mpfr_mul(r98658385, r98658380, r98658384, MPFR_RNDN);
        mpfr_exp(r98658386, r98658385, MPFR_RNDN);
        mpfr_log(r98658387, r98658386, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r98658390, r98658378, r98658389, MPFR_RNDN);
        mpfr_add(r98658391, r98658388, r98658390, MPFR_RNDN);
        mpfr_mul(r98658392, r98658378, r98658391, MPFR_RNDN);
        ;
        mpfr_add(r98658394, r98658392, r98658393, MPFR_RNDN);
        mpfr_add(r98658395, r98658387, r98658394, MPFR_RNDN);
        return mpfr_get_d(r98658395, MPFR_RNDN);
}

static mpfr_t r98658396, r98658397, r98658398, r98658399, r98658400, r98658401, r98658402, r98658403, r98658404, r98658405, r98658406, r98658407, r98658408, r98658409, r98658410, r98658411, r98658412, r98658413;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r98658396);
        mpfr_init_set_str(r98658397, "3", 10, MPFR_RNDN);
        mpfr_init(r98658398);
        mpfr_init_set_str(r98658399, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r98658400);
        mpfr_init_set_str(r98658401, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r98658402);
        mpfr_init(r98658403);
        mpfr_init(r98658404);
        mpfr_init(r98658405);
        mpfr_init_set_str(r98658406, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658407, "3.0", 10, MPFR_RNDN);
        mpfr_init(r98658408);
        mpfr_init(r98658409);
        mpfr_init(r98658410);
        mpfr_init_set_str(r98658411, "1.0", 10, MPFR_RNDN);
        mpfr_init(r98658412);
        mpfr_init(r98658413);
}

double f_dm(double x) {
        mpfr_set_d(r98658396, x, MPFR_RNDN);
        ;
        mpfr_pow(r98658398, r98658396, r98658397, MPFR_RNDN);
        ;
        mpfr_mul(r98658400, r98658399, r98658396, MPFR_RNDN);
        ;
        mpfr_add(r98658402, r98658400, r98658401, MPFR_RNDN);
        mpfr_mul(r98658403, r98658398, r98658402, MPFR_RNDN);
        mpfr_exp(r98658404, r98658403, MPFR_RNDN);
        mpfr_log(r98658405, r98658404, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r98658408, r98658396, r98658407, MPFR_RNDN);
        mpfr_add(r98658409, r98658406, r98658408, MPFR_RNDN);
        mpfr_mul(r98658410, r98658396, r98658409, MPFR_RNDN);
        ;
        mpfr_add(r98658412, r98658410, r98658411, MPFR_RNDN);
        mpfr_add(r98658413, r98658405, r98658412, MPFR_RNDN);
        return mpfr_get_d(r98658413, MPFR_RNDN);
}

