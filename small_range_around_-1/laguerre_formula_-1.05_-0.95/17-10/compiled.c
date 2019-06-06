#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r10531959 = 1.0;
        float r10531960 = -10.0;
        float r10531961 = x;
        float r10531962 = r10531960 * r10531961;
        float r10531963 = r10531959 + r10531962;
        float r10531964 = 22.5;
        float r10531965 = r10531961 * r10531961;
        float r10531966 = r10531964 * r10531965;
        float r10531967 = r10531963 + r10531966;
        float r10531968 = -20.0;
        float r10531969 = r10531965 * r10531961;
        float r10531970 = r10531968 * r10531969;
        float r10531971 = r10531967 + r10531970;
        float r10531972 = 8.75;
        float r10531973 = r10531969 * r10531961;
        float r10531974 = r10531972 * r10531973;
        float r10531975 = r10531971 + r10531974;
        float r10531976 = -2.1;
        float r10531977 = r10531973 * r10531961;
        float r10531978 = r10531976 * r10531977;
        float r10531979 = r10531975 + r10531978;
        float r10531980 = 0.291667;
        float r10531981 = r10531977 * r10531961;
        float r10531982 = r10531980 * r10531981;
        float r10531983 = r10531979 + r10531982;
        float r10531984 = -0.02381;
        float r10531985 = r10531981 * r10531961;
        float r10531986 = r10531984 * r10531985;
        float r10531987 = r10531983 + r10531986;
        float r10531988 = 0.001116;
        float r10531989 = r10531985 * r10531961;
        float r10531990 = r10531988 * r10531989;
        float r10531991 = r10531987 + r10531990;
        float r10531992 = -2.8e-05;
        float r10531993 = r10531989 * r10531961;
        float r10531994 = r10531992 * r10531993;
        float r10531995 = r10531991 + r10531994;
        return r10531995;
}

double f_id(double x) {
        double r10531996 = 1.0;
        double r10531997 = -10.0;
        double r10531998 = x;
        double r10531999 = r10531997 * r10531998;
        double r10532000 = r10531996 + r10531999;
        double r10532001 = 22.5;
        double r10532002 = r10531998 * r10531998;
        double r10532003 = r10532001 * r10532002;
        double r10532004 = r10532000 + r10532003;
        double r10532005 = -20.0;
        double r10532006 = r10532002 * r10531998;
        double r10532007 = r10532005 * r10532006;
        double r10532008 = r10532004 + r10532007;
        double r10532009 = 8.75;
        double r10532010 = r10532006 * r10531998;
        double r10532011 = r10532009 * r10532010;
        double r10532012 = r10532008 + r10532011;
        double r10532013 = -2.1;
        double r10532014 = r10532010 * r10531998;
        double r10532015 = r10532013 * r10532014;
        double r10532016 = r10532012 + r10532015;
        double r10532017 = 0.291667;
        double r10532018 = r10532014 * r10531998;
        double r10532019 = r10532017 * r10532018;
        double r10532020 = r10532016 + r10532019;
        double r10532021 = -0.02381;
        double r10532022 = r10532018 * r10531998;
        double r10532023 = r10532021 * r10532022;
        double r10532024 = r10532020 + r10532023;
        double r10532025 = 0.001116;
        double r10532026 = r10532022 * r10531998;
        double r10532027 = r10532025 * r10532026;
        double r10532028 = r10532024 + r10532027;
        double r10532029 = -2.8e-05;
        double r10532030 = r10532026 * r10531998;
        double r10532031 = r10532029 * r10532030;
        double r10532032 = r10532028 + r10532031;
        return r10532032;
}


double f_of(float x) {
        float r10532033 = 1.0;
        float r10532034 = x;
        float r10532035 = -10.0;
        float r10532036 = r10532034 * r10532035;
        float r10532037 = r10532033 + r10532036;
        float r10532038 = 0.291667;
        float r10532039 = r10532038 * r10532034;
        float r10532040 = r10532039 * r10532034;
        float r10532041 = 8.75;
        float r10532042 = -2.1;
        float r10532043 = r10532034 * r10532042;
        float r10532044 = r10532041 + r10532043;
        float r10532045 = r10532040 + r10532044;
        float r10532046 = 4;
        float r10532047 = pow(r10532034, r10532046);
        float r10532048 = r10532045 * r10532047;
        float r10532049 = r10532037 + r10532048;
        float r10532050 = 22.5;
        float r10532051 = -20.0;
        float r10532052 = r10532034 * r10532051;
        float r10532053 = r10532050 + r10532052;
        float r10532054 = r10532034 * r10532034;
        float r10532055 = r10532053 * r10532054;
        float r10532056 = -0.02381;
        float r10532057 = r10532034 * r10532056;
        float r10532058 = r10532057 * r10532054;
        float r10532059 = r10532054 * r10532054;
        float r10532060 = r10532058 * r10532059;
        float r10532061 = -1;
        float r10532062 = r10532061 / r10532034;
        float r10532063 = -8;
        float r10532064 = pow(r10532062, r10532063);
        float r10532065 = -2.8e-05;
        float r10532066 = r10532034 * r10532065;
        float r10532067 = 0.001116;
        float r10532068 = r10532066 + r10532067;
        float r10532069 = r10532064 * r10532068;
        float r10532070 = r10532060 + r10532069;
        float r10532071 = r10532055 + r10532070;
        float r10532072 = r10532049 + r10532071;
        return r10532072;
}

double f_od(double x) {
        double r10532073 = 1.0;
        double r10532074 = x;
        double r10532075 = -10.0;
        double r10532076 = r10532074 * r10532075;
        double r10532077 = r10532073 + r10532076;
        double r10532078 = 0.291667;
        double r10532079 = r10532078 * r10532074;
        double r10532080 = r10532079 * r10532074;
        double r10532081 = 8.75;
        double r10532082 = -2.1;
        double r10532083 = r10532074 * r10532082;
        double r10532084 = r10532081 + r10532083;
        double r10532085 = r10532080 + r10532084;
        double r10532086 = 4;
        double r10532087 = pow(r10532074, r10532086);
        double r10532088 = r10532085 * r10532087;
        double r10532089 = r10532077 + r10532088;
        double r10532090 = 22.5;
        double r10532091 = -20.0;
        double r10532092 = r10532074 * r10532091;
        double r10532093 = r10532090 + r10532092;
        double r10532094 = r10532074 * r10532074;
        double r10532095 = r10532093 * r10532094;
        double r10532096 = -0.02381;
        double r10532097 = r10532074 * r10532096;
        double r10532098 = r10532097 * r10532094;
        double r10532099 = r10532094 * r10532094;
        double r10532100 = r10532098 * r10532099;
        double r10532101 = -1;
        double r10532102 = r10532101 / r10532074;
        double r10532103 = -8;
        double r10532104 = pow(r10532102, r10532103);
        double r10532105 = -2.8e-05;
        double r10532106 = r10532074 * r10532105;
        double r10532107 = 0.001116;
        double r10532108 = r10532106 + r10532107;
        double r10532109 = r10532104 * r10532108;
        double r10532110 = r10532100 + r10532109;
        double r10532111 = r10532095 + r10532110;
        double r10532112 = r10532089 + r10532111;
        return r10532112;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10532113, r10532114, r10532115, r10532116, r10532117, r10532118, r10532119, r10532120, r10532121, r10532122, r10532123, r10532124, r10532125, r10532126, r10532127, r10532128, r10532129, r10532130, r10532131, r10532132, r10532133, r10532134, r10532135, r10532136, r10532137, r10532138, r10532139, r10532140, r10532141, r10532142, r10532143, r10532144, r10532145, r10532146, r10532147, r10532148, r10532149;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10532113, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10532114, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10532115);
        mpfr_init(r10532116);
        mpfr_init(r10532117);
        mpfr_init_set_str(r10532118, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10532119);
        mpfr_init(r10532120);
        mpfr_init(r10532121);
        mpfr_init_set_str(r10532122, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10532123);
        mpfr_init(r10532124);
        mpfr_init(r10532125);
        mpfr_init_set_str(r10532126, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10532127);
        mpfr_init(r10532128);
        mpfr_init(r10532129);
        mpfr_init_set_str(r10532130, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10532131);
        mpfr_init(r10532132);
        mpfr_init(r10532133);
        mpfr_init_set_str(r10532134, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10532135);
        mpfr_init(r10532136);
        mpfr_init(r10532137);
        mpfr_init_set_str(r10532138, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10532139);
        mpfr_init(r10532140);
        mpfr_init(r10532141);
        mpfr_init_set_str(r10532142, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10532143);
        mpfr_init(r10532144);
        mpfr_init(r10532145);
        mpfr_init_set_str(r10532146, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10532147);
        mpfr_init(r10532148);
        mpfr_init(r10532149);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10532115, x, MPFR_RNDN);
        mpfr_mul(r10532116, r10532114, r10532115, MPFR_RNDN);
        mpfr_add(r10532117, r10532113, r10532116, MPFR_RNDN);
        ;
        mpfr_mul(r10532119, r10532115, r10532115, MPFR_RNDN);
        mpfr_mul(r10532120, r10532118, r10532119, MPFR_RNDN);
        mpfr_add(r10532121, r10532117, r10532120, MPFR_RNDN);
        ;
        mpfr_mul(r10532123, r10532119, r10532115, MPFR_RNDN);
        mpfr_mul(r10532124, r10532122, r10532123, MPFR_RNDN);
        mpfr_add(r10532125, r10532121, r10532124, MPFR_RNDN);
        ;
        mpfr_mul(r10532127, r10532123, r10532115, MPFR_RNDN);
        mpfr_mul(r10532128, r10532126, r10532127, MPFR_RNDN);
        mpfr_add(r10532129, r10532125, r10532128, MPFR_RNDN);
        ;
        mpfr_mul(r10532131, r10532127, r10532115, MPFR_RNDN);
        mpfr_mul(r10532132, r10532130, r10532131, MPFR_RNDN);
        mpfr_add(r10532133, r10532129, r10532132, MPFR_RNDN);
        ;
        mpfr_mul(r10532135, r10532131, r10532115, MPFR_RNDN);
        mpfr_mul(r10532136, r10532134, r10532135, MPFR_RNDN);
        mpfr_add(r10532137, r10532133, r10532136, MPFR_RNDN);
        ;
        mpfr_mul(r10532139, r10532135, r10532115, MPFR_RNDN);
        mpfr_mul(r10532140, r10532138, r10532139, MPFR_RNDN);
        mpfr_add(r10532141, r10532137, r10532140, MPFR_RNDN);
        ;
        mpfr_mul(r10532143, r10532139, r10532115, MPFR_RNDN);
        mpfr_mul(r10532144, r10532142, r10532143, MPFR_RNDN);
        mpfr_add(r10532145, r10532141, r10532144, MPFR_RNDN);
        ;
        mpfr_mul(r10532147, r10532143, r10532115, MPFR_RNDN);
        mpfr_mul(r10532148, r10532146, r10532147, MPFR_RNDN);
        mpfr_add(r10532149, r10532145, r10532148, MPFR_RNDN);
        return mpfr_get_d(r10532149, MPFR_RNDN);
}

static mpfr_t r10532150, r10532151, r10532152, r10532153, r10532154, r10532155, r10532156, r10532157, r10532158, r10532159, r10532160, r10532161, r10532162, r10532163, r10532164, r10532165, r10532166, r10532167, r10532168, r10532169, r10532170, r10532171, r10532172, r10532173, r10532174, r10532175, r10532176, r10532177, r10532178, r10532179, r10532180, r10532181, r10532182, r10532183, r10532184, r10532185, r10532186, r10532187, r10532188, r10532189;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10532150, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10532151);
        mpfr_init_set_str(r10532152, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10532153);
        mpfr_init(r10532154);
        mpfr_init_set_str(r10532155, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10532156);
        mpfr_init(r10532157);
        mpfr_init_set_str(r10532158, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r10532159, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10532160);
        mpfr_init(r10532161);
        mpfr_init(r10532162);
        mpfr_init_set_str(r10532163, "4", 10, MPFR_RNDN);
        mpfr_init(r10532164);
        mpfr_init(r10532165);
        mpfr_init(r10532166);
        mpfr_init_set_str(r10532167, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10532168, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10532169);
        mpfr_init(r10532170);
        mpfr_init(r10532171);
        mpfr_init(r10532172);
        mpfr_init_set_str(r10532173, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10532174);
        mpfr_init(r10532175);
        mpfr_init(r10532176);
        mpfr_init(r10532177);
        mpfr_init_set_str(r10532178, "-1", 10, MPFR_RNDN);
        mpfr_init(r10532179);
        mpfr_init_set_str(r10532180, "-8", 10, MPFR_RNDN);
        mpfr_init(r10532181);
        mpfr_init_set_str(r10532182, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10532183);
        mpfr_init_set_str(r10532184, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10532185);
        mpfr_init(r10532186);
        mpfr_init(r10532187);
        mpfr_init(r10532188);
        mpfr_init(r10532189);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10532151, x, MPFR_RNDN);
        ;
        mpfr_mul(r10532153, r10532151, r10532152, MPFR_RNDN);
        mpfr_add(r10532154, r10532150, r10532153, MPFR_RNDN);
        ;
        mpfr_mul(r10532156, r10532155, r10532151, MPFR_RNDN);
        mpfr_mul(r10532157, r10532156, r10532151, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10532160, r10532151, r10532159, MPFR_RNDN);
        mpfr_add(r10532161, r10532158, r10532160, MPFR_RNDN);
        mpfr_add(r10532162, r10532157, r10532161, MPFR_RNDN);
        ;
        mpfr_pow(r10532164, r10532151, r10532163, MPFR_RNDN);
        mpfr_mul(r10532165, r10532162, r10532164, MPFR_RNDN);
        mpfr_add(r10532166, r10532154, r10532165, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10532169, r10532151, r10532168, MPFR_RNDN);
        mpfr_add(r10532170, r10532167, r10532169, MPFR_RNDN);
        mpfr_mul(r10532171, r10532151, r10532151, MPFR_RNDN);
        mpfr_mul(r10532172, r10532170, r10532171, MPFR_RNDN);
        ;
        mpfr_mul(r10532174, r10532151, r10532173, MPFR_RNDN);
        mpfr_mul(r10532175, r10532174, r10532171, MPFR_RNDN);
        mpfr_mul(r10532176, r10532171, r10532171, MPFR_RNDN);
        mpfr_mul(r10532177, r10532175, r10532176, MPFR_RNDN);
        ;
        mpfr_div(r10532179, r10532178, r10532151, MPFR_RNDN);
        ;
        mpfr_pow(r10532181, r10532179, r10532180, MPFR_RNDN);
        ;
        mpfr_mul(r10532183, r10532151, r10532182, MPFR_RNDN);
        ;
        mpfr_add(r10532185, r10532183, r10532184, MPFR_RNDN);
        mpfr_mul(r10532186, r10532181, r10532185, MPFR_RNDN);
        mpfr_add(r10532187, r10532177, r10532186, MPFR_RNDN);
        mpfr_add(r10532188, r10532172, r10532187, MPFR_RNDN);
        mpfr_add(r10532189, r10532166, r10532188, MPFR_RNDN);
        return mpfr_get_d(r10532189, MPFR_RNDN);
}

static mpfr_t r10532190, r10532191, r10532192, r10532193, r10532194, r10532195, r10532196, r10532197, r10532198, r10532199, r10532200, r10532201, r10532202, r10532203, r10532204, r10532205, r10532206, r10532207, r10532208, r10532209, r10532210, r10532211, r10532212, r10532213, r10532214, r10532215, r10532216, r10532217, r10532218, r10532219, r10532220, r10532221, r10532222, r10532223, r10532224, r10532225, r10532226, r10532227, r10532228, r10532229;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10532190, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10532191);
        mpfr_init_set_str(r10532192, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10532193);
        mpfr_init(r10532194);
        mpfr_init_set_str(r10532195, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10532196);
        mpfr_init(r10532197);
        mpfr_init_set_str(r10532198, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r10532199, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10532200);
        mpfr_init(r10532201);
        mpfr_init(r10532202);
        mpfr_init_set_str(r10532203, "4", 10, MPFR_RNDN);
        mpfr_init(r10532204);
        mpfr_init(r10532205);
        mpfr_init(r10532206);
        mpfr_init_set_str(r10532207, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10532208, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10532209);
        mpfr_init(r10532210);
        mpfr_init(r10532211);
        mpfr_init(r10532212);
        mpfr_init_set_str(r10532213, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10532214);
        mpfr_init(r10532215);
        mpfr_init(r10532216);
        mpfr_init(r10532217);
        mpfr_init_set_str(r10532218, "-1", 10, MPFR_RNDN);
        mpfr_init(r10532219);
        mpfr_init_set_str(r10532220, "-8", 10, MPFR_RNDN);
        mpfr_init(r10532221);
        mpfr_init_set_str(r10532222, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10532223);
        mpfr_init_set_str(r10532224, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10532225);
        mpfr_init(r10532226);
        mpfr_init(r10532227);
        mpfr_init(r10532228);
        mpfr_init(r10532229);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10532191, x, MPFR_RNDN);
        ;
        mpfr_mul(r10532193, r10532191, r10532192, MPFR_RNDN);
        mpfr_add(r10532194, r10532190, r10532193, MPFR_RNDN);
        ;
        mpfr_mul(r10532196, r10532195, r10532191, MPFR_RNDN);
        mpfr_mul(r10532197, r10532196, r10532191, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10532200, r10532191, r10532199, MPFR_RNDN);
        mpfr_add(r10532201, r10532198, r10532200, MPFR_RNDN);
        mpfr_add(r10532202, r10532197, r10532201, MPFR_RNDN);
        ;
        mpfr_pow(r10532204, r10532191, r10532203, MPFR_RNDN);
        mpfr_mul(r10532205, r10532202, r10532204, MPFR_RNDN);
        mpfr_add(r10532206, r10532194, r10532205, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10532209, r10532191, r10532208, MPFR_RNDN);
        mpfr_add(r10532210, r10532207, r10532209, MPFR_RNDN);
        mpfr_mul(r10532211, r10532191, r10532191, MPFR_RNDN);
        mpfr_mul(r10532212, r10532210, r10532211, MPFR_RNDN);
        ;
        mpfr_mul(r10532214, r10532191, r10532213, MPFR_RNDN);
        mpfr_mul(r10532215, r10532214, r10532211, MPFR_RNDN);
        mpfr_mul(r10532216, r10532211, r10532211, MPFR_RNDN);
        mpfr_mul(r10532217, r10532215, r10532216, MPFR_RNDN);
        ;
        mpfr_div(r10532219, r10532218, r10532191, MPFR_RNDN);
        ;
        mpfr_pow(r10532221, r10532219, r10532220, MPFR_RNDN);
        ;
        mpfr_mul(r10532223, r10532191, r10532222, MPFR_RNDN);
        ;
        mpfr_add(r10532225, r10532223, r10532224, MPFR_RNDN);
        mpfr_mul(r10532226, r10532221, r10532225, MPFR_RNDN);
        mpfr_add(r10532227, r10532217, r10532226, MPFR_RNDN);
        mpfr_add(r10532228, r10532212, r10532227, MPFR_RNDN);
        mpfr_add(r10532229, r10532206, r10532228, MPFR_RNDN);
        return mpfr_get_d(r10532229, MPFR_RNDN);
}

