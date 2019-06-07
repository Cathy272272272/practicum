#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r64037483 = 12.0;
        float r64037484 = -48.0;
        float r64037485 = x;
        float r64037486 = r64037485 * r64037485;
        float r64037487 = r64037484 * r64037486;
        float r64037488 = r64037483 + r64037487;
        float r64037489 = 16.0;
        float r64037490 = r64037486 * r64037485;
        float r64037491 = r64037490 * r64037485;
        float r64037492 = r64037489 * r64037491;
        float r64037493 = r64037488 + r64037492;
        return r64037493;
}

double f_id(double x) {
        double r64037494 = 12.0;
        double r64037495 = -48.0;
        double r64037496 = x;
        double r64037497 = r64037496 * r64037496;
        double r64037498 = r64037495 * r64037497;
        double r64037499 = r64037494 + r64037498;
        double r64037500 = 16.0;
        double r64037501 = r64037497 * r64037496;
        double r64037502 = r64037501 * r64037496;
        double r64037503 = r64037500 * r64037502;
        double r64037504 = r64037499 + r64037503;
        return r64037504;
}


double f_of(float x) {
        float r64037505 = x;
        float r64037506 = r64037505 * r64037505;
        float r64037507 = fabs(r64037506);
        float r64037508 = exp(r64037507);
        float r64037509 = 16.0;
        float r64037510 = r64037509 * r64037507;
        float r64037511 = pow(r64037508, r64037510);
        float r64037512 = 12.0;
        float r64037513 = exp(r64037512);
        float r64037514 = -48.0;
        float r64037515 = exp(r64037514);
        float r64037516 = pow(r64037515, r64037506);
        float r64037517 = r64037513 * r64037516;
        float r64037518 = r64037511 * r64037517;
        float r64037519 = log(r64037518);
        return r64037519;
}

double f_od(double x) {
        double r64037520 = x;
        double r64037521 = r64037520 * r64037520;
        double r64037522 = fabs(r64037521);
        double r64037523 = exp(r64037522);
        double r64037524 = 16.0;
        double r64037525 = r64037524 * r64037522;
        double r64037526 = pow(r64037523, r64037525);
        double r64037527 = 12.0;
        double r64037528 = exp(r64037527);
        double r64037529 = -48.0;
        double r64037530 = exp(r64037529);
        double r64037531 = pow(r64037530, r64037521);
        double r64037532 = r64037528 * r64037531;
        double r64037533 = r64037526 * r64037532;
        double r64037534 = log(r64037533);
        return r64037534;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64037535, r64037536, r64037537, r64037538, r64037539, r64037540, r64037541, r64037542, r64037543, r64037544, r64037545;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037535, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r64037536, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r64037537);
        mpfr_init(r64037538);
        mpfr_init(r64037539);
        mpfr_init(r64037540);
        mpfr_init_set_str(r64037541, "16.0", 10, MPFR_RNDN);
        mpfr_init(r64037542);
        mpfr_init(r64037543);
        mpfr_init(r64037544);
        mpfr_init(r64037545);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r64037537, x, MPFR_RNDN);
        mpfr_mul(r64037538, r64037537, r64037537, MPFR_RNDN);
        mpfr_mul(r64037539, r64037536, r64037538, MPFR_RNDN);
        mpfr_add(r64037540, r64037535, r64037539, MPFR_RNDN);
        ;
        mpfr_mul(r64037542, r64037538, r64037537, MPFR_RNDN);
        mpfr_mul(r64037543, r64037542, r64037537, MPFR_RNDN);
        mpfr_mul(r64037544, r64037541, r64037543, MPFR_RNDN);
        mpfr_add(r64037545, r64037540, r64037544, MPFR_RNDN);
        return mpfr_get_d(r64037545, MPFR_RNDN);
}

static mpfr_t r64037546, r64037547, r64037548, r64037549, r64037550, r64037551, r64037552, r64037553, r64037554, r64037555, r64037556, r64037557, r64037558, r64037559, r64037560;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r64037546);
        mpfr_init(r64037547);
        mpfr_init(r64037548);
        mpfr_init(r64037549);
        mpfr_init_set_str(r64037550, "16.0", 10, MPFR_RNDN);
        mpfr_init(r64037551);
        mpfr_init(r64037552);
        mpfr_init_set_str(r64037553, "12.0", 10, MPFR_RNDN);
        mpfr_init(r64037554);
        mpfr_init_set_str(r64037555, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r64037556);
        mpfr_init(r64037557);
        mpfr_init(r64037558);
        mpfr_init(r64037559);
        mpfr_init(r64037560);
}

double f_fm(double x) {
        mpfr_set_d(r64037546, x, MPFR_RNDN);
        mpfr_mul(r64037547, r64037546, r64037546, MPFR_RNDN);
        mpfr_abs(r64037548, r64037547, MPFR_RNDN);
        mpfr_exp(r64037549, r64037548, MPFR_RNDN);
        ;
        mpfr_mul(r64037551, r64037550, r64037548, MPFR_RNDN);
        mpfr_pow(r64037552, r64037549, r64037551, MPFR_RNDN);
        ;
        mpfr_exp(r64037554, r64037553, MPFR_RNDN);
        ;
        mpfr_exp(r64037556, r64037555, MPFR_RNDN);
        mpfr_pow(r64037557, r64037556, r64037547, MPFR_RNDN);
        mpfr_mul(r64037558, r64037554, r64037557, MPFR_RNDN);
        mpfr_mul(r64037559, r64037552, r64037558, MPFR_RNDN);
        mpfr_log(r64037560, r64037559, MPFR_RNDN);
        return mpfr_get_d(r64037560, MPFR_RNDN);
}

static mpfr_t r64037561, r64037562, r64037563, r64037564, r64037565, r64037566, r64037567, r64037568, r64037569, r64037570, r64037571, r64037572, r64037573, r64037574, r64037575;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r64037561);
        mpfr_init(r64037562);
        mpfr_init(r64037563);
        mpfr_init(r64037564);
        mpfr_init_set_str(r64037565, "16.0", 10, MPFR_RNDN);
        mpfr_init(r64037566);
        mpfr_init(r64037567);
        mpfr_init_set_str(r64037568, "12.0", 10, MPFR_RNDN);
        mpfr_init(r64037569);
        mpfr_init_set_str(r64037570, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r64037571);
        mpfr_init(r64037572);
        mpfr_init(r64037573);
        mpfr_init(r64037574);
        mpfr_init(r64037575);
}

double f_dm(double x) {
        mpfr_set_d(r64037561, x, MPFR_RNDN);
        mpfr_mul(r64037562, r64037561, r64037561, MPFR_RNDN);
        mpfr_abs(r64037563, r64037562, MPFR_RNDN);
        mpfr_exp(r64037564, r64037563, MPFR_RNDN);
        ;
        mpfr_mul(r64037566, r64037565, r64037563, MPFR_RNDN);
        mpfr_pow(r64037567, r64037564, r64037566, MPFR_RNDN);
        ;
        mpfr_exp(r64037569, r64037568, MPFR_RNDN);
        ;
        mpfr_exp(r64037571, r64037570, MPFR_RNDN);
        mpfr_pow(r64037572, r64037571, r64037562, MPFR_RNDN);
        mpfr_mul(r64037573, r64037569, r64037572, MPFR_RNDN);
        mpfr_mul(r64037574, r64037567, r64037573, MPFR_RNDN);
        mpfr_log(r64037575, r64037574, MPFR_RNDN);
        return mpfr_get_d(r64037575, MPFR_RNDN);
}

