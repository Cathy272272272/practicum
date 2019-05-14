#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r8830302 = 1.0;
        float r8830303 = -4.0;
        float r8830304 = x;
        float r8830305 = r8830303 * r8830304;
        float r8830306 = r8830302 + r8830305;
        float r8830307 = 3.0;
        float r8830308 = r8830304 * r8830304;
        float r8830309 = r8830307 * r8830308;
        float r8830310 = r8830306 + r8830309;
        float r8830311 = -0.666667;
        float r8830312 = r8830308 * r8830304;
        float r8830313 = r8830311 * r8830312;
        float r8830314 = r8830310 + r8830313;
        float r8830315 = 0.041667;
        float r8830316 = r8830312 * r8830304;
        float r8830317 = r8830315 * r8830316;
        float r8830318 = r8830314 + r8830317;
        return r8830318;
}

double f_id(double x) {
        double r8830319 = 1.0;
        double r8830320 = -4.0;
        double r8830321 = x;
        double r8830322 = r8830320 * r8830321;
        double r8830323 = r8830319 + r8830322;
        double r8830324 = 3.0;
        double r8830325 = r8830321 * r8830321;
        double r8830326 = r8830324 * r8830325;
        double r8830327 = r8830323 + r8830326;
        double r8830328 = -0.666667;
        double r8830329 = r8830325 * r8830321;
        double r8830330 = r8830328 * r8830329;
        double r8830331 = r8830327 + r8830330;
        double r8830332 = 0.041667;
        double r8830333 = r8830329 * r8830321;
        double r8830334 = r8830332 * r8830333;
        double r8830335 = r8830331 + r8830334;
        return r8830335;
}


double f_of(float x) {
        float r8830336 = x;
        float r8830337 = 3;
        float r8830338 = pow(r8830336, r8830337);
        float r8830339 = 0.041667;
        float r8830340 = r8830339 * r8830336;
        float r8830341 = -0.666667;
        float r8830342 = r8830340 + r8830341;
        float r8830343 = r8830338 * r8830342;
        float r8830344 = 3.0;
        float r8830345 = r8830336 * r8830344;
        float r8830346 = r8830345 * r8830336;
        float r8830347 = -4.0;
        float r8830348 = r8830336 * r8830347;
        float r8830349 = 1.0;
        float r8830350 = r8830348 + r8830349;
        float r8830351 = r8830346 + r8830350;
        float r8830352 = r8830343 + r8830351;
        return r8830352;
}

double f_od(double x) {
        double r8830353 = x;
        double r8830354 = 3;
        double r8830355 = pow(r8830353, r8830354);
        double r8830356 = 0.041667;
        double r8830357 = r8830356 * r8830353;
        double r8830358 = -0.666667;
        double r8830359 = r8830357 + r8830358;
        double r8830360 = r8830355 * r8830359;
        double r8830361 = 3.0;
        double r8830362 = r8830353 * r8830361;
        double r8830363 = r8830362 * r8830353;
        double r8830364 = -4.0;
        double r8830365 = r8830353 * r8830364;
        double r8830366 = 1.0;
        double r8830367 = r8830365 + r8830366;
        double r8830368 = r8830363 + r8830367;
        double r8830369 = r8830360 + r8830368;
        return r8830369;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8830370, r8830371, r8830372, r8830373, r8830374, r8830375, r8830376, r8830377, r8830378, r8830379, r8830380, r8830381, r8830382, r8830383, r8830384, r8830385, r8830386;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8830370, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830371, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r8830372);
        mpfr_init(r8830373);
        mpfr_init(r8830374);
        mpfr_init_set_str(r8830375, "3.0", 10, MPFR_RNDN);
        mpfr_init(r8830376);
        mpfr_init(r8830377);
        mpfr_init(r8830378);
        mpfr_init_set_str(r8830379, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r8830380);
        mpfr_init(r8830381);
        mpfr_init(r8830382);
        mpfr_init_set_str(r8830383, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r8830384);
        mpfr_init(r8830385);
        mpfr_init(r8830386);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8830372, x, MPFR_RNDN);
        mpfr_mul(r8830373, r8830371, r8830372, MPFR_RNDN);
        mpfr_add(r8830374, r8830370, r8830373, MPFR_RNDN);
        ;
        mpfr_mul(r8830376, r8830372, r8830372, MPFR_RNDN);
        mpfr_mul(r8830377, r8830375, r8830376, MPFR_RNDN);
        mpfr_add(r8830378, r8830374, r8830377, MPFR_RNDN);
        ;
        mpfr_mul(r8830380, r8830376, r8830372, MPFR_RNDN);
        mpfr_mul(r8830381, r8830379, r8830380, MPFR_RNDN);
        mpfr_add(r8830382, r8830378, r8830381, MPFR_RNDN);
        ;
        mpfr_mul(r8830384, r8830380, r8830372, MPFR_RNDN);
        mpfr_mul(r8830385, r8830383, r8830384, MPFR_RNDN);
        mpfr_add(r8830386, r8830382, r8830385, MPFR_RNDN);
        return mpfr_get_d(r8830386, MPFR_RNDN);
}

static mpfr_t r8830387, r8830388, r8830389, r8830390, r8830391, r8830392, r8830393, r8830394, r8830395, r8830396, r8830397, r8830398, r8830399, r8830400, r8830401, r8830402, r8830403;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8830387);
        mpfr_init_set_str(r8830388, "3", 10, MPFR_RNDN);
        mpfr_init(r8830389);
        mpfr_init_set_str(r8830390, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r8830391);
        mpfr_init_set_str(r8830392, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r8830393);
        mpfr_init(r8830394);
        mpfr_init_set_str(r8830395, "3.0", 10, MPFR_RNDN);
        mpfr_init(r8830396);
        mpfr_init(r8830397);
        mpfr_init_set_str(r8830398, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r8830399);
        mpfr_init_set_str(r8830400, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8830401);
        mpfr_init(r8830402);
        mpfr_init(r8830403);
}

double f_fm(double x) {
        mpfr_set_d(r8830387, x, MPFR_RNDN);
        ;
        mpfr_pow(r8830389, r8830387, r8830388, MPFR_RNDN);
        ;
        mpfr_mul(r8830391, r8830390, r8830387, MPFR_RNDN);
        ;
        mpfr_add(r8830393, r8830391, r8830392, MPFR_RNDN);
        mpfr_mul(r8830394, r8830389, r8830393, MPFR_RNDN);
        ;
        mpfr_mul(r8830396, r8830387, r8830395, MPFR_RNDN);
        mpfr_mul(r8830397, r8830396, r8830387, MPFR_RNDN);
        ;
        mpfr_mul(r8830399, r8830387, r8830398, MPFR_RNDN);
        ;
        mpfr_add(r8830401, r8830399, r8830400, MPFR_RNDN);
        mpfr_add(r8830402, r8830397, r8830401, MPFR_RNDN);
        mpfr_add(r8830403, r8830394, r8830402, MPFR_RNDN);
        return mpfr_get_d(r8830403, MPFR_RNDN);
}

static mpfr_t r8830404, r8830405, r8830406, r8830407, r8830408, r8830409, r8830410, r8830411, r8830412, r8830413, r8830414, r8830415, r8830416, r8830417, r8830418, r8830419, r8830420;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8830404);
        mpfr_init_set_str(r8830405, "3", 10, MPFR_RNDN);
        mpfr_init(r8830406);
        mpfr_init_set_str(r8830407, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r8830408);
        mpfr_init_set_str(r8830409, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r8830410);
        mpfr_init(r8830411);
        mpfr_init_set_str(r8830412, "3.0", 10, MPFR_RNDN);
        mpfr_init(r8830413);
        mpfr_init(r8830414);
        mpfr_init_set_str(r8830415, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r8830416);
        mpfr_init_set_str(r8830417, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8830418);
        mpfr_init(r8830419);
        mpfr_init(r8830420);
}

double f_dm(double x) {
        mpfr_set_d(r8830404, x, MPFR_RNDN);
        ;
        mpfr_pow(r8830406, r8830404, r8830405, MPFR_RNDN);
        ;
        mpfr_mul(r8830408, r8830407, r8830404, MPFR_RNDN);
        ;
        mpfr_add(r8830410, r8830408, r8830409, MPFR_RNDN);
        mpfr_mul(r8830411, r8830406, r8830410, MPFR_RNDN);
        ;
        mpfr_mul(r8830413, r8830404, r8830412, MPFR_RNDN);
        mpfr_mul(r8830414, r8830413, r8830404, MPFR_RNDN);
        ;
        mpfr_mul(r8830416, r8830404, r8830415, MPFR_RNDN);
        ;
        mpfr_add(r8830418, r8830416, r8830417, MPFR_RNDN);
        mpfr_add(r8830419, r8830414, r8830418, MPFR_RNDN);
        mpfr_add(r8830420, r8830411, r8830419, MPFR_RNDN);
        return mpfr_get_d(r8830420, MPFR_RNDN);
}

