#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r11626223 = -120.0;
        float r11626224 = 720.0;
        float r11626225 = x;
        float r11626226 = r11626225 * r11626225;
        float r11626227 = r11626224 * r11626226;
        float r11626228 = r11626223 + r11626227;
        float r11626229 = -480.0;
        float r11626230 = r11626226 * r11626225;
        float r11626231 = r11626230 * r11626225;
        float r11626232 = r11626229 * r11626231;
        float r11626233 = r11626228 + r11626232;
        float r11626234 = 64.0;
        float r11626235 = r11626231 * r11626225;
        float r11626236 = r11626235 * r11626225;
        float r11626237 = r11626234 * r11626236;
        float r11626238 = r11626233 + r11626237;
        return r11626238;
}

double f_id(double x) {
        double r11626239 = -120.0;
        double r11626240 = 720.0;
        double r11626241 = x;
        double r11626242 = r11626241 * r11626241;
        double r11626243 = r11626240 * r11626242;
        double r11626244 = r11626239 + r11626243;
        double r11626245 = -480.0;
        double r11626246 = r11626242 * r11626241;
        double r11626247 = r11626246 * r11626241;
        double r11626248 = r11626245 * r11626247;
        double r11626249 = r11626244 + r11626248;
        double r11626250 = 64.0;
        double r11626251 = r11626247 * r11626241;
        double r11626252 = r11626251 * r11626241;
        double r11626253 = r11626250 * r11626252;
        double r11626254 = r11626249 + r11626253;
        return r11626254;
}


double f_of(float x) {
        float r11626255 = -120.0;
        float r11626256 = 720.0;
        float r11626257 = x;
        float r11626258 = r11626257 * r11626257;
        float r11626259 = r11626256 * r11626258;
        float r11626260 = log(r11626259);
        float r11626261 = exp(r11626260);
        float r11626262 = r11626255 + r11626261;
        float r11626263 = -480.0;
        float r11626264 = r11626258 * r11626257;
        float r11626265 = r11626264 * r11626257;
        float r11626266 = r11626263 * r11626265;
        float r11626267 = r11626262 + r11626266;
        float r11626268 = 64.0;
        float r11626269 = r11626265 * r11626257;
        float r11626270 = r11626269 * r11626257;
        float r11626271 = r11626268 * r11626270;
        float r11626272 = r11626267 + r11626271;
        return r11626272;
}

double f_od(double x) {
        double r11626273 = -120.0;
        double r11626274 = 720.0;
        double r11626275 = x;
        double r11626276 = r11626275 * r11626275;
        double r11626277 = r11626274 * r11626276;
        double r11626278 = log(r11626277);
        double r11626279 = exp(r11626278);
        double r11626280 = r11626273 + r11626279;
        double r11626281 = -480.0;
        double r11626282 = r11626276 * r11626275;
        double r11626283 = r11626282 * r11626275;
        double r11626284 = r11626281 * r11626283;
        double r11626285 = r11626280 + r11626284;
        double r11626286 = 64.0;
        double r11626287 = r11626283 * r11626275;
        double r11626288 = r11626287 * r11626275;
        double r11626289 = r11626286 * r11626288;
        double r11626290 = r11626285 + r11626289;
        return r11626290;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11626291, r11626292, r11626293, r11626294, r11626295, r11626296, r11626297, r11626298, r11626299, r11626300, r11626301, r11626302, r11626303, r11626304, r11626305, r11626306;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626291, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626292, "720.0", 10, MPFR_RNDN);
        mpfr_init(r11626293);
        mpfr_init(r11626294);
        mpfr_init(r11626295);
        mpfr_init(r11626296);
        mpfr_init_set_str(r11626297, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r11626298);
        mpfr_init(r11626299);
        mpfr_init(r11626300);
        mpfr_init(r11626301);
        mpfr_init_set_str(r11626302, "64.0", 10, MPFR_RNDN);
        mpfr_init(r11626303);
        mpfr_init(r11626304);
        mpfr_init(r11626305);
        mpfr_init(r11626306);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11626293, x, MPFR_RNDN);
        mpfr_mul(r11626294, r11626293, r11626293, MPFR_RNDN);
        mpfr_mul(r11626295, r11626292, r11626294, MPFR_RNDN);
        mpfr_add(r11626296, r11626291, r11626295, MPFR_RNDN);
        ;
        mpfr_mul(r11626298, r11626294, r11626293, MPFR_RNDN);
        mpfr_mul(r11626299, r11626298, r11626293, MPFR_RNDN);
        mpfr_mul(r11626300, r11626297, r11626299, MPFR_RNDN);
        mpfr_add(r11626301, r11626296, r11626300, MPFR_RNDN);
        ;
        mpfr_mul(r11626303, r11626299, r11626293, MPFR_RNDN);
        mpfr_mul(r11626304, r11626303, r11626293, MPFR_RNDN);
        mpfr_mul(r11626305, r11626302, r11626304, MPFR_RNDN);
        mpfr_add(r11626306, r11626301, r11626305, MPFR_RNDN);
        return mpfr_get_d(r11626306, MPFR_RNDN);
}

static mpfr_t r11626307, r11626308, r11626309, r11626310, r11626311, r11626312, r11626313, r11626314, r11626315, r11626316, r11626317, r11626318, r11626319, r11626320, r11626321, r11626322, r11626323, r11626324;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626307, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626308, "720.0", 10, MPFR_RNDN);
        mpfr_init(r11626309);
        mpfr_init(r11626310);
        mpfr_init(r11626311);
        mpfr_init(r11626312);
        mpfr_init(r11626313);
        mpfr_init(r11626314);
        mpfr_init_set_str(r11626315, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r11626316);
        mpfr_init(r11626317);
        mpfr_init(r11626318);
        mpfr_init(r11626319);
        mpfr_init_set_str(r11626320, "64.0", 10, MPFR_RNDN);
        mpfr_init(r11626321);
        mpfr_init(r11626322);
        mpfr_init(r11626323);
        mpfr_init(r11626324);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11626309, x, MPFR_RNDN);
        mpfr_mul(r11626310, r11626309, r11626309, MPFR_RNDN);
        mpfr_mul(r11626311, r11626308, r11626310, MPFR_RNDN);
        mpfr_log(r11626312, r11626311, MPFR_RNDN);
        mpfr_exp(r11626313, r11626312, MPFR_RNDN);
        mpfr_add(r11626314, r11626307, r11626313, MPFR_RNDN);
        ;
        mpfr_mul(r11626316, r11626310, r11626309, MPFR_RNDN);
        mpfr_mul(r11626317, r11626316, r11626309, MPFR_RNDN);
        mpfr_mul(r11626318, r11626315, r11626317, MPFR_RNDN);
        mpfr_add(r11626319, r11626314, r11626318, MPFR_RNDN);
        ;
        mpfr_mul(r11626321, r11626317, r11626309, MPFR_RNDN);
        mpfr_mul(r11626322, r11626321, r11626309, MPFR_RNDN);
        mpfr_mul(r11626323, r11626320, r11626322, MPFR_RNDN);
        mpfr_add(r11626324, r11626319, r11626323, MPFR_RNDN);
        return mpfr_get_d(r11626324, MPFR_RNDN);
}

static mpfr_t r11626325, r11626326, r11626327, r11626328, r11626329, r11626330, r11626331, r11626332, r11626333, r11626334, r11626335, r11626336, r11626337, r11626338, r11626339, r11626340, r11626341, r11626342;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626325, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626326, "720.0", 10, MPFR_RNDN);
        mpfr_init(r11626327);
        mpfr_init(r11626328);
        mpfr_init(r11626329);
        mpfr_init(r11626330);
        mpfr_init(r11626331);
        mpfr_init(r11626332);
        mpfr_init_set_str(r11626333, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r11626334);
        mpfr_init(r11626335);
        mpfr_init(r11626336);
        mpfr_init(r11626337);
        mpfr_init_set_str(r11626338, "64.0", 10, MPFR_RNDN);
        mpfr_init(r11626339);
        mpfr_init(r11626340);
        mpfr_init(r11626341);
        mpfr_init(r11626342);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11626327, x, MPFR_RNDN);
        mpfr_mul(r11626328, r11626327, r11626327, MPFR_RNDN);
        mpfr_mul(r11626329, r11626326, r11626328, MPFR_RNDN);
        mpfr_log(r11626330, r11626329, MPFR_RNDN);
        mpfr_exp(r11626331, r11626330, MPFR_RNDN);
        mpfr_add(r11626332, r11626325, r11626331, MPFR_RNDN);
        ;
        mpfr_mul(r11626334, r11626328, r11626327, MPFR_RNDN);
        mpfr_mul(r11626335, r11626334, r11626327, MPFR_RNDN);
        mpfr_mul(r11626336, r11626333, r11626335, MPFR_RNDN);
        mpfr_add(r11626337, r11626332, r11626336, MPFR_RNDN);
        ;
        mpfr_mul(r11626339, r11626335, r11626327, MPFR_RNDN);
        mpfr_mul(r11626340, r11626339, r11626327, MPFR_RNDN);
        mpfr_mul(r11626341, r11626338, r11626340, MPFR_RNDN);
        mpfr_add(r11626342, r11626337, r11626341, MPFR_RNDN);
        return mpfr_get_d(r11626342, MPFR_RNDN);
}

