#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r8953403 = -1680.0;
        float r8953404 = x;
        float r8953405 = r8953403 * r8953404;
        float r8953406 = 3360.0;
        float r8953407 = r8953404 * r8953404;
        float r8953408 = r8953407 * r8953404;
        float r8953409 = r8953406 * r8953408;
        float r8953410 = r8953405 + r8953409;
        float r8953411 = -1344.0;
        float r8953412 = r8953408 * r8953404;
        float r8953413 = r8953412 * r8953404;
        float r8953414 = r8953411 * r8953413;
        float r8953415 = r8953410 + r8953414;
        float r8953416 = 128.0;
        float r8953417 = r8953413 * r8953404;
        float r8953418 = r8953417 * r8953404;
        float r8953419 = r8953416 * r8953418;
        float r8953420 = r8953415 + r8953419;
        return r8953420;
}

double f_id(double x) {
        double r8953421 = -1680.0;
        double r8953422 = x;
        double r8953423 = r8953421 * r8953422;
        double r8953424 = 3360.0;
        double r8953425 = r8953422 * r8953422;
        double r8953426 = r8953425 * r8953422;
        double r8953427 = r8953424 * r8953426;
        double r8953428 = r8953423 + r8953427;
        double r8953429 = -1344.0;
        double r8953430 = r8953426 * r8953422;
        double r8953431 = r8953430 * r8953422;
        double r8953432 = r8953429 * r8953431;
        double r8953433 = r8953428 + r8953432;
        double r8953434 = 128.0;
        double r8953435 = r8953431 * r8953422;
        double r8953436 = r8953435 * r8953422;
        double r8953437 = r8953434 * r8953436;
        double r8953438 = r8953433 + r8953437;
        return r8953438;
}


double f_of(float x) {
        float r8953439 = x;
        float r8953440 = -1680.0;
        float r8953441 = 3360.0;
        float r8953442 = r8953441 * r8953439;
        float r8953443 = r8953442 * r8953439;
        float r8953444 = r8953440 + r8953443;
        float r8953445 = r8953439 * r8953444;
        float r8953446 = r8953439 * r8953439;
        float r8953447 = -1344.0;
        float r8953448 = r8953439 * r8953447;
        float r8953449 = r8953446 * r8953448;
        float r8953450 = 5;
        float r8953451 = pow(r8953439, r8953450);
        float r8953452 = 128.0;
        float r8953453 = r8953451 * r8953452;
        float r8953454 = r8953449 + r8953453;
        float r8953455 = r8953446 * r8953454;
        float r8953456 = cbrt(r8953455);
        float r8953457 = r8953456 * r8953456;
        float r8953458 = r8953457 * r8953456;
        float r8953459 = r8953445 + r8953458;
        return r8953459;
}

double f_od(double x) {
        double r8953460 = x;
        double r8953461 = -1680.0;
        double r8953462 = 3360.0;
        double r8953463 = r8953462 * r8953460;
        double r8953464 = r8953463 * r8953460;
        double r8953465 = r8953461 + r8953464;
        double r8953466 = r8953460 * r8953465;
        double r8953467 = r8953460 * r8953460;
        double r8953468 = -1344.0;
        double r8953469 = r8953460 * r8953468;
        double r8953470 = r8953467 * r8953469;
        double r8953471 = 5;
        double r8953472 = pow(r8953460, r8953471);
        double r8953473 = 128.0;
        double r8953474 = r8953472 * r8953473;
        double r8953475 = r8953470 + r8953474;
        double r8953476 = r8953467 * r8953475;
        double r8953477 = cbrt(r8953476);
        double r8953478 = r8953477 * r8953477;
        double r8953479 = r8953478 * r8953477;
        double r8953480 = r8953466 + r8953479;
        return r8953480;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8953481, r8953482, r8953483, r8953484, r8953485, r8953486, r8953487, r8953488, r8953489, r8953490, r8953491, r8953492, r8953493, r8953494, r8953495, r8953496, r8953497, r8953498;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8953481, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r8953482);
        mpfr_init(r8953483);
        mpfr_init_set_str(r8953484, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r8953485);
        mpfr_init(r8953486);
        mpfr_init(r8953487);
        mpfr_init(r8953488);
        mpfr_init_set_str(r8953489, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r8953490);
        mpfr_init(r8953491);
        mpfr_init(r8953492);
        mpfr_init(r8953493);
        mpfr_init_set_str(r8953494, "128.0", 10, MPFR_RNDN);
        mpfr_init(r8953495);
        mpfr_init(r8953496);
        mpfr_init(r8953497);
        mpfr_init(r8953498);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8953482, x, MPFR_RNDN);
        mpfr_mul(r8953483, r8953481, r8953482, MPFR_RNDN);
        ;
        mpfr_mul(r8953485, r8953482, r8953482, MPFR_RNDN);
        mpfr_mul(r8953486, r8953485, r8953482, MPFR_RNDN);
        mpfr_mul(r8953487, r8953484, r8953486, MPFR_RNDN);
        mpfr_add(r8953488, r8953483, r8953487, MPFR_RNDN);
        ;
        mpfr_mul(r8953490, r8953486, r8953482, MPFR_RNDN);
        mpfr_mul(r8953491, r8953490, r8953482, MPFR_RNDN);
        mpfr_mul(r8953492, r8953489, r8953491, MPFR_RNDN);
        mpfr_add(r8953493, r8953488, r8953492, MPFR_RNDN);
        ;
        mpfr_mul(r8953495, r8953491, r8953482, MPFR_RNDN);
        mpfr_mul(r8953496, r8953495, r8953482, MPFR_RNDN);
        mpfr_mul(r8953497, r8953494, r8953496, MPFR_RNDN);
        mpfr_add(r8953498, r8953493, r8953497, MPFR_RNDN);
        return mpfr_get_d(r8953498, MPFR_RNDN);
}

static mpfr_t r8953499, r8953500, r8953501, r8953502, r8953503, r8953504, r8953505, r8953506, r8953507, r8953508, r8953509, r8953510, r8953511, r8953512, r8953513, r8953514, r8953515, r8953516, r8953517, r8953518, r8953519;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r8953499);
        mpfr_init_set_str(r8953500, "-1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953501, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r8953502);
        mpfr_init(r8953503);
        mpfr_init(r8953504);
        mpfr_init(r8953505);
        mpfr_init(r8953506);
        mpfr_init_set_str(r8953507, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r8953508);
        mpfr_init(r8953509);
        mpfr_init_set_str(r8953510, "5", 10, MPFR_RNDN);
        mpfr_init(r8953511);
        mpfr_init_set_str(r8953512, "128.0", 10, MPFR_RNDN);
        mpfr_init(r8953513);
        mpfr_init(r8953514);
        mpfr_init(r8953515);
        mpfr_init(r8953516);
        mpfr_init(r8953517);
        mpfr_init(r8953518);
        mpfr_init(r8953519);
}

double f_fm(double x) {
        mpfr_set_d(r8953499, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8953502, r8953501, r8953499, MPFR_RNDN);
        mpfr_mul(r8953503, r8953502, r8953499, MPFR_RNDN);
        mpfr_add(r8953504, r8953500, r8953503, MPFR_RNDN);
        mpfr_mul(r8953505, r8953499, r8953504, MPFR_RNDN);
        mpfr_mul(r8953506, r8953499, r8953499, MPFR_RNDN);
        ;
        mpfr_mul(r8953508, r8953499, r8953507, MPFR_RNDN);
        mpfr_mul(r8953509, r8953506, r8953508, MPFR_RNDN);
        ;
        mpfr_pow(r8953511, r8953499, r8953510, MPFR_RNDN);
        ;
        mpfr_mul(r8953513, r8953511, r8953512, MPFR_RNDN);
        mpfr_add(r8953514, r8953509, r8953513, MPFR_RNDN);
        mpfr_mul(r8953515, r8953506, r8953514, MPFR_RNDN);
        mpfr_cbrt(r8953516, r8953515, MPFR_RNDN);
        mpfr_mul(r8953517, r8953516, r8953516, MPFR_RNDN);
        mpfr_mul(r8953518, r8953517, r8953516, MPFR_RNDN);
        mpfr_add(r8953519, r8953505, r8953518, MPFR_RNDN);
        return mpfr_get_d(r8953519, MPFR_RNDN);
}

static mpfr_t r8953520, r8953521, r8953522, r8953523, r8953524, r8953525, r8953526, r8953527, r8953528, r8953529, r8953530, r8953531, r8953532, r8953533, r8953534, r8953535, r8953536, r8953537, r8953538, r8953539, r8953540;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r8953520);
        mpfr_init_set_str(r8953521, "-1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953522, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r8953523);
        mpfr_init(r8953524);
        mpfr_init(r8953525);
        mpfr_init(r8953526);
        mpfr_init(r8953527);
        mpfr_init_set_str(r8953528, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r8953529);
        mpfr_init(r8953530);
        mpfr_init_set_str(r8953531, "5", 10, MPFR_RNDN);
        mpfr_init(r8953532);
        mpfr_init_set_str(r8953533, "128.0", 10, MPFR_RNDN);
        mpfr_init(r8953534);
        mpfr_init(r8953535);
        mpfr_init(r8953536);
        mpfr_init(r8953537);
        mpfr_init(r8953538);
        mpfr_init(r8953539);
        mpfr_init(r8953540);
}

double f_dm(double x) {
        mpfr_set_d(r8953520, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8953523, r8953522, r8953520, MPFR_RNDN);
        mpfr_mul(r8953524, r8953523, r8953520, MPFR_RNDN);
        mpfr_add(r8953525, r8953521, r8953524, MPFR_RNDN);
        mpfr_mul(r8953526, r8953520, r8953525, MPFR_RNDN);
        mpfr_mul(r8953527, r8953520, r8953520, MPFR_RNDN);
        ;
        mpfr_mul(r8953529, r8953520, r8953528, MPFR_RNDN);
        mpfr_mul(r8953530, r8953527, r8953529, MPFR_RNDN);
        ;
        mpfr_pow(r8953532, r8953520, r8953531, MPFR_RNDN);
        ;
        mpfr_mul(r8953534, r8953532, r8953533, MPFR_RNDN);
        mpfr_add(r8953535, r8953530, r8953534, MPFR_RNDN);
        mpfr_mul(r8953536, r8953527, r8953535, MPFR_RNDN);
        mpfr_cbrt(r8953537, r8953536, MPFR_RNDN);
        mpfr_mul(r8953538, r8953537, r8953537, MPFR_RNDN);
        mpfr_mul(r8953539, r8953538, r8953537, MPFR_RNDN);
        mpfr_add(r8953540, r8953526, r8953539, MPFR_RNDN);
        return mpfr_get_d(r8953540, MPFR_RNDN);
}

