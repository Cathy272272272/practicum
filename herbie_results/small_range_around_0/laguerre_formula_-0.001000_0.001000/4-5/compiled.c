#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r3749069 = 1.0;
        float r3749070 = -5.0;
        float r3749071 = x;
        float r3749072 = r3749070 * r3749071;
        float r3749073 = r3749069 + r3749072;
        float r3749074 = 5.0;
        float r3749075 = r3749071 * r3749071;
        float r3749076 = r3749074 * r3749075;
        float r3749077 = r3749073 + r3749076;
        float r3749078 = -1.666667;
        float r3749079 = r3749075 * r3749071;
        float r3749080 = r3749078 * r3749079;
        float r3749081 = r3749077 + r3749080;
        float r3749082 = 0.208333;
        float r3749083 = r3749079 * r3749071;
        float r3749084 = r3749082 * r3749083;
        float r3749085 = r3749081 + r3749084;
        float r3749086 = -0.008333;
        float r3749087 = r3749083 * r3749071;
        float r3749088 = r3749086 * r3749087;
        float r3749089 = r3749085 + r3749088;
        return r3749089;
}

double f_id(double x) {
        double r3749090 = 1.0;
        double r3749091 = -5.0;
        double r3749092 = x;
        double r3749093 = r3749091 * r3749092;
        double r3749094 = r3749090 + r3749093;
        double r3749095 = 5.0;
        double r3749096 = r3749092 * r3749092;
        double r3749097 = r3749095 * r3749096;
        double r3749098 = r3749094 + r3749097;
        double r3749099 = -1.666667;
        double r3749100 = r3749096 * r3749092;
        double r3749101 = r3749099 * r3749100;
        double r3749102 = r3749098 + r3749101;
        double r3749103 = 0.208333;
        double r3749104 = r3749100 * r3749092;
        double r3749105 = r3749103 * r3749104;
        double r3749106 = r3749102 + r3749105;
        double r3749107 = -0.008333;
        double r3749108 = r3749104 * r3749092;
        double r3749109 = r3749107 * r3749108;
        double r3749110 = r3749106 + r3749109;
        return r3749110;
}


double f_of(float x) {
        float r3749111 = 1.0;
        float r3749112 = -5.0;
        float r3749113 = x;
        float r3749114 = r3749112 * r3749113;
        float r3749115 = r3749111 + r3749114;
        float r3749116 = 5.0;
        float r3749117 = r3749113 * r3749113;
        float r3749118 = r3749116 * r3749117;
        float r3749119 = r3749115 + r3749118;
        float r3749120 = -1.666667;
        float r3749121 = r3749117 * r3749113;
        float r3749122 = r3749120 * r3749121;
        float r3749123 = r3749119 + r3749122;
        float r3749124 = 0.208333;
        float r3749125 = r3749121 * r3749113;
        float r3749126 = r3749124 * r3749125;
        float r3749127 = r3749123 + r3749126;
        float r3749128 = -0.008333;
        float r3749129 = r3749125 * r3749113;
        float r3749130 = r3749128 * r3749129;
        float r3749131 = r3749127 + r3749130;
        return r3749131;
}

double f_od(double x) {
        double r3749132 = 1.0;
        double r3749133 = -5.0;
        double r3749134 = x;
        double r3749135 = r3749133 * r3749134;
        double r3749136 = r3749132 + r3749135;
        double r3749137 = 5.0;
        double r3749138 = r3749134 * r3749134;
        double r3749139 = r3749137 * r3749138;
        double r3749140 = r3749136 + r3749139;
        double r3749141 = -1.666667;
        double r3749142 = r3749138 * r3749134;
        double r3749143 = r3749141 * r3749142;
        double r3749144 = r3749140 + r3749143;
        double r3749145 = 0.208333;
        double r3749146 = r3749142 * r3749134;
        double r3749147 = r3749145 * r3749146;
        double r3749148 = r3749144 + r3749147;
        double r3749149 = -0.008333;
        double r3749150 = r3749146 * r3749134;
        double r3749151 = r3749149 * r3749150;
        double r3749152 = r3749148 + r3749151;
        return r3749152;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3749153, r3749154, r3749155, r3749156, r3749157, r3749158, r3749159, r3749160, r3749161, r3749162, r3749163, r3749164, r3749165, r3749166, r3749167, r3749168, r3749169, r3749170, r3749171, r3749172, r3749173;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749153, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749154, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r3749155);
        mpfr_init(r3749156);
        mpfr_init(r3749157);
        mpfr_init_set_str(r3749158, "5.0", 10, MPFR_RNDN);
        mpfr_init(r3749159);
        mpfr_init(r3749160);
        mpfr_init(r3749161);
        mpfr_init_set_str(r3749162, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r3749163);
        mpfr_init(r3749164);
        mpfr_init(r3749165);
        mpfr_init_set_str(r3749166, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r3749167);
        mpfr_init(r3749168);
        mpfr_init(r3749169);
        mpfr_init_set_str(r3749170, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r3749171);
        mpfr_init(r3749172);
        mpfr_init(r3749173);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3749155, x, MPFR_RNDN);
        mpfr_mul(r3749156, r3749154, r3749155, MPFR_RNDN);
        mpfr_add(r3749157, r3749153, r3749156, MPFR_RNDN);
        ;
        mpfr_mul(r3749159, r3749155, r3749155, MPFR_RNDN);
        mpfr_mul(r3749160, r3749158, r3749159, MPFR_RNDN);
        mpfr_add(r3749161, r3749157, r3749160, MPFR_RNDN);
        ;
        mpfr_mul(r3749163, r3749159, r3749155, MPFR_RNDN);
        mpfr_mul(r3749164, r3749162, r3749163, MPFR_RNDN);
        mpfr_add(r3749165, r3749161, r3749164, MPFR_RNDN);
        ;
        mpfr_mul(r3749167, r3749163, r3749155, MPFR_RNDN);
        mpfr_mul(r3749168, r3749166, r3749167, MPFR_RNDN);
        mpfr_add(r3749169, r3749165, r3749168, MPFR_RNDN);
        ;
        mpfr_mul(r3749171, r3749167, r3749155, MPFR_RNDN);
        mpfr_mul(r3749172, r3749170, r3749171, MPFR_RNDN);
        mpfr_add(r3749173, r3749169, r3749172, MPFR_RNDN);
        return mpfr_get_d(r3749173, MPFR_RNDN);
}

static mpfr_t r3749174, r3749175, r3749176, r3749177, r3749178, r3749179, r3749180, r3749181, r3749182, r3749183, r3749184, r3749185, r3749186, r3749187, r3749188, r3749189, r3749190, r3749191, r3749192, r3749193, r3749194;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749174, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749175, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r3749176);
        mpfr_init(r3749177);
        mpfr_init(r3749178);
        mpfr_init_set_str(r3749179, "5.0", 10, MPFR_RNDN);
        mpfr_init(r3749180);
        mpfr_init(r3749181);
        mpfr_init(r3749182);
        mpfr_init_set_str(r3749183, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r3749184);
        mpfr_init(r3749185);
        mpfr_init(r3749186);
        mpfr_init_set_str(r3749187, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r3749188);
        mpfr_init(r3749189);
        mpfr_init(r3749190);
        mpfr_init_set_str(r3749191, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r3749192);
        mpfr_init(r3749193);
        mpfr_init(r3749194);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3749176, x, MPFR_RNDN);
        mpfr_mul(r3749177, r3749175, r3749176, MPFR_RNDN);
        mpfr_add(r3749178, r3749174, r3749177, MPFR_RNDN);
        ;
        mpfr_mul(r3749180, r3749176, r3749176, MPFR_RNDN);
        mpfr_mul(r3749181, r3749179, r3749180, MPFR_RNDN);
        mpfr_add(r3749182, r3749178, r3749181, MPFR_RNDN);
        ;
        mpfr_mul(r3749184, r3749180, r3749176, MPFR_RNDN);
        mpfr_mul(r3749185, r3749183, r3749184, MPFR_RNDN);
        mpfr_add(r3749186, r3749182, r3749185, MPFR_RNDN);
        ;
        mpfr_mul(r3749188, r3749184, r3749176, MPFR_RNDN);
        mpfr_mul(r3749189, r3749187, r3749188, MPFR_RNDN);
        mpfr_add(r3749190, r3749186, r3749189, MPFR_RNDN);
        ;
        mpfr_mul(r3749192, r3749188, r3749176, MPFR_RNDN);
        mpfr_mul(r3749193, r3749191, r3749192, MPFR_RNDN);
        mpfr_add(r3749194, r3749190, r3749193, MPFR_RNDN);
        return mpfr_get_d(r3749194, MPFR_RNDN);
}

static mpfr_t r3749195, r3749196, r3749197, r3749198, r3749199, r3749200, r3749201, r3749202, r3749203, r3749204, r3749205, r3749206, r3749207, r3749208, r3749209, r3749210, r3749211, r3749212, r3749213, r3749214, r3749215;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749195, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749196, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r3749197);
        mpfr_init(r3749198);
        mpfr_init(r3749199);
        mpfr_init_set_str(r3749200, "5.0", 10, MPFR_RNDN);
        mpfr_init(r3749201);
        mpfr_init(r3749202);
        mpfr_init(r3749203);
        mpfr_init_set_str(r3749204, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r3749205);
        mpfr_init(r3749206);
        mpfr_init(r3749207);
        mpfr_init_set_str(r3749208, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r3749209);
        mpfr_init(r3749210);
        mpfr_init(r3749211);
        mpfr_init_set_str(r3749212, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r3749213);
        mpfr_init(r3749214);
        mpfr_init(r3749215);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3749197, x, MPFR_RNDN);
        mpfr_mul(r3749198, r3749196, r3749197, MPFR_RNDN);
        mpfr_add(r3749199, r3749195, r3749198, MPFR_RNDN);
        ;
        mpfr_mul(r3749201, r3749197, r3749197, MPFR_RNDN);
        mpfr_mul(r3749202, r3749200, r3749201, MPFR_RNDN);
        mpfr_add(r3749203, r3749199, r3749202, MPFR_RNDN);
        ;
        mpfr_mul(r3749205, r3749201, r3749197, MPFR_RNDN);
        mpfr_mul(r3749206, r3749204, r3749205, MPFR_RNDN);
        mpfr_add(r3749207, r3749203, r3749206, MPFR_RNDN);
        ;
        mpfr_mul(r3749209, r3749205, r3749197, MPFR_RNDN);
        mpfr_mul(r3749210, r3749208, r3749209, MPFR_RNDN);
        mpfr_add(r3749211, r3749207, r3749210, MPFR_RNDN);
        ;
        mpfr_mul(r3749213, r3749209, r3749197, MPFR_RNDN);
        mpfr_mul(r3749214, r3749212, r3749213, MPFR_RNDN);
        mpfr_add(r3749215, r3749211, r3749214, MPFR_RNDN);
        return mpfr_get_d(r3749215, MPFR_RNDN);
}

