#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r5393816 = 0.273438;
        float r5393817 = -9.84375;
        float r5393818 = x;
        float r5393819 = r5393818 * r5393818;
        float r5393820 = r5393817 * r5393819;
        float r5393821 = r5393816 + r5393820;
        float r5393822 = 54.140625;
        float r5393823 = r5393819 * r5393818;
        float r5393824 = r5393823 * r5393818;
        float r5393825 = r5393822 * r5393824;
        float r5393826 = r5393821 + r5393825;
        float r5393827 = -93.84375;
        float r5393828 = r5393824 * r5393818;
        float r5393829 = r5393828 * r5393818;
        float r5393830 = r5393827 * r5393829;
        float r5393831 = r5393826 + r5393830;
        float r5393832 = 50.273438;
        float r5393833 = r5393829 * r5393818;
        float r5393834 = r5393833 * r5393818;
        float r5393835 = r5393832 * r5393834;
        float r5393836 = r5393831 + r5393835;
        return r5393836;
}

double f_id(double x) {
        double r5393837 = 0.273438;
        double r5393838 = -9.84375;
        double r5393839 = x;
        double r5393840 = r5393839 * r5393839;
        double r5393841 = r5393838 * r5393840;
        double r5393842 = r5393837 + r5393841;
        double r5393843 = 54.140625;
        double r5393844 = r5393840 * r5393839;
        double r5393845 = r5393844 * r5393839;
        double r5393846 = r5393843 * r5393845;
        double r5393847 = r5393842 + r5393846;
        double r5393848 = -93.84375;
        double r5393849 = r5393845 * r5393839;
        double r5393850 = r5393849 * r5393839;
        double r5393851 = r5393848 * r5393850;
        double r5393852 = r5393847 + r5393851;
        double r5393853 = 50.273438;
        double r5393854 = r5393850 * r5393839;
        double r5393855 = r5393854 * r5393839;
        double r5393856 = r5393853 * r5393855;
        double r5393857 = r5393852 + r5393856;
        return r5393857;
}


double f_of(float x) {
        float r5393858 = x;
        float r5393859 = 54.140625;
        float r5393860 = r5393858 * r5393859;
        float r5393861 = 3;
        float r5393862 = pow(r5393858, r5393861);
        float r5393863 = r5393860 * r5393862;
        float r5393864 = -9.84375;
        float r5393865 = r5393858 * r5393864;
        float r5393866 = r5393858 * r5393865;
        float r5393867 = r5393863 + r5393866;
        float r5393868 = 0.273438;
        float r5393869 = r5393867 + r5393868;
        float r5393870 = r5393858 * r5393858;
        float r5393871 = pow(r5393870, r5393861);
        float r5393872 = 50.273438;
        float r5393873 = r5393872 * r5393858;
        float r5393874 = r5393858 * r5393873;
        float r5393875 = -93.84375;
        float r5393876 = r5393874 + r5393875;
        float r5393877 = r5393871 * r5393876;
        float r5393878 = 1;
        float r5393879 = pow(r5393877, r5393878);
        float r5393880 = r5393869 + r5393879;
        return r5393880;
}

double f_od(double x) {
        double r5393881 = x;
        double r5393882 = 54.140625;
        double r5393883 = r5393881 * r5393882;
        double r5393884 = 3;
        double r5393885 = pow(r5393881, r5393884);
        double r5393886 = r5393883 * r5393885;
        double r5393887 = -9.84375;
        double r5393888 = r5393881 * r5393887;
        double r5393889 = r5393881 * r5393888;
        double r5393890 = r5393886 + r5393889;
        double r5393891 = 0.273438;
        double r5393892 = r5393890 + r5393891;
        double r5393893 = r5393881 * r5393881;
        double r5393894 = pow(r5393893, r5393884);
        double r5393895 = 50.273438;
        double r5393896 = r5393895 * r5393881;
        double r5393897 = r5393881 * r5393896;
        double r5393898 = -93.84375;
        double r5393899 = r5393897 + r5393898;
        double r5393900 = r5393894 * r5393899;
        double r5393901 = 1;
        double r5393902 = pow(r5393900, r5393901);
        double r5393903 = r5393892 + r5393902;
        return r5393903;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5393904, r5393905, r5393906, r5393907, r5393908, r5393909, r5393910, r5393911, r5393912, r5393913, r5393914, r5393915, r5393916, r5393917, r5393918, r5393919, r5393920, r5393921, r5393922, r5393923, r5393924;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5393904, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r5393905, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r5393906);
        mpfr_init(r5393907);
        mpfr_init(r5393908);
        mpfr_init(r5393909);
        mpfr_init_set_str(r5393910, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r5393911);
        mpfr_init(r5393912);
        mpfr_init(r5393913);
        mpfr_init(r5393914);
        mpfr_init_set_str(r5393915, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r5393916);
        mpfr_init(r5393917);
        mpfr_init(r5393918);
        mpfr_init(r5393919);
        mpfr_init_set_str(r5393920, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r5393921);
        mpfr_init(r5393922);
        mpfr_init(r5393923);
        mpfr_init(r5393924);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5393906, x, MPFR_RNDN);
        mpfr_mul(r5393907, r5393906, r5393906, MPFR_RNDN);
        mpfr_mul(r5393908, r5393905, r5393907, MPFR_RNDN);
        mpfr_add(r5393909, r5393904, r5393908, MPFR_RNDN);
        ;
        mpfr_mul(r5393911, r5393907, r5393906, MPFR_RNDN);
        mpfr_mul(r5393912, r5393911, r5393906, MPFR_RNDN);
        mpfr_mul(r5393913, r5393910, r5393912, MPFR_RNDN);
        mpfr_add(r5393914, r5393909, r5393913, MPFR_RNDN);
        ;
        mpfr_mul(r5393916, r5393912, r5393906, MPFR_RNDN);
        mpfr_mul(r5393917, r5393916, r5393906, MPFR_RNDN);
        mpfr_mul(r5393918, r5393915, r5393917, MPFR_RNDN);
        mpfr_add(r5393919, r5393914, r5393918, MPFR_RNDN);
        ;
        mpfr_mul(r5393921, r5393917, r5393906, MPFR_RNDN);
        mpfr_mul(r5393922, r5393921, r5393906, MPFR_RNDN);
        mpfr_mul(r5393923, r5393920, r5393922, MPFR_RNDN);
        mpfr_add(r5393924, r5393919, r5393923, MPFR_RNDN);
        return mpfr_get_d(r5393924, MPFR_RNDN);
}

static mpfr_t r5393925, r5393926, r5393927, r5393928, r5393929, r5393930, r5393931, r5393932, r5393933, r5393934, r5393935, r5393936, r5393937, r5393938, r5393939, r5393940, r5393941, r5393942, r5393943, r5393944, r5393945, r5393946, r5393947;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5393925);
        mpfr_init_set_str(r5393926, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r5393927);
        mpfr_init_set_str(r5393928, "3", 10, MPFR_RNDN);
        mpfr_init(r5393929);
        mpfr_init(r5393930);
        mpfr_init_set_str(r5393931, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r5393932);
        mpfr_init(r5393933);
        mpfr_init(r5393934);
        mpfr_init_set_str(r5393935, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r5393936);
        mpfr_init(r5393937);
        mpfr_init(r5393938);
        mpfr_init_set_str(r5393939, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r5393940);
        mpfr_init(r5393941);
        mpfr_init_set_str(r5393942, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r5393943);
        mpfr_init(r5393944);
        mpfr_init_set_str(r5393945, "1", 10, MPFR_RNDN);
        mpfr_init(r5393946);
        mpfr_init(r5393947);
}

double f_fm(double x) {
        mpfr_set_d(r5393925, x, MPFR_RNDN);
        ;
        mpfr_mul(r5393927, r5393925, r5393926, MPFR_RNDN);
        ;
        mpfr_pow(r5393929, r5393925, r5393928, MPFR_RNDN);
        mpfr_mul(r5393930, r5393927, r5393929, MPFR_RNDN);
        ;
        mpfr_mul(r5393932, r5393925, r5393931, MPFR_RNDN);
        mpfr_mul(r5393933, r5393925, r5393932, MPFR_RNDN);
        mpfr_add(r5393934, r5393930, r5393933, MPFR_RNDN);
        ;
        mpfr_add(r5393936, r5393934, r5393935, MPFR_RNDN);
        mpfr_mul(r5393937, r5393925, r5393925, MPFR_RNDN);
        mpfr_pow(r5393938, r5393937, r5393928, MPFR_RNDN);
        ;
        mpfr_mul(r5393940, r5393939, r5393925, MPFR_RNDN);
        mpfr_mul(r5393941, r5393925, r5393940, MPFR_RNDN);
        ;
        mpfr_add(r5393943, r5393941, r5393942, MPFR_RNDN);
        mpfr_mul(r5393944, r5393938, r5393943, MPFR_RNDN);
        ;
        mpfr_pow(r5393946, r5393944, r5393945, MPFR_RNDN);
        mpfr_add(r5393947, r5393936, r5393946, MPFR_RNDN);
        return mpfr_get_d(r5393947, MPFR_RNDN);
}

static mpfr_t r5393948, r5393949, r5393950, r5393951, r5393952, r5393953, r5393954, r5393955, r5393956, r5393957, r5393958, r5393959, r5393960, r5393961, r5393962, r5393963, r5393964, r5393965, r5393966, r5393967, r5393968, r5393969, r5393970;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5393948);
        mpfr_init_set_str(r5393949, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r5393950);
        mpfr_init_set_str(r5393951, "3", 10, MPFR_RNDN);
        mpfr_init(r5393952);
        mpfr_init(r5393953);
        mpfr_init_set_str(r5393954, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r5393955);
        mpfr_init(r5393956);
        mpfr_init(r5393957);
        mpfr_init_set_str(r5393958, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r5393959);
        mpfr_init(r5393960);
        mpfr_init(r5393961);
        mpfr_init_set_str(r5393962, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r5393963);
        mpfr_init(r5393964);
        mpfr_init_set_str(r5393965, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r5393966);
        mpfr_init(r5393967);
        mpfr_init_set_str(r5393968, "1", 10, MPFR_RNDN);
        mpfr_init(r5393969);
        mpfr_init(r5393970);
}

double f_dm(double x) {
        mpfr_set_d(r5393948, x, MPFR_RNDN);
        ;
        mpfr_mul(r5393950, r5393948, r5393949, MPFR_RNDN);
        ;
        mpfr_pow(r5393952, r5393948, r5393951, MPFR_RNDN);
        mpfr_mul(r5393953, r5393950, r5393952, MPFR_RNDN);
        ;
        mpfr_mul(r5393955, r5393948, r5393954, MPFR_RNDN);
        mpfr_mul(r5393956, r5393948, r5393955, MPFR_RNDN);
        mpfr_add(r5393957, r5393953, r5393956, MPFR_RNDN);
        ;
        mpfr_add(r5393959, r5393957, r5393958, MPFR_RNDN);
        mpfr_mul(r5393960, r5393948, r5393948, MPFR_RNDN);
        mpfr_pow(r5393961, r5393960, r5393951, MPFR_RNDN);
        ;
        mpfr_mul(r5393963, r5393962, r5393948, MPFR_RNDN);
        mpfr_mul(r5393964, r5393948, r5393963, MPFR_RNDN);
        ;
        mpfr_add(r5393966, r5393964, r5393965, MPFR_RNDN);
        mpfr_mul(r5393967, r5393961, r5393966, MPFR_RNDN);
        ;
        mpfr_pow(r5393969, r5393967, r5393968, MPFR_RNDN);
        mpfr_add(r5393970, r5393959, r5393969, MPFR_RNDN);
        return mpfr_get_d(r5393970, MPFR_RNDN);
}

