#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r20712897 = 1.0;
        float r20712898 = -5.0;
        float r20712899 = x;
        float r20712900 = r20712898 * r20712899;
        float r20712901 = r20712897 + r20712900;
        float r20712902 = 5.0;
        float r20712903 = r20712899 * r20712899;
        float r20712904 = r20712902 * r20712903;
        float r20712905 = r20712901 + r20712904;
        float r20712906 = -1.666667;
        float r20712907 = r20712903 * r20712899;
        float r20712908 = r20712906 * r20712907;
        float r20712909 = r20712905 + r20712908;
        float r20712910 = 0.208333;
        float r20712911 = r20712907 * r20712899;
        float r20712912 = r20712910 * r20712911;
        float r20712913 = r20712909 + r20712912;
        float r20712914 = -0.008333;
        float r20712915 = r20712911 * r20712899;
        float r20712916 = r20712914 * r20712915;
        float r20712917 = r20712913 + r20712916;
        return r20712917;
}

double f_id(double x) {
        double r20712918 = 1.0;
        double r20712919 = -5.0;
        double r20712920 = x;
        double r20712921 = r20712919 * r20712920;
        double r20712922 = r20712918 + r20712921;
        double r20712923 = 5.0;
        double r20712924 = r20712920 * r20712920;
        double r20712925 = r20712923 * r20712924;
        double r20712926 = r20712922 + r20712925;
        double r20712927 = -1.666667;
        double r20712928 = r20712924 * r20712920;
        double r20712929 = r20712927 * r20712928;
        double r20712930 = r20712926 + r20712929;
        double r20712931 = 0.208333;
        double r20712932 = r20712928 * r20712920;
        double r20712933 = r20712931 * r20712932;
        double r20712934 = r20712930 + r20712933;
        double r20712935 = -0.008333;
        double r20712936 = r20712932 * r20712920;
        double r20712937 = r20712935 * r20712936;
        double r20712938 = r20712934 + r20712937;
        return r20712938;
}


double f_of(float x) {
        float r20712939 = x;
        float r20712940 = r20712939 * r20712939;
        float r20712941 = exp(r20712940);
        float r20712942 = 5.0;
        float r20712943 = -1.666667;
        float r20712944 = r20712943 * r20712939;
        float r20712945 = r20712942 + r20712944;
        float r20712946 = pow(r20712941, r20712945);
        float r20712947 = exp(r20712939);
        float r20712948 = 3;
        float r20712949 = pow(r20712939, r20712948);
        float r20712950 = pow(r20712947, r20712949);
        float r20712951 = -0.008333;
        float r20712952 = r20712939 * r20712951;
        float r20712953 = 0.208333;
        float r20712954 = r20712952 + r20712953;
        float r20712955 = pow(r20712950, r20712954);
        float r20712956 = 1.0;
        float r20712957 = -5.0;
        float r20712958 = r20712939 * r20712957;
        float r20712959 = r20712956 + r20712958;
        float r20712960 = exp(r20712959);
        float r20712961 = r20712955 * r20712960;
        float r20712962 = r20712946 * r20712961;
        float r20712963 = log(r20712962);
        return r20712963;
}

double f_od(double x) {
        double r20712964 = x;
        double r20712965 = r20712964 * r20712964;
        double r20712966 = exp(r20712965);
        double r20712967 = 5.0;
        double r20712968 = -1.666667;
        double r20712969 = r20712968 * r20712964;
        double r20712970 = r20712967 + r20712969;
        double r20712971 = pow(r20712966, r20712970);
        double r20712972 = exp(r20712964);
        double r20712973 = 3;
        double r20712974 = pow(r20712964, r20712973);
        double r20712975 = pow(r20712972, r20712974);
        double r20712976 = -0.008333;
        double r20712977 = r20712964 * r20712976;
        double r20712978 = 0.208333;
        double r20712979 = r20712977 + r20712978;
        double r20712980 = pow(r20712975, r20712979);
        double r20712981 = 1.0;
        double r20712982 = -5.0;
        double r20712983 = r20712964 * r20712982;
        double r20712984 = r20712981 + r20712983;
        double r20712985 = exp(r20712984);
        double r20712986 = r20712980 * r20712985;
        double r20712987 = r20712971 * r20712986;
        double r20712988 = log(r20712987);
        return r20712988;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20712989, r20712990, r20712991, r20712992, r20712993, r20712994, r20712995, r20712996, r20712997, r20712998, r20712999, r20713000, r20713001, r20713002, r20713003, r20713004, r20713005, r20713006, r20713007, r20713008, r20713009;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20712989, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20712990, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r20712991);
        mpfr_init(r20712992);
        mpfr_init(r20712993);
        mpfr_init_set_str(r20712994, "5.0", 10, MPFR_RNDN);
        mpfr_init(r20712995);
        mpfr_init(r20712996);
        mpfr_init(r20712997);
        mpfr_init_set_str(r20712998, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r20712999);
        mpfr_init(r20713000);
        mpfr_init(r20713001);
        mpfr_init_set_str(r20713002, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r20713003);
        mpfr_init(r20713004);
        mpfr_init(r20713005);
        mpfr_init_set_str(r20713006, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r20713007);
        mpfr_init(r20713008);
        mpfr_init(r20713009);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20712991, x, MPFR_RNDN);
        mpfr_mul(r20712992, r20712990, r20712991, MPFR_RNDN);
        mpfr_add(r20712993, r20712989, r20712992, MPFR_RNDN);
        ;
        mpfr_mul(r20712995, r20712991, r20712991, MPFR_RNDN);
        mpfr_mul(r20712996, r20712994, r20712995, MPFR_RNDN);
        mpfr_add(r20712997, r20712993, r20712996, MPFR_RNDN);
        ;
        mpfr_mul(r20712999, r20712995, r20712991, MPFR_RNDN);
        mpfr_mul(r20713000, r20712998, r20712999, MPFR_RNDN);
        mpfr_add(r20713001, r20712997, r20713000, MPFR_RNDN);
        ;
        mpfr_mul(r20713003, r20712999, r20712991, MPFR_RNDN);
        mpfr_mul(r20713004, r20713002, r20713003, MPFR_RNDN);
        mpfr_add(r20713005, r20713001, r20713004, MPFR_RNDN);
        ;
        mpfr_mul(r20713007, r20713003, r20712991, MPFR_RNDN);
        mpfr_mul(r20713008, r20713006, r20713007, MPFR_RNDN);
        mpfr_add(r20713009, r20713005, r20713008, MPFR_RNDN);
        return mpfr_get_d(r20713009, MPFR_RNDN);
}

static mpfr_t r20713010, r20713011, r20713012, r20713013, r20713014, r20713015, r20713016, r20713017, r20713018, r20713019, r20713020, r20713021, r20713022, r20713023, r20713024, r20713025, r20713026, r20713027, r20713028, r20713029, r20713030, r20713031, r20713032, r20713033, r20713034;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r20713010);
        mpfr_init(r20713011);
        mpfr_init(r20713012);
        mpfr_init_set_str(r20713013, "5.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713014, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r20713015);
        mpfr_init(r20713016);
        mpfr_init(r20713017);
        mpfr_init(r20713018);
        mpfr_init_set_str(r20713019, "3", 10, MPFR_RNDN);
        mpfr_init(r20713020);
        mpfr_init(r20713021);
        mpfr_init_set_str(r20713022, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r20713023);
        mpfr_init_set_str(r20713024, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r20713025);
        mpfr_init(r20713026);
        mpfr_init_set_str(r20713027, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713028, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r20713029);
        mpfr_init(r20713030);
        mpfr_init(r20713031);
        mpfr_init(r20713032);
        mpfr_init(r20713033);
        mpfr_init(r20713034);
}

double f_fm(double x) {
        mpfr_set_d(r20713010, x, MPFR_RNDN);
        mpfr_mul(r20713011, r20713010, r20713010, MPFR_RNDN);
        mpfr_exp(r20713012, r20713011, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20713015, r20713014, r20713010, MPFR_RNDN);
        mpfr_add(r20713016, r20713013, r20713015, MPFR_RNDN);
        mpfr_pow(r20713017, r20713012, r20713016, MPFR_RNDN);
        mpfr_exp(r20713018, r20713010, MPFR_RNDN);
        ;
        mpfr_pow(r20713020, r20713010, r20713019, MPFR_RNDN);
        mpfr_pow(r20713021, r20713018, r20713020, MPFR_RNDN);
        ;
        mpfr_mul(r20713023, r20713010, r20713022, MPFR_RNDN);
        ;
        mpfr_add(r20713025, r20713023, r20713024, MPFR_RNDN);
        mpfr_pow(r20713026, r20713021, r20713025, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20713029, r20713010, r20713028, MPFR_RNDN);
        mpfr_add(r20713030, r20713027, r20713029, MPFR_RNDN);
        mpfr_exp(r20713031, r20713030, MPFR_RNDN);
        mpfr_mul(r20713032, r20713026, r20713031, MPFR_RNDN);
        mpfr_mul(r20713033, r20713017, r20713032, MPFR_RNDN);
        mpfr_log(r20713034, r20713033, MPFR_RNDN);
        return mpfr_get_d(r20713034, MPFR_RNDN);
}

static mpfr_t r20713035, r20713036, r20713037, r20713038, r20713039, r20713040, r20713041, r20713042, r20713043, r20713044, r20713045, r20713046, r20713047, r20713048, r20713049, r20713050, r20713051, r20713052, r20713053, r20713054, r20713055, r20713056, r20713057, r20713058, r20713059;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r20713035);
        mpfr_init(r20713036);
        mpfr_init(r20713037);
        mpfr_init_set_str(r20713038, "5.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713039, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r20713040);
        mpfr_init(r20713041);
        mpfr_init(r20713042);
        mpfr_init(r20713043);
        mpfr_init_set_str(r20713044, "3", 10, MPFR_RNDN);
        mpfr_init(r20713045);
        mpfr_init(r20713046);
        mpfr_init_set_str(r20713047, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r20713048);
        mpfr_init_set_str(r20713049, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r20713050);
        mpfr_init(r20713051);
        mpfr_init_set_str(r20713052, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713053, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r20713054);
        mpfr_init(r20713055);
        mpfr_init(r20713056);
        mpfr_init(r20713057);
        mpfr_init(r20713058);
        mpfr_init(r20713059);
}

double f_dm(double x) {
        mpfr_set_d(r20713035, x, MPFR_RNDN);
        mpfr_mul(r20713036, r20713035, r20713035, MPFR_RNDN);
        mpfr_exp(r20713037, r20713036, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20713040, r20713039, r20713035, MPFR_RNDN);
        mpfr_add(r20713041, r20713038, r20713040, MPFR_RNDN);
        mpfr_pow(r20713042, r20713037, r20713041, MPFR_RNDN);
        mpfr_exp(r20713043, r20713035, MPFR_RNDN);
        ;
        mpfr_pow(r20713045, r20713035, r20713044, MPFR_RNDN);
        mpfr_pow(r20713046, r20713043, r20713045, MPFR_RNDN);
        ;
        mpfr_mul(r20713048, r20713035, r20713047, MPFR_RNDN);
        ;
        mpfr_add(r20713050, r20713048, r20713049, MPFR_RNDN);
        mpfr_pow(r20713051, r20713046, r20713050, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20713054, r20713035, r20713053, MPFR_RNDN);
        mpfr_add(r20713055, r20713052, r20713054, MPFR_RNDN);
        mpfr_exp(r20713056, r20713055, MPFR_RNDN);
        mpfr_mul(r20713057, r20713051, r20713056, MPFR_RNDN);
        mpfr_mul(r20713058, r20713042, r20713057, MPFR_RNDN);
        mpfr_log(r20713059, r20713058, MPFR_RNDN);
        return mpfr_get_d(r20713059, MPFR_RNDN);
}

