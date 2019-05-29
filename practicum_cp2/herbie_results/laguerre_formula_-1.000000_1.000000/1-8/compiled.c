#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r20861782 = 1.0;
        float r20861783 = -8.0;
        float r20861784 = x;
        float r20861785 = r20861783 * r20861784;
        float r20861786 = r20861782 + r20861785;
        float r20861787 = 14.0;
        float r20861788 = r20861784 * r20861784;
        float r20861789 = r20861787 * r20861788;
        float r20861790 = r20861786 + r20861789;
        float r20861791 = -9.333333;
        float r20861792 = r20861788 * r20861784;
        float r20861793 = r20861791 * r20861792;
        float r20861794 = r20861790 + r20861793;
        float r20861795 = 2.916667;
        float r20861796 = r20861792 * r20861784;
        float r20861797 = r20861795 * r20861796;
        float r20861798 = r20861794 + r20861797;
        float r20861799 = -0.466667;
        float r20861800 = r20861796 * r20861784;
        float r20861801 = r20861799 * r20861800;
        float r20861802 = r20861798 + r20861801;
        float r20861803 = 0.038889;
        float r20861804 = r20861800 * r20861784;
        float r20861805 = r20861803 * r20861804;
        float r20861806 = r20861802 + r20861805;
        float r20861807 = -0.001587;
        float r20861808 = r20861804 * r20861784;
        float r20861809 = r20861807 * r20861808;
        float r20861810 = r20861806 + r20861809;
        float r20861811 = 2.5e-05;
        float r20861812 = r20861808 * r20861784;
        float r20861813 = r20861811 * r20861812;
        float r20861814 = r20861810 + r20861813;
        return r20861814;
}

double f_id(double x) {
        double r20861815 = 1.0;
        double r20861816 = -8.0;
        double r20861817 = x;
        double r20861818 = r20861816 * r20861817;
        double r20861819 = r20861815 + r20861818;
        double r20861820 = 14.0;
        double r20861821 = r20861817 * r20861817;
        double r20861822 = r20861820 * r20861821;
        double r20861823 = r20861819 + r20861822;
        double r20861824 = -9.333333;
        double r20861825 = r20861821 * r20861817;
        double r20861826 = r20861824 * r20861825;
        double r20861827 = r20861823 + r20861826;
        double r20861828 = 2.916667;
        double r20861829 = r20861825 * r20861817;
        double r20861830 = r20861828 * r20861829;
        double r20861831 = r20861827 + r20861830;
        double r20861832 = -0.466667;
        double r20861833 = r20861829 * r20861817;
        double r20861834 = r20861832 * r20861833;
        double r20861835 = r20861831 + r20861834;
        double r20861836 = 0.038889;
        double r20861837 = r20861833 * r20861817;
        double r20861838 = r20861836 * r20861837;
        double r20861839 = r20861835 + r20861838;
        double r20861840 = -0.001587;
        double r20861841 = r20861837 * r20861817;
        double r20861842 = r20861840 * r20861841;
        double r20861843 = r20861839 + r20861842;
        double r20861844 = 2.5e-05;
        double r20861845 = r20861841 * r20861817;
        double r20861846 = r20861844 * r20861845;
        double r20861847 = r20861843 + r20861846;
        return r20861847;
}


double f_of(float x) {
        float r20861848 = 0.038889;
        float r20861849 = -0.001587;
        float r20861850 = x;
        float r20861851 = r20861849 * r20861850;
        float r20861852 = r20861848 + r20861851;
        float r20861853 = 2.5e-05;
        float r20861854 = r20861850 * r20861853;
        float r20861855 = r20861850 * r20861854;
        float r20861856 = r20861852 + r20861855;
        float r20861857 = 3;
        float r20861858 = pow(r20861850, r20861857);
        float r20861859 = r20861858 * r20861858;
        float r20861860 = r20861856 * r20861859;
        float r20861861 = r20861850 * r20861850;
        float r20861862 = -9.333333;
        float r20861863 = r20861862 * r20861850;
        float r20861864 = 14.0;
        float r20861865 = r20861863 + r20861864;
        float r20861866 = r20861861 * r20861865;
        float r20861867 = 1.0;
        float r20861868 = -8.0;
        float r20861869 = r20861868 * r20861850;
        float r20861870 = r20861867 + r20861869;
        float r20861871 = r20861866 + r20861870;
        float r20861872 = r20861860 + r20861871;
        float r20861873 = r20861861 * r20861861;
        float r20861874 = -0.466667;
        float r20861875 = r20861850 * r20861874;
        float r20861876 = 2.916667;
        float r20861877 = r20861875 + r20861876;
        float r20861878 = r20861873 * r20861877;
        float r20861879 = r20861872 + r20861878;
        return r20861879;
}

double f_od(double x) {
        double r20861880 = 0.038889;
        double r20861881 = -0.001587;
        double r20861882 = x;
        double r20861883 = r20861881 * r20861882;
        double r20861884 = r20861880 + r20861883;
        double r20861885 = 2.5e-05;
        double r20861886 = r20861882 * r20861885;
        double r20861887 = r20861882 * r20861886;
        double r20861888 = r20861884 + r20861887;
        double r20861889 = 3;
        double r20861890 = pow(r20861882, r20861889);
        double r20861891 = r20861890 * r20861890;
        double r20861892 = r20861888 * r20861891;
        double r20861893 = r20861882 * r20861882;
        double r20861894 = -9.333333;
        double r20861895 = r20861894 * r20861882;
        double r20861896 = 14.0;
        double r20861897 = r20861895 + r20861896;
        double r20861898 = r20861893 * r20861897;
        double r20861899 = 1.0;
        double r20861900 = -8.0;
        double r20861901 = r20861900 * r20861882;
        double r20861902 = r20861899 + r20861901;
        double r20861903 = r20861898 + r20861902;
        double r20861904 = r20861892 + r20861903;
        double r20861905 = r20861893 * r20861893;
        double r20861906 = -0.466667;
        double r20861907 = r20861882 * r20861906;
        double r20861908 = 2.916667;
        double r20861909 = r20861907 + r20861908;
        double r20861910 = r20861905 * r20861909;
        double r20861911 = r20861904 + r20861910;
        return r20861911;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20861912, r20861913, r20861914, r20861915, r20861916, r20861917, r20861918, r20861919, r20861920, r20861921, r20861922, r20861923, r20861924, r20861925, r20861926, r20861927, r20861928, r20861929, r20861930, r20861931, r20861932, r20861933, r20861934, r20861935, r20861936, r20861937, r20861938, r20861939, r20861940, r20861941, r20861942, r20861943, r20861944;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20861912, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20861913, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r20861914);
        mpfr_init(r20861915);
        mpfr_init(r20861916);
        mpfr_init_set_str(r20861917, "14.0", 10, MPFR_RNDN);
        mpfr_init(r20861918);
        mpfr_init(r20861919);
        mpfr_init(r20861920);
        mpfr_init_set_str(r20861921, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r20861922);
        mpfr_init(r20861923);
        mpfr_init(r20861924);
        mpfr_init_set_str(r20861925, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r20861926);
        mpfr_init(r20861927);
        mpfr_init(r20861928);
        mpfr_init_set_str(r20861929, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r20861930);
        mpfr_init(r20861931);
        mpfr_init(r20861932);
        mpfr_init_set_str(r20861933, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r20861934);
        mpfr_init(r20861935);
        mpfr_init(r20861936);
        mpfr_init_set_str(r20861937, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r20861938);
        mpfr_init(r20861939);
        mpfr_init(r20861940);
        mpfr_init_set_str(r20861941, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r20861942);
        mpfr_init(r20861943);
        mpfr_init(r20861944);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20861914, x, MPFR_RNDN);
        mpfr_mul(r20861915, r20861913, r20861914, MPFR_RNDN);
        mpfr_add(r20861916, r20861912, r20861915, MPFR_RNDN);
        ;
        mpfr_mul(r20861918, r20861914, r20861914, MPFR_RNDN);
        mpfr_mul(r20861919, r20861917, r20861918, MPFR_RNDN);
        mpfr_add(r20861920, r20861916, r20861919, MPFR_RNDN);
        ;
        mpfr_mul(r20861922, r20861918, r20861914, MPFR_RNDN);
        mpfr_mul(r20861923, r20861921, r20861922, MPFR_RNDN);
        mpfr_add(r20861924, r20861920, r20861923, MPFR_RNDN);
        ;
        mpfr_mul(r20861926, r20861922, r20861914, MPFR_RNDN);
        mpfr_mul(r20861927, r20861925, r20861926, MPFR_RNDN);
        mpfr_add(r20861928, r20861924, r20861927, MPFR_RNDN);
        ;
        mpfr_mul(r20861930, r20861926, r20861914, MPFR_RNDN);
        mpfr_mul(r20861931, r20861929, r20861930, MPFR_RNDN);
        mpfr_add(r20861932, r20861928, r20861931, MPFR_RNDN);
        ;
        mpfr_mul(r20861934, r20861930, r20861914, MPFR_RNDN);
        mpfr_mul(r20861935, r20861933, r20861934, MPFR_RNDN);
        mpfr_add(r20861936, r20861932, r20861935, MPFR_RNDN);
        ;
        mpfr_mul(r20861938, r20861934, r20861914, MPFR_RNDN);
        mpfr_mul(r20861939, r20861937, r20861938, MPFR_RNDN);
        mpfr_add(r20861940, r20861936, r20861939, MPFR_RNDN);
        ;
        mpfr_mul(r20861942, r20861938, r20861914, MPFR_RNDN);
        mpfr_mul(r20861943, r20861941, r20861942, MPFR_RNDN);
        mpfr_add(r20861944, r20861940, r20861943, MPFR_RNDN);
        return mpfr_get_d(r20861944, MPFR_RNDN);
}

static mpfr_t r20861945, r20861946, r20861947, r20861948, r20861949, r20861950, r20861951, r20861952, r20861953, r20861954, r20861955, r20861956, r20861957, r20861958, r20861959, r20861960, r20861961, r20861962, r20861963, r20861964, r20861965, r20861966, r20861967, r20861968, r20861969, r20861970, r20861971, r20861972, r20861973, r20861974, r20861975, r20861976;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20861945, "0.038889", 10, MPFR_RNDN);
        mpfr_init_set_str(r20861946, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r20861947);
        mpfr_init(r20861948);
        mpfr_init(r20861949);
        mpfr_init_set_str(r20861950, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r20861951);
        mpfr_init(r20861952);
        mpfr_init(r20861953);
        mpfr_init_set_str(r20861954, "3", 10, MPFR_RNDN);
        mpfr_init(r20861955);
        mpfr_init(r20861956);
        mpfr_init(r20861957);
        mpfr_init(r20861958);
        mpfr_init_set_str(r20861959, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r20861960);
        mpfr_init_set_str(r20861961, "14.0", 10, MPFR_RNDN);
        mpfr_init(r20861962);
        mpfr_init(r20861963);
        mpfr_init_set_str(r20861964, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20861965, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r20861966);
        mpfr_init(r20861967);
        mpfr_init(r20861968);
        mpfr_init(r20861969);
        mpfr_init(r20861970);
        mpfr_init_set_str(r20861971, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r20861972);
        mpfr_init_set_str(r20861973, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r20861974);
        mpfr_init(r20861975);
        mpfr_init(r20861976);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r20861947, x, MPFR_RNDN);
        mpfr_mul(r20861948, r20861946, r20861947, MPFR_RNDN);
        mpfr_add(r20861949, r20861945, r20861948, MPFR_RNDN);
        ;
        mpfr_mul(r20861951, r20861947, r20861950, MPFR_RNDN);
        mpfr_mul(r20861952, r20861947, r20861951, MPFR_RNDN);
        mpfr_add(r20861953, r20861949, r20861952, MPFR_RNDN);
        ;
        mpfr_pow(r20861955, r20861947, r20861954, MPFR_RNDN);
        mpfr_mul(r20861956, r20861955, r20861955, MPFR_RNDN);
        mpfr_mul(r20861957, r20861953, r20861956, MPFR_RNDN);
        mpfr_mul(r20861958, r20861947, r20861947, MPFR_RNDN);
        ;
        mpfr_mul(r20861960, r20861959, r20861947, MPFR_RNDN);
        ;
        mpfr_add(r20861962, r20861960, r20861961, MPFR_RNDN);
        mpfr_mul(r20861963, r20861958, r20861962, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20861966, r20861965, r20861947, MPFR_RNDN);
        mpfr_add(r20861967, r20861964, r20861966, MPFR_RNDN);
        mpfr_add(r20861968, r20861963, r20861967, MPFR_RNDN);
        mpfr_add(r20861969, r20861957, r20861968, MPFR_RNDN);
        mpfr_mul(r20861970, r20861958, r20861958, MPFR_RNDN);
        ;
        mpfr_mul(r20861972, r20861947, r20861971, MPFR_RNDN);
        ;
        mpfr_add(r20861974, r20861972, r20861973, MPFR_RNDN);
        mpfr_mul(r20861975, r20861970, r20861974, MPFR_RNDN);
        mpfr_add(r20861976, r20861969, r20861975, MPFR_RNDN);
        return mpfr_get_d(r20861976, MPFR_RNDN);
}

static mpfr_t r20861977, r20861978, r20861979, r20861980, r20861981, r20861982, r20861983, r20861984, r20861985, r20861986, r20861987, r20861988, r20861989, r20861990, r20861991, r20861992, r20861993, r20861994, r20861995, r20861996, r20861997, r20861998, r20861999, r20862000, r20862001, r20862002, r20862003, r20862004, r20862005, r20862006, r20862007, r20862008;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20861977, "0.038889", 10, MPFR_RNDN);
        mpfr_init_set_str(r20861978, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r20861979);
        mpfr_init(r20861980);
        mpfr_init(r20861981);
        mpfr_init_set_str(r20861982, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r20861983);
        mpfr_init(r20861984);
        mpfr_init(r20861985);
        mpfr_init_set_str(r20861986, "3", 10, MPFR_RNDN);
        mpfr_init(r20861987);
        mpfr_init(r20861988);
        mpfr_init(r20861989);
        mpfr_init(r20861990);
        mpfr_init_set_str(r20861991, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r20861992);
        mpfr_init_set_str(r20861993, "14.0", 10, MPFR_RNDN);
        mpfr_init(r20861994);
        mpfr_init(r20861995);
        mpfr_init_set_str(r20861996, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20861997, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r20861998);
        mpfr_init(r20861999);
        mpfr_init(r20862000);
        mpfr_init(r20862001);
        mpfr_init(r20862002);
        mpfr_init_set_str(r20862003, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r20862004);
        mpfr_init_set_str(r20862005, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r20862006);
        mpfr_init(r20862007);
        mpfr_init(r20862008);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r20861979, x, MPFR_RNDN);
        mpfr_mul(r20861980, r20861978, r20861979, MPFR_RNDN);
        mpfr_add(r20861981, r20861977, r20861980, MPFR_RNDN);
        ;
        mpfr_mul(r20861983, r20861979, r20861982, MPFR_RNDN);
        mpfr_mul(r20861984, r20861979, r20861983, MPFR_RNDN);
        mpfr_add(r20861985, r20861981, r20861984, MPFR_RNDN);
        ;
        mpfr_pow(r20861987, r20861979, r20861986, MPFR_RNDN);
        mpfr_mul(r20861988, r20861987, r20861987, MPFR_RNDN);
        mpfr_mul(r20861989, r20861985, r20861988, MPFR_RNDN);
        mpfr_mul(r20861990, r20861979, r20861979, MPFR_RNDN);
        ;
        mpfr_mul(r20861992, r20861991, r20861979, MPFR_RNDN);
        ;
        mpfr_add(r20861994, r20861992, r20861993, MPFR_RNDN);
        mpfr_mul(r20861995, r20861990, r20861994, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20861998, r20861997, r20861979, MPFR_RNDN);
        mpfr_add(r20861999, r20861996, r20861998, MPFR_RNDN);
        mpfr_add(r20862000, r20861995, r20861999, MPFR_RNDN);
        mpfr_add(r20862001, r20861989, r20862000, MPFR_RNDN);
        mpfr_mul(r20862002, r20861990, r20861990, MPFR_RNDN);
        ;
        mpfr_mul(r20862004, r20861979, r20862003, MPFR_RNDN);
        ;
        mpfr_add(r20862006, r20862004, r20862005, MPFR_RNDN);
        mpfr_mul(r20862007, r20862002, r20862006, MPFR_RNDN);
        mpfr_add(r20862008, r20862001, r20862007, MPFR_RNDN);
        return mpfr_get_d(r20862008, MPFR_RNDN);
}

