#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7402870 = 0.375;
        float r7402871 = -3.75;
        float r7402872 = x;
        float r7402873 = r7402872 * r7402872;
        float r7402874 = r7402871 * r7402873;
        float r7402875 = r7402870 + r7402874;
        float r7402876 = 4.375;
        float r7402877 = r7402873 * r7402872;
        float r7402878 = r7402877 * r7402872;
        float r7402879 = r7402876 * r7402878;
        float r7402880 = r7402875 + r7402879;
        return r7402880;
}

double f_id(double x) {
        double r7402881 = 0.375;
        double r7402882 = -3.75;
        double r7402883 = x;
        double r7402884 = r7402883 * r7402883;
        double r7402885 = r7402882 * r7402884;
        double r7402886 = r7402881 + r7402885;
        double r7402887 = 4.375;
        double r7402888 = r7402884 * r7402883;
        double r7402889 = r7402888 * r7402883;
        double r7402890 = r7402887 * r7402889;
        double r7402891 = r7402886 + r7402890;
        return r7402891;
}


double f_of(float x) {
        float r7402892 = 0.375;
        float r7402893 = -3.75;
        float r7402894 = x;
        float r7402895 = r7402894 * r7402894;
        float r7402896 = r7402893 * r7402895;
        float r7402897 = r7402892 + r7402896;
        float r7402898 = 4.375;
        float r7402899 = r7402895 * r7402894;
        float r7402900 = r7402899 * r7402894;
        float r7402901 = r7402898 * r7402900;
        float r7402902 = r7402897 + r7402901;
        return r7402902;
}

double f_od(double x) {
        double r7402903 = 0.375;
        double r7402904 = -3.75;
        double r7402905 = x;
        double r7402906 = r7402905 * r7402905;
        double r7402907 = r7402904 * r7402906;
        double r7402908 = r7402903 + r7402907;
        double r7402909 = 4.375;
        double r7402910 = r7402906 * r7402905;
        double r7402911 = r7402910 * r7402905;
        double r7402912 = r7402909 * r7402911;
        double r7402913 = r7402908 + r7402912;
        return r7402913;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7402914, r7402915, r7402916, r7402917, r7402918, r7402919, r7402920, r7402921, r7402922, r7402923, r7402924;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7402914, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402915, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7402916);
        mpfr_init(r7402917);
        mpfr_init(r7402918);
        mpfr_init(r7402919);
        mpfr_init_set_str(r7402920, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7402921);
        mpfr_init(r7402922);
        mpfr_init(r7402923);
        mpfr_init(r7402924);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7402916, x, MPFR_RNDN);
        mpfr_mul(r7402917, r7402916, r7402916, MPFR_RNDN);
        mpfr_mul(r7402918, r7402915, r7402917, MPFR_RNDN);
        mpfr_add(r7402919, r7402914, r7402918, MPFR_RNDN);
        ;
        mpfr_mul(r7402921, r7402917, r7402916, MPFR_RNDN);
        mpfr_mul(r7402922, r7402921, r7402916, MPFR_RNDN);
        mpfr_mul(r7402923, r7402920, r7402922, MPFR_RNDN);
        mpfr_add(r7402924, r7402919, r7402923, MPFR_RNDN);
        return mpfr_get_d(r7402924, MPFR_RNDN);
}

static mpfr_t r7402925, r7402926, r7402927, r7402928, r7402929, r7402930, r7402931, r7402932, r7402933, r7402934, r7402935;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7402925, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402926, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7402927);
        mpfr_init(r7402928);
        mpfr_init(r7402929);
        mpfr_init(r7402930);
        mpfr_init_set_str(r7402931, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7402932);
        mpfr_init(r7402933);
        mpfr_init(r7402934);
        mpfr_init(r7402935);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7402927, x, MPFR_RNDN);
        mpfr_mul(r7402928, r7402927, r7402927, MPFR_RNDN);
        mpfr_mul(r7402929, r7402926, r7402928, MPFR_RNDN);
        mpfr_add(r7402930, r7402925, r7402929, MPFR_RNDN);
        ;
        mpfr_mul(r7402932, r7402928, r7402927, MPFR_RNDN);
        mpfr_mul(r7402933, r7402932, r7402927, MPFR_RNDN);
        mpfr_mul(r7402934, r7402931, r7402933, MPFR_RNDN);
        mpfr_add(r7402935, r7402930, r7402934, MPFR_RNDN);
        return mpfr_get_d(r7402935, MPFR_RNDN);
}

static mpfr_t r7402936, r7402937, r7402938, r7402939, r7402940, r7402941, r7402942, r7402943, r7402944, r7402945, r7402946;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7402936, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402937, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7402938);
        mpfr_init(r7402939);
        mpfr_init(r7402940);
        mpfr_init(r7402941);
        mpfr_init_set_str(r7402942, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7402943);
        mpfr_init(r7402944);
        mpfr_init(r7402945);
        mpfr_init(r7402946);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7402938, x, MPFR_RNDN);
        mpfr_mul(r7402939, r7402938, r7402938, MPFR_RNDN);
        mpfr_mul(r7402940, r7402937, r7402939, MPFR_RNDN);
        mpfr_add(r7402941, r7402936, r7402940, MPFR_RNDN);
        ;
        mpfr_mul(r7402943, r7402939, r7402938, MPFR_RNDN);
        mpfr_mul(r7402944, r7402943, r7402938, MPFR_RNDN);
        mpfr_mul(r7402945, r7402942, r7402944, MPFR_RNDN);
        mpfr_add(r7402946, r7402941, r7402945, MPFR_RNDN);
        return mpfr_get_d(r7402946, MPFR_RNDN);
}

