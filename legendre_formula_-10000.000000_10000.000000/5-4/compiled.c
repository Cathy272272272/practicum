#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6860925 = 0.375;
        float r6860926 = -3.75;
        float r6860927 = x;
        float r6860928 = r6860927 * r6860927;
        float r6860929 = r6860926 * r6860928;
        float r6860930 = r6860925 + r6860929;
        float r6860931 = 4.375;
        float r6860932 = r6860928 * r6860927;
        float r6860933 = r6860932 * r6860927;
        float r6860934 = r6860931 * r6860933;
        float r6860935 = r6860930 + r6860934;
        return r6860935;
}

double f_id(double x) {
        double r6860936 = 0.375;
        double r6860937 = -3.75;
        double r6860938 = x;
        double r6860939 = r6860938 * r6860938;
        double r6860940 = r6860937 * r6860939;
        double r6860941 = r6860936 + r6860940;
        double r6860942 = 4.375;
        double r6860943 = r6860939 * r6860938;
        double r6860944 = r6860943 * r6860938;
        double r6860945 = r6860942 * r6860944;
        double r6860946 = r6860941 + r6860945;
        return r6860946;
}


double f_of(float x) {
        float r6860947 = 0.375;
        float r6860948 = -3.75;
        float r6860949 = x;
        float r6860950 = r6860949 * r6860949;
        float r6860951 = r6860948 * r6860950;
        float r6860952 = r6860947 + r6860951;
        float r6860953 = 4.375;
        float r6860954 = r6860950 * r6860949;
        float r6860955 = r6860954 * r6860949;
        float r6860956 = r6860953 * r6860955;
        float r6860957 = r6860952 + r6860956;
        return r6860957;
}

double f_od(double x) {
        double r6860958 = 0.375;
        double r6860959 = -3.75;
        double r6860960 = x;
        double r6860961 = r6860960 * r6860960;
        double r6860962 = r6860959 * r6860961;
        double r6860963 = r6860958 + r6860962;
        double r6860964 = 4.375;
        double r6860965 = r6860961 * r6860960;
        double r6860966 = r6860965 * r6860960;
        double r6860967 = r6860964 * r6860966;
        double r6860968 = r6860963 + r6860967;
        return r6860968;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6860969, r6860970, r6860971, r6860972, r6860973, r6860974, r6860975, r6860976, r6860977, r6860978, r6860979;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6860969, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860970, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6860971);
        mpfr_init(r6860972);
        mpfr_init(r6860973);
        mpfr_init(r6860974);
        mpfr_init_set_str(r6860975, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6860976);
        mpfr_init(r6860977);
        mpfr_init(r6860978);
        mpfr_init(r6860979);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6860971, x, MPFR_RNDN);
        mpfr_mul(r6860972, r6860971, r6860971, MPFR_RNDN);
        mpfr_mul(r6860973, r6860970, r6860972, MPFR_RNDN);
        mpfr_add(r6860974, r6860969, r6860973, MPFR_RNDN);
        ;
        mpfr_mul(r6860976, r6860972, r6860971, MPFR_RNDN);
        mpfr_mul(r6860977, r6860976, r6860971, MPFR_RNDN);
        mpfr_mul(r6860978, r6860975, r6860977, MPFR_RNDN);
        mpfr_add(r6860979, r6860974, r6860978, MPFR_RNDN);
        return mpfr_get_d(r6860979, MPFR_RNDN);
}

static mpfr_t r6860980, r6860981, r6860982, r6860983, r6860984, r6860985, r6860986, r6860987, r6860988, r6860989, r6860990;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6860980, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860981, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6860982);
        mpfr_init(r6860983);
        mpfr_init(r6860984);
        mpfr_init(r6860985);
        mpfr_init_set_str(r6860986, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6860987);
        mpfr_init(r6860988);
        mpfr_init(r6860989);
        mpfr_init(r6860990);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6860982, x, MPFR_RNDN);
        mpfr_mul(r6860983, r6860982, r6860982, MPFR_RNDN);
        mpfr_mul(r6860984, r6860981, r6860983, MPFR_RNDN);
        mpfr_add(r6860985, r6860980, r6860984, MPFR_RNDN);
        ;
        mpfr_mul(r6860987, r6860983, r6860982, MPFR_RNDN);
        mpfr_mul(r6860988, r6860987, r6860982, MPFR_RNDN);
        mpfr_mul(r6860989, r6860986, r6860988, MPFR_RNDN);
        mpfr_add(r6860990, r6860985, r6860989, MPFR_RNDN);
        return mpfr_get_d(r6860990, MPFR_RNDN);
}

static mpfr_t r6860991, r6860992, r6860993, r6860994, r6860995, r6860996, r6860997, r6860998, r6860999, r6861000, r6861001;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6860991, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860992, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6860993);
        mpfr_init(r6860994);
        mpfr_init(r6860995);
        mpfr_init(r6860996);
        mpfr_init_set_str(r6860997, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6860998);
        mpfr_init(r6860999);
        mpfr_init(r6861000);
        mpfr_init(r6861001);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6860993, x, MPFR_RNDN);
        mpfr_mul(r6860994, r6860993, r6860993, MPFR_RNDN);
        mpfr_mul(r6860995, r6860992, r6860994, MPFR_RNDN);
        mpfr_add(r6860996, r6860991, r6860995, MPFR_RNDN);
        ;
        mpfr_mul(r6860998, r6860994, r6860993, MPFR_RNDN);
        mpfr_mul(r6860999, r6860998, r6860993, MPFR_RNDN);
        mpfr_mul(r6861000, r6860997, r6860999, MPFR_RNDN);
        mpfr_add(r6861001, r6860996, r6861000, MPFR_RNDN);
        return mpfr_get_d(r6861001, MPFR_RNDN);
}

