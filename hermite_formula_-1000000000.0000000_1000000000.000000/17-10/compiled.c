#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7033186 = -30240.0;
        float r7033187 = 302400.0;
        float r7033188 = x;
        float r7033189 = r7033188 * r7033188;
        float r7033190 = r7033187 * r7033189;
        float r7033191 = r7033186 + r7033190;
        float r7033192 = -403200.0;
        float r7033193 = r7033189 * r7033188;
        float r7033194 = r7033193 * r7033188;
        float r7033195 = r7033192 * r7033194;
        float r7033196 = r7033191 + r7033195;
        float r7033197 = 161280.0;
        float r7033198 = r7033194 * r7033188;
        float r7033199 = r7033198 * r7033188;
        float r7033200 = r7033197 * r7033199;
        float r7033201 = r7033196 + r7033200;
        float r7033202 = -23040.0;
        float r7033203 = r7033199 * r7033188;
        float r7033204 = r7033203 * r7033188;
        float r7033205 = r7033202 * r7033204;
        float r7033206 = r7033201 + r7033205;
        float r7033207 = 1024.0;
        float r7033208 = r7033204 * r7033188;
        float r7033209 = r7033208 * r7033188;
        float r7033210 = r7033207 * r7033209;
        float r7033211 = r7033206 + r7033210;
        return r7033211;
}

double f_id(double x) {
        double r7033212 = -30240.0;
        double r7033213 = 302400.0;
        double r7033214 = x;
        double r7033215 = r7033214 * r7033214;
        double r7033216 = r7033213 * r7033215;
        double r7033217 = r7033212 + r7033216;
        double r7033218 = -403200.0;
        double r7033219 = r7033215 * r7033214;
        double r7033220 = r7033219 * r7033214;
        double r7033221 = r7033218 * r7033220;
        double r7033222 = r7033217 + r7033221;
        double r7033223 = 161280.0;
        double r7033224 = r7033220 * r7033214;
        double r7033225 = r7033224 * r7033214;
        double r7033226 = r7033223 * r7033225;
        double r7033227 = r7033222 + r7033226;
        double r7033228 = -23040.0;
        double r7033229 = r7033225 * r7033214;
        double r7033230 = r7033229 * r7033214;
        double r7033231 = r7033228 * r7033230;
        double r7033232 = r7033227 + r7033231;
        double r7033233 = 1024.0;
        double r7033234 = r7033230 * r7033214;
        double r7033235 = r7033234 * r7033214;
        double r7033236 = r7033233 * r7033235;
        double r7033237 = r7033232 + r7033236;
        return r7033237;
}


double f_of(float x) {
        float r7033238 = x;
        float r7033239 = r7033238 * r7033238;
        float r7033240 = r7033239 * r7033239;
        float r7033241 = 161280.0;
        float r7033242 = r7033241 * r7033238;
        float r7033243 = r7033242 * r7033238;
        float r7033244 = r7033240 * r7033243;
        float r7033245 = -23040.0;
        float r7033246 = 8;
        float r7033247 = pow(r7033238, r7033246);
        float r7033248 = r7033245 * r7033247;
        float r7033249 = -403200.0;
        float r7033250 = r7033238 * r7033249;
        float r7033251 = 3;
        float r7033252 = pow(r7033238, r7033251);
        float r7033253 = r7033250 * r7033252;
        float r7033254 = r7033248 + r7033253;
        float r7033255 = r7033244 + r7033254;
        float r7033256 = 1024.0;
        float r7033257 = r7033256 * r7033238;
        float r7033258 = r7033257 * r7033252;
        float r7033259 = r7033252 * r7033252;
        float r7033260 = r7033258 * r7033259;
        float r7033261 = 302400.0;
        float r7033262 = r7033239 * r7033261;
        float r7033263 = -30240.0;
        float r7033264 = r7033262 + r7033263;
        float r7033265 = r7033260 + r7033264;
        float r7033266 = r7033255 + r7033265;
        return r7033266;
}

double f_od(double x) {
        double r7033267 = x;
        double r7033268 = r7033267 * r7033267;
        double r7033269 = r7033268 * r7033268;
        double r7033270 = 161280.0;
        double r7033271 = r7033270 * r7033267;
        double r7033272 = r7033271 * r7033267;
        double r7033273 = r7033269 * r7033272;
        double r7033274 = -23040.0;
        double r7033275 = 8;
        double r7033276 = pow(r7033267, r7033275);
        double r7033277 = r7033274 * r7033276;
        double r7033278 = -403200.0;
        double r7033279 = r7033267 * r7033278;
        double r7033280 = 3;
        double r7033281 = pow(r7033267, r7033280);
        double r7033282 = r7033279 * r7033281;
        double r7033283 = r7033277 + r7033282;
        double r7033284 = r7033273 + r7033283;
        double r7033285 = 1024.0;
        double r7033286 = r7033285 * r7033267;
        double r7033287 = r7033286 * r7033281;
        double r7033288 = r7033281 * r7033281;
        double r7033289 = r7033287 * r7033288;
        double r7033290 = 302400.0;
        double r7033291 = r7033268 * r7033290;
        double r7033292 = -30240.0;
        double r7033293 = r7033291 + r7033292;
        double r7033294 = r7033289 + r7033293;
        double r7033295 = r7033284 + r7033294;
        return r7033295;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7033296, r7033297, r7033298, r7033299, r7033300, r7033301, r7033302, r7033303, r7033304, r7033305, r7033306, r7033307, r7033308, r7033309, r7033310, r7033311, r7033312, r7033313, r7033314, r7033315, r7033316, r7033317, r7033318, r7033319, r7033320, r7033321;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7033296, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7033297, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7033298);
        mpfr_init(r7033299);
        mpfr_init(r7033300);
        mpfr_init(r7033301);
        mpfr_init_set_str(r7033302, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7033303);
        mpfr_init(r7033304);
        mpfr_init(r7033305);
        mpfr_init(r7033306);
        mpfr_init_set_str(r7033307, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7033308);
        mpfr_init(r7033309);
        mpfr_init(r7033310);
        mpfr_init(r7033311);
        mpfr_init_set_str(r7033312, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7033313);
        mpfr_init(r7033314);
        mpfr_init(r7033315);
        mpfr_init(r7033316);
        mpfr_init_set_str(r7033317, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7033318);
        mpfr_init(r7033319);
        mpfr_init(r7033320);
        mpfr_init(r7033321);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7033298, x, MPFR_RNDN);
        mpfr_mul(r7033299, r7033298, r7033298, MPFR_RNDN);
        mpfr_mul(r7033300, r7033297, r7033299, MPFR_RNDN);
        mpfr_add(r7033301, r7033296, r7033300, MPFR_RNDN);
        ;
        mpfr_mul(r7033303, r7033299, r7033298, MPFR_RNDN);
        mpfr_mul(r7033304, r7033303, r7033298, MPFR_RNDN);
        mpfr_mul(r7033305, r7033302, r7033304, MPFR_RNDN);
        mpfr_add(r7033306, r7033301, r7033305, MPFR_RNDN);
        ;
        mpfr_mul(r7033308, r7033304, r7033298, MPFR_RNDN);
        mpfr_mul(r7033309, r7033308, r7033298, MPFR_RNDN);
        mpfr_mul(r7033310, r7033307, r7033309, MPFR_RNDN);
        mpfr_add(r7033311, r7033306, r7033310, MPFR_RNDN);
        ;
        mpfr_mul(r7033313, r7033309, r7033298, MPFR_RNDN);
        mpfr_mul(r7033314, r7033313, r7033298, MPFR_RNDN);
        mpfr_mul(r7033315, r7033312, r7033314, MPFR_RNDN);
        mpfr_add(r7033316, r7033311, r7033315, MPFR_RNDN);
        ;
        mpfr_mul(r7033318, r7033314, r7033298, MPFR_RNDN);
        mpfr_mul(r7033319, r7033318, r7033298, MPFR_RNDN);
        mpfr_mul(r7033320, r7033317, r7033319, MPFR_RNDN);
        mpfr_add(r7033321, r7033316, r7033320, MPFR_RNDN);
        return mpfr_get_d(r7033321, MPFR_RNDN);
}

static mpfr_t r7033322, r7033323, r7033324, r7033325, r7033326, r7033327, r7033328, r7033329, r7033330, r7033331, r7033332, r7033333, r7033334, r7033335, r7033336, r7033337, r7033338, r7033339, r7033340, r7033341, r7033342, r7033343, r7033344, r7033345, r7033346, r7033347, r7033348, r7033349, r7033350;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7033322);
        mpfr_init(r7033323);
        mpfr_init(r7033324);
        mpfr_init_set_str(r7033325, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7033326);
        mpfr_init(r7033327);
        mpfr_init(r7033328);
        mpfr_init_set_str(r7033329, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7033330, "8", 10, MPFR_RNDN);
        mpfr_init(r7033331);
        mpfr_init(r7033332);
        mpfr_init_set_str(r7033333, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7033334);
        mpfr_init_set_str(r7033335, "3", 10, MPFR_RNDN);
        mpfr_init(r7033336);
        mpfr_init(r7033337);
        mpfr_init(r7033338);
        mpfr_init(r7033339);
        mpfr_init_set_str(r7033340, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7033341);
        mpfr_init(r7033342);
        mpfr_init(r7033343);
        mpfr_init(r7033344);
        mpfr_init_set_str(r7033345, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7033346);
        mpfr_init_set_str(r7033347, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r7033348);
        mpfr_init(r7033349);
        mpfr_init(r7033350);
}

double f_fm(double x) {
        mpfr_set_d(r7033322, x, MPFR_RNDN);
        mpfr_mul(r7033323, r7033322, r7033322, MPFR_RNDN);
        mpfr_mul(r7033324, r7033323, r7033323, MPFR_RNDN);
        ;
        mpfr_mul(r7033326, r7033325, r7033322, MPFR_RNDN);
        mpfr_mul(r7033327, r7033326, r7033322, MPFR_RNDN);
        mpfr_mul(r7033328, r7033324, r7033327, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7033331, r7033322, r7033330, MPFR_RNDN);
        mpfr_mul(r7033332, r7033329, r7033331, MPFR_RNDN);
        ;
        mpfr_mul(r7033334, r7033322, r7033333, MPFR_RNDN);
        ;
        mpfr_pow(r7033336, r7033322, r7033335, MPFR_RNDN);
        mpfr_mul(r7033337, r7033334, r7033336, MPFR_RNDN);
        mpfr_add(r7033338, r7033332, r7033337, MPFR_RNDN);
        mpfr_add(r7033339, r7033328, r7033338, MPFR_RNDN);
        ;
        mpfr_mul(r7033341, r7033340, r7033322, MPFR_RNDN);
        mpfr_mul(r7033342, r7033341, r7033336, MPFR_RNDN);
        mpfr_mul(r7033343, r7033336, r7033336, MPFR_RNDN);
        mpfr_mul(r7033344, r7033342, r7033343, MPFR_RNDN);
        ;
        mpfr_mul(r7033346, r7033323, r7033345, MPFR_RNDN);
        ;
        mpfr_add(r7033348, r7033346, r7033347, MPFR_RNDN);
        mpfr_add(r7033349, r7033344, r7033348, MPFR_RNDN);
        mpfr_add(r7033350, r7033339, r7033349, MPFR_RNDN);
        return mpfr_get_d(r7033350, MPFR_RNDN);
}

static mpfr_t r7033351, r7033352, r7033353, r7033354, r7033355, r7033356, r7033357, r7033358, r7033359, r7033360, r7033361, r7033362, r7033363, r7033364, r7033365, r7033366, r7033367, r7033368, r7033369, r7033370, r7033371, r7033372, r7033373, r7033374, r7033375, r7033376, r7033377, r7033378, r7033379;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7033351);
        mpfr_init(r7033352);
        mpfr_init(r7033353);
        mpfr_init_set_str(r7033354, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7033355);
        mpfr_init(r7033356);
        mpfr_init(r7033357);
        mpfr_init_set_str(r7033358, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7033359, "8", 10, MPFR_RNDN);
        mpfr_init(r7033360);
        mpfr_init(r7033361);
        mpfr_init_set_str(r7033362, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7033363);
        mpfr_init_set_str(r7033364, "3", 10, MPFR_RNDN);
        mpfr_init(r7033365);
        mpfr_init(r7033366);
        mpfr_init(r7033367);
        mpfr_init(r7033368);
        mpfr_init_set_str(r7033369, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7033370);
        mpfr_init(r7033371);
        mpfr_init(r7033372);
        mpfr_init(r7033373);
        mpfr_init_set_str(r7033374, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7033375);
        mpfr_init_set_str(r7033376, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r7033377);
        mpfr_init(r7033378);
        mpfr_init(r7033379);
}

double f_dm(double x) {
        mpfr_set_d(r7033351, x, MPFR_RNDN);
        mpfr_mul(r7033352, r7033351, r7033351, MPFR_RNDN);
        mpfr_mul(r7033353, r7033352, r7033352, MPFR_RNDN);
        ;
        mpfr_mul(r7033355, r7033354, r7033351, MPFR_RNDN);
        mpfr_mul(r7033356, r7033355, r7033351, MPFR_RNDN);
        mpfr_mul(r7033357, r7033353, r7033356, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7033360, r7033351, r7033359, MPFR_RNDN);
        mpfr_mul(r7033361, r7033358, r7033360, MPFR_RNDN);
        ;
        mpfr_mul(r7033363, r7033351, r7033362, MPFR_RNDN);
        ;
        mpfr_pow(r7033365, r7033351, r7033364, MPFR_RNDN);
        mpfr_mul(r7033366, r7033363, r7033365, MPFR_RNDN);
        mpfr_add(r7033367, r7033361, r7033366, MPFR_RNDN);
        mpfr_add(r7033368, r7033357, r7033367, MPFR_RNDN);
        ;
        mpfr_mul(r7033370, r7033369, r7033351, MPFR_RNDN);
        mpfr_mul(r7033371, r7033370, r7033365, MPFR_RNDN);
        mpfr_mul(r7033372, r7033365, r7033365, MPFR_RNDN);
        mpfr_mul(r7033373, r7033371, r7033372, MPFR_RNDN);
        ;
        mpfr_mul(r7033375, r7033352, r7033374, MPFR_RNDN);
        ;
        mpfr_add(r7033377, r7033375, r7033376, MPFR_RNDN);
        mpfr_add(r7033378, r7033373, r7033377, MPFR_RNDN);
        mpfr_add(r7033379, r7033368, r7033378, MPFR_RNDN);
        return mpfr_get_d(r7033379, MPFR_RNDN);
}

