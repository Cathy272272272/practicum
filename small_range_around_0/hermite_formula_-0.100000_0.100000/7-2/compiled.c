#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6326836 = -2.0;
        float r6326837 = 4.0;
        float r6326838 = x;
        float r6326839 = r6326838 * r6326838;
        float r6326840 = r6326837 * r6326839;
        float r6326841 = r6326836 + r6326840;
        return r6326841;
}

double f_id(double x) {
        double r6326842 = -2.0;
        double r6326843 = 4.0;
        double r6326844 = x;
        double r6326845 = r6326844 * r6326844;
        double r6326846 = r6326843 * r6326845;
        double r6326847 = r6326842 + r6326846;
        return r6326847;
}


double f_of(float x) {
        float r6326848 = -2.0;
        float r6326849 = 4.0;
        float r6326850 = x;
        float r6326851 = r6326850 * r6326850;
        float r6326852 = r6326849 * r6326851;
        float r6326853 = r6326848 + r6326852;
        return r6326853;
}

double f_od(double x) {
        double r6326854 = -2.0;
        double r6326855 = 4.0;
        double r6326856 = x;
        double r6326857 = r6326856 * r6326856;
        double r6326858 = r6326855 * r6326857;
        double r6326859 = r6326854 + r6326858;
        return r6326859;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6326860, r6326861, r6326862, r6326863, r6326864, r6326865;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326860, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326861, "4.0", 10, MPFR_RNDN);
        mpfr_init(r6326862);
        mpfr_init(r6326863);
        mpfr_init(r6326864);
        mpfr_init(r6326865);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6326862, x, MPFR_RNDN);
        mpfr_mul(r6326863, r6326862, r6326862, MPFR_RNDN);
        mpfr_mul(r6326864, r6326861, r6326863, MPFR_RNDN);
        mpfr_add(r6326865, r6326860, r6326864, MPFR_RNDN);
        return mpfr_get_d(r6326865, MPFR_RNDN);
}

static mpfr_t r6326866, r6326867, r6326868, r6326869, r6326870, r6326871;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326866, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326867, "4.0", 10, MPFR_RNDN);
        mpfr_init(r6326868);
        mpfr_init(r6326869);
        mpfr_init(r6326870);
        mpfr_init(r6326871);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6326868, x, MPFR_RNDN);
        mpfr_mul(r6326869, r6326868, r6326868, MPFR_RNDN);
        mpfr_mul(r6326870, r6326867, r6326869, MPFR_RNDN);
        mpfr_add(r6326871, r6326866, r6326870, MPFR_RNDN);
        return mpfr_get_d(r6326871, MPFR_RNDN);
}

static mpfr_t r6326872, r6326873, r6326874, r6326875, r6326876, r6326877;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326872, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326873, "4.0", 10, MPFR_RNDN);
        mpfr_init(r6326874);
        mpfr_init(r6326875);
        mpfr_init(r6326876);
        mpfr_init(r6326877);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6326874, x, MPFR_RNDN);
        mpfr_mul(r6326875, r6326874, r6326874, MPFR_RNDN);
        mpfr_mul(r6326876, r6326873, r6326875, MPFR_RNDN);
        mpfr_add(r6326877, r6326872, r6326876, MPFR_RNDN);
        return mpfr_get_d(r6326877, MPFR_RNDN);
}

