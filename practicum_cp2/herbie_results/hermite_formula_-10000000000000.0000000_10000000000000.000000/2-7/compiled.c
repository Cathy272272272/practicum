#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r5316072 = -1680.0;
        float r5316073 = x;
        float r5316074 = r5316072 * r5316073;
        float r5316075 = 3360.0;
        float r5316076 = r5316073 * r5316073;
        float r5316077 = r5316076 * r5316073;
        float r5316078 = r5316075 * r5316077;
        float r5316079 = r5316074 + r5316078;
        float r5316080 = -1344.0;
        float r5316081 = r5316077 * r5316073;
        float r5316082 = r5316081 * r5316073;
        float r5316083 = r5316080 * r5316082;
        float r5316084 = r5316079 + r5316083;
        float r5316085 = 128.0;
        float r5316086 = r5316082 * r5316073;
        float r5316087 = r5316086 * r5316073;
        float r5316088 = r5316085 * r5316087;
        float r5316089 = r5316084 + r5316088;
        return r5316089;
}

double f_id(double x) {
        double r5316090 = -1680.0;
        double r5316091 = x;
        double r5316092 = r5316090 * r5316091;
        double r5316093 = 3360.0;
        double r5316094 = r5316091 * r5316091;
        double r5316095 = r5316094 * r5316091;
        double r5316096 = r5316093 * r5316095;
        double r5316097 = r5316092 + r5316096;
        double r5316098 = -1344.0;
        double r5316099 = r5316095 * r5316091;
        double r5316100 = r5316099 * r5316091;
        double r5316101 = r5316098 * r5316100;
        double r5316102 = r5316097 + r5316101;
        double r5316103 = 128.0;
        double r5316104 = r5316100 * r5316091;
        double r5316105 = r5316104 * r5316091;
        double r5316106 = r5316103 * r5316105;
        double r5316107 = r5316102 + r5316106;
        return r5316107;
}


double f_of(float x) {
        float r5316108 = 3360.0;
        float r5316109 = x;
        float r5316110 = r5316108 * r5316109;
        float r5316111 = r5316110 * r5316109;
        float r5316112 = -1680.0;
        float r5316113 = r5316111 + r5316112;
        float r5316114 = r5316113 * r5316109;
        float r5316115 = r5316109 * r5316109;
        float r5316116 = -1344.0;
        float r5316117 = r5316109 * r5316116;
        float r5316118 = r5316115 * r5316117;
        float r5316119 = 4;
        float r5316120 = pow(r5316109, r5316119);
        float r5316121 = sqrt(r5316120);
        float r5316122 = 128.0;
        float r5316123 = r5316122 * r5316109;
        float r5316124 = r5316121 * r5316123;
        float r5316125 = r5316121 * r5316124;
        float r5316126 = r5316118 + r5316125;
        float r5316127 = r5316115 * r5316126;
        float r5316128 = r5316114 + r5316127;
        return r5316128;
}

double f_od(double x) {
        double r5316129 = 3360.0;
        double r5316130 = x;
        double r5316131 = r5316129 * r5316130;
        double r5316132 = r5316131 * r5316130;
        double r5316133 = -1680.0;
        double r5316134 = r5316132 + r5316133;
        double r5316135 = r5316134 * r5316130;
        double r5316136 = r5316130 * r5316130;
        double r5316137 = -1344.0;
        double r5316138 = r5316130 * r5316137;
        double r5316139 = r5316136 * r5316138;
        double r5316140 = 4;
        double r5316141 = pow(r5316130, r5316140);
        double r5316142 = sqrt(r5316141);
        double r5316143 = 128.0;
        double r5316144 = r5316143 * r5316130;
        double r5316145 = r5316142 * r5316144;
        double r5316146 = r5316142 * r5316145;
        double r5316147 = r5316139 + r5316146;
        double r5316148 = r5316136 * r5316147;
        double r5316149 = r5316135 + r5316148;
        return r5316149;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5316150, r5316151, r5316152, r5316153, r5316154, r5316155, r5316156, r5316157, r5316158, r5316159, r5316160, r5316161, r5316162, r5316163, r5316164, r5316165, r5316166, r5316167;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2128);
        mpfr_init_set_str(r5316150, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r5316151);
        mpfr_init(r5316152);
        mpfr_init_set_str(r5316153, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r5316154);
        mpfr_init(r5316155);
        mpfr_init(r5316156);
        mpfr_init(r5316157);
        mpfr_init_set_str(r5316158, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r5316159);
        mpfr_init(r5316160);
        mpfr_init(r5316161);
        mpfr_init(r5316162);
        mpfr_init_set_str(r5316163, "128.0", 10, MPFR_RNDN);
        mpfr_init(r5316164);
        mpfr_init(r5316165);
        mpfr_init(r5316166);
        mpfr_init(r5316167);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5316151, x, MPFR_RNDN);
        mpfr_mul(r5316152, r5316150, r5316151, MPFR_RNDN);
        ;
        mpfr_mul(r5316154, r5316151, r5316151, MPFR_RNDN);
        mpfr_mul(r5316155, r5316154, r5316151, MPFR_RNDN);
        mpfr_mul(r5316156, r5316153, r5316155, MPFR_RNDN);
        mpfr_add(r5316157, r5316152, r5316156, MPFR_RNDN);
        ;
        mpfr_mul(r5316159, r5316155, r5316151, MPFR_RNDN);
        mpfr_mul(r5316160, r5316159, r5316151, MPFR_RNDN);
        mpfr_mul(r5316161, r5316158, r5316160, MPFR_RNDN);
        mpfr_add(r5316162, r5316157, r5316161, MPFR_RNDN);
        ;
        mpfr_mul(r5316164, r5316160, r5316151, MPFR_RNDN);
        mpfr_mul(r5316165, r5316164, r5316151, MPFR_RNDN);
        mpfr_mul(r5316166, r5316163, r5316165, MPFR_RNDN);
        mpfr_add(r5316167, r5316162, r5316166, MPFR_RNDN);
        return mpfr_get_d(r5316167, MPFR_RNDN);
}

static mpfr_t r5316168, r5316169, r5316170, r5316171, r5316172, r5316173, r5316174, r5316175, r5316176, r5316177, r5316178, r5316179, r5316180, r5316181, r5316182, r5316183, r5316184, r5316185, r5316186, r5316187, r5316188;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2128);
        mpfr_init_set_str(r5316168, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r5316169);
        mpfr_init(r5316170);
        mpfr_init(r5316171);
        mpfr_init_set_str(r5316172, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r5316173);
        mpfr_init(r5316174);
        mpfr_init(r5316175);
        mpfr_init_set_str(r5316176, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r5316177);
        mpfr_init(r5316178);
        mpfr_init_set_str(r5316179, "4", 10, MPFR_RNDN);
        mpfr_init(r5316180);
        mpfr_init(r5316181);
        mpfr_init_set_str(r5316182, "128.0", 10, MPFR_RNDN);
        mpfr_init(r5316183);
        mpfr_init(r5316184);
        mpfr_init(r5316185);
        mpfr_init(r5316186);
        mpfr_init(r5316187);
        mpfr_init(r5316188);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5316169, x, MPFR_RNDN);
        mpfr_mul(r5316170, r5316168, r5316169, MPFR_RNDN);
        mpfr_mul(r5316171, r5316170, r5316169, MPFR_RNDN);
        ;
        mpfr_add(r5316173, r5316171, r5316172, MPFR_RNDN);
        mpfr_mul(r5316174, r5316173, r5316169, MPFR_RNDN);
        mpfr_mul(r5316175, r5316169, r5316169, MPFR_RNDN);
        ;
        mpfr_mul(r5316177, r5316169, r5316176, MPFR_RNDN);
        mpfr_mul(r5316178, r5316175, r5316177, MPFR_RNDN);
        ;
        mpfr_pow(r5316180, r5316169, r5316179, MPFR_RNDN);
        mpfr_sqrt(r5316181, r5316180, MPFR_RNDN);
        ;
        mpfr_mul(r5316183, r5316182, r5316169, MPFR_RNDN);
        mpfr_mul(r5316184, r5316181, r5316183, MPFR_RNDN);
        mpfr_mul(r5316185, r5316181, r5316184, MPFR_RNDN);
        mpfr_add(r5316186, r5316178, r5316185, MPFR_RNDN);
        mpfr_mul(r5316187, r5316175, r5316186, MPFR_RNDN);
        mpfr_add(r5316188, r5316174, r5316187, MPFR_RNDN);
        return mpfr_get_d(r5316188, MPFR_RNDN);
}

static mpfr_t r5316189, r5316190, r5316191, r5316192, r5316193, r5316194, r5316195, r5316196, r5316197, r5316198, r5316199, r5316200, r5316201, r5316202, r5316203, r5316204, r5316205, r5316206, r5316207, r5316208, r5316209;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2128);
        mpfr_init_set_str(r5316189, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r5316190);
        mpfr_init(r5316191);
        mpfr_init(r5316192);
        mpfr_init_set_str(r5316193, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r5316194);
        mpfr_init(r5316195);
        mpfr_init(r5316196);
        mpfr_init_set_str(r5316197, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r5316198);
        mpfr_init(r5316199);
        mpfr_init_set_str(r5316200, "4", 10, MPFR_RNDN);
        mpfr_init(r5316201);
        mpfr_init(r5316202);
        mpfr_init_set_str(r5316203, "128.0", 10, MPFR_RNDN);
        mpfr_init(r5316204);
        mpfr_init(r5316205);
        mpfr_init(r5316206);
        mpfr_init(r5316207);
        mpfr_init(r5316208);
        mpfr_init(r5316209);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5316190, x, MPFR_RNDN);
        mpfr_mul(r5316191, r5316189, r5316190, MPFR_RNDN);
        mpfr_mul(r5316192, r5316191, r5316190, MPFR_RNDN);
        ;
        mpfr_add(r5316194, r5316192, r5316193, MPFR_RNDN);
        mpfr_mul(r5316195, r5316194, r5316190, MPFR_RNDN);
        mpfr_mul(r5316196, r5316190, r5316190, MPFR_RNDN);
        ;
        mpfr_mul(r5316198, r5316190, r5316197, MPFR_RNDN);
        mpfr_mul(r5316199, r5316196, r5316198, MPFR_RNDN);
        ;
        mpfr_pow(r5316201, r5316190, r5316200, MPFR_RNDN);
        mpfr_sqrt(r5316202, r5316201, MPFR_RNDN);
        ;
        mpfr_mul(r5316204, r5316203, r5316190, MPFR_RNDN);
        mpfr_mul(r5316205, r5316202, r5316204, MPFR_RNDN);
        mpfr_mul(r5316206, r5316202, r5316205, MPFR_RNDN);
        mpfr_add(r5316207, r5316199, r5316206, MPFR_RNDN);
        mpfr_mul(r5316208, r5316196, r5316207, MPFR_RNDN);
        mpfr_add(r5316209, r5316195, r5316208, MPFR_RNDN);
        return mpfr_get_d(r5316209, MPFR_RNDN);
}

