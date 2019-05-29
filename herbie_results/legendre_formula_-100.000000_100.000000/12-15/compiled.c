#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r6180512 = -3.14209;
        float r6180513 = x;
        float r6180514 = r6180512 * r6180513;
        float r6180515 = 124.63623;
        float r6180516 = r6180513 * r6180513;
        float r6180517 = r6180516 * r6180513;
        float r6180518 = r6180515 * r6180517;
        float r6180519 = r6180514 + r6180518;
        float r6180520 = -1420.853027;
        float r6180521 = r6180517 * r6180513;
        float r6180522 = r6180521 * r6180513;
        float r6180523 = r6180520 * r6180522;
        float r6180524 = r6180519 + r6180523;
        float r6180525 = 7104.265137;
        float r6180526 = r6180522 * r6180513;
        float r6180527 = r6180526 * r6180513;
        float r6180528 = r6180525 * r6180527;
        float r6180529 = r6180524 + r6180528;
        float r6180530 = -18155.344238;
        float r6180531 = r6180527 * r6180513;
        float r6180532 = r6180531 * r6180513;
        float r6180533 = r6180530 * r6180532;
        float r6180534 = r6180529 + r6180533;
        float r6180535 = 24757.287598;
        float r6180536 = r6180532 * r6180513;
        float r6180537 = r6180536 * r6180513;
        float r6180538 = r6180535 * r6180537;
        float r6180539 = r6180534 + r6180538;
        float r6180540 = -17139.660645;
        float r6180541 = r6180537 * r6180513;
        float r6180542 = r6180541 * r6180513;
        float r6180543 = r6180540 * r6180542;
        float r6180544 = r6180539 + r6180543;
        float r6180545 = 4733.811035;
        float r6180546 = r6180542 * r6180513;
        float r6180547 = r6180546 * r6180513;
        float r6180548 = r6180545 * r6180547;
        float r6180549 = r6180544 + r6180548;
        return r6180549;
}

double f_id(double x) {
        double r6180550 = -3.14209;
        double r6180551 = x;
        double r6180552 = r6180550 * r6180551;
        double r6180553 = 124.63623;
        double r6180554 = r6180551 * r6180551;
        double r6180555 = r6180554 * r6180551;
        double r6180556 = r6180553 * r6180555;
        double r6180557 = r6180552 + r6180556;
        double r6180558 = -1420.853027;
        double r6180559 = r6180555 * r6180551;
        double r6180560 = r6180559 * r6180551;
        double r6180561 = r6180558 * r6180560;
        double r6180562 = r6180557 + r6180561;
        double r6180563 = 7104.265137;
        double r6180564 = r6180560 * r6180551;
        double r6180565 = r6180564 * r6180551;
        double r6180566 = r6180563 * r6180565;
        double r6180567 = r6180562 + r6180566;
        double r6180568 = -18155.344238;
        double r6180569 = r6180565 * r6180551;
        double r6180570 = r6180569 * r6180551;
        double r6180571 = r6180568 * r6180570;
        double r6180572 = r6180567 + r6180571;
        double r6180573 = 24757.287598;
        double r6180574 = r6180570 * r6180551;
        double r6180575 = r6180574 * r6180551;
        double r6180576 = r6180573 * r6180575;
        double r6180577 = r6180572 + r6180576;
        double r6180578 = -17139.660645;
        double r6180579 = r6180575 * r6180551;
        double r6180580 = r6180579 * r6180551;
        double r6180581 = r6180578 * r6180580;
        double r6180582 = r6180577 + r6180581;
        double r6180583 = 4733.811035;
        double r6180584 = r6180580 * r6180551;
        double r6180585 = r6180584 * r6180551;
        double r6180586 = r6180583 * r6180585;
        double r6180587 = r6180582 + r6180586;
        return r6180587;
}


double f_of(float x) {
        float r6180588 = x;
        float r6180589 = r6180588 * r6180588;
        float r6180590 = -1420.853027;
        float r6180591 = r6180588 * r6180590;
        float r6180592 = r6180591 * r6180589;
        float r6180593 = 124.63623;
        float r6180594 = r6180593 * r6180588;
        float r6180595 = r6180592 + r6180594;
        float r6180596 = r6180589 * r6180595;
        float r6180597 = 7104.265137;
        float r6180598 = r6180597 * r6180588;
        float r6180599 = r6180598 * r6180589;
        float r6180600 = r6180589 * r6180589;
        float r6180601 = r6180599 * r6180600;
        float r6180602 = -3.14209;
        float r6180603 = r6180602 * r6180588;
        float r6180604 = r6180601 + r6180603;
        float r6180605 = r6180596 + r6180604;
        float r6180606 = 3;
        float r6180607 = pow(r6180588, r6180606);
        float r6180608 = r6180607 * r6180589;
        float r6180609 = cbrt(r6180600);
        float r6180610 = r6180609 * r6180609;
        float r6180611 = exp(r6180609);
        float r6180612 = log(r6180611);
        float r6180613 = r6180610 * r6180612;
        float r6180614 = r6180608 * r6180613;
        float r6180615 = 24757.287598;
        float r6180616 = r6180588 * r6180615;
        float r6180617 = r6180588 * r6180616;
        float r6180618 = -18155.344238;
        float r6180619 = r6180617 + r6180618;
        float r6180620 = r6180614 * r6180619;
        float r6180621 = r6180608 * r6180600;
        float r6180622 = r6180621 * r6180600;
        float r6180623 = -17139.660645;
        float r6180624 = 4733.811035;
        float r6180625 = r6180624 * r6180588;
        float r6180626 = r6180588 * r6180625;
        float r6180627 = r6180623 + r6180626;
        float r6180628 = r6180622 * r6180627;
        float r6180629 = r6180620 + r6180628;
        float r6180630 = r6180605 + r6180629;
        return r6180630;
}

double f_od(double x) {
        double r6180631 = x;
        double r6180632 = r6180631 * r6180631;
        double r6180633 = -1420.853027;
        double r6180634 = r6180631 * r6180633;
        double r6180635 = r6180634 * r6180632;
        double r6180636 = 124.63623;
        double r6180637 = r6180636 * r6180631;
        double r6180638 = r6180635 + r6180637;
        double r6180639 = r6180632 * r6180638;
        double r6180640 = 7104.265137;
        double r6180641 = r6180640 * r6180631;
        double r6180642 = r6180641 * r6180632;
        double r6180643 = r6180632 * r6180632;
        double r6180644 = r6180642 * r6180643;
        double r6180645 = -3.14209;
        double r6180646 = r6180645 * r6180631;
        double r6180647 = r6180644 + r6180646;
        double r6180648 = r6180639 + r6180647;
        double r6180649 = 3;
        double r6180650 = pow(r6180631, r6180649);
        double r6180651 = r6180650 * r6180632;
        double r6180652 = cbrt(r6180643);
        double r6180653 = r6180652 * r6180652;
        double r6180654 = exp(r6180652);
        double r6180655 = log(r6180654);
        double r6180656 = r6180653 * r6180655;
        double r6180657 = r6180651 * r6180656;
        double r6180658 = 24757.287598;
        double r6180659 = r6180631 * r6180658;
        double r6180660 = r6180631 * r6180659;
        double r6180661 = -18155.344238;
        double r6180662 = r6180660 + r6180661;
        double r6180663 = r6180657 * r6180662;
        double r6180664 = r6180651 * r6180643;
        double r6180665 = r6180664 * r6180643;
        double r6180666 = -17139.660645;
        double r6180667 = 4733.811035;
        double r6180668 = r6180667 * r6180631;
        double r6180669 = r6180631 * r6180668;
        double r6180670 = r6180666 + r6180669;
        double r6180671 = r6180665 * r6180670;
        double r6180672 = r6180663 + r6180671;
        double r6180673 = r6180648 + r6180672;
        return r6180673;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6180674, r6180675, r6180676, r6180677, r6180678, r6180679, r6180680, r6180681, r6180682, r6180683, r6180684, r6180685, r6180686, r6180687, r6180688, r6180689, r6180690, r6180691, r6180692, r6180693, r6180694, r6180695, r6180696, r6180697, r6180698, r6180699, r6180700, r6180701, r6180702, r6180703, r6180704, r6180705, r6180706, r6180707, r6180708, r6180709, r6180710, r6180711;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6180674, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6180675);
        mpfr_init(r6180676);
        mpfr_init_set_str(r6180677, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6180678);
        mpfr_init(r6180679);
        mpfr_init(r6180680);
        mpfr_init(r6180681);
        mpfr_init_set_str(r6180682, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6180683);
        mpfr_init(r6180684);
        mpfr_init(r6180685);
        mpfr_init(r6180686);
        mpfr_init_set_str(r6180687, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6180688);
        mpfr_init(r6180689);
        mpfr_init(r6180690);
        mpfr_init(r6180691);
        mpfr_init_set_str(r6180692, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r6180693);
        mpfr_init(r6180694);
        mpfr_init(r6180695);
        mpfr_init(r6180696);
        mpfr_init_set_str(r6180697, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6180698);
        mpfr_init(r6180699);
        mpfr_init(r6180700);
        mpfr_init(r6180701);
        mpfr_init_set_str(r6180702, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r6180703);
        mpfr_init(r6180704);
        mpfr_init(r6180705);
        mpfr_init(r6180706);
        mpfr_init_set_str(r6180707, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6180708);
        mpfr_init(r6180709);
        mpfr_init(r6180710);
        mpfr_init(r6180711);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6180675, x, MPFR_RNDN);
        mpfr_mul(r6180676, r6180674, r6180675, MPFR_RNDN);
        ;
        mpfr_mul(r6180678, r6180675, r6180675, MPFR_RNDN);
        mpfr_mul(r6180679, r6180678, r6180675, MPFR_RNDN);
        mpfr_mul(r6180680, r6180677, r6180679, MPFR_RNDN);
        mpfr_add(r6180681, r6180676, r6180680, MPFR_RNDN);
        ;
        mpfr_mul(r6180683, r6180679, r6180675, MPFR_RNDN);
        mpfr_mul(r6180684, r6180683, r6180675, MPFR_RNDN);
        mpfr_mul(r6180685, r6180682, r6180684, MPFR_RNDN);
        mpfr_add(r6180686, r6180681, r6180685, MPFR_RNDN);
        ;
        mpfr_mul(r6180688, r6180684, r6180675, MPFR_RNDN);
        mpfr_mul(r6180689, r6180688, r6180675, MPFR_RNDN);
        mpfr_mul(r6180690, r6180687, r6180689, MPFR_RNDN);
        mpfr_add(r6180691, r6180686, r6180690, MPFR_RNDN);
        ;
        mpfr_mul(r6180693, r6180689, r6180675, MPFR_RNDN);
        mpfr_mul(r6180694, r6180693, r6180675, MPFR_RNDN);
        mpfr_mul(r6180695, r6180692, r6180694, MPFR_RNDN);
        mpfr_add(r6180696, r6180691, r6180695, MPFR_RNDN);
        ;
        mpfr_mul(r6180698, r6180694, r6180675, MPFR_RNDN);
        mpfr_mul(r6180699, r6180698, r6180675, MPFR_RNDN);
        mpfr_mul(r6180700, r6180697, r6180699, MPFR_RNDN);
        mpfr_add(r6180701, r6180696, r6180700, MPFR_RNDN);
        ;
        mpfr_mul(r6180703, r6180699, r6180675, MPFR_RNDN);
        mpfr_mul(r6180704, r6180703, r6180675, MPFR_RNDN);
        mpfr_mul(r6180705, r6180702, r6180704, MPFR_RNDN);
        mpfr_add(r6180706, r6180701, r6180705, MPFR_RNDN);
        ;
        mpfr_mul(r6180708, r6180704, r6180675, MPFR_RNDN);
        mpfr_mul(r6180709, r6180708, r6180675, MPFR_RNDN);
        mpfr_mul(r6180710, r6180707, r6180709, MPFR_RNDN);
        mpfr_add(r6180711, r6180706, r6180710, MPFR_RNDN);
        return mpfr_get_d(r6180711, MPFR_RNDN);
}

static mpfr_t r6180712, r6180713, r6180714, r6180715, r6180716, r6180717, r6180718, r6180719, r6180720, r6180721, r6180722, r6180723, r6180724, r6180725, r6180726, r6180727, r6180728, r6180729, r6180730, r6180731, r6180732, r6180733, r6180734, r6180735, r6180736, r6180737, r6180738, r6180739, r6180740, r6180741, r6180742, r6180743, r6180744, r6180745, r6180746, r6180747, r6180748, r6180749, r6180750, r6180751, r6180752, r6180753, r6180754;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6180712);
        mpfr_init(r6180713);
        mpfr_init_set_str(r6180714, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6180715);
        mpfr_init(r6180716);
        mpfr_init_set_str(r6180717, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6180718);
        mpfr_init(r6180719);
        mpfr_init(r6180720);
        mpfr_init_set_str(r6180721, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6180722);
        mpfr_init(r6180723);
        mpfr_init(r6180724);
        mpfr_init(r6180725);
        mpfr_init_set_str(r6180726, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6180727);
        mpfr_init(r6180728);
        mpfr_init(r6180729);
        mpfr_init_set_str(r6180730, "3", 10, MPFR_RNDN);
        mpfr_init(r6180731);
        mpfr_init(r6180732);
        mpfr_init(r6180733);
        mpfr_init(r6180734);
        mpfr_init(r6180735);
        mpfr_init(r6180736);
        mpfr_init(r6180737);
        mpfr_init(r6180738);
        mpfr_init_set_str(r6180739, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6180740);
        mpfr_init(r6180741);
        mpfr_init_set_str(r6180742, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r6180743);
        mpfr_init(r6180744);
        mpfr_init(r6180745);
        mpfr_init(r6180746);
        mpfr_init_set_str(r6180747, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init_set_str(r6180748, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6180749);
        mpfr_init(r6180750);
        mpfr_init(r6180751);
        mpfr_init(r6180752);
        mpfr_init(r6180753);
        mpfr_init(r6180754);
}

double f_fm(double x) {
        mpfr_set_d(r6180712, x, MPFR_RNDN);
        mpfr_mul(r6180713, r6180712, r6180712, MPFR_RNDN);
        ;
        mpfr_mul(r6180715, r6180712, r6180714, MPFR_RNDN);
        mpfr_mul(r6180716, r6180715, r6180713, MPFR_RNDN);
        ;
        mpfr_mul(r6180718, r6180717, r6180712, MPFR_RNDN);
        mpfr_add(r6180719, r6180716, r6180718, MPFR_RNDN);
        mpfr_mul(r6180720, r6180713, r6180719, MPFR_RNDN);
        ;
        mpfr_mul(r6180722, r6180721, r6180712, MPFR_RNDN);
        mpfr_mul(r6180723, r6180722, r6180713, MPFR_RNDN);
        mpfr_mul(r6180724, r6180713, r6180713, MPFR_RNDN);
        mpfr_mul(r6180725, r6180723, r6180724, MPFR_RNDN);
        ;
        mpfr_mul(r6180727, r6180726, r6180712, MPFR_RNDN);
        mpfr_add(r6180728, r6180725, r6180727, MPFR_RNDN);
        mpfr_add(r6180729, r6180720, r6180728, MPFR_RNDN);
        ;
        mpfr_pow(r6180731, r6180712, r6180730, MPFR_RNDN);
        mpfr_mul(r6180732, r6180731, r6180713, MPFR_RNDN);
        mpfr_cbrt(r6180733, r6180724, MPFR_RNDN);
        mpfr_mul(r6180734, r6180733, r6180733, MPFR_RNDN);
        mpfr_exp(r6180735, r6180733, MPFR_RNDN);
        mpfr_log(r6180736, r6180735, MPFR_RNDN);
        mpfr_mul(r6180737, r6180734, r6180736, MPFR_RNDN);
        mpfr_mul(r6180738, r6180732, r6180737, MPFR_RNDN);
        ;
        mpfr_mul(r6180740, r6180712, r6180739, MPFR_RNDN);
        mpfr_mul(r6180741, r6180712, r6180740, MPFR_RNDN);
        ;
        mpfr_add(r6180743, r6180741, r6180742, MPFR_RNDN);
        mpfr_mul(r6180744, r6180738, r6180743, MPFR_RNDN);
        mpfr_mul(r6180745, r6180732, r6180724, MPFR_RNDN);
        mpfr_mul(r6180746, r6180745, r6180724, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6180749, r6180748, r6180712, MPFR_RNDN);
        mpfr_mul(r6180750, r6180712, r6180749, MPFR_RNDN);
        mpfr_add(r6180751, r6180747, r6180750, MPFR_RNDN);
        mpfr_mul(r6180752, r6180746, r6180751, MPFR_RNDN);
        mpfr_add(r6180753, r6180744, r6180752, MPFR_RNDN);
        mpfr_add(r6180754, r6180729, r6180753, MPFR_RNDN);
        return mpfr_get_d(r6180754, MPFR_RNDN);
}

static mpfr_t r6180755, r6180756, r6180757, r6180758, r6180759, r6180760, r6180761, r6180762, r6180763, r6180764, r6180765, r6180766, r6180767, r6180768, r6180769, r6180770, r6180771, r6180772, r6180773, r6180774, r6180775, r6180776, r6180777, r6180778, r6180779, r6180780, r6180781, r6180782, r6180783, r6180784, r6180785, r6180786, r6180787, r6180788, r6180789, r6180790, r6180791, r6180792, r6180793, r6180794, r6180795, r6180796, r6180797;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6180755);
        mpfr_init(r6180756);
        mpfr_init_set_str(r6180757, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6180758);
        mpfr_init(r6180759);
        mpfr_init_set_str(r6180760, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6180761);
        mpfr_init(r6180762);
        mpfr_init(r6180763);
        mpfr_init_set_str(r6180764, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6180765);
        mpfr_init(r6180766);
        mpfr_init(r6180767);
        mpfr_init(r6180768);
        mpfr_init_set_str(r6180769, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6180770);
        mpfr_init(r6180771);
        mpfr_init(r6180772);
        mpfr_init_set_str(r6180773, "3", 10, MPFR_RNDN);
        mpfr_init(r6180774);
        mpfr_init(r6180775);
        mpfr_init(r6180776);
        mpfr_init(r6180777);
        mpfr_init(r6180778);
        mpfr_init(r6180779);
        mpfr_init(r6180780);
        mpfr_init(r6180781);
        mpfr_init_set_str(r6180782, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6180783);
        mpfr_init(r6180784);
        mpfr_init_set_str(r6180785, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r6180786);
        mpfr_init(r6180787);
        mpfr_init(r6180788);
        mpfr_init(r6180789);
        mpfr_init_set_str(r6180790, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init_set_str(r6180791, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6180792);
        mpfr_init(r6180793);
        mpfr_init(r6180794);
        mpfr_init(r6180795);
        mpfr_init(r6180796);
        mpfr_init(r6180797);
}

double f_dm(double x) {
        mpfr_set_d(r6180755, x, MPFR_RNDN);
        mpfr_mul(r6180756, r6180755, r6180755, MPFR_RNDN);
        ;
        mpfr_mul(r6180758, r6180755, r6180757, MPFR_RNDN);
        mpfr_mul(r6180759, r6180758, r6180756, MPFR_RNDN);
        ;
        mpfr_mul(r6180761, r6180760, r6180755, MPFR_RNDN);
        mpfr_add(r6180762, r6180759, r6180761, MPFR_RNDN);
        mpfr_mul(r6180763, r6180756, r6180762, MPFR_RNDN);
        ;
        mpfr_mul(r6180765, r6180764, r6180755, MPFR_RNDN);
        mpfr_mul(r6180766, r6180765, r6180756, MPFR_RNDN);
        mpfr_mul(r6180767, r6180756, r6180756, MPFR_RNDN);
        mpfr_mul(r6180768, r6180766, r6180767, MPFR_RNDN);
        ;
        mpfr_mul(r6180770, r6180769, r6180755, MPFR_RNDN);
        mpfr_add(r6180771, r6180768, r6180770, MPFR_RNDN);
        mpfr_add(r6180772, r6180763, r6180771, MPFR_RNDN);
        ;
        mpfr_pow(r6180774, r6180755, r6180773, MPFR_RNDN);
        mpfr_mul(r6180775, r6180774, r6180756, MPFR_RNDN);
        mpfr_cbrt(r6180776, r6180767, MPFR_RNDN);
        mpfr_mul(r6180777, r6180776, r6180776, MPFR_RNDN);
        mpfr_exp(r6180778, r6180776, MPFR_RNDN);
        mpfr_log(r6180779, r6180778, MPFR_RNDN);
        mpfr_mul(r6180780, r6180777, r6180779, MPFR_RNDN);
        mpfr_mul(r6180781, r6180775, r6180780, MPFR_RNDN);
        ;
        mpfr_mul(r6180783, r6180755, r6180782, MPFR_RNDN);
        mpfr_mul(r6180784, r6180755, r6180783, MPFR_RNDN);
        ;
        mpfr_add(r6180786, r6180784, r6180785, MPFR_RNDN);
        mpfr_mul(r6180787, r6180781, r6180786, MPFR_RNDN);
        mpfr_mul(r6180788, r6180775, r6180767, MPFR_RNDN);
        mpfr_mul(r6180789, r6180788, r6180767, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6180792, r6180791, r6180755, MPFR_RNDN);
        mpfr_mul(r6180793, r6180755, r6180792, MPFR_RNDN);
        mpfr_add(r6180794, r6180790, r6180793, MPFR_RNDN);
        mpfr_mul(r6180795, r6180789, r6180794, MPFR_RNDN);
        mpfr_add(r6180796, r6180787, r6180795, MPFR_RNDN);
        mpfr_add(r6180797, r6180772, r6180796, MPFR_RNDN);
        return mpfr_get_d(r6180797, MPFR_RNDN);
}
