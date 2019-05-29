#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7058112 = -0.246094;
        float r7058113 = 13.535156;
        float r7058114 = x;
        float r7058115 = r7058114 * r7058114;
        float r7058116 = r7058113 * r7058115;
        float r7058117 = r7058112 + r7058116;
        float r7058118 = -117.304688;
        float r7058119 = r7058115 * r7058114;
        float r7058120 = r7058119 * r7058114;
        float r7058121 = r7058118 * r7058120;
        float r7058122 = r7058117 + r7058121;
        float r7058123 = 351.914062;
        float r7058124 = r7058120 * r7058114;
        float r7058125 = r7058124 * r7058114;
        float r7058126 = r7058123 * r7058125;
        float r7058127 = r7058122 + r7058126;
        float r7058128 = -427.324219;
        float r7058129 = r7058125 * r7058114;
        float r7058130 = r7058129 * r7058114;
        float r7058131 = r7058128 * r7058130;
        float r7058132 = r7058127 + r7058131;
        float r7058133 = 180.425781;
        float r7058134 = r7058130 * r7058114;
        float r7058135 = r7058134 * r7058114;
        float r7058136 = r7058133 * r7058135;
        float r7058137 = r7058132 + r7058136;
        return r7058137;
}

double f_id(double x) {
        double r7058138 = -0.246094;
        double r7058139 = 13.535156;
        double r7058140 = x;
        double r7058141 = r7058140 * r7058140;
        double r7058142 = r7058139 * r7058141;
        double r7058143 = r7058138 + r7058142;
        double r7058144 = -117.304688;
        double r7058145 = r7058141 * r7058140;
        double r7058146 = r7058145 * r7058140;
        double r7058147 = r7058144 * r7058146;
        double r7058148 = r7058143 + r7058147;
        double r7058149 = 351.914062;
        double r7058150 = r7058146 * r7058140;
        double r7058151 = r7058150 * r7058140;
        double r7058152 = r7058149 * r7058151;
        double r7058153 = r7058148 + r7058152;
        double r7058154 = -427.324219;
        double r7058155 = r7058151 * r7058140;
        double r7058156 = r7058155 * r7058140;
        double r7058157 = r7058154 * r7058156;
        double r7058158 = r7058153 + r7058157;
        double r7058159 = 180.425781;
        double r7058160 = r7058156 * r7058140;
        double r7058161 = r7058160 * r7058140;
        double r7058162 = r7058159 * r7058161;
        double r7058163 = r7058158 + r7058162;
        return r7058163;
}


double f_of(float x) {
        float r7058164 = x;
        float r7058165 = r7058164 * r7058164;
        float r7058166 = r7058165 * r7058165;
        float r7058167 = -117.304688;
        float r7058168 = 351.914062;
        float r7058169 = r7058168 * r7058164;
        float r7058170 = r7058164 * r7058169;
        float r7058171 = r7058167 + r7058170;
        float r7058172 = r7058166 * r7058171;
        float r7058173 = r7058166 * r7058166;
        float r7058174 = 180.425781;
        float r7058175 = r7058174 * r7058165;
        float r7058176 = -427.324219;
        float r7058177 = r7058175 + r7058176;
        float r7058178 = r7058173 * r7058177;
        float r7058179 = r7058172 + r7058178;
        float r7058180 = 13.535156;
        float r7058181 = r7058164 * r7058180;
        float r7058182 = r7058164 * r7058181;
        float r7058183 = -0.246094;
        float r7058184 = r7058182 + r7058183;
        float r7058185 = r7058179 + r7058184;
        return r7058185;
}

double f_od(double x) {
        double r7058186 = x;
        double r7058187 = r7058186 * r7058186;
        double r7058188 = r7058187 * r7058187;
        double r7058189 = -117.304688;
        double r7058190 = 351.914062;
        double r7058191 = r7058190 * r7058186;
        double r7058192 = r7058186 * r7058191;
        double r7058193 = r7058189 + r7058192;
        double r7058194 = r7058188 * r7058193;
        double r7058195 = r7058188 * r7058188;
        double r7058196 = 180.425781;
        double r7058197 = r7058196 * r7058187;
        double r7058198 = -427.324219;
        double r7058199 = r7058197 + r7058198;
        double r7058200 = r7058195 * r7058199;
        double r7058201 = r7058194 + r7058200;
        double r7058202 = 13.535156;
        double r7058203 = r7058186 * r7058202;
        double r7058204 = r7058186 * r7058203;
        double r7058205 = -0.246094;
        double r7058206 = r7058204 + r7058205;
        double r7058207 = r7058201 + r7058206;
        return r7058207;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7058208, r7058209, r7058210, r7058211, r7058212, r7058213, r7058214, r7058215, r7058216, r7058217, r7058218, r7058219, r7058220, r7058221, r7058222, r7058223, r7058224, r7058225, r7058226, r7058227, r7058228, r7058229, r7058230, r7058231, r7058232, r7058233;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7058208, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r7058209, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7058210);
        mpfr_init(r7058211);
        mpfr_init(r7058212);
        mpfr_init(r7058213);
        mpfr_init_set_str(r7058214, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r7058215);
        mpfr_init(r7058216);
        mpfr_init(r7058217);
        mpfr_init(r7058218);
        mpfr_init_set_str(r7058219, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7058220);
        mpfr_init(r7058221);
        mpfr_init(r7058222);
        mpfr_init(r7058223);
        mpfr_init_set_str(r7058224, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7058225);
        mpfr_init(r7058226);
        mpfr_init(r7058227);
        mpfr_init(r7058228);
        mpfr_init_set_str(r7058229, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7058230);
        mpfr_init(r7058231);
        mpfr_init(r7058232);
        mpfr_init(r7058233);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7058210, x, MPFR_RNDN);
        mpfr_mul(r7058211, r7058210, r7058210, MPFR_RNDN);
        mpfr_mul(r7058212, r7058209, r7058211, MPFR_RNDN);
        mpfr_add(r7058213, r7058208, r7058212, MPFR_RNDN);
        ;
        mpfr_mul(r7058215, r7058211, r7058210, MPFR_RNDN);
        mpfr_mul(r7058216, r7058215, r7058210, MPFR_RNDN);
        mpfr_mul(r7058217, r7058214, r7058216, MPFR_RNDN);
        mpfr_add(r7058218, r7058213, r7058217, MPFR_RNDN);
        ;
        mpfr_mul(r7058220, r7058216, r7058210, MPFR_RNDN);
        mpfr_mul(r7058221, r7058220, r7058210, MPFR_RNDN);
        mpfr_mul(r7058222, r7058219, r7058221, MPFR_RNDN);
        mpfr_add(r7058223, r7058218, r7058222, MPFR_RNDN);
        ;
        mpfr_mul(r7058225, r7058221, r7058210, MPFR_RNDN);
        mpfr_mul(r7058226, r7058225, r7058210, MPFR_RNDN);
        mpfr_mul(r7058227, r7058224, r7058226, MPFR_RNDN);
        mpfr_add(r7058228, r7058223, r7058227, MPFR_RNDN);
        ;
        mpfr_mul(r7058230, r7058226, r7058210, MPFR_RNDN);
        mpfr_mul(r7058231, r7058230, r7058210, MPFR_RNDN);
        mpfr_mul(r7058232, r7058229, r7058231, MPFR_RNDN);
        mpfr_add(r7058233, r7058228, r7058232, MPFR_RNDN);
        return mpfr_get_d(r7058233, MPFR_RNDN);
}

static mpfr_t r7058234, r7058235, r7058236, r7058237, r7058238, r7058239, r7058240, r7058241, r7058242, r7058243, r7058244, r7058245, r7058246, r7058247, r7058248, r7058249, r7058250, r7058251, r7058252, r7058253, r7058254, r7058255;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7058234);
        mpfr_init(r7058235);
        mpfr_init(r7058236);
        mpfr_init_set_str(r7058237, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r7058238, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7058239);
        mpfr_init(r7058240);
        mpfr_init(r7058241);
        mpfr_init(r7058242);
        mpfr_init(r7058243);
        mpfr_init_set_str(r7058244, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7058245);
        mpfr_init_set_str(r7058246, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7058247);
        mpfr_init(r7058248);
        mpfr_init(r7058249);
        mpfr_init_set_str(r7058250, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7058251);
        mpfr_init(r7058252);
        mpfr_init_set_str(r7058253, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r7058254);
        mpfr_init(r7058255);
}

double f_fm(double x) {
        mpfr_set_d(r7058234, x, MPFR_RNDN);
        mpfr_mul(r7058235, r7058234, r7058234, MPFR_RNDN);
        mpfr_mul(r7058236, r7058235, r7058235, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7058239, r7058238, r7058234, MPFR_RNDN);
        mpfr_mul(r7058240, r7058234, r7058239, MPFR_RNDN);
        mpfr_add(r7058241, r7058237, r7058240, MPFR_RNDN);
        mpfr_mul(r7058242, r7058236, r7058241, MPFR_RNDN);
        mpfr_mul(r7058243, r7058236, r7058236, MPFR_RNDN);
        ;
        mpfr_mul(r7058245, r7058244, r7058235, MPFR_RNDN);
        ;
        mpfr_add(r7058247, r7058245, r7058246, MPFR_RNDN);
        mpfr_mul(r7058248, r7058243, r7058247, MPFR_RNDN);
        mpfr_add(r7058249, r7058242, r7058248, MPFR_RNDN);
        ;
        mpfr_mul(r7058251, r7058234, r7058250, MPFR_RNDN);
        mpfr_mul(r7058252, r7058234, r7058251, MPFR_RNDN);
        ;
        mpfr_add(r7058254, r7058252, r7058253, MPFR_RNDN);
        mpfr_add(r7058255, r7058249, r7058254, MPFR_RNDN);
        return mpfr_get_d(r7058255, MPFR_RNDN);
}

static mpfr_t r7058256, r7058257, r7058258, r7058259, r7058260, r7058261, r7058262, r7058263, r7058264, r7058265, r7058266, r7058267, r7058268, r7058269, r7058270, r7058271, r7058272, r7058273, r7058274, r7058275, r7058276, r7058277;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7058256);
        mpfr_init(r7058257);
        mpfr_init(r7058258);
        mpfr_init_set_str(r7058259, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r7058260, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7058261);
        mpfr_init(r7058262);
        mpfr_init(r7058263);
        mpfr_init(r7058264);
        mpfr_init(r7058265);
        mpfr_init_set_str(r7058266, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7058267);
        mpfr_init_set_str(r7058268, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7058269);
        mpfr_init(r7058270);
        mpfr_init(r7058271);
        mpfr_init_set_str(r7058272, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7058273);
        mpfr_init(r7058274);
        mpfr_init_set_str(r7058275, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r7058276);
        mpfr_init(r7058277);
}

double f_dm(double x) {
        mpfr_set_d(r7058256, x, MPFR_RNDN);
        mpfr_mul(r7058257, r7058256, r7058256, MPFR_RNDN);
        mpfr_mul(r7058258, r7058257, r7058257, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7058261, r7058260, r7058256, MPFR_RNDN);
        mpfr_mul(r7058262, r7058256, r7058261, MPFR_RNDN);
        mpfr_add(r7058263, r7058259, r7058262, MPFR_RNDN);
        mpfr_mul(r7058264, r7058258, r7058263, MPFR_RNDN);
        mpfr_mul(r7058265, r7058258, r7058258, MPFR_RNDN);
        ;
        mpfr_mul(r7058267, r7058266, r7058257, MPFR_RNDN);
        ;
        mpfr_add(r7058269, r7058267, r7058268, MPFR_RNDN);
        mpfr_mul(r7058270, r7058265, r7058269, MPFR_RNDN);
        mpfr_add(r7058271, r7058264, r7058270, MPFR_RNDN);
        ;
        mpfr_mul(r7058273, r7058256, r7058272, MPFR_RNDN);
        mpfr_mul(r7058274, r7058256, r7058273, MPFR_RNDN);
        ;
        mpfr_add(r7058276, r7058274, r7058275, MPFR_RNDN);
        mpfr_add(r7058277, r7058271, r7058276, MPFR_RNDN);
        return mpfr_get_d(r7058277, MPFR_RNDN);
}

