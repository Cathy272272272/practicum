#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r8596035 = 1.0;
        float r8596036 = -4.0;
        float r8596037 = x;
        float r8596038 = r8596036 * r8596037;
        float r8596039 = r8596035 + r8596038;
        float r8596040 = 3.0;
        float r8596041 = r8596037 * r8596037;
        float r8596042 = r8596040 * r8596041;
        float r8596043 = r8596039 + r8596042;
        float r8596044 = -0.666667;
        float r8596045 = r8596041 * r8596037;
        float r8596046 = r8596044 * r8596045;
        float r8596047 = r8596043 + r8596046;
        float r8596048 = 0.041667;
        float r8596049 = r8596045 * r8596037;
        float r8596050 = r8596048 * r8596049;
        float r8596051 = r8596047 + r8596050;
        return r8596051;
}

double f_id(double x) {
        double r8596052 = 1.0;
        double r8596053 = -4.0;
        double r8596054 = x;
        double r8596055 = r8596053 * r8596054;
        double r8596056 = r8596052 + r8596055;
        double r8596057 = 3.0;
        double r8596058 = r8596054 * r8596054;
        double r8596059 = r8596057 * r8596058;
        double r8596060 = r8596056 + r8596059;
        double r8596061 = -0.666667;
        double r8596062 = r8596058 * r8596054;
        double r8596063 = r8596061 * r8596062;
        double r8596064 = r8596060 + r8596063;
        double r8596065 = 0.041667;
        double r8596066 = r8596062 * r8596054;
        double r8596067 = r8596065 * r8596066;
        double r8596068 = r8596064 + r8596067;
        return r8596068;
}


double f_of(float x) {
        float r8596069 = 1.0;
        float r8596070 = -4.0;
        float r8596071 = x;
        float r8596072 = r8596070 * r8596071;
        float r8596073 = r8596069 + r8596072;
        float r8596074 = 3.0;
        float r8596075 = r8596071 * r8596071;
        float r8596076 = r8596074 * r8596075;
        float r8596077 = r8596073 + r8596076;
        float r8596078 = -0.666667;
        float r8596079 = r8596075 * r8596071;
        float r8596080 = r8596078 * r8596079;
        float r8596081 = r8596077 + r8596080;
        float r8596082 = 0.041667;
        float r8596083 = r8596079 * r8596071;
        float r8596084 = r8596082 * r8596083;
        float r8596085 = r8596081 + r8596084;
        return r8596085;
}

double f_od(double x) {
        double r8596086 = 1.0;
        double r8596087 = -4.0;
        double r8596088 = x;
        double r8596089 = r8596087 * r8596088;
        double r8596090 = r8596086 + r8596089;
        double r8596091 = 3.0;
        double r8596092 = r8596088 * r8596088;
        double r8596093 = r8596091 * r8596092;
        double r8596094 = r8596090 + r8596093;
        double r8596095 = -0.666667;
        double r8596096 = r8596092 * r8596088;
        double r8596097 = r8596095 * r8596096;
        double r8596098 = r8596094 + r8596097;
        double r8596099 = 0.041667;
        double r8596100 = r8596096 * r8596088;
        double r8596101 = r8596099 * r8596100;
        double r8596102 = r8596098 + r8596101;
        return r8596102;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8596103, r8596104, r8596105, r8596106, r8596107, r8596108, r8596109, r8596110, r8596111, r8596112, r8596113, r8596114, r8596115, r8596116, r8596117, r8596118, r8596119;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8596103, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596104, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r8596105);
        mpfr_init(r8596106);
        mpfr_init(r8596107);
        mpfr_init_set_str(r8596108, "3.0", 10, MPFR_RNDN);
        mpfr_init(r8596109);
        mpfr_init(r8596110);
        mpfr_init(r8596111);
        mpfr_init_set_str(r8596112, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r8596113);
        mpfr_init(r8596114);
        mpfr_init(r8596115);
        mpfr_init_set_str(r8596116, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r8596117);
        mpfr_init(r8596118);
        mpfr_init(r8596119);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8596105, x, MPFR_RNDN);
        mpfr_mul(r8596106, r8596104, r8596105, MPFR_RNDN);
        mpfr_add(r8596107, r8596103, r8596106, MPFR_RNDN);
        ;
        mpfr_mul(r8596109, r8596105, r8596105, MPFR_RNDN);
        mpfr_mul(r8596110, r8596108, r8596109, MPFR_RNDN);
        mpfr_add(r8596111, r8596107, r8596110, MPFR_RNDN);
        ;
        mpfr_mul(r8596113, r8596109, r8596105, MPFR_RNDN);
        mpfr_mul(r8596114, r8596112, r8596113, MPFR_RNDN);
        mpfr_add(r8596115, r8596111, r8596114, MPFR_RNDN);
        ;
        mpfr_mul(r8596117, r8596113, r8596105, MPFR_RNDN);
        mpfr_mul(r8596118, r8596116, r8596117, MPFR_RNDN);
        mpfr_add(r8596119, r8596115, r8596118, MPFR_RNDN);
        return mpfr_get_d(r8596119, MPFR_RNDN);
}

static mpfr_t r8596120, r8596121, r8596122, r8596123, r8596124, r8596125, r8596126, r8596127, r8596128, r8596129, r8596130, r8596131, r8596132, r8596133, r8596134, r8596135, r8596136;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8596120, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596121, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r8596122);
        mpfr_init(r8596123);
        mpfr_init(r8596124);
        mpfr_init_set_str(r8596125, "3.0", 10, MPFR_RNDN);
        mpfr_init(r8596126);
        mpfr_init(r8596127);
        mpfr_init(r8596128);
        mpfr_init_set_str(r8596129, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r8596130);
        mpfr_init(r8596131);
        mpfr_init(r8596132);
        mpfr_init_set_str(r8596133, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r8596134);
        mpfr_init(r8596135);
        mpfr_init(r8596136);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8596122, x, MPFR_RNDN);
        mpfr_mul(r8596123, r8596121, r8596122, MPFR_RNDN);
        mpfr_add(r8596124, r8596120, r8596123, MPFR_RNDN);
        ;
        mpfr_mul(r8596126, r8596122, r8596122, MPFR_RNDN);
        mpfr_mul(r8596127, r8596125, r8596126, MPFR_RNDN);
        mpfr_add(r8596128, r8596124, r8596127, MPFR_RNDN);
        ;
        mpfr_mul(r8596130, r8596126, r8596122, MPFR_RNDN);
        mpfr_mul(r8596131, r8596129, r8596130, MPFR_RNDN);
        mpfr_add(r8596132, r8596128, r8596131, MPFR_RNDN);
        ;
        mpfr_mul(r8596134, r8596130, r8596122, MPFR_RNDN);
        mpfr_mul(r8596135, r8596133, r8596134, MPFR_RNDN);
        mpfr_add(r8596136, r8596132, r8596135, MPFR_RNDN);
        return mpfr_get_d(r8596136, MPFR_RNDN);
}

static mpfr_t r8596137, r8596138, r8596139, r8596140, r8596141, r8596142, r8596143, r8596144, r8596145, r8596146, r8596147, r8596148, r8596149, r8596150, r8596151, r8596152, r8596153;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8596137, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596138, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r8596139);
        mpfr_init(r8596140);
        mpfr_init(r8596141);
        mpfr_init_set_str(r8596142, "3.0", 10, MPFR_RNDN);
        mpfr_init(r8596143);
        mpfr_init(r8596144);
        mpfr_init(r8596145);
        mpfr_init_set_str(r8596146, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r8596147);
        mpfr_init(r8596148);
        mpfr_init(r8596149);
        mpfr_init_set_str(r8596150, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r8596151);
        mpfr_init(r8596152);
        mpfr_init(r8596153);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8596139, x, MPFR_RNDN);
        mpfr_mul(r8596140, r8596138, r8596139, MPFR_RNDN);
        mpfr_add(r8596141, r8596137, r8596140, MPFR_RNDN);
        ;
        mpfr_mul(r8596143, r8596139, r8596139, MPFR_RNDN);
        mpfr_mul(r8596144, r8596142, r8596143, MPFR_RNDN);
        mpfr_add(r8596145, r8596141, r8596144, MPFR_RNDN);
        ;
        mpfr_mul(r8596147, r8596143, r8596139, MPFR_RNDN);
        mpfr_mul(r8596148, r8596146, r8596147, MPFR_RNDN);
        mpfr_add(r8596149, r8596145, r8596148, MPFR_RNDN);
        ;
        mpfr_mul(r8596151, r8596147, r8596139, MPFR_RNDN);
        mpfr_mul(r8596152, r8596150, r8596151, MPFR_RNDN);
        mpfr_add(r8596153, r8596149, r8596152, MPFR_RNDN);
        return mpfr_get_d(r8596153, MPFR_RNDN);
}

