#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r9828876 = -120.0;
        float r9828877 = 720.0;
        float r9828878 = x;
        float r9828879 = r9828878 * r9828878;
        float r9828880 = r9828877 * r9828879;
        float r9828881 = r9828876 + r9828880;
        float r9828882 = -480.0;
        float r9828883 = r9828879 * r9828878;
        float r9828884 = r9828883 * r9828878;
        float r9828885 = r9828882 * r9828884;
        float r9828886 = r9828881 + r9828885;
        float r9828887 = 64.0;
        float r9828888 = r9828884 * r9828878;
        float r9828889 = r9828888 * r9828878;
        float r9828890 = r9828887 * r9828889;
        float r9828891 = r9828886 + r9828890;
        return r9828891;
}

double f_id(double x) {
        double r9828892 = -120.0;
        double r9828893 = 720.0;
        double r9828894 = x;
        double r9828895 = r9828894 * r9828894;
        double r9828896 = r9828893 * r9828895;
        double r9828897 = r9828892 + r9828896;
        double r9828898 = -480.0;
        double r9828899 = r9828895 * r9828894;
        double r9828900 = r9828899 * r9828894;
        double r9828901 = r9828898 * r9828900;
        double r9828902 = r9828897 + r9828901;
        double r9828903 = 64.0;
        double r9828904 = r9828900 * r9828894;
        double r9828905 = r9828904 * r9828894;
        double r9828906 = r9828903 * r9828905;
        double r9828907 = r9828902 + r9828906;
        return r9828907;
}


double f_of(float x) {
        float r9828908 = x;
        float r9828909 = 720.0;
        float r9828910 = r9828908 * r9828909;
        float r9828911 = r9828910 * r9828908;
        float r9828912 = -120.0;
        float r9828913 = r9828911 + r9828912;
        float r9828914 = r9828908 * r9828908;
        float r9828915 = r9828914 * r9828914;
        float r9828916 = -480.0;
        float r9828917 = 64.0;
        float r9828918 = r9828914 * r9828917;
        float r9828919 = r9828916 + r9828918;
        float r9828920 = r9828915 * r9828919;
        float r9828921 = r9828913 + r9828920;
        return r9828921;
}

double f_od(double x) {
        double r9828922 = x;
        double r9828923 = 720.0;
        double r9828924 = r9828922 * r9828923;
        double r9828925 = r9828924 * r9828922;
        double r9828926 = -120.0;
        double r9828927 = r9828925 + r9828926;
        double r9828928 = r9828922 * r9828922;
        double r9828929 = r9828928 * r9828928;
        double r9828930 = -480.0;
        double r9828931 = 64.0;
        double r9828932 = r9828928 * r9828931;
        double r9828933 = r9828930 + r9828932;
        double r9828934 = r9828929 * r9828933;
        double r9828935 = r9828927 + r9828934;
        return r9828935;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9828936, r9828937, r9828938, r9828939, r9828940, r9828941, r9828942, r9828943, r9828944, r9828945, r9828946, r9828947, r9828948, r9828949, r9828950, r9828951;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9828936, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9828937, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9828938);
        mpfr_init(r9828939);
        mpfr_init(r9828940);
        mpfr_init(r9828941);
        mpfr_init_set_str(r9828942, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r9828943);
        mpfr_init(r9828944);
        mpfr_init(r9828945);
        mpfr_init(r9828946);
        mpfr_init_set_str(r9828947, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9828948);
        mpfr_init(r9828949);
        mpfr_init(r9828950);
        mpfr_init(r9828951);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9828938, x, MPFR_RNDN);
        mpfr_mul(r9828939, r9828938, r9828938, MPFR_RNDN);
        mpfr_mul(r9828940, r9828937, r9828939, MPFR_RNDN);
        mpfr_add(r9828941, r9828936, r9828940, MPFR_RNDN);
        ;
        mpfr_mul(r9828943, r9828939, r9828938, MPFR_RNDN);
        mpfr_mul(r9828944, r9828943, r9828938, MPFR_RNDN);
        mpfr_mul(r9828945, r9828942, r9828944, MPFR_RNDN);
        mpfr_add(r9828946, r9828941, r9828945, MPFR_RNDN);
        ;
        mpfr_mul(r9828948, r9828944, r9828938, MPFR_RNDN);
        mpfr_mul(r9828949, r9828948, r9828938, MPFR_RNDN);
        mpfr_mul(r9828950, r9828947, r9828949, MPFR_RNDN);
        mpfr_add(r9828951, r9828946, r9828950, MPFR_RNDN);
        return mpfr_get_d(r9828951, MPFR_RNDN);
}

static mpfr_t r9828952, r9828953, r9828954, r9828955, r9828956, r9828957, r9828958, r9828959, r9828960, r9828961, r9828962, r9828963, r9828964, r9828965;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9828952);
        mpfr_init_set_str(r9828953, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9828954);
        mpfr_init(r9828955);
        mpfr_init_set_str(r9828956, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r9828957);
        mpfr_init(r9828958);
        mpfr_init(r9828959);
        mpfr_init_set_str(r9828960, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9828961, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9828962);
        mpfr_init(r9828963);
        mpfr_init(r9828964);
        mpfr_init(r9828965);
}

double f_fm(double x) {
        mpfr_set_d(r9828952, x, MPFR_RNDN);
        ;
        mpfr_mul(r9828954, r9828952, r9828953, MPFR_RNDN);
        mpfr_mul(r9828955, r9828954, r9828952, MPFR_RNDN);
        ;
        mpfr_add(r9828957, r9828955, r9828956, MPFR_RNDN);
        mpfr_mul(r9828958, r9828952, r9828952, MPFR_RNDN);
        mpfr_mul(r9828959, r9828958, r9828958, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9828962, r9828958, r9828961, MPFR_RNDN);
        mpfr_add(r9828963, r9828960, r9828962, MPFR_RNDN);
        mpfr_mul(r9828964, r9828959, r9828963, MPFR_RNDN);
        mpfr_add(r9828965, r9828957, r9828964, MPFR_RNDN);
        return mpfr_get_d(r9828965, MPFR_RNDN);
}

static mpfr_t r9828966, r9828967, r9828968, r9828969, r9828970, r9828971, r9828972, r9828973, r9828974, r9828975, r9828976, r9828977, r9828978, r9828979;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9828966);
        mpfr_init_set_str(r9828967, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9828968);
        mpfr_init(r9828969);
        mpfr_init_set_str(r9828970, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r9828971);
        mpfr_init(r9828972);
        mpfr_init(r9828973);
        mpfr_init_set_str(r9828974, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9828975, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9828976);
        mpfr_init(r9828977);
        mpfr_init(r9828978);
        mpfr_init(r9828979);
}

double f_dm(double x) {
        mpfr_set_d(r9828966, x, MPFR_RNDN);
        ;
        mpfr_mul(r9828968, r9828966, r9828967, MPFR_RNDN);
        mpfr_mul(r9828969, r9828968, r9828966, MPFR_RNDN);
        ;
        mpfr_add(r9828971, r9828969, r9828970, MPFR_RNDN);
        mpfr_mul(r9828972, r9828966, r9828966, MPFR_RNDN);
        mpfr_mul(r9828973, r9828972, r9828972, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9828976, r9828972, r9828975, MPFR_RNDN);
        mpfr_add(r9828977, r9828974, r9828976, MPFR_RNDN);
        mpfr_mul(r9828978, r9828973, r9828977, MPFR_RNDN);
        mpfr_add(r9828979, r9828971, r9828978, MPFR_RNDN);
        return mpfr_get_d(r9828979, MPFR_RNDN);
}

