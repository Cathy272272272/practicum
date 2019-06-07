#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r8927246 = -0.246094;
        float r8927247 = 13.535156;
        float r8927248 = x;
        float r8927249 = r8927248 * r8927248;
        float r8927250 = r8927247 * r8927249;
        float r8927251 = r8927246 + r8927250;
        float r8927252 = -117.304688;
        float r8927253 = r8927249 * r8927248;
        float r8927254 = r8927253 * r8927248;
        float r8927255 = r8927252 * r8927254;
        float r8927256 = r8927251 + r8927255;
        float r8927257 = 351.914062;
        float r8927258 = r8927254 * r8927248;
        float r8927259 = r8927258 * r8927248;
        float r8927260 = r8927257 * r8927259;
        float r8927261 = r8927256 + r8927260;
        float r8927262 = -427.324219;
        float r8927263 = r8927259 * r8927248;
        float r8927264 = r8927263 * r8927248;
        float r8927265 = r8927262 * r8927264;
        float r8927266 = r8927261 + r8927265;
        float r8927267 = 180.425781;
        float r8927268 = r8927264 * r8927248;
        float r8927269 = r8927268 * r8927248;
        float r8927270 = r8927267 * r8927269;
        float r8927271 = r8927266 + r8927270;
        return r8927271;
}

double f_id(double x) {
        double r8927272 = -0.246094;
        double r8927273 = 13.535156;
        double r8927274 = x;
        double r8927275 = r8927274 * r8927274;
        double r8927276 = r8927273 * r8927275;
        double r8927277 = r8927272 + r8927276;
        double r8927278 = -117.304688;
        double r8927279 = r8927275 * r8927274;
        double r8927280 = r8927279 * r8927274;
        double r8927281 = r8927278 * r8927280;
        double r8927282 = r8927277 + r8927281;
        double r8927283 = 351.914062;
        double r8927284 = r8927280 * r8927274;
        double r8927285 = r8927284 * r8927274;
        double r8927286 = r8927283 * r8927285;
        double r8927287 = r8927282 + r8927286;
        double r8927288 = -427.324219;
        double r8927289 = r8927285 * r8927274;
        double r8927290 = r8927289 * r8927274;
        double r8927291 = r8927288 * r8927290;
        double r8927292 = r8927287 + r8927291;
        double r8927293 = 180.425781;
        double r8927294 = r8927290 * r8927274;
        double r8927295 = r8927294 * r8927274;
        double r8927296 = r8927293 * r8927295;
        double r8927297 = r8927292 + r8927296;
        return r8927297;
}


double f_of(float x) {
        float r8927298 = x;
        float r8927299 = r8927298 * r8927298;
        float r8927300 = r8927299 * r8927299;
        float r8927301 = -117.304688;
        float r8927302 = 351.914062;
        float r8927303 = r8927302 * r8927298;
        float r8927304 = r8927298 * r8927303;
        float r8927305 = r8927301 + r8927304;
        float r8927306 = r8927300 * r8927305;
        float r8927307 = r8927300 * r8927300;
        float r8927308 = 180.425781;
        float r8927309 = r8927308 * r8927299;
        float r8927310 = cbrt(r8927309);
        float r8927311 = r8927310 * r8927310;
        float r8927312 = r8927311 * r8927310;
        float r8927313 = -427.324219;
        float r8927314 = r8927312 + r8927313;
        float r8927315 = r8927307 * r8927314;
        float r8927316 = r8927306 + r8927315;
        float r8927317 = 13.535156;
        float r8927318 = r8927298 * r8927317;
        float r8927319 = r8927298 * r8927318;
        float r8927320 = -0.246094;
        float r8927321 = r8927319 + r8927320;
        float r8927322 = r8927316 + r8927321;
        return r8927322;
}

double f_od(double x) {
        double r8927323 = x;
        double r8927324 = r8927323 * r8927323;
        double r8927325 = r8927324 * r8927324;
        double r8927326 = -117.304688;
        double r8927327 = 351.914062;
        double r8927328 = r8927327 * r8927323;
        double r8927329 = r8927323 * r8927328;
        double r8927330 = r8927326 + r8927329;
        double r8927331 = r8927325 * r8927330;
        double r8927332 = r8927325 * r8927325;
        double r8927333 = 180.425781;
        double r8927334 = r8927333 * r8927324;
        double r8927335 = cbrt(r8927334);
        double r8927336 = r8927335 * r8927335;
        double r8927337 = r8927336 * r8927335;
        double r8927338 = -427.324219;
        double r8927339 = r8927337 + r8927338;
        double r8927340 = r8927332 * r8927339;
        double r8927341 = r8927331 + r8927340;
        double r8927342 = 13.535156;
        double r8927343 = r8927323 * r8927342;
        double r8927344 = r8927323 * r8927343;
        double r8927345 = -0.246094;
        double r8927346 = r8927344 + r8927345;
        double r8927347 = r8927341 + r8927346;
        return r8927347;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8927348, r8927349, r8927350, r8927351, r8927352, r8927353, r8927354, r8927355, r8927356, r8927357, r8927358, r8927359, r8927360, r8927361, r8927362, r8927363, r8927364, r8927365, r8927366, r8927367, r8927368, r8927369, r8927370, r8927371, r8927372, r8927373;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8927348, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r8927349, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8927350);
        mpfr_init(r8927351);
        mpfr_init(r8927352);
        mpfr_init(r8927353);
        mpfr_init_set_str(r8927354, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r8927355);
        mpfr_init(r8927356);
        mpfr_init(r8927357);
        mpfr_init(r8927358);
        mpfr_init_set_str(r8927359, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8927360);
        mpfr_init(r8927361);
        mpfr_init(r8927362);
        mpfr_init(r8927363);
        mpfr_init_set_str(r8927364, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r8927365);
        mpfr_init(r8927366);
        mpfr_init(r8927367);
        mpfr_init(r8927368);
        mpfr_init_set_str(r8927369, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8927370);
        mpfr_init(r8927371);
        mpfr_init(r8927372);
        mpfr_init(r8927373);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8927350, x, MPFR_RNDN);
        mpfr_mul(r8927351, r8927350, r8927350, MPFR_RNDN);
        mpfr_mul(r8927352, r8927349, r8927351, MPFR_RNDN);
        mpfr_add(r8927353, r8927348, r8927352, MPFR_RNDN);
        ;
        mpfr_mul(r8927355, r8927351, r8927350, MPFR_RNDN);
        mpfr_mul(r8927356, r8927355, r8927350, MPFR_RNDN);
        mpfr_mul(r8927357, r8927354, r8927356, MPFR_RNDN);
        mpfr_add(r8927358, r8927353, r8927357, MPFR_RNDN);
        ;
        mpfr_mul(r8927360, r8927356, r8927350, MPFR_RNDN);
        mpfr_mul(r8927361, r8927360, r8927350, MPFR_RNDN);
        mpfr_mul(r8927362, r8927359, r8927361, MPFR_RNDN);
        mpfr_add(r8927363, r8927358, r8927362, MPFR_RNDN);
        ;
        mpfr_mul(r8927365, r8927361, r8927350, MPFR_RNDN);
        mpfr_mul(r8927366, r8927365, r8927350, MPFR_RNDN);
        mpfr_mul(r8927367, r8927364, r8927366, MPFR_RNDN);
        mpfr_add(r8927368, r8927363, r8927367, MPFR_RNDN);
        ;
        mpfr_mul(r8927370, r8927366, r8927350, MPFR_RNDN);
        mpfr_mul(r8927371, r8927370, r8927350, MPFR_RNDN);
        mpfr_mul(r8927372, r8927369, r8927371, MPFR_RNDN);
        mpfr_add(r8927373, r8927368, r8927372, MPFR_RNDN);
        return mpfr_get_d(r8927373, MPFR_RNDN);
}

static mpfr_t r8927374, r8927375, r8927376, r8927377, r8927378, r8927379, r8927380, r8927381, r8927382, r8927383, r8927384, r8927385, r8927386, r8927387, r8927388, r8927389, r8927390, r8927391, r8927392, r8927393, r8927394, r8927395, r8927396, r8927397, r8927398;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8927374);
        mpfr_init(r8927375);
        mpfr_init(r8927376);
        mpfr_init_set_str(r8927377, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r8927378, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8927379);
        mpfr_init(r8927380);
        mpfr_init(r8927381);
        mpfr_init(r8927382);
        mpfr_init(r8927383);
        mpfr_init_set_str(r8927384, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8927385);
        mpfr_init(r8927386);
        mpfr_init(r8927387);
        mpfr_init(r8927388);
        mpfr_init_set_str(r8927389, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r8927390);
        mpfr_init(r8927391);
        mpfr_init(r8927392);
        mpfr_init_set_str(r8927393, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8927394);
        mpfr_init(r8927395);
        mpfr_init_set_str(r8927396, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r8927397);
        mpfr_init(r8927398);
}

double f_fm(double x) {
        mpfr_set_d(r8927374, x, MPFR_RNDN);
        mpfr_mul(r8927375, r8927374, r8927374, MPFR_RNDN);
        mpfr_mul(r8927376, r8927375, r8927375, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8927379, r8927378, r8927374, MPFR_RNDN);
        mpfr_mul(r8927380, r8927374, r8927379, MPFR_RNDN);
        mpfr_add(r8927381, r8927377, r8927380, MPFR_RNDN);
        mpfr_mul(r8927382, r8927376, r8927381, MPFR_RNDN);
        mpfr_mul(r8927383, r8927376, r8927376, MPFR_RNDN);
        ;
        mpfr_mul(r8927385, r8927384, r8927375, MPFR_RNDN);
        mpfr_cbrt(r8927386, r8927385, MPFR_RNDN);
        mpfr_mul(r8927387, r8927386, r8927386, MPFR_RNDN);
        mpfr_mul(r8927388, r8927387, r8927386, MPFR_RNDN);
        ;
        mpfr_add(r8927390, r8927388, r8927389, MPFR_RNDN);
        mpfr_mul(r8927391, r8927383, r8927390, MPFR_RNDN);
        mpfr_add(r8927392, r8927382, r8927391, MPFR_RNDN);
        ;
        mpfr_mul(r8927394, r8927374, r8927393, MPFR_RNDN);
        mpfr_mul(r8927395, r8927374, r8927394, MPFR_RNDN);
        ;
        mpfr_add(r8927397, r8927395, r8927396, MPFR_RNDN);
        mpfr_add(r8927398, r8927392, r8927397, MPFR_RNDN);
        return mpfr_get_d(r8927398, MPFR_RNDN);
}

static mpfr_t r8927399, r8927400, r8927401, r8927402, r8927403, r8927404, r8927405, r8927406, r8927407, r8927408, r8927409, r8927410, r8927411, r8927412, r8927413, r8927414, r8927415, r8927416, r8927417, r8927418, r8927419, r8927420, r8927421, r8927422, r8927423;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8927399);
        mpfr_init(r8927400);
        mpfr_init(r8927401);
        mpfr_init_set_str(r8927402, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r8927403, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8927404);
        mpfr_init(r8927405);
        mpfr_init(r8927406);
        mpfr_init(r8927407);
        mpfr_init(r8927408);
        mpfr_init_set_str(r8927409, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8927410);
        mpfr_init(r8927411);
        mpfr_init(r8927412);
        mpfr_init(r8927413);
        mpfr_init_set_str(r8927414, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r8927415);
        mpfr_init(r8927416);
        mpfr_init(r8927417);
        mpfr_init_set_str(r8927418, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8927419);
        mpfr_init(r8927420);
        mpfr_init_set_str(r8927421, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r8927422);
        mpfr_init(r8927423);
}

double f_dm(double x) {
        mpfr_set_d(r8927399, x, MPFR_RNDN);
        mpfr_mul(r8927400, r8927399, r8927399, MPFR_RNDN);
        mpfr_mul(r8927401, r8927400, r8927400, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8927404, r8927403, r8927399, MPFR_RNDN);
        mpfr_mul(r8927405, r8927399, r8927404, MPFR_RNDN);
        mpfr_add(r8927406, r8927402, r8927405, MPFR_RNDN);
        mpfr_mul(r8927407, r8927401, r8927406, MPFR_RNDN);
        mpfr_mul(r8927408, r8927401, r8927401, MPFR_RNDN);
        ;
        mpfr_mul(r8927410, r8927409, r8927400, MPFR_RNDN);
        mpfr_cbrt(r8927411, r8927410, MPFR_RNDN);
        mpfr_mul(r8927412, r8927411, r8927411, MPFR_RNDN);
        mpfr_mul(r8927413, r8927412, r8927411, MPFR_RNDN);
        ;
        mpfr_add(r8927415, r8927413, r8927414, MPFR_RNDN);
        mpfr_mul(r8927416, r8927408, r8927415, MPFR_RNDN);
        mpfr_add(r8927417, r8927407, r8927416, MPFR_RNDN);
        ;
        mpfr_mul(r8927419, r8927399, r8927418, MPFR_RNDN);
        mpfr_mul(r8927420, r8927399, r8927419, MPFR_RNDN);
        ;
        mpfr_add(r8927422, r8927420, r8927421, MPFR_RNDN);
        mpfr_add(r8927423, r8927417, r8927422, MPFR_RNDN);
        return mpfr_get_d(r8927423, MPFR_RNDN);
}

