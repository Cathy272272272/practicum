#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r64037644 = -2.0;
        float r64037645 = 4.0;
        float r64037646 = x;
        float r64037647 = r64037646 * r64037646;
        float r64037648 = r64037645 * r64037647;
        float r64037649 = r64037644 + r64037648;
        return r64037649;
}

double f_id(double x) {
        double r64037650 = -2.0;
        double r64037651 = 4.0;
        double r64037652 = x;
        double r64037653 = r64037652 * r64037652;
        double r64037654 = r64037651 * r64037653;
        double r64037655 = r64037650 + r64037654;
        return r64037655;
}


double f_of(float x) {
        float r64037656 = -2.0;
        float r64037657 = r64037656 * r64037656;
        float r64037658 = 4.0;
        float r64037659 = x;
        float r64037660 = r64037659 * r64037659;
        float r64037661 = r64037658 * r64037660;
        float r64037662 = r64037661 * r64037661;
        float r64037663 = r64037657 - r64037662;
        float r64037664 = r64037656 - r64037661;
        float r64037665 = r64037663 / r64037664;
        return r64037665;
}

double f_od(double x) {
        double r64037666 = -2.0;
        double r64037667 = r64037666 * r64037666;
        double r64037668 = 4.0;
        double r64037669 = x;
        double r64037670 = r64037669 * r64037669;
        double r64037671 = r64037668 * r64037670;
        double r64037672 = r64037671 * r64037671;
        double r64037673 = r64037667 - r64037672;
        double r64037674 = r64037666 - r64037671;
        double r64037675 = r64037673 / r64037674;
        return r64037675;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64037676, r64037677, r64037678, r64037679, r64037680, r64037681;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037676, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r64037677, "4.0", 10, MPFR_RNDN);
        mpfr_init(r64037678);
        mpfr_init(r64037679);
        mpfr_init(r64037680);
        mpfr_init(r64037681);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r64037678, x, MPFR_RNDN);
        mpfr_mul(r64037679, r64037678, r64037678, MPFR_RNDN);
        mpfr_mul(r64037680, r64037677, r64037679, MPFR_RNDN);
        mpfr_add(r64037681, r64037676, r64037680, MPFR_RNDN);
        return mpfr_get_d(r64037681, MPFR_RNDN);
}

static mpfr_t r64037682, r64037683, r64037684, r64037685, r64037686, r64037687, r64037688, r64037689, r64037690, r64037691;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037682, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r64037683);
        mpfr_init_set_str(r64037684, "4.0", 10, MPFR_RNDN);
        mpfr_init(r64037685);
        mpfr_init(r64037686);
        mpfr_init(r64037687);
        mpfr_init(r64037688);
        mpfr_init(r64037689);
        mpfr_init(r64037690);
        mpfr_init(r64037691);
}

double f_fm(double x) {
        ;
        mpfr_mul(r64037683, r64037682, r64037682, MPFR_RNDN);
        ;
        mpfr_set_d(r64037685, x, MPFR_RNDN);
        mpfr_mul(r64037686, r64037685, r64037685, MPFR_RNDN);
        mpfr_mul(r64037687, r64037684, r64037686, MPFR_RNDN);
        mpfr_mul(r64037688, r64037687, r64037687, MPFR_RNDN);
        mpfr_sub(r64037689, r64037683, r64037688, MPFR_RNDN);
        mpfr_sub(r64037690, r64037682, r64037687, MPFR_RNDN);
        mpfr_div(r64037691, r64037689, r64037690, MPFR_RNDN);
        return mpfr_get_d(r64037691, MPFR_RNDN);
}

static mpfr_t r64037692, r64037693, r64037694, r64037695, r64037696, r64037697, r64037698, r64037699, r64037700, r64037701;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037692, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r64037693);
        mpfr_init_set_str(r64037694, "4.0", 10, MPFR_RNDN);
        mpfr_init(r64037695);
        mpfr_init(r64037696);
        mpfr_init(r64037697);
        mpfr_init(r64037698);
        mpfr_init(r64037699);
        mpfr_init(r64037700);
        mpfr_init(r64037701);
}

double f_dm(double x) {
        ;
        mpfr_mul(r64037693, r64037692, r64037692, MPFR_RNDN);
        ;
        mpfr_set_d(r64037695, x, MPFR_RNDN);
        mpfr_mul(r64037696, r64037695, r64037695, MPFR_RNDN);
        mpfr_mul(r64037697, r64037694, r64037696, MPFR_RNDN);
        mpfr_mul(r64037698, r64037697, r64037697, MPFR_RNDN);
        mpfr_sub(r64037699, r64037693, r64037698, MPFR_RNDN);
        mpfr_sub(r64037700, r64037692, r64037697, MPFR_RNDN);
        mpfr_div(r64037701, r64037699, r64037700, MPFR_RNDN);
        return mpfr_get_d(r64037701, MPFR_RNDN);
}

