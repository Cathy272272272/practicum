#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6903326 = 2.460938;
        float r6903327 = x;
        float r6903328 = r6903326 * r6903327;
        float r6903329 = -36.09375;
        float r6903330 = r6903327 * r6903327;
        float r6903331 = r6903330 * r6903327;
        float r6903332 = r6903329 * r6903331;
        float r6903333 = r6903328 + r6903332;
        float r6903334 = 140.765625;
        float r6903335 = r6903331 * r6903327;
        float r6903336 = r6903335 * r6903327;
        float r6903337 = r6903334 * r6903336;
        float r6903338 = r6903333 + r6903337;
        float r6903339 = -201.09375;
        float r6903340 = r6903336 * r6903327;
        float r6903341 = r6903340 * r6903327;
        float r6903342 = r6903339 * r6903341;
        float r6903343 = r6903338 + r6903342;
        float r6903344 = 94.960938;
        float r6903345 = r6903341 * r6903327;
        float r6903346 = r6903345 * r6903327;
        float r6903347 = r6903344 * r6903346;
        float r6903348 = r6903343 + r6903347;
        return r6903348;
}

double f_id(double x) {
        double r6903349 = 2.460938;
        double r6903350 = x;
        double r6903351 = r6903349 * r6903350;
        double r6903352 = -36.09375;
        double r6903353 = r6903350 * r6903350;
        double r6903354 = r6903353 * r6903350;
        double r6903355 = r6903352 * r6903354;
        double r6903356 = r6903351 + r6903355;
        double r6903357 = 140.765625;
        double r6903358 = r6903354 * r6903350;
        double r6903359 = r6903358 * r6903350;
        double r6903360 = r6903357 * r6903359;
        double r6903361 = r6903356 + r6903360;
        double r6903362 = -201.09375;
        double r6903363 = r6903359 * r6903350;
        double r6903364 = r6903363 * r6903350;
        double r6903365 = r6903362 * r6903364;
        double r6903366 = r6903361 + r6903365;
        double r6903367 = 94.960938;
        double r6903368 = r6903364 * r6903350;
        double r6903369 = r6903368 * r6903350;
        double r6903370 = r6903367 * r6903369;
        double r6903371 = r6903366 + r6903370;
        return r6903371;
}


double f_of(float x) {
        float r6903372 = x;
        float r6903373 = r6903372 * r6903372;
        float r6903374 = 140.765625;
        float r6903375 = r6903372 * r6903374;
        float r6903376 = r6903373 * r6903375;
        float r6903377 = r6903373 * r6903376;
        float r6903378 = 2.460938;
        float r6903379 = r6903378 * r6903372;
        float r6903380 = -36.09375;
        float r6903381 = r6903380 * r6903372;
        float r6903382 = r6903381 * r6903373;
        float r6903383 = r6903379 + r6903382;
        float r6903384 = r6903377 + r6903383;
        float r6903385 = 3;
        float r6903386 = r6903385 + r6903385;
        float r6903387 = pow(r6903372, r6903386);
        float r6903388 = -201.09375;
        float r6903389 = 94.960938;
        float r6903390 = r6903389 * r6903372;
        float r6903391 = r6903372 * r6903390;
        float r6903392 = r6903388 + r6903391;
        float r6903393 = r6903372 * r6903392;
        float r6903394 = r6903387 * r6903393;
        float r6903395 = r6903384 + r6903394;
        return r6903395;
}

double f_od(double x) {
        double r6903396 = x;
        double r6903397 = r6903396 * r6903396;
        double r6903398 = 140.765625;
        double r6903399 = r6903396 * r6903398;
        double r6903400 = r6903397 * r6903399;
        double r6903401 = r6903397 * r6903400;
        double r6903402 = 2.460938;
        double r6903403 = r6903402 * r6903396;
        double r6903404 = -36.09375;
        double r6903405 = r6903404 * r6903396;
        double r6903406 = r6903405 * r6903397;
        double r6903407 = r6903403 + r6903406;
        double r6903408 = r6903401 + r6903407;
        double r6903409 = 3;
        double r6903410 = r6903409 + r6903409;
        double r6903411 = pow(r6903396, r6903410);
        double r6903412 = -201.09375;
        double r6903413 = 94.960938;
        double r6903414 = r6903413 * r6903396;
        double r6903415 = r6903396 * r6903414;
        double r6903416 = r6903412 + r6903415;
        double r6903417 = r6903396 * r6903416;
        double r6903418 = r6903411 * r6903417;
        double r6903419 = r6903408 + r6903418;
        return r6903419;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6903420, r6903421, r6903422, r6903423, r6903424, r6903425, r6903426, r6903427, r6903428, r6903429, r6903430, r6903431, r6903432, r6903433, r6903434, r6903435, r6903436, r6903437, r6903438, r6903439, r6903440, r6903441, r6903442;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6903420, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6903421);
        mpfr_init(r6903422);
        mpfr_init_set_str(r6903423, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6903424);
        mpfr_init(r6903425);
        mpfr_init(r6903426);
        mpfr_init(r6903427);
        mpfr_init_set_str(r6903428, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6903429);
        mpfr_init(r6903430);
        mpfr_init(r6903431);
        mpfr_init(r6903432);
        mpfr_init_set_str(r6903433, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6903434);
        mpfr_init(r6903435);
        mpfr_init(r6903436);
        mpfr_init(r6903437);
        mpfr_init_set_str(r6903438, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6903439);
        mpfr_init(r6903440);
        mpfr_init(r6903441);
        mpfr_init(r6903442);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6903421, x, MPFR_RNDN);
        mpfr_mul(r6903422, r6903420, r6903421, MPFR_RNDN);
        ;
        mpfr_mul(r6903424, r6903421, r6903421, MPFR_RNDN);
        mpfr_mul(r6903425, r6903424, r6903421, MPFR_RNDN);
        mpfr_mul(r6903426, r6903423, r6903425, MPFR_RNDN);
        mpfr_add(r6903427, r6903422, r6903426, MPFR_RNDN);
        ;
        mpfr_mul(r6903429, r6903425, r6903421, MPFR_RNDN);
        mpfr_mul(r6903430, r6903429, r6903421, MPFR_RNDN);
        mpfr_mul(r6903431, r6903428, r6903430, MPFR_RNDN);
        mpfr_add(r6903432, r6903427, r6903431, MPFR_RNDN);
        ;
        mpfr_mul(r6903434, r6903430, r6903421, MPFR_RNDN);
        mpfr_mul(r6903435, r6903434, r6903421, MPFR_RNDN);
        mpfr_mul(r6903436, r6903433, r6903435, MPFR_RNDN);
        mpfr_add(r6903437, r6903432, r6903436, MPFR_RNDN);
        ;
        mpfr_mul(r6903439, r6903435, r6903421, MPFR_RNDN);
        mpfr_mul(r6903440, r6903439, r6903421, MPFR_RNDN);
        mpfr_mul(r6903441, r6903438, r6903440, MPFR_RNDN);
        mpfr_add(r6903442, r6903437, r6903441, MPFR_RNDN);
        return mpfr_get_d(r6903442, MPFR_RNDN);
}

static mpfr_t r6903443, r6903444, r6903445, r6903446, r6903447, r6903448, r6903449, r6903450, r6903451, r6903452, r6903453, r6903454, r6903455, r6903456, r6903457, r6903458, r6903459, r6903460, r6903461, r6903462, r6903463, r6903464, r6903465, r6903466;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6903443);
        mpfr_init(r6903444);
        mpfr_init_set_str(r6903445, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6903446);
        mpfr_init(r6903447);
        mpfr_init(r6903448);
        mpfr_init_set_str(r6903449, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6903450);
        mpfr_init_set_str(r6903451, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6903452);
        mpfr_init(r6903453);
        mpfr_init(r6903454);
        mpfr_init(r6903455);
        mpfr_init_set_str(r6903456, "3", 10, MPFR_RNDN);
        mpfr_init(r6903457);
        mpfr_init(r6903458);
        mpfr_init_set_str(r6903459, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6903460, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6903461);
        mpfr_init(r6903462);
        mpfr_init(r6903463);
        mpfr_init(r6903464);
        mpfr_init(r6903465);
        mpfr_init(r6903466);
}

double f_fm(double x) {
        mpfr_set_d(r6903443, x, MPFR_RNDN);
        mpfr_mul(r6903444, r6903443, r6903443, MPFR_RNDN);
        ;
        mpfr_mul(r6903446, r6903443, r6903445, MPFR_RNDN);
        mpfr_mul(r6903447, r6903444, r6903446, MPFR_RNDN);
        mpfr_mul(r6903448, r6903444, r6903447, MPFR_RNDN);
        ;
        mpfr_mul(r6903450, r6903449, r6903443, MPFR_RNDN);
        ;
        mpfr_mul(r6903452, r6903451, r6903443, MPFR_RNDN);
        mpfr_mul(r6903453, r6903452, r6903444, MPFR_RNDN);
        mpfr_add(r6903454, r6903450, r6903453, MPFR_RNDN);
        mpfr_add(r6903455, r6903448, r6903454, MPFR_RNDN);
        ;
        mpfr_add(r6903457, r6903456, r6903456, MPFR_RNDN);
        mpfr_pow(r6903458, r6903443, r6903457, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6903461, r6903460, r6903443, MPFR_RNDN);
        mpfr_mul(r6903462, r6903443, r6903461, MPFR_RNDN);
        mpfr_add(r6903463, r6903459, r6903462, MPFR_RNDN);
        mpfr_mul(r6903464, r6903443, r6903463, MPFR_RNDN);
        mpfr_mul(r6903465, r6903458, r6903464, MPFR_RNDN);
        mpfr_add(r6903466, r6903455, r6903465, MPFR_RNDN);
        return mpfr_get_d(r6903466, MPFR_RNDN);
}

static mpfr_t r6903467, r6903468, r6903469, r6903470, r6903471, r6903472, r6903473, r6903474, r6903475, r6903476, r6903477, r6903478, r6903479, r6903480, r6903481, r6903482, r6903483, r6903484, r6903485, r6903486, r6903487, r6903488, r6903489, r6903490;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6903467);
        mpfr_init(r6903468);
        mpfr_init_set_str(r6903469, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6903470);
        mpfr_init(r6903471);
        mpfr_init(r6903472);
        mpfr_init_set_str(r6903473, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6903474);
        mpfr_init_set_str(r6903475, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6903476);
        mpfr_init(r6903477);
        mpfr_init(r6903478);
        mpfr_init(r6903479);
        mpfr_init_set_str(r6903480, "3", 10, MPFR_RNDN);
        mpfr_init(r6903481);
        mpfr_init(r6903482);
        mpfr_init_set_str(r6903483, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6903484, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6903485);
        mpfr_init(r6903486);
        mpfr_init(r6903487);
        mpfr_init(r6903488);
        mpfr_init(r6903489);
        mpfr_init(r6903490);
}

double f_dm(double x) {
        mpfr_set_d(r6903467, x, MPFR_RNDN);
        mpfr_mul(r6903468, r6903467, r6903467, MPFR_RNDN);
        ;
        mpfr_mul(r6903470, r6903467, r6903469, MPFR_RNDN);
        mpfr_mul(r6903471, r6903468, r6903470, MPFR_RNDN);
        mpfr_mul(r6903472, r6903468, r6903471, MPFR_RNDN);
        ;
        mpfr_mul(r6903474, r6903473, r6903467, MPFR_RNDN);
        ;
        mpfr_mul(r6903476, r6903475, r6903467, MPFR_RNDN);
        mpfr_mul(r6903477, r6903476, r6903468, MPFR_RNDN);
        mpfr_add(r6903478, r6903474, r6903477, MPFR_RNDN);
        mpfr_add(r6903479, r6903472, r6903478, MPFR_RNDN);
        ;
        mpfr_add(r6903481, r6903480, r6903480, MPFR_RNDN);
        mpfr_pow(r6903482, r6903467, r6903481, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6903485, r6903484, r6903467, MPFR_RNDN);
        mpfr_mul(r6903486, r6903467, r6903485, MPFR_RNDN);
        mpfr_add(r6903487, r6903483, r6903486, MPFR_RNDN);
        mpfr_mul(r6903488, r6903467, r6903487, MPFR_RNDN);
        mpfr_mul(r6903489, r6903482, r6903488, MPFR_RNDN);
        mpfr_add(r6903490, r6903479, r6903489, MPFR_RNDN);
        return mpfr_get_d(r6903490, MPFR_RNDN);
}

