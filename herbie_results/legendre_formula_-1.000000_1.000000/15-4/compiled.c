#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r10040272 = 0.375;
        float r10040273 = -3.75;
        float r10040274 = x;
        float r10040275 = r10040274 * r10040274;
        float r10040276 = r10040273 * r10040275;
        float r10040277 = r10040272 + r10040276;
        float r10040278 = 4.375;
        float r10040279 = r10040275 * r10040274;
        float r10040280 = r10040279 * r10040274;
        float r10040281 = r10040278 * r10040280;
        float r10040282 = r10040277 + r10040281;
        return r10040282;
}

double f_id(double x) {
        double r10040283 = 0.375;
        double r10040284 = -3.75;
        double r10040285 = x;
        double r10040286 = r10040285 * r10040285;
        double r10040287 = r10040284 * r10040286;
        double r10040288 = r10040283 + r10040287;
        double r10040289 = 4.375;
        double r10040290 = r10040286 * r10040285;
        double r10040291 = r10040290 * r10040285;
        double r10040292 = r10040289 * r10040291;
        double r10040293 = r10040288 + r10040292;
        return r10040293;
}


double f_of(float x) {
        float r10040294 = 0.375;
        float r10040295 = x;
        float r10040296 = 4.375;
        float r10040297 = r10040295 * r10040296;
        float r10040298 = 3;
        float r10040299 = pow(r10040295, r10040298);
        float r10040300 = r10040297 * r10040299;
        float r10040301 = -3.75;
        float r10040302 = r10040295 * r10040301;
        float r10040303 = r10040302 * r10040295;
        float r10040304 = r10040300 + r10040303;
        float r10040305 = r10040294 + r10040304;
        return r10040305;
}

double f_od(double x) {
        double r10040306 = 0.375;
        double r10040307 = x;
        double r10040308 = 4.375;
        double r10040309 = r10040307 * r10040308;
        double r10040310 = 3;
        double r10040311 = pow(r10040307, r10040310);
        double r10040312 = r10040309 * r10040311;
        double r10040313 = -3.75;
        double r10040314 = r10040307 * r10040313;
        double r10040315 = r10040314 * r10040307;
        double r10040316 = r10040312 + r10040315;
        double r10040317 = r10040306 + r10040316;
        return r10040317;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10040318, r10040319, r10040320, r10040321, r10040322, r10040323, r10040324, r10040325, r10040326, r10040327, r10040328;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10040318, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r10040319, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r10040320);
        mpfr_init(r10040321);
        mpfr_init(r10040322);
        mpfr_init(r10040323);
        mpfr_init_set_str(r10040324, "4.375", 10, MPFR_RNDN);
        mpfr_init(r10040325);
        mpfr_init(r10040326);
        mpfr_init(r10040327);
        mpfr_init(r10040328);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10040320, x, MPFR_RNDN);
        mpfr_mul(r10040321, r10040320, r10040320, MPFR_RNDN);
        mpfr_mul(r10040322, r10040319, r10040321, MPFR_RNDN);
        mpfr_add(r10040323, r10040318, r10040322, MPFR_RNDN);
        ;
        mpfr_mul(r10040325, r10040321, r10040320, MPFR_RNDN);
        mpfr_mul(r10040326, r10040325, r10040320, MPFR_RNDN);
        mpfr_mul(r10040327, r10040324, r10040326, MPFR_RNDN);
        mpfr_add(r10040328, r10040323, r10040327, MPFR_RNDN);
        return mpfr_get_d(r10040328, MPFR_RNDN);
}

static mpfr_t r10040329, r10040330, r10040331, r10040332, r10040333, r10040334, r10040335, r10040336, r10040337, r10040338, r10040339, r10040340;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10040329, "0.375", 10, MPFR_RNDN);
        mpfr_init(r10040330);
        mpfr_init_set_str(r10040331, "4.375", 10, MPFR_RNDN);
        mpfr_init(r10040332);
        mpfr_init_set_str(r10040333, "3", 10, MPFR_RNDN);
        mpfr_init(r10040334);
        mpfr_init(r10040335);
        mpfr_init_set_str(r10040336, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r10040337);
        mpfr_init(r10040338);
        mpfr_init(r10040339);
        mpfr_init(r10040340);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10040330, x, MPFR_RNDN);
        ;
        mpfr_mul(r10040332, r10040330, r10040331, MPFR_RNDN);
        ;
        mpfr_pow(r10040334, r10040330, r10040333, MPFR_RNDN);
        mpfr_mul(r10040335, r10040332, r10040334, MPFR_RNDN);
        ;
        mpfr_mul(r10040337, r10040330, r10040336, MPFR_RNDN);
        mpfr_mul(r10040338, r10040337, r10040330, MPFR_RNDN);
        mpfr_add(r10040339, r10040335, r10040338, MPFR_RNDN);
        mpfr_add(r10040340, r10040329, r10040339, MPFR_RNDN);
        return mpfr_get_d(r10040340, MPFR_RNDN);
}

static mpfr_t r10040341, r10040342, r10040343, r10040344, r10040345, r10040346, r10040347, r10040348, r10040349, r10040350, r10040351, r10040352;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10040341, "0.375", 10, MPFR_RNDN);
        mpfr_init(r10040342);
        mpfr_init_set_str(r10040343, "4.375", 10, MPFR_RNDN);
        mpfr_init(r10040344);
        mpfr_init_set_str(r10040345, "3", 10, MPFR_RNDN);
        mpfr_init(r10040346);
        mpfr_init(r10040347);
        mpfr_init_set_str(r10040348, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r10040349);
        mpfr_init(r10040350);
        mpfr_init(r10040351);
        mpfr_init(r10040352);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10040342, x, MPFR_RNDN);
        ;
        mpfr_mul(r10040344, r10040342, r10040343, MPFR_RNDN);
        ;
        mpfr_pow(r10040346, r10040342, r10040345, MPFR_RNDN);
        mpfr_mul(r10040347, r10040344, r10040346, MPFR_RNDN);
        ;
        mpfr_mul(r10040349, r10040342, r10040348, MPFR_RNDN);
        mpfr_mul(r10040350, r10040349, r10040342, MPFR_RNDN);
        mpfr_add(r10040351, r10040347, r10040350, MPFR_RNDN);
        mpfr_add(r10040352, r10040341, r10040351, MPFR_RNDN);
        return mpfr_get_d(r10040352, MPFR_RNDN);
}

