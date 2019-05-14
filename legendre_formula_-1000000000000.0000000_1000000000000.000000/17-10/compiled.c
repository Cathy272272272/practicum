#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7170030 = -0.246094;
        float r7170031 = 13.535156;
        float r7170032 = x;
        float r7170033 = r7170032 * r7170032;
        float r7170034 = r7170031 * r7170033;
        float r7170035 = r7170030 + r7170034;
        float r7170036 = -117.304688;
        float r7170037 = r7170033 * r7170032;
        float r7170038 = r7170037 * r7170032;
        float r7170039 = r7170036 * r7170038;
        float r7170040 = r7170035 + r7170039;
        float r7170041 = 351.914062;
        float r7170042 = r7170038 * r7170032;
        float r7170043 = r7170042 * r7170032;
        float r7170044 = r7170041 * r7170043;
        float r7170045 = r7170040 + r7170044;
        float r7170046 = -427.324219;
        float r7170047 = r7170043 * r7170032;
        float r7170048 = r7170047 * r7170032;
        float r7170049 = r7170046 * r7170048;
        float r7170050 = r7170045 + r7170049;
        float r7170051 = 180.425781;
        float r7170052 = r7170048 * r7170032;
        float r7170053 = r7170052 * r7170032;
        float r7170054 = r7170051 * r7170053;
        float r7170055 = r7170050 + r7170054;
        return r7170055;
}

double f_id(double x) {
        double r7170056 = -0.246094;
        double r7170057 = 13.535156;
        double r7170058 = x;
        double r7170059 = r7170058 * r7170058;
        double r7170060 = r7170057 * r7170059;
        double r7170061 = r7170056 + r7170060;
        double r7170062 = -117.304688;
        double r7170063 = r7170059 * r7170058;
        double r7170064 = r7170063 * r7170058;
        double r7170065 = r7170062 * r7170064;
        double r7170066 = r7170061 + r7170065;
        double r7170067 = 351.914062;
        double r7170068 = r7170064 * r7170058;
        double r7170069 = r7170068 * r7170058;
        double r7170070 = r7170067 * r7170069;
        double r7170071 = r7170066 + r7170070;
        double r7170072 = -427.324219;
        double r7170073 = r7170069 * r7170058;
        double r7170074 = r7170073 * r7170058;
        double r7170075 = r7170072 * r7170074;
        double r7170076 = r7170071 + r7170075;
        double r7170077 = 180.425781;
        double r7170078 = r7170074 * r7170058;
        double r7170079 = r7170078 * r7170058;
        double r7170080 = r7170077 * r7170079;
        double r7170081 = r7170076 + r7170080;
        return r7170081;
}


double f_of(float x) {
        float r7170082 = -0.246094;
        float r7170083 = 13.535156;
        float r7170084 = x;
        float r7170085 = r7170084 * r7170084;
        float r7170086 = r7170083 * r7170085;
        float r7170087 = r7170082 + r7170086;
        float r7170088 = -117.304688;
        float r7170089 = r7170085 * r7170084;
        float r7170090 = r7170089 * r7170084;
        float r7170091 = r7170088 * r7170090;
        float r7170092 = r7170087 + r7170091;
        float r7170093 = 351.914062;
        float r7170094 = r7170090 * r7170084;
        float r7170095 = r7170094 * r7170084;
        float r7170096 = r7170093 * r7170095;
        float r7170097 = r7170092 + r7170096;
        float r7170098 = -427.324219;
        float r7170099 = r7170095 * r7170084;
        float r7170100 = r7170099 * r7170084;
        float r7170101 = r7170098 * r7170100;
        float r7170102 = r7170097 + r7170101;
        float r7170103 = 180.425781;
        float r7170104 = 3;
        float r7170105 = pow(r7170084, r7170104);
        float r7170106 = r7170105 * r7170084;
        float r7170107 = r7170106 * r7170084;
        float r7170108 = r7170107 * r7170084;
        float r7170109 = r7170108 * r7170084;
        float r7170110 = r7170109 * r7170084;
        float r7170111 = r7170110 * r7170084;
        float r7170112 = r7170111 * r7170084;
        float r7170113 = r7170103 * r7170112;
        float r7170114 = r7170102 + r7170113;
        return r7170114;
}

double f_od(double x) {
        double r7170115 = -0.246094;
        double r7170116 = 13.535156;
        double r7170117 = x;
        double r7170118 = r7170117 * r7170117;
        double r7170119 = r7170116 * r7170118;
        double r7170120 = r7170115 + r7170119;
        double r7170121 = -117.304688;
        double r7170122 = r7170118 * r7170117;
        double r7170123 = r7170122 * r7170117;
        double r7170124 = r7170121 * r7170123;
        double r7170125 = r7170120 + r7170124;
        double r7170126 = 351.914062;
        double r7170127 = r7170123 * r7170117;
        double r7170128 = r7170127 * r7170117;
        double r7170129 = r7170126 * r7170128;
        double r7170130 = r7170125 + r7170129;
        double r7170131 = -427.324219;
        double r7170132 = r7170128 * r7170117;
        double r7170133 = r7170132 * r7170117;
        double r7170134 = r7170131 * r7170133;
        double r7170135 = r7170130 + r7170134;
        double r7170136 = 180.425781;
        double r7170137 = 3;
        double r7170138 = pow(r7170117, r7170137);
        double r7170139 = r7170138 * r7170117;
        double r7170140 = r7170139 * r7170117;
        double r7170141 = r7170140 * r7170117;
        double r7170142 = r7170141 * r7170117;
        double r7170143 = r7170142 * r7170117;
        double r7170144 = r7170143 * r7170117;
        double r7170145 = r7170144 * r7170117;
        double r7170146 = r7170136 * r7170145;
        double r7170147 = r7170135 + r7170146;
        return r7170147;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7170148, r7170149, r7170150, r7170151, r7170152, r7170153, r7170154, r7170155, r7170156, r7170157, r7170158, r7170159, r7170160, r7170161, r7170162, r7170163, r7170164, r7170165, r7170166, r7170167, r7170168, r7170169, r7170170, r7170171, r7170172, r7170173;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7170148, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r7170149, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7170150);
        mpfr_init(r7170151);
        mpfr_init(r7170152);
        mpfr_init(r7170153);
        mpfr_init_set_str(r7170154, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r7170155);
        mpfr_init(r7170156);
        mpfr_init(r7170157);
        mpfr_init(r7170158);
        mpfr_init_set_str(r7170159, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7170160);
        mpfr_init(r7170161);
        mpfr_init(r7170162);
        mpfr_init(r7170163);
        mpfr_init_set_str(r7170164, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7170165);
        mpfr_init(r7170166);
        mpfr_init(r7170167);
        mpfr_init(r7170168);
        mpfr_init_set_str(r7170169, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7170170);
        mpfr_init(r7170171);
        mpfr_init(r7170172);
        mpfr_init(r7170173);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7170150, x, MPFR_RNDN);
        mpfr_mul(r7170151, r7170150, r7170150, MPFR_RNDN);
        mpfr_mul(r7170152, r7170149, r7170151, MPFR_RNDN);
        mpfr_add(r7170153, r7170148, r7170152, MPFR_RNDN);
        ;
        mpfr_mul(r7170155, r7170151, r7170150, MPFR_RNDN);
        mpfr_mul(r7170156, r7170155, r7170150, MPFR_RNDN);
        mpfr_mul(r7170157, r7170154, r7170156, MPFR_RNDN);
        mpfr_add(r7170158, r7170153, r7170157, MPFR_RNDN);
        ;
        mpfr_mul(r7170160, r7170156, r7170150, MPFR_RNDN);
        mpfr_mul(r7170161, r7170160, r7170150, MPFR_RNDN);
        mpfr_mul(r7170162, r7170159, r7170161, MPFR_RNDN);
        mpfr_add(r7170163, r7170158, r7170162, MPFR_RNDN);
        ;
        mpfr_mul(r7170165, r7170161, r7170150, MPFR_RNDN);
        mpfr_mul(r7170166, r7170165, r7170150, MPFR_RNDN);
        mpfr_mul(r7170167, r7170164, r7170166, MPFR_RNDN);
        mpfr_add(r7170168, r7170163, r7170167, MPFR_RNDN);
        ;
        mpfr_mul(r7170170, r7170166, r7170150, MPFR_RNDN);
        mpfr_mul(r7170171, r7170170, r7170150, MPFR_RNDN);
        mpfr_mul(r7170172, r7170169, r7170171, MPFR_RNDN);
        mpfr_add(r7170173, r7170168, r7170172, MPFR_RNDN);
        return mpfr_get_d(r7170173, MPFR_RNDN);
}

static mpfr_t r7170174, r7170175, r7170176, r7170177, r7170178, r7170179, r7170180, r7170181, r7170182, r7170183, r7170184, r7170185, r7170186, r7170187, r7170188, r7170189, r7170190, r7170191, r7170192, r7170193, r7170194, r7170195, r7170196, r7170197, r7170198, r7170199, r7170200, r7170201, r7170202, r7170203, r7170204, r7170205, r7170206;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7170174, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r7170175, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7170176);
        mpfr_init(r7170177);
        mpfr_init(r7170178);
        mpfr_init(r7170179);
        mpfr_init_set_str(r7170180, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r7170181);
        mpfr_init(r7170182);
        mpfr_init(r7170183);
        mpfr_init(r7170184);
        mpfr_init_set_str(r7170185, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7170186);
        mpfr_init(r7170187);
        mpfr_init(r7170188);
        mpfr_init(r7170189);
        mpfr_init_set_str(r7170190, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7170191);
        mpfr_init(r7170192);
        mpfr_init(r7170193);
        mpfr_init(r7170194);
        mpfr_init_set_str(r7170195, "180.425781", 10, MPFR_RNDN);
        mpfr_init_set_str(r7170196, "3", 10, MPFR_RNDN);
        mpfr_init(r7170197);
        mpfr_init(r7170198);
        mpfr_init(r7170199);
        mpfr_init(r7170200);
        mpfr_init(r7170201);
        mpfr_init(r7170202);
        mpfr_init(r7170203);
        mpfr_init(r7170204);
        mpfr_init(r7170205);
        mpfr_init(r7170206);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7170176, x, MPFR_RNDN);
        mpfr_mul(r7170177, r7170176, r7170176, MPFR_RNDN);
        mpfr_mul(r7170178, r7170175, r7170177, MPFR_RNDN);
        mpfr_add(r7170179, r7170174, r7170178, MPFR_RNDN);
        ;
        mpfr_mul(r7170181, r7170177, r7170176, MPFR_RNDN);
        mpfr_mul(r7170182, r7170181, r7170176, MPFR_RNDN);
        mpfr_mul(r7170183, r7170180, r7170182, MPFR_RNDN);
        mpfr_add(r7170184, r7170179, r7170183, MPFR_RNDN);
        ;
        mpfr_mul(r7170186, r7170182, r7170176, MPFR_RNDN);
        mpfr_mul(r7170187, r7170186, r7170176, MPFR_RNDN);
        mpfr_mul(r7170188, r7170185, r7170187, MPFR_RNDN);
        mpfr_add(r7170189, r7170184, r7170188, MPFR_RNDN);
        ;
        mpfr_mul(r7170191, r7170187, r7170176, MPFR_RNDN);
        mpfr_mul(r7170192, r7170191, r7170176, MPFR_RNDN);
        mpfr_mul(r7170193, r7170190, r7170192, MPFR_RNDN);
        mpfr_add(r7170194, r7170189, r7170193, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7170197, r7170176, r7170196, MPFR_RNDN);
        mpfr_mul(r7170198, r7170197, r7170176, MPFR_RNDN);
        mpfr_mul(r7170199, r7170198, r7170176, MPFR_RNDN);
        mpfr_mul(r7170200, r7170199, r7170176, MPFR_RNDN);
        mpfr_mul(r7170201, r7170200, r7170176, MPFR_RNDN);
        mpfr_mul(r7170202, r7170201, r7170176, MPFR_RNDN);
        mpfr_mul(r7170203, r7170202, r7170176, MPFR_RNDN);
        mpfr_mul(r7170204, r7170203, r7170176, MPFR_RNDN);
        mpfr_mul(r7170205, r7170195, r7170204, MPFR_RNDN);
        mpfr_add(r7170206, r7170194, r7170205, MPFR_RNDN);
        return mpfr_get_d(r7170206, MPFR_RNDN);
}

static mpfr_t r7170207, r7170208, r7170209, r7170210, r7170211, r7170212, r7170213, r7170214, r7170215, r7170216, r7170217, r7170218, r7170219, r7170220, r7170221, r7170222, r7170223, r7170224, r7170225, r7170226, r7170227, r7170228, r7170229, r7170230, r7170231, r7170232, r7170233, r7170234, r7170235, r7170236, r7170237, r7170238, r7170239;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7170207, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r7170208, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7170209);
        mpfr_init(r7170210);
        mpfr_init(r7170211);
        mpfr_init(r7170212);
        mpfr_init_set_str(r7170213, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r7170214);
        mpfr_init(r7170215);
        mpfr_init(r7170216);
        mpfr_init(r7170217);
        mpfr_init_set_str(r7170218, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7170219);
        mpfr_init(r7170220);
        mpfr_init(r7170221);
        mpfr_init(r7170222);
        mpfr_init_set_str(r7170223, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7170224);
        mpfr_init(r7170225);
        mpfr_init(r7170226);
        mpfr_init(r7170227);
        mpfr_init_set_str(r7170228, "180.425781", 10, MPFR_RNDN);
        mpfr_init_set_str(r7170229, "3", 10, MPFR_RNDN);
        mpfr_init(r7170230);
        mpfr_init(r7170231);
        mpfr_init(r7170232);
        mpfr_init(r7170233);
        mpfr_init(r7170234);
        mpfr_init(r7170235);
        mpfr_init(r7170236);
        mpfr_init(r7170237);
        mpfr_init(r7170238);
        mpfr_init(r7170239);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7170209, x, MPFR_RNDN);
        mpfr_mul(r7170210, r7170209, r7170209, MPFR_RNDN);
        mpfr_mul(r7170211, r7170208, r7170210, MPFR_RNDN);
        mpfr_add(r7170212, r7170207, r7170211, MPFR_RNDN);
        ;
        mpfr_mul(r7170214, r7170210, r7170209, MPFR_RNDN);
        mpfr_mul(r7170215, r7170214, r7170209, MPFR_RNDN);
        mpfr_mul(r7170216, r7170213, r7170215, MPFR_RNDN);
        mpfr_add(r7170217, r7170212, r7170216, MPFR_RNDN);
        ;
        mpfr_mul(r7170219, r7170215, r7170209, MPFR_RNDN);
        mpfr_mul(r7170220, r7170219, r7170209, MPFR_RNDN);
        mpfr_mul(r7170221, r7170218, r7170220, MPFR_RNDN);
        mpfr_add(r7170222, r7170217, r7170221, MPFR_RNDN);
        ;
        mpfr_mul(r7170224, r7170220, r7170209, MPFR_RNDN);
        mpfr_mul(r7170225, r7170224, r7170209, MPFR_RNDN);
        mpfr_mul(r7170226, r7170223, r7170225, MPFR_RNDN);
        mpfr_add(r7170227, r7170222, r7170226, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7170230, r7170209, r7170229, MPFR_RNDN);
        mpfr_mul(r7170231, r7170230, r7170209, MPFR_RNDN);
        mpfr_mul(r7170232, r7170231, r7170209, MPFR_RNDN);
        mpfr_mul(r7170233, r7170232, r7170209, MPFR_RNDN);
        mpfr_mul(r7170234, r7170233, r7170209, MPFR_RNDN);
        mpfr_mul(r7170235, r7170234, r7170209, MPFR_RNDN);
        mpfr_mul(r7170236, r7170235, r7170209, MPFR_RNDN);
        mpfr_mul(r7170237, r7170236, r7170209, MPFR_RNDN);
        mpfr_mul(r7170238, r7170228, r7170237, MPFR_RNDN);
        mpfr_add(r7170239, r7170227, r7170238, MPFR_RNDN);
        return mpfr_get_d(r7170239, MPFR_RNDN);
}

