#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r11054686 = -2.0;
        float r11054687 = 4.0;
        float r11054688 = x;
        float r11054689 = r11054688 * r11054688;
        float r11054690 = r11054687 * r11054689;
        float r11054691 = r11054686 + r11054690;
        return r11054691;
}

double f_id(double x) {
        double r11054692 = -2.0;
        double r11054693 = 4.0;
        double r11054694 = x;
        double r11054695 = r11054694 * r11054694;
        double r11054696 = r11054693 * r11054695;
        double r11054697 = r11054692 + r11054696;
        return r11054697;
}


double f_of(float x) {
        float r11054698 = -2.0;
        float r11054699 = 4.0;
        float r11054700 = x;
        float r11054701 = r11054700 * r11054700;
        float r11054702 = r11054699 * r11054701;
        float r11054703 = r11054698 + r11054702;
        return r11054703;
}

double f_od(double x) {
        double r11054704 = -2.0;
        double r11054705 = 4.0;
        double r11054706 = x;
        double r11054707 = r11054706 * r11054706;
        double r11054708 = r11054705 * r11054707;
        double r11054709 = r11054704 + r11054708;
        return r11054709;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11054710, r11054711, r11054712, r11054713, r11054714, r11054715;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11054710, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054711, "4.0", 10, MPFR_RNDN);
        mpfr_init(r11054712);
        mpfr_init(r11054713);
        mpfr_init(r11054714);
        mpfr_init(r11054715);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11054712, x, MPFR_RNDN);
        mpfr_mul(r11054713, r11054712, r11054712, MPFR_RNDN);
        mpfr_mul(r11054714, r11054711, r11054713, MPFR_RNDN);
        mpfr_add(r11054715, r11054710, r11054714, MPFR_RNDN);
        return mpfr_get_d(r11054715, MPFR_RNDN);
}

static mpfr_t r11054716, r11054717, r11054718, r11054719, r11054720, r11054721;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11054716, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054717, "4.0", 10, MPFR_RNDN);
        mpfr_init(r11054718);
        mpfr_init(r11054719);
        mpfr_init(r11054720);
        mpfr_init(r11054721);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11054718, x, MPFR_RNDN);
        mpfr_mul(r11054719, r11054718, r11054718, MPFR_RNDN);
        mpfr_mul(r11054720, r11054717, r11054719, MPFR_RNDN);
        mpfr_add(r11054721, r11054716, r11054720, MPFR_RNDN);
        return mpfr_get_d(r11054721, MPFR_RNDN);
}

static mpfr_t r11054722, r11054723, r11054724, r11054725, r11054726, r11054727;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11054722, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054723, "4.0", 10, MPFR_RNDN);
        mpfr_init(r11054724);
        mpfr_init(r11054725);
        mpfr_init(r11054726);
        mpfr_init(r11054727);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11054724, x, MPFR_RNDN);
        mpfr_mul(r11054725, r11054724, r11054724, MPFR_RNDN);
        mpfr_mul(r11054726, r11054723, r11054725, MPFR_RNDN);
        mpfr_add(r11054727, r11054722, r11054726, MPFR_RNDN);
        return mpfr_get_d(r11054727, MPFR_RNDN);
}

