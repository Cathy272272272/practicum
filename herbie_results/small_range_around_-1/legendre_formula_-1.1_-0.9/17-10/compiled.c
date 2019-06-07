#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r29572041 = -0.246094;
        float r29572042 = 13.535156;
        float r29572043 = x;
        float r29572044 = r29572043 * r29572043;
        float r29572045 = r29572042 * r29572044;
        float r29572046 = r29572041 + r29572045;
        float r29572047 = -117.304688;
        float r29572048 = r29572044 * r29572043;
        float r29572049 = r29572048 * r29572043;
        float r29572050 = r29572047 * r29572049;
        float r29572051 = r29572046 + r29572050;
        float r29572052 = 351.914062;
        float r29572053 = r29572049 * r29572043;
        float r29572054 = r29572053 * r29572043;
        float r29572055 = r29572052 * r29572054;
        float r29572056 = r29572051 + r29572055;
        float r29572057 = -427.324219;
        float r29572058 = r29572054 * r29572043;
        float r29572059 = r29572058 * r29572043;
        float r29572060 = r29572057 * r29572059;
        float r29572061 = r29572056 + r29572060;
        float r29572062 = 180.425781;
        float r29572063 = r29572059 * r29572043;
        float r29572064 = r29572063 * r29572043;
        float r29572065 = r29572062 * r29572064;
        float r29572066 = r29572061 + r29572065;
        return r29572066;
}

double f_id(double x) {
        double r29572067 = -0.246094;
        double r29572068 = 13.535156;
        double r29572069 = x;
        double r29572070 = r29572069 * r29572069;
        double r29572071 = r29572068 * r29572070;
        double r29572072 = r29572067 + r29572071;
        double r29572073 = -117.304688;
        double r29572074 = r29572070 * r29572069;
        double r29572075 = r29572074 * r29572069;
        double r29572076 = r29572073 * r29572075;
        double r29572077 = r29572072 + r29572076;
        double r29572078 = 351.914062;
        double r29572079 = r29572075 * r29572069;
        double r29572080 = r29572079 * r29572069;
        double r29572081 = r29572078 * r29572080;
        double r29572082 = r29572077 + r29572081;
        double r29572083 = -427.324219;
        double r29572084 = r29572080 * r29572069;
        double r29572085 = r29572084 * r29572069;
        double r29572086 = r29572083 * r29572085;
        double r29572087 = r29572082 + r29572086;
        double r29572088 = 180.425781;
        double r29572089 = r29572085 * r29572069;
        double r29572090 = r29572089 * r29572069;
        double r29572091 = r29572088 * r29572090;
        double r29572092 = r29572087 + r29572091;
        return r29572092;
}


double f_of(float x) {
        float r29572093 = x;
        float r29572094 = r29572093 * r29572093;
        float r29572095 = 3;
        float r29572096 = pow(r29572094, r29572095);
        float r29572097 = exp(r29572096);
        float r29572098 = 351.914062;
        float r29572099 = -427.324219;
        float r29572100 = r29572094 * r29572099;
        float r29572101 = r29572098 + r29572100;
        float r29572102 = pow(r29572097, r29572101);
        float r29572103 = 180.425781;
        float r29572104 = r29572103 * r29572093;
        float r29572105 = r29572104 * r29572093;
        float r29572106 = 1;
        float r29572107 = r29572095 + r29572106;
        float r29572108 = pow(r29572094, r29572107);
        float r29572109 = r29572105 * r29572108;
        float r29572110 = exp(r29572109);
        float r29572111 = -117.304688;
        float r29572112 = exp(r29572111);
        float r29572113 = 4;
        float r29572114 = pow(r29572093, r29572113);
        float r29572115 = pow(r29572112, r29572114);
        float r29572116 = -0.246094;
        float r29572117 = exp(r29572116);
        float r29572118 = r29572115 * r29572117;
        float r29572119 = exp(r29572093);
        float r29572120 = pow(r29572119, r29572093);
        float r29572121 = 13.535156;
        float r29572122 = pow(r29572120, r29572121);
        float r29572123 = r29572118 * r29572122;
        float r29572124 = r29572110 * r29572123;
        float r29572125 = r29572102 * r29572124;
        float r29572126 = log(r29572125);
        return r29572126;
}

double f_od(double x) {
        double r29572127 = x;
        double r29572128 = r29572127 * r29572127;
        double r29572129 = 3;
        double r29572130 = pow(r29572128, r29572129);
        double r29572131 = exp(r29572130);
        double r29572132 = 351.914062;
        double r29572133 = -427.324219;
        double r29572134 = r29572128 * r29572133;
        double r29572135 = r29572132 + r29572134;
        double r29572136 = pow(r29572131, r29572135);
        double r29572137 = 180.425781;
        double r29572138 = r29572137 * r29572127;
        double r29572139 = r29572138 * r29572127;
        double r29572140 = 1;
        double r29572141 = r29572129 + r29572140;
        double r29572142 = pow(r29572128, r29572141);
        double r29572143 = r29572139 * r29572142;
        double r29572144 = exp(r29572143);
        double r29572145 = -117.304688;
        double r29572146 = exp(r29572145);
        double r29572147 = 4;
        double r29572148 = pow(r29572127, r29572147);
        double r29572149 = pow(r29572146, r29572148);
        double r29572150 = -0.246094;
        double r29572151 = exp(r29572150);
        double r29572152 = r29572149 * r29572151;
        double r29572153 = exp(r29572127);
        double r29572154 = pow(r29572153, r29572127);
        double r29572155 = 13.535156;
        double r29572156 = pow(r29572154, r29572155);
        double r29572157 = r29572152 * r29572156;
        double r29572158 = r29572144 * r29572157;
        double r29572159 = r29572136 * r29572158;
        double r29572160 = log(r29572159);
        return r29572160;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29572161, r29572162, r29572163, r29572164, r29572165, r29572166, r29572167, r29572168, r29572169, r29572170, r29572171, r29572172, r29572173, r29572174, r29572175, r29572176, r29572177, r29572178, r29572179, r29572180, r29572181, r29572182, r29572183, r29572184, r29572185, r29572186;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29572161, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r29572162, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r29572163);
        mpfr_init(r29572164);
        mpfr_init(r29572165);
        mpfr_init(r29572166);
        mpfr_init_set_str(r29572167, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r29572168);
        mpfr_init(r29572169);
        mpfr_init(r29572170);
        mpfr_init(r29572171);
        mpfr_init_set_str(r29572172, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r29572173);
        mpfr_init(r29572174);
        mpfr_init(r29572175);
        mpfr_init(r29572176);
        mpfr_init_set_str(r29572177, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r29572178);
        mpfr_init(r29572179);
        mpfr_init(r29572180);
        mpfr_init(r29572181);
        mpfr_init_set_str(r29572182, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r29572183);
        mpfr_init(r29572184);
        mpfr_init(r29572185);
        mpfr_init(r29572186);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r29572163, x, MPFR_RNDN);
        mpfr_mul(r29572164, r29572163, r29572163, MPFR_RNDN);
        mpfr_mul(r29572165, r29572162, r29572164, MPFR_RNDN);
        mpfr_add(r29572166, r29572161, r29572165, MPFR_RNDN);
        ;
        mpfr_mul(r29572168, r29572164, r29572163, MPFR_RNDN);
        mpfr_mul(r29572169, r29572168, r29572163, MPFR_RNDN);
        mpfr_mul(r29572170, r29572167, r29572169, MPFR_RNDN);
        mpfr_add(r29572171, r29572166, r29572170, MPFR_RNDN);
        ;
        mpfr_mul(r29572173, r29572169, r29572163, MPFR_RNDN);
        mpfr_mul(r29572174, r29572173, r29572163, MPFR_RNDN);
        mpfr_mul(r29572175, r29572172, r29572174, MPFR_RNDN);
        mpfr_add(r29572176, r29572171, r29572175, MPFR_RNDN);
        ;
        mpfr_mul(r29572178, r29572174, r29572163, MPFR_RNDN);
        mpfr_mul(r29572179, r29572178, r29572163, MPFR_RNDN);
        mpfr_mul(r29572180, r29572177, r29572179, MPFR_RNDN);
        mpfr_add(r29572181, r29572176, r29572180, MPFR_RNDN);
        ;
        mpfr_mul(r29572183, r29572179, r29572163, MPFR_RNDN);
        mpfr_mul(r29572184, r29572183, r29572163, MPFR_RNDN);
        mpfr_mul(r29572185, r29572182, r29572184, MPFR_RNDN);
        mpfr_add(r29572186, r29572181, r29572185, MPFR_RNDN);
        return mpfr_get_d(r29572186, MPFR_RNDN);
}

static mpfr_t r29572187, r29572188, r29572189, r29572190, r29572191, r29572192, r29572193, r29572194, r29572195, r29572196, r29572197, r29572198, r29572199, r29572200, r29572201, r29572202, r29572203, r29572204, r29572205, r29572206, r29572207, r29572208, r29572209, r29572210, r29572211, r29572212, r29572213, r29572214, r29572215, r29572216, r29572217, r29572218, r29572219, r29572220;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29572187);
        mpfr_init(r29572188);
        mpfr_init_set_str(r29572189, "3", 10, MPFR_RNDN);
        mpfr_init(r29572190);
        mpfr_init(r29572191);
        mpfr_init_set_str(r29572192, "351.914062", 10, MPFR_RNDN);
        mpfr_init_set_str(r29572193, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r29572194);
        mpfr_init(r29572195);
        mpfr_init(r29572196);
        mpfr_init_set_str(r29572197, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r29572198);
        mpfr_init(r29572199);
        mpfr_init_set_str(r29572200, "1", 10, MPFR_RNDN);
        mpfr_init(r29572201);
        mpfr_init(r29572202);
        mpfr_init(r29572203);
        mpfr_init(r29572204);
        mpfr_init_set_str(r29572205, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r29572206);
        mpfr_init_set_str(r29572207, "4", 10, MPFR_RNDN);
        mpfr_init(r29572208);
        mpfr_init(r29572209);
        mpfr_init_set_str(r29572210, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r29572211);
        mpfr_init(r29572212);
        mpfr_init(r29572213);
        mpfr_init(r29572214);
        mpfr_init_set_str(r29572215, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r29572216);
        mpfr_init(r29572217);
        mpfr_init(r29572218);
        mpfr_init(r29572219);
        mpfr_init(r29572220);
}

double f_fm(double x) {
        mpfr_set_d(r29572187, x, MPFR_RNDN);
        mpfr_mul(r29572188, r29572187, r29572187, MPFR_RNDN);
        ;
        mpfr_pow(r29572190, r29572188, r29572189, MPFR_RNDN);
        mpfr_exp(r29572191, r29572190, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r29572194, r29572188, r29572193, MPFR_RNDN);
        mpfr_add(r29572195, r29572192, r29572194, MPFR_RNDN);
        mpfr_pow(r29572196, r29572191, r29572195, MPFR_RNDN);
        ;
        mpfr_mul(r29572198, r29572197, r29572187, MPFR_RNDN);
        mpfr_mul(r29572199, r29572198, r29572187, MPFR_RNDN);
        ;
        mpfr_add(r29572201, r29572189, r29572200, MPFR_RNDN);
        mpfr_pow(r29572202, r29572188, r29572201, MPFR_RNDN);
        mpfr_mul(r29572203, r29572199, r29572202, MPFR_RNDN);
        mpfr_exp(r29572204, r29572203, MPFR_RNDN);
        ;
        mpfr_exp(r29572206, r29572205, MPFR_RNDN);
        ;
        mpfr_pow(r29572208, r29572187, r29572207, MPFR_RNDN);
        mpfr_pow(r29572209, r29572206, r29572208, MPFR_RNDN);
        ;
        mpfr_exp(r29572211, r29572210, MPFR_RNDN);
        mpfr_mul(r29572212, r29572209, r29572211, MPFR_RNDN);
        mpfr_exp(r29572213, r29572187, MPFR_RNDN);
        mpfr_pow(r29572214, r29572213, r29572187, MPFR_RNDN);
        ;
        mpfr_pow(r29572216, r29572214, r29572215, MPFR_RNDN);
        mpfr_mul(r29572217, r29572212, r29572216, MPFR_RNDN);
        mpfr_mul(r29572218, r29572204, r29572217, MPFR_RNDN);
        mpfr_mul(r29572219, r29572196, r29572218, MPFR_RNDN);
        mpfr_log(r29572220, r29572219, MPFR_RNDN);
        return mpfr_get_d(r29572220, MPFR_RNDN);
}

static mpfr_t r29572221, r29572222, r29572223, r29572224, r29572225, r29572226, r29572227, r29572228, r29572229, r29572230, r29572231, r29572232, r29572233, r29572234, r29572235, r29572236, r29572237, r29572238, r29572239, r29572240, r29572241, r29572242, r29572243, r29572244, r29572245, r29572246, r29572247, r29572248, r29572249, r29572250, r29572251, r29572252, r29572253, r29572254;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29572221);
        mpfr_init(r29572222);
        mpfr_init_set_str(r29572223, "3", 10, MPFR_RNDN);
        mpfr_init(r29572224);
        mpfr_init(r29572225);
        mpfr_init_set_str(r29572226, "351.914062", 10, MPFR_RNDN);
        mpfr_init_set_str(r29572227, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r29572228);
        mpfr_init(r29572229);
        mpfr_init(r29572230);
        mpfr_init_set_str(r29572231, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r29572232);
        mpfr_init(r29572233);
        mpfr_init_set_str(r29572234, "1", 10, MPFR_RNDN);
        mpfr_init(r29572235);
        mpfr_init(r29572236);
        mpfr_init(r29572237);
        mpfr_init(r29572238);
        mpfr_init_set_str(r29572239, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r29572240);
        mpfr_init_set_str(r29572241, "4", 10, MPFR_RNDN);
        mpfr_init(r29572242);
        mpfr_init(r29572243);
        mpfr_init_set_str(r29572244, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r29572245);
        mpfr_init(r29572246);
        mpfr_init(r29572247);
        mpfr_init(r29572248);
        mpfr_init_set_str(r29572249, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r29572250);
        mpfr_init(r29572251);
        mpfr_init(r29572252);
        mpfr_init(r29572253);
        mpfr_init(r29572254);
}

double f_dm(double x) {
        mpfr_set_d(r29572221, x, MPFR_RNDN);
        mpfr_mul(r29572222, r29572221, r29572221, MPFR_RNDN);
        ;
        mpfr_pow(r29572224, r29572222, r29572223, MPFR_RNDN);
        mpfr_exp(r29572225, r29572224, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r29572228, r29572222, r29572227, MPFR_RNDN);
        mpfr_add(r29572229, r29572226, r29572228, MPFR_RNDN);
        mpfr_pow(r29572230, r29572225, r29572229, MPFR_RNDN);
        ;
        mpfr_mul(r29572232, r29572231, r29572221, MPFR_RNDN);
        mpfr_mul(r29572233, r29572232, r29572221, MPFR_RNDN);
        ;
        mpfr_add(r29572235, r29572223, r29572234, MPFR_RNDN);
        mpfr_pow(r29572236, r29572222, r29572235, MPFR_RNDN);
        mpfr_mul(r29572237, r29572233, r29572236, MPFR_RNDN);
        mpfr_exp(r29572238, r29572237, MPFR_RNDN);
        ;
        mpfr_exp(r29572240, r29572239, MPFR_RNDN);
        ;
        mpfr_pow(r29572242, r29572221, r29572241, MPFR_RNDN);
        mpfr_pow(r29572243, r29572240, r29572242, MPFR_RNDN);
        ;
        mpfr_exp(r29572245, r29572244, MPFR_RNDN);
        mpfr_mul(r29572246, r29572243, r29572245, MPFR_RNDN);
        mpfr_exp(r29572247, r29572221, MPFR_RNDN);
        mpfr_pow(r29572248, r29572247, r29572221, MPFR_RNDN);
        ;
        mpfr_pow(r29572250, r29572248, r29572249, MPFR_RNDN);
        mpfr_mul(r29572251, r29572246, r29572250, MPFR_RNDN);
        mpfr_mul(r29572252, r29572238, r29572251, MPFR_RNDN);
        mpfr_mul(r29572253, r29572230, r29572252, MPFR_RNDN);
        mpfr_log(r29572254, r29572253, MPFR_RNDN);
        return mpfr_get_d(r29572254, MPFR_RNDN);
}

