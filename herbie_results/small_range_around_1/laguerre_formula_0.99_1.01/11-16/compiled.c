#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r83191626 = 1.0;
        float r83191627 = -16.0;
        float r83191628 = x;
        float r83191629 = r83191627 * r83191628;
        float r83191630 = r83191626 + r83191629;
        float r83191631 = 60.0;
        float r83191632 = r83191628 * r83191628;
        float r83191633 = r83191631 * r83191632;
        float r83191634 = r83191630 + r83191633;
        float r83191635 = -93.333333;
        float r83191636 = r83191632 * r83191628;
        float r83191637 = r83191635 * r83191636;
        float r83191638 = r83191634 + r83191637;
        float r83191639 = 75.833333;
        float r83191640 = r83191636 * r83191628;
        float r83191641 = r83191639 * r83191640;
        float r83191642 = r83191638 + r83191641;
        float r83191643 = -36.4;
        float r83191644 = r83191640 * r83191628;
        float r83191645 = r83191643 * r83191644;
        float r83191646 = r83191642 + r83191645;
        float r83191647 = 11.122222;
        float r83191648 = r83191644 * r83191628;
        float r83191649 = r83191647 * r83191648;
        float r83191650 = r83191646 + r83191649;
        float r83191651 = -2.269841;
        float r83191652 = r83191648 * r83191628;
        float r83191653 = r83191651 * r83191652;
        float r83191654 = r83191650 + r83191653;
        float r83191655 = 0.319196;
        float r83191656 = r83191652 * r83191628;
        float r83191657 = r83191655 * r83191656;
        float r83191658 = r83191654 + r83191657;
        float r83191659 = -0.031526;
        float r83191660 = r83191656 * r83191628;
        float r83191661 = r83191659 * r83191660;
        float r83191662 = r83191658 + r83191661;
        float r83191663 = 0.002207;
        float r83191664 = r83191660 * r83191628;
        float r83191665 = r83191663 * r83191664;
        float r83191666 = r83191662 + r83191665;
        float r83191667 = -0.000109;
        float r83191668 = r83191664 * r83191628;
        float r83191669 = r83191667 * r83191668;
        float r83191670 = r83191666 + r83191669;
        float r83191671 = 4e-06;
        float r83191672 = r83191668 * r83191628;
        float r83191673 = r83191671 * r83191672;
        float r83191674 = r83191670 + r83191673;
        return r83191674;
}

double f_id(double x) {
        double r83191675 = 1.0;
        double r83191676 = -16.0;
        double r83191677 = x;
        double r83191678 = r83191676 * r83191677;
        double r83191679 = r83191675 + r83191678;
        double r83191680 = 60.0;
        double r83191681 = r83191677 * r83191677;
        double r83191682 = r83191680 * r83191681;
        double r83191683 = r83191679 + r83191682;
        double r83191684 = -93.333333;
        double r83191685 = r83191681 * r83191677;
        double r83191686 = r83191684 * r83191685;
        double r83191687 = r83191683 + r83191686;
        double r83191688 = 75.833333;
        double r83191689 = r83191685 * r83191677;
        double r83191690 = r83191688 * r83191689;
        double r83191691 = r83191687 + r83191690;
        double r83191692 = -36.4;
        double r83191693 = r83191689 * r83191677;
        double r83191694 = r83191692 * r83191693;
        double r83191695 = r83191691 + r83191694;
        double r83191696 = 11.122222;
        double r83191697 = r83191693 * r83191677;
        double r83191698 = r83191696 * r83191697;
        double r83191699 = r83191695 + r83191698;
        double r83191700 = -2.269841;
        double r83191701 = r83191697 * r83191677;
        double r83191702 = r83191700 * r83191701;
        double r83191703 = r83191699 + r83191702;
        double r83191704 = 0.319196;
        double r83191705 = r83191701 * r83191677;
        double r83191706 = r83191704 * r83191705;
        double r83191707 = r83191703 + r83191706;
        double r83191708 = -0.031526;
        double r83191709 = r83191705 * r83191677;
        double r83191710 = r83191708 * r83191709;
        double r83191711 = r83191707 + r83191710;
        double r83191712 = 0.002207;
        double r83191713 = r83191709 * r83191677;
        double r83191714 = r83191712 * r83191713;
        double r83191715 = r83191711 + r83191714;
        double r83191716 = -0.000109;
        double r83191717 = r83191713 * r83191677;
        double r83191718 = r83191716 * r83191717;
        double r83191719 = r83191715 + r83191718;
        double r83191720 = 4e-06;
        double r83191721 = r83191717 * r83191677;
        double r83191722 = r83191720 * r83191721;
        double r83191723 = r83191719 + r83191722;
        return r83191723;
}


double f_of(float x) {
        float r83191724 = x;
        float r83191725 = r83191724 * r83191724;
        float r83191726 = exp(r83191725);
        float r83191727 = -93.333333;
        float r83191728 = r83191724 * r83191727;
        float r83191729 = 60.0;
        float r83191730 = r83191728 + r83191729;
        float r83191731 = pow(r83191726, r83191730);
        float r83191732 = 4;
        float r83191733 = pow(r83191724, r83191732);
        float r83191734 = 75.833333;
        float r83191735 = 36.4;
        float r83191736 = r83191724 * r83191735;
        float r83191737 = r83191734 - r83191736;
        float r83191738 = r83191733 * r83191737;
        float r83191739 = exp(r83191738);
        float r83191740 = r83191731 * r83191739;
        float r83191741 = log(r83191740);
        float r83191742 = 11.122222;
        float r83191743 = -2.269841;
        float r83191744 = r83191743 * r83191724;
        float r83191745 = r83191742 + r83191744;
        float r83191746 = 3;
        float r83191747 = pow(r83191724, r83191746);
        float r83191748 = r83191747 * r83191747;
        float r83191749 = r83191745 * r83191748;
        float r83191750 = -16.0;
        float r83191751 = r83191724 * r83191750;
        float r83191752 = 1.0;
        float r83191753 = r83191751 + r83191752;
        float r83191754 = r83191749 + r83191753;
        float r83191755 = r83191741 + r83191754;
        float r83191756 = r83191725 * r83191725;
        float r83191757 = -0.000109;
        float r83191758 = r83191757 * r83191724;
        float r83191759 = 0.002207;
        float r83191760 = r83191758 + r83191759;
        float r83191761 = r83191760 * r83191748;
        float r83191762 = 0.319196;
        float r83191763 = -0.031526;
        float r83191764 = r83191763 * r83191724;
        float r83191765 = r83191762 + r83191764;
        float r83191766 = r83191765 * r83191756;
        float r83191767 = r83191761 + r83191766;
        float r83191768 = r83191756 * r83191767;
        float r83191769 = 4e-06;
        float r83191770 = r83191769 * r83191724;
        float r83191771 = r83191725 * r83191770;
        float r83191772 = pow(r83191747, r83191746);
        float r83191773 = r83191771 * r83191772;
        float r83191774 = r83191768 + r83191773;
        float r83191775 = r83191755 + r83191774;
        return r83191775;
}

double f_od(double x) {
        double r83191776 = x;
        double r83191777 = r83191776 * r83191776;
        double r83191778 = exp(r83191777);
        double r83191779 = -93.333333;
        double r83191780 = r83191776 * r83191779;
        double r83191781 = 60.0;
        double r83191782 = r83191780 + r83191781;
        double r83191783 = pow(r83191778, r83191782);
        double r83191784 = 4;
        double r83191785 = pow(r83191776, r83191784);
        double r83191786 = 75.833333;
        double r83191787 = 36.4;
        double r83191788 = r83191776 * r83191787;
        double r83191789 = r83191786 - r83191788;
        double r83191790 = r83191785 * r83191789;
        double r83191791 = exp(r83191790);
        double r83191792 = r83191783 * r83191791;
        double r83191793 = log(r83191792);
        double r83191794 = 11.122222;
        double r83191795 = -2.269841;
        double r83191796 = r83191795 * r83191776;
        double r83191797 = r83191794 + r83191796;
        double r83191798 = 3;
        double r83191799 = pow(r83191776, r83191798);
        double r83191800 = r83191799 * r83191799;
        double r83191801 = r83191797 * r83191800;
        double r83191802 = -16.0;
        double r83191803 = r83191776 * r83191802;
        double r83191804 = 1.0;
        double r83191805 = r83191803 + r83191804;
        double r83191806 = r83191801 + r83191805;
        double r83191807 = r83191793 + r83191806;
        double r83191808 = r83191777 * r83191777;
        double r83191809 = -0.000109;
        double r83191810 = r83191809 * r83191776;
        double r83191811 = 0.002207;
        double r83191812 = r83191810 + r83191811;
        double r83191813 = r83191812 * r83191800;
        double r83191814 = 0.319196;
        double r83191815 = -0.031526;
        double r83191816 = r83191815 * r83191776;
        double r83191817 = r83191814 + r83191816;
        double r83191818 = r83191817 * r83191808;
        double r83191819 = r83191813 + r83191818;
        double r83191820 = r83191808 * r83191819;
        double r83191821 = 4e-06;
        double r83191822 = r83191821 * r83191776;
        double r83191823 = r83191777 * r83191822;
        double r83191824 = pow(r83191799, r83191798);
        double r83191825 = r83191823 * r83191824;
        double r83191826 = r83191820 + r83191825;
        double r83191827 = r83191807 + r83191826;
        return r83191827;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83191828, r83191829, r83191830, r83191831, r83191832, r83191833, r83191834, r83191835, r83191836, r83191837, r83191838, r83191839, r83191840, r83191841, r83191842, r83191843, r83191844, r83191845, r83191846, r83191847, r83191848, r83191849, r83191850, r83191851, r83191852, r83191853, r83191854, r83191855, r83191856, r83191857, r83191858, r83191859, r83191860, r83191861, r83191862, r83191863, r83191864, r83191865, r83191866, r83191867, r83191868, r83191869, r83191870, r83191871, r83191872, r83191873, r83191874, r83191875, r83191876;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191828, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191829, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r83191830);
        mpfr_init(r83191831);
        mpfr_init(r83191832);
        mpfr_init_set_str(r83191833, "60.0", 10, MPFR_RNDN);
        mpfr_init(r83191834);
        mpfr_init(r83191835);
        mpfr_init(r83191836);
        mpfr_init_set_str(r83191837, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r83191838);
        mpfr_init(r83191839);
        mpfr_init(r83191840);
        mpfr_init_set_str(r83191841, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r83191842);
        mpfr_init(r83191843);
        mpfr_init(r83191844);
        mpfr_init_set_str(r83191845, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r83191846);
        mpfr_init(r83191847);
        mpfr_init(r83191848);
        mpfr_init_set_str(r83191849, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r83191850);
        mpfr_init(r83191851);
        mpfr_init(r83191852);
        mpfr_init_set_str(r83191853, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r83191854);
        mpfr_init(r83191855);
        mpfr_init(r83191856);
        mpfr_init_set_str(r83191857, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r83191858);
        mpfr_init(r83191859);
        mpfr_init(r83191860);
        mpfr_init_set_str(r83191861, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r83191862);
        mpfr_init(r83191863);
        mpfr_init(r83191864);
        mpfr_init_set_str(r83191865, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r83191866);
        mpfr_init(r83191867);
        mpfr_init(r83191868);
        mpfr_init_set_str(r83191869, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r83191870);
        mpfr_init(r83191871);
        mpfr_init(r83191872);
        mpfr_init_set_str(r83191873, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r83191874);
        mpfr_init(r83191875);
        mpfr_init(r83191876);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83191830, x, MPFR_RNDN);
        mpfr_mul(r83191831, r83191829, r83191830, MPFR_RNDN);
        mpfr_add(r83191832, r83191828, r83191831, MPFR_RNDN);
        ;
        mpfr_mul(r83191834, r83191830, r83191830, MPFR_RNDN);
        mpfr_mul(r83191835, r83191833, r83191834, MPFR_RNDN);
        mpfr_add(r83191836, r83191832, r83191835, MPFR_RNDN);
        ;
        mpfr_mul(r83191838, r83191834, r83191830, MPFR_RNDN);
        mpfr_mul(r83191839, r83191837, r83191838, MPFR_RNDN);
        mpfr_add(r83191840, r83191836, r83191839, MPFR_RNDN);
        ;
        mpfr_mul(r83191842, r83191838, r83191830, MPFR_RNDN);
        mpfr_mul(r83191843, r83191841, r83191842, MPFR_RNDN);
        mpfr_add(r83191844, r83191840, r83191843, MPFR_RNDN);
        ;
        mpfr_mul(r83191846, r83191842, r83191830, MPFR_RNDN);
        mpfr_mul(r83191847, r83191845, r83191846, MPFR_RNDN);
        mpfr_add(r83191848, r83191844, r83191847, MPFR_RNDN);
        ;
        mpfr_mul(r83191850, r83191846, r83191830, MPFR_RNDN);
        mpfr_mul(r83191851, r83191849, r83191850, MPFR_RNDN);
        mpfr_add(r83191852, r83191848, r83191851, MPFR_RNDN);
        ;
        mpfr_mul(r83191854, r83191850, r83191830, MPFR_RNDN);
        mpfr_mul(r83191855, r83191853, r83191854, MPFR_RNDN);
        mpfr_add(r83191856, r83191852, r83191855, MPFR_RNDN);
        ;
        mpfr_mul(r83191858, r83191854, r83191830, MPFR_RNDN);
        mpfr_mul(r83191859, r83191857, r83191858, MPFR_RNDN);
        mpfr_add(r83191860, r83191856, r83191859, MPFR_RNDN);
        ;
        mpfr_mul(r83191862, r83191858, r83191830, MPFR_RNDN);
        mpfr_mul(r83191863, r83191861, r83191862, MPFR_RNDN);
        mpfr_add(r83191864, r83191860, r83191863, MPFR_RNDN);
        ;
        mpfr_mul(r83191866, r83191862, r83191830, MPFR_RNDN);
        mpfr_mul(r83191867, r83191865, r83191866, MPFR_RNDN);
        mpfr_add(r83191868, r83191864, r83191867, MPFR_RNDN);
        ;
        mpfr_mul(r83191870, r83191866, r83191830, MPFR_RNDN);
        mpfr_mul(r83191871, r83191869, r83191870, MPFR_RNDN);
        mpfr_add(r83191872, r83191868, r83191871, MPFR_RNDN);
        ;
        mpfr_mul(r83191874, r83191870, r83191830, MPFR_RNDN);
        mpfr_mul(r83191875, r83191873, r83191874, MPFR_RNDN);
        mpfr_add(r83191876, r83191872, r83191875, MPFR_RNDN);
        return mpfr_get_d(r83191876, MPFR_RNDN);
}

static mpfr_t r83191877, r83191878, r83191879, r83191880, r83191881, r83191882, r83191883, r83191884, r83191885, r83191886, r83191887, r83191888, r83191889, r83191890, r83191891, r83191892, r83191893, r83191894, r83191895, r83191896, r83191897, r83191898, r83191899, r83191900, r83191901, r83191902, r83191903, r83191904, r83191905, r83191906, r83191907, r83191908, r83191909, r83191910, r83191911, r83191912, r83191913, r83191914, r83191915, r83191916, r83191917, r83191918, r83191919, r83191920, r83191921, r83191922, r83191923, r83191924, r83191925, r83191926, r83191927, r83191928;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83191877);
        mpfr_init(r83191878);
        mpfr_init(r83191879);
        mpfr_init_set_str(r83191880, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r83191881);
        mpfr_init_set_str(r83191882, "60.0", 10, MPFR_RNDN);
        mpfr_init(r83191883);
        mpfr_init(r83191884);
        mpfr_init_set_str(r83191885, "4", 10, MPFR_RNDN);
        mpfr_init(r83191886);
        mpfr_init_set_str(r83191887, "75.833333", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191888, "36.4", 10, MPFR_RNDN);
        mpfr_init(r83191889);
        mpfr_init(r83191890);
        mpfr_init(r83191891);
        mpfr_init(r83191892);
        mpfr_init(r83191893);
        mpfr_init(r83191894);
        mpfr_init_set_str(r83191895, "11.122222", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191896, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r83191897);
        mpfr_init(r83191898);
        mpfr_init_set_str(r83191899, "3", 10, MPFR_RNDN);
        mpfr_init(r83191900);
        mpfr_init(r83191901);
        mpfr_init(r83191902);
        mpfr_init_set_str(r83191903, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r83191904);
        mpfr_init_set_str(r83191905, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83191906);
        mpfr_init(r83191907);
        mpfr_init(r83191908);
        mpfr_init(r83191909);
        mpfr_init_set_str(r83191910, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r83191911);
        mpfr_init_set_str(r83191912, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r83191913);
        mpfr_init(r83191914);
        mpfr_init_set_str(r83191915, "0.319196", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191916, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r83191917);
        mpfr_init(r83191918);
        mpfr_init(r83191919);
        mpfr_init(r83191920);
        mpfr_init(r83191921);
        mpfr_init_set_str(r83191922, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r83191923);
        mpfr_init(r83191924);
        mpfr_init(r83191925);
        mpfr_init(r83191926);
        mpfr_init(r83191927);
        mpfr_init(r83191928);
}

double f_fm(double x) {
        mpfr_set_d(r83191877, x, MPFR_RNDN);
        mpfr_mul(r83191878, r83191877, r83191877, MPFR_RNDN);
        mpfr_exp(r83191879, r83191878, MPFR_RNDN);
        ;
        mpfr_mul(r83191881, r83191877, r83191880, MPFR_RNDN);
        ;
        mpfr_add(r83191883, r83191881, r83191882, MPFR_RNDN);
        mpfr_pow(r83191884, r83191879, r83191883, MPFR_RNDN);
        ;
        mpfr_pow(r83191886, r83191877, r83191885, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83191889, r83191877, r83191888, MPFR_RNDN);
        mpfr_sub(r83191890, r83191887, r83191889, MPFR_RNDN);
        mpfr_mul(r83191891, r83191886, r83191890, MPFR_RNDN);
        mpfr_exp(r83191892, r83191891, MPFR_RNDN);
        mpfr_mul(r83191893, r83191884, r83191892, MPFR_RNDN);
        mpfr_log(r83191894, r83191893, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83191897, r83191896, r83191877, MPFR_RNDN);
        mpfr_add(r83191898, r83191895, r83191897, MPFR_RNDN);
        ;
        mpfr_pow(r83191900, r83191877, r83191899, MPFR_RNDN);
        mpfr_mul(r83191901, r83191900, r83191900, MPFR_RNDN);
        mpfr_mul(r83191902, r83191898, r83191901, MPFR_RNDN);
        ;
        mpfr_mul(r83191904, r83191877, r83191903, MPFR_RNDN);
        ;
        mpfr_add(r83191906, r83191904, r83191905, MPFR_RNDN);
        mpfr_add(r83191907, r83191902, r83191906, MPFR_RNDN);
        mpfr_add(r83191908, r83191894, r83191907, MPFR_RNDN);
        mpfr_mul(r83191909, r83191878, r83191878, MPFR_RNDN);
        ;
        mpfr_mul(r83191911, r83191910, r83191877, MPFR_RNDN);
        ;
        mpfr_add(r83191913, r83191911, r83191912, MPFR_RNDN);
        mpfr_mul(r83191914, r83191913, r83191901, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83191917, r83191916, r83191877, MPFR_RNDN);
        mpfr_add(r83191918, r83191915, r83191917, MPFR_RNDN);
        mpfr_mul(r83191919, r83191918, r83191909, MPFR_RNDN);
        mpfr_add(r83191920, r83191914, r83191919, MPFR_RNDN);
        mpfr_mul(r83191921, r83191909, r83191920, MPFR_RNDN);
        ;
        mpfr_mul(r83191923, r83191922, r83191877, MPFR_RNDN);
        mpfr_mul(r83191924, r83191878, r83191923, MPFR_RNDN);
        mpfr_pow(r83191925, r83191900, r83191899, MPFR_RNDN);
        mpfr_mul(r83191926, r83191924, r83191925, MPFR_RNDN);
        mpfr_add(r83191927, r83191921, r83191926, MPFR_RNDN);
        mpfr_add(r83191928, r83191908, r83191927, MPFR_RNDN);
        return mpfr_get_d(r83191928, MPFR_RNDN);
}

static mpfr_t r83191929, r83191930, r83191931, r83191932, r83191933, r83191934, r83191935, r83191936, r83191937, r83191938, r83191939, r83191940, r83191941, r83191942, r83191943, r83191944, r83191945, r83191946, r83191947, r83191948, r83191949, r83191950, r83191951, r83191952, r83191953, r83191954, r83191955, r83191956, r83191957, r83191958, r83191959, r83191960, r83191961, r83191962, r83191963, r83191964, r83191965, r83191966, r83191967, r83191968, r83191969, r83191970, r83191971, r83191972, r83191973, r83191974, r83191975, r83191976, r83191977, r83191978, r83191979, r83191980;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83191929);
        mpfr_init(r83191930);
        mpfr_init(r83191931);
        mpfr_init_set_str(r83191932, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r83191933);
        mpfr_init_set_str(r83191934, "60.0", 10, MPFR_RNDN);
        mpfr_init(r83191935);
        mpfr_init(r83191936);
        mpfr_init_set_str(r83191937, "4", 10, MPFR_RNDN);
        mpfr_init(r83191938);
        mpfr_init_set_str(r83191939, "75.833333", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191940, "36.4", 10, MPFR_RNDN);
        mpfr_init(r83191941);
        mpfr_init(r83191942);
        mpfr_init(r83191943);
        mpfr_init(r83191944);
        mpfr_init(r83191945);
        mpfr_init(r83191946);
        mpfr_init_set_str(r83191947, "11.122222", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191948, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r83191949);
        mpfr_init(r83191950);
        mpfr_init_set_str(r83191951, "3", 10, MPFR_RNDN);
        mpfr_init(r83191952);
        mpfr_init(r83191953);
        mpfr_init(r83191954);
        mpfr_init_set_str(r83191955, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r83191956);
        mpfr_init_set_str(r83191957, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83191958);
        mpfr_init(r83191959);
        mpfr_init(r83191960);
        mpfr_init(r83191961);
        mpfr_init_set_str(r83191962, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r83191963);
        mpfr_init_set_str(r83191964, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r83191965);
        mpfr_init(r83191966);
        mpfr_init_set_str(r83191967, "0.319196", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191968, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r83191969);
        mpfr_init(r83191970);
        mpfr_init(r83191971);
        mpfr_init(r83191972);
        mpfr_init(r83191973);
        mpfr_init_set_str(r83191974, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r83191975);
        mpfr_init(r83191976);
        mpfr_init(r83191977);
        mpfr_init(r83191978);
        mpfr_init(r83191979);
        mpfr_init(r83191980);
}

double f_dm(double x) {
        mpfr_set_d(r83191929, x, MPFR_RNDN);
        mpfr_mul(r83191930, r83191929, r83191929, MPFR_RNDN);
        mpfr_exp(r83191931, r83191930, MPFR_RNDN);
        ;
        mpfr_mul(r83191933, r83191929, r83191932, MPFR_RNDN);
        ;
        mpfr_add(r83191935, r83191933, r83191934, MPFR_RNDN);
        mpfr_pow(r83191936, r83191931, r83191935, MPFR_RNDN);
        ;
        mpfr_pow(r83191938, r83191929, r83191937, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83191941, r83191929, r83191940, MPFR_RNDN);
        mpfr_sub(r83191942, r83191939, r83191941, MPFR_RNDN);
        mpfr_mul(r83191943, r83191938, r83191942, MPFR_RNDN);
        mpfr_exp(r83191944, r83191943, MPFR_RNDN);
        mpfr_mul(r83191945, r83191936, r83191944, MPFR_RNDN);
        mpfr_log(r83191946, r83191945, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83191949, r83191948, r83191929, MPFR_RNDN);
        mpfr_add(r83191950, r83191947, r83191949, MPFR_RNDN);
        ;
        mpfr_pow(r83191952, r83191929, r83191951, MPFR_RNDN);
        mpfr_mul(r83191953, r83191952, r83191952, MPFR_RNDN);
        mpfr_mul(r83191954, r83191950, r83191953, MPFR_RNDN);
        ;
        mpfr_mul(r83191956, r83191929, r83191955, MPFR_RNDN);
        ;
        mpfr_add(r83191958, r83191956, r83191957, MPFR_RNDN);
        mpfr_add(r83191959, r83191954, r83191958, MPFR_RNDN);
        mpfr_add(r83191960, r83191946, r83191959, MPFR_RNDN);
        mpfr_mul(r83191961, r83191930, r83191930, MPFR_RNDN);
        ;
        mpfr_mul(r83191963, r83191962, r83191929, MPFR_RNDN);
        ;
        mpfr_add(r83191965, r83191963, r83191964, MPFR_RNDN);
        mpfr_mul(r83191966, r83191965, r83191953, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83191969, r83191968, r83191929, MPFR_RNDN);
        mpfr_add(r83191970, r83191967, r83191969, MPFR_RNDN);
        mpfr_mul(r83191971, r83191970, r83191961, MPFR_RNDN);
        mpfr_add(r83191972, r83191966, r83191971, MPFR_RNDN);
        mpfr_mul(r83191973, r83191961, r83191972, MPFR_RNDN);
        ;
        mpfr_mul(r83191975, r83191974, r83191929, MPFR_RNDN);
        mpfr_mul(r83191976, r83191930, r83191975, MPFR_RNDN);
        mpfr_pow(r83191977, r83191952, r83191951, MPFR_RNDN);
        mpfr_mul(r83191978, r83191976, r83191977, MPFR_RNDN);
        mpfr_add(r83191979, r83191973, r83191978, MPFR_RNDN);
        mpfr_add(r83191980, r83191960, r83191979, MPFR_RNDN);
        return mpfr_get_d(r83191980, MPFR_RNDN);
}

