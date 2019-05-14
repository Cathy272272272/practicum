#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r12289873 = -120.0;
        float r12289874 = 720.0;
        float r12289875 = x;
        float r12289876 = r12289875 * r12289875;
        float r12289877 = r12289874 * r12289876;
        float r12289878 = r12289873 + r12289877;
        float r12289879 = -480.0;
        float r12289880 = r12289876 * r12289875;
        float r12289881 = r12289880 * r12289875;
        float r12289882 = r12289879 * r12289881;
        float r12289883 = r12289878 + r12289882;
        float r12289884 = 64.0;
        float r12289885 = r12289881 * r12289875;
        float r12289886 = r12289885 * r12289875;
        float r12289887 = r12289884 * r12289886;
        float r12289888 = r12289883 + r12289887;
        return r12289888;
}

double f_id(double x) {
        double r12289889 = -120.0;
        double r12289890 = 720.0;
        double r12289891 = x;
        double r12289892 = r12289891 * r12289891;
        double r12289893 = r12289890 * r12289892;
        double r12289894 = r12289889 + r12289893;
        double r12289895 = -480.0;
        double r12289896 = r12289892 * r12289891;
        double r12289897 = r12289896 * r12289891;
        double r12289898 = r12289895 * r12289897;
        double r12289899 = r12289894 + r12289898;
        double r12289900 = 64.0;
        double r12289901 = r12289897 * r12289891;
        double r12289902 = r12289901 * r12289891;
        double r12289903 = r12289900 * r12289902;
        double r12289904 = r12289899 + r12289903;
        return r12289904;
}


double f_of(float x) {
        float r12289905 = -120.0;
        float r12289906 = 720.0;
        float r12289907 = x;
        float r12289908 = r12289907 * r12289907;
        float r12289909 = r12289906 * r12289908;
        float r12289910 = r12289905 + r12289909;
        float r12289911 = -480.0;
        float r12289912 = r12289908 * r12289907;
        float r12289913 = r12289911 * r12289912;
        float r12289914 = r12289913 * r12289907;
        float r12289915 = r12289910 + r12289914;
        float r12289916 = 64.0;
        float r12289917 = r12289912 * r12289907;
        float r12289918 = r12289917 * r12289907;
        float r12289919 = r12289918 * r12289907;
        float r12289920 = r12289916 * r12289919;
        float r12289921 = r12289915 + r12289920;
        return r12289921;
}

double f_od(double x) {
        double r12289922 = -120.0;
        double r12289923 = 720.0;
        double r12289924 = x;
        double r12289925 = r12289924 * r12289924;
        double r12289926 = r12289923 * r12289925;
        double r12289927 = r12289922 + r12289926;
        double r12289928 = -480.0;
        double r12289929 = r12289925 * r12289924;
        double r12289930 = r12289928 * r12289929;
        double r12289931 = r12289930 * r12289924;
        double r12289932 = r12289927 + r12289931;
        double r12289933 = 64.0;
        double r12289934 = r12289929 * r12289924;
        double r12289935 = r12289934 * r12289924;
        double r12289936 = r12289935 * r12289924;
        double r12289937 = r12289933 * r12289936;
        double r12289938 = r12289932 + r12289937;
        return r12289938;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12289939, r12289940, r12289941, r12289942, r12289943, r12289944, r12289945, r12289946, r12289947, r12289948, r12289949, r12289950, r12289951, r12289952, r12289953, r12289954;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12289939, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289940, "720.0", 10, MPFR_RNDN);
        mpfr_init(r12289941);
        mpfr_init(r12289942);
        mpfr_init(r12289943);
        mpfr_init(r12289944);
        mpfr_init_set_str(r12289945, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r12289946);
        mpfr_init(r12289947);
        mpfr_init(r12289948);
        mpfr_init(r12289949);
        mpfr_init_set_str(r12289950, "64.0", 10, MPFR_RNDN);
        mpfr_init(r12289951);
        mpfr_init(r12289952);
        mpfr_init(r12289953);
        mpfr_init(r12289954);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r12289941, x, MPFR_RNDN);
        mpfr_mul(r12289942, r12289941, r12289941, MPFR_RNDN);
        mpfr_mul(r12289943, r12289940, r12289942, MPFR_RNDN);
        mpfr_add(r12289944, r12289939, r12289943, MPFR_RNDN);
        ;
        mpfr_mul(r12289946, r12289942, r12289941, MPFR_RNDN);
        mpfr_mul(r12289947, r12289946, r12289941, MPFR_RNDN);
        mpfr_mul(r12289948, r12289945, r12289947, MPFR_RNDN);
        mpfr_add(r12289949, r12289944, r12289948, MPFR_RNDN);
        ;
        mpfr_mul(r12289951, r12289947, r12289941, MPFR_RNDN);
        mpfr_mul(r12289952, r12289951, r12289941, MPFR_RNDN);
        mpfr_mul(r12289953, r12289950, r12289952, MPFR_RNDN);
        mpfr_add(r12289954, r12289949, r12289953, MPFR_RNDN);
        return mpfr_get_d(r12289954, MPFR_RNDN);
}

static mpfr_t r12289955, r12289956, r12289957, r12289958, r12289959, r12289960, r12289961, r12289962, r12289963, r12289964, r12289965, r12289966, r12289967, r12289968, r12289969, r12289970, r12289971;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12289955, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289956, "720.0", 10, MPFR_RNDN);
        mpfr_init(r12289957);
        mpfr_init(r12289958);
        mpfr_init(r12289959);
        mpfr_init(r12289960);
        mpfr_init_set_str(r12289961, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r12289962);
        mpfr_init(r12289963);
        mpfr_init(r12289964);
        mpfr_init(r12289965);
        mpfr_init_set_str(r12289966, "64.0", 10, MPFR_RNDN);
        mpfr_init(r12289967);
        mpfr_init(r12289968);
        mpfr_init(r12289969);
        mpfr_init(r12289970);
        mpfr_init(r12289971);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r12289957, x, MPFR_RNDN);
        mpfr_mul(r12289958, r12289957, r12289957, MPFR_RNDN);
        mpfr_mul(r12289959, r12289956, r12289958, MPFR_RNDN);
        mpfr_add(r12289960, r12289955, r12289959, MPFR_RNDN);
        ;
        mpfr_mul(r12289962, r12289958, r12289957, MPFR_RNDN);
        mpfr_mul(r12289963, r12289961, r12289962, MPFR_RNDN);
        mpfr_mul(r12289964, r12289963, r12289957, MPFR_RNDN);
        mpfr_add(r12289965, r12289960, r12289964, MPFR_RNDN);
        ;
        mpfr_mul(r12289967, r12289962, r12289957, MPFR_RNDN);
        mpfr_mul(r12289968, r12289967, r12289957, MPFR_RNDN);
        mpfr_mul(r12289969, r12289968, r12289957, MPFR_RNDN);
        mpfr_mul(r12289970, r12289966, r12289969, MPFR_RNDN);
        mpfr_add(r12289971, r12289965, r12289970, MPFR_RNDN);
        return mpfr_get_d(r12289971, MPFR_RNDN);
}

static mpfr_t r12289972, r12289973, r12289974, r12289975, r12289976, r12289977, r12289978, r12289979, r12289980, r12289981, r12289982, r12289983, r12289984, r12289985, r12289986, r12289987, r12289988;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12289972, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289973, "720.0", 10, MPFR_RNDN);
        mpfr_init(r12289974);
        mpfr_init(r12289975);
        mpfr_init(r12289976);
        mpfr_init(r12289977);
        mpfr_init_set_str(r12289978, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r12289979);
        mpfr_init(r12289980);
        mpfr_init(r12289981);
        mpfr_init(r12289982);
        mpfr_init_set_str(r12289983, "64.0", 10, MPFR_RNDN);
        mpfr_init(r12289984);
        mpfr_init(r12289985);
        mpfr_init(r12289986);
        mpfr_init(r12289987);
        mpfr_init(r12289988);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r12289974, x, MPFR_RNDN);
        mpfr_mul(r12289975, r12289974, r12289974, MPFR_RNDN);
        mpfr_mul(r12289976, r12289973, r12289975, MPFR_RNDN);
        mpfr_add(r12289977, r12289972, r12289976, MPFR_RNDN);
        ;
        mpfr_mul(r12289979, r12289975, r12289974, MPFR_RNDN);
        mpfr_mul(r12289980, r12289978, r12289979, MPFR_RNDN);
        mpfr_mul(r12289981, r12289980, r12289974, MPFR_RNDN);
        mpfr_add(r12289982, r12289977, r12289981, MPFR_RNDN);
        ;
        mpfr_mul(r12289984, r12289979, r12289974, MPFR_RNDN);
        mpfr_mul(r12289985, r12289984, r12289974, MPFR_RNDN);
        mpfr_mul(r12289986, r12289985, r12289974, MPFR_RNDN);
        mpfr_mul(r12289987, r12289983, r12289986, MPFR_RNDN);
        mpfr_add(r12289988, r12289982, r12289987, MPFR_RNDN);
        return mpfr_get_d(r12289988, MPFR_RNDN);
}

