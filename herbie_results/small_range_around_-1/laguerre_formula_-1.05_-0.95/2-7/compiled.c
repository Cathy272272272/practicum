#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r10527946 = 1.0;
        float r10527947 = -7.0;
        float r10527948 = x;
        float r10527949 = r10527947 * r10527948;
        float r10527950 = r10527946 + r10527949;
        float r10527951 = 10.5;
        float r10527952 = r10527948 * r10527948;
        float r10527953 = r10527951 * r10527952;
        float r10527954 = r10527950 + r10527953;
        float r10527955 = -5.833333;
        float r10527956 = r10527952 * r10527948;
        float r10527957 = r10527955 * r10527956;
        float r10527958 = r10527954 + r10527957;
        float r10527959 = 1.458333;
        float r10527960 = r10527956 * r10527948;
        float r10527961 = r10527959 * r10527960;
        float r10527962 = r10527958 + r10527961;
        float r10527963 = -0.175;
        float r10527964 = r10527960 * r10527948;
        float r10527965 = r10527963 * r10527964;
        float r10527966 = r10527962 + r10527965;
        float r10527967 = 0.009722;
        float r10527968 = r10527964 * r10527948;
        float r10527969 = r10527967 * r10527968;
        float r10527970 = r10527966 + r10527969;
        float r10527971 = -0.000198;
        float r10527972 = r10527968 * r10527948;
        float r10527973 = r10527971 * r10527972;
        float r10527974 = r10527970 + r10527973;
        return r10527974;
}

double f_id(double x) {
        double r10527975 = 1.0;
        double r10527976 = -7.0;
        double r10527977 = x;
        double r10527978 = r10527976 * r10527977;
        double r10527979 = r10527975 + r10527978;
        double r10527980 = 10.5;
        double r10527981 = r10527977 * r10527977;
        double r10527982 = r10527980 * r10527981;
        double r10527983 = r10527979 + r10527982;
        double r10527984 = -5.833333;
        double r10527985 = r10527981 * r10527977;
        double r10527986 = r10527984 * r10527985;
        double r10527987 = r10527983 + r10527986;
        double r10527988 = 1.458333;
        double r10527989 = r10527985 * r10527977;
        double r10527990 = r10527988 * r10527989;
        double r10527991 = r10527987 + r10527990;
        double r10527992 = -0.175;
        double r10527993 = r10527989 * r10527977;
        double r10527994 = r10527992 * r10527993;
        double r10527995 = r10527991 + r10527994;
        double r10527996 = 0.009722;
        double r10527997 = r10527993 * r10527977;
        double r10527998 = r10527996 * r10527997;
        double r10527999 = r10527995 + r10527998;
        double r10528000 = -0.000198;
        double r10528001 = r10527997 * r10527977;
        double r10528002 = r10528000 * r10528001;
        double r10528003 = r10527999 + r10528002;
        return r10528003;
}


double f_of(float x) {
        float r10528004 = 1.458333;
        float r10528005 = -0.175;
        float r10528006 = x;
        float r10528007 = r10528005 * r10528006;
        float r10528008 = r10528004 + r10528007;
        float r10528009 = 2;
        float r10528010 = r10528009 + r10528009;
        float r10528011 = pow(r10528006, r10528010);
        float r10528012 = r10528008 * r10528011;
        float r10528013 = -7.0;
        float r10528014 = r10528013 * r10528006;
        float r10528015 = 1.0;
        float r10528016 = r10528014 + r10528015;
        float r10528017 = r10528012 + r10528016;
        float r10528018 = 3;
        float r10528019 = pow(r10528006, r10528018);
        float r10528020 = r10528019 * r10528019;
        float r10528021 = 0.009722;
        float r10528022 = -0.000198;
        float r10528023 = r10528006 * r10528022;
        float r10528024 = r10528021 + r10528023;
        float r10528025 = r10528020 * r10528024;
        float r10528026 = r10528006 * r10528006;
        float r10528027 = 10.5;
        float r10528028 = 5.833333;
        float r10528029 = r10528028 * r10528006;
        float r10528030 = r10528027 - r10528029;
        float r10528031 = r10528026 * r10528030;
        float r10528032 = r10528025 + r10528031;
        float r10528033 = r10528017 + r10528032;
        return r10528033;
}

double f_od(double x) {
        double r10528034 = 1.458333;
        double r10528035 = -0.175;
        double r10528036 = x;
        double r10528037 = r10528035 * r10528036;
        double r10528038 = r10528034 + r10528037;
        double r10528039 = 2;
        double r10528040 = r10528039 + r10528039;
        double r10528041 = pow(r10528036, r10528040);
        double r10528042 = r10528038 * r10528041;
        double r10528043 = -7.0;
        double r10528044 = r10528043 * r10528036;
        double r10528045 = 1.0;
        double r10528046 = r10528044 + r10528045;
        double r10528047 = r10528042 + r10528046;
        double r10528048 = 3;
        double r10528049 = pow(r10528036, r10528048);
        double r10528050 = r10528049 * r10528049;
        double r10528051 = 0.009722;
        double r10528052 = -0.000198;
        double r10528053 = r10528036 * r10528052;
        double r10528054 = r10528051 + r10528053;
        double r10528055 = r10528050 * r10528054;
        double r10528056 = r10528036 * r10528036;
        double r10528057 = 10.5;
        double r10528058 = 5.833333;
        double r10528059 = r10528058 * r10528036;
        double r10528060 = r10528057 - r10528059;
        double r10528061 = r10528056 * r10528060;
        double r10528062 = r10528055 + r10528061;
        double r10528063 = r10528047 + r10528062;
        return r10528063;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10528064, r10528065, r10528066, r10528067, r10528068, r10528069, r10528070, r10528071, r10528072, r10528073, r10528074, r10528075, r10528076, r10528077, r10528078, r10528079, r10528080, r10528081, r10528082, r10528083, r10528084, r10528085, r10528086, r10528087, r10528088, r10528089, r10528090, r10528091, r10528092;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528064, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528065, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10528066);
        mpfr_init(r10528067);
        mpfr_init(r10528068);
        mpfr_init_set_str(r10528069, "10.5", 10, MPFR_RNDN);
        mpfr_init(r10528070);
        mpfr_init(r10528071);
        mpfr_init(r10528072);
        mpfr_init_set_str(r10528073, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10528074);
        mpfr_init(r10528075);
        mpfr_init(r10528076);
        mpfr_init_set_str(r10528077, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r10528078);
        mpfr_init(r10528079);
        mpfr_init(r10528080);
        mpfr_init_set_str(r10528081, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10528082);
        mpfr_init(r10528083);
        mpfr_init(r10528084);
        mpfr_init_set_str(r10528085, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10528086);
        mpfr_init(r10528087);
        mpfr_init(r10528088);
        mpfr_init_set_str(r10528089, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10528090);
        mpfr_init(r10528091);
        mpfr_init(r10528092);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10528066, x, MPFR_RNDN);
        mpfr_mul(r10528067, r10528065, r10528066, MPFR_RNDN);
        mpfr_add(r10528068, r10528064, r10528067, MPFR_RNDN);
        ;
        mpfr_mul(r10528070, r10528066, r10528066, MPFR_RNDN);
        mpfr_mul(r10528071, r10528069, r10528070, MPFR_RNDN);
        mpfr_add(r10528072, r10528068, r10528071, MPFR_RNDN);
        ;
        mpfr_mul(r10528074, r10528070, r10528066, MPFR_RNDN);
        mpfr_mul(r10528075, r10528073, r10528074, MPFR_RNDN);
        mpfr_add(r10528076, r10528072, r10528075, MPFR_RNDN);
        ;
        mpfr_mul(r10528078, r10528074, r10528066, MPFR_RNDN);
        mpfr_mul(r10528079, r10528077, r10528078, MPFR_RNDN);
        mpfr_add(r10528080, r10528076, r10528079, MPFR_RNDN);
        ;
        mpfr_mul(r10528082, r10528078, r10528066, MPFR_RNDN);
        mpfr_mul(r10528083, r10528081, r10528082, MPFR_RNDN);
        mpfr_add(r10528084, r10528080, r10528083, MPFR_RNDN);
        ;
        mpfr_mul(r10528086, r10528082, r10528066, MPFR_RNDN);
        mpfr_mul(r10528087, r10528085, r10528086, MPFR_RNDN);
        mpfr_add(r10528088, r10528084, r10528087, MPFR_RNDN);
        ;
        mpfr_mul(r10528090, r10528086, r10528066, MPFR_RNDN);
        mpfr_mul(r10528091, r10528089, r10528090, MPFR_RNDN);
        mpfr_add(r10528092, r10528088, r10528091, MPFR_RNDN);
        return mpfr_get_d(r10528092, MPFR_RNDN);
}

static mpfr_t r10528093, r10528094, r10528095, r10528096, r10528097, r10528098, r10528099, r10528100, r10528101, r10528102, r10528103, r10528104, r10528105, r10528106, r10528107, r10528108, r10528109, r10528110, r10528111, r10528112, r10528113, r10528114, r10528115, r10528116, r10528117, r10528118, r10528119, r10528120, r10528121, r10528122;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528093, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528094, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10528095);
        mpfr_init(r10528096);
        mpfr_init(r10528097);
        mpfr_init_set_str(r10528098, "2", 10, MPFR_RNDN);
        mpfr_init(r10528099);
        mpfr_init(r10528100);
        mpfr_init(r10528101);
        mpfr_init_set_str(r10528102, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10528103);
        mpfr_init_set_str(r10528104, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528105);
        mpfr_init(r10528106);
        mpfr_init_set_str(r10528107, "3", 10, MPFR_RNDN);
        mpfr_init(r10528108);
        mpfr_init(r10528109);
        mpfr_init_set_str(r10528110, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528111, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10528112);
        mpfr_init(r10528113);
        mpfr_init(r10528114);
        mpfr_init(r10528115);
        mpfr_init_set_str(r10528116, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528117, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r10528118);
        mpfr_init(r10528119);
        mpfr_init(r10528120);
        mpfr_init(r10528121);
        mpfr_init(r10528122);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10528095, x, MPFR_RNDN);
        mpfr_mul(r10528096, r10528094, r10528095, MPFR_RNDN);
        mpfr_add(r10528097, r10528093, r10528096, MPFR_RNDN);
        ;
        mpfr_add(r10528099, r10528098, r10528098, MPFR_RNDN);
        mpfr_pow(r10528100, r10528095, r10528099, MPFR_RNDN);
        mpfr_mul(r10528101, r10528097, r10528100, MPFR_RNDN);
        ;
        mpfr_mul(r10528103, r10528102, r10528095, MPFR_RNDN);
        ;
        mpfr_add(r10528105, r10528103, r10528104, MPFR_RNDN);
        mpfr_add(r10528106, r10528101, r10528105, MPFR_RNDN);
        ;
        mpfr_pow(r10528108, r10528095, r10528107, MPFR_RNDN);
        mpfr_mul(r10528109, r10528108, r10528108, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10528112, r10528095, r10528111, MPFR_RNDN);
        mpfr_add(r10528113, r10528110, r10528112, MPFR_RNDN);
        mpfr_mul(r10528114, r10528109, r10528113, MPFR_RNDN);
        mpfr_mul(r10528115, r10528095, r10528095, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10528118, r10528117, r10528095, MPFR_RNDN);
        mpfr_sub(r10528119, r10528116, r10528118, MPFR_RNDN);
        mpfr_mul(r10528120, r10528115, r10528119, MPFR_RNDN);
        mpfr_add(r10528121, r10528114, r10528120, MPFR_RNDN);
        mpfr_add(r10528122, r10528106, r10528121, MPFR_RNDN);
        return mpfr_get_d(r10528122, MPFR_RNDN);
}

static mpfr_t r10528123, r10528124, r10528125, r10528126, r10528127, r10528128, r10528129, r10528130, r10528131, r10528132, r10528133, r10528134, r10528135, r10528136, r10528137, r10528138, r10528139, r10528140, r10528141, r10528142, r10528143, r10528144, r10528145, r10528146, r10528147, r10528148, r10528149, r10528150, r10528151, r10528152;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528123, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528124, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10528125);
        mpfr_init(r10528126);
        mpfr_init(r10528127);
        mpfr_init_set_str(r10528128, "2", 10, MPFR_RNDN);
        mpfr_init(r10528129);
        mpfr_init(r10528130);
        mpfr_init(r10528131);
        mpfr_init_set_str(r10528132, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10528133);
        mpfr_init_set_str(r10528134, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528135);
        mpfr_init(r10528136);
        mpfr_init_set_str(r10528137, "3", 10, MPFR_RNDN);
        mpfr_init(r10528138);
        mpfr_init(r10528139);
        mpfr_init_set_str(r10528140, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528141, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10528142);
        mpfr_init(r10528143);
        mpfr_init(r10528144);
        mpfr_init(r10528145);
        mpfr_init_set_str(r10528146, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528147, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r10528148);
        mpfr_init(r10528149);
        mpfr_init(r10528150);
        mpfr_init(r10528151);
        mpfr_init(r10528152);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10528125, x, MPFR_RNDN);
        mpfr_mul(r10528126, r10528124, r10528125, MPFR_RNDN);
        mpfr_add(r10528127, r10528123, r10528126, MPFR_RNDN);
        ;
        mpfr_add(r10528129, r10528128, r10528128, MPFR_RNDN);
        mpfr_pow(r10528130, r10528125, r10528129, MPFR_RNDN);
        mpfr_mul(r10528131, r10528127, r10528130, MPFR_RNDN);
        ;
        mpfr_mul(r10528133, r10528132, r10528125, MPFR_RNDN);
        ;
        mpfr_add(r10528135, r10528133, r10528134, MPFR_RNDN);
        mpfr_add(r10528136, r10528131, r10528135, MPFR_RNDN);
        ;
        mpfr_pow(r10528138, r10528125, r10528137, MPFR_RNDN);
        mpfr_mul(r10528139, r10528138, r10528138, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10528142, r10528125, r10528141, MPFR_RNDN);
        mpfr_add(r10528143, r10528140, r10528142, MPFR_RNDN);
        mpfr_mul(r10528144, r10528139, r10528143, MPFR_RNDN);
        mpfr_mul(r10528145, r10528125, r10528125, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10528148, r10528147, r10528125, MPFR_RNDN);
        mpfr_sub(r10528149, r10528146, r10528148, MPFR_RNDN);
        mpfr_mul(r10528150, r10528145, r10528149, MPFR_RNDN);
        mpfr_add(r10528151, r10528144, r10528150, MPFR_RNDN);
        mpfr_add(r10528152, r10528136, r10528151, MPFR_RNDN);
        return mpfr_get_d(r10528152, MPFR_RNDN);
}

