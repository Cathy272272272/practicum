#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6432119 = 2.460938;
        float r6432120 = x;
        float r6432121 = r6432119 * r6432120;
        float r6432122 = -36.09375;
        float r6432123 = r6432120 * r6432120;
        float r6432124 = r6432123 * r6432120;
        float r6432125 = r6432122 * r6432124;
        float r6432126 = r6432121 + r6432125;
        float r6432127 = 140.765625;
        float r6432128 = r6432124 * r6432120;
        float r6432129 = r6432128 * r6432120;
        float r6432130 = r6432127 * r6432129;
        float r6432131 = r6432126 + r6432130;
        float r6432132 = -201.09375;
        float r6432133 = r6432129 * r6432120;
        float r6432134 = r6432133 * r6432120;
        float r6432135 = r6432132 * r6432134;
        float r6432136 = r6432131 + r6432135;
        float r6432137 = 94.960938;
        float r6432138 = r6432134 * r6432120;
        float r6432139 = r6432138 * r6432120;
        float r6432140 = r6432137 * r6432139;
        float r6432141 = r6432136 + r6432140;
        return r6432141;
}

double f_id(double x) {
        double r6432142 = 2.460938;
        double r6432143 = x;
        double r6432144 = r6432142 * r6432143;
        double r6432145 = -36.09375;
        double r6432146 = r6432143 * r6432143;
        double r6432147 = r6432146 * r6432143;
        double r6432148 = r6432145 * r6432147;
        double r6432149 = r6432144 + r6432148;
        double r6432150 = 140.765625;
        double r6432151 = r6432147 * r6432143;
        double r6432152 = r6432151 * r6432143;
        double r6432153 = r6432150 * r6432152;
        double r6432154 = r6432149 + r6432153;
        double r6432155 = -201.09375;
        double r6432156 = r6432152 * r6432143;
        double r6432157 = r6432156 * r6432143;
        double r6432158 = r6432155 * r6432157;
        double r6432159 = r6432154 + r6432158;
        double r6432160 = 94.960938;
        double r6432161 = r6432157 * r6432143;
        double r6432162 = r6432161 * r6432143;
        double r6432163 = r6432160 * r6432162;
        double r6432164 = r6432159 + r6432163;
        return r6432164;
}


double f_of(float x) {
        float r6432165 = 2.460938;
        float r6432166 = x;
        float r6432167 = r6432165 * r6432166;
        float r6432168 = -36.09375;
        float r6432169 = r6432166 * r6432166;
        float r6432170 = r6432169 * r6432166;
        float r6432171 = r6432168 * r6432170;
        float r6432172 = r6432167 + r6432171;
        float r6432173 = 140.765625;
        float r6432174 = r6432170 * r6432166;
        float r6432175 = r6432174 * r6432166;
        float r6432176 = r6432173 * r6432175;
        float r6432177 = r6432172 + r6432176;
        float r6432178 = -201.09375;
        float r6432179 = r6432175 * r6432166;
        float r6432180 = r6432179 * r6432166;
        float r6432181 = r6432178 * r6432180;
        float r6432182 = r6432177 + r6432181;
        float r6432183 = 94.960938;
        float r6432184 = r6432180 * r6432166;
        float r6432185 = r6432184 * r6432166;
        float r6432186 = r6432183 * r6432185;
        float r6432187 = r6432182 + r6432186;
        return r6432187;
}

double f_od(double x) {
        double r6432188 = 2.460938;
        double r6432189 = x;
        double r6432190 = r6432188 * r6432189;
        double r6432191 = -36.09375;
        double r6432192 = r6432189 * r6432189;
        double r6432193 = r6432192 * r6432189;
        double r6432194 = r6432191 * r6432193;
        double r6432195 = r6432190 + r6432194;
        double r6432196 = 140.765625;
        double r6432197 = r6432193 * r6432189;
        double r6432198 = r6432197 * r6432189;
        double r6432199 = r6432196 * r6432198;
        double r6432200 = r6432195 + r6432199;
        double r6432201 = -201.09375;
        double r6432202 = r6432198 * r6432189;
        double r6432203 = r6432202 * r6432189;
        double r6432204 = r6432201 * r6432203;
        double r6432205 = r6432200 + r6432204;
        double r6432206 = 94.960938;
        double r6432207 = r6432203 * r6432189;
        double r6432208 = r6432207 * r6432189;
        double r6432209 = r6432206 * r6432208;
        double r6432210 = r6432205 + r6432209;
        return r6432210;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6432211, r6432212, r6432213, r6432214, r6432215, r6432216, r6432217, r6432218, r6432219, r6432220, r6432221, r6432222, r6432223, r6432224, r6432225, r6432226, r6432227, r6432228, r6432229, r6432230, r6432231, r6432232, r6432233;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6432211, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6432212);
        mpfr_init(r6432213);
        mpfr_init_set_str(r6432214, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6432215);
        mpfr_init(r6432216);
        mpfr_init(r6432217);
        mpfr_init(r6432218);
        mpfr_init_set_str(r6432219, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6432220);
        mpfr_init(r6432221);
        mpfr_init(r6432222);
        mpfr_init(r6432223);
        mpfr_init_set_str(r6432224, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6432225);
        mpfr_init(r6432226);
        mpfr_init(r6432227);
        mpfr_init(r6432228);
        mpfr_init_set_str(r6432229, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6432230);
        mpfr_init(r6432231);
        mpfr_init(r6432232);
        mpfr_init(r6432233);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6432212, x, MPFR_RNDN);
        mpfr_mul(r6432213, r6432211, r6432212, MPFR_RNDN);
        ;
        mpfr_mul(r6432215, r6432212, r6432212, MPFR_RNDN);
        mpfr_mul(r6432216, r6432215, r6432212, MPFR_RNDN);
        mpfr_mul(r6432217, r6432214, r6432216, MPFR_RNDN);
        mpfr_add(r6432218, r6432213, r6432217, MPFR_RNDN);
        ;
        mpfr_mul(r6432220, r6432216, r6432212, MPFR_RNDN);
        mpfr_mul(r6432221, r6432220, r6432212, MPFR_RNDN);
        mpfr_mul(r6432222, r6432219, r6432221, MPFR_RNDN);
        mpfr_add(r6432223, r6432218, r6432222, MPFR_RNDN);
        ;
        mpfr_mul(r6432225, r6432221, r6432212, MPFR_RNDN);
        mpfr_mul(r6432226, r6432225, r6432212, MPFR_RNDN);
        mpfr_mul(r6432227, r6432224, r6432226, MPFR_RNDN);
        mpfr_add(r6432228, r6432223, r6432227, MPFR_RNDN);
        ;
        mpfr_mul(r6432230, r6432226, r6432212, MPFR_RNDN);
        mpfr_mul(r6432231, r6432230, r6432212, MPFR_RNDN);
        mpfr_mul(r6432232, r6432229, r6432231, MPFR_RNDN);
        mpfr_add(r6432233, r6432228, r6432232, MPFR_RNDN);
        return mpfr_get_d(r6432233, MPFR_RNDN);
}

static mpfr_t r6432234, r6432235, r6432236, r6432237, r6432238, r6432239, r6432240, r6432241, r6432242, r6432243, r6432244, r6432245, r6432246, r6432247, r6432248, r6432249, r6432250, r6432251, r6432252, r6432253, r6432254, r6432255, r6432256;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6432234, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6432235);
        mpfr_init(r6432236);
        mpfr_init_set_str(r6432237, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6432238);
        mpfr_init(r6432239);
        mpfr_init(r6432240);
        mpfr_init(r6432241);
        mpfr_init_set_str(r6432242, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6432243);
        mpfr_init(r6432244);
        mpfr_init(r6432245);
        mpfr_init(r6432246);
        mpfr_init_set_str(r6432247, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6432248);
        mpfr_init(r6432249);
        mpfr_init(r6432250);
        mpfr_init(r6432251);
        mpfr_init_set_str(r6432252, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6432253);
        mpfr_init(r6432254);
        mpfr_init(r6432255);
        mpfr_init(r6432256);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6432235, x, MPFR_RNDN);
        mpfr_mul(r6432236, r6432234, r6432235, MPFR_RNDN);
        ;
        mpfr_mul(r6432238, r6432235, r6432235, MPFR_RNDN);
        mpfr_mul(r6432239, r6432238, r6432235, MPFR_RNDN);
        mpfr_mul(r6432240, r6432237, r6432239, MPFR_RNDN);
        mpfr_add(r6432241, r6432236, r6432240, MPFR_RNDN);
        ;
        mpfr_mul(r6432243, r6432239, r6432235, MPFR_RNDN);
        mpfr_mul(r6432244, r6432243, r6432235, MPFR_RNDN);
        mpfr_mul(r6432245, r6432242, r6432244, MPFR_RNDN);
        mpfr_add(r6432246, r6432241, r6432245, MPFR_RNDN);
        ;
        mpfr_mul(r6432248, r6432244, r6432235, MPFR_RNDN);
        mpfr_mul(r6432249, r6432248, r6432235, MPFR_RNDN);
        mpfr_mul(r6432250, r6432247, r6432249, MPFR_RNDN);
        mpfr_add(r6432251, r6432246, r6432250, MPFR_RNDN);
        ;
        mpfr_mul(r6432253, r6432249, r6432235, MPFR_RNDN);
        mpfr_mul(r6432254, r6432253, r6432235, MPFR_RNDN);
        mpfr_mul(r6432255, r6432252, r6432254, MPFR_RNDN);
        mpfr_add(r6432256, r6432251, r6432255, MPFR_RNDN);
        return mpfr_get_d(r6432256, MPFR_RNDN);
}

static mpfr_t r6432257, r6432258, r6432259, r6432260, r6432261, r6432262, r6432263, r6432264, r6432265, r6432266, r6432267, r6432268, r6432269, r6432270, r6432271, r6432272, r6432273, r6432274, r6432275, r6432276, r6432277, r6432278, r6432279;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6432257, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6432258);
        mpfr_init(r6432259);
        mpfr_init_set_str(r6432260, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6432261);
        mpfr_init(r6432262);
        mpfr_init(r6432263);
        mpfr_init(r6432264);
        mpfr_init_set_str(r6432265, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6432266);
        mpfr_init(r6432267);
        mpfr_init(r6432268);
        mpfr_init(r6432269);
        mpfr_init_set_str(r6432270, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6432271);
        mpfr_init(r6432272);
        mpfr_init(r6432273);
        mpfr_init(r6432274);
        mpfr_init_set_str(r6432275, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6432276);
        mpfr_init(r6432277);
        mpfr_init(r6432278);
        mpfr_init(r6432279);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6432258, x, MPFR_RNDN);
        mpfr_mul(r6432259, r6432257, r6432258, MPFR_RNDN);
        ;
        mpfr_mul(r6432261, r6432258, r6432258, MPFR_RNDN);
        mpfr_mul(r6432262, r6432261, r6432258, MPFR_RNDN);
        mpfr_mul(r6432263, r6432260, r6432262, MPFR_RNDN);
        mpfr_add(r6432264, r6432259, r6432263, MPFR_RNDN);
        ;
        mpfr_mul(r6432266, r6432262, r6432258, MPFR_RNDN);
        mpfr_mul(r6432267, r6432266, r6432258, MPFR_RNDN);
        mpfr_mul(r6432268, r6432265, r6432267, MPFR_RNDN);
        mpfr_add(r6432269, r6432264, r6432268, MPFR_RNDN);
        ;
        mpfr_mul(r6432271, r6432267, r6432258, MPFR_RNDN);
        mpfr_mul(r6432272, r6432271, r6432258, MPFR_RNDN);
        mpfr_mul(r6432273, r6432270, r6432272, MPFR_RNDN);
        mpfr_add(r6432274, r6432269, r6432273, MPFR_RNDN);
        ;
        mpfr_mul(r6432276, r6432272, r6432258, MPFR_RNDN);
        mpfr_mul(r6432277, r6432276, r6432258, MPFR_RNDN);
        mpfr_mul(r6432278, r6432275, r6432277, MPFR_RNDN);
        mpfr_add(r6432279, r6432274, r6432278, MPFR_RNDN);
        return mpfr_get_d(r6432279, MPFR_RNDN);
}

