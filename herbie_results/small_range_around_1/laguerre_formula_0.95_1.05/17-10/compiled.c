#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r83944676 = 1.0;
        float r83944677 = -10.0;
        float r83944678 = x;
        float r83944679 = r83944677 * r83944678;
        float r83944680 = r83944676 + r83944679;
        float r83944681 = 22.5;
        float r83944682 = r83944678 * r83944678;
        float r83944683 = r83944681 * r83944682;
        float r83944684 = r83944680 + r83944683;
        float r83944685 = -20.0;
        float r83944686 = r83944682 * r83944678;
        float r83944687 = r83944685 * r83944686;
        float r83944688 = r83944684 + r83944687;
        float r83944689 = 8.75;
        float r83944690 = r83944686 * r83944678;
        float r83944691 = r83944689 * r83944690;
        float r83944692 = r83944688 + r83944691;
        float r83944693 = -2.1;
        float r83944694 = r83944690 * r83944678;
        float r83944695 = r83944693 * r83944694;
        float r83944696 = r83944692 + r83944695;
        float r83944697 = 0.291667;
        float r83944698 = r83944694 * r83944678;
        float r83944699 = r83944697 * r83944698;
        float r83944700 = r83944696 + r83944699;
        float r83944701 = -0.02381;
        float r83944702 = r83944698 * r83944678;
        float r83944703 = r83944701 * r83944702;
        float r83944704 = r83944700 + r83944703;
        float r83944705 = 0.001116;
        float r83944706 = r83944702 * r83944678;
        float r83944707 = r83944705 * r83944706;
        float r83944708 = r83944704 + r83944707;
        float r83944709 = -2.8e-05;
        float r83944710 = r83944706 * r83944678;
        float r83944711 = r83944709 * r83944710;
        float r83944712 = r83944708 + r83944711;
        return r83944712;
}

double f_id(double x) {
        double r83944713 = 1.0;
        double r83944714 = -10.0;
        double r83944715 = x;
        double r83944716 = r83944714 * r83944715;
        double r83944717 = r83944713 + r83944716;
        double r83944718 = 22.5;
        double r83944719 = r83944715 * r83944715;
        double r83944720 = r83944718 * r83944719;
        double r83944721 = r83944717 + r83944720;
        double r83944722 = -20.0;
        double r83944723 = r83944719 * r83944715;
        double r83944724 = r83944722 * r83944723;
        double r83944725 = r83944721 + r83944724;
        double r83944726 = 8.75;
        double r83944727 = r83944723 * r83944715;
        double r83944728 = r83944726 * r83944727;
        double r83944729 = r83944725 + r83944728;
        double r83944730 = -2.1;
        double r83944731 = r83944727 * r83944715;
        double r83944732 = r83944730 * r83944731;
        double r83944733 = r83944729 + r83944732;
        double r83944734 = 0.291667;
        double r83944735 = r83944731 * r83944715;
        double r83944736 = r83944734 * r83944735;
        double r83944737 = r83944733 + r83944736;
        double r83944738 = -0.02381;
        double r83944739 = r83944735 * r83944715;
        double r83944740 = r83944738 * r83944739;
        double r83944741 = r83944737 + r83944740;
        double r83944742 = 0.001116;
        double r83944743 = r83944739 * r83944715;
        double r83944744 = r83944742 * r83944743;
        double r83944745 = r83944741 + r83944744;
        double r83944746 = -2.8e-05;
        double r83944747 = r83944743 * r83944715;
        double r83944748 = r83944746 * r83944747;
        double r83944749 = r83944745 + r83944748;
        return r83944749;
}


double f_of(float x) {
        float r83944750 = x;
        float r83944751 = 3;
        float r83944752 = pow(r83944750, r83944751);
        float r83944753 = 8.75;
        float r83944754 = r83944753 * r83944750;
        float r83944755 = -20.0;
        float r83944756 = r83944754 + r83944755;
        float r83944757 = r83944752 * r83944756;
        float r83944758 = 22.5;
        float r83944759 = r83944750 * r83944758;
        float r83944760 = r83944750 * r83944759;
        float r83944761 = -10.0;
        float r83944762 = r83944750 * r83944761;
        float r83944763 = 1.0;
        float r83944764 = r83944762 + r83944763;
        float r83944765 = r83944760 + r83944764;
        float r83944766 = r83944757 + r83944765;
        float r83944767 = cbrt(r83944766);
        float r83944768 = r83944761 * r83944750;
        float r83944769 = r83944768 + r83944763;
        float r83944770 = r83944750 * r83944750;
        float r83944771 = r83944758 * r83944770;
        float r83944772 = r83944769 + r83944771;
        float r83944773 = r83944757 + r83944772;
        float r83944774 = exp(r83944773);
        float r83944775 = log(r83944774);
        float r83944776 = cbrt(r83944775);
        float r83944777 = r83944767 * r83944776;
        float r83944778 = r83944750 * r83944755;
        float r83944779 = pow(r83944778, r83944751);
        float r83944780 = pow(r83944758, r83944751);
        float r83944781 = r83944779 + r83944780;
        float r83944782 = r83944778 * r83944778;
        float r83944783 = r83944758 - r83944778;
        float r83944784 = r83944783 * r83944758;
        float r83944785 = r83944782 + r83944784;
        float r83944786 = r83944781 / r83944785;
        float r83944787 = r83944770 * r83944786;
        float r83944788 = r83944763 + r83944762;
        float r83944789 = r83944787 + r83944788;
        float r83944790 = r83944752 * r83944754;
        float r83944791 = r83944789 + r83944790;
        float r83944792 = cbrt(r83944791);
        float r83944793 = r83944777 * r83944792;
        float r83944794 = -2.1;
        float r83944795 = r83944770 * r83944750;
        float r83944796 = r83944795 * r83944750;
        float r83944797 = r83944796 * r83944750;
        float r83944798 = r83944794 * r83944797;
        float r83944799 = r83944793 + r83944798;
        float r83944800 = 0.291667;
        float r83944801 = r83944797 * r83944750;
        float r83944802 = r83944800 * r83944801;
        float r83944803 = r83944799 + r83944802;
        float r83944804 = -0.02381;
        float r83944805 = r83944801 * r83944750;
        float r83944806 = r83944804 * r83944805;
        float r83944807 = r83944803 + r83944806;
        float r83944808 = 0.001116;
        float r83944809 = r83944805 * r83944750;
        float r83944810 = r83944808 * r83944809;
        float r83944811 = r83944807 + r83944810;
        float r83944812 = -2.8e-05;
        float r83944813 = r83944809 * r83944750;
        float r83944814 = r83944812 * r83944813;
        float r83944815 = r83944811 + r83944814;
        return r83944815;
}

double f_od(double x) {
        double r83944816 = x;
        double r83944817 = 3;
        double r83944818 = pow(r83944816, r83944817);
        double r83944819 = 8.75;
        double r83944820 = r83944819 * r83944816;
        double r83944821 = -20.0;
        double r83944822 = r83944820 + r83944821;
        double r83944823 = r83944818 * r83944822;
        double r83944824 = 22.5;
        double r83944825 = r83944816 * r83944824;
        double r83944826 = r83944816 * r83944825;
        double r83944827 = -10.0;
        double r83944828 = r83944816 * r83944827;
        double r83944829 = 1.0;
        double r83944830 = r83944828 + r83944829;
        double r83944831 = r83944826 + r83944830;
        double r83944832 = r83944823 + r83944831;
        double r83944833 = cbrt(r83944832);
        double r83944834 = r83944827 * r83944816;
        double r83944835 = r83944834 + r83944829;
        double r83944836 = r83944816 * r83944816;
        double r83944837 = r83944824 * r83944836;
        double r83944838 = r83944835 + r83944837;
        double r83944839 = r83944823 + r83944838;
        double r83944840 = exp(r83944839);
        double r83944841 = log(r83944840);
        double r83944842 = cbrt(r83944841);
        double r83944843 = r83944833 * r83944842;
        double r83944844 = r83944816 * r83944821;
        double r83944845 = pow(r83944844, r83944817);
        double r83944846 = pow(r83944824, r83944817);
        double r83944847 = r83944845 + r83944846;
        double r83944848 = r83944844 * r83944844;
        double r83944849 = r83944824 - r83944844;
        double r83944850 = r83944849 * r83944824;
        double r83944851 = r83944848 + r83944850;
        double r83944852 = r83944847 / r83944851;
        double r83944853 = r83944836 * r83944852;
        double r83944854 = r83944829 + r83944828;
        double r83944855 = r83944853 + r83944854;
        double r83944856 = r83944818 * r83944820;
        double r83944857 = r83944855 + r83944856;
        double r83944858 = cbrt(r83944857);
        double r83944859 = r83944843 * r83944858;
        double r83944860 = -2.1;
        double r83944861 = r83944836 * r83944816;
        double r83944862 = r83944861 * r83944816;
        double r83944863 = r83944862 * r83944816;
        double r83944864 = r83944860 * r83944863;
        double r83944865 = r83944859 + r83944864;
        double r83944866 = 0.291667;
        double r83944867 = r83944863 * r83944816;
        double r83944868 = r83944866 * r83944867;
        double r83944869 = r83944865 + r83944868;
        double r83944870 = -0.02381;
        double r83944871 = r83944867 * r83944816;
        double r83944872 = r83944870 * r83944871;
        double r83944873 = r83944869 + r83944872;
        double r83944874 = 0.001116;
        double r83944875 = r83944871 * r83944816;
        double r83944876 = r83944874 * r83944875;
        double r83944877 = r83944873 + r83944876;
        double r83944878 = -2.8e-05;
        double r83944879 = r83944875 * r83944816;
        double r83944880 = r83944878 * r83944879;
        double r83944881 = r83944877 + r83944880;
        return r83944881;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83944882, r83944883, r83944884, r83944885, r83944886, r83944887, r83944888, r83944889, r83944890, r83944891, r83944892, r83944893, r83944894, r83944895, r83944896, r83944897, r83944898, r83944899, r83944900, r83944901, r83944902, r83944903, r83944904, r83944905, r83944906, r83944907, r83944908, r83944909, r83944910, r83944911, r83944912, r83944913, r83944914, r83944915, r83944916, r83944917, r83944918;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83944882, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83944883, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r83944884);
        mpfr_init(r83944885);
        mpfr_init(r83944886);
        mpfr_init_set_str(r83944887, "22.5", 10, MPFR_RNDN);
        mpfr_init(r83944888);
        mpfr_init(r83944889);
        mpfr_init(r83944890);
        mpfr_init_set_str(r83944891, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r83944892);
        mpfr_init(r83944893);
        mpfr_init(r83944894);
        mpfr_init_set_str(r83944895, "8.75", 10, MPFR_RNDN);
        mpfr_init(r83944896);
        mpfr_init(r83944897);
        mpfr_init(r83944898);
        mpfr_init_set_str(r83944899, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r83944900);
        mpfr_init(r83944901);
        mpfr_init(r83944902);
        mpfr_init_set_str(r83944903, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r83944904);
        mpfr_init(r83944905);
        mpfr_init(r83944906);
        mpfr_init_set_str(r83944907, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r83944908);
        mpfr_init(r83944909);
        mpfr_init(r83944910);
        mpfr_init_set_str(r83944911, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r83944912);
        mpfr_init(r83944913);
        mpfr_init(r83944914);
        mpfr_init_set_str(r83944915, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r83944916);
        mpfr_init(r83944917);
        mpfr_init(r83944918);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83944884, x, MPFR_RNDN);
        mpfr_mul(r83944885, r83944883, r83944884, MPFR_RNDN);
        mpfr_add(r83944886, r83944882, r83944885, MPFR_RNDN);
        ;
        mpfr_mul(r83944888, r83944884, r83944884, MPFR_RNDN);
        mpfr_mul(r83944889, r83944887, r83944888, MPFR_RNDN);
        mpfr_add(r83944890, r83944886, r83944889, MPFR_RNDN);
        ;
        mpfr_mul(r83944892, r83944888, r83944884, MPFR_RNDN);
        mpfr_mul(r83944893, r83944891, r83944892, MPFR_RNDN);
        mpfr_add(r83944894, r83944890, r83944893, MPFR_RNDN);
        ;
        mpfr_mul(r83944896, r83944892, r83944884, MPFR_RNDN);
        mpfr_mul(r83944897, r83944895, r83944896, MPFR_RNDN);
        mpfr_add(r83944898, r83944894, r83944897, MPFR_RNDN);
        ;
        mpfr_mul(r83944900, r83944896, r83944884, MPFR_RNDN);
        mpfr_mul(r83944901, r83944899, r83944900, MPFR_RNDN);
        mpfr_add(r83944902, r83944898, r83944901, MPFR_RNDN);
        ;
        mpfr_mul(r83944904, r83944900, r83944884, MPFR_RNDN);
        mpfr_mul(r83944905, r83944903, r83944904, MPFR_RNDN);
        mpfr_add(r83944906, r83944902, r83944905, MPFR_RNDN);
        ;
        mpfr_mul(r83944908, r83944904, r83944884, MPFR_RNDN);
        mpfr_mul(r83944909, r83944907, r83944908, MPFR_RNDN);
        mpfr_add(r83944910, r83944906, r83944909, MPFR_RNDN);
        ;
        mpfr_mul(r83944912, r83944908, r83944884, MPFR_RNDN);
        mpfr_mul(r83944913, r83944911, r83944912, MPFR_RNDN);
        mpfr_add(r83944914, r83944910, r83944913, MPFR_RNDN);
        ;
        mpfr_mul(r83944916, r83944912, r83944884, MPFR_RNDN);
        mpfr_mul(r83944917, r83944915, r83944916, MPFR_RNDN);
        mpfr_add(r83944918, r83944914, r83944917, MPFR_RNDN);
        return mpfr_get_d(r83944918, MPFR_RNDN);
}

static mpfr_t r83944919, r83944920, r83944921, r83944922, r83944923, r83944924, r83944925, r83944926, r83944927, r83944928, r83944929, r83944930, r83944931, r83944932, r83944933, r83944934, r83944935, r83944936, r83944937, r83944938, r83944939, r83944940, r83944941, r83944942, r83944943, r83944944, r83944945, r83944946, r83944947, r83944948, r83944949, r83944950, r83944951, r83944952, r83944953, r83944954, r83944955, r83944956, r83944957, r83944958, r83944959, r83944960, r83944961, r83944962, r83944963, r83944964, r83944965, r83944966, r83944967, r83944968, r83944969, r83944970, r83944971, r83944972, r83944973, r83944974, r83944975, r83944976, r83944977, r83944978, r83944979, r83944980, r83944981, r83944982, r83944983, r83944984;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83944919);
        mpfr_init_set_str(r83944920, "3", 10, MPFR_RNDN);
        mpfr_init(r83944921);
        mpfr_init_set_str(r83944922, "8.75", 10, MPFR_RNDN);
        mpfr_init(r83944923);
        mpfr_init_set_str(r83944924, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r83944925);
        mpfr_init(r83944926);
        mpfr_init_set_str(r83944927, "22.5", 10, MPFR_RNDN);
        mpfr_init(r83944928);
        mpfr_init(r83944929);
        mpfr_init_set_str(r83944930, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r83944931);
        mpfr_init_set_str(r83944932, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83944933);
        mpfr_init(r83944934);
        mpfr_init(r83944935);
        mpfr_init(r83944936);
        mpfr_init(r83944937);
        mpfr_init(r83944938);
        mpfr_init(r83944939);
        mpfr_init(r83944940);
        mpfr_init(r83944941);
        mpfr_init(r83944942);
        mpfr_init(r83944943);
        mpfr_init(r83944944);
        mpfr_init(r83944945);
        mpfr_init(r83944946);
        mpfr_init(r83944947);
        mpfr_init(r83944948);
        mpfr_init(r83944949);
        mpfr_init(r83944950);
        mpfr_init(r83944951);
        mpfr_init(r83944952);
        mpfr_init(r83944953);
        mpfr_init(r83944954);
        mpfr_init(r83944955);
        mpfr_init(r83944956);
        mpfr_init(r83944957);
        mpfr_init(r83944958);
        mpfr_init(r83944959);
        mpfr_init(r83944960);
        mpfr_init(r83944961);
        mpfr_init(r83944962);
        mpfr_init_set_str(r83944963, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r83944964);
        mpfr_init(r83944965);
        mpfr_init(r83944966);
        mpfr_init(r83944967);
        mpfr_init(r83944968);
        mpfr_init_set_str(r83944969, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r83944970);
        mpfr_init(r83944971);
        mpfr_init(r83944972);
        mpfr_init_set_str(r83944973, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r83944974);
        mpfr_init(r83944975);
        mpfr_init(r83944976);
        mpfr_init_set_str(r83944977, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r83944978);
        mpfr_init(r83944979);
        mpfr_init(r83944980);
        mpfr_init_set_str(r83944981, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r83944982);
        mpfr_init(r83944983);
        mpfr_init(r83944984);
}

double f_fm(double x) {
        mpfr_set_d(r83944919, x, MPFR_RNDN);
        ;
        mpfr_pow(r83944921, r83944919, r83944920, MPFR_RNDN);
        ;
        mpfr_mul(r83944923, r83944922, r83944919, MPFR_RNDN);
        ;
        mpfr_add(r83944925, r83944923, r83944924, MPFR_RNDN);
        mpfr_mul(r83944926, r83944921, r83944925, MPFR_RNDN);
        ;
        mpfr_mul(r83944928, r83944919, r83944927, MPFR_RNDN);
        mpfr_mul(r83944929, r83944919, r83944928, MPFR_RNDN);
        ;
        mpfr_mul(r83944931, r83944919, r83944930, MPFR_RNDN);
        ;
        mpfr_add(r83944933, r83944931, r83944932, MPFR_RNDN);
        mpfr_add(r83944934, r83944929, r83944933, MPFR_RNDN);
        mpfr_add(r83944935, r83944926, r83944934, MPFR_RNDN);
        mpfr_cbrt(r83944936, r83944935, MPFR_RNDN);
        mpfr_mul(r83944937, r83944930, r83944919, MPFR_RNDN);
        mpfr_add(r83944938, r83944937, r83944932, MPFR_RNDN);
        mpfr_mul(r83944939, r83944919, r83944919, MPFR_RNDN);
        mpfr_mul(r83944940, r83944927, r83944939, MPFR_RNDN);
        mpfr_add(r83944941, r83944938, r83944940, MPFR_RNDN);
        mpfr_add(r83944942, r83944926, r83944941, MPFR_RNDN);
        mpfr_exp(r83944943, r83944942, MPFR_RNDN);
        mpfr_log(r83944944, r83944943, MPFR_RNDN);
        mpfr_cbrt(r83944945, r83944944, MPFR_RNDN);
        mpfr_mul(r83944946, r83944936, r83944945, MPFR_RNDN);
        mpfr_mul(r83944947, r83944919, r83944924, MPFR_RNDN);
        mpfr_pow(r83944948, r83944947, r83944920, MPFR_RNDN);
        mpfr_pow(r83944949, r83944927, r83944920, MPFR_RNDN);
        mpfr_add(r83944950, r83944948, r83944949, MPFR_RNDN);
        mpfr_mul(r83944951, r83944947, r83944947, MPFR_RNDN);
        mpfr_sub(r83944952, r83944927, r83944947, MPFR_RNDN);
        mpfr_mul(r83944953, r83944952, r83944927, MPFR_RNDN);
        mpfr_add(r83944954, r83944951, r83944953, MPFR_RNDN);
        mpfr_div(r83944955, r83944950, r83944954, MPFR_RNDN);
        mpfr_mul(r83944956, r83944939, r83944955, MPFR_RNDN);
        mpfr_add(r83944957, r83944932, r83944931, MPFR_RNDN);
        mpfr_add(r83944958, r83944956, r83944957, MPFR_RNDN);
        mpfr_mul(r83944959, r83944921, r83944923, MPFR_RNDN);
        mpfr_add(r83944960, r83944958, r83944959, MPFR_RNDN);
        mpfr_cbrt(r83944961, r83944960, MPFR_RNDN);
        mpfr_mul(r83944962, r83944946, r83944961, MPFR_RNDN);
        ;
        mpfr_mul(r83944964, r83944939, r83944919, MPFR_RNDN);
        mpfr_mul(r83944965, r83944964, r83944919, MPFR_RNDN);
        mpfr_mul(r83944966, r83944965, r83944919, MPFR_RNDN);
        mpfr_mul(r83944967, r83944963, r83944966, MPFR_RNDN);
        mpfr_add(r83944968, r83944962, r83944967, MPFR_RNDN);
        ;
        mpfr_mul(r83944970, r83944966, r83944919, MPFR_RNDN);
        mpfr_mul(r83944971, r83944969, r83944970, MPFR_RNDN);
        mpfr_add(r83944972, r83944968, r83944971, MPFR_RNDN);
        ;
        mpfr_mul(r83944974, r83944970, r83944919, MPFR_RNDN);
        mpfr_mul(r83944975, r83944973, r83944974, MPFR_RNDN);
        mpfr_add(r83944976, r83944972, r83944975, MPFR_RNDN);
        ;
        mpfr_mul(r83944978, r83944974, r83944919, MPFR_RNDN);
        mpfr_mul(r83944979, r83944977, r83944978, MPFR_RNDN);
        mpfr_add(r83944980, r83944976, r83944979, MPFR_RNDN);
        ;
        mpfr_mul(r83944982, r83944978, r83944919, MPFR_RNDN);
        mpfr_mul(r83944983, r83944981, r83944982, MPFR_RNDN);
        mpfr_add(r83944984, r83944980, r83944983, MPFR_RNDN);
        return mpfr_get_d(r83944984, MPFR_RNDN);
}

static mpfr_t r83944985, r83944986, r83944987, r83944988, r83944989, r83944990, r83944991, r83944992, r83944993, r83944994, r83944995, r83944996, r83944997, r83944998, r83944999, r83945000, r83945001, r83945002, r83945003, r83945004, r83945005, r83945006, r83945007, r83945008, r83945009, r83945010, r83945011, r83945012, r83945013, r83945014, r83945015, r83945016, r83945017, r83945018, r83945019, r83945020, r83945021, r83945022, r83945023, r83945024, r83945025, r83945026, r83945027, r83945028, r83945029, r83945030, r83945031, r83945032, r83945033, r83945034, r83945035, r83945036, r83945037, r83945038, r83945039, r83945040, r83945041, r83945042, r83945043, r83945044, r83945045, r83945046, r83945047, r83945048, r83945049, r83945050;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83944985);
        mpfr_init_set_str(r83944986, "3", 10, MPFR_RNDN);
        mpfr_init(r83944987);
        mpfr_init_set_str(r83944988, "8.75", 10, MPFR_RNDN);
        mpfr_init(r83944989);
        mpfr_init_set_str(r83944990, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r83944991);
        mpfr_init(r83944992);
        mpfr_init_set_str(r83944993, "22.5", 10, MPFR_RNDN);
        mpfr_init(r83944994);
        mpfr_init(r83944995);
        mpfr_init_set_str(r83944996, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r83944997);
        mpfr_init_set_str(r83944998, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83944999);
        mpfr_init(r83945000);
        mpfr_init(r83945001);
        mpfr_init(r83945002);
        mpfr_init(r83945003);
        mpfr_init(r83945004);
        mpfr_init(r83945005);
        mpfr_init(r83945006);
        mpfr_init(r83945007);
        mpfr_init(r83945008);
        mpfr_init(r83945009);
        mpfr_init(r83945010);
        mpfr_init(r83945011);
        mpfr_init(r83945012);
        mpfr_init(r83945013);
        mpfr_init(r83945014);
        mpfr_init(r83945015);
        mpfr_init(r83945016);
        mpfr_init(r83945017);
        mpfr_init(r83945018);
        mpfr_init(r83945019);
        mpfr_init(r83945020);
        mpfr_init(r83945021);
        mpfr_init(r83945022);
        mpfr_init(r83945023);
        mpfr_init(r83945024);
        mpfr_init(r83945025);
        mpfr_init(r83945026);
        mpfr_init(r83945027);
        mpfr_init(r83945028);
        mpfr_init_set_str(r83945029, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r83945030);
        mpfr_init(r83945031);
        mpfr_init(r83945032);
        mpfr_init(r83945033);
        mpfr_init(r83945034);
        mpfr_init_set_str(r83945035, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r83945036);
        mpfr_init(r83945037);
        mpfr_init(r83945038);
        mpfr_init_set_str(r83945039, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r83945040);
        mpfr_init(r83945041);
        mpfr_init(r83945042);
        mpfr_init_set_str(r83945043, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r83945044);
        mpfr_init(r83945045);
        mpfr_init(r83945046);
        mpfr_init_set_str(r83945047, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r83945048);
        mpfr_init(r83945049);
        mpfr_init(r83945050);
}

double f_dm(double x) {
        mpfr_set_d(r83944985, x, MPFR_RNDN);
        ;
        mpfr_pow(r83944987, r83944985, r83944986, MPFR_RNDN);
        ;
        mpfr_mul(r83944989, r83944988, r83944985, MPFR_RNDN);
        ;
        mpfr_add(r83944991, r83944989, r83944990, MPFR_RNDN);
        mpfr_mul(r83944992, r83944987, r83944991, MPFR_RNDN);
        ;
        mpfr_mul(r83944994, r83944985, r83944993, MPFR_RNDN);
        mpfr_mul(r83944995, r83944985, r83944994, MPFR_RNDN);
        ;
        mpfr_mul(r83944997, r83944985, r83944996, MPFR_RNDN);
        ;
        mpfr_add(r83944999, r83944997, r83944998, MPFR_RNDN);
        mpfr_add(r83945000, r83944995, r83944999, MPFR_RNDN);
        mpfr_add(r83945001, r83944992, r83945000, MPFR_RNDN);
        mpfr_cbrt(r83945002, r83945001, MPFR_RNDN);
        mpfr_mul(r83945003, r83944996, r83944985, MPFR_RNDN);
        mpfr_add(r83945004, r83945003, r83944998, MPFR_RNDN);
        mpfr_mul(r83945005, r83944985, r83944985, MPFR_RNDN);
        mpfr_mul(r83945006, r83944993, r83945005, MPFR_RNDN);
        mpfr_add(r83945007, r83945004, r83945006, MPFR_RNDN);
        mpfr_add(r83945008, r83944992, r83945007, MPFR_RNDN);
        mpfr_exp(r83945009, r83945008, MPFR_RNDN);
        mpfr_log(r83945010, r83945009, MPFR_RNDN);
        mpfr_cbrt(r83945011, r83945010, MPFR_RNDN);
        mpfr_mul(r83945012, r83945002, r83945011, MPFR_RNDN);
        mpfr_mul(r83945013, r83944985, r83944990, MPFR_RNDN);
        mpfr_pow(r83945014, r83945013, r83944986, MPFR_RNDN);
        mpfr_pow(r83945015, r83944993, r83944986, MPFR_RNDN);
        mpfr_add(r83945016, r83945014, r83945015, MPFR_RNDN);
        mpfr_mul(r83945017, r83945013, r83945013, MPFR_RNDN);
        mpfr_sub(r83945018, r83944993, r83945013, MPFR_RNDN);
        mpfr_mul(r83945019, r83945018, r83944993, MPFR_RNDN);
        mpfr_add(r83945020, r83945017, r83945019, MPFR_RNDN);
        mpfr_div(r83945021, r83945016, r83945020, MPFR_RNDN);
        mpfr_mul(r83945022, r83945005, r83945021, MPFR_RNDN);
        mpfr_add(r83945023, r83944998, r83944997, MPFR_RNDN);
        mpfr_add(r83945024, r83945022, r83945023, MPFR_RNDN);
        mpfr_mul(r83945025, r83944987, r83944989, MPFR_RNDN);
        mpfr_add(r83945026, r83945024, r83945025, MPFR_RNDN);
        mpfr_cbrt(r83945027, r83945026, MPFR_RNDN);
        mpfr_mul(r83945028, r83945012, r83945027, MPFR_RNDN);
        ;
        mpfr_mul(r83945030, r83945005, r83944985, MPFR_RNDN);
        mpfr_mul(r83945031, r83945030, r83944985, MPFR_RNDN);
        mpfr_mul(r83945032, r83945031, r83944985, MPFR_RNDN);
        mpfr_mul(r83945033, r83945029, r83945032, MPFR_RNDN);
        mpfr_add(r83945034, r83945028, r83945033, MPFR_RNDN);
        ;
        mpfr_mul(r83945036, r83945032, r83944985, MPFR_RNDN);
        mpfr_mul(r83945037, r83945035, r83945036, MPFR_RNDN);
        mpfr_add(r83945038, r83945034, r83945037, MPFR_RNDN);
        ;
        mpfr_mul(r83945040, r83945036, r83944985, MPFR_RNDN);
        mpfr_mul(r83945041, r83945039, r83945040, MPFR_RNDN);
        mpfr_add(r83945042, r83945038, r83945041, MPFR_RNDN);
        ;
        mpfr_mul(r83945044, r83945040, r83944985, MPFR_RNDN);
        mpfr_mul(r83945045, r83945043, r83945044, MPFR_RNDN);
        mpfr_add(r83945046, r83945042, r83945045, MPFR_RNDN);
        ;
        mpfr_mul(r83945048, r83945044, r83944985, MPFR_RNDN);
        mpfr_mul(r83945049, r83945047, r83945048, MPFR_RNDN);
        mpfr_add(r83945050, r83945046, r83945049, MPFR_RNDN);
        return mpfr_get_d(r83945050, MPFR_RNDN);
}
