#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r49139856 = 1.875;
        float r49139857 = x;
        float r49139858 = r49139856 * r49139857;
        float r49139859 = -8.75;
        float r49139860 = r49139857 * r49139857;
        float r49139861 = r49139860 * r49139857;
        float r49139862 = r49139859 * r49139861;
        float r49139863 = r49139858 + r49139862;
        float r49139864 = 7.875;
        float r49139865 = r49139861 * r49139857;
        float r49139866 = r49139865 * r49139857;
        float r49139867 = r49139864 * r49139866;
        float r49139868 = r49139863 + r49139867;
        return r49139868;
}

double f_id(double x) {
        double r49139869 = 1.875;
        double r49139870 = x;
        double r49139871 = r49139869 * r49139870;
        double r49139872 = -8.75;
        double r49139873 = r49139870 * r49139870;
        double r49139874 = r49139873 * r49139870;
        double r49139875 = r49139872 * r49139874;
        double r49139876 = r49139871 + r49139875;
        double r49139877 = 7.875;
        double r49139878 = r49139874 * r49139870;
        double r49139879 = r49139878 * r49139870;
        double r49139880 = r49139877 * r49139879;
        double r49139881 = r49139876 + r49139880;
        return r49139881;
}


double f_of(float x) {
        float r49139882 = 7.875;
        float r49139883 = exp(r49139882);
        float r49139884 = cbrt(r49139883);
        float r49139885 = r49139884 * r49139884;
        float r49139886 = x;
        float r49139887 = 3;
        float r49139888 = pow(r49139886, r49139887);
        float r49139889 = pow(r49139885, r49139888);
        float r49139890 = pow(r49139884, r49139888);
        float r49139891 = r49139889 * r49139890;
        float r49139892 = pow(r49139891, r49139886);
        float r49139893 = pow(r49139892, r49139886);
        float r49139894 = 1.875;
        float r49139895 = r49139894 * r49139886;
        float r49139896 = exp(r49139895);
        float r49139897 = -8.75;
        float r49139898 = exp(r49139897);
        float r49139899 = pow(r49139898, r49139888);
        float r49139900 = r49139896 * r49139899;
        float r49139901 = r49139893 * r49139900;
        float r49139902 = log(r49139901);
        return r49139902;
}

double f_od(double x) {
        double r49139903 = 7.875;
        double r49139904 = exp(r49139903);
        double r49139905 = cbrt(r49139904);
        double r49139906 = r49139905 * r49139905;
        double r49139907 = x;
        double r49139908 = 3;
        double r49139909 = pow(r49139907, r49139908);
        double r49139910 = pow(r49139906, r49139909);
        double r49139911 = pow(r49139905, r49139909);
        double r49139912 = r49139910 * r49139911;
        double r49139913 = pow(r49139912, r49139907);
        double r49139914 = pow(r49139913, r49139907);
        double r49139915 = 1.875;
        double r49139916 = r49139915 * r49139907;
        double r49139917 = exp(r49139916);
        double r49139918 = -8.75;
        double r49139919 = exp(r49139918);
        double r49139920 = pow(r49139919, r49139909);
        double r49139921 = r49139917 * r49139920;
        double r49139922 = r49139914 * r49139921;
        double r49139923 = log(r49139922);
        return r49139923;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49139924, r49139925, r49139926, r49139927, r49139928, r49139929, r49139930, r49139931, r49139932, r49139933, r49139934, r49139935, r49139936;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49139924, "1.875", 10, MPFR_RNDN);
        mpfr_init(r49139925);
        mpfr_init(r49139926);
        mpfr_init_set_str(r49139927, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r49139928);
        mpfr_init(r49139929);
        mpfr_init(r49139930);
        mpfr_init(r49139931);
        mpfr_init_set_str(r49139932, "7.875", 10, MPFR_RNDN);
        mpfr_init(r49139933);
        mpfr_init(r49139934);
        mpfr_init(r49139935);
        mpfr_init(r49139936);
}

double f_im(double x) {
        ;
        mpfr_set_d(r49139925, x, MPFR_RNDN);
        mpfr_mul(r49139926, r49139924, r49139925, MPFR_RNDN);
        ;
        mpfr_mul(r49139928, r49139925, r49139925, MPFR_RNDN);
        mpfr_mul(r49139929, r49139928, r49139925, MPFR_RNDN);
        mpfr_mul(r49139930, r49139927, r49139929, MPFR_RNDN);
        mpfr_add(r49139931, r49139926, r49139930, MPFR_RNDN);
        ;
        mpfr_mul(r49139933, r49139929, r49139925, MPFR_RNDN);
        mpfr_mul(r49139934, r49139933, r49139925, MPFR_RNDN);
        mpfr_mul(r49139935, r49139932, r49139934, MPFR_RNDN);
        mpfr_add(r49139936, r49139931, r49139935, MPFR_RNDN);
        return mpfr_get_d(r49139936, MPFR_RNDN);
}

static mpfr_t r49139937, r49139938, r49139939, r49139940, r49139941, r49139942, r49139943, r49139944, r49139945, r49139946, r49139947, r49139948, r49139949, r49139950, r49139951, r49139952, r49139953, r49139954, r49139955, r49139956, r49139957;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49139937, "7.875", 10, MPFR_RNDN);
        mpfr_init(r49139938);
        mpfr_init(r49139939);
        mpfr_init(r49139940);
        mpfr_init(r49139941);
        mpfr_init_set_str(r49139942, "3", 10, MPFR_RNDN);
        mpfr_init(r49139943);
        mpfr_init(r49139944);
        mpfr_init(r49139945);
        mpfr_init(r49139946);
        mpfr_init(r49139947);
        mpfr_init(r49139948);
        mpfr_init_set_str(r49139949, "1.875", 10, MPFR_RNDN);
        mpfr_init(r49139950);
        mpfr_init(r49139951);
        mpfr_init_set_str(r49139952, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r49139953);
        mpfr_init(r49139954);
        mpfr_init(r49139955);
        mpfr_init(r49139956);
        mpfr_init(r49139957);
}

double f_fm(double x) {
        ;
        mpfr_exp(r49139938, r49139937, MPFR_RNDN);
        mpfr_cbrt(r49139939, r49139938, MPFR_RNDN);
        mpfr_mul(r49139940, r49139939, r49139939, MPFR_RNDN);
        mpfr_set_d(r49139941, x, MPFR_RNDN);
        ;
        mpfr_pow(r49139943, r49139941, r49139942, MPFR_RNDN);
        mpfr_pow(r49139944, r49139940, r49139943, MPFR_RNDN);
        mpfr_pow(r49139945, r49139939, r49139943, MPFR_RNDN);
        mpfr_mul(r49139946, r49139944, r49139945, MPFR_RNDN);
        mpfr_pow(r49139947, r49139946, r49139941, MPFR_RNDN);
        mpfr_pow(r49139948, r49139947, r49139941, MPFR_RNDN);
        ;
        mpfr_mul(r49139950, r49139949, r49139941, MPFR_RNDN);
        mpfr_exp(r49139951, r49139950, MPFR_RNDN);
        ;
        mpfr_exp(r49139953, r49139952, MPFR_RNDN);
        mpfr_pow(r49139954, r49139953, r49139943, MPFR_RNDN);
        mpfr_mul(r49139955, r49139951, r49139954, MPFR_RNDN);
        mpfr_mul(r49139956, r49139948, r49139955, MPFR_RNDN);
        mpfr_log(r49139957, r49139956, MPFR_RNDN);
        return mpfr_get_d(r49139957, MPFR_RNDN);
}

static mpfr_t r49139958, r49139959, r49139960, r49139961, r49139962, r49139963, r49139964, r49139965, r49139966, r49139967, r49139968, r49139969, r49139970, r49139971, r49139972, r49139973, r49139974, r49139975, r49139976, r49139977, r49139978;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49139958, "7.875", 10, MPFR_RNDN);
        mpfr_init(r49139959);
        mpfr_init(r49139960);
        mpfr_init(r49139961);
        mpfr_init(r49139962);
        mpfr_init_set_str(r49139963, "3", 10, MPFR_RNDN);
        mpfr_init(r49139964);
        mpfr_init(r49139965);
        mpfr_init(r49139966);
        mpfr_init(r49139967);
        mpfr_init(r49139968);
        mpfr_init(r49139969);
        mpfr_init_set_str(r49139970, "1.875", 10, MPFR_RNDN);
        mpfr_init(r49139971);
        mpfr_init(r49139972);
        mpfr_init_set_str(r49139973, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r49139974);
        mpfr_init(r49139975);
        mpfr_init(r49139976);
        mpfr_init(r49139977);
        mpfr_init(r49139978);
}

double f_dm(double x) {
        ;
        mpfr_exp(r49139959, r49139958, MPFR_RNDN);
        mpfr_cbrt(r49139960, r49139959, MPFR_RNDN);
        mpfr_mul(r49139961, r49139960, r49139960, MPFR_RNDN);
        mpfr_set_d(r49139962, x, MPFR_RNDN);
        ;
        mpfr_pow(r49139964, r49139962, r49139963, MPFR_RNDN);
        mpfr_pow(r49139965, r49139961, r49139964, MPFR_RNDN);
        mpfr_pow(r49139966, r49139960, r49139964, MPFR_RNDN);
        mpfr_mul(r49139967, r49139965, r49139966, MPFR_RNDN);
        mpfr_pow(r49139968, r49139967, r49139962, MPFR_RNDN);
        mpfr_pow(r49139969, r49139968, r49139962, MPFR_RNDN);
        ;
        mpfr_mul(r49139971, r49139970, r49139962, MPFR_RNDN);
        mpfr_exp(r49139972, r49139971, MPFR_RNDN);
        ;
        mpfr_exp(r49139974, r49139973, MPFR_RNDN);
        mpfr_pow(r49139975, r49139974, r49139964, MPFR_RNDN);
        mpfr_mul(r49139976, r49139972, r49139975, MPFR_RNDN);
        mpfr_mul(r49139977, r49139969, r49139976, MPFR_RNDN);
        mpfr_log(r49139978, r49139977, MPFR_RNDN);
        return mpfr_get_d(r49139978, MPFR_RNDN);
}

