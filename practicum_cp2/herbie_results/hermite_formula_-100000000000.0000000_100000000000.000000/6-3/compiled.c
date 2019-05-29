#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r11054630 = -12.0;
        float r11054631 = x;
        float r11054632 = r11054630 * r11054631;
        float r11054633 = 8.0;
        float r11054634 = r11054631 * r11054631;
        float r11054635 = r11054634 * r11054631;
        float r11054636 = r11054633 * r11054635;
        float r11054637 = r11054632 + r11054636;
        return r11054637;
}

double f_id(double x) {
        double r11054638 = -12.0;
        double r11054639 = x;
        double r11054640 = r11054638 * r11054639;
        double r11054641 = 8.0;
        double r11054642 = r11054639 * r11054639;
        double r11054643 = r11054642 * r11054639;
        double r11054644 = r11054641 * r11054643;
        double r11054645 = r11054640 + r11054644;
        return r11054645;
}


double f_of(float x) {
        float r11054646 = -12.0;
        float r11054647 = x;
        float r11054648 = r11054646 * r11054647;
        float r11054649 = 8.0;
        float r11054650 = r11054647 * r11054647;
        float r11054651 = r11054650 * r11054647;
        float r11054652 = r11054649 * r11054651;
        float r11054653 = r11054648 + r11054652;
        return r11054653;
}

double f_od(double x) {
        double r11054654 = -12.0;
        double r11054655 = x;
        double r11054656 = r11054654 * r11054655;
        double r11054657 = 8.0;
        double r11054658 = r11054655 * r11054655;
        double r11054659 = r11054658 * r11054655;
        double r11054660 = r11054657 * r11054659;
        double r11054661 = r11054656 + r11054660;
        return r11054661;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11054662, r11054663, r11054664, r11054665, r11054666, r11054667, r11054668, r11054669;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11054662, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r11054663);
        mpfr_init(r11054664);
        mpfr_init_set_str(r11054665, "8.0", 10, MPFR_RNDN);
        mpfr_init(r11054666);
        mpfr_init(r11054667);
        mpfr_init(r11054668);
        mpfr_init(r11054669);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11054663, x, MPFR_RNDN);
        mpfr_mul(r11054664, r11054662, r11054663, MPFR_RNDN);
        ;
        mpfr_mul(r11054666, r11054663, r11054663, MPFR_RNDN);
        mpfr_mul(r11054667, r11054666, r11054663, MPFR_RNDN);
        mpfr_mul(r11054668, r11054665, r11054667, MPFR_RNDN);
        mpfr_add(r11054669, r11054664, r11054668, MPFR_RNDN);
        return mpfr_get_d(r11054669, MPFR_RNDN);
}

static mpfr_t r11054670, r11054671, r11054672, r11054673, r11054674, r11054675, r11054676, r11054677;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11054670, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r11054671);
        mpfr_init(r11054672);
        mpfr_init_set_str(r11054673, "8.0", 10, MPFR_RNDN);
        mpfr_init(r11054674);
        mpfr_init(r11054675);
        mpfr_init(r11054676);
        mpfr_init(r11054677);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11054671, x, MPFR_RNDN);
        mpfr_mul(r11054672, r11054670, r11054671, MPFR_RNDN);
        ;
        mpfr_mul(r11054674, r11054671, r11054671, MPFR_RNDN);
        mpfr_mul(r11054675, r11054674, r11054671, MPFR_RNDN);
        mpfr_mul(r11054676, r11054673, r11054675, MPFR_RNDN);
        mpfr_add(r11054677, r11054672, r11054676, MPFR_RNDN);
        return mpfr_get_d(r11054677, MPFR_RNDN);
}

static mpfr_t r11054678, r11054679, r11054680, r11054681, r11054682, r11054683, r11054684, r11054685;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11054678, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r11054679);
        mpfr_init(r11054680);
        mpfr_init_set_str(r11054681, "8.0", 10, MPFR_RNDN);
        mpfr_init(r11054682);
        mpfr_init(r11054683);
        mpfr_init(r11054684);
        mpfr_init(r11054685);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11054679, x, MPFR_RNDN);
        mpfr_mul(r11054680, r11054678, r11054679, MPFR_RNDN);
        ;
        mpfr_mul(r11054682, r11054679, r11054679, MPFR_RNDN);
        mpfr_mul(r11054683, r11054682, r11054679, MPFR_RNDN);
        mpfr_mul(r11054684, r11054681, r11054683, MPFR_RNDN);
        mpfr_add(r11054685, r11054680, r11054684, MPFR_RNDN);
        return mpfr_get_d(r11054685, MPFR_RNDN);
}

