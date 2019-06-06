#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r3748894 = 1.0;
        float r3748895 = -6.0;
        float r3748896 = x;
        float r3748897 = r3748895 * r3748896;
        float r3748898 = r3748894 + r3748897;
        float r3748899 = 7.5;
        float r3748900 = r3748896 * r3748896;
        float r3748901 = r3748899 * r3748900;
        float r3748902 = r3748898 + r3748901;
        float r3748903 = -3.333333;
        float r3748904 = r3748900 * r3748896;
        float r3748905 = r3748903 * r3748904;
        float r3748906 = r3748902 + r3748905;
        float r3748907 = 0.625;
        float r3748908 = r3748904 * r3748896;
        float r3748909 = r3748907 * r3748908;
        float r3748910 = r3748906 + r3748909;
        float r3748911 = -0.05;
        float r3748912 = r3748908 * r3748896;
        float r3748913 = r3748911 * r3748912;
        float r3748914 = r3748910 + r3748913;
        float r3748915 = 0.001389;
        float r3748916 = r3748912 * r3748896;
        float r3748917 = r3748915 * r3748916;
        float r3748918 = r3748914 + r3748917;
        return r3748918;
}

double f_id(double x) {
        double r3748919 = 1.0;
        double r3748920 = -6.0;
        double r3748921 = x;
        double r3748922 = r3748920 * r3748921;
        double r3748923 = r3748919 + r3748922;
        double r3748924 = 7.5;
        double r3748925 = r3748921 * r3748921;
        double r3748926 = r3748924 * r3748925;
        double r3748927 = r3748923 + r3748926;
        double r3748928 = -3.333333;
        double r3748929 = r3748925 * r3748921;
        double r3748930 = r3748928 * r3748929;
        double r3748931 = r3748927 + r3748930;
        double r3748932 = 0.625;
        double r3748933 = r3748929 * r3748921;
        double r3748934 = r3748932 * r3748933;
        double r3748935 = r3748931 + r3748934;
        double r3748936 = -0.05;
        double r3748937 = r3748933 * r3748921;
        double r3748938 = r3748936 * r3748937;
        double r3748939 = r3748935 + r3748938;
        double r3748940 = 0.001389;
        double r3748941 = r3748937 * r3748921;
        double r3748942 = r3748940 * r3748941;
        double r3748943 = r3748939 + r3748942;
        return r3748943;
}


double f_of(float x) {
        float r3748944 = 1.0;
        float r3748945 = -6.0;
        float r3748946 = x;
        float r3748947 = r3748945 * r3748946;
        float r3748948 = r3748944 + r3748947;
        float r3748949 = 7.5;
        float r3748950 = r3748946 * r3748946;
        float r3748951 = r3748949 * r3748950;
        float r3748952 = r3748948 + r3748951;
        float r3748953 = -3.333333;
        float r3748954 = r3748950 * r3748946;
        float r3748955 = r3748953 * r3748954;
        float r3748956 = r3748952 + r3748955;
        float r3748957 = 0.625;
        float r3748958 = r3748954 * r3748946;
        float r3748959 = r3748957 * r3748958;
        float r3748960 = r3748956 + r3748959;
        float r3748961 = -0.05;
        float r3748962 = r3748958 * r3748946;
        float r3748963 = r3748961 * r3748962;
        float r3748964 = r3748960 + r3748963;
        float r3748965 = 0.001389;
        float r3748966 = r3748962 * r3748946;
        float r3748967 = r3748965 * r3748966;
        float r3748968 = r3748964 + r3748967;
        return r3748968;
}

double f_od(double x) {
        double r3748969 = 1.0;
        double r3748970 = -6.0;
        double r3748971 = x;
        double r3748972 = r3748970 * r3748971;
        double r3748973 = r3748969 + r3748972;
        double r3748974 = 7.5;
        double r3748975 = r3748971 * r3748971;
        double r3748976 = r3748974 * r3748975;
        double r3748977 = r3748973 + r3748976;
        double r3748978 = -3.333333;
        double r3748979 = r3748975 * r3748971;
        double r3748980 = r3748978 * r3748979;
        double r3748981 = r3748977 + r3748980;
        double r3748982 = 0.625;
        double r3748983 = r3748979 * r3748971;
        double r3748984 = r3748982 * r3748983;
        double r3748985 = r3748981 + r3748984;
        double r3748986 = -0.05;
        double r3748987 = r3748983 * r3748971;
        double r3748988 = r3748986 * r3748987;
        double r3748989 = r3748985 + r3748988;
        double r3748990 = 0.001389;
        double r3748991 = r3748987 * r3748971;
        double r3748992 = r3748990 * r3748991;
        double r3748993 = r3748989 + r3748992;
        return r3748993;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3748994, r3748995, r3748996, r3748997, r3748998, r3748999, r3749000, r3749001, r3749002, r3749003, r3749004, r3749005, r3749006, r3749007, r3749008, r3749009, r3749010, r3749011, r3749012, r3749013, r3749014, r3749015, r3749016, r3749017, r3749018;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3748994, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3748995, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r3748996);
        mpfr_init(r3748997);
        mpfr_init(r3748998);
        mpfr_init_set_str(r3748999, "7.5", 10, MPFR_RNDN);
        mpfr_init(r3749000);
        mpfr_init(r3749001);
        mpfr_init(r3749002);
        mpfr_init_set_str(r3749003, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r3749004);
        mpfr_init(r3749005);
        mpfr_init(r3749006);
        mpfr_init_set_str(r3749007, "0.625", 10, MPFR_RNDN);
        mpfr_init(r3749008);
        mpfr_init(r3749009);
        mpfr_init(r3749010);
        mpfr_init_set_str(r3749011, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r3749012);
        mpfr_init(r3749013);
        mpfr_init(r3749014);
        mpfr_init_set_str(r3749015, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r3749016);
        mpfr_init(r3749017);
        mpfr_init(r3749018);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3748996, x, MPFR_RNDN);
        mpfr_mul(r3748997, r3748995, r3748996, MPFR_RNDN);
        mpfr_add(r3748998, r3748994, r3748997, MPFR_RNDN);
        ;
        mpfr_mul(r3749000, r3748996, r3748996, MPFR_RNDN);
        mpfr_mul(r3749001, r3748999, r3749000, MPFR_RNDN);
        mpfr_add(r3749002, r3748998, r3749001, MPFR_RNDN);
        ;
        mpfr_mul(r3749004, r3749000, r3748996, MPFR_RNDN);
        mpfr_mul(r3749005, r3749003, r3749004, MPFR_RNDN);
        mpfr_add(r3749006, r3749002, r3749005, MPFR_RNDN);
        ;
        mpfr_mul(r3749008, r3749004, r3748996, MPFR_RNDN);
        mpfr_mul(r3749009, r3749007, r3749008, MPFR_RNDN);
        mpfr_add(r3749010, r3749006, r3749009, MPFR_RNDN);
        ;
        mpfr_mul(r3749012, r3749008, r3748996, MPFR_RNDN);
        mpfr_mul(r3749013, r3749011, r3749012, MPFR_RNDN);
        mpfr_add(r3749014, r3749010, r3749013, MPFR_RNDN);
        ;
        mpfr_mul(r3749016, r3749012, r3748996, MPFR_RNDN);
        mpfr_mul(r3749017, r3749015, r3749016, MPFR_RNDN);
        mpfr_add(r3749018, r3749014, r3749017, MPFR_RNDN);
        return mpfr_get_d(r3749018, MPFR_RNDN);
}

static mpfr_t r3749019, r3749020, r3749021, r3749022, r3749023, r3749024, r3749025, r3749026, r3749027, r3749028, r3749029, r3749030, r3749031, r3749032, r3749033, r3749034, r3749035, r3749036, r3749037, r3749038, r3749039, r3749040, r3749041, r3749042, r3749043;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749019, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749020, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r3749021);
        mpfr_init(r3749022);
        mpfr_init(r3749023);
        mpfr_init_set_str(r3749024, "7.5", 10, MPFR_RNDN);
        mpfr_init(r3749025);
        mpfr_init(r3749026);
        mpfr_init(r3749027);
        mpfr_init_set_str(r3749028, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r3749029);
        mpfr_init(r3749030);
        mpfr_init(r3749031);
        mpfr_init_set_str(r3749032, "0.625", 10, MPFR_RNDN);
        mpfr_init(r3749033);
        mpfr_init(r3749034);
        mpfr_init(r3749035);
        mpfr_init_set_str(r3749036, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r3749037);
        mpfr_init(r3749038);
        mpfr_init(r3749039);
        mpfr_init_set_str(r3749040, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r3749041);
        mpfr_init(r3749042);
        mpfr_init(r3749043);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3749021, x, MPFR_RNDN);
        mpfr_mul(r3749022, r3749020, r3749021, MPFR_RNDN);
        mpfr_add(r3749023, r3749019, r3749022, MPFR_RNDN);
        ;
        mpfr_mul(r3749025, r3749021, r3749021, MPFR_RNDN);
        mpfr_mul(r3749026, r3749024, r3749025, MPFR_RNDN);
        mpfr_add(r3749027, r3749023, r3749026, MPFR_RNDN);
        ;
        mpfr_mul(r3749029, r3749025, r3749021, MPFR_RNDN);
        mpfr_mul(r3749030, r3749028, r3749029, MPFR_RNDN);
        mpfr_add(r3749031, r3749027, r3749030, MPFR_RNDN);
        ;
        mpfr_mul(r3749033, r3749029, r3749021, MPFR_RNDN);
        mpfr_mul(r3749034, r3749032, r3749033, MPFR_RNDN);
        mpfr_add(r3749035, r3749031, r3749034, MPFR_RNDN);
        ;
        mpfr_mul(r3749037, r3749033, r3749021, MPFR_RNDN);
        mpfr_mul(r3749038, r3749036, r3749037, MPFR_RNDN);
        mpfr_add(r3749039, r3749035, r3749038, MPFR_RNDN);
        ;
        mpfr_mul(r3749041, r3749037, r3749021, MPFR_RNDN);
        mpfr_mul(r3749042, r3749040, r3749041, MPFR_RNDN);
        mpfr_add(r3749043, r3749039, r3749042, MPFR_RNDN);
        return mpfr_get_d(r3749043, MPFR_RNDN);
}

static mpfr_t r3749044, r3749045, r3749046, r3749047, r3749048, r3749049, r3749050, r3749051, r3749052, r3749053, r3749054, r3749055, r3749056, r3749057, r3749058, r3749059, r3749060, r3749061, r3749062, r3749063, r3749064, r3749065, r3749066, r3749067, r3749068;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749044, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749045, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r3749046);
        mpfr_init(r3749047);
        mpfr_init(r3749048);
        mpfr_init_set_str(r3749049, "7.5", 10, MPFR_RNDN);
        mpfr_init(r3749050);
        mpfr_init(r3749051);
        mpfr_init(r3749052);
        mpfr_init_set_str(r3749053, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r3749054);
        mpfr_init(r3749055);
        mpfr_init(r3749056);
        mpfr_init_set_str(r3749057, "0.625", 10, MPFR_RNDN);
        mpfr_init(r3749058);
        mpfr_init(r3749059);
        mpfr_init(r3749060);
        mpfr_init_set_str(r3749061, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r3749062);
        mpfr_init(r3749063);
        mpfr_init(r3749064);
        mpfr_init_set_str(r3749065, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r3749066);
        mpfr_init(r3749067);
        mpfr_init(r3749068);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3749046, x, MPFR_RNDN);
        mpfr_mul(r3749047, r3749045, r3749046, MPFR_RNDN);
        mpfr_add(r3749048, r3749044, r3749047, MPFR_RNDN);
        ;
        mpfr_mul(r3749050, r3749046, r3749046, MPFR_RNDN);
        mpfr_mul(r3749051, r3749049, r3749050, MPFR_RNDN);
        mpfr_add(r3749052, r3749048, r3749051, MPFR_RNDN);
        ;
        mpfr_mul(r3749054, r3749050, r3749046, MPFR_RNDN);
        mpfr_mul(r3749055, r3749053, r3749054, MPFR_RNDN);
        mpfr_add(r3749056, r3749052, r3749055, MPFR_RNDN);
        ;
        mpfr_mul(r3749058, r3749054, r3749046, MPFR_RNDN);
        mpfr_mul(r3749059, r3749057, r3749058, MPFR_RNDN);
        mpfr_add(r3749060, r3749056, r3749059, MPFR_RNDN);
        ;
        mpfr_mul(r3749062, r3749058, r3749046, MPFR_RNDN);
        mpfr_mul(r3749063, r3749061, r3749062, MPFR_RNDN);
        mpfr_add(r3749064, r3749060, r3749063, MPFR_RNDN);
        ;
        mpfr_mul(r3749066, r3749062, r3749046, MPFR_RNDN);
        mpfr_mul(r3749067, r3749065, r3749066, MPFR_RNDN);
        mpfr_add(r3749068, r3749064, r3749067, MPFR_RNDN);
        return mpfr_get_d(r3749068, MPFR_RNDN);
}

