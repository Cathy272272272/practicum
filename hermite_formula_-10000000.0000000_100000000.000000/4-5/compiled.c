#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r9883237 = 120.0;
        float r9883238 = x;
        float r9883239 = r9883237 * r9883238;
        float r9883240 = -160.0;
        float r9883241 = r9883238 * r9883238;
        float r9883242 = r9883241 * r9883238;
        float r9883243 = r9883240 * r9883242;
        float r9883244 = r9883239 + r9883243;
        float r9883245 = 32.0;
        float r9883246 = r9883242 * r9883238;
        float r9883247 = r9883246 * r9883238;
        float r9883248 = r9883245 * r9883247;
        float r9883249 = r9883244 + r9883248;
        return r9883249;
}

double f_id(double x) {
        double r9883250 = 120.0;
        double r9883251 = x;
        double r9883252 = r9883250 * r9883251;
        double r9883253 = -160.0;
        double r9883254 = r9883251 * r9883251;
        double r9883255 = r9883254 * r9883251;
        double r9883256 = r9883253 * r9883255;
        double r9883257 = r9883252 + r9883256;
        double r9883258 = 32.0;
        double r9883259 = r9883255 * r9883251;
        double r9883260 = r9883259 * r9883251;
        double r9883261 = r9883258 * r9883260;
        double r9883262 = r9883257 + r9883261;
        return r9883262;
}


double f_of(float x) {
        float r9883263 = 120.0;
        float r9883264 = x;
        float r9883265 = r9883263 * r9883264;
        float r9883266 = -160.0;
        float r9883267 = r9883264 * r9883264;
        float r9883268 = r9883267 * r9883264;
        float r9883269 = r9883266 * r9883268;
        float r9883270 = r9883265 + r9883269;
        float r9883271 = 32.0;
        float r9883272 = 3;
        float r9883273 = 1;
        float r9883274 = r9883272 + r9883273;
        float r9883275 = r9883274 + r9883273;
        float r9883276 = pow(r9883264, r9883275);
        float r9883277 = r9883271 * r9883276;
        float r9883278 = r9883270 + r9883277;
        return r9883278;
}

double f_od(double x) {
        double r9883279 = 120.0;
        double r9883280 = x;
        double r9883281 = r9883279 * r9883280;
        double r9883282 = -160.0;
        double r9883283 = r9883280 * r9883280;
        double r9883284 = r9883283 * r9883280;
        double r9883285 = r9883282 * r9883284;
        double r9883286 = r9883281 + r9883285;
        double r9883287 = 32.0;
        double r9883288 = 3;
        double r9883289 = 1;
        double r9883290 = r9883288 + r9883289;
        double r9883291 = r9883290 + r9883289;
        double r9883292 = pow(r9883280, r9883291);
        double r9883293 = r9883287 * r9883292;
        double r9883294 = r9883286 + r9883293;
        return r9883294;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9883295, r9883296, r9883297, r9883298, r9883299, r9883300, r9883301, r9883302, r9883303, r9883304, r9883305, r9883306, r9883307;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9883295, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9883296);
        mpfr_init(r9883297);
        mpfr_init_set_str(r9883298, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9883299);
        mpfr_init(r9883300);
        mpfr_init(r9883301);
        mpfr_init(r9883302);
        mpfr_init_set_str(r9883303, "32.0", 10, MPFR_RNDN);
        mpfr_init(r9883304);
        mpfr_init(r9883305);
        mpfr_init(r9883306);
        mpfr_init(r9883307);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9883296, x, MPFR_RNDN);
        mpfr_mul(r9883297, r9883295, r9883296, MPFR_RNDN);
        ;
        mpfr_mul(r9883299, r9883296, r9883296, MPFR_RNDN);
        mpfr_mul(r9883300, r9883299, r9883296, MPFR_RNDN);
        mpfr_mul(r9883301, r9883298, r9883300, MPFR_RNDN);
        mpfr_add(r9883302, r9883297, r9883301, MPFR_RNDN);
        ;
        mpfr_mul(r9883304, r9883300, r9883296, MPFR_RNDN);
        mpfr_mul(r9883305, r9883304, r9883296, MPFR_RNDN);
        mpfr_mul(r9883306, r9883303, r9883305, MPFR_RNDN);
        mpfr_add(r9883307, r9883302, r9883306, MPFR_RNDN);
        return mpfr_get_d(r9883307, MPFR_RNDN);
}

static mpfr_t r9883308, r9883309, r9883310, r9883311, r9883312, r9883313, r9883314, r9883315, r9883316, r9883317, r9883318, r9883319, r9883320, r9883321, r9883322, r9883323;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9883308, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9883309);
        mpfr_init(r9883310);
        mpfr_init_set_str(r9883311, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9883312);
        mpfr_init(r9883313);
        mpfr_init(r9883314);
        mpfr_init(r9883315);
        mpfr_init_set_str(r9883316, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883317, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883318, "1", 10, MPFR_RNDN);
        mpfr_init(r9883319);
        mpfr_init(r9883320);
        mpfr_init(r9883321);
        mpfr_init(r9883322);
        mpfr_init(r9883323);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9883309, x, MPFR_RNDN);
        mpfr_mul(r9883310, r9883308, r9883309, MPFR_RNDN);
        ;
        mpfr_mul(r9883312, r9883309, r9883309, MPFR_RNDN);
        mpfr_mul(r9883313, r9883312, r9883309, MPFR_RNDN);
        mpfr_mul(r9883314, r9883311, r9883313, MPFR_RNDN);
        mpfr_add(r9883315, r9883310, r9883314, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r9883319, r9883317, r9883318, MPFR_RNDN);
        mpfr_add(r9883320, r9883319, r9883318, MPFR_RNDN);
        mpfr_pow(r9883321, r9883309, r9883320, MPFR_RNDN);
        mpfr_mul(r9883322, r9883316, r9883321, MPFR_RNDN);
        mpfr_add(r9883323, r9883315, r9883322, MPFR_RNDN);
        return mpfr_get_d(r9883323, MPFR_RNDN);
}

static mpfr_t r9883324, r9883325, r9883326, r9883327, r9883328, r9883329, r9883330, r9883331, r9883332, r9883333, r9883334, r9883335, r9883336, r9883337, r9883338, r9883339;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9883324, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9883325);
        mpfr_init(r9883326);
        mpfr_init_set_str(r9883327, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9883328);
        mpfr_init(r9883329);
        mpfr_init(r9883330);
        mpfr_init(r9883331);
        mpfr_init_set_str(r9883332, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883333, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883334, "1", 10, MPFR_RNDN);
        mpfr_init(r9883335);
        mpfr_init(r9883336);
        mpfr_init(r9883337);
        mpfr_init(r9883338);
        mpfr_init(r9883339);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9883325, x, MPFR_RNDN);
        mpfr_mul(r9883326, r9883324, r9883325, MPFR_RNDN);
        ;
        mpfr_mul(r9883328, r9883325, r9883325, MPFR_RNDN);
        mpfr_mul(r9883329, r9883328, r9883325, MPFR_RNDN);
        mpfr_mul(r9883330, r9883327, r9883329, MPFR_RNDN);
        mpfr_add(r9883331, r9883326, r9883330, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r9883335, r9883333, r9883334, MPFR_RNDN);
        mpfr_add(r9883336, r9883335, r9883334, MPFR_RNDN);
        mpfr_pow(r9883337, r9883325, r9883336, MPFR_RNDN);
        mpfr_mul(r9883338, r9883332, r9883337, MPFR_RNDN);
        mpfr_add(r9883339, r9883331, r9883338, MPFR_RNDN);
        return mpfr_get_d(r9883339, MPFR_RNDN);
}

