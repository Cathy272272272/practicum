#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r46348801 = -1680.0;
        float r46348802 = x;
        float r46348803 = r46348801 * r46348802;
        float r46348804 = 3360.0;
        float r46348805 = r46348802 * r46348802;
        float r46348806 = r46348805 * r46348802;
        float r46348807 = r46348804 * r46348806;
        float r46348808 = r46348803 + r46348807;
        float r46348809 = -1344.0;
        float r46348810 = r46348806 * r46348802;
        float r46348811 = r46348810 * r46348802;
        float r46348812 = r46348809 * r46348811;
        float r46348813 = r46348808 + r46348812;
        float r46348814 = 128.0;
        float r46348815 = r46348811 * r46348802;
        float r46348816 = r46348815 * r46348802;
        float r46348817 = r46348814 * r46348816;
        float r46348818 = r46348813 + r46348817;
        return r46348818;
}

double f_id(double x) {
        double r46348819 = -1680.0;
        double r46348820 = x;
        double r46348821 = r46348819 * r46348820;
        double r46348822 = 3360.0;
        double r46348823 = r46348820 * r46348820;
        double r46348824 = r46348823 * r46348820;
        double r46348825 = r46348822 * r46348824;
        double r46348826 = r46348821 + r46348825;
        double r46348827 = -1344.0;
        double r46348828 = r46348824 * r46348820;
        double r46348829 = r46348828 * r46348820;
        double r46348830 = r46348827 * r46348829;
        double r46348831 = r46348826 + r46348830;
        double r46348832 = 128.0;
        double r46348833 = r46348829 * r46348820;
        double r46348834 = r46348833 * r46348820;
        double r46348835 = r46348832 * r46348834;
        double r46348836 = r46348831 + r46348835;
        return r46348836;
}


double f_of(float x) {
        float r46348837 = -1680.0;
        float r46348838 = x;
        float r46348839 = r46348837 * r46348838;
        float r46348840 = -1344.0;
        float r46348841 = r46348840 * r46348838;
        float r46348842 = r46348838 * r46348838;
        float r46348843 = r46348841 * r46348842;
        float r46348844 = 3360.0;
        float r46348845 = r46348844 * r46348838;
        float r46348846 = r46348843 + r46348845;
        float r46348847 = r46348846 * r46348842;
        float r46348848 = r46348839 + r46348847;
        float r46348849 = cbrt(r46348848);
        float r46348850 = 3;
        float r46348851 = pow(r46348838, r46348850);
        float r46348852 = r46348844 * r46348851;
        float r46348853 = 1344.0;
        float r46348854 = 5;
        float r46348855 = pow(r46348838, r46348854);
        float r46348856 = r46348853 * r46348855;
        float r46348857 = 1680.0;
        float r46348858 = r46348857 * r46348838;
        float r46348859 = r46348856 + r46348858;
        float r46348860 = r46348852 - r46348859;
        float r46348861 = cbrt(r46348860);
        float r46348862 = r46348849 * r46348861;
        float r46348863 = r46348862 * r46348849;
        float r46348864 = 128.0;
        float r46348865 = r46348842 * r46348838;
        float r46348866 = r46348865 * r46348838;
        float r46348867 = r46348866 * r46348838;
        float r46348868 = r46348867 * r46348838;
        float r46348869 = r46348868 * r46348838;
        float r46348870 = r46348864 * r46348869;
        float r46348871 = r46348863 + r46348870;
        return r46348871;
}

double f_od(double x) {
        double r46348872 = -1680.0;
        double r46348873 = x;
        double r46348874 = r46348872 * r46348873;
        double r46348875 = -1344.0;
        double r46348876 = r46348875 * r46348873;
        double r46348877 = r46348873 * r46348873;
        double r46348878 = r46348876 * r46348877;
        double r46348879 = 3360.0;
        double r46348880 = r46348879 * r46348873;
        double r46348881 = r46348878 + r46348880;
        double r46348882 = r46348881 * r46348877;
        double r46348883 = r46348874 + r46348882;
        double r46348884 = cbrt(r46348883);
        double r46348885 = 3;
        double r46348886 = pow(r46348873, r46348885);
        double r46348887 = r46348879 * r46348886;
        double r46348888 = 1344.0;
        double r46348889 = 5;
        double r46348890 = pow(r46348873, r46348889);
        double r46348891 = r46348888 * r46348890;
        double r46348892 = 1680.0;
        double r46348893 = r46348892 * r46348873;
        double r46348894 = r46348891 + r46348893;
        double r46348895 = r46348887 - r46348894;
        double r46348896 = cbrt(r46348895);
        double r46348897 = r46348884 * r46348896;
        double r46348898 = r46348897 * r46348884;
        double r46348899 = 128.0;
        double r46348900 = r46348877 * r46348873;
        double r46348901 = r46348900 * r46348873;
        double r46348902 = r46348901 * r46348873;
        double r46348903 = r46348902 * r46348873;
        double r46348904 = r46348903 * r46348873;
        double r46348905 = r46348899 * r46348904;
        double r46348906 = r46348898 + r46348905;
        return r46348906;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46348907, r46348908, r46348909, r46348910, r46348911, r46348912, r46348913, r46348914, r46348915, r46348916, r46348917, r46348918, r46348919, r46348920, r46348921, r46348922, r46348923, r46348924;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46348907, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r46348908);
        mpfr_init(r46348909);
        mpfr_init_set_str(r46348910, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r46348911);
        mpfr_init(r46348912);
        mpfr_init(r46348913);
        mpfr_init(r46348914);
        mpfr_init_set_str(r46348915, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r46348916);
        mpfr_init(r46348917);
        mpfr_init(r46348918);
        mpfr_init(r46348919);
        mpfr_init_set_str(r46348920, "128.0", 10, MPFR_RNDN);
        mpfr_init(r46348921);
        mpfr_init(r46348922);
        mpfr_init(r46348923);
        mpfr_init(r46348924);
}

double f_im(double x) {
        ;
        mpfr_set_d(r46348908, x, MPFR_RNDN);
        mpfr_mul(r46348909, r46348907, r46348908, MPFR_RNDN);
        ;
        mpfr_mul(r46348911, r46348908, r46348908, MPFR_RNDN);
        mpfr_mul(r46348912, r46348911, r46348908, MPFR_RNDN);
        mpfr_mul(r46348913, r46348910, r46348912, MPFR_RNDN);
        mpfr_add(r46348914, r46348909, r46348913, MPFR_RNDN);
        ;
        mpfr_mul(r46348916, r46348912, r46348908, MPFR_RNDN);
        mpfr_mul(r46348917, r46348916, r46348908, MPFR_RNDN);
        mpfr_mul(r46348918, r46348915, r46348917, MPFR_RNDN);
        mpfr_add(r46348919, r46348914, r46348918, MPFR_RNDN);
        ;
        mpfr_mul(r46348921, r46348917, r46348908, MPFR_RNDN);
        mpfr_mul(r46348922, r46348921, r46348908, MPFR_RNDN);
        mpfr_mul(r46348923, r46348920, r46348922, MPFR_RNDN);
        mpfr_add(r46348924, r46348919, r46348923, MPFR_RNDN);
        return mpfr_get_d(r46348924, MPFR_RNDN);
}

static mpfr_t r46348925, r46348926, r46348927, r46348928, r46348929, r46348930, r46348931, r46348932, r46348933, r46348934, r46348935, r46348936, r46348937, r46348938, r46348939, r46348940, r46348941, r46348942, r46348943, r46348944, r46348945, r46348946, r46348947, r46348948, r46348949, r46348950, r46348951, r46348952, r46348953, r46348954, r46348955, r46348956, r46348957, r46348958, r46348959;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46348925, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r46348926);
        mpfr_init(r46348927);
        mpfr_init_set_str(r46348928, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r46348929);
        mpfr_init(r46348930);
        mpfr_init(r46348931);
        mpfr_init_set_str(r46348932, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r46348933);
        mpfr_init(r46348934);
        mpfr_init(r46348935);
        mpfr_init(r46348936);
        mpfr_init(r46348937);
        mpfr_init_set_str(r46348938, "3", 10, MPFR_RNDN);
        mpfr_init(r46348939);
        mpfr_init(r46348940);
        mpfr_init_set_str(r46348941, "1344.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r46348942, "5", 10, MPFR_RNDN);
        mpfr_init(r46348943);
        mpfr_init(r46348944);
        mpfr_init_set_str(r46348945, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r46348946);
        mpfr_init(r46348947);
        mpfr_init(r46348948);
        mpfr_init(r46348949);
        mpfr_init(r46348950);
        mpfr_init(r46348951);
        mpfr_init_set_str(r46348952, "128.0", 10, MPFR_RNDN);
        mpfr_init(r46348953);
        mpfr_init(r46348954);
        mpfr_init(r46348955);
        mpfr_init(r46348956);
        mpfr_init(r46348957);
        mpfr_init(r46348958);
        mpfr_init(r46348959);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r46348926, x, MPFR_RNDN);
        mpfr_mul(r46348927, r46348925, r46348926, MPFR_RNDN);
        ;
        mpfr_mul(r46348929, r46348928, r46348926, MPFR_RNDN);
        mpfr_mul(r46348930, r46348926, r46348926, MPFR_RNDN);
        mpfr_mul(r46348931, r46348929, r46348930, MPFR_RNDN);
        ;
        mpfr_mul(r46348933, r46348932, r46348926, MPFR_RNDN);
        mpfr_add(r46348934, r46348931, r46348933, MPFR_RNDN);
        mpfr_mul(r46348935, r46348934, r46348930, MPFR_RNDN);
        mpfr_add(r46348936, r46348927, r46348935, MPFR_RNDN);
        mpfr_cbrt(r46348937, r46348936, MPFR_RNDN);
        ;
        mpfr_pow(r46348939, r46348926, r46348938, MPFR_RNDN);
        mpfr_mul(r46348940, r46348932, r46348939, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r46348943, r46348926, r46348942, MPFR_RNDN);
        mpfr_mul(r46348944, r46348941, r46348943, MPFR_RNDN);
        ;
        mpfr_mul(r46348946, r46348945, r46348926, MPFR_RNDN);
        mpfr_add(r46348947, r46348944, r46348946, MPFR_RNDN);
        mpfr_sub(r46348948, r46348940, r46348947, MPFR_RNDN);
        mpfr_cbrt(r46348949, r46348948, MPFR_RNDN);
        mpfr_mul(r46348950, r46348937, r46348949, MPFR_RNDN);
        mpfr_mul(r46348951, r46348950, r46348937, MPFR_RNDN);
        ;
        mpfr_mul(r46348953, r46348930, r46348926, MPFR_RNDN);
        mpfr_mul(r46348954, r46348953, r46348926, MPFR_RNDN);
        mpfr_mul(r46348955, r46348954, r46348926, MPFR_RNDN);
        mpfr_mul(r46348956, r46348955, r46348926, MPFR_RNDN);
        mpfr_mul(r46348957, r46348956, r46348926, MPFR_RNDN);
        mpfr_mul(r46348958, r46348952, r46348957, MPFR_RNDN);
        mpfr_add(r46348959, r46348951, r46348958, MPFR_RNDN);
        return mpfr_get_d(r46348959, MPFR_RNDN);
}

static mpfr_t r46348960, r46348961, r46348962, r46348963, r46348964, r46348965, r46348966, r46348967, r46348968, r46348969, r46348970, r46348971, r46348972, r46348973, r46348974, r46348975, r46348976, r46348977, r46348978, r46348979, r46348980, r46348981, r46348982, r46348983, r46348984, r46348985, r46348986, r46348987, r46348988, r46348989, r46348990, r46348991, r46348992, r46348993, r46348994;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46348960, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r46348961);
        mpfr_init(r46348962);
        mpfr_init_set_str(r46348963, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r46348964);
        mpfr_init(r46348965);
        mpfr_init(r46348966);
        mpfr_init_set_str(r46348967, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r46348968);
        mpfr_init(r46348969);
        mpfr_init(r46348970);
        mpfr_init(r46348971);
        mpfr_init(r46348972);
        mpfr_init_set_str(r46348973, "3", 10, MPFR_RNDN);
        mpfr_init(r46348974);
        mpfr_init(r46348975);
        mpfr_init_set_str(r46348976, "1344.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r46348977, "5", 10, MPFR_RNDN);
        mpfr_init(r46348978);
        mpfr_init(r46348979);
        mpfr_init_set_str(r46348980, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r46348981);
        mpfr_init(r46348982);
        mpfr_init(r46348983);
        mpfr_init(r46348984);
        mpfr_init(r46348985);
        mpfr_init(r46348986);
        mpfr_init_set_str(r46348987, "128.0", 10, MPFR_RNDN);
        mpfr_init(r46348988);
        mpfr_init(r46348989);
        mpfr_init(r46348990);
        mpfr_init(r46348991);
        mpfr_init(r46348992);
        mpfr_init(r46348993);
        mpfr_init(r46348994);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r46348961, x, MPFR_RNDN);
        mpfr_mul(r46348962, r46348960, r46348961, MPFR_RNDN);
        ;
        mpfr_mul(r46348964, r46348963, r46348961, MPFR_RNDN);
        mpfr_mul(r46348965, r46348961, r46348961, MPFR_RNDN);
        mpfr_mul(r46348966, r46348964, r46348965, MPFR_RNDN);
        ;
        mpfr_mul(r46348968, r46348967, r46348961, MPFR_RNDN);
        mpfr_add(r46348969, r46348966, r46348968, MPFR_RNDN);
        mpfr_mul(r46348970, r46348969, r46348965, MPFR_RNDN);
        mpfr_add(r46348971, r46348962, r46348970, MPFR_RNDN);
        mpfr_cbrt(r46348972, r46348971, MPFR_RNDN);
        ;
        mpfr_pow(r46348974, r46348961, r46348973, MPFR_RNDN);
        mpfr_mul(r46348975, r46348967, r46348974, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r46348978, r46348961, r46348977, MPFR_RNDN);
        mpfr_mul(r46348979, r46348976, r46348978, MPFR_RNDN);
        ;
        mpfr_mul(r46348981, r46348980, r46348961, MPFR_RNDN);
        mpfr_add(r46348982, r46348979, r46348981, MPFR_RNDN);
        mpfr_sub(r46348983, r46348975, r46348982, MPFR_RNDN);
        mpfr_cbrt(r46348984, r46348983, MPFR_RNDN);
        mpfr_mul(r46348985, r46348972, r46348984, MPFR_RNDN);
        mpfr_mul(r46348986, r46348985, r46348972, MPFR_RNDN);
        ;
        mpfr_mul(r46348988, r46348965, r46348961, MPFR_RNDN);
        mpfr_mul(r46348989, r46348988, r46348961, MPFR_RNDN);
        mpfr_mul(r46348990, r46348989, r46348961, MPFR_RNDN);
        mpfr_mul(r46348991, r46348990, r46348961, MPFR_RNDN);
        mpfr_mul(r46348992, r46348991, r46348961, MPFR_RNDN);
        mpfr_mul(r46348993, r46348987, r46348992, MPFR_RNDN);
        mpfr_add(r46348994, r46348986, r46348993, MPFR_RNDN);
        return mpfr_get_d(r46348994, MPFR_RNDN);
}

