#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r29571252 = -0.5;
        float r29571253 = 1.5;
        float r29571254 = x;
        float r29571255 = r29571254 * r29571254;
        float r29571256 = r29571253 * r29571255;
        float r29571257 = r29571252 + r29571256;
        return r29571257;
}

double f_id(double x) {
        double r29571258 = -0.5;
        double r29571259 = 1.5;
        double r29571260 = x;
        double r29571261 = r29571260 * r29571260;
        double r29571262 = r29571259 * r29571261;
        double r29571263 = r29571258 + r29571262;
        return r29571263;
}


double f_of(float x) {
        float r29571264 = 2.25;
        float r29571265 = x;
        float r29571266 = 4;
        float r29571267 = pow(r29571265, r29571266);
        float r29571268 = r29571264 * r29571267;
        float r29571269 = 0.25;
        float r29571270 = r29571268 + r29571269;
        float r29571271 = 1.5;
        float r29571272 = 2;
        float r29571273 = pow(r29571265, r29571272);
        float r29571274 = r29571271 * r29571273;
        float r29571275 = r29571270 - r29571274;
        float r29571276 = r29571265 * r29571265;
        float r29571277 = r29571276 * r29571271;
        float r29571278 = -0.5;
        float r29571279 = r29571277 + r29571278;
        float r29571280 = r29571275 * r29571279;
        float r29571281 = cbrt(r29571280);
        return r29571281;
}

double f_od(double x) {
        double r29571282 = 2.25;
        double r29571283 = x;
        double r29571284 = 4;
        double r29571285 = pow(r29571283, r29571284);
        double r29571286 = r29571282 * r29571285;
        double r29571287 = 0.25;
        double r29571288 = r29571286 + r29571287;
        double r29571289 = 1.5;
        double r29571290 = 2;
        double r29571291 = pow(r29571283, r29571290);
        double r29571292 = r29571289 * r29571291;
        double r29571293 = r29571288 - r29571292;
        double r29571294 = r29571283 * r29571283;
        double r29571295 = r29571294 * r29571289;
        double r29571296 = -0.5;
        double r29571297 = r29571295 + r29571296;
        double r29571298 = r29571293 * r29571297;
        double r29571299 = cbrt(r29571298);
        return r29571299;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29571300, r29571301, r29571302, r29571303, r29571304, r29571305;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571300, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r29571301, "1.5", 10, MPFR_RNDN);
        mpfr_init(r29571302);
        mpfr_init(r29571303);
        mpfr_init(r29571304);
        mpfr_init(r29571305);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r29571302, x, MPFR_RNDN);
        mpfr_mul(r29571303, r29571302, r29571302, MPFR_RNDN);
        mpfr_mul(r29571304, r29571301, r29571303, MPFR_RNDN);
        mpfr_add(r29571305, r29571300, r29571304, MPFR_RNDN);
        return mpfr_get_d(r29571305, MPFR_RNDN);
}

static mpfr_t r29571306, r29571307, r29571308, r29571309, r29571310, r29571311, r29571312, r29571313, r29571314, r29571315, r29571316, r29571317, r29571318, r29571319, r29571320, r29571321, r29571322, r29571323;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571306, "2.25", 10, MPFR_RNDN);
        mpfr_init(r29571307);
        mpfr_init_set_str(r29571308, "4", 10, MPFR_RNDN);
        mpfr_init(r29571309);
        mpfr_init(r29571310);
        mpfr_init_set_str(r29571311, "0.25", 10, MPFR_RNDN);
        mpfr_init(r29571312);
        mpfr_init_set_str(r29571313, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r29571314, "2", 10, MPFR_RNDN);
        mpfr_init(r29571315);
        mpfr_init(r29571316);
        mpfr_init(r29571317);
        mpfr_init(r29571318);
        mpfr_init(r29571319);
        mpfr_init_set_str(r29571320, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r29571321);
        mpfr_init(r29571322);
        mpfr_init(r29571323);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r29571307, x, MPFR_RNDN);
        ;
        mpfr_pow(r29571309, r29571307, r29571308, MPFR_RNDN);
        mpfr_mul(r29571310, r29571306, r29571309, MPFR_RNDN);
        ;
        mpfr_add(r29571312, r29571310, r29571311, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r29571315, r29571307, r29571314, MPFR_RNDN);
        mpfr_mul(r29571316, r29571313, r29571315, MPFR_RNDN);
        mpfr_sub(r29571317, r29571312, r29571316, MPFR_RNDN);
        mpfr_mul(r29571318, r29571307, r29571307, MPFR_RNDN);
        mpfr_mul(r29571319, r29571318, r29571313, MPFR_RNDN);
        ;
        mpfr_add(r29571321, r29571319, r29571320, MPFR_RNDN);
        mpfr_mul(r29571322, r29571317, r29571321, MPFR_RNDN);
        mpfr_cbrt(r29571323, r29571322, MPFR_RNDN);
        return mpfr_get_d(r29571323, MPFR_RNDN);
}

static mpfr_t r29571324, r29571325, r29571326, r29571327, r29571328, r29571329, r29571330, r29571331, r29571332, r29571333, r29571334, r29571335, r29571336, r29571337, r29571338, r29571339, r29571340, r29571341;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571324, "2.25", 10, MPFR_RNDN);
        mpfr_init(r29571325);
        mpfr_init_set_str(r29571326, "4", 10, MPFR_RNDN);
        mpfr_init(r29571327);
        mpfr_init(r29571328);
        mpfr_init_set_str(r29571329, "0.25", 10, MPFR_RNDN);
        mpfr_init(r29571330);
        mpfr_init_set_str(r29571331, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r29571332, "2", 10, MPFR_RNDN);
        mpfr_init(r29571333);
        mpfr_init(r29571334);
        mpfr_init(r29571335);
        mpfr_init(r29571336);
        mpfr_init(r29571337);
        mpfr_init_set_str(r29571338, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r29571339);
        mpfr_init(r29571340);
        mpfr_init(r29571341);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r29571325, x, MPFR_RNDN);
        ;
        mpfr_pow(r29571327, r29571325, r29571326, MPFR_RNDN);
        mpfr_mul(r29571328, r29571324, r29571327, MPFR_RNDN);
        ;
        mpfr_add(r29571330, r29571328, r29571329, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r29571333, r29571325, r29571332, MPFR_RNDN);
        mpfr_mul(r29571334, r29571331, r29571333, MPFR_RNDN);
        mpfr_sub(r29571335, r29571330, r29571334, MPFR_RNDN);
        mpfr_mul(r29571336, r29571325, r29571325, MPFR_RNDN);
        mpfr_mul(r29571337, r29571336, r29571331, MPFR_RNDN);
        ;
        mpfr_add(r29571339, r29571337, r29571338, MPFR_RNDN);
        mpfr_mul(r29571340, r29571335, r29571339, MPFR_RNDN);
        mpfr_cbrt(r29571341, r29571340, MPFR_RNDN);
        return mpfr_get_d(r29571341, MPFR_RNDN);
}

