#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r9403893 = 518918400.0;
        float r9403894 = -8302694400.0;
        float r9403895 = x;
        float r9403896 = r9403895 * r9403895;
        float r9403897 = r9403894 * r9403896;
        float r9403898 = r9403893 + r9403897;
        float r9403899 = 19372953600.0;
        float r9403900 = r9403896 * r9403895;
        float r9403901 = r9403900 * r9403895;
        float r9403902 = r9403899 * r9403901;
        float r9403903 = r9403898 + r9403902;
        float r9403904 = -15498362880.0;
        float r9403905 = r9403901 * r9403895;
        float r9403906 = r9403905 * r9403895;
        float r9403907 = r9403904 * r9403906;
        float r9403908 = r9403903 + r9403907;
        float r9403909 = 5535129600.0;
        float r9403910 = r9403906 * r9403895;
        float r9403911 = r9403910 * r9403895;
        float r9403912 = r9403909 * r9403911;
        float r9403913 = r9403908 + r9403912;
        float r9403914 = -984023040.0;
        float r9403915 = r9403911 * r9403895;
        float r9403916 = r9403915 * r9403895;
        float r9403917 = r9403914 * r9403916;
        float r9403918 = r9403913 + r9403917;
        float r9403919 = 89456640.0;
        float r9403920 = r9403916 * r9403895;
        float r9403921 = r9403920 * r9403895;
        float r9403922 = r9403919 * r9403921;
        float r9403923 = r9403918 + r9403922;
        float r9403924 = -3932160.0;
        float r9403925 = r9403921 * r9403895;
        float r9403926 = r9403925 * r9403895;
        float r9403927 = r9403924 * r9403926;
        float r9403928 = r9403923 + r9403927;
        float r9403929 = 65536.0;
        float r9403930 = r9403926 * r9403895;
        float r9403931 = r9403930 * r9403895;
        float r9403932 = r9403929 * r9403931;
        float r9403933 = r9403928 + r9403932;
        return r9403933;
}

double f_id(double x) {
        double r9403934 = 518918400.0;
        double r9403935 = -8302694400.0;
        double r9403936 = x;
        double r9403937 = r9403936 * r9403936;
        double r9403938 = r9403935 * r9403937;
        double r9403939 = r9403934 + r9403938;
        double r9403940 = 19372953600.0;
        double r9403941 = r9403937 * r9403936;
        double r9403942 = r9403941 * r9403936;
        double r9403943 = r9403940 * r9403942;
        double r9403944 = r9403939 + r9403943;
        double r9403945 = -15498362880.0;
        double r9403946 = r9403942 * r9403936;
        double r9403947 = r9403946 * r9403936;
        double r9403948 = r9403945 * r9403947;
        double r9403949 = r9403944 + r9403948;
        double r9403950 = 5535129600.0;
        double r9403951 = r9403947 * r9403936;
        double r9403952 = r9403951 * r9403936;
        double r9403953 = r9403950 * r9403952;
        double r9403954 = r9403949 + r9403953;
        double r9403955 = -984023040.0;
        double r9403956 = r9403952 * r9403936;
        double r9403957 = r9403956 * r9403936;
        double r9403958 = r9403955 * r9403957;
        double r9403959 = r9403954 + r9403958;
        double r9403960 = 89456640.0;
        double r9403961 = r9403957 * r9403936;
        double r9403962 = r9403961 * r9403936;
        double r9403963 = r9403960 * r9403962;
        double r9403964 = r9403959 + r9403963;
        double r9403965 = -3932160.0;
        double r9403966 = r9403962 * r9403936;
        double r9403967 = r9403966 * r9403936;
        double r9403968 = r9403965 * r9403967;
        double r9403969 = r9403964 + r9403968;
        double r9403970 = 65536.0;
        double r9403971 = r9403967 * r9403936;
        double r9403972 = r9403971 * r9403936;
        double r9403973 = r9403970 * r9403972;
        double r9403974 = r9403969 + r9403973;
        return r9403974;
}


double f_of(float x) {
        float r9403975 = 518918400.0;
        float r9403976 = -8302694400.0;
        float r9403977 = x;
        float r9403978 = r9403977 * r9403977;
        float r9403979 = r9403976 * r9403978;
        float r9403980 = r9403975 + r9403979;
        float r9403981 = 19372953600.0;
        float r9403982 = r9403978 * r9403977;
        float r9403983 = r9403982 * r9403977;
        float r9403984 = r9403981 * r9403983;
        float r9403985 = r9403980 + r9403984;
        float r9403986 = -15498362880.0;
        float r9403987 = r9403983 * r9403977;
        float r9403988 = r9403987 * r9403977;
        float r9403989 = r9403986 * r9403988;
        float r9403990 = r9403985 + r9403989;
        float r9403991 = 5535129600.0;
        float r9403992 = r9403988 * r9403977;
        float r9403993 = r9403992 * r9403977;
        float r9403994 = r9403991 * r9403993;
        float r9403995 = r9403990 + r9403994;
        float r9403996 = -984023040.0;
        float r9403997 = r9403993 * r9403977;
        float r9403998 = r9403997 * r9403977;
        float r9403999 = r9403996 * r9403998;
        float r9404000 = r9403995 + r9403999;
        float r9404001 = 89456640.0;
        float r9404002 = r9403998 * r9403977;
        float r9404003 = r9404002 * r9403977;
        float r9404004 = r9404001 * r9404003;
        float r9404005 = r9404000 + r9404004;
        float r9404006 = -3932160.0;
        float r9404007 = r9404003 * r9403977;
        float r9404008 = r9404007 * r9403977;
        float r9404009 = r9404006 * r9404008;
        float r9404010 = r9404005 + r9404009;
        float r9404011 = 65536.0;
        float r9404012 = r9404008 * r9403977;
        float r9404013 = r9404012 * r9403977;
        float r9404014 = r9404011 * r9404013;
        float r9404015 = r9404010 + r9404014;
        return r9404015;
}

double f_od(double x) {
        double r9404016 = 518918400.0;
        double r9404017 = -8302694400.0;
        double r9404018 = x;
        double r9404019 = r9404018 * r9404018;
        double r9404020 = r9404017 * r9404019;
        double r9404021 = r9404016 + r9404020;
        double r9404022 = 19372953600.0;
        double r9404023 = r9404019 * r9404018;
        double r9404024 = r9404023 * r9404018;
        double r9404025 = r9404022 * r9404024;
        double r9404026 = r9404021 + r9404025;
        double r9404027 = -15498362880.0;
        double r9404028 = r9404024 * r9404018;
        double r9404029 = r9404028 * r9404018;
        double r9404030 = r9404027 * r9404029;
        double r9404031 = r9404026 + r9404030;
        double r9404032 = 5535129600.0;
        double r9404033 = r9404029 * r9404018;
        double r9404034 = r9404033 * r9404018;
        double r9404035 = r9404032 * r9404034;
        double r9404036 = r9404031 + r9404035;
        double r9404037 = -984023040.0;
        double r9404038 = r9404034 * r9404018;
        double r9404039 = r9404038 * r9404018;
        double r9404040 = r9404037 * r9404039;
        double r9404041 = r9404036 + r9404040;
        double r9404042 = 89456640.0;
        double r9404043 = r9404039 * r9404018;
        double r9404044 = r9404043 * r9404018;
        double r9404045 = r9404042 * r9404044;
        double r9404046 = r9404041 + r9404045;
        double r9404047 = -3932160.0;
        double r9404048 = r9404044 * r9404018;
        double r9404049 = r9404048 * r9404018;
        double r9404050 = r9404047 * r9404049;
        double r9404051 = r9404046 + r9404050;
        double r9404052 = 65536.0;
        double r9404053 = r9404049 * r9404018;
        double r9404054 = r9404053 * r9404018;
        double r9404055 = r9404052 * r9404054;
        double r9404056 = r9404051 + r9404055;
        return r9404056;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9404057, r9404058, r9404059, r9404060, r9404061, r9404062, r9404063, r9404064, r9404065, r9404066, r9404067, r9404068, r9404069, r9404070, r9404071, r9404072, r9404073, r9404074, r9404075, r9404076, r9404077, r9404078, r9404079, r9404080, r9404081, r9404082, r9404083, r9404084, r9404085, r9404086, r9404087, r9404088, r9404089, r9404090, r9404091, r9404092, r9404093, r9404094, r9404095, r9404096, r9404097;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9404057, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9404058, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9404059);
        mpfr_init(r9404060);
        mpfr_init(r9404061);
        mpfr_init(r9404062);
        mpfr_init_set_str(r9404063, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9404064);
        mpfr_init(r9404065);
        mpfr_init(r9404066);
        mpfr_init(r9404067);
        mpfr_init_set_str(r9404068, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9404069);
        mpfr_init(r9404070);
        mpfr_init(r9404071);
        mpfr_init(r9404072);
        mpfr_init_set_str(r9404073, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9404074);
        mpfr_init(r9404075);
        mpfr_init(r9404076);
        mpfr_init(r9404077);
        mpfr_init_set_str(r9404078, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9404079);
        mpfr_init(r9404080);
        mpfr_init(r9404081);
        mpfr_init(r9404082);
        mpfr_init_set_str(r9404083, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r9404084);
        mpfr_init(r9404085);
        mpfr_init(r9404086);
        mpfr_init(r9404087);
        mpfr_init_set_str(r9404088, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r9404089);
        mpfr_init(r9404090);
        mpfr_init(r9404091);
        mpfr_init(r9404092);
        mpfr_init_set_str(r9404093, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9404094);
        mpfr_init(r9404095);
        mpfr_init(r9404096);
        mpfr_init(r9404097);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9404059, x, MPFR_RNDN);
        mpfr_mul(r9404060, r9404059, r9404059, MPFR_RNDN);
        mpfr_mul(r9404061, r9404058, r9404060, MPFR_RNDN);
        mpfr_add(r9404062, r9404057, r9404061, MPFR_RNDN);
        ;
        mpfr_mul(r9404064, r9404060, r9404059, MPFR_RNDN);
        mpfr_mul(r9404065, r9404064, r9404059, MPFR_RNDN);
        mpfr_mul(r9404066, r9404063, r9404065, MPFR_RNDN);
        mpfr_add(r9404067, r9404062, r9404066, MPFR_RNDN);
        ;
        mpfr_mul(r9404069, r9404065, r9404059, MPFR_RNDN);
        mpfr_mul(r9404070, r9404069, r9404059, MPFR_RNDN);
        mpfr_mul(r9404071, r9404068, r9404070, MPFR_RNDN);
        mpfr_add(r9404072, r9404067, r9404071, MPFR_RNDN);
        ;
        mpfr_mul(r9404074, r9404070, r9404059, MPFR_RNDN);
        mpfr_mul(r9404075, r9404074, r9404059, MPFR_RNDN);
        mpfr_mul(r9404076, r9404073, r9404075, MPFR_RNDN);
        mpfr_add(r9404077, r9404072, r9404076, MPFR_RNDN);
        ;
        mpfr_mul(r9404079, r9404075, r9404059, MPFR_RNDN);
        mpfr_mul(r9404080, r9404079, r9404059, MPFR_RNDN);
        mpfr_mul(r9404081, r9404078, r9404080, MPFR_RNDN);
        mpfr_add(r9404082, r9404077, r9404081, MPFR_RNDN);
        ;
        mpfr_mul(r9404084, r9404080, r9404059, MPFR_RNDN);
        mpfr_mul(r9404085, r9404084, r9404059, MPFR_RNDN);
        mpfr_mul(r9404086, r9404083, r9404085, MPFR_RNDN);
        mpfr_add(r9404087, r9404082, r9404086, MPFR_RNDN);
        ;
        mpfr_mul(r9404089, r9404085, r9404059, MPFR_RNDN);
        mpfr_mul(r9404090, r9404089, r9404059, MPFR_RNDN);
        mpfr_mul(r9404091, r9404088, r9404090, MPFR_RNDN);
        mpfr_add(r9404092, r9404087, r9404091, MPFR_RNDN);
        ;
        mpfr_mul(r9404094, r9404090, r9404059, MPFR_RNDN);
        mpfr_mul(r9404095, r9404094, r9404059, MPFR_RNDN);
        mpfr_mul(r9404096, r9404093, r9404095, MPFR_RNDN);
        mpfr_add(r9404097, r9404092, r9404096, MPFR_RNDN);
        return mpfr_get_d(r9404097, MPFR_RNDN);
}

static mpfr_t r9404098, r9404099, r9404100, r9404101, r9404102, r9404103, r9404104, r9404105, r9404106, r9404107, r9404108, r9404109, r9404110, r9404111, r9404112, r9404113, r9404114, r9404115, r9404116, r9404117, r9404118, r9404119, r9404120, r9404121, r9404122, r9404123, r9404124, r9404125, r9404126, r9404127, r9404128, r9404129, r9404130, r9404131, r9404132, r9404133, r9404134, r9404135, r9404136, r9404137, r9404138;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9404098, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9404099, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9404100);
        mpfr_init(r9404101);
        mpfr_init(r9404102);
        mpfr_init(r9404103);
        mpfr_init_set_str(r9404104, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9404105);
        mpfr_init(r9404106);
        mpfr_init(r9404107);
        mpfr_init(r9404108);
        mpfr_init_set_str(r9404109, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9404110);
        mpfr_init(r9404111);
        mpfr_init(r9404112);
        mpfr_init(r9404113);
        mpfr_init_set_str(r9404114, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9404115);
        mpfr_init(r9404116);
        mpfr_init(r9404117);
        mpfr_init(r9404118);
        mpfr_init_set_str(r9404119, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9404120);
        mpfr_init(r9404121);
        mpfr_init(r9404122);
        mpfr_init(r9404123);
        mpfr_init_set_str(r9404124, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r9404125);
        mpfr_init(r9404126);
        mpfr_init(r9404127);
        mpfr_init(r9404128);
        mpfr_init_set_str(r9404129, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r9404130);
        mpfr_init(r9404131);
        mpfr_init(r9404132);
        mpfr_init(r9404133);
        mpfr_init_set_str(r9404134, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9404135);
        mpfr_init(r9404136);
        mpfr_init(r9404137);
        mpfr_init(r9404138);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9404100, x, MPFR_RNDN);
        mpfr_mul(r9404101, r9404100, r9404100, MPFR_RNDN);
        mpfr_mul(r9404102, r9404099, r9404101, MPFR_RNDN);
        mpfr_add(r9404103, r9404098, r9404102, MPFR_RNDN);
        ;
        mpfr_mul(r9404105, r9404101, r9404100, MPFR_RNDN);
        mpfr_mul(r9404106, r9404105, r9404100, MPFR_RNDN);
        mpfr_mul(r9404107, r9404104, r9404106, MPFR_RNDN);
        mpfr_add(r9404108, r9404103, r9404107, MPFR_RNDN);
        ;
        mpfr_mul(r9404110, r9404106, r9404100, MPFR_RNDN);
        mpfr_mul(r9404111, r9404110, r9404100, MPFR_RNDN);
        mpfr_mul(r9404112, r9404109, r9404111, MPFR_RNDN);
        mpfr_add(r9404113, r9404108, r9404112, MPFR_RNDN);
        ;
        mpfr_mul(r9404115, r9404111, r9404100, MPFR_RNDN);
        mpfr_mul(r9404116, r9404115, r9404100, MPFR_RNDN);
        mpfr_mul(r9404117, r9404114, r9404116, MPFR_RNDN);
        mpfr_add(r9404118, r9404113, r9404117, MPFR_RNDN);
        ;
        mpfr_mul(r9404120, r9404116, r9404100, MPFR_RNDN);
        mpfr_mul(r9404121, r9404120, r9404100, MPFR_RNDN);
        mpfr_mul(r9404122, r9404119, r9404121, MPFR_RNDN);
        mpfr_add(r9404123, r9404118, r9404122, MPFR_RNDN);
        ;
        mpfr_mul(r9404125, r9404121, r9404100, MPFR_RNDN);
        mpfr_mul(r9404126, r9404125, r9404100, MPFR_RNDN);
        mpfr_mul(r9404127, r9404124, r9404126, MPFR_RNDN);
        mpfr_add(r9404128, r9404123, r9404127, MPFR_RNDN);
        ;
        mpfr_mul(r9404130, r9404126, r9404100, MPFR_RNDN);
        mpfr_mul(r9404131, r9404130, r9404100, MPFR_RNDN);
        mpfr_mul(r9404132, r9404129, r9404131, MPFR_RNDN);
        mpfr_add(r9404133, r9404128, r9404132, MPFR_RNDN);
        ;
        mpfr_mul(r9404135, r9404131, r9404100, MPFR_RNDN);
        mpfr_mul(r9404136, r9404135, r9404100, MPFR_RNDN);
        mpfr_mul(r9404137, r9404134, r9404136, MPFR_RNDN);
        mpfr_add(r9404138, r9404133, r9404137, MPFR_RNDN);
        return mpfr_get_d(r9404138, MPFR_RNDN);
}

static mpfr_t r9404139, r9404140, r9404141, r9404142, r9404143, r9404144, r9404145, r9404146, r9404147, r9404148, r9404149, r9404150, r9404151, r9404152, r9404153, r9404154, r9404155, r9404156, r9404157, r9404158, r9404159, r9404160, r9404161, r9404162, r9404163, r9404164, r9404165, r9404166, r9404167, r9404168, r9404169, r9404170, r9404171, r9404172, r9404173, r9404174, r9404175, r9404176, r9404177, r9404178, r9404179;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9404139, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9404140, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r9404141);
        mpfr_init(r9404142);
        mpfr_init(r9404143);
        mpfr_init(r9404144);
        mpfr_init_set_str(r9404145, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r9404146);
        mpfr_init(r9404147);
        mpfr_init(r9404148);
        mpfr_init(r9404149);
        mpfr_init_set_str(r9404150, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r9404151);
        mpfr_init(r9404152);
        mpfr_init(r9404153);
        mpfr_init(r9404154);
        mpfr_init_set_str(r9404155, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r9404156);
        mpfr_init(r9404157);
        mpfr_init(r9404158);
        mpfr_init(r9404159);
        mpfr_init_set_str(r9404160, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r9404161);
        mpfr_init(r9404162);
        mpfr_init(r9404163);
        mpfr_init(r9404164);
        mpfr_init_set_str(r9404165, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r9404166);
        mpfr_init(r9404167);
        mpfr_init(r9404168);
        mpfr_init(r9404169);
        mpfr_init_set_str(r9404170, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r9404171);
        mpfr_init(r9404172);
        mpfr_init(r9404173);
        mpfr_init(r9404174);
        mpfr_init_set_str(r9404175, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r9404176);
        mpfr_init(r9404177);
        mpfr_init(r9404178);
        mpfr_init(r9404179);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9404141, x, MPFR_RNDN);
        mpfr_mul(r9404142, r9404141, r9404141, MPFR_RNDN);
        mpfr_mul(r9404143, r9404140, r9404142, MPFR_RNDN);
        mpfr_add(r9404144, r9404139, r9404143, MPFR_RNDN);
        ;
        mpfr_mul(r9404146, r9404142, r9404141, MPFR_RNDN);
        mpfr_mul(r9404147, r9404146, r9404141, MPFR_RNDN);
        mpfr_mul(r9404148, r9404145, r9404147, MPFR_RNDN);
        mpfr_add(r9404149, r9404144, r9404148, MPFR_RNDN);
        ;
        mpfr_mul(r9404151, r9404147, r9404141, MPFR_RNDN);
        mpfr_mul(r9404152, r9404151, r9404141, MPFR_RNDN);
        mpfr_mul(r9404153, r9404150, r9404152, MPFR_RNDN);
        mpfr_add(r9404154, r9404149, r9404153, MPFR_RNDN);
        ;
        mpfr_mul(r9404156, r9404152, r9404141, MPFR_RNDN);
        mpfr_mul(r9404157, r9404156, r9404141, MPFR_RNDN);
        mpfr_mul(r9404158, r9404155, r9404157, MPFR_RNDN);
        mpfr_add(r9404159, r9404154, r9404158, MPFR_RNDN);
        ;
        mpfr_mul(r9404161, r9404157, r9404141, MPFR_RNDN);
        mpfr_mul(r9404162, r9404161, r9404141, MPFR_RNDN);
        mpfr_mul(r9404163, r9404160, r9404162, MPFR_RNDN);
        mpfr_add(r9404164, r9404159, r9404163, MPFR_RNDN);
        ;
        mpfr_mul(r9404166, r9404162, r9404141, MPFR_RNDN);
        mpfr_mul(r9404167, r9404166, r9404141, MPFR_RNDN);
        mpfr_mul(r9404168, r9404165, r9404167, MPFR_RNDN);
        mpfr_add(r9404169, r9404164, r9404168, MPFR_RNDN);
        ;
        mpfr_mul(r9404171, r9404167, r9404141, MPFR_RNDN);
        mpfr_mul(r9404172, r9404171, r9404141, MPFR_RNDN);
        mpfr_mul(r9404173, r9404170, r9404172, MPFR_RNDN);
        mpfr_add(r9404174, r9404169, r9404173, MPFR_RNDN);
        ;
        mpfr_mul(r9404176, r9404172, r9404141, MPFR_RNDN);
        mpfr_mul(r9404177, r9404176, r9404141, MPFR_RNDN);
        mpfr_mul(r9404178, r9404175, r9404177, MPFR_RNDN);
        mpfr_add(r9404179, r9404174, r9404178, MPFR_RNDN);
        return mpfr_get_d(r9404179, MPFR_RNDN);
}

