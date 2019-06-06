#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r64036939 = 1680.0;
        float r64036940 = -13440.0;
        float r64036941 = x;
        float r64036942 = r64036941 * r64036941;
        float r64036943 = r64036940 * r64036942;
        float r64036944 = r64036939 + r64036943;
        float r64036945 = 13440.0;
        float r64036946 = r64036942 * r64036941;
        float r64036947 = r64036946 * r64036941;
        float r64036948 = r64036945 * r64036947;
        float r64036949 = r64036944 + r64036948;
        float r64036950 = -3584.0;
        float r64036951 = r64036947 * r64036941;
        float r64036952 = r64036951 * r64036941;
        float r64036953 = r64036950 * r64036952;
        float r64036954 = r64036949 + r64036953;
        float r64036955 = 256.0;
        float r64036956 = r64036952 * r64036941;
        float r64036957 = r64036956 * r64036941;
        float r64036958 = r64036955 * r64036957;
        float r64036959 = r64036954 + r64036958;
        return r64036959;
}

double f_id(double x) {
        double r64036960 = 1680.0;
        double r64036961 = -13440.0;
        double r64036962 = x;
        double r64036963 = r64036962 * r64036962;
        double r64036964 = r64036961 * r64036963;
        double r64036965 = r64036960 + r64036964;
        double r64036966 = 13440.0;
        double r64036967 = r64036963 * r64036962;
        double r64036968 = r64036967 * r64036962;
        double r64036969 = r64036966 * r64036968;
        double r64036970 = r64036965 + r64036969;
        double r64036971 = -3584.0;
        double r64036972 = r64036968 * r64036962;
        double r64036973 = r64036972 * r64036962;
        double r64036974 = r64036971 * r64036973;
        double r64036975 = r64036970 + r64036974;
        double r64036976 = 256.0;
        double r64036977 = r64036973 * r64036962;
        double r64036978 = r64036977 * r64036962;
        double r64036979 = r64036976 * r64036978;
        double r64036980 = r64036975 + r64036979;
        return r64036980;
}


double f_of(float x) {
        float r64036981 = x;
        float r64036982 = 3;
        float r64036983 = pow(r64036981, r64036982);
        float r64036984 = r64036983 * r64036983;
        float r64036985 = 256.0;
        float r64036986 = r64036981 * r64036981;
        float r64036987 = r64036985 * r64036986;
        float r64036988 = 3584.0;
        float r64036989 = r64036987 - r64036988;
        float r64036990 = r64036984 * r64036989;
        float r64036991 = pow(r64036983, r64036982);
        float r64036992 = r64036991 - r64036983;
        float r64036993 = r64036983 * r64036981;
        float r64036994 = r64036986 + r64036993;
        float r64036995 = r64036984 + r64036994;
        float r64036996 = r64036992 / r64036995;
        float r64036997 = 13440.0;
        float r64036998 = r64036997 * r64036981;
        float r64036999 = r64036996 * r64036998;
        float r64037000 = 1680.0;
        float r64037001 = r64036999 + r64037000;
        float r64037002 = r64036990 + r64037001;
        return r64037002;
}

double f_od(double x) {
        double r64037003 = x;
        double r64037004 = 3;
        double r64037005 = pow(r64037003, r64037004);
        double r64037006 = r64037005 * r64037005;
        double r64037007 = 256.0;
        double r64037008 = r64037003 * r64037003;
        double r64037009 = r64037007 * r64037008;
        double r64037010 = 3584.0;
        double r64037011 = r64037009 - r64037010;
        double r64037012 = r64037006 * r64037011;
        double r64037013 = pow(r64037005, r64037004);
        double r64037014 = r64037013 - r64037005;
        double r64037015 = r64037005 * r64037003;
        double r64037016 = r64037008 + r64037015;
        double r64037017 = r64037006 + r64037016;
        double r64037018 = r64037014 / r64037017;
        double r64037019 = 13440.0;
        double r64037020 = r64037019 * r64037003;
        double r64037021 = r64037018 * r64037020;
        double r64037022 = 1680.0;
        double r64037023 = r64037021 + r64037022;
        double r64037024 = r64037012 + r64037023;
        return r64037024;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64037025, r64037026, r64037027, r64037028, r64037029, r64037030, r64037031, r64037032, r64037033, r64037034, r64037035, r64037036, r64037037, r64037038, r64037039, r64037040, r64037041, r64037042, r64037043, r64037044, r64037045;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037025, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r64037026, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r64037027);
        mpfr_init(r64037028);
        mpfr_init(r64037029);
        mpfr_init(r64037030);
        mpfr_init_set_str(r64037031, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r64037032);
        mpfr_init(r64037033);
        mpfr_init(r64037034);
        mpfr_init(r64037035);
        mpfr_init_set_str(r64037036, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r64037037);
        mpfr_init(r64037038);
        mpfr_init(r64037039);
        mpfr_init(r64037040);
        mpfr_init_set_str(r64037041, "256.0", 10, MPFR_RNDN);
        mpfr_init(r64037042);
        mpfr_init(r64037043);
        mpfr_init(r64037044);
        mpfr_init(r64037045);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r64037027, x, MPFR_RNDN);
        mpfr_mul(r64037028, r64037027, r64037027, MPFR_RNDN);
        mpfr_mul(r64037029, r64037026, r64037028, MPFR_RNDN);
        mpfr_add(r64037030, r64037025, r64037029, MPFR_RNDN);
        ;
        mpfr_mul(r64037032, r64037028, r64037027, MPFR_RNDN);
        mpfr_mul(r64037033, r64037032, r64037027, MPFR_RNDN);
        mpfr_mul(r64037034, r64037031, r64037033, MPFR_RNDN);
        mpfr_add(r64037035, r64037030, r64037034, MPFR_RNDN);
        ;
        mpfr_mul(r64037037, r64037033, r64037027, MPFR_RNDN);
        mpfr_mul(r64037038, r64037037, r64037027, MPFR_RNDN);
        mpfr_mul(r64037039, r64037036, r64037038, MPFR_RNDN);
        mpfr_add(r64037040, r64037035, r64037039, MPFR_RNDN);
        ;
        mpfr_mul(r64037042, r64037038, r64037027, MPFR_RNDN);
        mpfr_mul(r64037043, r64037042, r64037027, MPFR_RNDN);
        mpfr_mul(r64037044, r64037041, r64037043, MPFR_RNDN);
        mpfr_add(r64037045, r64037040, r64037044, MPFR_RNDN);
        return mpfr_get_d(r64037045, MPFR_RNDN);
}

static mpfr_t r64037046, r64037047, r64037048, r64037049, r64037050, r64037051, r64037052, r64037053, r64037054, r64037055, r64037056, r64037057, r64037058, r64037059, r64037060, r64037061, r64037062, r64037063, r64037064, r64037065, r64037066, r64037067;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r64037046);
        mpfr_init_set_str(r64037047, "3", 10, MPFR_RNDN);
        mpfr_init(r64037048);
        mpfr_init(r64037049);
        mpfr_init_set_str(r64037050, "256.0", 10, MPFR_RNDN);
        mpfr_init(r64037051);
        mpfr_init(r64037052);
        mpfr_init_set_str(r64037053, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r64037054);
        mpfr_init(r64037055);
        mpfr_init(r64037056);
        mpfr_init(r64037057);
        mpfr_init(r64037058);
        mpfr_init(r64037059);
        mpfr_init(r64037060);
        mpfr_init(r64037061);
        mpfr_init_set_str(r64037062, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r64037063);
        mpfr_init(r64037064);
        mpfr_init_set_str(r64037065, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r64037066);
        mpfr_init(r64037067);
}

double f_fm(double x) {
        mpfr_set_d(r64037046, x, MPFR_RNDN);
        ;
        mpfr_pow(r64037048, r64037046, r64037047, MPFR_RNDN);
        mpfr_mul(r64037049, r64037048, r64037048, MPFR_RNDN);
        ;
        mpfr_mul(r64037051, r64037046, r64037046, MPFR_RNDN);
        mpfr_mul(r64037052, r64037050, r64037051, MPFR_RNDN);
        ;
        mpfr_sub(r64037054, r64037052, r64037053, MPFR_RNDN);
        mpfr_mul(r64037055, r64037049, r64037054, MPFR_RNDN);
        mpfr_pow(r64037056, r64037048, r64037047, MPFR_RNDN);
        mpfr_sub(r64037057, r64037056, r64037048, MPFR_RNDN);
        mpfr_mul(r64037058, r64037048, r64037046, MPFR_RNDN);
        mpfr_add(r64037059, r64037051, r64037058, MPFR_RNDN);
        mpfr_add(r64037060, r64037049, r64037059, MPFR_RNDN);
        mpfr_div(r64037061, r64037057, r64037060, MPFR_RNDN);
        ;
        mpfr_mul(r64037063, r64037062, r64037046, MPFR_RNDN);
        mpfr_mul(r64037064, r64037061, r64037063, MPFR_RNDN);
        ;
        mpfr_add(r64037066, r64037064, r64037065, MPFR_RNDN);
        mpfr_add(r64037067, r64037055, r64037066, MPFR_RNDN);
        return mpfr_get_d(r64037067, MPFR_RNDN);
}

static mpfr_t r64037068, r64037069, r64037070, r64037071, r64037072, r64037073, r64037074, r64037075, r64037076, r64037077, r64037078, r64037079, r64037080, r64037081, r64037082, r64037083, r64037084, r64037085, r64037086, r64037087, r64037088, r64037089;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r64037068);
        mpfr_init_set_str(r64037069, "3", 10, MPFR_RNDN);
        mpfr_init(r64037070);
        mpfr_init(r64037071);
        mpfr_init_set_str(r64037072, "256.0", 10, MPFR_RNDN);
        mpfr_init(r64037073);
        mpfr_init(r64037074);
        mpfr_init_set_str(r64037075, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r64037076);
        mpfr_init(r64037077);
        mpfr_init(r64037078);
        mpfr_init(r64037079);
        mpfr_init(r64037080);
        mpfr_init(r64037081);
        mpfr_init(r64037082);
        mpfr_init(r64037083);
        mpfr_init_set_str(r64037084, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r64037085);
        mpfr_init(r64037086);
        mpfr_init_set_str(r64037087, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r64037088);
        mpfr_init(r64037089);
}

double f_dm(double x) {
        mpfr_set_d(r64037068, x, MPFR_RNDN);
        ;
        mpfr_pow(r64037070, r64037068, r64037069, MPFR_RNDN);
        mpfr_mul(r64037071, r64037070, r64037070, MPFR_RNDN);
        ;
        mpfr_mul(r64037073, r64037068, r64037068, MPFR_RNDN);
        mpfr_mul(r64037074, r64037072, r64037073, MPFR_RNDN);
        ;
        mpfr_sub(r64037076, r64037074, r64037075, MPFR_RNDN);
        mpfr_mul(r64037077, r64037071, r64037076, MPFR_RNDN);
        mpfr_pow(r64037078, r64037070, r64037069, MPFR_RNDN);
        mpfr_sub(r64037079, r64037078, r64037070, MPFR_RNDN);
        mpfr_mul(r64037080, r64037070, r64037068, MPFR_RNDN);
        mpfr_add(r64037081, r64037073, r64037080, MPFR_RNDN);
        mpfr_add(r64037082, r64037071, r64037081, MPFR_RNDN);
        mpfr_div(r64037083, r64037079, r64037082, MPFR_RNDN);
        ;
        mpfr_mul(r64037085, r64037084, r64037068, MPFR_RNDN);
        mpfr_mul(r64037086, r64037083, r64037085, MPFR_RNDN);
        ;
        mpfr_add(r64037088, r64037086, r64037087, MPFR_RNDN);
        mpfr_add(r64037089, r64037077, r64037088, MPFR_RNDN);
        return mpfr_get_d(r64037089, MPFR_RNDN);
}

