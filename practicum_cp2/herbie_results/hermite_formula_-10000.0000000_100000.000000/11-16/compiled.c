#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r4211577 = 518918400.0;
        float r4211578 = -8302694400.0;
        float r4211579 = x;
        float r4211580 = r4211579 * r4211579;
        float r4211581 = r4211578 * r4211580;
        float r4211582 = r4211577 + r4211581;
        float r4211583 = 19372953600.0;
        float r4211584 = r4211580 * r4211579;
        float r4211585 = r4211584 * r4211579;
        float r4211586 = r4211583 * r4211585;
        float r4211587 = r4211582 + r4211586;
        float r4211588 = -15498362880.0;
        float r4211589 = r4211585 * r4211579;
        float r4211590 = r4211589 * r4211579;
        float r4211591 = r4211588 * r4211590;
        float r4211592 = r4211587 + r4211591;
        float r4211593 = 5535129600.0;
        float r4211594 = r4211590 * r4211579;
        float r4211595 = r4211594 * r4211579;
        float r4211596 = r4211593 * r4211595;
        float r4211597 = r4211592 + r4211596;
        float r4211598 = -984023040.0;
        float r4211599 = r4211595 * r4211579;
        float r4211600 = r4211599 * r4211579;
        float r4211601 = r4211598 * r4211600;
        float r4211602 = r4211597 + r4211601;
        float r4211603 = 89456640.0;
        float r4211604 = r4211600 * r4211579;
        float r4211605 = r4211604 * r4211579;
        float r4211606 = r4211603 * r4211605;
        float r4211607 = r4211602 + r4211606;
        float r4211608 = -3932160.0;
        float r4211609 = r4211605 * r4211579;
        float r4211610 = r4211609 * r4211579;
        float r4211611 = r4211608 * r4211610;
        float r4211612 = r4211607 + r4211611;
        float r4211613 = 65536.0;
        float r4211614 = r4211610 * r4211579;
        float r4211615 = r4211614 * r4211579;
        float r4211616 = r4211613 * r4211615;
        float r4211617 = r4211612 + r4211616;
        return r4211617;
}

double f_id(double x) {
        double r4211618 = 518918400.0;
        double r4211619 = -8302694400.0;
        double r4211620 = x;
        double r4211621 = r4211620 * r4211620;
        double r4211622 = r4211619 * r4211621;
        double r4211623 = r4211618 + r4211622;
        double r4211624 = 19372953600.0;
        double r4211625 = r4211621 * r4211620;
        double r4211626 = r4211625 * r4211620;
        double r4211627 = r4211624 * r4211626;
        double r4211628 = r4211623 + r4211627;
        double r4211629 = -15498362880.0;
        double r4211630 = r4211626 * r4211620;
        double r4211631 = r4211630 * r4211620;
        double r4211632 = r4211629 * r4211631;
        double r4211633 = r4211628 + r4211632;
        double r4211634 = 5535129600.0;
        double r4211635 = r4211631 * r4211620;
        double r4211636 = r4211635 * r4211620;
        double r4211637 = r4211634 * r4211636;
        double r4211638 = r4211633 + r4211637;
        double r4211639 = -984023040.0;
        double r4211640 = r4211636 * r4211620;
        double r4211641 = r4211640 * r4211620;
        double r4211642 = r4211639 * r4211641;
        double r4211643 = r4211638 + r4211642;
        double r4211644 = 89456640.0;
        double r4211645 = r4211641 * r4211620;
        double r4211646 = r4211645 * r4211620;
        double r4211647 = r4211644 * r4211646;
        double r4211648 = r4211643 + r4211647;
        double r4211649 = -3932160.0;
        double r4211650 = r4211646 * r4211620;
        double r4211651 = r4211650 * r4211620;
        double r4211652 = r4211649 * r4211651;
        double r4211653 = r4211648 + r4211652;
        double r4211654 = 65536.0;
        double r4211655 = r4211651 * r4211620;
        double r4211656 = r4211655 * r4211620;
        double r4211657 = r4211654 * r4211656;
        double r4211658 = r4211653 + r4211657;
        return r4211658;
}


double f_of(float x) {
        float r4211659 = x;
        float r4211660 = r4211659 * r4211659;
        float r4211661 = 5535129600.0;
        float r4211662 = r4211660 * r4211661;
        float r4211663 = 3;
        float r4211664 = pow(r4211660, r4211663);
        float r4211665 = r4211662 * r4211664;
        float r4211666 = 518918400.0;
        float r4211667 = -8302694400.0;
        float r4211668 = r4211660 * r4211667;
        float r4211669 = r4211666 + r4211668;
        float r4211670 = r4211665 + r4211669;
        float r4211671 = -3932160.0;
        float r4211672 = 65536.0;
        float r4211673 = r4211660 * r4211672;
        float r4211674 = r4211671 + r4211673;
        float r4211675 = 1;
        float r4211676 = r4211663 + r4211675;
        float r4211677 = pow(r4211660, r4211676);
        float r4211678 = r4211664 * r4211677;
        float r4211679 = r4211674 * r4211678;
        float r4211680 = r4211670 + r4211679;
        float r4211681 = -15498362880.0;
        float r4211682 = r4211660 * r4211681;
        float r4211683 = 19372953600.0;
        float r4211684 = r4211682 + r4211683;
        float r4211685 = r4211660 * r4211660;
        float r4211686 = r4211684 * r4211685;
        float r4211687 = 89456640.0;
        float r4211688 = r4211660 * r4211687;
        float r4211689 = -984023040.0;
        float r4211690 = r4211688 + r4211689;
        float r4211691 = pow(r4211659, r4211663);
        float r4211692 = r4211691 * r4211660;
        float r4211693 = r4211692 * r4211692;
        float r4211694 = r4211690 * r4211693;
        float r4211695 = r4211686 + r4211694;
        float r4211696 = r4211680 + r4211695;
        return r4211696;
}

double f_od(double x) {
        double r4211697 = x;
        double r4211698 = r4211697 * r4211697;
        double r4211699 = 5535129600.0;
        double r4211700 = r4211698 * r4211699;
        double r4211701 = 3;
        double r4211702 = pow(r4211698, r4211701);
        double r4211703 = r4211700 * r4211702;
        double r4211704 = 518918400.0;
        double r4211705 = -8302694400.0;
        double r4211706 = r4211698 * r4211705;
        double r4211707 = r4211704 + r4211706;
        double r4211708 = r4211703 + r4211707;
        double r4211709 = -3932160.0;
        double r4211710 = 65536.0;
        double r4211711 = r4211698 * r4211710;
        double r4211712 = r4211709 + r4211711;
        double r4211713 = 1;
        double r4211714 = r4211701 + r4211713;
        double r4211715 = pow(r4211698, r4211714);
        double r4211716 = r4211702 * r4211715;
        double r4211717 = r4211712 * r4211716;
        double r4211718 = r4211708 + r4211717;
        double r4211719 = -15498362880.0;
        double r4211720 = r4211698 * r4211719;
        double r4211721 = 19372953600.0;
        double r4211722 = r4211720 + r4211721;
        double r4211723 = r4211698 * r4211698;
        double r4211724 = r4211722 * r4211723;
        double r4211725 = 89456640.0;
        double r4211726 = r4211698 * r4211725;
        double r4211727 = -984023040.0;
        double r4211728 = r4211726 + r4211727;
        double r4211729 = pow(r4211697, r4211701);
        double r4211730 = r4211729 * r4211698;
        double r4211731 = r4211730 * r4211730;
        double r4211732 = r4211728 * r4211731;
        double r4211733 = r4211724 + r4211732;
        double r4211734 = r4211718 + r4211733;
        return r4211734;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4211735, r4211736, r4211737, r4211738, r4211739, r4211740, r4211741, r4211742, r4211743, r4211744, r4211745, r4211746, r4211747, r4211748, r4211749, r4211750, r4211751, r4211752, r4211753, r4211754, r4211755, r4211756, r4211757, r4211758, r4211759, r4211760, r4211761, r4211762, r4211763, r4211764, r4211765, r4211766, r4211767, r4211768, r4211769, r4211770, r4211771, r4211772, r4211773, r4211774, r4211775;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4211735, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211736, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r4211737);
        mpfr_init(r4211738);
        mpfr_init(r4211739);
        mpfr_init(r4211740);
        mpfr_init_set_str(r4211741, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r4211742);
        mpfr_init(r4211743);
        mpfr_init(r4211744);
        mpfr_init(r4211745);
        mpfr_init_set_str(r4211746, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r4211747);
        mpfr_init(r4211748);
        mpfr_init(r4211749);
        mpfr_init(r4211750);
        mpfr_init_set_str(r4211751, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r4211752);
        mpfr_init(r4211753);
        mpfr_init(r4211754);
        mpfr_init(r4211755);
        mpfr_init_set_str(r4211756, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r4211757);
        mpfr_init(r4211758);
        mpfr_init(r4211759);
        mpfr_init(r4211760);
        mpfr_init_set_str(r4211761, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r4211762);
        mpfr_init(r4211763);
        mpfr_init(r4211764);
        mpfr_init(r4211765);
        mpfr_init_set_str(r4211766, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r4211767);
        mpfr_init(r4211768);
        mpfr_init(r4211769);
        mpfr_init(r4211770);
        mpfr_init_set_str(r4211771, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r4211772);
        mpfr_init(r4211773);
        mpfr_init(r4211774);
        mpfr_init(r4211775);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4211737, x, MPFR_RNDN);
        mpfr_mul(r4211738, r4211737, r4211737, MPFR_RNDN);
        mpfr_mul(r4211739, r4211736, r4211738, MPFR_RNDN);
        mpfr_add(r4211740, r4211735, r4211739, MPFR_RNDN);
        ;
        mpfr_mul(r4211742, r4211738, r4211737, MPFR_RNDN);
        mpfr_mul(r4211743, r4211742, r4211737, MPFR_RNDN);
        mpfr_mul(r4211744, r4211741, r4211743, MPFR_RNDN);
        mpfr_add(r4211745, r4211740, r4211744, MPFR_RNDN);
        ;
        mpfr_mul(r4211747, r4211743, r4211737, MPFR_RNDN);
        mpfr_mul(r4211748, r4211747, r4211737, MPFR_RNDN);
        mpfr_mul(r4211749, r4211746, r4211748, MPFR_RNDN);
        mpfr_add(r4211750, r4211745, r4211749, MPFR_RNDN);
        ;
        mpfr_mul(r4211752, r4211748, r4211737, MPFR_RNDN);
        mpfr_mul(r4211753, r4211752, r4211737, MPFR_RNDN);
        mpfr_mul(r4211754, r4211751, r4211753, MPFR_RNDN);
        mpfr_add(r4211755, r4211750, r4211754, MPFR_RNDN);
        ;
        mpfr_mul(r4211757, r4211753, r4211737, MPFR_RNDN);
        mpfr_mul(r4211758, r4211757, r4211737, MPFR_RNDN);
        mpfr_mul(r4211759, r4211756, r4211758, MPFR_RNDN);
        mpfr_add(r4211760, r4211755, r4211759, MPFR_RNDN);
        ;
        mpfr_mul(r4211762, r4211758, r4211737, MPFR_RNDN);
        mpfr_mul(r4211763, r4211762, r4211737, MPFR_RNDN);
        mpfr_mul(r4211764, r4211761, r4211763, MPFR_RNDN);
        mpfr_add(r4211765, r4211760, r4211764, MPFR_RNDN);
        ;
        mpfr_mul(r4211767, r4211763, r4211737, MPFR_RNDN);
        mpfr_mul(r4211768, r4211767, r4211737, MPFR_RNDN);
        mpfr_mul(r4211769, r4211766, r4211768, MPFR_RNDN);
        mpfr_add(r4211770, r4211765, r4211769, MPFR_RNDN);
        ;
        mpfr_mul(r4211772, r4211768, r4211737, MPFR_RNDN);
        mpfr_mul(r4211773, r4211772, r4211737, MPFR_RNDN);
        mpfr_mul(r4211774, r4211771, r4211773, MPFR_RNDN);
        mpfr_add(r4211775, r4211770, r4211774, MPFR_RNDN);
        return mpfr_get_d(r4211775, MPFR_RNDN);
}

static mpfr_t r4211776, r4211777, r4211778, r4211779, r4211780, r4211781, r4211782, r4211783, r4211784, r4211785, r4211786, r4211787, r4211788, r4211789, r4211790, r4211791, r4211792, r4211793, r4211794, r4211795, r4211796, r4211797, r4211798, r4211799, r4211800, r4211801, r4211802, r4211803, r4211804, r4211805, r4211806, r4211807, r4211808, r4211809, r4211810, r4211811, r4211812, r4211813;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4211776);
        mpfr_init(r4211777);
        mpfr_init_set_str(r4211778, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r4211779);
        mpfr_init_set_str(r4211780, "3", 10, MPFR_RNDN);
        mpfr_init(r4211781);
        mpfr_init(r4211782);
        mpfr_init_set_str(r4211783, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211784, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r4211785);
        mpfr_init(r4211786);
        mpfr_init(r4211787);
        mpfr_init_set_str(r4211788, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211789, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r4211790);
        mpfr_init(r4211791);
        mpfr_init_set_str(r4211792, "1", 10, MPFR_RNDN);
        mpfr_init(r4211793);
        mpfr_init(r4211794);
        mpfr_init(r4211795);
        mpfr_init(r4211796);
        mpfr_init(r4211797);
        mpfr_init_set_str(r4211798, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r4211799);
        mpfr_init_set_str(r4211800, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r4211801);
        mpfr_init(r4211802);
        mpfr_init(r4211803);
        mpfr_init_set_str(r4211804, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r4211805);
        mpfr_init_set_str(r4211806, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r4211807);
        mpfr_init(r4211808);
        mpfr_init(r4211809);
        mpfr_init(r4211810);
        mpfr_init(r4211811);
        mpfr_init(r4211812);
        mpfr_init(r4211813);
}

double f_fm(double x) {
        mpfr_set_d(r4211776, x, MPFR_RNDN);
        mpfr_mul(r4211777, r4211776, r4211776, MPFR_RNDN);
        ;
        mpfr_mul(r4211779, r4211777, r4211778, MPFR_RNDN);
        ;
        mpfr_pow(r4211781, r4211777, r4211780, MPFR_RNDN);
        mpfr_mul(r4211782, r4211779, r4211781, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4211785, r4211777, r4211784, MPFR_RNDN);
        mpfr_add(r4211786, r4211783, r4211785, MPFR_RNDN);
        mpfr_add(r4211787, r4211782, r4211786, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4211790, r4211777, r4211789, MPFR_RNDN);
        mpfr_add(r4211791, r4211788, r4211790, MPFR_RNDN);
        ;
        mpfr_add(r4211793, r4211780, r4211792, MPFR_RNDN);
        mpfr_pow(r4211794, r4211777, r4211793, MPFR_RNDN);
        mpfr_mul(r4211795, r4211781, r4211794, MPFR_RNDN);
        mpfr_mul(r4211796, r4211791, r4211795, MPFR_RNDN);
        mpfr_add(r4211797, r4211787, r4211796, MPFR_RNDN);
        ;
        mpfr_mul(r4211799, r4211777, r4211798, MPFR_RNDN);
        ;
        mpfr_add(r4211801, r4211799, r4211800, MPFR_RNDN);
        mpfr_mul(r4211802, r4211777, r4211777, MPFR_RNDN);
        mpfr_mul(r4211803, r4211801, r4211802, MPFR_RNDN);
        ;
        mpfr_mul(r4211805, r4211777, r4211804, MPFR_RNDN);
        ;
        mpfr_add(r4211807, r4211805, r4211806, MPFR_RNDN);
        mpfr_pow(r4211808, r4211776, r4211780, MPFR_RNDN);
        mpfr_mul(r4211809, r4211808, r4211777, MPFR_RNDN);
        mpfr_mul(r4211810, r4211809, r4211809, MPFR_RNDN);
        mpfr_mul(r4211811, r4211807, r4211810, MPFR_RNDN);
        mpfr_add(r4211812, r4211803, r4211811, MPFR_RNDN);
        mpfr_add(r4211813, r4211797, r4211812, MPFR_RNDN);
        return mpfr_get_d(r4211813, MPFR_RNDN);
}

static mpfr_t r4211814, r4211815, r4211816, r4211817, r4211818, r4211819, r4211820, r4211821, r4211822, r4211823, r4211824, r4211825, r4211826, r4211827, r4211828, r4211829, r4211830, r4211831, r4211832, r4211833, r4211834, r4211835, r4211836, r4211837, r4211838, r4211839, r4211840, r4211841, r4211842, r4211843, r4211844, r4211845, r4211846, r4211847, r4211848, r4211849, r4211850, r4211851;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4211814);
        mpfr_init(r4211815);
        mpfr_init_set_str(r4211816, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r4211817);
        mpfr_init_set_str(r4211818, "3", 10, MPFR_RNDN);
        mpfr_init(r4211819);
        mpfr_init(r4211820);
        mpfr_init_set_str(r4211821, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211822, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r4211823);
        mpfr_init(r4211824);
        mpfr_init(r4211825);
        mpfr_init_set_str(r4211826, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211827, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r4211828);
        mpfr_init(r4211829);
        mpfr_init_set_str(r4211830, "1", 10, MPFR_RNDN);
        mpfr_init(r4211831);
        mpfr_init(r4211832);
        mpfr_init(r4211833);
        mpfr_init(r4211834);
        mpfr_init(r4211835);
        mpfr_init_set_str(r4211836, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r4211837);
        mpfr_init_set_str(r4211838, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r4211839);
        mpfr_init(r4211840);
        mpfr_init(r4211841);
        mpfr_init_set_str(r4211842, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r4211843);
        mpfr_init_set_str(r4211844, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r4211845);
        mpfr_init(r4211846);
        mpfr_init(r4211847);
        mpfr_init(r4211848);
        mpfr_init(r4211849);
        mpfr_init(r4211850);
        mpfr_init(r4211851);
}

double f_dm(double x) {
        mpfr_set_d(r4211814, x, MPFR_RNDN);
        mpfr_mul(r4211815, r4211814, r4211814, MPFR_RNDN);
        ;
        mpfr_mul(r4211817, r4211815, r4211816, MPFR_RNDN);
        ;
        mpfr_pow(r4211819, r4211815, r4211818, MPFR_RNDN);
        mpfr_mul(r4211820, r4211817, r4211819, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4211823, r4211815, r4211822, MPFR_RNDN);
        mpfr_add(r4211824, r4211821, r4211823, MPFR_RNDN);
        mpfr_add(r4211825, r4211820, r4211824, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4211828, r4211815, r4211827, MPFR_RNDN);
        mpfr_add(r4211829, r4211826, r4211828, MPFR_RNDN);
        ;
        mpfr_add(r4211831, r4211818, r4211830, MPFR_RNDN);
        mpfr_pow(r4211832, r4211815, r4211831, MPFR_RNDN);
        mpfr_mul(r4211833, r4211819, r4211832, MPFR_RNDN);
        mpfr_mul(r4211834, r4211829, r4211833, MPFR_RNDN);
        mpfr_add(r4211835, r4211825, r4211834, MPFR_RNDN);
        ;
        mpfr_mul(r4211837, r4211815, r4211836, MPFR_RNDN);
        ;
        mpfr_add(r4211839, r4211837, r4211838, MPFR_RNDN);
        mpfr_mul(r4211840, r4211815, r4211815, MPFR_RNDN);
        mpfr_mul(r4211841, r4211839, r4211840, MPFR_RNDN);
        ;
        mpfr_mul(r4211843, r4211815, r4211842, MPFR_RNDN);
        ;
        mpfr_add(r4211845, r4211843, r4211844, MPFR_RNDN);
        mpfr_pow(r4211846, r4211814, r4211818, MPFR_RNDN);
        mpfr_mul(r4211847, r4211846, r4211815, MPFR_RNDN);
        mpfr_mul(r4211848, r4211847, r4211847, MPFR_RNDN);
        mpfr_mul(r4211849, r4211845, r4211848, MPFR_RNDN);
        mpfr_add(r4211850, r4211841, r4211849, MPFR_RNDN);
        mpfr_add(r4211851, r4211835, r4211850, MPFR_RNDN);
        return mpfr_get_d(r4211851, MPFR_RNDN);
}

