#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r3818856 = -17297280.0;
        float r3818857 = 242161920.0;
        float r3818858 = x;
        float r3818859 = r3818858 * r3818858;
        float r3818860 = r3818857 * r3818859;
        float r3818861 = r3818856 + r3818860;
        float r3818862 = -484323840.0;
        float r3818863 = r3818859 * r3818858;
        float r3818864 = r3818863 * r3818858;
        float r3818865 = r3818862 * r3818864;
        float r3818866 = r3818861 + r3818865;
        float r3818867 = 322882560.0;
        float r3818868 = r3818864 * r3818858;
        float r3818869 = r3818868 * r3818858;
        float r3818870 = r3818867 * r3818869;
        float r3818871 = r3818866 + r3818870;
        float r3818872 = -92252160.0;
        float r3818873 = r3818869 * r3818858;
        float r3818874 = r3818873 * r3818858;
        float r3818875 = r3818872 * r3818874;
        float r3818876 = r3818871 + r3818875;
        float r3818877 = 12300288.0;
        float r3818878 = r3818874 * r3818858;
        float r3818879 = r3818878 * r3818858;
        float r3818880 = r3818877 * r3818879;
        float r3818881 = r3818876 + r3818880;
        float r3818882 = -745472.0;
        float r3818883 = r3818879 * r3818858;
        float r3818884 = r3818883 * r3818858;
        float r3818885 = r3818882 * r3818884;
        float r3818886 = r3818881 + r3818885;
        float r3818887 = 16384.0;
        float r3818888 = r3818884 * r3818858;
        float r3818889 = r3818888 * r3818858;
        float r3818890 = r3818887 * r3818889;
        float r3818891 = r3818886 + r3818890;
        return r3818891;
}

double f_id(double x) {
        double r3818892 = -17297280.0;
        double r3818893 = 242161920.0;
        double r3818894 = x;
        double r3818895 = r3818894 * r3818894;
        double r3818896 = r3818893 * r3818895;
        double r3818897 = r3818892 + r3818896;
        double r3818898 = -484323840.0;
        double r3818899 = r3818895 * r3818894;
        double r3818900 = r3818899 * r3818894;
        double r3818901 = r3818898 * r3818900;
        double r3818902 = r3818897 + r3818901;
        double r3818903 = 322882560.0;
        double r3818904 = r3818900 * r3818894;
        double r3818905 = r3818904 * r3818894;
        double r3818906 = r3818903 * r3818905;
        double r3818907 = r3818902 + r3818906;
        double r3818908 = -92252160.0;
        double r3818909 = r3818905 * r3818894;
        double r3818910 = r3818909 * r3818894;
        double r3818911 = r3818908 * r3818910;
        double r3818912 = r3818907 + r3818911;
        double r3818913 = 12300288.0;
        double r3818914 = r3818910 * r3818894;
        double r3818915 = r3818914 * r3818894;
        double r3818916 = r3818913 * r3818915;
        double r3818917 = r3818912 + r3818916;
        double r3818918 = -745472.0;
        double r3818919 = r3818915 * r3818894;
        double r3818920 = r3818919 * r3818894;
        double r3818921 = r3818918 * r3818920;
        double r3818922 = r3818917 + r3818921;
        double r3818923 = 16384.0;
        double r3818924 = r3818920 * r3818894;
        double r3818925 = r3818924 * r3818894;
        double r3818926 = r3818923 * r3818925;
        double r3818927 = r3818922 + r3818926;
        return r3818927;
}


double f_of(float x) {
        float r3818928 = -17297280.0;
        float r3818929 = 242161920.0;
        float r3818930 = x;
        float r3818931 = r3818930 * r3818930;
        float r3818932 = r3818929 * r3818931;
        float r3818933 = r3818928 + r3818932;
        float r3818934 = -484323840.0;
        float r3818935 = r3818931 * r3818930;
        float r3818936 = r3818935 * r3818930;
        float r3818937 = r3818934 * r3818936;
        float r3818938 = r3818933 + r3818937;
        float r3818939 = 322882560.0;
        float r3818940 = r3818936 * r3818930;
        float r3818941 = r3818940 * r3818930;
        float r3818942 = r3818939 * r3818941;
        float r3818943 = r3818938 + r3818942;
        float r3818944 = -92252160.0;
        float r3818945 = r3818941 * r3818930;
        float r3818946 = r3818945 * r3818930;
        float r3818947 = r3818944 * r3818946;
        float r3818948 = r3818943 + r3818947;
        float r3818949 = 12300288.0;
        float r3818950 = r3818946 * r3818930;
        float r3818951 = r3818950 * r3818930;
        float r3818952 = r3818949 * r3818951;
        float r3818953 = r3818948 + r3818952;
        float r3818954 = -745472.0;
        float r3818955 = r3818951 * r3818930;
        float r3818956 = r3818955 * r3818930;
        float r3818957 = r3818954 * r3818956;
        float r3818958 = r3818953 + r3818957;
        float r3818959 = 16384.0;
        float r3818960 = r3818956 * r3818930;
        float r3818961 = r3818960 * r3818930;
        float r3818962 = r3818959 * r3818961;
        float r3818963 = r3818958 + r3818962;
        return r3818963;
}

double f_od(double x) {
        double r3818964 = -17297280.0;
        double r3818965 = 242161920.0;
        double r3818966 = x;
        double r3818967 = r3818966 * r3818966;
        double r3818968 = r3818965 * r3818967;
        double r3818969 = r3818964 + r3818968;
        double r3818970 = -484323840.0;
        double r3818971 = r3818967 * r3818966;
        double r3818972 = r3818971 * r3818966;
        double r3818973 = r3818970 * r3818972;
        double r3818974 = r3818969 + r3818973;
        double r3818975 = 322882560.0;
        double r3818976 = r3818972 * r3818966;
        double r3818977 = r3818976 * r3818966;
        double r3818978 = r3818975 * r3818977;
        double r3818979 = r3818974 + r3818978;
        double r3818980 = -92252160.0;
        double r3818981 = r3818977 * r3818966;
        double r3818982 = r3818981 * r3818966;
        double r3818983 = r3818980 * r3818982;
        double r3818984 = r3818979 + r3818983;
        double r3818985 = 12300288.0;
        double r3818986 = r3818982 * r3818966;
        double r3818987 = r3818986 * r3818966;
        double r3818988 = r3818985 * r3818987;
        double r3818989 = r3818984 + r3818988;
        double r3818990 = -745472.0;
        double r3818991 = r3818987 * r3818966;
        double r3818992 = r3818991 * r3818966;
        double r3818993 = r3818990 * r3818992;
        double r3818994 = r3818989 + r3818993;
        double r3818995 = 16384.0;
        double r3818996 = r3818992 * r3818966;
        double r3818997 = r3818996 * r3818966;
        double r3818998 = r3818995 * r3818997;
        double r3818999 = r3818994 + r3818998;
        return r3818999;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3819000, r3819001, r3819002, r3819003, r3819004, r3819005, r3819006, r3819007, r3819008, r3819009, r3819010, r3819011, r3819012, r3819013, r3819014, r3819015, r3819016, r3819017, r3819018, r3819019, r3819020, r3819021, r3819022, r3819023, r3819024, r3819025, r3819026, r3819027, r3819028, r3819029, r3819030, r3819031, r3819032, r3819033, r3819034, r3819035;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819000, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3819001, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r3819002);
        mpfr_init(r3819003);
        mpfr_init(r3819004);
        mpfr_init(r3819005);
        mpfr_init_set_str(r3819006, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r3819007);
        mpfr_init(r3819008);
        mpfr_init(r3819009);
        mpfr_init(r3819010);
        mpfr_init_set_str(r3819011, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r3819012);
        mpfr_init(r3819013);
        mpfr_init(r3819014);
        mpfr_init(r3819015);
        mpfr_init_set_str(r3819016, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r3819017);
        mpfr_init(r3819018);
        mpfr_init(r3819019);
        mpfr_init(r3819020);
        mpfr_init_set_str(r3819021, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r3819022);
        mpfr_init(r3819023);
        mpfr_init(r3819024);
        mpfr_init(r3819025);
        mpfr_init_set_str(r3819026, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r3819027);
        mpfr_init(r3819028);
        mpfr_init(r3819029);
        mpfr_init(r3819030);
        mpfr_init_set_str(r3819031, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r3819032);
        mpfr_init(r3819033);
        mpfr_init(r3819034);
        mpfr_init(r3819035);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3819002, x, MPFR_RNDN);
        mpfr_mul(r3819003, r3819002, r3819002, MPFR_RNDN);
        mpfr_mul(r3819004, r3819001, r3819003, MPFR_RNDN);
        mpfr_add(r3819005, r3819000, r3819004, MPFR_RNDN);
        ;
        mpfr_mul(r3819007, r3819003, r3819002, MPFR_RNDN);
        mpfr_mul(r3819008, r3819007, r3819002, MPFR_RNDN);
        mpfr_mul(r3819009, r3819006, r3819008, MPFR_RNDN);
        mpfr_add(r3819010, r3819005, r3819009, MPFR_RNDN);
        ;
        mpfr_mul(r3819012, r3819008, r3819002, MPFR_RNDN);
        mpfr_mul(r3819013, r3819012, r3819002, MPFR_RNDN);
        mpfr_mul(r3819014, r3819011, r3819013, MPFR_RNDN);
        mpfr_add(r3819015, r3819010, r3819014, MPFR_RNDN);
        ;
        mpfr_mul(r3819017, r3819013, r3819002, MPFR_RNDN);
        mpfr_mul(r3819018, r3819017, r3819002, MPFR_RNDN);
        mpfr_mul(r3819019, r3819016, r3819018, MPFR_RNDN);
        mpfr_add(r3819020, r3819015, r3819019, MPFR_RNDN);
        ;
        mpfr_mul(r3819022, r3819018, r3819002, MPFR_RNDN);
        mpfr_mul(r3819023, r3819022, r3819002, MPFR_RNDN);
        mpfr_mul(r3819024, r3819021, r3819023, MPFR_RNDN);
        mpfr_add(r3819025, r3819020, r3819024, MPFR_RNDN);
        ;
        mpfr_mul(r3819027, r3819023, r3819002, MPFR_RNDN);
        mpfr_mul(r3819028, r3819027, r3819002, MPFR_RNDN);
        mpfr_mul(r3819029, r3819026, r3819028, MPFR_RNDN);
        mpfr_add(r3819030, r3819025, r3819029, MPFR_RNDN);
        ;
        mpfr_mul(r3819032, r3819028, r3819002, MPFR_RNDN);
        mpfr_mul(r3819033, r3819032, r3819002, MPFR_RNDN);
        mpfr_mul(r3819034, r3819031, r3819033, MPFR_RNDN);
        mpfr_add(r3819035, r3819030, r3819034, MPFR_RNDN);
        return mpfr_get_d(r3819035, MPFR_RNDN);
}

static mpfr_t r3819036, r3819037, r3819038, r3819039, r3819040, r3819041, r3819042, r3819043, r3819044, r3819045, r3819046, r3819047, r3819048, r3819049, r3819050, r3819051, r3819052, r3819053, r3819054, r3819055, r3819056, r3819057, r3819058, r3819059, r3819060, r3819061, r3819062, r3819063, r3819064, r3819065, r3819066, r3819067, r3819068, r3819069, r3819070, r3819071;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819036, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3819037, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r3819038);
        mpfr_init(r3819039);
        mpfr_init(r3819040);
        mpfr_init(r3819041);
        mpfr_init_set_str(r3819042, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r3819043);
        mpfr_init(r3819044);
        mpfr_init(r3819045);
        mpfr_init(r3819046);
        mpfr_init_set_str(r3819047, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r3819048);
        mpfr_init(r3819049);
        mpfr_init(r3819050);
        mpfr_init(r3819051);
        mpfr_init_set_str(r3819052, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r3819053);
        mpfr_init(r3819054);
        mpfr_init(r3819055);
        mpfr_init(r3819056);
        mpfr_init_set_str(r3819057, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r3819058);
        mpfr_init(r3819059);
        mpfr_init(r3819060);
        mpfr_init(r3819061);
        mpfr_init_set_str(r3819062, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r3819063);
        mpfr_init(r3819064);
        mpfr_init(r3819065);
        mpfr_init(r3819066);
        mpfr_init_set_str(r3819067, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r3819068);
        mpfr_init(r3819069);
        mpfr_init(r3819070);
        mpfr_init(r3819071);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3819038, x, MPFR_RNDN);
        mpfr_mul(r3819039, r3819038, r3819038, MPFR_RNDN);
        mpfr_mul(r3819040, r3819037, r3819039, MPFR_RNDN);
        mpfr_add(r3819041, r3819036, r3819040, MPFR_RNDN);
        ;
        mpfr_mul(r3819043, r3819039, r3819038, MPFR_RNDN);
        mpfr_mul(r3819044, r3819043, r3819038, MPFR_RNDN);
        mpfr_mul(r3819045, r3819042, r3819044, MPFR_RNDN);
        mpfr_add(r3819046, r3819041, r3819045, MPFR_RNDN);
        ;
        mpfr_mul(r3819048, r3819044, r3819038, MPFR_RNDN);
        mpfr_mul(r3819049, r3819048, r3819038, MPFR_RNDN);
        mpfr_mul(r3819050, r3819047, r3819049, MPFR_RNDN);
        mpfr_add(r3819051, r3819046, r3819050, MPFR_RNDN);
        ;
        mpfr_mul(r3819053, r3819049, r3819038, MPFR_RNDN);
        mpfr_mul(r3819054, r3819053, r3819038, MPFR_RNDN);
        mpfr_mul(r3819055, r3819052, r3819054, MPFR_RNDN);
        mpfr_add(r3819056, r3819051, r3819055, MPFR_RNDN);
        ;
        mpfr_mul(r3819058, r3819054, r3819038, MPFR_RNDN);
        mpfr_mul(r3819059, r3819058, r3819038, MPFR_RNDN);
        mpfr_mul(r3819060, r3819057, r3819059, MPFR_RNDN);
        mpfr_add(r3819061, r3819056, r3819060, MPFR_RNDN);
        ;
        mpfr_mul(r3819063, r3819059, r3819038, MPFR_RNDN);
        mpfr_mul(r3819064, r3819063, r3819038, MPFR_RNDN);
        mpfr_mul(r3819065, r3819062, r3819064, MPFR_RNDN);
        mpfr_add(r3819066, r3819061, r3819065, MPFR_RNDN);
        ;
        mpfr_mul(r3819068, r3819064, r3819038, MPFR_RNDN);
        mpfr_mul(r3819069, r3819068, r3819038, MPFR_RNDN);
        mpfr_mul(r3819070, r3819067, r3819069, MPFR_RNDN);
        mpfr_add(r3819071, r3819066, r3819070, MPFR_RNDN);
        return mpfr_get_d(r3819071, MPFR_RNDN);
}

static mpfr_t r3819072, r3819073, r3819074, r3819075, r3819076, r3819077, r3819078, r3819079, r3819080, r3819081, r3819082, r3819083, r3819084, r3819085, r3819086, r3819087, r3819088, r3819089, r3819090, r3819091, r3819092, r3819093, r3819094, r3819095, r3819096, r3819097, r3819098, r3819099, r3819100, r3819101, r3819102, r3819103, r3819104, r3819105, r3819106, r3819107;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819072, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3819073, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r3819074);
        mpfr_init(r3819075);
        mpfr_init(r3819076);
        mpfr_init(r3819077);
        mpfr_init_set_str(r3819078, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r3819079);
        mpfr_init(r3819080);
        mpfr_init(r3819081);
        mpfr_init(r3819082);
        mpfr_init_set_str(r3819083, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r3819084);
        mpfr_init(r3819085);
        mpfr_init(r3819086);
        mpfr_init(r3819087);
        mpfr_init_set_str(r3819088, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r3819089);
        mpfr_init(r3819090);
        mpfr_init(r3819091);
        mpfr_init(r3819092);
        mpfr_init_set_str(r3819093, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r3819094);
        mpfr_init(r3819095);
        mpfr_init(r3819096);
        mpfr_init(r3819097);
        mpfr_init_set_str(r3819098, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r3819099);
        mpfr_init(r3819100);
        mpfr_init(r3819101);
        mpfr_init(r3819102);
        mpfr_init_set_str(r3819103, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r3819104);
        mpfr_init(r3819105);
        mpfr_init(r3819106);
        mpfr_init(r3819107);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3819074, x, MPFR_RNDN);
        mpfr_mul(r3819075, r3819074, r3819074, MPFR_RNDN);
        mpfr_mul(r3819076, r3819073, r3819075, MPFR_RNDN);
        mpfr_add(r3819077, r3819072, r3819076, MPFR_RNDN);
        ;
        mpfr_mul(r3819079, r3819075, r3819074, MPFR_RNDN);
        mpfr_mul(r3819080, r3819079, r3819074, MPFR_RNDN);
        mpfr_mul(r3819081, r3819078, r3819080, MPFR_RNDN);
        mpfr_add(r3819082, r3819077, r3819081, MPFR_RNDN);
        ;
        mpfr_mul(r3819084, r3819080, r3819074, MPFR_RNDN);
        mpfr_mul(r3819085, r3819084, r3819074, MPFR_RNDN);
        mpfr_mul(r3819086, r3819083, r3819085, MPFR_RNDN);
        mpfr_add(r3819087, r3819082, r3819086, MPFR_RNDN);
        ;
        mpfr_mul(r3819089, r3819085, r3819074, MPFR_RNDN);
        mpfr_mul(r3819090, r3819089, r3819074, MPFR_RNDN);
        mpfr_mul(r3819091, r3819088, r3819090, MPFR_RNDN);
        mpfr_add(r3819092, r3819087, r3819091, MPFR_RNDN);
        ;
        mpfr_mul(r3819094, r3819090, r3819074, MPFR_RNDN);
        mpfr_mul(r3819095, r3819094, r3819074, MPFR_RNDN);
        mpfr_mul(r3819096, r3819093, r3819095, MPFR_RNDN);
        mpfr_add(r3819097, r3819092, r3819096, MPFR_RNDN);
        ;
        mpfr_mul(r3819099, r3819095, r3819074, MPFR_RNDN);
        mpfr_mul(r3819100, r3819099, r3819074, MPFR_RNDN);
        mpfr_mul(r3819101, r3819098, r3819100, MPFR_RNDN);
        mpfr_add(r3819102, r3819097, r3819101, MPFR_RNDN);
        ;
        mpfr_mul(r3819104, r3819100, r3819074, MPFR_RNDN);
        mpfr_mul(r3819105, r3819104, r3819074, MPFR_RNDN);
        mpfr_mul(r3819106, r3819103, r3819105, MPFR_RNDN);
        mpfr_add(r3819107, r3819102, r3819106, MPFR_RNDN);
        return mpfr_get_d(r3819107, MPFR_RNDN);
}

