#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7079322 = 1680.0;
        float r7079323 = -13440.0;
        float r7079324 = x;
        float r7079325 = r7079324 * r7079324;
        float r7079326 = r7079323 * r7079325;
        float r7079327 = r7079322 + r7079326;
        float r7079328 = 13440.0;
        float r7079329 = r7079325 * r7079324;
        float r7079330 = r7079329 * r7079324;
        float r7079331 = r7079328 * r7079330;
        float r7079332 = r7079327 + r7079331;
        float r7079333 = -3584.0;
        float r7079334 = r7079330 * r7079324;
        float r7079335 = r7079334 * r7079324;
        float r7079336 = r7079333 * r7079335;
        float r7079337 = r7079332 + r7079336;
        float r7079338 = 256.0;
        float r7079339 = r7079335 * r7079324;
        float r7079340 = r7079339 * r7079324;
        float r7079341 = r7079338 * r7079340;
        float r7079342 = r7079337 + r7079341;
        return r7079342;
}

double f_id(double x) {
        double r7079343 = 1680.0;
        double r7079344 = -13440.0;
        double r7079345 = x;
        double r7079346 = r7079345 * r7079345;
        double r7079347 = r7079344 * r7079346;
        double r7079348 = r7079343 + r7079347;
        double r7079349 = 13440.0;
        double r7079350 = r7079346 * r7079345;
        double r7079351 = r7079350 * r7079345;
        double r7079352 = r7079349 * r7079351;
        double r7079353 = r7079348 + r7079352;
        double r7079354 = -3584.0;
        double r7079355 = r7079351 * r7079345;
        double r7079356 = r7079355 * r7079345;
        double r7079357 = r7079354 * r7079356;
        double r7079358 = r7079353 + r7079357;
        double r7079359 = 256.0;
        double r7079360 = r7079356 * r7079345;
        double r7079361 = r7079360 * r7079345;
        double r7079362 = r7079359 * r7079361;
        double r7079363 = r7079358 + r7079362;
        return r7079363;
}


double f_of(float x) {
        float r7079364 = x;
        float r7079365 = r7079364 * r7079364;
        float r7079366 = r7079365 * r7079365;
        float r7079367 = 13440.0;
        float r7079368 = 256.0;
        float r7079369 = r7079368 * r7079364;
        float r7079370 = 3;
        float r7079371 = pow(r7079364, r7079370);
        float r7079372 = r7079369 * r7079371;
        float r7079373 = r7079367 + r7079372;
        float r7079374 = r7079366 * r7079373;
        float r7079375 = -13440.0;
        float r7079376 = r7079365 * r7079375;
        float r7079377 = 1680.0;
        float r7079378 = r7079376 + r7079377;
        float r7079379 = -3584.0;
        float r7079380 = r7079365 * r7079379;
        float r7079381 = r7079380 * r7079366;
        float r7079382 = r7079378 + r7079381;
        float r7079383 = r7079374 + r7079382;
        return r7079383;
}

double f_od(double x) {
        double r7079384 = x;
        double r7079385 = r7079384 * r7079384;
        double r7079386 = r7079385 * r7079385;
        double r7079387 = 13440.0;
        double r7079388 = 256.0;
        double r7079389 = r7079388 * r7079384;
        double r7079390 = 3;
        double r7079391 = pow(r7079384, r7079390);
        double r7079392 = r7079389 * r7079391;
        double r7079393 = r7079387 + r7079392;
        double r7079394 = r7079386 * r7079393;
        double r7079395 = -13440.0;
        double r7079396 = r7079385 * r7079395;
        double r7079397 = 1680.0;
        double r7079398 = r7079396 + r7079397;
        double r7079399 = -3584.0;
        double r7079400 = r7079385 * r7079399;
        double r7079401 = r7079400 * r7079386;
        double r7079402 = r7079398 + r7079401;
        double r7079403 = r7079394 + r7079402;
        return r7079403;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7079404, r7079405, r7079406, r7079407, r7079408, r7079409, r7079410, r7079411, r7079412, r7079413, r7079414, r7079415, r7079416, r7079417, r7079418, r7079419, r7079420, r7079421, r7079422, r7079423, r7079424;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7079404, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079405, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7079406);
        mpfr_init(r7079407);
        mpfr_init(r7079408);
        mpfr_init(r7079409);
        mpfr_init_set_str(r7079410, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7079411);
        mpfr_init(r7079412);
        mpfr_init(r7079413);
        mpfr_init(r7079414);
        mpfr_init_set_str(r7079415, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7079416);
        mpfr_init(r7079417);
        mpfr_init(r7079418);
        mpfr_init(r7079419);
        mpfr_init_set_str(r7079420, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7079421);
        mpfr_init(r7079422);
        mpfr_init(r7079423);
        mpfr_init(r7079424);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7079406, x, MPFR_RNDN);
        mpfr_mul(r7079407, r7079406, r7079406, MPFR_RNDN);
        mpfr_mul(r7079408, r7079405, r7079407, MPFR_RNDN);
        mpfr_add(r7079409, r7079404, r7079408, MPFR_RNDN);
        ;
        mpfr_mul(r7079411, r7079407, r7079406, MPFR_RNDN);
        mpfr_mul(r7079412, r7079411, r7079406, MPFR_RNDN);
        mpfr_mul(r7079413, r7079410, r7079412, MPFR_RNDN);
        mpfr_add(r7079414, r7079409, r7079413, MPFR_RNDN);
        ;
        mpfr_mul(r7079416, r7079412, r7079406, MPFR_RNDN);
        mpfr_mul(r7079417, r7079416, r7079406, MPFR_RNDN);
        mpfr_mul(r7079418, r7079415, r7079417, MPFR_RNDN);
        mpfr_add(r7079419, r7079414, r7079418, MPFR_RNDN);
        ;
        mpfr_mul(r7079421, r7079417, r7079406, MPFR_RNDN);
        mpfr_mul(r7079422, r7079421, r7079406, MPFR_RNDN);
        mpfr_mul(r7079423, r7079420, r7079422, MPFR_RNDN);
        mpfr_add(r7079424, r7079419, r7079423, MPFR_RNDN);
        return mpfr_get_d(r7079424, MPFR_RNDN);
}

static mpfr_t r7079425, r7079426, r7079427, r7079428, r7079429, r7079430, r7079431, r7079432, r7079433, r7079434, r7079435, r7079436, r7079437, r7079438, r7079439, r7079440, r7079441, r7079442, r7079443, r7079444;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7079425);
        mpfr_init(r7079426);
        mpfr_init(r7079427);
        mpfr_init_set_str(r7079428, "13440.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079429, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7079430);
        mpfr_init_set_str(r7079431, "3", 10, MPFR_RNDN);
        mpfr_init(r7079432);
        mpfr_init(r7079433);
        mpfr_init(r7079434);
        mpfr_init(r7079435);
        mpfr_init_set_str(r7079436, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7079437);
        mpfr_init_set_str(r7079438, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r7079439);
        mpfr_init_set_str(r7079440, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7079441);
        mpfr_init(r7079442);
        mpfr_init(r7079443);
        mpfr_init(r7079444);
}

double f_fm(double x) {
        mpfr_set_d(r7079425, x, MPFR_RNDN);
        mpfr_mul(r7079426, r7079425, r7079425, MPFR_RNDN);
        mpfr_mul(r7079427, r7079426, r7079426, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7079430, r7079429, r7079425, MPFR_RNDN);
        ;
        mpfr_pow(r7079432, r7079425, r7079431, MPFR_RNDN);
        mpfr_mul(r7079433, r7079430, r7079432, MPFR_RNDN);
        mpfr_add(r7079434, r7079428, r7079433, MPFR_RNDN);
        mpfr_mul(r7079435, r7079427, r7079434, MPFR_RNDN);
        ;
        mpfr_mul(r7079437, r7079426, r7079436, MPFR_RNDN);
        ;
        mpfr_add(r7079439, r7079437, r7079438, MPFR_RNDN);
        ;
        mpfr_mul(r7079441, r7079426, r7079440, MPFR_RNDN);
        mpfr_mul(r7079442, r7079441, r7079427, MPFR_RNDN);
        mpfr_add(r7079443, r7079439, r7079442, MPFR_RNDN);
        mpfr_add(r7079444, r7079435, r7079443, MPFR_RNDN);
        return mpfr_get_d(r7079444, MPFR_RNDN);
}

static mpfr_t r7079445, r7079446, r7079447, r7079448, r7079449, r7079450, r7079451, r7079452, r7079453, r7079454, r7079455, r7079456, r7079457, r7079458, r7079459, r7079460, r7079461, r7079462, r7079463, r7079464;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7079445);
        mpfr_init(r7079446);
        mpfr_init(r7079447);
        mpfr_init_set_str(r7079448, "13440.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079449, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7079450);
        mpfr_init_set_str(r7079451, "3", 10, MPFR_RNDN);
        mpfr_init(r7079452);
        mpfr_init(r7079453);
        mpfr_init(r7079454);
        mpfr_init(r7079455);
        mpfr_init_set_str(r7079456, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7079457);
        mpfr_init_set_str(r7079458, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r7079459);
        mpfr_init_set_str(r7079460, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7079461);
        mpfr_init(r7079462);
        mpfr_init(r7079463);
        mpfr_init(r7079464);
}

double f_dm(double x) {
        mpfr_set_d(r7079445, x, MPFR_RNDN);
        mpfr_mul(r7079446, r7079445, r7079445, MPFR_RNDN);
        mpfr_mul(r7079447, r7079446, r7079446, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7079450, r7079449, r7079445, MPFR_RNDN);
        ;
        mpfr_pow(r7079452, r7079445, r7079451, MPFR_RNDN);
        mpfr_mul(r7079453, r7079450, r7079452, MPFR_RNDN);
        mpfr_add(r7079454, r7079448, r7079453, MPFR_RNDN);
        mpfr_mul(r7079455, r7079447, r7079454, MPFR_RNDN);
        ;
        mpfr_mul(r7079457, r7079446, r7079456, MPFR_RNDN);
        ;
        mpfr_add(r7079459, r7079457, r7079458, MPFR_RNDN);
        ;
        mpfr_mul(r7079461, r7079446, r7079460, MPFR_RNDN);
        mpfr_mul(r7079462, r7079461, r7079447, MPFR_RNDN);
        mpfr_add(r7079463, r7079459, r7079462, MPFR_RNDN);
        mpfr_add(r7079464, r7079455, r7079463, MPFR_RNDN);
        return mpfr_get_d(r7079464, MPFR_RNDN);
}

