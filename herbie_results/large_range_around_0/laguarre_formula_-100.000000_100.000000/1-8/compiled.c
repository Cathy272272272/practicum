#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6292997 = 1.0;
        float r6292998 = -8.0;
        float r6292999 = x;
        float r6293000 = r6292998 * r6292999;
        float r6293001 = r6292997 + r6293000;
        float r6293002 = 14.0;
        float r6293003 = r6292999 * r6292999;
        float r6293004 = r6293002 * r6293003;
        float r6293005 = r6293001 + r6293004;
        float r6293006 = -9.333333;
        float r6293007 = r6293003 * r6292999;
        float r6293008 = r6293006 * r6293007;
        float r6293009 = r6293005 + r6293008;
        float r6293010 = 2.916667;
        float r6293011 = r6293007 * r6292999;
        float r6293012 = r6293010 * r6293011;
        float r6293013 = r6293009 + r6293012;
        float r6293014 = -0.466667;
        float r6293015 = r6293011 * r6292999;
        float r6293016 = r6293014 * r6293015;
        float r6293017 = r6293013 + r6293016;
        float r6293018 = 0.038889;
        float r6293019 = r6293015 * r6292999;
        float r6293020 = r6293018 * r6293019;
        float r6293021 = r6293017 + r6293020;
        float r6293022 = -0.001587;
        float r6293023 = r6293019 * r6292999;
        float r6293024 = r6293022 * r6293023;
        float r6293025 = r6293021 + r6293024;
        float r6293026 = 2.5e-05;
        float r6293027 = r6293023 * r6292999;
        float r6293028 = r6293026 * r6293027;
        float r6293029 = r6293025 + r6293028;
        return r6293029;
}

double f_id(double x) {
        double r6293030 = 1.0;
        double r6293031 = -8.0;
        double r6293032 = x;
        double r6293033 = r6293031 * r6293032;
        double r6293034 = r6293030 + r6293033;
        double r6293035 = 14.0;
        double r6293036 = r6293032 * r6293032;
        double r6293037 = r6293035 * r6293036;
        double r6293038 = r6293034 + r6293037;
        double r6293039 = -9.333333;
        double r6293040 = r6293036 * r6293032;
        double r6293041 = r6293039 * r6293040;
        double r6293042 = r6293038 + r6293041;
        double r6293043 = 2.916667;
        double r6293044 = r6293040 * r6293032;
        double r6293045 = r6293043 * r6293044;
        double r6293046 = r6293042 + r6293045;
        double r6293047 = -0.466667;
        double r6293048 = r6293044 * r6293032;
        double r6293049 = r6293047 * r6293048;
        double r6293050 = r6293046 + r6293049;
        double r6293051 = 0.038889;
        double r6293052 = r6293048 * r6293032;
        double r6293053 = r6293051 * r6293052;
        double r6293054 = r6293050 + r6293053;
        double r6293055 = -0.001587;
        double r6293056 = r6293052 * r6293032;
        double r6293057 = r6293055 * r6293056;
        double r6293058 = r6293054 + r6293057;
        double r6293059 = 2.5e-05;
        double r6293060 = r6293056 * r6293032;
        double r6293061 = r6293059 * r6293060;
        double r6293062 = r6293058 + r6293061;
        return r6293062;
}


double f_of(float x) {
        float r6293063 = 1.0;
        float r6293064 = -8.0;
        float r6293065 = x;
        float r6293066 = r6293064 * r6293065;
        float r6293067 = r6293063 + r6293066;
        float r6293068 = 14.0;
        float r6293069 = r6293065 * r6293065;
        float r6293070 = r6293068 * r6293069;
        float r6293071 = r6293067 + r6293070;
        float r6293072 = -9.333333;
        float r6293073 = r6293069 * r6293065;
        float r6293074 = r6293072 * r6293073;
        float r6293075 = r6293071 + r6293074;
        float r6293076 = 2.916667;
        float r6293077 = r6293073 * r6293065;
        float r6293078 = r6293076 * r6293077;
        float r6293079 = r6293075 + r6293078;
        float r6293080 = -0.466667;
        float r6293081 = r6293077 * r6293065;
        float r6293082 = r6293080 * r6293081;
        float r6293083 = r6293079 + r6293082;
        float r6293084 = 0.038889;
        float r6293085 = r6293081 * r6293065;
        float r6293086 = r6293084 * r6293085;
        float r6293087 = r6293083 + r6293086;
        float r6293088 = -0.001587;
        float r6293089 = r6293085 * r6293065;
        float r6293090 = r6293088 * r6293089;
        float r6293091 = r6293087 + r6293090;
        float r6293092 = 2.5e-05;
        float r6293093 = r6293089 * r6293065;
        float r6293094 = r6293092 * r6293093;
        float r6293095 = r6293091 + r6293094;
        return r6293095;
}

double f_od(double x) {
        double r6293096 = 1.0;
        double r6293097 = -8.0;
        double r6293098 = x;
        double r6293099 = r6293097 * r6293098;
        double r6293100 = r6293096 + r6293099;
        double r6293101 = 14.0;
        double r6293102 = r6293098 * r6293098;
        double r6293103 = r6293101 * r6293102;
        double r6293104 = r6293100 + r6293103;
        double r6293105 = -9.333333;
        double r6293106 = r6293102 * r6293098;
        double r6293107 = r6293105 * r6293106;
        double r6293108 = r6293104 + r6293107;
        double r6293109 = 2.916667;
        double r6293110 = r6293106 * r6293098;
        double r6293111 = r6293109 * r6293110;
        double r6293112 = r6293108 + r6293111;
        double r6293113 = -0.466667;
        double r6293114 = r6293110 * r6293098;
        double r6293115 = r6293113 * r6293114;
        double r6293116 = r6293112 + r6293115;
        double r6293117 = 0.038889;
        double r6293118 = r6293114 * r6293098;
        double r6293119 = r6293117 * r6293118;
        double r6293120 = r6293116 + r6293119;
        double r6293121 = -0.001587;
        double r6293122 = r6293118 * r6293098;
        double r6293123 = r6293121 * r6293122;
        double r6293124 = r6293120 + r6293123;
        double r6293125 = 2.5e-05;
        double r6293126 = r6293122 * r6293098;
        double r6293127 = r6293125 * r6293126;
        double r6293128 = r6293124 + r6293127;
        return r6293128;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6293129, r6293130, r6293131, r6293132, r6293133, r6293134, r6293135, r6293136, r6293137, r6293138, r6293139, r6293140, r6293141, r6293142, r6293143, r6293144, r6293145, r6293146, r6293147, r6293148, r6293149, r6293150, r6293151, r6293152, r6293153, r6293154, r6293155, r6293156, r6293157, r6293158, r6293159, r6293160, r6293161;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293129, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293130, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r6293131);
        mpfr_init(r6293132);
        mpfr_init(r6293133);
        mpfr_init_set_str(r6293134, "14.0", 10, MPFR_RNDN);
        mpfr_init(r6293135);
        mpfr_init(r6293136);
        mpfr_init(r6293137);
        mpfr_init_set_str(r6293138, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r6293139);
        mpfr_init(r6293140);
        mpfr_init(r6293141);
        mpfr_init_set_str(r6293142, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r6293143);
        mpfr_init(r6293144);
        mpfr_init(r6293145);
        mpfr_init_set_str(r6293146, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r6293147);
        mpfr_init(r6293148);
        mpfr_init(r6293149);
        mpfr_init_set_str(r6293150, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r6293151);
        mpfr_init(r6293152);
        mpfr_init(r6293153);
        mpfr_init_set_str(r6293154, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r6293155);
        mpfr_init(r6293156);
        mpfr_init(r6293157);
        mpfr_init_set_str(r6293158, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r6293159);
        mpfr_init(r6293160);
        mpfr_init(r6293161);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6293131, x, MPFR_RNDN);
        mpfr_mul(r6293132, r6293130, r6293131, MPFR_RNDN);
        mpfr_add(r6293133, r6293129, r6293132, MPFR_RNDN);
        ;
        mpfr_mul(r6293135, r6293131, r6293131, MPFR_RNDN);
        mpfr_mul(r6293136, r6293134, r6293135, MPFR_RNDN);
        mpfr_add(r6293137, r6293133, r6293136, MPFR_RNDN);
        ;
        mpfr_mul(r6293139, r6293135, r6293131, MPFR_RNDN);
        mpfr_mul(r6293140, r6293138, r6293139, MPFR_RNDN);
        mpfr_add(r6293141, r6293137, r6293140, MPFR_RNDN);
        ;
        mpfr_mul(r6293143, r6293139, r6293131, MPFR_RNDN);
        mpfr_mul(r6293144, r6293142, r6293143, MPFR_RNDN);
        mpfr_add(r6293145, r6293141, r6293144, MPFR_RNDN);
        ;
        mpfr_mul(r6293147, r6293143, r6293131, MPFR_RNDN);
        mpfr_mul(r6293148, r6293146, r6293147, MPFR_RNDN);
        mpfr_add(r6293149, r6293145, r6293148, MPFR_RNDN);
        ;
        mpfr_mul(r6293151, r6293147, r6293131, MPFR_RNDN);
        mpfr_mul(r6293152, r6293150, r6293151, MPFR_RNDN);
        mpfr_add(r6293153, r6293149, r6293152, MPFR_RNDN);
        ;
        mpfr_mul(r6293155, r6293151, r6293131, MPFR_RNDN);
        mpfr_mul(r6293156, r6293154, r6293155, MPFR_RNDN);
        mpfr_add(r6293157, r6293153, r6293156, MPFR_RNDN);
        ;
        mpfr_mul(r6293159, r6293155, r6293131, MPFR_RNDN);
        mpfr_mul(r6293160, r6293158, r6293159, MPFR_RNDN);
        mpfr_add(r6293161, r6293157, r6293160, MPFR_RNDN);
        return mpfr_get_d(r6293161, MPFR_RNDN);
}

static mpfr_t r6293162, r6293163, r6293164, r6293165, r6293166, r6293167, r6293168, r6293169, r6293170, r6293171, r6293172, r6293173, r6293174, r6293175, r6293176, r6293177, r6293178, r6293179, r6293180, r6293181, r6293182, r6293183, r6293184, r6293185, r6293186, r6293187, r6293188, r6293189, r6293190, r6293191, r6293192, r6293193, r6293194;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293162, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293163, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r6293164);
        mpfr_init(r6293165);
        mpfr_init(r6293166);
        mpfr_init_set_str(r6293167, "14.0", 10, MPFR_RNDN);
        mpfr_init(r6293168);
        mpfr_init(r6293169);
        mpfr_init(r6293170);
        mpfr_init_set_str(r6293171, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r6293172);
        mpfr_init(r6293173);
        mpfr_init(r6293174);
        mpfr_init_set_str(r6293175, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r6293176);
        mpfr_init(r6293177);
        mpfr_init(r6293178);
        mpfr_init_set_str(r6293179, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r6293180);
        mpfr_init(r6293181);
        mpfr_init(r6293182);
        mpfr_init_set_str(r6293183, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r6293184);
        mpfr_init(r6293185);
        mpfr_init(r6293186);
        mpfr_init_set_str(r6293187, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r6293188);
        mpfr_init(r6293189);
        mpfr_init(r6293190);
        mpfr_init_set_str(r6293191, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r6293192);
        mpfr_init(r6293193);
        mpfr_init(r6293194);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6293164, x, MPFR_RNDN);
        mpfr_mul(r6293165, r6293163, r6293164, MPFR_RNDN);
        mpfr_add(r6293166, r6293162, r6293165, MPFR_RNDN);
        ;
        mpfr_mul(r6293168, r6293164, r6293164, MPFR_RNDN);
        mpfr_mul(r6293169, r6293167, r6293168, MPFR_RNDN);
        mpfr_add(r6293170, r6293166, r6293169, MPFR_RNDN);
        ;
        mpfr_mul(r6293172, r6293168, r6293164, MPFR_RNDN);
        mpfr_mul(r6293173, r6293171, r6293172, MPFR_RNDN);
        mpfr_add(r6293174, r6293170, r6293173, MPFR_RNDN);
        ;
        mpfr_mul(r6293176, r6293172, r6293164, MPFR_RNDN);
        mpfr_mul(r6293177, r6293175, r6293176, MPFR_RNDN);
        mpfr_add(r6293178, r6293174, r6293177, MPFR_RNDN);
        ;
        mpfr_mul(r6293180, r6293176, r6293164, MPFR_RNDN);
        mpfr_mul(r6293181, r6293179, r6293180, MPFR_RNDN);
        mpfr_add(r6293182, r6293178, r6293181, MPFR_RNDN);
        ;
        mpfr_mul(r6293184, r6293180, r6293164, MPFR_RNDN);
        mpfr_mul(r6293185, r6293183, r6293184, MPFR_RNDN);
        mpfr_add(r6293186, r6293182, r6293185, MPFR_RNDN);
        ;
        mpfr_mul(r6293188, r6293184, r6293164, MPFR_RNDN);
        mpfr_mul(r6293189, r6293187, r6293188, MPFR_RNDN);
        mpfr_add(r6293190, r6293186, r6293189, MPFR_RNDN);
        ;
        mpfr_mul(r6293192, r6293188, r6293164, MPFR_RNDN);
        mpfr_mul(r6293193, r6293191, r6293192, MPFR_RNDN);
        mpfr_add(r6293194, r6293190, r6293193, MPFR_RNDN);
        return mpfr_get_d(r6293194, MPFR_RNDN);
}

static mpfr_t r6293195, r6293196, r6293197, r6293198, r6293199, r6293200, r6293201, r6293202, r6293203, r6293204, r6293205, r6293206, r6293207, r6293208, r6293209, r6293210, r6293211, r6293212, r6293213, r6293214, r6293215, r6293216, r6293217, r6293218, r6293219, r6293220, r6293221, r6293222, r6293223, r6293224, r6293225, r6293226, r6293227;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293195, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293196, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r6293197);
        mpfr_init(r6293198);
        mpfr_init(r6293199);
        mpfr_init_set_str(r6293200, "14.0", 10, MPFR_RNDN);
        mpfr_init(r6293201);
        mpfr_init(r6293202);
        mpfr_init(r6293203);
        mpfr_init_set_str(r6293204, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r6293205);
        mpfr_init(r6293206);
        mpfr_init(r6293207);
        mpfr_init_set_str(r6293208, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r6293209);
        mpfr_init(r6293210);
        mpfr_init(r6293211);
        mpfr_init_set_str(r6293212, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r6293213);
        mpfr_init(r6293214);
        mpfr_init(r6293215);
        mpfr_init_set_str(r6293216, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r6293217);
        mpfr_init(r6293218);
        mpfr_init(r6293219);
        mpfr_init_set_str(r6293220, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r6293221);
        mpfr_init(r6293222);
        mpfr_init(r6293223);
        mpfr_init_set_str(r6293224, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r6293225);
        mpfr_init(r6293226);
        mpfr_init(r6293227);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6293197, x, MPFR_RNDN);
        mpfr_mul(r6293198, r6293196, r6293197, MPFR_RNDN);
        mpfr_add(r6293199, r6293195, r6293198, MPFR_RNDN);
        ;
        mpfr_mul(r6293201, r6293197, r6293197, MPFR_RNDN);
        mpfr_mul(r6293202, r6293200, r6293201, MPFR_RNDN);
        mpfr_add(r6293203, r6293199, r6293202, MPFR_RNDN);
        ;
        mpfr_mul(r6293205, r6293201, r6293197, MPFR_RNDN);
        mpfr_mul(r6293206, r6293204, r6293205, MPFR_RNDN);
        mpfr_add(r6293207, r6293203, r6293206, MPFR_RNDN);
        ;
        mpfr_mul(r6293209, r6293205, r6293197, MPFR_RNDN);
        mpfr_mul(r6293210, r6293208, r6293209, MPFR_RNDN);
        mpfr_add(r6293211, r6293207, r6293210, MPFR_RNDN);
        ;
        mpfr_mul(r6293213, r6293209, r6293197, MPFR_RNDN);
        mpfr_mul(r6293214, r6293212, r6293213, MPFR_RNDN);
        mpfr_add(r6293215, r6293211, r6293214, MPFR_RNDN);
        ;
        mpfr_mul(r6293217, r6293213, r6293197, MPFR_RNDN);
        mpfr_mul(r6293218, r6293216, r6293217, MPFR_RNDN);
        mpfr_add(r6293219, r6293215, r6293218, MPFR_RNDN);
        ;
        mpfr_mul(r6293221, r6293217, r6293197, MPFR_RNDN);
        mpfr_mul(r6293222, r6293220, r6293221, MPFR_RNDN);
        mpfr_add(r6293223, r6293219, r6293222, MPFR_RNDN);
        ;
        mpfr_mul(r6293225, r6293221, r6293197, MPFR_RNDN);
        mpfr_mul(r6293226, r6293224, r6293225, MPFR_RNDN);
        mpfr_add(r6293227, r6293223, r6293226, MPFR_RNDN);
        return mpfr_get_d(r6293227, MPFR_RNDN);
}

