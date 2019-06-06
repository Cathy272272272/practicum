#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r4677049 = 1.0;
        float r4677050 = -9.0;
        float r4677051 = x;
        float r4677052 = r4677050 * r4677051;
        float r4677053 = r4677049 + r4677052;
        float r4677054 = 18.0;
        float r4677055 = r4677051 * r4677051;
        float r4677056 = r4677054 * r4677055;
        float r4677057 = r4677053 + r4677056;
        float r4677058 = -14.0;
        float r4677059 = r4677055 * r4677051;
        float r4677060 = r4677058 * r4677059;
        float r4677061 = r4677057 + r4677060;
        float r4677062 = 5.25;
        float r4677063 = r4677059 * r4677051;
        float r4677064 = r4677062 * r4677063;
        float r4677065 = r4677061 + r4677064;
        float r4677066 = -1.05;
        float r4677067 = r4677063 * r4677051;
        float r4677068 = r4677066 * r4677067;
        float r4677069 = r4677065 + r4677068;
        float r4677070 = 0.116667;
        float r4677071 = r4677067 * r4677051;
        float r4677072 = r4677070 * r4677071;
        float r4677073 = r4677069 + r4677072;
        float r4677074 = -0.007143;
        float r4677075 = r4677071 * r4677051;
        float r4677076 = r4677074 * r4677075;
        float r4677077 = r4677073 + r4677076;
        float r4677078 = 0.000223;
        float r4677079 = r4677075 * r4677051;
        float r4677080 = r4677078 * r4677079;
        float r4677081 = r4677077 + r4677080;
        float r4677082 = -3e-06;
        float r4677083 = r4677079 * r4677051;
        float r4677084 = r4677082 * r4677083;
        float r4677085 = r4677081 + r4677084;
        return r4677085;
}

double f_id(double x) {
        double r4677086 = 1.0;
        double r4677087 = -9.0;
        double r4677088 = x;
        double r4677089 = r4677087 * r4677088;
        double r4677090 = r4677086 + r4677089;
        double r4677091 = 18.0;
        double r4677092 = r4677088 * r4677088;
        double r4677093 = r4677091 * r4677092;
        double r4677094 = r4677090 + r4677093;
        double r4677095 = -14.0;
        double r4677096 = r4677092 * r4677088;
        double r4677097 = r4677095 * r4677096;
        double r4677098 = r4677094 + r4677097;
        double r4677099 = 5.25;
        double r4677100 = r4677096 * r4677088;
        double r4677101 = r4677099 * r4677100;
        double r4677102 = r4677098 + r4677101;
        double r4677103 = -1.05;
        double r4677104 = r4677100 * r4677088;
        double r4677105 = r4677103 * r4677104;
        double r4677106 = r4677102 + r4677105;
        double r4677107 = 0.116667;
        double r4677108 = r4677104 * r4677088;
        double r4677109 = r4677107 * r4677108;
        double r4677110 = r4677106 + r4677109;
        double r4677111 = -0.007143;
        double r4677112 = r4677108 * r4677088;
        double r4677113 = r4677111 * r4677112;
        double r4677114 = r4677110 + r4677113;
        double r4677115 = 0.000223;
        double r4677116 = r4677112 * r4677088;
        double r4677117 = r4677115 * r4677116;
        double r4677118 = r4677114 + r4677117;
        double r4677119 = -3e-06;
        double r4677120 = r4677116 * r4677088;
        double r4677121 = r4677119 * r4677120;
        double r4677122 = r4677118 + r4677121;
        return r4677122;
}


double f_of(float x) {
        float r4677123 = x;
        float r4677124 = r4677123 * r4677123;
        float r4677125 = 18.0;
        float r4677126 = 14.0;
        float r4677127 = r4677126 * r4677123;
        float r4677128 = r4677125 - r4677127;
        float r4677129 = r4677124 * r4677128;
        float r4677130 = -9.0;
        float r4677131 = r4677130 * r4677123;
        float r4677132 = r4677129 + r4677131;
        float r4677133 = 1.0;
        float r4677134 = 3;
        float r4677135 = 1;
        float r4677136 = r4677134 + r4677135;
        float r4677137 = pow(r4677124, r4677136);
        float r4677138 = -3e-06;
        float r4677139 = r4677123 * r4677138;
        float r4677140 = 0.000223;
        float r4677141 = r4677139 + r4677140;
        float r4677142 = r4677137 * r4677141;
        float r4677143 = r4677133 + r4677142;
        float r4677144 = r4677132 + r4677143;
        float r4677145 = r4677124 * r4677124;
        float r4677146 = 0.116667;
        float r4677147 = r4677123 * r4677146;
        float r4677148 = r4677147 * r4677123;
        float r4677149 = 5.25;
        float r4677150 = -1.05;
        float r4677151 = r4677123 * r4677150;
        float r4677152 = r4677149 + r4677151;
        float r4677153 = r4677148 + r4677152;
        float r4677154 = -0.007143;
        float r4677155 = r4677154 * r4677123;
        float r4677156 = r4677124 * r4677155;
        float r4677157 = r4677153 + r4677156;
        float r4677158 = r4677145 * r4677157;
        float r4677159 = r4677144 + r4677158;
        return r4677159;
}

double f_od(double x) {
        double r4677160 = x;
        double r4677161 = r4677160 * r4677160;
        double r4677162 = 18.0;
        double r4677163 = 14.0;
        double r4677164 = r4677163 * r4677160;
        double r4677165 = r4677162 - r4677164;
        double r4677166 = r4677161 * r4677165;
        double r4677167 = -9.0;
        double r4677168 = r4677167 * r4677160;
        double r4677169 = r4677166 + r4677168;
        double r4677170 = 1.0;
        double r4677171 = 3;
        double r4677172 = 1;
        double r4677173 = r4677171 + r4677172;
        double r4677174 = pow(r4677161, r4677173);
        double r4677175 = -3e-06;
        double r4677176 = r4677160 * r4677175;
        double r4677177 = 0.000223;
        double r4677178 = r4677176 + r4677177;
        double r4677179 = r4677174 * r4677178;
        double r4677180 = r4677170 + r4677179;
        double r4677181 = r4677169 + r4677180;
        double r4677182 = r4677161 * r4677161;
        double r4677183 = 0.116667;
        double r4677184 = r4677160 * r4677183;
        double r4677185 = r4677184 * r4677160;
        double r4677186 = 5.25;
        double r4677187 = -1.05;
        double r4677188 = r4677160 * r4677187;
        double r4677189 = r4677186 + r4677188;
        double r4677190 = r4677185 + r4677189;
        double r4677191 = -0.007143;
        double r4677192 = r4677191 * r4677160;
        double r4677193 = r4677161 * r4677192;
        double r4677194 = r4677190 + r4677193;
        double r4677195 = r4677182 * r4677194;
        double r4677196 = r4677181 + r4677195;
        return r4677196;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4677197, r4677198, r4677199, r4677200, r4677201, r4677202, r4677203, r4677204, r4677205, r4677206, r4677207, r4677208, r4677209, r4677210, r4677211, r4677212, r4677213, r4677214, r4677215, r4677216, r4677217, r4677218, r4677219, r4677220, r4677221, r4677222, r4677223, r4677224, r4677225, r4677226, r4677227, r4677228, r4677229, r4677230, r4677231, r4677232, r4677233;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677197, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677198, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r4677199);
        mpfr_init(r4677200);
        mpfr_init(r4677201);
        mpfr_init_set_str(r4677202, "18.0", 10, MPFR_RNDN);
        mpfr_init(r4677203);
        mpfr_init(r4677204);
        mpfr_init(r4677205);
        mpfr_init_set_str(r4677206, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r4677207);
        mpfr_init(r4677208);
        mpfr_init(r4677209);
        mpfr_init_set_str(r4677210, "5.25", 10, MPFR_RNDN);
        mpfr_init(r4677211);
        mpfr_init(r4677212);
        mpfr_init(r4677213);
        mpfr_init_set_str(r4677214, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r4677215);
        mpfr_init(r4677216);
        mpfr_init(r4677217);
        mpfr_init_set_str(r4677218, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r4677219);
        mpfr_init(r4677220);
        mpfr_init(r4677221);
        mpfr_init_set_str(r4677222, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r4677223);
        mpfr_init(r4677224);
        mpfr_init(r4677225);
        mpfr_init_set_str(r4677226, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r4677227);
        mpfr_init(r4677228);
        mpfr_init(r4677229);
        mpfr_init_set_str(r4677230, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r4677231);
        mpfr_init(r4677232);
        mpfr_init(r4677233);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4677199, x, MPFR_RNDN);
        mpfr_mul(r4677200, r4677198, r4677199, MPFR_RNDN);
        mpfr_add(r4677201, r4677197, r4677200, MPFR_RNDN);
        ;
        mpfr_mul(r4677203, r4677199, r4677199, MPFR_RNDN);
        mpfr_mul(r4677204, r4677202, r4677203, MPFR_RNDN);
        mpfr_add(r4677205, r4677201, r4677204, MPFR_RNDN);
        ;
        mpfr_mul(r4677207, r4677203, r4677199, MPFR_RNDN);
        mpfr_mul(r4677208, r4677206, r4677207, MPFR_RNDN);
        mpfr_add(r4677209, r4677205, r4677208, MPFR_RNDN);
        ;
        mpfr_mul(r4677211, r4677207, r4677199, MPFR_RNDN);
        mpfr_mul(r4677212, r4677210, r4677211, MPFR_RNDN);
        mpfr_add(r4677213, r4677209, r4677212, MPFR_RNDN);
        ;
        mpfr_mul(r4677215, r4677211, r4677199, MPFR_RNDN);
        mpfr_mul(r4677216, r4677214, r4677215, MPFR_RNDN);
        mpfr_add(r4677217, r4677213, r4677216, MPFR_RNDN);
        ;
        mpfr_mul(r4677219, r4677215, r4677199, MPFR_RNDN);
        mpfr_mul(r4677220, r4677218, r4677219, MPFR_RNDN);
        mpfr_add(r4677221, r4677217, r4677220, MPFR_RNDN);
        ;
        mpfr_mul(r4677223, r4677219, r4677199, MPFR_RNDN);
        mpfr_mul(r4677224, r4677222, r4677223, MPFR_RNDN);
        mpfr_add(r4677225, r4677221, r4677224, MPFR_RNDN);
        ;
        mpfr_mul(r4677227, r4677223, r4677199, MPFR_RNDN);
        mpfr_mul(r4677228, r4677226, r4677227, MPFR_RNDN);
        mpfr_add(r4677229, r4677225, r4677228, MPFR_RNDN);
        ;
        mpfr_mul(r4677231, r4677227, r4677199, MPFR_RNDN);
        mpfr_mul(r4677232, r4677230, r4677231, MPFR_RNDN);
        mpfr_add(r4677233, r4677229, r4677232, MPFR_RNDN);
        return mpfr_get_d(r4677233, MPFR_RNDN);
}

static mpfr_t r4677234, r4677235, r4677236, r4677237, r4677238, r4677239, r4677240, r4677241, r4677242, r4677243, r4677244, r4677245, r4677246, r4677247, r4677248, r4677249, r4677250, r4677251, r4677252, r4677253, r4677254, r4677255, r4677256, r4677257, r4677258, r4677259, r4677260, r4677261, r4677262, r4677263, r4677264, r4677265, r4677266, r4677267, r4677268, r4677269, r4677270;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4677234);
        mpfr_init(r4677235);
        mpfr_init_set_str(r4677236, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677237, "14.0", 10, MPFR_RNDN);
        mpfr_init(r4677238);
        mpfr_init(r4677239);
        mpfr_init(r4677240);
        mpfr_init_set_str(r4677241, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r4677242);
        mpfr_init(r4677243);
        mpfr_init_set_str(r4677244, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677245, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677246, "1", 10, MPFR_RNDN);
        mpfr_init(r4677247);
        mpfr_init(r4677248);
        mpfr_init_set_str(r4677249, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r4677250);
        mpfr_init_set_str(r4677251, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r4677252);
        mpfr_init(r4677253);
        mpfr_init(r4677254);
        mpfr_init(r4677255);
        mpfr_init(r4677256);
        mpfr_init_set_str(r4677257, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r4677258);
        mpfr_init(r4677259);
        mpfr_init_set_str(r4677260, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677261, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r4677262);
        mpfr_init(r4677263);
        mpfr_init(r4677264);
        mpfr_init_set_str(r4677265, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r4677266);
        mpfr_init(r4677267);
        mpfr_init(r4677268);
        mpfr_init(r4677269);
        mpfr_init(r4677270);
}

double f_fm(double x) {
        mpfr_set_d(r4677234, x, MPFR_RNDN);
        mpfr_mul(r4677235, r4677234, r4677234, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4677238, r4677237, r4677234, MPFR_RNDN);
        mpfr_sub(r4677239, r4677236, r4677238, MPFR_RNDN);
        mpfr_mul(r4677240, r4677235, r4677239, MPFR_RNDN);
        ;
        mpfr_mul(r4677242, r4677241, r4677234, MPFR_RNDN);
        mpfr_add(r4677243, r4677240, r4677242, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r4677247, r4677245, r4677246, MPFR_RNDN);
        mpfr_pow(r4677248, r4677235, r4677247, MPFR_RNDN);
        ;
        mpfr_mul(r4677250, r4677234, r4677249, MPFR_RNDN);
        ;
        mpfr_add(r4677252, r4677250, r4677251, MPFR_RNDN);
        mpfr_mul(r4677253, r4677248, r4677252, MPFR_RNDN);
        mpfr_add(r4677254, r4677244, r4677253, MPFR_RNDN);
        mpfr_add(r4677255, r4677243, r4677254, MPFR_RNDN);
        mpfr_mul(r4677256, r4677235, r4677235, MPFR_RNDN);
        ;
        mpfr_mul(r4677258, r4677234, r4677257, MPFR_RNDN);
        mpfr_mul(r4677259, r4677258, r4677234, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4677262, r4677234, r4677261, MPFR_RNDN);
        mpfr_add(r4677263, r4677260, r4677262, MPFR_RNDN);
        mpfr_add(r4677264, r4677259, r4677263, MPFR_RNDN);
        ;
        mpfr_mul(r4677266, r4677265, r4677234, MPFR_RNDN);
        mpfr_mul(r4677267, r4677235, r4677266, MPFR_RNDN);
        mpfr_add(r4677268, r4677264, r4677267, MPFR_RNDN);
        mpfr_mul(r4677269, r4677256, r4677268, MPFR_RNDN);
        mpfr_add(r4677270, r4677255, r4677269, MPFR_RNDN);
        return mpfr_get_d(r4677270, MPFR_RNDN);
}

static mpfr_t r4677271, r4677272, r4677273, r4677274, r4677275, r4677276, r4677277, r4677278, r4677279, r4677280, r4677281, r4677282, r4677283, r4677284, r4677285, r4677286, r4677287, r4677288, r4677289, r4677290, r4677291, r4677292, r4677293, r4677294, r4677295, r4677296, r4677297, r4677298, r4677299, r4677300, r4677301, r4677302, r4677303, r4677304, r4677305, r4677306, r4677307;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4677271);
        mpfr_init(r4677272);
        mpfr_init_set_str(r4677273, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677274, "14.0", 10, MPFR_RNDN);
        mpfr_init(r4677275);
        mpfr_init(r4677276);
        mpfr_init(r4677277);
        mpfr_init_set_str(r4677278, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r4677279);
        mpfr_init(r4677280);
        mpfr_init_set_str(r4677281, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677282, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677283, "1", 10, MPFR_RNDN);
        mpfr_init(r4677284);
        mpfr_init(r4677285);
        mpfr_init_set_str(r4677286, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r4677287);
        mpfr_init_set_str(r4677288, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r4677289);
        mpfr_init(r4677290);
        mpfr_init(r4677291);
        mpfr_init(r4677292);
        mpfr_init(r4677293);
        mpfr_init_set_str(r4677294, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r4677295);
        mpfr_init(r4677296);
        mpfr_init_set_str(r4677297, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677298, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r4677299);
        mpfr_init(r4677300);
        mpfr_init(r4677301);
        mpfr_init_set_str(r4677302, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r4677303);
        mpfr_init(r4677304);
        mpfr_init(r4677305);
        mpfr_init(r4677306);
        mpfr_init(r4677307);
}

double f_dm(double x) {
        mpfr_set_d(r4677271, x, MPFR_RNDN);
        mpfr_mul(r4677272, r4677271, r4677271, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4677275, r4677274, r4677271, MPFR_RNDN);
        mpfr_sub(r4677276, r4677273, r4677275, MPFR_RNDN);
        mpfr_mul(r4677277, r4677272, r4677276, MPFR_RNDN);
        ;
        mpfr_mul(r4677279, r4677278, r4677271, MPFR_RNDN);
        mpfr_add(r4677280, r4677277, r4677279, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r4677284, r4677282, r4677283, MPFR_RNDN);
        mpfr_pow(r4677285, r4677272, r4677284, MPFR_RNDN);
        ;
        mpfr_mul(r4677287, r4677271, r4677286, MPFR_RNDN);
        ;
        mpfr_add(r4677289, r4677287, r4677288, MPFR_RNDN);
        mpfr_mul(r4677290, r4677285, r4677289, MPFR_RNDN);
        mpfr_add(r4677291, r4677281, r4677290, MPFR_RNDN);
        mpfr_add(r4677292, r4677280, r4677291, MPFR_RNDN);
        mpfr_mul(r4677293, r4677272, r4677272, MPFR_RNDN);
        ;
        mpfr_mul(r4677295, r4677271, r4677294, MPFR_RNDN);
        mpfr_mul(r4677296, r4677295, r4677271, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4677299, r4677271, r4677298, MPFR_RNDN);
        mpfr_add(r4677300, r4677297, r4677299, MPFR_RNDN);
        mpfr_add(r4677301, r4677296, r4677300, MPFR_RNDN);
        ;
        mpfr_mul(r4677303, r4677302, r4677271, MPFR_RNDN);
        mpfr_mul(r4677304, r4677272, r4677303, MPFR_RNDN);
        mpfr_add(r4677305, r4677301, r4677304, MPFR_RNDN);
        mpfr_mul(r4677306, r4677293, r4677305, MPFR_RNDN);
        mpfr_add(r4677307, r4677292, r4677306, MPFR_RNDN);
        return mpfr_get_d(r4677307, MPFR_RNDN);
}

