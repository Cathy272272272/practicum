#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r11544062 = 1.0;
        float r11544063 = -8.0;
        float r11544064 = x;
        float r11544065 = r11544063 * r11544064;
        float r11544066 = r11544062 + r11544065;
        float r11544067 = 14.0;
        float r11544068 = r11544064 * r11544064;
        float r11544069 = r11544067 * r11544068;
        float r11544070 = r11544066 + r11544069;
        float r11544071 = -9.333333;
        float r11544072 = r11544068 * r11544064;
        float r11544073 = r11544071 * r11544072;
        float r11544074 = r11544070 + r11544073;
        float r11544075 = 2.916667;
        float r11544076 = r11544072 * r11544064;
        float r11544077 = r11544075 * r11544076;
        float r11544078 = r11544074 + r11544077;
        float r11544079 = -0.466667;
        float r11544080 = r11544076 * r11544064;
        float r11544081 = r11544079 * r11544080;
        float r11544082 = r11544078 + r11544081;
        float r11544083 = 0.038889;
        float r11544084 = r11544080 * r11544064;
        float r11544085 = r11544083 * r11544084;
        float r11544086 = r11544082 + r11544085;
        float r11544087 = -0.001587;
        float r11544088 = r11544084 * r11544064;
        float r11544089 = r11544087 * r11544088;
        float r11544090 = r11544086 + r11544089;
        float r11544091 = 2.5e-05;
        float r11544092 = r11544088 * r11544064;
        float r11544093 = r11544091 * r11544092;
        float r11544094 = r11544090 + r11544093;
        return r11544094;
}

double f_id(double x) {
        double r11544095 = 1.0;
        double r11544096 = -8.0;
        double r11544097 = x;
        double r11544098 = r11544096 * r11544097;
        double r11544099 = r11544095 + r11544098;
        double r11544100 = 14.0;
        double r11544101 = r11544097 * r11544097;
        double r11544102 = r11544100 * r11544101;
        double r11544103 = r11544099 + r11544102;
        double r11544104 = -9.333333;
        double r11544105 = r11544101 * r11544097;
        double r11544106 = r11544104 * r11544105;
        double r11544107 = r11544103 + r11544106;
        double r11544108 = 2.916667;
        double r11544109 = r11544105 * r11544097;
        double r11544110 = r11544108 * r11544109;
        double r11544111 = r11544107 + r11544110;
        double r11544112 = -0.466667;
        double r11544113 = r11544109 * r11544097;
        double r11544114 = r11544112 * r11544113;
        double r11544115 = r11544111 + r11544114;
        double r11544116 = 0.038889;
        double r11544117 = r11544113 * r11544097;
        double r11544118 = r11544116 * r11544117;
        double r11544119 = r11544115 + r11544118;
        double r11544120 = -0.001587;
        double r11544121 = r11544117 * r11544097;
        double r11544122 = r11544120 * r11544121;
        double r11544123 = r11544119 + r11544122;
        double r11544124 = 2.5e-05;
        double r11544125 = r11544121 * r11544097;
        double r11544126 = r11544124 * r11544125;
        double r11544127 = r11544123 + r11544126;
        return r11544127;
}


double f_of(float x) {
        float r11544128 = x;
        float r11544129 = 2;
        float r11544130 = r11544129 + r11544129;
        float r11544131 = pow(r11544128, r11544130);
        float r11544132 = 2.916667;
        float r11544133 = -0.466667;
        float r11544134 = r11544128 * r11544133;
        float r11544135 = r11544132 + r11544134;
        float r11544136 = r11544131 * r11544135;
        float r11544137 = 1.0;
        float r11544138 = -8.0;
        float r11544139 = r11544138 * r11544128;
        float r11544140 = r11544137 + r11544139;
        float r11544141 = r11544136 + r11544140;
        float r11544142 = 2.5e-05;
        float r11544143 = r11544128 * r11544142;
        float r11544144 = r11544128 * r11544143;
        float r11544145 = -0.001587;
        float r11544146 = r11544145 * r11544128;
        float r11544147 = 0.038889;
        float r11544148 = r11544146 + r11544147;
        float r11544149 = r11544144 + r11544148;
        float r11544150 = 3;
        float r11544151 = pow(r11544128, r11544150);
        float r11544152 = r11544151 * r11544151;
        float r11544153 = r11544149 * r11544152;
        float r11544154 = r11544128 * r11544128;
        float r11544155 = 14.0;
        float r11544156 = 9.333333;
        float r11544157 = r11544128 * r11544156;
        float r11544158 = r11544155 - r11544157;
        float r11544159 = r11544154 * r11544158;
        float r11544160 = r11544153 + r11544159;
        float r11544161 = r11544141 + r11544160;
        return r11544161;
}

double f_od(double x) {
        double r11544162 = x;
        double r11544163 = 2;
        double r11544164 = r11544163 + r11544163;
        double r11544165 = pow(r11544162, r11544164);
        double r11544166 = 2.916667;
        double r11544167 = -0.466667;
        double r11544168 = r11544162 * r11544167;
        double r11544169 = r11544166 + r11544168;
        double r11544170 = r11544165 * r11544169;
        double r11544171 = 1.0;
        double r11544172 = -8.0;
        double r11544173 = r11544172 * r11544162;
        double r11544174 = r11544171 + r11544173;
        double r11544175 = r11544170 + r11544174;
        double r11544176 = 2.5e-05;
        double r11544177 = r11544162 * r11544176;
        double r11544178 = r11544162 * r11544177;
        double r11544179 = -0.001587;
        double r11544180 = r11544179 * r11544162;
        double r11544181 = 0.038889;
        double r11544182 = r11544180 + r11544181;
        double r11544183 = r11544178 + r11544182;
        double r11544184 = 3;
        double r11544185 = pow(r11544162, r11544184);
        double r11544186 = r11544185 * r11544185;
        double r11544187 = r11544183 * r11544186;
        double r11544188 = r11544162 * r11544162;
        double r11544189 = 14.0;
        double r11544190 = 9.333333;
        double r11544191 = r11544162 * r11544190;
        double r11544192 = r11544189 - r11544191;
        double r11544193 = r11544188 * r11544192;
        double r11544194 = r11544187 + r11544193;
        double r11544195 = r11544175 + r11544194;
        return r11544195;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11544196, r11544197, r11544198, r11544199, r11544200, r11544201, r11544202, r11544203, r11544204, r11544205, r11544206, r11544207, r11544208, r11544209, r11544210, r11544211, r11544212, r11544213, r11544214, r11544215, r11544216, r11544217, r11544218, r11544219, r11544220, r11544221, r11544222, r11544223, r11544224, r11544225, r11544226, r11544227, r11544228;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11544196, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544197, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11544198);
        mpfr_init(r11544199);
        mpfr_init(r11544200);
        mpfr_init_set_str(r11544201, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11544202);
        mpfr_init(r11544203);
        mpfr_init(r11544204);
        mpfr_init_set_str(r11544205, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r11544206);
        mpfr_init(r11544207);
        mpfr_init(r11544208);
        mpfr_init_set_str(r11544209, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r11544210);
        mpfr_init(r11544211);
        mpfr_init(r11544212);
        mpfr_init_set_str(r11544213, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11544214);
        mpfr_init(r11544215);
        mpfr_init(r11544216);
        mpfr_init_set_str(r11544217, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11544218);
        mpfr_init(r11544219);
        mpfr_init(r11544220);
        mpfr_init_set_str(r11544221, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r11544222);
        mpfr_init(r11544223);
        mpfr_init(r11544224);
        mpfr_init_set_str(r11544225, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11544226);
        mpfr_init(r11544227);
        mpfr_init(r11544228);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11544198, x, MPFR_RNDN);
        mpfr_mul(r11544199, r11544197, r11544198, MPFR_RNDN);
        mpfr_add(r11544200, r11544196, r11544199, MPFR_RNDN);
        ;
        mpfr_mul(r11544202, r11544198, r11544198, MPFR_RNDN);
        mpfr_mul(r11544203, r11544201, r11544202, MPFR_RNDN);
        mpfr_add(r11544204, r11544200, r11544203, MPFR_RNDN);
        ;
        mpfr_mul(r11544206, r11544202, r11544198, MPFR_RNDN);
        mpfr_mul(r11544207, r11544205, r11544206, MPFR_RNDN);
        mpfr_add(r11544208, r11544204, r11544207, MPFR_RNDN);
        ;
        mpfr_mul(r11544210, r11544206, r11544198, MPFR_RNDN);
        mpfr_mul(r11544211, r11544209, r11544210, MPFR_RNDN);
        mpfr_add(r11544212, r11544208, r11544211, MPFR_RNDN);
        ;
        mpfr_mul(r11544214, r11544210, r11544198, MPFR_RNDN);
        mpfr_mul(r11544215, r11544213, r11544214, MPFR_RNDN);
        mpfr_add(r11544216, r11544212, r11544215, MPFR_RNDN);
        ;
        mpfr_mul(r11544218, r11544214, r11544198, MPFR_RNDN);
        mpfr_mul(r11544219, r11544217, r11544218, MPFR_RNDN);
        mpfr_add(r11544220, r11544216, r11544219, MPFR_RNDN);
        ;
        mpfr_mul(r11544222, r11544218, r11544198, MPFR_RNDN);
        mpfr_mul(r11544223, r11544221, r11544222, MPFR_RNDN);
        mpfr_add(r11544224, r11544220, r11544223, MPFR_RNDN);
        ;
        mpfr_mul(r11544226, r11544222, r11544198, MPFR_RNDN);
        mpfr_mul(r11544227, r11544225, r11544226, MPFR_RNDN);
        mpfr_add(r11544228, r11544224, r11544227, MPFR_RNDN);
        return mpfr_get_d(r11544228, MPFR_RNDN);
}

static mpfr_t r11544229, r11544230, r11544231, r11544232, r11544233, r11544234, r11544235, r11544236, r11544237, r11544238, r11544239, r11544240, r11544241, r11544242, r11544243, r11544244, r11544245, r11544246, r11544247, r11544248, r11544249, r11544250, r11544251, r11544252, r11544253, r11544254, r11544255, r11544256, r11544257, r11544258, r11544259, r11544260, r11544261, r11544262;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544229);
        mpfr_init_set_str(r11544230, "2", 10, MPFR_RNDN);
        mpfr_init(r11544231);
        mpfr_init(r11544232);
        mpfr_init_set_str(r11544233, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544234, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11544235);
        mpfr_init(r11544236);
        mpfr_init(r11544237);
        mpfr_init_set_str(r11544238, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544239, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11544240);
        mpfr_init(r11544241);
        mpfr_init(r11544242);
        mpfr_init_set_str(r11544243, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11544244);
        mpfr_init(r11544245);
        mpfr_init_set_str(r11544246, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r11544247);
        mpfr_init_set_str(r11544248, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11544249);
        mpfr_init(r11544250);
        mpfr_init_set_str(r11544251, "3", 10, MPFR_RNDN);
        mpfr_init(r11544252);
        mpfr_init(r11544253);
        mpfr_init(r11544254);
        mpfr_init(r11544255);
        mpfr_init_set_str(r11544256, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544257, "9.333333", 10, MPFR_RNDN);
        mpfr_init(r11544258);
        mpfr_init(r11544259);
        mpfr_init(r11544260);
        mpfr_init(r11544261);
        mpfr_init(r11544262);
}

double f_fm(double x) {
        mpfr_set_d(r11544229, x, MPFR_RNDN);
        ;
        mpfr_add(r11544231, r11544230, r11544230, MPFR_RNDN);
        mpfr_pow(r11544232, r11544229, r11544231, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544235, r11544229, r11544234, MPFR_RNDN);
        mpfr_add(r11544236, r11544233, r11544235, MPFR_RNDN);
        mpfr_mul(r11544237, r11544232, r11544236, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544240, r11544239, r11544229, MPFR_RNDN);
        mpfr_add(r11544241, r11544238, r11544240, MPFR_RNDN);
        mpfr_add(r11544242, r11544237, r11544241, MPFR_RNDN);
        ;
        mpfr_mul(r11544244, r11544229, r11544243, MPFR_RNDN);
        mpfr_mul(r11544245, r11544229, r11544244, MPFR_RNDN);
        ;
        mpfr_mul(r11544247, r11544246, r11544229, MPFR_RNDN);
        ;
        mpfr_add(r11544249, r11544247, r11544248, MPFR_RNDN);
        mpfr_add(r11544250, r11544245, r11544249, MPFR_RNDN);
        ;
        mpfr_pow(r11544252, r11544229, r11544251, MPFR_RNDN);
        mpfr_mul(r11544253, r11544252, r11544252, MPFR_RNDN);
        mpfr_mul(r11544254, r11544250, r11544253, MPFR_RNDN);
        mpfr_mul(r11544255, r11544229, r11544229, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544258, r11544229, r11544257, MPFR_RNDN);
        mpfr_sub(r11544259, r11544256, r11544258, MPFR_RNDN);
        mpfr_mul(r11544260, r11544255, r11544259, MPFR_RNDN);
        mpfr_add(r11544261, r11544254, r11544260, MPFR_RNDN);
        mpfr_add(r11544262, r11544242, r11544261, MPFR_RNDN);
        return mpfr_get_d(r11544262, MPFR_RNDN);
}

static mpfr_t r11544263, r11544264, r11544265, r11544266, r11544267, r11544268, r11544269, r11544270, r11544271, r11544272, r11544273, r11544274, r11544275, r11544276, r11544277, r11544278, r11544279, r11544280, r11544281, r11544282, r11544283, r11544284, r11544285, r11544286, r11544287, r11544288, r11544289, r11544290, r11544291, r11544292, r11544293, r11544294, r11544295, r11544296;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544263);
        mpfr_init_set_str(r11544264, "2", 10, MPFR_RNDN);
        mpfr_init(r11544265);
        mpfr_init(r11544266);
        mpfr_init_set_str(r11544267, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544268, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11544269);
        mpfr_init(r11544270);
        mpfr_init(r11544271);
        mpfr_init_set_str(r11544272, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544273, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11544274);
        mpfr_init(r11544275);
        mpfr_init(r11544276);
        mpfr_init_set_str(r11544277, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11544278);
        mpfr_init(r11544279);
        mpfr_init_set_str(r11544280, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r11544281);
        mpfr_init_set_str(r11544282, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11544283);
        mpfr_init(r11544284);
        mpfr_init_set_str(r11544285, "3", 10, MPFR_RNDN);
        mpfr_init(r11544286);
        mpfr_init(r11544287);
        mpfr_init(r11544288);
        mpfr_init(r11544289);
        mpfr_init_set_str(r11544290, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544291, "9.333333", 10, MPFR_RNDN);
        mpfr_init(r11544292);
        mpfr_init(r11544293);
        mpfr_init(r11544294);
        mpfr_init(r11544295);
        mpfr_init(r11544296);
}

double f_dm(double x) {
        mpfr_set_d(r11544263, x, MPFR_RNDN);
        ;
        mpfr_add(r11544265, r11544264, r11544264, MPFR_RNDN);
        mpfr_pow(r11544266, r11544263, r11544265, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544269, r11544263, r11544268, MPFR_RNDN);
        mpfr_add(r11544270, r11544267, r11544269, MPFR_RNDN);
        mpfr_mul(r11544271, r11544266, r11544270, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544274, r11544273, r11544263, MPFR_RNDN);
        mpfr_add(r11544275, r11544272, r11544274, MPFR_RNDN);
        mpfr_add(r11544276, r11544271, r11544275, MPFR_RNDN);
        ;
        mpfr_mul(r11544278, r11544263, r11544277, MPFR_RNDN);
        mpfr_mul(r11544279, r11544263, r11544278, MPFR_RNDN);
        ;
        mpfr_mul(r11544281, r11544280, r11544263, MPFR_RNDN);
        ;
        mpfr_add(r11544283, r11544281, r11544282, MPFR_RNDN);
        mpfr_add(r11544284, r11544279, r11544283, MPFR_RNDN);
        ;
        mpfr_pow(r11544286, r11544263, r11544285, MPFR_RNDN);
        mpfr_mul(r11544287, r11544286, r11544286, MPFR_RNDN);
        mpfr_mul(r11544288, r11544284, r11544287, MPFR_RNDN);
        mpfr_mul(r11544289, r11544263, r11544263, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544292, r11544263, r11544291, MPFR_RNDN);
        mpfr_sub(r11544293, r11544290, r11544292, MPFR_RNDN);
        mpfr_mul(r11544294, r11544289, r11544293, MPFR_RNDN);
        mpfr_add(r11544295, r11544288, r11544294, MPFR_RNDN);
        mpfr_add(r11544296, r11544276, r11544295, MPFR_RNDN);
        return mpfr_get_d(r11544296, MPFR_RNDN);
}

