#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r10921123 = 1.0;
        float r10921124 = -5.0;
        float r10921125 = x;
        float r10921126 = r10921124 * r10921125;
        float r10921127 = r10921123 + r10921126;
        float r10921128 = 5.0;
        float r10921129 = r10921125 * r10921125;
        float r10921130 = r10921128 * r10921129;
        float r10921131 = r10921127 + r10921130;
        float r10921132 = -1.666667;
        float r10921133 = r10921129 * r10921125;
        float r10921134 = r10921132 * r10921133;
        float r10921135 = r10921131 + r10921134;
        float r10921136 = 0.208333;
        float r10921137 = r10921133 * r10921125;
        float r10921138 = r10921136 * r10921137;
        float r10921139 = r10921135 + r10921138;
        float r10921140 = -0.008333;
        float r10921141 = r10921137 * r10921125;
        float r10921142 = r10921140 * r10921141;
        float r10921143 = r10921139 + r10921142;
        return r10921143;
}

double f_id(double x) {
        double r10921144 = 1.0;
        double r10921145 = -5.0;
        double r10921146 = x;
        double r10921147 = r10921145 * r10921146;
        double r10921148 = r10921144 + r10921147;
        double r10921149 = 5.0;
        double r10921150 = r10921146 * r10921146;
        double r10921151 = r10921149 * r10921150;
        double r10921152 = r10921148 + r10921151;
        double r10921153 = -1.666667;
        double r10921154 = r10921150 * r10921146;
        double r10921155 = r10921153 * r10921154;
        double r10921156 = r10921152 + r10921155;
        double r10921157 = 0.208333;
        double r10921158 = r10921154 * r10921146;
        double r10921159 = r10921157 * r10921158;
        double r10921160 = r10921156 + r10921159;
        double r10921161 = -0.008333;
        double r10921162 = r10921158 * r10921146;
        double r10921163 = r10921161 * r10921162;
        double r10921164 = r10921160 + r10921163;
        return r10921164;
}


double f_of(float x) {
        float r10921165 = 1.0;
        float r10921166 = -5.0;
        float r10921167 = x;
        float r10921168 = r10921166 * r10921167;
        float r10921169 = r10921165 + r10921168;
        float r10921170 = 5.0;
        float r10921171 = r10921167 * r10921167;
        float r10921172 = r10921170 * r10921171;
        float r10921173 = r10921169 + r10921172;
        float r10921174 = -1.666667;
        float r10921175 = r10921171 * r10921167;
        float r10921176 = r10921174 * r10921175;
        float r10921177 = r10921173 + r10921176;
        float r10921178 = 0.208333;
        float r10921179 = r10921175 * r10921167;
        float r10921180 = r10921178 * r10921179;
        float r10921181 = r10921177 + r10921180;
        float r10921182 = -0.008333;
        float r10921183 = r10921179 * r10921167;
        float r10921184 = r10921182 * r10921183;
        float r10921185 = r10921181 + r10921184;
        return r10921185;
}

double f_od(double x) {
        double r10921186 = 1.0;
        double r10921187 = -5.0;
        double r10921188 = x;
        double r10921189 = r10921187 * r10921188;
        double r10921190 = r10921186 + r10921189;
        double r10921191 = 5.0;
        double r10921192 = r10921188 * r10921188;
        double r10921193 = r10921191 * r10921192;
        double r10921194 = r10921190 + r10921193;
        double r10921195 = -1.666667;
        double r10921196 = r10921192 * r10921188;
        double r10921197 = r10921195 * r10921196;
        double r10921198 = r10921194 + r10921197;
        double r10921199 = 0.208333;
        double r10921200 = r10921196 * r10921188;
        double r10921201 = r10921199 * r10921200;
        double r10921202 = r10921198 + r10921201;
        double r10921203 = -0.008333;
        double r10921204 = r10921200 * r10921188;
        double r10921205 = r10921203 * r10921204;
        double r10921206 = r10921202 + r10921205;
        return r10921206;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10921207, r10921208, r10921209, r10921210, r10921211, r10921212, r10921213, r10921214, r10921215, r10921216, r10921217, r10921218, r10921219, r10921220, r10921221, r10921222, r10921223, r10921224, r10921225, r10921226, r10921227;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10921207, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921208, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10921209);
        mpfr_init(r10921210);
        mpfr_init(r10921211);
        mpfr_init_set_str(r10921212, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10921213);
        mpfr_init(r10921214);
        mpfr_init(r10921215);
        mpfr_init_set_str(r10921216, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10921217);
        mpfr_init(r10921218);
        mpfr_init(r10921219);
        mpfr_init_set_str(r10921220, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10921221);
        mpfr_init(r10921222);
        mpfr_init(r10921223);
        mpfr_init_set_str(r10921224, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10921225);
        mpfr_init(r10921226);
        mpfr_init(r10921227);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10921209, x, MPFR_RNDN);
        mpfr_mul(r10921210, r10921208, r10921209, MPFR_RNDN);
        mpfr_add(r10921211, r10921207, r10921210, MPFR_RNDN);
        ;
        mpfr_mul(r10921213, r10921209, r10921209, MPFR_RNDN);
        mpfr_mul(r10921214, r10921212, r10921213, MPFR_RNDN);
        mpfr_add(r10921215, r10921211, r10921214, MPFR_RNDN);
        ;
        mpfr_mul(r10921217, r10921213, r10921209, MPFR_RNDN);
        mpfr_mul(r10921218, r10921216, r10921217, MPFR_RNDN);
        mpfr_add(r10921219, r10921215, r10921218, MPFR_RNDN);
        ;
        mpfr_mul(r10921221, r10921217, r10921209, MPFR_RNDN);
        mpfr_mul(r10921222, r10921220, r10921221, MPFR_RNDN);
        mpfr_add(r10921223, r10921219, r10921222, MPFR_RNDN);
        ;
        mpfr_mul(r10921225, r10921221, r10921209, MPFR_RNDN);
        mpfr_mul(r10921226, r10921224, r10921225, MPFR_RNDN);
        mpfr_add(r10921227, r10921223, r10921226, MPFR_RNDN);
        return mpfr_get_d(r10921227, MPFR_RNDN);
}

static mpfr_t r10921228, r10921229, r10921230, r10921231, r10921232, r10921233, r10921234, r10921235, r10921236, r10921237, r10921238, r10921239, r10921240, r10921241, r10921242, r10921243, r10921244, r10921245, r10921246, r10921247, r10921248;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10921228, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921229, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10921230);
        mpfr_init(r10921231);
        mpfr_init(r10921232);
        mpfr_init_set_str(r10921233, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10921234);
        mpfr_init(r10921235);
        mpfr_init(r10921236);
        mpfr_init_set_str(r10921237, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10921238);
        mpfr_init(r10921239);
        mpfr_init(r10921240);
        mpfr_init_set_str(r10921241, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10921242);
        mpfr_init(r10921243);
        mpfr_init(r10921244);
        mpfr_init_set_str(r10921245, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10921246);
        mpfr_init(r10921247);
        mpfr_init(r10921248);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10921230, x, MPFR_RNDN);
        mpfr_mul(r10921231, r10921229, r10921230, MPFR_RNDN);
        mpfr_add(r10921232, r10921228, r10921231, MPFR_RNDN);
        ;
        mpfr_mul(r10921234, r10921230, r10921230, MPFR_RNDN);
        mpfr_mul(r10921235, r10921233, r10921234, MPFR_RNDN);
        mpfr_add(r10921236, r10921232, r10921235, MPFR_RNDN);
        ;
        mpfr_mul(r10921238, r10921234, r10921230, MPFR_RNDN);
        mpfr_mul(r10921239, r10921237, r10921238, MPFR_RNDN);
        mpfr_add(r10921240, r10921236, r10921239, MPFR_RNDN);
        ;
        mpfr_mul(r10921242, r10921238, r10921230, MPFR_RNDN);
        mpfr_mul(r10921243, r10921241, r10921242, MPFR_RNDN);
        mpfr_add(r10921244, r10921240, r10921243, MPFR_RNDN);
        ;
        mpfr_mul(r10921246, r10921242, r10921230, MPFR_RNDN);
        mpfr_mul(r10921247, r10921245, r10921246, MPFR_RNDN);
        mpfr_add(r10921248, r10921244, r10921247, MPFR_RNDN);
        return mpfr_get_d(r10921248, MPFR_RNDN);
}

static mpfr_t r10921249, r10921250, r10921251, r10921252, r10921253, r10921254, r10921255, r10921256, r10921257, r10921258, r10921259, r10921260, r10921261, r10921262, r10921263, r10921264, r10921265, r10921266, r10921267, r10921268, r10921269;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10921249, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921250, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10921251);
        mpfr_init(r10921252);
        mpfr_init(r10921253);
        mpfr_init_set_str(r10921254, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10921255);
        mpfr_init(r10921256);
        mpfr_init(r10921257);
        mpfr_init_set_str(r10921258, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10921259);
        mpfr_init(r10921260);
        mpfr_init(r10921261);
        mpfr_init_set_str(r10921262, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10921263);
        mpfr_init(r10921264);
        mpfr_init(r10921265);
        mpfr_init_set_str(r10921266, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10921267);
        mpfr_init(r10921268);
        mpfr_init(r10921269);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10921251, x, MPFR_RNDN);
        mpfr_mul(r10921252, r10921250, r10921251, MPFR_RNDN);
        mpfr_add(r10921253, r10921249, r10921252, MPFR_RNDN);
        ;
        mpfr_mul(r10921255, r10921251, r10921251, MPFR_RNDN);
        mpfr_mul(r10921256, r10921254, r10921255, MPFR_RNDN);
        mpfr_add(r10921257, r10921253, r10921256, MPFR_RNDN);
        ;
        mpfr_mul(r10921259, r10921255, r10921251, MPFR_RNDN);
        mpfr_mul(r10921260, r10921258, r10921259, MPFR_RNDN);
        mpfr_add(r10921261, r10921257, r10921260, MPFR_RNDN);
        ;
        mpfr_mul(r10921263, r10921259, r10921251, MPFR_RNDN);
        mpfr_mul(r10921264, r10921262, r10921263, MPFR_RNDN);
        mpfr_add(r10921265, r10921261, r10921264, MPFR_RNDN);
        ;
        mpfr_mul(r10921267, r10921263, r10921251, MPFR_RNDN);
        mpfr_mul(r10921268, r10921266, r10921267, MPFR_RNDN);
        mpfr_add(r10921269, r10921265, r10921268, MPFR_RNDN);
        return mpfr_get_d(r10921269, MPFR_RNDN);
}

