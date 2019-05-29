#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r20862212 = 1.0;
        float r20862213 = -6.0;
        float r20862214 = x;
        float r20862215 = r20862213 * r20862214;
        float r20862216 = r20862212 + r20862215;
        float r20862217 = 7.5;
        float r20862218 = r20862214 * r20862214;
        float r20862219 = r20862217 * r20862218;
        float r20862220 = r20862216 + r20862219;
        float r20862221 = -3.333333;
        float r20862222 = r20862218 * r20862214;
        float r20862223 = r20862221 * r20862222;
        float r20862224 = r20862220 + r20862223;
        float r20862225 = 0.625;
        float r20862226 = r20862222 * r20862214;
        float r20862227 = r20862225 * r20862226;
        float r20862228 = r20862224 + r20862227;
        float r20862229 = -0.05;
        float r20862230 = r20862226 * r20862214;
        float r20862231 = r20862229 * r20862230;
        float r20862232 = r20862228 + r20862231;
        float r20862233 = 0.001389;
        float r20862234 = r20862230 * r20862214;
        float r20862235 = r20862233 * r20862234;
        float r20862236 = r20862232 + r20862235;
        return r20862236;
}

double f_id(double x) {
        double r20862237 = 1.0;
        double r20862238 = -6.0;
        double r20862239 = x;
        double r20862240 = r20862238 * r20862239;
        double r20862241 = r20862237 + r20862240;
        double r20862242 = 7.5;
        double r20862243 = r20862239 * r20862239;
        double r20862244 = r20862242 * r20862243;
        double r20862245 = r20862241 + r20862244;
        double r20862246 = -3.333333;
        double r20862247 = r20862243 * r20862239;
        double r20862248 = r20862246 * r20862247;
        double r20862249 = r20862245 + r20862248;
        double r20862250 = 0.625;
        double r20862251 = r20862247 * r20862239;
        double r20862252 = r20862250 * r20862251;
        double r20862253 = r20862249 + r20862252;
        double r20862254 = -0.05;
        double r20862255 = r20862251 * r20862239;
        double r20862256 = r20862254 * r20862255;
        double r20862257 = r20862253 + r20862256;
        double r20862258 = 0.001389;
        double r20862259 = r20862255 * r20862239;
        double r20862260 = r20862258 * r20862259;
        double r20862261 = r20862257 + r20862260;
        return r20862261;
}


double f_of(float x) {
        float r20862262 = x;
        float r20862263 = 0.001389;
        float r20862264 = r20862263 * r20862262;
        float r20862265 = r20862262 * r20862264;
        float r20862266 = r20862262 * r20862262;
        float r20862267 = r20862266 * r20862266;
        float r20862268 = r20862265 * r20862267;
        float r20862269 = -6.0;
        float r20862270 = r20862262 * r20862269;
        float r20862271 = 1.0;
        float r20862272 = r20862270 + r20862271;
        float r20862273 = r20862268 + r20862272;
        float r20862274 = 0.625;
        float r20862275 = -0.05;
        float r20862276 = r20862275 * r20862262;
        float r20862277 = r20862274 + r20862276;
        float r20862278 = r20862267 * r20862277;
        float r20862279 = -3.333333;
        float r20862280 = r20862279 * r20862262;
        float r20862281 = 7.5;
        float r20862282 = r20862280 + r20862281;
        float r20862283 = r20862266 * r20862282;
        float r20862284 = r20862278 + r20862283;
        float r20862285 = r20862273 + r20862284;
        return r20862285;
}

double f_od(double x) {
        double r20862286 = x;
        double r20862287 = 0.001389;
        double r20862288 = r20862287 * r20862286;
        double r20862289 = r20862286 * r20862288;
        double r20862290 = r20862286 * r20862286;
        double r20862291 = r20862290 * r20862290;
        double r20862292 = r20862289 * r20862291;
        double r20862293 = -6.0;
        double r20862294 = r20862286 * r20862293;
        double r20862295 = 1.0;
        double r20862296 = r20862294 + r20862295;
        double r20862297 = r20862292 + r20862296;
        double r20862298 = 0.625;
        double r20862299 = -0.05;
        double r20862300 = r20862299 * r20862286;
        double r20862301 = r20862298 + r20862300;
        double r20862302 = r20862291 * r20862301;
        double r20862303 = -3.333333;
        double r20862304 = r20862303 * r20862286;
        double r20862305 = 7.5;
        double r20862306 = r20862304 + r20862305;
        double r20862307 = r20862290 * r20862306;
        double r20862308 = r20862302 + r20862307;
        double r20862309 = r20862297 + r20862308;
        return r20862309;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20862310, r20862311, r20862312, r20862313, r20862314, r20862315, r20862316, r20862317, r20862318, r20862319, r20862320, r20862321, r20862322, r20862323, r20862324, r20862325, r20862326, r20862327, r20862328, r20862329, r20862330, r20862331, r20862332, r20862333, r20862334;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20862310, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862311, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r20862312);
        mpfr_init(r20862313);
        mpfr_init(r20862314);
        mpfr_init_set_str(r20862315, "7.5", 10, MPFR_RNDN);
        mpfr_init(r20862316);
        mpfr_init(r20862317);
        mpfr_init(r20862318);
        mpfr_init_set_str(r20862319, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r20862320);
        mpfr_init(r20862321);
        mpfr_init(r20862322);
        mpfr_init_set_str(r20862323, "0.625", 10, MPFR_RNDN);
        mpfr_init(r20862324);
        mpfr_init(r20862325);
        mpfr_init(r20862326);
        mpfr_init_set_str(r20862327, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r20862328);
        mpfr_init(r20862329);
        mpfr_init(r20862330);
        mpfr_init_set_str(r20862331, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r20862332);
        mpfr_init(r20862333);
        mpfr_init(r20862334);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20862312, x, MPFR_RNDN);
        mpfr_mul(r20862313, r20862311, r20862312, MPFR_RNDN);
        mpfr_add(r20862314, r20862310, r20862313, MPFR_RNDN);
        ;
        mpfr_mul(r20862316, r20862312, r20862312, MPFR_RNDN);
        mpfr_mul(r20862317, r20862315, r20862316, MPFR_RNDN);
        mpfr_add(r20862318, r20862314, r20862317, MPFR_RNDN);
        ;
        mpfr_mul(r20862320, r20862316, r20862312, MPFR_RNDN);
        mpfr_mul(r20862321, r20862319, r20862320, MPFR_RNDN);
        mpfr_add(r20862322, r20862318, r20862321, MPFR_RNDN);
        ;
        mpfr_mul(r20862324, r20862320, r20862312, MPFR_RNDN);
        mpfr_mul(r20862325, r20862323, r20862324, MPFR_RNDN);
        mpfr_add(r20862326, r20862322, r20862325, MPFR_RNDN);
        ;
        mpfr_mul(r20862328, r20862324, r20862312, MPFR_RNDN);
        mpfr_mul(r20862329, r20862327, r20862328, MPFR_RNDN);
        mpfr_add(r20862330, r20862326, r20862329, MPFR_RNDN);
        ;
        mpfr_mul(r20862332, r20862328, r20862312, MPFR_RNDN);
        mpfr_mul(r20862333, r20862331, r20862332, MPFR_RNDN);
        mpfr_add(r20862334, r20862330, r20862333, MPFR_RNDN);
        return mpfr_get_d(r20862334, MPFR_RNDN);
}

static mpfr_t r20862335, r20862336, r20862337, r20862338, r20862339, r20862340, r20862341, r20862342, r20862343, r20862344, r20862345, r20862346, r20862347, r20862348, r20862349, r20862350, r20862351, r20862352, r20862353, r20862354, r20862355, r20862356, r20862357, r20862358;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20862335);
        mpfr_init_set_str(r20862336, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r20862337);
        mpfr_init(r20862338);
        mpfr_init(r20862339);
        mpfr_init(r20862340);
        mpfr_init(r20862341);
        mpfr_init_set_str(r20862342, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r20862343);
        mpfr_init_set_str(r20862344, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20862345);
        mpfr_init(r20862346);
        mpfr_init_set_str(r20862347, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862348, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r20862349);
        mpfr_init(r20862350);
        mpfr_init(r20862351);
        mpfr_init_set_str(r20862352, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r20862353);
        mpfr_init_set_str(r20862354, "7.5", 10, MPFR_RNDN);
        mpfr_init(r20862355);
        mpfr_init(r20862356);
        mpfr_init(r20862357);
        mpfr_init(r20862358);
}

double f_fm(double x) {
        mpfr_set_d(r20862335, x, MPFR_RNDN);
        ;
        mpfr_mul(r20862337, r20862336, r20862335, MPFR_RNDN);
        mpfr_mul(r20862338, r20862335, r20862337, MPFR_RNDN);
        mpfr_mul(r20862339, r20862335, r20862335, MPFR_RNDN);
        mpfr_mul(r20862340, r20862339, r20862339, MPFR_RNDN);
        mpfr_mul(r20862341, r20862338, r20862340, MPFR_RNDN);
        ;
        mpfr_mul(r20862343, r20862335, r20862342, MPFR_RNDN);
        ;
        mpfr_add(r20862345, r20862343, r20862344, MPFR_RNDN);
        mpfr_add(r20862346, r20862341, r20862345, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20862349, r20862348, r20862335, MPFR_RNDN);
        mpfr_add(r20862350, r20862347, r20862349, MPFR_RNDN);
        mpfr_mul(r20862351, r20862340, r20862350, MPFR_RNDN);
        ;
        mpfr_mul(r20862353, r20862352, r20862335, MPFR_RNDN);
        ;
        mpfr_add(r20862355, r20862353, r20862354, MPFR_RNDN);
        mpfr_mul(r20862356, r20862339, r20862355, MPFR_RNDN);
        mpfr_add(r20862357, r20862351, r20862356, MPFR_RNDN);
        mpfr_add(r20862358, r20862346, r20862357, MPFR_RNDN);
        return mpfr_get_d(r20862358, MPFR_RNDN);
}

static mpfr_t r20862359, r20862360, r20862361, r20862362, r20862363, r20862364, r20862365, r20862366, r20862367, r20862368, r20862369, r20862370, r20862371, r20862372, r20862373, r20862374, r20862375, r20862376, r20862377, r20862378, r20862379, r20862380, r20862381, r20862382;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20862359);
        mpfr_init_set_str(r20862360, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r20862361);
        mpfr_init(r20862362);
        mpfr_init(r20862363);
        mpfr_init(r20862364);
        mpfr_init(r20862365);
        mpfr_init_set_str(r20862366, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r20862367);
        mpfr_init_set_str(r20862368, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20862369);
        mpfr_init(r20862370);
        mpfr_init_set_str(r20862371, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r20862372, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r20862373);
        mpfr_init(r20862374);
        mpfr_init(r20862375);
        mpfr_init_set_str(r20862376, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r20862377);
        mpfr_init_set_str(r20862378, "7.5", 10, MPFR_RNDN);
        mpfr_init(r20862379);
        mpfr_init(r20862380);
        mpfr_init(r20862381);
        mpfr_init(r20862382);
}

double f_dm(double x) {
        mpfr_set_d(r20862359, x, MPFR_RNDN);
        ;
        mpfr_mul(r20862361, r20862360, r20862359, MPFR_RNDN);
        mpfr_mul(r20862362, r20862359, r20862361, MPFR_RNDN);
        mpfr_mul(r20862363, r20862359, r20862359, MPFR_RNDN);
        mpfr_mul(r20862364, r20862363, r20862363, MPFR_RNDN);
        mpfr_mul(r20862365, r20862362, r20862364, MPFR_RNDN);
        ;
        mpfr_mul(r20862367, r20862359, r20862366, MPFR_RNDN);
        ;
        mpfr_add(r20862369, r20862367, r20862368, MPFR_RNDN);
        mpfr_add(r20862370, r20862365, r20862369, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20862373, r20862372, r20862359, MPFR_RNDN);
        mpfr_add(r20862374, r20862371, r20862373, MPFR_RNDN);
        mpfr_mul(r20862375, r20862364, r20862374, MPFR_RNDN);
        ;
        mpfr_mul(r20862377, r20862376, r20862359, MPFR_RNDN);
        ;
        mpfr_add(r20862379, r20862377, r20862378, MPFR_RNDN);
        mpfr_mul(r20862380, r20862363, r20862379, MPFR_RNDN);
        mpfr_add(r20862381, r20862375, r20862380, MPFR_RNDN);
        mpfr_add(r20862382, r20862370, r20862381, MPFR_RNDN);
        return mpfr_get_d(r20862382, MPFR_RNDN);
}

