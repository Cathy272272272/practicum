#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r5394213 = 1.875;
        float r5394214 = x;
        float r5394215 = r5394213 * r5394214;
        float r5394216 = -8.75;
        float r5394217 = r5394214 * r5394214;
        float r5394218 = r5394217 * r5394214;
        float r5394219 = r5394216 * r5394218;
        float r5394220 = r5394215 + r5394219;
        float r5394221 = 7.875;
        float r5394222 = r5394218 * r5394214;
        float r5394223 = r5394222 * r5394214;
        float r5394224 = r5394221 * r5394223;
        float r5394225 = r5394220 + r5394224;
        return r5394225;
}

double f_id(double x) {
        double r5394226 = 1.875;
        double r5394227 = x;
        double r5394228 = r5394226 * r5394227;
        double r5394229 = -8.75;
        double r5394230 = r5394227 * r5394227;
        double r5394231 = r5394230 * r5394227;
        double r5394232 = r5394229 * r5394231;
        double r5394233 = r5394228 + r5394232;
        double r5394234 = 7.875;
        double r5394235 = r5394231 * r5394227;
        double r5394236 = r5394235 * r5394227;
        double r5394237 = r5394234 * r5394236;
        double r5394238 = r5394233 + r5394237;
        return r5394238;
}


double f_of(float x) {
        float r5394239 = 1.875;
        float r5394240 = x;
        float r5394241 = r5394239 * r5394240;
        float r5394242 = -8.75;
        float r5394243 = r5394240 * r5394240;
        float r5394244 = r5394243 * r5394240;
        float r5394245 = r5394242 * r5394244;
        float r5394246 = r5394241 + r5394245;
        float r5394247 = 7.875;
        float r5394248 = r5394244 * r5394240;
        float r5394249 = r5394248 * r5394240;
        float r5394250 = r5394247 * r5394249;
        float r5394251 = r5394246 + r5394250;
        return r5394251;
}

double f_od(double x) {
        double r5394252 = 1.875;
        double r5394253 = x;
        double r5394254 = r5394252 * r5394253;
        double r5394255 = -8.75;
        double r5394256 = r5394253 * r5394253;
        double r5394257 = r5394256 * r5394253;
        double r5394258 = r5394255 * r5394257;
        double r5394259 = r5394254 + r5394258;
        double r5394260 = 7.875;
        double r5394261 = r5394257 * r5394253;
        double r5394262 = r5394261 * r5394253;
        double r5394263 = r5394260 * r5394262;
        double r5394264 = r5394259 + r5394263;
        return r5394264;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5394265, r5394266, r5394267, r5394268, r5394269, r5394270, r5394271, r5394272, r5394273, r5394274, r5394275, r5394276, r5394277;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5394265, "1.875", 10, MPFR_RNDN);
        mpfr_init(r5394266);
        mpfr_init(r5394267);
        mpfr_init_set_str(r5394268, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r5394269);
        mpfr_init(r5394270);
        mpfr_init(r5394271);
        mpfr_init(r5394272);
        mpfr_init_set_str(r5394273, "7.875", 10, MPFR_RNDN);
        mpfr_init(r5394274);
        mpfr_init(r5394275);
        mpfr_init(r5394276);
        mpfr_init(r5394277);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5394266, x, MPFR_RNDN);
        mpfr_mul(r5394267, r5394265, r5394266, MPFR_RNDN);
        ;
        mpfr_mul(r5394269, r5394266, r5394266, MPFR_RNDN);
        mpfr_mul(r5394270, r5394269, r5394266, MPFR_RNDN);
        mpfr_mul(r5394271, r5394268, r5394270, MPFR_RNDN);
        mpfr_add(r5394272, r5394267, r5394271, MPFR_RNDN);
        ;
        mpfr_mul(r5394274, r5394270, r5394266, MPFR_RNDN);
        mpfr_mul(r5394275, r5394274, r5394266, MPFR_RNDN);
        mpfr_mul(r5394276, r5394273, r5394275, MPFR_RNDN);
        mpfr_add(r5394277, r5394272, r5394276, MPFR_RNDN);
        return mpfr_get_d(r5394277, MPFR_RNDN);
}

static mpfr_t r5394278, r5394279, r5394280, r5394281, r5394282, r5394283, r5394284, r5394285, r5394286, r5394287, r5394288, r5394289, r5394290;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5394278, "1.875", 10, MPFR_RNDN);
        mpfr_init(r5394279);
        mpfr_init(r5394280);
        mpfr_init_set_str(r5394281, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r5394282);
        mpfr_init(r5394283);
        mpfr_init(r5394284);
        mpfr_init(r5394285);
        mpfr_init_set_str(r5394286, "7.875", 10, MPFR_RNDN);
        mpfr_init(r5394287);
        mpfr_init(r5394288);
        mpfr_init(r5394289);
        mpfr_init(r5394290);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5394279, x, MPFR_RNDN);
        mpfr_mul(r5394280, r5394278, r5394279, MPFR_RNDN);
        ;
        mpfr_mul(r5394282, r5394279, r5394279, MPFR_RNDN);
        mpfr_mul(r5394283, r5394282, r5394279, MPFR_RNDN);
        mpfr_mul(r5394284, r5394281, r5394283, MPFR_RNDN);
        mpfr_add(r5394285, r5394280, r5394284, MPFR_RNDN);
        ;
        mpfr_mul(r5394287, r5394283, r5394279, MPFR_RNDN);
        mpfr_mul(r5394288, r5394287, r5394279, MPFR_RNDN);
        mpfr_mul(r5394289, r5394286, r5394288, MPFR_RNDN);
        mpfr_add(r5394290, r5394285, r5394289, MPFR_RNDN);
        return mpfr_get_d(r5394290, MPFR_RNDN);
}

static mpfr_t r5394291, r5394292, r5394293, r5394294, r5394295, r5394296, r5394297, r5394298, r5394299, r5394300, r5394301, r5394302, r5394303;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5394291, "1.875", 10, MPFR_RNDN);
        mpfr_init(r5394292);
        mpfr_init(r5394293);
        mpfr_init_set_str(r5394294, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r5394295);
        mpfr_init(r5394296);
        mpfr_init(r5394297);
        mpfr_init(r5394298);
        mpfr_init_set_str(r5394299, "7.875", 10, MPFR_RNDN);
        mpfr_init(r5394300);
        mpfr_init(r5394301);
        mpfr_init(r5394302);
        mpfr_init(r5394303);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5394292, x, MPFR_RNDN);
        mpfr_mul(r5394293, r5394291, r5394292, MPFR_RNDN);
        ;
        mpfr_mul(r5394295, r5394292, r5394292, MPFR_RNDN);
        mpfr_mul(r5394296, r5394295, r5394292, MPFR_RNDN);
        mpfr_mul(r5394297, r5394294, r5394296, MPFR_RNDN);
        mpfr_add(r5394298, r5394293, r5394297, MPFR_RNDN);
        ;
        mpfr_mul(r5394300, r5394296, r5394292, MPFR_RNDN);
        mpfr_mul(r5394301, r5394300, r5394292, MPFR_RNDN);
        mpfr_mul(r5394302, r5394299, r5394301, MPFR_RNDN);
        mpfr_add(r5394303, r5394298, r5394302, MPFR_RNDN);
        return mpfr_get_d(r5394303, MPFR_RNDN);
}

