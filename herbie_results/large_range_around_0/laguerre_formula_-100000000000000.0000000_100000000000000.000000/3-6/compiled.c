#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r8829976 = 1.0;
        float r8829977 = -6.0;
        float r8829978 = x;
        float r8829979 = r8829977 * r8829978;
        float r8829980 = r8829976 + r8829979;
        float r8829981 = 7.5;
        float r8829982 = r8829978 * r8829978;
        float r8829983 = r8829981 * r8829982;
        float r8829984 = r8829980 + r8829983;
        float r8829985 = -3.333333;
        float r8829986 = r8829982 * r8829978;
        float r8829987 = r8829985 * r8829986;
        float r8829988 = r8829984 + r8829987;
        float r8829989 = 0.625;
        float r8829990 = r8829986 * r8829978;
        float r8829991 = r8829989 * r8829990;
        float r8829992 = r8829988 + r8829991;
        float r8829993 = -0.05;
        float r8829994 = r8829990 * r8829978;
        float r8829995 = r8829993 * r8829994;
        float r8829996 = r8829992 + r8829995;
        float r8829997 = 0.001389;
        float r8829998 = r8829994 * r8829978;
        float r8829999 = r8829997 * r8829998;
        float r8830000 = r8829996 + r8829999;
        return r8830000;
}

double f_id(double x) {
        double r8830001 = 1.0;
        double r8830002 = -6.0;
        double r8830003 = x;
        double r8830004 = r8830002 * r8830003;
        double r8830005 = r8830001 + r8830004;
        double r8830006 = 7.5;
        double r8830007 = r8830003 * r8830003;
        double r8830008 = r8830006 * r8830007;
        double r8830009 = r8830005 + r8830008;
        double r8830010 = -3.333333;
        double r8830011 = r8830007 * r8830003;
        double r8830012 = r8830010 * r8830011;
        double r8830013 = r8830009 + r8830012;
        double r8830014 = 0.625;
        double r8830015 = r8830011 * r8830003;
        double r8830016 = r8830014 * r8830015;
        double r8830017 = r8830013 + r8830016;
        double r8830018 = -0.05;
        double r8830019 = r8830015 * r8830003;
        double r8830020 = r8830018 * r8830019;
        double r8830021 = r8830017 + r8830020;
        double r8830022 = 0.001389;
        double r8830023 = r8830019 * r8830003;
        double r8830024 = r8830022 * r8830023;
        double r8830025 = r8830021 + r8830024;
        return r8830025;
}


double f_of(float x) {
        float r8830026 = x;
        float r8830027 = -6.0;
        float r8830028 = r8830026 * r8830027;
        float r8830029 = 1.0;
        float r8830030 = r8830028 + r8830029;
        float r8830031 = r8830026 * r8830026;
        float r8830032 = -3.333333;
        float r8830033 = r8830032 * r8830026;
        float r8830034 = 7.5;
        float r8830035 = r8830033 + r8830034;
        float r8830036 = r8830031 * r8830035;
        float r8830037 = r8830030 + r8830036;
        float r8830038 = 0.001389;
        float r8830039 = r8830031 * r8830038;
        float r8830040 = 2;
        float r8830041 = r8830040 + r8830040;
        float r8830042 = pow(r8830026, r8830041);
        float r8830043 = r8830039 * r8830042;
        float r8830044 = r8830031 * r8830031;
        float r8830045 = 0.625;
        float r8830046 = -0.05;
        float r8830047 = r8830046 * r8830026;
        float r8830048 = r8830045 + r8830047;
        float r8830049 = r8830044 * r8830048;
        float r8830050 = r8830043 + r8830049;
        float r8830051 = r8830037 + r8830050;
        return r8830051;
}

double f_od(double x) {
        double r8830052 = x;
        double r8830053 = -6.0;
        double r8830054 = r8830052 * r8830053;
        double r8830055 = 1.0;
        double r8830056 = r8830054 + r8830055;
        double r8830057 = r8830052 * r8830052;
        double r8830058 = -3.333333;
        double r8830059 = r8830058 * r8830052;
        double r8830060 = 7.5;
        double r8830061 = r8830059 + r8830060;
        double r8830062 = r8830057 * r8830061;
        double r8830063 = r8830056 + r8830062;
        double r8830064 = 0.001389;
        double r8830065 = r8830057 * r8830064;
        double r8830066 = 2;
        double r8830067 = r8830066 + r8830066;
        double r8830068 = pow(r8830052, r8830067);
        double r8830069 = r8830065 * r8830068;
        double r8830070 = r8830057 * r8830057;
        double r8830071 = 0.625;
        double r8830072 = -0.05;
        double r8830073 = r8830072 * r8830052;
        double r8830074 = r8830071 + r8830073;
        double r8830075 = r8830070 * r8830074;
        double r8830076 = r8830069 + r8830075;
        double r8830077 = r8830063 + r8830076;
        return r8830077;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8830078, r8830079, r8830080, r8830081, r8830082, r8830083, r8830084, r8830085, r8830086, r8830087, r8830088, r8830089, r8830090, r8830091, r8830092, r8830093, r8830094, r8830095, r8830096, r8830097, r8830098, r8830099, r8830100, r8830101, r8830102;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8830078, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830079, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r8830080);
        mpfr_init(r8830081);
        mpfr_init(r8830082);
        mpfr_init_set_str(r8830083, "7.5", 10, MPFR_RNDN);
        mpfr_init(r8830084);
        mpfr_init(r8830085);
        mpfr_init(r8830086);
        mpfr_init_set_str(r8830087, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r8830088);
        mpfr_init(r8830089);
        mpfr_init(r8830090);
        mpfr_init_set_str(r8830091, "0.625", 10, MPFR_RNDN);
        mpfr_init(r8830092);
        mpfr_init(r8830093);
        mpfr_init(r8830094);
        mpfr_init_set_str(r8830095, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r8830096);
        mpfr_init(r8830097);
        mpfr_init(r8830098);
        mpfr_init_set_str(r8830099, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r8830100);
        mpfr_init(r8830101);
        mpfr_init(r8830102);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8830080, x, MPFR_RNDN);
        mpfr_mul(r8830081, r8830079, r8830080, MPFR_RNDN);
        mpfr_add(r8830082, r8830078, r8830081, MPFR_RNDN);
        ;
        mpfr_mul(r8830084, r8830080, r8830080, MPFR_RNDN);
        mpfr_mul(r8830085, r8830083, r8830084, MPFR_RNDN);
        mpfr_add(r8830086, r8830082, r8830085, MPFR_RNDN);
        ;
        mpfr_mul(r8830088, r8830084, r8830080, MPFR_RNDN);
        mpfr_mul(r8830089, r8830087, r8830088, MPFR_RNDN);
        mpfr_add(r8830090, r8830086, r8830089, MPFR_RNDN);
        ;
        mpfr_mul(r8830092, r8830088, r8830080, MPFR_RNDN);
        mpfr_mul(r8830093, r8830091, r8830092, MPFR_RNDN);
        mpfr_add(r8830094, r8830090, r8830093, MPFR_RNDN);
        ;
        mpfr_mul(r8830096, r8830092, r8830080, MPFR_RNDN);
        mpfr_mul(r8830097, r8830095, r8830096, MPFR_RNDN);
        mpfr_add(r8830098, r8830094, r8830097, MPFR_RNDN);
        ;
        mpfr_mul(r8830100, r8830096, r8830080, MPFR_RNDN);
        mpfr_mul(r8830101, r8830099, r8830100, MPFR_RNDN);
        mpfr_add(r8830102, r8830098, r8830101, MPFR_RNDN);
        return mpfr_get_d(r8830102, MPFR_RNDN);
}

static mpfr_t r8830103, r8830104, r8830105, r8830106, r8830107, r8830108, r8830109, r8830110, r8830111, r8830112, r8830113, r8830114, r8830115, r8830116, r8830117, r8830118, r8830119, r8830120, r8830121, r8830122, r8830123, r8830124, r8830125, r8830126, r8830127, r8830128;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8830103);
        mpfr_init_set_str(r8830104, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r8830105);
        mpfr_init_set_str(r8830106, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8830107);
        mpfr_init(r8830108);
        mpfr_init_set_str(r8830109, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r8830110);
        mpfr_init_set_str(r8830111, "7.5", 10, MPFR_RNDN);
        mpfr_init(r8830112);
        mpfr_init(r8830113);
        mpfr_init(r8830114);
        mpfr_init_set_str(r8830115, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r8830116);
        mpfr_init_set_str(r8830117, "2", 10, MPFR_RNDN);
        mpfr_init(r8830118);
        mpfr_init(r8830119);
        mpfr_init(r8830120);
        mpfr_init(r8830121);
        mpfr_init_set_str(r8830122, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830123, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r8830124);
        mpfr_init(r8830125);
        mpfr_init(r8830126);
        mpfr_init(r8830127);
        mpfr_init(r8830128);
}

double f_fm(double x) {
        mpfr_set_d(r8830103, x, MPFR_RNDN);
        ;
        mpfr_mul(r8830105, r8830103, r8830104, MPFR_RNDN);
        ;
        mpfr_add(r8830107, r8830105, r8830106, MPFR_RNDN);
        mpfr_mul(r8830108, r8830103, r8830103, MPFR_RNDN);
        ;
        mpfr_mul(r8830110, r8830109, r8830103, MPFR_RNDN);
        ;
        mpfr_add(r8830112, r8830110, r8830111, MPFR_RNDN);
        mpfr_mul(r8830113, r8830108, r8830112, MPFR_RNDN);
        mpfr_add(r8830114, r8830107, r8830113, MPFR_RNDN);
        ;
        mpfr_mul(r8830116, r8830108, r8830115, MPFR_RNDN);
        ;
        mpfr_add(r8830118, r8830117, r8830117, MPFR_RNDN);
        mpfr_pow(r8830119, r8830103, r8830118, MPFR_RNDN);
        mpfr_mul(r8830120, r8830116, r8830119, MPFR_RNDN);
        mpfr_mul(r8830121, r8830108, r8830108, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8830124, r8830123, r8830103, MPFR_RNDN);
        mpfr_add(r8830125, r8830122, r8830124, MPFR_RNDN);
        mpfr_mul(r8830126, r8830121, r8830125, MPFR_RNDN);
        mpfr_add(r8830127, r8830120, r8830126, MPFR_RNDN);
        mpfr_add(r8830128, r8830114, r8830127, MPFR_RNDN);
        return mpfr_get_d(r8830128, MPFR_RNDN);
}

static mpfr_t r8830129, r8830130, r8830131, r8830132, r8830133, r8830134, r8830135, r8830136, r8830137, r8830138, r8830139, r8830140, r8830141, r8830142, r8830143, r8830144, r8830145, r8830146, r8830147, r8830148, r8830149, r8830150, r8830151, r8830152, r8830153, r8830154;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8830129);
        mpfr_init_set_str(r8830130, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r8830131);
        mpfr_init_set_str(r8830132, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8830133);
        mpfr_init(r8830134);
        mpfr_init_set_str(r8830135, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r8830136);
        mpfr_init_set_str(r8830137, "7.5", 10, MPFR_RNDN);
        mpfr_init(r8830138);
        mpfr_init(r8830139);
        mpfr_init(r8830140);
        mpfr_init_set_str(r8830141, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r8830142);
        mpfr_init_set_str(r8830143, "2", 10, MPFR_RNDN);
        mpfr_init(r8830144);
        mpfr_init(r8830145);
        mpfr_init(r8830146);
        mpfr_init(r8830147);
        mpfr_init_set_str(r8830148, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830149, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r8830150);
        mpfr_init(r8830151);
        mpfr_init(r8830152);
        mpfr_init(r8830153);
        mpfr_init(r8830154);
}

double f_dm(double x) {
        mpfr_set_d(r8830129, x, MPFR_RNDN);
        ;
        mpfr_mul(r8830131, r8830129, r8830130, MPFR_RNDN);
        ;
        mpfr_add(r8830133, r8830131, r8830132, MPFR_RNDN);
        mpfr_mul(r8830134, r8830129, r8830129, MPFR_RNDN);
        ;
        mpfr_mul(r8830136, r8830135, r8830129, MPFR_RNDN);
        ;
        mpfr_add(r8830138, r8830136, r8830137, MPFR_RNDN);
        mpfr_mul(r8830139, r8830134, r8830138, MPFR_RNDN);
        mpfr_add(r8830140, r8830133, r8830139, MPFR_RNDN);
        ;
        mpfr_mul(r8830142, r8830134, r8830141, MPFR_RNDN);
        ;
        mpfr_add(r8830144, r8830143, r8830143, MPFR_RNDN);
        mpfr_pow(r8830145, r8830129, r8830144, MPFR_RNDN);
        mpfr_mul(r8830146, r8830142, r8830145, MPFR_RNDN);
        mpfr_mul(r8830147, r8830134, r8830134, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8830150, r8830149, r8830129, MPFR_RNDN);
        mpfr_add(r8830151, r8830148, r8830150, MPFR_RNDN);
        mpfr_mul(r8830152, r8830147, r8830151, MPFR_RNDN);
        mpfr_add(r8830153, r8830146, r8830152, MPFR_RNDN);
        mpfr_add(r8830154, r8830140, r8830153, MPFR_RNDN);
        return mpfr_get_d(r8830154, MPFR_RNDN);
}

