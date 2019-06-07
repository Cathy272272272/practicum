#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r63170850 = 12.0;
        float r63170851 = -48.0;
        float r63170852 = x;
        float r63170853 = r63170852 * r63170852;
        float r63170854 = r63170851 * r63170853;
        float r63170855 = r63170850 + r63170854;
        float r63170856 = 16.0;
        float r63170857 = r63170853 * r63170852;
        float r63170858 = r63170857 * r63170852;
        float r63170859 = r63170856 * r63170858;
        float r63170860 = r63170855 + r63170859;
        return r63170860;
}

double f_id(double x) {
        double r63170861 = 12.0;
        double r63170862 = -48.0;
        double r63170863 = x;
        double r63170864 = r63170863 * r63170863;
        double r63170865 = r63170862 * r63170864;
        double r63170866 = r63170861 + r63170865;
        double r63170867 = 16.0;
        double r63170868 = r63170864 * r63170863;
        double r63170869 = r63170868 * r63170863;
        double r63170870 = r63170867 * r63170869;
        double r63170871 = r63170866 + r63170870;
        return r63170871;
}


double f_of(float x) {
        float r63170872 = 12.0;
        float r63170873 = exp(r63170872);
        float r63170874 = -48.0;
        float r63170875 = exp(r63170874);
        float r63170876 = x;
        float r63170877 = r63170876 * r63170876;
        float r63170878 = pow(r63170875, r63170877);
        float r63170879 = r63170873 * r63170878;
        float r63170880 = 3;
        float r63170881 = pow(r63170879, r63170880);
        float r63170882 = fabs(r63170877);
        float r63170883 = exp(r63170882);
        float r63170884 = 16.0;
        float r63170885 = r63170884 + r63170884;
        float r63170886 = r63170885 + r63170884;
        float r63170887 = r63170882 * r63170886;
        float r63170888 = pow(r63170883, r63170887);
        float r63170889 = r63170881 * r63170888;
        float r63170890 = cbrt(r63170889);
        float r63170891 = log(r63170890);
        return r63170891;
}

double f_od(double x) {
        double r63170892 = 12.0;
        double r63170893 = exp(r63170892);
        double r63170894 = -48.0;
        double r63170895 = exp(r63170894);
        double r63170896 = x;
        double r63170897 = r63170896 * r63170896;
        double r63170898 = pow(r63170895, r63170897);
        double r63170899 = r63170893 * r63170898;
        double r63170900 = 3;
        double r63170901 = pow(r63170899, r63170900);
        double r63170902 = fabs(r63170897);
        double r63170903 = exp(r63170902);
        double r63170904 = 16.0;
        double r63170905 = r63170904 + r63170904;
        double r63170906 = r63170905 + r63170904;
        double r63170907 = r63170902 * r63170906;
        double r63170908 = pow(r63170903, r63170907);
        double r63170909 = r63170901 * r63170908;
        double r63170910 = cbrt(r63170909);
        double r63170911 = log(r63170910);
        return r63170911;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63170912, r63170913, r63170914, r63170915, r63170916, r63170917, r63170918, r63170919, r63170920, r63170921, r63170922;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170912, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170913, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r63170914);
        mpfr_init(r63170915);
        mpfr_init(r63170916);
        mpfr_init(r63170917);
        mpfr_init_set_str(r63170918, "16.0", 10, MPFR_RNDN);
        mpfr_init(r63170919);
        mpfr_init(r63170920);
        mpfr_init(r63170921);
        mpfr_init(r63170922);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r63170914, x, MPFR_RNDN);
        mpfr_mul(r63170915, r63170914, r63170914, MPFR_RNDN);
        mpfr_mul(r63170916, r63170913, r63170915, MPFR_RNDN);
        mpfr_add(r63170917, r63170912, r63170916, MPFR_RNDN);
        ;
        mpfr_mul(r63170919, r63170915, r63170914, MPFR_RNDN);
        mpfr_mul(r63170920, r63170919, r63170914, MPFR_RNDN);
        mpfr_mul(r63170921, r63170918, r63170920, MPFR_RNDN);
        mpfr_add(r63170922, r63170917, r63170921, MPFR_RNDN);
        return mpfr_get_d(r63170922, MPFR_RNDN);
}

static mpfr_t r63170923, r63170924, r63170925, r63170926, r63170927, r63170928, r63170929, r63170930, r63170931, r63170932, r63170933, r63170934, r63170935, r63170936, r63170937, r63170938, r63170939, r63170940, r63170941, r63170942;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170923, "12.0", 10, MPFR_RNDN);
        mpfr_init(r63170924);
        mpfr_init_set_str(r63170925, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r63170926);
        mpfr_init(r63170927);
        mpfr_init(r63170928);
        mpfr_init(r63170929);
        mpfr_init(r63170930);
        mpfr_init_set_str(r63170931, "3", 10, MPFR_RNDN);
        mpfr_init(r63170932);
        mpfr_init(r63170933);
        mpfr_init(r63170934);
        mpfr_init_set_str(r63170935, "16.0", 10, MPFR_RNDN);
        mpfr_init(r63170936);
        mpfr_init(r63170937);
        mpfr_init(r63170938);
        mpfr_init(r63170939);
        mpfr_init(r63170940);
        mpfr_init(r63170941);
        mpfr_init(r63170942);
}

double f_fm(double x) {
        ;
        mpfr_exp(r63170924, r63170923, MPFR_RNDN);
        ;
        mpfr_exp(r63170926, r63170925, MPFR_RNDN);
        mpfr_set_d(r63170927, x, MPFR_RNDN);
        mpfr_mul(r63170928, r63170927, r63170927, MPFR_RNDN);
        mpfr_pow(r63170929, r63170926, r63170928, MPFR_RNDN);
        mpfr_mul(r63170930, r63170924, r63170929, MPFR_RNDN);
        ;
        mpfr_pow(r63170932, r63170930, r63170931, MPFR_RNDN);
        mpfr_abs(r63170933, r63170928, MPFR_RNDN);
        mpfr_exp(r63170934, r63170933, MPFR_RNDN);
        ;
        mpfr_add(r63170936, r63170935, r63170935, MPFR_RNDN);
        mpfr_add(r63170937, r63170936, r63170935, MPFR_RNDN);
        mpfr_mul(r63170938, r63170933, r63170937, MPFR_RNDN);
        mpfr_pow(r63170939, r63170934, r63170938, MPFR_RNDN);
        mpfr_mul(r63170940, r63170932, r63170939, MPFR_RNDN);
        mpfr_cbrt(r63170941, r63170940, MPFR_RNDN);
        mpfr_log(r63170942, r63170941, MPFR_RNDN);
        return mpfr_get_d(r63170942, MPFR_RNDN);
}

static mpfr_t r63170943, r63170944, r63170945, r63170946, r63170947, r63170948, r63170949, r63170950, r63170951, r63170952, r63170953, r63170954, r63170955, r63170956, r63170957, r63170958, r63170959, r63170960, r63170961, r63170962;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170943, "12.0", 10, MPFR_RNDN);
        mpfr_init(r63170944);
        mpfr_init_set_str(r63170945, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r63170946);
        mpfr_init(r63170947);
        mpfr_init(r63170948);
        mpfr_init(r63170949);
        mpfr_init(r63170950);
        mpfr_init_set_str(r63170951, "3", 10, MPFR_RNDN);
        mpfr_init(r63170952);
        mpfr_init(r63170953);
        mpfr_init(r63170954);
        mpfr_init_set_str(r63170955, "16.0", 10, MPFR_RNDN);
        mpfr_init(r63170956);
        mpfr_init(r63170957);
        mpfr_init(r63170958);
        mpfr_init(r63170959);
        mpfr_init(r63170960);
        mpfr_init(r63170961);
        mpfr_init(r63170962);
}

double f_dm(double x) {
        ;
        mpfr_exp(r63170944, r63170943, MPFR_RNDN);
        ;
        mpfr_exp(r63170946, r63170945, MPFR_RNDN);
        mpfr_set_d(r63170947, x, MPFR_RNDN);
        mpfr_mul(r63170948, r63170947, r63170947, MPFR_RNDN);
        mpfr_pow(r63170949, r63170946, r63170948, MPFR_RNDN);
        mpfr_mul(r63170950, r63170944, r63170949, MPFR_RNDN);
        ;
        mpfr_pow(r63170952, r63170950, r63170951, MPFR_RNDN);
        mpfr_abs(r63170953, r63170948, MPFR_RNDN);
        mpfr_exp(r63170954, r63170953, MPFR_RNDN);
        ;
        mpfr_add(r63170956, r63170955, r63170955, MPFR_RNDN);
        mpfr_add(r63170957, r63170956, r63170955, MPFR_RNDN);
        mpfr_mul(r63170958, r63170953, r63170957, MPFR_RNDN);
        mpfr_pow(r63170959, r63170954, r63170958, MPFR_RNDN);
        mpfr_mul(r63170960, r63170952, r63170959, MPFR_RNDN);
        mpfr_cbrt(r63170961, r63170960, MPFR_RNDN);
        mpfr_log(r63170962, r63170961, MPFR_RNDN);
        return mpfr_get_d(r63170962, MPFR_RNDN);
}

