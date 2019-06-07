#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r63170029 = 30240.0;
        float r63170030 = x;
        float r63170031 = r63170029 * r63170030;
        float r63170032 = -80640.0;
        float r63170033 = r63170030 * r63170030;
        float r63170034 = r63170033 * r63170030;
        float r63170035 = r63170032 * r63170034;
        float r63170036 = r63170031 + r63170035;
        float r63170037 = 48384.0;
        float r63170038 = r63170034 * r63170030;
        float r63170039 = r63170038 * r63170030;
        float r63170040 = r63170037 * r63170039;
        float r63170041 = r63170036 + r63170040;
        float r63170042 = -9216.0;
        float r63170043 = r63170039 * r63170030;
        float r63170044 = r63170043 * r63170030;
        float r63170045 = r63170042 * r63170044;
        float r63170046 = r63170041 + r63170045;
        float r63170047 = 512.0;
        float r63170048 = r63170044 * r63170030;
        float r63170049 = r63170048 * r63170030;
        float r63170050 = r63170047 * r63170049;
        float r63170051 = r63170046 + r63170050;
        return r63170051;
}

double f_id(double x) {
        double r63170052 = 30240.0;
        double r63170053 = x;
        double r63170054 = r63170052 * r63170053;
        double r63170055 = -80640.0;
        double r63170056 = r63170053 * r63170053;
        double r63170057 = r63170056 * r63170053;
        double r63170058 = r63170055 * r63170057;
        double r63170059 = r63170054 + r63170058;
        double r63170060 = 48384.0;
        double r63170061 = r63170057 * r63170053;
        double r63170062 = r63170061 * r63170053;
        double r63170063 = r63170060 * r63170062;
        double r63170064 = r63170059 + r63170063;
        double r63170065 = -9216.0;
        double r63170066 = r63170062 * r63170053;
        double r63170067 = r63170066 * r63170053;
        double r63170068 = r63170065 * r63170067;
        double r63170069 = r63170064 + r63170068;
        double r63170070 = 512.0;
        double r63170071 = r63170067 * r63170053;
        double r63170072 = r63170071 * r63170053;
        double r63170073 = r63170070 * r63170072;
        double r63170074 = r63170069 + r63170073;
        return r63170074;
}


double f_of(float x) {
        float r63170075 = x;
        float r63170076 = r63170075 * r63170075;
        float r63170077 = 48384.0;
        float r63170078 = r63170075 * r63170077;
        float r63170079 = r63170076 * r63170078;
        float r63170080 = 80640.0;
        float r63170081 = r63170080 * r63170075;
        float r63170082 = r63170079 - r63170081;
        float r63170083 = r63170082 * r63170079;
        float r63170084 = -80640.0;
        float r63170085 = r63170075 * r63170084;
        float r63170086 = r63170085 * r63170075;
        float r63170087 = r63170077 * r63170076;
        float r63170088 = r63170087 - r63170080;
        float r63170089 = r63170086 * r63170088;
        float r63170090 = r63170083 + r63170089;
        float r63170091 = r63170076 * r63170077;
        float r63170092 = r63170091 + r63170084;
        float r63170093 = 3;
        float r63170094 = pow(r63170075, r63170093);
        float r63170095 = r63170094 * r63170094;
        float r63170096 = r63170075 * r63170095;
        float r63170097 = r63170092 * r63170096;
        float r63170098 = r63170090 * r63170097;
        float r63170099 = cbrt(r63170098);
        float r63170100 = -9216.0;
        float r63170101 = 512.0;
        float r63170102 = r63170076 * r63170101;
        float r63170103 = r63170100 + r63170102;
        float r63170104 = r63170096 * r63170103;
        float r63170105 = 30240.0;
        float r63170106 = r63170105 * r63170075;
        float r63170107 = r63170104 + r63170106;
        float r63170108 = r63170099 + r63170107;
        return r63170108;
}

double f_od(double x) {
        double r63170109 = x;
        double r63170110 = r63170109 * r63170109;
        double r63170111 = 48384.0;
        double r63170112 = r63170109 * r63170111;
        double r63170113 = r63170110 * r63170112;
        double r63170114 = 80640.0;
        double r63170115 = r63170114 * r63170109;
        double r63170116 = r63170113 - r63170115;
        double r63170117 = r63170116 * r63170113;
        double r63170118 = -80640.0;
        double r63170119 = r63170109 * r63170118;
        double r63170120 = r63170119 * r63170109;
        double r63170121 = r63170111 * r63170110;
        double r63170122 = r63170121 - r63170114;
        double r63170123 = r63170120 * r63170122;
        double r63170124 = r63170117 + r63170123;
        double r63170125 = r63170110 * r63170111;
        double r63170126 = r63170125 + r63170118;
        double r63170127 = 3;
        double r63170128 = pow(r63170109, r63170127);
        double r63170129 = r63170128 * r63170128;
        double r63170130 = r63170109 * r63170129;
        double r63170131 = r63170126 * r63170130;
        double r63170132 = r63170124 * r63170131;
        double r63170133 = cbrt(r63170132);
        double r63170134 = -9216.0;
        double r63170135 = 512.0;
        double r63170136 = r63170110 * r63170135;
        double r63170137 = r63170134 + r63170136;
        double r63170138 = r63170130 * r63170137;
        double r63170139 = 30240.0;
        double r63170140 = r63170139 * r63170109;
        double r63170141 = r63170138 + r63170140;
        double r63170142 = r63170133 + r63170141;
        return r63170142;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63170143, r63170144, r63170145, r63170146, r63170147, r63170148, r63170149, r63170150, r63170151, r63170152, r63170153, r63170154, r63170155, r63170156, r63170157, r63170158, r63170159, r63170160, r63170161, r63170162, r63170163, r63170164, r63170165;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170143, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r63170144);
        mpfr_init(r63170145);
        mpfr_init_set_str(r63170146, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r63170147);
        mpfr_init(r63170148);
        mpfr_init(r63170149);
        mpfr_init(r63170150);
        mpfr_init_set_str(r63170151, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r63170152);
        mpfr_init(r63170153);
        mpfr_init(r63170154);
        mpfr_init(r63170155);
        mpfr_init_set_str(r63170156, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r63170157);
        mpfr_init(r63170158);
        mpfr_init(r63170159);
        mpfr_init(r63170160);
        mpfr_init_set_str(r63170161, "512.0", 10, MPFR_RNDN);
        mpfr_init(r63170162);
        mpfr_init(r63170163);
        mpfr_init(r63170164);
        mpfr_init(r63170165);
}

double f_im(double x) {
        ;
        mpfr_set_d(r63170144, x, MPFR_RNDN);
        mpfr_mul(r63170145, r63170143, r63170144, MPFR_RNDN);
        ;
        mpfr_mul(r63170147, r63170144, r63170144, MPFR_RNDN);
        mpfr_mul(r63170148, r63170147, r63170144, MPFR_RNDN);
        mpfr_mul(r63170149, r63170146, r63170148, MPFR_RNDN);
        mpfr_add(r63170150, r63170145, r63170149, MPFR_RNDN);
        ;
        mpfr_mul(r63170152, r63170148, r63170144, MPFR_RNDN);
        mpfr_mul(r63170153, r63170152, r63170144, MPFR_RNDN);
        mpfr_mul(r63170154, r63170151, r63170153, MPFR_RNDN);
        mpfr_add(r63170155, r63170150, r63170154, MPFR_RNDN);
        ;
        mpfr_mul(r63170157, r63170153, r63170144, MPFR_RNDN);
        mpfr_mul(r63170158, r63170157, r63170144, MPFR_RNDN);
        mpfr_mul(r63170159, r63170156, r63170158, MPFR_RNDN);
        mpfr_add(r63170160, r63170155, r63170159, MPFR_RNDN);
        ;
        mpfr_mul(r63170162, r63170158, r63170144, MPFR_RNDN);
        mpfr_mul(r63170163, r63170162, r63170144, MPFR_RNDN);
        mpfr_mul(r63170164, r63170161, r63170163, MPFR_RNDN);
        mpfr_add(r63170165, r63170160, r63170164, MPFR_RNDN);
        return mpfr_get_d(r63170165, MPFR_RNDN);
}

static mpfr_t r63170166, r63170167, r63170168, r63170169, r63170170, r63170171, r63170172, r63170173, r63170174, r63170175, r63170176, r63170177, r63170178, r63170179, r63170180, r63170181, r63170182, r63170183, r63170184, r63170185, r63170186, r63170187, r63170188, r63170189, r63170190, r63170191, r63170192, r63170193, r63170194, r63170195, r63170196, r63170197, r63170198, r63170199;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r63170166);
        mpfr_init(r63170167);
        mpfr_init_set_str(r63170168, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r63170169);
        mpfr_init(r63170170);
        mpfr_init_set_str(r63170171, "80640.0", 10, MPFR_RNDN);
        mpfr_init(r63170172);
        mpfr_init(r63170173);
        mpfr_init(r63170174);
        mpfr_init_set_str(r63170175, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r63170176);
        mpfr_init(r63170177);
        mpfr_init(r63170178);
        mpfr_init(r63170179);
        mpfr_init(r63170180);
        mpfr_init(r63170181);
        mpfr_init(r63170182);
        mpfr_init(r63170183);
        mpfr_init_set_str(r63170184, "3", 10, MPFR_RNDN);
        mpfr_init(r63170185);
        mpfr_init(r63170186);
        mpfr_init(r63170187);
        mpfr_init(r63170188);
        mpfr_init(r63170189);
        mpfr_init(r63170190);
        mpfr_init_set_str(r63170191, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170192, "512.0", 10, MPFR_RNDN);
        mpfr_init(r63170193);
        mpfr_init(r63170194);
        mpfr_init(r63170195);
        mpfr_init_set_str(r63170196, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r63170197);
        mpfr_init(r63170198);
        mpfr_init(r63170199);
}

double f_fm(double x) {
        mpfr_set_d(r63170166, x, MPFR_RNDN);
        mpfr_mul(r63170167, r63170166, r63170166, MPFR_RNDN);
        ;
        mpfr_mul(r63170169, r63170166, r63170168, MPFR_RNDN);
        mpfr_mul(r63170170, r63170167, r63170169, MPFR_RNDN);
        ;
        mpfr_mul(r63170172, r63170171, r63170166, MPFR_RNDN);
        mpfr_sub(r63170173, r63170170, r63170172, MPFR_RNDN);
        mpfr_mul(r63170174, r63170173, r63170170, MPFR_RNDN);
        ;
        mpfr_mul(r63170176, r63170166, r63170175, MPFR_RNDN);
        mpfr_mul(r63170177, r63170176, r63170166, MPFR_RNDN);
        mpfr_mul(r63170178, r63170168, r63170167, MPFR_RNDN);
        mpfr_sub(r63170179, r63170178, r63170171, MPFR_RNDN);
        mpfr_mul(r63170180, r63170177, r63170179, MPFR_RNDN);
        mpfr_add(r63170181, r63170174, r63170180, MPFR_RNDN);
        mpfr_mul(r63170182, r63170167, r63170168, MPFR_RNDN);
        mpfr_add(r63170183, r63170182, r63170175, MPFR_RNDN);
        ;
        mpfr_pow(r63170185, r63170166, r63170184, MPFR_RNDN);
        mpfr_mul(r63170186, r63170185, r63170185, MPFR_RNDN);
        mpfr_mul(r63170187, r63170166, r63170186, MPFR_RNDN);
        mpfr_mul(r63170188, r63170183, r63170187, MPFR_RNDN);
        mpfr_mul(r63170189, r63170181, r63170188, MPFR_RNDN);
        mpfr_cbrt(r63170190, r63170189, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r63170193, r63170167, r63170192, MPFR_RNDN);
        mpfr_add(r63170194, r63170191, r63170193, MPFR_RNDN);
        mpfr_mul(r63170195, r63170187, r63170194, MPFR_RNDN);
        ;
        mpfr_mul(r63170197, r63170196, r63170166, MPFR_RNDN);
        mpfr_add(r63170198, r63170195, r63170197, MPFR_RNDN);
        mpfr_add(r63170199, r63170190, r63170198, MPFR_RNDN);
        return mpfr_get_d(r63170199, MPFR_RNDN);
}

static mpfr_t r63170200, r63170201, r63170202, r63170203, r63170204, r63170205, r63170206, r63170207, r63170208, r63170209, r63170210, r63170211, r63170212, r63170213, r63170214, r63170215, r63170216, r63170217, r63170218, r63170219, r63170220, r63170221, r63170222, r63170223, r63170224, r63170225, r63170226, r63170227, r63170228, r63170229, r63170230, r63170231, r63170232, r63170233;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r63170200);
        mpfr_init(r63170201);
        mpfr_init_set_str(r63170202, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r63170203);
        mpfr_init(r63170204);
        mpfr_init_set_str(r63170205, "80640.0", 10, MPFR_RNDN);
        mpfr_init(r63170206);
        mpfr_init(r63170207);
        mpfr_init(r63170208);
        mpfr_init_set_str(r63170209, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r63170210);
        mpfr_init(r63170211);
        mpfr_init(r63170212);
        mpfr_init(r63170213);
        mpfr_init(r63170214);
        mpfr_init(r63170215);
        mpfr_init(r63170216);
        mpfr_init(r63170217);
        mpfr_init_set_str(r63170218, "3", 10, MPFR_RNDN);
        mpfr_init(r63170219);
        mpfr_init(r63170220);
        mpfr_init(r63170221);
        mpfr_init(r63170222);
        mpfr_init(r63170223);
        mpfr_init(r63170224);
        mpfr_init_set_str(r63170225, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170226, "512.0", 10, MPFR_RNDN);
        mpfr_init(r63170227);
        mpfr_init(r63170228);
        mpfr_init(r63170229);
        mpfr_init_set_str(r63170230, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r63170231);
        mpfr_init(r63170232);
        mpfr_init(r63170233);
}

double f_dm(double x) {
        mpfr_set_d(r63170200, x, MPFR_RNDN);
        mpfr_mul(r63170201, r63170200, r63170200, MPFR_RNDN);
        ;
        mpfr_mul(r63170203, r63170200, r63170202, MPFR_RNDN);
        mpfr_mul(r63170204, r63170201, r63170203, MPFR_RNDN);
        ;
        mpfr_mul(r63170206, r63170205, r63170200, MPFR_RNDN);
        mpfr_sub(r63170207, r63170204, r63170206, MPFR_RNDN);
        mpfr_mul(r63170208, r63170207, r63170204, MPFR_RNDN);
        ;
        mpfr_mul(r63170210, r63170200, r63170209, MPFR_RNDN);
        mpfr_mul(r63170211, r63170210, r63170200, MPFR_RNDN);
        mpfr_mul(r63170212, r63170202, r63170201, MPFR_RNDN);
        mpfr_sub(r63170213, r63170212, r63170205, MPFR_RNDN);
        mpfr_mul(r63170214, r63170211, r63170213, MPFR_RNDN);
        mpfr_add(r63170215, r63170208, r63170214, MPFR_RNDN);
        mpfr_mul(r63170216, r63170201, r63170202, MPFR_RNDN);
        mpfr_add(r63170217, r63170216, r63170209, MPFR_RNDN);
        ;
        mpfr_pow(r63170219, r63170200, r63170218, MPFR_RNDN);
        mpfr_mul(r63170220, r63170219, r63170219, MPFR_RNDN);
        mpfr_mul(r63170221, r63170200, r63170220, MPFR_RNDN);
        mpfr_mul(r63170222, r63170217, r63170221, MPFR_RNDN);
        mpfr_mul(r63170223, r63170215, r63170222, MPFR_RNDN);
        mpfr_cbrt(r63170224, r63170223, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r63170227, r63170201, r63170226, MPFR_RNDN);
        mpfr_add(r63170228, r63170225, r63170227, MPFR_RNDN);
        mpfr_mul(r63170229, r63170221, r63170228, MPFR_RNDN);
        ;
        mpfr_mul(r63170231, r63170230, r63170200, MPFR_RNDN);
        mpfr_add(r63170232, r63170229, r63170231, MPFR_RNDN);
        mpfr_add(r63170233, r63170224, r63170232, MPFR_RNDN);
        return mpfr_get_d(r63170233, MPFR_RNDN);
}

