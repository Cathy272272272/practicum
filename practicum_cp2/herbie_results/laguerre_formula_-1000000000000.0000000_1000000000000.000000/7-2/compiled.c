#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r9582471 = 1.0;
        float r9582472 = -2.0;
        float r9582473 = x;
        float r9582474 = r9582472 * r9582473;
        float r9582475 = r9582471 + r9582474;
        float r9582476 = 0.5;
        float r9582477 = r9582473 * r9582473;
        float r9582478 = r9582476 * r9582477;
        float r9582479 = r9582475 + r9582478;
        return r9582479;
}

double f_id(double x) {
        double r9582480 = 1.0;
        double r9582481 = -2.0;
        double r9582482 = x;
        double r9582483 = r9582481 * r9582482;
        double r9582484 = r9582480 + r9582483;
        double r9582485 = 0.5;
        double r9582486 = r9582482 * r9582482;
        double r9582487 = r9582485 * r9582486;
        double r9582488 = r9582484 + r9582487;
        return r9582488;
}


double f_of(float x) {
        float r9582489 = 1.0;
        float r9582490 = -2.0;
        float r9582491 = 0.5;
        float r9582492 = x;
        float r9582493 = r9582491 * r9582492;
        float r9582494 = r9582490 + r9582493;
        float r9582495 = r9582494 * r9582492;
        float r9582496 = r9582489 + r9582495;
        return r9582496;
}

double f_od(double x) {
        double r9582497 = 1.0;
        double r9582498 = -2.0;
        double r9582499 = 0.5;
        double r9582500 = x;
        double r9582501 = r9582499 * r9582500;
        double r9582502 = r9582498 + r9582501;
        double r9582503 = r9582502 * r9582500;
        double r9582504 = r9582497 + r9582503;
        return r9582504;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9582505, r9582506, r9582507, r9582508, r9582509, r9582510, r9582511, r9582512, r9582513;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9582505, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582506, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r9582507);
        mpfr_init(r9582508);
        mpfr_init(r9582509);
        mpfr_init_set_str(r9582510, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9582511);
        mpfr_init(r9582512);
        mpfr_init(r9582513);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9582507, x, MPFR_RNDN);
        mpfr_mul(r9582508, r9582506, r9582507, MPFR_RNDN);
        mpfr_add(r9582509, r9582505, r9582508, MPFR_RNDN);
        ;
        mpfr_mul(r9582511, r9582507, r9582507, MPFR_RNDN);
        mpfr_mul(r9582512, r9582510, r9582511, MPFR_RNDN);
        mpfr_add(r9582513, r9582509, r9582512, MPFR_RNDN);
        return mpfr_get_d(r9582513, MPFR_RNDN);
}

static mpfr_t r9582514, r9582515, r9582516, r9582517, r9582518, r9582519, r9582520, r9582521;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9582514, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582515, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582516, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9582517);
        mpfr_init(r9582518);
        mpfr_init(r9582519);
        mpfr_init(r9582520);
        mpfr_init(r9582521);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r9582517, x, MPFR_RNDN);
        mpfr_mul(r9582518, r9582516, r9582517, MPFR_RNDN);
        mpfr_add(r9582519, r9582515, r9582518, MPFR_RNDN);
        mpfr_mul(r9582520, r9582519, r9582517, MPFR_RNDN);
        mpfr_add(r9582521, r9582514, r9582520, MPFR_RNDN);
        return mpfr_get_d(r9582521, MPFR_RNDN);
}

static mpfr_t r9582522, r9582523, r9582524, r9582525, r9582526, r9582527, r9582528, r9582529;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9582522, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582523, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582524, "0.5", 10, MPFR_RNDN);
        mpfr_init(r9582525);
        mpfr_init(r9582526);
        mpfr_init(r9582527);
        mpfr_init(r9582528);
        mpfr_init(r9582529);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r9582525, x, MPFR_RNDN);
        mpfr_mul(r9582526, r9582524, r9582525, MPFR_RNDN);
        mpfr_add(r9582527, r9582523, r9582526, MPFR_RNDN);
        mpfr_mul(r9582528, r9582527, r9582525, MPFR_RNDN);
        mpfr_add(r9582529, r9582522, r9582528, MPFR_RNDN);
        return mpfr_get_d(r9582529, MPFR_RNDN);
}

