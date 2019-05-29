#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6764877 = -1.5;
        float r6764878 = x;
        float r6764879 = r6764877 * r6764878;
        float r6764880 = 2.5;
        float r6764881 = r6764878 * r6764878;
        float r6764882 = r6764881 * r6764878;
        float r6764883 = r6764880 * r6764882;
        float r6764884 = r6764879 + r6764883;
        return r6764884;
}

double f_id(double x) {
        double r6764885 = -1.5;
        double r6764886 = x;
        double r6764887 = r6764885 * r6764886;
        double r6764888 = 2.5;
        double r6764889 = r6764886 * r6764886;
        double r6764890 = r6764889 * r6764886;
        double r6764891 = r6764888 * r6764890;
        double r6764892 = r6764887 + r6764891;
        return r6764892;
}


double f_of(float x) {
        float r6764893 = -1.5;
        float r6764894 = x;
        float r6764895 = r6764893 * r6764894;
        float r6764896 = 2.5;
        float r6764897 = r6764894 * r6764894;
        float r6764898 = r6764897 * r6764894;
        float r6764899 = r6764896 * r6764898;
        float r6764900 = r6764895 + r6764899;
        return r6764900;
}

double f_od(double x) {
        double r6764901 = -1.5;
        double r6764902 = x;
        double r6764903 = r6764901 * r6764902;
        double r6764904 = 2.5;
        double r6764905 = r6764902 * r6764902;
        double r6764906 = r6764905 * r6764902;
        double r6764907 = r6764904 * r6764906;
        double r6764908 = r6764903 + r6764907;
        return r6764908;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6764909, r6764910, r6764911, r6764912, r6764913, r6764914, r6764915, r6764916;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764909, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6764910);
        mpfr_init(r6764911);
        mpfr_init_set_str(r6764912, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6764913);
        mpfr_init(r6764914);
        mpfr_init(r6764915);
        mpfr_init(r6764916);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6764910, x, MPFR_RNDN);
        mpfr_mul(r6764911, r6764909, r6764910, MPFR_RNDN);
        ;
        mpfr_mul(r6764913, r6764910, r6764910, MPFR_RNDN);
        mpfr_mul(r6764914, r6764913, r6764910, MPFR_RNDN);
        mpfr_mul(r6764915, r6764912, r6764914, MPFR_RNDN);
        mpfr_add(r6764916, r6764911, r6764915, MPFR_RNDN);
        return mpfr_get_d(r6764916, MPFR_RNDN);
}

static mpfr_t r6764917, r6764918, r6764919, r6764920, r6764921, r6764922, r6764923, r6764924;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764917, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6764918);
        mpfr_init(r6764919);
        mpfr_init_set_str(r6764920, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6764921);
        mpfr_init(r6764922);
        mpfr_init(r6764923);
        mpfr_init(r6764924);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6764918, x, MPFR_RNDN);
        mpfr_mul(r6764919, r6764917, r6764918, MPFR_RNDN);
        ;
        mpfr_mul(r6764921, r6764918, r6764918, MPFR_RNDN);
        mpfr_mul(r6764922, r6764921, r6764918, MPFR_RNDN);
        mpfr_mul(r6764923, r6764920, r6764922, MPFR_RNDN);
        mpfr_add(r6764924, r6764919, r6764923, MPFR_RNDN);
        return mpfr_get_d(r6764924, MPFR_RNDN);
}

static mpfr_t r6764925, r6764926, r6764927, r6764928, r6764929, r6764930, r6764931, r6764932;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764925, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6764926);
        mpfr_init(r6764927);
        mpfr_init_set_str(r6764928, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6764929);
        mpfr_init(r6764930);
        mpfr_init(r6764931);
        mpfr_init(r6764932);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6764926, x, MPFR_RNDN);
        mpfr_mul(r6764927, r6764925, r6764926, MPFR_RNDN);
        ;
        mpfr_mul(r6764929, r6764926, r6764926, MPFR_RNDN);
        mpfr_mul(r6764930, r6764929, r6764926, MPFR_RNDN);
        mpfr_mul(r6764931, r6764928, r6764930, MPFR_RNDN);
        mpfr_add(r6764932, r6764927, r6764931, MPFR_RNDN);
        return mpfr_get_d(r6764932, MPFR_RNDN);
}

