#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r31481229 = 0.375;
        float r31481230 = -3.75;
        float r31481231 = x;
        float r31481232 = r31481231 * r31481231;
        float r31481233 = r31481230 * r31481232;
        float r31481234 = r31481229 + r31481233;
        float r31481235 = 4.375;
        float r31481236 = r31481232 * r31481231;
        float r31481237 = r31481236 * r31481231;
        float r31481238 = r31481235 * r31481237;
        float r31481239 = r31481234 + r31481238;
        return r31481239;
}

double f_id(double x) {
        double r31481240 = 0.375;
        double r31481241 = -3.75;
        double r31481242 = x;
        double r31481243 = r31481242 * r31481242;
        double r31481244 = r31481241 * r31481243;
        double r31481245 = r31481240 + r31481244;
        double r31481246 = 4.375;
        double r31481247 = r31481243 * r31481242;
        double r31481248 = r31481247 * r31481242;
        double r31481249 = r31481246 * r31481248;
        double r31481250 = r31481245 + r31481249;
        return r31481250;
}


double f_of(float x) {
        float r31481251 = 0.375;
        float r31481252 = -3.75;
        float r31481253 = x;
        float r31481254 = r31481253 * r31481253;
        float r31481255 = r31481252 * r31481254;
        float r31481256 = r31481251 + r31481255;
        float r31481257 = 4.375;
        float r31481258 = r31481254 * r31481253;
        float r31481259 = r31481257 * r31481258;
        float r31481260 = r31481259 * r31481253;
        float r31481261 = r31481256 + r31481260;
        float r31481262 = sqrt(r31481261);
        float r31481263 = 3;
        float r31481264 = pow(r31481253, r31481263);
        float r31481265 = r31481264 * r31481253;
        float r31481266 = r31481265 * r31481257;
        float r31481267 = r31481253 * r31481252;
        float r31481268 = r31481267 * r31481253;
        float r31481269 = r31481266 + r31481268;
        float r31481270 = r31481269 + r31481251;
        float r31481271 = sqrt(r31481270);
        float r31481272 = r31481262 * r31481271;
        return r31481272;
}

double f_od(double x) {
        double r31481273 = 0.375;
        double r31481274 = -3.75;
        double r31481275 = x;
        double r31481276 = r31481275 * r31481275;
        double r31481277 = r31481274 * r31481276;
        double r31481278 = r31481273 + r31481277;
        double r31481279 = 4.375;
        double r31481280 = r31481276 * r31481275;
        double r31481281 = r31481279 * r31481280;
        double r31481282 = r31481281 * r31481275;
        double r31481283 = r31481278 + r31481282;
        double r31481284 = sqrt(r31481283);
        double r31481285 = 3;
        double r31481286 = pow(r31481275, r31481285);
        double r31481287 = r31481286 * r31481275;
        double r31481288 = r31481287 * r31481279;
        double r31481289 = r31481275 * r31481274;
        double r31481290 = r31481289 * r31481275;
        double r31481291 = r31481288 + r31481290;
        double r31481292 = r31481291 + r31481273;
        double r31481293 = sqrt(r31481292);
        double r31481294 = r31481284 * r31481293;
        return r31481294;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31481295, r31481296, r31481297, r31481298, r31481299, r31481300, r31481301, r31481302, r31481303, r31481304, r31481305;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481295, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r31481296, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r31481297);
        mpfr_init(r31481298);
        mpfr_init(r31481299);
        mpfr_init(r31481300);
        mpfr_init_set_str(r31481301, "4.375", 10, MPFR_RNDN);
        mpfr_init(r31481302);
        mpfr_init(r31481303);
        mpfr_init(r31481304);
        mpfr_init(r31481305);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r31481297, x, MPFR_RNDN);
        mpfr_mul(r31481298, r31481297, r31481297, MPFR_RNDN);
        mpfr_mul(r31481299, r31481296, r31481298, MPFR_RNDN);
        mpfr_add(r31481300, r31481295, r31481299, MPFR_RNDN);
        ;
        mpfr_mul(r31481302, r31481298, r31481297, MPFR_RNDN);
        mpfr_mul(r31481303, r31481302, r31481297, MPFR_RNDN);
        mpfr_mul(r31481304, r31481301, r31481303, MPFR_RNDN);
        mpfr_add(r31481305, r31481300, r31481304, MPFR_RNDN);
        return mpfr_get_d(r31481305, MPFR_RNDN);
}

static mpfr_t r31481306, r31481307, r31481308, r31481309, r31481310, r31481311, r31481312, r31481313, r31481314, r31481315, r31481316, r31481317, r31481318, r31481319, r31481320, r31481321, r31481322, r31481323, r31481324, r31481325, r31481326, r31481327;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481306, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r31481307, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r31481308);
        mpfr_init(r31481309);
        mpfr_init(r31481310);
        mpfr_init(r31481311);
        mpfr_init_set_str(r31481312, "4.375", 10, MPFR_RNDN);
        mpfr_init(r31481313);
        mpfr_init(r31481314);
        mpfr_init(r31481315);
        mpfr_init(r31481316);
        mpfr_init(r31481317);
        mpfr_init_set_str(r31481318, "3", 10, MPFR_RNDN);
        mpfr_init(r31481319);
        mpfr_init(r31481320);
        mpfr_init(r31481321);
        mpfr_init(r31481322);
        mpfr_init(r31481323);
        mpfr_init(r31481324);
        mpfr_init(r31481325);
        mpfr_init(r31481326);
        mpfr_init(r31481327);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r31481308, x, MPFR_RNDN);
        mpfr_mul(r31481309, r31481308, r31481308, MPFR_RNDN);
        mpfr_mul(r31481310, r31481307, r31481309, MPFR_RNDN);
        mpfr_add(r31481311, r31481306, r31481310, MPFR_RNDN);
        ;
        mpfr_mul(r31481313, r31481309, r31481308, MPFR_RNDN);
        mpfr_mul(r31481314, r31481312, r31481313, MPFR_RNDN);
        mpfr_mul(r31481315, r31481314, r31481308, MPFR_RNDN);
        mpfr_add(r31481316, r31481311, r31481315, MPFR_RNDN);
        mpfr_sqrt(r31481317, r31481316, MPFR_RNDN);
        ;
        mpfr_pow(r31481319, r31481308, r31481318, MPFR_RNDN);
        mpfr_mul(r31481320, r31481319, r31481308, MPFR_RNDN);
        mpfr_mul(r31481321, r31481320, r31481312, MPFR_RNDN);
        mpfr_mul(r31481322, r31481308, r31481307, MPFR_RNDN);
        mpfr_mul(r31481323, r31481322, r31481308, MPFR_RNDN);
        mpfr_add(r31481324, r31481321, r31481323, MPFR_RNDN);
        mpfr_add(r31481325, r31481324, r31481306, MPFR_RNDN);
        mpfr_sqrt(r31481326, r31481325, MPFR_RNDN);
        mpfr_mul(r31481327, r31481317, r31481326, MPFR_RNDN);
        return mpfr_get_d(r31481327, MPFR_RNDN);
}

static mpfr_t r31481328, r31481329, r31481330, r31481331, r31481332, r31481333, r31481334, r31481335, r31481336, r31481337, r31481338, r31481339, r31481340, r31481341, r31481342, r31481343, r31481344, r31481345, r31481346, r31481347, r31481348, r31481349;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481328, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r31481329, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r31481330);
        mpfr_init(r31481331);
        mpfr_init(r31481332);
        mpfr_init(r31481333);
        mpfr_init_set_str(r31481334, "4.375", 10, MPFR_RNDN);
        mpfr_init(r31481335);
        mpfr_init(r31481336);
        mpfr_init(r31481337);
        mpfr_init(r31481338);
        mpfr_init(r31481339);
        mpfr_init_set_str(r31481340, "3", 10, MPFR_RNDN);
        mpfr_init(r31481341);
        mpfr_init(r31481342);
        mpfr_init(r31481343);
        mpfr_init(r31481344);
        mpfr_init(r31481345);
        mpfr_init(r31481346);
        mpfr_init(r31481347);
        mpfr_init(r31481348);
        mpfr_init(r31481349);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r31481330, x, MPFR_RNDN);
        mpfr_mul(r31481331, r31481330, r31481330, MPFR_RNDN);
        mpfr_mul(r31481332, r31481329, r31481331, MPFR_RNDN);
        mpfr_add(r31481333, r31481328, r31481332, MPFR_RNDN);
        ;
        mpfr_mul(r31481335, r31481331, r31481330, MPFR_RNDN);
        mpfr_mul(r31481336, r31481334, r31481335, MPFR_RNDN);
        mpfr_mul(r31481337, r31481336, r31481330, MPFR_RNDN);
        mpfr_add(r31481338, r31481333, r31481337, MPFR_RNDN);
        mpfr_sqrt(r31481339, r31481338, MPFR_RNDN);
        ;
        mpfr_pow(r31481341, r31481330, r31481340, MPFR_RNDN);
        mpfr_mul(r31481342, r31481341, r31481330, MPFR_RNDN);
        mpfr_mul(r31481343, r31481342, r31481334, MPFR_RNDN);
        mpfr_mul(r31481344, r31481330, r31481329, MPFR_RNDN);
        mpfr_mul(r31481345, r31481344, r31481330, MPFR_RNDN);
        mpfr_add(r31481346, r31481343, r31481345, MPFR_RNDN);
        mpfr_add(r31481347, r31481346, r31481328, MPFR_RNDN);
        mpfr_sqrt(r31481348, r31481347, MPFR_RNDN);
        mpfr_mul(r31481349, r31481339, r31481348, MPFR_RNDN);
        return mpfr_get_d(r31481349, MPFR_RNDN);
}

