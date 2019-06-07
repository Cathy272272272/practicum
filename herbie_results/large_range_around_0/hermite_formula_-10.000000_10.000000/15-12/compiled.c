#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r9831197 = 665280.0;
        float r9831198 = -7983360.0;
        float r9831199 = x;
        float r9831200 = r9831199 * r9831199;
        float r9831201 = r9831198 * r9831200;
        float r9831202 = r9831197 + r9831201;
        float r9831203 = 13305600.0;
        float r9831204 = r9831200 * r9831199;
        float r9831205 = r9831204 * r9831199;
        float r9831206 = r9831203 * r9831205;
        float r9831207 = r9831202 + r9831206;
        float r9831208 = -7096320.0;
        float r9831209 = r9831205 * r9831199;
        float r9831210 = r9831209 * r9831199;
        float r9831211 = r9831208 * r9831210;
        float r9831212 = r9831207 + r9831211;
        float r9831213 = 1520640.0;
        float r9831214 = r9831210 * r9831199;
        float r9831215 = r9831214 * r9831199;
        float r9831216 = r9831213 * r9831215;
        float r9831217 = r9831212 + r9831216;
        float r9831218 = -135168.0;
        float r9831219 = r9831215 * r9831199;
        float r9831220 = r9831219 * r9831199;
        float r9831221 = r9831218 * r9831220;
        float r9831222 = r9831217 + r9831221;
        float r9831223 = 4096.0;
        float r9831224 = r9831220 * r9831199;
        float r9831225 = r9831224 * r9831199;
        float r9831226 = r9831223 * r9831225;
        float r9831227 = r9831222 + r9831226;
        return r9831227;
}

double f_id(double x) {
        double r9831228 = 665280.0;
        double r9831229 = -7983360.0;
        double r9831230 = x;
        double r9831231 = r9831230 * r9831230;
        double r9831232 = r9831229 * r9831231;
        double r9831233 = r9831228 + r9831232;
        double r9831234 = 13305600.0;
        double r9831235 = r9831231 * r9831230;
        double r9831236 = r9831235 * r9831230;
        double r9831237 = r9831234 * r9831236;
        double r9831238 = r9831233 + r9831237;
        double r9831239 = -7096320.0;
        double r9831240 = r9831236 * r9831230;
        double r9831241 = r9831240 * r9831230;
        double r9831242 = r9831239 * r9831241;
        double r9831243 = r9831238 + r9831242;
        double r9831244 = 1520640.0;
        double r9831245 = r9831241 * r9831230;
        double r9831246 = r9831245 * r9831230;
        double r9831247 = r9831244 * r9831246;
        double r9831248 = r9831243 + r9831247;
        double r9831249 = -135168.0;
        double r9831250 = r9831246 * r9831230;
        double r9831251 = r9831250 * r9831230;
        double r9831252 = r9831249 * r9831251;
        double r9831253 = r9831248 + r9831252;
        double r9831254 = 4096.0;
        double r9831255 = r9831251 * r9831230;
        double r9831256 = r9831255 * r9831230;
        double r9831257 = r9831254 * r9831256;
        double r9831258 = r9831253 + r9831257;
        return r9831258;
}


double f_of(float x) {
        float r9831259 = x;
        float r9831260 = r9831259 * r9831259;
        float r9831261 = 3;
        float r9831262 = pow(r9831260, r9831261);
        float r9831263 = r9831260 * r9831260;
        float r9831264 = r9831262 * r9831263;
        float r9831265 = -135168.0;
        float r9831266 = 4096.0;
        float r9831267 = r9831266 * r9831259;
        float r9831268 = r9831259 * r9831267;
        float r9831269 = r9831265 + r9831268;
        float r9831270 = r9831264 * r9831269;
        float r9831271 = 1520640.0;
        float r9831272 = r9831271 * r9831260;
        float r9831273 = -7096320.0;
        float r9831274 = r9831272 + r9831273;
        float r9831275 = r9831262 * r9831274;
        float r9831276 = cbrt(r9831275);
        float r9831277 = r9831276 * r9831276;
        float r9831278 = r9831277 * r9831276;
        float r9831279 = 665280.0;
        float r9831280 = 4;
        float r9831281 = pow(r9831259, r9831280);
        float r9831282 = 13305600.0;
        float r9831283 = r9831281 * r9831282;
        float r9831284 = -7983360.0;
        float r9831285 = r9831260 * r9831284;
        float r9831286 = r9831283 + r9831285;
        float r9831287 = r9831279 + r9831286;
        float r9831288 = r9831278 + r9831287;
        float r9831289 = r9831270 + r9831288;
        return r9831289;
}

double f_od(double x) {
        double r9831290 = x;
        double r9831291 = r9831290 * r9831290;
        double r9831292 = 3;
        double r9831293 = pow(r9831291, r9831292);
        double r9831294 = r9831291 * r9831291;
        double r9831295 = r9831293 * r9831294;
        double r9831296 = -135168.0;
        double r9831297 = 4096.0;
        double r9831298 = r9831297 * r9831290;
        double r9831299 = r9831290 * r9831298;
        double r9831300 = r9831296 + r9831299;
        double r9831301 = r9831295 * r9831300;
        double r9831302 = 1520640.0;
        double r9831303 = r9831302 * r9831291;
        double r9831304 = -7096320.0;
        double r9831305 = r9831303 + r9831304;
        double r9831306 = r9831293 * r9831305;
        double r9831307 = cbrt(r9831306);
        double r9831308 = r9831307 * r9831307;
        double r9831309 = r9831308 * r9831307;
        double r9831310 = 665280.0;
        double r9831311 = 4;
        double r9831312 = pow(r9831290, r9831311);
        double r9831313 = 13305600.0;
        double r9831314 = r9831312 * r9831313;
        double r9831315 = -7983360.0;
        double r9831316 = r9831291 * r9831315;
        double r9831317 = r9831314 + r9831316;
        double r9831318 = r9831310 + r9831317;
        double r9831319 = r9831309 + r9831318;
        double r9831320 = r9831301 + r9831319;
        return r9831320;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9831321, r9831322, r9831323, r9831324, r9831325, r9831326, r9831327, r9831328, r9831329, r9831330, r9831331, r9831332, r9831333, r9831334, r9831335, r9831336, r9831337, r9831338, r9831339, r9831340, r9831341, r9831342, r9831343, r9831344, r9831345, r9831346, r9831347, r9831348, r9831349, r9831350, r9831351;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9831321, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831322, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r9831323);
        mpfr_init(r9831324);
        mpfr_init(r9831325);
        mpfr_init(r9831326);
        mpfr_init_set_str(r9831327, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r9831328);
        mpfr_init(r9831329);
        mpfr_init(r9831330);
        mpfr_init(r9831331);
        mpfr_init_set_str(r9831332, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r9831333);
        mpfr_init(r9831334);
        mpfr_init(r9831335);
        mpfr_init(r9831336);
        mpfr_init_set_str(r9831337, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r9831338);
        mpfr_init(r9831339);
        mpfr_init(r9831340);
        mpfr_init(r9831341);
        mpfr_init_set_str(r9831342, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r9831343);
        mpfr_init(r9831344);
        mpfr_init(r9831345);
        mpfr_init(r9831346);
        mpfr_init_set_str(r9831347, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r9831348);
        mpfr_init(r9831349);
        mpfr_init(r9831350);
        mpfr_init(r9831351);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9831323, x, MPFR_RNDN);
        mpfr_mul(r9831324, r9831323, r9831323, MPFR_RNDN);
        mpfr_mul(r9831325, r9831322, r9831324, MPFR_RNDN);
        mpfr_add(r9831326, r9831321, r9831325, MPFR_RNDN);
        ;
        mpfr_mul(r9831328, r9831324, r9831323, MPFR_RNDN);
        mpfr_mul(r9831329, r9831328, r9831323, MPFR_RNDN);
        mpfr_mul(r9831330, r9831327, r9831329, MPFR_RNDN);
        mpfr_add(r9831331, r9831326, r9831330, MPFR_RNDN);
        ;
        mpfr_mul(r9831333, r9831329, r9831323, MPFR_RNDN);
        mpfr_mul(r9831334, r9831333, r9831323, MPFR_RNDN);
        mpfr_mul(r9831335, r9831332, r9831334, MPFR_RNDN);
        mpfr_add(r9831336, r9831331, r9831335, MPFR_RNDN);
        ;
        mpfr_mul(r9831338, r9831334, r9831323, MPFR_RNDN);
        mpfr_mul(r9831339, r9831338, r9831323, MPFR_RNDN);
        mpfr_mul(r9831340, r9831337, r9831339, MPFR_RNDN);
        mpfr_add(r9831341, r9831336, r9831340, MPFR_RNDN);
        ;
        mpfr_mul(r9831343, r9831339, r9831323, MPFR_RNDN);
        mpfr_mul(r9831344, r9831343, r9831323, MPFR_RNDN);
        mpfr_mul(r9831345, r9831342, r9831344, MPFR_RNDN);
        mpfr_add(r9831346, r9831341, r9831345, MPFR_RNDN);
        ;
        mpfr_mul(r9831348, r9831344, r9831323, MPFR_RNDN);
        mpfr_mul(r9831349, r9831348, r9831323, MPFR_RNDN);
        mpfr_mul(r9831350, r9831347, r9831349, MPFR_RNDN);
        mpfr_add(r9831351, r9831346, r9831350, MPFR_RNDN);
        return mpfr_get_d(r9831351, MPFR_RNDN);
}

static mpfr_t r9831352, r9831353, r9831354, r9831355, r9831356, r9831357, r9831358, r9831359, r9831360, r9831361, r9831362, r9831363, r9831364, r9831365, r9831366, r9831367, r9831368, r9831369, r9831370, r9831371, r9831372, r9831373, r9831374, r9831375, r9831376, r9831377, r9831378, r9831379, r9831380, r9831381, r9831382;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9831352);
        mpfr_init(r9831353);
        mpfr_init_set_str(r9831354, "3", 10, MPFR_RNDN);
        mpfr_init(r9831355);
        mpfr_init(r9831356);
        mpfr_init(r9831357);
        mpfr_init_set_str(r9831358, "-135168.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831359, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r9831360);
        mpfr_init(r9831361);
        mpfr_init(r9831362);
        mpfr_init(r9831363);
        mpfr_init_set_str(r9831364, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r9831365);
        mpfr_init_set_str(r9831366, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r9831367);
        mpfr_init(r9831368);
        mpfr_init(r9831369);
        mpfr_init(r9831370);
        mpfr_init(r9831371);
        mpfr_init_set_str(r9831372, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831373, "4", 10, MPFR_RNDN);
        mpfr_init(r9831374);
        mpfr_init_set_str(r9831375, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r9831376);
        mpfr_init_set_str(r9831377, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r9831378);
        mpfr_init(r9831379);
        mpfr_init(r9831380);
        mpfr_init(r9831381);
        mpfr_init(r9831382);
}

double f_fm(double x) {
        mpfr_set_d(r9831352, x, MPFR_RNDN);
        mpfr_mul(r9831353, r9831352, r9831352, MPFR_RNDN);
        ;
        mpfr_pow(r9831355, r9831353, r9831354, MPFR_RNDN);
        mpfr_mul(r9831356, r9831353, r9831353, MPFR_RNDN);
        mpfr_mul(r9831357, r9831355, r9831356, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9831360, r9831359, r9831352, MPFR_RNDN);
        mpfr_mul(r9831361, r9831352, r9831360, MPFR_RNDN);
        mpfr_add(r9831362, r9831358, r9831361, MPFR_RNDN);
        mpfr_mul(r9831363, r9831357, r9831362, MPFR_RNDN);
        ;
        mpfr_mul(r9831365, r9831364, r9831353, MPFR_RNDN);
        ;
        mpfr_add(r9831367, r9831365, r9831366, MPFR_RNDN);
        mpfr_mul(r9831368, r9831355, r9831367, MPFR_RNDN);
        mpfr_cbrt(r9831369, r9831368, MPFR_RNDN);
        mpfr_mul(r9831370, r9831369, r9831369, MPFR_RNDN);
        mpfr_mul(r9831371, r9831370, r9831369, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9831374, r9831352, r9831373, MPFR_RNDN);
        ;
        mpfr_mul(r9831376, r9831374, r9831375, MPFR_RNDN);
        ;
        mpfr_mul(r9831378, r9831353, r9831377, MPFR_RNDN);
        mpfr_add(r9831379, r9831376, r9831378, MPFR_RNDN);
        mpfr_add(r9831380, r9831372, r9831379, MPFR_RNDN);
        mpfr_add(r9831381, r9831371, r9831380, MPFR_RNDN);
        mpfr_add(r9831382, r9831363, r9831381, MPFR_RNDN);
        return mpfr_get_d(r9831382, MPFR_RNDN);
}

static mpfr_t r9831383, r9831384, r9831385, r9831386, r9831387, r9831388, r9831389, r9831390, r9831391, r9831392, r9831393, r9831394, r9831395, r9831396, r9831397, r9831398, r9831399, r9831400, r9831401, r9831402, r9831403, r9831404, r9831405, r9831406, r9831407, r9831408, r9831409, r9831410, r9831411, r9831412, r9831413;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9831383);
        mpfr_init(r9831384);
        mpfr_init_set_str(r9831385, "3", 10, MPFR_RNDN);
        mpfr_init(r9831386);
        mpfr_init(r9831387);
        mpfr_init(r9831388);
        mpfr_init_set_str(r9831389, "-135168.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831390, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r9831391);
        mpfr_init(r9831392);
        mpfr_init(r9831393);
        mpfr_init(r9831394);
        mpfr_init_set_str(r9831395, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r9831396);
        mpfr_init_set_str(r9831397, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r9831398);
        mpfr_init(r9831399);
        mpfr_init(r9831400);
        mpfr_init(r9831401);
        mpfr_init(r9831402);
        mpfr_init_set_str(r9831403, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831404, "4", 10, MPFR_RNDN);
        mpfr_init(r9831405);
        mpfr_init_set_str(r9831406, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r9831407);
        mpfr_init_set_str(r9831408, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r9831409);
        mpfr_init(r9831410);
        mpfr_init(r9831411);
        mpfr_init(r9831412);
        mpfr_init(r9831413);
}

double f_dm(double x) {
        mpfr_set_d(r9831383, x, MPFR_RNDN);
        mpfr_mul(r9831384, r9831383, r9831383, MPFR_RNDN);
        ;
        mpfr_pow(r9831386, r9831384, r9831385, MPFR_RNDN);
        mpfr_mul(r9831387, r9831384, r9831384, MPFR_RNDN);
        mpfr_mul(r9831388, r9831386, r9831387, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9831391, r9831390, r9831383, MPFR_RNDN);
        mpfr_mul(r9831392, r9831383, r9831391, MPFR_RNDN);
        mpfr_add(r9831393, r9831389, r9831392, MPFR_RNDN);
        mpfr_mul(r9831394, r9831388, r9831393, MPFR_RNDN);
        ;
        mpfr_mul(r9831396, r9831395, r9831384, MPFR_RNDN);
        ;
        mpfr_add(r9831398, r9831396, r9831397, MPFR_RNDN);
        mpfr_mul(r9831399, r9831386, r9831398, MPFR_RNDN);
        mpfr_cbrt(r9831400, r9831399, MPFR_RNDN);
        mpfr_mul(r9831401, r9831400, r9831400, MPFR_RNDN);
        mpfr_mul(r9831402, r9831401, r9831400, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9831405, r9831383, r9831404, MPFR_RNDN);
        ;
        mpfr_mul(r9831407, r9831405, r9831406, MPFR_RNDN);
        ;
        mpfr_mul(r9831409, r9831384, r9831408, MPFR_RNDN);
        mpfr_add(r9831410, r9831407, r9831409, MPFR_RNDN);
        mpfr_add(r9831411, r9831403, r9831410, MPFR_RNDN);
        mpfr_add(r9831412, r9831402, r9831411, MPFR_RNDN);
        mpfr_add(r9831413, r9831394, r9831412, MPFR_RNDN);
        return mpfr_get_d(r9831413, MPFR_RNDN);
}

