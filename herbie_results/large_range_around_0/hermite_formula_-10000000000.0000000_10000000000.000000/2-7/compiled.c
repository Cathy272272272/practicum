#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r9402398 = -1680.0;
        float r9402399 = x;
        float r9402400 = r9402398 * r9402399;
        float r9402401 = 3360.0;
        float r9402402 = r9402399 * r9402399;
        float r9402403 = r9402402 * r9402399;
        float r9402404 = r9402401 * r9402403;
        float r9402405 = r9402400 + r9402404;
        float r9402406 = -1344.0;
        float r9402407 = r9402403 * r9402399;
        float r9402408 = r9402407 * r9402399;
        float r9402409 = r9402406 * r9402408;
        float r9402410 = r9402405 + r9402409;
        float r9402411 = 128.0;
        float r9402412 = r9402408 * r9402399;
        float r9402413 = r9402412 * r9402399;
        float r9402414 = r9402411 * r9402413;
        float r9402415 = r9402410 + r9402414;
        return r9402415;
}

double f_id(double x) {
        double r9402416 = -1680.0;
        double r9402417 = x;
        double r9402418 = r9402416 * r9402417;
        double r9402419 = 3360.0;
        double r9402420 = r9402417 * r9402417;
        double r9402421 = r9402420 * r9402417;
        double r9402422 = r9402419 * r9402421;
        double r9402423 = r9402418 + r9402422;
        double r9402424 = -1344.0;
        double r9402425 = r9402421 * r9402417;
        double r9402426 = r9402425 * r9402417;
        double r9402427 = r9402424 * r9402426;
        double r9402428 = r9402423 + r9402427;
        double r9402429 = 128.0;
        double r9402430 = r9402426 * r9402417;
        double r9402431 = r9402430 * r9402417;
        double r9402432 = r9402429 * r9402431;
        double r9402433 = r9402428 + r9402432;
        return r9402433;
}


double f_of(float x) {
        float r9402434 = -1680.0;
        float r9402435 = x;
        float r9402436 = r9402434 * r9402435;
        float r9402437 = 3360.0;
        float r9402438 = r9402435 * r9402435;
        float r9402439 = r9402438 * r9402435;
        float r9402440 = r9402437 * r9402439;
        float r9402441 = r9402436 + r9402440;
        float r9402442 = -1344.0;
        float r9402443 = r9402439 * r9402435;
        float r9402444 = r9402443 * r9402435;
        float r9402445 = r9402442 * r9402444;
        float r9402446 = r9402441 + r9402445;
        float r9402447 = 128.0;
        float r9402448 = r9402444 * r9402435;
        float r9402449 = r9402448 * r9402435;
        float r9402450 = r9402447 * r9402449;
        float r9402451 = r9402446 + r9402450;
        return r9402451;
}

double f_od(double x) {
        double r9402452 = -1680.0;
        double r9402453 = x;
        double r9402454 = r9402452 * r9402453;
        double r9402455 = 3360.0;
        double r9402456 = r9402453 * r9402453;
        double r9402457 = r9402456 * r9402453;
        double r9402458 = r9402455 * r9402457;
        double r9402459 = r9402454 + r9402458;
        double r9402460 = -1344.0;
        double r9402461 = r9402457 * r9402453;
        double r9402462 = r9402461 * r9402453;
        double r9402463 = r9402460 * r9402462;
        double r9402464 = r9402459 + r9402463;
        double r9402465 = 128.0;
        double r9402466 = r9402462 * r9402453;
        double r9402467 = r9402466 * r9402453;
        double r9402468 = r9402465 * r9402467;
        double r9402469 = r9402464 + r9402468;
        return r9402469;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9402470, r9402471, r9402472, r9402473, r9402474, r9402475, r9402476, r9402477, r9402478, r9402479, r9402480, r9402481, r9402482, r9402483, r9402484, r9402485, r9402486, r9402487;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402470, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9402471);
        mpfr_init(r9402472);
        mpfr_init_set_str(r9402473, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9402474);
        mpfr_init(r9402475);
        mpfr_init(r9402476);
        mpfr_init(r9402477);
        mpfr_init_set_str(r9402478, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9402479);
        mpfr_init(r9402480);
        mpfr_init(r9402481);
        mpfr_init(r9402482);
        mpfr_init_set_str(r9402483, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9402484);
        mpfr_init(r9402485);
        mpfr_init(r9402486);
        mpfr_init(r9402487);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9402471, x, MPFR_RNDN);
        mpfr_mul(r9402472, r9402470, r9402471, MPFR_RNDN);
        ;
        mpfr_mul(r9402474, r9402471, r9402471, MPFR_RNDN);
        mpfr_mul(r9402475, r9402474, r9402471, MPFR_RNDN);
        mpfr_mul(r9402476, r9402473, r9402475, MPFR_RNDN);
        mpfr_add(r9402477, r9402472, r9402476, MPFR_RNDN);
        ;
        mpfr_mul(r9402479, r9402475, r9402471, MPFR_RNDN);
        mpfr_mul(r9402480, r9402479, r9402471, MPFR_RNDN);
        mpfr_mul(r9402481, r9402478, r9402480, MPFR_RNDN);
        mpfr_add(r9402482, r9402477, r9402481, MPFR_RNDN);
        ;
        mpfr_mul(r9402484, r9402480, r9402471, MPFR_RNDN);
        mpfr_mul(r9402485, r9402484, r9402471, MPFR_RNDN);
        mpfr_mul(r9402486, r9402483, r9402485, MPFR_RNDN);
        mpfr_add(r9402487, r9402482, r9402486, MPFR_RNDN);
        return mpfr_get_d(r9402487, MPFR_RNDN);
}

static mpfr_t r9402488, r9402489, r9402490, r9402491, r9402492, r9402493, r9402494, r9402495, r9402496, r9402497, r9402498, r9402499, r9402500, r9402501, r9402502, r9402503, r9402504, r9402505;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402488, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9402489);
        mpfr_init(r9402490);
        mpfr_init_set_str(r9402491, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9402492);
        mpfr_init(r9402493);
        mpfr_init(r9402494);
        mpfr_init(r9402495);
        mpfr_init_set_str(r9402496, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9402497);
        mpfr_init(r9402498);
        mpfr_init(r9402499);
        mpfr_init(r9402500);
        mpfr_init_set_str(r9402501, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9402502);
        mpfr_init(r9402503);
        mpfr_init(r9402504);
        mpfr_init(r9402505);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9402489, x, MPFR_RNDN);
        mpfr_mul(r9402490, r9402488, r9402489, MPFR_RNDN);
        ;
        mpfr_mul(r9402492, r9402489, r9402489, MPFR_RNDN);
        mpfr_mul(r9402493, r9402492, r9402489, MPFR_RNDN);
        mpfr_mul(r9402494, r9402491, r9402493, MPFR_RNDN);
        mpfr_add(r9402495, r9402490, r9402494, MPFR_RNDN);
        ;
        mpfr_mul(r9402497, r9402493, r9402489, MPFR_RNDN);
        mpfr_mul(r9402498, r9402497, r9402489, MPFR_RNDN);
        mpfr_mul(r9402499, r9402496, r9402498, MPFR_RNDN);
        mpfr_add(r9402500, r9402495, r9402499, MPFR_RNDN);
        ;
        mpfr_mul(r9402502, r9402498, r9402489, MPFR_RNDN);
        mpfr_mul(r9402503, r9402502, r9402489, MPFR_RNDN);
        mpfr_mul(r9402504, r9402501, r9402503, MPFR_RNDN);
        mpfr_add(r9402505, r9402500, r9402504, MPFR_RNDN);
        return mpfr_get_d(r9402505, MPFR_RNDN);
}

static mpfr_t r9402506, r9402507, r9402508, r9402509, r9402510, r9402511, r9402512, r9402513, r9402514, r9402515, r9402516, r9402517, r9402518, r9402519, r9402520, r9402521, r9402522, r9402523;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402506, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9402507);
        mpfr_init(r9402508);
        mpfr_init_set_str(r9402509, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9402510);
        mpfr_init(r9402511);
        mpfr_init(r9402512);
        mpfr_init(r9402513);
        mpfr_init_set_str(r9402514, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9402515);
        mpfr_init(r9402516);
        mpfr_init(r9402517);
        mpfr_init(r9402518);
        mpfr_init_set_str(r9402519, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9402520);
        mpfr_init(r9402521);
        mpfr_init(r9402522);
        mpfr_init(r9402523);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9402507, x, MPFR_RNDN);
        mpfr_mul(r9402508, r9402506, r9402507, MPFR_RNDN);
        ;
        mpfr_mul(r9402510, r9402507, r9402507, MPFR_RNDN);
        mpfr_mul(r9402511, r9402510, r9402507, MPFR_RNDN);
        mpfr_mul(r9402512, r9402509, r9402511, MPFR_RNDN);
        mpfr_add(r9402513, r9402508, r9402512, MPFR_RNDN);
        ;
        mpfr_mul(r9402515, r9402511, r9402507, MPFR_RNDN);
        mpfr_mul(r9402516, r9402515, r9402507, MPFR_RNDN);
        mpfr_mul(r9402517, r9402514, r9402516, MPFR_RNDN);
        mpfr_add(r9402518, r9402513, r9402517, MPFR_RNDN);
        ;
        mpfr_mul(r9402520, r9402516, r9402507, MPFR_RNDN);
        mpfr_mul(r9402521, r9402520, r9402507, MPFR_RNDN);
        mpfr_mul(r9402522, r9402519, r9402521, MPFR_RNDN);
        mpfr_add(r9402523, r9402518, r9402522, MPFR_RNDN);
        return mpfr_get_d(r9402523, MPFR_RNDN);
}

