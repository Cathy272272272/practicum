#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6406079 = -0.3125;
        float r6406080 = 6.5625;
        float r6406081 = x;
        float r6406082 = r6406081 * r6406081;
        float r6406083 = r6406080 * r6406082;
        float r6406084 = r6406079 + r6406083;
        float r6406085 = -19.6875;
        float r6406086 = r6406082 * r6406081;
        float r6406087 = r6406086 * r6406081;
        float r6406088 = r6406085 * r6406087;
        float r6406089 = r6406084 + r6406088;
        float r6406090 = 14.4375;
        float r6406091 = r6406087 * r6406081;
        float r6406092 = r6406091 * r6406081;
        float r6406093 = r6406090 * r6406092;
        float r6406094 = r6406089 + r6406093;
        return r6406094;
}

double f_id(double x) {
        double r6406095 = -0.3125;
        double r6406096 = 6.5625;
        double r6406097 = x;
        double r6406098 = r6406097 * r6406097;
        double r6406099 = r6406096 * r6406098;
        double r6406100 = r6406095 + r6406099;
        double r6406101 = -19.6875;
        double r6406102 = r6406098 * r6406097;
        double r6406103 = r6406102 * r6406097;
        double r6406104 = r6406101 * r6406103;
        double r6406105 = r6406100 + r6406104;
        double r6406106 = 14.4375;
        double r6406107 = r6406103 * r6406097;
        double r6406108 = r6406107 * r6406097;
        double r6406109 = r6406106 * r6406108;
        double r6406110 = r6406105 + r6406109;
        return r6406110;
}


double f_of(float x) {
        float r6406111 = x;
        float r6406112 = 6.5625;
        float r6406113 = r6406111 * r6406112;
        float r6406114 = r6406113 * r6406111;
        float r6406115 = -0.3125;
        float r6406116 = r6406114 + r6406115;
        float r6406117 = r6406111 * r6406111;
        float r6406118 = r6406117 * r6406117;
        float r6406119 = -19.6875;
        float r6406120 = 14.4375;
        float r6406121 = r6406117 * r6406120;
        float r6406122 = sqrt(r6406121);
        float r6406123 = r6406122 * r6406122;
        float r6406124 = r6406119 + r6406123;
        float r6406125 = r6406118 * r6406124;
        float r6406126 = r6406116 + r6406125;
        return r6406126;
}

double f_od(double x) {
        double r6406127 = x;
        double r6406128 = 6.5625;
        double r6406129 = r6406127 * r6406128;
        double r6406130 = r6406129 * r6406127;
        double r6406131 = -0.3125;
        double r6406132 = r6406130 + r6406131;
        double r6406133 = r6406127 * r6406127;
        double r6406134 = r6406133 * r6406133;
        double r6406135 = -19.6875;
        double r6406136 = 14.4375;
        double r6406137 = r6406133 * r6406136;
        double r6406138 = sqrt(r6406137);
        double r6406139 = r6406138 * r6406138;
        double r6406140 = r6406135 + r6406139;
        double r6406141 = r6406134 * r6406140;
        double r6406142 = r6406132 + r6406141;
        return r6406142;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6406143, r6406144, r6406145, r6406146, r6406147, r6406148, r6406149, r6406150, r6406151, r6406152, r6406153, r6406154, r6406155, r6406156, r6406157, r6406158;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6406143, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6406144, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6406145);
        mpfr_init(r6406146);
        mpfr_init(r6406147);
        mpfr_init(r6406148);
        mpfr_init_set_str(r6406149, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6406150);
        mpfr_init(r6406151);
        mpfr_init(r6406152);
        mpfr_init(r6406153);
        mpfr_init_set_str(r6406154, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6406155);
        mpfr_init(r6406156);
        mpfr_init(r6406157);
        mpfr_init(r6406158);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6406145, x, MPFR_RNDN);
        mpfr_mul(r6406146, r6406145, r6406145, MPFR_RNDN);
        mpfr_mul(r6406147, r6406144, r6406146, MPFR_RNDN);
        mpfr_add(r6406148, r6406143, r6406147, MPFR_RNDN);
        ;
        mpfr_mul(r6406150, r6406146, r6406145, MPFR_RNDN);
        mpfr_mul(r6406151, r6406150, r6406145, MPFR_RNDN);
        mpfr_mul(r6406152, r6406149, r6406151, MPFR_RNDN);
        mpfr_add(r6406153, r6406148, r6406152, MPFR_RNDN);
        ;
        mpfr_mul(r6406155, r6406151, r6406145, MPFR_RNDN);
        mpfr_mul(r6406156, r6406155, r6406145, MPFR_RNDN);
        mpfr_mul(r6406157, r6406154, r6406156, MPFR_RNDN);
        mpfr_add(r6406158, r6406153, r6406157, MPFR_RNDN);
        return mpfr_get_d(r6406158, MPFR_RNDN);
}

static mpfr_t r6406159, r6406160, r6406161, r6406162, r6406163, r6406164, r6406165, r6406166, r6406167, r6406168, r6406169, r6406170, r6406171, r6406172, r6406173, r6406174;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6406159);
        mpfr_init_set_str(r6406160, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6406161);
        mpfr_init(r6406162);
        mpfr_init_set_str(r6406163, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6406164);
        mpfr_init(r6406165);
        mpfr_init(r6406166);
        mpfr_init_set_str(r6406167, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r6406168, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6406169);
        mpfr_init(r6406170);
        mpfr_init(r6406171);
        mpfr_init(r6406172);
        mpfr_init(r6406173);
        mpfr_init(r6406174);
}

double f_fm(double x) {
        mpfr_set_d(r6406159, x, MPFR_RNDN);
        ;
        mpfr_mul(r6406161, r6406159, r6406160, MPFR_RNDN);
        mpfr_mul(r6406162, r6406161, r6406159, MPFR_RNDN);
        ;
        mpfr_add(r6406164, r6406162, r6406163, MPFR_RNDN);
        mpfr_mul(r6406165, r6406159, r6406159, MPFR_RNDN);
        mpfr_mul(r6406166, r6406165, r6406165, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6406169, r6406165, r6406168, MPFR_RNDN);
        mpfr_sqrt(r6406170, r6406169, MPFR_RNDN);
        mpfr_mul(r6406171, r6406170, r6406170, MPFR_RNDN);
        mpfr_add(r6406172, r6406167, r6406171, MPFR_RNDN);
        mpfr_mul(r6406173, r6406166, r6406172, MPFR_RNDN);
        mpfr_add(r6406174, r6406164, r6406173, MPFR_RNDN);
        return mpfr_get_d(r6406174, MPFR_RNDN);
}

static mpfr_t r6406175, r6406176, r6406177, r6406178, r6406179, r6406180, r6406181, r6406182, r6406183, r6406184, r6406185, r6406186, r6406187, r6406188, r6406189, r6406190;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6406175);
        mpfr_init_set_str(r6406176, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6406177);
        mpfr_init(r6406178);
        mpfr_init_set_str(r6406179, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6406180);
        mpfr_init(r6406181);
        mpfr_init(r6406182);
        mpfr_init_set_str(r6406183, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r6406184, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6406185);
        mpfr_init(r6406186);
        mpfr_init(r6406187);
        mpfr_init(r6406188);
        mpfr_init(r6406189);
        mpfr_init(r6406190);
}

double f_dm(double x) {
        mpfr_set_d(r6406175, x, MPFR_RNDN);
        ;
        mpfr_mul(r6406177, r6406175, r6406176, MPFR_RNDN);
        mpfr_mul(r6406178, r6406177, r6406175, MPFR_RNDN);
        ;
        mpfr_add(r6406180, r6406178, r6406179, MPFR_RNDN);
        mpfr_mul(r6406181, r6406175, r6406175, MPFR_RNDN);
        mpfr_mul(r6406182, r6406181, r6406181, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6406185, r6406181, r6406184, MPFR_RNDN);
        mpfr_sqrt(r6406186, r6406185, MPFR_RNDN);
        mpfr_mul(r6406187, r6406186, r6406186, MPFR_RNDN);
        mpfr_add(r6406188, r6406183, r6406187, MPFR_RNDN);
        mpfr_mul(r6406189, r6406182, r6406188, MPFR_RNDN);
        mpfr_add(r6406190, r6406180, r6406189, MPFR_RNDN);
        return mpfr_get_d(r6406190, MPFR_RNDN);
}

