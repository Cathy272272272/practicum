#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r8101952 = 0.225586;
        float r8101953 = -17.595703;
        float r8101954 = x;
        float r8101955 = r8101954 * r8101954;
        float r8101956 = r8101953 * r8101955;
        float r8101957 = r8101952 + r8101956;
        float r8101958 = 219.946289;
        float r8101959 = r8101955 * r8101954;
        float r8101960 = r8101959 * r8101954;
        float r8101961 = r8101958 * r8101960;
        float r8101962 = r8101957 + r8101961;
        float r8101963 = -997.089844;
        float r8101964 = r8101960 * r8101954;
        float r8101965 = r8101964 * r8101954;
        float r8101966 = r8101963 * r8101965;
        float r8101967 = r8101962 + r8101966;
        float r8101968 = 2029.790039;
        float r8101969 = r8101965 * r8101954;
        float r8101970 = r8101969 * r8101954;
        float r8101971 = r8101968 * r8101970;
        float r8101972 = r8101967 + r8101971;
        float r8101973 = -1894.470703;
        float r8101974 = r8101970 * r8101954;
        float r8101975 = r8101974 * r8101954;
        float r8101976 = r8101973 * r8101975;
        float r8101977 = r8101972 + r8101976;
        float r8101978 = 660.194336;
        float r8101979 = r8101975 * r8101954;
        float r8101980 = r8101979 * r8101954;
        float r8101981 = r8101978 * r8101980;
        float r8101982 = r8101977 + r8101981;
        return r8101982;
}

double f_id(double x) {
        double r8101983 = 0.225586;
        double r8101984 = -17.595703;
        double r8101985 = x;
        double r8101986 = r8101985 * r8101985;
        double r8101987 = r8101984 * r8101986;
        double r8101988 = r8101983 + r8101987;
        double r8101989 = 219.946289;
        double r8101990 = r8101986 * r8101985;
        double r8101991 = r8101990 * r8101985;
        double r8101992 = r8101989 * r8101991;
        double r8101993 = r8101988 + r8101992;
        double r8101994 = -997.089844;
        double r8101995 = r8101991 * r8101985;
        double r8101996 = r8101995 * r8101985;
        double r8101997 = r8101994 * r8101996;
        double r8101998 = r8101993 + r8101997;
        double r8101999 = 2029.790039;
        double r8102000 = r8101996 * r8101985;
        double r8102001 = r8102000 * r8101985;
        double r8102002 = r8101999 * r8102001;
        double r8102003 = r8101998 + r8102002;
        double r8102004 = -1894.470703;
        double r8102005 = r8102001 * r8101985;
        double r8102006 = r8102005 * r8101985;
        double r8102007 = r8102004 * r8102006;
        double r8102008 = r8102003 + r8102007;
        double r8102009 = 660.194336;
        double r8102010 = r8102006 * r8101985;
        double r8102011 = r8102010 * r8101985;
        double r8102012 = r8102009 * r8102011;
        double r8102013 = r8102008 + r8102012;
        return r8102013;
}


double f_of(float x) {
        float r8102014 = 660.194336;
        float r8102015 = x;
        float r8102016 = r8102014 * r8102015;
        float r8102017 = r8102016 * r8102015;
        float r8102018 = r8102015 * r8102015;
        float r8102019 = r8102018 * r8102018;
        float r8102020 = 3;
        float r8102021 = pow(r8102018, r8102020);
        float r8102022 = r8102019 * r8102021;
        float r8102023 = r8102017 * r8102022;
        float r8102024 = -997.089844;
        float r8102025 = 6;
        float r8102026 = pow(r8102015, r8102025);
        float r8102027 = r8102024 * r8102026;
        float r8102028 = r8102023 + r8102027;
        float r8102029 = 0.225586;
        float r8102030 = pow(r8102015, r8102020);
        float r8102031 = 219.946289;
        float r8102032 = r8102015 * r8102031;
        float r8102033 = r8102030 * r8102032;
        float r8102034 = -17.595703;
        float r8102035 = r8102018 * r8102034;
        float r8102036 = r8102033 + r8102035;
        float r8102037 = r8102029 + r8102036;
        float r8102038 = r8102019 * r8102019;
        float r8102039 = -1894.470703;
        float r8102040 = r8102018 * r8102039;
        float r8102041 = 2029.790039;
        float r8102042 = r8102040 + r8102041;
        float r8102043 = r8102038 * r8102042;
        float r8102044 = r8102037 + r8102043;
        float r8102045 = r8102028 + r8102044;
        return r8102045;
}

double f_od(double x) {
        double r8102046 = 660.194336;
        double r8102047 = x;
        double r8102048 = r8102046 * r8102047;
        double r8102049 = r8102048 * r8102047;
        double r8102050 = r8102047 * r8102047;
        double r8102051 = r8102050 * r8102050;
        double r8102052 = 3;
        double r8102053 = pow(r8102050, r8102052);
        double r8102054 = r8102051 * r8102053;
        double r8102055 = r8102049 * r8102054;
        double r8102056 = -997.089844;
        double r8102057 = 6;
        double r8102058 = pow(r8102047, r8102057);
        double r8102059 = r8102056 * r8102058;
        double r8102060 = r8102055 + r8102059;
        double r8102061 = 0.225586;
        double r8102062 = pow(r8102047, r8102052);
        double r8102063 = 219.946289;
        double r8102064 = r8102047 * r8102063;
        double r8102065 = r8102062 * r8102064;
        double r8102066 = -17.595703;
        double r8102067 = r8102050 * r8102066;
        double r8102068 = r8102065 + r8102067;
        double r8102069 = r8102061 + r8102068;
        double r8102070 = r8102051 * r8102051;
        double r8102071 = -1894.470703;
        double r8102072 = r8102050 * r8102071;
        double r8102073 = 2029.790039;
        double r8102074 = r8102072 + r8102073;
        double r8102075 = r8102070 * r8102074;
        double r8102076 = r8102069 + r8102075;
        double r8102077 = r8102060 + r8102076;
        return r8102077;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8102078, r8102079, r8102080, r8102081, r8102082, r8102083, r8102084, r8102085, r8102086, r8102087, r8102088, r8102089, r8102090, r8102091, r8102092, r8102093, r8102094, r8102095, r8102096, r8102097, r8102098, r8102099, r8102100, r8102101, r8102102, r8102103, r8102104, r8102105, r8102106, r8102107, r8102108;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8102078, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r8102079, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r8102080);
        mpfr_init(r8102081);
        mpfr_init(r8102082);
        mpfr_init(r8102083);
        mpfr_init_set_str(r8102084, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r8102085);
        mpfr_init(r8102086);
        mpfr_init(r8102087);
        mpfr_init(r8102088);
        mpfr_init_set_str(r8102089, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r8102090);
        mpfr_init(r8102091);
        mpfr_init(r8102092);
        mpfr_init(r8102093);
        mpfr_init_set_str(r8102094, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r8102095);
        mpfr_init(r8102096);
        mpfr_init(r8102097);
        mpfr_init(r8102098);
        mpfr_init_set_str(r8102099, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r8102100);
        mpfr_init(r8102101);
        mpfr_init(r8102102);
        mpfr_init(r8102103);
        mpfr_init_set_str(r8102104, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r8102105);
        mpfr_init(r8102106);
        mpfr_init(r8102107);
        mpfr_init(r8102108);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8102080, x, MPFR_RNDN);
        mpfr_mul(r8102081, r8102080, r8102080, MPFR_RNDN);
        mpfr_mul(r8102082, r8102079, r8102081, MPFR_RNDN);
        mpfr_add(r8102083, r8102078, r8102082, MPFR_RNDN);
        ;
        mpfr_mul(r8102085, r8102081, r8102080, MPFR_RNDN);
        mpfr_mul(r8102086, r8102085, r8102080, MPFR_RNDN);
        mpfr_mul(r8102087, r8102084, r8102086, MPFR_RNDN);
        mpfr_add(r8102088, r8102083, r8102087, MPFR_RNDN);
        ;
        mpfr_mul(r8102090, r8102086, r8102080, MPFR_RNDN);
        mpfr_mul(r8102091, r8102090, r8102080, MPFR_RNDN);
        mpfr_mul(r8102092, r8102089, r8102091, MPFR_RNDN);
        mpfr_add(r8102093, r8102088, r8102092, MPFR_RNDN);
        ;
        mpfr_mul(r8102095, r8102091, r8102080, MPFR_RNDN);
        mpfr_mul(r8102096, r8102095, r8102080, MPFR_RNDN);
        mpfr_mul(r8102097, r8102094, r8102096, MPFR_RNDN);
        mpfr_add(r8102098, r8102093, r8102097, MPFR_RNDN);
        ;
        mpfr_mul(r8102100, r8102096, r8102080, MPFR_RNDN);
        mpfr_mul(r8102101, r8102100, r8102080, MPFR_RNDN);
        mpfr_mul(r8102102, r8102099, r8102101, MPFR_RNDN);
        mpfr_add(r8102103, r8102098, r8102102, MPFR_RNDN);
        ;
        mpfr_mul(r8102105, r8102101, r8102080, MPFR_RNDN);
        mpfr_mul(r8102106, r8102105, r8102080, MPFR_RNDN);
        mpfr_mul(r8102107, r8102104, r8102106, MPFR_RNDN);
        mpfr_add(r8102108, r8102103, r8102107, MPFR_RNDN);
        return mpfr_get_d(r8102108, MPFR_RNDN);
}

static mpfr_t r8102109, r8102110, r8102111, r8102112, r8102113, r8102114, r8102115, r8102116, r8102117, r8102118, r8102119, r8102120, r8102121, r8102122, r8102123, r8102124, r8102125, r8102126, r8102127, r8102128, r8102129, r8102130, r8102131, r8102132, r8102133, r8102134, r8102135, r8102136, r8102137, r8102138, r8102139, r8102140;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8102109, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r8102110);
        mpfr_init(r8102111);
        mpfr_init(r8102112);
        mpfr_init(r8102113);
        mpfr_init(r8102114);
        mpfr_init_set_str(r8102115, "3", 10, MPFR_RNDN);
        mpfr_init(r8102116);
        mpfr_init(r8102117);
        mpfr_init(r8102118);
        mpfr_init_set_str(r8102119, "-997.089844", 10, MPFR_RNDN);
        mpfr_init_set_str(r8102120, "6", 10, MPFR_RNDN);
        mpfr_init(r8102121);
        mpfr_init(r8102122);
        mpfr_init(r8102123);
        mpfr_init_set_str(r8102124, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r8102125);
        mpfr_init_set_str(r8102126, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r8102127);
        mpfr_init(r8102128);
        mpfr_init_set_str(r8102129, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r8102130);
        mpfr_init(r8102131);
        mpfr_init(r8102132);
        mpfr_init(r8102133);
        mpfr_init_set_str(r8102134, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r8102135);
        mpfr_init_set_str(r8102136, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r8102137);
        mpfr_init(r8102138);
        mpfr_init(r8102139);
        mpfr_init(r8102140);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8102110, x, MPFR_RNDN);
        mpfr_mul(r8102111, r8102109, r8102110, MPFR_RNDN);
        mpfr_mul(r8102112, r8102111, r8102110, MPFR_RNDN);
        mpfr_mul(r8102113, r8102110, r8102110, MPFR_RNDN);
        mpfr_mul(r8102114, r8102113, r8102113, MPFR_RNDN);
        ;
        mpfr_pow(r8102116, r8102113, r8102115, MPFR_RNDN);
        mpfr_mul(r8102117, r8102114, r8102116, MPFR_RNDN);
        mpfr_mul(r8102118, r8102112, r8102117, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8102121, r8102110, r8102120, MPFR_RNDN);
        mpfr_mul(r8102122, r8102119, r8102121, MPFR_RNDN);
        mpfr_add(r8102123, r8102118, r8102122, MPFR_RNDN);
        ;
        mpfr_pow(r8102125, r8102110, r8102115, MPFR_RNDN);
        ;
        mpfr_mul(r8102127, r8102110, r8102126, MPFR_RNDN);
        mpfr_mul(r8102128, r8102125, r8102127, MPFR_RNDN);
        ;
        mpfr_mul(r8102130, r8102113, r8102129, MPFR_RNDN);
        mpfr_add(r8102131, r8102128, r8102130, MPFR_RNDN);
        mpfr_add(r8102132, r8102124, r8102131, MPFR_RNDN);
        mpfr_mul(r8102133, r8102114, r8102114, MPFR_RNDN);
        ;
        mpfr_mul(r8102135, r8102113, r8102134, MPFR_RNDN);
        ;
        mpfr_add(r8102137, r8102135, r8102136, MPFR_RNDN);
        mpfr_mul(r8102138, r8102133, r8102137, MPFR_RNDN);
        mpfr_add(r8102139, r8102132, r8102138, MPFR_RNDN);
        mpfr_add(r8102140, r8102123, r8102139, MPFR_RNDN);
        return mpfr_get_d(r8102140, MPFR_RNDN);
}

static mpfr_t r8102141, r8102142, r8102143, r8102144, r8102145, r8102146, r8102147, r8102148, r8102149, r8102150, r8102151, r8102152, r8102153, r8102154, r8102155, r8102156, r8102157, r8102158, r8102159, r8102160, r8102161, r8102162, r8102163, r8102164, r8102165, r8102166, r8102167, r8102168, r8102169, r8102170, r8102171, r8102172;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8102141, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r8102142);
        mpfr_init(r8102143);
        mpfr_init(r8102144);
        mpfr_init(r8102145);
        mpfr_init(r8102146);
        mpfr_init_set_str(r8102147, "3", 10, MPFR_RNDN);
        mpfr_init(r8102148);
        mpfr_init(r8102149);
        mpfr_init(r8102150);
        mpfr_init_set_str(r8102151, "-997.089844", 10, MPFR_RNDN);
        mpfr_init_set_str(r8102152, "6", 10, MPFR_RNDN);
        mpfr_init(r8102153);
        mpfr_init(r8102154);
        mpfr_init(r8102155);
        mpfr_init_set_str(r8102156, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r8102157);
        mpfr_init_set_str(r8102158, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r8102159);
        mpfr_init(r8102160);
        mpfr_init_set_str(r8102161, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r8102162);
        mpfr_init(r8102163);
        mpfr_init(r8102164);
        mpfr_init(r8102165);
        mpfr_init_set_str(r8102166, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r8102167);
        mpfr_init_set_str(r8102168, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r8102169);
        mpfr_init(r8102170);
        mpfr_init(r8102171);
        mpfr_init(r8102172);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8102142, x, MPFR_RNDN);
        mpfr_mul(r8102143, r8102141, r8102142, MPFR_RNDN);
        mpfr_mul(r8102144, r8102143, r8102142, MPFR_RNDN);
        mpfr_mul(r8102145, r8102142, r8102142, MPFR_RNDN);
        mpfr_mul(r8102146, r8102145, r8102145, MPFR_RNDN);
        ;
        mpfr_pow(r8102148, r8102145, r8102147, MPFR_RNDN);
        mpfr_mul(r8102149, r8102146, r8102148, MPFR_RNDN);
        mpfr_mul(r8102150, r8102144, r8102149, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8102153, r8102142, r8102152, MPFR_RNDN);
        mpfr_mul(r8102154, r8102151, r8102153, MPFR_RNDN);
        mpfr_add(r8102155, r8102150, r8102154, MPFR_RNDN);
        ;
        mpfr_pow(r8102157, r8102142, r8102147, MPFR_RNDN);
        ;
        mpfr_mul(r8102159, r8102142, r8102158, MPFR_RNDN);
        mpfr_mul(r8102160, r8102157, r8102159, MPFR_RNDN);
        ;
        mpfr_mul(r8102162, r8102145, r8102161, MPFR_RNDN);
        mpfr_add(r8102163, r8102160, r8102162, MPFR_RNDN);
        mpfr_add(r8102164, r8102156, r8102163, MPFR_RNDN);
        mpfr_mul(r8102165, r8102146, r8102146, MPFR_RNDN);
        ;
        mpfr_mul(r8102167, r8102145, r8102166, MPFR_RNDN);
        ;
        mpfr_add(r8102169, r8102167, r8102168, MPFR_RNDN);
        mpfr_mul(r8102170, r8102165, r8102169, MPFR_RNDN);
        mpfr_add(r8102171, r8102164, r8102170, MPFR_RNDN);
        mpfr_add(r8102172, r8102155, r8102171, MPFR_RNDN);
        return mpfr_get_d(r8102172, MPFR_RNDN);
}

