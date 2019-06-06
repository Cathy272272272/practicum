#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r83943381 = 1.0;
        float r83943382 = -3.0;
        float r83943383 = x;
        float r83943384 = r83943382 * r83943383;
        float r83943385 = r83943381 + r83943384;
        float r83943386 = 1.5;
        float r83943387 = r83943383 * r83943383;
        float r83943388 = r83943386 * r83943387;
        float r83943389 = r83943385 + r83943388;
        float r83943390 = -0.166667;
        float r83943391 = r83943387 * r83943383;
        float r83943392 = r83943390 * r83943391;
        float r83943393 = r83943389 + r83943392;
        return r83943393;
}

double f_id(double x) {
        double r83943394 = 1.0;
        double r83943395 = -3.0;
        double r83943396 = x;
        double r83943397 = r83943395 * r83943396;
        double r83943398 = r83943394 + r83943397;
        double r83943399 = 1.5;
        double r83943400 = r83943396 * r83943396;
        double r83943401 = r83943399 * r83943400;
        double r83943402 = r83943398 + r83943401;
        double r83943403 = -0.166667;
        double r83943404 = r83943400 * r83943396;
        double r83943405 = r83943403 * r83943404;
        double r83943406 = r83943402 + r83943405;
        return r83943406;
}


double f_of(float x) {
        float r83943407 = 1.0;
        float r83943408 = r83943407 * r83943407;
        float r83943409 = -3.0;
        float r83943410 = 1.5;
        float r83943411 = x;
        float r83943412 = r83943410 * r83943411;
        float r83943413 = r83943409 + r83943412;
        float r83943414 = r83943413 * r83943411;
        float r83943415 = r83943414 * r83943414;
        float r83943416 = r83943408 - r83943415;
        float r83943417 = r83943407 - r83943414;
        float r83943418 = r83943416 / r83943417;
        float r83943419 = -0.166667;
        float r83943420 = r83943411 * r83943411;
        float r83943421 = r83943420 * r83943411;
        float r83943422 = r83943419 * r83943421;
        float r83943423 = r83943418 + r83943422;
        return r83943423;
}

double f_od(double x) {
        double r83943424 = 1.0;
        double r83943425 = r83943424 * r83943424;
        double r83943426 = -3.0;
        double r83943427 = 1.5;
        double r83943428 = x;
        double r83943429 = r83943427 * r83943428;
        double r83943430 = r83943426 + r83943429;
        double r83943431 = r83943430 * r83943428;
        double r83943432 = r83943431 * r83943431;
        double r83943433 = r83943425 - r83943432;
        double r83943434 = r83943424 - r83943431;
        double r83943435 = r83943433 / r83943434;
        double r83943436 = -0.166667;
        double r83943437 = r83943428 * r83943428;
        double r83943438 = r83943437 * r83943428;
        double r83943439 = r83943436 * r83943438;
        double r83943440 = r83943435 + r83943439;
        return r83943440;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83943441, r83943442, r83943443, r83943444, r83943445, r83943446, r83943447, r83943448, r83943449, r83943450, r83943451, r83943452, r83943453;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943441, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943442, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r83943443);
        mpfr_init(r83943444);
        mpfr_init(r83943445);
        mpfr_init_set_str(r83943446, "1.5", 10, MPFR_RNDN);
        mpfr_init(r83943447);
        mpfr_init(r83943448);
        mpfr_init(r83943449);
        mpfr_init_set_str(r83943450, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r83943451);
        mpfr_init(r83943452);
        mpfr_init(r83943453);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83943443, x, MPFR_RNDN);
        mpfr_mul(r83943444, r83943442, r83943443, MPFR_RNDN);
        mpfr_add(r83943445, r83943441, r83943444, MPFR_RNDN);
        ;
        mpfr_mul(r83943447, r83943443, r83943443, MPFR_RNDN);
        mpfr_mul(r83943448, r83943446, r83943447, MPFR_RNDN);
        mpfr_add(r83943449, r83943445, r83943448, MPFR_RNDN);
        ;
        mpfr_mul(r83943451, r83943447, r83943443, MPFR_RNDN);
        mpfr_mul(r83943452, r83943450, r83943451, MPFR_RNDN);
        mpfr_add(r83943453, r83943449, r83943452, MPFR_RNDN);
        return mpfr_get_d(r83943453, MPFR_RNDN);
}

static mpfr_t r83943454, r83943455, r83943456, r83943457, r83943458, r83943459, r83943460, r83943461, r83943462, r83943463, r83943464, r83943465, r83943466, r83943467, r83943468, r83943469, r83943470;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943454, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83943455);
        mpfr_init_set_str(r83943456, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943457, "1.5", 10, MPFR_RNDN);
        mpfr_init(r83943458);
        mpfr_init(r83943459);
        mpfr_init(r83943460);
        mpfr_init(r83943461);
        mpfr_init(r83943462);
        mpfr_init(r83943463);
        mpfr_init(r83943464);
        mpfr_init(r83943465);
        mpfr_init_set_str(r83943466, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r83943467);
        mpfr_init(r83943468);
        mpfr_init(r83943469);
        mpfr_init(r83943470);
}

double f_fm(double x) {
        ;
        mpfr_mul(r83943455, r83943454, r83943454, MPFR_RNDN);
        ;
        ;
        mpfr_set_d(r83943458, x, MPFR_RNDN);
        mpfr_mul(r83943459, r83943457, r83943458, MPFR_RNDN);
        mpfr_add(r83943460, r83943456, r83943459, MPFR_RNDN);
        mpfr_mul(r83943461, r83943460, r83943458, MPFR_RNDN);
        mpfr_mul(r83943462, r83943461, r83943461, MPFR_RNDN);
        mpfr_sub(r83943463, r83943455, r83943462, MPFR_RNDN);
        mpfr_sub(r83943464, r83943454, r83943461, MPFR_RNDN);
        mpfr_div(r83943465, r83943463, r83943464, MPFR_RNDN);
        ;
        mpfr_mul(r83943467, r83943458, r83943458, MPFR_RNDN);
        mpfr_mul(r83943468, r83943467, r83943458, MPFR_RNDN);
        mpfr_mul(r83943469, r83943466, r83943468, MPFR_RNDN);
        mpfr_add(r83943470, r83943465, r83943469, MPFR_RNDN);
        return mpfr_get_d(r83943470, MPFR_RNDN);
}

static mpfr_t r83943471, r83943472, r83943473, r83943474, r83943475, r83943476, r83943477, r83943478, r83943479, r83943480, r83943481, r83943482, r83943483, r83943484, r83943485, r83943486, r83943487;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943471, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83943472);
        mpfr_init_set_str(r83943473, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943474, "1.5", 10, MPFR_RNDN);
        mpfr_init(r83943475);
        mpfr_init(r83943476);
        mpfr_init(r83943477);
        mpfr_init(r83943478);
        mpfr_init(r83943479);
        mpfr_init(r83943480);
        mpfr_init(r83943481);
        mpfr_init(r83943482);
        mpfr_init_set_str(r83943483, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r83943484);
        mpfr_init(r83943485);
        mpfr_init(r83943486);
        mpfr_init(r83943487);
}

double f_dm(double x) {
        ;
        mpfr_mul(r83943472, r83943471, r83943471, MPFR_RNDN);
        ;
        ;
        mpfr_set_d(r83943475, x, MPFR_RNDN);
        mpfr_mul(r83943476, r83943474, r83943475, MPFR_RNDN);
        mpfr_add(r83943477, r83943473, r83943476, MPFR_RNDN);
        mpfr_mul(r83943478, r83943477, r83943475, MPFR_RNDN);
        mpfr_mul(r83943479, r83943478, r83943478, MPFR_RNDN);
        mpfr_sub(r83943480, r83943472, r83943479, MPFR_RNDN);
        mpfr_sub(r83943481, r83943471, r83943478, MPFR_RNDN);
        mpfr_div(r83943482, r83943480, r83943481, MPFR_RNDN);
        ;
        mpfr_mul(r83943484, r83943475, r83943475, MPFR_RNDN);
        mpfr_mul(r83943485, r83943484, r83943475, MPFR_RNDN);
        mpfr_mul(r83943486, r83943483, r83943485, MPFR_RNDN);
        mpfr_add(r83943487, r83943482, r83943486, MPFR_RNDN);
        return mpfr_get_d(r83943487, MPFR_RNDN);
}

