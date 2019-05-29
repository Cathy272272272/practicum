#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r5316620 = 518918400.0;
        float r5316621 = -8302694400.0;
        float r5316622 = x;
        float r5316623 = r5316622 * r5316622;
        float r5316624 = r5316621 * r5316623;
        float r5316625 = r5316620 + r5316624;
        float r5316626 = 19372953600.0;
        float r5316627 = r5316623 * r5316622;
        float r5316628 = r5316627 * r5316622;
        float r5316629 = r5316626 * r5316628;
        float r5316630 = r5316625 + r5316629;
        float r5316631 = -15498362880.0;
        float r5316632 = r5316628 * r5316622;
        float r5316633 = r5316632 * r5316622;
        float r5316634 = r5316631 * r5316633;
        float r5316635 = r5316630 + r5316634;
        float r5316636 = 5535129600.0;
        float r5316637 = r5316633 * r5316622;
        float r5316638 = r5316637 * r5316622;
        float r5316639 = r5316636 * r5316638;
        float r5316640 = r5316635 + r5316639;
        float r5316641 = -984023040.0;
        float r5316642 = r5316638 * r5316622;
        float r5316643 = r5316642 * r5316622;
        float r5316644 = r5316641 * r5316643;
        float r5316645 = r5316640 + r5316644;
        float r5316646 = 89456640.0;
        float r5316647 = r5316643 * r5316622;
        float r5316648 = r5316647 * r5316622;
        float r5316649 = r5316646 * r5316648;
        float r5316650 = r5316645 + r5316649;
        float r5316651 = -3932160.0;
        float r5316652 = r5316648 * r5316622;
        float r5316653 = r5316652 * r5316622;
        float r5316654 = r5316651 * r5316653;
        float r5316655 = r5316650 + r5316654;
        float r5316656 = 65536.0;
        float r5316657 = r5316653 * r5316622;
        float r5316658 = r5316657 * r5316622;
        float r5316659 = r5316656 * r5316658;
        float r5316660 = r5316655 + r5316659;
        return r5316660;
}

double f_id(double x) {
        double r5316661 = 518918400.0;
        double r5316662 = -8302694400.0;
        double r5316663 = x;
        double r5316664 = r5316663 * r5316663;
        double r5316665 = r5316662 * r5316664;
        double r5316666 = r5316661 + r5316665;
        double r5316667 = 19372953600.0;
        double r5316668 = r5316664 * r5316663;
        double r5316669 = r5316668 * r5316663;
        double r5316670 = r5316667 * r5316669;
        double r5316671 = r5316666 + r5316670;
        double r5316672 = -15498362880.0;
        double r5316673 = r5316669 * r5316663;
        double r5316674 = r5316673 * r5316663;
        double r5316675 = r5316672 * r5316674;
        double r5316676 = r5316671 + r5316675;
        double r5316677 = 5535129600.0;
        double r5316678 = r5316674 * r5316663;
        double r5316679 = r5316678 * r5316663;
        double r5316680 = r5316677 * r5316679;
        double r5316681 = r5316676 + r5316680;
        double r5316682 = -984023040.0;
        double r5316683 = r5316679 * r5316663;
        double r5316684 = r5316683 * r5316663;
        double r5316685 = r5316682 * r5316684;
        double r5316686 = r5316681 + r5316685;
        double r5316687 = 89456640.0;
        double r5316688 = r5316684 * r5316663;
        double r5316689 = r5316688 * r5316663;
        double r5316690 = r5316687 * r5316689;
        double r5316691 = r5316686 + r5316690;
        double r5316692 = -3932160.0;
        double r5316693 = r5316689 * r5316663;
        double r5316694 = r5316693 * r5316663;
        double r5316695 = r5316692 * r5316694;
        double r5316696 = r5316691 + r5316695;
        double r5316697 = 65536.0;
        double r5316698 = r5316694 * r5316663;
        double r5316699 = r5316698 * r5316663;
        double r5316700 = r5316697 * r5316699;
        double r5316701 = r5316696 + r5316700;
        return r5316701;
}


double f_of(float x) {
        float r5316702 = 65536.0;
        float r5316703 = x;
        float r5316704 = 16;
        float r5316705 = pow(r5316703, r5316704);
        float r5316706 = r5316702 * r5316705;
        float r5316707 = 3932160.0;
        float r5316708 = 14;
        float r5316709 = pow(r5316703, r5316708);
        float r5316710 = r5316707 * r5316709;
        float r5316711 = r5316706 - r5316710;
        float r5316712 = 4;
        float r5316713 = pow(r5316703, r5316712);
        float r5316714 = 19372953600.0;
        float r5316715 = r5316713 * r5316714;
        float r5316716 = -8302694400.0;
        float r5316717 = r5316703 * r5316716;
        float r5316718 = r5316717 * r5316703;
        float r5316719 = r5316715 + r5316718;
        float r5316720 = 518918400.0;
        float r5316721 = r5316719 + r5316720;
        float r5316722 = r5316703 * r5316703;
        float r5316723 = 3;
        float r5316724 = pow(r5316722, r5316723);
        float r5316725 = -15498362880.0;
        float r5316726 = 5535129600.0;
        float r5316727 = r5316726 * r5316722;
        float r5316728 = r5316725 + r5316727;
        float r5316729 = r5316724 * r5316728;
        float r5316730 = r5316721 + r5316729;
        float r5316731 = r5316711 + r5316730;
        float r5316732 = r5316722 * r5316722;
        float r5316733 = r5316724 * r5316732;
        float r5316734 = -984023040.0;
        float r5316735 = 89456640.0;
        float r5316736 = r5316735 * r5316703;
        float r5316737 = r5316703 * r5316736;
        float r5316738 = r5316734 + r5316737;
        float r5316739 = r5316733 * r5316738;
        float r5316740 = r5316731 + r5316739;
        return r5316740;
}

double f_od(double x) {
        double r5316741 = 65536.0;
        double r5316742 = x;
        double r5316743 = 16;
        double r5316744 = pow(r5316742, r5316743);
        double r5316745 = r5316741 * r5316744;
        double r5316746 = 3932160.0;
        double r5316747 = 14;
        double r5316748 = pow(r5316742, r5316747);
        double r5316749 = r5316746 * r5316748;
        double r5316750 = r5316745 - r5316749;
        double r5316751 = 4;
        double r5316752 = pow(r5316742, r5316751);
        double r5316753 = 19372953600.0;
        double r5316754 = r5316752 * r5316753;
        double r5316755 = -8302694400.0;
        double r5316756 = r5316742 * r5316755;
        double r5316757 = r5316756 * r5316742;
        double r5316758 = r5316754 + r5316757;
        double r5316759 = 518918400.0;
        double r5316760 = r5316758 + r5316759;
        double r5316761 = r5316742 * r5316742;
        double r5316762 = 3;
        double r5316763 = pow(r5316761, r5316762);
        double r5316764 = -15498362880.0;
        double r5316765 = 5535129600.0;
        double r5316766 = r5316765 * r5316761;
        double r5316767 = r5316764 + r5316766;
        double r5316768 = r5316763 * r5316767;
        double r5316769 = r5316760 + r5316768;
        double r5316770 = r5316750 + r5316769;
        double r5316771 = r5316761 * r5316761;
        double r5316772 = r5316763 * r5316771;
        double r5316773 = -984023040.0;
        double r5316774 = 89456640.0;
        double r5316775 = r5316774 * r5316742;
        double r5316776 = r5316742 * r5316775;
        double r5316777 = r5316773 + r5316776;
        double r5316778 = r5316772 * r5316777;
        double r5316779 = r5316770 + r5316778;
        return r5316779;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5316780, r5316781, r5316782, r5316783, r5316784, r5316785, r5316786, r5316787, r5316788, r5316789, r5316790, r5316791, r5316792, r5316793, r5316794, r5316795, r5316796, r5316797, r5316798, r5316799, r5316800, r5316801, r5316802, r5316803, r5316804, r5316805, r5316806, r5316807, r5316808, r5316809, r5316810, r5316811, r5316812, r5316813, r5316814, r5316815, r5316816, r5316817, r5316818, r5316819, r5316820;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5316780, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316781, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r5316782);
        mpfr_init(r5316783);
        mpfr_init(r5316784);
        mpfr_init(r5316785);
        mpfr_init_set_str(r5316786, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r5316787);
        mpfr_init(r5316788);
        mpfr_init(r5316789);
        mpfr_init(r5316790);
        mpfr_init_set_str(r5316791, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r5316792);
        mpfr_init(r5316793);
        mpfr_init(r5316794);
        mpfr_init(r5316795);
        mpfr_init_set_str(r5316796, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r5316797);
        mpfr_init(r5316798);
        mpfr_init(r5316799);
        mpfr_init(r5316800);
        mpfr_init_set_str(r5316801, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r5316802);
        mpfr_init(r5316803);
        mpfr_init(r5316804);
        mpfr_init(r5316805);
        mpfr_init_set_str(r5316806, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r5316807);
        mpfr_init(r5316808);
        mpfr_init(r5316809);
        mpfr_init(r5316810);
        mpfr_init_set_str(r5316811, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r5316812);
        mpfr_init(r5316813);
        mpfr_init(r5316814);
        mpfr_init(r5316815);
        mpfr_init_set_str(r5316816, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r5316817);
        mpfr_init(r5316818);
        mpfr_init(r5316819);
        mpfr_init(r5316820);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5316782, x, MPFR_RNDN);
        mpfr_mul(r5316783, r5316782, r5316782, MPFR_RNDN);
        mpfr_mul(r5316784, r5316781, r5316783, MPFR_RNDN);
        mpfr_add(r5316785, r5316780, r5316784, MPFR_RNDN);
        ;
        mpfr_mul(r5316787, r5316783, r5316782, MPFR_RNDN);
        mpfr_mul(r5316788, r5316787, r5316782, MPFR_RNDN);
        mpfr_mul(r5316789, r5316786, r5316788, MPFR_RNDN);
        mpfr_add(r5316790, r5316785, r5316789, MPFR_RNDN);
        ;
        mpfr_mul(r5316792, r5316788, r5316782, MPFR_RNDN);
        mpfr_mul(r5316793, r5316792, r5316782, MPFR_RNDN);
        mpfr_mul(r5316794, r5316791, r5316793, MPFR_RNDN);
        mpfr_add(r5316795, r5316790, r5316794, MPFR_RNDN);
        ;
        mpfr_mul(r5316797, r5316793, r5316782, MPFR_RNDN);
        mpfr_mul(r5316798, r5316797, r5316782, MPFR_RNDN);
        mpfr_mul(r5316799, r5316796, r5316798, MPFR_RNDN);
        mpfr_add(r5316800, r5316795, r5316799, MPFR_RNDN);
        ;
        mpfr_mul(r5316802, r5316798, r5316782, MPFR_RNDN);
        mpfr_mul(r5316803, r5316802, r5316782, MPFR_RNDN);
        mpfr_mul(r5316804, r5316801, r5316803, MPFR_RNDN);
        mpfr_add(r5316805, r5316800, r5316804, MPFR_RNDN);
        ;
        mpfr_mul(r5316807, r5316803, r5316782, MPFR_RNDN);
        mpfr_mul(r5316808, r5316807, r5316782, MPFR_RNDN);
        mpfr_mul(r5316809, r5316806, r5316808, MPFR_RNDN);
        mpfr_add(r5316810, r5316805, r5316809, MPFR_RNDN);
        ;
        mpfr_mul(r5316812, r5316808, r5316782, MPFR_RNDN);
        mpfr_mul(r5316813, r5316812, r5316782, MPFR_RNDN);
        mpfr_mul(r5316814, r5316811, r5316813, MPFR_RNDN);
        mpfr_add(r5316815, r5316810, r5316814, MPFR_RNDN);
        ;
        mpfr_mul(r5316817, r5316813, r5316782, MPFR_RNDN);
        mpfr_mul(r5316818, r5316817, r5316782, MPFR_RNDN);
        mpfr_mul(r5316819, r5316816, r5316818, MPFR_RNDN);
        mpfr_add(r5316820, r5316815, r5316819, MPFR_RNDN);
        return mpfr_get_d(r5316820, MPFR_RNDN);
}

static mpfr_t r5316821, r5316822, r5316823, r5316824, r5316825, r5316826, r5316827, r5316828, r5316829, r5316830, r5316831, r5316832, r5316833, r5316834, r5316835, r5316836, r5316837, r5316838, r5316839, r5316840, r5316841, r5316842, r5316843, r5316844, r5316845, r5316846, r5316847, r5316848, r5316849, r5316850, r5316851, r5316852, r5316853, r5316854, r5316855, r5316856, r5316857, r5316858, r5316859;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5316821, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r5316822);
        mpfr_init_set_str(r5316823, "16", 10, MPFR_RNDN);
        mpfr_init(r5316824);
        mpfr_init(r5316825);
        mpfr_init_set_str(r5316826, "3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316827, "14", 10, MPFR_RNDN);
        mpfr_init(r5316828);
        mpfr_init(r5316829);
        mpfr_init(r5316830);
        mpfr_init_set_str(r5316831, "4", 10, MPFR_RNDN);
        mpfr_init(r5316832);
        mpfr_init_set_str(r5316833, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r5316834);
        mpfr_init_set_str(r5316835, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r5316836);
        mpfr_init(r5316837);
        mpfr_init(r5316838);
        mpfr_init_set_str(r5316839, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r5316840);
        mpfr_init(r5316841);
        mpfr_init_set_str(r5316842, "3", 10, MPFR_RNDN);
        mpfr_init(r5316843);
        mpfr_init_set_str(r5316844, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316845, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r5316846);
        mpfr_init(r5316847);
        mpfr_init(r5316848);
        mpfr_init(r5316849);
        mpfr_init(r5316850);
        mpfr_init(r5316851);
        mpfr_init(r5316852);
        mpfr_init_set_str(r5316853, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316854, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r5316855);
        mpfr_init(r5316856);
        mpfr_init(r5316857);
        mpfr_init(r5316858);
        mpfr_init(r5316859);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5316822, x, MPFR_RNDN);
        ;
        mpfr_pow(r5316824, r5316822, r5316823, MPFR_RNDN);
        mpfr_mul(r5316825, r5316821, r5316824, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r5316828, r5316822, r5316827, MPFR_RNDN);
        mpfr_mul(r5316829, r5316826, r5316828, MPFR_RNDN);
        mpfr_sub(r5316830, r5316825, r5316829, MPFR_RNDN);
        ;
        mpfr_pow(r5316832, r5316822, r5316831, MPFR_RNDN);
        ;
        mpfr_mul(r5316834, r5316832, r5316833, MPFR_RNDN);
        ;
        mpfr_mul(r5316836, r5316822, r5316835, MPFR_RNDN);
        mpfr_mul(r5316837, r5316836, r5316822, MPFR_RNDN);
        mpfr_add(r5316838, r5316834, r5316837, MPFR_RNDN);
        ;
        mpfr_add(r5316840, r5316838, r5316839, MPFR_RNDN);
        mpfr_mul(r5316841, r5316822, r5316822, MPFR_RNDN);
        ;
        mpfr_pow(r5316843, r5316841, r5316842, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5316846, r5316845, r5316841, MPFR_RNDN);
        mpfr_add(r5316847, r5316844, r5316846, MPFR_RNDN);
        mpfr_mul(r5316848, r5316843, r5316847, MPFR_RNDN);
        mpfr_add(r5316849, r5316840, r5316848, MPFR_RNDN);
        mpfr_add(r5316850, r5316830, r5316849, MPFR_RNDN);
        mpfr_mul(r5316851, r5316841, r5316841, MPFR_RNDN);
        mpfr_mul(r5316852, r5316843, r5316851, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5316855, r5316854, r5316822, MPFR_RNDN);
        mpfr_mul(r5316856, r5316822, r5316855, MPFR_RNDN);
        mpfr_add(r5316857, r5316853, r5316856, MPFR_RNDN);
        mpfr_mul(r5316858, r5316852, r5316857, MPFR_RNDN);
        mpfr_add(r5316859, r5316850, r5316858, MPFR_RNDN);
        return mpfr_get_d(r5316859, MPFR_RNDN);
}

static mpfr_t r5316860, r5316861, r5316862, r5316863, r5316864, r5316865, r5316866, r5316867, r5316868, r5316869, r5316870, r5316871, r5316872, r5316873, r5316874, r5316875, r5316876, r5316877, r5316878, r5316879, r5316880, r5316881, r5316882, r5316883, r5316884, r5316885, r5316886, r5316887, r5316888, r5316889, r5316890, r5316891, r5316892, r5316893, r5316894, r5316895, r5316896, r5316897, r5316898;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5316860, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r5316861);
        mpfr_init_set_str(r5316862, "16", 10, MPFR_RNDN);
        mpfr_init(r5316863);
        mpfr_init(r5316864);
        mpfr_init_set_str(r5316865, "3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316866, "14", 10, MPFR_RNDN);
        mpfr_init(r5316867);
        mpfr_init(r5316868);
        mpfr_init(r5316869);
        mpfr_init_set_str(r5316870, "4", 10, MPFR_RNDN);
        mpfr_init(r5316871);
        mpfr_init_set_str(r5316872, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r5316873);
        mpfr_init_set_str(r5316874, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r5316875);
        mpfr_init(r5316876);
        mpfr_init(r5316877);
        mpfr_init_set_str(r5316878, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r5316879);
        mpfr_init(r5316880);
        mpfr_init_set_str(r5316881, "3", 10, MPFR_RNDN);
        mpfr_init(r5316882);
        mpfr_init_set_str(r5316883, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316884, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r5316885);
        mpfr_init(r5316886);
        mpfr_init(r5316887);
        mpfr_init(r5316888);
        mpfr_init(r5316889);
        mpfr_init(r5316890);
        mpfr_init(r5316891);
        mpfr_init_set_str(r5316892, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316893, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r5316894);
        mpfr_init(r5316895);
        mpfr_init(r5316896);
        mpfr_init(r5316897);
        mpfr_init(r5316898);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5316861, x, MPFR_RNDN);
        ;
        mpfr_pow(r5316863, r5316861, r5316862, MPFR_RNDN);
        mpfr_mul(r5316864, r5316860, r5316863, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r5316867, r5316861, r5316866, MPFR_RNDN);
        mpfr_mul(r5316868, r5316865, r5316867, MPFR_RNDN);
        mpfr_sub(r5316869, r5316864, r5316868, MPFR_RNDN);
        ;
        mpfr_pow(r5316871, r5316861, r5316870, MPFR_RNDN);
        ;
        mpfr_mul(r5316873, r5316871, r5316872, MPFR_RNDN);
        ;
        mpfr_mul(r5316875, r5316861, r5316874, MPFR_RNDN);
        mpfr_mul(r5316876, r5316875, r5316861, MPFR_RNDN);
        mpfr_add(r5316877, r5316873, r5316876, MPFR_RNDN);
        ;
        mpfr_add(r5316879, r5316877, r5316878, MPFR_RNDN);
        mpfr_mul(r5316880, r5316861, r5316861, MPFR_RNDN);
        ;
        mpfr_pow(r5316882, r5316880, r5316881, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5316885, r5316884, r5316880, MPFR_RNDN);
        mpfr_add(r5316886, r5316883, r5316885, MPFR_RNDN);
        mpfr_mul(r5316887, r5316882, r5316886, MPFR_RNDN);
        mpfr_add(r5316888, r5316879, r5316887, MPFR_RNDN);
        mpfr_add(r5316889, r5316869, r5316888, MPFR_RNDN);
        mpfr_mul(r5316890, r5316880, r5316880, MPFR_RNDN);
        mpfr_mul(r5316891, r5316882, r5316890, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5316894, r5316893, r5316861, MPFR_RNDN);
        mpfr_mul(r5316895, r5316861, r5316894, MPFR_RNDN);
        mpfr_add(r5316896, r5316892, r5316895, MPFR_RNDN);
        mpfr_mul(r5316897, r5316891, r5316896, MPFR_RNDN);
        mpfr_add(r5316898, r5316889, r5316897, MPFR_RNDN);
        return mpfr_get_d(r5316898, MPFR_RNDN);
}

