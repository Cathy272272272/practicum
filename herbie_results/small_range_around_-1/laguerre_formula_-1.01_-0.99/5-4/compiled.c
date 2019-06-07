#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r11544854 = 1.0;
        float r11544855 = -4.0;
        float r11544856 = x;
        float r11544857 = r11544855 * r11544856;
        float r11544858 = r11544854 + r11544857;
        float r11544859 = 3.0;
        float r11544860 = r11544856 * r11544856;
        float r11544861 = r11544859 * r11544860;
        float r11544862 = r11544858 + r11544861;
        float r11544863 = -0.666667;
        float r11544864 = r11544860 * r11544856;
        float r11544865 = r11544863 * r11544864;
        float r11544866 = r11544862 + r11544865;
        float r11544867 = 0.041667;
        float r11544868 = r11544864 * r11544856;
        float r11544869 = r11544867 * r11544868;
        float r11544870 = r11544866 + r11544869;
        return r11544870;
}

double f_id(double x) {
        double r11544871 = 1.0;
        double r11544872 = -4.0;
        double r11544873 = x;
        double r11544874 = r11544872 * r11544873;
        double r11544875 = r11544871 + r11544874;
        double r11544876 = 3.0;
        double r11544877 = r11544873 * r11544873;
        double r11544878 = r11544876 * r11544877;
        double r11544879 = r11544875 + r11544878;
        double r11544880 = -0.666667;
        double r11544881 = r11544877 * r11544873;
        double r11544882 = r11544880 * r11544881;
        double r11544883 = r11544879 + r11544882;
        double r11544884 = 0.041667;
        double r11544885 = r11544881 * r11544873;
        double r11544886 = r11544884 * r11544885;
        double r11544887 = r11544883 + r11544886;
        return r11544887;
}


double f_of(float x) {
        float r11544888 = x;
        float r11544889 = 3;
        float r11544890 = pow(r11544888, r11544889);
        float r11544891 = 0.041667;
        float r11544892 = r11544891 * r11544888;
        float r11544893 = -0.666667;
        float r11544894 = r11544892 + r11544893;
        float r11544895 = r11544890 * r11544894;
        float r11544896 = -4.0;
        float r11544897 = 3.0;
        float r11544898 = r11544888 * r11544897;
        float r11544899 = r11544896 + r11544898;
        float r11544900 = r11544888 * r11544899;
        float r11544901 = 1.0;
        float r11544902 = r11544900 + r11544901;
        float r11544903 = r11544895 + r11544902;
        return r11544903;
}

double f_od(double x) {
        double r11544904 = x;
        double r11544905 = 3;
        double r11544906 = pow(r11544904, r11544905);
        double r11544907 = 0.041667;
        double r11544908 = r11544907 * r11544904;
        double r11544909 = -0.666667;
        double r11544910 = r11544908 + r11544909;
        double r11544911 = r11544906 * r11544910;
        double r11544912 = -4.0;
        double r11544913 = 3.0;
        double r11544914 = r11544904 * r11544913;
        double r11544915 = r11544912 + r11544914;
        double r11544916 = r11544904 * r11544915;
        double r11544917 = 1.0;
        double r11544918 = r11544916 + r11544917;
        double r11544919 = r11544911 + r11544918;
        return r11544919;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11544920, r11544921, r11544922, r11544923, r11544924, r11544925, r11544926, r11544927, r11544928, r11544929, r11544930, r11544931, r11544932, r11544933, r11544934, r11544935, r11544936;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11544920, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544921, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r11544922);
        mpfr_init(r11544923);
        mpfr_init(r11544924);
        mpfr_init_set_str(r11544925, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11544926);
        mpfr_init(r11544927);
        mpfr_init(r11544928);
        mpfr_init_set_str(r11544929, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11544930);
        mpfr_init(r11544931);
        mpfr_init(r11544932);
        mpfr_init_set_str(r11544933, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11544934);
        mpfr_init(r11544935);
        mpfr_init(r11544936);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11544922, x, MPFR_RNDN);
        mpfr_mul(r11544923, r11544921, r11544922, MPFR_RNDN);
        mpfr_add(r11544924, r11544920, r11544923, MPFR_RNDN);
        ;
        mpfr_mul(r11544926, r11544922, r11544922, MPFR_RNDN);
        mpfr_mul(r11544927, r11544925, r11544926, MPFR_RNDN);
        mpfr_add(r11544928, r11544924, r11544927, MPFR_RNDN);
        ;
        mpfr_mul(r11544930, r11544926, r11544922, MPFR_RNDN);
        mpfr_mul(r11544931, r11544929, r11544930, MPFR_RNDN);
        mpfr_add(r11544932, r11544928, r11544931, MPFR_RNDN);
        ;
        mpfr_mul(r11544934, r11544930, r11544922, MPFR_RNDN);
        mpfr_mul(r11544935, r11544933, r11544934, MPFR_RNDN);
        mpfr_add(r11544936, r11544932, r11544935, MPFR_RNDN);
        return mpfr_get_d(r11544936, MPFR_RNDN);
}

static mpfr_t r11544937, r11544938, r11544939, r11544940, r11544941, r11544942, r11544943, r11544944, r11544945, r11544946, r11544947, r11544948, r11544949, r11544950, r11544951, r11544952;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544937);
        mpfr_init_set_str(r11544938, "3", 10, MPFR_RNDN);
        mpfr_init(r11544939);
        mpfr_init_set_str(r11544940, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11544941);
        mpfr_init_set_str(r11544942, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11544943);
        mpfr_init(r11544944);
        mpfr_init_set_str(r11544945, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544946, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11544947);
        mpfr_init(r11544948);
        mpfr_init(r11544949);
        mpfr_init_set_str(r11544950, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544951);
        mpfr_init(r11544952);
}

double f_fm(double x) {
        mpfr_set_d(r11544937, x, MPFR_RNDN);
        ;
        mpfr_pow(r11544939, r11544937, r11544938, MPFR_RNDN);
        ;
        mpfr_mul(r11544941, r11544940, r11544937, MPFR_RNDN);
        ;
        mpfr_add(r11544943, r11544941, r11544942, MPFR_RNDN);
        mpfr_mul(r11544944, r11544939, r11544943, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544947, r11544937, r11544946, MPFR_RNDN);
        mpfr_add(r11544948, r11544945, r11544947, MPFR_RNDN);
        mpfr_mul(r11544949, r11544937, r11544948, MPFR_RNDN);
        ;
        mpfr_add(r11544951, r11544949, r11544950, MPFR_RNDN);
        mpfr_add(r11544952, r11544944, r11544951, MPFR_RNDN);
        return mpfr_get_d(r11544952, MPFR_RNDN);
}

static mpfr_t r11544953, r11544954, r11544955, r11544956, r11544957, r11544958, r11544959, r11544960, r11544961, r11544962, r11544963, r11544964, r11544965, r11544966, r11544967, r11544968;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544953);
        mpfr_init_set_str(r11544954, "3", 10, MPFR_RNDN);
        mpfr_init(r11544955);
        mpfr_init_set_str(r11544956, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11544957);
        mpfr_init_set_str(r11544958, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11544959);
        mpfr_init(r11544960);
        mpfr_init_set_str(r11544961, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544962, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11544963);
        mpfr_init(r11544964);
        mpfr_init(r11544965);
        mpfr_init_set_str(r11544966, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544967);
        mpfr_init(r11544968);
}

double f_dm(double x) {
        mpfr_set_d(r11544953, x, MPFR_RNDN);
        ;
        mpfr_pow(r11544955, r11544953, r11544954, MPFR_RNDN);
        ;
        mpfr_mul(r11544957, r11544956, r11544953, MPFR_RNDN);
        ;
        mpfr_add(r11544959, r11544957, r11544958, MPFR_RNDN);
        mpfr_mul(r11544960, r11544955, r11544959, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544963, r11544953, r11544962, MPFR_RNDN);
        mpfr_add(r11544964, r11544961, r11544963, MPFR_RNDN);
        mpfr_mul(r11544965, r11544953, r11544964, MPFR_RNDN);
        ;
        mpfr_add(r11544967, r11544965, r11544966, MPFR_RNDN);
        mpfr_add(r11544968, r11544960, r11544967, MPFR_RNDN);
        return mpfr_get_d(r11544968, MPFR_RNDN);
}

