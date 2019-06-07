#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r60545940 = -30240.0;
        float r60545941 = 302400.0;
        float r60545942 = x;
        float r60545943 = r60545942 * r60545942;
        float r60545944 = r60545941 * r60545943;
        float r60545945 = r60545940 + r60545944;
        float r60545946 = -403200.0;
        float r60545947 = r60545943 * r60545942;
        float r60545948 = r60545947 * r60545942;
        float r60545949 = r60545946 * r60545948;
        float r60545950 = r60545945 + r60545949;
        float r60545951 = 161280.0;
        float r60545952 = r60545948 * r60545942;
        float r60545953 = r60545952 * r60545942;
        float r60545954 = r60545951 * r60545953;
        float r60545955 = r60545950 + r60545954;
        float r60545956 = -23040.0;
        float r60545957 = r60545953 * r60545942;
        float r60545958 = r60545957 * r60545942;
        float r60545959 = r60545956 * r60545958;
        float r60545960 = r60545955 + r60545959;
        float r60545961 = 1024.0;
        float r60545962 = r60545958 * r60545942;
        float r60545963 = r60545962 * r60545942;
        float r60545964 = r60545961 * r60545963;
        float r60545965 = r60545960 + r60545964;
        return r60545965;
}

double f_id(double x) {
        double r60545966 = -30240.0;
        double r60545967 = 302400.0;
        double r60545968 = x;
        double r60545969 = r60545968 * r60545968;
        double r60545970 = r60545967 * r60545969;
        double r60545971 = r60545966 + r60545970;
        double r60545972 = -403200.0;
        double r60545973 = r60545969 * r60545968;
        double r60545974 = r60545973 * r60545968;
        double r60545975 = r60545972 * r60545974;
        double r60545976 = r60545971 + r60545975;
        double r60545977 = 161280.0;
        double r60545978 = r60545974 * r60545968;
        double r60545979 = r60545978 * r60545968;
        double r60545980 = r60545977 * r60545979;
        double r60545981 = r60545976 + r60545980;
        double r60545982 = -23040.0;
        double r60545983 = r60545979 * r60545968;
        double r60545984 = r60545983 * r60545968;
        double r60545985 = r60545982 * r60545984;
        double r60545986 = r60545981 + r60545985;
        double r60545987 = 1024.0;
        double r60545988 = r60545984 * r60545968;
        double r60545989 = r60545988 * r60545968;
        double r60545990 = r60545987 * r60545989;
        double r60545991 = r60545986 + r60545990;
        return r60545991;
}


double f_of(float x) {
        float r60545992 = x;
        float r60545993 = r60545992 * r60545992;
        float r60545994 = r60545993 * r60545993;
        float r60545995 = 161280.0;
        float r60545996 = r60545993 * r60545995;
        float r60545997 = -403200.0;
        float r60545998 = r60545996 + r60545997;
        float r60545999 = r60545994 * r60545998;
        float r60546000 = 302400.0;
        float r60546001 = r60545993 * r60546000;
        float r60546002 = -30240.0;
        float r60546003 = r60546001 + r60546002;
        float r60546004 = r60545999 + r60546003;
        float r60546005 = -23040.0;
        float r60546006 = r60545993 * r60546005;
        float r60546007 = 3;
        float r60546008 = pow(r60545993, r60546007);
        float r60546009 = r60546006 * r60546008;
        float r60546010 = r60546004 + r60546009;
        float r60546011 = cbrt(r60546010);
        float r60546012 = r60546011 * r60546011;
        float r60546013 = r60545992 * r60545997;
        float r60546014 = pow(r60545992, r60546007);
        float r60546015 = r60546013 * r60546014;
        float r60546016 = r60545992 * r60546000;
        float r60546017 = r60545992 * r60546016;
        float r60546018 = r60546015 + r60546017;
        float r60546019 = r60546002 + r60546018;
        float r60546020 = r60546014 * r60546014;
        float r60546021 = r60546006 + r60545995;
        float r60546022 = r60546020 * r60546021;
        float r60546023 = r60546019 + r60546022;
        float r60546024 = cbrt(r60546023);
        float r60546025 = r60546012 * r60546024;
        float r60546026 = 1024.0;
        float r60546027 = r60545993 * r60545992;
        float r60546028 = r60546027 * r60545992;
        float r60546029 = r60546028 * r60545992;
        float r60546030 = r60546029 * r60545992;
        float r60546031 = r60546030 * r60545992;
        float r60546032 = r60546031 * r60545992;
        float r60546033 = r60546032 * r60545992;
        float r60546034 = r60546033 * r60545992;
        float r60546035 = r60546026 * r60546034;
        float r60546036 = r60546025 + r60546035;
        return r60546036;
}

double f_od(double x) {
        double r60546037 = x;
        double r60546038 = r60546037 * r60546037;
        double r60546039 = r60546038 * r60546038;
        double r60546040 = 161280.0;
        double r60546041 = r60546038 * r60546040;
        double r60546042 = -403200.0;
        double r60546043 = r60546041 + r60546042;
        double r60546044 = r60546039 * r60546043;
        double r60546045 = 302400.0;
        double r60546046 = r60546038 * r60546045;
        double r60546047 = -30240.0;
        double r60546048 = r60546046 + r60546047;
        double r60546049 = r60546044 + r60546048;
        double r60546050 = -23040.0;
        double r60546051 = r60546038 * r60546050;
        double r60546052 = 3;
        double r60546053 = pow(r60546038, r60546052);
        double r60546054 = r60546051 * r60546053;
        double r60546055 = r60546049 + r60546054;
        double r60546056 = cbrt(r60546055);
        double r60546057 = r60546056 * r60546056;
        double r60546058 = r60546037 * r60546042;
        double r60546059 = pow(r60546037, r60546052);
        double r60546060 = r60546058 * r60546059;
        double r60546061 = r60546037 * r60546045;
        double r60546062 = r60546037 * r60546061;
        double r60546063 = r60546060 + r60546062;
        double r60546064 = r60546047 + r60546063;
        double r60546065 = r60546059 * r60546059;
        double r60546066 = r60546051 + r60546040;
        double r60546067 = r60546065 * r60546066;
        double r60546068 = r60546064 + r60546067;
        double r60546069 = cbrt(r60546068);
        double r60546070 = r60546057 * r60546069;
        double r60546071 = 1024.0;
        double r60546072 = r60546038 * r60546037;
        double r60546073 = r60546072 * r60546037;
        double r60546074 = r60546073 * r60546037;
        double r60546075 = r60546074 * r60546037;
        double r60546076 = r60546075 * r60546037;
        double r60546077 = r60546076 * r60546037;
        double r60546078 = r60546077 * r60546037;
        double r60546079 = r60546078 * r60546037;
        double r60546080 = r60546071 * r60546079;
        double r60546081 = r60546070 + r60546080;
        return r60546081;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60546082, r60546083, r60546084, r60546085, r60546086, r60546087, r60546088, r60546089, r60546090, r60546091, r60546092, r60546093, r60546094, r60546095, r60546096, r60546097, r60546098, r60546099, r60546100, r60546101, r60546102, r60546103, r60546104, r60546105, r60546106, r60546107;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60546082, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60546083, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r60546084);
        mpfr_init(r60546085);
        mpfr_init(r60546086);
        mpfr_init(r60546087);
        mpfr_init_set_str(r60546088, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r60546089);
        mpfr_init(r60546090);
        mpfr_init(r60546091);
        mpfr_init(r60546092);
        mpfr_init_set_str(r60546093, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r60546094);
        mpfr_init(r60546095);
        mpfr_init(r60546096);
        mpfr_init(r60546097);
        mpfr_init_set_str(r60546098, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r60546099);
        mpfr_init(r60546100);
        mpfr_init(r60546101);
        mpfr_init(r60546102);
        mpfr_init_set_str(r60546103, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r60546104);
        mpfr_init(r60546105);
        mpfr_init(r60546106);
        mpfr_init(r60546107);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60546084, x, MPFR_RNDN);
        mpfr_mul(r60546085, r60546084, r60546084, MPFR_RNDN);
        mpfr_mul(r60546086, r60546083, r60546085, MPFR_RNDN);
        mpfr_add(r60546087, r60546082, r60546086, MPFR_RNDN);
        ;
        mpfr_mul(r60546089, r60546085, r60546084, MPFR_RNDN);
        mpfr_mul(r60546090, r60546089, r60546084, MPFR_RNDN);
        mpfr_mul(r60546091, r60546088, r60546090, MPFR_RNDN);
        mpfr_add(r60546092, r60546087, r60546091, MPFR_RNDN);
        ;
        mpfr_mul(r60546094, r60546090, r60546084, MPFR_RNDN);
        mpfr_mul(r60546095, r60546094, r60546084, MPFR_RNDN);
        mpfr_mul(r60546096, r60546093, r60546095, MPFR_RNDN);
        mpfr_add(r60546097, r60546092, r60546096, MPFR_RNDN);
        ;
        mpfr_mul(r60546099, r60546095, r60546084, MPFR_RNDN);
        mpfr_mul(r60546100, r60546099, r60546084, MPFR_RNDN);
        mpfr_mul(r60546101, r60546098, r60546100, MPFR_RNDN);
        mpfr_add(r60546102, r60546097, r60546101, MPFR_RNDN);
        ;
        mpfr_mul(r60546104, r60546100, r60546084, MPFR_RNDN);
        mpfr_mul(r60546105, r60546104, r60546084, MPFR_RNDN);
        mpfr_mul(r60546106, r60546103, r60546105, MPFR_RNDN);
        mpfr_add(r60546107, r60546102, r60546106, MPFR_RNDN);
        return mpfr_get_d(r60546107, MPFR_RNDN);
}

static mpfr_t r60546108, r60546109, r60546110, r60546111, r60546112, r60546113, r60546114, r60546115, r60546116, r60546117, r60546118, r60546119, r60546120, r60546121, r60546122, r60546123, r60546124, r60546125, r60546126, r60546127, r60546128, r60546129, r60546130, r60546131, r60546132, r60546133, r60546134, r60546135, r60546136, r60546137, r60546138, r60546139, r60546140, r60546141, r60546142, r60546143, r60546144, r60546145, r60546146, r60546147, r60546148, r60546149, r60546150, r60546151, r60546152;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60546108);
        mpfr_init(r60546109);
        mpfr_init(r60546110);
        mpfr_init_set_str(r60546111, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r60546112);
        mpfr_init_set_str(r60546113, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r60546114);
        mpfr_init(r60546115);
        mpfr_init_set_str(r60546116, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r60546117);
        mpfr_init_set_str(r60546118, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r60546119);
        mpfr_init(r60546120);
        mpfr_init_set_str(r60546121, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r60546122);
        mpfr_init_set_str(r60546123, "3", 10, MPFR_RNDN);
        mpfr_init(r60546124);
        mpfr_init(r60546125);
        mpfr_init(r60546126);
        mpfr_init(r60546127);
        mpfr_init(r60546128);
        mpfr_init(r60546129);
        mpfr_init(r60546130);
        mpfr_init(r60546131);
        mpfr_init(r60546132);
        mpfr_init(r60546133);
        mpfr_init(r60546134);
        mpfr_init(r60546135);
        mpfr_init(r60546136);
        mpfr_init(r60546137);
        mpfr_init(r60546138);
        mpfr_init(r60546139);
        mpfr_init(r60546140);
        mpfr_init(r60546141);
        mpfr_init_set_str(r60546142, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r60546143);
        mpfr_init(r60546144);
        mpfr_init(r60546145);
        mpfr_init(r60546146);
        mpfr_init(r60546147);
        mpfr_init(r60546148);
        mpfr_init(r60546149);
        mpfr_init(r60546150);
        mpfr_init(r60546151);
        mpfr_init(r60546152);
}

double f_fm(double x) {
        mpfr_set_d(r60546108, x, MPFR_RNDN);
        mpfr_mul(r60546109, r60546108, r60546108, MPFR_RNDN);
        mpfr_mul(r60546110, r60546109, r60546109, MPFR_RNDN);
        ;
        mpfr_mul(r60546112, r60546109, r60546111, MPFR_RNDN);
        ;
        mpfr_add(r60546114, r60546112, r60546113, MPFR_RNDN);
        mpfr_mul(r60546115, r60546110, r60546114, MPFR_RNDN);
        ;
        mpfr_mul(r60546117, r60546109, r60546116, MPFR_RNDN);
        ;
        mpfr_add(r60546119, r60546117, r60546118, MPFR_RNDN);
        mpfr_add(r60546120, r60546115, r60546119, MPFR_RNDN);
        ;
        mpfr_mul(r60546122, r60546109, r60546121, MPFR_RNDN);
        ;
        mpfr_pow(r60546124, r60546109, r60546123, MPFR_RNDN);
        mpfr_mul(r60546125, r60546122, r60546124, MPFR_RNDN);
        mpfr_add(r60546126, r60546120, r60546125, MPFR_RNDN);
        mpfr_cbrt(r60546127, r60546126, MPFR_RNDN);
        mpfr_mul(r60546128, r60546127, r60546127, MPFR_RNDN);
        mpfr_mul(r60546129, r60546108, r60546113, MPFR_RNDN);
        mpfr_pow(r60546130, r60546108, r60546123, MPFR_RNDN);
        mpfr_mul(r60546131, r60546129, r60546130, MPFR_RNDN);
        mpfr_mul(r60546132, r60546108, r60546116, MPFR_RNDN);
        mpfr_mul(r60546133, r60546108, r60546132, MPFR_RNDN);
        mpfr_add(r60546134, r60546131, r60546133, MPFR_RNDN);
        mpfr_add(r60546135, r60546118, r60546134, MPFR_RNDN);
        mpfr_mul(r60546136, r60546130, r60546130, MPFR_RNDN);
        mpfr_add(r60546137, r60546122, r60546111, MPFR_RNDN);
        mpfr_mul(r60546138, r60546136, r60546137, MPFR_RNDN);
        mpfr_add(r60546139, r60546135, r60546138, MPFR_RNDN);
        mpfr_cbrt(r60546140, r60546139, MPFR_RNDN);
        mpfr_mul(r60546141, r60546128, r60546140, MPFR_RNDN);
        ;
        mpfr_mul(r60546143, r60546109, r60546108, MPFR_RNDN);
        mpfr_mul(r60546144, r60546143, r60546108, MPFR_RNDN);
        mpfr_mul(r60546145, r60546144, r60546108, MPFR_RNDN);
        mpfr_mul(r60546146, r60546145, r60546108, MPFR_RNDN);
        mpfr_mul(r60546147, r60546146, r60546108, MPFR_RNDN);
        mpfr_mul(r60546148, r60546147, r60546108, MPFR_RNDN);
        mpfr_mul(r60546149, r60546148, r60546108, MPFR_RNDN);
        mpfr_mul(r60546150, r60546149, r60546108, MPFR_RNDN);
        mpfr_mul(r60546151, r60546142, r60546150, MPFR_RNDN);
        mpfr_add(r60546152, r60546141, r60546151, MPFR_RNDN);
        return mpfr_get_d(r60546152, MPFR_RNDN);
}

static mpfr_t r60546153, r60546154, r60546155, r60546156, r60546157, r60546158, r60546159, r60546160, r60546161, r60546162, r60546163, r60546164, r60546165, r60546166, r60546167, r60546168, r60546169, r60546170, r60546171, r60546172, r60546173, r60546174, r60546175, r60546176, r60546177, r60546178, r60546179, r60546180, r60546181, r60546182, r60546183, r60546184, r60546185, r60546186, r60546187, r60546188, r60546189, r60546190, r60546191, r60546192, r60546193, r60546194, r60546195, r60546196, r60546197;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60546153);
        mpfr_init(r60546154);
        mpfr_init(r60546155);
        mpfr_init_set_str(r60546156, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r60546157);
        mpfr_init_set_str(r60546158, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r60546159);
        mpfr_init(r60546160);
        mpfr_init_set_str(r60546161, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r60546162);
        mpfr_init_set_str(r60546163, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r60546164);
        mpfr_init(r60546165);
        mpfr_init_set_str(r60546166, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r60546167);
        mpfr_init_set_str(r60546168, "3", 10, MPFR_RNDN);
        mpfr_init(r60546169);
        mpfr_init(r60546170);
        mpfr_init(r60546171);
        mpfr_init(r60546172);
        mpfr_init(r60546173);
        mpfr_init(r60546174);
        mpfr_init(r60546175);
        mpfr_init(r60546176);
        mpfr_init(r60546177);
        mpfr_init(r60546178);
        mpfr_init(r60546179);
        mpfr_init(r60546180);
        mpfr_init(r60546181);
        mpfr_init(r60546182);
        mpfr_init(r60546183);
        mpfr_init(r60546184);
        mpfr_init(r60546185);
        mpfr_init(r60546186);
        mpfr_init_set_str(r60546187, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r60546188);
        mpfr_init(r60546189);
        mpfr_init(r60546190);
        mpfr_init(r60546191);
        mpfr_init(r60546192);
        mpfr_init(r60546193);
        mpfr_init(r60546194);
        mpfr_init(r60546195);
        mpfr_init(r60546196);
        mpfr_init(r60546197);
}

double f_dm(double x) {
        mpfr_set_d(r60546153, x, MPFR_RNDN);
        mpfr_mul(r60546154, r60546153, r60546153, MPFR_RNDN);
        mpfr_mul(r60546155, r60546154, r60546154, MPFR_RNDN);
        ;
        mpfr_mul(r60546157, r60546154, r60546156, MPFR_RNDN);
        ;
        mpfr_add(r60546159, r60546157, r60546158, MPFR_RNDN);
        mpfr_mul(r60546160, r60546155, r60546159, MPFR_RNDN);
        ;
        mpfr_mul(r60546162, r60546154, r60546161, MPFR_RNDN);
        ;
        mpfr_add(r60546164, r60546162, r60546163, MPFR_RNDN);
        mpfr_add(r60546165, r60546160, r60546164, MPFR_RNDN);
        ;
        mpfr_mul(r60546167, r60546154, r60546166, MPFR_RNDN);
        ;
        mpfr_pow(r60546169, r60546154, r60546168, MPFR_RNDN);
        mpfr_mul(r60546170, r60546167, r60546169, MPFR_RNDN);
        mpfr_add(r60546171, r60546165, r60546170, MPFR_RNDN);
        mpfr_cbrt(r60546172, r60546171, MPFR_RNDN);
        mpfr_mul(r60546173, r60546172, r60546172, MPFR_RNDN);
        mpfr_mul(r60546174, r60546153, r60546158, MPFR_RNDN);
        mpfr_pow(r60546175, r60546153, r60546168, MPFR_RNDN);
        mpfr_mul(r60546176, r60546174, r60546175, MPFR_RNDN);
        mpfr_mul(r60546177, r60546153, r60546161, MPFR_RNDN);
        mpfr_mul(r60546178, r60546153, r60546177, MPFR_RNDN);
        mpfr_add(r60546179, r60546176, r60546178, MPFR_RNDN);
        mpfr_add(r60546180, r60546163, r60546179, MPFR_RNDN);
        mpfr_mul(r60546181, r60546175, r60546175, MPFR_RNDN);
        mpfr_add(r60546182, r60546167, r60546156, MPFR_RNDN);
        mpfr_mul(r60546183, r60546181, r60546182, MPFR_RNDN);
        mpfr_add(r60546184, r60546180, r60546183, MPFR_RNDN);
        mpfr_cbrt(r60546185, r60546184, MPFR_RNDN);
        mpfr_mul(r60546186, r60546173, r60546185, MPFR_RNDN);
        ;
        mpfr_mul(r60546188, r60546154, r60546153, MPFR_RNDN);
        mpfr_mul(r60546189, r60546188, r60546153, MPFR_RNDN);
        mpfr_mul(r60546190, r60546189, r60546153, MPFR_RNDN);
        mpfr_mul(r60546191, r60546190, r60546153, MPFR_RNDN);
        mpfr_mul(r60546192, r60546191, r60546153, MPFR_RNDN);
        mpfr_mul(r60546193, r60546192, r60546153, MPFR_RNDN);
        mpfr_mul(r60546194, r60546193, r60546153, MPFR_RNDN);
        mpfr_mul(r60546195, r60546194, r60546153, MPFR_RNDN);
        mpfr_mul(r60546196, r60546187, r60546195, MPFR_RNDN);
        mpfr_add(r60546197, r60546186, r60546196, MPFR_RNDN);
        return mpfr_get_d(r60546197, MPFR_RNDN);
}

