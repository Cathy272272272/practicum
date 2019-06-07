#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r4436240 = 1.875;
        float r4436241 = x;
        float r4436242 = r4436240 * r4436241;
        float r4436243 = -8.75;
        float r4436244 = r4436241 * r4436241;
        float r4436245 = r4436244 * r4436241;
        float r4436246 = r4436243 * r4436245;
        float r4436247 = r4436242 + r4436246;
        float r4436248 = 7.875;
        float r4436249 = r4436245 * r4436241;
        float r4436250 = r4436249 * r4436241;
        float r4436251 = r4436248 * r4436250;
        float r4436252 = r4436247 + r4436251;
        return r4436252;
}

double f_id(double x) {
        double r4436253 = 1.875;
        double r4436254 = x;
        double r4436255 = r4436253 * r4436254;
        double r4436256 = -8.75;
        double r4436257 = r4436254 * r4436254;
        double r4436258 = r4436257 * r4436254;
        double r4436259 = r4436256 * r4436258;
        double r4436260 = r4436255 + r4436259;
        double r4436261 = 7.875;
        double r4436262 = r4436258 * r4436254;
        double r4436263 = r4436262 * r4436254;
        double r4436264 = r4436261 * r4436263;
        double r4436265 = r4436260 + r4436264;
        return r4436265;
}


double f_of(float x) {
        float r4436266 = 1.875;
        float r4436267 = x;
        float r4436268 = r4436266 * r4436267;
        float r4436269 = -8.75;
        float r4436270 = r4436267 * r4436267;
        float r4436271 = r4436270 * r4436267;
        float r4436272 = r4436269 * r4436271;
        float r4436273 = r4436268 + r4436272;
        float r4436274 = 7.875;
        float r4436275 = r4436271 * r4436267;
        float r4436276 = r4436275 * r4436267;
        float r4436277 = r4436274 * r4436276;
        float r4436278 = r4436273 + r4436277;
        return r4436278;
}

double f_od(double x) {
        double r4436279 = 1.875;
        double r4436280 = x;
        double r4436281 = r4436279 * r4436280;
        double r4436282 = -8.75;
        double r4436283 = r4436280 * r4436280;
        double r4436284 = r4436283 * r4436280;
        double r4436285 = r4436282 * r4436284;
        double r4436286 = r4436281 + r4436285;
        double r4436287 = 7.875;
        double r4436288 = r4436284 * r4436280;
        double r4436289 = r4436288 * r4436280;
        double r4436290 = r4436287 * r4436289;
        double r4436291 = r4436286 + r4436290;
        return r4436291;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4436292, r4436293, r4436294, r4436295, r4436296, r4436297, r4436298, r4436299, r4436300, r4436301, r4436302, r4436303, r4436304;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4436292, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4436293);
        mpfr_init(r4436294);
        mpfr_init_set_str(r4436295, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4436296);
        mpfr_init(r4436297);
        mpfr_init(r4436298);
        mpfr_init(r4436299);
        mpfr_init_set_str(r4436300, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4436301);
        mpfr_init(r4436302);
        mpfr_init(r4436303);
        mpfr_init(r4436304);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4436293, x, MPFR_RNDN);
        mpfr_mul(r4436294, r4436292, r4436293, MPFR_RNDN);
        ;
        mpfr_mul(r4436296, r4436293, r4436293, MPFR_RNDN);
        mpfr_mul(r4436297, r4436296, r4436293, MPFR_RNDN);
        mpfr_mul(r4436298, r4436295, r4436297, MPFR_RNDN);
        mpfr_add(r4436299, r4436294, r4436298, MPFR_RNDN);
        ;
        mpfr_mul(r4436301, r4436297, r4436293, MPFR_RNDN);
        mpfr_mul(r4436302, r4436301, r4436293, MPFR_RNDN);
        mpfr_mul(r4436303, r4436300, r4436302, MPFR_RNDN);
        mpfr_add(r4436304, r4436299, r4436303, MPFR_RNDN);
        return mpfr_get_d(r4436304, MPFR_RNDN);
}

static mpfr_t r4436305, r4436306, r4436307, r4436308, r4436309, r4436310, r4436311, r4436312, r4436313, r4436314, r4436315, r4436316, r4436317;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4436305, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4436306);
        mpfr_init(r4436307);
        mpfr_init_set_str(r4436308, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4436309);
        mpfr_init(r4436310);
        mpfr_init(r4436311);
        mpfr_init(r4436312);
        mpfr_init_set_str(r4436313, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4436314);
        mpfr_init(r4436315);
        mpfr_init(r4436316);
        mpfr_init(r4436317);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4436306, x, MPFR_RNDN);
        mpfr_mul(r4436307, r4436305, r4436306, MPFR_RNDN);
        ;
        mpfr_mul(r4436309, r4436306, r4436306, MPFR_RNDN);
        mpfr_mul(r4436310, r4436309, r4436306, MPFR_RNDN);
        mpfr_mul(r4436311, r4436308, r4436310, MPFR_RNDN);
        mpfr_add(r4436312, r4436307, r4436311, MPFR_RNDN);
        ;
        mpfr_mul(r4436314, r4436310, r4436306, MPFR_RNDN);
        mpfr_mul(r4436315, r4436314, r4436306, MPFR_RNDN);
        mpfr_mul(r4436316, r4436313, r4436315, MPFR_RNDN);
        mpfr_add(r4436317, r4436312, r4436316, MPFR_RNDN);
        return mpfr_get_d(r4436317, MPFR_RNDN);
}

static mpfr_t r4436318, r4436319, r4436320, r4436321, r4436322, r4436323, r4436324, r4436325, r4436326, r4436327, r4436328, r4436329, r4436330;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4436318, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4436319);
        mpfr_init(r4436320);
        mpfr_init_set_str(r4436321, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4436322);
        mpfr_init(r4436323);
        mpfr_init(r4436324);
        mpfr_init(r4436325);
        mpfr_init_set_str(r4436326, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4436327);
        mpfr_init(r4436328);
        mpfr_init(r4436329);
        mpfr_init(r4436330);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4436319, x, MPFR_RNDN);
        mpfr_mul(r4436320, r4436318, r4436319, MPFR_RNDN);
        ;
        mpfr_mul(r4436322, r4436319, r4436319, MPFR_RNDN);
        mpfr_mul(r4436323, r4436322, r4436319, MPFR_RNDN);
        mpfr_mul(r4436324, r4436321, r4436323, MPFR_RNDN);
        mpfr_add(r4436325, r4436320, r4436324, MPFR_RNDN);
        ;
        mpfr_mul(r4436327, r4436323, r4436319, MPFR_RNDN);
        mpfr_mul(r4436328, r4436327, r4436319, MPFR_RNDN);
        mpfr_mul(r4436329, r4436326, r4436328, MPFR_RNDN);
        mpfr_add(r4436330, r4436325, r4436329, MPFR_RNDN);
        return mpfr_get_d(r4436330, MPFR_RNDN);
}

