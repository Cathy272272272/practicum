#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r33708648 = -0.246094;
        float r33708649 = 13.535156;
        float r33708650 = x;
        float r33708651 = r33708650 * r33708650;
        float r33708652 = r33708649 * r33708651;
        float r33708653 = r33708648 + r33708652;
        float r33708654 = -117.304688;
        float r33708655 = r33708651 * r33708650;
        float r33708656 = r33708655 * r33708650;
        float r33708657 = r33708654 * r33708656;
        float r33708658 = r33708653 + r33708657;
        float r33708659 = 351.914062;
        float r33708660 = r33708656 * r33708650;
        float r33708661 = r33708660 * r33708650;
        float r33708662 = r33708659 * r33708661;
        float r33708663 = r33708658 + r33708662;
        float r33708664 = -427.324219;
        float r33708665 = r33708661 * r33708650;
        float r33708666 = r33708665 * r33708650;
        float r33708667 = r33708664 * r33708666;
        float r33708668 = r33708663 + r33708667;
        float r33708669 = 180.425781;
        float r33708670 = r33708666 * r33708650;
        float r33708671 = r33708670 * r33708650;
        float r33708672 = r33708669 * r33708671;
        float r33708673 = r33708668 + r33708672;
        return r33708673;
}

double f_id(double x) {
        double r33708674 = -0.246094;
        double r33708675 = 13.535156;
        double r33708676 = x;
        double r33708677 = r33708676 * r33708676;
        double r33708678 = r33708675 * r33708677;
        double r33708679 = r33708674 + r33708678;
        double r33708680 = -117.304688;
        double r33708681 = r33708677 * r33708676;
        double r33708682 = r33708681 * r33708676;
        double r33708683 = r33708680 * r33708682;
        double r33708684 = r33708679 + r33708683;
        double r33708685 = 351.914062;
        double r33708686 = r33708682 * r33708676;
        double r33708687 = r33708686 * r33708676;
        double r33708688 = r33708685 * r33708687;
        double r33708689 = r33708684 + r33708688;
        double r33708690 = -427.324219;
        double r33708691 = r33708687 * r33708676;
        double r33708692 = r33708691 * r33708676;
        double r33708693 = r33708690 * r33708692;
        double r33708694 = r33708689 + r33708693;
        double r33708695 = 180.425781;
        double r33708696 = r33708692 * r33708676;
        double r33708697 = r33708696 * r33708676;
        double r33708698 = r33708695 * r33708697;
        double r33708699 = r33708694 + r33708698;
        return r33708699;
}


double f_of(float x) {
        float r33708700 = -0.246094;
        float r33708701 = exp(r33708700);
        float r33708702 = x;
        float r33708703 = exp(r33708702);
        float r33708704 = 13.535156;
        float r33708705 = r33708704 * r33708702;
        float r33708706 = pow(r33708703, r33708705);
        float r33708707 = r33708701 * r33708706;
        float r33708708 = log(r33708707);
        float r33708709 = 4;
        float r33708710 = pow(r33708702, r33708709);
        float r33708711 = -117.304688;
        float r33708712 = r33708710 * r33708711;
        float r33708713 = 3;
        float r33708714 = pow(r33708712, r33708713);
        float r33708715 = r33708702 * r33708702;
        float r33708716 = pow(r33708715, r33708713);
        float r33708717 = r33708715 * r33708715;
        float r33708718 = r33708716 * r33708717;
        float r33708719 = 180.425781;
        float r33708720 = exp(r33708719);
        float r33708721 = log(r33708720);
        float r33708722 = r33708718 * r33708721;
        float r33708723 = -427.324219;
        float r33708724 = r33708723 * r33708715;
        float r33708725 = 351.914062;
        float r33708726 = r33708724 + r33708725;
        float r33708727 = r33708716 * r33708726;
        float r33708728 = r33708722 + r33708727;
        float r33708729 = pow(r33708728, r33708713);
        float r33708730 = r33708714 + r33708729;
        float r33708731 = r33708712 * r33708712;
        float r33708732 = r33708728 * r33708728;
        float r33708733 = r33708712 * r33708728;
        float r33708734 = r33708732 - r33708733;
        float r33708735 = r33708731 + r33708734;
        float r33708736 = r33708730 / r33708735;
        float r33708737 = r33708708 + r33708736;
        return r33708737;
}

double f_od(double x) {
        double r33708738 = -0.246094;
        double r33708739 = exp(r33708738);
        double r33708740 = x;
        double r33708741 = exp(r33708740);
        double r33708742 = 13.535156;
        double r33708743 = r33708742 * r33708740;
        double r33708744 = pow(r33708741, r33708743);
        double r33708745 = r33708739 * r33708744;
        double r33708746 = log(r33708745);
        double r33708747 = 4;
        double r33708748 = pow(r33708740, r33708747);
        double r33708749 = -117.304688;
        double r33708750 = r33708748 * r33708749;
        double r33708751 = 3;
        double r33708752 = pow(r33708750, r33708751);
        double r33708753 = r33708740 * r33708740;
        double r33708754 = pow(r33708753, r33708751);
        double r33708755 = r33708753 * r33708753;
        double r33708756 = r33708754 * r33708755;
        double r33708757 = 180.425781;
        double r33708758 = exp(r33708757);
        double r33708759 = log(r33708758);
        double r33708760 = r33708756 * r33708759;
        double r33708761 = -427.324219;
        double r33708762 = r33708761 * r33708753;
        double r33708763 = 351.914062;
        double r33708764 = r33708762 + r33708763;
        double r33708765 = r33708754 * r33708764;
        double r33708766 = r33708760 + r33708765;
        double r33708767 = pow(r33708766, r33708751);
        double r33708768 = r33708752 + r33708767;
        double r33708769 = r33708750 * r33708750;
        double r33708770 = r33708766 * r33708766;
        double r33708771 = r33708750 * r33708766;
        double r33708772 = r33708770 - r33708771;
        double r33708773 = r33708769 + r33708772;
        double r33708774 = r33708768 / r33708773;
        double r33708775 = r33708746 + r33708774;
        return r33708775;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33708776, r33708777, r33708778, r33708779, r33708780, r33708781, r33708782, r33708783, r33708784, r33708785, r33708786, r33708787, r33708788, r33708789, r33708790, r33708791, r33708792, r33708793, r33708794, r33708795, r33708796, r33708797, r33708798, r33708799, r33708800, r33708801;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33708776, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r33708777, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r33708778);
        mpfr_init(r33708779);
        mpfr_init(r33708780);
        mpfr_init(r33708781);
        mpfr_init_set_str(r33708782, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r33708783);
        mpfr_init(r33708784);
        mpfr_init(r33708785);
        mpfr_init(r33708786);
        mpfr_init_set_str(r33708787, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r33708788);
        mpfr_init(r33708789);
        mpfr_init(r33708790);
        mpfr_init(r33708791);
        mpfr_init_set_str(r33708792, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r33708793);
        mpfr_init(r33708794);
        mpfr_init(r33708795);
        mpfr_init(r33708796);
        mpfr_init_set_str(r33708797, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r33708798);
        mpfr_init(r33708799);
        mpfr_init(r33708800);
        mpfr_init(r33708801);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r33708778, x, MPFR_RNDN);
        mpfr_mul(r33708779, r33708778, r33708778, MPFR_RNDN);
        mpfr_mul(r33708780, r33708777, r33708779, MPFR_RNDN);
        mpfr_add(r33708781, r33708776, r33708780, MPFR_RNDN);
        ;
        mpfr_mul(r33708783, r33708779, r33708778, MPFR_RNDN);
        mpfr_mul(r33708784, r33708783, r33708778, MPFR_RNDN);
        mpfr_mul(r33708785, r33708782, r33708784, MPFR_RNDN);
        mpfr_add(r33708786, r33708781, r33708785, MPFR_RNDN);
        ;
        mpfr_mul(r33708788, r33708784, r33708778, MPFR_RNDN);
        mpfr_mul(r33708789, r33708788, r33708778, MPFR_RNDN);
        mpfr_mul(r33708790, r33708787, r33708789, MPFR_RNDN);
        mpfr_add(r33708791, r33708786, r33708790, MPFR_RNDN);
        ;
        mpfr_mul(r33708793, r33708789, r33708778, MPFR_RNDN);
        mpfr_mul(r33708794, r33708793, r33708778, MPFR_RNDN);
        mpfr_mul(r33708795, r33708792, r33708794, MPFR_RNDN);
        mpfr_add(r33708796, r33708791, r33708795, MPFR_RNDN);
        ;
        mpfr_mul(r33708798, r33708794, r33708778, MPFR_RNDN);
        mpfr_mul(r33708799, r33708798, r33708778, MPFR_RNDN);
        mpfr_mul(r33708800, r33708797, r33708799, MPFR_RNDN);
        mpfr_add(r33708801, r33708796, r33708800, MPFR_RNDN);
        return mpfr_get_d(r33708801, MPFR_RNDN);
}

static mpfr_t r33708802, r33708803, r33708804, r33708805, r33708806, r33708807, r33708808, r33708809, r33708810, r33708811, r33708812, r33708813, r33708814, r33708815, r33708816, r33708817, r33708818, r33708819, r33708820, r33708821, r33708822, r33708823, r33708824, r33708825, r33708826, r33708827, r33708828, r33708829, r33708830, r33708831, r33708832, r33708833, r33708834, r33708835, r33708836, r33708837, r33708838, r33708839;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33708802, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r33708803);
        mpfr_init(r33708804);
        mpfr_init(r33708805);
        mpfr_init_set_str(r33708806, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r33708807);
        mpfr_init(r33708808);
        mpfr_init(r33708809);
        mpfr_init(r33708810);
        mpfr_init_set_str(r33708811, "4", 10, MPFR_RNDN);
        mpfr_init(r33708812);
        mpfr_init_set_str(r33708813, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r33708814);
        mpfr_init_set_str(r33708815, "3", 10, MPFR_RNDN);
        mpfr_init(r33708816);
        mpfr_init(r33708817);
        mpfr_init(r33708818);
        mpfr_init(r33708819);
        mpfr_init(r33708820);
        mpfr_init_set_str(r33708821, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r33708822);
        mpfr_init(r33708823);
        mpfr_init(r33708824);
        mpfr_init_set_str(r33708825, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r33708826);
        mpfr_init_set_str(r33708827, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r33708828);
        mpfr_init(r33708829);
        mpfr_init(r33708830);
        mpfr_init(r33708831);
        mpfr_init(r33708832);
        mpfr_init(r33708833);
        mpfr_init(r33708834);
        mpfr_init(r33708835);
        mpfr_init(r33708836);
        mpfr_init(r33708837);
        mpfr_init(r33708838);
        mpfr_init(r33708839);
}

double f_fm(double x) {
        ;
        mpfr_exp(r33708803, r33708802, MPFR_RNDN);
        mpfr_set_d(r33708804, x, MPFR_RNDN);
        mpfr_exp(r33708805, r33708804, MPFR_RNDN);
        ;
        mpfr_mul(r33708807, r33708806, r33708804, MPFR_RNDN);
        mpfr_pow(r33708808, r33708805, r33708807, MPFR_RNDN);
        mpfr_mul(r33708809, r33708803, r33708808, MPFR_RNDN);
        mpfr_log(r33708810, r33708809, MPFR_RNDN);
        ;
        mpfr_pow(r33708812, r33708804, r33708811, MPFR_RNDN);
        ;
        mpfr_mul(r33708814, r33708812, r33708813, MPFR_RNDN);
        ;
        mpfr_pow(r33708816, r33708814, r33708815, MPFR_RNDN);
        mpfr_mul(r33708817, r33708804, r33708804, MPFR_RNDN);
        mpfr_pow(r33708818, r33708817, r33708815, MPFR_RNDN);
        mpfr_mul(r33708819, r33708817, r33708817, MPFR_RNDN);
        mpfr_mul(r33708820, r33708818, r33708819, MPFR_RNDN);
        ;
        mpfr_exp(r33708822, r33708821, MPFR_RNDN);
        mpfr_log(r33708823, r33708822, MPFR_RNDN);
        mpfr_mul(r33708824, r33708820, r33708823, MPFR_RNDN);
        ;
        mpfr_mul(r33708826, r33708825, r33708817, MPFR_RNDN);
        ;
        mpfr_add(r33708828, r33708826, r33708827, MPFR_RNDN);
        mpfr_mul(r33708829, r33708818, r33708828, MPFR_RNDN);
        mpfr_add(r33708830, r33708824, r33708829, MPFR_RNDN);
        mpfr_pow(r33708831, r33708830, r33708815, MPFR_RNDN);
        mpfr_add(r33708832, r33708816, r33708831, MPFR_RNDN);
        mpfr_mul(r33708833, r33708814, r33708814, MPFR_RNDN);
        mpfr_mul(r33708834, r33708830, r33708830, MPFR_RNDN);
        mpfr_mul(r33708835, r33708814, r33708830, MPFR_RNDN);
        mpfr_sub(r33708836, r33708834, r33708835, MPFR_RNDN);
        mpfr_add(r33708837, r33708833, r33708836, MPFR_RNDN);
        mpfr_div(r33708838, r33708832, r33708837, MPFR_RNDN);
        mpfr_add(r33708839, r33708810, r33708838, MPFR_RNDN);
        return mpfr_get_d(r33708839, MPFR_RNDN);
}

static mpfr_t r33708840, r33708841, r33708842, r33708843, r33708844, r33708845, r33708846, r33708847, r33708848, r33708849, r33708850, r33708851, r33708852, r33708853, r33708854, r33708855, r33708856, r33708857, r33708858, r33708859, r33708860, r33708861, r33708862, r33708863, r33708864, r33708865, r33708866, r33708867, r33708868, r33708869, r33708870, r33708871, r33708872, r33708873, r33708874, r33708875, r33708876, r33708877;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33708840, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r33708841);
        mpfr_init(r33708842);
        mpfr_init(r33708843);
        mpfr_init_set_str(r33708844, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r33708845);
        mpfr_init(r33708846);
        mpfr_init(r33708847);
        mpfr_init(r33708848);
        mpfr_init_set_str(r33708849, "4", 10, MPFR_RNDN);
        mpfr_init(r33708850);
        mpfr_init_set_str(r33708851, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r33708852);
        mpfr_init_set_str(r33708853, "3", 10, MPFR_RNDN);
        mpfr_init(r33708854);
        mpfr_init(r33708855);
        mpfr_init(r33708856);
        mpfr_init(r33708857);
        mpfr_init(r33708858);
        mpfr_init_set_str(r33708859, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r33708860);
        mpfr_init(r33708861);
        mpfr_init(r33708862);
        mpfr_init_set_str(r33708863, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r33708864);
        mpfr_init_set_str(r33708865, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r33708866);
        mpfr_init(r33708867);
        mpfr_init(r33708868);
        mpfr_init(r33708869);
        mpfr_init(r33708870);
        mpfr_init(r33708871);
        mpfr_init(r33708872);
        mpfr_init(r33708873);
        mpfr_init(r33708874);
        mpfr_init(r33708875);
        mpfr_init(r33708876);
        mpfr_init(r33708877);
}

double f_dm(double x) {
        ;
        mpfr_exp(r33708841, r33708840, MPFR_RNDN);
        mpfr_set_d(r33708842, x, MPFR_RNDN);
        mpfr_exp(r33708843, r33708842, MPFR_RNDN);
        ;
        mpfr_mul(r33708845, r33708844, r33708842, MPFR_RNDN);
        mpfr_pow(r33708846, r33708843, r33708845, MPFR_RNDN);
        mpfr_mul(r33708847, r33708841, r33708846, MPFR_RNDN);
        mpfr_log(r33708848, r33708847, MPFR_RNDN);
        ;
        mpfr_pow(r33708850, r33708842, r33708849, MPFR_RNDN);
        ;
        mpfr_mul(r33708852, r33708850, r33708851, MPFR_RNDN);
        ;
        mpfr_pow(r33708854, r33708852, r33708853, MPFR_RNDN);
        mpfr_mul(r33708855, r33708842, r33708842, MPFR_RNDN);
        mpfr_pow(r33708856, r33708855, r33708853, MPFR_RNDN);
        mpfr_mul(r33708857, r33708855, r33708855, MPFR_RNDN);
        mpfr_mul(r33708858, r33708856, r33708857, MPFR_RNDN);
        ;
        mpfr_exp(r33708860, r33708859, MPFR_RNDN);
        mpfr_log(r33708861, r33708860, MPFR_RNDN);
        mpfr_mul(r33708862, r33708858, r33708861, MPFR_RNDN);
        ;
        mpfr_mul(r33708864, r33708863, r33708855, MPFR_RNDN);
        ;
        mpfr_add(r33708866, r33708864, r33708865, MPFR_RNDN);
        mpfr_mul(r33708867, r33708856, r33708866, MPFR_RNDN);
        mpfr_add(r33708868, r33708862, r33708867, MPFR_RNDN);
        mpfr_pow(r33708869, r33708868, r33708853, MPFR_RNDN);
        mpfr_add(r33708870, r33708854, r33708869, MPFR_RNDN);
        mpfr_mul(r33708871, r33708852, r33708852, MPFR_RNDN);
        mpfr_mul(r33708872, r33708868, r33708868, MPFR_RNDN);
        mpfr_mul(r33708873, r33708852, r33708868, MPFR_RNDN);
        mpfr_sub(r33708874, r33708872, r33708873, MPFR_RNDN);
        mpfr_add(r33708875, r33708871, r33708874, MPFR_RNDN);
        mpfr_div(r33708876, r33708870, r33708875, MPFR_RNDN);
        mpfr_add(r33708877, r33708848, r33708876, MPFR_RNDN);
        return mpfr_get_d(r33708877, MPFR_RNDN);
}

