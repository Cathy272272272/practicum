#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r31480862 = -0.3125;
        float r31480863 = 6.5625;
        float r31480864 = x;
        float r31480865 = r31480864 * r31480864;
        float r31480866 = r31480863 * r31480865;
        float r31480867 = r31480862 + r31480866;
        float r31480868 = -19.6875;
        float r31480869 = r31480865 * r31480864;
        float r31480870 = r31480869 * r31480864;
        float r31480871 = r31480868 * r31480870;
        float r31480872 = r31480867 + r31480871;
        float r31480873 = 14.4375;
        float r31480874 = r31480870 * r31480864;
        float r31480875 = r31480874 * r31480864;
        float r31480876 = r31480873 * r31480875;
        float r31480877 = r31480872 + r31480876;
        return r31480877;
}

double f_id(double x) {
        double r31480878 = -0.3125;
        double r31480879 = 6.5625;
        double r31480880 = x;
        double r31480881 = r31480880 * r31480880;
        double r31480882 = r31480879 * r31480881;
        double r31480883 = r31480878 + r31480882;
        double r31480884 = -19.6875;
        double r31480885 = r31480881 * r31480880;
        double r31480886 = r31480885 * r31480880;
        double r31480887 = r31480884 * r31480886;
        double r31480888 = r31480883 + r31480887;
        double r31480889 = 14.4375;
        double r31480890 = r31480886 * r31480880;
        double r31480891 = r31480890 * r31480880;
        double r31480892 = r31480889 * r31480891;
        double r31480893 = r31480888 + r31480892;
        return r31480893;
}


double f_of(float x) {
        float r31480894 = x;
        float r31480895 = 6.5625;
        float r31480896 = r31480894 * r31480895;
        float r31480897 = r31480896 * r31480894;
        float r31480898 = -0.3125;
        float r31480899 = r31480897 + r31480898;
        float r31480900 = 3;
        float r31480901 = pow(r31480899, r31480900);
        float r31480902 = pow(r31480901, r31480900);
        float r31480903 = r31480894 * r31480894;
        float r31480904 = r31480903 * r31480903;
        float r31480905 = -19.6875;
        float r31480906 = 14.4375;
        float r31480907 = r31480903 * r31480906;
        float r31480908 = r31480905 + r31480907;
        float r31480909 = r31480904 * r31480908;
        float r31480910 = pow(r31480909, r31480900);
        float r31480911 = r31480894 * r31480906;
        float r31480912 = r31480911 * r31480894;
        float r31480913 = r31480912 + r31480905;
        float r31480914 = r31480904 * r31480913;
        float r31480915 = r31480914 * r31480914;
        float r31480916 = r31480915 * r31480914;
        float r31480917 = r31480910 * r31480916;
        float r31480918 = r31480917 * r31480910;
        float r31480919 = r31480902 + r31480918;
        float r31480920 = r31480906 * r31480894;
        float r31480921 = r31480920 * r31480894;
        float r31480922 = r31480905 + r31480921;
        float r31480923 = r31480904 * r31480922;
        float r31480924 = pow(r31480923, r31480900);
        float r31480925 = r31480894 * r31480896;
        float r31480926 = r31480925 + r31480898;
        float r31480927 = r31480926 * r31480926;
        float r31480928 = -r31480926;
        float r31480929 = r31480927 * r31480928;
        float r31480930 = r31480924 + r31480929;
        float r31480931 = r31480924 * r31480930;
        float r31480932 = pow(r31480926, r31480900);
        float r31480933 = r31480932 * r31480932;
        float r31480934 = r31480931 + r31480933;
        float r31480935 = r31480919 / r31480934;
        float r31480936 = r31480906 * r31480903;
        float r31480937 = r31480936 + r31480905;
        float r31480938 = r31480904 * r31480937;
        float r31480939 = r31480938 - r31480926;
        float r31480940 = r31480939 * r31480938;
        float r31480941 = r31480940 + r31480927;
        float r31480942 = r31480935 / r31480941;
        return r31480942;
}

double f_od(double x) {
        double r31480943 = x;
        double r31480944 = 6.5625;
        double r31480945 = r31480943 * r31480944;
        double r31480946 = r31480945 * r31480943;
        double r31480947 = -0.3125;
        double r31480948 = r31480946 + r31480947;
        double r31480949 = 3;
        double r31480950 = pow(r31480948, r31480949);
        double r31480951 = pow(r31480950, r31480949);
        double r31480952 = r31480943 * r31480943;
        double r31480953 = r31480952 * r31480952;
        double r31480954 = -19.6875;
        double r31480955 = 14.4375;
        double r31480956 = r31480952 * r31480955;
        double r31480957 = r31480954 + r31480956;
        double r31480958 = r31480953 * r31480957;
        double r31480959 = pow(r31480958, r31480949);
        double r31480960 = r31480943 * r31480955;
        double r31480961 = r31480960 * r31480943;
        double r31480962 = r31480961 + r31480954;
        double r31480963 = r31480953 * r31480962;
        double r31480964 = r31480963 * r31480963;
        double r31480965 = r31480964 * r31480963;
        double r31480966 = r31480959 * r31480965;
        double r31480967 = r31480966 * r31480959;
        double r31480968 = r31480951 + r31480967;
        double r31480969 = r31480955 * r31480943;
        double r31480970 = r31480969 * r31480943;
        double r31480971 = r31480954 + r31480970;
        double r31480972 = r31480953 * r31480971;
        double r31480973 = pow(r31480972, r31480949);
        double r31480974 = r31480943 * r31480945;
        double r31480975 = r31480974 + r31480947;
        double r31480976 = r31480975 * r31480975;
        double r31480977 = -r31480975;
        double r31480978 = r31480976 * r31480977;
        double r31480979 = r31480973 + r31480978;
        double r31480980 = r31480973 * r31480979;
        double r31480981 = pow(r31480975, r31480949);
        double r31480982 = r31480981 * r31480981;
        double r31480983 = r31480980 + r31480982;
        double r31480984 = r31480968 / r31480983;
        double r31480985 = r31480955 * r31480952;
        double r31480986 = r31480985 + r31480954;
        double r31480987 = r31480953 * r31480986;
        double r31480988 = r31480987 - r31480975;
        double r31480989 = r31480988 * r31480987;
        double r31480990 = r31480989 + r31480976;
        double r31480991 = r31480984 / r31480990;
        return r31480991;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31480992, r31480993, r31480994, r31480995, r31480996, r31480997, r31480998, r31480999, r31481000, r31481001, r31481002, r31481003, r31481004, r31481005, r31481006, r31481007;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31480992, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r31480993, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r31480994);
        mpfr_init(r31480995);
        mpfr_init(r31480996);
        mpfr_init(r31480997);
        mpfr_init_set_str(r31480998, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r31480999);
        mpfr_init(r31481000);
        mpfr_init(r31481001);
        mpfr_init(r31481002);
        mpfr_init_set_str(r31481003, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r31481004);
        mpfr_init(r31481005);
        mpfr_init(r31481006);
        mpfr_init(r31481007);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r31480994, x, MPFR_RNDN);
        mpfr_mul(r31480995, r31480994, r31480994, MPFR_RNDN);
        mpfr_mul(r31480996, r31480993, r31480995, MPFR_RNDN);
        mpfr_add(r31480997, r31480992, r31480996, MPFR_RNDN);
        ;
        mpfr_mul(r31480999, r31480995, r31480994, MPFR_RNDN);
        mpfr_mul(r31481000, r31480999, r31480994, MPFR_RNDN);
        mpfr_mul(r31481001, r31480998, r31481000, MPFR_RNDN);
        mpfr_add(r31481002, r31480997, r31481001, MPFR_RNDN);
        ;
        mpfr_mul(r31481004, r31481000, r31480994, MPFR_RNDN);
        mpfr_mul(r31481005, r31481004, r31480994, MPFR_RNDN);
        mpfr_mul(r31481006, r31481003, r31481005, MPFR_RNDN);
        mpfr_add(r31481007, r31481002, r31481006, MPFR_RNDN);
        return mpfr_get_d(r31481007, MPFR_RNDN);
}

static mpfr_t r31481008, r31481009, r31481010, r31481011, r31481012, r31481013, r31481014, r31481015, r31481016, r31481017, r31481018, r31481019, r31481020, r31481021, r31481022, r31481023, r31481024, r31481025, r31481026, r31481027, r31481028, r31481029, r31481030, r31481031, r31481032, r31481033, r31481034, r31481035, r31481036, r31481037, r31481038, r31481039, r31481040, r31481041, r31481042, r31481043, r31481044, r31481045, r31481046, r31481047, r31481048, r31481049, r31481050, r31481051, r31481052, r31481053, r31481054, r31481055, r31481056;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31481008);
        mpfr_init_set_str(r31481009, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r31481010);
        mpfr_init(r31481011);
        mpfr_init_set_str(r31481012, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r31481013);
        mpfr_init_set_str(r31481014, "3", 10, MPFR_RNDN);
        mpfr_init(r31481015);
        mpfr_init(r31481016);
        mpfr_init(r31481017);
        mpfr_init(r31481018);
        mpfr_init_set_str(r31481019, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r31481020, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r31481021);
        mpfr_init(r31481022);
        mpfr_init(r31481023);
        mpfr_init(r31481024);
        mpfr_init(r31481025);
        mpfr_init(r31481026);
        mpfr_init(r31481027);
        mpfr_init(r31481028);
        mpfr_init(r31481029);
        mpfr_init(r31481030);
        mpfr_init(r31481031);
        mpfr_init(r31481032);
        mpfr_init(r31481033);
        mpfr_init(r31481034);
        mpfr_init(r31481035);
        mpfr_init(r31481036);
        mpfr_init(r31481037);
        mpfr_init(r31481038);
        mpfr_init(r31481039);
        mpfr_init(r31481040);
        mpfr_init(r31481041);
        mpfr_init(r31481042);
        mpfr_init(r31481043);
        mpfr_init(r31481044);
        mpfr_init(r31481045);
        mpfr_init(r31481046);
        mpfr_init(r31481047);
        mpfr_init(r31481048);
        mpfr_init(r31481049);
        mpfr_init(r31481050);
        mpfr_init(r31481051);
        mpfr_init(r31481052);
        mpfr_init(r31481053);
        mpfr_init(r31481054);
        mpfr_init(r31481055);
        mpfr_init(r31481056);
}

double f_fm(double x) {
        mpfr_set_d(r31481008, x, MPFR_RNDN);
        ;
        mpfr_mul(r31481010, r31481008, r31481009, MPFR_RNDN);
        mpfr_mul(r31481011, r31481010, r31481008, MPFR_RNDN);
        ;
        mpfr_add(r31481013, r31481011, r31481012, MPFR_RNDN);
        ;
        mpfr_pow(r31481015, r31481013, r31481014, MPFR_RNDN);
        mpfr_pow(r31481016, r31481015, r31481014, MPFR_RNDN);
        mpfr_mul(r31481017, r31481008, r31481008, MPFR_RNDN);
        mpfr_mul(r31481018, r31481017, r31481017, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r31481021, r31481017, r31481020, MPFR_RNDN);
        mpfr_add(r31481022, r31481019, r31481021, MPFR_RNDN);
        mpfr_mul(r31481023, r31481018, r31481022, MPFR_RNDN);
        mpfr_pow(r31481024, r31481023, r31481014, MPFR_RNDN);
        mpfr_mul(r31481025, r31481008, r31481020, MPFR_RNDN);
        mpfr_mul(r31481026, r31481025, r31481008, MPFR_RNDN);
        mpfr_add(r31481027, r31481026, r31481019, MPFR_RNDN);
        mpfr_mul(r31481028, r31481018, r31481027, MPFR_RNDN);
        mpfr_mul(r31481029, r31481028, r31481028, MPFR_RNDN);
        mpfr_mul(r31481030, r31481029, r31481028, MPFR_RNDN);
        mpfr_mul(r31481031, r31481024, r31481030, MPFR_RNDN);
        mpfr_mul(r31481032, r31481031, r31481024, MPFR_RNDN);
        mpfr_add(r31481033, r31481016, r31481032, MPFR_RNDN);
        mpfr_mul(r31481034, r31481020, r31481008, MPFR_RNDN);
        mpfr_mul(r31481035, r31481034, r31481008, MPFR_RNDN);
        mpfr_add(r31481036, r31481019, r31481035, MPFR_RNDN);
        mpfr_mul(r31481037, r31481018, r31481036, MPFR_RNDN);
        mpfr_pow(r31481038, r31481037, r31481014, MPFR_RNDN);
        mpfr_mul(r31481039, r31481008, r31481010, MPFR_RNDN);
        mpfr_add(r31481040, r31481039, r31481012, MPFR_RNDN);
        mpfr_mul(r31481041, r31481040, r31481040, MPFR_RNDN);
        mpfr_neg(r31481042, r31481040, MPFR_RNDN);
        mpfr_mul(r31481043, r31481041, r31481042, MPFR_RNDN);
        mpfr_add(r31481044, r31481038, r31481043, MPFR_RNDN);
        mpfr_mul(r31481045, r31481038, r31481044, MPFR_RNDN);
        mpfr_pow(r31481046, r31481040, r31481014, MPFR_RNDN);
        mpfr_mul(r31481047, r31481046, r31481046, MPFR_RNDN);
        mpfr_add(r31481048, r31481045, r31481047, MPFR_RNDN);
        mpfr_div(r31481049, r31481033, r31481048, MPFR_RNDN);
        mpfr_mul(r31481050, r31481020, r31481017, MPFR_RNDN);
        mpfr_add(r31481051, r31481050, r31481019, MPFR_RNDN);
        mpfr_mul(r31481052, r31481018, r31481051, MPFR_RNDN);
        mpfr_sub(r31481053, r31481052, r31481040, MPFR_RNDN);
        mpfr_mul(r31481054, r31481053, r31481052, MPFR_RNDN);
        mpfr_add(r31481055, r31481054, r31481041, MPFR_RNDN);
        mpfr_div(r31481056, r31481049, r31481055, MPFR_RNDN);
        return mpfr_get_d(r31481056, MPFR_RNDN);
}

static mpfr_t r31481057, r31481058, r31481059, r31481060, r31481061, r31481062, r31481063, r31481064, r31481065, r31481066, r31481067, r31481068, r31481069, r31481070, r31481071, r31481072, r31481073, r31481074, r31481075, r31481076, r31481077, r31481078, r31481079, r31481080, r31481081, r31481082, r31481083, r31481084, r31481085, r31481086, r31481087, r31481088, r31481089, r31481090, r31481091, r31481092, r31481093, r31481094, r31481095, r31481096, r31481097, r31481098, r31481099, r31481100, r31481101, r31481102, r31481103, r31481104, r31481105;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31481057);
        mpfr_init_set_str(r31481058, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r31481059);
        mpfr_init(r31481060);
        mpfr_init_set_str(r31481061, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r31481062);
        mpfr_init_set_str(r31481063, "3", 10, MPFR_RNDN);
        mpfr_init(r31481064);
        mpfr_init(r31481065);
        mpfr_init(r31481066);
        mpfr_init(r31481067);
        mpfr_init_set_str(r31481068, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r31481069, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r31481070);
        mpfr_init(r31481071);
        mpfr_init(r31481072);
        mpfr_init(r31481073);
        mpfr_init(r31481074);
        mpfr_init(r31481075);
        mpfr_init(r31481076);
        mpfr_init(r31481077);
        mpfr_init(r31481078);
        mpfr_init(r31481079);
        mpfr_init(r31481080);
        mpfr_init(r31481081);
        mpfr_init(r31481082);
        mpfr_init(r31481083);
        mpfr_init(r31481084);
        mpfr_init(r31481085);
        mpfr_init(r31481086);
        mpfr_init(r31481087);
        mpfr_init(r31481088);
        mpfr_init(r31481089);
        mpfr_init(r31481090);
        mpfr_init(r31481091);
        mpfr_init(r31481092);
        mpfr_init(r31481093);
        mpfr_init(r31481094);
        mpfr_init(r31481095);
        mpfr_init(r31481096);
        mpfr_init(r31481097);
        mpfr_init(r31481098);
        mpfr_init(r31481099);
        mpfr_init(r31481100);
        mpfr_init(r31481101);
        mpfr_init(r31481102);
        mpfr_init(r31481103);
        mpfr_init(r31481104);
        mpfr_init(r31481105);
}

double f_dm(double x) {
        mpfr_set_d(r31481057, x, MPFR_RNDN);
        ;
        mpfr_mul(r31481059, r31481057, r31481058, MPFR_RNDN);
        mpfr_mul(r31481060, r31481059, r31481057, MPFR_RNDN);
        ;
        mpfr_add(r31481062, r31481060, r31481061, MPFR_RNDN);
        ;
        mpfr_pow(r31481064, r31481062, r31481063, MPFR_RNDN);
        mpfr_pow(r31481065, r31481064, r31481063, MPFR_RNDN);
        mpfr_mul(r31481066, r31481057, r31481057, MPFR_RNDN);
        mpfr_mul(r31481067, r31481066, r31481066, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r31481070, r31481066, r31481069, MPFR_RNDN);
        mpfr_add(r31481071, r31481068, r31481070, MPFR_RNDN);
        mpfr_mul(r31481072, r31481067, r31481071, MPFR_RNDN);
        mpfr_pow(r31481073, r31481072, r31481063, MPFR_RNDN);
        mpfr_mul(r31481074, r31481057, r31481069, MPFR_RNDN);
        mpfr_mul(r31481075, r31481074, r31481057, MPFR_RNDN);
        mpfr_add(r31481076, r31481075, r31481068, MPFR_RNDN);
        mpfr_mul(r31481077, r31481067, r31481076, MPFR_RNDN);
        mpfr_mul(r31481078, r31481077, r31481077, MPFR_RNDN);
        mpfr_mul(r31481079, r31481078, r31481077, MPFR_RNDN);
        mpfr_mul(r31481080, r31481073, r31481079, MPFR_RNDN);
        mpfr_mul(r31481081, r31481080, r31481073, MPFR_RNDN);
        mpfr_add(r31481082, r31481065, r31481081, MPFR_RNDN);
        mpfr_mul(r31481083, r31481069, r31481057, MPFR_RNDN);
        mpfr_mul(r31481084, r31481083, r31481057, MPFR_RNDN);
        mpfr_add(r31481085, r31481068, r31481084, MPFR_RNDN);
        mpfr_mul(r31481086, r31481067, r31481085, MPFR_RNDN);
        mpfr_pow(r31481087, r31481086, r31481063, MPFR_RNDN);
        mpfr_mul(r31481088, r31481057, r31481059, MPFR_RNDN);
        mpfr_add(r31481089, r31481088, r31481061, MPFR_RNDN);
        mpfr_mul(r31481090, r31481089, r31481089, MPFR_RNDN);
        mpfr_neg(r31481091, r31481089, MPFR_RNDN);
        mpfr_mul(r31481092, r31481090, r31481091, MPFR_RNDN);
        mpfr_add(r31481093, r31481087, r31481092, MPFR_RNDN);
        mpfr_mul(r31481094, r31481087, r31481093, MPFR_RNDN);
        mpfr_pow(r31481095, r31481089, r31481063, MPFR_RNDN);
        mpfr_mul(r31481096, r31481095, r31481095, MPFR_RNDN);
        mpfr_add(r31481097, r31481094, r31481096, MPFR_RNDN);
        mpfr_div(r31481098, r31481082, r31481097, MPFR_RNDN);
        mpfr_mul(r31481099, r31481069, r31481066, MPFR_RNDN);
        mpfr_add(r31481100, r31481099, r31481068, MPFR_RNDN);
        mpfr_mul(r31481101, r31481067, r31481100, MPFR_RNDN);
        mpfr_sub(r31481102, r31481101, r31481089, MPFR_RNDN);
        mpfr_mul(r31481103, r31481102, r31481101, MPFR_RNDN);
        mpfr_add(r31481104, r31481103, r31481090, MPFR_RNDN);
        mpfr_div(r31481105, r31481098, r31481104, MPFR_RNDN);
        return mpfr_get_d(r31481105, MPFR_RNDN);
}

