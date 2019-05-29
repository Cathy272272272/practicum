#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7055923 = -0.3125;
        float r7055924 = 6.5625;
        float r7055925 = x;
        float r7055926 = r7055925 * r7055925;
        float r7055927 = r7055924 * r7055926;
        float r7055928 = r7055923 + r7055927;
        float r7055929 = -19.6875;
        float r7055930 = r7055926 * r7055925;
        float r7055931 = r7055930 * r7055925;
        float r7055932 = r7055929 * r7055931;
        float r7055933 = r7055928 + r7055932;
        float r7055934 = 14.4375;
        float r7055935 = r7055931 * r7055925;
        float r7055936 = r7055935 * r7055925;
        float r7055937 = r7055934 * r7055936;
        float r7055938 = r7055933 + r7055937;
        return r7055938;
}

double f_id(double x) {
        double r7055939 = -0.3125;
        double r7055940 = 6.5625;
        double r7055941 = x;
        double r7055942 = r7055941 * r7055941;
        double r7055943 = r7055940 * r7055942;
        double r7055944 = r7055939 + r7055943;
        double r7055945 = -19.6875;
        double r7055946 = r7055942 * r7055941;
        double r7055947 = r7055946 * r7055941;
        double r7055948 = r7055945 * r7055947;
        double r7055949 = r7055944 + r7055948;
        double r7055950 = 14.4375;
        double r7055951 = r7055947 * r7055941;
        double r7055952 = r7055951 * r7055941;
        double r7055953 = r7055950 * r7055952;
        double r7055954 = r7055949 + r7055953;
        return r7055954;
}


double f_of(float x) {
        float r7055955 = x;
        float r7055956 = 6.5625;
        float r7055957 = r7055955 * r7055956;
        float r7055958 = r7055957 * r7055955;
        float r7055959 = -0.3125;
        float r7055960 = r7055958 + r7055959;
        float r7055961 = r7055955 * r7055955;
        float r7055962 = r7055961 * r7055961;
        float r7055963 = -19.6875;
        float r7055964 = 14.4375;
        float r7055965 = r7055961 * r7055964;
        float r7055966 = cbrt(r7055965);
        float r7055967 = r7055966 * r7055966;
        float r7055968 = r7055967 * r7055966;
        float r7055969 = r7055963 + r7055968;
        float r7055970 = r7055962 * r7055969;
        float r7055971 = r7055960 + r7055970;
        return r7055971;
}

double f_od(double x) {
        double r7055972 = x;
        double r7055973 = 6.5625;
        double r7055974 = r7055972 * r7055973;
        double r7055975 = r7055974 * r7055972;
        double r7055976 = -0.3125;
        double r7055977 = r7055975 + r7055976;
        double r7055978 = r7055972 * r7055972;
        double r7055979 = r7055978 * r7055978;
        double r7055980 = -19.6875;
        double r7055981 = 14.4375;
        double r7055982 = r7055978 * r7055981;
        double r7055983 = cbrt(r7055982);
        double r7055984 = r7055983 * r7055983;
        double r7055985 = r7055984 * r7055983;
        double r7055986 = r7055980 + r7055985;
        double r7055987 = r7055979 * r7055986;
        double r7055988 = r7055977 + r7055987;
        return r7055988;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7055989, r7055990, r7055991, r7055992, r7055993, r7055994, r7055995, r7055996, r7055997, r7055998, r7055999, r7056000, r7056001, r7056002, r7056003, r7056004;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7055989, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r7055990, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7055991);
        mpfr_init(r7055992);
        mpfr_init(r7055993);
        mpfr_init(r7055994);
        mpfr_init_set_str(r7055995, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r7055996);
        mpfr_init(r7055997);
        mpfr_init(r7055998);
        mpfr_init(r7055999);
        mpfr_init_set_str(r7056000, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7056001);
        mpfr_init(r7056002);
        mpfr_init(r7056003);
        mpfr_init(r7056004);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7055991, x, MPFR_RNDN);
        mpfr_mul(r7055992, r7055991, r7055991, MPFR_RNDN);
        mpfr_mul(r7055993, r7055990, r7055992, MPFR_RNDN);
        mpfr_add(r7055994, r7055989, r7055993, MPFR_RNDN);
        ;
        mpfr_mul(r7055996, r7055992, r7055991, MPFR_RNDN);
        mpfr_mul(r7055997, r7055996, r7055991, MPFR_RNDN);
        mpfr_mul(r7055998, r7055995, r7055997, MPFR_RNDN);
        mpfr_add(r7055999, r7055994, r7055998, MPFR_RNDN);
        ;
        mpfr_mul(r7056001, r7055997, r7055991, MPFR_RNDN);
        mpfr_mul(r7056002, r7056001, r7055991, MPFR_RNDN);
        mpfr_mul(r7056003, r7056000, r7056002, MPFR_RNDN);
        mpfr_add(r7056004, r7055999, r7056003, MPFR_RNDN);
        return mpfr_get_d(r7056004, MPFR_RNDN);
}

static mpfr_t r7056005, r7056006, r7056007, r7056008, r7056009, r7056010, r7056011, r7056012, r7056013, r7056014, r7056015, r7056016, r7056017, r7056018, r7056019, r7056020, r7056021;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7056005);
        mpfr_init_set_str(r7056006, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7056007);
        mpfr_init(r7056008);
        mpfr_init_set_str(r7056009, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r7056010);
        mpfr_init(r7056011);
        mpfr_init(r7056012);
        mpfr_init_set_str(r7056013, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056014, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7056015);
        mpfr_init(r7056016);
        mpfr_init(r7056017);
        mpfr_init(r7056018);
        mpfr_init(r7056019);
        mpfr_init(r7056020);
        mpfr_init(r7056021);
}

double f_fm(double x) {
        mpfr_set_d(r7056005, x, MPFR_RNDN);
        ;
        mpfr_mul(r7056007, r7056005, r7056006, MPFR_RNDN);
        mpfr_mul(r7056008, r7056007, r7056005, MPFR_RNDN);
        ;
        mpfr_add(r7056010, r7056008, r7056009, MPFR_RNDN);
        mpfr_mul(r7056011, r7056005, r7056005, MPFR_RNDN);
        mpfr_mul(r7056012, r7056011, r7056011, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7056015, r7056011, r7056014, MPFR_RNDN);
        mpfr_cbrt(r7056016, r7056015, MPFR_RNDN);
        mpfr_mul(r7056017, r7056016, r7056016, MPFR_RNDN);
        mpfr_mul(r7056018, r7056017, r7056016, MPFR_RNDN);
        mpfr_add(r7056019, r7056013, r7056018, MPFR_RNDN);
        mpfr_mul(r7056020, r7056012, r7056019, MPFR_RNDN);
        mpfr_add(r7056021, r7056010, r7056020, MPFR_RNDN);
        return mpfr_get_d(r7056021, MPFR_RNDN);
}

static mpfr_t r7056022, r7056023, r7056024, r7056025, r7056026, r7056027, r7056028, r7056029, r7056030, r7056031, r7056032, r7056033, r7056034, r7056035, r7056036, r7056037, r7056038;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7056022);
        mpfr_init_set_str(r7056023, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7056024);
        mpfr_init(r7056025);
        mpfr_init_set_str(r7056026, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r7056027);
        mpfr_init(r7056028);
        mpfr_init(r7056029);
        mpfr_init_set_str(r7056030, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056031, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7056032);
        mpfr_init(r7056033);
        mpfr_init(r7056034);
        mpfr_init(r7056035);
        mpfr_init(r7056036);
        mpfr_init(r7056037);
        mpfr_init(r7056038);
}

double f_dm(double x) {
        mpfr_set_d(r7056022, x, MPFR_RNDN);
        ;
        mpfr_mul(r7056024, r7056022, r7056023, MPFR_RNDN);
        mpfr_mul(r7056025, r7056024, r7056022, MPFR_RNDN);
        ;
        mpfr_add(r7056027, r7056025, r7056026, MPFR_RNDN);
        mpfr_mul(r7056028, r7056022, r7056022, MPFR_RNDN);
        mpfr_mul(r7056029, r7056028, r7056028, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7056032, r7056028, r7056031, MPFR_RNDN);
        mpfr_cbrt(r7056033, r7056032, MPFR_RNDN);
        mpfr_mul(r7056034, r7056033, r7056033, MPFR_RNDN);
        mpfr_mul(r7056035, r7056034, r7056033, MPFR_RNDN);
        mpfr_add(r7056036, r7056030, r7056035, MPFR_RNDN);
        mpfr_mul(r7056037, r7056029, r7056036, MPFR_RNDN);
        mpfr_add(r7056038, r7056027, r7056037, MPFR_RNDN);
        return mpfr_get_d(r7056038, MPFR_RNDN);
}

