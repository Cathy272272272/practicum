#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7603555 = 120.0;
        float r7603556 = x;
        float r7603557 = r7603555 * r7603556;
        float r7603558 = -160.0;
        float r7603559 = r7603556 * r7603556;
        float r7603560 = r7603559 * r7603556;
        float r7603561 = r7603558 * r7603560;
        float r7603562 = r7603557 + r7603561;
        float r7603563 = 32.0;
        float r7603564 = r7603560 * r7603556;
        float r7603565 = r7603564 * r7603556;
        float r7603566 = r7603563 * r7603565;
        float r7603567 = r7603562 + r7603566;
        return r7603567;
}

double f_id(double x) {
        double r7603568 = 120.0;
        double r7603569 = x;
        double r7603570 = r7603568 * r7603569;
        double r7603571 = -160.0;
        double r7603572 = r7603569 * r7603569;
        double r7603573 = r7603572 * r7603569;
        double r7603574 = r7603571 * r7603573;
        double r7603575 = r7603570 + r7603574;
        double r7603576 = 32.0;
        double r7603577 = r7603573 * r7603569;
        double r7603578 = r7603577 * r7603569;
        double r7603579 = r7603576 * r7603578;
        double r7603580 = r7603575 + r7603579;
        return r7603580;
}


double f_of(float x) {
        float r7603581 = -160.0;
        float r7603582 = x;
        float r7603583 = r7603581 * r7603582;
        float r7603584 = r7603582 * r7603582;
        float r7603585 = r7603583 * r7603584;
        float r7603586 = 4;
        float r7603587 = pow(r7603582, r7603586);
        float r7603588 = 32.0;
        float r7603589 = r7603582 * r7603588;
        float r7603590 = r7603587 * r7603589;
        float r7603591 = r7603585 + r7603590;
        float r7603592 = 120.0;
        float r7603593 = r7603592 * r7603582;
        float r7603594 = r7603591 + r7603593;
        return r7603594;
}

double f_od(double x) {
        double r7603595 = -160.0;
        double r7603596 = x;
        double r7603597 = r7603595 * r7603596;
        double r7603598 = r7603596 * r7603596;
        double r7603599 = r7603597 * r7603598;
        double r7603600 = 4;
        double r7603601 = pow(r7603596, r7603600);
        double r7603602 = 32.0;
        double r7603603 = r7603596 * r7603602;
        double r7603604 = r7603601 * r7603603;
        double r7603605 = r7603599 + r7603604;
        double r7603606 = 120.0;
        double r7603607 = r7603606 * r7603596;
        double r7603608 = r7603605 + r7603607;
        return r7603608;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7603609, r7603610, r7603611, r7603612, r7603613, r7603614, r7603615, r7603616, r7603617, r7603618, r7603619, r7603620, r7603621;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603609, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7603610);
        mpfr_init(r7603611);
        mpfr_init_set_str(r7603612, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7603613);
        mpfr_init(r7603614);
        mpfr_init(r7603615);
        mpfr_init(r7603616);
        mpfr_init_set_str(r7603617, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7603618);
        mpfr_init(r7603619);
        mpfr_init(r7603620);
        mpfr_init(r7603621);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7603610, x, MPFR_RNDN);
        mpfr_mul(r7603611, r7603609, r7603610, MPFR_RNDN);
        ;
        mpfr_mul(r7603613, r7603610, r7603610, MPFR_RNDN);
        mpfr_mul(r7603614, r7603613, r7603610, MPFR_RNDN);
        mpfr_mul(r7603615, r7603612, r7603614, MPFR_RNDN);
        mpfr_add(r7603616, r7603611, r7603615, MPFR_RNDN);
        ;
        mpfr_mul(r7603618, r7603614, r7603610, MPFR_RNDN);
        mpfr_mul(r7603619, r7603618, r7603610, MPFR_RNDN);
        mpfr_mul(r7603620, r7603617, r7603619, MPFR_RNDN);
        mpfr_add(r7603621, r7603616, r7603620, MPFR_RNDN);
        return mpfr_get_d(r7603621, MPFR_RNDN);
}

static mpfr_t r7603622, r7603623, r7603624, r7603625, r7603626, r7603627, r7603628, r7603629, r7603630, r7603631, r7603632, r7603633, r7603634, r7603635;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603622, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7603623);
        mpfr_init(r7603624);
        mpfr_init(r7603625);
        mpfr_init(r7603626);
        mpfr_init_set_str(r7603627, "4", 10, MPFR_RNDN);
        mpfr_init(r7603628);
        mpfr_init_set_str(r7603629, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7603630);
        mpfr_init(r7603631);
        mpfr_init(r7603632);
        mpfr_init_set_str(r7603633, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7603634);
        mpfr_init(r7603635);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7603623, x, MPFR_RNDN);
        mpfr_mul(r7603624, r7603622, r7603623, MPFR_RNDN);
        mpfr_mul(r7603625, r7603623, r7603623, MPFR_RNDN);
        mpfr_mul(r7603626, r7603624, r7603625, MPFR_RNDN);
        ;
        mpfr_pow(r7603628, r7603623, r7603627, MPFR_RNDN);
        ;
        mpfr_mul(r7603630, r7603623, r7603629, MPFR_RNDN);
        mpfr_mul(r7603631, r7603628, r7603630, MPFR_RNDN);
        mpfr_add(r7603632, r7603626, r7603631, MPFR_RNDN);
        ;
        mpfr_mul(r7603634, r7603633, r7603623, MPFR_RNDN);
        mpfr_add(r7603635, r7603632, r7603634, MPFR_RNDN);
        return mpfr_get_d(r7603635, MPFR_RNDN);
}

static mpfr_t r7603636, r7603637, r7603638, r7603639, r7603640, r7603641, r7603642, r7603643, r7603644, r7603645, r7603646, r7603647, r7603648, r7603649;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603636, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7603637);
        mpfr_init(r7603638);
        mpfr_init(r7603639);
        mpfr_init(r7603640);
        mpfr_init_set_str(r7603641, "4", 10, MPFR_RNDN);
        mpfr_init(r7603642);
        mpfr_init_set_str(r7603643, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7603644);
        mpfr_init(r7603645);
        mpfr_init(r7603646);
        mpfr_init_set_str(r7603647, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7603648);
        mpfr_init(r7603649);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7603637, x, MPFR_RNDN);
        mpfr_mul(r7603638, r7603636, r7603637, MPFR_RNDN);
        mpfr_mul(r7603639, r7603637, r7603637, MPFR_RNDN);
        mpfr_mul(r7603640, r7603638, r7603639, MPFR_RNDN);
        ;
        mpfr_pow(r7603642, r7603637, r7603641, MPFR_RNDN);
        ;
        mpfr_mul(r7603644, r7603637, r7603643, MPFR_RNDN);
        mpfr_mul(r7603645, r7603642, r7603644, MPFR_RNDN);
        mpfr_add(r7603646, r7603640, r7603645, MPFR_RNDN);
        ;
        mpfr_mul(r7603648, r7603647, r7603637, MPFR_RNDN);
        mpfr_add(r7603649, r7603646, r7603648, MPFR_RNDN);
        return mpfr_get_d(r7603649, MPFR_RNDN);
}

