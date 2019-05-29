#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r6861737 = 0.196381;
        float r6861738 = -26.707764;
        float r6861739 = x;
        float r6861740 = r6861739 * r6861739;
        float r6861741 = r6861738 * r6861740;
        float r6861742 = r6861737 + r6861741;
        float r6861743 = 592.022095;
        float r6861744 = r6861740 * r6861739;
        float r6861745 = r6861744 * r6861739;
        float r6861746 = r6861743 * r6861745;
        float r6861747 = r6861742 + r6861746;
        float r6861748 = -4972.985596;
        float r6861749 = r6861745 * r6861739;
        float r6861750 = r6861749 * r6861739;
        float r6861751 = r6861748 * r6861750;
        float r6861752 = r6861747 + r6861751;
        float r6861753 = 20424.762268;
        float r6861754 = r6861750 * r6861739;
        float r6861755 = r6861754 * r6861739;
        float r6861756 = r6861753 * r6861755;
        float r6861757 = r6861752 + r6861756;
        float r6861758 = -45388.360596;
        float r6861759 = r6861755 * r6861739;
        float r6861760 = r6861759 * r6861739;
        float r6861761 = r6861758 * r6861760;
        float r6861762 = r6861757 + r6861761;
        float r6861763 = 55703.897095;
        float r6861764 = r6861760 * r6861739;
        float r6861765 = r6861764 * r6861739;
        float r6861766 = r6861763 * r6861765;
        float r6861767 = r6861762 + r6861766;
        float r6861768 = -35503.582764;
        float r6861769 = r6861765 * r6861739;
        float r6861770 = r6861769 * r6861739;
        float r6861771 = r6861768 * r6861770;
        float r6861772 = r6861767 + r6861771;
        float r6861773 = 9171.758881;
        float r6861774 = r6861770 * r6861739;
        float r6861775 = r6861774 * r6861739;
        float r6861776 = r6861773 * r6861775;
        float r6861777 = r6861772 + r6861776;
        return r6861777;
}

double f_id(double x) {
        double r6861778 = 0.196381;
        double r6861779 = -26.707764;
        double r6861780 = x;
        double r6861781 = r6861780 * r6861780;
        double r6861782 = r6861779 * r6861781;
        double r6861783 = r6861778 + r6861782;
        double r6861784 = 592.022095;
        double r6861785 = r6861781 * r6861780;
        double r6861786 = r6861785 * r6861780;
        double r6861787 = r6861784 * r6861786;
        double r6861788 = r6861783 + r6861787;
        double r6861789 = -4972.985596;
        double r6861790 = r6861786 * r6861780;
        double r6861791 = r6861790 * r6861780;
        double r6861792 = r6861789 * r6861791;
        double r6861793 = r6861788 + r6861792;
        double r6861794 = 20424.762268;
        double r6861795 = r6861791 * r6861780;
        double r6861796 = r6861795 * r6861780;
        double r6861797 = r6861794 * r6861796;
        double r6861798 = r6861793 + r6861797;
        double r6861799 = -45388.360596;
        double r6861800 = r6861796 * r6861780;
        double r6861801 = r6861800 * r6861780;
        double r6861802 = r6861799 * r6861801;
        double r6861803 = r6861798 + r6861802;
        double r6861804 = 55703.897095;
        double r6861805 = r6861801 * r6861780;
        double r6861806 = r6861805 * r6861780;
        double r6861807 = r6861804 * r6861806;
        double r6861808 = r6861803 + r6861807;
        double r6861809 = -35503.582764;
        double r6861810 = r6861806 * r6861780;
        double r6861811 = r6861810 * r6861780;
        double r6861812 = r6861809 * r6861811;
        double r6861813 = r6861808 + r6861812;
        double r6861814 = 9171.758881;
        double r6861815 = r6861811 * r6861780;
        double r6861816 = r6861815 * r6861780;
        double r6861817 = r6861814 * r6861816;
        double r6861818 = r6861813 + r6861817;
        return r6861818;
}


double f_of(float x) {
        float r6861819 = x;
        float r6861820 = r6861819 * r6861819;
        float r6861821 = r6861820 * r6861820;
        float r6861822 = 592.022095;
        float r6861823 = -4972.985596;
        float r6861824 = r6861823 * r6861819;
        float r6861825 = r6861819 * r6861824;
        float r6861826 = r6861822 + r6861825;
        float r6861827 = r6861821 * r6861826;
        float r6861828 = -26.707764;
        float r6861829 = r6861820 * r6861828;
        float r6861830 = 0.196381;
        float r6861831 = r6861829 + r6861830;
        float r6861832 = 20424.762268;
        float r6861833 = r6861820 * r6861832;
        float r6861834 = 3;
        float r6861835 = pow(r6861820, r6861834);
        float r6861836 = r6861833 * r6861835;
        float r6861837 = r6861831 + r6861836;
        float r6861838 = r6861827 + r6861837;
        float r6861839 = r6861835 * r6861821;
        float r6861840 = -45388.360596;
        float r6861841 = 55703.897095;
        float r6861842 = r6861841 * r6861819;
        float r6861843 = r6861819 * r6861842;
        float r6861844 = r6861840 + r6861843;
        float r6861845 = r6861839 * r6861844;
        float r6861846 = r6861839 * r6861821;
        float r6861847 = -35503.582764;
        float r6861848 = 9171.758881;
        float r6861849 = r6861819 * r6861848;
        float r6861850 = r6861819 * r6861849;
        float r6861851 = r6861847 + r6861850;
        float r6861852 = r6861846 * r6861851;
        float r6861853 = r6861845 + r6861852;
        float r6861854 = r6861838 + r6861853;
        return r6861854;
}

double f_od(double x) {
        double r6861855 = x;
        double r6861856 = r6861855 * r6861855;
        double r6861857 = r6861856 * r6861856;
        double r6861858 = 592.022095;
        double r6861859 = -4972.985596;
        double r6861860 = r6861859 * r6861855;
        double r6861861 = r6861855 * r6861860;
        double r6861862 = r6861858 + r6861861;
        double r6861863 = r6861857 * r6861862;
        double r6861864 = -26.707764;
        double r6861865 = r6861856 * r6861864;
        double r6861866 = 0.196381;
        double r6861867 = r6861865 + r6861866;
        double r6861868 = 20424.762268;
        double r6861869 = r6861856 * r6861868;
        double r6861870 = 3;
        double r6861871 = pow(r6861856, r6861870);
        double r6861872 = r6861869 * r6861871;
        double r6861873 = r6861867 + r6861872;
        double r6861874 = r6861863 + r6861873;
        double r6861875 = r6861871 * r6861857;
        double r6861876 = -45388.360596;
        double r6861877 = 55703.897095;
        double r6861878 = r6861877 * r6861855;
        double r6861879 = r6861855 * r6861878;
        double r6861880 = r6861876 + r6861879;
        double r6861881 = r6861875 * r6861880;
        double r6861882 = r6861875 * r6861857;
        double r6861883 = -35503.582764;
        double r6861884 = 9171.758881;
        double r6861885 = r6861855 * r6861884;
        double r6861886 = r6861855 * r6861885;
        double r6861887 = r6861883 + r6861886;
        double r6861888 = r6861882 * r6861887;
        double r6861889 = r6861881 + r6861888;
        double r6861890 = r6861874 + r6861889;
        return r6861890;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6861891, r6861892, r6861893, r6861894, r6861895, r6861896, r6861897, r6861898, r6861899, r6861900, r6861901, r6861902, r6861903, r6861904, r6861905, r6861906, r6861907, r6861908, r6861909, r6861910, r6861911, r6861912, r6861913, r6861914, r6861915, r6861916, r6861917, r6861918, r6861919, r6861920, r6861921, r6861922, r6861923, r6861924, r6861925, r6861926, r6861927, r6861928, r6861929, r6861930, r6861931;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6861891, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861892, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r6861893);
        mpfr_init(r6861894);
        mpfr_init(r6861895);
        mpfr_init(r6861896);
        mpfr_init_set_str(r6861897, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r6861898);
        mpfr_init(r6861899);
        mpfr_init(r6861900);
        mpfr_init(r6861901);
        mpfr_init_set_str(r6861902, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r6861903);
        mpfr_init(r6861904);
        mpfr_init(r6861905);
        mpfr_init(r6861906);
        mpfr_init_set_str(r6861907, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r6861908);
        mpfr_init(r6861909);
        mpfr_init(r6861910);
        mpfr_init(r6861911);
        mpfr_init_set_str(r6861912, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r6861913);
        mpfr_init(r6861914);
        mpfr_init(r6861915);
        mpfr_init(r6861916);
        mpfr_init_set_str(r6861917, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r6861918);
        mpfr_init(r6861919);
        mpfr_init(r6861920);
        mpfr_init(r6861921);
        mpfr_init_set_str(r6861922, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r6861923);
        mpfr_init(r6861924);
        mpfr_init(r6861925);
        mpfr_init(r6861926);
        mpfr_init_set_str(r6861927, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r6861928);
        mpfr_init(r6861929);
        mpfr_init(r6861930);
        mpfr_init(r6861931);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6861893, x, MPFR_RNDN);
        mpfr_mul(r6861894, r6861893, r6861893, MPFR_RNDN);
        mpfr_mul(r6861895, r6861892, r6861894, MPFR_RNDN);
        mpfr_add(r6861896, r6861891, r6861895, MPFR_RNDN);
        ;
        mpfr_mul(r6861898, r6861894, r6861893, MPFR_RNDN);
        mpfr_mul(r6861899, r6861898, r6861893, MPFR_RNDN);
        mpfr_mul(r6861900, r6861897, r6861899, MPFR_RNDN);
        mpfr_add(r6861901, r6861896, r6861900, MPFR_RNDN);
        ;
        mpfr_mul(r6861903, r6861899, r6861893, MPFR_RNDN);
        mpfr_mul(r6861904, r6861903, r6861893, MPFR_RNDN);
        mpfr_mul(r6861905, r6861902, r6861904, MPFR_RNDN);
        mpfr_add(r6861906, r6861901, r6861905, MPFR_RNDN);
        ;
        mpfr_mul(r6861908, r6861904, r6861893, MPFR_RNDN);
        mpfr_mul(r6861909, r6861908, r6861893, MPFR_RNDN);
        mpfr_mul(r6861910, r6861907, r6861909, MPFR_RNDN);
        mpfr_add(r6861911, r6861906, r6861910, MPFR_RNDN);
        ;
        mpfr_mul(r6861913, r6861909, r6861893, MPFR_RNDN);
        mpfr_mul(r6861914, r6861913, r6861893, MPFR_RNDN);
        mpfr_mul(r6861915, r6861912, r6861914, MPFR_RNDN);
        mpfr_add(r6861916, r6861911, r6861915, MPFR_RNDN);
        ;
        mpfr_mul(r6861918, r6861914, r6861893, MPFR_RNDN);
        mpfr_mul(r6861919, r6861918, r6861893, MPFR_RNDN);
        mpfr_mul(r6861920, r6861917, r6861919, MPFR_RNDN);
        mpfr_add(r6861921, r6861916, r6861920, MPFR_RNDN);
        ;
        mpfr_mul(r6861923, r6861919, r6861893, MPFR_RNDN);
        mpfr_mul(r6861924, r6861923, r6861893, MPFR_RNDN);
        mpfr_mul(r6861925, r6861922, r6861924, MPFR_RNDN);
        mpfr_add(r6861926, r6861921, r6861925, MPFR_RNDN);
        ;
        mpfr_mul(r6861928, r6861924, r6861893, MPFR_RNDN);
        mpfr_mul(r6861929, r6861928, r6861893, MPFR_RNDN);
        mpfr_mul(r6861930, r6861927, r6861929, MPFR_RNDN);
        mpfr_add(r6861931, r6861926, r6861930, MPFR_RNDN);
        return mpfr_get_d(r6861931, MPFR_RNDN);
}

static mpfr_t r6861932, r6861933, r6861934, r6861935, r6861936, r6861937, r6861938, r6861939, r6861940, r6861941, r6861942, r6861943, r6861944, r6861945, r6861946, r6861947, r6861948, r6861949, r6861950, r6861951, r6861952, r6861953, r6861954, r6861955, r6861956, r6861957, r6861958, r6861959, r6861960, r6861961, r6861962, r6861963, r6861964, r6861965, r6861966, r6861967;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6861932);
        mpfr_init(r6861933);
        mpfr_init(r6861934);
        mpfr_init_set_str(r6861935, "592.022095", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861936, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r6861937);
        mpfr_init(r6861938);
        mpfr_init(r6861939);
        mpfr_init(r6861940);
        mpfr_init_set_str(r6861941, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r6861942);
        mpfr_init_set_str(r6861943, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r6861944);
        mpfr_init_set_str(r6861945, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r6861946);
        mpfr_init_set_str(r6861947, "3", 10, MPFR_RNDN);
        mpfr_init(r6861948);
        mpfr_init(r6861949);
        mpfr_init(r6861950);
        mpfr_init(r6861951);
        mpfr_init(r6861952);
        mpfr_init_set_str(r6861953, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861954, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r6861955);
        mpfr_init(r6861956);
        mpfr_init(r6861957);
        mpfr_init(r6861958);
        mpfr_init(r6861959);
        mpfr_init_set_str(r6861960, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861961, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r6861962);
        mpfr_init(r6861963);
        mpfr_init(r6861964);
        mpfr_init(r6861965);
        mpfr_init(r6861966);
        mpfr_init(r6861967);
}

double f_fm(double x) {
        mpfr_set_d(r6861932, x, MPFR_RNDN);
        mpfr_mul(r6861933, r6861932, r6861932, MPFR_RNDN);
        mpfr_mul(r6861934, r6861933, r6861933, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6861937, r6861936, r6861932, MPFR_RNDN);
        mpfr_mul(r6861938, r6861932, r6861937, MPFR_RNDN);
        mpfr_add(r6861939, r6861935, r6861938, MPFR_RNDN);
        mpfr_mul(r6861940, r6861934, r6861939, MPFR_RNDN);
        ;
        mpfr_mul(r6861942, r6861933, r6861941, MPFR_RNDN);
        ;
        mpfr_add(r6861944, r6861942, r6861943, MPFR_RNDN);
        ;
        mpfr_mul(r6861946, r6861933, r6861945, MPFR_RNDN);
        ;
        mpfr_pow(r6861948, r6861933, r6861947, MPFR_RNDN);
        mpfr_mul(r6861949, r6861946, r6861948, MPFR_RNDN);
        mpfr_add(r6861950, r6861944, r6861949, MPFR_RNDN);
        mpfr_add(r6861951, r6861940, r6861950, MPFR_RNDN);
        mpfr_mul(r6861952, r6861948, r6861934, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6861955, r6861954, r6861932, MPFR_RNDN);
        mpfr_mul(r6861956, r6861932, r6861955, MPFR_RNDN);
        mpfr_add(r6861957, r6861953, r6861956, MPFR_RNDN);
        mpfr_mul(r6861958, r6861952, r6861957, MPFR_RNDN);
        mpfr_mul(r6861959, r6861952, r6861934, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6861962, r6861932, r6861961, MPFR_RNDN);
        mpfr_mul(r6861963, r6861932, r6861962, MPFR_RNDN);
        mpfr_add(r6861964, r6861960, r6861963, MPFR_RNDN);
        mpfr_mul(r6861965, r6861959, r6861964, MPFR_RNDN);
        mpfr_add(r6861966, r6861958, r6861965, MPFR_RNDN);
        mpfr_add(r6861967, r6861951, r6861966, MPFR_RNDN);
        return mpfr_get_d(r6861967, MPFR_RNDN);
}

static mpfr_t r6861968, r6861969, r6861970, r6861971, r6861972, r6861973, r6861974, r6861975, r6861976, r6861977, r6861978, r6861979, r6861980, r6861981, r6861982, r6861983, r6861984, r6861985, r6861986, r6861987, r6861988, r6861989, r6861990, r6861991, r6861992, r6861993, r6861994, r6861995, r6861996, r6861997, r6861998, r6861999, r6862000, r6862001, r6862002, r6862003;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6861968);
        mpfr_init(r6861969);
        mpfr_init(r6861970);
        mpfr_init_set_str(r6861971, "592.022095", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861972, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r6861973);
        mpfr_init(r6861974);
        mpfr_init(r6861975);
        mpfr_init(r6861976);
        mpfr_init_set_str(r6861977, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r6861978);
        mpfr_init_set_str(r6861979, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r6861980);
        mpfr_init_set_str(r6861981, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r6861982);
        mpfr_init_set_str(r6861983, "3", 10, MPFR_RNDN);
        mpfr_init(r6861984);
        mpfr_init(r6861985);
        mpfr_init(r6861986);
        mpfr_init(r6861987);
        mpfr_init(r6861988);
        mpfr_init_set_str(r6861989, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861990, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r6861991);
        mpfr_init(r6861992);
        mpfr_init(r6861993);
        mpfr_init(r6861994);
        mpfr_init(r6861995);
        mpfr_init_set_str(r6861996, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r6861997, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r6861998);
        mpfr_init(r6861999);
        mpfr_init(r6862000);
        mpfr_init(r6862001);
        mpfr_init(r6862002);
        mpfr_init(r6862003);
}

double f_dm(double x) {
        mpfr_set_d(r6861968, x, MPFR_RNDN);
        mpfr_mul(r6861969, r6861968, r6861968, MPFR_RNDN);
        mpfr_mul(r6861970, r6861969, r6861969, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6861973, r6861972, r6861968, MPFR_RNDN);
        mpfr_mul(r6861974, r6861968, r6861973, MPFR_RNDN);
        mpfr_add(r6861975, r6861971, r6861974, MPFR_RNDN);
        mpfr_mul(r6861976, r6861970, r6861975, MPFR_RNDN);
        ;
        mpfr_mul(r6861978, r6861969, r6861977, MPFR_RNDN);
        ;
        mpfr_add(r6861980, r6861978, r6861979, MPFR_RNDN);
        ;
        mpfr_mul(r6861982, r6861969, r6861981, MPFR_RNDN);
        ;
        mpfr_pow(r6861984, r6861969, r6861983, MPFR_RNDN);
        mpfr_mul(r6861985, r6861982, r6861984, MPFR_RNDN);
        mpfr_add(r6861986, r6861980, r6861985, MPFR_RNDN);
        mpfr_add(r6861987, r6861976, r6861986, MPFR_RNDN);
        mpfr_mul(r6861988, r6861984, r6861970, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6861991, r6861990, r6861968, MPFR_RNDN);
        mpfr_mul(r6861992, r6861968, r6861991, MPFR_RNDN);
        mpfr_add(r6861993, r6861989, r6861992, MPFR_RNDN);
        mpfr_mul(r6861994, r6861988, r6861993, MPFR_RNDN);
        mpfr_mul(r6861995, r6861988, r6861970, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6861998, r6861968, r6861997, MPFR_RNDN);
        mpfr_mul(r6861999, r6861968, r6861998, MPFR_RNDN);
        mpfr_add(r6862000, r6861996, r6861999, MPFR_RNDN);
        mpfr_mul(r6862001, r6861995, r6862000, MPFR_RNDN);
        mpfr_add(r6862002, r6861994, r6862001, MPFR_RNDN);
        mpfr_add(r6862003, r6861987, r6862002, MPFR_RNDN);
        return mpfr_get_d(r6862003, MPFR_RNDN);
}

