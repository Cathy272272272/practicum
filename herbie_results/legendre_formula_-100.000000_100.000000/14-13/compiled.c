#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r6181046 = 2.932617;
        float r6181047 = x;
        float r6181048 = r6181046 * r6181047;
        float r6181049 = -87.978516;
        float r6181050 = r6181047 * r6181047;
        float r6181051 = r6181050 * r6181047;
        float r6181052 = r6181049 * r6181051;
        float r6181053 = r6181048 + r6181052;
        float r6181054 = 747.817383;
        float r6181055 = r6181051 * r6181047;
        float r6181056 = r6181055 * r6181047;
        float r6181057 = r6181054 * r6181056;
        float r6181058 = r6181053 + r6181057;
        float r6181059 = -2706.386719;
        float r6181060 = r6181056 * r6181047;
        float r6181061 = r6181060 * r6181047;
        float r6181062 = r6181059 * r6181061;
        float r6181063 = r6181058 + r6181062;
        float r6181064 = 4736.176758;
        float r6181065 = r6181061 * r6181047;
        float r6181066 = r6181065 * r6181047;
        float r6181067 = r6181064 * r6181066;
        float r6181068 = r6181063 + r6181067;
        float r6181069 = -3961.166016;
        float r6181070 = r6181066 * r6181047;
        float r6181071 = r6181070 * r6181047;
        float r6181072 = r6181069 * r6181071;
        float r6181073 = r6181068 + r6181072;
        float r6181074 = 1269.604492;
        float r6181075 = r6181071 * r6181047;
        float r6181076 = r6181075 * r6181047;
        float r6181077 = r6181074 * r6181076;
        float r6181078 = r6181073 + r6181077;
        return r6181078;
}

double f_id(double x) {
        double r6181079 = 2.932617;
        double r6181080 = x;
        double r6181081 = r6181079 * r6181080;
        double r6181082 = -87.978516;
        double r6181083 = r6181080 * r6181080;
        double r6181084 = r6181083 * r6181080;
        double r6181085 = r6181082 * r6181084;
        double r6181086 = r6181081 + r6181085;
        double r6181087 = 747.817383;
        double r6181088 = r6181084 * r6181080;
        double r6181089 = r6181088 * r6181080;
        double r6181090 = r6181087 * r6181089;
        double r6181091 = r6181086 + r6181090;
        double r6181092 = -2706.386719;
        double r6181093 = r6181089 * r6181080;
        double r6181094 = r6181093 * r6181080;
        double r6181095 = r6181092 * r6181094;
        double r6181096 = r6181091 + r6181095;
        double r6181097 = 4736.176758;
        double r6181098 = r6181094 * r6181080;
        double r6181099 = r6181098 * r6181080;
        double r6181100 = r6181097 * r6181099;
        double r6181101 = r6181096 + r6181100;
        double r6181102 = -3961.166016;
        double r6181103 = r6181099 * r6181080;
        double r6181104 = r6181103 * r6181080;
        double r6181105 = r6181102 * r6181104;
        double r6181106 = r6181101 + r6181105;
        double r6181107 = 1269.604492;
        double r6181108 = r6181104 * r6181080;
        double r6181109 = r6181108 * r6181080;
        double r6181110 = r6181107 * r6181109;
        double r6181111 = r6181106 + r6181110;
        return r6181111;
}


double f_of(float x) {
        float r6181112 = x;
        float r6181113 = 1269.604492;
        float r6181114 = r6181112 * r6181113;
        float r6181115 = r6181112 * r6181112;
        float r6181116 = r6181114 * r6181115;
        float r6181117 = 3;
        float r6181118 = pow(r6181112, r6181117);
        float r6181119 = r6181118 * r6181118;
        float r6181120 = r6181115 * r6181115;
        float r6181121 = r6181119 * r6181120;
        float r6181122 = r6181116 * r6181121;
        float r6181123 = 747.817383;
        float r6181124 = r6181112 * r6181123;
        float r6181125 = r6181124 * r6181115;
        float r6181126 = r6181125 * r6181115;
        float r6181127 = 2.932617;
        float r6181128 = r6181127 * r6181112;
        float r6181129 = -87.978516;
        float r6181130 = r6181129 * r6181112;
        float r6181131 = r6181115 * r6181130;
        float r6181132 = r6181128 + r6181131;
        float r6181133 = r6181126 + r6181132;
        float r6181134 = r6181122 + r6181133;
        float r6181135 = r6181119 * r6181112;
        float r6181136 = -2706.386719;
        float r6181137 = 4736.176758;
        float r6181138 = r6181137 * r6181112;
        float r6181139 = r6181112 * r6181138;
        float r6181140 = r6181136 + r6181139;
        float r6181141 = r6181135 * r6181140;
        float r6181142 = -3961.166016;
        float r6181143 = 11;
        float r6181144 = pow(r6181112, r6181143);
        float r6181145 = r6181142 * r6181144;
        float r6181146 = r6181141 + r6181145;
        float r6181147 = r6181134 + r6181146;
        return r6181147;
}

double f_od(double x) {
        double r6181148 = x;
        double r6181149 = 1269.604492;
        double r6181150 = r6181148 * r6181149;
        double r6181151 = r6181148 * r6181148;
        double r6181152 = r6181150 * r6181151;
        double r6181153 = 3;
        double r6181154 = pow(r6181148, r6181153);
        double r6181155 = r6181154 * r6181154;
        double r6181156 = r6181151 * r6181151;
        double r6181157 = r6181155 * r6181156;
        double r6181158 = r6181152 * r6181157;
        double r6181159 = 747.817383;
        double r6181160 = r6181148 * r6181159;
        double r6181161 = r6181160 * r6181151;
        double r6181162 = r6181161 * r6181151;
        double r6181163 = 2.932617;
        double r6181164 = r6181163 * r6181148;
        double r6181165 = -87.978516;
        double r6181166 = r6181165 * r6181148;
        double r6181167 = r6181151 * r6181166;
        double r6181168 = r6181164 + r6181167;
        double r6181169 = r6181162 + r6181168;
        double r6181170 = r6181158 + r6181169;
        double r6181171 = r6181155 * r6181148;
        double r6181172 = -2706.386719;
        double r6181173 = 4736.176758;
        double r6181174 = r6181173 * r6181148;
        double r6181175 = r6181148 * r6181174;
        double r6181176 = r6181172 + r6181175;
        double r6181177 = r6181171 * r6181176;
        double r6181178 = -3961.166016;
        double r6181179 = 11;
        double r6181180 = pow(r6181148, r6181179);
        double r6181181 = r6181178 * r6181180;
        double r6181182 = r6181177 + r6181181;
        double r6181183 = r6181170 + r6181182;
        return r6181183;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6181184, r6181185, r6181186, r6181187, r6181188, r6181189, r6181190, r6181191, r6181192, r6181193, r6181194, r6181195, r6181196, r6181197, r6181198, r6181199, r6181200, r6181201, r6181202, r6181203, r6181204, r6181205, r6181206, r6181207, r6181208, r6181209, r6181210, r6181211, r6181212, r6181213, r6181214, r6181215, r6181216;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6181184, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6181185);
        mpfr_init(r6181186);
        mpfr_init_set_str(r6181187, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6181188);
        mpfr_init(r6181189);
        mpfr_init(r6181190);
        mpfr_init(r6181191);
        mpfr_init_set_str(r6181192, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6181193);
        mpfr_init(r6181194);
        mpfr_init(r6181195);
        mpfr_init(r6181196);
        mpfr_init_set_str(r6181197, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r6181198);
        mpfr_init(r6181199);
        mpfr_init(r6181200);
        mpfr_init(r6181201);
        mpfr_init_set_str(r6181202, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6181203);
        mpfr_init(r6181204);
        mpfr_init(r6181205);
        mpfr_init(r6181206);
        mpfr_init_set_str(r6181207, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r6181208);
        mpfr_init(r6181209);
        mpfr_init(r6181210);
        mpfr_init(r6181211);
        mpfr_init_set_str(r6181212, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6181213);
        mpfr_init(r6181214);
        mpfr_init(r6181215);
        mpfr_init(r6181216);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6181185, x, MPFR_RNDN);
        mpfr_mul(r6181186, r6181184, r6181185, MPFR_RNDN);
        ;
        mpfr_mul(r6181188, r6181185, r6181185, MPFR_RNDN);
        mpfr_mul(r6181189, r6181188, r6181185, MPFR_RNDN);
        mpfr_mul(r6181190, r6181187, r6181189, MPFR_RNDN);
        mpfr_add(r6181191, r6181186, r6181190, MPFR_RNDN);
        ;
        mpfr_mul(r6181193, r6181189, r6181185, MPFR_RNDN);
        mpfr_mul(r6181194, r6181193, r6181185, MPFR_RNDN);
        mpfr_mul(r6181195, r6181192, r6181194, MPFR_RNDN);
        mpfr_add(r6181196, r6181191, r6181195, MPFR_RNDN);
        ;
        mpfr_mul(r6181198, r6181194, r6181185, MPFR_RNDN);
        mpfr_mul(r6181199, r6181198, r6181185, MPFR_RNDN);
        mpfr_mul(r6181200, r6181197, r6181199, MPFR_RNDN);
        mpfr_add(r6181201, r6181196, r6181200, MPFR_RNDN);
        ;
        mpfr_mul(r6181203, r6181199, r6181185, MPFR_RNDN);
        mpfr_mul(r6181204, r6181203, r6181185, MPFR_RNDN);
        mpfr_mul(r6181205, r6181202, r6181204, MPFR_RNDN);
        mpfr_add(r6181206, r6181201, r6181205, MPFR_RNDN);
        ;
        mpfr_mul(r6181208, r6181204, r6181185, MPFR_RNDN);
        mpfr_mul(r6181209, r6181208, r6181185, MPFR_RNDN);
        mpfr_mul(r6181210, r6181207, r6181209, MPFR_RNDN);
        mpfr_add(r6181211, r6181206, r6181210, MPFR_RNDN);
        ;
        mpfr_mul(r6181213, r6181209, r6181185, MPFR_RNDN);
        mpfr_mul(r6181214, r6181213, r6181185, MPFR_RNDN);
        mpfr_mul(r6181215, r6181212, r6181214, MPFR_RNDN);
        mpfr_add(r6181216, r6181211, r6181215, MPFR_RNDN);
        return mpfr_get_d(r6181216, MPFR_RNDN);
}

static mpfr_t r6181217, r6181218, r6181219, r6181220, r6181221, r6181222, r6181223, r6181224, r6181225, r6181226, r6181227, r6181228, r6181229, r6181230, r6181231, r6181232, r6181233, r6181234, r6181235, r6181236, r6181237, r6181238, r6181239, r6181240, r6181241, r6181242, r6181243, r6181244, r6181245, r6181246, r6181247, r6181248, r6181249, r6181250, r6181251, r6181252;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6181217);
        mpfr_init_set_str(r6181218, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6181219);
        mpfr_init(r6181220);
        mpfr_init(r6181221);
        mpfr_init_set_str(r6181222, "3", 10, MPFR_RNDN);
        mpfr_init(r6181223);
        mpfr_init(r6181224);
        mpfr_init(r6181225);
        mpfr_init(r6181226);
        mpfr_init(r6181227);
        mpfr_init_set_str(r6181228, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6181229);
        mpfr_init(r6181230);
        mpfr_init(r6181231);
        mpfr_init_set_str(r6181232, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6181233);
        mpfr_init_set_str(r6181234, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6181235);
        mpfr_init(r6181236);
        mpfr_init(r6181237);
        mpfr_init(r6181238);
        mpfr_init(r6181239);
        mpfr_init(r6181240);
        mpfr_init_set_str(r6181241, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181242, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6181243);
        mpfr_init(r6181244);
        mpfr_init(r6181245);
        mpfr_init(r6181246);
        mpfr_init_set_str(r6181247, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181248, "11", 10, MPFR_RNDN);
        mpfr_init(r6181249);
        mpfr_init(r6181250);
        mpfr_init(r6181251);
        mpfr_init(r6181252);
}

double f_fm(double x) {
        mpfr_set_d(r6181217, x, MPFR_RNDN);
        ;
        mpfr_mul(r6181219, r6181217, r6181218, MPFR_RNDN);
        mpfr_mul(r6181220, r6181217, r6181217, MPFR_RNDN);
        mpfr_mul(r6181221, r6181219, r6181220, MPFR_RNDN);
        ;
        mpfr_pow(r6181223, r6181217, r6181222, MPFR_RNDN);
        mpfr_mul(r6181224, r6181223, r6181223, MPFR_RNDN);
        mpfr_mul(r6181225, r6181220, r6181220, MPFR_RNDN);
        mpfr_mul(r6181226, r6181224, r6181225, MPFR_RNDN);
        mpfr_mul(r6181227, r6181221, r6181226, MPFR_RNDN);
        ;
        mpfr_mul(r6181229, r6181217, r6181228, MPFR_RNDN);
        mpfr_mul(r6181230, r6181229, r6181220, MPFR_RNDN);
        mpfr_mul(r6181231, r6181230, r6181220, MPFR_RNDN);
        ;
        mpfr_mul(r6181233, r6181232, r6181217, MPFR_RNDN);
        ;
        mpfr_mul(r6181235, r6181234, r6181217, MPFR_RNDN);
        mpfr_mul(r6181236, r6181220, r6181235, MPFR_RNDN);
        mpfr_add(r6181237, r6181233, r6181236, MPFR_RNDN);
        mpfr_add(r6181238, r6181231, r6181237, MPFR_RNDN);
        mpfr_add(r6181239, r6181227, r6181238, MPFR_RNDN);
        mpfr_mul(r6181240, r6181224, r6181217, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6181243, r6181242, r6181217, MPFR_RNDN);
        mpfr_mul(r6181244, r6181217, r6181243, MPFR_RNDN);
        mpfr_add(r6181245, r6181241, r6181244, MPFR_RNDN);
        mpfr_mul(r6181246, r6181240, r6181245, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6181249, r6181217, r6181248, MPFR_RNDN);
        mpfr_mul(r6181250, r6181247, r6181249, MPFR_RNDN);
        mpfr_add(r6181251, r6181246, r6181250, MPFR_RNDN);
        mpfr_add(r6181252, r6181239, r6181251, MPFR_RNDN);
        return mpfr_get_d(r6181252, MPFR_RNDN);
}

static mpfr_t r6181253, r6181254, r6181255, r6181256, r6181257, r6181258, r6181259, r6181260, r6181261, r6181262, r6181263, r6181264, r6181265, r6181266, r6181267, r6181268, r6181269, r6181270, r6181271, r6181272, r6181273, r6181274, r6181275, r6181276, r6181277, r6181278, r6181279, r6181280, r6181281, r6181282, r6181283, r6181284, r6181285, r6181286, r6181287, r6181288;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6181253);
        mpfr_init_set_str(r6181254, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6181255);
        mpfr_init(r6181256);
        mpfr_init(r6181257);
        mpfr_init_set_str(r6181258, "3", 10, MPFR_RNDN);
        mpfr_init(r6181259);
        mpfr_init(r6181260);
        mpfr_init(r6181261);
        mpfr_init(r6181262);
        mpfr_init(r6181263);
        mpfr_init_set_str(r6181264, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6181265);
        mpfr_init(r6181266);
        mpfr_init(r6181267);
        mpfr_init_set_str(r6181268, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6181269);
        mpfr_init_set_str(r6181270, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6181271);
        mpfr_init(r6181272);
        mpfr_init(r6181273);
        mpfr_init(r6181274);
        mpfr_init(r6181275);
        mpfr_init(r6181276);
        mpfr_init_set_str(r6181277, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181278, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6181279);
        mpfr_init(r6181280);
        mpfr_init(r6181281);
        mpfr_init(r6181282);
        mpfr_init_set_str(r6181283, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181284, "11", 10, MPFR_RNDN);
        mpfr_init(r6181285);
        mpfr_init(r6181286);
        mpfr_init(r6181287);
        mpfr_init(r6181288);
}

double f_dm(double x) {
        mpfr_set_d(r6181253, x, MPFR_RNDN);
        ;
        mpfr_mul(r6181255, r6181253, r6181254, MPFR_RNDN);
        mpfr_mul(r6181256, r6181253, r6181253, MPFR_RNDN);
        mpfr_mul(r6181257, r6181255, r6181256, MPFR_RNDN);
        ;
        mpfr_pow(r6181259, r6181253, r6181258, MPFR_RNDN);
        mpfr_mul(r6181260, r6181259, r6181259, MPFR_RNDN);
        mpfr_mul(r6181261, r6181256, r6181256, MPFR_RNDN);
        mpfr_mul(r6181262, r6181260, r6181261, MPFR_RNDN);
        mpfr_mul(r6181263, r6181257, r6181262, MPFR_RNDN);
        ;
        mpfr_mul(r6181265, r6181253, r6181264, MPFR_RNDN);
        mpfr_mul(r6181266, r6181265, r6181256, MPFR_RNDN);
        mpfr_mul(r6181267, r6181266, r6181256, MPFR_RNDN);
        ;
        mpfr_mul(r6181269, r6181268, r6181253, MPFR_RNDN);
        ;
        mpfr_mul(r6181271, r6181270, r6181253, MPFR_RNDN);
        mpfr_mul(r6181272, r6181256, r6181271, MPFR_RNDN);
        mpfr_add(r6181273, r6181269, r6181272, MPFR_RNDN);
        mpfr_add(r6181274, r6181267, r6181273, MPFR_RNDN);
        mpfr_add(r6181275, r6181263, r6181274, MPFR_RNDN);
        mpfr_mul(r6181276, r6181260, r6181253, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6181279, r6181278, r6181253, MPFR_RNDN);
        mpfr_mul(r6181280, r6181253, r6181279, MPFR_RNDN);
        mpfr_add(r6181281, r6181277, r6181280, MPFR_RNDN);
        mpfr_mul(r6181282, r6181276, r6181281, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6181285, r6181253, r6181284, MPFR_RNDN);
        mpfr_mul(r6181286, r6181283, r6181285, MPFR_RNDN);
        mpfr_add(r6181287, r6181282, r6181286, MPFR_RNDN);
        mpfr_add(r6181288, r6181275, r6181287, MPFR_RNDN);
        return mpfr_get_d(r6181288, MPFR_RNDN);
}

