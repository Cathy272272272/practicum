#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r7079145 = 30240.0;
        float r7079146 = x;
        float r7079147 = r7079145 * r7079146;
        float r7079148 = -80640.0;
        float r7079149 = r7079146 * r7079146;
        float r7079150 = r7079149 * r7079146;
        float r7079151 = r7079148 * r7079150;
        float r7079152 = r7079147 + r7079151;
        float r7079153 = 48384.0;
        float r7079154 = r7079150 * r7079146;
        float r7079155 = r7079154 * r7079146;
        float r7079156 = r7079153 * r7079155;
        float r7079157 = r7079152 + r7079156;
        float r7079158 = -9216.0;
        float r7079159 = r7079155 * r7079146;
        float r7079160 = r7079159 * r7079146;
        float r7079161 = r7079158 * r7079160;
        float r7079162 = r7079157 + r7079161;
        float r7079163 = 512.0;
        float r7079164 = r7079160 * r7079146;
        float r7079165 = r7079164 * r7079146;
        float r7079166 = r7079163 * r7079165;
        float r7079167 = r7079162 + r7079166;
        return r7079167;
}

double f_id(double x) {
        double r7079168 = 30240.0;
        double r7079169 = x;
        double r7079170 = r7079168 * r7079169;
        double r7079171 = -80640.0;
        double r7079172 = r7079169 * r7079169;
        double r7079173 = r7079172 * r7079169;
        double r7079174 = r7079171 * r7079173;
        double r7079175 = r7079170 + r7079174;
        double r7079176 = 48384.0;
        double r7079177 = r7079173 * r7079169;
        double r7079178 = r7079177 * r7079169;
        double r7079179 = r7079176 * r7079178;
        double r7079180 = r7079175 + r7079179;
        double r7079181 = -9216.0;
        double r7079182 = r7079178 * r7079169;
        double r7079183 = r7079182 * r7079169;
        double r7079184 = r7079181 * r7079183;
        double r7079185 = r7079180 + r7079184;
        double r7079186 = 512.0;
        double r7079187 = r7079183 * r7079169;
        double r7079188 = r7079187 * r7079169;
        double r7079189 = r7079186 * r7079188;
        double r7079190 = r7079185 + r7079189;
        return r7079190;
}


double f_of(float x) {
        float r7079191 = x;
        float r7079192 = r7079191 * r7079191;
        float r7079193 = 48384.0;
        float r7079194 = r7079191 * r7079193;
        float r7079195 = r7079192 * r7079194;
        float r7079196 = r7079192 * r7079195;
        float r7079197 = 30240.0;
        float r7079198 = r7079197 * r7079191;
        float r7079199 = -80640.0;
        float r7079200 = r7079199 * r7079191;
        float r7079201 = r7079200 * r7079192;
        float r7079202 = r7079198 + r7079201;
        float r7079203 = r7079196 + r7079202;
        float r7079204 = 3;
        float r7079205 = pow(r7079191, r7079204);
        float r7079206 = r7079205 * r7079205;
        float r7079207 = r7079206 * r7079191;
        float r7079208 = -9216.0;
        float r7079209 = 512.0;
        float r7079210 = r7079209 * r7079191;
        float r7079211 = r7079191 * r7079210;
        float r7079212 = r7079208 + r7079211;
        float r7079213 = r7079207 * r7079212;
        float r7079214 = cbrt(r7079213);
        float r7079215 = r7079214 * r7079214;
        float r7079216 = r7079215 * r7079214;
        float r7079217 = r7079203 + r7079216;
        return r7079217;
}

double f_od(double x) {
        double r7079218 = x;
        double r7079219 = r7079218 * r7079218;
        double r7079220 = 48384.0;
        double r7079221 = r7079218 * r7079220;
        double r7079222 = r7079219 * r7079221;
        double r7079223 = r7079219 * r7079222;
        double r7079224 = 30240.0;
        double r7079225 = r7079224 * r7079218;
        double r7079226 = -80640.0;
        double r7079227 = r7079226 * r7079218;
        double r7079228 = r7079227 * r7079219;
        double r7079229 = r7079225 + r7079228;
        double r7079230 = r7079223 + r7079229;
        double r7079231 = 3;
        double r7079232 = pow(r7079218, r7079231);
        double r7079233 = r7079232 * r7079232;
        double r7079234 = r7079233 * r7079218;
        double r7079235 = -9216.0;
        double r7079236 = 512.0;
        double r7079237 = r7079236 * r7079218;
        double r7079238 = r7079218 * r7079237;
        double r7079239 = r7079235 + r7079238;
        double r7079240 = r7079234 * r7079239;
        double r7079241 = cbrt(r7079240);
        double r7079242 = r7079241 * r7079241;
        double r7079243 = r7079242 * r7079241;
        double r7079244 = r7079230 + r7079243;
        return r7079244;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7079245, r7079246, r7079247, r7079248, r7079249, r7079250, r7079251, r7079252, r7079253, r7079254, r7079255, r7079256, r7079257, r7079258, r7079259, r7079260, r7079261, r7079262, r7079263, r7079264, r7079265, r7079266, r7079267;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(848);
        mpfr_init_set_str(r7079245, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7079246);
        mpfr_init(r7079247);
        mpfr_init_set_str(r7079248, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7079249);
        mpfr_init(r7079250);
        mpfr_init(r7079251);
        mpfr_init(r7079252);
        mpfr_init_set_str(r7079253, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7079254);
        mpfr_init(r7079255);
        mpfr_init(r7079256);
        mpfr_init(r7079257);
        mpfr_init_set_str(r7079258, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7079259);
        mpfr_init(r7079260);
        mpfr_init(r7079261);
        mpfr_init(r7079262);
        mpfr_init_set_str(r7079263, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7079264);
        mpfr_init(r7079265);
        mpfr_init(r7079266);
        mpfr_init(r7079267);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7079246, x, MPFR_RNDN);
        mpfr_mul(r7079247, r7079245, r7079246, MPFR_RNDN);
        ;
        mpfr_mul(r7079249, r7079246, r7079246, MPFR_RNDN);
        mpfr_mul(r7079250, r7079249, r7079246, MPFR_RNDN);
        mpfr_mul(r7079251, r7079248, r7079250, MPFR_RNDN);
        mpfr_add(r7079252, r7079247, r7079251, MPFR_RNDN);
        ;
        mpfr_mul(r7079254, r7079250, r7079246, MPFR_RNDN);
        mpfr_mul(r7079255, r7079254, r7079246, MPFR_RNDN);
        mpfr_mul(r7079256, r7079253, r7079255, MPFR_RNDN);
        mpfr_add(r7079257, r7079252, r7079256, MPFR_RNDN);
        ;
        mpfr_mul(r7079259, r7079255, r7079246, MPFR_RNDN);
        mpfr_mul(r7079260, r7079259, r7079246, MPFR_RNDN);
        mpfr_mul(r7079261, r7079258, r7079260, MPFR_RNDN);
        mpfr_add(r7079262, r7079257, r7079261, MPFR_RNDN);
        ;
        mpfr_mul(r7079264, r7079260, r7079246, MPFR_RNDN);
        mpfr_mul(r7079265, r7079264, r7079246, MPFR_RNDN);
        mpfr_mul(r7079266, r7079263, r7079265, MPFR_RNDN);
        mpfr_add(r7079267, r7079262, r7079266, MPFR_RNDN);
        return mpfr_get_d(r7079267, MPFR_RNDN);
}

static mpfr_t r7079268, r7079269, r7079270, r7079271, r7079272, r7079273, r7079274, r7079275, r7079276, r7079277, r7079278, r7079279, r7079280, r7079281, r7079282, r7079283, r7079284, r7079285, r7079286, r7079287, r7079288, r7079289, r7079290, r7079291, r7079292, r7079293, r7079294;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(848);
        mpfr_init(r7079268);
        mpfr_init(r7079269);
        mpfr_init_set_str(r7079270, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7079271);
        mpfr_init(r7079272);
        mpfr_init(r7079273);
        mpfr_init_set_str(r7079274, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7079275);
        mpfr_init_set_str(r7079276, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7079277);
        mpfr_init(r7079278);
        mpfr_init(r7079279);
        mpfr_init(r7079280);
        mpfr_init_set_str(r7079281, "3", 10, MPFR_RNDN);
        mpfr_init(r7079282);
        mpfr_init(r7079283);
        mpfr_init(r7079284);
        mpfr_init_set_str(r7079285, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079286, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7079287);
        mpfr_init(r7079288);
        mpfr_init(r7079289);
        mpfr_init(r7079290);
        mpfr_init(r7079291);
        mpfr_init(r7079292);
        mpfr_init(r7079293);
        mpfr_init(r7079294);
}

double f_fm(double x) {
        mpfr_set_d(r7079268, x, MPFR_RNDN);
        mpfr_mul(r7079269, r7079268, r7079268, MPFR_RNDN);
        ;
        mpfr_mul(r7079271, r7079268, r7079270, MPFR_RNDN);
        mpfr_mul(r7079272, r7079269, r7079271, MPFR_RNDN);
        mpfr_mul(r7079273, r7079269, r7079272, MPFR_RNDN);
        ;
        mpfr_mul(r7079275, r7079274, r7079268, MPFR_RNDN);
        ;
        mpfr_mul(r7079277, r7079276, r7079268, MPFR_RNDN);
        mpfr_mul(r7079278, r7079277, r7079269, MPFR_RNDN);
        mpfr_add(r7079279, r7079275, r7079278, MPFR_RNDN);
        mpfr_add(r7079280, r7079273, r7079279, MPFR_RNDN);
        ;
        mpfr_pow(r7079282, r7079268, r7079281, MPFR_RNDN);
        mpfr_mul(r7079283, r7079282, r7079282, MPFR_RNDN);
        mpfr_mul(r7079284, r7079283, r7079268, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7079287, r7079286, r7079268, MPFR_RNDN);
        mpfr_mul(r7079288, r7079268, r7079287, MPFR_RNDN);
        mpfr_add(r7079289, r7079285, r7079288, MPFR_RNDN);
        mpfr_mul(r7079290, r7079284, r7079289, MPFR_RNDN);
        mpfr_cbrt(r7079291, r7079290, MPFR_RNDN);
        mpfr_mul(r7079292, r7079291, r7079291, MPFR_RNDN);
        mpfr_mul(r7079293, r7079292, r7079291, MPFR_RNDN);
        mpfr_add(r7079294, r7079280, r7079293, MPFR_RNDN);
        return mpfr_get_d(r7079294, MPFR_RNDN);
}

static mpfr_t r7079295, r7079296, r7079297, r7079298, r7079299, r7079300, r7079301, r7079302, r7079303, r7079304, r7079305, r7079306, r7079307, r7079308, r7079309, r7079310, r7079311, r7079312, r7079313, r7079314, r7079315, r7079316, r7079317, r7079318, r7079319, r7079320, r7079321;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(848);
        mpfr_init(r7079295);
        mpfr_init(r7079296);
        mpfr_init_set_str(r7079297, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7079298);
        mpfr_init(r7079299);
        mpfr_init(r7079300);
        mpfr_init_set_str(r7079301, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7079302);
        mpfr_init_set_str(r7079303, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7079304);
        mpfr_init(r7079305);
        mpfr_init(r7079306);
        mpfr_init(r7079307);
        mpfr_init_set_str(r7079308, "3", 10, MPFR_RNDN);
        mpfr_init(r7079309);
        mpfr_init(r7079310);
        mpfr_init(r7079311);
        mpfr_init_set_str(r7079312, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7079313, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7079314);
        mpfr_init(r7079315);
        mpfr_init(r7079316);
        mpfr_init(r7079317);
        mpfr_init(r7079318);
        mpfr_init(r7079319);
        mpfr_init(r7079320);
        mpfr_init(r7079321);
}

double f_dm(double x) {
        mpfr_set_d(r7079295, x, MPFR_RNDN);
        mpfr_mul(r7079296, r7079295, r7079295, MPFR_RNDN);
        ;
        mpfr_mul(r7079298, r7079295, r7079297, MPFR_RNDN);
        mpfr_mul(r7079299, r7079296, r7079298, MPFR_RNDN);
        mpfr_mul(r7079300, r7079296, r7079299, MPFR_RNDN);
        ;
        mpfr_mul(r7079302, r7079301, r7079295, MPFR_RNDN);
        ;
        mpfr_mul(r7079304, r7079303, r7079295, MPFR_RNDN);
        mpfr_mul(r7079305, r7079304, r7079296, MPFR_RNDN);
        mpfr_add(r7079306, r7079302, r7079305, MPFR_RNDN);
        mpfr_add(r7079307, r7079300, r7079306, MPFR_RNDN);
        ;
        mpfr_pow(r7079309, r7079295, r7079308, MPFR_RNDN);
        mpfr_mul(r7079310, r7079309, r7079309, MPFR_RNDN);
        mpfr_mul(r7079311, r7079310, r7079295, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7079314, r7079313, r7079295, MPFR_RNDN);
        mpfr_mul(r7079315, r7079295, r7079314, MPFR_RNDN);
        mpfr_add(r7079316, r7079312, r7079315, MPFR_RNDN);
        mpfr_mul(r7079317, r7079311, r7079316, MPFR_RNDN);
        mpfr_cbrt(r7079318, r7079317, MPFR_RNDN);
        mpfr_mul(r7079319, r7079318, r7079318, MPFR_RNDN);
        mpfr_mul(r7079320, r7079319, r7079318, MPFR_RNDN);
        mpfr_add(r7079321, r7079307, r7079320, MPFR_RNDN);
        return mpfr_get_d(r7079321, MPFR_RNDN);
}

