#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r9829079 = 12.0;
        float r9829080 = -48.0;
        float r9829081 = x;
        float r9829082 = r9829081 * r9829081;
        float r9829083 = r9829080 * r9829082;
        float r9829084 = r9829079 + r9829083;
        float r9829085 = 16.0;
        float r9829086 = r9829082 * r9829081;
        float r9829087 = r9829086 * r9829081;
        float r9829088 = r9829085 * r9829087;
        float r9829089 = r9829084 + r9829088;
        return r9829089;
}

double f_id(double x) {
        double r9829090 = 12.0;
        double r9829091 = -48.0;
        double r9829092 = x;
        double r9829093 = r9829092 * r9829092;
        double r9829094 = r9829091 * r9829093;
        double r9829095 = r9829090 + r9829094;
        double r9829096 = 16.0;
        double r9829097 = r9829093 * r9829092;
        double r9829098 = r9829097 * r9829092;
        double r9829099 = r9829096 * r9829098;
        double r9829100 = r9829095 + r9829099;
        return r9829100;
}


double f_of(float x) {
        float r9829101 = 12.0;
        float r9829102 = x;
        float r9829103 = 16.0;
        float r9829104 = r9829102 * r9829103;
        float r9829105 = 3;
        float r9829106 = pow(r9829102, r9829105);
        float r9829107 = r9829104 * r9829106;
        float r9829108 = -48.0;
        float r9829109 = r9829102 * r9829108;
        float r9829110 = r9829109 * r9829102;
        float r9829111 = r9829107 + r9829110;
        float r9829112 = r9829101 + r9829111;
        return r9829112;
}

double f_od(double x) {
        double r9829113 = 12.0;
        double r9829114 = x;
        double r9829115 = 16.0;
        double r9829116 = r9829114 * r9829115;
        double r9829117 = 3;
        double r9829118 = pow(r9829114, r9829117);
        double r9829119 = r9829116 * r9829118;
        double r9829120 = -48.0;
        double r9829121 = r9829114 * r9829120;
        double r9829122 = r9829121 * r9829114;
        double r9829123 = r9829119 + r9829122;
        double r9829124 = r9829113 + r9829123;
        return r9829124;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9829125, r9829126, r9829127, r9829128, r9829129, r9829130, r9829131, r9829132, r9829133, r9829134, r9829135;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9829125, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829126, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9829127);
        mpfr_init(r9829128);
        mpfr_init(r9829129);
        mpfr_init(r9829130);
        mpfr_init_set_str(r9829131, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9829132);
        mpfr_init(r9829133);
        mpfr_init(r9829134);
        mpfr_init(r9829135);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9829127, x, MPFR_RNDN);
        mpfr_mul(r9829128, r9829127, r9829127, MPFR_RNDN);
        mpfr_mul(r9829129, r9829126, r9829128, MPFR_RNDN);
        mpfr_add(r9829130, r9829125, r9829129, MPFR_RNDN);
        ;
        mpfr_mul(r9829132, r9829128, r9829127, MPFR_RNDN);
        mpfr_mul(r9829133, r9829132, r9829127, MPFR_RNDN);
        mpfr_mul(r9829134, r9829131, r9829133, MPFR_RNDN);
        mpfr_add(r9829135, r9829130, r9829134, MPFR_RNDN);
        return mpfr_get_d(r9829135, MPFR_RNDN);
}

static mpfr_t r9829136, r9829137, r9829138, r9829139, r9829140, r9829141, r9829142, r9829143, r9829144, r9829145, r9829146, r9829147;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9829136, "12.0", 10, MPFR_RNDN);
        mpfr_init(r9829137);
        mpfr_init_set_str(r9829138, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9829139);
        mpfr_init_set_str(r9829140, "3", 10, MPFR_RNDN);
        mpfr_init(r9829141);
        mpfr_init(r9829142);
        mpfr_init_set_str(r9829143, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9829144);
        mpfr_init(r9829145);
        mpfr_init(r9829146);
        mpfr_init(r9829147);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9829137, x, MPFR_RNDN);
        ;
        mpfr_mul(r9829139, r9829137, r9829138, MPFR_RNDN);
        ;
        mpfr_pow(r9829141, r9829137, r9829140, MPFR_RNDN);
        mpfr_mul(r9829142, r9829139, r9829141, MPFR_RNDN);
        ;
        mpfr_mul(r9829144, r9829137, r9829143, MPFR_RNDN);
        mpfr_mul(r9829145, r9829144, r9829137, MPFR_RNDN);
        mpfr_add(r9829146, r9829142, r9829145, MPFR_RNDN);
        mpfr_add(r9829147, r9829136, r9829146, MPFR_RNDN);
        return mpfr_get_d(r9829147, MPFR_RNDN);
}

static mpfr_t r9829148, r9829149, r9829150, r9829151, r9829152, r9829153, r9829154, r9829155, r9829156, r9829157, r9829158, r9829159;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9829148, "12.0", 10, MPFR_RNDN);
        mpfr_init(r9829149);
        mpfr_init_set_str(r9829150, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9829151);
        mpfr_init_set_str(r9829152, "3", 10, MPFR_RNDN);
        mpfr_init(r9829153);
        mpfr_init(r9829154);
        mpfr_init_set_str(r9829155, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9829156);
        mpfr_init(r9829157);
        mpfr_init(r9829158);
        mpfr_init(r9829159);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9829149, x, MPFR_RNDN);
        ;
        mpfr_mul(r9829151, r9829149, r9829150, MPFR_RNDN);
        ;
        mpfr_pow(r9829153, r9829149, r9829152, MPFR_RNDN);
        mpfr_mul(r9829154, r9829151, r9829153, MPFR_RNDN);
        ;
        mpfr_mul(r9829156, r9829149, r9829155, MPFR_RNDN);
        mpfr_mul(r9829157, r9829156, r9829149, MPFR_RNDN);
        mpfr_add(r9829158, r9829154, r9829157, MPFR_RNDN);
        mpfr_add(r9829159, r9829148, r9829158, MPFR_RNDN);
        return mpfr_get_d(r9829159, MPFR_RNDN);
}

