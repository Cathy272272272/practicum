#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r10197910 = 1.0;
        float r10197911 = -8.0;
        float r10197912 = x;
        float r10197913 = r10197911 * r10197912;
        float r10197914 = r10197910 + r10197913;
        float r10197915 = 14.0;
        float r10197916 = r10197912 * r10197912;
        float r10197917 = r10197915 * r10197916;
        float r10197918 = r10197914 + r10197917;
        float r10197919 = -9.333333;
        float r10197920 = r10197916 * r10197912;
        float r10197921 = r10197919 * r10197920;
        float r10197922 = r10197918 + r10197921;
        float r10197923 = 2.916667;
        float r10197924 = r10197920 * r10197912;
        float r10197925 = r10197923 * r10197924;
        float r10197926 = r10197922 + r10197925;
        float r10197927 = -0.466667;
        float r10197928 = r10197924 * r10197912;
        float r10197929 = r10197927 * r10197928;
        float r10197930 = r10197926 + r10197929;
        float r10197931 = 0.038889;
        float r10197932 = r10197928 * r10197912;
        float r10197933 = r10197931 * r10197932;
        float r10197934 = r10197930 + r10197933;
        float r10197935 = -0.001587;
        float r10197936 = r10197932 * r10197912;
        float r10197937 = r10197935 * r10197936;
        float r10197938 = r10197934 + r10197937;
        float r10197939 = 2.5e-05;
        float r10197940 = r10197936 * r10197912;
        float r10197941 = r10197939 * r10197940;
        float r10197942 = r10197938 + r10197941;
        return r10197942;
}

double f_id(double x) {
        double r10197943 = 1.0;
        double r10197944 = -8.0;
        double r10197945 = x;
        double r10197946 = r10197944 * r10197945;
        double r10197947 = r10197943 + r10197946;
        double r10197948 = 14.0;
        double r10197949 = r10197945 * r10197945;
        double r10197950 = r10197948 * r10197949;
        double r10197951 = r10197947 + r10197950;
        double r10197952 = -9.333333;
        double r10197953 = r10197949 * r10197945;
        double r10197954 = r10197952 * r10197953;
        double r10197955 = r10197951 + r10197954;
        double r10197956 = 2.916667;
        double r10197957 = r10197953 * r10197945;
        double r10197958 = r10197956 * r10197957;
        double r10197959 = r10197955 + r10197958;
        double r10197960 = -0.466667;
        double r10197961 = r10197957 * r10197945;
        double r10197962 = r10197960 * r10197961;
        double r10197963 = r10197959 + r10197962;
        double r10197964 = 0.038889;
        double r10197965 = r10197961 * r10197945;
        double r10197966 = r10197964 * r10197965;
        double r10197967 = r10197963 + r10197966;
        double r10197968 = -0.001587;
        double r10197969 = r10197965 * r10197945;
        double r10197970 = r10197968 * r10197969;
        double r10197971 = r10197967 + r10197970;
        double r10197972 = 2.5e-05;
        double r10197973 = r10197969 * r10197945;
        double r10197974 = r10197972 * r10197973;
        double r10197975 = r10197971 + r10197974;
        return r10197975;
}


double f_of(float x) {
        float r10197976 = x;
        float r10197977 = 2;
        float r10197978 = 3;
        float r10197979 = r10197977 * r10197978;
        float r10197980 = pow(r10197976, r10197979);
        float r10197981 = 2.5e-05;
        float r10197982 = r10197976 * r10197976;
        float r10197983 = r10197981 * r10197982;
        float r10197984 = r10197980 * r10197983;
        float r10197985 = -0.001587;
        float r10197986 = r10197985 * r10197976;
        float r10197987 = 0.038889;
        float r10197988 = r10197986 + r10197987;
        float r10197989 = r10197980 * r10197988;
        float r10197990 = r10197984 + r10197989;
        float r10197991 = -9.333333;
        float r10197992 = r10197991 * r10197976;
        float r10197993 = 14.0;
        float r10197994 = r10197992 + r10197993;
        float r10197995 = r10197982 * r10197994;
        float r10197996 = r10197982 * r10197982;
        float r10197997 = 2.916667;
        float r10197998 = -0.466667;
        float r10197999 = r10197998 * r10197976;
        float r10198000 = r10197997 + r10197999;
        float r10198001 = r10197996 * r10198000;
        float r10198002 = r10197995 + r10198001;
        float r10198003 = -8.0;
        float r10198004 = r10197976 * r10198003;
        float r10198005 = 1.0;
        float r10198006 = r10198004 + r10198005;
        float r10198007 = r10198002 + r10198006;
        float r10198008 = r10197990 + r10198007;
        return r10198008;
}

double f_od(double x) {
        double r10198009 = x;
        double r10198010 = 2;
        double r10198011 = 3;
        double r10198012 = r10198010 * r10198011;
        double r10198013 = pow(r10198009, r10198012);
        double r10198014 = 2.5e-05;
        double r10198015 = r10198009 * r10198009;
        double r10198016 = r10198014 * r10198015;
        double r10198017 = r10198013 * r10198016;
        double r10198018 = -0.001587;
        double r10198019 = r10198018 * r10198009;
        double r10198020 = 0.038889;
        double r10198021 = r10198019 + r10198020;
        double r10198022 = r10198013 * r10198021;
        double r10198023 = r10198017 + r10198022;
        double r10198024 = -9.333333;
        double r10198025 = r10198024 * r10198009;
        double r10198026 = 14.0;
        double r10198027 = r10198025 + r10198026;
        double r10198028 = r10198015 * r10198027;
        double r10198029 = r10198015 * r10198015;
        double r10198030 = 2.916667;
        double r10198031 = -0.466667;
        double r10198032 = r10198031 * r10198009;
        double r10198033 = r10198030 + r10198032;
        double r10198034 = r10198029 * r10198033;
        double r10198035 = r10198028 + r10198034;
        double r10198036 = -8.0;
        double r10198037 = r10198009 * r10198036;
        double r10198038 = 1.0;
        double r10198039 = r10198037 + r10198038;
        double r10198040 = r10198035 + r10198039;
        double r10198041 = r10198023 + r10198040;
        return r10198041;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10198042, r10198043, r10198044, r10198045, r10198046, r10198047, r10198048, r10198049, r10198050, r10198051, r10198052, r10198053, r10198054, r10198055, r10198056, r10198057, r10198058, r10198059, r10198060, r10198061, r10198062, r10198063, r10198064, r10198065, r10198066, r10198067, r10198068, r10198069, r10198070, r10198071, r10198072, r10198073, r10198074;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10198042, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198043, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10198044);
        mpfr_init(r10198045);
        mpfr_init(r10198046);
        mpfr_init_set_str(r10198047, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10198048);
        mpfr_init(r10198049);
        mpfr_init(r10198050);
        mpfr_init_set_str(r10198051, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10198052);
        mpfr_init(r10198053);
        mpfr_init(r10198054);
        mpfr_init_set_str(r10198055, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10198056);
        mpfr_init(r10198057);
        mpfr_init(r10198058);
        mpfr_init_set_str(r10198059, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10198060);
        mpfr_init(r10198061);
        mpfr_init(r10198062);
        mpfr_init_set_str(r10198063, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10198064);
        mpfr_init(r10198065);
        mpfr_init(r10198066);
        mpfr_init_set_str(r10198067, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10198068);
        mpfr_init(r10198069);
        mpfr_init(r10198070);
        mpfr_init_set_str(r10198071, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10198072);
        mpfr_init(r10198073);
        mpfr_init(r10198074);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10198044, x, MPFR_RNDN);
        mpfr_mul(r10198045, r10198043, r10198044, MPFR_RNDN);
        mpfr_add(r10198046, r10198042, r10198045, MPFR_RNDN);
        ;
        mpfr_mul(r10198048, r10198044, r10198044, MPFR_RNDN);
        mpfr_mul(r10198049, r10198047, r10198048, MPFR_RNDN);
        mpfr_add(r10198050, r10198046, r10198049, MPFR_RNDN);
        ;
        mpfr_mul(r10198052, r10198048, r10198044, MPFR_RNDN);
        mpfr_mul(r10198053, r10198051, r10198052, MPFR_RNDN);
        mpfr_add(r10198054, r10198050, r10198053, MPFR_RNDN);
        ;
        mpfr_mul(r10198056, r10198052, r10198044, MPFR_RNDN);
        mpfr_mul(r10198057, r10198055, r10198056, MPFR_RNDN);
        mpfr_add(r10198058, r10198054, r10198057, MPFR_RNDN);
        ;
        mpfr_mul(r10198060, r10198056, r10198044, MPFR_RNDN);
        mpfr_mul(r10198061, r10198059, r10198060, MPFR_RNDN);
        mpfr_add(r10198062, r10198058, r10198061, MPFR_RNDN);
        ;
        mpfr_mul(r10198064, r10198060, r10198044, MPFR_RNDN);
        mpfr_mul(r10198065, r10198063, r10198064, MPFR_RNDN);
        mpfr_add(r10198066, r10198062, r10198065, MPFR_RNDN);
        ;
        mpfr_mul(r10198068, r10198064, r10198044, MPFR_RNDN);
        mpfr_mul(r10198069, r10198067, r10198068, MPFR_RNDN);
        mpfr_add(r10198070, r10198066, r10198069, MPFR_RNDN);
        ;
        mpfr_mul(r10198072, r10198068, r10198044, MPFR_RNDN);
        mpfr_mul(r10198073, r10198071, r10198072, MPFR_RNDN);
        mpfr_add(r10198074, r10198070, r10198073, MPFR_RNDN);
        return mpfr_get_d(r10198074, MPFR_RNDN);
}

static mpfr_t r10198075, r10198076, r10198077, r10198078, r10198079, r10198080, r10198081, r10198082, r10198083, r10198084, r10198085, r10198086, r10198087, r10198088, r10198089, r10198090, r10198091, r10198092, r10198093, r10198094, r10198095, r10198096, r10198097, r10198098, r10198099, r10198100, r10198101, r10198102, r10198103, r10198104, r10198105, r10198106, r10198107;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10198075);
        mpfr_init_set_str(r10198076, "2", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198077, "3", 10, MPFR_RNDN);
        mpfr_init(r10198078);
        mpfr_init(r10198079);
        mpfr_init_set_str(r10198080, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10198081);
        mpfr_init(r10198082);
        mpfr_init(r10198083);
        mpfr_init_set_str(r10198084, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10198085);
        mpfr_init_set_str(r10198086, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10198087);
        mpfr_init(r10198088);
        mpfr_init(r10198089);
        mpfr_init_set_str(r10198090, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10198091);
        mpfr_init_set_str(r10198092, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10198093);
        mpfr_init(r10198094);
        mpfr_init(r10198095);
        mpfr_init_set_str(r10198096, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198097, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10198098);
        mpfr_init(r10198099);
        mpfr_init(r10198100);
        mpfr_init(r10198101);
        mpfr_init_set_str(r10198102, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10198103);
        mpfr_init_set_str(r10198104, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198105);
        mpfr_init(r10198106);
        mpfr_init(r10198107);
}

double f_fm(double x) {
        mpfr_set_d(r10198075, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198078, r10198076, r10198077, MPFR_RNDN);
        mpfr_pow(r10198079, r10198075, r10198078, MPFR_RNDN);
        ;
        mpfr_mul(r10198081, r10198075, r10198075, MPFR_RNDN);
        mpfr_mul(r10198082, r10198080, r10198081, MPFR_RNDN);
        mpfr_mul(r10198083, r10198079, r10198082, MPFR_RNDN);
        ;
        mpfr_mul(r10198085, r10198084, r10198075, MPFR_RNDN);
        ;
        mpfr_add(r10198087, r10198085, r10198086, MPFR_RNDN);
        mpfr_mul(r10198088, r10198079, r10198087, MPFR_RNDN);
        mpfr_add(r10198089, r10198083, r10198088, MPFR_RNDN);
        ;
        mpfr_mul(r10198091, r10198090, r10198075, MPFR_RNDN);
        ;
        mpfr_add(r10198093, r10198091, r10198092, MPFR_RNDN);
        mpfr_mul(r10198094, r10198081, r10198093, MPFR_RNDN);
        mpfr_mul(r10198095, r10198081, r10198081, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198098, r10198097, r10198075, MPFR_RNDN);
        mpfr_add(r10198099, r10198096, r10198098, MPFR_RNDN);
        mpfr_mul(r10198100, r10198095, r10198099, MPFR_RNDN);
        mpfr_add(r10198101, r10198094, r10198100, MPFR_RNDN);
        ;
        mpfr_mul(r10198103, r10198075, r10198102, MPFR_RNDN);
        ;
        mpfr_add(r10198105, r10198103, r10198104, MPFR_RNDN);
        mpfr_add(r10198106, r10198101, r10198105, MPFR_RNDN);
        mpfr_add(r10198107, r10198089, r10198106, MPFR_RNDN);
        return mpfr_get_d(r10198107, MPFR_RNDN);
}

static mpfr_t r10198108, r10198109, r10198110, r10198111, r10198112, r10198113, r10198114, r10198115, r10198116, r10198117, r10198118, r10198119, r10198120, r10198121, r10198122, r10198123, r10198124, r10198125, r10198126, r10198127, r10198128, r10198129, r10198130, r10198131, r10198132, r10198133, r10198134, r10198135, r10198136, r10198137, r10198138, r10198139, r10198140;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10198108);
        mpfr_init_set_str(r10198109, "2", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198110, "3", 10, MPFR_RNDN);
        mpfr_init(r10198111);
        mpfr_init(r10198112);
        mpfr_init_set_str(r10198113, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10198114);
        mpfr_init(r10198115);
        mpfr_init(r10198116);
        mpfr_init_set_str(r10198117, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10198118);
        mpfr_init_set_str(r10198119, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10198120);
        mpfr_init(r10198121);
        mpfr_init(r10198122);
        mpfr_init_set_str(r10198123, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10198124);
        mpfr_init_set_str(r10198125, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10198126);
        mpfr_init(r10198127);
        mpfr_init(r10198128);
        mpfr_init_set_str(r10198129, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198130, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10198131);
        mpfr_init(r10198132);
        mpfr_init(r10198133);
        mpfr_init(r10198134);
        mpfr_init_set_str(r10198135, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10198136);
        mpfr_init_set_str(r10198137, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198138);
        mpfr_init(r10198139);
        mpfr_init(r10198140);
}

double f_dm(double x) {
        mpfr_set_d(r10198108, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198111, r10198109, r10198110, MPFR_RNDN);
        mpfr_pow(r10198112, r10198108, r10198111, MPFR_RNDN);
        ;
        mpfr_mul(r10198114, r10198108, r10198108, MPFR_RNDN);
        mpfr_mul(r10198115, r10198113, r10198114, MPFR_RNDN);
        mpfr_mul(r10198116, r10198112, r10198115, MPFR_RNDN);
        ;
        mpfr_mul(r10198118, r10198117, r10198108, MPFR_RNDN);
        ;
        mpfr_add(r10198120, r10198118, r10198119, MPFR_RNDN);
        mpfr_mul(r10198121, r10198112, r10198120, MPFR_RNDN);
        mpfr_add(r10198122, r10198116, r10198121, MPFR_RNDN);
        ;
        mpfr_mul(r10198124, r10198123, r10198108, MPFR_RNDN);
        ;
        mpfr_add(r10198126, r10198124, r10198125, MPFR_RNDN);
        mpfr_mul(r10198127, r10198114, r10198126, MPFR_RNDN);
        mpfr_mul(r10198128, r10198114, r10198114, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198131, r10198130, r10198108, MPFR_RNDN);
        mpfr_add(r10198132, r10198129, r10198131, MPFR_RNDN);
        mpfr_mul(r10198133, r10198128, r10198132, MPFR_RNDN);
        mpfr_add(r10198134, r10198127, r10198133, MPFR_RNDN);
        ;
        mpfr_mul(r10198136, r10198108, r10198135, MPFR_RNDN);
        ;
        mpfr_add(r10198138, r10198136, r10198137, MPFR_RNDN);
        mpfr_add(r10198139, r10198134, r10198138, MPFR_RNDN);
        mpfr_add(r10198140, r10198122, r10198139, MPFR_RNDN);
        return mpfr_get_d(r10198140, MPFR_RNDN);
}

