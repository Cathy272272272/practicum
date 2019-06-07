#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r64037576 = -12.0;
        float r64037577 = x;
        float r64037578 = r64037576 * r64037577;
        float r64037579 = 8.0;
        float r64037580 = r64037577 * r64037577;
        float r64037581 = r64037580 * r64037577;
        float r64037582 = r64037579 * r64037581;
        float r64037583 = r64037578 + r64037582;
        return r64037583;
}

double f_id(double x) {
        double r64037584 = -12.0;
        double r64037585 = x;
        double r64037586 = r64037584 * r64037585;
        double r64037587 = 8.0;
        double r64037588 = r64037585 * r64037585;
        double r64037589 = r64037588 * r64037585;
        double r64037590 = r64037587 * r64037589;
        double r64037591 = r64037586 + r64037590;
        return r64037591;
}


double f_of(float x) {
        float r64037592 = -12.0;
        float r64037593 = exp(r64037592);
        float r64037594 = x;
        float r64037595 = pow(r64037593, r64037594);
        float r64037596 = 8.0;
        float r64037597 = exp(r64037596);
        float r64037598 = pow(r64037597, r64037594);
        float r64037599 = pow(r64037598, r64037594);
        float r64037600 = pow(r64037599, r64037594);
        float r64037601 = r64037595 * r64037600;
        float r64037602 = log(r64037601);
        return r64037602;
}

double f_od(double x) {
        double r64037603 = -12.0;
        double r64037604 = exp(r64037603);
        double r64037605 = x;
        double r64037606 = pow(r64037604, r64037605);
        double r64037607 = 8.0;
        double r64037608 = exp(r64037607);
        double r64037609 = pow(r64037608, r64037605);
        double r64037610 = pow(r64037609, r64037605);
        double r64037611 = pow(r64037610, r64037605);
        double r64037612 = r64037606 * r64037611;
        double r64037613 = log(r64037612);
        return r64037613;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64037614, r64037615, r64037616, r64037617, r64037618, r64037619, r64037620, r64037621;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64037614, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r64037615);
        mpfr_init(r64037616);
        mpfr_init_set_str(r64037617, "8.0", 10, MPFR_RNDN);
        mpfr_init(r64037618);
        mpfr_init(r64037619);
        mpfr_init(r64037620);
        mpfr_init(r64037621);
}

double f_im(double x) {
        ;
        mpfr_set_d(r64037615, x, MPFR_RNDN);
        mpfr_mul(r64037616, r64037614, r64037615, MPFR_RNDN);
        ;
        mpfr_mul(r64037618, r64037615, r64037615, MPFR_RNDN);
        mpfr_mul(r64037619, r64037618, r64037615, MPFR_RNDN);
        mpfr_mul(r64037620, r64037617, r64037619, MPFR_RNDN);
        mpfr_add(r64037621, r64037616, r64037620, MPFR_RNDN);
        return mpfr_get_d(r64037621, MPFR_RNDN);
}

static mpfr_t r64037622, r64037623, r64037624, r64037625, r64037626, r64037627, r64037628, r64037629, r64037630, r64037631, r64037632;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64037622, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r64037623);
        mpfr_init(r64037624);
        mpfr_init(r64037625);
        mpfr_init_set_str(r64037626, "8.0", 10, MPFR_RNDN);
        mpfr_init(r64037627);
        mpfr_init(r64037628);
        mpfr_init(r64037629);
        mpfr_init(r64037630);
        mpfr_init(r64037631);
        mpfr_init(r64037632);
}

double f_fm(double x) {
        ;
        mpfr_exp(r64037623, r64037622, MPFR_RNDN);
        mpfr_set_d(r64037624, x, MPFR_RNDN);
        mpfr_pow(r64037625, r64037623, r64037624, MPFR_RNDN);
        ;
        mpfr_exp(r64037627, r64037626, MPFR_RNDN);
        mpfr_pow(r64037628, r64037627, r64037624, MPFR_RNDN);
        mpfr_pow(r64037629, r64037628, r64037624, MPFR_RNDN);
        mpfr_pow(r64037630, r64037629, r64037624, MPFR_RNDN);
        mpfr_mul(r64037631, r64037625, r64037630, MPFR_RNDN);
        mpfr_log(r64037632, r64037631, MPFR_RNDN);
        return mpfr_get_d(r64037632, MPFR_RNDN);
}

static mpfr_t r64037633, r64037634, r64037635, r64037636, r64037637, r64037638, r64037639, r64037640, r64037641, r64037642, r64037643;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64037633, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r64037634);
        mpfr_init(r64037635);
        mpfr_init(r64037636);
        mpfr_init_set_str(r64037637, "8.0", 10, MPFR_RNDN);
        mpfr_init(r64037638);
        mpfr_init(r64037639);
        mpfr_init(r64037640);
        mpfr_init(r64037641);
        mpfr_init(r64037642);
        mpfr_init(r64037643);
}

double f_dm(double x) {
        ;
        mpfr_exp(r64037634, r64037633, MPFR_RNDN);
        mpfr_set_d(r64037635, x, MPFR_RNDN);
        mpfr_pow(r64037636, r64037634, r64037635, MPFR_RNDN);
        ;
        mpfr_exp(r64037638, r64037637, MPFR_RNDN);
        mpfr_pow(r64037639, r64037638, r64037635, MPFR_RNDN);
        mpfr_pow(r64037640, r64037639, r64037635, MPFR_RNDN);
        mpfr_pow(r64037641, r64037640, r64037635, MPFR_RNDN);
        mpfr_mul(r64037642, r64037636, r64037641, MPFR_RNDN);
        mpfr_log(r64037643, r64037642, MPFR_RNDN);
        return mpfr_get_d(r64037643, MPFR_RNDN);
}

