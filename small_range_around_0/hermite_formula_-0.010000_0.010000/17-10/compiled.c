#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r4114919 = -30240.0;
        float r4114920 = 302400.0;
        float r4114921 = x;
        float r4114922 = r4114921 * r4114921;
        float r4114923 = r4114920 * r4114922;
        float r4114924 = r4114919 + r4114923;
        float r4114925 = -403200.0;
        float r4114926 = r4114922 * r4114921;
        float r4114927 = r4114926 * r4114921;
        float r4114928 = r4114925 * r4114927;
        float r4114929 = r4114924 + r4114928;
        float r4114930 = 161280.0;
        float r4114931 = r4114927 * r4114921;
        float r4114932 = r4114931 * r4114921;
        float r4114933 = r4114930 * r4114932;
        float r4114934 = r4114929 + r4114933;
        float r4114935 = -23040.0;
        float r4114936 = r4114932 * r4114921;
        float r4114937 = r4114936 * r4114921;
        float r4114938 = r4114935 * r4114937;
        float r4114939 = r4114934 + r4114938;
        float r4114940 = 1024.0;
        float r4114941 = r4114937 * r4114921;
        float r4114942 = r4114941 * r4114921;
        float r4114943 = r4114940 * r4114942;
        float r4114944 = r4114939 + r4114943;
        return r4114944;
}

double f_id(double x) {
        double r4114945 = -30240.0;
        double r4114946 = 302400.0;
        double r4114947 = x;
        double r4114948 = r4114947 * r4114947;
        double r4114949 = r4114946 * r4114948;
        double r4114950 = r4114945 + r4114949;
        double r4114951 = -403200.0;
        double r4114952 = r4114948 * r4114947;
        double r4114953 = r4114952 * r4114947;
        double r4114954 = r4114951 * r4114953;
        double r4114955 = r4114950 + r4114954;
        double r4114956 = 161280.0;
        double r4114957 = r4114953 * r4114947;
        double r4114958 = r4114957 * r4114947;
        double r4114959 = r4114956 * r4114958;
        double r4114960 = r4114955 + r4114959;
        double r4114961 = -23040.0;
        double r4114962 = r4114958 * r4114947;
        double r4114963 = r4114962 * r4114947;
        double r4114964 = r4114961 * r4114963;
        double r4114965 = r4114960 + r4114964;
        double r4114966 = 1024.0;
        double r4114967 = r4114963 * r4114947;
        double r4114968 = r4114967 * r4114947;
        double r4114969 = r4114966 * r4114968;
        double r4114970 = r4114965 + r4114969;
        return r4114970;
}


double f_of(float x) {
        float r4114971 = -30240.0;
        float r4114972 = 302400.0;
        float r4114973 = x;
        float r4114974 = r4114973 * r4114973;
        float r4114975 = r4114972 * r4114974;
        float r4114976 = r4114971 + r4114975;
        float r4114977 = -403200.0;
        float r4114978 = r4114974 * r4114973;
        float r4114979 = r4114978 * r4114973;
        float r4114980 = r4114977 * r4114979;
        float r4114981 = r4114976 + r4114980;
        float r4114982 = 161280.0;
        float r4114983 = r4114979 * r4114973;
        float r4114984 = r4114983 * r4114973;
        float r4114985 = r4114982 * r4114984;
        float r4114986 = r4114981 + r4114985;
        float r4114987 = -23040.0;
        float r4114988 = r4114984 * r4114973;
        float r4114989 = r4114988 * r4114973;
        float r4114990 = r4114987 * r4114989;
        float r4114991 = r4114986 + r4114990;
        float r4114992 = 1024.0;
        float r4114993 = r4114989 * r4114973;
        float r4114994 = r4114993 * r4114973;
        float r4114995 = r4114992 * r4114994;
        float r4114996 = r4114991 + r4114995;
        return r4114996;
}

double f_od(double x) {
        double r4114997 = -30240.0;
        double r4114998 = 302400.0;
        double r4114999 = x;
        double r4115000 = r4114999 * r4114999;
        double r4115001 = r4114998 * r4115000;
        double r4115002 = r4114997 + r4115001;
        double r4115003 = -403200.0;
        double r4115004 = r4115000 * r4114999;
        double r4115005 = r4115004 * r4114999;
        double r4115006 = r4115003 * r4115005;
        double r4115007 = r4115002 + r4115006;
        double r4115008 = 161280.0;
        double r4115009 = r4115005 * r4114999;
        double r4115010 = r4115009 * r4114999;
        double r4115011 = r4115008 * r4115010;
        double r4115012 = r4115007 + r4115011;
        double r4115013 = -23040.0;
        double r4115014 = r4115010 * r4114999;
        double r4115015 = r4115014 * r4114999;
        double r4115016 = r4115013 * r4115015;
        double r4115017 = r4115012 + r4115016;
        double r4115018 = 1024.0;
        double r4115019 = r4115015 * r4114999;
        double r4115020 = r4115019 * r4114999;
        double r4115021 = r4115018 * r4115020;
        double r4115022 = r4115017 + r4115021;
        return r4115022;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4115023, r4115024, r4115025, r4115026, r4115027, r4115028, r4115029, r4115030, r4115031, r4115032, r4115033, r4115034, r4115035, r4115036, r4115037, r4115038, r4115039, r4115040, r4115041, r4115042, r4115043, r4115044, r4115045, r4115046, r4115047, r4115048;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4115023, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4115024, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r4115025);
        mpfr_init(r4115026);
        mpfr_init(r4115027);
        mpfr_init(r4115028);
        mpfr_init_set_str(r4115029, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r4115030);
        mpfr_init(r4115031);
        mpfr_init(r4115032);
        mpfr_init(r4115033);
        mpfr_init_set_str(r4115034, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r4115035);
        mpfr_init(r4115036);
        mpfr_init(r4115037);
        mpfr_init(r4115038);
        mpfr_init_set_str(r4115039, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r4115040);
        mpfr_init(r4115041);
        mpfr_init(r4115042);
        mpfr_init(r4115043);
        mpfr_init_set_str(r4115044, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r4115045);
        mpfr_init(r4115046);
        mpfr_init(r4115047);
        mpfr_init(r4115048);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4115025, x, MPFR_RNDN);
        mpfr_mul(r4115026, r4115025, r4115025, MPFR_RNDN);
        mpfr_mul(r4115027, r4115024, r4115026, MPFR_RNDN);
        mpfr_add(r4115028, r4115023, r4115027, MPFR_RNDN);
        ;
        mpfr_mul(r4115030, r4115026, r4115025, MPFR_RNDN);
        mpfr_mul(r4115031, r4115030, r4115025, MPFR_RNDN);
        mpfr_mul(r4115032, r4115029, r4115031, MPFR_RNDN);
        mpfr_add(r4115033, r4115028, r4115032, MPFR_RNDN);
        ;
        mpfr_mul(r4115035, r4115031, r4115025, MPFR_RNDN);
        mpfr_mul(r4115036, r4115035, r4115025, MPFR_RNDN);
        mpfr_mul(r4115037, r4115034, r4115036, MPFR_RNDN);
        mpfr_add(r4115038, r4115033, r4115037, MPFR_RNDN);
        ;
        mpfr_mul(r4115040, r4115036, r4115025, MPFR_RNDN);
        mpfr_mul(r4115041, r4115040, r4115025, MPFR_RNDN);
        mpfr_mul(r4115042, r4115039, r4115041, MPFR_RNDN);
        mpfr_add(r4115043, r4115038, r4115042, MPFR_RNDN);
        ;
        mpfr_mul(r4115045, r4115041, r4115025, MPFR_RNDN);
        mpfr_mul(r4115046, r4115045, r4115025, MPFR_RNDN);
        mpfr_mul(r4115047, r4115044, r4115046, MPFR_RNDN);
        mpfr_add(r4115048, r4115043, r4115047, MPFR_RNDN);
        return mpfr_get_d(r4115048, MPFR_RNDN);
}

static mpfr_t r4115049, r4115050, r4115051, r4115052, r4115053, r4115054, r4115055, r4115056, r4115057, r4115058, r4115059, r4115060, r4115061, r4115062, r4115063, r4115064, r4115065, r4115066, r4115067, r4115068, r4115069, r4115070, r4115071, r4115072, r4115073, r4115074;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4115049, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4115050, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r4115051);
        mpfr_init(r4115052);
        mpfr_init(r4115053);
        mpfr_init(r4115054);
        mpfr_init_set_str(r4115055, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r4115056);
        mpfr_init(r4115057);
        mpfr_init(r4115058);
        mpfr_init(r4115059);
        mpfr_init_set_str(r4115060, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r4115061);
        mpfr_init(r4115062);
        mpfr_init(r4115063);
        mpfr_init(r4115064);
        mpfr_init_set_str(r4115065, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r4115066);
        mpfr_init(r4115067);
        mpfr_init(r4115068);
        mpfr_init(r4115069);
        mpfr_init_set_str(r4115070, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r4115071);
        mpfr_init(r4115072);
        mpfr_init(r4115073);
        mpfr_init(r4115074);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4115051, x, MPFR_RNDN);
        mpfr_mul(r4115052, r4115051, r4115051, MPFR_RNDN);
        mpfr_mul(r4115053, r4115050, r4115052, MPFR_RNDN);
        mpfr_add(r4115054, r4115049, r4115053, MPFR_RNDN);
        ;
        mpfr_mul(r4115056, r4115052, r4115051, MPFR_RNDN);
        mpfr_mul(r4115057, r4115056, r4115051, MPFR_RNDN);
        mpfr_mul(r4115058, r4115055, r4115057, MPFR_RNDN);
        mpfr_add(r4115059, r4115054, r4115058, MPFR_RNDN);
        ;
        mpfr_mul(r4115061, r4115057, r4115051, MPFR_RNDN);
        mpfr_mul(r4115062, r4115061, r4115051, MPFR_RNDN);
        mpfr_mul(r4115063, r4115060, r4115062, MPFR_RNDN);
        mpfr_add(r4115064, r4115059, r4115063, MPFR_RNDN);
        ;
        mpfr_mul(r4115066, r4115062, r4115051, MPFR_RNDN);
        mpfr_mul(r4115067, r4115066, r4115051, MPFR_RNDN);
        mpfr_mul(r4115068, r4115065, r4115067, MPFR_RNDN);
        mpfr_add(r4115069, r4115064, r4115068, MPFR_RNDN);
        ;
        mpfr_mul(r4115071, r4115067, r4115051, MPFR_RNDN);
        mpfr_mul(r4115072, r4115071, r4115051, MPFR_RNDN);
        mpfr_mul(r4115073, r4115070, r4115072, MPFR_RNDN);
        mpfr_add(r4115074, r4115069, r4115073, MPFR_RNDN);
        return mpfr_get_d(r4115074, MPFR_RNDN);
}

static mpfr_t r4115075, r4115076, r4115077, r4115078, r4115079, r4115080, r4115081, r4115082, r4115083, r4115084, r4115085, r4115086, r4115087, r4115088, r4115089, r4115090, r4115091, r4115092, r4115093, r4115094, r4115095, r4115096, r4115097, r4115098, r4115099, r4115100;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4115075, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4115076, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r4115077);
        mpfr_init(r4115078);
        mpfr_init(r4115079);
        mpfr_init(r4115080);
        mpfr_init_set_str(r4115081, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r4115082);
        mpfr_init(r4115083);
        mpfr_init(r4115084);
        mpfr_init(r4115085);
        mpfr_init_set_str(r4115086, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r4115087);
        mpfr_init(r4115088);
        mpfr_init(r4115089);
        mpfr_init(r4115090);
        mpfr_init_set_str(r4115091, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r4115092);
        mpfr_init(r4115093);
        mpfr_init(r4115094);
        mpfr_init(r4115095);
        mpfr_init_set_str(r4115096, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r4115097);
        mpfr_init(r4115098);
        mpfr_init(r4115099);
        mpfr_init(r4115100);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4115077, x, MPFR_RNDN);
        mpfr_mul(r4115078, r4115077, r4115077, MPFR_RNDN);
        mpfr_mul(r4115079, r4115076, r4115078, MPFR_RNDN);
        mpfr_add(r4115080, r4115075, r4115079, MPFR_RNDN);
        ;
        mpfr_mul(r4115082, r4115078, r4115077, MPFR_RNDN);
        mpfr_mul(r4115083, r4115082, r4115077, MPFR_RNDN);
        mpfr_mul(r4115084, r4115081, r4115083, MPFR_RNDN);
        mpfr_add(r4115085, r4115080, r4115084, MPFR_RNDN);
        ;
        mpfr_mul(r4115087, r4115083, r4115077, MPFR_RNDN);
        mpfr_mul(r4115088, r4115087, r4115077, MPFR_RNDN);
        mpfr_mul(r4115089, r4115086, r4115088, MPFR_RNDN);
        mpfr_add(r4115090, r4115085, r4115089, MPFR_RNDN);
        ;
        mpfr_mul(r4115092, r4115088, r4115077, MPFR_RNDN);
        mpfr_mul(r4115093, r4115092, r4115077, MPFR_RNDN);
        mpfr_mul(r4115094, r4115091, r4115093, MPFR_RNDN);
        mpfr_add(r4115095, r4115090, r4115094, MPFR_RNDN);
        ;
        mpfr_mul(r4115097, r4115093, r4115077, MPFR_RNDN);
        mpfr_mul(r4115098, r4115097, r4115077, MPFR_RNDN);
        mpfr_mul(r4115099, r4115096, r4115098, MPFR_RNDN);
        mpfr_add(r4115100, r4115095, r4115099, MPFR_RNDN);
        return mpfr_get_d(r4115100, MPFR_RNDN);
}

