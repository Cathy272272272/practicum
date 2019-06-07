#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r11628129 = -17297280.0;
        float r11628130 = 242161920.0;
        float r11628131 = x;
        float r11628132 = r11628131 * r11628131;
        float r11628133 = r11628130 * r11628132;
        float r11628134 = r11628129 + r11628133;
        float r11628135 = -484323840.0;
        float r11628136 = r11628132 * r11628131;
        float r11628137 = r11628136 * r11628131;
        float r11628138 = r11628135 * r11628137;
        float r11628139 = r11628134 + r11628138;
        float r11628140 = 322882560.0;
        float r11628141 = r11628137 * r11628131;
        float r11628142 = r11628141 * r11628131;
        float r11628143 = r11628140 * r11628142;
        float r11628144 = r11628139 + r11628143;
        float r11628145 = -92252160.0;
        float r11628146 = r11628142 * r11628131;
        float r11628147 = r11628146 * r11628131;
        float r11628148 = r11628145 * r11628147;
        float r11628149 = r11628144 + r11628148;
        float r11628150 = 12300288.0;
        float r11628151 = r11628147 * r11628131;
        float r11628152 = r11628151 * r11628131;
        float r11628153 = r11628150 * r11628152;
        float r11628154 = r11628149 + r11628153;
        float r11628155 = -745472.0;
        float r11628156 = r11628152 * r11628131;
        float r11628157 = r11628156 * r11628131;
        float r11628158 = r11628155 * r11628157;
        float r11628159 = r11628154 + r11628158;
        float r11628160 = 16384.0;
        float r11628161 = r11628157 * r11628131;
        float r11628162 = r11628161 * r11628131;
        float r11628163 = r11628160 * r11628162;
        float r11628164 = r11628159 + r11628163;
        return r11628164;
}

double f_id(double x) {
        double r11628165 = -17297280.0;
        double r11628166 = 242161920.0;
        double r11628167 = x;
        double r11628168 = r11628167 * r11628167;
        double r11628169 = r11628166 * r11628168;
        double r11628170 = r11628165 + r11628169;
        double r11628171 = -484323840.0;
        double r11628172 = r11628168 * r11628167;
        double r11628173 = r11628172 * r11628167;
        double r11628174 = r11628171 * r11628173;
        double r11628175 = r11628170 + r11628174;
        double r11628176 = 322882560.0;
        double r11628177 = r11628173 * r11628167;
        double r11628178 = r11628177 * r11628167;
        double r11628179 = r11628176 * r11628178;
        double r11628180 = r11628175 + r11628179;
        double r11628181 = -92252160.0;
        double r11628182 = r11628178 * r11628167;
        double r11628183 = r11628182 * r11628167;
        double r11628184 = r11628181 * r11628183;
        double r11628185 = r11628180 + r11628184;
        double r11628186 = 12300288.0;
        double r11628187 = r11628183 * r11628167;
        double r11628188 = r11628187 * r11628167;
        double r11628189 = r11628186 * r11628188;
        double r11628190 = r11628185 + r11628189;
        double r11628191 = -745472.0;
        double r11628192 = r11628188 * r11628167;
        double r11628193 = r11628192 * r11628167;
        double r11628194 = r11628191 * r11628193;
        double r11628195 = r11628190 + r11628194;
        double r11628196 = 16384.0;
        double r11628197 = r11628193 * r11628167;
        double r11628198 = r11628197 * r11628167;
        double r11628199 = r11628196 * r11628198;
        double r11628200 = r11628195 + r11628199;
        return r11628200;
}


double f_of(float x) {
        float r11628201 = 16384.0;
        float r11628202 = x;
        float r11628203 = r11628202 * r11628202;
        float r11628204 = r11628201 * r11628203;
        float r11628205 = -745472.0;
        float r11628206 = r11628204 + r11628205;
        float r11628207 = 3;
        float r11628208 = pow(r11628202, r11628207);
        float r11628209 = pow(r11628208, r11628207);
        float r11628210 = 1;
        float r11628211 = r11628207 + r11628210;
        float r11628212 = pow(r11628209, r11628211);
        float r11628213 = r11628206 * r11628212;
        float r11628214 = r11628206 * r11628206;
        float r11628215 = r11628213 * r11628214;
        float r11628216 = cbrt(r11628215);
        float r11628217 = 242161920.0;
        float r11628218 = r11628217 * r11628202;
        float r11628219 = r11628202 * r11628218;
        float r11628220 = 4;
        float r11628221 = pow(r11628202, r11628220);
        float r11628222 = -484323840.0;
        float r11628223 = r11628221 * r11628222;
        float r11628224 = r11628219 + r11628223;
        float r11628225 = r11628216 + r11628224;
        float r11628226 = r11628203 * r11628203;
        float r11628227 = 322882560.0;
        float r11628228 = r11628227 * r11628203;
        float r11628229 = r11628226 * r11628228;
        float r11628230 = -17297280.0;
        float r11628231 = r11628229 + r11628230;
        float r11628232 = 12300288.0;
        float r11628233 = r11628232 * r11628202;
        float r11628234 = r11628233 * r11628202;
        float r11628235 = -92252160.0;
        float r11628236 = r11628234 + r11628235;
        float r11628237 = pow(r11628203, r11628211);
        float r11628238 = r11628236 * r11628237;
        float r11628239 = r11628231 + r11628238;
        float r11628240 = r11628225 + r11628239;
        return r11628240;
}

double f_od(double x) {
        double r11628241 = 16384.0;
        double r11628242 = x;
        double r11628243 = r11628242 * r11628242;
        double r11628244 = r11628241 * r11628243;
        double r11628245 = -745472.0;
        double r11628246 = r11628244 + r11628245;
        double r11628247 = 3;
        double r11628248 = pow(r11628242, r11628247);
        double r11628249 = pow(r11628248, r11628247);
        double r11628250 = 1;
        double r11628251 = r11628247 + r11628250;
        double r11628252 = pow(r11628249, r11628251);
        double r11628253 = r11628246 * r11628252;
        double r11628254 = r11628246 * r11628246;
        double r11628255 = r11628253 * r11628254;
        double r11628256 = cbrt(r11628255);
        double r11628257 = 242161920.0;
        double r11628258 = r11628257 * r11628242;
        double r11628259 = r11628242 * r11628258;
        double r11628260 = 4;
        double r11628261 = pow(r11628242, r11628260);
        double r11628262 = -484323840.0;
        double r11628263 = r11628261 * r11628262;
        double r11628264 = r11628259 + r11628263;
        double r11628265 = r11628256 + r11628264;
        double r11628266 = r11628243 * r11628243;
        double r11628267 = 322882560.0;
        double r11628268 = r11628267 * r11628243;
        double r11628269 = r11628266 * r11628268;
        double r11628270 = -17297280.0;
        double r11628271 = r11628269 + r11628270;
        double r11628272 = 12300288.0;
        double r11628273 = r11628272 * r11628242;
        double r11628274 = r11628273 * r11628242;
        double r11628275 = -92252160.0;
        double r11628276 = r11628274 + r11628275;
        double r11628277 = pow(r11628243, r11628251);
        double r11628278 = r11628276 * r11628277;
        double r11628279 = r11628271 + r11628278;
        double r11628280 = r11628265 + r11628279;
        return r11628280;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11628281, r11628282, r11628283, r11628284, r11628285, r11628286, r11628287, r11628288, r11628289, r11628290, r11628291, r11628292, r11628293, r11628294, r11628295, r11628296, r11628297, r11628298, r11628299, r11628300, r11628301, r11628302, r11628303, r11628304, r11628305, r11628306, r11628307, r11628308, r11628309, r11628310, r11628311, r11628312, r11628313, r11628314, r11628315, r11628316;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11628281, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11628282, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r11628283);
        mpfr_init(r11628284);
        mpfr_init(r11628285);
        mpfr_init(r11628286);
        mpfr_init_set_str(r11628287, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r11628288);
        mpfr_init(r11628289);
        mpfr_init(r11628290);
        mpfr_init(r11628291);
        mpfr_init_set_str(r11628292, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r11628293);
        mpfr_init(r11628294);
        mpfr_init(r11628295);
        mpfr_init(r11628296);
        mpfr_init_set_str(r11628297, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r11628298);
        mpfr_init(r11628299);
        mpfr_init(r11628300);
        mpfr_init(r11628301);
        mpfr_init_set_str(r11628302, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r11628303);
        mpfr_init(r11628304);
        mpfr_init(r11628305);
        mpfr_init(r11628306);
        mpfr_init_set_str(r11628307, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r11628308);
        mpfr_init(r11628309);
        mpfr_init(r11628310);
        mpfr_init(r11628311);
        mpfr_init_set_str(r11628312, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r11628313);
        mpfr_init(r11628314);
        mpfr_init(r11628315);
        mpfr_init(r11628316);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11628283, x, MPFR_RNDN);
        mpfr_mul(r11628284, r11628283, r11628283, MPFR_RNDN);
        mpfr_mul(r11628285, r11628282, r11628284, MPFR_RNDN);
        mpfr_add(r11628286, r11628281, r11628285, MPFR_RNDN);
        ;
        mpfr_mul(r11628288, r11628284, r11628283, MPFR_RNDN);
        mpfr_mul(r11628289, r11628288, r11628283, MPFR_RNDN);
        mpfr_mul(r11628290, r11628287, r11628289, MPFR_RNDN);
        mpfr_add(r11628291, r11628286, r11628290, MPFR_RNDN);
        ;
        mpfr_mul(r11628293, r11628289, r11628283, MPFR_RNDN);
        mpfr_mul(r11628294, r11628293, r11628283, MPFR_RNDN);
        mpfr_mul(r11628295, r11628292, r11628294, MPFR_RNDN);
        mpfr_add(r11628296, r11628291, r11628295, MPFR_RNDN);
        ;
        mpfr_mul(r11628298, r11628294, r11628283, MPFR_RNDN);
        mpfr_mul(r11628299, r11628298, r11628283, MPFR_RNDN);
        mpfr_mul(r11628300, r11628297, r11628299, MPFR_RNDN);
        mpfr_add(r11628301, r11628296, r11628300, MPFR_RNDN);
        ;
        mpfr_mul(r11628303, r11628299, r11628283, MPFR_RNDN);
        mpfr_mul(r11628304, r11628303, r11628283, MPFR_RNDN);
        mpfr_mul(r11628305, r11628302, r11628304, MPFR_RNDN);
        mpfr_add(r11628306, r11628301, r11628305, MPFR_RNDN);
        ;
        mpfr_mul(r11628308, r11628304, r11628283, MPFR_RNDN);
        mpfr_mul(r11628309, r11628308, r11628283, MPFR_RNDN);
        mpfr_mul(r11628310, r11628307, r11628309, MPFR_RNDN);
        mpfr_add(r11628311, r11628306, r11628310, MPFR_RNDN);
        ;
        mpfr_mul(r11628313, r11628309, r11628283, MPFR_RNDN);
        mpfr_mul(r11628314, r11628313, r11628283, MPFR_RNDN);
        mpfr_mul(r11628315, r11628312, r11628314, MPFR_RNDN);
        mpfr_add(r11628316, r11628311, r11628315, MPFR_RNDN);
        return mpfr_get_d(r11628316, MPFR_RNDN);
}

static mpfr_t r11628317, r11628318, r11628319, r11628320, r11628321, r11628322, r11628323, r11628324, r11628325, r11628326, r11628327, r11628328, r11628329, r11628330, r11628331, r11628332, r11628333, r11628334, r11628335, r11628336, r11628337, r11628338, r11628339, r11628340, r11628341, r11628342, r11628343, r11628344, r11628345, r11628346, r11628347, r11628348, r11628349, r11628350, r11628351, r11628352, r11628353, r11628354, r11628355, r11628356;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11628317, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r11628318);
        mpfr_init(r11628319);
        mpfr_init(r11628320);
        mpfr_init_set_str(r11628321, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r11628322);
        mpfr_init_set_str(r11628323, "3", 10, MPFR_RNDN);
        mpfr_init(r11628324);
        mpfr_init(r11628325);
        mpfr_init_set_str(r11628326, "1", 10, MPFR_RNDN);
        mpfr_init(r11628327);
        mpfr_init(r11628328);
        mpfr_init(r11628329);
        mpfr_init(r11628330);
        mpfr_init(r11628331);
        mpfr_init(r11628332);
        mpfr_init_set_str(r11628333, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r11628334);
        mpfr_init(r11628335);
        mpfr_init_set_str(r11628336, "4", 10, MPFR_RNDN);
        mpfr_init(r11628337);
        mpfr_init_set_str(r11628338, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r11628339);
        mpfr_init(r11628340);
        mpfr_init(r11628341);
        mpfr_init(r11628342);
        mpfr_init_set_str(r11628343, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r11628344);
        mpfr_init(r11628345);
        mpfr_init_set_str(r11628346, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r11628347);
        mpfr_init_set_str(r11628348, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r11628349);
        mpfr_init(r11628350);
        mpfr_init_set_str(r11628351, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r11628352);
        mpfr_init(r11628353);
        mpfr_init(r11628354);
        mpfr_init(r11628355);
        mpfr_init(r11628356);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11628318, x, MPFR_RNDN);
        mpfr_mul(r11628319, r11628318, r11628318, MPFR_RNDN);
        mpfr_mul(r11628320, r11628317, r11628319, MPFR_RNDN);
        ;
        mpfr_add(r11628322, r11628320, r11628321, MPFR_RNDN);
        ;
        mpfr_pow(r11628324, r11628318, r11628323, MPFR_RNDN);
        mpfr_pow(r11628325, r11628324, r11628323, MPFR_RNDN);
        ;
        mpfr_add(r11628327, r11628323, r11628326, MPFR_RNDN);
        mpfr_pow(r11628328, r11628325, r11628327, MPFR_RNDN);
        mpfr_mul(r11628329, r11628322, r11628328, MPFR_RNDN);
        mpfr_mul(r11628330, r11628322, r11628322, MPFR_RNDN);
        mpfr_mul(r11628331, r11628329, r11628330, MPFR_RNDN);
        mpfr_cbrt(r11628332, r11628331, MPFR_RNDN);
        ;
        mpfr_mul(r11628334, r11628333, r11628318, MPFR_RNDN);
        mpfr_mul(r11628335, r11628318, r11628334, MPFR_RNDN);
        ;
        mpfr_pow(r11628337, r11628318, r11628336, MPFR_RNDN);
        ;
        mpfr_mul(r11628339, r11628337, r11628338, MPFR_RNDN);
        mpfr_add(r11628340, r11628335, r11628339, MPFR_RNDN);
        mpfr_add(r11628341, r11628332, r11628340, MPFR_RNDN);
        mpfr_mul(r11628342, r11628319, r11628319, MPFR_RNDN);
        ;
        mpfr_mul(r11628344, r11628343, r11628319, MPFR_RNDN);
        mpfr_mul(r11628345, r11628342, r11628344, MPFR_RNDN);
        ;
        mpfr_add(r11628347, r11628345, r11628346, MPFR_RNDN);
        ;
        mpfr_mul(r11628349, r11628348, r11628318, MPFR_RNDN);
        mpfr_mul(r11628350, r11628349, r11628318, MPFR_RNDN);
        ;
        mpfr_add(r11628352, r11628350, r11628351, MPFR_RNDN);
        mpfr_pow(r11628353, r11628319, r11628327, MPFR_RNDN);
        mpfr_mul(r11628354, r11628352, r11628353, MPFR_RNDN);
        mpfr_add(r11628355, r11628347, r11628354, MPFR_RNDN);
        mpfr_add(r11628356, r11628341, r11628355, MPFR_RNDN);
        return mpfr_get_d(r11628356, MPFR_RNDN);
}

static mpfr_t r11628357, r11628358, r11628359, r11628360, r11628361, r11628362, r11628363, r11628364, r11628365, r11628366, r11628367, r11628368, r11628369, r11628370, r11628371, r11628372, r11628373, r11628374, r11628375, r11628376, r11628377, r11628378, r11628379, r11628380, r11628381, r11628382, r11628383, r11628384, r11628385, r11628386, r11628387, r11628388, r11628389, r11628390, r11628391, r11628392, r11628393, r11628394, r11628395, r11628396;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11628357, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r11628358);
        mpfr_init(r11628359);
        mpfr_init(r11628360);
        mpfr_init_set_str(r11628361, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r11628362);
        mpfr_init_set_str(r11628363, "3", 10, MPFR_RNDN);
        mpfr_init(r11628364);
        mpfr_init(r11628365);
        mpfr_init_set_str(r11628366, "1", 10, MPFR_RNDN);
        mpfr_init(r11628367);
        mpfr_init(r11628368);
        mpfr_init(r11628369);
        mpfr_init(r11628370);
        mpfr_init(r11628371);
        mpfr_init(r11628372);
        mpfr_init_set_str(r11628373, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r11628374);
        mpfr_init(r11628375);
        mpfr_init_set_str(r11628376, "4", 10, MPFR_RNDN);
        mpfr_init(r11628377);
        mpfr_init_set_str(r11628378, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r11628379);
        mpfr_init(r11628380);
        mpfr_init(r11628381);
        mpfr_init(r11628382);
        mpfr_init_set_str(r11628383, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r11628384);
        mpfr_init(r11628385);
        mpfr_init_set_str(r11628386, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r11628387);
        mpfr_init_set_str(r11628388, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r11628389);
        mpfr_init(r11628390);
        mpfr_init_set_str(r11628391, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r11628392);
        mpfr_init(r11628393);
        mpfr_init(r11628394);
        mpfr_init(r11628395);
        mpfr_init(r11628396);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11628358, x, MPFR_RNDN);
        mpfr_mul(r11628359, r11628358, r11628358, MPFR_RNDN);
        mpfr_mul(r11628360, r11628357, r11628359, MPFR_RNDN);
        ;
        mpfr_add(r11628362, r11628360, r11628361, MPFR_RNDN);
        ;
        mpfr_pow(r11628364, r11628358, r11628363, MPFR_RNDN);
        mpfr_pow(r11628365, r11628364, r11628363, MPFR_RNDN);
        ;
        mpfr_add(r11628367, r11628363, r11628366, MPFR_RNDN);
        mpfr_pow(r11628368, r11628365, r11628367, MPFR_RNDN);
        mpfr_mul(r11628369, r11628362, r11628368, MPFR_RNDN);
        mpfr_mul(r11628370, r11628362, r11628362, MPFR_RNDN);
        mpfr_mul(r11628371, r11628369, r11628370, MPFR_RNDN);
        mpfr_cbrt(r11628372, r11628371, MPFR_RNDN);
        ;
        mpfr_mul(r11628374, r11628373, r11628358, MPFR_RNDN);
        mpfr_mul(r11628375, r11628358, r11628374, MPFR_RNDN);
        ;
        mpfr_pow(r11628377, r11628358, r11628376, MPFR_RNDN);
        ;
        mpfr_mul(r11628379, r11628377, r11628378, MPFR_RNDN);
        mpfr_add(r11628380, r11628375, r11628379, MPFR_RNDN);
        mpfr_add(r11628381, r11628372, r11628380, MPFR_RNDN);
        mpfr_mul(r11628382, r11628359, r11628359, MPFR_RNDN);
        ;
        mpfr_mul(r11628384, r11628383, r11628359, MPFR_RNDN);
        mpfr_mul(r11628385, r11628382, r11628384, MPFR_RNDN);
        ;
        mpfr_add(r11628387, r11628385, r11628386, MPFR_RNDN);
        ;
        mpfr_mul(r11628389, r11628388, r11628358, MPFR_RNDN);
        mpfr_mul(r11628390, r11628389, r11628358, MPFR_RNDN);
        ;
        mpfr_add(r11628392, r11628390, r11628391, MPFR_RNDN);
        mpfr_pow(r11628393, r11628359, r11628367, MPFR_RNDN);
        mpfr_mul(r11628394, r11628392, r11628393, MPFR_RNDN);
        mpfr_add(r11628395, r11628387, r11628394, MPFR_RNDN);
        mpfr_add(r11628396, r11628381, r11628395, MPFR_RNDN);
        return mpfr_get_d(r11628396, MPFR_RNDN);
}

