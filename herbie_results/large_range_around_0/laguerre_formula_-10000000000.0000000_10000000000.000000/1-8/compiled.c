#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r9372907 = 1.0;
        float r9372908 = -8.0;
        float r9372909 = x;
        float r9372910 = r9372908 * r9372909;
        float r9372911 = r9372907 + r9372910;
        float r9372912 = 14.0;
        float r9372913 = r9372909 * r9372909;
        float r9372914 = r9372912 * r9372913;
        float r9372915 = r9372911 + r9372914;
        float r9372916 = -9.333333;
        float r9372917 = r9372913 * r9372909;
        float r9372918 = r9372916 * r9372917;
        float r9372919 = r9372915 + r9372918;
        float r9372920 = 2.916667;
        float r9372921 = r9372917 * r9372909;
        float r9372922 = r9372920 * r9372921;
        float r9372923 = r9372919 + r9372922;
        float r9372924 = -0.466667;
        float r9372925 = r9372921 * r9372909;
        float r9372926 = r9372924 * r9372925;
        float r9372927 = r9372923 + r9372926;
        float r9372928 = 0.038889;
        float r9372929 = r9372925 * r9372909;
        float r9372930 = r9372928 * r9372929;
        float r9372931 = r9372927 + r9372930;
        float r9372932 = -0.001587;
        float r9372933 = r9372929 * r9372909;
        float r9372934 = r9372932 * r9372933;
        float r9372935 = r9372931 + r9372934;
        float r9372936 = 2.5e-05;
        float r9372937 = r9372933 * r9372909;
        float r9372938 = r9372936 * r9372937;
        float r9372939 = r9372935 + r9372938;
        return r9372939;
}

double f_id(double x) {
        double r9372940 = 1.0;
        double r9372941 = -8.0;
        double r9372942 = x;
        double r9372943 = r9372941 * r9372942;
        double r9372944 = r9372940 + r9372943;
        double r9372945 = 14.0;
        double r9372946 = r9372942 * r9372942;
        double r9372947 = r9372945 * r9372946;
        double r9372948 = r9372944 + r9372947;
        double r9372949 = -9.333333;
        double r9372950 = r9372946 * r9372942;
        double r9372951 = r9372949 * r9372950;
        double r9372952 = r9372948 + r9372951;
        double r9372953 = 2.916667;
        double r9372954 = r9372950 * r9372942;
        double r9372955 = r9372953 * r9372954;
        double r9372956 = r9372952 + r9372955;
        double r9372957 = -0.466667;
        double r9372958 = r9372954 * r9372942;
        double r9372959 = r9372957 * r9372958;
        double r9372960 = r9372956 + r9372959;
        double r9372961 = 0.038889;
        double r9372962 = r9372958 * r9372942;
        double r9372963 = r9372961 * r9372962;
        double r9372964 = r9372960 + r9372963;
        double r9372965 = -0.001587;
        double r9372966 = r9372962 * r9372942;
        double r9372967 = r9372965 * r9372966;
        double r9372968 = r9372964 + r9372967;
        double r9372969 = 2.5e-05;
        double r9372970 = r9372966 * r9372942;
        double r9372971 = r9372969 * r9372970;
        double r9372972 = r9372968 + r9372971;
        return r9372972;
}


double f_of(float x) {
        float r9372973 = 1.0;
        float r9372974 = -8.0;
        float r9372975 = x;
        float r9372976 = r9372974 * r9372975;
        float r9372977 = r9372973 + r9372976;
        float r9372978 = 14.0;
        float r9372979 = r9372978 * r9372975;
        float r9372980 = r9372979 * r9372975;
        float r9372981 = r9372977 + r9372980;
        float r9372982 = -9.333333;
        float r9372983 = r9372975 * r9372975;
        float r9372984 = r9372983 * r9372975;
        float r9372985 = r9372982 * r9372984;
        float r9372986 = r9372981 + r9372985;
        float r9372987 = 2.916667;
        float r9372988 = r9372984 * r9372975;
        float r9372989 = r9372987 * r9372988;
        float r9372990 = r9372986 + r9372989;
        float r9372991 = -0.466667;
        float r9372992 = r9372988 * r9372975;
        float r9372993 = r9372991 * r9372992;
        float r9372994 = r9372990 + r9372993;
        float r9372995 = 0.038889;
        float r9372996 = r9372992 * r9372975;
        float r9372997 = r9372995 * r9372996;
        float r9372998 = r9372994 + r9372997;
        float r9372999 = -0.001587;
        float r9373000 = r9372996 * r9372975;
        float r9373001 = r9372999 * r9373000;
        float r9373002 = r9372998 + r9373001;
        float r9373003 = 2.5e-05;
        float r9373004 = r9373000 * r9372975;
        float r9373005 = r9373003 * r9373004;
        float r9373006 = r9373002 + r9373005;
        return r9373006;
}

double f_od(double x) {
        double r9373007 = 1.0;
        double r9373008 = -8.0;
        double r9373009 = x;
        double r9373010 = r9373008 * r9373009;
        double r9373011 = r9373007 + r9373010;
        double r9373012 = 14.0;
        double r9373013 = r9373012 * r9373009;
        double r9373014 = r9373013 * r9373009;
        double r9373015 = r9373011 + r9373014;
        double r9373016 = -9.333333;
        double r9373017 = r9373009 * r9373009;
        double r9373018 = r9373017 * r9373009;
        double r9373019 = r9373016 * r9373018;
        double r9373020 = r9373015 + r9373019;
        double r9373021 = 2.916667;
        double r9373022 = r9373018 * r9373009;
        double r9373023 = r9373021 * r9373022;
        double r9373024 = r9373020 + r9373023;
        double r9373025 = -0.466667;
        double r9373026 = r9373022 * r9373009;
        double r9373027 = r9373025 * r9373026;
        double r9373028 = r9373024 + r9373027;
        double r9373029 = 0.038889;
        double r9373030 = r9373026 * r9373009;
        double r9373031 = r9373029 * r9373030;
        double r9373032 = r9373028 + r9373031;
        double r9373033 = -0.001587;
        double r9373034 = r9373030 * r9373009;
        double r9373035 = r9373033 * r9373034;
        double r9373036 = r9373032 + r9373035;
        double r9373037 = 2.5e-05;
        double r9373038 = r9373034 * r9373009;
        double r9373039 = r9373037 * r9373038;
        double r9373040 = r9373036 + r9373039;
        return r9373040;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9373041, r9373042, r9373043, r9373044, r9373045, r9373046, r9373047, r9373048, r9373049, r9373050, r9373051, r9373052, r9373053, r9373054, r9373055, r9373056, r9373057, r9373058, r9373059, r9373060, r9373061, r9373062, r9373063, r9373064, r9373065, r9373066, r9373067, r9373068, r9373069, r9373070, r9373071, r9373072, r9373073;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373041, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373042, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9373043);
        mpfr_init(r9373044);
        mpfr_init(r9373045);
        mpfr_init_set_str(r9373046, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9373047);
        mpfr_init(r9373048);
        mpfr_init(r9373049);
        mpfr_init_set_str(r9373050, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9373051);
        mpfr_init(r9373052);
        mpfr_init(r9373053);
        mpfr_init_set_str(r9373054, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9373055);
        mpfr_init(r9373056);
        mpfr_init(r9373057);
        mpfr_init_set_str(r9373058, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9373059);
        mpfr_init(r9373060);
        mpfr_init(r9373061);
        mpfr_init_set_str(r9373062, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r9373063);
        mpfr_init(r9373064);
        mpfr_init(r9373065);
        mpfr_init_set_str(r9373066, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9373067);
        mpfr_init(r9373068);
        mpfr_init(r9373069);
        mpfr_init_set_str(r9373070, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r9373071);
        mpfr_init(r9373072);
        mpfr_init(r9373073);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9373043, x, MPFR_RNDN);
        mpfr_mul(r9373044, r9373042, r9373043, MPFR_RNDN);
        mpfr_add(r9373045, r9373041, r9373044, MPFR_RNDN);
        ;
        mpfr_mul(r9373047, r9373043, r9373043, MPFR_RNDN);
        mpfr_mul(r9373048, r9373046, r9373047, MPFR_RNDN);
        mpfr_add(r9373049, r9373045, r9373048, MPFR_RNDN);
        ;
        mpfr_mul(r9373051, r9373047, r9373043, MPFR_RNDN);
        mpfr_mul(r9373052, r9373050, r9373051, MPFR_RNDN);
        mpfr_add(r9373053, r9373049, r9373052, MPFR_RNDN);
        ;
        mpfr_mul(r9373055, r9373051, r9373043, MPFR_RNDN);
        mpfr_mul(r9373056, r9373054, r9373055, MPFR_RNDN);
        mpfr_add(r9373057, r9373053, r9373056, MPFR_RNDN);
        ;
        mpfr_mul(r9373059, r9373055, r9373043, MPFR_RNDN);
        mpfr_mul(r9373060, r9373058, r9373059, MPFR_RNDN);
        mpfr_add(r9373061, r9373057, r9373060, MPFR_RNDN);
        ;
        mpfr_mul(r9373063, r9373059, r9373043, MPFR_RNDN);
        mpfr_mul(r9373064, r9373062, r9373063, MPFR_RNDN);
        mpfr_add(r9373065, r9373061, r9373064, MPFR_RNDN);
        ;
        mpfr_mul(r9373067, r9373063, r9373043, MPFR_RNDN);
        mpfr_mul(r9373068, r9373066, r9373067, MPFR_RNDN);
        mpfr_add(r9373069, r9373065, r9373068, MPFR_RNDN);
        ;
        mpfr_mul(r9373071, r9373067, r9373043, MPFR_RNDN);
        mpfr_mul(r9373072, r9373070, r9373071, MPFR_RNDN);
        mpfr_add(r9373073, r9373069, r9373072, MPFR_RNDN);
        return mpfr_get_d(r9373073, MPFR_RNDN);
}

static mpfr_t r9373074, r9373075, r9373076, r9373077, r9373078, r9373079, r9373080, r9373081, r9373082, r9373083, r9373084, r9373085, r9373086, r9373087, r9373088, r9373089, r9373090, r9373091, r9373092, r9373093, r9373094, r9373095, r9373096, r9373097, r9373098, r9373099, r9373100, r9373101, r9373102, r9373103, r9373104, r9373105, r9373106, r9373107;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373074, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373075, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9373076);
        mpfr_init(r9373077);
        mpfr_init(r9373078);
        mpfr_init_set_str(r9373079, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9373080);
        mpfr_init(r9373081);
        mpfr_init(r9373082);
        mpfr_init_set_str(r9373083, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9373084);
        mpfr_init(r9373085);
        mpfr_init(r9373086);
        mpfr_init(r9373087);
        mpfr_init_set_str(r9373088, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9373089);
        mpfr_init(r9373090);
        mpfr_init(r9373091);
        mpfr_init_set_str(r9373092, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9373093);
        mpfr_init(r9373094);
        mpfr_init(r9373095);
        mpfr_init_set_str(r9373096, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r9373097);
        mpfr_init(r9373098);
        mpfr_init(r9373099);
        mpfr_init_set_str(r9373100, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9373101);
        mpfr_init(r9373102);
        mpfr_init(r9373103);
        mpfr_init_set_str(r9373104, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r9373105);
        mpfr_init(r9373106);
        mpfr_init(r9373107);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9373076, x, MPFR_RNDN);
        mpfr_mul(r9373077, r9373075, r9373076, MPFR_RNDN);
        mpfr_add(r9373078, r9373074, r9373077, MPFR_RNDN);
        ;
        mpfr_mul(r9373080, r9373079, r9373076, MPFR_RNDN);
        mpfr_mul(r9373081, r9373080, r9373076, MPFR_RNDN);
        mpfr_add(r9373082, r9373078, r9373081, MPFR_RNDN);
        ;
        mpfr_mul(r9373084, r9373076, r9373076, MPFR_RNDN);
        mpfr_mul(r9373085, r9373084, r9373076, MPFR_RNDN);
        mpfr_mul(r9373086, r9373083, r9373085, MPFR_RNDN);
        mpfr_add(r9373087, r9373082, r9373086, MPFR_RNDN);
        ;
        mpfr_mul(r9373089, r9373085, r9373076, MPFR_RNDN);
        mpfr_mul(r9373090, r9373088, r9373089, MPFR_RNDN);
        mpfr_add(r9373091, r9373087, r9373090, MPFR_RNDN);
        ;
        mpfr_mul(r9373093, r9373089, r9373076, MPFR_RNDN);
        mpfr_mul(r9373094, r9373092, r9373093, MPFR_RNDN);
        mpfr_add(r9373095, r9373091, r9373094, MPFR_RNDN);
        ;
        mpfr_mul(r9373097, r9373093, r9373076, MPFR_RNDN);
        mpfr_mul(r9373098, r9373096, r9373097, MPFR_RNDN);
        mpfr_add(r9373099, r9373095, r9373098, MPFR_RNDN);
        ;
        mpfr_mul(r9373101, r9373097, r9373076, MPFR_RNDN);
        mpfr_mul(r9373102, r9373100, r9373101, MPFR_RNDN);
        mpfr_add(r9373103, r9373099, r9373102, MPFR_RNDN);
        ;
        mpfr_mul(r9373105, r9373101, r9373076, MPFR_RNDN);
        mpfr_mul(r9373106, r9373104, r9373105, MPFR_RNDN);
        mpfr_add(r9373107, r9373103, r9373106, MPFR_RNDN);
        return mpfr_get_d(r9373107, MPFR_RNDN);
}

static mpfr_t r9373108, r9373109, r9373110, r9373111, r9373112, r9373113, r9373114, r9373115, r9373116, r9373117, r9373118, r9373119, r9373120, r9373121, r9373122, r9373123, r9373124, r9373125, r9373126, r9373127, r9373128, r9373129, r9373130, r9373131, r9373132, r9373133, r9373134, r9373135, r9373136, r9373137, r9373138, r9373139, r9373140, r9373141;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373108, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373109, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9373110);
        mpfr_init(r9373111);
        mpfr_init(r9373112);
        mpfr_init_set_str(r9373113, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9373114);
        mpfr_init(r9373115);
        mpfr_init(r9373116);
        mpfr_init_set_str(r9373117, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9373118);
        mpfr_init(r9373119);
        mpfr_init(r9373120);
        mpfr_init(r9373121);
        mpfr_init_set_str(r9373122, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9373123);
        mpfr_init(r9373124);
        mpfr_init(r9373125);
        mpfr_init_set_str(r9373126, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9373127);
        mpfr_init(r9373128);
        mpfr_init(r9373129);
        mpfr_init_set_str(r9373130, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r9373131);
        mpfr_init(r9373132);
        mpfr_init(r9373133);
        mpfr_init_set_str(r9373134, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9373135);
        mpfr_init(r9373136);
        mpfr_init(r9373137);
        mpfr_init_set_str(r9373138, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r9373139);
        mpfr_init(r9373140);
        mpfr_init(r9373141);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9373110, x, MPFR_RNDN);
        mpfr_mul(r9373111, r9373109, r9373110, MPFR_RNDN);
        mpfr_add(r9373112, r9373108, r9373111, MPFR_RNDN);
        ;
        mpfr_mul(r9373114, r9373113, r9373110, MPFR_RNDN);
        mpfr_mul(r9373115, r9373114, r9373110, MPFR_RNDN);
        mpfr_add(r9373116, r9373112, r9373115, MPFR_RNDN);
        ;
        mpfr_mul(r9373118, r9373110, r9373110, MPFR_RNDN);
        mpfr_mul(r9373119, r9373118, r9373110, MPFR_RNDN);
        mpfr_mul(r9373120, r9373117, r9373119, MPFR_RNDN);
        mpfr_add(r9373121, r9373116, r9373120, MPFR_RNDN);
        ;
        mpfr_mul(r9373123, r9373119, r9373110, MPFR_RNDN);
        mpfr_mul(r9373124, r9373122, r9373123, MPFR_RNDN);
        mpfr_add(r9373125, r9373121, r9373124, MPFR_RNDN);
        ;
        mpfr_mul(r9373127, r9373123, r9373110, MPFR_RNDN);
        mpfr_mul(r9373128, r9373126, r9373127, MPFR_RNDN);
        mpfr_add(r9373129, r9373125, r9373128, MPFR_RNDN);
        ;
        mpfr_mul(r9373131, r9373127, r9373110, MPFR_RNDN);
        mpfr_mul(r9373132, r9373130, r9373131, MPFR_RNDN);
        mpfr_add(r9373133, r9373129, r9373132, MPFR_RNDN);
        ;
        mpfr_mul(r9373135, r9373131, r9373110, MPFR_RNDN);
        mpfr_mul(r9373136, r9373134, r9373135, MPFR_RNDN);
        mpfr_add(r9373137, r9373133, r9373136, MPFR_RNDN);
        ;
        mpfr_mul(r9373139, r9373135, r9373110, MPFR_RNDN);
        mpfr_mul(r9373140, r9373138, r9373139, MPFR_RNDN);
        mpfr_add(r9373141, r9373137, r9373140, MPFR_RNDN);
        return mpfr_get_d(r9373141, MPFR_RNDN);
}

