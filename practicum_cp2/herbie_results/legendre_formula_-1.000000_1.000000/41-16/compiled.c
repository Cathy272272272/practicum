#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r10047562 = 0.196381;
        float r10047563 = -26.707764;
        float r10047564 = x;
        float r10047565 = r10047564 * r10047564;
        float r10047566 = r10047563 * r10047565;
        float r10047567 = r10047562 + r10047566;
        float r10047568 = 592.022095;
        float r10047569 = r10047565 * r10047564;
        float r10047570 = r10047569 * r10047564;
        float r10047571 = r10047568 * r10047570;
        float r10047572 = r10047567 + r10047571;
        float r10047573 = -4972.985596;
        float r10047574 = r10047570 * r10047564;
        float r10047575 = r10047574 * r10047564;
        float r10047576 = r10047573 * r10047575;
        float r10047577 = r10047572 + r10047576;
        float r10047578 = 20424.762268;
        float r10047579 = r10047575 * r10047564;
        float r10047580 = r10047579 * r10047564;
        float r10047581 = r10047578 * r10047580;
        float r10047582 = r10047577 + r10047581;
        float r10047583 = -45388.360596;
        float r10047584 = r10047580 * r10047564;
        float r10047585 = r10047584 * r10047564;
        float r10047586 = r10047583 * r10047585;
        float r10047587 = r10047582 + r10047586;
        float r10047588 = 55703.897095;
        float r10047589 = r10047585 * r10047564;
        float r10047590 = r10047589 * r10047564;
        float r10047591 = r10047588 * r10047590;
        float r10047592 = r10047587 + r10047591;
        float r10047593 = -35503.582764;
        float r10047594 = r10047590 * r10047564;
        float r10047595 = r10047594 * r10047564;
        float r10047596 = r10047593 * r10047595;
        float r10047597 = r10047592 + r10047596;
        float r10047598 = 9171.758881;
        float r10047599 = r10047595 * r10047564;
        float r10047600 = r10047599 * r10047564;
        float r10047601 = r10047598 * r10047600;
        float r10047602 = r10047597 + r10047601;
        return r10047602;
}

double f_id(double x) {
        double r10047603 = 0.196381;
        double r10047604 = -26.707764;
        double r10047605 = x;
        double r10047606 = r10047605 * r10047605;
        double r10047607 = r10047604 * r10047606;
        double r10047608 = r10047603 + r10047607;
        double r10047609 = 592.022095;
        double r10047610 = r10047606 * r10047605;
        double r10047611 = r10047610 * r10047605;
        double r10047612 = r10047609 * r10047611;
        double r10047613 = r10047608 + r10047612;
        double r10047614 = -4972.985596;
        double r10047615 = r10047611 * r10047605;
        double r10047616 = r10047615 * r10047605;
        double r10047617 = r10047614 * r10047616;
        double r10047618 = r10047613 + r10047617;
        double r10047619 = 20424.762268;
        double r10047620 = r10047616 * r10047605;
        double r10047621 = r10047620 * r10047605;
        double r10047622 = r10047619 * r10047621;
        double r10047623 = r10047618 + r10047622;
        double r10047624 = -45388.360596;
        double r10047625 = r10047621 * r10047605;
        double r10047626 = r10047625 * r10047605;
        double r10047627 = r10047624 * r10047626;
        double r10047628 = r10047623 + r10047627;
        double r10047629 = 55703.897095;
        double r10047630 = r10047626 * r10047605;
        double r10047631 = r10047630 * r10047605;
        double r10047632 = r10047629 * r10047631;
        double r10047633 = r10047628 + r10047632;
        double r10047634 = -35503.582764;
        double r10047635 = r10047631 * r10047605;
        double r10047636 = r10047635 * r10047605;
        double r10047637 = r10047634 * r10047636;
        double r10047638 = r10047633 + r10047637;
        double r10047639 = 9171.758881;
        double r10047640 = r10047636 * r10047605;
        double r10047641 = r10047640 * r10047605;
        double r10047642 = r10047639 * r10047641;
        double r10047643 = r10047638 + r10047642;
        return r10047643;
}


double f_of(float x) {
        float r10047644 = x;
        float r10047645 = r10047644 * r10047644;
        float r10047646 = r10047645 * r10047645;
        float r10047647 = 592.022095;
        float r10047648 = -4972.985596;
        float r10047649 = r10047648 * r10047644;
        float r10047650 = r10047644 * r10047649;
        float r10047651 = r10047647 + r10047650;
        float r10047652 = r10047646 * r10047651;
        float r10047653 = -26.707764;
        float r10047654 = r10047645 * r10047653;
        float r10047655 = 0.196381;
        float r10047656 = r10047654 + r10047655;
        float r10047657 = 20424.762268;
        float r10047658 = r10047645 * r10047657;
        float r10047659 = 3;
        float r10047660 = pow(r10047645, r10047659);
        float r10047661 = r10047658 * r10047660;
        float r10047662 = r10047656 + r10047661;
        float r10047663 = r10047652 + r10047662;
        float r10047664 = r10047660 * r10047646;
        float r10047665 = -45388.360596;
        float r10047666 = 55703.897095;
        float r10047667 = r10047666 * r10047644;
        float r10047668 = r10047644 * r10047667;
        float r10047669 = r10047665 + r10047668;
        float r10047670 = r10047664 * r10047669;
        float r10047671 = r10047664 * r10047646;
        float r10047672 = -35503.582764;
        float r10047673 = 9171.758881;
        float r10047674 = r10047645 * r10047673;
        float r10047675 = r10047672 + r10047674;
        float r10047676 = r10047671 * r10047675;
        float r10047677 = r10047670 + r10047676;
        float r10047678 = r10047663 + r10047677;
        return r10047678;
}

double f_od(double x) {
        double r10047679 = x;
        double r10047680 = r10047679 * r10047679;
        double r10047681 = r10047680 * r10047680;
        double r10047682 = 592.022095;
        double r10047683 = -4972.985596;
        double r10047684 = r10047683 * r10047679;
        double r10047685 = r10047679 * r10047684;
        double r10047686 = r10047682 + r10047685;
        double r10047687 = r10047681 * r10047686;
        double r10047688 = -26.707764;
        double r10047689 = r10047680 * r10047688;
        double r10047690 = 0.196381;
        double r10047691 = r10047689 + r10047690;
        double r10047692 = 20424.762268;
        double r10047693 = r10047680 * r10047692;
        double r10047694 = 3;
        double r10047695 = pow(r10047680, r10047694);
        double r10047696 = r10047693 * r10047695;
        double r10047697 = r10047691 + r10047696;
        double r10047698 = r10047687 + r10047697;
        double r10047699 = r10047695 * r10047681;
        double r10047700 = -45388.360596;
        double r10047701 = 55703.897095;
        double r10047702 = r10047701 * r10047679;
        double r10047703 = r10047679 * r10047702;
        double r10047704 = r10047700 + r10047703;
        double r10047705 = r10047699 * r10047704;
        double r10047706 = r10047699 * r10047681;
        double r10047707 = -35503.582764;
        double r10047708 = 9171.758881;
        double r10047709 = r10047680 * r10047708;
        double r10047710 = r10047707 + r10047709;
        double r10047711 = r10047706 * r10047710;
        double r10047712 = r10047705 + r10047711;
        double r10047713 = r10047698 + r10047712;
        return r10047713;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10047714, r10047715, r10047716, r10047717, r10047718, r10047719, r10047720, r10047721, r10047722, r10047723, r10047724, r10047725, r10047726, r10047727, r10047728, r10047729, r10047730, r10047731, r10047732, r10047733, r10047734, r10047735, r10047736, r10047737, r10047738, r10047739, r10047740, r10047741, r10047742, r10047743, r10047744, r10047745, r10047746, r10047747, r10047748, r10047749, r10047750, r10047751, r10047752, r10047753, r10047754;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10047714, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r10047715, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r10047716);
        mpfr_init(r10047717);
        mpfr_init(r10047718);
        mpfr_init(r10047719);
        mpfr_init_set_str(r10047720, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r10047721);
        mpfr_init(r10047722);
        mpfr_init(r10047723);
        mpfr_init(r10047724);
        mpfr_init_set_str(r10047725, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r10047726);
        mpfr_init(r10047727);
        mpfr_init(r10047728);
        mpfr_init(r10047729);
        mpfr_init_set_str(r10047730, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r10047731);
        mpfr_init(r10047732);
        mpfr_init(r10047733);
        mpfr_init(r10047734);
        mpfr_init_set_str(r10047735, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r10047736);
        mpfr_init(r10047737);
        mpfr_init(r10047738);
        mpfr_init(r10047739);
        mpfr_init_set_str(r10047740, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r10047741);
        mpfr_init(r10047742);
        mpfr_init(r10047743);
        mpfr_init(r10047744);
        mpfr_init_set_str(r10047745, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r10047746);
        mpfr_init(r10047747);
        mpfr_init(r10047748);
        mpfr_init(r10047749);
        mpfr_init_set_str(r10047750, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r10047751);
        mpfr_init(r10047752);
        mpfr_init(r10047753);
        mpfr_init(r10047754);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10047716, x, MPFR_RNDN);
        mpfr_mul(r10047717, r10047716, r10047716, MPFR_RNDN);
        mpfr_mul(r10047718, r10047715, r10047717, MPFR_RNDN);
        mpfr_add(r10047719, r10047714, r10047718, MPFR_RNDN);
        ;
        mpfr_mul(r10047721, r10047717, r10047716, MPFR_RNDN);
        mpfr_mul(r10047722, r10047721, r10047716, MPFR_RNDN);
        mpfr_mul(r10047723, r10047720, r10047722, MPFR_RNDN);
        mpfr_add(r10047724, r10047719, r10047723, MPFR_RNDN);
        ;
        mpfr_mul(r10047726, r10047722, r10047716, MPFR_RNDN);
        mpfr_mul(r10047727, r10047726, r10047716, MPFR_RNDN);
        mpfr_mul(r10047728, r10047725, r10047727, MPFR_RNDN);
        mpfr_add(r10047729, r10047724, r10047728, MPFR_RNDN);
        ;
        mpfr_mul(r10047731, r10047727, r10047716, MPFR_RNDN);
        mpfr_mul(r10047732, r10047731, r10047716, MPFR_RNDN);
        mpfr_mul(r10047733, r10047730, r10047732, MPFR_RNDN);
        mpfr_add(r10047734, r10047729, r10047733, MPFR_RNDN);
        ;
        mpfr_mul(r10047736, r10047732, r10047716, MPFR_RNDN);
        mpfr_mul(r10047737, r10047736, r10047716, MPFR_RNDN);
        mpfr_mul(r10047738, r10047735, r10047737, MPFR_RNDN);
        mpfr_add(r10047739, r10047734, r10047738, MPFR_RNDN);
        ;
        mpfr_mul(r10047741, r10047737, r10047716, MPFR_RNDN);
        mpfr_mul(r10047742, r10047741, r10047716, MPFR_RNDN);
        mpfr_mul(r10047743, r10047740, r10047742, MPFR_RNDN);
        mpfr_add(r10047744, r10047739, r10047743, MPFR_RNDN);
        ;
        mpfr_mul(r10047746, r10047742, r10047716, MPFR_RNDN);
        mpfr_mul(r10047747, r10047746, r10047716, MPFR_RNDN);
        mpfr_mul(r10047748, r10047745, r10047747, MPFR_RNDN);
        mpfr_add(r10047749, r10047744, r10047748, MPFR_RNDN);
        ;
        mpfr_mul(r10047751, r10047747, r10047716, MPFR_RNDN);
        mpfr_mul(r10047752, r10047751, r10047716, MPFR_RNDN);
        mpfr_mul(r10047753, r10047750, r10047752, MPFR_RNDN);
        mpfr_add(r10047754, r10047749, r10047753, MPFR_RNDN);
        return mpfr_get_d(r10047754, MPFR_RNDN);
}

static mpfr_t r10047755, r10047756, r10047757, r10047758, r10047759, r10047760, r10047761, r10047762, r10047763, r10047764, r10047765, r10047766, r10047767, r10047768, r10047769, r10047770, r10047771, r10047772, r10047773, r10047774, r10047775, r10047776, r10047777, r10047778, r10047779, r10047780, r10047781, r10047782, r10047783, r10047784, r10047785, r10047786, r10047787, r10047788, r10047789;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10047755);
        mpfr_init(r10047756);
        mpfr_init(r10047757);
        mpfr_init_set_str(r10047758, "592.022095", 10, MPFR_RNDN);
        mpfr_init_set_str(r10047759, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r10047760);
        mpfr_init(r10047761);
        mpfr_init(r10047762);
        mpfr_init(r10047763);
        mpfr_init_set_str(r10047764, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r10047765);
        mpfr_init_set_str(r10047766, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r10047767);
        mpfr_init_set_str(r10047768, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r10047769);
        mpfr_init_set_str(r10047770, "3", 10, MPFR_RNDN);
        mpfr_init(r10047771);
        mpfr_init(r10047772);
        mpfr_init(r10047773);
        mpfr_init(r10047774);
        mpfr_init(r10047775);
        mpfr_init_set_str(r10047776, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init_set_str(r10047777, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r10047778);
        mpfr_init(r10047779);
        mpfr_init(r10047780);
        mpfr_init(r10047781);
        mpfr_init(r10047782);
        mpfr_init_set_str(r10047783, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r10047784, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r10047785);
        mpfr_init(r10047786);
        mpfr_init(r10047787);
        mpfr_init(r10047788);
        mpfr_init(r10047789);
}

double f_fm(double x) {
        mpfr_set_d(r10047755, x, MPFR_RNDN);
        mpfr_mul(r10047756, r10047755, r10047755, MPFR_RNDN);
        mpfr_mul(r10047757, r10047756, r10047756, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10047760, r10047759, r10047755, MPFR_RNDN);
        mpfr_mul(r10047761, r10047755, r10047760, MPFR_RNDN);
        mpfr_add(r10047762, r10047758, r10047761, MPFR_RNDN);
        mpfr_mul(r10047763, r10047757, r10047762, MPFR_RNDN);
        ;
        mpfr_mul(r10047765, r10047756, r10047764, MPFR_RNDN);
        ;
        mpfr_add(r10047767, r10047765, r10047766, MPFR_RNDN);
        ;
        mpfr_mul(r10047769, r10047756, r10047768, MPFR_RNDN);
        ;
        mpfr_pow(r10047771, r10047756, r10047770, MPFR_RNDN);
        mpfr_mul(r10047772, r10047769, r10047771, MPFR_RNDN);
        mpfr_add(r10047773, r10047767, r10047772, MPFR_RNDN);
        mpfr_add(r10047774, r10047763, r10047773, MPFR_RNDN);
        mpfr_mul(r10047775, r10047771, r10047757, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10047778, r10047777, r10047755, MPFR_RNDN);
        mpfr_mul(r10047779, r10047755, r10047778, MPFR_RNDN);
        mpfr_add(r10047780, r10047776, r10047779, MPFR_RNDN);
        mpfr_mul(r10047781, r10047775, r10047780, MPFR_RNDN);
        mpfr_mul(r10047782, r10047775, r10047757, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10047785, r10047756, r10047784, MPFR_RNDN);
        mpfr_add(r10047786, r10047783, r10047785, MPFR_RNDN);
        mpfr_mul(r10047787, r10047782, r10047786, MPFR_RNDN);
        mpfr_add(r10047788, r10047781, r10047787, MPFR_RNDN);
        mpfr_add(r10047789, r10047774, r10047788, MPFR_RNDN);
        return mpfr_get_d(r10047789, MPFR_RNDN);
}

static mpfr_t r10047790, r10047791, r10047792, r10047793, r10047794, r10047795, r10047796, r10047797, r10047798, r10047799, r10047800, r10047801, r10047802, r10047803, r10047804, r10047805, r10047806, r10047807, r10047808, r10047809, r10047810, r10047811, r10047812, r10047813, r10047814, r10047815, r10047816, r10047817, r10047818, r10047819, r10047820, r10047821, r10047822, r10047823, r10047824;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10047790);
        mpfr_init(r10047791);
        mpfr_init(r10047792);
        mpfr_init_set_str(r10047793, "592.022095", 10, MPFR_RNDN);
        mpfr_init_set_str(r10047794, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r10047795);
        mpfr_init(r10047796);
        mpfr_init(r10047797);
        mpfr_init(r10047798);
        mpfr_init_set_str(r10047799, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r10047800);
        mpfr_init_set_str(r10047801, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r10047802);
        mpfr_init_set_str(r10047803, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r10047804);
        mpfr_init_set_str(r10047805, "3", 10, MPFR_RNDN);
        mpfr_init(r10047806);
        mpfr_init(r10047807);
        mpfr_init(r10047808);
        mpfr_init(r10047809);
        mpfr_init(r10047810);
        mpfr_init_set_str(r10047811, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init_set_str(r10047812, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r10047813);
        mpfr_init(r10047814);
        mpfr_init(r10047815);
        mpfr_init(r10047816);
        mpfr_init(r10047817);
        mpfr_init_set_str(r10047818, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r10047819, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r10047820);
        mpfr_init(r10047821);
        mpfr_init(r10047822);
        mpfr_init(r10047823);
        mpfr_init(r10047824);
}

double f_dm(double x) {
        mpfr_set_d(r10047790, x, MPFR_RNDN);
        mpfr_mul(r10047791, r10047790, r10047790, MPFR_RNDN);
        mpfr_mul(r10047792, r10047791, r10047791, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10047795, r10047794, r10047790, MPFR_RNDN);
        mpfr_mul(r10047796, r10047790, r10047795, MPFR_RNDN);
        mpfr_add(r10047797, r10047793, r10047796, MPFR_RNDN);
        mpfr_mul(r10047798, r10047792, r10047797, MPFR_RNDN);
        ;
        mpfr_mul(r10047800, r10047791, r10047799, MPFR_RNDN);
        ;
        mpfr_add(r10047802, r10047800, r10047801, MPFR_RNDN);
        ;
        mpfr_mul(r10047804, r10047791, r10047803, MPFR_RNDN);
        ;
        mpfr_pow(r10047806, r10047791, r10047805, MPFR_RNDN);
        mpfr_mul(r10047807, r10047804, r10047806, MPFR_RNDN);
        mpfr_add(r10047808, r10047802, r10047807, MPFR_RNDN);
        mpfr_add(r10047809, r10047798, r10047808, MPFR_RNDN);
        mpfr_mul(r10047810, r10047806, r10047792, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10047813, r10047812, r10047790, MPFR_RNDN);
        mpfr_mul(r10047814, r10047790, r10047813, MPFR_RNDN);
        mpfr_add(r10047815, r10047811, r10047814, MPFR_RNDN);
        mpfr_mul(r10047816, r10047810, r10047815, MPFR_RNDN);
        mpfr_mul(r10047817, r10047810, r10047792, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10047820, r10047791, r10047819, MPFR_RNDN);
        mpfr_add(r10047821, r10047818, r10047820, MPFR_RNDN);
        mpfr_mul(r10047822, r10047817, r10047821, MPFR_RNDN);
        mpfr_add(r10047823, r10047816, r10047822, MPFR_RNDN);
        mpfr_add(r10047824, r10047809, r10047823, MPFR_RNDN);
        return mpfr_get_d(r10047824, MPFR_RNDN);
}

