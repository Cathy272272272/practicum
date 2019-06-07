#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r3277527 = 1.0;
        float r3277528 = -8.0;
        float r3277529 = x;
        float r3277530 = r3277528 * r3277529;
        float r3277531 = r3277527 + r3277530;
        float r3277532 = 14.0;
        float r3277533 = r3277529 * r3277529;
        float r3277534 = r3277532 * r3277533;
        float r3277535 = r3277531 + r3277534;
        float r3277536 = -9.333333;
        float r3277537 = r3277533 * r3277529;
        float r3277538 = r3277536 * r3277537;
        float r3277539 = r3277535 + r3277538;
        float r3277540 = 2.916667;
        float r3277541 = r3277537 * r3277529;
        float r3277542 = r3277540 * r3277541;
        float r3277543 = r3277539 + r3277542;
        float r3277544 = -0.466667;
        float r3277545 = r3277541 * r3277529;
        float r3277546 = r3277544 * r3277545;
        float r3277547 = r3277543 + r3277546;
        float r3277548 = 0.038889;
        float r3277549 = r3277545 * r3277529;
        float r3277550 = r3277548 * r3277549;
        float r3277551 = r3277547 + r3277550;
        float r3277552 = -0.001587;
        float r3277553 = r3277549 * r3277529;
        float r3277554 = r3277552 * r3277553;
        float r3277555 = r3277551 + r3277554;
        float r3277556 = 2.5e-05;
        float r3277557 = r3277553 * r3277529;
        float r3277558 = r3277556 * r3277557;
        float r3277559 = r3277555 + r3277558;
        return r3277559;
}

double f_id(double x) {
        double r3277560 = 1.0;
        double r3277561 = -8.0;
        double r3277562 = x;
        double r3277563 = r3277561 * r3277562;
        double r3277564 = r3277560 + r3277563;
        double r3277565 = 14.0;
        double r3277566 = r3277562 * r3277562;
        double r3277567 = r3277565 * r3277566;
        double r3277568 = r3277564 + r3277567;
        double r3277569 = -9.333333;
        double r3277570 = r3277566 * r3277562;
        double r3277571 = r3277569 * r3277570;
        double r3277572 = r3277568 + r3277571;
        double r3277573 = 2.916667;
        double r3277574 = r3277570 * r3277562;
        double r3277575 = r3277573 * r3277574;
        double r3277576 = r3277572 + r3277575;
        double r3277577 = -0.466667;
        double r3277578 = r3277574 * r3277562;
        double r3277579 = r3277577 * r3277578;
        double r3277580 = r3277576 + r3277579;
        double r3277581 = 0.038889;
        double r3277582 = r3277578 * r3277562;
        double r3277583 = r3277581 * r3277582;
        double r3277584 = r3277580 + r3277583;
        double r3277585 = -0.001587;
        double r3277586 = r3277582 * r3277562;
        double r3277587 = r3277585 * r3277586;
        double r3277588 = r3277584 + r3277587;
        double r3277589 = 2.5e-05;
        double r3277590 = r3277586 * r3277562;
        double r3277591 = r3277589 * r3277590;
        double r3277592 = r3277588 + r3277591;
        return r3277592;
}


double f_of(float x) {
        float r3277593 = x;
        float r3277594 = r3277593 * r3277593;
        float r3277595 = r3277594 * r3277594;
        float r3277596 = -0.466667;
        float r3277597 = r3277596 * r3277593;
        float r3277598 = 2.916667;
        float r3277599 = r3277597 + r3277598;
        float r3277600 = r3277595 * r3277599;
        float r3277601 = -8.0;
        float r3277602 = r3277593 * r3277601;
        float r3277603 = r3277600 + r3277602;
        float r3277604 = -9.333333;
        float r3277605 = r3277604 * r3277593;
        float r3277606 = 14.0;
        float r3277607 = r3277605 + r3277606;
        float r3277608 = r3277594 * r3277607;
        float r3277609 = 1.0;
        float r3277610 = r3277608 + r3277609;
        float r3277611 = r3277603 + r3277610;
        float r3277612 = 3;
        float r3277613 = pow(r3277593, r3277612);
        float r3277614 = r3277613 * r3277613;
        float r3277615 = 0.038889;
        float r3277616 = -0.001587;
        float r3277617 = r3277616 * r3277593;
        float r3277618 = r3277615 + r3277617;
        float r3277619 = r3277614 * r3277618;
        float r3277620 = 2.5e-05;
        float r3277621 = r3277593 * r3277620;
        float r3277622 = r3277593 * r3277621;
        float r3277623 = r3277614 * r3277622;
        float r3277624 = r3277619 + r3277623;
        float r3277625 = r3277611 + r3277624;
        return r3277625;
}

double f_od(double x) {
        double r3277626 = x;
        double r3277627 = r3277626 * r3277626;
        double r3277628 = r3277627 * r3277627;
        double r3277629 = -0.466667;
        double r3277630 = r3277629 * r3277626;
        double r3277631 = 2.916667;
        double r3277632 = r3277630 + r3277631;
        double r3277633 = r3277628 * r3277632;
        double r3277634 = -8.0;
        double r3277635 = r3277626 * r3277634;
        double r3277636 = r3277633 + r3277635;
        double r3277637 = -9.333333;
        double r3277638 = r3277637 * r3277626;
        double r3277639 = 14.0;
        double r3277640 = r3277638 + r3277639;
        double r3277641 = r3277627 * r3277640;
        double r3277642 = 1.0;
        double r3277643 = r3277641 + r3277642;
        double r3277644 = r3277636 + r3277643;
        double r3277645 = 3;
        double r3277646 = pow(r3277626, r3277645);
        double r3277647 = r3277646 * r3277646;
        double r3277648 = 0.038889;
        double r3277649 = -0.001587;
        double r3277650 = r3277649 * r3277626;
        double r3277651 = r3277648 + r3277650;
        double r3277652 = r3277647 * r3277651;
        double r3277653 = 2.5e-05;
        double r3277654 = r3277626 * r3277653;
        double r3277655 = r3277626 * r3277654;
        double r3277656 = r3277647 * r3277655;
        double r3277657 = r3277652 + r3277656;
        double r3277658 = r3277644 + r3277657;
        return r3277658;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3277659, r3277660, r3277661, r3277662, r3277663, r3277664, r3277665, r3277666, r3277667, r3277668, r3277669, r3277670, r3277671, r3277672, r3277673, r3277674, r3277675, r3277676, r3277677, r3277678, r3277679, r3277680, r3277681, r3277682, r3277683, r3277684, r3277685, r3277686, r3277687, r3277688, r3277689, r3277690, r3277691;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3277659, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277660, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r3277661);
        mpfr_init(r3277662);
        mpfr_init(r3277663);
        mpfr_init_set_str(r3277664, "14.0", 10, MPFR_RNDN);
        mpfr_init(r3277665);
        mpfr_init(r3277666);
        mpfr_init(r3277667);
        mpfr_init_set_str(r3277668, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r3277669);
        mpfr_init(r3277670);
        mpfr_init(r3277671);
        mpfr_init_set_str(r3277672, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r3277673);
        mpfr_init(r3277674);
        mpfr_init(r3277675);
        mpfr_init_set_str(r3277676, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r3277677);
        mpfr_init(r3277678);
        mpfr_init(r3277679);
        mpfr_init_set_str(r3277680, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r3277681);
        mpfr_init(r3277682);
        mpfr_init(r3277683);
        mpfr_init_set_str(r3277684, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r3277685);
        mpfr_init(r3277686);
        mpfr_init(r3277687);
        mpfr_init_set_str(r3277688, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r3277689);
        mpfr_init(r3277690);
        mpfr_init(r3277691);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3277661, x, MPFR_RNDN);
        mpfr_mul(r3277662, r3277660, r3277661, MPFR_RNDN);
        mpfr_add(r3277663, r3277659, r3277662, MPFR_RNDN);
        ;
        mpfr_mul(r3277665, r3277661, r3277661, MPFR_RNDN);
        mpfr_mul(r3277666, r3277664, r3277665, MPFR_RNDN);
        mpfr_add(r3277667, r3277663, r3277666, MPFR_RNDN);
        ;
        mpfr_mul(r3277669, r3277665, r3277661, MPFR_RNDN);
        mpfr_mul(r3277670, r3277668, r3277669, MPFR_RNDN);
        mpfr_add(r3277671, r3277667, r3277670, MPFR_RNDN);
        ;
        mpfr_mul(r3277673, r3277669, r3277661, MPFR_RNDN);
        mpfr_mul(r3277674, r3277672, r3277673, MPFR_RNDN);
        mpfr_add(r3277675, r3277671, r3277674, MPFR_RNDN);
        ;
        mpfr_mul(r3277677, r3277673, r3277661, MPFR_RNDN);
        mpfr_mul(r3277678, r3277676, r3277677, MPFR_RNDN);
        mpfr_add(r3277679, r3277675, r3277678, MPFR_RNDN);
        ;
        mpfr_mul(r3277681, r3277677, r3277661, MPFR_RNDN);
        mpfr_mul(r3277682, r3277680, r3277681, MPFR_RNDN);
        mpfr_add(r3277683, r3277679, r3277682, MPFR_RNDN);
        ;
        mpfr_mul(r3277685, r3277681, r3277661, MPFR_RNDN);
        mpfr_mul(r3277686, r3277684, r3277685, MPFR_RNDN);
        mpfr_add(r3277687, r3277683, r3277686, MPFR_RNDN);
        ;
        mpfr_mul(r3277689, r3277685, r3277661, MPFR_RNDN);
        mpfr_mul(r3277690, r3277688, r3277689, MPFR_RNDN);
        mpfr_add(r3277691, r3277687, r3277690, MPFR_RNDN);
        return mpfr_get_d(r3277691, MPFR_RNDN);
}

static mpfr_t r3277692, r3277693, r3277694, r3277695, r3277696, r3277697, r3277698, r3277699, r3277700, r3277701, r3277702, r3277703, r3277704, r3277705, r3277706, r3277707, r3277708, r3277709, r3277710, r3277711, r3277712, r3277713, r3277714, r3277715, r3277716, r3277717, r3277718, r3277719, r3277720, r3277721, r3277722, r3277723, r3277724;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3277692);
        mpfr_init(r3277693);
        mpfr_init(r3277694);
        mpfr_init_set_str(r3277695, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r3277696);
        mpfr_init_set_str(r3277697, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r3277698);
        mpfr_init(r3277699);
        mpfr_init_set_str(r3277700, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r3277701);
        mpfr_init(r3277702);
        mpfr_init_set_str(r3277703, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r3277704);
        mpfr_init_set_str(r3277705, "14.0", 10, MPFR_RNDN);
        mpfr_init(r3277706);
        mpfr_init(r3277707);
        mpfr_init_set_str(r3277708, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3277709);
        mpfr_init(r3277710);
        mpfr_init_set_str(r3277711, "3", 10, MPFR_RNDN);
        mpfr_init(r3277712);
        mpfr_init(r3277713);
        mpfr_init_set_str(r3277714, "0.038889", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277715, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r3277716);
        mpfr_init(r3277717);
        mpfr_init(r3277718);
        mpfr_init_set_str(r3277719, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r3277720);
        mpfr_init(r3277721);
        mpfr_init(r3277722);
        mpfr_init(r3277723);
        mpfr_init(r3277724);
}

double f_fm(double x) {
        mpfr_set_d(r3277692, x, MPFR_RNDN);
        mpfr_mul(r3277693, r3277692, r3277692, MPFR_RNDN);
        mpfr_mul(r3277694, r3277693, r3277693, MPFR_RNDN);
        ;
        mpfr_mul(r3277696, r3277695, r3277692, MPFR_RNDN);
        ;
        mpfr_add(r3277698, r3277696, r3277697, MPFR_RNDN);
        mpfr_mul(r3277699, r3277694, r3277698, MPFR_RNDN);
        ;
        mpfr_mul(r3277701, r3277692, r3277700, MPFR_RNDN);
        mpfr_add(r3277702, r3277699, r3277701, MPFR_RNDN);
        ;
        mpfr_mul(r3277704, r3277703, r3277692, MPFR_RNDN);
        ;
        mpfr_add(r3277706, r3277704, r3277705, MPFR_RNDN);
        mpfr_mul(r3277707, r3277693, r3277706, MPFR_RNDN);
        ;
        mpfr_add(r3277709, r3277707, r3277708, MPFR_RNDN);
        mpfr_add(r3277710, r3277702, r3277709, MPFR_RNDN);
        ;
        mpfr_pow(r3277712, r3277692, r3277711, MPFR_RNDN);
        mpfr_mul(r3277713, r3277712, r3277712, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277716, r3277715, r3277692, MPFR_RNDN);
        mpfr_add(r3277717, r3277714, r3277716, MPFR_RNDN);
        mpfr_mul(r3277718, r3277713, r3277717, MPFR_RNDN);
        ;
        mpfr_mul(r3277720, r3277692, r3277719, MPFR_RNDN);
        mpfr_mul(r3277721, r3277692, r3277720, MPFR_RNDN);
        mpfr_mul(r3277722, r3277713, r3277721, MPFR_RNDN);
        mpfr_add(r3277723, r3277718, r3277722, MPFR_RNDN);
        mpfr_add(r3277724, r3277710, r3277723, MPFR_RNDN);
        return mpfr_get_d(r3277724, MPFR_RNDN);
}

static mpfr_t r3277725, r3277726, r3277727, r3277728, r3277729, r3277730, r3277731, r3277732, r3277733, r3277734, r3277735, r3277736, r3277737, r3277738, r3277739, r3277740, r3277741, r3277742, r3277743, r3277744, r3277745, r3277746, r3277747, r3277748, r3277749, r3277750, r3277751, r3277752, r3277753, r3277754, r3277755, r3277756, r3277757;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3277725);
        mpfr_init(r3277726);
        mpfr_init(r3277727);
        mpfr_init_set_str(r3277728, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r3277729);
        mpfr_init_set_str(r3277730, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r3277731);
        mpfr_init(r3277732);
        mpfr_init_set_str(r3277733, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r3277734);
        mpfr_init(r3277735);
        mpfr_init_set_str(r3277736, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r3277737);
        mpfr_init_set_str(r3277738, "14.0", 10, MPFR_RNDN);
        mpfr_init(r3277739);
        mpfr_init(r3277740);
        mpfr_init_set_str(r3277741, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3277742);
        mpfr_init(r3277743);
        mpfr_init_set_str(r3277744, "3", 10, MPFR_RNDN);
        mpfr_init(r3277745);
        mpfr_init(r3277746);
        mpfr_init_set_str(r3277747, "0.038889", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277748, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r3277749);
        mpfr_init(r3277750);
        mpfr_init(r3277751);
        mpfr_init_set_str(r3277752, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r3277753);
        mpfr_init(r3277754);
        mpfr_init(r3277755);
        mpfr_init(r3277756);
        mpfr_init(r3277757);
}

double f_dm(double x) {
        mpfr_set_d(r3277725, x, MPFR_RNDN);
        mpfr_mul(r3277726, r3277725, r3277725, MPFR_RNDN);
        mpfr_mul(r3277727, r3277726, r3277726, MPFR_RNDN);
        ;
        mpfr_mul(r3277729, r3277728, r3277725, MPFR_RNDN);
        ;
        mpfr_add(r3277731, r3277729, r3277730, MPFR_RNDN);
        mpfr_mul(r3277732, r3277727, r3277731, MPFR_RNDN);
        ;
        mpfr_mul(r3277734, r3277725, r3277733, MPFR_RNDN);
        mpfr_add(r3277735, r3277732, r3277734, MPFR_RNDN);
        ;
        mpfr_mul(r3277737, r3277736, r3277725, MPFR_RNDN);
        ;
        mpfr_add(r3277739, r3277737, r3277738, MPFR_RNDN);
        mpfr_mul(r3277740, r3277726, r3277739, MPFR_RNDN);
        ;
        mpfr_add(r3277742, r3277740, r3277741, MPFR_RNDN);
        mpfr_add(r3277743, r3277735, r3277742, MPFR_RNDN);
        ;
        mpfr_pow(r3277745, r3277725, r3277744, MPFR_RNDN);
        mpfr_mul(r3277746, r3277745, r3277745, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277749, r3277748, r3277725, MPFR_RNDN);
        mpfr_add(r3277750, r3277747, r3277749, MPFR_RNDN);
        mpfr_mul(r3277751, r3277746, r3277750, MPFR_RNDN);
        ;
        mpfr_mul(r3277753, r3277725, r3277752, MPFR_RNDN);
        mpfr_mul(r3277754, r3277725, r3277753, MPFR_RNDN);
        mpfr_mul(r3277755, r3277746, r3277754, MPFR_RNDN);
        mpfr_add(r3277756, r3277751, r3277755, MPFR_RNDN);
        mpfr_add(r3277757, r3277743, r3277756, MPFR_RNDN);
        return mpfr_get_d(r3277757, MPFR_RNDN);
}

