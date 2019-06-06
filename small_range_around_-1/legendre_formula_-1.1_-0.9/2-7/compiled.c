#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r29570558 = -2.1875;
        float r29570559 = x;
        float r29570560 = r29570558 * r29570559;
        float r29570561 = 19.6875;
        float r29570562 = r29570559 * r29570559;
        float r29570563 = r29570562 * r29570559;
        float r29570564 = r29570561 * r29570563;
        float r29570565 = r29570560 + r29570564;
        float r29570566 = -43.3125;
        float r29570567 = r29570563 * r29570559;
        float r29570568 = r29570567 * r29570559;
        float r29570569 = r29570566 * r29570568;
        float r29570570 = r29570565 + r29570569;
        float r29570571 = 26.8125;
        float r29570572 = r29570568 * r29570559;
        float r29570573 = r29570572 * r29570559;
        float r29570574 = r29570571 * r29570573;
        float r29570575 = r29570570 + r29570574;
        return r29570575;
}

double f_id(double x) {
        double r29570576 = -2.1875;
        double r29570577 = x;
        double r29570578 = r29570576 * r29570577;
        double r29570579 = 19.6875;
        double r29570580 = r29570577 * r29570577;
        double r29570581 = r29570580 * r29570577;
        double r29570582 = r29570579 * r29570581;
        double r29570583 = r29570578 + r29570582;
        double r29570584 = -43.3125;
        double r29570585 = r29570581 * r29570577;
        double r29570586 = r29570585 * r29570577;
        double r29570587 = r29570584 * r29570586;
        double r29570588 = r29570583 + r29570587;
        double r29570589 = 26.8125;
        double r29570590 = r29570586 * r29570577;
        double r29570591 = r29570590 * r29570577;
        double r29570592 = r29570589 * r29570591;
        double r29570593 = r29570588 + r29570592;
        return r29570593;
}


double f_of(float x) {
        float r29570594 = x;
        float r29570595 = 4;
        float r29570596 = pow(r29570594, r29570595);
        float r29570597 = r29570594 * r29570596;
        float r29570598 = -43.3125;
        float r29570599 = 26.8125;
        float r29570600 = r29570594 * r29570599;
        float r29570601 = r29570600 * r29570594;
        float r29570602 = r29570598 + r29570601;
        float r29570603 = r29570597 * r29570602;
        float r29570604 = -2.1875;
        float r29570605 = r29570594 * r29570604;
        float r29570606 = r29570594 * r29570594;
        float r29570607 = 19.6875;
        float r29570608 = r29570607 * r29570594;
        float r29570609 = r29570606 * r29570608;
        float r29570610 = r29570605 + r29570609;
        float r29570611 = r29570603 + r29570610;
        float r29570612 = cbrt(r29570611);
        float r29570613 = 7;
        float r29570614 = pow(r29570594, r29570613);
        float r29570615 = r29570599 * r29570614;
        float r29570616 = exp(r29570615);
        float r29570617 = 3;
        float r29570618 = pow(r29570594, r29570617);
        float r29570619 = r29570607 * r29570618;
        float r29570620 = exp(r29570619);
        float r29570621 = r29570616 * r29570620;
        float r29570622 = 43.3125;
        float r29570623 = 5;
        float r29570624 = pow(r29570594, r29570623);
        float r29570625 = r29570622 * r29570624;
        float r29570626 = 2.1875;
        float r29570627 = r29570626 * r29570594;
        float r29570628 = r29570625 + r29570627;
        float r29570629 = exp(r29570628);
        float r29570630 = r29570621 / r29570629;
        float r29570631 = log(r29570630);
        float r29570632 = cbrt(r29570631);
        float r29570633 = r29570612 * r29570632;
        float r29570634 = r29570608 * r29570594;
        float r29570635 = r29570634 + r29570604;
        float r29570636 = r29570594 * r29570635;
        float r29570637 = r29570599 * r29570594;
        float r29570638 = r29570594 * r29570637;
        float r29570639 = r29570638 + r29570598;
        float r29570640 = r29570597 * r29570639;
        float r29570641 = r29570636 + r29570640;
        float r29570642 = cbrt(r29570641);
        float r29570643 = r29570633 * r29570642;
        return r29570643;
}

double f_od(double x) {
        double r29570644 = x;
        double r29570645 = 4;
        double r29570646 = pow(r29570644, r29570645);
        double r29570647 = r29570644 * r29570646;
        double r29570648 = -43.3125;
        double r29570649 = 26.8125;
        double r29570650 = r29570644 * r29570649;
        double r29570651 = r29570650 * r29570644;
        double r29570652 = r29570648 + r29570651;
        double r29570653 = r29570647 * r29570652;
        double r29570654 = -2.1875;
        double r29570655 = r29570644 * r29570654;
        double r29570656 = r29570644 * r29570644;
        double r29570657 = 19.6875;
        double r29570658 = r29570657 * r29570644;
        double r29570659 = r29570656 * r29570658;
        double r29570660 = r29570655 + r29570659;
        double r29570661 = r29570653 + r29570660;
        double r29570662 = cbrt(r29570661);
        double r29570663 = 7;
        double r29570664 = pow(r29570644, r29570663);
        double r29570665 = r29570649 * r29570664;
        double r29570666 = exp(r29570665);
        double r29570667 = 3;
        double r29570668 = pow(r29570644, r29570667);
        double r29570669 = r29570657 * r29570668;
        double r29570670 = exp(r29570669);
        double r29570671 = r29570666 * r29570670;
        double r29570672 = 43.3125;
        double r29570673 = 5;
        double r29570674 = pow(r29570644, r29570673);
        double r29570675 = r29570672 * r29570674;
        double r29570676 = 2.1875;
        double r29570677 = r29570676 * r29570644;
        double r29570678 = r29570675 + r29570677;
        double r29570679 = exp(r29570678);
        double r29570680 = r29570671 / r29570679;
        double r29570681 = log(r29570680);
        double r29570682 = cbrt(r29570681);
        double r29570683 = r29570662 * r29570682;
        double r29570684 = r29570658 * r29570644;
        double r29570685 = r29570684 + r29570654;
        double r29570686 = r29570644 * r29570685;
        double r29570687 = r29570649 * r29570644;
        double r29570688 = r29570644 * r29570687;
        double r29570689 = r29570688 + r29570648;
        double r29570690 = r29570647 * r29570689;
        double r29570691 = r29570686 + r29570690;
        double r29570692 = cbrt(r29570691);
        double r29570693 = r29570683 * r29570692;
        return r29570693;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29570694, r29570695, r29570696, r29570697, r29570698, r29570699, r29570700, r29570701, r29570702, r29570703, r29570704, r29570705, r29570706, r29570707, r29570708, r29570709, r29570710, r29570711;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29570694, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r29570695);
        mpfr_init(r29570696);
        mpfr_init_set_str(r29570697, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r29570698);
        mpfr_init(r29570699);
        mpfr_init(r29570700);
        mpfr_init(r29570701);
        mpfr_init_set_str(r29570702, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r29570703);
        mpfr_init(r29570704);
        mpfr_init(r29570705);
        mpfr_init(r29570706);
        mpfr_init_set_str(r29570707, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r29570708);
        mpfr_init(r29570709);
        mpfr_init(r29570710);
        mpfr_init(r29570711);
}

double f_im(double x) {
        ;
        mpfr_set_d(r29570695, x, MPFR_RNDN);
        mpfr_mul(r29570696, r29570694, r29570695, MPFR_RNDN);
        ;
        mpfr_mul(r29570698, r29570695, r29570695, MPFR_RNDN);
        mpfr_mul(r29570699, r29570698, r29570695, MPFR_RNDN);
        mpfr_mul(r29570700, r29570697, r29570699, MPFR_RNDN);
        mpfr_add(r29570701, r29570696, r29570700, MPFR_RNDN);
        ;
        mpfr_mul(r29570703, r29570699, r29570695, MPFR_RNDN);
        mpfr_mul(r29570704, r29570703, r29570695, MPFR_RNDN);
        mpfr_mul(r29570705, r29570702, r29570704, MPFR_RNDN);
        mpfr_add(r29570706, r29570701, r29570705, MPFR_RNDN);
        ;
        mpfr_mul(r29570708, r29570704, r29570695, MPFR_RNDN);
        mpfr_mul(r29570709, r29570708, r29570695, MPFR_RNDN);
        mpfr_mul(r29570710, r29570707, r29570709, MPFR_RNDN);
        mpfr_add(r29570711, r29570706, r29570710, MPFR_RNDN);
        return mpfr_get_d(r29570711, MPFR_RNDN);
}

static mpfr_t r29570712, r29570713, r29570714, r29570715, r29570716, r29570717, r29570718, r29570719, r29570720, r29570721, r29570722, r29570723, r29570724, r29570725, r29570726, r29570727, r29570728, r29570729, r29570730, r29570731, r29570732, r29570733, r29570734, r29570735, r29570736, r29570737, r29570738, r29570739, r29570740, r29570741, r29570742, r29570743, r29570744, r29570745, r29570746, r29570747, r29570748, r29570749, r29570750, r29570751, r29570752, r29570753, r29570754, r29570755, r29570756, r29570757, r29570758, r29570759, r29570760, r29570761;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29570712);
        mpfr_init_set_str(r29570713, "4", 10, MPFR_RNDN);
        mpfr_init(r29570714);
        mpfr_init(r29570715);
        mpfr_init_set_str(r29570716, "-43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r29570717, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r29570718);
        mpfr_init(r29570719);
        mpfr_init(r29570720);
        mpfr_init(r29570721);
        mpfr_init_set_str(r29570722, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r29570723);
        mpfr_init(r29570724);
        mpfr_init_set_str(r29570725, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r29570726);
        mpfr_init(r29570727);
        mpfr_init(r29570728);
        mpfr_init(r29570729);
        mpfr_init(r29570730);
        mpfr_init_set_str(r29570731, "7", 10, MPFR_RNDN);
        mpfr_init(r29570732);
        mpfr_init(r29570733);
        mpfr_init(r29570734);
        mpfr_init_set_str(r29570735, "3", 10, MPFR_RNDN);
        mpfr_init(r29570736);
        mpfr_init(r29570737);
        mpfr_init(r29570738);
        mpfr_init(r29570739);
        mpfr_init_set_str(r29570740, "43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r29570741, "5", 10, MPFR_RNDN);
        mpfr_init(r29570742);
        mpfr_init(r29570743);
        mpfr_init_set_str(r29570744, "2.1875", 10, MPFR_RNDN);
        mpfr_init(r29570745);
        mpfr_init(r29570746);
        mpfr_init(r29570747);
        mpfr_init(r29570748);
        mpfr_init(r29570749);
        mpfr_init(r29570750);
        mpfr_init(r29570751);
        mpfr_init(r29570752);
        mpfr_init(r29570753);
        mpfr_init(r29570754);
        mpfr_init(r29570755);
        mpfr_init(r29570756);
        mpfr_init(r29570757);
        mpfr_init(r29570758);
        mpfr_init(r29570759);
        mpfr_init(r29570760);
        mpfr_init(r29570761);
}

double f_fm(double x) {
        mpfr_set_d(r29570712, x, MPFR_RNDN);
        ;
        mpfr_pow(r29570714, r29570712, r29570713, MPFR_RNDN);
        mpfr_mul(r29570715, r29570712, r29570714, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r29570718, r29570712, r29570717, MPFR_RNDN);
        mpfr_mul(r29570719, r29570718, r29570712, MPFR_RNDN);
        mpfr_add(r29570720, r29570716, r29570719, MPFR_RNDN);
        mpfr_mul(r29570721, r29570715, r29570720, MPFR_RNDN);
        ;
        mpfr_mul(r29570723, r29570712, r29570722, MPFR_RNDN);
        mpfr_mul(r29570724, r29570712, r29570712, MPFR_RNDN);
        ;
        mpfr_mul(r29570726, r29570725, r29570712, MPFR_RNDN);
        mpfr_mul(r29570727, r29570724, r29570726, MPFR_RNDN);
        mpfr_add(r29570728, r29570723, r29570727, MPFR_RNDN);
        mpfr_add(r29570729, r29570721, r29570728, MPFR_RNDN);
        mpfr_cbrt(r29570730, r29570729, MPFR_RNDN);
        ;
        mpfr_pow(r29570732, r29570712, r29570731, MPFR_RNDN);
        mpfr_mul(r29570733, r29570717, r29570732, MPFR_RNDN);
        mpfr_exp(r29570734, r29570733, MPFR_RNDN);
        ;
        mpfr_pow(r29570736, r29570712, r29570735, MPFR_RNDN);
        mpfr_mul(r29570737, r29570725, r29570736, MPFR_RNDN);
        mpfr_exp(r29570738, r29570737, MPFR_RNDN);
        mpfr_mul(r29570739, r29570734, r29570738, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r29570742, r29570712, r29570741, MPFR_RNDN);
        mpfr_mul(r29570743, r29570740, r29570742, MPFR_RNDN);
        ;
        mpfr_mul(r29570745, r29570744, r29570712, MPFR_RNDN);
        mpfr_add(r29570746, r29570743, r29570745, MPFR_RNDN);
        mpfr_exp(r29570747, r29570746, MPFR_RNDN);
        mpfr_div(r29570748, r29570739, r29570747, MPFR_RNDN);
        mpfr_log(r29570749, r29570748, MPFR_RNDN);
        mpfr_cbrt(r29570750, r29570749, MPFR_RNDN);
        mpfr_mul(r29570751, r29570730, r29570750, MPFR_RNDN);
        mpfr_mul(r29570752, r29570726, r29570712, MPFR_RNDN);
        mpfr_add(r29570753, r29570752, r29570722, MPFR_RNDN);
        mpfr_mul(r29570754, r29570712, r29570753, MPFR_RNDN);
        mpfr_mul(r29570755, r29570717, r29570712, MPFR_RNDN);
        mpfr_mul(r29570756, r29570712, r29570755, MPFR_RNDN);
        mpfr_add(r29570757, r29570756, r29570716, MPFR_RNDN);
        mpfr_mul(r29570758, r29570715, r29570757, MPFR_RNDN);
        mpfr_add(r29570759, r29570754, r29570758, MPFR_RNDN);
        mpfr_cbrt(r29570760, r29570759, MPFR_RNDN);
        mpfr_mul(r29570761, r29570751, r29570760, MPFR_RNDN);
        return mpfr_get_d(r29570761, MPFR_RNDN);
}

static mpfr_t r29570762, r29570763, r29570764, r29570765, r29570766, r29570767, r29570768, r29570769, r29570770, r29570771, r29570772, r29570773, r29570774, r29570775, r29570776, r29570777, r29570778, r29570779, r29570780, r29570781, r29570782, r29570783, r29570784, r29570785, r29570786, r29570787, r29570788, r29570789, r29570790, r29570791, r29570792, r29570793, r29570794, r29570795, r29570796, r29570797, r29570798, r29570799, r29570800, r29570801, r29570802, r29570803, r29570804, r29570805, r29570806, r29570807, r29570808, r29570809, r29570810, r29570811;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29570762);
        mpfr_init_set_str(r29570763, "4", 10, MPFR_RNDN);
        mpfr_init(r29570764);
        mpfr_init(r29570765);
        mpfr_init_set_str(r29570766, "-43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r29570767, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r29570768);
        mpfr_init(r29570769);
        mpfr_init(r29570770);
        mpfr_init(r29570771);
        mpfr_init_set_str(r29570772, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r29570773);
        mpfr_init(r29570774);
        mpfr_init_set_str(r29570775, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r29570776);
        mpfr_init(r29570777);
        mpfr_init(r29570778);
        mpfr_init(r29570779);
        mpfr_init(r29570780);
        mpfr_init_set_str(r29570781, "7", 10, MPFR_RNDN);
        mpfr_init(r29570782);
        mpfr_init(r29570783);
        mpfr_init(r29570784);
        mpfr_init_set_str(r29570785, "3", 10, MPFR_RNDN);
        mpfr_init(r29570786);
        mpfr_init(r29570787);
        mpfr_init(r29570788);
        mpfr_init(r29570789);
        mpfr_init_set_str(r29570790, "43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r29570791, "5", 10, MPFR_RNDN);
        mpfr_init(r29570792);
        mpfr_init(r29570793);
        mpfr_init_set_str(r29570794, "2.1875", 10, MPFR_RNDN);
        mpfr_init(r29570795);
        mpfr_init(r29570796);
        mpfr_init(r29570797);
        mpfr_init(r29570798);
        mpfr_init(r29570799);
        mpfr_init(r29570800);
        mpfr_init(r29570801);
        mpfr_init(r29570802);
        mpfr_init(r29570803);
        mpfr_init(r29570804);
        mpfr_init(r29570805);
        mpfr_init(r29570806);
        mpfr_init(r29570807);
        mpfr_init(r29570808);
        mpfr_init(r29570809);
        mpfr_init(r29570810);
        mpfr_init(r29570811);
}

double f_dm(double x) {
        mpfr_set_d(r29570762, x, MPFR_RNDN);
        ;
        mpfr_pow(r29570764, r29570762, r29570763, MPFR_RNDN);
        mpfr_mul(r29570765, r29570762, r29570764, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r29570768, r29570762, r29570767, MPFR_RNDN);
        mpfr_mul(r29570769, r29570768, r29570762, MPFR_RNDN);
        mpfr_add(r29570770, r29570766, r29570769, MPFR_RNDN);
        mpfr_mul(r29570771, r29570765, r29570770, MPFR_RNDN);
        ;
        mpfr_mul(r29570773, r29570762, r29570772, MPFR_RNDN);
        mpfr_mul(r29570774, r29570762, r29570762, MPFR_RNDN);
        ;
        mpfr_mul(r29570776, r29570775, r29570762, MPFR_RNDN);
        mpfr_mul(r29570777, r29570774, r29570776, MPFR_RNDN);
        mpfr_add(r29570778, r29570773, r29570777, MPFR_RNDN);
        mpfr_add(r29570779, r29570771, r29570778, MPFR_RNDN);
        mpfr_cbrt(r29570780, r29570779, MPFR_RNDN);
        ;
        mpfr_pow(r29570782, r29570762, r29570781, MPFR_RNDN);
        mpfr_mul(r29570783, r29570767, r29570782, MPFR_RNDN);
        mpfr_exp(r29570784, r29570783, MPFR_RNDN);
        ;
        mpfr_pow(r29570786, r29570762, r29570785, MPFR_RNDN);
        mpfr_mul(r29570787, r29570775, r29570786, MPFR_RNDN);
        mpfr_exp(r29570788, r29570787, MPFR_RNDN);
        mpfr_mul(r29570789, r29570784, r29570788, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r29570792, r29570762, r29570791, MPFR_RNDN);
        mpfr_mul(r29570793, r29570790, r29570792, MPFR_RNDN);
        ;
        mpfr_mul(r29570795, r29570794, r29570762, MPFR_RNDN);
        mpfr_add(r29570796, r29570793, r29570795, MPFR_RNDN);
        mpfr_exp(r29570797, r29570796, MPFR_RNDN);
        mpfr_div(r29570798, r29570789, r29570797, MPFR_RNDN);
        mpfr_log(r29570799, r29570798, MPFR_RNDN);
        mpfr_cbrt(r29570800, r29570799, MPFR_RNDN);
        mpfr_mul(r29570801, r29570780, r29570800, MPFR_RNDN);
        mpfr_mul(r29570802, r29570776, r29570762, MPFR_RNDN);
        mpfr_add(r29570803, r29570802, r29570772, MPFR_RNDN);
        mpfr_mul(r29570804, r29570762, r29570803, MPFR_RNDN);
        mpfr_mul(r29570805, r29570767, r29570762, MPFR_RNDN);
        mpfr_mul(r29570806, r29570762, r29570805, MPFR_RNDN);
        mpfr_add(r29570807, r29570806, r29570766, MPFR_RNDN);
        mpfr_mul(r29570808, r29570765, r29570807, MPFR_RNDN);
        mpfr_add(r29570809, r29570804, r29570808, MPFR_RNDN);
        mpfr_cbrt(r29570810, r29570809, MPFR_RNDN);
        mpfr_mul(r29570811, r29570801, r29570810, MPFR_RNDN);
        return mpfr_get_d(r29570811, MPFR_RNDN);
}

