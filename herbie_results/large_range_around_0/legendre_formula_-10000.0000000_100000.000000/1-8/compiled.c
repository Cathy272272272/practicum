#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7402350 = 0.273438;
        float r7402351 = -9.84375;
        float r7402352 = x;
        float r7402353 = r7402352 * r7402352;
        float r7402354 = r7402351 * r7402353;
        float r7402355 = r7402350 + r7402354;
        float r7402356 = 54.140625;
        float r7402357 = r7402353 * r7402352;
        float r7402358 = r7402357 * r7402352;
        float r7402359 = r7402356 * r7402358;
        float r7402360 = r7402355 + r7402359;
        float r7402361 = -93.84375;
        float r7402362 = r7402358 * r7402352;
        float r7402363 = r7402362 * r7402352;
        float r7402364 = r7402361 * r7402363;
        float r7402365 = r7402360 + r7402364;
        float r7402366 = 50.273438;
        float r7402367 = r7402363 * r7402352;
        float r7402368 = r7402367 * r7402352;
        float r7402369 = r7402366 * r7402368;
        float r7402370 = r7402365 + r7402369;
        return r7402370;
}

double f_id(double x) {
        double r7402371 = 0.273438;
        double r7402372 = -9.84375;
        double r7402373 = x;
        double r7402374 = r7402373 * r7402373;
        double r7402375 = r7402372 * r7402374;
        double r7402376 = r7402371 + r7402375;
        double r7402377 = 54.140625;
        double r7402378 = r7402374 * r7402373;
        double r7402379 = r7402378 * r7402373;
        double r7402380 = r7402377 * r7402379;
        double r7402381 = r7402376 + r7402380;
        double r7402382 = -93.84375;
        double r7402383 = r7402379 * r7402373;
        double r7402384 = r7402383 * r7402373;
        double r7402385 = r7402382 * r7402384;
        double r7402386 = r7402381 + r7402385;
        double r7402387 = 50.273438;
        double r7402388 = r7402384 * r7402373;
        double r7402389 = r7402388 * r7402373;
        double r7402390 = r7402387 * r7402389;
        double r7402391 = r7402386 + r7402390;
        return r7402391;
}


double f_of(float x) {
        float r7402392 = 0.273438;
        float r7402393 = -9.84375;
        float r7402394 = x;
        float r7402395 = r7402394 * r7402394;
        float r7402396 = r7402393 * r7402395;
        float r7402397 = r7402392 + r7402396;
        float r7402398 = 54.140625;
        float r7402399 = r7402395 * r7402394;
        float r7402400 = r7402399 * r7402394;
        float r7402401 = r7402398 * r7402400;
        float r7402402 = r7402397 + r7402401;
        float r7402403 = -93.84375;
        float r7402404 = r7402400 * r7402394;
        float r7402405 = r7402404 * r7402394;
        float r7402406 = r7402403 * r7402405;
        float r7402407 = r7402402 + r7402406;
        float r7402408 = 50.273438;
        float r7402409 = r7402405 * r7402394;
        float r7402410 = r7402409 * r7402394;
        float r7402411 = r7402408 * r7402410;
        float r7402412 = r7402407 + r7402411;
        return r7402412;
}

double f_od(double x) {
        double r7402413 = 0.273438;
        double r7402414 = -9.84375;
        double r7402415 = x;
        double r7402416 = r7402415 * r7402415;
        double r7402417 = r7402414 * r7402416;
        double r7402418 = r7402413 + r7402417;
        double r7402419 = 54.140625;
        double r7402420 = r7402416 * r7402415;
        double r7402421 = r7402420 * r7402415;
        double r7402422 = r7402419 * r7402421;
        double r7402423 = r7402418 + r7402422;
        double r7402424 = -93.84375;
        double r7402425 = r7402421 * r7402415;
        double r7402426 = r7402425 * r7402415;
        double r7402427 = r7402424 * r7402426;
        double r7402428 = r7402423 + r7402427;
        double r7402429 = 50.273438;
        double r7402430 = r7402426 * r7402415;
        double r7402431 = r7402430 * r7402415;
        double r7402432 = r7402429 * r7402431;
        double r7402433 = r7402428 + r7402432;
        return r7402433;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7402434, r7402435, r7402436, r7402437, r7402438, r7402439, r7402440, r7402441, r7402442, r7402443, r7402444, r7402445, r7402446, r7402447, r7402448, r7402449, r7402450, r7402451, r7402452, r7402453, r7402454;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7402434, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402435, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7402436);
        mpfr_init(r7402437);
        mpfr_init(r7402438);
        mpfr_init(r7402439);
        mpfr_init_set_str(r7402440, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7402441);
        mpfr_init(r7402442);
        mpfr_init(r7402443);
        mpfr_init(r7402444);
        mpfr_init_set_str(r7402445, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r7402446);
        mpfr_init(r7402447);
        mpfr_init(r7402448);
        mpfr_init(r7402449);
        mpfr_init_set_str(r7402450, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7402451);
        mpfr_init(r7402452);
        mpfr_init(r7402453);
        mpfr_init(r7402454);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7402436, x, MPFR_RNDN);
        mpfr_mul(r7402437, r7402436, r7402436, MPFR_RNDN);
        mpfr_mul(r7402438, r7402435, r7402437, MPFR_RNDN);
        mpfr_add(r7402439, r7402434, r7402438, MPFR_RNDN);
        ;
        mpfr_mul(r7402441, r7402437, r7402436, MPFR_RNDN);
        mpfr_mul(r7402442, r7402441, r7402436, MPFR_RNDN);
        mpfr_mul(r7402443, r7402440, r7402442, MPFR_RNDN);
        mpfr_add(r7402444, r7402439, r7402443, MPFR_RNDN);
        ;
        mpfr_mul(r7402446, r7402442, r7402436, MPFR_RNDN);
        mpfr_mul(r7402447, r7402446, r7402436, MPFR_RNDN);
        mpfr_mul(r7402448, r7402445, r7402447, MPFR_RNDN);
        mpfr_add(r7402449, r7402444, r7402448, MPFR_RNDN);
        ;
        mpfr_mul(r7402451, r7402447, r7402436, MPFR_RNDN);
        mpfr_mul(r7402452, r7402451, r7402436, MPFR_RNDN);
        mpfr_mul(r7402453, r7402450, r7402452, MPFR_RNDN);
        mpfr_add(r7402454, r7402449, r7402453, MPFR_RNDN);
        return mpfr_get_d(r7402454, MPFR_RNDN);
}

static mpfr_t r7402455, r7402456, r7402457, r7402458, r7402459, r7402460, r7402461, r7402462, r7402463, r7402464, r7402465, r7402466, r7402467, r7402468, r7402469, r7402470, r7402471, r7402472, r7402473, r7402474, r7402475;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7402455, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402456, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7402457);
        mpfr_init(r7402458);
        mpfr_init(r7402459);
        mpfr_init(r7402460);
        mpfr_init_set_str(r7402461, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7402462);
        mpfr_init(r7402463);
        mpfr_init(r7402464);
        mpfr_init(r7402465);
        mpfr_init_set_str(r7402466, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r7402467);
        mpfr_init(r7402468);
        mpfr_init(r7402469);
        mpfr_init(r7402470);
        mpfr_init_set_str(r7402471, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7402472);
        mpfr_init(r7402473);
        mpfr_init(r7402474);
        mpfr_init(r7402475);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7402457, x, MPFR_RNDN);
        mpfr_mul(r7402458, r7402457, r7402457, MPFR_RNDN);
        mpfr_mul(r7402459, r7402456, r7402458, MPFR_RNDN);
        mpfr_add(r7402460, r7402455, r7402459, MPFR_RNDN);
        ;
        mpfr_mul(r7402462, r7402458, r7402457, MPFR_RNDN);
        mpfr_mul(r7402463, r7402462, r7402457, MPFR_RNDN);
        mpfr_mul(r7402464, r7402461, r7402463, MPFR_RNDN);
        mpfr_add(r7402465, r7402460, r7402464, MPFR_RNDN);
        ;
        mpfr_mul(r7402467, r7402463, r7402457, MPFR_RNDN);
        mpfr_mul(r7402468, r7402467, r7402457, MPFR_RNDN);
        mpfr_mul(r7402469, r7402466, r7402468, MPFR_RNDN);
        mpfr_add(r7402470, r7402465, r7402469, MPFR_RNDN);
        ;
        mpfr_mul(r7402472, r7402468, r7402457, MPFR_RNDN);
        mpfr_mul(r7402473, r7402472, r7402457, MPFR_RNDN);
        mpfr_mul(r7402474, r7402471, r7402473, MPFR_RNDN);
        mpfr_add(r7402475, r7402470, r7402474, MPFR_RNDN);
        return mpfr_get_d(r7402475, MPFR_RNDN);
}

static mpfr_t r7402476, r7402477, r7402478, r7402479, r7402480, r7402481, r7402482, r7402483, r7402484, r7402485, r7402486, r7402487, r7402488, r7402489, r7402490, r7402491, r7402492, r7402493, r7402494, r7402495, r7402496;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7402476, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402477, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7402478);
        mpfr_init(r7402479);
        mpfr_init(r7402480);
        mpfr_init(r7402481);
        mpfr_init_set_str(r7402482, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7402483);
        mpfr_init(r7402484);
        mpfr_init(r7402485);
        mpfr_init(r7402486);
        mpfr_init_set_str(r7402487, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r7402488);
        mpfr_init(r7402489);
        mpfr_init(r7402490);
        mpfr_init(r7402491);
        mpfr_init_set_str(r7402492, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7402493);
        mpfr_init(r7402494);
        mpfr_init(r7402495);
        mpfr_init(r7402496);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7402478, x, MPFR_RNDN);
        mpfr_mul(r7402479, r7402478, r7402478, MPFR_RNDN);
        mpfr_mul(r7402480, r7402477, r7402479, MPFR_RNDN);
        mpfr_add(r7402481, r7402476, r7402480, MPFR_RNDN);
        ;
        mpfr_mul(r7402483, r7402479, r7402478, MPFR_RNDN);
        mpfr_mul(r7402484, r7402483, r7402478, MPFR_RNDN);
        mpfr_mul(r7402485, r7402482, r7402484, MPFR_RNDN);
        mpfr_add(r7402486, r7402481, r7402485, MPFR_RNDN);
        ;
        mpfr_mul(r7402488, r7402484, r7402478, MPFR_RNDN);
        mpfr_mul(r7402489, r7402488, r7402478, MPFR_RNDN);
        mpfr_mul(r7402490, r7402487, r7402489, MPFR_RNDN);
        mpfr_add(r7402491, r7402486, r7402490, MPFR_RNDN);
        ;
        mpfr_mul(r7402493, r7402489, r7402478, MPFR_RNDN);
        mpfr_mul(r7402494, r7402493, r7402478, MPFR_RNDN);
        mpfr_mul(r7402495, r7402492, r7402494, MPFR_RNDN);
        mpfr_add(r7402496, r7402491, r7402495, MPFR_RNDN);
        return mpfr_get_d(r7402496, MPFR_RNDN);
}

