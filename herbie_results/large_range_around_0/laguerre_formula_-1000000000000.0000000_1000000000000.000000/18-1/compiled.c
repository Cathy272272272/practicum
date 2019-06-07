#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r9585840 = 1.0;
        float r9585841 = -1.0;
        float r9585842 = x;
        float r9585843 = r9585841 * r9585842;
        float r9585844 = r9585840 + r9585843;
        return r9585844;
}

double f_id(double x) {
        double r9585845 = 1.0;
        double r9585846 = -1.0;
        double r9585847 = x;
        double r9585848 = r9585846 * r9585847;
        double r9585849 = r9585845 + r9585848;
        return r9585849;
}


double f_of(float x) {
        float r9585850 = 1.0;
        float r9585851 = -1.0;
        float r9585852 = x;
        float r9585853 = r9585851 * r9585852;
        float r9585854 = r9585850 + r9585853;
        return r9585854;
}

double f_od(double x) {
        double r9585855 = 1.0;
        double r9585856 = -1.0;
        double r9585857 = x;
        double r9585858 = r9585856 * r9585857;
        double r9585859 = r9585855 + r9585858;
        return r9585859;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9585860, r9585861, r9585862, r9585863, r9585864;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9585860, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585861, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9585862);
        mpfr_init(r9585863);
        mpfr_init(r9585864);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9585862, x, MPFR_RNDN);
        mpfr_mul(r9585863, r9585861, r9585862, MPFR_RNDN);
        mpfr_add(r9585864, r9585860, r9585863, MPFR_RNDN);
        return mpfr_get_d(r9585864, MPFR_RNDN);
}

static mpfr_t r9585865, r9585866, r9585867, r9585868, r9585869;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9585865, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585866, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9585867);
        mpfr_init(r9585868);
        mpfr_init(r9585869);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9585867, x, MPFR_RNDN);
        mpfr_mul(r9585868, r9585866, r9585867, MPFR_RNDN);
        mpfr_add(r9585869, r9585865, r9585868, MPFR_RNDN);
        return mpfr_get_d(r9585869, MPFR_RNDN);
}

static mpfr_t r9585870, r9585871, r9585872, r9585873, r9585874;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9585870, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585871, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9585872);
        mpfr_init(r9585873);
        mpfr_init(r9585874);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9585872, x, MPFR_RNDN);
        mpfr_mul(r9585873, r9585871, r9585872, MPFR_RNDN);
        mpfr_add(r9585874, r9585870, r9585873, MPFR_RNDN);
        return mpfr_get_d(r9585874, MPFR_RNDN);
}

