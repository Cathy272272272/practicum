#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r10588505 = 1.0;
        float r10588506 = -1.0;
        float r10588507 = x;
        float r10588508 = r10588506 * r10588507;
        float r10588509 = r10588505 + r10588508;
        return r10588509;
}

double f_id(double x) {
        double r10588510 = 1.0;
        double r10588511 = -1.0;
        double r10588512 = x;
        double r10588513 = r10588511 * r10588512;
        double r10588514 = r10588510 + r10588513;
        return r10588514;
}


double f_of(float x) {
        float r10588515 = 1.0;
        float r10588516 = -1.0;
        float r10588517 = x;
        float r10588518 = r10588516 * r10588517;
        float r10588519 = r10588515 + r10588518;
        return r10588519;
}

double f_od(double x) {
        double r10588520 = 1.0;
        double r10588521 = -1.0;
        double r10588522 = x;
        double r10588523 = r10588521 * r10588522;
        double r10588524 = r10588520 + r10588523;
        return r10588524;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10588525, r10588526, r10588527, r10588528, r10588529;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10588525, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10588526, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10588527);
        mpfr_init(r10588528);
        mpfr_init(r10588529);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10588527, x, MPFR_RNDN);
        mpfr_mul(r10588528, r10588526, r10588527, MPFR_RNDN);
        mpfr_add(r10588529, r10588525, r10588528, MPFR_RNDN);
        return mpfr_get_d(r10588529, MPFR_RNDN);
}

static mpfr_t r10588530, r10588531, r10588532, r10588533, r10588534;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10588530, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10588531, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10588532);
        mpfr_init(r10588533);
        mpfr_init(r10588534);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10588532, x, MPFR_RNDN);
        mpfr_mul(r10588533, r10588531, r10588532, MPFR_RNDN);
        mpfr_add(r10588534, r10588530, r10588533, MPFR_RNDN);
        return mpfr_get_d(r10588534, MPFR_RNDN);
}

static mpfr_t r10588535, r10588536, r10588537, r10588538, r10588539;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10588535, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10588536, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10588537);
        mpfr_init(r10588538);
        mpfr_init(r10588539);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10588537, x, MPFR_RNDN);
        mpfr_mul(r10588538, r10588536, r10588537, MPFR_RNDN);
        mpfr_add(r10588539, r10588535, r10588538, MPFR_RNDN);
        return mpfr_get_d(r10588539, MPFR_RNDN);
}

