#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7030246 = -1680.0;
        float r7030247 = x;
        float r7030248 = r7030246 * r7030247;
        float r7030249 = 3360.0;
        float r7030250 = r7030247 * r7030247;
        float r7030251 = r7030250 * r7030247;
        float r7030252 = r7030249 * r7030251;
        float r7030253 = r7030248 + r7030252;
        float r7030254 = -1344.0;
        float r7030255 = r7030251 * r7030247;
        float r7030256 = r7030255 * r7030247;
        float r7030257 = r7030254 * r7030256;
        float r7030258 = r7030253 + r7030257;
        float r7030259 = 128.0;
        float r7030260 = r7030256 * r7030247;
        float r7030261 = r7030260 * r7030247;
        float r7030262 = r7030259 * r7030261;
        float r7030263 = r7030258 + r7030262;
        return r7030263;
}

double f_id(double x) {
        double r7030264 = -1680.0;
        double r7030265 = x;
        double r7030266 = r7030264 * r7030265;
        double r7030267 = 3360.0;
        double r7030268 = r7030265 * r7030265;
        double r7030269 = r7030268 * r7030265;
        double r7030270 = r7030267 * r7030269;
        double r7030271 = r7030266 + r7030270;
        double r7030272 = -1344.0;
        double r7030273 = r7030269 * r7030265;
        double r7030274 = r7030273 * r7030265;
        double r7030275 = r7030272 * r7030274;
        double r7030276 = r7030271 + r7030275;
        double r7030277 = 128.0;
        double r7030278 = r7030274 * r7030265;
        double r7030279 = r7030278 * r7030265;
        double r7030280 = r7030277 * r7030279;
        double r7030281 = r7030276 + r7030280;
        return r7030281;
}


double f_of(float x) {
        float r7030282 = 128.0;
        float r7030283 = x;
        float r7030284 = 7;
        float r7030285 = pow(r7030283, r7030284);
        float r7030286 = r7030282 * r7030285;
        float r7030287 = 1344.0;
        float r7030288 = 5;
        float r7030289 = pow(r7030283, r7030288);
        float r7030290 = r7030287 * r7030289;
        float r7030291 = r7030286 - r7030290;
        float r7030292 = -1680.0;
        float r7030293 = r7030292 * r7030283;
        float r7030294 = r7030283 * r7030283;
        float r7030295 = 3360.0;
        float r7030296 = r7030295 * r7030283;
        float r7030297 = r7030294 * r7030296;
        float r7030298 = r7030293 + r7030297;
        float r7030299 = r7030291 + r7030298;
        return r7030299;
}

double f_od(double x) {
        double r7030300 = 128.0;
        double r7030301 = x;
        double r7030302 = 7;
        double r7030303 = pow(r7030301, r7030302);
        double r7030304 = r7030300 * r7030303;
        double r7030305 = 1344.0;
        double r7030306 = 5;
        double r7030307 = pow(r7030301, r7030306);
        double r7030308 = r7030305 * r7030307;
        double r7030309 = r7030304 - r7030308;
        double r7030310 = -1680.0;
        double r7030311 = r7030310 * r7030301;
        double r7030312 = r7030301 * r7030301;
        double r7030313 = 3360.0;
        double r7030314 = r7030313 * r7030301;
        double r7030315 = r7030312 * r7030314;
        double r7030316 = r7030311 + r7030315;
        double r7030317 = r7030309 + r7030316;
        return r7030317;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7030318, r7030319, r7030320, r7030321, r7030322, r7030323, r7030324, r7030325, r7030326, r7030327, r7030328, r7030329, r7030330, r7030331, r7030332, r7030333, r7030334, r7030335;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030318, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7030319);
        mpfr_init(r7030320);
        mpfr_init_set_str(r7030321, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7030322);
        mpfr_init(r7030323);
        mpfr_init(r7030324);
        mpfr_init(r7030325);
        mpfr_init_set_str(r7030326, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7030327);
        mpfr_init(r7030328);
        mpfr_init(r7030329);
        mpfr_init(r7030330);
        mpfr_init_set_str(r7030331, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7030332);
        mpfr_init(r7030333);
        mpfr_init(r7030334);
        mpfr_init(r7030335);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7030319, x, MPFR_RNDN);
        mpfr_mul(r7030320, r7030318, r7030319, MPFR_RNDN);
        ;
        mpfr_mul(r7030322, r7030319, r7030319, MPFR_RNDN);
        mpfr_mul(r7030323, r7030322, r7030319, MPFR_RNDN);
        mpfr_mul(r7030324, r7030321, r7030323, MPFR_RNDN);
        mpfr_add(r7030325, r7030320, r7030324, MPFR_RNDN);
        ;
        mpfr_mul(r7030327, r7030323, r7030319, MPFR_RNDN);
        mpfr_mul(r7030328, r7030327, r7030319, MPFR_RNDN);
        mpfr_mul(r7030329, r7030326, r7030328, MPFR_RNDN);
        mpfr_add(r7030330, r7030325, r7030329, MPFR_RNDN);
        ;
        mpfr_mul(r7030332, r7030328, r7030319, MPFR_RNDN);
        mpfr_mul(r7030333, r7030332, r7030319, MPFR_RNDN);
        mpfr_mul(r7030334, r7030331, r7030333, MPFR_RNDN);
        mpfr_add(r7030335, r7030330, r7030334, MPFR_RNDN);
        return mpfr_get_d(r7030335, MPFR_RNDN);
}

static mpfr_t r7030336, r7030337, r7030338, r7030339, r7030340, r7030341, r7030342, r7030343, r7030344, r7030345, r7030346, r7030347, r7030348, r7030349, r7030350, r7030351, r7030352, r7030353;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030336, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7030337);
        mpfr_init_set_str(r7030338, "7", 10, MPFR_RNDN);
        mpfr_init(r7030339);
        mpfr_init(r7030340);
        mpfr_init_set_str(r7030341, "1344.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030342, "5", 10, MPFR_RNDN);
        mpfr_init(r7030343);
        mpfr_init(r7030344);
        mpfr_init(r7030345);
        mpfr_init_set_str(r7030346, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7030347);
        mpfr_init(r7030348);
        mpfr_init_set_str(r7030349, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7030350);
        mpfr_init(r7030351);
        mpfr_init(r7030352);
        mpfr_init(r7030353);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7030337, x, MPFR_RNDN);
        ;
        mpfr_pow(r7030339, r7030337, r7030338, MPFR_RNDN);
        mpfr_mul(r7030340, r7030336, r7030339, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7030343, r7030337, r7030342, MPFR_RNDN);
        mpfr_mul(r7030344, r7030341, r7030343, MPFR_RNDN);
        mpfr_sub(r7030345, r7030340, r7030344, MPFR_RNDN);
        ;
        mpfr_mul(r7030347, r7030346, r7030337, MPFR_RNDN);
        mpfr_mul(r7030348, r7030337, r7030337, MPFR_RNDN);
        ;
        mpfr_mul(r7030350, r7030349, r7030337, MPFR_RNDN);
        mpfr_mul(r7030351, r7030348, r7030350, MPFR_RNDN);
        mpfr_add(r7030352, r7030347, r7030351, MPFR_RNDN);
        mpfr_add(r7030353, r7030345, r7030352, MPFR_RNDN);
        return mpfr_get_d(r7030353, MPFR_RNDN);
}

static mpfr_t r7030354, r7030355, r7030356, r7030357, r7030358, r7030359, r7030360, r7030361, r7030362, r7030363, r7030364, r7030365, r7030366, r7030367, r7030368, r7030369, r7030370, r7030371;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030354, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7030355);
        mpfr_init_set_str(r7030356, "7", 10, MPFR_RNDN);
        mpfr_init(r7030357);
        mpfr_init(r7030358);
        mpfr_init_set_str(r7030359, "1344.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030360, "5", 10, MPFR_RNDN);
        mpfr_init(r7030361);
        mpfr_init(r7030362);
        mpfr_init(r7030363);
        mpfr_init_set_str(r7030364, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7030365);
        mpfr_init(r7030366);
        mpfr_init_set_str(r7030367, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7030368);
        mpfr_init(r7030369);
        mpfr_init(r7030370);
        mpfr_init(r7030371);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7030355, x, MPFR_RNDN);
        ;
        mpfr_pow(r7030357, r7030355, r7030356, MPFR_RNDN);
        mpfr_mul(r7030358, r7030354, r7030357, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7030361, r7030355, r7030360, MPFR_RNDN);
        mpfr_mul(r7030362, r7030359, r7030361, MPFR_RNDN);
        mpfr_sub(r7030363, r7030358, r7030362, MPFR_RNDN);
        ;
        mpfr_mul(r7030365, r7030364, r7030355, MPFR_RNDN);
        mpfr_mul(r7030366, r7030355, r7030355, MPFR_RNDN);
        ;
        mpfr_mul(r7030368, r7030367, r7030355, MPFR_RNDN);
        mpfr_mul(r7030369, r7030366, r7030368, MPFR_RNDN);
        mpfr_add(r7030370, r7030365, r7030369, MPFR_RNDN);
        mpfr_add(r7030371, r7030363, r7030370, MPFR_RNDN);
        return mpfr_get_d(r7030371, MPFR_RNDN);
}

