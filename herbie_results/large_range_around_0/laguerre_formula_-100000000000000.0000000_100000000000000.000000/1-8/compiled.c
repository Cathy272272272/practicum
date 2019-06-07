#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r8829542 = 1.0;
        float r8829543 = -8.0;
        float r8829544 = x;
        float r8829545 = r8829543 * r8829544;
        float r8829546 = r8829542 + r8829545;
        float r8829547 = 14.0;
        float r8829548 = r8829544 * r8829544;
        float r8829549 = r8829547 * r8829548;
        float r8829550 = r8829546 + r8829549;
        float r8829551 = -9.333333;
        float r8829552 = r8829548 * r8829544;
        float r8829553 = r8829551 * r8829552;
        float r8829554 = r8829550 + r8829553;
        float r8829555 = 2.916667;
        float r8829556 = r8829552 * r8829544;
        float r8829557 = r8829555 * r8829556;
        float r8829558 = r8829554 + r8829557;
        float r8829559 = -0.466667;
        float r8829560 = r8829556 * r8829544;
        float r8829561 = r8829559 * r8829560;
        float r8829562 = r8829558 + r8829561;
        float r8829563 = 0.038889;
        float r8829564 = r8829560 * r8829544;
        float r8829565 = r8829563 * r8829564;
        float r8829566 = r8829562 + r8829565;
        float r8829567 = -0.001587;
        float r8829568 = r8829564 * r8829544;
        float r8829569 = r8829567 * r8829568;
        float r8829570 = r8829566 + r8829569;
        float r8829571 = 2.5e-05;
        float r8829572 = r8829568 * r8829544;
        float r8829573 = r8829571 * r8829572;
        float r8829574 = r8829570 + r8829573;
        return r8829574;
}

double f_id(double x) {
        double r8829575 = 1.0;
        double r8829576 = -8.0;
        double r8829577 = x;
        double r8829578 = r8829576 * r8829577;
        double r8829579 = r8829575 + r8829578;
        double r8829580 = 14.0;
        double r8829581 = r8829577 * r8829577;
        double r8829582 = r8829580 * r8829581;
        double r8829583 = r8829579 + r8829582;
        double r8829584 = -9.333333;
        double r8829585 = r8829581 * r8829577;
        double r8829586 = r8829584 * r8829585;
        double r8829587 = r8829583 + r8829586;
        double r8829588 = 2.916667;
        double r8829589 = r8829585 * r8829577;
        double r8829590 = r8829588 * r8829589;
        double r8829591 = r8829587 + r8829590;
        double r8829592 = -0.466667;
        double r8829593 = r8829589 * r8829577;
        double r8829594 = r8829592 * r8829593;
        double r8829595 = r8829591 + r8829594;
        double r8829596 = 0.038889;
        double r8829597 = r8829593 * r8829577;
        double r8829598 = r8829596 * r8829597;
        double r8829599 = r8829595 + r8829598;
        double r8829600 = -0.001587;
        double r8829601 = r8829597 * r8829577;
        double r8829602 = r8829600 * r8829601;
        double r8829603 = r8829599 + r8829602;
        double r8829604 = 2.5e-05;
        double r8829605 = r8829601 * r8829577;
        double r8829606 = r8829604 * r8829605;
        double r8829607 = r8829603 + r8829606;
        return r8829607;
}


double f_of(float x) {
        float r8829608 = x;
        float r8829609 = 2;
        float r8829610 = 3;
        float r8829611 = r8829609 * r8829610;
        float r8829612 = pow(r8829608, r8829611);
        float r8829613 = 2.5e-05;
        float r8829614 = r8829608 * r8829608;
        float r8829615 = r8829613 * r8829614;
        float r8829616 = r8829612 * r8829615;
        float r8829617 = pow(r8829614, r8829610);
        float r8829618 = -0.001587;
        float r8829619 = r8829618 * r8829608;
        float r8829620 = 0.038889;
        float r8829621 = r8829619 + r8829620;
        float r8829622 = r8829617 * r8829621;
        float r8829623 = r8829616 + r8829622;
        float r8829624 = -9.333333;
        float r8829625 = r8829624 * r8829608;
        float r8829626 = 14.0;
        float r8829627 = r8829625 + r8829626;
        float r8829628 = r8829614 * r8829627;
        float r8829629 = r8829614 * r8829614;
        float r8829630 = 2.916667;
        float r8829631 = -0.466667;
        float r8829632 = r8829631 * r8829608;
        float r8829633 = r8829630 + r8829632;
        float r8829634 = r8829629 * r8829633;
        float r8829635 = r8829628 + r8829634;
        float r8829636 = -8.0;
        float r8829637 = r8829608 * r8829636;
        float r8829638 = 1.0;
        float r8829639 = r8829637 + r8829638;
        float r8829640 = r8829635 + r8829639;
        float r8829641 = r8829623 + r8829640;
        return r8829641;
}

double f_od(double x) {
        double r8829642 = x;
        double r8829643 = 2;
        double r8829644 = 3;
        double r8829645 = r8829643 * r8829644;
        double r8829646 = pow(r8829642, r8829645);
        double r8829647 = 2.5e-05;
        double r8829648 = r8829642 * r8829642;
        double r8829649 = r8829647 * r8829648;
        double r8829650 = r8829646 * r8829649;
        double r8829651 = pow(r8829648, r8829644);
        double r8829652 = -0.001587;
        double r8829653 = r8829652 * r8829642;
        double r8829654 = 0.038889;
        double r8829655 = r8829653 + r8829654;
        double r8829656 = r8829651 * r8829655;
        double r8829657 = r8829650 + r8829656;
        double r8829658 = -9.333333;
        double r8829659 = r8829658 * r8829642;
        double r8829660 = 14.0;
        double r8829661 = r8829659 + r8829660;
        double r8829662 = r8829648 * r8829661;
        double r8829663 = r8829648 * r8829648;
        double r8829664 = 2.916667;
        double r8829665 = -0.466667;
        double r8829666 = r8829665 * r8829642;
        double r8829667 = r8829664 + r8829666;
        double r8829668 = r8829663 * r8829667;
        double r8829669 = r8829662 + r8829668;
        double r8829670 = -8.0;
        double r8829671 = r8829642 * r8829670;
        double r8829672 = 1.0;
        double r8829673 = r8829671 + r8829672;
        double r8829674 = r8829669 + r8829673;
        double r8829675 = r8829657 + r8829674;
        return r8829675;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8829676, r8829677, r8829678, r8829679, r8829680, r8829681, r8829682, r8829683, r8829684, r8829685, r8829686, r8829687, r8829688, r8829689, r8829690, r8829691, r8829692, r8829693, r8829694, r8829695, r8829696, r8829697, r8829698, r8829699, r8829700, r8829701, r8829702, r8829703, r8829704, r8829705, r8829706, r8829707, r8829708;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8829676, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829677, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r8829678);
        mpfr_init(r8829679);
        mpfr_init(r8829680);
        mpfr_init_set_str(r8829681, "14.0", 10, MPFR_RNDN);
        mpfr_init(r8829682);
        mpfr_init(r8829683);
        mpfr_init(r8829684);
        mpfr_init_set_str(r8829685, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r8829686);
        mpfr_init(r8829687);
        mpfr_init(r8829688);
        mpfr_init_set_str(r8829689, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r8829690);
        mpfr_init(r8829691);
        mpfr_init(r8829692);
        mpfr_init_set_str(r8829693, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r8829694);
        mpfr_init(r8829695);
        mpfr_init(r8829696);
        mpfr_init_set_str(r8829697, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r8829698);
        mpfr_init(r8829699);
        mpfr_init(r8829700);
        mpfr_init_set_str(r8829701, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r8829702);
        mpfr_init(r8829703);
        mpfr_init(r8829704);
        mpfr_init_set_str(r8829705, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r8829706);
        mpfr_init(r8829707);
        mpfr_init(r8829708);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8829678, x, MPFR_RNDN);
        mpfr_mul(r8829679, r8829677, r8829678, MPFR_RNDN);
        mpfr_add(r8829680, r8829676, r8829679, MPFR_RNDN);
        ;
        mpfr_mul(r8829682, r8829678, r8829678, MPFR_RNDN);
        mpfr_mul(r8829683, r8829681, r8829682, MPFR_RNDN);
        mpfr_add(r8829684, r8829680, r8829683, MPFR_RNDN);
        ;
        mpfr_mul(r8829686, r8829682, r8829678, MPFR_RNDN);
        mpfr_mul(r8829687, r8829685, r8829686, MPFR_RNDN);
        mpfr_add(r8829688, r8829684, r8829687, MPFR_RNDN);
        ;
        mpfr_mul(r8829690, r8829686, r8829678, MPFR_RNDN);
        mpfr_mul(r8829691, r8829689, r8829690, MPFR_RNDN);
        mpfr_add(r8829692, r8829688, r8829691, MPFR_RNDN);
        ;
        mpfr_mul(r8829694, r8829690, r8829678, MPFR_RNDN);
        mpfr_mul(r8829695, r8829693, r8829694, MPFR_RNDN);
        mpfr_add(r8829696, r8829692, r8829695, MPFR_RNDN);
        ;
        mpfr_mul(r8829698, r8829694, r8829678, MPFR_RNDN);
        mpfr_mul(r8829699, r8829697, r8829698, MPFR_RNDN);
        mpfr_add(r8829700, r8829696, r8829699, MPFR_RNDN);
        ;
        mpfr_mul(r8829702, r8829698, r8829678, MPFR_RNDN);
        mpfr_mul(r8829703, r8829701, r8829702, MPFR_RNDN);
        mpfr_add(r8829704, r8829700, r8829703, MPFR_RNDN);
        ;
        mpfr_mul(r8829706, r8829702, r8829678, MPFR_RNDN);
        mpfr_mul(r8829707, r8829705, r8829706, MPFR_RNDN);
        mpfr_add(r8829708, r8829704, r8829707, MPFR_RNDN);
        return mpfr_get_d(r8829708, MPFR_RNDN);
}

static mpfr_t r8829709, r8829710, r8829711, r8829712, r8829713, r8829714, r8829715, r8829716, r8829717, r8829718, r8829719, r8829720, r8829721, r8829722, r8829723, r8829724, r8829725, r8829726, r8829727, r8829728, r8829729, r8829730, r8829731, r8829732, r8829733, r8829734, r8829735, r8829736, r8829737, r8829738, r8829739, r8829740, r8829741, r8829742;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8829709);
        mpfr_init_set_str(r8829710, "2", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829711, "3", 10, MPFR_RNDN);
        mpfr_init(r8829712);
        mpfr_init(r8829713);
        mpfr_init_set_str(r8829714, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r8829715);
        mpfr_init(r8829716);
        mpfr_init(r8829717);
        mpfr_init(r8829718);
        mpfr_init_set_str(r8829719, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r8829720);
        mpfr_init_set_str(r8829721, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r8829722);
        mpfr_init(r8829723);
        mpfr_init(r8829724);
        mpfr_init_set_str(r8829725, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r8829726);
        mpfr_init_set_str(r8829727, "14.0", 10, MPFR_RNDN);
        mpfr_init(r8829728);
        mpfr_init(r8829729);
        mpfr_init(r8829730);
        mpfr_init_set_str(r8829731, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829732, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r8829733);
        mpfr_init(r8829734);
        mpfr_init(r8829735);
        mpfr_init(r8829736);
        mpfr_init_set_str(r8829737, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r8829738);
        mpfr_init_set_str(r8829739, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8829740);
        mpfr_init(r8829741);
        mpfr_init(r8829742);
}

double f_fm(double x) {
        mpfr_set_d(r8829709, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8829712, r8829710, r8829711, MPFR_RNDN);
        mpfr_pow(r8829713, r8829709, r8829712, MPFR_RNDN);
        ;
        mpfr_mul(r8829715, r8829709, r8829709, MPFR_RNDN);
        mpfr_mul(r8829716, r8829714, r8829715, MPFR_RNDN);
        mpfr_mul(r8829717, r8829713, r8829716, MPFR_RNDN);
        mpfr_pow(r8829718, r8829715, r8829711, MPFR_RNDN);
        ;
        mpfr_mul(r8829720, r8829719, r8829709, MPFR_RNDN);
        ;
        mpfr_add(r8829722, r8829720, r8829721, MPFR_RNDN);
        mpfr_mul(r8829723, r8829718, r8829722, MPFR_RNDN);
        mpfr_add(r8829724, r8829717, r8829723, MPFR_RNDN);
        ;
        mpfr_mul(r8829726, r8829725, r8829709, MPFR_RNDN);
        ;
        mpfr_add(r8829728, r8829726, r8829727, MPFR_RNDN);
        mpfr_mul(r8829729, r8829715, r8829728, MPFR_RNDN);
        mpfr_mul(r8829730, r8829715, r8829715, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8829733, r8829732, r8829709, MPFR_RNDN);
        mpfr_add(r8829734, r8829731, r8829733, MPFR_RNDN);
        mpfr_mul(r8829735, r8829730, r8829734, MPFR_RNDN);
        mpfr_add(r8829736, r8829729, r8829735, MPFR_RNDN);
        ;
        mpfr_mul(r8829738, r8829709, r8829737, MPFR_RNDN);
        ;
        mpfr_add(r8829740, r8829738, r8829739, MPFR_RNDN);
        mpfr_add(r8829741, r8829736, r8829740, MPFR_RNDN);
        mpfr_add(r8829742, r8829724, r8829741, MPFR_RNDN);
        return mpfr_get_d(r8829742, MPFR_RNDN);
}

static mpfr_t r8829743, r8829744, r8829745, r8829746, r8829747, r8829748, r8829749, r8829750, r8829751, r8829752, r8829753, r8829754, r8829755, r8829756, r8829757, r8829758, r8829759, r8829760, r8829761, r8829762, r8829763, r8829764, r8829765, r8829766, r8829767, r8829768, r8829769, r8829770, r8829771, r8829772, r8829773, r8829774, r8829775, r8829776;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8829743);
        mpfr_init_set_str(r8829744, "2", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829745, "3", 10, MPFR_RNDN);
        mpfr_init(r8829746);
        mpfr_init(r8829747);
        mpfr_init_set_str(r8829748, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r8829749);
        mpfr_init(r8829750);
        mpfr_init(r8829751);
        mpfr_init(r8829752);
        mpfr_init_set_str(r8829753, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r8829754);
        mpfr_init_set_str(r8829755, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r8829756);
        mpfr_init(r8829757);
        mpfr_init(r8829758);
        mpfr_init_set_str(r8829759, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r8829760);
        mpfr_init_set_str(r8829761, "14.0", 10, MPFR_RNDN);
        mpfr_init(r8829762);
        mpfr_init(r8829763);
        mpfr_init(r8829764);
        mpfr_init_set_str(r8829765, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829766, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r8829767);
        mpfr_init(r8829768);
        mpfr_init(r8829769);
        mpfr_init(r8829770);
        mpfr_init_set_str(r8829771, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r8829772);
        mpfr_init_set_str(r8829773, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8829774);
        mpfr_init(r8829775);
        mpfr_init(r8829776);
}

double f_dm(double x) {
        mpfr_set_d(r8829743, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8829746, r8829744, r8829745, MPFR_RNDN);
        mpfr_pow(r8829747, r8829743, r8829746, MPFR_RNDN);
        ;
        mpfr_mul(r8829749, r8829743, r8829743, MPFR_RNDN);
        mpfr_mul(r8829750, r8829748, r8829749, MPFR_RNDN);
        mpfr_mul(r8829751, r8829747, r8829750, MPFR_RNDN);
        mpfr_pow(r8829752, r8829749, r8829745, MPFR_RNDN);
        ;
        mpfr_mul(r8829754, r8829753, r8829743, MPFR_RNDN);
        ;
        mpfr_add(r8829756, r8829754, r8829755, MPFR_RNDN);
        mpfr_mul(r8829757, r8829752, r8829756, MPFR_RNDN);
        mpfr_add(r8829758, r8829751, r8829757, MPFR_RNDN);
        ;
        mpfr_mul(r8829760, r8829759, r8829743, MPFR_RNDN);
        ;
        mpfr_add(r8829762, r8829760, r8829761, MPFR_RNDN);
        mpfr_mul(r8829763, r8829749, r8829762, MPFR_RNDN);
        mpfr_mul(r8829764, r8829749, r8829749, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8829767, r8829766, r8829743, MPFR_RNDN);
        mpfr_add(r8829768, r8829765, r8829767, MPFR_RNDN);
        mpfr_mul(r8829769, r8829764, r8829768, MPFR_RNDN);
        mpfr_add(r8829770, r8829763, r8829769, MPFR_RNDN);
        ;
        mpfr_mul(r8829772, r8829743, r8829771, MPFR_RNDN);
        ;
        mpfr_add(r8829774, r8829772, r8829773, MPFR_RNDN);
        mpfr_add(r8829775, r8829770, r8829774, MPFR_RNDN);
        mpfr_add(r8829776, r8829758, r8829775, MPFR_RNDN);
        return mpfr_get_d(r8829776, MPFR_RNDN);
}

