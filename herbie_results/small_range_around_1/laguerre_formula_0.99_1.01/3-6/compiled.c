#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r83190911 = 1.0;
        float r83190912 = -6.0;
        float r83190913 = x;
        float r83190914 = r83190912 * r83190913;
        float r83190915 = r83190911 + r83190914;
        float r83190916 = 7.5;
        float r83190917 = r83190913 * r83190913;
        float r83190918 = r83190916 * r83190917;
        float r83190919 = r83190915 + r83190918;
        float r83190920 = -3.333333;
        float r83190921 = r83190917 * r83190913;
        float r83190922 = r83190920 * r83190921;
        float r83190923 = r83190919 + r83190922;
        float r83190924 = 0.625;
        float r83190925 = r83190921 * r83190913;
        float r83190926 = r83190924 * r83190925;
        float r83190927 = r83190923 + r83190926;
        float r83190928 = -0.05;
        float r83190929 = r83190925 * r83190913;
        float r83190930 = r83190928 * r83190929;
        float r83190931 = r83190927 + r83190930;
        float r83190932 = 0.001389;
        float r83190933 = r83190929 * r83190913;
        float r83190934 = r83190932 * r83190933;
        float r83190935 = r83190931 + r83190934;
        return r83190935;
}

double f_id(double x) {
        double r83190936 = 1.0;
        double r83190937 = -6.0;
        double r83190938 = x;
        double r83190939 = r83190937 * r83190938;
        double r83190940 = r83190936 + r83190939;
        double r83190941 = 7.5;
        double r83190942 = r83190938 * r83190938;
        double r83190943 = r83190941 * r83190942;
        double r83190944 = r83190940 + r83190943;
        double r83190945 = -3.333333;
        double r83190946 = r83190942 * r83190938;
        double r83190947 = r83190945 * r83190946;
        double r83190948 = r83190944 + r83190947;
        double r83190949 = 0.625;
        double r83190950 = r83190946 * r83190938;
        double r83190951 = r83190949 * r83190950;
        double r83190952 = r83190948 + r83190951;
        double r83190953 = -0.05;
        double r83190954 = r83190950 * r83190938;
        double r83190955 = r83190953 * r83190954;
        double r83190956 = r83190952 + r83190955;
        double r83190957 = 0.001389;
        double r83190958 = r83190954 * r83190938;
        double r83190959 = r83190957 * r83190958;
        double r83190960 = r83190956 + r83190959;
        return r83190960;
}


double f_of(float x) {
        float r83190961 = 7.5;
        float r83190962 = x;
        float r83190963 = r83190961 * r83190962;
        float r83190964 = 6.0;
        float r83190965 = r83190963 - r83190964;
        float r83190966 = 3.333333;
        float r83190967 = r83190962 * r83190966;
        float r83190968 = r83190967 * r83190962;
        float r83190969 = r83190965 - r83190968;
        float r83190970 = r83190969 * r83190962;
        float r83190971 = 3;
        float r83190972 = pow(r83190970, r83190971);
        float r83190973 = pow(r83190962, r83190971);
        float r83190974 = r83190962 * r83190962;
        float r83190975 = r83190973 * r83190974;
        float r83190976 = 0.001389;
        float r83190977 = r83190962 * r83190976;
        float r83190978 = -0.05;
        float r83190979 = r83190977 + r83190978;
        float r83190980 = r83190975 * r83190979;
        float r83190981 = 1.0;
        float r83190982 = 0.625;
        float r83190983 = r83190982 * r83190962;
        float r83190984 = r83190973 * r83190983;
        float r83190985 = r83190981 + r83190984;
        float r83190986 = r83190980 + r83190985;
        float r83190987 = pow(r83190986, r83190971);
        float r83190988 = r83190972 + r83190987;
        float r83190989 = r83190966 * r83190962;
        float r83190990 = r83190989 * r83190962;
        float r83190991 = r83190965 - r83190990;
        float r83190992 = r83190962 * r83190991;
        float r83190993 = r83190992 * r83190992;
        float r83190994 = r83190974 * r83190973;
        float r83190995 = r83190994 * r83190979;
        float r83190996 = r83190995 + r83190985;
        float r83190997 = r83190996 - r83190992;
        float r83190998 = r83190996 * r83190997;
        float r83190999 = r83190993 + r83190998;
        float r83191000 = r83190988 / r83190999;
        return r83191000;
}

double f_od(double x) {
        double r83191001 = 7.5;
        double r83191002 = x;
        double r83191003 = r83191001 * r83191002;
        double r83191004 = 6.0;
        double r83191005 = r83191003 - r83191004;
        double r83191006 = 3.333333;
        double r83191007 = r83191002 * r83191006;
        double r83191008 = r83191007 * r83191002;
        double r83191009 = r83191005 - r83191008;
        double r83191010 = r83191009 * r83191002;
        double r83191011 = 3;
        double r83191012 = pow(r83191010, r83191011);
        double r83191013 = pow(r83191002, r83191011);
        double r83191014 = r83191002 * r83191002;
        double r83191015 = r83191013 * r83191014;
        double r83191016 = 0.001389;
        double r83191017 = r83191002 * r83191016;
        double r83191018 = -0.05;
        double r83191019 = r83191017 + r83191018;
        double r83191020 = r83191015 * r83191019;
        double r83191021 = 1.0;
        double r83191022 = 0.625;
        double r83191023 = r83191022 * r83191002;
        double r83191024 = r83191013 * r83191023;
        double r83191025 = r83191021 + r83191024;
        double r83191026 = r83191020 + r83191025;
        double r83191027 = pow(r83191026, r83191011);
        double r83191028 = r83191012 + r83191027;
        double r83191029 = r83191006 * r83191002;
        double r83191030 = r83191029 * r83191002;
        double r83191031 = r83191005 - r83191030;
        double r83191032 = r83191002 * r83191031;
        double r83191033 = r83191032 * r83191032;
        double r83191034 = r83191014 * r83191013;
        double r83191035 = r83191034 * r83191019;
        double r83191036 = r83191035 + r83191025;
        double r83191037 = r83191036 - r83191032;
        double r83191038 = r83191036 * r83191037;
        double r83191039 = r83191033 + r83191038;
        double r83191040 = r83191028 / r83191039;
        return r83191040;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83191041, r83191042, r83191043, r83191044, r83191045, r83191046, r83191047, r83191048, r83191049, r83191050, r83191051, r83191052, r83191053, r83191054, r83191055, r83191056, r83191057, r83191058, r83191059, r83191060, r83191061, r83191062, r83191063, r83191064, r83191065;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191041, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191042, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r83191043);
        mpfr_init(r83191044);
        mpfr_init(r83191045);
        mpfr_init_set_str(r83191046, "7.5", 10, MPFR_RNDN);
        mpfr_init(r83191047);
        mpfr_init(r83191048);
        mpfr_init(r83191049);
        mpfr_init_set_str(r83191050, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r83191051);
        mpfr_init(r83191052);
        mpfr_init(r83191053);
        mpfr_init_set_str(r83191054, "0.625", 10, MPFR_RNDN);
        mpfr_init(r83191055);
        mpfr_init(r83191056);
        mpfr_init(r83191057);
        mpfr_init_set_str(r83191058, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r83191059);
        mpfr_init(r83191060);
        mpfr_init(r83191061);
        mpfr_init_set_str(r83191062, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r83191063);
        mpfr_init(r83191064);
        mpfr_init(r83191065);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83191043, x, MPFR_RNDN);
        mpfr_mul(r83191044, r83191042, r83191043, MPFR_RNDN);
        mpfr_add(r83191045, r83191041, r83191044, MPFR_RNDN);
        ;
        mpfr_mul(r83191047, r83191043, r83191043, MPFR_RNDN);
        mpfr_mul(r83191048, r83191046, r83191047, MPFR_RNDN);
        mpfr_add(r83191049, r83191045, r83191048, MPFR_RNDN);
        ;
        mpfr_mul(r83191051, r83191047, r83191043, MPFR_RNDN);
        mpfr_mul(r83191052, r83191050, r83191051, MPFR_RNDN);
        mpfr_add(r83191053, r83191049, r83191052, MPFR_RNDN);
        ;
        mpfr_mul(r83191055, r83191051, r83191043, MPFR_RNDN);
        mpfr_mul(r83191056, r83191054, r83191055, MPFR_RNDN);
        mpfr_add(r83191057, r83191053, r83191056, MPFR_RNDN);
        ;
        mpfr_mul(r83191059, r83191055, r83191043, MPFR_RNDN);
        mpfr_mul(r83191060, r83191058, r83191059, MPFR_RNDN);
        mpfr_add(r83191061, r83191057, r83191060, MPFR_RNDN);
        ;
        mpfr_mul(r83191063, r83191059, r83191043, MPFR_RNDN);
        mpfr_mul(r83191064, r83191062, r83191063, MPFR_RNDN);
        mpfr_add(r83191065, r83191061, r83191064, MPFR_RNDN);
        return mpfr_get_d(r83191065, MPFR_RNDN);
}

static mpfr_t r83191066, r83191067, r83191068, r83191069, r83191070, r83191071, r83191072, r83191073, r83191074, r83191075, r83191076, r83191077, r83191078, r83191079, r83191080, r83191081, r83191082, r83191083, r83191084, r83191085, r83191086, r83191087, r83191088, r83191089, r83191090, r83191091, r83191092, r83191093, r83191094, r83191095, r83191096, r83191097, r83191098, r83191099, r83191100, r83191101, r83191102, r83191103, r83191104, r83191105;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191066, "7.5", 10, MPFR_RNDN);
        mpfr_init(r83191067);
        mpfr_init(r83191068);
        mpfr_init_set_str(r83191069, "6.0", 10, MPFR_RNDN);
        mpfr_init(r83191070);
        mpfr_init_set_str(r83191071, "3.333333", 10, MPFR_RNDN);
        mpfr_init(r83191072);
        mpfr_init(r83191073);
        mpfr_init(r83191074);
        mpfr_init(r83191075);
        mpfr_init_set_str(r83191076, "3", 10, MPFR_RNDN);
        mpfr_init(r83191077);
        mpfr_init(r83191078);
        mpfr_init(r83191079);
        mpfr_init(r83191080);
        mpfr_init_set_str(r83191081, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r83191082);
        mpfr_init_set_str(r83191083, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r83191084);
        mpfr_init(r83191085);
        mpfr_init_set_str(r83191086, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191087, "0.625", 10, MPFR_RNDN);
        mpfr_init(r83191088);
        mpfr_init(r83191089);
        mpfr_init(r83191090);
        mpfr_init(r83191091);
        mpfr_init(r83191092);
        mpfr_init(r83191093);
        mpfr_init(r83191094);
        mpfr_init(r83191095);
        mpfr_init(r83191096);
        mpfr_init(r83191097);
        mpfr_init(r83191098);
        mpfr_init(r83191099);
        mpfr_init(r83191100);
        mpfr_init(r83191101);
        mpfr_init(r83191102);
        mpfr_init(r83191103);
        mpfr_init(r83191104);
        mpfr_init(r83191105);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r83191067, x, MPFR_RNDN);
        mpfr_mul(r83191068, r83191066, r83191067, MPFR_RNDN);
        ;
        mpfr_sub(r83191070, r83191068, r83191069, MPFR_RNDN);
        ;
        mpfr_mul(r83191072, r83191067, r83191071, MPFR_RNDN);
        mpfr_mul(r83191073, r83191072, r83191067, MPFR_RNDN);
        mpfr_sub(r83191074, r83191070, r83191073, MPFR_RNDN);
        mpfr_mul(r83191075, r83191074, r83191067, MPFR_RNDN);
        ;
        mpfr_pow(r83191077, r83191075, r83191076, MPFR_RNDN);
        mpfr_pow(r83191078, r83191067, r83191076, MPFR_RNDN);
        mpfr_mul(r83191079, r83191067, r83191067, MPFR_RNDN);
        mpfr_mul(r83191080, r83191078, r83191079, MPFR_RNDN);
        ;
        mpfr_mul(r83191082, r83191067, r83191081, MPFR_RNDN);
        ;
        mpfr_add(r83191084, r83191082, r83191083, MPFR_RNDN);
        mpfr_mul(r83191085, r83191080, r83191084, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83191088, r83191087, r83191067, MPFR_RNDN);
        mpfr_mul(r83191089, r83191078, r83191088, MPFR_RNDN);
        mpfr_add(r83191090, r83191086, r83191089, MPFR_RNDN);
        mpfr_add(r83191091, r83191085, r83191090, MPFR_RNDN);
        mpfr_pow(r83191092, r83191091, r83191076, MPFR_RNDN);
        mpfr_add(r83191093, r83191077, r83191092, MPFR_RNDN);
        mpfr_mul(r83191094, r83191071, r83191067, MPFR_RNDN);
        mpfr_mul(r83191095, r83191094, r83191067, MPFR_RNDN);
        mpfr_sub(r83191096, r83191070, r83191095, MPFR_RNDN);
        mpfr_mul(r83191097, r83191067, r83191096, MPFR_RNDN);
        mpfr_mul(r83191098, r83191097, r83191097, MPFR_RNDN);
        mpfr_mul(r83191099, r83191079, r83191078, MPFR_RNDN);
        mpfr_mul(r83191100, r83191099, r83191084, MPFR_RNDN);
        mpfr_add(r83191101, r83191100, r83191090, MPFR_RNDN);
        mpfr_sub(r83191102, r83191101, r83191097, MPFR_RNDN);
        mpfr_mul(r83191103, r83191101, r83191102, MPFR_RNDN);
        mpfr_add(r83191104, r83191098, r83191103, MPFR_RNDN);
        mpfr_div(r83191105, r83191093, r83191104, MPFR_RNDN);
        return mpfr_get_d(r83191105, MPFR_RNDN);
}

static mpfr_t r83191106, r83191107, r83191108, r83191109, r83191110, r83191111, r83191112, r83191113, r83191114, r83191115, r83191116, r83191117, r83191118, r83191119, r83191120, r83191121, r83191122, r83191123, r83191124, r83191125, r83191126, r83191127, r83191128, r83191129, r83191130, r83191131, r83191132, r83191133, r83191134, r83191135, r83191136, r83191137, r83191138, r83191139, r83191140, r83191141, r83191142, r83191143, r83191144, r83191145;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191106, "7.5", 10, MPFR_RNDN);
        mpfr_init(r83191107);
        mpfr_init(r83191108);
        mpfr_init_set_str(r83191109, "6.0", 10, MPFR_RNDN);
        mpfr_init(r83191110);
        mpfr_init_set_str(r83191111, "3.333333", 10, MPFR_RNDN);
        mpfr_init(r83191112);
        mpfr_init(r83191113);
        mpfr_init(r83191114);
        mpfr_init(r83191115);
        mpfr_init_set_str(r83191116, "3", 10, MPFR_RNDN);
        mpfr_init(r83191117);
        mpfr_init(r83191118);
        mpfr_init(r83191119);
        mpfr_init(r83191120);
        mpfr_init_set_str(r83191121, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r83191122);
        mpfr_init_set_str(r83191123, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r83191124);
        mpfr_init(r83191125);
        mpfr_init_set_str(r83191126, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191127, "0.625", 10, MPFR_RNDN);
        mpfr_init(r83191128);
        mpfr_init(r83191129);
        mpfr_init(r83191130);
        mpfr_init(r83191131);
        mpfr_init(r83191132);
        mpfr_init(r83191133);
        mpfr_init(r83191134);
        mpfr_init(r83191135);
        mpfr_init(r83191136);
        mpfr_init(r83191137);
        mpfr_init(r83191138);
        mpfr_init(r83191139);
        mpfr_init(r83191140);
        mpfr_init(r83191141);
        mpfr_init(r83191142);
        mpfr_init(r83191143);
        mpfr_init(r83191144);
        mpfr_init(r83191145);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r83191107, x, MPFR_RNDN);
        mpfr_mul(r83191108, r83191106, r83191107, MPFR_RNDN);
        ;
        mpfr_sub(r83191110, r83191108, r83191109, MPFR_RNDN);
        ;
        mpfr_mul(r83191112, r83191107, r83191111, MPFR_RNDN);
        mpfr_mul(r83191113, r83191112, r83191107, MPFR_RNDN);
        mpfr_sub(r83191114, r83191110, r83191113, MPFR_RNDN);
        mpfr_mul(r83191115, r83191114, r83191107, MPFR_RNDN);
        ;
        mpfr_pow(r83191117, r83191115, r83191116, MPFR_RNDN);
        mpfr_pow(r83191118, r83191107, r83191116, MPFR_RNDN);
        mpfr_mul(r83191119, r83191107, r83191107, MPFR_RNDN);
        mpfr_mul(r83191120, r83191118, r83191119, MPFR_RNDN);
        ;
        mpfr_mul(r83191122, r83191107, r83191121, MPFR_RNDN);
        ;
        mpfr_add(r83191124, r83191122, r83191123, MPFR_RNDN);
        mpfr_mul(r83191125, r83191120, r83191124, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83191128, r83191127, r83191107, MPFR_RNDN);
        mpfr_mul(r83191129, r83191118, r83191128, MPFR_RNDN);
        mpfr_add(r83191130, r83191126, r83191129, MPFR_RNDN);
        mpfr_add(r83191131, r83191125, r83191130, MPFR_RNDN);
        mpfr_pow(r83191132, r83191131, r83191116, MPFR_RNDN);
        mpfr_add(r83191133, r83191117, r83191132, MPFR_RNDN);
        mpfr_mul(r83191134, r83191111, r83191107, MPFR_RNDN);
        mpfr_mul(r83191135, r83191134, r83191107, MPFR_RNDN);
        mpfr_sub(r83191136, r83191110, r83191135, MPFR_RNDN);
        mpfr_mul(r83191137, r83191107, r83191136, MPFR_RNDN);
        mpfr_mul(r83191138, r83191137, r83191137, MPFR_RNDN);
        mpfr_mul(r83191139, r83191119, r83191118, MPFR_RNDN);
        mpfr_mul(r83191140, r83191139, r83191124, MPFR_RNDN);
        mpfr_add(r83191141, r83191140, r83191130, MPFR_RNDN);
        mpfr_sub(r83191142, r83191141, r83191137, MPFR_RNDN);
        mpfr_mul(r83191143, r83191141, r83191142, MPFR_RNDN);
        mpfr_add(r83191144, r83191138, r83191143, MPFR_RNDN);
        mpfr_div(r83191145, r83191133, r83191144, MPFR_RNDN);
        return mpfr_get_d(r83191145, MPFR_RNDN);
}

