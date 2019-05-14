#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r5021030 = 1.875;
        float r5021031 = x;
        float r5021032 = r5021030 * r5021031;
        float r5021033 = -8.75;
        float r5021034 = r5021031 * r5021031;
        float r5021035 = r5021034 * r5021031;
        float r5021036 = r5021033 * r5021035;
        float r5021037 = r5021032 + r5021036;
        float r5021038 = 7.875;
        float r5021039 = r5021035 * r5021031;
        float r5021040 = r5021039 * r5021031;
        float r5021041 = r5021038 * r5021040;
        float r5021042 = r5021037 + r5021041;
        return r5021042;
}

double f_id(double x) {
        double r5021043 = 1.875;
        double r5021044 = x;
        double r5021045 = r5021043 * r5021044;
        double r5021046 = -8.75;
        double r5021047 = r5021044 * r5021044;
        double r5021048 = r5021047 * r5021044;
        double r5021049 = r5021046 * r5021048;
        double r5021050 = r5021045 + r5021049;
        double r5021051 = 7.875;
        double r5021052 = r5021048 * r5021044;
        double r5021053 = r5021052 * r5021044;
        double r5021054 = r5021051 * r5021053;
        double r5021055 = r5021050 + r5021054;
        return r5021055;
}


double f_of(float x) {
        float r5021056 = 1.875;
        float r5021057 = x;
        float r5021058 = r5021056 * r5021057;
        float r5021059 = -8.75;
        float r5021060 = r5021057 * r5021057;
        float r5021061 = r5021060 * r5021057;
        float r5021062 = r5021059 * r5021061;
        float r5021063 = r5021058 + r5021062;
        float r5021064 = 3;
        float r5021065 = pow(r5021057, r5021064);
        float r5021066 = 7.875;
        float r5021067 = r5021066 * r5021057;
        float r5021068 = r5021065 * r5021067;
        float r5021069 = sqrt(r5021068);
        float r5021070 = r5021069 * r5021069;
        float r5021071 = r5021070 * r5021057;
        float r5021072 = r5021063 + r5021071;
        return r5021072;
}

double f_od(double x) {
        double r5021073 = 1.875;
        double r5021074 = x;
        double r5021075 = r5021073 * r5021074;
        double r5021076 = -8.75;
        double r5021077 = r5021074 * r5021074;
        double r5021078 = r5021077 * r5021074;
        double r5021079 = r5021076 * r5021078;
        double r5021080 = r5021075 + r5021079;
        double r5021081 = 3;
        double r5021082 = pow(r5021074, r5021081);
        double r5021083 = 7.875;
        double r5021084 = r5021083 * r5021074;
        double r5021085 = r5021082 * r5021084;
        double r5021086 = sqrt(r5021085);
        double r5021087 = r5021086 * r5021086;
        double r5021088 = r5021087 * r5021074;
        double r5021089 = r5021080 + r5021088;
        return r5021089;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5021090, r5021091, r5021092, r5021093, r5021094, r5021095, r5021096, r5021097, r5021098, r5021099, r5021100, r5021101, r5021102;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5021090, "1.875", 10, MPFR_RNDN);
        mpfr_init(r5021091);
        mpfr_init(r5021092);
        mpfr_init_set_str(r5021093, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r5021094);
        mpfr_init(r5021095);
        mpfr_init(r5021096);
        mpfr_init(r5021097);
        mpfr_init_set_str(r5021098, "7.875", 10, MPFR_RNDN);
        mpfr_init(r5021099);
        mpfr_init(r5021100);
        mpfr_init(r5021101);
        mpfr_init(r5021102);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5021091, x, MPFR_RNDN);
        mpfr_mul(r5021092, r5021090, r5021091, MPFR_RNDN);
        ;
        mpfr_mul(r5021094, r5021091, r5021091, MPFR_RNDN);
        mpfr_mul(r5021095, r5021094, r5021091, MPFR_RNDN);
        mpfr_mul(r5021096, r5021093, r5021095, MPFR_RNDN);
        mpfr_add(r5021097, r5021092, r5021096, MPFR_RNDN);
        ;
        mpfr_mul(r5021099, r5021095, r5021091, MPFR_RNDN);
        mpfr_mul(r5021100, r5021099, r5021091, MPFR_RNDN);
        mpfr_mul(r5021101, r5021098, r5021100, MPFR_RNDN);
        mpfr_add(r5021102, r5021097, r5021101, MPFR_RNDN);
        return mpfr_get_d(r5021102, MPFR_RNDN);
}

static mpfr_t r5021103, r5021104, r5021105, r5021106, r5021107, r5021108, r5021109, r5021110, r5021111, r5021112, r5021113, r5021114, r5021115, r5021116, r5021117, r5021118, r5021119;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5021103, "1.875", 10, MPFR_RNDN);
        mpfr_init(r5021104);
        mpfr_init(r5021105);
        mpfr_init_set_str(r5021106, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r5021107);
        mpfr_init(r5021108);
        mpfr_init(r5021109);
        mpfr_init(r5021110);
        mpfr_init_set_str(r5021111, "3", 10, MPFR_RNDN);
        mpfr_init(r5021112);
        mpfr_init_set_str(r5021113, "7.875", 10, MPFR_RNDN);
        mpfr_init(r5021114);
        mpfr_init(r5021115);
        mpfr_init(r5021116);
        mpfr_init(r5021117);
        mpfr_init(r5021118);
        mpfr_init(r5021119);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5021104, x, MPFR_RNDN);
        mpfr_mul(r5021105, r5021103, r5021104, MPFR_RNDN);
        ;
        mpfr_mul(r5021107, r5021104, r5021104, MPFR_RNDN);
        mpfr_mul(r5021108, r5021107, r5021104, MPFR_RNDN);
        mpfr_mul(r5021109, r5021106, r5021108, MPFR_RNDN);
        mpfr_add(r5021110, r5021105, r5021109, MPFR_RNDN);
        ;
        mpfr_pow(r5021112, r5021104, r5021111, MPFR_RNDN);
        ;
        mpfr_mul(r5021114, r5021113, r5021104, MPFR_RNDN);
        mpfr_mul(r5021115, r5021112, r5021114, MPFR_RNDN);
        mpfr_sqrt(r5021116, r5021115, MPFR_RNDN);
        mpfr_mul(r5021117, r5021116, r5021116, MPFR_RNDN);
        mpfr_mul(r5021118, r5021117, r5021104, MPFR_RNDN);
        mpfr_add(r5021119, r5021110, r5021118, MPFR_RNDN);
        return mpfr_get_d(r5021119, MPFR_RNDN);
}

static mpfr_t r5021120, r5021121, r5021122, r5021123, r5021124, r5021125, r5021126, r5021127, r5021128, r5021129, r5021130, r5021131, r5021132, r5021133, r5021134, r5021135, r5021136;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5021120, "1.875", 10, MPFR_RNDN);
        mpfr_init(r5021121);
        mpfr_init(r5021122);
        mpfr_init_set_str(r5021123, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r5021124);
        mpfr_init(r5021125);
        mpfr_init(r5021126);
        mpfr_init(r5021127);
        mpfr_init_set_str(r5021128, "3", 10, MPFR_RNDN);
        mpfr_init(r5021129);
        mpfr_init_set_str(r5021130, "7.875", 10, MPFR_RNDN);
        mpfr_init(r5021131);
        mpfr_init(r5021132);
        mpfr_init(r5021133);
        mpfr_init(r5021134);
        mpfr_init(r5021135);
        mpfr_init(r5021136);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5021121, x, MPFR_RNDN);
        mpfr_mul(r5021122, r5021120, r5021121, MPFR_RNDN);
        ;
        mpfr_mul(r5021124, r5021121, r5021121, MPFR_RNDN);
        mpfr_mul(r5021125, r5021124, r5021121, MPFR_RNDN);
        mpfr_mul(r5021126, r5021123, r5021125, MPFR_RNDN);
        mpfr_add(r5021127, r5021122, r5021126, MPFR_RNDN);
        ;
        mpfr_pow(r5021129, r5021121, r5021128, MPFR_RNDN);
        ;
        mpfr_mul(r5021131, r5021130, r5021121, MPFR_RNDN);
        mpfr_mul(r5021132, r5021129, r5021131, MPFR_RNDN);
        mpfr_sqrt(r5021133, r5021132, MPFR_RNDN);
        mpfr_mul(r5021134, r5021133, r5021133, MPFR_RNDN);
        mpfr_mul(r5021135, r5021134, r5021121, MPFR_RNDN);
        mpfr_add(r5021136, r5021127, r5021135, MPFR_RNDN);
        return mpfr_get_d(r5021136, MPFR_RNDN);
}

