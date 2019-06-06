#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r33706936 = 2.460938;
        float r33706937 = x;
        float r33706938 = r33706936 * r33706937;
        float r33706939 = -36.09375;
        float r33706940 = r33706937 * r33706937;
        float r33706941 = r33706940 * r33706937;
        float r33706942 = r33706939 * r33706941;
        float r33706943 = r33706938 + r33706942;
        float r33706944 = 140.765625;
        float r33706945 = r33706941 * r33706937;
        float r33706946 = r33706945 * r33706937;
        float r33706947 = r33706944 * r33706946;
        float r33706948 = r33706943 + r33706947;
        float r33706949 = -201.09375;
        float r33706950 = r33706946 * r33706937;
        float r33706951 = r33706950 * r33706937;
        float r33706952 = r33706949 * r33706951;
        float r33706953 = r33706948 + r33706952;
        float r33706954 = 94.960938;
        float r33706955 = r33706951 * r33706937;
        float r33706956 = r33706955 * r33706937;
        float r33706957 = r33706954 * r33706956;
        float r33706958 = r33706953 + r33706957;
        return r33706958;
}

double f_id(double x) {
        double r33706959 = 2.460938;
        double r33706960 = x;
        double r33706961 = r33706959 * r33706960;
        double r33706962 = -36.09375;
        double r33706963 = r33706960 * r33706960;
        double r33706964 = r33706963 * r33706960;
        double r33706965 = r33706962 * r33706964;
        double r33706966 = r33706961 + r33706965;
        double r33706967 = 140.765625;
        double r33706968 = r33706964 * r33706960;
        double r33706969 = r33706968 * r33706960;
        double r33706970 = r33706967 * r33706969;
        double r33706971 = r33706966 + r33706970;
        double r33706972 = -201.09375;
        double r33706973 = r33706969 * r33706960;
        double r33706974 = r33706973 * r33706960;
        double r33706975 = r33706972 * r33706974;
        double r33706976 = r33706971 + r33706975;
        double r33706977 = 94.960938;
        double r33706978 = r33706974 * r33706960;
        double r33706979 = r33706978 * r33706960;
        double r33706980 = r33706977 * r33706979;
        double r33706981 = r33706976 + r33706980;
        return r33706981;
}


double f_of(float x) {
        float r33706982 = x;
        float r33706983 = 3;
        float r33706984 = pow(r33706982, r33706983);
        float r33706985 = r33706982 * r33706982;
        float r33706986 = r33706984 * r33706985;
        float r33706987 = 140.765625;
        float r33706988 = -201.09375;
        float r33706989 = r33706985 * r33706988;
        float r33706990 = r33706987 + r33706989;
        float r33706991 = r33706986 * r33706990;
        float r33706992 = 2.460938;
        float r33706993 = r33706982 * r33706992;
        float r33706994 = exp(r33706993);
        float r33706995 = -36.09375;
        float r33706996 = exp(r33706995);
        float r33706997 = pow(r33706996, r33706984);
        float r33706998 = r33706994 * r33706997;
        float r33706999 = 94.960938;
        float r33707000 = r33706982 * r33706999;
        float r33707001 = exp(r33707000);
        float r33707002 = 1;
        float r33707003 = r33707002 + r33706983;
        float r33707004 = pow(r33706985, r33707003);
        float r33707005 = pow(r33707001, r33707004);
        float r33707006 = r33706998 * r33707005;
        float r33707007 = log(r33707006);
        float r33707008 = r33706991 + r33707007;
        float r33707009 = cbrt(r33707008);
        float r33707010 = r33707009 * r33707009;
        float r33707011 = r33707010 * r33707009;
        return r33707011;
}

double f_od(double x) {
        double r33707012 = x;
        double r33707013 = 3;
        double r33707014 = pow(r33707012, r33707013);
        double r33707015 = r33707012 * r33707012;
        double r33707016 = r33707014 * r33707015;
        double r33707017 = 140.765625;
        double r33707018 = -201.09375;
        double r33707019 = r33707015 * r33707018;
        double r33707020 = r33707017 + r33707019;
        double r33707021 = r33707016 * r33707020;
        double r33707022 = 2.460938;
        double r33707023 = r33707012 * r33707022;
        double r33707024 = exp(r33707023);
        double r33707025 = -36.09375;
        double r33707026 = exp(r33707025);
        double r33707027 = pow(r33707026, r33707014);
        double r33707028 = r33707024 * r33707027;
        double r33707029 = 94.960938;
        double r33707030 = r33707012 * r33707029;
        double r33707031 = exp(r33707030);
        double r33707032 = 1;
        double r33707033 = r33707032 + r33707013;
        double r33707034 = pow(r33707015, r33707033);
        double r33707035 = pow(r33707031, r33707034);
        double r33707036 = r33707028 * r33707035;
        double r33707037 = log(r33707036);
        double r33707038 = r33707021 + r33707037;
        double r33707039 = cbrt(r33707038);
        double r33707040 = r33707039 * r33707039;
        double r33707041 = r33707040 * r33707039;
        return r33707041;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33707042, r33707043, r33707044, r33707045, r33707046, r33707047, r33707048, r33707049, r33707050, r33707051, r33707052, r33707053, r33707054, r33707055, r33707056, r33707057, r33707058, r33707059, r33707060, r33707061, r33707062, r33707063, r33707064;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707042, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r33707043);
        mpfr_init(r33707044);
        mpfr_init_set_str(r33707045, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r33707046);
        mpfr_init(r33707047);
        mpfr_init(r33707048);
        mpfr_init(r33707049);
        mpfr_init_set_str(r33707050, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r33707051);
        mpfr_init(r33707052);
        mpfr_init(r33707053);
        mpfr_init(r33707054);
        mpfr_init_set_str(r33707055, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r33707056);
        mpfr_init(r33707057);
        mpfr_init(r33707058);
        mpfr_init(r33707059);
        mpfr_init_set_str(r33707060, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r33707061);
        mpfr_init(r33707062);
        mpfr_init(r33707063);
        mpfr_init(r33707064);
}

double f_im(double x) {
        ;
        mpfr_set_d(r33707043, x, MPFR_RNDN);
        mpfr_mul(r33707044, r33707042, r33707043, MPFR_RNDN);
        ;
        mpfr_mul(r33707046, r33707043, r33707043, MPFR_RNDN);
        mpfr_mul(r33707047, r33707046, r33707043, MPFR_RNDN);
        mpfr_mul(r33707048, r33707045, r33707047, MPFR_RNDN);
        mpfr_add(r33707049, r33707044, r33707048, MPFR_RNDN);
        ;
        mpfr_mul(r33707051, r33707047, r33707043, MPFR_RNDN);
        mpfr_mul(r33707052, r33707051, r33707043, MPFR_RNDN);
        mpfr_mul(r33707053, r33707050, r33707052, MPFR_RNDN);
        mpfr_add(r33707054, r33707049, r33707053, MPFR_RNDN);
        ;
        mpfr_mul(r33707056, r33707052, r33707043, MPFR_RNDN);
        mpfr_mul(r33707057, r33707056, r33707043, MPFR_RNDN);
        mpfr_mul(r33707058, r33707055, r33707057, MPFR_RNDN);
        mpfr_add(r33707059, r33707054, r33707058, MPFR_RNDN);
        ;
        mpfr_mul(r33707061, r33707057, r33707043, MPFR_RNDN);
        mpfr_mul(r33707062, r33707061, r33707043, MPFR_RNDN);
        mpfr_mul(r33707063, r33707060, r33707062, MPFR_RNDN);
        mpfr_add(r33707064, r33707059, r33707063, MPFR_RNDN);
        return mpfr_get_d(r33707064, MPFR_RNDN);
}

static mpfr_t r33707065, r33707066, r33707067, r33707068, r33707069, r33707070, r33707071, r33707072, r33707073, r33707074, r33707075, r33707076, r33707077, r33707078, r33707079, r33707080, r33707081, r33707082, r33707083, r33707084, r33707085, r33707086, r33707087, r33707088, r33707089, r33707090, r33707091, r33707092, r33707093, r33707094;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33707065);
        mpfr_init_set_str(r33707066, "3", 10, MPFR_RNDN);
        mpfr_init(r33707067);
        mpfr_init(r33707068);
        mpfr_init(r33707069);
        mpfr_init_set_str(r33707070, "140.765625", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707071, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r33707072);
        mpfr_init(r33707073);
        mpfr_init(r33707074);
        mpfr_init_set_str(r33707075, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r33707076);
        mpfr_init(r33707077);
        mpfr_init_set_str(r33707078, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r33707079);
        mpfr_init(r33707080);
        mpfr_init(r33707081);
        mpfr_init_set_str(r33707082, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r33707083);
        mpfr_init(r33707084);
        mpfr_init_set_str(r33707085, "1", 10, MPFR_RNDN);
        mpfr_init(r33707086);
        mpfr_init(r33707087);
        mpfr_init(r33707088);
        mpfr_init(r33707089);
        mpfr_init(r33707090);
        mpfr_init(r33707091);
        mpfr_init(r33707092);
        mpfr_init(r33707093);
        mpfr_init(r33707094);
}

double f_fm(double x) {
        mpfr_set_d(r33707065, x, MPFR_RNDN);
        ;
        mpfr_pow(r33707067, r33707065, r33707066, MPFR_RNDN);
        mpfr_mul(r33707068, r33707065, r33707065, MPFR_RNDN);
        mpfr_mul(r33707069, r33707067, r33707068, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r33707072, r33707068, r33707071, MPFR_RNDN);
        mpfr_add(r33707073, r33707070, r33707072, MPFR_RNDN);
        mpfr_mul(r33707074, r33707069, r33707073, MPFR_RNDN);
        ;
        mpfr_mul(r33707076, r33707065, r33707075, MPFR_RNDN);
        mpfr_exp(r33707077, r33707076, MPFR_RNDN);
        ;
        mpfr_exp(r33707079, r33707078, MPFR_RNDN);
        mpfr_pow(r33707080, r33707079, r33707067, MPFR_RNDN);
        mpfr_mul(r33707081, r33707077, r33707080, MPFR_RNDN);
        ;
        mpfr_mul(r33707083, r33707065, r33707082, MPFR_RNDN);
        mpfr_exp(r33707084, r33707083, MPFR_RNDN);
        ;
        mpfr_add(r33707086, r33707085, r33707066, MPFR_RNDN);
        mpfr_pow(r33707087, r33707068, r33707086, MPFR_RNDN);
        mpfr_pow(r33707088, r33707084, r33707087, MPFR_RNDN);
        mpfr_mul(r33707089, r33707081, r33707088, MPFR_RNDN);
        mpfr_log(r33707090, r33707089, MPFR_RNDN);
        mpfr_add(r33707091, r33707074, r33707090, MPFR_RNDN);
        mpfr_cbrt(r33707092, r33707091, MPFR_RNDN);
        mpfr_mul(r33707093, r33707092, r33707092, MPFR_RNDN);
        mpfr_mul(r33707094, r33707093, r33707092, MPFR_RNDN);
        return mpfr_get_d(r33707094, MPFR_RNDN);
}

static mpfr_t r33707095, r33707096, r33707097, r33707098, r33707099, r33707100, r33707101, r33707102, r33707103, r33707104, r33707105, r33707106, r33707107, r33707108, r33707109, r33707110, r33707111, r33707112, r33707113, r33707114, r33707115, r33707116, r33707117, r33707118, r33707119, r33707120, r33707121, r33707122, r33707123, r33707124;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33707095);
        mpfr_init_set_str(r33707096, "3", 10, MPFR_RNDN);
        mpfr_init(r33707097);
        mpfr_init(r33707098);
        mpfr_init(r33707099);
        mpfr_init_set_str(r33707100, "140.765625", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707101, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r33707102);
        mpfr_init(r33707103);
        mpfr_init(r33707104);
        mpfr_init_set_str(r33707105, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r33707106);
        mpfr_init(r33707107);
        mpfr_init_set_str(r33707108, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r33707109);
        mpfr_init(r33707110);
        mpfr_init(r33707111);
        mpfr_init_set_str(r33707112, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r33707113);
        mpfr_init(r33707114);
        mpfr_init_set_str(r33707115, "1", 10, MPFR_RNDN);
        mpfr_init(r33707116);
        mpfr_init(r33707117);
        mpfr_init(r33707118);
        mpfr_init(r33707119);
        mpfr_init(r33707120);
        mpfr_init(r33707121);
        mpfr_init(r33707122);
        mpfr_init(r33707123);
        mpfr_init(r33707124);
}

double f_dm(double x) {
        mpfr_set_d(r33707095, x, MPFR_RNDN);
        ;
        mpfr_pow(r33707097, r33707095, r33707096, MPFR_RNDN);
        mpfr_mul(r33707098, r33707095, r33707095, MPFR_RNDN);
        mpfr_mul(r33707099, r33707097, r33707098, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r33707102, r33707098, r33707101, MPFR_RNDN);
        mpfr_add(r33707103, r33707100, r33707102, MPFR_RNDN);
        mpfr_mul(r33707104, r33707099, r33707103, MPFR_RNDN);
        ;
        mpfr_mul(r33707106, r33707095, r33707105, MPFR_RNDN);
        mpfr_exp(r33707107, r33707106, MPFR_RNDN);
        ;
        mpfr_exp(r33707109, r33707108, MPFR_RNDN);
        mpfr_pow(r33707110, r33707109, r33707097, MPFR_RNDN);
        mpfr_mul(r33707111, r33707107, r33707110, MPFR_RNDN);
        ;
        mpfr_mul(r33707113, r33707095, r33707112, MPFR_RNDN);
        mpfr_exp(r33707114, r33707113, MPFR_RNDN);
        ;
        mpfr_add(r33707116, r33707115, r33707096, MPFR_RNDN);
        mpfr_pow(r33707117, r33707098, r33707116, MPFR_RNDN);
        mpfr_pow(r33707118, r33707114, r33707117, MPFR_RNDN);
        mpfr_mul(r33707119, r33707111, r33707118, MPFR_RNDN);
        mpfr_log(r33707120, r33707119, MPFR_RNDN);
        mpfr_add(r33707121, r33707104, r33707120, MPFR_RNDN);
        mpfr_cbrt(r33707122, r33707121, MPFR_RNDN);
        mpfr_mul(r33707123, r33707122, r33707122, MPFR_RNDN);
        mpfr_mul(r33707124, r33707123, r33707122, MPFR_RNDN);
        return mpfr_get_d(r33707124, MPFR_RNDN);
}

