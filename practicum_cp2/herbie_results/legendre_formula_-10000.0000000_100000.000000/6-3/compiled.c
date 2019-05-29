#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r7402947 = -1.5;
        float r7402948 = x;
        float r7402949 = r7402947 * r7402948;
        float r7402950 = 2.5;
        float r7402951 = r7402948 * r7402948;
        float r7402952 = r7402951 * r7402948;
        float r7402953 = r7402950 * r7402952;
        float r7402954 = r7402949 + r7402953;
        return r7402954;
}

double f_id(double x) {
        double r7402955 = -1.5;
        double r7402956 = x;
        double r7402957 = r7402955 * r7402956;
        double r7402958 = 2.5;
        double r7402959 = r7402956 * r7402956;
        double r7402960 = r7402959 * r7402956;
        double r7402961 = r7402958 * r7402960;
        double r7402962 = r7402957 + r7402961;
        return r7402962;
}


double f_of(float x) {
        float r7402963 = -1.5;
        float r7402964 = x;
        float r7402965 = r7402963 * r7402964;
        float r7402966 = 2.5;
        float r7402967 = r7402964 * r7402964;
        float r7402968 = r7402967 * r7402964;
        float r7402969 = r7402966 * r7402968;
        float r7402970 = cbrt(r7402969);
        float r7402971 = r7402970 * r7402970;
        float r7402972 = exp(r7402971);
        float r7402973 = log(r7402972);
        float r7402974 = r7402973 * r7402970;
        float r7402975 = r7402965 + r7402974;
        return r7402975;
}

double f_od(double x) {
        double r7402976 = -1.5;
        double r7402977 = x;
        double r7402978 = r7402976 * r7402977;
        double r7402979 = 2.5;
        double r7402980 = r7402977 * r7402977;
        double r7402981 = r7402980 * r7402977;
        double r7402982 = r7402979 * r7402981;
        double r7402983 = cbrt(r7402982);
        double r7402984 = r7402983 * r7402983;
        double r7402985 = exp(r7402984);
        double r7402986 = log(r7402985);
        double r7402987 = r7402986 * r7402983;
        double r7402988 = r7402978 + r7402987;
        return r7402988;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7402989, r7402990, r7402991, r7402992, r7402993, r7402994, r7402995, r7402996;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7402989, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7402990);
        mpfr_init(r7402991);
        mpfr_init_set_str(r7402992, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7402993);
        mpfr_init(r7402994);
        mpfr_init(r7402995);
        mpfr_init(r7402996);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7402990, x, MPFR_RNDN);
        mpfr_mul(r7402991, r7402989, r7402990, MPFR_RNDN);
        ;
        mpfr_mul(r7402993, r7402990, r7402990, MPFR_RNDN);
        mpfr_mul(r7402994, r7402993, r7402990, MPFR_RNDN);
        mpfr_mul(r7402995, r7402992, r7402994, MPFR_RNDN);
        mpfr_add(r7402996, r7402991, r7402995, MPFR_RNDN);
        return mpfr_get_d(r7402996, MPFR_RNDN);
}

static mpfr_t r7402997, r7402998, r7402999, r7403000, r7403001, r7403002, r7403003, r7403004, r7403005, r7403006, r7403007, r7403008, r7403009;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7402997, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7402998);
        mpfr_init(r7402999);
        mpfr_init_set_str(r7403000, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7403001);
        mpfr_init(r7403002);
        mpfr_init(r7403003);
        mpfr_init(r7403004);
        mpfr_init(r7403005);
        mpfr_init(r7403006);
        mpfr_init(r7403007);
        mpfr_init(r7403008);
        mpfr_init(r7403009);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7402998, x, MPFR_RNDN);
        mpfr_mul(r7402999, r7402997, r7402998, MPFR_RNDN);
        ;
        mpfr_mul(r7403001, r7402998, r7402998, MPFR_RNDN);
        mpfr_mul(r7403002, r7403001, r7402998, MPFR_RNDN);
        mpfr_mul(r7403003, r7403000, r7403002, MPFR_RNDN);
        mpfr_cbrt(r7403004, r7403003, MPFR_RNDN);
        mpfr_mul(r7403005, r7403004, r7403004, MPFR_RNDN);
        mpfr_exp(r7403006, r7403005, MPFR_RNDN);
        mpfr_log(r7403007, r7403006, MPFR_RNDN);
        mpfr_mul(r7403008, r7403007, r7403004, MPFR_RNDN);
        mpfr_add(r7403009, r7402999, r7403008, MPFR_RNDN);
        return mpfr_get_d(r7403009, MPFR_RNDN);
}

static mpfr_t r7403010, r7403011, r7403012, r7403013, r7403014, r7403015, r7403016, r7403017, r7403018, r7403019, r7403020, r7403021, r7403022;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7403010, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r7403011);
        mpfr_init(r7403012);
        mpfr_init_set_str(r7403013, "2.5", 10, MPFR_RNDN);
        mpfr_init(r7403014);
        mpfr_init(r7403015);
        mpfr_init(r7403016);
        mpfr_init(r7403017);
        mpfr_init(r7403018);
        mpfr_init(r7403019);
        mpfr_init(r7403020);
        mpfr_init(r7403021);
        mpfr_init(r7403022);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7403011, x, MPFR_RNDN);
        mpfr_mul(r7403012, r7403010, r7403011, MPFR_RNDN);
        ;
        mpfr_mul(r7403014, r7403011, r7403011, MPFR_RNDN);
        mpfr_mul(r7403015, r7403014, r7403011, MPFR_RNDN);
        mpfr_mul(r7403016, r7403013, r7403015, MPFR_RNDN);
        mpfr_cbrt(r7403017, r7403016, MPFR_RNDN);
        mpfr_mul(r7403018, r7403017, r7403017, MPFR_RNDN);
        mpfr_exp(r7403019, r7403018, MPFR_RNDN);
        mpfr_log(r7403020, r7403019, MPFR_RNDN);
        mpfr_mul(r7403021, r7403020, r7403017, MPFR_RNDN);
        mpfr_add(r7403022, r7403012, r7403021, MPFR_RNDN);
        return mpfr_get_d(r7403022, MPFR_RNDN);
}

