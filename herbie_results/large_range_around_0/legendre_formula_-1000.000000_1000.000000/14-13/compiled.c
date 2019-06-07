#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r7057464 = 2.932617;
        float r7057465 = x;
        float r7057466 = r7057464 * r7057465;
        float r7057467 = -87.978516;
        float r7057468 = r7057465 * r7057465;
        float r7057469 = r7057468 * r7057465;
        float r7057470 = r7057467 * r7057469;
        float r7057471 = r7057466 + r7057470;
        float r7057472 = 747.817383;
        float r7057473 = r7057469 * r7057465;
        float r7057474 = r7057473 * r7057465;
        float r7057475 = r7057472 * r7057474;
        float r7057476 = r7057471 + r7057475;
        float r7057477 = -2706.386719;
        float r7057478 = r7057474 * r7057465;
        float r7057479 = r7057478 * r7057465;
        float r7057480 = r7057477 * r7057479;
        float r7057481 = r7057476 + r7057480;
        float r7057482 = 4736.176758;
        float r7057483 = r7057479 * r7057465;
        float r7057484 = r7057483 * r7057465;
        float r7057485 = r7057482 * r7057484;
        float r7057486 = r7057481 + r7057485;
        float r7057487 = -3961.166016;
        float r7057488 = r7057484 * r7057465;
        float r7057489 = r7057488 * r7057465;
        float r7057490 = r7057487 * r7057489;
        float r7057491 = r7057486 + r7057490;
        float r7057492 = 1269.604492;
        float r7057493 = r7057489 * r7057465;
        float r7057494 = r7057493 * r7057465;
        float r7057495 = r7057492 * r7057494;
        float r7057496 = r7057491 + r7057495;
        return r7057496;
}

double f_id(double x) {
        double r7057497 = 2.932617;
        double r7057498 = x;
        double r7057499 = r7057497 * r7057498;
        double r7057500 = -87.978516;
        double r7057501 = r7057498 * r7057498;
        double r7057502 = r7057501 * r7057498;
        double r7057503 = r7057500 * r7057502;
        double r7057504 = r7057499 + r7057503;
        double r7057505 = 747.817383;
        double r7057506 = r7057502 * r7057498;
        double r7057507 = r7057506 * r7057498;
        double r7057508 = r7057505 * r7057507;
        double r7057509 = r7057504 + r7057508;
        double r7057510 = -2706.386719;
        double r7057511 = r7057507 * r7057498;
        double r7057512 = r7057511 * r7057498;
        double r7057513 = r7057510 * r7057512;
        double r7057514 = r7057509 + r7057513;
        double r7057515 = 4736.176758;
        double r7057516 = r7057512 * r7057498;
        double r7057517 = r7057516 * r7057498;
        double r7057518 = r7057515 * r7057517;
        double r7057519 = r7057514 + r7057518;
        double r7057520 = -3961.166016;
        double r7057521 = r7057517 * r7057498;
        double r7057522 = r7057521 * r7057498;
        double r7057523 = r7057520 * r7057522;
        double r7057524 = r7057519 + r7057523;
        double r7057525 = 1269.604492;
        double r7057526 = r7057522 * r7057498;
        double r7057527 = r7057526 * r7057498;
        double r7057528 = r7057525 * r7057527;
        double r7057529 = r7057524 + r7057528;
        return r7057529;
}


double f_of(float x) {
        float r7057530 = x;
        float r7057531 = 3;
        float r7057532 = pow(r7057530, r7057531);
        float r7057533 = r7057532 * r7057532;
        float r7057534 = r7057533 * r7057530;
        float r7057535 = -2706.386719;
        float r7057536 = r7057530 * r7057530;
        float r7057537 = 4736.176758;
        float r7057538 = r7057536 * r7057537;
        float r7057539 = r7057535 + r7057538;
        float r7057540 = r7057534 * r7057539;
        float r7057541 = r7057536 * r7057536;
        float r7057542 = 747.817383;
        float r7057543 = r7057530 * r7057542;
        float r7057544 = r7057541 * r7057543;
        float r7057545 = 2.932617;
        float r7057546 = r7057545 * r7057530;
        float r7057547 = -87.978516;
        float r7057548 = r7057547 * r7057530;
        float r7057549 = r7057548 * r7057536;
        float r7057550 = r7057546 + r7057549;
        float r7057551 = r7057544 + r7057550;
        float r7057552 = r7057540 + r7057551;
        float r7057553 = r7057541 * r7057541;
        float r7057554 = r7057553 * r7057532;
        float r7057555 = -3961.166016;
        float r7057556 = 1269.604492;
        float r7057557 = r7057530 * r7057556;
        float r7057558 = r7057530 * r7057557;
        float r7057559 = r7057555 + r7057558;
        float r7057560 = r7057554 * r7057559;
        float r7057561 = r7057552 + r7057560;
        return r7057561;
}

double f_od(double x) {
        double r7057562 = x;
        double r7057563 = 3;
        double r7057564 = pow(r7057562, r7057563);
        double r7057565 = r7057564 * r7057564;
        double r7057566 = r7057565 * r7057562;
        double r7057567 = -2706.386719;
        double r7057568 = r7057562 * r7057562;
        double r7057569 = 4736.176758;
        double r7057570 = r7057568 * r7057569;
        double r7057571 = r7057567 + r7057570;
        double r7057572 = r7057566 * r7057571;
        double r7057573 = r7057568 * r7057568;
        double r7057574 = 747.817383;
        double r7057575 = r7057562 * r7057574;
        double r7057576 = r7057573 * r7057575;
        double r7057577 = 2.932617;
        double r7057578 = r7057577 * r7057562;
        double r7057579 = -87.978516;
        double r7057580 = r7057579 * r7057562;
        double r7057581 = r7057580 * r7057568;
        double r7057582 = r7057578 + r7057581;
        double r7057583 = r7057576 + r7057582;
        double r7057584 = r7057572 + r7057583;
        double r7057585 = r7057573 * r7057573;
        double r7057586 = r7057585 * r7057564;
        double r7057587 = -3961.166016;
        double r7057588 = 1269.604492;
        double r7057589 = r7057562 * r7057588;
        double r7057590 = r7057562 * r7057589;
        double r7057591 = r7057587 + r7057590;
        double r7057592 = r7057586 * r7057591;
        double r7057593 = r7057584 + r7057592;
        return r7057593;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7057594, r7057595, r7057596, r7057597, r7057598, r7057599, r7057600, r7057601, r7057602, r7057603, r7057604, r7057605, r7057606, r7057607, r7057608, r7057609, r7057610, r7057611, r7057612, r7057613, r7057614, r7057615, r7057616, r7057617, r7057618, r7057619, r7057620, r7057621, r7057622, r7057623, r7057624, r7057625, r7057626;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7057594, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7057595);
        mpfr_init(r7057596);
        mpfr_init_set_str(r7057597, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7057598);
        mpfr_init(r7057599);
        mpfr_init(r7057600);
        mpfr_init(r7057601);
        mpfr_init_set_str(r7057602, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7057603);
        mpfr_init(r7057604);
        mpfr_init(r7057605);
        mpfr_init(r7057606);
        mpfr_init_set_str(r7057607, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r7057608);
        mpfr_init(r7057609);
        mpfr_init(r7057610);
        mpfr_init(r7057611);
        mpfr_init_set_str(r7057612, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7057613);
        mpfr_init(r7057614);
        mpfr_init(r7057615);
        mpfr_init(r7057616);
        mpfr_init_set_str(r7057617, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r7057618);
        mpfr_init(r7057619);
        mpfr_init(r7057620);
        mpfr_init(r7057621);
        mpfr_init_set_str(r7057622, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7057623);
        mpfr_init(r7057624);
        mpfr_init(r7057625);
        mpfr_init(r7057626);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7057595, x, MPFR_RNDN);
        mpfr_mul(r7057596, r7057594, r7057595, MPFR_RNDN);
        ;
        mpfr_mul(r7057598, r7057595, r7057595, MPFR_RNDN);
        mpfr_mul(r7057599, r7057598, r7057595, MPFR_RNDN);
        mpfr_mul(r7057600, r7057597, r7057599, MPFR_RNDN);
        mpfr_add(r7057601, r7057596, r7057600, MPFR_RNDN);
        ;
        mpfr_mul(r7057603, r7057599, r7057595, MPFR_RNDN);
        mpfr_mul(r7057604, r7057603, r7057595, MPFR_RNDN);
        mpfr_mul(r7057605, r7057602, r7057604, MPFR_RNDN);
        mpfr_add(r7057606, r7057601, r7057605, MPFR_RNDN);
        ;
        mpfr_mul(r7057608, r7057604, r7057595, MPFR_RNDN);
        mpfr_mul(r7057609, r7057608, r7057595, MPFR_RNDN);
        mpfr_mul(r7057610, r7057607, r7057609, MPFR_RNDN);
        mpfr_add(r7057611, r7057606, r7057610, MPFR_RNDN);
        ;
        mpfr_mul(r7057613, r7057609, r7057595, MPFR_RNDN);
        mpfr_mul(r7057614, r7057613, r7057595, MPFR_RNDN);
        mpfr_mul(r7057615, r7057612, r7057614, MPFR_RNDN);
        mpfr_add(r7057616, r7057611, r7057615, MPFR_RNDN);
        ;
        mpfr_mul(r7057618, r7057614, r7057595, MPFR_RNDN);
        mpfr_mul(r7057619, r7057618, r7057595, MPFR_RNDN);
        mpfr_mul(r7057620, r7057617, r7057619, MPFR_RNDN);
        mpfr_add(r7057621, r7057616, r7057620, MPFR_RNDN);
        ;
        mpfr_mul(r7057623, r7057619, r7057595, MPFR_RNDN);
        mpfr_mul(r7057624, r7057623, r7057595, MPFR_RNDN);
        mpfr_mul(r7057625, r7057622, r7057624, MPFR_RNDN);
        mpfr_add(r7057626, r7057621, r7057625, MPFR_RNDN);
        return mpfr_get_d(r7057626, MPFR_RNDN);
}

static mpfr_t r7057627, r7057628, r7057629, r7057630, r7057631, r7057632, r7057633, r7057634, r7057635, r7057636, r7057637, r7057638, r7057639, r7057640, r7057641, r7057642, r7057643, r7057644, r7057645, r7057646, r7057647, r7057648, r7057649, r7057650, r7057651, r7057652, r7057653, r7057654, r7057655, r7057656, r7057657, r7057658;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7057627);
        mpfr_init_set_str(r7057628, "3", 10, MPFR_RNDN);
        mpfr_init(r7057629);
        mpfr_init(r7057630);
        mpfr_init(r7057631);
        mpfr_init_set_str(r7057632, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r7057633);
        mpfr_init_set_str(r7057634, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7057635);
        mpfr_init(r7057636);
        mpfr_init(r7057637);
        mpfr_init(r7057638);
        mpfr_init_set_str(r7057639, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7057640);
        mpfr_init(r7057641);
        mpfr_init_set_str(r7057642, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7057643);
        mpfr_init_set_str(r7057644, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7057645);
        mpfr_init(r7057646);
        mpfr_init(r7057647);
        mpfr_init(r7057648);
        mpfr_init(r7057649);
        mpfr_init(r7057650);
        mpfr_init(r7057651);
        mpfr_init_set_str(r7057652, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r7057653, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7057654);
        mpfr_init(r7057655);
        mpfr_init(r7057656);
        mpfr_init(r7057657);
        mpfr_init(r7057658);
}

double f_fm(double x) {
        mpfr_set_d(r7057627, x, MPFR_RNDN);
        ;
        mpfr_pow(r7057629, r7057627, r7057628, MPFR_RNDN);
        mpfr_mul(r7057630, r7057629, r7057629, MPFR_RNDN);
        mpfr_mul(r7057631, r7057630, r7057627, MPFR_RNDN);
        ;
        mpfr_mul(r7057633, r7057627, r7057627, MPFR_RNDN);
        ;
        mpfr_mul(r7057635, r7057633, r7057634, MPFR_RNDN);
        mpfr_add(r7057636, r7057632, r7057635, MPFR_RNDN);
        mpfr_mul(r7057637, r7057631, r7057636, MPFR_RNDN);
        mpfr_mul(r7057638, r7057633, r7057633, MPFR_RNDN);
        ;
        mpfr_mul(r7057640, r7057627, r7057639, MPFR_RNDN);
        mpfr_mul(r7057641, r7057638, r7057640, MPFR_RNDN);
        ;
        mpfr_mul(r7057643, r7057642, r7057627, MPFR_RNDN);
        ;
        mpfr_mul(r7057645, r7057644, r7057627, MPFR_RNDN);
        mpfr_mul(r7057646, r7057645, r7057633, MPFR_RNDN);
        mpfr_add(r7057647, r7057643, r7057646, MPFR_RNDN);
        mpfr_add(r7057648, r7057641, r7057647, MPFR_RNDN);
        mpfr_add(r7057649, r7057637, r7057648, MPFR_RNDN);
        mpfr_mul(r7057650, r7057638, r7057638, MPFR_RNDN);
        mpfr_mul(r7057651, r7057650, r7057629, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7057654, r7057627, r7057653, MPFR_RNDN);
        mpfr_mul(r7057655, r7057627, r7057654, MPFR_RNDN);
        mpfr_add(r7057656, r7057652, r7057655, MPFR_RNDN);
        mpfr_mul(r7057657, r7057651, r7057656, MPFR_RNDN);
        mpfr_add(r7057658, r7057649, r7057657, MPFR_RNDN);
        return mpfr_get_d(r7057658, MPFR_RNDN);
}

static mpfr_t r7057659, r7057660, r7057661, r7057662, r7057663, r7057664, r7057665, r7057666, r7057667, r7057668, r7057669, r7057670, r7057671, r7057672, r7057673, r7057674, r7057675, r7057676, r7057677, r7057678, r7057679, r7057680, r7057681, r7057682, r7057683, r7057684, r7057685, r7057686, r7057687, r7057688, r7057689, r7057690;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7057659);
        mpfr_init_set_str(r7057660, "3", 10, MPFR_RNDN);
        mpfr_init(r7057661);
        mpfr_init(r7057662);
        mpfr_init(r7057663);
        mpfr_init_set_str(r7057664, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r7057665);
        mpfr_init_set_str(r7057666, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7057667);
        mpfr_init(r7057668);
        mpfr_init(r7057669);
        mpfr_init(r7057670);
        mpfr_init_set_str(r7057671, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7057672);
        mpfr_init(r7057673);
        mpfr_init_set_str(r7057674, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7057675);
        mpfr_init_set_str(r7057676, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7057677);
        mpfr_init(r7057678);
        mpfr_init(r7057679);
        mpfr_init(r7057680);
        mpfr_init(r7057681);
        mpfr_init(r7057682);
        mpfr_init(r7057683);
        mpfr_init_set_str(r7057684, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r7057685, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7057686);
        mpfr_init(r7057687);
        mpfr_init(r7057688);
        mpfr_init(r7057689);
        mpfr_init(r7057690);
}

double f_dm(double x) {
        mpfr_set_d(r7057659, x, MPFR_RNDN);
        ;
        mpfr_pow(r7057661, r7057659, r7057660, MPFR_RNDN);
        mpfr_mul(r7057662, r7057661, r7057661, MPFR_RNDN);
        mpfr_mul(r7057663, r7057662, r7057659, MPFR_RNDN);
        ;
        mpfr_mul(r7057665, r7057659, r7057659, MPFR_RNDN);
        ;
        mpfr_mul(r7057667, r7057665, r7057666, MPFR_RNDN);
        mpfr_add(r7057668, r7057664, r7057667, MPFR_RNDN);
        mpfr_mul(r7057669, r7057663, r7057668, MPFR_RNDN);
        mpfr_mul(r7057670, r7057665, r7057665, MPFR_RNDN);
        ;
        mpfr_mul(r7057672, r7057659, r7057671, MPFR_RNDN);
        mpfr_mul(r7057673, r7057670, r7057672, MPFR_RNDN);
        ;
        mpfr_mul(r7057675, r7057674, r7057659, MPFR_RNDN);
        ;
        mpfr_mul(r7057677, r7057676, r7057659, MPFR_RNDN);
        mpfr_mul(r7057678, r7057677, r7057665, MPFR_RNDN);
        mpfr_add(r7057679, r7057675, r7057678, MPFR_RNDN);
        mpfr_add(r7057680, r7057673, r7057679, MPFR_RNDN);
        mpfr_add(r7057681, r7057669, r7057680, MPFR_RNDN);
        mpfr_mul(r7057682, r7057670, r7057670, MPFR_RNDN);
        mpfr_mul(r7057683, r7057682, r7057661, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7057686, r7057659, r7057685, MPFR_RNDN);
        mpfr_mul(r7057687, r7057659, r7057686, MPFR_RNDN);
        mpfr_add(r7057688, r7057684, r7057687, MPFR_RNDN);
        mpfr_mul(r7057689, r7057683, r7057688, MPFR_RNDN);
        mpfr_add(r7057690, r7057681, r7057689, MPFR_RNDN);
        return mpfr_get_d(r7057690, MPFR_RNDN);
}

