#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r29571658 = 2.932617;
        float r29571659 = x;
        float r29571660 = r29571658 * r29571659;
        float r29571661 = -87.978516;
        float r29571662 = r29571659 * r29571659;
        float r29571663 = r29571662 * r29571659;
        float r29571664 = r29571661 * r29571663;
        float r29571665 = r29571660 + r29571664;
        float r29571666 = 747.817383;
        float r29571667 = r29571663 * r29571659;
        float r29571668 = r29571667 * r29571659;
        float r29571669 = r29571666 * r29571668;
        float r29571670 = r29571665 + r29571669;
        float r29571671 = -2706.386719;
        float r29571672 = r29571668 * r29571659;
        float r29571673 = r29571672 * r29571659;
        float r29571674 = r29571671 * r29571673;
        float r29571675 = r29571670 + r29571674;
        float r29571676 = 4736.176758;
        float r29571677 = r29571673 * r29571659;
        float r29571678 = r29571677 * r29571659;
        float r29571679 = r29571676 * r29571678;
        float r29571680 = r29571675 + r29571679;
        float r29571681 = -3961.166016;
        float r29571682 = r29571678 * r29571659;
        float r29571683 = r29571682 * r29571659;
        float r29571684 = r29571681 * r29571683;
        float r29571685 = r29571680 + r29571684;
        float r29571686 = 1269.604492;
        float r29571687 = r29571683 * r29571659;
        float r29571688 = r29571687 * r29571659;
        float r29571689 = r29571686 * r29571688;
        float r29571690 = r29571685 + r29571689;
        return r29571690;
}

double f_id(double x) {
        double r29571691 = 2.932617;
        double r29571692 = x;
        double r29571693 = r29571691 * r29571692;
        double r29571694 = -87.978516;
        double r29571695 = r29571692 * r29571692;
        double r29571696 = r29571695 * r29571692;
        double r29571697 = r29571694 * r29571696;
        double r29571698 = r29571693 + r29571697;
        double r29571699 = 747.817383;
        double r29571700 = r29571696 * r29571692;
        double r29571701 = r29571700 * r29571692;
        double r29571702 = r29571699 * r29571701;
        double r29571703 = r29571698 + r29571702;
        double r29571704 = -2706.386719;
        double r29571705 = r29571701 * r29571692;
        double r29571706 = r29571705 * r29571692;
        double r29571707 = r29571704 * r29571706;
        double r29571708 = r29571703 + r29571707;
        double r29571709 = 4736.176758;
        double r29571710 = r29571706 * r29571692;
        double r29571711 = r29571710 * r29571692;
        double r29571712 = r29571709 * r29571711;
        double r29571713 = r29571708 + r29571712;
        double r29571714 = -3961.166016;
        double r29571715 = r29571711 * r29571692;
        double r29571716 = r29571715 * r29571692;
        double r29571717 = r29571714 * r29571716;
        double r29571718 = r29571713 + r29571717;
        double r29571719 = 1269.604492;
        double r29571720 = r29571716 * r29571692;
        double r29571721 = r29571720 * r29571692;
        double r29571722 = r29571719 * r29571721;
        double r29571723 = r29571718 + r29571722;
        return r29571723;
}


double f_of(float x) {
        float r29571724 = x;
        float r29571725 = 3;
        float r29571726 = pow(r29571724, r29571725);
        float r29571727 = r29571724 * r29571724;
        float r29571728 = r29571726 * r29571727;
        float r29571729 = r29571727 * r29571727;
        float r29571730 = r29571728 * r29571729;
        float r29571731 = 4736.176758;
        float r29571732 = -3961.166016;
        float r29571733 = r29571732 * r29571727;
        float r29571734 = r29571731 + r29571733;
        float r29571735 = r29571730 * r29571734;
        float r29571736 = 2.932617;
        float r29571737 = r29571736 * r29571724;
        float r29571738 = r29571735 + r29571737;
        float r29571739 = -2706.386719;
        float r29571740 = r29571739 * r29571724;
        float r29571741 = r29571740 * r29571727;
        float r29571742 = r29571741 * r29571729;
        float r29571743 = 747.817383;
        float r29571744 = r29571724 * r29571743;
        float r29571745 = r29571744 * r29571727;
        float r29571746 = -87.978516;
        float r29571747 = r29571746 * r29571724;
        float r29571748 = r29571745 + r29571747;
        float r29571749 = r29571727 * r29571748;
        float r29571750 = r29571742 + r29571749;
        float r29571751 = r29571738 + r29571750;
        float r29571752 = pow(r29571751, r29571725);
        float r29571753 = 1269.604492;
        float r29571754 = r29571724 * r29571753;
        float r29571755 = r29571754 * r29571727;
        float r29571756 = pow(r29571727, r29571725);
        float r29571757 = r29571756 * r29571729;
        float r29571758 = r29571755 * r29571757;
        float r29571759 = pow(r29571758, r29571725);
        float r29571760 = r29571752 + r29571759;
        float r29571761 = r29571726 * r29571726;
        float r29571762 = r29571726 * r29571761;
        float r29571763 = r29571731 * r29571731;
        float r29571764 = r29571733 * r29571733;
        float r29571765 = r29571763 - r29571764;
        float r29571766 = r29571731 - r29571733;
        float r29571767 = r29571765 / r29571766;
        float r29571768 = r29571762 * r29571767;
        float r29571769 = r29571768 + r29571737;
        float r29571770 = r29571747 + r29571745;
        float r29571771 = r29571727 * r29571770;
        float r29571772 = r29571742 + r29571771;
        float r29571773 = r29571769 + r29571772;
        float r29571774 = r29571773 * r29571773;
        float r29571775 = r29571761 * r29571729;
        float r29571776 = r29571755 * r29571775;
        float r29571777 = r29571727 * r29571762;
        float r29571778 = r29571724 * r29571754;
        float r29571779 = r29571778 - r29571732;
        float r29571780 = r29571777 * r29571779;
        float r29571781 = r29571761 * r29571724;
        float r29571782 = r29571731 * r29571724;
        float r29571783 = r29571724 * r29571782;
        float r29571784 = r29571783 + r29571739;
        float r29571785 = r29571781 * r29571784;
        float r29571786 = r29571727 * r29571745;
        float r29571787 = r29571727 * r29571747;
        float r29571788 = r29571737 + r29571787;
        float r29571789 = r29571786 + r29571788;
        float r29571790 = r29571785 + r29571789;
        float r29571791 = r29571780 - r29571790;
        float r29571792 = r29571776 * r29571791;
        float r29571793 = r29571774 + r29571792;
        float r29571794 = r29571760 / r29571793;
        return r29571794;
}

double f_od(double x) {
        double r29571795 = x;
        double r29571796 = 3;
        double r29571797 = pow(r29571795, r29571796);
        double r29571798 = r29571795 * r29571795;
        double r29571799 = r29571797 * r29571798;
        double r29571800 = r29571798 * r29571798;
        double r29571801 = r29571799 * r29571800;
        double r29571802 = 4736.176758;
        double r29571803 = -3961.166016;
        double r29571804 = r29571803 * r29571798;
        double r29571805 = r29571802 + r29571804;
        double r29571806 = r29571801 * r29571805;
        double r29571807 = 2.932617;
        double r29571808 = r29571807 * r29571795;
        double r29571809 = r29571806 + r29571808;
        double r29571810 = -2706.386719;
        double r29571811 = r29571810 * r29571795;
        double r29571812 = r29571811 * r29571798;
        double r29571813 = r29571812 * r29571800;
        double r29571814 = 747.817383;
        double r29571815 = r29571795 * r29571814;
        double r29571816 = r29571815 * r29571798;
        double r29571817 = -87.978516;
        double r29571818 = r29571817 * r29571795;
        double r29571819 = r29571816 + r29571818;
        double r29571820 = r29571798 * r29571819;
        double r29571821 = r29571813 + r29571820;
        double r29571822 = r29571809 + r29571821;
        double r29571823 = pow(r29571822, r29571796);
        double r29571824 = 1269.604492;
        double r29571825 = r29571795 * r29571824;
        double r29571826 = r29571825 * r29571798;
        double r29571827 = pow(r29571798, r29571796);
        double r29571828 = r29571827 * r29571800;
        double r29571829 = r29571826 * r29571828;
        double r29571830 = pow(r29571829, r29571796);
        double r29571831 = r29571823 + r29571830;
        double r29571832 = r29571797 * r29571797;
        double r29571833 = r29571797 * r29571832;
        double r29571834 = r29571802 * r29571802;
        double r29571835 = r29571804 * r29571804;
        double r29571836 = r29571834 - r29571835;
        double r29571837 = r29571802 - r29571804;
        double r29571838 = r29571836 / r29571837;
        double r29571839 = r29571833 * r29571838;
        double r29571840 = r29571839 + r29571808;
        double r29571841 = r29571818 + r29571816;
        double r29571842 = r29571798 * r29571841;
        double r29571843 = r29571813 + r29571842;
        double r29571844 = r29571840 + r29571843;
        double r29571845 = r29571844 * r29571844;
        double r29571846 = r29571832 * r29571800;
        double r29571847 = r29571826 * r29571846;
        double r29571848 = r29571798 * r29571833;
        double r29571849 = r29571795 * r29571825;
        double r29571850 = r29571849 - r29571803;
        double r29571851 = r29571848 * r29571850;
        double r29571852 = r29571832 * r29571795;
        double r29571853 = r29571802 * r29571795;
        double r29571854 = r29571795 * r29571853;
        double r29571855 = r29571854 + r29571810;
        double r29571856 = r29571852 * r29571855;
        double r29571857 = r29571798 * r29571816;
        double r29571858 = r29571798 * r29571818;
        double r29571859 = r29571808 + r29571858;
        double r29571860 = r29571857 + r29571859;
        double r29571861 = r29571856 + r29571860;
        double r29571862 = r29571851 - r29571861;
        double r29571863 = r29571847 * r29571862;
        double r29571864 = r29571845 + r29571863;
        double r29571865 = r29571831 / r29571864;
        return r29571865;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29571866, r29571867, r29571868, r29571869, r29571870, r29571871, r29571872, r29571873, r29571874, r29571875, r29571876, r29571877, r29571878, r29571879, r29571880, r29571881, r29571882, r29571883, r29571884, r29571885, r29571886, r29571887, r29571888, r29571889, r29571890, r29571891, r29571892, r29571893, r29571894, r29571895, r29571896, r29571897, r29571898;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571866, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r29571867);
        mpfr_init(r29571868);
        mpfr_init_set_str(r29571869, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r29571870);
        mpfr_init(r29571871);
        mpfr_init(r29571872);
        mpfr_init(r29571873);
        mpfr_init_set_str(r29571874, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r29571875);
        mpfr_init(r29571876);
        mpfr_init(r29571877);
        mpfr_init(r29571878);
        mpfr_init_set_str(r29571879, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r29571880);
        mpfr_init(r29571881);
        mpfr_init(r29571882);
        mpfr_init(r29571883);
        mpfr_init_set_str(r29571884, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r29571885);
        mpfr_init(r29571886);
        mpfr_init(r29571887);
        mpfr_init(r29571888);
        mpfr_init_set_str(r29571889, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r29571890);
        mpfr_init(r29571891);
        mpfr_init(r29571892);
        mpfr_init(r29571893);
        mpfr_init_set_str(r29571894, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r29571895);
        mpfr_init(r29571896);
        mpfr_init(r29571897);
        mpfr_init(r29571898);
}

double f_im(double x) {
        ;
        mpfr_set_d(r29571867, x, MPFR_RNDN);
        mpfr_mul(r29571868, r29571866, r29571867, MPFR_RNDN);
        ;
        mpfr_mul(r29571870, r29571867, r29571867, MPFR_RNDN);
        mpfr_mul(r29571871, r29571870, r29571867, MPFR_RNDN);
        mpfr_mul(r29571872, r29571869, r29571871, MPFR_RNDN);
        mpfr_add(r29571873, r29571868, r29571872, MPFR_RNDN);
        ;
        mpfr_mul(r29571875, r29571871, r29571867, MPFR_RNDN);
        mpfr_mul(r29571876, r29571875, r29571867, MPFR_RNDN);
        mpfr_mul(r29571877, r29571874, r29571876, MPFR_RNDN);
        mpfr_add(r29571878, r29571873, r29571877, MPFR_RNDN);
        ;
        mpfr_mul(r29571880, r29571876, r29571867, MPFR_RNDN);
        mpfr_mul(r29571881, r29571880, r29571867, MPFR_RNDN);
        mpfr_mul(r29571882, r29571879, r29571881, MPFR_RNDN);
        mpfr_add(r29571883, r29571878, r29571882, MPFR_RNDN);
        ;
        mpfr_mul(r29571885, r29571881, r29571867, MPFR_RNDN);
        mpfr_mul(r29571886, r29571885, r29571867, MPFR_RNDN);
        mpfr_mul(r29571887, r29571884, r29571886, MPFR_RNDN);
        mpfr_add(r29571888, r29571883, r29571887, MPFR_RNDN);
        ;
        mpfr_mul(r29571890, r29571886, r29571867, MPFR_RNDN);
        mpfr_mul(r29571891, r29571890, r29571867, MPFR_RNDN);
        mpfr_mul(r29571892, r29571889, r29571891, MPFR_RNDN);
        mpfr_add(r29571893, r29571888, r29571892, MPFR_RNDN);
        ;
        mpfr_mul(r29571895, r29571891, r29571867, MPFR_RNDN);
        mpfr_mul(r29571896, r29571895, r29571867, MPFR_RNDN);
        mpfr_mul(r29571897, r29571894, r29571896, MPFR_RNDN);
        mpfr_add(r29571898, r29571893, r29571897, MPFR_RNDN);
        return mpfr_get_d(r29571898, MPFR_RNDN);
}

static mpfr_t r29571899, r29571900, r29571901, r29571902, r29571903, r29571904, r29571905, r29571906, r29571907, r29571908, r29571909, r29571910, r29571911, r29571912, r29571913, r29571914, r29571915, r29571916, r29571917, r29571918, r29571919, r29571920, r29571921, r29571922, r29571923, r29571924, r29571925, r29571926, r29571927, r29571928, r29571929, r29571930, r29571931, r29571932, r29571933, r29571934, r29571935, r29571936, r29571937, r29571938, r29571939, r29571940, r29571941, r29571942, r29571943, r29571944, r29571945, r29571946, r29571947, r29571948, r29571949, r29571950, r29571951, r29571952, r29571953, r29571954, r29571955, r29571956, r29571957, r29571958, r29571959, r29571960, r29571961, r29571962, r29571963, r29571964, r29571965, r29571966, r29571967, r29571968, r29571969;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29571899);
        mpfr_init_set_str(r29571900, "3", 10, MPFR_RNDN);
        mpfr_init(r29571901);
        mpfr_init(r29571902);
        mpfr_init(r29571903);
        mpfr_init(r29571904);
        mpfr_init(r29571905);
        mpfr_init_set_str(r29571906, "4736.176758", 10, MPFR_RNDN);
        mpfr_init_set_str(r29571907, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r29571908);
        mpfr_init(r29571909);
        mpfr_init(r29571910);
        mpfr_init_set_str(r29571911, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r29571912);
        mpfr_init(r29571913);
        mpfr_init_set_str(r29571914, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r29571915);
        mpfr_init(r29571916);
        mpfr_init(r29571917);
        mpfr_init_set_str(r29571918, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r29571919);
        mpfr_init(r29571920);
        mpfr_init_set_str(r29571921, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r29571922);
        mpfr_init(r29571923);
        mpfr_init(r29571924);
        mpfr_init(r29571925);
        mpfr_init(r29571926);
        mpfr_init(r29571927);
        mpfr_init_set_str(r29571928, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r29571929);
        mpfr_init(r29571930);
        mpfr_init(r29571931);
        mpfr_init(r29571932);
        mpfr_init(r29571933);
        mpfr_init(r29571934);
        mpfr_init(r29571935);
        mpfr_init(r29571936);
        mpfr_init(r29571937);
        mpfr_init(r29571938);
        mpfr_init(r29571939);
        mpfr_init(r29571940);
        mpfr_init(r29571941);
        mpfr_init(r29571942);
        mpfr_init(r29571943);
        mpfr_init(r29571944);
        mpfr_init(r29571945);
        mpfr_init(r29571946);
        mpfr_init(r29571947);
        mpfr_init(r29571948);
        mpfr_init(r29571949);
        mpfr_init(r29571950);
        mpfr_init(r29571951);
        mpfr_init(r29571952);
        mpfr_init(r29571953);
        mpfr_init(r29571954);
        mpfr_init(r29571955);
        mpfr_init(r29571956);
        mpfr_init(r29571957);
        mpfr_init(r29571958);
        mpfr_init(r29571959);
        mpfr_init(r29571960);
        mpfr_init(r29571961);
        mpfr_init(r29571962);
        mpfr_init(r29571963);
        mpfr_init(r29571964);
        mpfr_init(r29571965);
        mpfr_init(r29571966);
        mpfr_init(r29571967);
        mpfr_init(r29571968);
        mpfr_init(r29571969);
}

double f_fm(double x) {
        mpfr_set_d(r29571899, x, MPFR_RNDN);
        ;
        mpfr_pow(r29571901, r29571899, r29571900, MPFR_RNDN);
        mpfr_mul(r29571902, r29571899, r29571899, MPFR_RNDN);
        mpfr_mul(r29571903, r29571901, r29571902, MPFR_RNDN);
        mpfr_mul(r29571904, r29571902, r29571902, MPFR_RNDN);
        mpfr_mul(r29571905, r29571903, r29571904, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r29571908, r29571907, r29571902, MPFR_RNDN);
        mpfr_add(r29571909, r29571906, r29571908, MPFR_RNDN);
        mpfr_mul(r29571910, r29571905, r29571909, MPFR_RNDN);
        ;
        mpfr_mul(r29571912, r29571911, r29571899, MPFR_RNDN);
        mpfr_add(r29571913, r29571910, r29571912, MPFR_RNDN);
        ;
        mpfr_mul(r29571915, r29571914, r29571899, MPFR_RNDN);
        mpfr_mul(r29571916, r29571915, r29571902, MPFR_RNDN);
        mpfr_mul(r29571917, r29571916, r29571904, MPFR_RNDN);
        ;
        mpfr_mul(r29571919, r29571899, r29571918, MPFR_RNDN);
        mpfr_mul(r29571920, r29571919, r29571902, MPFR_RNDN);
        ;
        mpfr_mul(r29571922, r29571921, r29571899, MPFR_RNDN);
        mpfr_add(r29571923, r29571920, r29571922, MPFR_RNDN);
        mpfr_mul(r29571924, r29571902, r29571923, MPFR_RNDN);
        mpfr_add(r29571925, r29571917, r29571924, MPFR_RNDN);
        mpfr_add(r29571926, r29571913, r29571925, MPFR_RNDN);
        mpfr_pow(r29571927, r29571926, r29571900, MPFR_RNDN);
        ;
        mpfr_mul(r29571929, r29571899, r29571928, MPFR_RNDN);
        mpfr_mul(r29571930, r29571929, r29571902, MPFR_RNDN);
        mpfr_pow(r29571931, r29571902, r29571900, MPFR_RNDN);
        mpfr_mul(r29571932, r29571931, r29571904, MPFR_RNDN);
        mpfr_mul(r29571933, r29571930, r29571932, MPFR_RNDN);
        mpfr_pow(r29571934, r29571933, r29571900, MPFR_RNDN);
        mpfr_add(r29571935, r29571927, r29571934, MPFR_RNDN);
        mpfr_mul(r29571936, r29571901, r29571901, MPFR_RNDN);
        mpfr_mul(r29571937, r29571901, r29571936, MPFR_RNDN);
        mpfr_mul(r29571938, r29571906, r29571906, MPFR_RNDN);
        mpfr_mul(r29571939, r29571908, r29571908, MPFR_RNDN);
        mpfr_sub(r29571940, r29571938, r29571939, MPFR_RNDN);
        mpfr_sub(r29571941, r29571906, r29571908, MPFR_RNDN);
        mpfr_div(r29571942, r29571940, r29571941, MPFR_RNDN);
        mpfr_mul(r29571943, r29571937, r29571942, MPFR_RNDN);
        mpfr_add(r29571944, r29571943, r29571912, MPFR_RNDN);
        mpfr_add(r29571945, r29571922, r29571920, MPFR_RNDN);
        mpfr_mul(r29571946, r29571902, r29571945, MPFR_RNDN);
        mpfr_add(r29571947, r29571917, r29571946, MPFR_RNDN);
        mpfr_add(r29571948, r29571944, r29571947, MPFR_RNDN);
        mpfr_mul(r29571949, r29571948, r29571948, MPFR_RNDN);
        mpfr_mul(r29571950, r29571936, r29571904, MPFR_RNDN);
        mpfr_mul(r29571951, r29571930, r29571950, MPFR_RNDN);
        mpfr_mul(r29571952, r29571902, r29571937, MPFR_RNDN);
        mpfr_mul(r29571953, r29571899, r29571929, MPFR_RNDN);
        mpfr_sub(r29571954, r29571953, r29571907, MPFR_RNDN);
        mpfr_mul(r29571955, r29571952, r29571954, MPFR_RNDN);
        mpfr_mul(r29571956, r29571936, r29571899, MPFR_RNDN);
        mpfr_mul(r29571957, r29571906, r29571899, MPFR_RNDN);
        mpfr_mul(r29571958, r29571899, r29571957, MPFR_RNDN);
        mpfr_add(r29571959, r29571958, r29571914, MPFR_RNDN);
        mpfr_mul(r29571960, r29571956, r29571959, MPFR_RNDN);
        mpfr_mul(r29571961, r29571902, r29571920, MPFR_RNDN);
        mpfr_mul(r29571962, r29571902, r29571922, MPFR_RNDN);
        mpfr_add(r29571963, r29571912, r29571962, MPFR_RNDN);
        mpfr_add(r29571964, r29571961, r29571963, MPFR_RNDN);
        mpfr_add(r29571965, r29571960, r29571964, MPFR_RNDN);
        mpfr_sub(r29571966, r29571955, r29571965, MPFR_RNDN);
        mpfr_mul(r29571967, r29571951, r29571966, MPFR_RNDN);
        mpfr_add(r29571968, r29571949, r29571967, MPFR_RNDN);
        mpfr_div(r29571969, r29571935, r29571968, MPFR_RNDN);
        return mpfr_get_d(r29571969, MPFR_RNDN);
}

static mpfr_t r29571970, r29571971, r29571972, r29571973, r29571974, r29571975, r29571976, r29571977, r29571978, r29571979, r29571980, r29571981, r29571982, r29571983, r29571984, r29571985, r29571986, r29571987, r29571988, r29571989, r29571990, r29571991, r29571992, r29571993, r29571994, r29571995, r29571996, r29571997, r29571998, r29571999, r29572000, r29572001, r29572002, r29572003, r29572004, r29572005, r29572006, r29572007, r29572008, r29572009, r29572010, r29572011, r29572012, r29572013, r29572014, r29572015, r29572016, r29572017, r29572018, r29572019, r29572020, r29572021, r29572022, r29572023, r29572024, r29572025, r29572026, r29572027, r29572028, r29572029, r29572030, r29572031, r29572032, r29572033, r29572034, r29572035, r29572036, r29572037, r29572038, r29572039, r29572040;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29571970);
        mpfr_init_set_str(r29571971, "3", 10, MPFR_RNDN);
        mpfr_init(r29571972);
        mpfr_init(r29571973);
        mpfr_init(r29571974);
        mpfr_init(r29571975);
        mpfr_init(r29571976);
        mpfr_init_set_str(r29571977, "4736.176758", 10, MPFR_RNDN);
        mpfr_init_set_str(r29571978, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r29571979);
        mpfr_init(r29571980);
        mpfr_init(r29571981);
        mpfr_init_set_str(r29571982, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r29571983);
        mpfr_init(r29571984);
        mpfr_init_set_str(r29571985, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r29571986);
        mpfr_init(r29571987);
        mpfr_init(r29571988);
        mpfr_init_set_str(r29571989, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r29571990);
        mpfr_init(r29571991);
        mpfr_init_set_str(r29571992, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r29571993);
        mpfr_init(r29571994);
        mpfr_init(r29571995);
        mpfr_init(r29571996);
        mpfr_init(r29571997);
        mpfr_init(r29571998);
        mpfr_init_set_str(r29571999, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r29572000);
        mpfr_init(r29572001);
        mpfr_init(r29572002);
        mpfr_init(r29572003);
        mpfr_init(r29572004);
        mpfr_init(r29572005);
        mpfr_init(r29572006);
        mpfr_init(r29572007);
        mpfr_init(r29572008);
        mpfr_init(r29572009);
        mpfr_init(r29572010);
        mpfr_init(r29572011);
        mpfr_init(r29572012);
        mpfr_init(r29572013);
        mpfr_init(r29572014);
        mpfr_init(r29572015);
        mpfr_init(r29572016);
        mpfr_init(r29572017);
        mpfr_init(r29572018);
        mpfr_init(r29572019);
        mpfr_init(r29572020);
        mpfr_init(r29572021);
        mpfr_init(r29572022);
        mpfr_init(r29572023);
        mpfr_init(r29572024);
        mpfr_init(r29572025);
        mpfr_init(r29572026);
        mpfr_init(r29572027);
        mpfr_init(r29572028);
        mpfr_init(r29572029);
        mpfr_init(r29572030);
        mpfr_init(r29572031);
        mpfr_init(r29572032);
        mpfr_init(r29572033);
        mpfr_init(r29572034);
        mpfr_init(r29572035);
        mpfr_init(r29572036);
        mpfr_init(r29572037);
        mpfr_init(r29572038);
        mpfr_init(r29572039);
        mpfr_init(r29572040);
}

double f_dm(double x) {
        mpfr_set_d(r29571970, x, MPFR_RNDN);
        ;
        mpfr_pow(r29571972, r29571970, r29571971, MPFR_RNDN);
        mpfr_mul(r29571973, r29571970, r29571970, MPFR_RNDN);
        mpfr_mul(r29571974, r29571972, r29571973, MPFR_RNDN);
        mpfr_mul(r29571975, r29571973, r29571973, MPFR_RNDN);
        mpfr_mul(r29571976, r29571974, r29571975, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r29571979, r29571978, r29571973, MPFR_RNDN);
        mpfr_add(r29571980, r29571977, r29571979, MPFR_RNDN);
        mpfr_mul(r29571981, r29571976, r29571980, MPFR_RNDN);
        ;
        mpfr_mul(r29571983, r29571982, r29571970, MPFR_RNDN);
        mpfr_add(r29571984, r29571981, r29571983, MPFR_RNDN);
        ;
        mpfr_mul(r29571986, r29571985, r29571970, MPFR_RNDN);
        mpfr_mul(r29571987, r29571986, r29571973, MPFR_RNDN);
        mpfr_mul(r29571988, r29571987, r29571975, MPFR_RNDN);
        ;
        mpfr_mul(r29571990, r29571970, r29571989, MPFR_RNDN);
        mpfr_mul(r29571991, r29571990, r29571973, MPFR_RNDN);
        ;
        mpfr_mul(r29571993, r29571992, r29571970, MPFR_RNDN);
        mpfr_add(r29571994, r29571991, r29571993, MPFR_RNDN);
        mpfr_mul(r29571995, r29571973, r29571994, MPFR_RNDN);
        mpfr_add(r29571996, r29571988, r29571995, MPFR_RNDN);
        mpfr_add(r29571997, r29571984, r29571996, MPFR_RNDN);
        mpfr_pow(r29571998, r29571997, r29571971, MPFR_RNDN);
        ;
        mpfr_mul(r29572000, r29571970, r29571999, MPFR_RNDN);
        mpfr_mul(r29572001, r29572000, r29571973, MPFR_RNDN);
        mpfr_pow(r29572002, r29571973, r29571971, MPFR_RNDN);
        mpfr_mul(r29572003, r29572002, r29571975, MPFR_RNDN);
        mpfr_mul(r29572004, r29572001, r29572003, MPFR_RNDN);
        mpfr_pow(r29572005, r29572004, r29571971, MPFR_RNDN);
        mpfr_add(r29572006, r29571998, r29572005, MPFR_RNDN);
        mpfr_mul(r29572007, r29571972, r29571972, MPFR_RNDN);
        mpfr_mul(r29572008, r29571972, r29572007, MPFR_RNDN);
        mpfr_mul(r29572009, r29571977, r29571977, MPFR_RNDN);
        mpfr_mul(r29572010, r29571979, r29571979, MPFR_RNDN);
        mpfr_sub(r29572011, r29572009, r29572010, MPFR_RNDN);
        mpfr_sub(r29572012, r29571977, r29571979, MPFR_RNDN);
        mpfr_div(r29572013, r29572011, r29572012, MPFR_RNDN);
        mpfr_mul(r29572014, r29572008, r29572013, MPFR_RNDN);
        mpfr_add(r29572015, r29572014, r29571983, MPFR_RNDN);
        mpfr_add(r29572016, r29571993, r29571991, MPFR_RNDN);
        mpfr_mul(r29572017, r29571973, r29572016, MPFR_RNDN);
        mpfr_add(r29572018, r29571988, r29572017, MPFR_RNDN);
        mpfr_add(r29572019, r29572015, r29572018, MPFR_RNDN);
        mpfr_mul(r29572020, r29572019, r29572019, MPFR_RNDN);
        mpfr_mul(r29572021, r29572007, r29571975, MPFR_RNDN);
        mpfr_mul(r29572022, r29572001, r29572021, MPFR_RNDN);
        mpfr_mul(r29572023, r29571973, r29572008, MPFR_RNDN);
        mpfr_mul(r29572024, r29571970, r29572000, MPFR_RNDN);
        mpfr_sub(r29572025, r29572024, r29571978, MPFR_RNDN);
        mpfr_mul(r29572026, r29572023, r29572025, MPFR_RNDN);
        mpfr_mul(r29572027, r29572007, r29571970, MPFR_RNDN);
        mpfr_mul(r29572028, r29571977, r29571970, MPFR_RNDN);
        mpfr_mul(r29572029, r29571970, r29572028, MPFR_RNDN);
        mpfr_add(r29572030, r29572029, r29571985, MPFR_RNDN);
        mpfr_mul(r29572031, r29572027, r29572030, MPFR_RNDN);
        mpfr_mul(r29572032, r29571973, r29571991, MPFR_RNDN);
        mpfr_mul(r29572033, r29571973, r29571993, MPFR_RNDN);
        mpfr_add(r29572034, r29571983, r29572033, MPFR_RNDN);
        mpfr_add(r29572035, r29572032, r29572034, MPFR_RNDN);
        mpfr_add(r29572036, r29572031, r29572035, MPFR_RNDN);
        mpfr_sub(r29572037, r29572026, r29572036, MPFR_RNDN);
        mpfr_mul(r29572038, r29572022, r29572037, MPFR_RNDN);
        mpfr_add(r29572039, r29572020, r29572038, MPFR_RNDN);
        mpfr_div(r29572040, r29572006, r29572039, MPFR_RNDN);
        return mpfr_get_d(r29572040, MPFR_RNDN);
}
