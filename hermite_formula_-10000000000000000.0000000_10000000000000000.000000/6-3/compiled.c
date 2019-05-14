#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6896813 = -12.0;
        float r6896814 = x;
        float r6896815 = r6896813 * r6896814;
        float r6896816 = 8.0;
        float r6896817 = r6896814 * r6896814;
        float r6896818 = r6896817 * r6896814;
        float r6896819 = r6896816 * r6896818;
        float r6896820 = r6896815 + r6896819;
        return r6896820;
}

double f_id(double x) {
        double r6896821 = -12.0;
        double r6896822 = x;
        double r6896823 = r6896821 * r6896822;
        double r6896824 = 8.0;
        double r6896825 = r6896822 * r6896822;
        double r6896826 = r6896825 * r6896822;
        double r6896827 = r6896824 * r6896826;
        double r6896828 = r6896823 + r6896827;
        return r6896828;
}


double f_of(float x) {
        float r6896829 = -12.0;
        float r6896830 = x;
        float r6896831 = r6896829 * r6896830;
        float r6896832 = 8.0;
        float r6896833 = 3;
        float r6896834 = pow(r6896830, r6896833);
        float r6896835 = r6896832 * r6896834;
        float r6896836 = r6896831 + r6896835;
        return r6896836;
}

double f_od(double x) {
        double r6896837 = -12.0;
        double r6896838 = x;
        double r6896839 = r6896837 * r6896838;
        double r6896840 = 8.0;
        double r6896841 = 3;
        double r6896842 = pow(r6896838, r6896841);
        double r6896843 = r6896840 * r6896842;
        double r6896844 = r6896839 + r6896843;
        return r6896844;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6896845, r6896846, r6896847, r6896848, r6896849, r6896850, r6896851, r6896852;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6896845, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6896846);
        mpfr_init(r6896847);
        mpfr_init_set_str(r6896848, "8.0", 10, MPFR_RNDN);
        mpfr_init(r6896849);
        mpfr_init(r6896850);
        mpfr_init(r6896851);
        mpfr_init(r6896852);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6896846, x, MPFR_RNDN);
        mpfr_mul(r6896847, r6896845, r6896846, MPFR_RNDN);
        ;
        mpfr_mul(r6896849, r6896846, r6896846, MPFR_RNDN);
        mpfr_mul(r6896850, r6896849, r6896846, MPFR_RNDN);
        mpfr_mul(r6896851, r6896848, r6896850, MPFR_RNDN);
        mpfr_add(r6896852, r6896847, r6896851, MPFR_RNDN);
        return mpfr_get_d(r6896852, MPFR_RNDN);
}

static mpfr_t r6896853, r6896854, r6896855, r6896856, r6896857, r6896858, r6896859, r6896860;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6896853, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6896854);
        mpfr_init(r6896855);
        mpfr_init_set_str(r6896856, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896857, "3", 10, MPFR_RNDN);
        mpfr_init(r6896858);
        mpfr_init(r6896859);
        mpfr_init(r6896860);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6896854, x, MPFR_RNDN);
        mpfr_mul(r6896855, r6896853, r6896854, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6896858, r6896854, r6896857, MPFR_RNDN);
        mpfr_mul(r6896859, r6896856, r6896858, MPFR_RNDN);
        mpfr_add(r6896860, r6896855, r6896859, MPFR_RNDN);
        return mpfr_get_d(r6896860, MPFR_RNDN);
}

static mpfr_t r6896861, r6896862, r6896863, r6896864, r6896865, r6896866, r6896867, r6896868;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6896861, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6896862);
        mpfr_init(r6896863);
        mpfr_init_set_str(r6896864, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896865, "3", 10, MPFR_RNDN);
        mpfr_init(r6896866);
        mpfr_init(r6896867);
        mpfr_init(r6896868);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6896862, x, MPFR_RNDN);
        mpfr_mul(r6896863, r6896861, r6896862, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6896866, r6896862, r6896865, MPFR_RNDN);
        mpfr_mul(r6896867, r6896864, r6896866, MPFR_RNDN);
        mpfr_add(r6896868, r6896863, r6896867, MPFR_RNDN);
        return mpfr_get_d(r6896868, MPFR_RNDN);
}

