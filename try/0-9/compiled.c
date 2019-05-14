#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6179071 = 2.460938;
        float r6179072 = x;
        float r6179073 = r6179071 * r6179072;
        float r6179074 = -36.09375;
        float r6179075 = r6179072 * r6179072;
        float r6179076 = r6179075 * r6179072;
        float r6179077 = r6179074 * r6179076;
        float r6179078 = r6179073 + r6179077;
        float r6179079 = 140.765625;
        float r6179080 = r6179076 * r6179072;
        float r6179081 = r6179080 * r6179072;
        float r6179082 = r6179079 * r6179081;
        float r6179083 = r6179078 + r6179082;
        float r6179084 = -201.09375;
        float r6179085 = r6179081 * r6179072;
        float r6179086 = r6179085 * r6179072;
        float r6179087 = r6179084 * r6179086;
        float r6179088 = r6179083 + r6179087;
        float r6179089 = 94.960938;
        float r6179090 = r6179086 * r6179072;
        float r6179091 = r6179090 * r6179072;
        float r6179092 = r6179089 * r6179091;
        float r6179093 = r6179088 + r6179092;
        return r6179093;
}

double f_id(double x) {
        double r6179094 = 2.460938;
        double r6179095 = x;
        double r6179096 = r6179094 * r6179095;
        double r6179097 = -36.09375;
        double r6179098 = r6179095 * r6179095;
        double r6179099 = r6179098 * r6179095;
        double r6179100 = r6179097 * r6179099;
        double r6179101 = r6179096 + r6179100;
        double r6179102 = 140.765625;
        double r6179103 = r6179099 * r6179095;
        double r6179104 = r6179103 * r6179095;
        double r6179105 = r6179102 * r6179104;
        double r6179106 = r6179101 + r6179105;
        double r6179107 = -201.09375;
        double r6179108 = r6179104 * r6179095;
        double r6179109 = r6179108 * r6179095;
        double r6179110 = r6179107 * r6179109;
        double r6179111 = r6179106 + r6179110;
        double r6179112 = 94.960938;
        double r6179113 = r6179109 * r6179095;
        double r6179114 = r6179113 * r6179095;
        double r6179115 = r6179112 * r6179114;
        double r6179116 = r6179111 + r6179115;
        return r6179116;
}


double f_of(float x) {
        float r6179117 = x;
        float r6179118 = r6179117 * r6179117;
        float r6179119 = -36.09375;
        float r6179120 = r6179117 * r6179119;
        float r6179121 = 140.765625;
        float r6179122 = r6179117 * r6179121;
        float r6179123 = r6179122 * r6179118;
        float r6179124 = r6179120 + r6179123;
        float r6179125 = r6179118 * r6179124;
        float r6179126 = 2.460938;
        float r6179127 = r6179117 * r6179126;
        float r6179128 = 9;
        float r6179129 = pow(r6179117, r6179128);
        float r6179130 = 94.960938;
        float r6179131 = r6179129 * r6179130;
        float r6179132 = r6179127 + r6179131;
        float r6179133 = 201.09375;
        float r6179134 = 7;
        float r6179135 = pow(r6179117, r6179134);
        float r6179136 = r6179133 * r6179135;
        float r6179137 = r6179132 - r6179136;
        float r6179138 = r6179125 + r6179137;
        return r6179138;
}

double f_od(double x) {
        double r6179139 = x;
        double r6179140 = r6179139 * r6179139;
        double r6179141 = -36.09375;
        double r6179142 = r6179139 * r6179141;
        double r6179143 = 140.765625;
        double r6179144 = r6179139 * r6179143;
        double r6179145 = r6179144 * r6179140;
        double r6179146 = r6179142 + r6179145;
        double r6179147 = r6179140 * r6179146;
        double r6179148 = 2.460938;
        double r6179149 = r6179139 * r6179148;
        double r6179150 = 9;
        double r6179151 = pow(r6179139, r6179150);
        double r6179152 = 94.960938;
        double r6179153 = r6179151 * r6179152;
        double r6179154 = r6179149 + r6179153;
        double r6179155 = 201.09375;
        double r6179156 = 7;
        double r6179157 = pow(r6179139, r6179156);
        double r6179158 = r6179155 * r6179157;
        double r6179159 = r6179154 - r6179158;
        double r6179160 = r6179147 + r6179159;
        return r6179160;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179161, r6179162, r6179163, r6179164, r6179165, r6179166, r6179167, r6179168, r6179169, r6179170, r6179171, r6179172, r6179173, r6179174, r6179175, r6179176, r6179177, r6179178, r6179179, r6179180, r6179181, r6179182, r6179183;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6179161, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6179162);
        mpfr_init(r6179163);
        mpfr_init_set_str(r6179164, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6179165);
        mpfr_init(r6179166);
        mpfr_init(r6179167);
        mpfr_init(r6179168);
        mpfr_init_set_str(r6179169, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6179170);
        mpfr_init(r6179171);
        mpfr_init(r6179172);
        mpfr_init(r6179173);
        mpfr_init_set_str(r6179174, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6179175);
        mpfr_init(r6179176);
        mpfr_init(r6179177);
        mpfr_init(r6179178);
        mpfr_init_set_str(r6179179, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6179180);
        mpfr_init(r6179181);
        mpfr_init(r6179182);
        mpfr_init(r6179183);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6179162, x, MPFR_RNDN);
        mpfr_mul(r6179163, r6179161, r6179162, MPFR_RNDN);
        ;
        mpfr_mul(r6179165, r6179162, r6179162, MPFR_RNDN);
        mpfr_mul(r6179166, r6179165, r6179162, MPFR_RNDN);
        mpfr_mul(r6179167, r6179164, r6179166, MPFR_RNDN);
        mpfr_add(r6179168, r6179163, r6179167, MPFR_RNDN);
        ;
        mpfr_mul(r6179170, r6179166, r6179162, MPFR_RNDN);
        mpfr_mul(r6179171, r6179170, r6179162, MPFR_RNDN);
        mpfr_mul(r6179172, r6179169, r6179171, MPFR_RNDN);
        mpfr_add(r6179173, r6179168, r6179172, MPFR_RNDN);
        ;
        mpfr_mul(r6179175, r6179171, r6179162, MPFR_RNDN);
        mpfr_mul(r6179176, r6179175, r6179162, MPFR_RNDN);
        mpfr_mul(r6179177, r6179174, r6179176, MPFR_RNDN);
        mpfr_add(r6179178, r6179173, r6179177, MPFR_RNDN);
        ;
        mpfr_mul(r6179180, r6179176, r6179162, MPFR_RNDN);
        mpfr_mul(r6179181, r6179180, r6179162, MPFR_RNDN);
        mpfr_mul(r6179182, r6179179, r6179181, MPFR_RNDN);
        mpfr_add(r6179183, r6179178, r6179182, MPFR_RNDN);
        return mpfr_get_d(r6179183, MPFR_RNDN);
}

static mpfr_t r6179184, r6179185, r6179186, r6179187, r6179188, r6179189, r6179190, r6179191, r6179192, r6179193, r6179194, r6179195, r6179196, r6179197, r6179198, r6179199, r6179200, r6179201, r6179202, r6179203, r6179204, r6179205;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6179184);
        mpfr_init(r6179185);
        mpfr_init_set_str(r6179186, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6179187);
        mpfr_init_set_str(r6179188, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6179189);
        mpfr_init(r6179190);
        mpfr_init(r6179191);
        mpfr_init(r6179192);
        mpfr_init_set_str(r6179193, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6179194);
        mpfr_init_set_str(r6179195, "9", 10, MPFR_RNDN);
        mpfr_init(r6179196);
        mpfr_init_set_str(r6179197, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6179198);
        mpfr_init(r6179199);
        mpfr_init_set_str(r6179200, "201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179201, "7", 10, MPFR_RNDN);
        mpfr_init(r6179202);
        mpfr_init(r6179203);
        mpfr_init(r6179204);
        mpfr_init(r6179205);
}

double f_fm(double x) {
        mpfr_set_d(r6179184, x, MPFR_RNDN);
        mpfr_mul(r6179185, r6179184, r6179184, MPFR_RNDN);
        ;
        mpfr_mul(r6179187, r6179184, r6179186, MPFR_RNDN);
        ;
        mpfr_mul(r6179189, r6179184, r6179188, MPFR_RNDN);
        mpfr_mul(r6179190, r6179189, r6179185, MPFR_RNDN);
        mpfr_add(r6179191, r6179187, r6179190, MPFR_RNDN);
        mpfr_mul(r6179192, r6179185, r6179191, MPFR_RNDN);
        ;
        mpfr_mul(r6179194, r6179184, r6179193, MPFR_RNDN);
        ;
        mpfr_pow(r6179196, r6179184, r6179195, MPFR_RNDN);
        ;
        mpfr_mul(r6179198, r6179196, r6179197, MPFR_RNDN);
        mpfr_add(r6179199, r6179194, r6179198, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6179202, r6179184, r6179201, MPFR_RNDN);
        mpfr_mul(r6179203, r6179200, r6179202, MPFR_RNDN);
        mpfr_sub(r6179204, r6179199, r6179203, MPFR_RNDN);
        mpfr_add(r6179205, r6179192, r6179204, MPFR_RNDN);
        return mpfr_get_d(r6179205, MPFR_RNDN);
}

static mpfr_t r6179206, r6179207, r6179208, r6179209, r6179210, r6179211, r6179212, r6179213, r6179214, r6179215, r6179216, r6179217, r6179218, r6179219, r6179220, r6179221, r6179222, r6179223, r6179224, r6179225, r6179226, r6179227;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6179206);
        mpfr_init(r6179207);
        mpfr_init_set_str(r6179208, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6179209);
        mpfr_init_set_str(r6179210, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6179211);
        mpfr_init(r6179212);
        mpfr_init(r6179213);
        mpfr_init(r6179214);
        mpfr_init_set_str(r6179215, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6179216);
        mpfr_init_set_str(r6179217, "9", 10, MPFR_RNDN);
        mpfr_init(r6179218);
        mpfr_init_set_str(r6179219, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6179220);
        mpfr_init(r6179221);
        mpfr_init_set_str(r6179222, "201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179223, "7", 10, MPFR_RNDN);
        mpfr_init(r6179224);
        mpfr_init(r6179225);
        mpfr_init(r6179226);
        mpfr_init(r6179227);
}

double f_dm(double x) {
        mpfr_set_d(r6179206, x, MPFR_RNDN);
        mpfr_mul(r6179207, r6179206, r6179206, MPFR_RNDN);
        ;
        mpfr_mul(r6179209, r6179206, r6179208, MPFR_RNDN);
        ;
        mpfr_mul(r6179211, r6179206, r6179210, MPFR_RNDN);
        mpfr_mul(r6179212, r6179211, r6179207, MPFR_RNDN);
        mpfr_add(r6179213, r6179209, r6179212, MPFR_RNDN);
        mpfr_mul(r6179214, r6179207, r6179213, MPFR_RNDN);
        ;
        mpfr_mul(r6179216, r6179206, r6179215, MPFR_RNDN);
        ;
        mpfr_pow(r6179218, r6179206, r6179217, MPFR_RNDN);
        ;
        mpfr_mul(r6179220, r6179218, r6179219, MPFR_RNDN);
        mpfr_add(r6179221, r6179216, r6179220, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6179224, r6179206, r6179223, MPFR_RNDN);
        mpfr_mul(r6179225, r6179222, r6179224, MPFR_RNDN);
        mpfr_sub(r6179226, r6179221, r6179225, MPFR_RNDN);
        mpfr_add(r6179227, r6179214, r6179226, MPFR_RNDN);
        return mpfr_get_d(r6179227, MPFR_RNDN);
}

