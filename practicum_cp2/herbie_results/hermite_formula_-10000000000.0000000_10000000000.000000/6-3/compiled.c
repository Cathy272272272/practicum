#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r9402820 = -12.0;
        float r9402821 = x;
        float r9402822 = r9402820 * r9402821;
        float r9402823 = 8.0;
        float r9402824 = r9402821 * r9402821;
        float r9402825 = r9402824 * r9402821;
        float r9402826 = r9402823 * r9402825;
        float r9402827 = r9402822 + r9402826;
        return r9402827;
}

double f_id(double x) {
        double r9402828 = -12.0;
        double r9402829 = x;
        double r9402830 = r9402828 * r9402829;
        double r9402831 = 8.0;
        double r9402832 = r9402829 * r9402829;
        double r9402833 = r9402832 * r9402829;
        double r9402834 = r9402831 * r9402833;
        double r9402835 = r9402830 + r9402834;
        return r9402835;
}


double f_of(float x) {
        float r9402836 = -12.0;
        float r9402837 = x;
        float r9402838 = r9402836 * r9402837;
        float r9402839 = 8.0;
        float r9402840 = r9402837 * r9402837;
        float r9402841 = r9402840 * r9402837;
        float r9402842 = r9402839 * r9402841;
        float r9402843 = r9402838 + r9402842;
        return r9402843;
}

double f_od(double x) {
        double r9402844 = -12.0;
        double r9402845 = x;
        double r9402846 = r9402844 * r9402845;
        double r9402847 = 8.0;
        double r9402848 = r9402845 * r9402845;
        double r9402849 = r9402848 * r9402845;
        double r9402850 = r9402847 * r9402849;
        double r9402851 = r9402846 + r9402850;
        return r9402851;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9402852, r9402853, r9402854, r9402855, r9402856, r9402857, r9402858, r9402859;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402852, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9402853);
        mpfr_init(r9402854);
        mpfr_init_set_str(r9402855, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9402856);
        mpfr_init(r9402857);
        mpfr_init(r9402858);
        mpfr_init(r9402859);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9402853, x, MPFR_RNDN);
        mpfr_mul(r9402854, r9402852, r9402853, MPFR_RNDN);
        ;
        mpfr_mul(r9402856, r9402853, r9402853, MPFR_RNDN);
        mpfr_mul(r9402857, r9402856, r9402853, MPFR_RNDN);
        mpfr_mul(r9402858, r9402855, r9402857, MPFR_RNDN);
        mpfr_add(r9402859, r9402854, r9402858, MPFR_RNDN);
        return mpfr_get_d(r9402859, MPFR_RNDN);
}

static mpfr_t r9402860, r9402861, r9402862, r9402863, r9402864, r9402865, r9402866, r9402867;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402860, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9402861);
        mpfr_init(r9402862);
        mpfr_init_set_str(r9402863, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9402864);
        mpfr_init(r9402865);
        mpfr_init(r9402866);
        mpfr_init(r9402867);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9402861, x, MPFR_RNDN);
        mpfr_mul(r9402862, r9402860, r9402861, MPFR_RNDN);
        ;
        mpfr_mul(r9402864, r9402861, r9402861, MPFR_RNDN);
        mpfr_mul(r9402865, r9402864, r9402861, MPFR_RNDN);
        mpfr_mul(r9402866, r9402863, r9402865, MPFR_RNDN);
        mpfr_add(r9402867, r9402862, r9402866, MPFR_RNDN);
        return mpfr_get_d(r9402867, MPFR_RNDN);
}

static mpfr_t r9402868, r9402869, r9402870, r9402871, r9402872, r9402873, r9402874, r9402875;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402868, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9402869);
        mpfr_init(r9402870);
        mpfr_init_set_str(r9402871, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9402872);
        mpfr_init(r9402873);
        mpfr_init(r9402874);
        mpfr_init(r9402875);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9402869, x, MPFR_RNDN);
        mpfr_mul(r9402870, r9402868, r9402869, MPFR_RNDN);
        ;
        mpfr_mul(r9402872, r9402869, r9402869, MPFR_RNDN);
        mpfr_mul(r9402873, r9402872, r9402869, MPFR_RNDN);
        mpfr_mul(r9402874, r9402871, r9402873, MPFR_RNDN);
        mpfr_add(r9402875, r9402870, r9402874, MPFR_RNDN);
        return mpfr_get_d(r9402875, MPFR_RNDN);
}

