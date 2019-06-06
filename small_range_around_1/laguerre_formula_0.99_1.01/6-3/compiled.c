#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r83191452 = 1.0;
        float r83191453 = -3.0;
        float r83191454 = x;
        float r83191455 = r83191453 * r83191454;
        float r83191456 = r83191452 + r83191455;
        float r83191457 = 1.5;
        float r83191458 = r83191454 * r83191454;
        float r83191459 = r83191457 * r83191458;
        float r83191460 = r83191456 + r83191459;
        float r83191461 = -0.166667;
        float r83191462 = r83191458 * r83191454;
        float r83191463 = r83191461 * r83191462;
        float r83191464 = r83191460 + r83191463;
        return r83191464;
}

double f_id(double x) {
        double r83191465 = 1.0;
        double r83191466 = -3.0;
        double r83191467 = x;
        double r83191468 = r83191466 * r83191467;
        double r83191469 = r83191465 + r83191468;
        double r83191470 = 1.5;
        double r83191471 = r83191467 * r83191467;
        double r83191472 = r83191470 * r83191471;
        double r83191473 = r83191469 + r83191472;
        double r83191474 = -0.166667;
        double r83191475 = r83191471 * r83191467;
        double r83191476 = r83191474 * r83191475;
        double r83191477 = r83191473 + r83191476;
        return r83191477;
}


double f_of(float x) {
        float r83191478 = 1.0;
        float r83191479 = -3.0;
        float r83191480 = 1.5;
        float r83191481 = x;
        float r83191482 = r83191480 * r83191481;
        float r83191483 = r83191479 + r83191482;
        float r83191484 = r83191483 * r83191481;
        float r83191485 = r83191478 + r83191484;
        float r83191486 = -0.166667;
        float r83191487 = r83191481 * r83191481;
        float r83191488 = exp(r83191487);
        float r83191489 = r83191481 + r83191481;
        float r83191490 = r83191489 + r83191481;
        float r83191491 = pow(r83191488, r83191490);
        float r83191492 = cbrt(r83191491);
        float r83191493 = log(r83191492);
        float r83191494 = r83191486 * r83191493;
        float r83191495 = r83191485 + r83191494;
        return r83191495;
}

double f_od(double x) {
        double r83191496 = 1.0;
        double r83191497 = -3.0;
        double r83191498 = 1.5;
        double r83191499 = x;
        double r83191500 = r83191498 * r83191499;
        double r83191501 = r83191497 + r83191500;
        double r83191502 = r83191501 * r83191499;
        double r83191503 = r83191496 + r83191502;
        double r83191504 = -0.166667;
        double r83191505 = r83191499 * r83191499;
        double r83191506 = exp(r83191505);
        double r83191507 = r83191499 + r83191499;
        double r83191508 = r83191507 + r83191499;
        double r83191509 = pow(r83191506, r83191508);
        double r83191510 = cbrt(r83191509);
        double r83191511 = log(r83191510);
        double r83191512 = r83191504 * r83191511;
        double r83191513 = r83191503 + r83191512;
        return r83191513;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83191514, r83191515, r83191516, r83191517, r83191518, r83191519, r83191520, r83191521, r83191522, r83191523, r83191524, r83191525, r83191526;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191514, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191515, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r83191516);
        mpfr_init(r83191517);
        mpfr_init(r83191518);
        mpfr_init_set_str(r83191519, "1.5", 10, MPFR_RNDN);
        mpfr_init(r83191520);
        mpfr_init(r83191521);
        mpfr_init(r83191522);
        mpfr_init_set_str(r83191523, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r83191524);
        mpfr_init(r83191525);
        mpfr_init(r83191526);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83191516, x, MPFR_RNDN);
        mpfr_mul(r83191517, r83191515, r83191516, MPFR_RNDN);
        mpfr_add(r83191518, r83191514, r83191517, MPFR_RNDN);
        ;
        mpfr_mul(r83191520, r83191516, r83191516, MPFR_RNDN);
        mpfr_mul(r83191521, r83191519, r83191520, MPFR_RNDN);
        mpfr_add(r83191522, r83191518, r83191521, MPFR_RNDN);
        ;
        mpfr_mul(r83191524, r83191520, r83191516, MPFR_RNDN);
        mpfr_mul(r83191525, r83191523, r83191524, MPFR_RNDN);
        mpfr_add(r83191526, r83191522, r83191525, MPFR_RNDN);
        return mpfr_get_d(r83191526, MPFR_RNDN);
}

static mpfr_t r83191527, r83191528, r83191529, r83191530, r83191531, r83191532, r83191533, r83191534, r83191535, r83191536, r83191537, r83191538, r83191539, r83191540, r83191541, r83191542, r83191543, r83191544;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191527, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191528, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191529, "1.5", 10, MPFR_RNDN);
        mpfr_init(r83191530);
        mpfr_init(r83191531);
        mpfr_init(r83191532);
        mpfr_init(r83191533);
        mpfr_init(r83191534);
        mpfr_init_set_str(r83191535, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r83191536);
        mpfr_init(r83191537);
        mpfr_init(r83191538);
        mpfr_init(r83191539);
        mpfr_init(r83191540);
        mpfr_init(r83191541);
        mpfr_init(r83191542);
        mpfr_init(r83191543);
        mpfr_init(r83191544);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r83191530, x, MPFR_RNDN);
        mpfr_mul(r83191531, r83191529, r83191530, MPFR_RNDN);
        mpfr_add(r83191532, r83191528, r83191531, MPFR_RNDN);
        mpfr_mul(r83191533, r83191532, r83191530, MPFR_RNDN);
        mpfr_add(r83191534, r83191527, r83191533, MPFR_RNDN);
        ;
        mpfr_mul(r83191536, r83191530, r83191530, MPFR_RNDN);
        mpfr_exp(r83191537, r83191536, MPFR_RNDN);
        mpfr_add(r83191538, r83191530, r83191530, MPFR_RNDN);
        mpfr_add(r83191539, r83191538, r83191530, MPFR_RNDN);
        mpfr_pow(r83191540, r83191537, r83191539, MPFR_RNDN);
        mpfr_cbrt(r83191541, r83191540, MPFR_RNDN);
        mpfr_log(r83191542, r83191541, MPFR_RNDN);
        mpfr_mul(r83191543, r83191535, r83191542, MPFR_RNDN);
        mpfr_add(r83191544, r83191534, r83191543, MPFR_RNDN);
        return mpfr_get_d(r83191544, MPFR_RNDN);
}

static mpfr_t r83191545, r83191546, r83191547, r83191548, r83191549, r83191550, r83191551, r83191552, r83191553, r83191554, r83191555, r83191556, r83191557, r83191558, r83191559, r83191560, r83191561, r83191562;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191545, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191546, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191547, "1.5", 10, MPFR_RNDN);
        mpfr_init(r83191548);
        mpfr_init(r83191549);
        mpfr_init(r83191550);
        mpfr_init(r83191551);
        mpfr_init(r83191552);
        mpfr_init_set_str(r83191553, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r83191554);
        mpfr_init(r83191555);
        mpfr_init(r83191556);
        mpfr_init(r83191557);
        mpfr_init(r83191558);
        mpfr_init(r83191559);
        mpfr_init(r83191560);
        mpfr_init(r83191561);
        mpfr_init(r83191562);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r83191548, x, MPFR_RNDN);
        mpfr_mul(r83191549, r83191547, r83191548, MPFR_RNDN);
        mpfr_add(r83191550, r83191546, r83191549, MPFR_RNDN);
        mpfr_mul(r83191551, r83191550, r83191548, MPFR_RNDN);
        mpfr_add(r83191552, r83191545, r83191551, MPFR_RNDN);
        ;
        mpfr_mul(r83191554, r83191548, r83191548, MPFR_RNDN);
        mpfr_exp(r83191555, r83191554, MPFR_RNDN);
        mpfr_add(r83191556, r83191548, r83191548, MPFR_RNDN);
        mpfr_add(r83191557, r83191556, r83191548, MPFR_RNDN);
        mpfr_pow(r83191558, r83191555, r83191557, MPFR_RNDN);
        mpfr_cbrt(r83191559, r83191558, MPFR_RNDN);
        mpfr_log(r83191560, r83191559, MPFR_RNDN);
        mpfr_mul(r83191561, r83191553, r83191560, MPFR_RNDN);
        mpfr_add(r83191562, r83191552, r83191561, MPFR_RNDN);
        return mpfr_get_d(r83191562, MPFR_RNDN);
}

