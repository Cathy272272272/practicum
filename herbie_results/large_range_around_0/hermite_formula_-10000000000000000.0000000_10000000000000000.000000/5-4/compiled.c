#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6896720 = 12.0;
        float r6896721 = -48.0;
        float r6896722 = x;
        float r6896723 = r6896722 * r6896722;
        float r6896724 = r6896721 * r6896723;
        float r6896725 = r6896720 + r6896724;
        float r6896726 = 16.0;
        float r6896727 = r6896723 * r6896722;
        float r6896728 = r6896727 * r6896722;
        float r6896729 = r6896726 * r6896728;
        float r6896730 = r6896725 + r6896729;
        return r6896730;
}

double f_id(double x) {
        double r6896731 = 12.0;
        double r6896732 = -48.0;
        double r6896733 = x;
        double r6896734 = r6896733 * r6896733;
        double r6896735 = r6896732 * r6896734;
        double r6896736 = r6896731 + r6896735;
        double r6896737 = 16.0;
        double r6896738 = r6896734 * r6896733;
        double r6896739 = r6896738 * r6896733;
        double r6896740 = r6896737 * r6896739;
        double r6896741 = r6896736 + r6896740;
        return r6896741;
}


double f_of(float x) {
        float r6896742 = 12.0;
        float r6896743 = x;
        float r6896744 = 3;
        float r6896745 = pow(r6896743, r6896744);
        float r6896746 = pow(r6896745, r6896744);
        float r6896747 = 16.0;
        float r6896748 = r6896743 * r6896747;
        float r6896749 = pow(r6896748, r6896744);
        float r6896750 = r6896746 * r6896749;
        float r6896751 = cbrt(r6896750);
        float r6896752 = -48.0;
        float r6896753 = r6896743 * r6896752;
        float r6896754 = r6896753 * r6896743;
        float r6896755 = r6896751 + r6896754;
        float r6896756 = r6896742 + r6896755;
        return r6896756;
}

double f_od(double x) {
        double r6896757 = 12.0;
        double r6896758 = x;
        double r6896759 = 3;
        double r6896760 = pow(r6896758, r6896759);
        double r6896761 = pow(r6896760, r6896759);
        double r6896762 = 16.0;
        double r6896763 = r6896758 * r6896762;
        double r6896764 = pow(r6896763, r6896759);
        double r6896765 = r6896761 * r6896764;
        double r6896766 = cbrt(r6896765);
        double r6896767 = -48.0;
        double r6896768 = r6896758 * r6896767;
        double r6896769 = r6896768 * r6896758;
        double r6896770 = r6896766 + r6896769;
        double r6896771 = r6896757 + r6896770;
        return r6896771;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6896772, r6896773, r6896774, r6896775, r6896776, r6896777, r6896778, r6896779, r6896780, r6896781, r6896782;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896772, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896773, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r6896774);
        mpfr_init(r6896775);
        mpfr_init(r6896776);
        mpfr_init(r6896777);
        mpfr_init_set_str(r6896778, "16.0", 10, MPFR_RNDN);
        mpfr_init(r6896779);
        mpfr_init(r6896780);
        mpfr_init(r6896781);
        mpfr_init(r6896782);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6896774, x, MPFR_RNDN);
        mpfr_mul(r6896775, r6896774, r6896774, MPFR_RNDN);
        mpfr_mul(r6896776, r6896773, r6896775, MPFR_RNDN);
        mpfr_add(r6896777, r6896772, r6896776, MPFR_RNDN);
        ;
        mpfr_mul(r6896779, r6896775, r6896774, MPFR_RNDN);
        mpfr_mul(r6896780, r6896779, r6896774, MPFR_RNDN);
        mpfr_mul(r6896781, r6896778, r6896780, MPFR_RNDN);
        mpfr_add(r6896782, r6896777, r6896781, MPFR_RNDN);
        return mpfr_get_d(r6896782, MPFR_RNDN);
}

static mpfr_t r6896783, r6896784, r6896785, r6896786, r6896787, r6896788, r6896789, r6896790, r6896791, r6896792, r6896793, r6896794, r6896795, r6896796, r6896797;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896783, "12.0", 10, MPFR_RNDN);
        mpfr_init(r6896784);
        mpfr_init_set_str(r6896785, "3", 10, MPFR_RNDN);
        mpfr_init(r6896786);
        mpfr_init(r6896787);
        mpfr_init_set_str(r6896788, "16.0", 10, MPFR_RNDN);
        mpfr_init(r6896789);
        mpfr_init(r6896790);
        mpfr_init(r6896791);
        mpfr_init(r6896792);
        mpfr_init_set_str(r6896793, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r6896794);
        mpfr_init(r6896795);
        mpfr_init(r6896796);
        mpfr_init(r6896797);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6896784, x, MPFR_RNDN);
        ;
        mpfr_pow(r6896786, r6896784, r6896785, MPFR_RNDN);
        mpfr_pow(r6896787, r6896786, r6896785, MPFR_RNDN);
        ;
        mpfr_mul(r6896789, r6896784, r6896788, MPFR_RNDN);
        mpfr_pow(r6896790, r6896789, r6896785, MPFR_RNDN);
        mpfr_mul(r6896791, r6896787, r6896790, MPFR_RNDN);
        mpfr_cbrt(r6896792, r6896791, MPFR_RNDN);
        ;
        mpfr_mul(r6896794, r6896784, r6896793, MPFR_RNDN);
        mpfr_mul(r6896795, r6896794, r6896784, MPFR_RNDN);
        mpfr_add(r6896796, r6896792, r6896795, MPFR_RNDN);
        mpfr_add(r6896797, r6896783, r6896796, MPFR_RNDN);
        return mpfr_get_d(r6896797, MPFR_RNDN);
}

static mpfr_t r6896798, r6896799, r6896800, r6896801, r6896802, r6896803, r6896804, r6896805, r6896806, r6896807, r6896808, r6896809, r6896810, r6896811, r6896812;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896798, "12.0", 10, MPFR_RNDN);
        mpfr_init(r6896799);
        mpfr_init_set_str(r6896800, "3", 10, MPFR_RNDN);
        mpfr_init(r6896801);
        mpfr_init(r6896802);
        mpfr_init_set_str(r6896803, "16.0", 10, MPFR_RNDN);
        mpfr_init(r6896804);
        mpfr_init(r6896805);
        mpfr_init(r6896806);
        mpfr_init(r6896807);
        mpfr_init_set_str(r6896808, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r6896809);
        mpfr_init(r6896810);
        mpfr_init(r6896811);
        mpfr_init(r6896812);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6896799, x, MPFR_RNDN);
        ;
        mpfr_pow(r6896801, r6896799, r6896800, MPFR_RNDN);
        mpfr_pow(r6896802, r6896801, r6896800, MPFR_RNDN);
        ;
        mpfr_mul(r6896804, r6896799, r6896803, MPFR_RNDN);
        mpfr_pow(r6896805, r6896804, r6896800, MPFR_RNDN);
        mpfr_mul(r6896806, r6896802, r6896805, MPFR_RNDN);
        mpfr_cbrt(r6896807, r6896806, MPFR_RNDN);
        ;
        mpfr_mul(r6896809, r6896799, r6896808, MPFR_RNDN);
        mpfr_mul(r6896810, r6896809, r6896799, MPFR_RNDN);
        mpfr_add(r6896811, r6896807, r6896810, MPFR_RNDN);
        mpfr_add(r6896812, r6896798, r6896811, MPFR_RNDN);
        return mpfr_get_d(r6896812, MPFR_RNDN);
}

