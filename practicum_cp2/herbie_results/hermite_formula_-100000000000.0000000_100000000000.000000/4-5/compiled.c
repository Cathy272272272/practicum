#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r11054446 = 120.0;
        float r11054447 = x;
        float r11054448 = r11054446 * r11054447;
        float r11054449 = -160.0;
        float r11054450 = r11054447 * r11054447;
        float r11054451 = r11054450 * r11054447;
        float r11054452 = r11054449 * r11054451;
        float r11054453 = r11054448 + r11054452;
        float r11054454 = 32.0;
        float r11054455 = r11054451 * r11054447;
        float r11054456 = r11054455 * r11054447;
        float r11054457 = r11054454 * r11054456;
        float r11054458 = r11054453 + r11054457;
        return r11054458;
}

double f_id(double x) {
        double r11054459 = 120.0;
        double r11054460 = x;
        double r11054461 = r11054459 * r11054460;
        double r11054462 = -160.0;
        double r11054463 = r11054460 * r11054460;
        double r11054464 = r11054463 * r11054460;
        double r11054465 = r11054462 * r11054464;
        double r11054466 = r11054461 + r11054465;
        double r11054467 = 32.0;
        double r11054468 = r11054464 * r11054460;
        double r11054469 = r11054468 * r11054460;
        double r11054470 = r11054467 * r11054469;
        double r11054471 = r11054466 + r11054470;
        return r11054471;
}


double f_of(float x) {
        float r11054472 = 120.0;
        float r11054473 = x;
        float r11054474 = r11054472 * r11054473;
        float r11054475 = -160.0;
        float r11054476 = r11054473 * r11054473;
        float r11054477 = r11054476 * r11054473;
        float r11054478 = r11054475 * r11054477;
        float r11054479 = r11054474 + r11054478;
        float r11054480 = 32.0;
        float r11054481 = 3;
        float r11054482 = 1;
        float r11054483 = r11054481 + r11054482;
        float r11054484 = r11054483 + r11054482;
        float r11054485 = pow(r11054473, r11054484);
        float r11054486 = r11054480 * r11054485;
        float r11054487 = r11054479 + r11054486;
        return r11054487;
}

double f_od(double x) {
        double r11054488 = 120.0;
        double r11054489 = x;
        double r11054490 = r11054488 * r11054489;
        double r11054491 = -160.0;
        double r11054492 = r11054489 * r11054489;
        double r11054493 = r11054492 * r11054489;
        double r11054494 = r11054491 * r11054493;
        double r11054495 = r11054490 + r11054494;
        double r11054496 = 32.0;
        double r11054497 = 3;
        double r11054498 = 1;
        double r11054499 = r11054497 + r11054498;
        double r11054500 = r11054499 + r11054498;
        double r11054501 = pow(r11054489, r11054500);
        double r11054502 = r11054496 * r11054501;
        double r11054503 = r11054495 + r11054502;
        return r11054503;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11054504, r11054505, r11054506, r11054507, r11054508, r11054509, r11054510, r11054511, r11054512, r11054513, r11054514, r11054515, r11054516;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11054504, "120.0", 10, MPFR_RNDN);
        mpfr_init(r11054505);
        mpfr_init(r11054506);
        mpfr_init_set_str(r11054507, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r11054508);
        mpfr_init(r11054509);
        mpfr_init(r11054510);
        mpfr_init(r11054511);
        mpfr_init_set_str(r11054512, "32.0", 10, MPFR_RNDN);
        mpfr_init(r11054513);
        mpfr_init(r11054514);
        mpfr_init(r11054515);
        mpfr_init(r11054516);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11054505, x, MPFR_RNDN);
        mpfr_mul(r11054506, r11054504, r11054505, MPFR_RNDN);
        ;
        mpfr_mul(r11054508, r11054505, r11054505, MPFR_RNDN);
        mpfr_mul(r11054509, r11054508, r11054505, MPFR_RNDN);
        mpfr_mul(r11054510, r11054507, r11054509, MPFR_RNDN);
        mpfr_add(r11054511, r11054506, r11054510, MPFR_RNDN);
        ;
        mpfr_mul(r11054513, r11054509, r11054505, MPFR_RNDN);
        mpfr_mul(r11054514, r11054513, r11054505, MPFR_RNDN);
        mpfr_mul(r11054515, r11054512, r11054514, MPFR_RNDN);
        mpfr_add(r11054516, r11054511, r11054515, MPFR_RNDN);
        return mpfr_get_d(r11054516, MPFR_RNDN);
}

static mpfr_t r11054517, r11054518, r11054519, r11054520, r11054521, r11054522, r11054523, r11054524, r11054525, r11054526, r11054527, r11054528, r11054529, r11054530, r11054531, r11054532;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11054517, "120.0", 10, MPFR_RNDN);
        mpfr_init(r11054518);
        mpfr_init(r11054519);
        mpfr_init_set_str(r11054520, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r11054521);
        mpfr_init(r11054522);
        mpfr_init(r11054523);
        mpfr_init(r11054524);
        mpfr_init_set_str(r11054525, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054526, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054527, "1", 10, MPFR_RNDN);
        mpfr_init(r11054528);
        mpfr_init(r11054529);
        mpfr_init(r11054530);
        mpfr_init(r11054531);
        mpfr_init(r11054532);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11054518, x, MPFR_RNDN);
        mpfr_mul(r11054519, r11054517, r11054518, MPFR_RNDN);
        ;
        mpfr_mul(r11054521, r11054518, r11054518, MPFR_RNDN);
        mpfr_mul(r11054522, r11054521, r11054518, MPFR_RNDN);
        mpfr_mul(r11054523, r11054520, r11054522, MPFR_RNDN);
        mpfr_add(r11054524, r11054519, r11054523, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r11054528, r11054526, r11054527, MPFR_RNDN);
        mpfr_add(r11054529, r11054528, r11054527, MPFR_RNDN);
        mpfr_pow(r11054530, r11054518, r11054529, MPFR_RNDN);
        mpfr_mul(r11054531, r11054525, r11054530, MPFR_RNDN);
        mpfr_add(r11054532, r11054524, r11054531, MPFR_RNDN);
        return mpfr_get_d(r11054532, MPFR_RNDN);
}

static mpfr_t r11054533, r11054534, r11054535, r11054536, r11054537, r11054538, r11054539, r11054540, r11054541, r11054542, r11054543, r11054544, r11054545, r11054546, r11054547, r11054548;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11054533, "120.0", 10, MPFR_RNDN);
        mpfr_init(r11054534);
        mpfr_init(r11054535);
        mpfr_init_set_str(r11054536, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r11054537);
        mpfr_init(r11054538);
        mpfr_init(r11054539);
        mpfr_init(r11054540);
        mpfr_init_set_str(r11054541, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054542, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054543, "1", 10, MPFR_RNDN);
        mpfr_init(r11054544);
        mpfr_init(r11054545);
        mpfr_init(r11054546);
        mpfr_init(r11054547);
        mpfr_init(r11054548);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11054534, x, MPFR_RNDN);
        mpfr_mul(r11054535, r11054533, r11054534, MPFR_RNDN);
        ;
        mpfr_mul(r11054537, r11054534, r11054534, MPFR_RNDN);
        mpfr_mul(r11054538, r11054537, r11054534, MPFR_RNDN);
        mpfr_mul(r11054539, r11054536, r11054538, MPFR_RNDN);
        mpfr_add(r11054540, r11054535, r11054539, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r11054544, r11054542, r11054543, MPFR_RNDN);
        mpfr_add(r11054545, r11054544, r11054543, MPFR_RNDN);
        mpfr_pow(r11054546, r11054534, r11054545, MPFR_RNDN);
        mpfr_mul(r11054547, r11054541, r11054546, MPFR_RNDN);
        mpfr_add(r11054548, r11054540, r11054547, MPFR_RNDN);
        return mpfr_get_d(r11054548, MPFR_RNDN);
}

