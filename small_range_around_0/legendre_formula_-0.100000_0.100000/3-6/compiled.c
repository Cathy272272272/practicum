#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r4598848 = -0.3125;
        float r4598849 = 6.5625;
        float r4598850 = x;
        float r4598851 = r4598850 * r4598850;
        float r4598852 = r4598849 * r4598851;
        float r4598853 = r4598848 + r4598852;
        float r4598854 = -19.6875;
        float r4598855 = r4598851 * r4598850;
        float r4598856 = r4598855 * r4598850;
        float r4598857 = r4598854 * r4598856;
        float r4598858 = r4598853 + r4598857;
        float r4598859 = 14.4375;
        float r4598860 = r4598856 * r4598850;
        float r4598861 = r4598860 * r4598850;
        float r4598862 = r4598859 * r4598861;
        float r4598863 = r4598858 + r4598862;
        return r4598863;
}

double f_id(double x) {
        double r4598864 = -0.3125;
        double r4598865 = 6.5625;
        double r4598866 = x;
        double r4598867 = r4598866 * r4598866;
        double r4598868 = r4598865 * r4598867;
        double r4598869 = r4598864 + r4598868;
        double r4598870 = -19.6875;
        double r4598871 = r4598867 * r4598866;
        double r4598872 = r4598871 * r4598866;
        double r4598873 = r4598870 * r4598872;
        double r4598874 = r4598869 + r4598873;
        double r4598875 = 14.4375;
        double r4598876 = r4598872 * r4598866;
        double r4598877 = r4598876 * r4598866;
        double r4598878 = r4598875 * r4598877;
        double r4598879 = r4598874 + r4598878;
        return r4598879;
}


double f_of(float x) {
        float r4598880 = -0.3125;
        float r4598881 = 6.5625;
        float r4598882 = x;
        float r4598883 = r4598882 * r4598882;
        float r4598884 = r4598881 * r4598883;
        float r4598885 = r4598880 + r4598884;
        float r4598886 = -19.6875;
        float r4598887 = r4598883 * r4598882;
        float r4598888 = r4598887 * r4598882;
        float r4598889 = r4598886 * r4598888;
        float r4598890 = r4598885 + r4598889;
        float r4598891 = 14.4375;
        float r4598892 = r4598888 * r4598882;
        float r4598893 = r4598892 * r4598882;
        float r4598894 = r4598891 * r4598893;
        float r4598895 = r4598890 + r4598894;
        return r4598895;
}

double f_od(double x) {
        double r4598896 = -0.3125;
        double r4598897 = 6.5625;
        double r4598898 = x;
        double r4598899 = r4598898 * r4598898;
        double r4598900 = r4598897 * r4598899;
        double r4598901 = r4598896 + r4598900;
        double r4598902 = -19.6875;
        double r4598903 = r4598899 * r4598898;
        double r4598904 = r4598903 * r4598898;
        double r4598905 = r4598902 * r4598904;
        double r4598906 = r4598901 + r4598905;
        double r4598907 = 14.4375;
        double r4598908 = r4598904 * r4598898;
        double r4598909 = r4598908 * r4598898;
        double r4598910 = r4598907 * r4598909;
        double r4598911 = r4598906 + r4598910;
        return r4598911;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4598912, r4598913, r4598914, r4598915, r4598916, r4598917, r4598918, r4598919, r4598920, r4598921, r4598922, r4598923, r4598924, r4598925, r4598926, r4598927;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4598912, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4598913, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4598914);
        mpfr_init(r4598915);
        mpfr_init(r4598916);
        mpfr_init(r4598917);
        mpfr_init_set_str(r4598918, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4598919);
        mpfr_init(r4598920);
        mpfr_init(r4598921);
        mpfr_init(r4598922);
        mpfr_init_set_str(r4598923, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4598924);
        mpfr_init(r4598925);
        mpfr_init(r4598926);
        mpfr_init(r4598927);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4598914, x, MPFR_RNDN);
        mpfr_mul(r4598915, r4598914, r4598914, MPFR_RNDN);
        mpfr_mul(r4598916, r4598913, r4598915, MPFR_RNDN);
        mpfr_add(r4598917, r4598912, r4598916, MPFR_RNDN);
        ;
        mpfr_mul(r4598919, r4598915, r4598914, MPFR_RNDN);
        mpfr_mul(r4598920, r4598919, r4598914, MPFR_RNDN);
        mpfr_mul(r4598921, r4598918, r4598920, MPFR_RNDN);
        mpfr_add(r4598922, r4598917, r4598921, MPFR_RNDN);
        ;
        mpfr_mul(r4598924, r4598920, r4598914, MPFR_RNDN);
        mpfr_mul(r4598925, r4598924, r4598914, MPFR_RNDN);
        mpfr_mul(r4598926, r4598923, r4598925, MPFR_RNDN);
        mpfr_add(r4598927, r4598922, r4598926, MPFR_RNDN);
        return mpfr_get_d(r4598927, MPFR_RNDN);
}

static mpfr_t r4598928, r4598929, r4598930, r4598931, r4598932, r4598933, r4598934, r4598935, r4598936, r4598937, r4598938, r4598939, r4598940, r4598941, r4598942, r4598943;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4598928, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4598929, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4598930);
        mpfr_init(r4598931);
        mpfr_init(r4598932);
        mpfr_init(r4598933);
        mpfr_init_set_str(r4598934, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4598935);
        mpfr_init(r4598936);
        mpfr_init(r4598937);
        mpfr_init(r4598938);
        mpfr_init_set_str(r4598939, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4598940);
        mpfr_init(r4598941);
        mpfr_init(r4598942);
        mpfr_init(r4598943);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4598930, x, MPFR_RNDN);
        mpfr_mul(r4598931, r4598930, r4598930, MPFR_RNDN);
        mpfr_mul(r4598932, r4598929, r4598931, MPFR_RNDN);
        mpfr_add(r4598933, r4598928, r4598932, MPFR_RNDN);
        ;
        mpfr_mul(r4598935, r4598931, r4598930, MPFR_RNDN);
        mpfr_mul(r4598936, r4598935, r4598930, MPFR_RNDN);
        mpfr_mul(r4598937, r4598934, r4598936, MPFR_RNDN);
        mpfr_add(r4598938, r4598933, r4598937, MPFR_RNDN);
        ;
        mpfr_mul(r4598940, r4598936, r4598930, MPFR_RNDN);
        mpfr_mul(r4598941, r4598940, r4598930, MPFR_RNDN);
        mpfr_mul(r4598942, r4598939, r4598941, MPFR_RNDN);
        mpfr_add(r4598943, r4598938, r4598942, MPFR_RNDN);
        return mpfr_get_d(r4598943, MPFR_RNDN);
}

static mpfr_t r4598944, r4598945, r4598946, r4598947, r4598948, r4598949, r4598950, r4598951, r4598952, r4598953, r4598954, r4598955, r4598956, r4598957, r4598958, r4598959;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4598944, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4598945, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4598946);
        mpfr_init(r4598947);
        mpfr_init(r4598948);
        mpfr_init(r4598949);
        mpfr_init_set_str(r4598950, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4598951);
        mpfr_init(r4598952);
        mpfr_init(r4598953);
        mpfr_init(r4598954);
        mpfr_init_set_str(r4598955, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4598956);
        mpfr_init(r4598957);
        mpfr_init(r4598958);
        mpfr_init(r4598959);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4598946, x, MPFR_RNDN);
        mpfr_mul(r4598947, r4598946, r4598946, MPFR_RNDN);
        mpfr_mul(r4598948, r4598945, r4598947, MPFR_RNDN);
        mpfr_add(r4598949, r4598944, r4598948, MPFR_RNDN);
        ;
        mpfr_mul(r4598951, r4598947, r4598946, MPFR_RNDN);
        mpfr_mul(r4598952, r4598951, r4598946, MPFR_RNDN);
        mpfr_mul(r4598953, r4598950, r4598952, MPFR_RNDN);
        mpfr_add(r4598954, r4598949, r4598953, MPFR_RNDN);
        ;
        mpfr_mul(r4598956, r4598952, r4598946, MPFR_RNDN);
        mpfr_mul(r4598957, r4598956, r4598946, MPFR_RNDN);
        mpfr_mul(r4598958, r4598955, r4598957, MPFR_RNDN);
        mpfr_add(r4598959, r4598954, r4598958, MPFR_RNDN);
        return mpfr_get_d(r4598959, MPFR_RNDN);
}

