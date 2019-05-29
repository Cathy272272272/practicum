#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r11629081 = -30240.0;
        float r11629082 = 302400.0;
        float r11629083 = x;
        float r11629084 = r11629083 * r11629083;
        float r11629085 = r11629082 * r11629084;
        float r11629086 = r11629081 + r11629085;
        float r11629087 = -403200.0;
        float r11629088 = r11629084 * r11629083;
        float r11629089 = r11629088 * r11629083;
        float r11629090 = r11629087 * r11629089;
        float r11629091 = r11629086 + r11629090;
        float r11629092 = 161280.0;
        float r11629093 = r11629089 * r11629083;
        float r11629094 = r11629093 * r11629083;
        float r11629095 = r11629092 * r11629094;
        float r11629096 = r11629091 + r11629095;
        float r11629097 = -23040.0;
        float r11629098 = r11629094 * r11629083;
        float r11629099 = r11629098 * r11629083;
        float r11629100 = r11629097 * r11629099;
        float r11629101 = r11629096 + r11629100;
        float r11629102 = 1024.0;
        float r11629103 = r11629099 * r11629083;
        float r11629104 = r11629103 * r11629083;
        float r11629105 = r11629102 * r11629104;
        float r11629106 = r11629101 + r11629105;
        return r11629106;
}

double f_id(double x) {
        double r11629107 = -30240.0;
        double r11629108 = 302400.0;
        double r11629109 = x;
        double r11629110 = r11629109 * r11629109;
        double r11629111 = r11629108 * r11629110;
        double r11629112 = r11629107 + r11629111;
        double r11629113 = -403200.0;
        double r11629114 = r11629110 * r11629109;
        double r11629115 = r11629114 * r11629109;
        double r11629116 = r11629113 * r11629115;
        double r11629117 = r11629112 + r11629116;
        double r11629118 = 161280.0;
        double r11629119 = r11629115 * r11629109;
        double r11629120 = r11629119 * r11629109;
        double r11629121 = r11629118 * r11629120;
        double r11629122 = r11629117 + r11629121;
        double r11629123 = -23040.0;
        double r11629124 = r11629120 * r11629109;
        double r11629125 = r11629124 * r11629109;
        double r11629126 = r11629123 * r11629125;
        double r11629127 = r11629122 + r11629126;
        double r11629128 = 1024.0;
        double r11629129 = r11629125 * r11629109;
        double r11629130 = r11629129 * r11629109;
        double r11629131 = r11629128 * r11629130;
        double r11629132 = r11629127 + r11629131;
        return r11629132;
}


double f_of(float x) {
        float r11629133 = x;
        float r11629134 = r11629133 * r11629133;
        float r11629135 = r11629134 * r11629134;
        float r11629136 = -403200.0;
        float r11629137 = 161280.0;
        float r11629138 = r11629137 * r11629133;
        float r11629139 = r11629133 * r11629138;
        float r11629140 = r11629136 + r11629139;
        float r11629141 = r11629135 * r11629140;
        float r11629142 = cbrt(r11629141);
        float r11629143 = r11629142 * r11629142;
        float r11629144 = r11629143 * r11629142;
        float r11629145 = r11629135 * r11629135;
        float r11629146 = 1024.0;
        float r11629147 = r11629146 * r11629134;
        float r11629148 = -23040.0;
        float r11629149 = r11629147 + r11629148;
        float r11629150 = r11629145 * r11629149;
        float r11629151 = r11629144 + r11629150;
        float r11629152 = 302400.0;
        float r11629153 = r11629133 * r11629152;
        float r11629154 = r11629133 * r11629153;
        float r11629155 = -30240.0;
        float r11629156 = r11629154 + r11629155;
        float r11629157 = r11629151 + r11629156;
        return r11629157;
}

double f_od(double x) {
        double r11629158 = x;
        double r11629159 = r11629158 * r11629158;
        double r11629160 = r11629159 * r11629159;
        double r11629161 = -403200.0;
        double r11629162 = 161280.0;
        double r11629163 = r11629162 * r11629158;
        double r11629164 = r11629158 * r11629163;
        double r11629165 = r11629161 + r11629164;
        double r11629166 = r11629160 * r11629165;
        double r11629167 = cbrt(r11629166);
        double r11629168 = r11629167 * r11629167;
        double r11629169 = r11629168 * r11629167;
        double r11629170 = r11629160 * r11629160;
        double r11629171 = 1024.0;
        double r11629172 = r11629171 * r11629159;
        double r11629173 = -23040.0;
        double r11629174 = r11629172 + r11629173;
        double r11629175 = r11629170 * r11629174;
        double r11629176 = r11629169 + r11629175;
        double r11629177 = 302400.0;
        double r11629178 = r11629158 * r11629177;
        double r11629179 = r11629158 * r11629178;
        double r11629180 = -30240.0;
        double r11629181 = r11629179 + r11629180;
        double r11629182 = r11629176 + r11629181;
        return r11629182;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11629183, r11629184, r11629185, r11629186, r11629187, r11629188, r11629189, r11629190, r11629191, r11629192, r11629193, r11629194, r11629195, r11629196, r11629197, r11629198, r11629199, r11629200, r11629201, r11629202, r11629203, r11629204, r11629205, r11629206, r11629207, r11629208;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11629183, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11629184, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r11629185);
        mpfr_init(r11629186);
        mpfr_init(r11629187);
        mpfr_init(r11629188);
        mpfr_init_set_str(r11629189, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r11629190);
        mpfr_init(r11629191);
        mpfr_init(r11629192);
        mpfr_init(r11629193);
        mpfr_init_set_str(r11629194, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r11629195);
        mpfr_init(r11629196);
        mpfr_init(r11629197);
        mpfr_init(r11629198);
        mpfr_init_set_str(r11629199, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r11629200);
        mpfr_init(r11629201);
        mpfr_init(r11629202);
        mpfr_init(r11629203);
        mpfr_init_set_str(r11629204, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r11629205);
        mpfr_init(r11629206);
        mpfr_init(r11629207);
        mpfr_init(r11629208);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11629185, x, MPFR_RNDN);
        mpfr_mul(r11629186, r11629185, r11629185, MPFR_RNDN);
        mpfr_mul(r11629187, r11629184, r11629186, MPFR_RNDN);
        mpfr_add(r11629188, r11629183, r11629187, MPFR_RNDN);
        ;
        mpfr_mul(r11629190, r11629186, r11629185, MPFR_RNDN);
        mpfr_mul(r11629191, r11629190, r11629185, MPFR_RNDN);
        mpfr_mul(r11629192, r11629189, r11629191, MPFR_RNDN);
        mpfr_add(r11629193, r11629188, r11629192, MPFR_RNDN);
        ;
        mpfr_mul(r11629195, r11629191, r11629185, MPFR_RNDN);
        mpfr_mul(r11629196, r11629195, r11629185, MPFR_RNDN);
        mpfr_mul(r11629197, r11629194, r11629196, MPFR_RNDN);
        mpfr_add(r11629198, r11629193, r11629197, MPFR_RNDN);
        ;
        mpfr_mul(r11629200, r11629196, r11629185, MPFR_RNDN);
        mpfr_mul(r11629201, r11629200, r11629185, MPFR_RNDN);
        mpfr_mul(r11629202, r11629199, r11629201, MPFR_RNDN);
        mpfr_add(r11629203, r11629198, r11629202, MPFR_RNDN);
        ;
        mpfr_mul(r11629205, r11629201, r11629185, MPFR_RNDN);
        mpfr_mul(r11629206, r11629205, r11629185, MPFR_RNDN);
        mpfr_mul(r11629207, r11629204, r11629206, MPFR_RNDN);
        mpfr_add(r11629208, r11629203, r11629207, MPFR_RNDN);
        return mpfr_get_d(r11629208, MPFR_RNDN);
}

static mpfr_t r11629209, r11629210, r11629211, r11629212, r11629213, r11629214, r11629215, r11629216, r11629217, r11629218, r11629219, r11629220, r11629221, r11629222, r11629223, r11629224, r11629225, r11629226, r11629227, r11629228, r11629229, r11629230, r11629231, r11629232, r11629233;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11629209);
        mpfr_init(r11629210);
        mpfr_init(r11629211);
        mpfr_init_set_str(r11629212, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11629213, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r11629214);
        mpfr_init(r11629215);
        mpfr_init(r11629216);
        mpfr_init(r11629217);
        mpfr_init(r11629218);
        mpfr_init(r11629219);
        mpfr_init(r11629220);
        mpfr_init(r11629221);
        mpfr_init_set_str(r11629222, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r11629223);
        mpfr_init_set_str(r11629224, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r11629225);
        mpfr_init(r11629226);
        mpfr_init(r11629227);
        mpfr_init_set_str(r11629228, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r11629229);
        mpfr_init(r11629230);
        mpfr_init_set_str(r11629231, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r11629232);
        mpfr_init(r11629233);
}

double f_fm(double x) {
        mpfr_set_d(r11629209, x, MPFR_RNDN);
        mpfr_mul(r11629210, r11629209, r11629209, MPFR_RNDN);
        mpfr_mul(r11629211, r11629210, r11629210, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11629214, r11629213, r11629209, MPFR_RNDN);
        mpfr_mul(r11629215, r11629209, r11629214, MPFR_RNDN);
        mpfr_add(r11629216, r11629212, r11629215, MPFR_RNDN);
        mpfr_mul(r11629217, r11629211, r11629216, MPFR_RNDN);
        mpfr_cbrt(r11629218, r11629217, MPFR_RNDN);
        mpfr_mul(r11629219, r11629218, r11629218, MPFR_RNDN);
        mpfr_mul(r11629220, r11629219, r11629218, MPFR_RNDN);
        mpfr_mul(r11629221, r11629211, r11629211, MPFR_RNDN);
        ;
        mpfr_mul(r11629223, r11629222, r11629210, MPFR_RNDN);
        ;
        mpfr_add(r11629225, r11629223, r11629224, MPFR_RNDN);
        mpfr_mul(r11629226, r11629221, r11629225, MPFR_RNDN);
        mpfr_add(r11629227, r11629220, r11629226, MPFR_RNDN);
        ;
        mpfr_mul(r11629229, r11629209, r11629228, MPFR_RNDN);
        mpfr_mul(r11629230, r11629209, r11629229, MPFR_RNDN);
        ;
        mpfr_add(r11629232, r11629230, r11629231, MPFR_RNDN);
        mpfr_add(r11629233, r11629227, r11629232, MPFR_RNDN);
        return mpfr_get_d(r11629233, MPFR_RNDN);
}

static mpfr_t r11629234, r11629235, r11629236, r11629237, r11629238, r11629239, r11629240, r11629241, r11629242, r11629243, r11629244, r11629245, r11629246, r11629247, r11629248, r11629249, r11629250, r11629251, r11629252, r11629253, r11629254, r11629255, r11629256, r11629257, r11629258;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11629234);
        mpfr_init(r11629235);
        mpfr_init(r11629236);
        mpfr_init_set_str(r11629237, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11629238, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r11629239);
        mpfr_init(r11629240);
        mpfr_init(r11629241);
        mpfr_init(r11629242);
        mpfr_init(r11629243);
        mpfr_init(r11629244);
        mpfr_init(r11629245);
        mpfr_init(r11629246);
        mpfr_init_set_str(r11629247, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r11629248);
        mpfr_init_set_str(r11629249, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r11629250);
        mpfr_init(r11629251);
        mpfr_init(r11629252);
        mpfr_init_set_str(r11629253, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r11629254);
        mpfr_init(r11629255);
        mpfr_init_set_str(r11629256, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r11629257);
        mpfr_init(r11629258);
}

double f_dm(double x) {
        mpfr_set_d(r11629234, x, MPFR_RNDN);
        mpfr_mul(r11629235, r11629234, r11629234, MPFR_RNDN);
        mpfr_mul(r11629236, r11629235, r11629235, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11629239, r11629238, r11629234, MPFR_RNDN);
        mpfr_mul(r11629240, r11629234, r11629239, MPFR_RNDN);
        mpfr_add(r11629241, r11629237, r11629240, MPFR_RNDN);
        mpfr_mul(r11629242, r11629236, r11629241, MPFR_RNDN);
        mpfr_cbrt(r11629243, r11629242, MPFR_RNDN);
        mpfr_mul(r11629244, r11629243, r11629243, MPFR_RNDN);
        mpfr_mul(r11629245, r11629244, r11629243, MPFR_RNDN);
        mpfr_mul(r11629246, r11629236, r11629236, MPFR_RNDN);
        ;
        mpfr_mul(r11629248, r11629247, r11629235, MPFR_RNDN);
        ;
        mpfr_add(r11629250, r11629248, r11629249, MPFR_RNDN);
        mpfr_mul(r11629251, r11629246, r11629250, MPFR_RNDN);
        mpfr_add(r11629252, r11629245, r11629251, MPFR_RNDN);
        ;
        mpfr_mul(r11629254, r11629234, r11629253, MPFR_RNDN);
        mpfr_mul(r11629255, r11629234, r11629254, MPFR_RNDN);
        ;
        mpfr_add(r11629257, r11629255, r11629256, MPFR_RNDN);
        mpfr_add(r11629258, r11629252, r11629257, MPFR_RNDN);
        return mpfr_get_d(r11629258, MPFR_RNDN);
}

