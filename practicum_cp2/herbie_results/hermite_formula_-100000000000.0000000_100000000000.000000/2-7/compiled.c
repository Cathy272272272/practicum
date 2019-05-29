#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r11054212 = -1680.0;
        float r11054213 = x;
        float r11054214 = r11054212 * r11054213;
        float r11054215 = 3360.0;
        float r11054216 = r11054213 * r11054213;
        float r11054217 = r11054216 * r11054213;
        float r11054218 = r11054215 * r11054217;
        float r11054219 = r11054214 + r11054218;
        float r11054220 = -1344.0;
        float r11054221 = r11054217 * r11054213;
        float r11054222 = r11054221 * r11054213;
        float r11054223 = r11054220 * r11054222;
        float r11054224 = r11054219 + r11054223;
        float r11054225 = 128.0;
        float r11054226 = r11054222 * r11054213;
        float r11054227 = r11054226 * r11054213;
        float r11054228 = r11054225 * r11054227;
        float r11054229 = r11054224 + r11054228;
        return r11054229;
}

double f_id(double x) {
        double r11054230 = -1680.0;
        double r11054231 = x;
        double r11054232 = r11054230 * r11054231;
        double r11054233 = 3360.0;
        double r11054234 = r11054231 * r11054231;
        double r11054235 = r11054234 * r11054231;
        double r11054236 = r11054233 * r11054235;
        double r11054237 = r11054232 + r11054236;
        double r11054238 = -1344.0;
        double r11054239 = r11054235 * r11054231;
        double r11054240 = r11054239 * r11054231;
        double r11054241 = r11054238 * r11054240;
        double r11054242 = r11054237 + r11054241;
        double r11054243 = 128.0;
        double r11054244 = r11054240 * r11054231;
        double r11054245 = r11054244 * r11054231;
        double r11054246 = r11054243 * r11054245;
        double r11054247 = r11054242 + r11054246;
        return r11054247;
}


double f_of(float x) {
        float r11054248 = x;
        float r11054249 = r11054248 * r11054248;
        float r11054250 = r11054249 * r11054249;
        float r11054251 = 128.0;
        float r11054252 = r11054251 * r11054248;
        float r11054253 = r11054249 * r11054252;
        float r11054254 = -1344.0;
        float r11054255 = r11054248 * r11054254;
        float r11054256 = r11054253 + r11054255;
        float r11054257 = r11054250 * r11054256;
        float r11054258 = -1680.0;
        float r11054259 = r11054258 * r11054248;
        float r11054260 = 3360.0;
        float r11054261 = r11054260 * r11054248;
        float r11054262 = r11054249 * r11054261;
        float r11054263 = r11054259 + r11054262;
        float r11054264 = r11054257 + r11054263;
        return r11054264;
}

double f_od(double x) {
        double r11054265 = x;
        double r11054266 = r11054265 * r11054265;
        double r11054267 = r11054266 * r11054266;
        double r11054268 = 128.0;
        double r11054269 = r11054268 * r11054265;
        double r11054270 = r11054266 * r11054269;
        double r11054271 = -1344.0;
        double r11054272 = r11054265 * r11054271;
        double r11054273 = r11054270 + r11054272;
        double r11054274 = r11054267 * r11054273;
        double r11054275 = -1680.0;
        double r11054276 = r11054275 * r11054265;
        double r11054277 = 3360.0;
        double r11054278 = r11054277 * r11054265;
        double r11054279 = r11054266 * r11054278;
        double r11054280 = r11054276 + r11054279;
        double r11054281 = r11054274 + r11054280;
        return r11054281;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11054282, r11054283, r11054284, r11054285, r11054286, r11054287, r11054288, r11054289, r11054290, r11054291, r11054292, r11054293, r11054294, r11054295, r11054296, r11054297, r11054298, r11054299;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11054282, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r11054283);
        mpfr_init(r11054284);
        mpfr_init_set_str(r11054285, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r11054286);
        mpfr_init(r11054287);
        mpfr_init(r11054288);
        mpfr_init(r11054289);
        mpfr_init_set_str(r11054290, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r11054291);
        mpfr_init(r11054292);
        mpfr_init(r11054293);
        mpfr_init(r11054294);
        mpfr_init_set_str(r11054295, "128.0", 10, MPFR_RNDN);
        mpfr_init(r11054296);
        mpfr_init(r11054297);
        mpfr_init(r11054298);
        mpfr_init(r11054299);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11054283, x, MPFR_RNDN);
        mpfr_mul(r11054284, r11054282, r11054283, MPFR_RNDN);
        ;
        mpfr_mul(r11054286, r11054283, r11054283, MPFR_RNDN);
        mpfr_mul(r11054287, r11054286, r11054283, MPFR_RNDN);
        mpfr_mul(r11054288, r11054285, r11054287, MPFR_RNDN);
        mpfr_add(r11054289, r11054284, r11054288, MPFR_RNDN);
        ;
        mpfr_mul(r11054291, r11054287, r11054283, MPFR_RNDN);
        mpfr_mul(r11054292, r11054291, r11054283, MPFR_RNDN);
        mpfr_mul(r11054293, r11054290, r11054292, MPFR_RNDN);
        mpfr_add(r11054294, r11054289, r11054293, MPFR_RNDN);
        ;
        mpfr_mul(r11054296, r11054292, r11054283, MPFR_RNDN);
        mpfr_mul(r11054297, r11054296, r11054283, MPFR_RNDN);
        mpfr_mul(r11054298, r11054295, r11054297, MPFR_RNDN);
        mpfr_add(r11054299, r11054294, r11054298, MPFR_RNDN);
        return mpfr_get_d(r11054299, MPFR_RNDN);
}

static mpfr_t r11054300, r11054301, r11054302, r11054303, r11054304, r11054305, r11054306, r11054307, r11054308, r11054309, r11054310, r11054311, r11054312, r11054313, r11054314, r11054315, r11054316;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r11054300);
        mpfr_init(r11054301);
        mpfr_init(r11054302);
        mpfr_init_set_str(r11054303, "128.0", 10, MPFR_RNDN);
        mpfr_init(r11054304);
        mpfr_init(r11054305);
        mpfr_init_set_str(r11054306, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r11054307);
        mpfr_init(r11054308);
        mpfr_init(r11054309);
        mpfr_init_set_str(r11054310, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r11054311);
        mpfr_init_set_str(r11054312, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r11054313);
        mpfr_init(r11054314);
        mpfr_init(r11054315);
        mpfr_init(r11054316);
}

double f_fm(double x) {
        mpfr_set_d(r11054300, x, MPFR_RNDN);
        mpfr_mul(r11054301, r11054300, r11054300, MPFR_RNDN);
        mpfr_mul(r11054302, r11054301, r11054301, MPFR_RNDN);
        ;
        mpfr_mul(r11054304, r11054303, r11054300, MPFR_RNDN);
        mpfr_mul(r11054305, r11054301, r11054304, MPFR_RNDN);
        ;
        mpfr_mul(r11054307, r11054300, r11054306, MPFR_RNDN);
        mpfr_add(r11054308, r11054305, r11054307, MPFR_RNDN);
        mpfr_mul(r11054309, r11054302, r11054308, MPFR_RNDN);
        ;
        mpfr_mul(r11054311, r11054310, r11054300, MPFR_RNDN);
        ;
        mpfr_mul(r11054313, r11054312, r11054300, MPFR_RNDN);
        mpfr_mul(r11054314, r11054301, r11054313, MPFR_RNDN);
        mpfr_add(r11054315, r11054311, r11054314, MPFR_RNDN);
        mpfr_add(r11054316, r11054309, r11054315, MPFR_RNDN);
        return mpfr_get_d(r11054316, MPFR_RNDN);
}

static mpfr_t r11054317, r11054318, r11054319, r11054320, r11054321, r11054322, r11054323, r11054324, r11054325, r11054326, r11054327, r11054328, r11054329, r11054330, r11054331, r11054332, r11054333;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r11054317);
        mpfr_init(r11054318);
        mpfr_init(r11054319);
        mpfr_init_set_str(r11054320, "128.0", 10, MPFR_RNDN);
        mpfr_init(r11054321);
        mpfr_init(r11054322);
        mpfr_init_set_str(r11054323, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r11054324);
        mpfr_init(r11054325);
        mpfr_init(r11054326);
        mpfr_init_set_str(r11054327, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r11054328);
        mpfr_init_set_str(r11054329, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r11054330);
        mpfr_init(r11054331);
        mpfr_init(r11054332);
        mpfr_init(r11054333);
}

double f_dm(double x) {
        mpfr_set_d(r11054317, x, MPFR_RNDN);
        mpfr_mul(r11054318, r11054317, r11054317, MPFR_RNDN);
        mpfr_mul(r11054319, r11054318, r11054318, MPFR_RNDN);
        ;
        mpfr_mul(r11054321, r11054320, r11054317, MPFR_RNDN);
        mpfr_mul(r11054322, r11054318, r11054321, MPFR_RNDN);
        ;
        mpfr_mul(r11054324, r11054317, r11054323, MPFR_RNDN);
        mpfr_add(r11054325, r11054322, r11054324, MPFR_RNDN);
        mpfr_mul(r11054326, r11054319, r11054325, MPFR_RNDN);
        ;
        mpfr_mul(r11054328, r11054327, r11054317, MPFR_RNDN);
        ;
        mpfr_mul(r11054330, r11054329, r11054317, MPFR_RNDN);
        mpfr_mul(r11054331, r11054318, r11054330, MPFR_RNDN);
        mpfr_add(r11054332, r11054328, r11054331, MPFR_RNDN);
        mpfr_add(r11054333, r11054326, r11054332, MPFR_RNDN);
        return mpfr_get_d(r11054333, MPFR_RNDN);
}

