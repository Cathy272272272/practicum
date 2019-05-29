#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r9851707 = 1.0;
        float r9851708 = -9.0;
        float r9851709 = x;
        float r9851710 = r9851708 * r9851709;
        float r9851711 = r9851707 + r9851710;
        float r9851712 = 18.0;
        float r9851713 = r9851709 * r9851709;
        float r9851714 = r9851712 * r9851713;
        float r9851715 = r9851711 + r9851714;
        float r9851716 = -14.0;
        float r9851717 = r9851713 * r9851709;
        float r9851718 = r9851716 * r9851717;
        float r9851719 = r9851715 + r9851718;
        float r9851720 = 5.25;
        float r9851721 = r9851717 * r9851709;
        float r9851722 = r9851720 * r9851721;
        float r9851723 = r9851719 + r9851722;
        float r9851724 = -1.05;
        float r9851725 = r9851721 * r9851709;
        float r9851726 = r9851724 * r9851725;
        float r9851727 = r9851723 + r9851726;
        float r9851728 = 0.116667;
        float r9851729 = r9851725 * r9851709;
        float r9851730 = r9851728 * r9851729;
        float r9851731 = r9851727 + r9851730;
        float r9851732 = -0.007143;
        float r9851733 = r9851729 * r9851709;
        float r9851734 = r9851732 * r9851733;
        float r9851735 = r9851731 + r9851734;
        float r9851736 = 0.000223;
        float r9851737 = r9851733 * r9851709;
        float r9851738 = r9851736 * r9851737;
        float r9851739 = r9851735 + r9851738;
        float r9851740 = -3e-06;
        float r9851741 = r9851737 * r9851709;
        float r9851742 = r9851740 * r9851741;
        float r9851743 = r9851739 + r9851742;
        return r9851743;
}

double f_id(double x) {
        double r9851744 = 1.0;
        double r9851745 = -9.0;
        double r9851746 = x;
        double r9851747 = r9851745 * r9851746;
        double r9851748 = r9851744 + r9851747;
        double r9851749 = 18.0;
        double r9851750 = r9851746 * r9851746;
        double r9851751 = r9851749 * r9851750;
        double r9851752 = r9851748 + r9851751;
        double r9851753 = -14.0;
        double r9851754 = r9851750 * r9851746;
        double r9851755 = r9851753 * r9851754;
        double r9851756 = r9851752 + r9851755;
        double r9851757 = 5.25;
        double r9851758 = r9851754 * r9851746;
        double r9851759 = r9851757 * r9851758;
        double r9851760 = r9851756 + r9851759;
        double r9851761 = -1.05;
        double r9851762 = r9851758 * r9851746;
        double r9851763 = r9851761 * r9851762;
        double r9851764 = r9851760 + r9851763;
        double r9851765 = 0.116667;
        double r9851766 = r9851762 * r9851746;
        double r9851767 = r9851765 * r9851766;
        double r9851768 = r9851764 + r9851767;
        double r9851769 = -0.007143;
        double r9851770 = r9851766 * r9851746;
        double r9851771 = r9851769 * r9851770;
        double r9851772 = r9851768 + r9851771;
        double r9851773 = 0.000223;
        double r9851774 = r9851770 * r9851746;
        double r9851775 = r9851773 * r9851774;
        double r9851776 = r9851772 + r9851775;
        double r9851777 = -3e-06;
        double r9851778 = r9851774 * r9851746;
        double r9851779 = r9851777 * r9851778;
        double r9851780 = r9851776 + r9851779;
        return r9851780;
}


double f_of(float x) {
        float r9851781 = x;
        float r9851782 = 0.116667;
        float r9851783 = r9851782 * r9851781;
        float r9851784 = r9851781 * r9851783;
        float r9851785 = r9851781 * r9851781;
        float r9851786 = r9851785 * r9851785;
        float r9851787 = r9851784 * r9851786;
        float r9851788 = -9.0;
        float r9851789 = r9851781 * r9851788;
        float r9851790 = 1.0;
        float r9851791 = r9851789 + r9851790;
        float r9851792 = r9851787 + r9851791;
        float r9851793 = -14.0;
        float r9851794 = r9851793 * r9851781;
        float r9851795 = 18.0;
        float r9851796 = r9851794 + r9851795;
        float r9851797 = r9851785 * r9851796;
        float r9851798 = 5.25;
        float r9851799 = -1.05;
        float r9851800 = r9851799 * r9851781;
        float r9851801 = r9851798 + r9851800;
        float r9851802 = r9851786 * r9851801;
        float r9851803 = r9851797 + r9851802;
        float r9851804 = r9851792 + r9851803;
        float r9851805 = 3;
        float r9851806 = pow(r9851781, r9851805);
        float r9851807 = r9851806 * r9851806;
        float r9851808 = -0.007143;
        float r9851809 = 0.000223;
        float r9851810 = r9851781 * r9851809;
        float r9851811 = r9851808 + r9851810;
        float r9851812 = r9851807 * r9851811;
        float r9851813 = -3e-06;
        float r9851814 = 4;
        float r9851815 = pow(r9851781, r9851814);
        float r9851816 = r9851813 * r9851815;
        float r9851817 = r9851816 * r9851786;
        float r9851818 = r9851812 + r9851817;
        float r9851819 = r9851781 * r9851818;
        float r9851820 = r9851804 + r9851819;
        return r9851820;
}

double f_od(double x) {
        double r9851821 = x;
        double r9851822 = 0.116667;
        double r9851823 = r9851822 * r9851821;
        double r9851824 = r9851821 * r9851823;
        double r9851825 = r9851821 * r9851821;
        double r9851826 = r9851825 * r9851825;
        double r9851827 = r9851824 * r9851826;
        double r9851828 = -9.0;
        double r9851829 = r9851821 * r9851828;
        double r9851830 = 1.0;
        double r9851831 = r9851829 + r9851830;
        double r9851832 = r9851827 + r9851831;
        double r9851833 = -14.0;
        double r9851834 = r9851833 * r9851821;
        double r9851835 = 18.0;
        double r9851836 = r9851834 + r9851835;
        double r9851837 = r9851825 * r9851836;
        double r9851838 = 5.25;
        double r9851839 = -1.05;
        double r9851840 = r9851839 * r9851821;
        double r9851841 = r9851838 + r9851840;
        double r9851842 = r9851826 * r9851841;
        double r9851843 = r9851837 + r9851842;
        double r9851844 = r9851832 + r9851843;
        double r9851845 = 3;
        double r9851846 = pow(r9851821, r9851845);
        double r9851847 = r9851846 * r9851846;
        double r9851848 = -0.007143;
        double r9851849 = 0.000223;
        double r9851850 = r9851821 * r9851849;
        double r9851851 = r9851848 + r9851850;
        double r9851852 = r9851847 * r9851851;
        double r9851853 = -3e-06;
        double r9851854 = 4;
        double r9851855 = pow(r9851821, r9851854);
        double r9851856 = r9851853 * r9851855;
        double r9851857 = r9851856 * r9851826;
        double r9851858 = r9851852 + r9851857;
        double r9851859 = r9851821 * r9851858;
        double r9851860 = r9851844 + r9851859;
        return r9851860;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9851861, r9851862, r9851863, r9851864, r9851865, r9851866, r9851867, r9851868, r9851869, r9851870, r9851871, r9851872, r9851873, r9851874, r9851875, r9851876, r9851877, r9851878, r9851879, r9851880, r9851881, r9851882, r9851883, r9851884, r9851885, r9851886, r9851887, r9851888, r9851889, r9851890, r9851891, r9851892, r9851893, r9851894, r9851895, r9851896, r9851897;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9851861, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9851862, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r9851863);
        mpfr_init(r9851864);
        mpfr_init(r9851865);
        mpfr_init_set_str(r9851866, "18.0", 10, MPFR_RNDN);
        mpfr_init(r9851867);
        mpfr_init(r9851868);
        mpfr_init(r9851869);
        mpfr_init_set_str(r9851870, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9851871);
        mpfr_init(r9851872);
        mpfr_init(r9851873);
        mpfr_init_set_str(r9851874, "5.25", 10, MPFR_RNDN);
        mpfr_init(r9851875);
        mpfr_init(r9851876);
        mpfr_init(r9851877);
        mpfr_init_set_str(r9851878, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r9851879);
        mpfr_init(r9851880);
        mpfr_init(r9851881);
        mpfr_init_set_str(r9851882, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r9851883);
        mpfr_init(r9851884);
        mpfr_init(r9851885);
        mpfr_init_set_str(r9851886, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r9851887);
        mpfr_init(r9851888);
        mpfr_init(r9851889);
        mpfr_init_set_str(r9851890, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r9851891);
        mpfr_init(r9851892);
        mpfr_init(r9851893);
        mpfr_init_set_str(r9851894, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r9851895);
        mpfr_init(r9851896);
        mpfr_init(r9851897);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9851863, x, MPFR_RNDN);
        mpfr_mul(r9851864, r9851862, r9851863, MPFR_RNDN);
        mpfr_add(r9851865, r9851861, r9851864, MPFR_RNDN);
        ;
        mpfr_mul(r9851867, r9851863, r9851863, MPFR_RNDN);
        mpfr_mul(r9851868, r9851866, r9851867, MPFR_RNDN);
        mpfr_add(r9851869, r9851865, r9851868, MPFR_RNDN);
        ;
        mpfr_mul(r9851871, r9851867, r9851863, MPFR_RNDN);
        mpfr_mul(r9851872, r9851870, r9851871, MPFR_RNDN);
        mpfr_add(r9851873, r9851869, r9851872, MPFR_RNDN);
        ;
        mpfr_mul(r9851875, r9851871, r9851863, MPFR_RNDN);
        mpfr_mul(r9851876, r9851874, r9851875, MPFR_RNDN);
        mpfr_add(r9851877, r9851873, r9851876, MPFR_RNDN);
        ;
        mpfr_mul(r9851879, r9851875, r9851863, MPFR_RNDN);
        mpfr_mul(r9851880, r9851878, r9851879, MPFR_RNDN);
        mpfr_add(r9851881, r9851877, r9851880, MPFR_RNDN);
        ;
        mpfr_mul(r9851883, r9851879, r9851863, MPFR_RNDN);
        mpfr_mul(r9851884, r9851882, r9851883, MPFR_RNDN);
        mpfr_add(r9851885, r9851881, r9851884, MPFR_RNDN);
        ;
        mpfr_mul(r9851887, r9851883, r9851863, MPFR_RNDN);
        mpfr_mul(r9851888, r9851886, r9851887, MPFR_RNDN);
        mpfr_add(r9851889, r9851885, r9851888, MPFR_RNDN);
        ;
        mpfr_mul(r9851891, r9851887, r9851863, MPFR_RNDN);
        mpfr_mul(r9851892, r9851890, r9851891, MPFR_RNDN);
        mpfr_add(r9851893, r9851889, r9851892, MPFR_RNDN);
        ;
        mpfr_mul(r9851895, r9851891, r9851863, MPFR_RNDN);
        mpfr_mul(r9851896, r9851894, r9851895, MPFR_RNDN);
        mpfr_add(r9851897, r9851893, r9851896, MPFR_RNDN);
        return mpfr_get_d(r9851897, MPFR_RNDN);
}

static mpfr_t r9851898, r9851899, r9851900, r9851901, r9851902, r9851903, r9851904, r9851905, r9851906, r9851907, r9851908, r9851909, r9851910, r9851911, r9851912, r9851913, r9851914, r9851915, r9851916, r9851917, r9851918, r9851919, r9851920, r9851921, r9851922, r9851923, r9851924, r9851925, r9851926, r9851927, r9851928, r9851929, r9851930, r9851931, r9851932, r9851933, r9851934, r9851935, r9851936, r9851937;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9851898);
        mpfr_init_set_str(r9851899, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r9851900);
        mpfr_init(r9851901);
        mpfr_init(r9851902);
        mpfr_init(r9851903);
        mpfr_init(r9851904);
        mpfr_init_set_str(r9851905, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r9851906);
        mpfr_init_set_str(r9851907, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9851908);
        mpfr_init(r9851909);
        mpfr_init_set_str(r9851910, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9851911);
        mpfr_init_set_str(r9851912, "18.0", 10, MPFR_RNDN);
        mpfr_init(r9851913);
        mpfr_init(r9851914);
        mpfr_init_set_str(r9851915, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r9851916, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r9851917);
        mpfr_init(r9851918);
        mpfr_init(r9851919);
        mpfr_init(r9851920);
        mpfr_init(r9851921);
        mpfr_init_set_str(r9851922, "3", 10, MPFR_RNDN);
        mpfr_init(r9851923);
        mpfr_init(r9851924);
        mpfr_init_set_str(r9851925, "-0.007143", 10, MPFR_RNDN);
        mpfr_init_set_str(r9851926, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r9851927);
        mpfr_init(r9851928);
        mpfr_init(r9851929);
        mpfr_init_set_str(r9851930, "-3e-06", 10, MPFR_RNDN);
        mpfr_init_set_str(r9851931, "4", 10, MPFR_RNDN);
        mpfr_init(r9851932);
        mpfr_init(r9851933);
        mpfr_init(r9851934);
        mpfr_init(r9851935);
        mpfr_init(r9851936);
        mpfr_init(r9851937);
}

double f_fm(double x) {
        mpfr_set_d(r9851898, x, MPFR_RNDN);
        ;
        mpfr_mul(r9851900, r9851899, r9851898, MPFR_RNDN);
        mpfr_mul(r9851901, r9851898, r9851900, MPFR_RNDN);
        mpfr_mul(r9851902, r9851898, r9851898, MPFR_RNDN);
        mpfr_mul(r9851903, r9851902, r9851902, MPFR_RNDN);
        mpfr_mul(r9851904, r9851901, r9851903, MPFR_RNDN);
        ;
        mpfr_mul(r9851906, r9851898, r9851905, MPFR_RNDN);
        ;
        mpfr_add(r9851908, r9851906, r9851907, MPFR_RNDN);
        mpfr_add(r9851909, r9851904, r9851908, MPFR_RNDN);
        ;
        mpfr_mul(r9851911, r9851910, r9851898, MPFR_RNDN);
        ;
        mpfr_add(r9851913, r9851911, r9851912, MPFR_RNDN);
        mpfr_mul(r9851914, r9851902, r9851913, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9851917, r9851916, r9851898, MPFR_RNDN);
        mpfr_add(r9851918, r9851915, r9851917, MPFR_RNDN);
        mpfr_mul(r9851919, r9851903, r9851918, MPFR_RNDN);
        mpfr_add(r9851920, r9851914, r9851919, MPFR_RNDN);
        mpfr_add(r9851921, r9851909, r9851920, MPFR_RNDN);
        ;
        mpfr_pow(r9851923, r9851898, r9851922, MPFR_RNDN);
        mpfr_mul(r9851924, r9851923, r9851923, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9851927, r9851898, r9851926, MPFR_RNDN);
        mpfr_add(r9851928, r9851925, r9851927, MPFR_RNDN);
        mpfr_mul(r9851929, r9851924, r9851928, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9851932, r9851898, r9851931, MPFR_RNDN);
        mpfr_mul(r9851933, r9851930, r9851932, MPFR_RNDN);
        mpfr_mul(r9851934, r9851933, r9851903, MPFR_RNDN);
        mpfr_add(r9851935, r9851929, r9851934, MPFR_RNDN);
        mpfr_mul(r9851936, r9851898, r9851935, MPFR_RNDN);
        mpfr_add(r9851937, r9851921, r9851936, MPFR_RNDN);
        return mpfr_get_d(r9851937, MPFR_RNDN);
}

static mpfr_t r9851938, r9851939, r9851940, r9851941, r9851942, r9851943, r9851944, r9851945, r9851946, r9851947, r9851948, r9851949, r9851950, r9851951, r9851952, r9851953, r9851954, r9851955, r9851956, r9851957, r9851958, r9851959, r9851960, r9851961, r9851962, r9851963, r9851964, r9851965, r9851966, r9851967, r9851968, r9851969, r9851970, r9851971, r9851972, r9851973, r9851974, r9851975, r9851976, r9851977;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9851938);
        mpfr_init_set_str(r9851939, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r9851940);
        mpfr_init(r9851941);
        mpfr_init(r9851942);
        mpfr_init(r9851943);
        mpfr_init(r9851944);
        mpfr_init_set_str(r9851945, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r9851946);
        mpfr_init_set_str(r9851947, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9851948);
        mpfr_init(r9851949);
        mpfr_init_set_str(r9851950, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9851951);
        mpfr_init_set_str(r9851952, "18.0", 10, MPFR_RNDN);
        mpfr_init(r9851953);
        mpfr_init(r9851954);
        mpfr_init_set_str(r9851955, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r9851956, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r9851957);
        mpfr_init(r9851958);
        mpfr_init(r9851959);
        mpfr_init(r9851960);
        mpfr_init(r9851961);
        mpfr_init_set_str(r9851962, "3", 10, MPFR_RNDN);
        mpfr_init(r9851963);
        mpfr_init(r9851964);
        mpfr_init_set_str(r9851965, "-0.007143", 10, MPFR_RNDN);
        mpfr_init_set_str(r9851966, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r9851967);
        mpfr_init(r9851968);
        mpfr_init(r9851969);
        mpfr_init_set_str(r9851970, "-3e-06", 10, MPFR_RNDN);
        mpfr_init_set_str(r9851971, "4", 10, MPFR_RNDN);
        mpfr_init(r9851972);
        mpfr_init(r9851973);
        mpfr_init(r9851974);
        mpfr_init(r9851975);
        mpfr_init(r9851976);
        mpfr_init(r9851977);
}

double f_dm(double x) {
        mpfr_set_d(r9851938, x, MPFR_RNDN);
        ;
        mpfr_mul(r9851940, r9851939, r9851938, MPFR_RNDN);
        mpfr_mul(r9851941, r9851938, r9851940, MPFR_RNDN);
        mpfr_mul(r9851942, r9851938, r9851938, MPFR_RNDN);
        mpfr_mul(r9851943, r9851942, r9851942, MPFR_RNDN);
        mpfr_mul(r9851944, r9851941, r9851943, MPFR_RNDN);
        ;
        mpfr_mul(r9851946, r9851938, r9851945, MPFR_RNDN);
        ;
        mpfr_add(r9851948, r9851946, r9851947, MPFR_RNDN);
        mpfr_add(r9851949, r9851944, r9851948, MPFR_RNDN);
        ;
        mpfr_mul(r9851951, r9851950, r9851938, MPFR_RNDN);
        ;
        mpfr_add(r9851953, r9851951, r9851952, MPFR_RNDN);
        mpfr_mul(r9851954, r9851942, r9851953, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9851957, r9851956, r9851938, MPFR_RNDN);
        mpfr_add(r9851958, r9851955, r9851957, MPFR_RNDN);
        mpfr_mul(r9851959, r9851943, r9851958, MPFR_RNDN);
        mpfr_add(r9851960, r9851954, r9851959, MPFR_RNDN);
        mpfr_add(r9851961, r9851949, r9851960, MPFR_RNDN);
        ;
        mpfr_pow(r9851963, r9851938, r9851962, MPFR_RNDN);
        mpfr_mul(r9851964, r9851963, r9851963, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9851967, r9851938, r9851966, MPFR_RNDN);
        mpfr_add(r9851968, r9851965, r9851967, MPFR_RNDN);
        mpfr_mul(r9851969, r9851964, r9851968, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9851972, r9851938, r9851971, MPFR_RNDN);
        mpfr_mul(r9851973, r9851970, r9851972, MPFR_RNDN);
        mpfr_mul(r9851974, r9851973, r9851943, MPFR_RNDN);
        mpfr_add(r9851975, r9851969, r9851974, MPFR_RNDN);
        mpfr_mul(r9851976, r9851938, r9851975, MPFR_RNDN);
        mpfr_add(r9851977, r9851961, r9851976, MPFR_RNDN);
        return mpfr_get_d(r9851977, MPFR_RNDN);
}

