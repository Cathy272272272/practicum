#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r10528725 = 1.0;
        float r10528726 = -2.0;
        float r10528727 = x;
        float r10528728 = r10528726 * r10528727;
        float r10528729 = r10528725 + r10528728;
        float r10528730 = 0.5;
        float r10528731 = r10528727 * r10528727;
        float r10528732 = r10528730 * r10528731;
        float r10528733 = r10528729 + r10528732;
        return r10528733;
}

double f_id(double x) {
        double r10528734 = 1.0;
        double r10528735 = -2.0;
        double r10528736 = x;
        double r10528737 = r10528735 * r10528736;
        double r10528738 = r10528734 + r10528737;
        double r10528739 = 0.5;
        double r10528740 = r10528736 * r10528736;
        double r10528741 = r10528739 * r10528740;
        double r10528742 = r10528738 + r10528741;
        return r10528742;
}


double f_of(float x) {
        float r10528743 = 1.0;
        float r10528744 = -2.0;
        float r10528745 = x;
        float r10528746 = r10528744 * r10528745;
        float r10528747 = r10528743 + r10528746;
        float r10528748 = 0.5;
        float r10528749 = r10528745 * r10528745;
        float r10528750 = r10528748 * r10528749;
        float r10528751 = r10528747 + r10528750;
        return r10528751;
}

double f_od(double x) {
        double r10528752 = 1.0;
        double r10528753 = -2.0;
        double r10528754 = x;
        double r10528755 = r10528753 * r10528754;
        double r10528756 = r10528752 + r10528755;
        double r10528757 = 0.5;
        double r10528758 = r10528754 * r10528754;
        double r10528759 = r10528757 * r10528758;
        double r10528760 = r10528756 + r10528759;
        return r10528760;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10528761, r10528762, r10528763, r10528764, r10528765, r10528766, r10528767, r10528768, r10528769;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528761, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528762, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10528763);
        mpfr_init(r10528764);
        mpfr_init(r10528765);
        mpfr_init_set_str(r10528766, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10528767);
        mpfr_init(r10528768);
        mpfr_init(r10528769);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10528763, x, MPFR_RNDN);
        mpfr_mul(r10528764, r10528762, r10528763, MPFR_RNDN);
        mpfr_add(r10528765, r10528761, r10528764, MPFR_RNDN);
        ;
        mpfr_mul(r10528767, r10528763, r10528763, MPFR_RNDN);
        mpfr_mul(r10528768, r10528766, r10528767, MPFR_RNDN);
        mpfr_add(r10528769, r10528765, r10528768, MPFR_RNDN);
        return mpfr_get_d(r10528769, MPFR_RNDN);
}

static mpfr_t r10528770, r10528771, r10528772, r10528773, r10528774, r10528775, r10528776, r10528777, r10528778;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528770, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528771, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10528772);
        mpfr_init(r10528773);
        mpfr_init(r10528774);
        mpfr_init_set_str(r10528775, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10528776);
        mpfr_init(r10528777);
        mpfr_init(r10528778);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10528772, x, MPFR_RNDN);
        mpfr_mul(r10528773, r10528771, r10528772, MPFR_RNDN);
        mpfr_add(r10528774, r10528770, r10528773, MPFR_RNDN);
        ;
        mpfr_mul(r10528776, r10528772, r10528772, MPFR_RNDN);
        mpfr_mul(r10528777, r10528775, r10528776, MPFR_RNDN);
        mpfr_add(r10528778, r10528774, r10528777, MPFR_RNDN);
        return mpfr_get_d(r10528778, MPFR_RNDN);
}

static mpfr_t r10528779, r10528780, r10528781, r10528782, r10528783, r10528784, r10528785, r10528786, r10528787;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528779, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528780, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10528781);
        mpfr_init(r10528782);
        mpfr_init(r10528783);
        mpfr_init_set_str(r10528784, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10528785);
        mpfr_init(r10528786);
        mpfr_init(r10528787);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10528781, x, MPFR_RNDN);
        mpfr_mul(r10528782, r10528780, r10528781, MPFR_RNDN);
        mpfr_add(r10528783, r10528779, r10528782, MPFR_RNDN);
        ;
        mpfr_mul(r10528785, r10528781, r10528781, MPFR_RNDN);
        mpfr_mul(r10528786, r10528784, r10528785, MPFR_RNDN);
        mpfr_add(r10528787, r10528783, r10528786, MPFR_RNDN);
        return mpfr_get_d(r10528787, MPFR_RNDN);
}

