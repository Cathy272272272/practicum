#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7982881 = -1680.0;
        float r7982882 = x;
        float r7982883 = r7982881 * r7982882;
        float r7982884 = 3360.0;
        float r7982885 = r7982882 * r7982882;
        float r7982886 = r7982885 * r7982882;
        float r7982887 = r7982884 * r7982886;
        float r7982888 = r7982883 + r7982887;
        float r7982889 = -1344.0;
        float r7982890 = r7982886 * r7982882;
        float r7982891 = r7982890 * r7982882;
        float r7982892 = r7982889 * r7982891;
        float r7982893 = r7982888 + r7982892;
        float r7982894 = 128.0;
        float r7982895 = r7982891 * r7982882;
        float r7982896 = r7982895 * r7982882;
        float r7982897 = r7982894 * r7982896;
        float r7982898 = r7982893 + r7982897;
        return r7982898;
}

double f_id(double x) {
        double r7982899 = -1680.0;
        double r7982900 = x;
        double r7982901 = r7982899 * r7982900;
        double r7982902 = 3360.0;
        double r7982903 = r7982900 * r7982900;
        double r7982904 = r7982903 * r7982900;
        double r7982905 = r7982902 * r7982904;
        double r7982906 = r7982901 + r7982905;
        double r7982907 = -1344.0;
        double r7982908 = r7982904 * r7982900;
        double r7982909 = r7982908 * r7982900;
        double r7982910 = r7982907 * r7982909;
        double r7982911 = r7982906 + r7982910;
        double r7982912 = 128.0;
        double r7982913 = r7982909 * r7982900;
        double r7982914 = r7982913 * r7982900;
        double r7982915 = r7982912 * r7982914;
        double r7982916 = r7982911 + r7982915;
        return r7982916;
}


double f_of(float x) {
        float r7982917 = x;
        float r7982918 = r7982917 * r7982917;
        float r7982919 = r7982918 * r7982918;
        float r7982920 = 128.0;
        float r7982921 = r7982920 * r7982917;
        float r7982922 = r7982918 * r7982921;
        float r7982923 = -1344.0;
        float r7982924 = r7982917 * r7982923;
        float r7982925 = r7982922 + r7982924;
        float r7982926 = r7982919 * r7982925;
        float r7982927 = 3360.0;
        float r7982928 = r7982927 * r7982917;
        float r7982929 = r7982928 * r7982917;
        float r7982930 = -1680.0;
        float r7982931 = r7982929 + r7982930;
        float r7982932 = r7982917 * r7982931;
        float r7982933 = r7982926 + r7982932;
        return r7982933;
}

double f_od(double x) {
        double r7982934 = x;
        double r7982935 = r7982934 * r7982934;
        double r7982936 = r7982935 * r7982935;
        double r7982937 = 128.0;
        double r7982938 = r7982937 * r7982934;
        double r7982939 = r7982935 * r7982938;
        double r7982940 = -1344.0;
        double r7982941 = r7982934 * r7982940;
        double r7982942 = r7982939 + r7982941;
        double r7982943 = r7982936 * r7982942;
        double r7982944 = 3360.0;
        double r7982945 = r7982944 * r7982934;
        double r7982946 = r7982945 * r7982934;
        double r7982947 = -1680.0;
        double r7982948 = r7982946 + r7982947;
        double r7982949 = r7982934 * r7982948;
        double r7982950 = r7982943 + r7982949;
        return r7982950;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7982951, r7982952, r7982953, r7982954, r7982955, r7982956, r7982957, r7982958, r7982959, r7982960, r7982961, r7982962, r7982963, r7982964, r7982965, r7982966, r7982967, r7982968;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7982951, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7982952);
        mpfr_init(r7982953);
        mpfr_init_set_str(r7982954, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7982955);
        mpfr_init(r7982956);
        mpfr_init(r7982957);
        mpfr_init(r7982958);
        mpfr_init_set_str(r7982959, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7982960);
        mpfr_init(r7982961);
        mpfr_init(r7982962);
        mpfr_init(r7982963);
        mpfr_init_set_str(r7982964, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7982965);
        mpfr_init(r7982966);
        mpfr_init(r7982967);
        mpfr_init(r7982968);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7982952, x, MPFR_RNDN);
        mpfr_mul(r7982953, r7982951, r7982952, MPFR_RNDN);
        ;
        mpfr_mul(r7982955, r7982952, r7982952, MPFR_RNDN);
        mpfr_mul(r7982956, r7982955, r7982952, MPFR_RNDN);
        mpfr_mul(r7982957, r7982954, r7982956, MPFR_RNDN);
        mpfr_add(r7982958, r7982953, r7982957, MPFR_RNDN);
        ;
        mpfr_mul(r7982960, r7982956, r7982952, MPFR_RNDN);
        mpfr_mul(r7982961, r7982960, r7982952, MPFR_RNDN);
        mpfr_mul(r7982962, r7982959, r7982961, MPFR_RNDN);
        mpfr_add(r7982963, r7982958, r7982962, MPFR_RNDN);
        ;
        mpfr_mul(r7982965, r7982961, r7982952, MPFR_RNDN);
        mpfr_mul(r7982966, r7982965, r7982952, MPFR_RNDN);
        mpfr_mul(r7982967, r7982964, r7982966, MPFR_RNDN);
        mpfr_add(r7982968, r7982963, r7982967, MPFR_RNDN);
        return mpfr_get_d(r7982968, MPFR_RNDN);
}

static mpfr_t r7982969, r7982970, r7982971, r7982972, r7982973, r7982974, r7982975, r7982976, r7982977, r7982978, r7982979, r7982980, r7982981, r7982982, r7982983, r7982984, r7982985;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7982969);
        mpfr_init(r7982970);
        mpfr_init(r7982971);
        mpfr_init_set_str(r7982972, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7982973);
        mpfr_init(r7982974);
        mpfr_init_set_str(r7982975, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7982976);
        mpfr_init(r7982977);
        mpfr_init(r7982978);
        mpfr_init_set_str(r7982979, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7982980);
        mpfr_init(r7982981);
        mpfr_init_set_str(r7982982, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7982983);
        mpfr_init(r7982984);
        mpfr_init(r7982985);
}

double f_fm(double x) {
        mpfr_set_d(r7982969, x, MPFR_RNDN);
        mpfr_mul(r7982970, r7982969, r7982969, MPFR_RNDN);
        mpfr_mul(r7982971, r7982970, r7982970, MPFR_RNDN);
        ;
        mpfr_mul(r7982973, r7982972, r7982969, MPFR_RNDN);
        mpfr_mul(r7982974, r7982970, r7982973, MPFR_RNDN);
        ;
        mpfr_mul(r7982976, r7982969, r7982975, MPFR_RNDN);
        mpfr_add(r7982977, r7982974, r7982976, MPFR_RNDN);
        mpfr_mul(r7982978, r7982971, r7982977, MPFR_RNDN);
        ;
        mpfr_mul(r7982980, r7982979, r7982969, MPFR_RNDN);
        mpfr_mul(r7982981, r7982980, r7982969, MPFR_RNDN);
        ;
        mpfr_add(r7982983, r7982981, r7982982, MPFR_RNDN);
        mpfr_mul(r7982984, r7982969, r7982983, MPFR_RNDN);
        mpfr_add(r7982985, r7982978, r7982984, MPFR_RNDN);
        return mpfr_get_d(r7982985, MPFR_RNDN);
}

static mpfr_t r7982986, r7982987, r7982988, r7982989, r7982990, r7982991, r7982992, r7982993, r7982994, r7982995, r7982996, r7982997, r7982998, r7982999, r7983000, r7983001, r7983002;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7982986);
        mpfr_init(r7982987);
        mpfr_init(r7982988);
        mpfr_init_set_str(r7982989, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7982990);
        mpfr_init(r7982991);
        mpfr_init_set_str(r7982992, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7982993);
        mpfr_init(r7982994);
        mpfr_init(r7982995);
        mpfr_init_set_str(r7982996, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7982997);
        mpfr_init(r7982998);
        mpfr_init_set_str(r7982999, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7983000);
        mpfr_init(r7983001);
        mpfr_init(r7983002);
}

double f_dm(double x) {
        mpfr_set_d(r7982986, x, MPFR_RNDN);
        mpfr_mul(r7982987, r7982986, r7982986, MPFR_RNDN);
        mpfr_mul(r7982988, r7982987, r7982987, MPFR_RNDN);
        ;
        mpfr_mul(r7982990, r7982989, r7982986, MPFR_RNDN);
        mpfr_mul(r7982991, r7982987, r7982990, MPFR_RNDN);
        ;
        mpfr_mul(r7982993, r7982986, r7982992, MPFR_RNDN);
        mpfr_add(r7982994, r7982991, r7982993, MPFR_RNDN);
        mpfr_mul(r7982995, r7982988, r7982994, MPFR_RNDN);
        ;
        mpfr_mul(r7982997, r7982996, r7982986, MPFR_RNDN);
        mpfr_mul(r7982998, r7982997, r7982986, MPFR_RNDN);
        ;
        mpfr_add(r7983000, r7982998, r7982999, MPFR_RNDN);
        mpfr_mul(r7983001, r7982986, r7983000, MPFR_RNDN);
        mpfr_add(r7983002, r7982995, r7983001, MPFR_RNDN);
        return mpfr_get_d(r7983002, MPFR_RNDN);
}

