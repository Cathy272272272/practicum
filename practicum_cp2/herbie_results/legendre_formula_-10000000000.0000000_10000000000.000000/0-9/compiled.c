#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r8924098 = 2.460938;
        float r8924099 = x;
        float r8924100 = r8924098 * r8924099;
        float r8924101 = -36.09375;
        float r8924102 = r8924099 * r8924099;
        float r8924103 = r8924102 * r8924099;
        float r8924104 = r8924101 * r8924103;
        float r8924105 = r8924100 + r8924104;
        float r8924106 = 140.765625;
        float r8924107 = r8924103 * r8924099;
        float r8924108 = r8924107 * r8924099;
        float r8924109 = r8924106 * r8924108;
        float r8924110 = r8924105 + r8924109;
        float r8924111 = -201.09375;
        float r8924112 = r8924108 * r8924099;
        float r8924113 = r8924112 * r8924099;
        float r8924114 = r8924111 * r8924113;
        float r8924115 = r8924110 + r8924114;
        float r8924116 = 94.960938;
        float r8924117 = r8924113 * r8924099;
        float r8924118 = r8924117 * r8924099;
        float r8924119 = r8924116 * r8924118;
        float r8924120 = r8924115 + r8924119;
        return r8924120;
}

double f_id(double x) {
        double r8924121 = 2.460938;
        double r8924122 = x;
        double r8924123 = r8924121 * r8924122;
        double r8924124 = -36.09375;
        double r8924125 = r8924122 * r8924122;
        double r8924126 = r8924125 * r8924122;
        double r8924127 = r8924124 * r8924126;
        double r8924128 = r8924123 + r8924127;
        double r8924129 = 140.765625;
        double r8924130 = r8924126 * r8924122;
        double r8924131 = r8924130 * r8924122;
        double r8924132 = r8924129 * r8924131;
        double r8924133 = r8924128 + r8924132;
        double r8924134 = -201.09375;
        double r8924135 = r8924131 * r8924122;
        double r8924136 = r8924135 * r8924122;
        double r8924137 = r8924134 * r8924136;
        double r8924138 = r8924133 + r8924137;
        double r8924139 = 94.960938;
        double r8924140 = r8924136 * r8924122;
        double r8924141 = r8924140 * r8924122;
        double r8924142 = r8924139 * r8924141;
        double r8924143 = r8924138 + r8924142;
        return r8924143;
}


double f_of(float x) {
        float r8924144 = x;
        float r8924145 = r8924144 * r8924144;
        float r8924146 = 140.765625;
        float r8924147 = r8924144 * r8924146;
        float r8924148 = r8924145 * r8924147;
        float r8924149 = r8924145 * r8924148;
        float r8924150 = 2.460938;
        float r8924151 = r8924150 * r8924144;
        float r8924152 = -36.09375;
        float r8924153 = r8924152 * r8924144;
        float r8924154 = r8924153 * r8924145;
        float r8924155 = r8924151 + r8924154;
        float r8924156 = r8924149 + r8924155;
        float r8924157 = 3;
        float r8924158 = r8924157 + r8924157;
        float r8924159 = pow(r8924144, r8924158);
        float r8924160 = r8924159 * r8924144;
        float r8924161 = -201.09375;
        float r8924162 = 94.960938;
        float r8924163 = r8924162 * r8924144;
        float r8924164 = r8924144 * r8924163;
        float r8924165 = r8924161 + r8924164;
        float r8924166 = r8924160 * r8924165;
        float r8924167 = r8924156 + r8924166;
        return r8924167;
}

double f_od(double x) {
        double r8924168 = x;
        double r8924169 = r8924168 * r8924168;
        double r8924170 = 140.765625;
        double r8924171 = r8924168 * r8924170;
        double r8924172 = r8924169 * r8924171;
        double r8924173 = r8924169 * r8924172;
        double r8924174 = 2.460938;
        double r8924175 = r8924174 * r8924168;
        double r8924176 = -36.09375;
        double r8924177 = r8924176 * r8924168;
        double r8924178 = r8924177 * r8924169;
        double r8924179 = r8924175 + r8924178;
        double r8924180 = r8924173 + r8924179;
        double r8924181 = 3;
        double r8924182 = r8924181 + r8924181;
        double r8924183 = pow(r8924168, r8924182);
        double r8924184 = r8924183 * r8924168;
        double r8924185 = -201.09375;
        double r8924186 = 94.960938;
        double r8924187 = r8924186 * r8924168;
        double r8924188 = r8924168 * r8924187;
        double r8924189 = r8924185 + r8924188;
        double r8924190 = r8924184 * r8924189;
        double r8924191 = r8924180 + r8924190;
        return r8924191;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8924192, r8924193, r8924194, r8924195, r8924196, r8924197, r8924198, r8924199, r8924200, r8924201, r8924202, r8924203, r8924204, r8924205, r8924206, r8924207, r8924208, r8924209, r8924210, r8924211, r8924212, r8924213, r8924214;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8924192, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8924193);
        mpfr_init(r8924194);
        mpfr_init_set_str(r8924195, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8924196);
        mpfr_init(r8924197);
        mpfr_init(r8924198);
        mpfr_init(r8924199);
        mpfr_init_set_str(r8924200, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8924201);
        mpfr_init(r8924202);
        mpfr_init(r8924203);
        mpfr_init(r8924204);
        mpfr_init_set_str(r8924205, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r8924206);
        mpfr_init(r8924207);
        mpfr_init(r8924208);
        mpfr_init(r8924209);
        mpfr_init_set_str(r8924210, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8924211);
        mpfr_init(r8924212);
        mpfr_init(r8924213);
        mpfr_init(r8924214);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8924193, x, MPFR_RNDN);
        mpfr_mul(r8924194, r8924192, r8924193, MPFR_RNDN);
        ;
        mpfr_mul(r8924196, r8924193, r8924193, MPFR_RNDN);
        mpfr_mul(r8924197, r8924196, r8924193, MPFR_RNDN);
        mpfr_mul(r8924198, r8924195, r8924197, MPFR_RNDN);
        mpfr_add(r8924199, r8924194, r8924198, MPFR_RNDN);
        ;
        mpfr_mul(r8924201, r8924197, r8924193, MPFR_RNDN);
        mpfr_mul(r8924202, r8924201, r8924193, MPFR_RNDN);
        mpfr_mul(r8924203, r8924200, r8924202, MPFR_RNDN);
        mpfr_add(r8924204, r8924199, r8924203, MPFR_RNDN);
        ;
        mpfr_mul(r8924206, r8924202, r8924193, MPFR_RNDN);
        mpfr_mul(r8924207, r8924206, r8924193, MPFR_RNDN);
        mpfr_mul(r8924208, r8924205, r8924207, MPFR_RNDN);
        mpfr_add(r8924209, r8924204, r8924208, MPFR_RNDN);
        ;
        mpfr_mul(r8924211, r8924207, r8924193, MPFR_RNDN);
        mpfr_mul(r8924212, r8924211, r8924193, MPFR_RNDN);
        mpfr_mul(r8924213, r8924210, r8924212, MPFR_RNDN);
        mpfr_add(r8924214, r8924209, r8924213, MPFR_RNDN);
        return mpfr_get_d(r8924214, MPFR_RNDN);
}

static mpfr_t r8924215, r8924216, r8924217, r8924218, r8924219, r8924220, r8924221, r8924222, r8924223, r8924224, r8924225, r8924226, r8924227, r8924228, r8924229, r8924230, r8924231, r8924232, r8924233, r8924234, r8924235, r8924236, r8924237, r8924238;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8924215);
        mpfr_init(r8924216);
        mpfr_init_set_str(r8924217, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8924218);
        mpfr_init(r8924219);
        mpfr_init(r8924220);
        mpfr_init_set_str(r8924221, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8924222);
        mpfr_init_set_str(r8924223, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8924224);
        mpfr_init(r8924225);
        mpfr_init(r8924226);
        mpfr_init(r8924227);
        mpfr_init_set_str(r8924228, "3", 10, MPFR_RNDN);
        mpfr_init(r8924229);
        mpfr_init(r8924230);
        mpfr_init(r8924231);
        mpfr_init_set_str(r8924232, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924233, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8924234);
        mpfr_init(r8924235);
        mpfr_init(r8924236);
        mpfr_init(r8924237);
        mpfr_init(r8924238);
}

double f_fm(double x) {
        mpfr_set_d(r8924215, x, MPFR_RNDN);
        mpfr_mul(r8924216, r8924215, r8924215, MPFR_RNDN);
        ;
        mpfr_mul(r8924218, r8924215, r8924217, MPFR_RNDN);
        mpfr_mul(r8924219, r8924216, r8924218, MPFR_RNDN);
        mpfr_mul(r8924220, r8924216, r8924219, MPFR_RNDN);
        ;
        mpfr_mul(r8924222, r8924221, r8924215, MPFR_RNDN);
        ;
        mpfr_mul(r8924224, r8924223, r8924215, MPFR_RNDN);
        mpfr_mul(r8924225, r8924224, r8924216, MPFR_RNDN);
        mpfr_add(r8924226, r8924222, r8924225, MPFR_RNDN);
        mpfr_add(r8924227, r8924220, r8924226, MPFR_RNDN);
        ;
        mpfr_add(r8924229, r8924228, r8924228, MPFR_RNDN);
        mpfr_pow(r8924230, r8924215, r8924229, MPFR_RNDN);
        mpfr_mul(r8924231, r8924230, r8924215, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8924234, r8924233, r8924215, MPFR_RNDN);
        mpfr_mul(r8924235, r8924215, r8924234, MPFR_RNDN);
        mpfr_add(r8924236, r8924232, r8924235, MPFR_RNDN);
        mpfr_mul(r8924237, r8924231, r8924236, MPFR_RNDN);
        mpfr_add(r8924238, r8924227, r8924237, MPFR_RNDN);
        return mpfr_get_d(r8924238, MPFR_RNDN);
}

static mpfr_t r8924239, r8924240, r8924241, r8924242, r8924243, r8924244, r8924245, r8924246, r8924247, r8924248, r8924249, r8924250, r8924251, r8924252, r8924253, r8924254, r8924255, r8924256, r8924257, r8924258, r8924259, r8924260, r8924261, r8924262;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8924239);
        mpfr_init(r8924240);
        mpfr_init_set_str(r8924241, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r8924242);
        mpfr_init(r8924243);
        mpfr_init(r8924244);
        mpfr_init_set_str(r8924245, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r8924246);
        mpfr_init_set_str(r8924247, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r8924248);
        mpfr_init(r8924249);
        mpfr_init(r8924250);
        mpfr_init(r8924251);
        mpfr_init_set_str(r8924252, "3", 10, MPFR_RNDN);
        mpfr_init(r8924253);
        mpfr_init(r8924254);
        mpfr_init(r8924255);
        mpfr_init_set_str(r8924256, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924257, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r8924258);
        mpfr_init(r8924259);
        mpfr_init(r8924260);
        mpfr_init(r8924261);
        mpfr_init(r8924262);
}

double f_dm(double x) {
        mpfr_set_d(r8924239, x, MPFR_RNDN);
        mpfr_mul(r8924240, r8924239, r8924239, MPFR_RNDN);
        ;
        mpfr_mul(r8924242, r8924239, r8924241, MPFR_RNDN);
        mpfr_mul(r8924243, r8924240, r8924242, MPFR_RNDN);
        mpfr_mul(r8924244, r8924240, r8924243, MPFR_RNDN);
        ;
        mpfr_mul(r8924246, r8924245, r8924239, MPFR_RNDN);
        ;
        mpfr_mul(r8924248, r8924247, r8924239, MPFR_RNDN);
        mpfr_mul(r8924249, r8924248, r8924240, MPFR_RNDN);
        mpfr_add(r8924250, r8924246, r8924249, MPFR_RNDN);
        mpfr_add(r8924251, r8924244, r8924250, MPFR_RNDN);
        ;
        mpfr_add(r8924253, r8924252, r8924252, MPFR_RNDN);
        mpfr_pow(r8924254, r8924239, r8924253, MPFR_RNDN);
        mpfr_mul(r8924255, r8924254, r8924239, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8924258, r8924257, r8924239, MPFR_RNDN);
        mpfr_mul(r8924259, r8924239, r8924258, MPFR_RNDN);
        mpfr_add(r8924260, r8924256, r8924259, MPFR_RNDN);
        mpfr_mul(r8924261, r8924255, r8924260, MPFR_RNDN);
        mpfr_add(r8924262, r8924251, r8924261, MPFR_RNDN);
        return mpfr_get_d(r8924262, MPFR_RNDN);
}

