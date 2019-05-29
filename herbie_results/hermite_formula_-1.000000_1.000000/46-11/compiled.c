#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r7998536 = -665280.0;
        float r7998537 = x;
        float r7998538 = r7998536 * r7998537;
        float r7998539 = 2217600.0;
        float r7998540 = r7998537 * r7998537;
        float r7998541 = r7998540 * r7998537;
        float r7998542 = r7998539 * r7998541;
        float r7998543 = r7998538 + r7998542;
        float r7998544 = -1774080.0;
        float r7998545 = r7998541 * r7998537;
        float r7998546 = r7998545 * r7998537;
        float r7998547 = r7998544 * r7998546;
        float r7998548 = r7998543 + r7998547;
        float r7998549 = 506880.0;
        float r7998550 = r7998546 * r7998537;
        float r7998551 = r7998550 * r7998537;
        float r7998552 = r7998549 * r7998551;
        float r7998553 = r7998548 + r7998552;
        float r7998554 = -56320.0;
        float r7998555 = r7998551 * r7998537;
        float r7998556 = r7998555 * r7998537;
        float r7998557 = r7998554 * r7998556;
        float r7998558 = r7998553 + r7998557;
        float r7998559 = 2048.0;
        float r7998560 = r7998556 * r7998537;
        float r7998561 = r7998560 * r7998537;
        float r7998562 = r7998559 * r7998561;
        float r7998563 = r7998558 + r7998562;
        return r7998563;
}

double f_id(double x) {
        double r7998564 = -665280.0;
        double r7998565 = x;
        double r7998566 = r7998564 * r7998565;
        double r7998567 = 2217600.0;
        double r7998568 = r7998565 * r7998565;
        double r7998569 = r7998568 * r7998565;
        double r7998570 = r7998567 * r7998569;
        double r7998571 = r7998566 + r7998570;
        double r7998572 = -1774080.0;
        double r7998573 = r7998569 * r7998565;
        double r7998574 = r7998573 * r7998565;
        double r7998575 = r7998572 * r7998574;
        double r7998576 = r7998571 + r7998575;
        double r7998577 = 506880.0;
        double r7998578 = r7998574 * r7998565;
        double r7998579 = r7998578 * r7998565;
        double r7998580 = r7998577 * r7998579;
        double r7998581 = r7998576 + r7998580;
        double r7998582 = -56320.0;
        double r7998583 = r7998579 * r7998565;
        double r7998584 = r7998583 * r7998565;
        double r7998585 = r7998582 * r7998584;
        double r7998586 = r7998581 + r7998585;
        double r7998587 = 2048.0;
        double r7998588 = r7998584 * r7998565;
        double r7998589 = r7998588 * r7998565;
        double r7998590 = r7998587 * r7998589;
        double r7998591 = r7998586 + r7998590;
        return r7998591;
}


double f_of(float x) {
        float r7998592 = x;
        float r7998593 = 2048.0;
        float r7998594 = r7998592 * r7998593;
        float r7998595 = r7998592 * r7998592;
        float r7998596 = r7998594 * r7998595;
        float r7998597 = r7998595 * r7998595;
        float r7998598 = r7998597 * r7998597;
        float r7998599 = r7998596 * r7998598;
        float r7998600 = -665280.0;
        float r7998601 = r7998600 * r7998592;
        float r7998602 = r7998599 + r7998601;
        float r7998603 = 9;
        float r7998604 = pow(r7998592, r7998603);
        float r7998605 = -56320.0;
        float r7998606 = r7998604 * r7998605;
        float r7998607 = 506880.0;
        float r7998608 = r7998607 * r7998592;
        float r7998609 = r7998608 * r7998595;
        float r7998610 = r7998609 * r7998597;
        float r7998611 = r7998606 + r7998610;
        float r7998612 = 2217600.0;
        float r7998613 = r7998612 * r7998592;
        float r7998614 = -1774080.0;
        float r7998615 = r7998592 * r7998614;
        float r7998616 = r7998615 * r7998595;
        float r7998617 = r7998613 + r7998616;
        float r7998618 = r7998595 * r7998617;
        float r7998619 = r7998611 + r7998618;
        float r7998620 = r7998602 + r7998619;
        return r7998620;
}

double f_od(double x) {
        double r7998621 = x;
        double r7998622 = 2048.0;
        double r7998623 = r7998621 * r7998622;
        double r7998624 = r7998621 * r7998621;
        double r7998625 = r7998623 * r7998624;
        double r7998626 = r7998624 * r7998624;
        double r7998627 = r7998626 * r7998626;
        double r7998628 = r7998625 * r7998627;
        double r7998629 = -665280.0;
        double r7998630 = r7998629 * r7998621;
        double r7998631 = r7998628 + r7998630;
        double r7998632 = 9;
        double r7998633 = pow(r7998621, r7998632);
        double r7998634 = -56320.0;
        double r7998635 = r7998633 * r7998634;
        double r7998636 = 506880.0;
        double r7998637 = r7998636 * r7998621;
        double r7998638 = r7998637 * r7998624;
        double r7998639 = r7998638 * r7998626;
        double r7998640 = r7998635 + r7998639;
        double r7998641 = 2217600.0;
        double r7998642 = r7998641 * r7998621;
        double r7998643 = -1774080.0;
        double r7998644 = r7998621 * r7998643;
        double r7998645 = r7998644 * r7998624;
        double r7998646 = r7998642 + r7998645;
        double r7998647 = r7998624 * r7998646;
        double r7998648 = r7998640 + r7998647;
        double r7998649 = r7998631 + r7998648;
        return r7998649;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7998650, r7998651, r7998652, r7998653, r7998654, r7998655, r7998656, r7998657, r7998658, r7998659, r7998660, r7998661, r7998662, r7998663, r7998664, r7998665, r7998666, r7998667, r7998668, r7998669, r7998670, r7998671, r7998672, r7998673, r7998674, r7998675, r7998676, r7998677;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7998650, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7998651);
        mpfr_init(r7998652);
        mpfr_init_set_str(r7998653, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7998654);
        mpfr_init(r7998655);
        mpfr_init(r7998656);
        mpfr_init(r7998657);
        mpfr_init_set_str(r7998658, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7998659);
        mpfr_init(r7998660);
        mpfr_init(r7998661);
        mpfr_init(r7998662);
        mpfr_init_set_str(r7998663, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r7998664);
        mpfr_init(r7998665);
        mpfr_init(r7998666);
        mpfr_init(r7998667);
        mpfr_init_set_str(r7998668, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7998669);
        mpfr_init(r7998670);
        mpfr_init(r7998671);
        mpfr_init(r7998672);
        mpfr_init_set_str(r7998673, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7998674);
        mpfr_init(r7998675);
        mpfr_init(r7998676);
        mpfr_init(r7998677);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7998651, x, MPFR_RNDN);
        mpfr_mul(r7998652, r7998650, r7998651, MPFR_RNDN);
        ;
        mpfr_mul(r7998654, r7998651, r7998651, MPFR_RNDN);
        mpfr_mul(r7998655, r7998654, r7998651, MPFR_RNDN);
        mpfr_mul(r7998656, r7998653, r7998655, MPFR_RNDN);
        mpfr_add(r7998657, r7998652, r7998656, MPFR_RNDN);
        ;
        mpfr_mul(r7998659, r7998655, r7998651, MPFR_RNDN);
        mpfr_mul(r7998660, r7998659, r7998651, MPFR_RNDN);
        mpfr_mul(r7998661, r7998658, r7998660, MPFR_RNDN);
        mpfr_add(r7998662, r7998657, r7998661, MPFR_RNDN);
        ;
        mpfr_mul(r7998664, r7998660, r7998651, MPFR_RNDN);
        mpfr_mul(r7998665, r7998664, r7998651, MPFR_RNDN);
        mpfr_mul(r7998666, r7998663, r7998665, MPFR_RNDN);
        mpfr_add(r7998667, r7998662, r7998666, MPFR_RNDN);
        ;
        mpfr_mul(r7998669, r7998665, r7998651, MPFR_RNDN);
        mpfr_mul(r7998670, r7998669, r7998651, MPFR_RNDN);
        mpfr_mul(r7998671, r7998668, r7998670, MPFR_RNDN);
        mpfr_add(r7998672, r7998667, r7998671, MPFR_RNDN);
        ;
        mpfr_mul(r7998674, r7998670, r7998651, MPFR_RNDN);
        mpfr_mul(r7998675, r7998674, r7998651, MPFR_RNDN);
        mpfr_mul(r7998676, r7998673, r7998675, MPFR_RNDN);
        mpfr_add(r7998677, r7998672, r7998676, MPFR_RNDN);
        return mpfr_get_d(r7998677, MPFR_RNDN);
}

static mpfr_t r7998678, r7998679, r7998680, r7998681, r7998682, r7998683, r7998684, r7998685, r7998686, r7998687, r7998688, r7998689, r7998690, r7998691, r7998692, r7998693, r7998694, r7998695, r7998696, r7998697, r7998698, r7998699, r7998700, r7998701, r7998702, r7998703, r7998704, r7998705, r7998706;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7998678);
        mpfr_init_set_str(r7998679, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7998680);
        mpfr_init(r7998681);
        mpfr_init(r7998682);
        mpfr_init(r7998683);
        mpfr_init(r7998684);
        mpfr_init(r7998685);
        mpfr_init_set_str(r7998686, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7998687);
        mpfr_init(r7998688);
        mpfr_init_set_str(r7998689, "9", 10, MPFR_RNDN);
        mpfr_init(r7998690);
        mpfr_init_set_str(r7998691, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7998692);
        mpfr_init_set_str(r7998693, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r7998694);
        mpfr_init(r7998695);
        mpfr_init(r7998696);
        mpfr_init(r7998697);
        mpfr_init_set_str(r7998698, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7998699);
        mpfr_init_set_str(r7998700, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7998701);
        mpfr_init(r7998702);
        mpfr_init(r7998703);
        mpfr_init(r7998704);
        mpfr_init(r7998705);
        mpfr_init(r7998706);
}

double f_fm(double x) {
        mpfr_set_d(r7998678, x, MPFR_RNDN);
        ;
        mpfr_mul(r7998680, r7998678, r7998679, MPFR_RNDN);
        mpfr_mul(r7998681, r7998678, r7998678, MPFR_RNDN);
        mpfr_mul(r7998682, r7998680, r7998681, MPFR_RNDN);
        mpfr_mul(r7998683, r7998681, r7998681, MPFR_RNDN);
        mpfr_mul(r7998684, r7998683, r7998683, MPFR_RNDN);
        mpfr_mul(r7998685, r7998682, r7998684, MPFR_RNDN);
        ;
        mpfr_mul(r7998687, r7998686, r7998678, MPFR_RNDN);
        mpfr_add(r7998688, r7998685, r7998687, MPFR_RNDN);
        ;
        mpfr_pow(r7998690, r7998678, r7998689, MPFR_RNDN);
        ;
        mpfr_mul(r7998692, r7998690, r7998691, MPFR_RNDN);
        ;
        mpfr_mul(r7998694, r7998693, r7998678, MPFR_RNDN);
        mpfr_mul(r7998695, r7998694, r7998681, MPFR_RNDN);
        mpfr_mul(r7998696, r7998695, r7998683, MPFR_RNDN);
        mpfr_add(r7998697, r7998692, r7998696, MPFR_RNDN);
        ;
        mpfr_mul(r7998699, r7998698, r7998678, MPFR_RNDN);
        ;
        mpfr_mul(r7998701, r7998678, r7998700, MPFR_RNDN);
        mpfr_mul(r7998702, r7998701, r7998681, MPFR_RNDN);
        mpfr_add(r7998703, r7998699, r7998702, MPFR_RNDN);
        mpfr_mul(r7998704, r7998681, r7998703, MPFR_RNDN);
        mpfr_add(r7998705, r7998697, r7998704, MPFR_RNDN);
        mpfr_add(r7998706, r7998688, r7998705, MPFR_RNDN);
        return mpfr_get_d(r7998706, MPFR_RNDN);
}

static mpfr_t r7998707, r7998708, r7998709, r7998710, r7998711, r7998712, r7998713, r7998714, r7998715, r7998716, r7998717, r7998718, r7998719, r7998720, r7998721, r7998722, r7998723, r7998724, r7998725, r7998726, r7998727, r7998728, r7998729, r7998730, r7998731, r7998732, r7998733, r7998734, r7998735;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7998707);
        mpfr_init_set_str(r7998708, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7998709);
        mpfr_init(r7998710);
        mpfr_init(r7998711);
        mpfr_init(r7998712);
        mpfr_init(r7998713);
        mpfr_init(r7998714);
        mpfr_init_set_str(r7998715, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7998716);
        mpfr_init(r7998717);
        mpfr_init_set_str(r7998718, "9", 10, MPFR_RNDN);
        mpfr_init(r7998719);
        mpfr_init_set_str(r7998720, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7998721);
        mpfr_init_set_str(r7998722, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r7998723);
        mpfr_init(r7998724);
        mpfr_init(r7998725);
        mpfr_init(r7998726);
        mpfr_init_set_str(r7998727, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7998728);
        mpfr_init_set_str(r7998729, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7998730);
        mpfr_init(r7998731);
        mpfr_init(r7998732);
        mpfr_init(r7998733);
        mpfr_init(r7998734);
        mpfr_init(r7998735);
}

double f_dm(double x) {
        mpfr_set_d(r7998707, x, MPFR_RNDN);
        ;
        mpfr_mul(r7998709, r7998707, r7998708, MPFR_RNDN);
        mpfr_mul(r7998710, r7998707, r7998707, MPFR_RNDN);
        mpfr_mul(r7998711, r7998709, r7998710, MPFR_RNDN);
        mpfr_mul(r7998712, r7998710, r7998710, MPFR_RNDN);
        mpfr_mul(r7998713, r7998712, r7998712, MPFR_RNDN);
        mpfr_mul(r7998714, r7998711, r7998713, MPFR_RNDN);
        ;
        mpfr_mul(r7998716, r7998715, r7998707, MPFR_RNDN);
        mpfr_add(r7998717, r7998714, r7998716, MPFR_RNDN);
        ;
        mpfr_pow(r7998719, r7998707, r7998718, MPFR_RNDN);
        ;
        mpfr_mul(r7998721, r7998719, r7998720, MPFR_RNDN);
        ;
        mpfr_mul(r7998723, r7998722, r7998707, MPFR_RNDN);
        mpfr_mul(r7998724, r7998723, r7998710, MPFR_RNDN);
        mpfr_mul(r7998725, r7998724, r7998712, MPFR_RNDN);
        mpfr_add(r7998726, r7998721, r7998725, MPFR_RNDN);
        ;
        mpfr_mul(r7998728, r7998727, r7998707, MPFR_RNDN);
        ;
        mpfr_mul(r7998730, r7998707, r7998729, MPFR_RNDN);
        mpfr_mul(r7998731, r7998730, r7998710, MPFR_RNDN);
        mpfr_add(r7998732, r7998728, r7998731, MPFR_RNDN);
        mpfr_mul(r7998733, r7998710, r7998732, MPFR_RNDN);
        mpfr_add(r7998734, r7998726, r7998733, MPFR_RNDN);
        mpfr_add(r7998735, r7998717, r7998734, MPFR_RNDN);
        return mpfr_get_d(r7998735, MPFR_RNDN);
}

