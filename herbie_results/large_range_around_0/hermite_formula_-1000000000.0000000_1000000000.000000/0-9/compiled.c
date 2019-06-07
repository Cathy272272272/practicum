#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r7029938 = 30240.0;
        float r7029939 = x;
        float r7029940 = r7029938 * r7029939;
        float r7029941 = -80640.0;
        float r7029942 = r7029939 * r7029939;
        float r7029943 = r7029942 * r7029939;
        float r7029944 = r7029941 * r7029943;
        float r7029945 = r7029940 + r7029944;
        float r7029946 = 48384.0;
        float r7029947 = r7029943 * r7029939;
        float r7029948 = r7029947 * r7029939;
        float r7029949 = r7029946 * r7029948;
        float r7029950 = r7029945 + r7029949;
        float r7029951 = -9216.0;
        float r7029952 = r7029948 * r7029939;
        float r7029953 = r7029952 * r7029939;
        float r7029954 = r7029951 * r7029953;
        float r7029955 = r7029950 + r7029954;
        float r7029956 = 512.0;
        float r7029957 = r7029953 * r7029939;
        float r7029958 = r7029957 * r7029939;
        float r7029959 = r7029956 * r7029958;
        float r7029960 = r7029955 + r7029959;
        return r7029960;
}

double f_id(double x) {
        double r7029961 = 30240.0;
        double r7029962 = x;
        double r7029963 = r7029961 * r7029962;
        double r7029964 = -80640.0;
        double r7029965 = r7029962 * r7029962;
        double r7029966 = r7029965 * r7029962;
        double r7029967 = r7029964 * r7029966;
        double r7029968 = r7029963 + r7029967;
        double r7029969 = 48384.0;
        double r7029970 = r7029966 * r7029962;
        double r7029971 = r7029970 * r7029962;
        double r7029972 = r7029969 * r7029971;
        double r7029973 = r7029968 + r7029972;
        double r7029974 = -9216.0;
        double r7029975 = r7029971 * r7029962;
        double r7029976 = r7029975 * r7029962;
        double r7029977 = r7029974 * r7029976;
        double r7029978 = r7029973 + r7029977;
        double r7029979 = 512.0;
        double r7029980 = r7029976 * r7029962;
        double r7029981 = r7029980 * r7029962;
        double r7029982 = r7029979 * r7029981;
        double r7029983 = r7029978 + r7029982;
        return r7029983;
}


double f_of(float x) {
        float r7029984 = x;
        float r7029985 = r7029984 * r7029984;
        float r7029986 = 48384.0;
        float r7029987 = r7029984 * r7029986;
        float r7029988 = r7029985 * r7029987;
        float r7029989 = r7029985 * r7029988;
        float r7029990 = 30240.0;
        float r7029991 = r7029990 * r7029984;
        float r7029992 = -80640.0;
        float r7029993 = r7029992 * r7029984;
        float r7029994 = r7029993 * r7029985;
        float r7029995 = r7029991 + r7029994;
        float r7029996 = r7029989 + r7029995;
        float r7029997 = 3;
        float r7029998 = pow(r7029984, r7029997);
        float r7029999 = r7029998 * r7029998;
        float r7030000 = r7029999 * r7029984;
        float r7030001 = -9216.0;
        float r7030002 = 512.0;
        float r7030003 = r7030002 * r7029984;
        float r7030004 = r7029984 * r7030003;
        float r7030005 = r7030001 + r7030004;
        float r7030006 = r7030000 * r7030005;
        float r7030007 = r7029996 + r7030006;
        return r7030007;
}

double f_od(double x) {
        double r7030008 = x;
        double r7030009 = r7030008 * r7030008;
        double r7030010 = 48384.0;
        double r7030011 = r7030008 * r7030010;
        double r7030012 = r7030009 * r7030011;
        double r7030013 = r7030009 * r7030012;
        double r7030014 = 30240.0;
        double r7030015 = r7030014 * r7030008;
        double r7030016 = -80640.0;
        double r7030017 = r7030016 * r7030008;
        double r7030018 = r7030017 * r7030009;
        double r7030019 = r7030015 + r7030018;
        double r7030020 = r7030013 + r7030019;
        double r7030021 = 3;
        double r7030022 = pow(r7030008, r7030021);
        double r7030023 = r7030022 * r7030022;
        double r7030024 = r7030023 * r7030008;
        double r7030025 = -9216.0;
        double r7030026 = 512.0;
        double r7030027 = r7030026 * r7030008;
        double r7030028 = r7030008 * r7030027;
        double r7030029 = r7030025 + r7030028;
        double r7030030 = r7030024 * r7030029;
        double r7030031 = r7030020 + r7030030;
        return r7030031;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7030032, r7030033, r7030034, r7030035, r7030036, r7030037, r7030038, r7030039, r7030040, r7030041, r7030042, r7030043, r7030044, r7030045, r7030046, r7030047, r7030048, r7030049, r7030050, r7030051, r7030052, r7030053, r7030054;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7030032, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7030033);
        mpfr_init(r7030034);
        mpfr_init_set_str(r7030035, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7030036);
        mpfr_init(r7030037);
        mpfr_init(r7030038);
        mpfr_init(r7030039);
        mpfr_init_set_str(r7030040, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7030041);
        mpfr_init(r7030042);
        mpfr_init(r7030043);
        mpfr_init(r7030044);
        mpfr_init_set_str(r7030045, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7030046);
        mpfr_init(r7030047);
        mpfr_init(r7030048);
        mpfr_init(r7030049);
        mpfr_init_set_str(r7030050, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7030051);
        mpfr_init(r7030052);
        mpfr_init(r7030053);
        mpfr_init(r7030054);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7030033, x, MPFR_RNDN);
        mpfr_mul(r7030034, r7030032, r7030033, MPFR_RNDN);
        ;
        mpfr_mul(r7030036, r7030033, r7030033, MPFR_RNDN);
        mpfr_mul(r7030037, r7030036, r7030033, MPFR_RNDN);
        mpfr_mul(r7030038, r7030035, r7030037, MPFR_RNDN);
        mpfr_add(r7030039, r7030034, r7030038, MPFR_RNDN);
        ;
        mpfr_mul(r7030041, r7030037, r7030033, MPFR_RNDN);
        mpfr_mul(r7030042, r7030041, r7030033, MPFR_RNDN);
        mpfr_mul(r7030043, r7030040, r7030042, MPFR_RNDN);
        mpfr_add(r7030044, r7030039, r7030043, MPFR_RNDN);
        ;
        mpfr_mul(r7030046, r7030042, r7030033, MPFR_RNDN);
        mpfr_mul(r7030047, r7030046, r7030033, MPFR_RNDN);
        mpfr_mul(r7030048, r7030045, r7030047, MPFR_RNDN);
        mpfr_add(r7030049, r7030044, r7030048, MPFR_RNDN);
        ;
        mpfr_mul(r7030051, r7030047, r7030033, MPFR_RNDN);
        mpfr_mul(r7030052, r7030051, r7030033, MPFR_RNDN);
        mpfr_mul(r7030053, r7030050, r7030052, MPFR_RNDN);
        mpfr_add(r7030054, r7030049, r7030053, MPFR_RNDN);
        return mpfr_get_d(r7030054, MPFR_RNDN);
}

static mpfr_t r7030055, r7030056, r7030057, r7030058, r7030059, r7030060, r7030061, r7030062, r7030063, r7030064, r7030065, r7030066, r7030067, r7030068, r7030069, r7030070, r7030071, r7030072, r7030073, r7030074, r7030075, r7030076, r7030077, r7030078;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7030055);
        mpfr_init(r7030056);
        mpfr_init_set_str(r7030057, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7030058);
        mpfr_init(r7030059);
        mpfr_init(r7030060);
        mpfr_init_set_str(r7030061, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7030062);
        mpfr_init_set_str(r7030063, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7030064);
        mpfr_init(r7030065);
        mpfr_init(r7030066);
        mpfr_init(r7030067);
        mpfr_init_set_str(r7030068, "3", 10, MPFR_RNDN);
        mpfr_init(r7030069);
        mpfr_init(r7030070);
        mpfr_init(r7030071);
        mpfr_init_set_str(r7030072, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030073, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7030074);
        mpfr_init(r7030075);
        mpfr_init(r7030076);
        mpfr_init(r7030077);
        mpfr_init(r7030078);
}

double f_fm(double x) {
        mpfr_set_d(r7030055, x, MPFR_RNDN);
        mpfr_mul(r7030056, r7030055, r7030055, MPFR_RNDN);
        ;
        mpfr_mul(r7030058, r7030055, r7030057, MPFR_RNDN);
        mpfr_mul(r7030059, r7030056, r7030058, MPFR_RNDN);
        mpfr_mul(r7030060, r7030056, r7030059, MPFR_RNDN);
        ;
        mpfr_mul(r7030062, r7030061, r7030055, MPFR_RNDN);
        ;
        mpfr_mul(r7030064, r7030063, r7030055, MPFR_RNDN);
        mpfr_mul(r7030065, r7030064, r7030056, MPFR_RNDN);
        mpfr_add(r7030066, r7030062, r7030065, MPFR_RNDN);
        mpfr_add(r7030067, r7030060, r7030066, MPFR_RNDN);
        ;
        mpfr_pow(r7030069, r7030055, r7030068, MPFR_RNDN);
        mpfr_mul(r7030070, r7030069, r7030069, MPFR_RNDN);
        mpfr_mul(r7030071, r7030070, r7030055, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7030074, r7030073, r7030055, MPFR_RNDN);
        mpfr_mul(r7030075, r7030055, r7030074, MPFR_RNDN);
        mpfr_add(r7030076, r7030072, r7030075, MPFR_RNDN);
        mpfr_mul(r7030077, r7030071, r7030076, MPFR_RNDN);
        mpfr_add(r7030078, r7030067, r7030077, MPFR_RNDN);
        return mpfr_get_d(r7030078, MPFR_RNDN);
}

static mpfr_t r7030079, r7030080, r7030081, r7030082, r7030083, r7030084, r7030085, r7030086, r7030087, r7030088, r7030089, r7030090, r7030091, r7030092, r7030093, r7030094, r7030095, r7030096, r7030097, r7030098, r7030099, r7030100, r7030101, r7030102;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7030079);
        mpfr_init(r7030080);
        mpfr_init_set_str(r7030081, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7030082);
        mpfr_init(r7030083);
        mpfr_init(r7030084);
        mpfr_init_set_str(r7030085, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7030086);
        mpfr_init_set_str(r7030087, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7030088);
        mpfr_init(r7030089);
        mpfr_init(r7030090);
        mpfr_init(r7030091);
        mpfr_init_set_str(r7030092, "3", 10, MPFR_RNDN);
        mpfr_init(r7030093);
        mpfr_init(r7030094);
        mpfr_init(r7030095);
        mpfr_init_set_str(r7030096, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030097, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7030098);
        mpfr_init(r7030099);
        mpfr_init(r7030100);
        mpfr_init(r7030101);
        mpfr_init(r7030102);
}

double f_dm(double x) {
        mpfr_set_d(r7030079, x, MPFR_RNDN);
        mpfr_mul(r7030080, r7030079, r7030079, MPFR_RNDN);
        ;
        mpfr_mul(r7030082, r7030079, r7030081, MPFR_RNDN);
        mpfr_mul(r7030083, r7030080, r7030082, MPFR_RNDN);
        mpfr_mul(r7030084, r7030080, r7030083, MPFR_RNDN);
        ;
        mpfr_mul(r7030086, r7030085, r7030079, MPFR_RNDN);
        ;
        mpfr_mul(r7030088, r7030087, r7030079, MPFR_RNDN);
        mpfr_mul(r7030089, r7030088, r7030080, MPFR_RNDN);
        mpfr_add(r7030090, r7030086, r7030089, MPFR_RNDN);
        mpfr_add(r7030091, r7030084, r7030090, MPFR_RNDN);
        ;
        mpfr_pow(r7030093, r7030079, r7030092, MPFR_RNDN);
        mpfr_mul(r7030094, r7030093, r7030093, MPFR_RNDN);
        mpfr_mul(r7030095, r7030094, r7030079, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7030098, r7030097, r7030079, MPFR_RNDN);
        mpfr_mul(r7030099, r7030079, r7030098, MPFR_RNDN);
        mpfr_add(r7030100, r7030096, r7030099, MPFR_RNDN);
        mpfr_mul(r7030101, r7030095, r7030100, MPFR_RNDN);
        mpfr_add(r7030102, r7030091, r7030101, MPFR_RNDN);
        return mpfr_get_d(r7030102, MPFR_RNDN);
}

