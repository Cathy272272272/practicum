#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r20713060 = 1.0;
        float r20713061 = -4.0;
        float r20713062 = x;
        float r20713063 = r20713061 * r20713062;
        float r20713064 = r20713060 + r20713063;
        float r20713065 = 3.0;
        float r20713066 = r20713062 * r20713062;
        float r20713067 = r20713065 * r20713066;
        float r20713068 = r20713064 + r20713067;
        float r20713069 = -0.666667;
        float r20713070 = r20713066 * r20713062;
        float r20713071 = r20713069 * r20713070;
        float r20713072 = r20713068 + r20713071;
        float r20713073 = 0.041667;
        float r20713074 = r20713070 * r20713062;
        float r20713075 = r20713073 * r20713074;
        float r20713076 = r20713072 + r20713075;
        return r20713076;
}

double f_id(double x) {
        double r20713077 = 1.0;
        double r20713078 = -4.0;
        double r20713079 = x;
        double r20713080 = r20713078 * r20713079;
        double r20713081 = r20713077 + r20713080;
        double r20713082 = 3.0;
        double r20713083 = r20713079 * r20713079;
        double r20713084 = r20713082 * r20713083;
        double r20713085 = r20713081 + r20713084;
        double r20713086 = -0.666667;
        double r20713087 = r20713083 * r20713079;
        double r20713088 = r20713086 * r20713087;
        double r20713089 = r20713085 + r20713088;
        double r20713090 = 0.041667;
        double r20713091 = r20713087 * r20713079;
        double r20713092 = r20713090 * r20713091;
        double r20713093 = r20713089 + r20713092;
        return r20713093;
}


double f_of(float x) {
        float r20713094 = x;
        float r20713095 = 3;
        float r20713096 = pow(r20713094, r20713095);
        float r20713097 = 0.041667;
        float r20713098 = r20713097 * r20713094;
        float r20713099 = -0.666667;
        float r20713100 = r20713098 + r20713099;
        float r20713101 = r20713096 * r20713100;
        float r20713102 = -4.0;
        float r20713103 = 3.0;
        float r20713104 = r20713094 * r20713103;
        float r20713105 = r20713102 + r20713104;
        float r20713106 = r20713094 * r20713105;
        float r20713107 = 1.0;
        float r20713108 = r20713106 + r20713107;
        float r20713109 = r20713101 + r20713108;
        return r20713109;
}

double f_od(double x) {
        double r20713110 = x;
        double r20713111 = 3;
        double r20713112 = pow(r20713110, r20713111);
        double r20713113 = 0.041667;
        double r20713114 = r20713113 * r20713110;
        double r20713115 = -0.666667;
        double r20713116 = r20713114 + r20713115;
        double r20713117 = r20713112 * r20713116;
        double r20713118 = -4.0;
        double r20713119 = 3.0;
        double r20713120 = r20713110 * r20713119;
        double r20713121 = r20713118 + r20713120;
        double r20713122 = r20713110 * r20713121;
        double r20713123 = 1.0;
        double r20713124 = r20713122 + r20713123;
        double r20713125 = r20713117 + r20713124;
        return r20713125;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20713126, r20713127, r20713128, r20713129, r20713130, r20713131, r20713132, r20713133, r20713134, r20713135, r20713136, r20713137, r20713138, r20713139, r20713140, r20713141, r20713142;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20713126, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713127, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r20713128);
        mpfr_init(r20713129);
        mpfr_init(r20713130);
        mpfr_init_set_str(r20713131, "3.0", 10, MPFR_RNDN);
        mpfr_init(r20713132);
        mpfr_init(r20713133);
        mpfr_init(r20713134);
        mpfr_init_set_str(r20713135, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r20713136);
        mpfr_init(r20713137);
        mpfr_init(r20713138);
        mpfr_init_set_str(r20713139, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r20713140);
        mpfr_init(r20713141);
        mpfr_init(r20713142);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20713128, x, MPFR_RNDN);
        mpfr_mul(r20713129, r20713127, r20713128, MPFR_RNDN);
        mpfr_add(r20713130, r20713126, r20713129, MPFR_RNDN);
        ;
        mpfr_mul(r20713132, r20713128, r20713128, MPFR_RNDN);
        mpfr_mul(r20713133, r20713131, r20713132, MPFR_RNDN);
        mpfr_add(r20713134, r20713130, r20713133, MPFR_RNDN);
        ;
        mpfr_mul(r20713136, r20713132, r20713128, MPFR_RNDN);
        mpfr_mul(r20713137, r20713135, r20713136, MPFR_RNDN);
        mpfr_add(r20713138, r20713134, r20713137, MPFR_RNDN);
        ;
        mpfr_mul(r20713140, r20713136, r20713128, MPFR_RNDN);
        mpfr_mul(r20713141, r20713139, r20713140, MPFR_RNDN);
        mpfr_add(r20713142, r20713138, r20713141, MPFR_RNDN);
        return mpfr_get_d(r20713142, MPFR_RNDN);
}

static mpfr_t r20713143, r20713144, r20713145, r20713146, r20713147, r20713148, r20713149, r20713150, r20713151, r20713152, r20713153, r20713154, r20713155, r20713156, r20713157, r20713158;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20713143);
        mpfr_init_set_str(r20713144, "3", 10, MPFR_RNDN);
        mpfr_init(r20713145);
        mpfr_init_set_str(r20713146, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r20713147);
        mpfr_init_set_str(r20713148, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r20713149);
        mpfr_init(r20713150);
        mpfr_init_set_str(r20713151, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713152, "3.0", 10, MPFR_RNDN);
        mpfr_init(r20713153);
        mpfr_init(r20713154);
        mpfr_init(r20713155);
        mpfr_init_set_str(r20713156, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20713157);
        mpfr_init(r20713158);
}

double f_fm(double x) {
        mpfr_set_d(r20713143, x, MPFR_RNDN);
        ;
        mpfr_pow(r20713145, r20713143, r20713144, MPFR_RNDN);
        ;
        mpfr_mul(r20713147, r20713146, r20713143, MPFR_RNDN);
        ;
        mpfr_add(r20713149, r20713147, r20713148, MPFR_RNDN);
        mpfr_mul(r20713150, r20713145, r20713149, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20713153, r20713143, r20713152, MPFR_RNDN);
        mpfr_add(r20713154, r20713151, r20713153, MPFR_RNDN);
        mpfr_mul(r20713155, r20713143, r20713154, MPFR_RNDN);
        ;
        mpfr_add(r20713157, r20713155, r20713156, MPFR_RNDN);
        mpfr_add(r20713158, r20713150, r20713157, MPFR_RNDN);
        return mpfr_get_d(r20713158, MPFR_RNDN);
}

static mpfr_t r20713159, r20713160, r20713161, r20713162, r20713163, r20713164, r20713165, r20713166, r20713167, r20713168, r20713169, r20713170, r20713171, r20713172, r20713173, r20713174;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20713159);
        mpfr_init_set_str(r20713160, "3", 10, MPFR_RNDN);
        mpfr_init(r20713161);
        mpfr_init_set_str(r20713162, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r20713163);
        mpfr_init_set_str(r20713164, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r20713165);
        mpfr_init(r20713166);
        mpfr_init_set_str(r20713167, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713168, "3.0", 10, MPFR_RNDN);
        mpfr_init(r20713169);
        mpfr_init(r20713170);
        mpfr_init(r20713171);
        mpfr_init_set_str(r20713172, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20713173);
        mpfr_init(r20713174);
}

double f_dm(double x) {
        mpfr_set_d(r20713159, x, MPFR_RNDN);
        ;
        mpfr_pow(r20713161, r20713159, r20713160, MPFR_RNDN);
        ;
        mpfr_mul(r20713163, r20713162, r20713159, MPFR_RNDN);
        ;
        mpfr_add(r20713165, r20713163, r20713164, MPFR_RNDN);
        mpfr_mul(r20713166, r20713161, r20713165, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20713169, r20713159, r20713168, MPFR_RNDN);
        mpfr_add(r20713170, r20713167, r20713169, MPFR_RNDN);
        mpfr_mul(r20713171, r20713159, r20713170, MPFR_RNDN);
        ;
        mpfr_add(r20713173, r20713171, r20713172, MPFR_RNDN);
        mpfr_add(r20713174, r20713166, r20713173, MPFR_RNDN);
        return mpfr_get_d(r20713174, MPFR_RNDN);
}

