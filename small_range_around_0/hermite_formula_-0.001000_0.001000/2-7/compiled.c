#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r3816868 = -1680.0;
        float r3816869 = x;
        float r3816870 = r3816868 * r3816869;
        float r3816871 = 3360.0;
        float r3816872 = r3816869 * r3816869;
        float r3816873 = r3816872 * r3816869;
        float r3816874 = r3816871 * r3816873;
        float r3816875 = r3816870 + r3816874;
        float r3816876 = -1344.0;
        float r3816877 = r3816873 * r3816869;
        float r3816878 = r3816877 * r3816869;
        float r3816879 = r3816876 * r3816878;
        float r3816880 = r3816875 + r3816879;
        float r3816881 = 128.0;
        float r3816882 = r3816878 * r3816869;
        float r3816883 = r3816882 * r3816869;
        float r3816884 = r3816881 * r3816883;
        float r3816885 = r3816880 + r3816884;
        return r3816885;
}

double f_id(double x) {
        double r3816886 = -1680.0;
        double r3816887 = x;
        double r3816888 = r3816886 * r3816887;
        double r3816889 = 3360.0;
        double r3816890 = r3816887 * r3816887;
        double r3816891 = r3816890 * r3816887;
        double r3816892 = r3816889 * r3816891;
        double r3816893 = r3816888 + r3816892;
        double r3816894 = -1344.0;
        double r3816895 = r3816891 * r3816887;
        double r3816896 = r3816895 * r3816887;
        double r3816897 = r3816894 * r3816896;
        double r3816898 = r3816893 + r3816897;
        double r3816899 = 128.0;
        double r3816900 = r3816896 * r3816887;
        double r3816901 = r3816900 * r3816887;
        double r3816902 = r3816899 * r3816901;
        double r3816903 = r3816898 + r3816902;
        return r3816903;
}


double f_of(float x) {
        float r3816904 = x;
        float r3816905 = r3816904 * r3816904;
        float r3816906 = r3816905 * r3816905;
        float r3816907 = 128.0;
        float r3816908 = r3816907 * r3816904;
        float r3816909 = r3816905 * r3816908;
        float r3816910 = -1344.0;
        float r3816911 = r3816904 * r3816910;
        float r3816912 = r3816909 + r3816911;
        float r3816913 = r3816906 * r3816912;
        float r3816914 = 3360.0;
        float r3816915 = r3816914 * r3816904;
        float r3816916 = r3816915 * r3816904;
        float r3816917 = -1680.0;
        float r3816918 = r3816916 + r3816917;
        float r3816919 = r3816904 * r3816918;
        float r3816920 = r3816913 + r3816919;
        return r3816920;
}

double f_od(double x) {
        double r3816921 = x;
        double r3816922 = r3816921 * r3816921;
        double r3816923 = r3816922 * r3816922;
        double r3816924 = 128.0;
        double r3816925 = r3816924 * r3816921;
        double r3816926 = r3816922 * r3816925;
        double r3816927 = -1344.0;
        double r3816928 = r3816921 * r3816927;
        double r3816929 = r3816926 + r3816928;
        double r3816930 = r3816923 * r3816929;
        double r3816931 = 3360.0;
        double r3816932 = r3816931 * r3816921;
        double r3816933 = r3816932 * r3816921;
        double r3816934 = -1680.0;
        double r3816935 = r3816933 + r3816934;
        double r3816936 = r3816921 * r3816935;
        double r3816937 = r3816930 + r3816936;
        return r3816937;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3816938, r3816939, r3816940, r3816941, r3816942, r3816943, r3816944, r3816945, r3816946, r3816947, r3816948, r3816949, r3816950, r3816951, r3816952, r3816953, r3816954, r3816955;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r3816938, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r3816939);
        mpfr_init(r3816940);
        mpfr_init_set_str(r3816941, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r3816942);
        mpfr_init(r3816943);
        mpfr_init(r3816944);
        mpfr_init(r3816945);
        mpfr_init_set_str(r3816946, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r3816947);
        mpfr_init(r3816948);
        mpfr_init(r3816949);
        mpfr_init(r3816950);
        mpfr_init_set_str(r3816951, "128.0", 10, MPFR_RNDN);
        mpfr_init(r3816952);
        mpfr_init(r3816953);
        mpfr_init(r3816954);
        mpfr_init(r3816955);
}

double f_im(double x) {
        ;
        mpfr_set_d(r3816939, x, MPFR_RNDN);
        mpfr_mul(r3816940, r3816938, r3816939, MPFR_RNDN);
        ;
        mpfr_mul(r3816942, r3816939, r3816939, MPFR_RNDN);
        mpfr_mul(r3816943, r3816942, r3816939, MPFR_RNDN);
        mpfr_mul(r3816944, r3816941, r3816943, MPFR_RNDN);
        mpfr_add(r3816945, r3816940, r3816944, MPFR_RNDN);
        ;
        mpfr_mul(r3816947, r3816943, r3816939, MPFR_RNDN);
        mpfr_mul(r3816948, r3816947, r3816939, MPFR_RNDN);
        mpfr_mul(r3816949, r3816946, r3816948, MPFR_RNDN);
        mpfr_add(r3816950, r3816945, r3816949, MPFR_RNDN);
        ;
        mpfr_mul(r3816952, r3816948, r3816939, MPFR_RNDN);
        mpfr_mul(r3816953, r3816952, r3816939, MPFR_RNDN);
        mpfr_mul(r3816954, r3816951, r3816953, MPFR_RNDN);
        mpfr_add(r3816955, r3816950, r3816954, MPFR_RNDN);
        return mpfr_get_d(r3816955, MPFR_RNDN);
}

static mpfr_t r3816956, r3816957, r3816958, r3816959, r3816960, r3816961, r3816962, r3816963, r3816964, r3816965, r3816966, r3816967, r3816968, r3816969, r3816970, r3816971, r3816972;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r3816956);
        mpfr_init(r3816957);
        mpfr_init(r3816958);
        mpfr_init_set_str(r3816959, "128.0", 10, MPFR_RNDN);
        mpfr_init(r3816960);
        mpfr_init(r3816961);
        mpfr_init_set_str(r3816962, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r3816963);
        mpfr_init(r3816964);
        mpfr_init(r3816965);
        mpfr_init_set_str(r3816966, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r3816967);
        mpfr_init(r3816968);
        mpfr_init_set_str(r3816969, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r3816970);
        mpfr_init(r3816971);
        mpfr_init(r3816972);
}

double f_fm(double x) {
        mpfr_set_d(r3816956, x, MPFR_RNDN);
        mpfr_mul(r3816957, r3816956, r3816956, MPFR_RNDN);
        mpfr_mul(r3816958, r3816957, r3816957, MPFR_RNDN);
        ;
        mpfr_mul(r3816960, r3816959, r3816956, MPFR_RNDN);
        mpfr_mul(r3816961, r3816957, r3816960, MPFR_RNDN);
        ;
        mpfr_mul(r3816963, r3816956, r3816962, MPFR_RNDN);
        mpfr_add(r3816964, r3816961, r3816963, MPFR_RNDN);
        mpfr_mul(r3816965, r3816958, r3816964, MPFR_RNDN);
        ;
        mpfr_mul(r3816967, r3816966, r3816956, MPFR_RNDN);
        mpfr_mul(r3816968, r3816967, r3816956, MPFR_RNDN);
        ;
        mpfr_add(r3816970, r3816968, r3816969, MPFR_RNDN);
        mpfr_mul(r3816971, r3816956, r3816970, MPFR_RNDN);
        mpfr_add(r3816972, r3816965, r3816971, MPFR_RNDN);
        return mpfr_get_d(r3816972, MPFR_RNDN);
}

static mpfr_t r3816973, r3816974, r3816975, r3816976, r3816977, r3816978, r3816979, r3816980, r3816981, r3816982, r3816983, r3816984, r3816985, r3816986, r3816987, r3816988, r3816989;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r3816973);
        mpfr_init(r3816974);
        mpfr_init(r3816975);
        mpfr_init_set_str(r3816976, "128.0", 10, MPFR_RNDN);
        mpfr_init(r3816977);
        mpfr_init(r3816978);
        mpfr_init_set_str(r3816979, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r3816980);
        mpfr_init(r3816981);
        mpfr_init(r3816982);
        mpfr_init_set_str(r3816983, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r3816984);
        mpfr_init(r3816985);
        mpfr_init_set_str(r3816986, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r3816987);
        mpfr_init(r3816988);
        mpfr_init(r3816989);
}

double f_dm(double x) {
        mpfr_set_d(r3816973, x, MPFR_RNDN);
        mpfr_mul(r3816974, r3816973, r3816973, MPFR_RNDN);
        mpfr_mul(r3816975, r3816974, r3816974, MPFR_RNDN);
        ;
        mpfr_mul(r3816977, r3816976, r3816973, MPFR_RNDN);
        mpfr_mul(r3816978, r3816974, r3816977, MPFR_RNDN);
        ;
        mpfr_mul(r3816980, r3816973, r3816979, MPFR_RNDN);
        mpfr_add(r3816981, r3816978, r3816980, MPFR_RNDN);
        mpfr_mul(r3816982, r3816975, r3816981, MPFR_RNDN);
        ;
        mpfr_mul(r3816984, r3816983, r3816973, MPFR_RNDN);
        mpfr_mul(r3816985, r3816984, r3816973, MPFR_RNDN);
        ;
        mpfr_add(r3816987, r3816985, r3816986, MPFR_RNDN);
        mpfr_mul(r3816988, r3816973, r3816987, MPFR_RNDN);
        mpfr_add(r3816989, r3816982, r3816988, MPFR_RNDN);
        return mpfr_get_d(r3816989, MPFR_RNDN);
}

