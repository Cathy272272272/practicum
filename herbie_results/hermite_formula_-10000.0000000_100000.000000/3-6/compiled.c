#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r4210905 = -120.0;
        float r4210906 = 720.0;
        float r4210907 = x;
        float r4210908 = r4210907 * r4210907;
        float r4210909 = r4210906 * r4210908;
        float r4210910 = r4210905 + r4210909;
        float r4210911 = -480.0;
        float r4210912 = r4210908 * r4210907;
        float r4210913 = r4210912 * r4210907;
        float r4210914 = r4210911 * r4210913;
        float r4210915 = r4210910 + r4210914;
        float r4210916 = 64.0;
        float r4210917 = r4210913 * r4210907;
        float r4210918 = r4210917 * r4210907;
        float r4210919 = r4210916 * r4210918;
        float r4210920 = r4210915 + r4210919;
        return r4210920;
}

double f_id(double x) {
        double r4210921 = -120.0;
        double r4210922 = 720.0;
        double r4210923 = x;
        double r4210924 = r4210923 * r4210923;
        double r4210925 = r4210922 * r4210924;
        double r4210926 = r4210921 + r4210925;
        double r4210927 = -480.0;
        double r4210928 = r4210924 * r4210923;
        double r4210929 = r4210928 * r4210923;
        double r4210930 = r4210927 * r4210929;
        double r4210931 = r4210926 + r4210930;
        double r4210932 = 64.0;
        double r4210933 = r4210929 * r4210923;
        double r4210934 = r4210933 * r4210923;
        double r4210935 = r4210932 * r4210934;
        double r4210936 = r4210931 + r4210935;
        return r4210936;
}


double f_of(float x) {
        float r4210937 = -120.0;
        float r4210938 = 720.0;
        float r4210939 = x;
        float r4210940 = r4210939 * r4210939;
        float r4210941 = r4210938 * r4210940;
        float r4210942 = r4210937 + r4210941;
        float r4210943 = -480.0;
        float r4210944 = r4210940 * r4210939;
        float r4210945 = r4210944 * r4210939;
        float r4210946 = r4210943 * r4210945;
        float r4210947 = r4210942 + r4210946;
        float r4210948 = 64.0;
        float r4210949 = r4210945 * r4210939;
        float r4210950 = r4210949 * r4210939;
        float r4210951 = r4210948 * r4210950;
        float r4210952 = r4210947 + r4210951;
        return r4210952;
}

double f_od(double x) {
        double r4210953 = -120.0;
        double r4210954 = 720.0;
        double r4210955 = x;
        double r4210956 = r4210955 * r4210955;
        double r4210957 = r4210954 * r4210956;
        double r4210958 = r4210953 + r4210957;
        double r4210959 = -480.0;
        double r4210960 = r4210956 * r4210955;
        double r4210961 = r4210960 * r4210955;
        double r4210962 = r4210959 * r4210961;
        double r4210963 = r4210958 + r4210962;
        double r4210964 = 64.0;
        double r4210965 = r4210961 * r4210955;
        double r4210966 = r4210965 * r4210955;
        double r4210967 = r4210964 * r4210966;
        double r4210968 = r4210963 + r4210967;
        return r4210968;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4210969, r4210970, r4210971, r4210972, r4210973, r4210974, r4210975, r4210976, r4210977, r4210978, r4210979, r4210980, r4210981, r4210982, r4210983, r4210984;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4210969, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4210970, "720.0", 10, MPFR_RNDN);
        mpfr_init(r4210971);
        mpfr_init(r4210972);
        mpfr_init(r4210973);
        mpfr_init(r4210974);
        mpfr_init_set_str(r4210975, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r4210976);
        mpfr_init(r4210977);
        mpfr_init(r4210978);
        mpfr_init(r4210979);
        mpfr_init_set_str(r4210980, "64.0", 10, MPFR_RNDN);
        mpfr_init(r4210981);
        mpfr_init(r4210982);
        mpfr_init(r4210983);
        mpfr_init(r4210984);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4210971, x, MPFR_RNDN);
        mpfr_mul(r4210972, r4210971, r4210971, MPFR_RNDN);
        mpfr_mul(r4210973, r4210970, r4210972, MPFR_RNDN);
        mpfr_add(r4210974, r4210969, r4210973, MPFR_RNDN);
        ;
        mpfr_mul(r4210976, r4210972, r4210971, MPFR_RNDN);
        mpfr_mul(r4210977, r4210976, r4210971, MPFR_RNDN);
        mpfr_mul(r4210978, r4210975, r4210977, MPFR_RNDN);
        mpfr_add(r4210979, r4210974, r4210978, MPFR_RNDN);
        ;
        mpfr_mul(r4210981, r4210977, r4210971, MPFR_RNDN);
        mpfr_mul(r4210982, r4210981, r4210971, MPFR_RNDN);
        mpfr_mul(r4210983, r4210980, r4210982, MPFR_RNDN);
        mpfr_add(r4210984, r4210979, r4210983, MPFR_RNDN);
        return mpfr_get_d(r4210984, MPFR_RNDN);
}

static mpfr_t r4210985, r4210986, r4210987, r4210988, r4210989, r4210990, r4210991, r4210992, r4210993, r4210994, r4210995, r4210996, r4210997, r4210998, r4210999, r4211000;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4210985, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4210986, "720.0", 10, MPFR_RNDN);
        mpfr_init(r4210987);
        mpfr_init(r4210988);
        mpfr_init(r4210989);
        mpfr_init(r4210990);
        mpfr_init_set_str(r4210991, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r4210992);
        mpfr_init(r4210993);
        mpfr_init(r4210994);
        mpfr_init(r4210995);
        mpfr_init_set_str(r4210996, "64.0", 10, MPFR_RNDN);
        mpfr_init(r4210997);
        mpfr_init(r4210998);
        mpfr_init(r4210999);
        mpfr_init(r4211000);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4210987, x, MPFR_RNDN);
        mpfr_mul(r4210988, r4210987, r4210987, MPFR_RNDN);
        mpfr_mul(r4210989, r4210986, r4210988, MPFR_RNDN);
        mpfr_add(r4210990, r4210985, r4210989, MPFR_RNDN);
        ;
        mpfr_mul(r4210992, r4210988, r4210987, MPFR_RNDN);
        mpfr_mul(r4210993, r4210992, r4210987, MPFR_RNDN);
        mpfr_mul(r4210994, r4210991, r4210993, MPFR_RNDN);
        mpfr_add(r4210995, r4210990, r4210994, MPFR_RNDN);
        ;
        mpfr_mul(r4210997, r4210993, r4210987, MPFR_RNDN);
        mpfr_mul(r4210998, r4210997, r4210987, MPFR_RNDN);
        mpfr_mul(r4210999, r4210996, r4210998, MPFR_RNDN);
        mpfr_add(r4211000, r4210995, r4210999, MPFR_RNDN);
        return mpfr_get_d(r4211000, MPFR_RNDN);
}

static mpfr_t r4211001, r4211002, r4211003, r4211004, r4211005, r4211006, r4211007, r4211008, r4211009, r4211010, r4211011, r4211012, r4211013, r4211014, r4211015, r4211016;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4211001, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211002, "720.0", 10, MPFR_RNDN);
        mpfr_init(r4211003);
        mpfr_init(r4211004);
        mpfr_init(r4211005);
        mpfr_init(r4211006);
        mpfr_init_set_str(r4211007, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r4211008);
        mpfr_init(r4211009);
        mpfr_init(r4211010);
        mpfr_init(r4211011);
        mpfr_init_set_str(r4211012, "64.0", 10, MPFR_RNDN);
        mpfr_init(r4211013);
        mpfr_init(r4211014);
        mpfr_init(r4211015);
        mpfr_init(r4211016);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4211003, x, MPFR_RNDN);
        mpfr_mul(r4211004, r4211003, r4211003, MPFR_RNDN);
        mpfr_mul(r4211005, r4211002, r4211004, MPFR_RNDN);
        mpfr_add(r4211006, r4211001, r4211005, MPFR_RNDN);
        ;
        mpfr_mul(r4211008, r4211004, r4211003, MPFR_RNDN);
        mpfr_mul(r4211009, r4211008, r4211003, MPFR_RNDN);
        mpfr_mul(r4211010, r4211007, r4211009, MPFR_RNDN);
        mpfr_add(r4211011, r4211006, r4211010, MPFR_RNDN);
        ;
        mpfr_mul(r4211013, r4211009, r4211003, MPFR_RNDN);
        mpfr_mul(r4211014, r4211013, r4211003, MPFR_RNDN);
        mpfr_mul(r4211015, r4211012, r4211014, MPFR_RNDN);
        mpfr_add(r4211016, r4211011, r4211015, MPFR_RNDN);
        return mpfr_get_d(r4211016, MPFR_RNDN);
}

