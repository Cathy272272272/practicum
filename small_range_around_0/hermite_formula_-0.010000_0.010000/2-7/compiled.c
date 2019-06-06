#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r4112043 = -1680.0;
        float r4112044 = x;
        float r4112045 = r4112043 * r4112044;
        float r4112046 = 3360.0;
        float r4112047 = r4112044 * r4112044;
        float r4112048 = r4112047 * r4112044;
        float r4112049 = r4112046 * r4112048;
        float r4112050 = r4112045 + r4112049;
        float r4112051 = -1344.0;
        float r4112052 = r4112048 * r4112044;
        float r4112053 = r4112052 * r4112044;
        float r4112054 = r4112051 * r4112053;
        float r4112055 = r4112050 + r4112054;
        float r4112056 = 128.0;
        float r4112057 = r4112053 * r4112044;
        float r4112058 = r4112057 * r4112044;
        float r4112059 = r4112056 * r4112058;
        float r4112060 = r4112055 + r4112059;
        return r4112060;
}

double f_id(double x) {
        double r4112061 = -1680.0;
        double r4112062 = x;
        double r4112063 = r4112061 * r4112062;
        double r4112064 = 3360.0;
        double r4112065 = r4112062 * r4112062;
        double r4112066 = r4112065 * r4112062;
        double r4112067 = r4112064 * r4112066;
        double r4112068 = r4112063 + r4112067;
        double r4112069 = -1344.0;
        double r4112070 = r4112066 * r4112062;
        double r4112071 = r4112070 * r4112062;
        double r4112072 = r4112069 * r4112071;
        double r4112073 = r4112068 + r4112072;
        double r4112074 = 128.0;
        double r4112075 = r4112071 * r4112062;
        double r4112076 = r4112075 * r4112062;
        double r4112077 = r4112074 * r4112076;
        double r4112078 = r4112073 + r4112077;
        return r4112078;
}


double f_of(float x) {
        float r4112079 = -1680.0;
        float r4112080 = x;
        float r4112081 = r4112079 * r4112080;
        float r4112082 = 3360.0;
        float r4112083 = r4112080 * r4112080;
        float r4112084 = r4112083 * r4112080;
        float r4112085 = r4112082 * r4112084;
        float r4112086 = r4112081 + r4112085;
        float r4112087 = -1344.0;
        float r4112088 = r4112084 * r4112080;
        float r4112089 = r4112088 * r4112080;
        float r4112090 = r4112087 * r4112089;
        float r4112091 = r4112086 + r4112090;
        float r4112092 = 128.0;
        float r4112093 = r4112089 * r4112080;
        float r4112094 = r4112093 * r4112080;
        float r4112095 = r4112092 * r4112094;
        float r4112096 = r4112091 + r4112095;
        return r4112096;
}

double f_od(double x) {
        double r4112097 = -1680.0;
        double r4112098 = x;
        double r4112099 = r4112097 * r4112098;
        double r4112100 = 3360.0;
        double r4112101 = r4112098 * r4112098;
        double r4112102 = r4112101 * r4112098;
        double r4112103 = r4112100 * r4112102;
        double r4112104 = r4112099 + r4112103;
        double r4112105 = -1344.0;
        double r4112106 = r4112102 * r4112098;
        double r4112107 = r4112106 * r4112098;
        double r4112108 = r4112105 * r4112107;
        double r4112109 = r4112104 + r4112108;
        double r4112110 = 128.0;
        double r4112111 = r4112107 * r4112098;
        double r4112112 = r4112111 * r4112098;
        double r4112113 = r4112110 * r4112112;
        double r4112114 = r4112109 + r4112113;
        return r4112114;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4112115, r4112116, r4112117, r4112118, r4112119, r4112120, r4112121, r4112122, r4112123, r4112124, r4112125, r4112126, r4112127, r4112128, r4112129, r4112130, r4112131, r4112132;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112115, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r4112116);
        mpfr_init(r4112117);
        mpfr_init_set_str(r4112118, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r4112119);
        mpfr_init(r4112120);
        mpfr_init(r4112121);
        mpfr_init(r4112122);
        mpfr_init_set_str(r4112123, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r4112124);
        mpfr_init(r4112125);
        mpfr_init(r4112126);
        mpfr_init(r4112127);
        mpfr_init_set_str(r4112128, "128.0", 10, MPFR_RNDN);
        mpfr_init(r4112129);
        mpfr_init(r4112130);
        mpfr_init(r4112131);
        mpfr_init(r4112132);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4112116, x, MPFR_RNDN);
        mpfr_mul(r4112117, r4112115, r4112116, MPFR_RNDN);
        ;
        mpfr_mul(r4112119, r4112116, r4112116, MPFR_RNDN);
        mpfr_mul(r4112120, r4112119, r4112116, MPFR_RNDN);
        mpfr_mul(r4112121, r4112118, r4112120, MPFR_RNDN);
        mpfr_add(r4112122, r4112117, r4112121, MPFR_RNDN);
        ;
        mpfr_mul(r4112124, r4112120, r4112116, MPFR_RNDN);
        mpfr_mul(r4112125, r4112124, r4112116, MPFR_RNDN);
        mpfr_mul(r4112126, r4112123, r4112125, MPFR_RNDN);
        mpfr_add(r4112127, r4112122, r4112126, MPFR_RNDN);
        ;
        mpfr_mul(r4112129, r4112125, r4112116, MPFR_RNDN);
        mpfr_mul(r4112130, r4112129, r4112116, MPFR_RNDN);
        mpfr_mul(r4112131, r4112128, r4112130, MPFR_RNDN);
        mpfr_add(r4112132, r4112127, r4112131, MPFR_RNDN);
        return mpfr_get_d(r4112132, MPFR_RNDN);
}

static mpfr_t r4112133, r4112134, r4112135, r4112136, r4112137, r4112138, r4112139, r4112140, r4112141, r4112142, r4112143, r4112144, r4112145, r4112146, r4112147, r4112148, r4112149, r4112150;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112133, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r4112134);
        mpfr_init(r4112135);
        mpfr_init_set_str(r4112136, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r4112137);
        mpfr_init(r4112138);
        mpfr_init(r4112139);
        mpfr_init(r4112140);
        mpfr_init_set_str(r4112141, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r4112142);
        mpfr_init(r4112143);
        mpfr_init(r4112144);
        mpfr_init(r4112145);
        mpfr_init_set_str(r4112146, "128.0", 10, MPFR_RNDN);
        mpfr_init(r4112147);
        mpfr_init(r4112148);
        mpfr_init(r4112149);
        mpfr_init(r4112150);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4112134, x, MPFR_RNDN);
        mpfr_mul(r4112135, r4112133, r4112134, MPFR_RNDN);
        ;
        mpfr_mul(r4112137, r4112134, r4112134, MPFR_RNDN);
        mpfr_mul(r4112138, r4112137, r4112134, MPFR_RNDN);
        mpfr_mul(r4112139, r4112136, r4112138, MPFR_RNDN);
        mpfr_add(r4112140, r4112135, r4112139, MPFR_RNDN);
        ;
        mpfr_mul(r4112142, r4112138, r4112134, MPFR_RNDN);
        mpfr_mul(r4112143, r4112142, r4112134, MPFR_RNDN);
        mpfr_mul(r4112144, r4112141, r4112143, MPFR_RNDN);
        mpfr_add(r4112145, r4112140, r4112144, MPFR_RNDN);
        ;
        mpfr_mul(r4112147, r4112143, r4112134, MPFR_RNDN);
        mpfr_mul(r4112148, r4112147, r4112134, MPFR_RNDN);
        mpfr_mul(r4112149, r4112146, r4112148, MPFR_RNDN);
        mpfr_add(r4112150, r4112145, r4112149, MPFR_RNDN);
        return mpfr_get_d(r4112150, MPFR_RNDN);
}

static mpfr_t r4112151, r4112152, r4112153, r4112154, r4112155, r4112156, r4112157, r4112158, r4112159, r4112160, r4112161, r4112162, r4112163, r4112164, r4112165, r4112166, r4112167, r4112168;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112151, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r4112152);
        mpfr_init(r4112153);
        mpfr_init_set_str(r4112154, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r4112155);
        mpfr_init(r4112156);
        mpfr_init(r4112157);
        mpfr_init(r4112158);
        mpfr_init_set_str(r4112159, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r4112160);
        mpfr_init(r4112161);
        mpfr_init(r4112162);
        mpfr_init(r4112163);
        mpfr_init_set_str(r4112164, "128.0", 10, MPFR_RNDN);
        mpfr_init(r4112165);
        mpfr_init(r4112166);
        mpfr_init(r4112167);
        mpfr_init(r4112168);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4112152, x, MPFR_RNDN);
        mpfr_mul(r4112153, r4112151, r4112152, MPFR_RNDN);
        ;
        mpfr_mul(r4112155, r4112152, r4112152, MPFR_RNDN);
        mpfr_mul(r4112156, r4112155, r4112152, MPFR_RNDN);
        mpfr_mul(r4112157, r4112154, r4112156, MPFR_RNDN);
        mpfr_add(r4112158, r4112153, r4112157, MPFR_RNDN);
        ;
        mpfr_mul(r4112160, r4112156, r4112152, MPFR_RNDN);
        mpfr_mul(r4112161, r4112160, r4112152, MPFR_RNDN);
        mpfr_mul(r4112162, r4112159, r4112161, MPFR_RNDN);
        mpfr_add(r4112163, r4112158, r4112162, MPFR_RNDN);
        ;
        mpfr_mul(r4112165, r4112161, r4112152, MPFR_RNDN);
        mpfr_mul(r4112166, r4112165, r4112152, MPFR_RNDN);
        mpfr_mul(r4112167, r4112164, r4112166, MPFR_RNDN);
        mpfr_add(r4112168, r4112163, r4112167, MPFR_RNDN);
        return mpfr_get_d(r4112168, MPFR_RNDN);
}

