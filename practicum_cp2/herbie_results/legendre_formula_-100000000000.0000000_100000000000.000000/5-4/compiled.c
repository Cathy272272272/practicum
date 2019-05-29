#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6764800 = 0.375;
        float r6764801 = -3.75;
        float r6764802 = x;
        float r6764803 = r6764802 * r6764802;
        float r6764804 = r6764801 * r6764803;
        float r6764805 = r6764800 + r6764804;
        float r6764806 = 4.375;
        float r6764807 = r6764803 * r6764802;
        float r6764808 = r6764807 * r6764802;
        float r6764809 = r6764806 * r6764808;
        float r6764810 = r6764805 + r6764809;
        return r6764810;
}

double f_id(double x) {
        double r6764811 = 0.375;
        double r6764812 = -3.75;
        double r6764813 = x;
        double r6764814 = r6764813 * r6764813;
        double r6764815 = r6764812 * r6764814;
        double r6764816 = r6764811 + r6764815;
        double r6764817 = 4.375;
        double r6764818 = r6764814 * r6764813;
        double r6764819 = r6764818 * r6764813;
        double r6764820 = r6764817 * r6764819;
        double r6764821 = r6764816 + r6764820;
        return r6764821;
}


double f_of(float x) {
        float r6764822 = 0.375;
        float r6764823 = -3.75;
        float r6764824 = x;
        float r6764825 = r6764824 * r6764824;
        float r6764826 = r6764823 * r6764825;
        float r6764827 = r6764822 + r6764826;
        float r6764828 = 4.375;
        float r6764829 = r6764825 * r6764824;
        float r6764830 = r6764829 * r6764824;
        float r6764831 = r6764828 * r6764830;
        float r6764832 = r6764827 + r6764831;
        return r6764832;
}

double f_od(double x) {
        double r6764833 = 0.375;
        double r6764834 = -3.75;
        double r6764835 = x;
        double r6764836 = r6764835 * r6764835;
        double r6764837 = r6764834 * r6764836;
        double r6764838 = r6764833 + r6764837;
        double r6764839 = 4.375;
        double r6764840 = r6764836 * r6764835;
        double r6764841 = r6764840 * r6764835;
        double r6764842 = r6764839 * r6764841;
        double r6764843 = r6764838 + r6764842;
        return r6764843;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6764844, r6764845, r6764846, r6764847, r6764848, r6764849, r6764850, r6764851, r6764852, r6764853, r6764854;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6764844, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764845, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6764846);
        mpfr_init(r6764847);
        mpfr_init(r6764848);
        mpfr_init(r6764849);
        mpfr_init_set_str(r6764850, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6764851);
        mpfr_init(r6764852);
        mpfr_init(r6764853);
        mpfr_init(r6764854);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6764846, x, MPFR_RNDN);
        mpfr_mul(r6764847, r6764846, r6764846, MPFR_RNDN);
        mpfr_mul(r6764848, r6764845, r6764847, MPFR_RNDN);
        mpfr_add(r6764849, r6764844, r6764848, MPFR_RNDN);
        ;
        mpfr_mul(r6764851, r6764847, r6764846, MPFR_RNDN);
        mpfr_mul(r6764852, r6764851, r6764846, MPFR_RNDN);
        mpfr_mul(r6764853, r6764850, r6764852, MPFR_RNDN);
        mpfr_add(r6764854, r6764849, r6764853, MPFR_RNDN);
        return mpfr_get_d(r6764854, MPFR_RNDN);
}

static mpfr_t r6764855, r6764856, r6764857, r6764858, r6764859, r6764860, r6764861, r6764862, r6764863, r6764864, r6764865;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6764855, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764856, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6764857);
        mpfr_init(r6764858);
        mpfr_init(r6764859);
        mpfr_init(r6764860);
        mpfr_init_set_str(r6764861, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6764862);
        mpfr_init(r6764863);
        mpfr_init(r6764864);
        mpfr_init(r6764865);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6764857, x, MPFR_RNDN);
        mpfr_mul(r6764858, r6764857, r6764857, MPFR_RNDN);
        mpfr_mul(r6764859, r6764856, r6764858, MPFR_RNDN);
        mpfr_add(r6764860, r6764855, r6764859, MPFR_RNDN);
        ;
        mpfr_mul(r6764862, r6764858, r6764857, MPFR_RNDN);
        mpfr_mul(r6764863, r6764862, r6764857, MPFR_RNDN);
        mpfr_mul(r6764864, r6764861, r6764863, MPFR_RNDN);
        mpfr_add(r6764865, r6764860, r6764864, MPFR_RNDN);
        return mpfr_get_d(r6764865, MPFR_RNDN);
}

static mpfr_t r6764866, r6764867, r6764868, r6764869, r6764870, r6764871, r6764872, r6764873, r6764874, r6764875, r6764876;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6764866, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764867, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6764868);
        mpfr_init(r6764869);
        mpfr_init(r6764870);
        mpfr_init(r6764871);
        mpfr_init_set_str(r6764872, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6764873);
        mpfr_init(r6764874);
        mpfr_init(r6764875);
        mpfr_init(r6764876);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6764868, x, MPFR_RNDN);
        mpfr_mul(r6764869, r6764868, r6764868, MPFR_RNDN);
        mpfr_mul(r6764870, r6764867, r6764869, MPFR_RNDN);
        mpfr_add(r6764871, r6764866, r6764870, MPFR_RNDN);
        ;
        mpfr_mul(r6764873, r6764869, r6764868, MPFR_RNDN);
        mpfr_mul(r6764874, r6764873, r6764868, MPFR_RNDN);
        mpfr_mul(r6764875, r6764872, r6764874, MPFR_RNDN);
        mpfr_add(r6764876, r6764871, r6764875, MPFR_RNDN);
        return mpfr_get_d(r6764876, MPFR_RNDN);
}

