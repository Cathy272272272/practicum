#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r11054549 = 12.0;
        float r11054550 = -48.0;
        float r11054551 = x;
        float r11054552 = r11054551 * r11054551;
        float r11054553 = r11054550 * r11054552;
        float r11054554 = r11054549 + r11054553;
        float r11054555 = 16.0;
        float r11054556 = r11054552 * r11054551;
        float r11054557 = r11054556 * r11054551;
        float r11054558 = r11054555 * r11054557;
        float r11054559 = r11054554 + r11054558;
        return r11054559;
}

double f_id(double x) {
        double r11054560 = 12.0;
        double r11054561 = -48.0;
        double r11054562 = x;
        double r11054563 = r11054562 * r11054562;
        double r11054564 = r11054561 * r11054563;
        double r11054565 = r11054560 + r11054564;
        double r11054566 = 16.0;
        double r11054567 = r11054563 * r11054562;
        double r11054568 = r11054567 * r11054562;
        double r11054569 = r11054566 * r11054568;
        double r11054570 = r11054565 + r11054569;
        return r11054570;
}


double f_of(float x) {
        float r11054571 = 12.0;
        float r11054572 = x;
        float r11054573 = 16.0;
        float r11054574 = r11054572 * r11054573;
        float r11054575 = 3;
        float r11054576 = pow(r11054572, r11054575);
        float r11054577 = r11054574 * r11054576;
        float r11054578 = -48.0;
        float r11054579 = r11054572 * r11054578;
        float r11054580 = r11054579 * r11054572;
        float r11054581 = r11054577 + r11054580;
        float r11054582 = r11054571 + r11054581;
        return r11054582;
}

double f_od(double x) {
        double r11054583 = 12.0;
        double r11054584 = x;
        double r11054585 = 16.0;
        double r11054586 = r11054584 * r11054585;
        double r11054587 = 3;
        double r11054588 = pow(r11054584, r11054587);
        double r11054589 = r11054586 * r11054588;
        double r11054590 = -48.0;
        double r11054591 = r11054584 * r11054590;
        double r11054592 = r11054591 * r11054584;
        double r11054593 = r11054589 + r11054592;
        double r11054594 = r11054583 + r11054593;
        return r11054594;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11054595, r11054596, r11054597, r11054598, r11054599, r11054600, r11054601, r11054602, r11054603, r11054604, r11054605;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11054595, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054596, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r11054597);
        mpfr_init(r11054598);
        mpfr_init(r11054599);
        mpfr_init(r11054600);
        mpfr_init_set_str(r11054601, "16.0", 10, MPFR_RNDN);
        mpfr_init(r11054602);
        mpfr_init(r11054603);
        mpfr_init(r11054604);
        mpfr_init(r11054605);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11054597, x, MPFR_RNDN);
        mpfr_mul(r11054598, r11054597, r11054597, MPFR_RNDN);
        mpfr_mul(r11054599, r11054596, r11054598, MPFR_RNDN);
        mpfr_add(r11054600, r11054595, r11054599, MPFR_RNDN);
        ;
        mpfr_mul(r11054602, r11054598, r11054597, MPFR_RNDN);
        mpfr_mul(r11054603, r11054602, r11054597, MPFR_RNDN);
        mpfr_mul(r11054604, r11054601, r11054603, MPFR_RNDN);
        mpfr_add(r11054605, r11054600, r11054604, MPFR_RNDN);
        return mpfr_get_d(r11054605, MPFR_RNDN);
}

static mpfr_t r11054606, r11054607, r11054608, r11054609, r11054610, r11054611, r11054612, r11054613, r11054614, r11054615, r11054616, r11054617;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11054606, "12.0", 10, MPFR_RNDN);
        mpfr_init(r11054607);
        mpfr_init_set_str(r11054608, "16.0", 10, MPFR_RNDN);
        mpfr_init(r11054609);
        mpfr_init_set_str(r11054610, "3", 10, MPFR_RNDN);
        mpfr_init(r11054611);
        mpfr_init(r11054612);
        mpfr_init_set_str(r11054613, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r11054614);
        mpfr_init(r11054615);
        mpfr_init(r11054616);
        mpfr_init(r11054617);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11054607, x, MPFR_RNDN);
        ;
        mpfr_mul(r11054609, r11054607, r11054608, MPFR_RNDN);
        ;
        mpfr_pow(r11054611, r11054607, r11054610, MPFR_RNDN);
        mpfr_mul(r11054612, r11054609, r11054611, MPFR_RNDN);
        ;
        mpfr_mul(r11054614, r11054607, r11054613, MPFR_RNDN);
        mpfr_mul(r11054615, r11054614, r11054607, MPFR_RNDN);
        mpfr_add(r11054616, r11054612, r11054615, MPFR_RNDN);
        mpfr_add(r11054617, r11054606, r11054616, MPFR_RNDN);
        return mpfr_get_d(r11054617, MPFR_RNDN);
}

static mpfr_t r11054618, r11054619, r11054620, r11054621, r11054622, r11054623, r11054624, r11054625, r11054626, r11054627, r11054628, r11054629;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11054618, "12.0", 10, MPFR_RNDN);
        mpfr_init(r11054619);
        mpfr_init_set_str(r11054620, "16.0", 10, MPFR_RNDN);
        mpfr_init(r11054621);
        mpfr_init_set_str(r11054622, "3", 10, MPFR_RNDN);
        mpfr_init(r11054623);
        mpfr_init(r11054624);
        mpfr_init_set_str(r11054625, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r11054626);
        mpfr_init(r11054627);
        mpfr_init(r11054628);
        mpfr_init(r11054629);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11054619, x, MPFR_RNDN);
        ;
        mpfr_mul(r11054621, r11054619, r11054620, MPFR_RNDN);
        ;
        mpfr_pow(r11054623, r11054619, r11054622, MPFR_RNDN);
        mpfr_mul(r11054624, r11054621, r11054623, MPFR_RNDN);
        ;
        mpfr_mul(r11054626, r11054619, r11054625, MPFR_RNDN);
        mpfr_mul(r11054627, r11054626, r11054619, MPFR_RNDN);
        mpfr_add(r11054628, r11054624, r11054627, MPFR_RNDN);
        mpfr_add(r11054629, r11054618, r11054628, MPFR_RNDN);
        return mpfr_get_d(r11054629, MPFR_RNDN);
}

