#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7079465 = -1680.0;
        float r7079466 = x;
        float r7079467 = r7079465 * r7079466;
        float r7079468 = 3360.0;
        float r7079469 = r7079466 * r7079466;
        float r7079470 = r7079469 * r7079466;
        float r7079471 = r7079468 * r7079470;
        float r7079472 = r7079467 + r7079471;
        float r7079473 = -1344.0;
        float r7079474 = r7079470 * r7079466;
        float r7079475 = r7079474 * r7079466;
        float r7079476 = r7079473 * r7079475;
        float r7079477 = r7079472 + r7079476;
        float r7079478 = 128.0;
        float r7079479 = r7079475 * r7079466;
        float r7079480 = r7079479 * r7079466;
        float r7079481 = r7079478 * r7079480;
        float r7079482 = r7079477 + r7079481;
        return r7079482;
}

double f_id(double x) {
        double r7079483 = -1680.0;
        double r7079484 = x;
        double r7079485 = r7079483 * r7079484;
        double r7079486 = 3360.0;
        double r7079487 = r7079484 * r7079484;
        double r7079488 = r7079487 * r7079484;
        double r7079489 = r7079486 * r7079488;
        double r7079490 = r7079485 + r7079489;
        double r7079491 = -1344.0;
        double r7079492 = r7079488 * r7079484;
        double r7079493 = r7079492 * r7079484;
        double r7079494 = r7079491 * r7079493;
        double r7079495 = r7079490 + r7079494;
        double r7079496 = 128.0;
        double r7079497 = r7079493 * r7079484;
        double r7079498 = r7079497 * r7079484;
        double r7079499 = r7079496 * r7079498;
        double r7079500 = r7079495 + r7079499;
        return r7079500;
}


double f_of(float x) {
        float r7079501 = x;
        float r7079502 = r7079501 * r7079501;
        float r7079503 = r7079502 * r7079502;
        float r7079504 = 128.0;
        float r7079505 = r7079504 * r7079501;
        float r7079506 = r7079502 * r7079505;
        float r7079507 = -1344.0;
        float r7079508 = r7079501 * r7079507;
        float r7079509 = r7079506 + r7079508;
        float r7079510 = r7079503 * r7079509;
        float r7079511 = -1680.0;
        float r7079512 = r7079511 * r7079501;
        float r7079513 = 3360.0;
        float r7079514 = r7079513 * r7079501;
        float r7079515 = r7079502 * r7079514;
        float r7079516 = r7079512 + r7079515;
        float r7079517 = r7079510 + r7079516;
        return r7079517;
}

double f_od(double x) {
        double r7079518 = x;
        double r7079519 = r7079518 * r7079518;
        double r7079520 = r7079519 * r7079519;
        double r7079521 = 128.0;
        double r7079522 = r7079521 * r7079518;
        double r7079523 = r7079519 * r7079522;
        double r7079524 = -1344.0;
        double r7079525 = r7079518 * r7079524;
        double r7079526 = r7079523 + r7079525;
        double r7079527 = r7079520 * r7079526;
        double r7079528 = -1680.0;
        double r7079529 = r7079528 * r7079518;
        double r7079530 = 3360.0;
        double r7079531 = r7079530 * r7079518;
        double r7079532 = r7079519 * r7079531;
        double r7079533 = r7079529 + r7079532;
        double r7079534 = r7079527 + r7079533;
        return r7079534;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7079535, r7079536, r7079537, r7079538, r7079539, r7079540, r7079541, r7079542, r7079543, r7079544, r7079545, r7079546, r7079547, r7079548, r7079549, r7079550, r7079551, r7079552;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7079535, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7079536);
        mpfr_init(r7079537);
        mpfr_init_set_str(r7079538, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7079539);
        mpfr_init(r7079540);
        mpfr_init(r7079541);
        mpfr_init(r7079542);
        mpfr_init_set_str(r7079543, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7079544);
        mpfr_init(r7079545);
        mpfr_init(r7079546);
        mpfr_init(r7079547);
        mpfr_init_set_str(r7079548, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7079549);
        mpfr_init(r7079550);
        mpfr_init(r7079551);
        mpfr_init(r7079552);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7079536, x, MPFR_RNDN);
        mpfr_mul(r7079537, r7079535, r7079536, MPFR_RNDN);
        ;
        mpfr_mul(r7079539, r7079536, r7079536, MPFR_RNDN);
        mpfr_mul(r7079540, r7079539, r7079536, MPFR_RNDN);
        mpfr_mul(r7079541, r7079538, r7079540, MPFR_RNDN);
        mpfr_add(r7079542, r7079537, r7079541, MPFR_RNDN);
        ;
        mpfr_mul(r7079544, r7079540, r7079536, MPFR_RNDN);
        mpfr_mul(r7079545, r7079544, r7079536, MPFR_RNDN);
        mpfr_mul(r7079546, r7079543, r7079545, MPFR_RNDN);
        mpfr_add(r7079547, r7079542, r7079546, MPFR_RNDN);
        ;
        mpfr_mul(r7079549, r7079545, r7079536, MPFR_RNDN);
        mpfr_mul(r7079550, r7079549, r7079536, MPFR_RNDN);
        mpfr_mul(r7079551, r7079548, r7079550, MPFR_RNDN);
        mpfr_add(r7079552, r7079547, r7079551, MPFR_RNDN);
        return mpfr_get_d(r7079552, MPFR_RNDN);
}

static mpfr_t r7079553, r7079554, r7079555, r7079556, r7079557, r7079558, r7079559, r7079560, r7079561, r7079562, r7079563, r7079564, r7079565, r7079566, r7079567, r7079568, r7079569;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7079553);
        mpfr_init(r7079554);
        mpfr_init(r7079555);
        mpfr_init_set_str(r7079556, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7079557);
        mpfr_init(r7079558);
        mpfr_init_set_str(r7079559, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7079560);
        mpfr_init(r7079561);
        mpfr_init(r7079562);
        mpfr_init_set_str(r7079563, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7079564);
        mpfr_init_set_str(r7079565, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7079566);
        mpfr_init(r7079567);
        mpfr_init(r7079568);
        mpfr_init(r7079569);
}

double f_fm(double x) {
        mpfr_set_d(r7079553, x, MPFR_RNDN);
        mpfr_mul(r7079554, r7079553, r7079553, MPFR_RNDN);
        mpfr_mul(r7079555, r7079554, r7079554, MPFR_RNDN);
        ;
        mpfr_mul(r7079557, r7079556, r7079553, MPFR_RNDN);
        mpfr_mul(r7079558, r7079554, r7079557, MPFR_RNDN);
        ;
        mpfr_mul(r7079560, r7079553, r7079559, MPFR_RNDN);
        mpfr_add(r7079561, r7079558, r7079560, MPFR_RNDN);
        mpfr_mul(r7079562, r7079555, r7079561, MPFR_RNDN);
        ;
        mpfr_mul(r7079564, r7079563, r7079553, MPFR_RNDN);
        ;
        mpfr_mul(r7079566, r7079565, r7079553, MPFR_RNDN);
        mpfr_mul(r7079567, r7079554, r7079566, MPFR_RNDN);
        mpfr_add(r7079568, r7079564, r7079567, MPFR_RNDN);
        mpfr_add(r7079569, r7079562, r7079568, MPFR_RNDN);
        return mpfr_get_d(r7079569, MPFR_RNDN);
}

static mpfr_t r7079570, r7079571, r7079572, r7079573, r7079574, r7079575, r7079576, r7079577, r7079578, r7079579, r7079580, r7079581, r7079582, r7079583, r7079584, r7079585, r7079586;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7079570);
        mpfr_init(r7079571);
        mpfr_init(r7079572);
        mpfr_init_set_str(r7079573, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7079574);
        mpfr_init(r7079575);
        mpfr_init_set_str(r7079576, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7079577);
        mpfr_init(r7079578);
        mpfr_init(r7079579);
        mpfr_init_set_str(r7079580, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7079581);
        mpfr_init_set_str(r7079582, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7079583);
        mpfr_init(r7079584);
        mpfr_init(r7079585);
        mpfr_init(r7079586);
}

double f_dm(double x) {
        mpfr_set_d(r7079570, x, MPFR_RNDN);
        mpfr_mul(r7079571, r7079570, r7079570, MPFR_RNDN);
        mpfr_mul(r7079572, r7079571, r7079571, MPFR_RNDN);
        ;
        mpfr_mul(r7079574, r7079573, r7079570, MPFR_RNDN);
        mpfr_mul(r7079575, r7079571, r7079574, MPFR_RNDN);
        ;
        mpfr_mul(r7079577, r7079570, r7079576, MPFR_RNDN);
        mpfr_add(r7079578, r7079575, r7079577, MPFR_RNDN);
        mpfr_mul(r7079579, r7079572, r7079578, MPFR_RNDN);
        ;
        mpfr_mul(r7079581, r7079580, r7079570, MPFR_RNDN);
        ;
        mpfr_mul(r7079583, r7079582, r7079570, MPFR_RNDN);
        mpfr_mul(r7079584, r7079571, r7079583, MPFR_RNDN);
        mpfr_add(r7079585, r7079581, r7079584, MPFR_RNDN);
        mpfr_add(r7079586, r7079579, r7079585, MPFR_RNDN);
        return mpfr_get_d(r7079586, MPFR_RNDN);
}

