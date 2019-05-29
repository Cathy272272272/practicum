#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r10583751 = 1.0;
        float r10583752 = -9.0;
        float r10583753 = x;
        float r10583754 = r10583752 * r10583753;
        float r10583755 = r10583751 + r10583754;
        float r10583756 = 18.0;
        float r10583757 = r10583753 * r10583753;
        float r10583758 = r10583756 * r10583757;
        float r10583759 = r10583755 + r10583758;
        float r10583760 = -14.0;
        float r10583761 = r10583757 * r10583753;
        float r10583762 = r10583760 * r10583761;
        float r10583763 = r10583759 + r10583762;
        float r10583764 = 5.25;
        float r10583765 = r10583761 * r10583753;
        float r10583766 = r10583764 * r10583765;
        float r10583767 = r10583763 + r10583766;
        float r10583768 = -1.05;
        float r10583769 = r10583765 * r10583753;
        float r10583770 = r10583768 * r10583769;
        float r10583771 = r10583767 + r10583770;
        float r10583772 = 0.116667;
        float r10583773 = r10583769 * r10583753;
        float r10583774 = r10583772 * r10583773;
        float r10583775 = r10583771 + r10583774;
        float r10583776 = -0.007143;
        float r10583777 = r10583773 * r10583753;
        float r10583778 = r10583776 * r10583777;
        float r10583779 = r10583775 + r10583778;
        float r10583780 = 0.000223;
        float r10583781 = r10583777 * r10583753;
        float r10583782 = r10583780 * r10583781;
        float r10583783 = r10583779 + r10583782;
        float r10583784 = -3e-06;
        float r10583785 = r10583781 * r10583753;
        float r10583786 = r10583784 * r10583785;
        float r10583787 = r10583783 + r10583786;
        return r10583787;
}

double f_id(double x) {
        double r10583788 = 1.0;
        double r10583789 = -9.0;
        double r10583790 = x;
        double r10583791 = r10583789 * r10583790;
        double r10583792 = r10583788 + r10583791;
        double r10583793 = 18.0;
        double r10583794 = r10583790 * r10583790;
        double r10583795 = r10583793 * r10583794;
        double r10583796 = r10583792 + r10583795;
        double r10583797 = -14.0;
        double r10583798 = r10583794 * r10583790;
        double r10583799 = r10583797 * r10583798;
        double r10583800 = r10583796 + r10583799;
        double r10583801 = 5.25;
        double r10583802 = r10583798 * r10583790;
        double r10583803 = r10583801 * r10583802;
        double r10583804 = r10583800 + r10583803;
        double r10583805 = -1.05;
        double r10583806 = r10583802 * r10583790;
        double r10583807 = r10583805 * r10583806;
        double r10583808 = r10583804 + r10583807;
        double r10583809 = 0.116667;
        double r10583810 = r10583806 * r10583790;
        double r10583811 = r10583809 * r10583810;
        double r10583812 = r10583808 + r10583811;
        double r10583813 = -0.007143;
        double r10583814 = r10583810 * r10583790;
        double r10583815 = r10583813 * r10583814;
        double r10583816 = r10583812 + r10583815;
        double r10583817 = 0.000223;
        double r10583818 = r10583814 * r10583790;
        double r10583819 = r10583817 * r10583818;
        double r10583820 = r10583816 + r10583819;
        double r10583821 = -3e-06;
        double r10583822 = r10583818 * r10583790;
        double r10583823 = r10583821 * r10583822;
        double r10583824 = r10583820 + r10583823;
        return r10583824;
}


double f_of(float x) {
        float r10583825 = x;
        float r10583826 = r10583825 * r10583825;
        float r10583827 = 0.116667;
        float r10583828 = r10583826 * r10583827;
        float r10583829 = r10583826 * r10583826;
        float r10583830 = r10583828 * r10583829;
        float r10583831 = -9.0;
        float r10583832 = r10583825 * r10583831;
        float r10583833 = 1.0;
        float r10583834 = r10583832 + r10583833;
        float r10583835 = r10583830 + r10583834;
        float r10583836 = -1.05;
        float r10583837 = r10583836 * r10583825;
        float r10583838 = 5.25;
        float r10583839 = r10583837 + r10583838;
        float r10583840 = r10583829 * r10583839;
        float r10583841 = -14.0;
        float r10583842 = r10583841 * r10583825;
        float r10583843 = r10583826 * r10583842;
        float r10583844 = 18.0;
        float r10583845 = r10583844 * r10583826;
        float r10583846 = r10583843 + r10583845;
        float r10583847 = r10583840 + r10583846;
        float r10583848 = r10583835 + r10583847;
        float r10583849 = r10583826 * r10583825;
        float r10583850 = r10583849 * r10583829;
        float r10583851 = -0.007143;
        float r10583852 = 0.000223;
        float r10583853 = r10583852 * r10583825;
        float r10583854 = r10583851 + r10583853;
        float r10583855 = r10583850 * r10583854;
        float r10583856 = -3e-06;
        float r10583857 = r10583825 * r10583856;
        float r10583858 = r10583829 * r10583829;
        float r10583859 = r10583857 * r10583858;
        float r10583860 = r10583855 + r10583859;
        float r10583861 = r10583848 + r10583860;
        return r10583861;
}

double f_od(double x) {
        double r10583862 = x;
        double r10583863 = r10583862 * r10583862;
        double r10583864 = 0.116667;
        double r10583865 = r10583863 * r10583864;
        double r10583866 = r10583863 * r10583863;
        double r10583867 = r10583865 * r10583866;
        double r10583868 = -9.0;
        double r10583869 = r10583862 * r10583868;
        double r10583870 = 1.0;
        double r10583871 = r10583869 + r10583870;
        double r10583872 = r10583867 + r10583871;
        double r10583873 = -1.05;
        double r10583874 = r10583873 * r10583862;
        double r10583875 = 5.25;
        double r10583876 = r10583874 + r10583875;
        double r10583877 = r10583866 * r10583876;
        double r10583878 = -14.0;
        double r10583879 = r10583878 * r10583862;
        double r10583880 = r10583863 * r10583879;
        double r10583881 = 18.0;
        double r10583882 = r10583881 * r10583863;
        double r10583883 = r10583880 + r10583882;
        double r10583884 = r10583877 + r10583883;
        double r10583885 = r10583872 + r10583884;
        double r10583886 = r10583863 * r10583862;
        double r10583887 = r10583886 * r10583866;
        double r10583888 = -0.007143;
        double r10583889 = 0.000223;
        double r10583890 = r10583889 * r10583862;
        double r10583891 = r10583888 + r10583890;
        double r10583892 = r10583887 * r10583891;
        double r10583893 = -3e-06;
        double r10583894 = r10583862 * r10583893;
        double r10583895 = r10583866 * r10583866;
        double r10583896 = r10583894 * r10583895;
        double r10583897 = r10583892 + r10583896;
        double r10583898 = r10583885 + r10583897;
        return r10583898;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10583899, r10583900, r10583901, r10583902, r10583903, r10583904, r10583905, r10583906, r10583907, r10583908, r10583909, r10583910, r10583911, r10583912, r10583913, r10583914, r10583915, r10583916, r10583917, r10583918, r10583919, r10583920, r10583921, r10583922, r10583923, r10583924, r10583925, r10583926, r10583927, r10583928, r10583929, r10583930, r10583931, r10583932, r10583933, r10583934, r10583935;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10583899, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10583900, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10583901);
        mpfr_init(r10583902);
        mpfr_init(r10583903);
        mpfr_init_set_str(r10583904, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10583905);
        mpfr_init(r10583906);
        mpfr_init(r10583907);
        mpfr_init_set_str(r10583908, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10583909);
        mpfr_init(r10583910);
        mpfr_init(r10583911);
        mpfr_init_set_str(r10583912, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10583913);
        mpfr_init(r10583914);
        mpfr_init(r10583915);
        mpfr_init_set_str(r10583916, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10583917);
        mpfr_init(r10583918);
        mpfr_init(r10583919);
        mpfr_init_set_str(r10583920, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10583921);
        mpfr_init(r10583922);
        mpfr_init(r10583923);
        mpfr_init_set_str(r10583924, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10583925);
        mpfr_init(r10583926);
        mpfr_init(r10583927);
        mpfr_init_set_str(r10583928, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10583929);
        mpfr_init(r10583930);
        mpfr_init(r10583931);
        mpfr_init_set_str(r10583932, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10583933);
        mpfr_init(r10583934);
        mpfr_init(r10583935);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10583901, x, MPFR_RNDN);
        mpfr_mul(r10583902, r10583900, r10583901, MPFR_RNDN);
        mpfr_add(r10583903, r10583899, r10583902, MPFR_RNDN);
        ;
        mpfr_mul(r10583905, r10583901, r10583901, MPFR_RNDN);
        mpfr_mul(r10583906, r10583904, r10583905, MPFR_RNDN);
        mpfr_add(r10583907, r10583903, r10583906, MPFR_RNDN);
        ;
        mpfr_mul(r10583909, r10583905, r10583901, MPFR_RNDN);
        mpfr_mul(r10583910, r10583908, r10583909, MPFR_RNDN);
        mpfr_add(r10583911, r10583907, r10583910, MPFR_RNDN);
        ;
        mpfr_mul(r10583913, r10583909, r10583901, MPFR_RNDN);
        mpfr_mul(r10583914, r10583912, r10583913, MPFR_RNDN);
        mpfr_add(r10583915, r10583911, r10583914, MPFR_RNDN);
        ;
        mpfr_mul(r10583917, r10583913, r10583901, MPFR_RNDN);
        mpfr_mul(r10583918, r10583916, r10583917, MPFR_RNDN);
        mpfr_add(r10583919, r10583915, r10583918, MPFR_RNDN);
        ;
        mpfr_mul(r10583921, r10583917, r10583901, MPFR_RNDN);
        mpfr_mul(r10583922, r10583920, r10583921, MPFR_RNDN);
        mpfr_add(r10583923, r10583919, r10583922, MPFR_RNDN);
        ;
        mpfr_mul(r10583925, r10583921, r10583901, MPFR_RNDN);
        mpfr_mul(r10583926, r10583924, r10583925, MPFR_RNDN);
        mpfr_add(r10583927, r10583923, r10583926, MPFR_RNDN);
        ;
        mpfr_mul(r10583929, r10583925, r10583901, MPFR_RNDN);
        mpfr_mul(r10583930, r10583928, r10583929, MPFR_RNDN);
        mpfr_add(r10583931, r10583927, r10583930, MPFR_RNDN);
        ;
        mpfr_mul(r10583933, r10583929, r10583901, MPFR_RNDN);
        mpfr_mul(r10583934, r10583932, r10583933, MPFR_RNDN);
        mpfr_add(r10583935, r10583931, r10583934, MPFR_RNDN);
        return mpfr_get_d(r10583935, MPFR_RNDN);
}

static mpfr_t r10583936, r10583937, r10583938, r10583939, r10583940, r10583941, r10583942, r10583943, r10583944, r10583945, r10583946, r10583947, r10583948, r10583949, r10583950, r10583951, r10583952, r10583953, r10583954, r10583955, r10583956, r10583957, r10583958, r10583959, r10583960, r10583961, r10583962, r10583963, r10583964, r10583965, r10583966, r10583967, r10583968, r10583969, r10583970, r10583971, r10583972;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10583936);
        mpfr_init(r10583937);
        mpfr_init_set_str(r10583938, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10583939);
        mpfr_init(r10583940);
        mpfr_init(r10583941);
        mpfr_init_set_str(r10583942, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10583943);
        mpfr_init_set_str(r10583944, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10583945);
        mpfr_init(r10583946);
        mpfr_init_set_str(r10583947, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10583948);
        mpfr_init_set_str(r10583949, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10583950);
        mpfr_init(r10583951);
        mpfr_init_set_str(r10583952, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10583953);
        mpfr_init(r10583954);
        mpfr_init_set_str(r10583955, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10583956);
        mpfr_init(r10583957);
        mpfr_init(r10583958);
        mpfr_init(r10583959);
        mpfr_init(r10583960);
        mpfr_init(r10583961);
        mpfr_init_set_str(r10583962, "-0.007143", 10, MPFR_RNDN);
        mpfr_init_set_str(r10583963, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10583964);
        mpfr_init(r10583965);
        mpfr_init(r10583966);
        mpfr_init_set_str(r10583967, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10583968);
        mpfr_init(r10583969);
        mpfr_init(r10583970);
        mpfr_init(r10583971);
        mpfr_init(r10583972);
}

double f_fm(double x) {
        mpfr_set_d(r10583936, x, MPFR_RNDN);
        mpfr_mul(r10583937, r10583936, r10583936, MPFR_RNDN);
        ;
        mpfr_mul(r10583939, r10583937, r10583938, MPFR_RNDN);
        mpfr_mul(r10583940, r10583937, r10583937, MPFR_RNDN);
        mpfr_mul(r10583941, r10583939, r10583940, MPFR_RNDN);
        ;
        mpfr_mul(r10583943, r10583936, r10583942, MPFR_RNDN);
        ;
        mpfr_add(r10583945, r10583943, r10583944, MPFR_RNDN);
        mpfr_add(r10583946, r10583941, r10583945, MPFR_RNDN);
        ;
        mpfr_mul(r10583948, r10583947, r10583936, MPFR_RNDN);
        ;
        mpfr_add(r10583950, r10583948, r10583949, MPFR_RNDN);
        mpfr_mul(r10583951, r10583940, r10583950, MPFR_RNDN);
        ;
        mpfr_mul(r10583953, r10583952, r10583936, MPFR_RNDN);
        mpfr_mul(r10583954, r10583937, r10583953, MPFR_RNDN);
        ;
        mpfr_mul(r10583956, r10583955, r10583937, MPFR_RNDN);
        mpfr_add(r10583957, r10583954, r10583956, MPFR_RNDN);
        mpfr_add(r10583958, r10583951, r10583957, MPFR_RNDN);
        mpfr_add(r10583959, r10583946, r10583958, MPFR_RNDN);
        mpfr_mul(r10583960, r10583937, r10583936, MPFR_RNDN);
        mpfr_mul(r10583961, r10583960, r10583940, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10583964, r10583963, r10583936, MPFR_RNDN);
        mpfr_add(r10583965, r10583962, r10583964, MPFR_RNDN);
        mpfr_mul(r10583966, r10583961, r10583965, MPFR_RNDN);
        ;
        mpfr_mul(r10583968, r10583936, r10583967, MPFR_RNDN);
        mpfr_mul(r10583969, r10583940, r10583940, MPFR_RNDN);
        mpfr_mul(r10583970, r10583968, r10583969, MPFR_RNDN);
        mpfr_add(r10583971, r10583966, r10583970, MPFR_RNDN);
        mpfr_add(r10583972, r10583959, r10583971, MPFR_RNDN);
        return mpfr_get_d(r10583972, MPFR_RNDN);
}

static mpfr_t r10583973, r10583974, r10583975, r10583976, r10583977, r10583978, r10583979, r10583980, r10583981, r10583982, r10583983, r10583984, r10583985, r10583986, r10583987, r10583988, r10583989, r10583990, r10583991, r10583992, r10583993, r10583994, r10583995, r10583996, r10583997, r10583998, r10583999, r10584000, r10584001, r10584002, r10584003, r10584004, r10584005, r10584006, r10584007, r10584008, r10584009;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10583973);
        mpfr_init(r10583974);
        mpfr_init_set_str(r10583975, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10583976);
        mpfr_init(r10583977);
        mpfr_init(r10583978);
        mpfr_init_set_str(r10583979, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10583980);
        mpfr_init_set_str(r10583981, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10583982);
        mpfr_init(r10583983);
        mpfr_init_set_str(r10583984, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10583985);
        mpfr_init_set_str(r10583986, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10583987);
        mpfr_init(r10583988);
        mpfr_init_set_str(r10583989, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10583990);
        mpfr_init(r10583991);
        mpfr_init_set_str(r10583992, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10583993);
        mpfr_init(r10583994);
        mpfr_init(r10583995);
        mpfr_init(r10583996);
        mpfr_init(r10583997);
        mpfr_init(r10583998);
        mpfr_init_set_str(r10583999, "-0.007143", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584000, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10584001);
        mpfr_init(r10584002);
        mpfr_init(r10584003);
        mpfr_init_set_str(r10584004, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10584005);
        mpfr_init(r10584006);
        mpfr_init(r10584007);
        mpfr_init(r10584008);
        mpfr_init(r10584009);
}

double f_dm(double x) {
        mpfr_set_d(r10583973, x, MPFR_RNDN);
        mpfr_mul(r10583974, r10583973, r10583973, MPFR_RNDN);
        ;
        mpfr_mul(r10583976, r10583974, r10583975, MPFR_RNDN);
        mpfr_mul(r10583977, r10583974, r10583974, MPFR_RNDN);
        mpfr_mul(r10583978, r10583976, r10583977, MPFR_RNDN);
        ;
        mpfr_mul(r10583980, r10583973, r10583979, MPFR_RNDN);
        ;
        mpfr_add(r10583982, r10583980, r10583981, MPFR_RNDN);
        mpfr_add(r10583983, r10583978, r10583982, MPFR_RNDN);
        ;
        mpfr_mul(r10583985, r10583984, r10583973, MPFR_RNDN);
        ;
        mpfr_add(r10583987, r10583985, r10583986, MPFR_RNDN);
        mpfr_mul(r10583988, r10583977, r10583987, MPFR_RNDN);
        ;
        mpfr_mul(r10583990, r10583989, r10583973, MPFR_RNDN);
        mpfr_mul(r10583991, r10583974, r10583990, MPFR_RNDN);
        ;
        mpfr_mul(r10583993, r10583992, r10583974, MPFR_RNDN);
        mpfr_add(r10583994, r10583991, r10583993, MPFR_RNDN);
        mpfr_add(r10583995, r10583988, r10583994, MPFR_RNDN);
        mpfr_add(r10583996, r10583983, r10583995, MPFR_RNDN);
        mpfr_mul(r10583997, r10583974, r10583973, MPFR_RNDN);
        mpfr_mul(r10583998, r10583997, r10583977, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584001, r10584000, r10583973, MPFR_RNDN);
        mpfr_add(r10584002, r10583999, r10584001, MPFR_RNDN);
        mpfr_mul(r10584003, r10583998, r10584002, MPFR_RNDN);
        ;
        mpfr_mul(r10584005, r10583973, r10584004, MPFR_RNDN);
        mpfr_mul(r10584006, r10583977, r10583977, MPFR_RNDN);
        mpfr_mul(r10584007, r10584005, r10584006, MPFR_RNDN);
        mpfr_add(r10584008, r10584003, r10584007, MPFR_RNDN);
        mpfr_add(r10584009, r10583996, r10584008, MPFR_RNDN);
        return mpfr_get_d(r10584009, MPFR_RNDN);
}

