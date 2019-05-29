#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r10584010 = 1.0;
        float r10584011 = -8.0;
        float r10584012 = x;
        float r10584013 = r10584011 * r10584012;
        float r10584014 = r10584010 + r10584013;
        float r10584015 = 14.0;
        float r10584016 = r10584012 * r10584012;
        float r10584017 = r10584015 * r10584016;
        float r10584018 = r10584014 + r10584017;
        float r10584019 = -9.333333;
        float r10584020 = r10584016 * r10584012;
        float r10584021 = r10584019 * r10584020;
        float r10584022 = r10584018 + r10584021;
        float r10584023 = 2.916667;
        float r10584024 = r10584020 * r10584012;
        float r10584025 = r10584023 * r10584024;
        float r10584026 = r10584022 + r10584025;
        float r10584027 = -0.466667;
        float r10584028 = r10584024 * r10584012;
        float r10584029 = r10584027 * r10584028;
        float r10584030 = r10584026 + r10584029;
        float r10584031 = 0.038889;
        float r10584032 = r10584028 * r10584012;
        float r10584033 = r10584031 * r10584032;
        float r10584034 = r10584030 + r10584033;
        float r10584035 = -0.001587;
        float r10584036 = r10584032 * r10584012;
        float r10584037 = r10584035 * r10584036;
        float r10584038 = r10584034 + r10584037;
        float r10584039 = 2.5e-05;
        float r10584040 = r10584036 * r10584012;
        float r10584041 = r10584039 * r10584040;
        float r10584042 = r10584038 + r10584041;
        return r10584042;
}

double f_id(double x) {
        double r10584043 = 1.0;
        double r10584044 = -8.0;
        double r10584045 = x;
        double r10584046 = r10584044 * r10584045;
        double r10584047 = r10584043 + r10584046;
        double r10584048 = 14.0;
        double r10584049 = r10584045 * r10584045;
        double r10584050 = r10584048 * r10584049;
        double r10584051 = r10584047 + r10584050;
        double r10584052 = -9.333333;
        double r10584053 = r10584049 * r10584045;
        double r10584054 = r10584052 * r10584053;
        double r10584055 = r10584051 + r10584054;
        double r10584056 = 2.916667;
        double r10584057 = r10584053 * r10584045;
        double r10584058 = r10584056 * r10584057;
        double r10584059 = r10584055 + r10584058;
        double r10584060 = -0.466667;
        double r10584061 = r10584057 * r10584045;
        double r10584062 = r10584060 * r10584061;
        double r10584063 = r10584059 + r10584062;
        double r10584064 = 0.038889;
        double r10584065 = r10584061 * r10584045;
        double r10584066 = r10584064 * r10584065;
        double r10584067 = r10584063 + r10584066;
        double r10584068 = -0.001587;
        double r10584069 = r10584065 * r10584045;
        double r10584070 = r10584068 * r10584069;
        double r10584071 = r10584067 + r10584070;
        double r10584072 = 2.5e-05;
        double r10584073 = r10584069 * r10584045;
        double r10584074 = r10584072 * r10584073;
        double r10584075 = r10584071 + r10584074;
        return r10584075;
}


double f_of(float x) {
        float r10584076 = x;
        float r10584077 = 3;
        float r10584078 = pow(r10584076, r10584077);
        float r10584079 = r10584078 * r10584078;
        float r10584080 = r10584076 * r10584076;
        float r10584081 = 2.5e-05;
        float r10584082 = r10584080 * r10584081;
        float r10584083 = -0.001587;
        float r10584084 = r10584083 * r10584076;
        float r10584085 = 0.038889;
        float r10584086 = r10584084 + r10584085;
        float r10584087 = r10584082 + r10584086;
        float r10584088 = r10584079 * r10584087;
        float r10584089 = r10584080 * r10584080;
        float r10584090 = 2.916667;
        float r10584091 = -0.466667;
        float r10584092 = r10584076 * r10584091;
        float r10584093 = r10584090 + r10584092;
        float r10584094 = r10584089 * r10584093;
        float r10584095 = 14.0;
        float r10584096 = 9.333333;
        float r10584097 = r10584076 * r10584096;
        float r10584098 = r10584095 - r10584097;
        float r10584099 = r10584080 * r10584098;
        float r10584100 = r10584094 + r10584099;
        float r10584101 = r10584088 + r10584100;
        float r10584102 = 1.0;
        float r10584103 = -8.0;
        float r10584104 = r10584103 * r10584076;
        float r10584105 = r10584102 + r10584104;
        float r10584106 = r10584101 + r10584105;
        return r10584106;
}

double f_od(double x) {
        double r10584107 = x;
        double r10584108 = 3;
        double r10584109 = pow(r10584107, r10584108);
        double r10584110 = r10584109 * r10584109;
        double r10584111 = r10584107 * r10584107;
        double r10584112 = 2.5e-05;
        double r10584113 = r10584111 * r10584112;
        double r10584114 = -0.001587;
        double r10584115 = r10584114 * r10584107;
        double r10584116 = 0.038889;
        double r10584117 = r10584115 + r10584116;
        double r10584118 = r10584113 + r10584117;
        double r10584119 = r10584110 * r10584118;
        double r10584120 = r10584111 * r10584111;
        double r10584121 = 2.916667;
        double r10584122 = -0.466667;
        double r10584123 = r10584107 * r10584122;
        double r10584124 = r10584121 + r10584123;
        double r10584125 = r10584120 * r10584124;
        double r10584126 = 14.0;
        double r10584127 = 9.333333;
        double r10584128 = r10584107 * r10584127;
        double r10584129 = r10584126 - r10584128;
        double r10584130 = r10584111 * r10584129;
        double r10584131 = r10584125 + r10584130;
        double r10584132 = r10584119 + r10584131;
        double r10584133 = 1.0;
        double r10584134 = -8.0;
        double r10584135 = r10584134 * r10584107;
        double r10584136 = r10584133 + r10584135;
        double r10584137 = r10584132 + r10584136;
        return r10584137;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10584138, r10584139, r10584140, r10584141, r10584142, r10584143, r10584144, r10584145, r10584146, r10584147, r10584148, r10584149, r10584150, r10584151, r10584152, r10584153, r10584154, r10584155, r10584156, r10584157, r10584158, r10584159, r10584160, r10584161, r10584162, r10584163, r10584164, r10584165, r10584166, r10584167, r10584168, r10584169, r10584170;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10584138, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584139, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10584140);
        mpfr_init(r10584141);
        mpfr_init(r10584142);
        mpfr_init_set_str(r10584143, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10584144);
        mpfr_init(r10584145);
        mpfr_init(r10584146);
        mpfr_init_set_str(r10584147, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10584148);
        mpfr_init(r10584149);
        mpfr_init(r10584150);
        mpfr_init_set_str(r10584151, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10584152);
        mpfr_init(r10584153);
        mpfr_init(r10584154);
        mpfr_init_set_str(r10584155, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10584156);
        mpfr_init(r10584157);
        mpfr_init(r10584158);
        mpfr_init_set_str(r10584159, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10584160);
        mpfr_init(r10584161);
        mpfr_init(r10584162);
        mpfr_init_set_str(r10584163, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10584164);
        mpfr_init(r10584165);
        mpfr_init(r10584166);
        mpfr_init_set_str(r10584167, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10584168);
        mpfr_init(r10584169);
        mpfr_init(r10584170);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10584140, x, MPFR_RNDN);
        mpfr_mul(r10584141, r10584139, r10584140, MPFR_RNDN);
        mpfr_add(r10584142, r10584138, r10584141, MPFR_RNDN);
        ;
        mpfr_mul(r10584144, r10584140, r10584140, MPFR_RNDN);
        mpfr_mul(r10584145, r10584143, r10584144, MPFR_RNDN);
        mpfr_add(r10584146, r10584142, r10584145, MPFR_RNDN);
        ;
        mpfr_mul(r10584148, r10584144, r10584140, MPFR_RNDN);
        mpfr_mul(r10584149, r10584147, r10584148, MPFR_RNDN);
        mpfr_add(r10584150, r10584146, r10584149, MPFR_RNDN);
        ;
        mpfr_mul(r10584152, r10584148, r10584140, MPFR_RNDN);
        mpfr_mul(r10584153, r10584151, r10584152, MPFR_RNDN);
        mpfr_add(r10584154, r10584150, r10584153, MPFR_RNDN);
        ;
        mpfr_mul(r10584156, r10584152, r10584140, MPFR_RNDN);
        mpfr_mul(r10584157, r10584155, r10584156, MPFR_RNDN);
        mpfr_add(r10584158, r10584154, r10584157, MPFR_RNDN);
        ;
        mpfr_mul(r10584160, r10584156, r10584140, MPFR_RNDN);
        mpfr_mul(r10584161, r10584159, r10584160, MPFR_RNDN);
        mpfr_add(r10584162, r10584158, r10584161, MPFR_RNDN);
        ;
        mpfr_mul(r10584164, r10584160, r10584140, MPFR_RNDN);
        mpfr_mul(r10584165, r10584163, r10584164, MPFR_RNDN);
        mpfr_add(r10584166, r10584162, r10584165, MPFR_RNDN);
        ;
        mpfr_mul(r10584168, r10584164, r10584140, MPFR_RNDN);
        mpfr_mul(r10584169, r10584167, r10584168, MPFR_RNDN);
        mpfr_add(r10584170, r10584166, r10584169, MPFR_RNDN);
        return mpfr_get_d(r10584170, MPFR_RNDN);
}

static mpfr_t r10584171, r10584172, r10584173, r10584174, r10584175, r10584176, r10584177, r10584178, r10584179, r10584180, r10584181, r10584182, r10584183, r10584184, r10584185, r10584186, r10584187, r10584188, r10584189, r10584190, r10584191, r10584192, r10584193, r10584194, r10584195, r10584196, r10584197, r10584198, r10584199, r10584200, r10584201;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10584171);
        mpfr_init_set_str(r10584172, "3", 10, MPFR_RNDN);
        mpfr_init(r10584173);
        mpfr_init(r10584174);
        mpfr_init(r10584175);
        mpfr_init_set_str(r10584176, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10584177);
        mpfr_init_set_str(r10584178, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10584179);
        mpfr_init_set_str(r10584180, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10584181);
        mpfr_init(r10584182);
        mpfr_init(r10584183);
        mpfr_init(r10584184);
        mpfr_init_set_str(r10584185, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584186, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10584187);
        mpfr_init(r10584188);
        mpfr_init(r10584189);
        mpfr_init_set_str(r10584190, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584191, "9.333333", 10, MPFR_RNDN);
        mpfr_init(r10584192);
        mpfr_init(r10584193);
        mpfr_init(r10584194);
        mpfr_init(r10584195);
        mpfr_init(r10584196);
        mpfr_init_set_str(r10584197, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584198, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10584199);
        mpfr_init(r10584200);
        mpfr_init(r10584201);
}

double f_fm(double x) {
        mpfr_set_d(r10584171, x, MPFR_RNDN);
        ;
        mpfr_pow(r10584173, r10584171, r10584172, MPFR_RNDN);
        mpfr_mul(r10584174, r10584173, r10584173, MPFR_RNDN);
        mpfr_mul(r10584175, r10584171, r10584171, MPFR_RNDN);
        ;
        mpfr_mul(r10584177, r10584175, r10584176, MPFR_RNDN);
        ;
        mpfr_mul(r10584179, r10584178, r10584171, MPFR_RNDN);
        ;
        mpfr_add(r10584181, r10584179, r10584180, MPFR_RNDN);
        mpfr_add(r10584182, r10584177, r10584181, MPFR_RNDN);
        mpfr_mul(r10584183, r10584174, r10584182, MPFR_RNDN);
        mpfr_mul(r10584184, r10584175, r10584175, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584187, r10584171, r10584186, MPFR_RNDN);
        mpfr_add(r10584188, r10584185, r10584187, MPFR_RNDN);
        mpfr_mul(r10584189, r10584184, r10584188, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584192, r10584171, r10584191, MPFR_RNDN);
        mpfr_sub(r10584193, r10584190, r10584192, MPFR_RNDN);
        mpfr_mul(r10584194, r10584175, r10584193, MPFR_RNDN);
        mpfr_add(r10584195, r10584189, r10584194, MPFR_RNDN);
        mpfr_add(r10584196, r10584183, r10584195, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584199, r10584198, r10584171, MPFR_RNDN);
        mpfr_add(r10584200, r10584197, r10584199, MPFR_RNDN);
        mpfr_add(r10584201, r10584196, r10584200, MPFR_RNDN);
        return mpfr_get_d(r10584201, MPFR_RNDN);
}

static mpfr_t r10584202, r10584203, r10584204, r10584205, r10584206, r10584207, r10584208, r10584209, r10584210, r10584211, r10584212, r10584213, r10584214, r10584215, r10584216, r10584217, r10584218, r10584219, r10584220, r10584221, r10584222, r10584223, r10584224, r10584225, r10584226, r10584227, r10584228, r10584229, r10584230, r10584231, r10584232;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10584202);
        mpfr_init_set_str(r10584203, "3", 10, MPFR_RNDN);
        mpfr_init(r10584204);
        mpfr_init(r10584205);
        mpfr_init(r10584206);
        mpfr_init_set_str(r10584207, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10584208);
        mpfr_init_set_str(r10584209, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10584210);
        mpfr_init_set_str(r10584211, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10584212);
        mpfr_init(r10584213);
        mpfr_init(r10584214);
        mpfr_init(r10584215);
        mpfr_init_set_str(r10584216, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584217, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10584218);
        mpfr_init(r10584219);
        mpfr_init(r10584220);
        mpfr_init_set_str(r10584221, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584222, "9.333333", 10, MPFR_RNDN);
        mpfr_init(r10584223);
        mpfr_init(r10584224);
        mpfr_init(r10584225);
        mpfr_init(r10584226);
        mpfr_init(r10584227);
        mpfr_init_set_str(r10584228, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584229, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10584230);
        mpfr_init(r10584231);
        mpfr_init(r10584232);
}

double f_dm(double x) {
        mpfr_set_d(r10584202, x, MPFR_RNDN);
        ;
        mpfr_pow(r10584204, r10584202, r10584203, MPFR_RNDN);
        mpfr_mul(r10584205, r10584204, r10584204, MPFR_RNDN);
        mpfr_mul(r10584206, r10584202, r10584202, MPFR_RNDN);
        ;
        mpfr_mul(r10584208, r10584206, r10584207, MPFR_RNDN);
        ;
        mpfr_mul(r10584210, r10584209, r10584202, MPFR_RNDN);
        ;
        mpfr_add(r10584212, r10584210, r10584211, MPFR_RNDN);
        mpfr_add(r10584213, r10584208, r10584212, MPFR_RNDN);
        mpfr_mul(r10584214, r10584205, r10584213, MPFR_RNDN);
        mpfr_mul(r10584215, r10584206, r10584206, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584218, r10584202, r10584217, MPFR_RNDN);
        mpfr_add(r10584219, r10584216, r10584218, MPFR_RNDN);
        mpfr_mul(r10584220, r10584215, r10584219, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584223, r10584202, r10584222, MPFR_RNDN);
        mpfr_sub(r10584224, r10584221, r10584223, MPFR_RNDN);
        mpfr_mul(r10584225, r10584206, r10584224, MPFR_RNDN);
        mpfr_add(r10584226, r10584220, r10584225, MPFR_RNDN);
        mpfr_add(r10584227, r10584214, r10584226, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584230, r10584229, r10584202, MPFR_RNDN);
        mpfr_add(r10584231, r10584228, r10584230, MPFR_RNDN);
        mpfr_add(r10584232, r10584227, r10584231, MPFR_RNDN);
        return mpfr_get_d(r10584232, MPFR_RNDN);
}

