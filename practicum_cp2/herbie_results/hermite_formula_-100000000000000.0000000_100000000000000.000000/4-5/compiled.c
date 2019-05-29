#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r9959898 = 120.0;
        float r9959899 = x;
        float r9959900 = r9959898 * r9959899;
        float r9959901 = -160.0;
        float r9959902 = r9959899 * r9959899;
        float r9959903 = r9959902 * r9959899;
        float r9959904 = r9959901 * r9959903;
        float r9959905 = r9959900 + r9959904;
        float r9959906 = 32.0;
        float r9959907 = r9959903 * r9959899;
        float r9959908 = r9959907 * r9959899;
        float r9959909 = r9959906 * r9959908;
        float r9959910 = r9959905 + r9959909;
        return r9959910;
}

double f_id(double x) {
        double r9959911 = 120.0;
        double r9959912 = x;
        double r9959913 = r9959911 * r9959912;
        double r9959914 = -160.0;
        double r9959915 = r9959912 * r9959912;
        double r9959916 = r9959915 * r9959912;
        double r9959917 = r9959914 * r9959916;
        double r9959918 = r9959913 + r9959917;
        double r9959919 = 32.0;
        double r9959920 = r9959916 * r9959912;
        double r9959921 = r9959920 * r9959912;
        double r9959922 = r9959919 * r9959921;
        double r9959923 = r9959918 + r9959922;
        return r9959923;
}


double f_of(float x) {
        float r9959924 = 120.0;
        float r9959925 = x;
        float r9959926 = r9959924 * r9959925;
        float r9959927 = -160.0;
        float r9959928 = r9959925 * r9959925;
        float r9959929 = r9959928 * r9959925;
        float r9959930 = r9959927 * r9959929;
        float r9959931 = r9959926 + r9959930;
        float r9959932 = 32.0;
        float r9959933 = 3;
        float r9959934 = pow(r9959925, r9959933);
        float r9959935 = r9959934 * r9959925;
        float r9959936 = r9959935 * r9959925;
        float r9959937 = r9959932 * r9959936;
        float r9959938 = r9959931 + r9959937;
        return r9959938;
}

double f_od(double x) {
        double r9959939 = 120.0;
        double r9959940 = x;
        double r9959941 = r9959939 * r9959940;
        double r9959942 = -160.0;
        double r9959943 = r9959940 * r9959940;
        double r9959944 = r9959943 * r9959940;
        double r9959945 = r9959942 * r9959944;
        double r9959946 = r9959941 + r9959945;
        double r9959947 = 32.0;
        double r9959948 = 3;
        double r9959949 = pow(r9959940, r9959948);
        double r9959950 = r9959949 * r9959940;
        double r9959951 = r9959950 * r9959940;
        double r9959952 = r9959947 * r9959951;
        double r9959953 = r9959946 + r9959952;
        return r9959953;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9959954, r9959955, r9959956, r9959957, r9959958, r9959959, r9959960, r9959961, r9959962, r9959963, r9959964, r9959965, r9959966;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9959954, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9959955);
        mpfr_init(r9959956);
        mpfr_init_set_str(r9959957, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9959958);
        mpfr_init(r9959959);
        mpfr_init(r9959960);
        mpfr_init(r9959961);
        mpfr_init_set_str(r9959962, "32.0", 10, MPFR_RNDN);
        mpfr_init(r9959963);
        mpfr_init(r9959964);
        mpfr_init(r9959965);
        mpfr_init(r9959966);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9959955, x, MPFR_RNDN);
        mpfr_mul(r9959956, r9959954, r9959955, MPFR_RNDN);
        ;
        mpfr_mul(r9959958, r9959955, r9959955, MPFR_RNDN);
        mpfr_mul(r9959959, r9959958, r9959955, MPFR_RNDN);
        mpfr_mul(r9959960, r9959957, r9959959, MPFR_RNDN);
        mpfr_add(r9959961, r9959956, r9959960, MPFR_RNDN);
        ;
        mpfr_mul(r9959963, r9959959, r9959955, MPFR_RNDN);
        mpfr_mul(r9959964, r9959963, r9959955, MPFR_RNDN);
        mpfr_mul(r9959965, r9959962, r9959964, MPFR_RNDN);
        mpfr_add(r9959966, r9959961, r9959965, MPFR_RNDN);
        return mpfr_get_d(r9959966, MPFR_RNDN);
}

static mpfr_t r9959967, r9959968, r9959969, r9959970, r9959971, r9959972, r9959973, r9959974, r9959975, r9959976, r9959977, r9959978, r9959979, r9959980, r9959981;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9959967, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9959968);
        mpfr_init(r9959969);
        mpfr_init_set_str(r9959970, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9959971);
        mpfr_init(r9959972);
        mpfr_init(r9959973);
        mpfr_init(r9959974);
        mpfr_init_set_str(r9959975, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9959976, "3", 10, MPFR_RNDN);
        mpfr_init(r9959977);
        mpfr_init(r9959978);
        mpfr_init(r9959979);
        mpfr_init(r9959980);
        mpfr_init(r9959981);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9959968, x, MPFR_RNDN);
        mpfr_mul(r9959969, r9959967, r9959968, MPFR_RNDN);
        ;
        mpfr_mul(r9959971, r9959968, r9959968, MPFR_RNDN);
        mpfr_mul(r9959972, r9959971, r9959968, MPFR_RNDN);
        mpfr_mul(r9959973, r9959970, r9959972, MPFR_RNDN);
        mpfr_add(r9959974, r9959969, r9959973, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9959977, r9959968, r9959976, MPFR_RNDN);
        mpfr_mul(r9959978, r9959977, r9959968, MPFR_RNDN);
        mpfr_mul(r9959979, r9959978, r9959968, MPFR_RNDN);
        mpfr_mul(r9959980, r9959975, r9959979, MPFR_RNDN);
        mpfr_add(r9959981, r9959974, r9959980, MPFR_RNDN);
        return mpfr_get_d(r9959981, MPFR_RNDN);
}

static mpfr_t r9959982, r9959983, r9959984, r9959985, r9959986, r9959987, r9959988, r9959989, r9959990, r9959991, r9959992, r9959993, r9959994, r9959995, r9959996;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9959982, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9959983);
        mpfr_init(r9959984);
        mpfr_init_set_str(r9959985, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9959986);
        mpfr_init(r9959987);
        mpfr_init(r9959988);
        mpfr_init(r9959989);
        mpfr_init_set_str(r9959990, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9959991, "3", 10, MPFR_RNDN);
        mpfr_init(r9959992);
        mpfr_init(r9959993);
        mpfr_init(r9959994);
        mpfr_init(r9959995);
        mpfr_init(r9959996);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9959983, x, MPFR_RNDN);
        mpfr_mul(r9959984, r9959982, r9959983, MPFR_RNDN);
        ;
        mpfr_mul(r9959986, r9959983, r9959983, MPFR_RNDN);
        mpfr_mul(r9959987, r9959986, r9959983, MPFR_RNDN);
        mpfr_mul(r9959988, r9959985, r9959987, MPFR_RNDN);
        mpfr_add(r9959989, r9959984, r9959988, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9959992, r9959983, r9959991, MPFR_RNDN);
        mpfr_mul(r9959993, r9959992, r9959983, MPFR_RNDN);
        mpfr_mul(r9959994, r9959993, r9959983, MPFR_RNDN);
        mpfr_mul(r9959995, r9959990, r9959994, MPFR_RNDN);
        mpfr_add(r9959996, r9959989, r9959995, MPFR_RNDN);
        return mpfr_get_d(r9959996, MPFR_RNDN);
}

