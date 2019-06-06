#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r48609843 = -0.246094;
        float r48609844 = 13.535156;
        float r48609845 = x;
        float r48609846 = r48609845 * r48609845;
        float r48609847 = r48609844 * r48609846;
        float r48609848 = r48609843 + r48609847;
        float r48609849 = -117.304688;
        float r48609850 = r48609846 * r48609845;
        float r48609851 = r48609850 * r48609845;
        float r48609852 = r48609849 * r48609851;
        float r48609853 = r48609848 + r48609852;
        float r48609854 = 351.914062;
        float r48609855 = r48609851 * r48609845;
        float r48609856 = r48609855 * r48609845;
        float r48609857 = r48609854 * r48609856;
        float r48609858 = r48609853 + r48609857;
        float r48609859 = -427.324219;
        float r48609860 = r48609856 * r48609845;
        float r48609861 = r48609860 * r48609845;
        float r48609862 = r48609859 * r48609861;
        float r48609863 = r48609858 + r48609862;
        float r48609864 = 180.425781;
        float r48609865 = r48609861 * r48609845;
        float r48609866 = r48609865 * r48609845;
        float r48609867 = r48609864 * r48609866;
        float r48609868 = r48609863 + r48609867;
        return r48609868;
}

double f_id(double x) {
        double r48609869 = -0.246094;
        double r48609870 = 13.535156;
        double r48609871 = x;
        double r48609872 = r48609871 * r48609871;
        double r48609873 = r48609870 * r48609872;
        double r48609874 = r48609869 + r48609873;
        double r48609875 = -117.304688;
        double r48609876 = r48609872 * r48609871;
        double r48609877 = r48609876 * r48609871;
        double r48609878 = r48609875 * r48609877;
        double r48609879 = r48609874 + r48609878;
        double r48609880 = 351.914062;
        double r48609881 = r48609877 * r48609871;
        double r48609882 = r48609881 * r48609871;
        double r48609883 = r48609880 * r48609882;
        double r48609884 = r48609879 + r48609883;
        double r48609885 = -427.324219;
        double r48609886 = r48609882 * r48609871;
        double r48609887 = r48609886 * r48609871;
        double r48609888 = r48609885 * r48609887;
        double r48609889 = r48609884 + r48609888;
        double r48609890 = 180.425781;
        double r48609891 = r48609887 * r48609871;
        double r48609892 = r48609891 * r48609871;
        double r48609893 = r48609890 * r48609892;
        double r48609894 = r48609889 + r48609893;
        return r48609894;
}


double f_of(float x) {
        float r48609895 = x;
        float r48609896 = r48609895 * r48609895;
        float r48609897 = r48609896 * r48609896;
        float r48609898 = -117.304688;
        float r48609899 = 351.914062;
        float r48609900 = r48609899 * r48609895;
        float r48609901 = r48609895 * r48609900;
        float r48609902 = r48609898 + r48609901;
        float r48609903 = r48609897 * r48609902;
        float r48609904 = r48609903 * r48609903;
        float r48609905 = 2;
        float r48609906 = r48609905 + r48609905;
        float r48609907 = pow(r48609895, r48609906);
        float r48609908 = r48609897 * r48609907;
        float r48609909 = 180.425781;
        float r48609910 = r48609909 * r48609896;
        float r48609911 = -427.324219;
        float r48609912 = r48609910 + r48609911;
        float r48609913 = r48609908 * r48609912;
        float r48609914 = r48609913 * r48609913;
        float r48609915 = r48609904 - r48609914;
        float r48609916 = cbrt(r48609915);
        float r48609917 = r48609916 * r48609916;
        float r48609918 = r48609909 * r48609895;
        float r48609919 = r48609895 * r48609918;
        float r48609920 = r48609919 + r48609911;
        float r48609921 = 3;
        float r48609922 = pow(r48609895, r48609921);
        float r48609923 = -r48609895;
        float r48609924 = r48609922 * r48609923;
        float r48609925 = r48609924 * r48609907;
        float r48609926 = r48609920 * r48609925;
        float r48609927 = r48609920 * r48609908;
        float r48609928 = r48609926 * r48609927;
        float r48609929 = r48609904 + r48609928;
        float r48609930 = cbrt(r48609929);
        float r48609931 = r48609917 * r48609930;
        float r48609932 = r48609903 - r48609913;
        float r48609933 = r48609931 / r48609932;
        float r48609934 = 13.535156;
        float r48609935 = r48609895 * r48609934;
        float r48609936 = r48609895 * r48609935;
        float r48609937 = -0.246094;
        float r48609938 = r48609936 + r48609937;
        float r48609939 = r48609933 + r48609938;
        return r48609939;
}

double f_od(double x) {
        double r48609940 = x;
        double r48609941 = r48609940 * r48609940;
        double r48609942 = r48609941 * r48609941;
        double r48609943 = -117.304688;
        double r48609944 = 351.914062;
        double r48609945 = r48609944 * r48609940;
        double r48609946 = r48609940 * r48609945;
        double r48609947 = r48609943 + r48609946;
        double r48609948 = r48609942 * r48609947;
        double r48609949 = r48609948 * r48609948;
        double r48609950 = 2;
        double r48609951 = r48609950 + r48609950;
        double r48609952 = pow(r48609940, r48609951);
        double r48609953 = r48609942 * r48609952;
        double r48609954 = 180.425781;
        double r48609955 = r48609954 * r48609941;
        double r48609956 = -427.324219;
        double r48609957 = r48609955 + r48609956;
        double r48609958 = r48609953 * r48609957;
        double r48609959 = r48609958 * r48609958;
        double r48609960 = r48609949 - r48609959;
        double r48609961 = cbrt(r48609960);
        double r48609962 = r48609961 * r48609961;
        double r48609963 = r48609954 * r48609940;
        double r48609964 = r48609940 * r48609963;
        double r48609965 = r48609964 + r48609956;
        double r48609966 = 3;
        double r48609967 = pow(r48609940, r48609966);
        double r48609968 = -r48609940;
        double r48609969 = r48609967 * r48609968;
        double r48609970 = r48609969 * r48609952;
        double r48609971 = r48609965 * r48609970;
        double r48609972 = r48609965 * r48609953;
        double r48609973 = r48609971 * r48609972;
        double r48609974 = r48609949 + r48609973;
        double r48609975 = cbrt(r48609974);
        double r48609976 = r48609962 * r48609975;
        double r48609977 = r48609948 - r48609958;
        double r48609978 = r48609976 / r48609977;
        double r48609979 = 13.535156;
        double r48609980 = r48609940 * r48609979;
        double r48609981 = r48609940 * r48609980;
        double r48609982 = -0.246094;
        double r48609983 = r48609981 + r48609982;
        double r48609984 = r48609978 + r48609983;
        return r48609984;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48609985, r48609986, r48609987, r48609988, r48609989, r48609990, r48609991, r48609992, r48609993, r48609994, r48609995, r48609996, r48609997, r48609998, r48609999, r48610000, r48610001, r48610002, r48610003, r48610004, r48610005, r48610006, r48610007, r48610008, r48610009, r48610010;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48609985, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r48609986, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r48609987);
        mpfr_init(r48609988);
        mpfr_init(r48609989);
        mpfr_init(r48609990);
        mpfr_init_set_str(r48609991, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r48609992);
        mpfr_init(r48609993);
        mpfr_init(r48609994);
        mpfr_init(r48609995);
        mpfr_init_set_str(r48609996, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r48609997);
        mpfr_init(r48609998);
        mpfr_init(r48609999);
        mpfr_init(r48610000);
        mpfr_init_set_str(r48610001, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r48610002);
        mpfr_init(r48610003);
        mpfr_init(r48610004);
        mpfr_init(r48610005);
        mpfr_init_set_str(r48610006, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r48610007);
        mpfr_init(r48610008);
        mpfr_init(r48610009);
        mpfr_init(r48610010);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r48609987, x, MPFR_RNDN);
        mpfr_mul(r48609988, r48609987, r48609987, MPFR_RNDN);
        mpfr_mul(r48609989, r48609986, r48609988, MPFR_RNDN);
        mpfr_add(r48609990, r48609985, r48609989, MPFR_RNDN);
        ;
        mpfr_mul(r48609992, r48609988, r48609987, MPFR_RNDN);
        mpfr_mul(r48609993, r48609992, r48609987, MPFR_RNDN);
        mpfr_mul(r48609994, r48609991, r48609993, MPFR_RNDN);
        mpfr_add(r48609995, r48609990, r48609994, MPFR_RNDN);
        ;
        mpfr_mul(r48609997, r48609993, r48609987, MPFR_RNDN);
        mpfr_mul(r48609998, r48609997, r48609987, MPFR_RNDN);
        mpfr_mul(r48609999, r48609996, r48609998, MPFR_RNDN);
        mpfr_add(r48610000, r48609995, r48609999, MPFR_RNDN);
        ;
        mpfr_mul(r48610002, r48609998, r48609987, MPFR_RNDN);
        mpfr_mul(r48610003, r48610002, r48609987, MPFR_RNDN);
        mpfr_mul(r48610004, r48610001, r48610003, MPFR_RNDN);
        mpfr_add(r48610005, r48610000, r48610004, MPFR_RNDN);
        ;
        mpfr_mul(r48610007, r48610003, r48609987, MPFR_RNDN);
        mpfr_mul(r48610008, r48610007, r48609987, MPFR_RNDN);
        mpfr_mul(r48610009, r48610006, r48610008, MPFR_RNDN);
        mpfr_add(r48610010, r48610005, r48610009, MPFR_RNDN);
        return mpfr_get_d(r48610010, MPFR_RNDN);
}

static mpfr_t r48610011, r48610012, r48610013, r48610014, r48610015, r48610016, r48610017, r48610018, r48610019, r48610020, r48610021, r48610022, r48610023, r48610024, r48610025, r48610026, r48610027, r48610028, r48610029, r48610030, r48610031, r48610032, r48610033, r48610034, r48610035, r48610036, r48610037, r48610038, r48610039, r48610040, r48610041, r48610042, r48610043, r48610044, r48610045, r48610046, r48610047, r48610048, r48610049, r48610050, r48610051, r48610052, r48610053, r48610054, r48610055;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r48610011);
        mpfr_init(r48610012);
        mpfr_init(r48610013);
        mpfr_init_set_str(r48610014, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r48610015, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r48610016);
        mpfr_init(r48610017);
        mpfr_init(r48610018);
        mpfr_init(r48610019);
        mpfr_init(r48610020);
        mpfr_init_set_str(r48610021, "2", 10, MPFR_RNDN);
        mpfr_init(r48610022);
        mpfr_init(r48610023);
        mpfr_init(r48610024);
        mpfr_init_set_str(r48610025, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r48610026);
        mpfr_init_set_str(r48610027, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r48610028);
        mpfr_init(r48610029);
        mpfr_init(r48610030);
        mpfr_init(r48610031);
        mpfr_init(r48610032);
        mpfr_init(r48610033);
        mpfr_init(r48610034);
        mpfr_init(r48610035);
        mpfr_init(r48610036);
        mpfr_init_set_str(r48610037, "3", 10, MPFR_RNDN);
        mpfr_init(r48610038);
        mpfr_init(r48610039);
        mpfr_init(r48610040);
        mpfr_init(r48610041);
        mpfr_init(r48610042);
        mpfr_init(r48610043);
        mpfr_init(r48610044);
        mpfr_init(r48610045);
        mpfr_init(r48610046);
        mpfr_init(r48610047);
        mpfr_init(r48610048);
        mpfr_init(r48610049);
        mpfr_init_set_str(r48610050, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r48610051);
        mpfr_init(r48610052);
        mpfr_init_set_str(r48610053, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r48610054);
        mpfr_init(r48610055);
}

double f_fm(double x) {
        mpfr_set_d(r48610011, x, MPFR_RNDN);
        mpfr_mul(r48610012, r48610011, r48610011, MPFR_RNDN);
        mpfr_mul(r48610013, r48610012, r48610012, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r48610016, r48610015, r48610011, MPFR_RNDN);
        mpfr_mul(r48610017, r48610011, r48610016, MPFR_RNDN);
        mpfr_add(r48610018, r48610014, r48610017, MPFR_RNDN);
        mpfr_mul(r48610019, r48610013, r48610018, MPFR_RNDN);
        mpfr_mul(r48610020, r48610019, r48610019, MPFR_RNDN);
        ;
        mpfr_add(r48610022, r48610021, r48610021, MPFR_RNDN);
        mpfr_pow(r48610023, r48610011, r48610022, MPFR_RNDN);
        mpfr_mul(r48610024, r48610013, r48610023, MPFR_RNDN);
        ;
        mpfr_mul(r48610026, r48610025, r48610012, MPFR_RNDN);
        ;
        mpfr_add(r48610028, r48610026, r48610027, MPFR_RNDN);
        mpfr_mul(r48610029, r48610024, r48610028, MPFR_RNDN);
        mpfr_mul(r48610030, r48610029, r48610029, MPFR_RNDN);
        mpfr_sub(r48610031, r48610020, r48610030, MPFR_RNDN);
        mpfr_cbrt(r48610032, r48610031, MPFR_RNDN);
        mpfr_mul(r48610033, r48610032, r48610032, MPFR_RNDN);
        mpfr_mul(r48610034, r48610025, r48610011, MPFR_RNDN);
        mpfr_mul(r48610035, r48610011, r48610034, MPFR_RNDN);
        mpfr_add(r48610036, r48610035, r48610027, MPFR_RNDN);
        ;
        mpfr_pow(r48610038, r48610011, r48610037, MPFR_RNDN);
        mpfr_neg(r48610039, r48610011, MPFR_RNDN);
        mpfr_mul(r48610040, r48610038, r48610039, MPFR_RNDN);
        mpfr_mul(r48610041, r48610040, r48610023, MPFR_RNDN);
        mpfr_mul(r48610042, r48610036, r48610041, MPFR_RNDN);
        mpfr_mul(r48610043, r48610036, r48610024, MPFR_RNDN);
        mpfr_mul(r48610044, r48610042, r48610043, MPFR_RNDN);
        mpfr_add(r48610045, r48610020, r48610044, MPFR_RNDN);
        mpfr_cbrt(r48610046, r48610045, MPFR_RNDN);
        mpfr_mul(r48610047, r48610033, r48610046, MPFR_RNDN);
        mpfr_sub(r48610048, r48610019, r48610029, MPFR_RNDN);
        mpfr_div(r48610049, r48610047, r48610048, MPFR_RNDN);
        ;
        mpfr_mul(r48610051, r48610011, r48610050, MPFR_RNDN);
        mpfr_mul(r48610052, r48610011, r48610051, MPFR_RNDN);
        ;
        mpfr_add(r48610054, r48610052, r48610053, MPFR_RNDN);
        mpfr_add(r48610055, r48610049, r48610054, MPFR_RNDN);
        return mpfr_get_d(r48610055, MPFR_RNDN);
}

static mpfr_t r48610056, r48610057, r48610058, r48610059, r48610060, r48610061, r48610062, r48610063, r48610064, r48610065, r48610066, r48610067, r48610068, r48610069, r48610070, r48610071, r48610072, r48610073, r48610074, r48610075, r48610076, r48610077, r48610078, r48610079, r48610080, r48610081, r48610082, r48610083, r48610084, r48610085, r48610086, r48610087, r48610088, r48610089, r48610090, r48610091, r48610092, r48610093, r48610094, r48610095, r48610096, r48610097, r48610098, r48610099, r48610100;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r48610056);
        mpfr_init(r48610057);
        mpfr_init(r48610058);
        mpfr_init_set_str(r48610059, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r48610060, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r48610061);
        mpfr_init(r48610062);
        mpfr_init(r48610063);
        mpfr_init(r48610064);
        mpfr_init(r48610065);
        mpfr_init_set_str(r48610066, "2", 10, MPFR_RNDN);
        mpfr_init(r48610067);
        mpfr_init(r48610068);
        mpfr_init(r48610069);
        mpfr_init_set_str(r48610070, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r48610071);
        mpfr_init_set_str(r48610072, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r48610073);
        mpfr_init(r48610074);
        mpfr_init(r48610075);
        mpfr_init(r48610076);
        mpfr_init(r48610077);
        mpfr_init(r48610078);
        mpfr_init(r48610079);
        mpfr_init(r48610080);
        mpfr_init(r48610081);
        mpfr_init_set_str(r48610082, "3", 10, MPFR_RNDN);
        mpfr_init(r48610083);
        mpfr_init(r48610084);
        mpfr_init(r48610085);
        mpfr_init(r48610086);
        mpfr_init(r48610087);
        mpfr_init(r48610088);
        mpfr_init(r48610089);
        mpfr_init(r48610090);
        mpfr_init(r48610091);
        mpfr_init(r48610092);
        mpfr_init(r48610093);
        mpfr_init(r48610094);
        mpfr_init_set_str(r48610095, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r48610096);
        mpfr_init(r48610097);
        mpfr_init_set_str(r48610098, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r48610099);
        mpfr_init(r48610100);
}

double f_dm(double x) {
        mpfr_set_d(r48610056, x, MPFR_RNDN);
        mpfr_mul(r48610057, r48610056, r48610056, MPFR_RNDN);
        mpfr_mul(r48610058, r48610057, r48610057, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r48610061, r48610060, r48610056, MPFR_RNDN);
        mpfr_mul(r48610062, r48610056, r48610061, MPFR_RNDN);
        mpfr_add(r48610063, r48610059, r48610062, MPFR_RNDN);
        mpfr_mul(r48610064, r48610058, r48610063, MPFR_RNDN);
        mpfr_mul(r48610065, r48610064, r48610064, MPFR_RNDN);
        ;
        mpfr_add(r48610067, r48610066, r48610066, MPFR_RNDN);
        mpfr_pow(r48610068, r48610056, r48610067, MPFR_RNDN);
        mpfr_mul(r48610069, r48610058, r48610068, MPFR_RNDN);
        ;
        mpfr_mul(r48610071, r48610070, r48610057, MPFR_RNDN);
        ;
        mpfr_add(r48610073, r48610071, r48610072, MPFR_RNDN);
        mpfr_mul(r48610074, r48610069, r48610073, MPFR_RNDN);
        mpfr_mul(r48610075, r48610074, r48610074, MPFR_RNDN);
        mpfr_sub(r48610076, r48610065, r48610075, MPFR_RNDN);
        mpfr_cbrt(r48610077, r48610076, MPFR_RNDN);
        mpfr_mul(r48610078, r48610077, r48610077, MPFR_RNDN);
        mpfr_mul(r48610079, r48610070, r48610056, MPFR_RNDN);
        mpfr_mul(r48610080, r48610056, r48610079, MPFR_RNDN);
        mpfr_add(r48610081, r48610080, r48610072, MPFR_RNDN);
        ;
        mpfr_pow(r48610083, r48610056, r48610082, MPFR_RNDN);
        mpfr_neg(r48610084, r48610056, MPFR_RNDN);
        mpfr_mul(r48610085, r48610083, r48610084, MPFR_RNDN);
        mpfr_mul(r48610086, r48610085, r48610068, MPFR_RNDN);
        mpfr_mul(r48610087, r48610081, r48610086, MPFR_RNDN);
        mpfr_mul(r48610088, r48610081, r48610069, MPFR_RNDN);
        mpfr_mul(r48610089, r48610087, r48610088, MPFR_RNDN);
        mpfr_add(r48610090, r48610065, r48610089, MPFR_RNDN);
        mpfr_cbrt(r48610091, r48610090, MPFR_RNDN);
        mpfr_mul(r48610092, r48610078, r48610091, MPFR_RNDN);
        mpfr_sub(r48610093, r48610064, r48610074, MPFR_RNDN);
        mpfr_div(r48610094, r48610092, r48610093, MPFR_RNDN);
        ;
        mpfr_mul(r48610096, r48610056, r48610095, MPFR_RNDN);
        mpfr_mul(r48610097, r48610056, r48610096, MPFR_RNDN);
        ;
        mpfr_add(r48610099, r48610097, r48610098, MPFR_RNDN);
        mpfr_add(r48610100, r48610094, r48610099, MPFR_RNDN);
        return mpfr_get_d(r48610100, MPFR_RNDN);
}

