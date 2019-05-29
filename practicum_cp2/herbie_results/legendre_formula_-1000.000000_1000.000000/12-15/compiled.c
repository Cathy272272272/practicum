#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r7056906 = -3.14209;
        float r7056907 = x;
        float r7056908 = r7056906 * r7056907;
        float r7056909 = 124.63623;
        float r7056910 = r7056907 * r7056907;
        float r7056911 = r7056910 * r7056907;
        float r7056912 = r7056909 * r7056911;
        float r7056913 = r7056908 + r7056912;
        float r7056914 = -1420.853027;
        float r7056915 = r7056911 * r7056907;
        float r7056916 = r7056915 * r7056907;
        float r7056917 = r7056914 * r7056916;
        float r7056918 = r7056913 + r7056917;
        float r7056919 = 7104.265137;
        float r7056920 = r7056916 * r7056907;
        float r7056921 = r7056920 * r7056907;
        float r7056922 = r7056919 * r7056921;
        float r7056923 = r7056918 + r7056922;
        float r7056924 = -18155.344238;
        float r7056925 = r7056921 * r7056907;
        float r7056926 = r7056925 * r7056907;
        float r7056927 = r7056924 * r7056926;
        float r7056928 = r7056923 + r7056927;
        float r7056929 = 24757.287598;
        float r7056930 = r7056926 * r7056907;
        float r7056931 = r7056930 * r7056907;
        float r7056932 = r7056929 * r7056931;
        float r7056933 = r7056928 + r7056932;
        float r7056934 = -17139.660645;
        float r7056935 = r7056931 * r7056907;
        float r7056936 = r7056935 * r7056907;
        float r7056937 = r7056934 * r7056936;
        float r7056938 = r7056933 + r7056937;
        float r7056939 = 4733.811035;
        float r7056940 = r7056936 * r7056907;
        float r7056941 = r7056940 * r7056907;
        float r7056942 = r7056939 * r7056941;
        float r7056943 = r7056938 + r7056942;
        return r7056943;
}

double f_id(double x) {
        double r7056944 = -3.14209;
        double r7056945 = x;
        double r7056946 = r7056944 * r7056945;
        double r7056947 = 124.63623;
        double r7056948 = r7056945 * r7056945;
        double r7056949 = r7056948 * r7056945;
        double r7056950 = r7056947 * r7056949;
        double r7056951 = r7056946 + r7056950;
        double r7056952 = -1420.853027;
        double r7056953 = r7056949 * r7056945;
        double r7056954 = r7056953 * r7056945;
        double r7056955 = r7056952 * r7056954;
        double r7056956 = r7056951 + r7056955;
        double r7056957 = 7104.265137;
        double r7056958 = r7056954 * r7056945;
        double r7056959 = r7056958 * r7056945;
        double r7056960 = r7056957 * r7056959;
        double r7056961 = r7056956 + r7056960;
        double r7056962 = -18155.344238;
        double r7056963 = r7056959 * r7056945;
        double r7056964 = r7056963 * r7056945;
        double r7056965 = r7056962 * r7056964;
        double r7056966 = r7056961 + r7056965;
        double r7056967 = 24757.287598;
        double r7056968 = r7056964 * r7056945;
        double r7056969 = r7056968 * r7056945;
        double r7056970 = r7056967 * r7056969;
        double r7056971 = r7056966 + r7056970;
        double r7056972 = -17139.660645;
        double r7056973 = r7056969 * r7056945;
        double r7056974 = r7056973 * r7056945;
        double r7056975 = r7056972 * r7056974;
        double r7056976 = r7056971 + r7056975;
        double r7056977 = 4733.811035;
        double r7056978 = r7056974 * r7056945;
        double r7056979 = r7056978 * r7056945;
        double r7056980 = r7056977 * r7056979;
        double r7056981 = r7056976 + r7056980;
        return r7056981;
}


double f_of(float x) {
        float r7056982 = x;
        float r7056983 = r7056982 * r7056982;
        float r7056984 = r7056983 * r7056983;
        float r7056985 = 3;
        float r7056986 = pow(r7056982, r7056985);
        float r7056987 = r7056986 * r7056986;
        float r7056988 = r7056986 * r7056987;
        float r7056989 = r7056984 * r7056988;
        float r7056990 = 4733.811035;
        float r7056991 = r7056990 * r7056982;
        float r7056992 = r7056982 * r7056991;
        float r7056993 = -17139.660645;
        float r7056994 = r7056992 + r7056993;
        float r7056995 = r7056989 * r7056994;
        float r7056996 = 7104.265137;
        float r7056997 = r7056996 * r7056982;
        float r7056998 = r7056997 * r7056983;
        float r7056999 = r7056998 * r7056984;
        float r7057000 = -3.14209;
        float r7057001 = r7057000 * r7056982;
        float r7057002 = r7056999 + r7057001;
        float r7057003 = -1420.853027;
        float r7057004 = r7056982 * r7057003;
        float r7057005 = r7057004 * r7056983;
        float r7057006 = 124.63623;
        float r7057007 = r7057006 * r7056982;
        float r7057008 = r7057005 + r7057007;
        float r7057009 = r7056983 * r7057008;
        float r7057010 = r7057002 + r7057009;
        float r7057011 = r7056995 + r7057010;
        float r7057012 = -18155.344238;
        float r7057013 = 24757.287598;
        float r7057014 = r7056982 * r7057013;
        float r7057015 = r7056982 * r7057014;
        float r7057016 = r7057012 + r7057015;
        float r7057017 = r7056988 * r7057016;
        float r7057018 = r7057011 + r7057017;
        return r7057018;
}

double f_od(double x) {
        double r7057019 = x;
        double r7057020 = r7057019 * r7057019;
        double r7057021 = r7057020 * r7057020;
        double r7057022 = 3;
        double r7057023 = pow(r7057019, r7057022);
        double r7057024 = r7057023 * r7057023;
        double r7057025 = r7057023 * r7057024;
        double r7057026 = r7057021 * r7057025;
        double r7057027 = 4733.811035;
        double r7057028 = r7057027 * r7057019;
        double r7057029 = r7057019 * r7057028;
        double r7057030 = -17139.660645;
        double r7057031 = r7057029 + r7057030;
        double r7057032 = r7057026 * r7057031;
        double r7057033 = 7104.265137;
        double r7057034 = r7057033 * r7057019;
        double r7057035 = r7057034 * r7057020;
        double r7057036 = r7057035 * r7057021;
        double r7057037 = -3.14209;
        double r7057038 = r7057037 * r7057019;
        double r7057039 = r7057036 + r7057038;
        double r7057040 = -1420.853027;
        double r7057041 = r7057019 * r7057040;
        double r7057042 = r7057041 * r7057020;
        double r7057043 = 124.63623;
        double r7057044 = r7057043 * r7057019;
        double r7057045 = r7057042 + r7057044;
        double r7057046 = r7057020 * r7057045;
        double r7057047 = r7057039 + r7057046;
        double r7057048 = r7057032 + r7057047;
        double r7057049 = -18155.344238;
        double r7057050 = 24757.287598;
        double r7057051 = r7057019 * r7057050;
        double r7057052 = r7057019 * r7057051;
        double r7057053 = r7057049 + r7057052;
        double r7057054 = r7057025 * r7057053;
        double r7057055 = r7057048 + r7057054;
        return r7057055;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7057056, r7057057, r7057058, r7057059, r7057060, r7057061, r7057062, r7057063, r7057064, r7057065, r7057066, r7057067, r7057068, r7057069, r7057070, r7057071, r7057072, r7057073, r7057074, r7057075, r7057076, r7057077, r7057078, r7057079, r7057080, r7057081, r7057082, r7057083, r7057084, r7057085, r7057086, r7057087, r7057088, r7057089, r7057090, r7057091, r7057092, r7057093;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7057056, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r7057057);
        mpfr_init(r7057058);
        mpfr_init_set_str(r7057059, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r7057060);
        mpfr_init(r7057061);
        mpfr_init(r7057062);
        mpfr_init(r7057063);
        mpfr_init_set_str(r7057064, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r7057065);
        mpfr_init(r7057066);
        mpfr_init(r7057067);
        mpfr_init(r7057068);
        mpfr_init_set_str(r7057069, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7057070);
        mpfr_init(r7057071);
        mpfr_init(r7057072);
        mpfr_init(r7057073);
        mpfr_init_set_str(r7057074, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r7057075);
        mpfr_init(r7057076);
        mpfr_init(r7057077);
        mpfr_init(r7057078);
        mpfr_init_set_str(r7057079, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r7057080);
        mpfr_init(r7057081);
        mpfr_init(r7057082);
        mpfr_init(r7057083);
        mpfr_init_set_str(r7057084, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r7057085);
        mpfr_init(r7057086);
        mpfr_init(r7057087);
        mpfr_init(r7057088);
        mpfr_init_set_str(r7057089, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r7057090);
        mpfr_init(r7057091);
        mpfr_init(r7057092);
        mpfr_init(r7057093);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7057057, x, MPFR_RNDN);
        mpfr_mul(r7057058, r7057056, r7057057, MPFR_RNDN);
        ;
        mpfr_mul(r7057060, r7057057, r7057057, MPFR_RNDN);
        mpfr_mul(r7057061, r7057060, r7057057, MPFR_RNDN);
        mpfr_mul(r7057062, r7057059, r7057061, MPFR_RNDN);
        mpfr_add(r7057063, r7057058, r7057062, MPFR_RNDN);
        ;
        mpfr_mul(r7057065, r7057061, r7057057, MPFR_RNDN);
        mpfr_mul(r7057066, r7057065, r7057057, MPFR_RNDN);
        mpfr_mul(r7057067, r7057064, r7057066, MPFR_RNDN);
        mpfr_add(r7057068, r7057063, r7057067, MPFR_RNDN);
        ;
        mpfr_mul(r7057070, r7057066, r7057057, MPFR_RNDN);
        mpfr_mul(r7057071, r7057070, r7057057, MPFR_RNDN);
        mpfr_mul(r7057072, r7057069, r7057071, MPFR_RNDN);
        mpfr_add(r7057073, r7057068, r7057072, MPFR_RNDN);
        ;
        mpfr_mul(r7057075, r7057071, r7057057, MPFR_RNDN);
        mpfr_mul(r7057076, r7057075, r7057057, MPFR_RNDN);
        mpfr_mul(r7057077, r7057074, r7057076, MPFR_RNDN);
        mpfr_add(r7057078, r7057073, r7057077, MPFR_RNDN);
        ;
        mpfr_mul(r7057080, r7057076, r7057057, MPFR_RNDN);
        mpfr_mul(r7057081, r7057080, r7057057, MPFR_RNDN);
        mpfr_mul(r7057082, r7057079, r7057081, MPFR_RNDN);
        mpfr_add(r7057083, r7057078, r7057082, MPFR_RNDN);
        ;
        mpfr_mul(r7057085, r7057081, r7057057, MPFR_RNDN);
        mpfr_mul(r7057086, r7057085, r7057057, MPFR_RNDN);
        mpfr_mul(r7057087, r7057084, r7057086, MPFR_RNDN);
        mpfr_add(r7057088, r7057083, r7057087, MPFR_RNDN);
        ;
        mpfr_mul(r7057090, r7057086, r7057057, MPFR_RNDN);
        mpfr_mul(r7057091, r7057090, r7057057, MPFR_RNDN);
        mpfr_mul(r7057092, r7057089, r7057091, MPFR_RNDN);
        mpfr_add(r7057093, r7057088, r7057092, MPFR_RNDN);
        return mpfr_get_d(r7057093, MPFR_RNDN);
}

static mpfr_t r7057094, r7057095, r7057096, r7057097, r7057098, r7057099, r7057100, r7057101, r7057102, r7057103, r7057104, r7057105, r7057106, r7057107, r7057108, r7057109, r7057110, r7057111, r7057112, r7057113, r7057114, r7057115, r7057116, r7057117, r7057118, r7057119, r7057120, r7057121, r7057122, r7057123, r7057124, r7057125, r7057126, r7057127, r7057128, r7057129, r7057130;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7057094);
        mpfr_init(r7057095);
        mpfr_init(r7057096);
        mpfr_init_set_str(r7057097, "3", 10, MPFR_RNDN);
        mpfr_init(r7057098);
        mpfr_init(r7057099);
        mpfr_init(r7057100);
        mpfr_init(r7057101);
        mpfr_init_set_str(r7057102, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r7057103);
        mpfr_init(r7057104);
        mpfr_init_set_str(r7057105, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r7057106);
        mpfr_init(r7057107);
        mpfr_init_set_str(r7057108, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7057109);
        mpfr_init(r7057110);
        mpfr_init(r7057111);
        mpfr_init_set_str(r7057112, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r7057113);
        mpfr_init(r7057114);
        mpfr_init_set_str(r7057115, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r7057116);
        mpfr_init(r7057117);
        mpfr_init_set_str(r7057118, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r7057119);
        mpfr_init(r7057120);
        mpfr_init(r7057121);
        mpfr_init(r7057122);
        mpfr_init(r7057123);
        mpfr_init_set_str(r7057124, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init_set_str(r7057125, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r7057126);
        mpfr_init(r7057127);
        mpfr_init(r7057128);
        mpfr_init(r7057129);
        mpfr_init(r7057130);
}

double f_fm(double x) {
        mpfr_set_d(r7057094, x, MPFR_RNDN);
        mpfr_mul(r7057095, r7057094, r7057094, MPFR_RNDN);
        mpfr_mul(r7057096, r7057095, r7057095, MPFR_RNDN);
        ;
        mpfr_pow(r7057098, r7057094, r7057097, MPFR_RNDN);
        mpfr_mul(r7057099, r7057098, r7057098, MPFR_RNDN);
        mpfr_mul(r7057100, r7057098, r7057099, MPFR_RNDN);
        mpfr_mul(r7057101, r7057096, r7057100, MPFR_RNDN);
        ;
        mpfr_mul(r7057103, r7057102, r7057094, MPFR_RNDN);
        mpfr_mul(r7057104, r7057094, r7057103, MPFR_RNDN);
        ;
        mpfr_add(r7057106, r7057104, r7057105, MPFR_RNDN);
        mpfr_mul(r7057107, r7057101, r7057106, MPFR_RNDN);
        ;
        mpfr_mul(r7057109, r7057108, r7057094, MPFR_RNDN);
        mpfr_mul(r7057110, r7057109, r7057095, MPFR_RNDN);
        mpfr_mul(r7057111, r7057110, r7057096, MPFR_RNDN);
        ;
        mpfr_mul(r7057113, r7057112, r7057094, MPFR_RNDN);
        mpfr_add(r7057114, r7057111, r7057113, MPFR_RNDN);
        ;
        mpfr_mul(r7057116, r7057094, r7057115, MPFR_RNDN);
        mpfr_mul(r7057117, r7057116, r7057095, MPFR_RNDN);
        ;
        mpfr_mul(r7057119, r7057118, r7057094, MPFR_RNDN);
        mpfr_add(r7057120, r7057117, r7057119, MPFR_RNDN);
        mpfr_mul(r7057121, r7057095, r7057120, MPFR_RNDN);
        mpfr_add(r7057122, r7057114, r7057121, MPFR_RNDN);
        mpfr_add(r7057123, r7057107, r7057122, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7057126, r7057094, r7057125, MPFR_RNDN);
        mpfr_mul(r7057127, r7057094, r7057126, MPFR_RNDN);
        mpfr_add(r7057128, r7057124, r7057127, MPFR_RNDN);
        mpfr_mul(r7057129, r7057100, r7057128, MPFR_RNDN);
        mpfr_add(r7057130, r7057123, r7057129, MPFR_RNDN);
        return mpfr_get_d(r7057130, MPFR_RNDN);
}

static mpfr_t r7057131, r7057132, r7057133, r7057134, r7057135, r7057136, r7057137, r7057138, r7057139, r7057140, r7057141, r7057142, r7057143, r7057144, r7057145, r7057146, r7057147, r7057148, r7057149, r7057150, r7057151, r7057152, r7057153, r7057154, r7057155, r7057156, r7057157, r7057158, r7057159, r7057160, r7057161, r7057162, r7057163, r7057164, r7057165, r7057166, r7057167;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7057131);
        mpfr_init(r7057132);
        mpfr_init(r7057133);
        mpfr_init_set_str(r7057134, "3", 10, MPFR_RNDN);
        mpfr_init(r7057135);
        mpfr_init(r7057136);
        mpfr_init(r7057137);
        mpfr_init(r7057138);
        mpfr_init_set_str(r7057139, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r7057140);
        mpfr_init(r7057141);
        mpfr_init_set_str(r7057142, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r7057143);
        mpfr_init(r7057144);
        mpfr_init_set_str(r7057145, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7057146);
        mpfr_init(r7057147);
        mpfr_init(r7057148);
        mpfr_init_set_str(r7057149, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r7057150);
        mpfr_init(r7057151);
        mpfr_init_set_str(r7057152, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r7057153);
        mpfr_init(r7057154);
        mpfr_init_set_str(r7057155, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r7057156);
        mpfr_init(r7057157);
        mpfr_init(r7057158);
        mpfr_init(r7057159);
        mpfr_init(r7057160);
        mpfr_init_set_str(r7057161, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init_set_str(r7057162, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r7057163);
        mpfr_init(r7057164);
        mpfr_init(r7057165);
        mpfr_init(r7057166);
        mpfr_init(r7057167);
}

double f_dm(double x) {
        mpfr_set_d(r7057131, x, MPFR_RNDN);
        mpfr_mul(r7057132, r7057131, r7057131, MPFR_RNDN);
        mpfr_mul(r7057133, r7057132, r7057132, MPFR_RNDN);
        ;
        mpfr_pow(r7057135, r7057131, r7057134, MPFR_RNDN);
        mpfr_mul(r7057136, r7057135, r7057135, MPFR_RNDN);
        mpfr_mul(r7057137, r7057135, r7057136, MPFR_RNDN);
        mpfr_mul(r7057138, r7057133, r7057137, MPFR_RNDN);
        ;
        mpfr_mul(r7057140, r7057139, r7057131, MPFR_RNDN);
        mpfr_mul(r7057141, r7057131, r7057140, MPFR_RNDN);
        ;
        mpfr_add(r7057143, r7057141, r7057142, MPFR_RNDN);
        mpfr_mul(r7057144, r7057138, r7057143, MPFR_RNDN);
        ;
        mpfr_mul(r7057146, r7057145, r7057131, MPFR_RNDN);
        mpfr_mul(r7057147, r7057146, r7057132, MPFR_RNDN);
        mpfr_mul(r7057148, r7057147, r7057133, MPFR_RNDN);
        ;
        mpfr_mul(r7057150, r7057149, r7057131, MPFR_RNDN);
        mpfr_add(r7057151, r7057148, r7057150, MPFR_RNDN);
        ;
        mpfr_mul(r7057153, r7057131, r7057152, MPFR_RNDN);
        mpfr_mul(r7057154, r7057153, r7057132, MPFR_RNDN);
        ;
        mpfr_mul(r7057156, r7057155, r7057131, MPFR_RNDN);
        mpfr_add(r7057157, r7057154, r7057156, MPFR_RNDN);
        mpfr_mul(r7057158, r7057132, r7057157, MPFR_RNDN);
        mpfr_add(r7057159, r7057151, r7057158, MPFR_RNDN);
        mpfr_add(r7057160, r7057144, r7057159, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7057163, r7057131, r7057162, MPFR_RNDN);
        mpfr_mul(r7057164, r7057131, r7057163, MPFR_RNDN);
        mpfr_add(r7057165, r7057161, r7057164, MPFR_RNDN);
        mpfr_mul(r7057166, r7057137, r7057165, MPFR_RNDN);
        mpfr_add(r7057167, r7057160, r7057166, MPFR_RNDN);
        return mpfr_get_d(r7057167, MPFR_RNDN);
}

