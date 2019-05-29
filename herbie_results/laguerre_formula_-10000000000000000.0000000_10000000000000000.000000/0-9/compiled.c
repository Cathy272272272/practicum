#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r10001153 = 1.0;
        float r10001154 = -9.0;
        float r10001155 = x;
        float r10001156 = r10001154 * r10001155;
        float r10001157 = r10001153 + r10001156;
        float r10001158 = 18.0;
        float r10001159 = r10001155 * r10001155;
        float r10001160 = r10001158 * r10001159;
        float r10001161 = r10001157 + r10001160;
        float r10001162 = -14.0;
        float r10001163 = r10001159 * r10001155;
        float r10001164 = r10001162 * r10001163;
        float r10001165 = r10001161 + r10001164;
        float r10001166 = 5.25;
        float r10001167 = r10001163 * r10001155;
        float r10001168 = r10001166 * r10001167;
        float r10001169 = r10001165 + r10001168;
        float r10001170 = -1.05;
        float r10001171 = r10001167 * r10001155;
        float r10001172 = r10001170 * r10001171;
        float r10001173 = r10001169 + r10001172;
        float r10001174 = 0.116667;
        float r10001175 = r10001171 * r10001155;
        float r10001176 = r10001174 * r10001175;
        float r10001177 = r10001173 + r10001176;
        float r10001178 = -0.007143;
        float r10001179 = r10001175 * r10001155;
        float r10001180 = r10001178 * r10001179;
        float r10001181 = r10001177 + r10001180;
        float r10001182 = 0.000223;
        float r10001183 = r10001179 * r10001155;
        float r10001184 = r10001182 * r10001183;
        float r10001185 = r10001181 + r10001184;
        float r10001186 = -3e-06;
        float r10001187 = r10001183 * r10001155;
        float r10001188 = r10001186 * r10001187;
        float r10001189 = r10001185 + r10001188;
        return r10001189;
}

double f_id(double x) {
        double r10001190 = 1.0;
        double r10001191 = -9.0;
        double r10001192 = x;
        double r10001193 = r10001191 * r10001192;
        double r10001194 = r10001190 + r10001193;
        double r10001195 = 18.0;
        double r10001196 = r10001192 * r10001192;
        double r10001197 = r10001195 * r10001196;
        double r10001198 = r10001194 + r10001197;
        double r10001199 = -14.0;
        double r10001200 = r10001196 * r10001192;
        double r10001201 = r10001199 * r10001200;
        double r10001202 = r10001198 + r10001201;
        double r10001203 = 5.25;
        double r10001204 = r10001200 * r10001192;
        double r10001205 = r10001203 * r10001204;
        double r10001206 = r10001202 + r10001205;
        double r10001207 = -1.05;
        double r10001208 = r10001204 * r10001192;
        double r10001209 = r10001207 * r10001208;
        double r10001210 = r10001206 + r10001209;
        double r10001211 = 0.116667;
        double r10001212 = r10001208 * r10001192;
        double r10001213 = r10001211 * r10001212;
        double r10001214 = r10001210 + r10001213;
        double r10001215 = -0.007143;
        double r10001216 = r10001212 * r10001192;
        double r10001217 = r10001215 * r10001216;
        double r10001218 = r10001214 + r10001217;
        double r10001219 = 0.000223;
        double r10001220 = r10001216 * r10001192;
        double r10001221 = r10001219 * r10001220;
        double r10001222 = r10001218 + r10001221;
        double r10001223 = -3e-06;
        double r10001224 = r10001220 * r10001192;
        double r10001225 = r10001223 * r10001224;
        double r10001226 = r10001222 + r10001225;
        return r10001226;
}


double f_of(float x) {
        float r10001227 = x;
        float r10001228 = r10001227 * r10001227;
        float r10001229 = r10001228 * r10001228;
        float r10001230 = 0.116667;
        float r10001231 = r10001228 * r10001230;
        float r10001232 = r10001229 * r10001231;
        float r10001233 = -9.0;
        float r10001234 = r10001227 * r10001233;
        float r10001235 = 1.0;
        float r10001236 = r10001234 + r10001235;
        float r10001237 = r10001232 + r10001236;
        float r10001238 = -1.05;
        float r10001239 = r10001238 * r10001227;
        float r10001240 = 5.25;
        float r10001241 = r10001239 + r10001240;
        float r10001242 = r10001229 * r10001241;
        float r10001243 = -14.0;
        float r10001244 = r10001243 * r10001227;
        float r10001245 = 18.0;
        float r10001246 = r10001244 + r10001245;
        float r10001247 = r10001228 * r10001246;
        float r10001248 = r10001242 + r10001247;
        float r10001249 = r10001237 + r10001248;
        float r10001250 = 2;
        float r10001251 = r10001250 + r10001250;
        float r10001252 = pow(r10001227, r10001251);
        float r10001253 = r10001252 * r10001252;
        float r10001254 = -3e-06;
        float r10001255 = r10001254 * r10001227;
        float r10001256 = 0.000223;
        float r10001257 = r10001255 + r10001256;
        float r10001258 = r10001253 * r10001257;
        float r10001259 = -0.007143;
        float r10001260 = r10001259 * r10001227;
        float r10001261 = r10001260 * r10001228;
        float r10001262 = r10001261 * r10001229;
        float r10001263 = r10001258 + r10001262;
        float r10001264 = r10001249 + r10001263;
        return r10001264;
}

double f_od(double x) {
        double r10001265 = x;
        double r10001266 = r10001265 * r10001265;
        double r10001267 = r10001266 * r10001266;
        double r10001268 = 0.116667;
        double r10001269 = r10001266 * r10001268;
        double r10001270 = r10001267 * r10001269;
        double r10001271 = -9.0;
        double r10001272 = r10001265 * r10001271;
        double r10001273 = 1.0;
        double r10001274 = r10001272 + r10001273;
        double r10001275 = r10001270 + r10001274;
        double r10001276 = -1.05;
        double r10001277 = r10001276 * r10001265;
        double r10001278 = 5.25;
        double r10001279 = r10001277 + r10001278;
        double r10001280 = r10001267 * r10001279;
        double r10001281 = -14.0;
        double r10001282 = r10001281 * r10001265;
        double r10001283 = 18.0;
        double r10001284 = r10001282 + r10001283;
        double r10001285 = r10001266 * r10001284;
        double r10001286 = r10001280 + r10001285;
        double r10001287 = r10001275 + r10001286;
        double r10001288 = 2;
        double r10001289 = r10001288 + r10001288;
        double r10001290 = pow(r10001265, r10001289);
        double r10001291 = r10001290 * r10001290;
        double r10001292 = -3e-06;
        double r10001293 = r10001292 * r10001265;
        double r10001294 = 0.000223;
        double r10001295 = r10001293 + r10001294;
        double r10001296 = r10001291 * r10001295;
        double r10001297 = -0.007143;
        double r10001298 = r10001297 * r10001265;
        double r10001299 = r10001298 * r10001266;
        double r10001300 = r10001299 * r10001267;
        double r10001301 = r10001296 + r10001300;
        double r10001302 = r10001287 + r10001301;
        return r10001302;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10001303, r10001304, r10001305, r10001306, r10001307, r10001308, r10001309, r10001310, r10001311, r10001312, r10001313, r10001314, r10001315, r10001316, r10001317, r10001318, r10001319, r10001320, r10001321, r10001322, r10001323, r10001324, r10001325, r10001326, r10001327, r10001328, r10001329, r10001330, r10001331, r10001332, r10001333, r10001334, r10001335, r10001336, r10001337, r10001338, r10001339;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10001303, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001304, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10001305);
        mpfr_init(r10001306);
        mpfr_init(r10001307);
        mpfr_init_set_str(r10001308, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10001309);
        mpfr_init(r10001310);
        mpfr_init(r10001311);
        mpfr_init_set_str(r10001312, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10001313);
        mpfr_init(r10001314);
        mpfr_init(r10001315);
        mpfr_init_set_str(r10001316, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10001317);
        mpfr_init(r10001318);
        mpfr_init(r10001319);
        mpfr_init_set_str(r10001320, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10001321);
        mpfr_init(r10001322);
        mpfr_init(r10001323);
        mpfr_init_set_str(r10001324, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10001325);
        mpfr_init(r10001326);
        mpfr_init(r10001327);
        mpfr_init_set_str(r10001328, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10001329);
        mpfr_init(r10001330);
        mpfr_init(r10001331);
        mpfr_init_set_str(r10001332, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10001333);
        mpfr_init(r10001334);
        mpfr_init(r10001335);
        mpfr_init_set_str(r10001336, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10001337);
        mpfr_init(r10001338);
        mpfr_init(r10001339);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10001305, x, MPFR_RNDN);
        mpfr_mul(r10001306, r10001304, r10001305, MPFR_RNDN);
        mpfr_add(r10001307, r10001303, r10001306, MPFR_RNDN);
        ;
        mpfr_mul(r10001309, r10001305, r10001305, MPFR_RNDN);
        mpfr_mul(r10001310, r10001308, r10001309, MPFR_RNDN);
        mpfr_add(r10001311, r10001307, r10001310, MPFR_RNDN);
        ;
        mpfr_mul(r10001313, r10001309, r10001305, MPFR_RNDN);
        mpfr_mul(r10001314, r10001312, r10001313, MPFR_RNDN);
        mpfr_add(r10001315, r10001311, r10001314, MPFR_RNDN);
        ;
        mpfr_mul(r10001317, r10001313, r10001305, MPFR_RNDN);
        mpfr_mul(r10001318, r10001316, r10001317, MPFR_RNDN);
        mpfr_add(r10001319, r10001315, r10001318, MPFR_RNDN);
        ;
        mpfr_mul(r10001321, r10001317, r10001305, MPFR_RNDN);
        mpfr_mul(r10001322, r10001320, r10001321, MPFR_RNDN);
        mpfr_add(r10001323, r10001319, r10001322, MPFR_RNDN);
        ;
        mpfr_mul(r10001325, r10001321, r10001305, MPFR_RNDN);
        mpfr_mul(r10001326, r10001324, r10001325, MPFR_RNDN);
        mpfr_add(r10001327, r10001323, r10001326, MPFR_RNDN);
        ;
        mpfr_mul(r10001329, r10001325, r10001305, MPFR_RNDN);
        mpfr_mul(r10001330, r10001328, r10001329, MPFR_RNDN);
        mpfr_add(r10001331, r10001327, r10001330, MPFR_RNDN);
        ;
        mpfr_mul(r10001333, r10001329, r10001305, MPFR_RNDN);
        mpfr_mul(r10001334, r10001332, r10001333, MPFR_RNDN);
        mpfr_add(r10001335, r10001331, r10001334, MPFR_RNDN);
        ;
        mpfr_mul(r10001337, r10001333, r10001305, MPFR_RNDN);
        mpfr_mul(r10001338, r10001336, r10001337, MPFR_RNDN);
        mpfr_add(r10001339, r10001335, r10001338, MPFR_RNDN);
        return mpfr_get_d(r10001339, MPFR_RNDN);
}

static mpfr_t r10001340, r10001341, r10001342, r10001343, r10001344, r10001345, r10001346, r10001347, r10001348, r10001349, r10001350, r10001351, r10001352, r10001353, r10001354, r10001355, r10001356, r10001357, r10001358, r10001359, r10001360, r10001361, r10001362, r10001363, r10001364, r10001365, r10001366, r10001367, r10001368, r10001369, r10001370, r10001371, r10001372, r10001373, r10001374, r10001375, r10001376, r10001377;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10001340);
        mpfr_init(r10001341);
        mpfr_init(r10001342);
        mpfr_init_set_str(r10001343, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10001344);
        mpfr_init(r10001345);
        mpfr_init_set_str(r10001346, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10001347);
        mpfr_init_set_str(r10001348, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10001349);
        mpfr_init(r10001350);
        mpfr_init_set_str(r10001351, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10001352);
        mpfr_init_set_str(r10001353, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10001354);
        mpfr_init(r10001355);
        mpfr_init_set_str(r10001356, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10001357);
        mpfr_init_set_str(r10001358, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10001359);
        mpfr_init(r10001360);
        mpfr_init(r10001361);
        mpfr_init(r10001362);
        mpfr_init_set_str(r10001363, "2", 10, MPFR_RNDN);
        mpfr_init(r10001364);
        mpfr_init(r10001365);
        mpfr_init(r10001366);
        mpfr_init_set_str(r10001367, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10001368);
        mpfr_init_set_str(r10001369, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10001370);
        mpfr_init(r10001371);
        mpfr_init_set_str(r10001372, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10001373);
        mpfr_init(r10001374);
        mpfr_init(r10001375);
        mpfr_init(r10001376);
        mpfr_init(r10001377);
}

double f_fm(double x) {
        mpfr_set_d(r10001340, x, MPFR_RNDN);
        mpfr_mul(r10001341, r10001340, r10001340, MPFR_RNDN);
        mpfr_mul(r10001342, r10001341, r10001341, MPFR_RNDN);
        ;
        mpfr_mul(r10001344, r10001341, r10001343, MPFR_RNDN);
        mpfr_mul(r10001345, r10001342, r10001344, MPFR_RNDN);
        ;
        mpfr_mul(r10001347, r10001340, r10001346, MPFR_RNDN);
        ;
        mpfr_add(r10001349, r10001347, r10001348, MPFR_RNDN);
        mpfr_add(r10001350, r10001345, r10001349, MPFR_RNDN);
        ;
        mpfr_mul(r10001352, r10001351, r10001340, MPFR_RNDN);
        ;
        mpfr_add(r10001354, r10001352, r10001353, MPFR_RNDN);
        mpfr_mul(r10001355, r10001342, r10001354, MPFR_RNDN);
        ;
        mpfr_mul(r10001357, r10001356, r10001340, MPFR_RNDN);
        ;
        mpfr_add(r10001359, r10001357, r10001358, MPFR_RNDN);
        mpfr_mul(r10001360, r10001341, r10001359, MPFR_RNDN);
        mpfr_add(r10001361, r10001355, r10001360, MPFR_RNDN);
        mpfr_add(r10001362, r10001350, r10001361, MPFR_RNDN);
        ;
        mpfr_add(r10001364, r10001363, r10001363, MPFR_RNDN);
        mpfr_pow(r10001365, r10001340, r10001364, MPFR_RNDN);
        mpfr_mul(r10001366, r10001365, r10001365, MPFR_RNDN);
        ;
        mpfr_mul(r10001368, r10001367, r10001340, MPFR_RNDN);
        ;
        mpfr_add(r10001370, r10001368, r10001369, MPFR_RNDN);
        mpfr_mul(r10001371, r10001366, r10001370, MPFR_RNDN);
        ;
        mpfr_mul(r10001373, r10001372, r10001340, MPFR_RNDN);
        mpfr_mul(r10001374, r10001373, r10001341, MPFR_RNDN);
        mpfr_mul(r10001375, r10001374, r10001342, MPFR_RNDN);
        mpfr_add(r10001376, r10001371, r10001375, MPFR_RNDN);
        mpfr_add(r10001377, r10001362, r10001376, MPFR_RNDN);
        return mpfr_get_d(r10001377, MPFR_RNDN);
}

static mpfr_t r10001378, r10001379, r10001380, r10001381, r10001382, r10001383, r10001384, r10001385, r10001386, r10001387, r10001388, r10001389, r10001390, r10001391, r10001392, r10001393, r10001394, r10001395, r10001396, r10001397, r10001398, r10001399, r10001400, r10001401, r10001402, r10001403, r10001404, r10001405, r10001406, r10001407, r10001408, r10001409, r10001410, r10001411, r10001412, r10001413, r10001414, r10001415;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10001378);
        mpfr_init(r10001379);
        mpfr_init(r10001380);
        mpfr_init_set_str(r10001381, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10001382);
        mpfr_init(r10001383);
        mpfr_init_set_str(r10001384, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10001385);
        mpfr_init_set_str(r10001386, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10001387);
        mpfr_init(r10001388);
        mpfr_init_set_str(r10001389, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10001390);
        mpfr_init_set_str(r10001391, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10001392);
        mpfr_init(r10001393);
        mpfr_init_set_str(r10001394, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10001395);
        mpfr_init_set_str(r10001396, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10001397);
        mpfr_init(r10001398);
        mpfr_init(r10001399);
        mpfr_init(r10001400);
        mpfr_init_set_str(r10001401, "2", 10, MPFR_RNDN);
        mpfr_init(r10001402);
        mpfr_init(r10001403);
        mpfr_init(r10001404);
        mpfr_init_set_str(r10001405, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10001406);
        mpfr_init_set_str(r10001407, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10001408);
        mpfr_init(r10001409);
        mpfr_init_set_str(r10001410, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10001411);
        mpfr_init(r10001412);
        mpfr_init(r10001413);
        mpfr_init(r10001414);
        mpfr_init(r10001415);
}

double f_dm(double x) {
        mpfr_set_d(r10001378, x, MPFR_RNDN);
        mpfr_mul(r10001379, r10001378, r10001378, MPFR_RNDN);
        mpfr_mul(r10001380, r10001379, r10001379, MPFR_RNDN);
        ;
        mpfr_mul(r10001382, r10001379, r10001381, MPFR_RNDN);
        mpfr_mul(r10001383, r10001380, r10001382, MPFR_RNDN);
        ;
        mpfr_mul(r10001385, r10001378, r10001384, MPFR_RNDN);
        ;
        mpfr_add(r10001387, r10001385, r10001386, MPFR_RNDN);
        mpfr_add(r10001388, r10001383, r10001387, MPFR_RNDN);
        ;
        mpfr_mul(r10001390, r10001389, r10001378, MPFR_RNDN);
        ;
        mpfr_add(r10001392, r10001390, r10001391, MPFR_RNDN);
        mpfr_mul(r10001393, r10001380, r10001392, MPFR_RNDN);
        ;
        mpfr_mul(r10001395, r10001394, r10001378, MPFR_RNDN);
        ;
        mpfr_add(r10001397, r10001395, r10001396, MPFR_RNDN);
        mpfr_mul(r10001398, r10001379, r10001397, MPFR_RNDN);
        mpfr_add(r10001399, r10001393, r10001398, MPFR_RNDN);
        mpfr_add(r10001400, r10001388, r10001399, MPFR_RNDN);
        ;
        mpfr_add(r10001402, r10001401, r10001401, MPFR_RNDN);
        mpfr_pow(r10001403, r10001378, r10001402, MPFR_RNDN);
        mpfr_mul(r10001404, r10001403, r10001403, MPFR_RNDN);
        ;
        mpfr_mul(r10001406, r10001405, r10001378, MPFR_RNDN);
        ;
        mpfr_add(r10001408, r10001406, r10001407, MPFR_RNDN);
        mpfr_mul(r10001409, r10001404, r10001408, MPFR_RNDN);
        ;
        mpfr_mul(r10001411, r10001410, r10001378, MPFR_RNDN);
        mpfr_mul(r10001412, r10001411, r10001379, MPFR_RNDN);
        mpfr_mul(r10001413, r10001412, r10001380, MPFR_RNDN);
        mpfr_add(r10001414, r10001409, r10001413, MPFR_RNDN);
        mpfr_add(r10001415, r10001400, r10001414, MPFR_RNDN);
        return mpfr_get_d(r10001415, MPFR_RNDN);
}

