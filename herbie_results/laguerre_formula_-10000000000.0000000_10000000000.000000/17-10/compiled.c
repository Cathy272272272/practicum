#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r9377015 = 1.0;
        float r9377016 = -10.0;
        float r9377017 = x;
        float r9377018 = r9377016 * r9377017;
        float r9377019 = r9377015 + r9377018;
        float r9377020 = 22.5;
        float r9377021 = r9377017 * r9377017;
        float r9377022 = r9377020 * r9377021;
        float r9377023 = r9377019 + r9377022;
        float r9377024 = -20.0;
        float r9377025 = r9377021 * r9377017;
        float r9377026 = r9377024 * r9377025;
        float r9377027 = r9377023 + r9377026;
        float r9377028 = 8.75;
        float r9377029 = r9377025 * r9377017;
        float r9377030 = r9377028 * r9377029;
        float r9377031 = r9377027 + r9377030;
        float r9377032 = -2.1;
        float r9377033 = r9377029 * r9377017;
        float r9377034 = r9377032 * r9377033;
        float r9377035 = r9377031 + r9377034;
        float r9377036 = 0.291667;
        float r9377037 = r9377033 * r9377017;
        float r9377038 = r9377036 * r9377037;
        float r9377039 = r9377035 + r9377038;
        float r9377040 = -0.02381;
        float r9377041 = r9377037 * r9377017;
        float r9377042 = r9377040 * r9377041;
        float r9377043 = r9377039 + r9377042;
        float r9377044 = 0.001116;
        float r9377045 = r9377041 * r9377017;
        float r9377046 = r9377044 * r9377045;
        float r9377047 = r9377043 + r9377046;
        float r9377048 = -2.8e-05;
        float r9377049 = r9377045 * r9377017;
        float r9377050 = r9377048 * r9377049;
        float r9377051 = r9377047 + r9377050;
        return r9377051;
}

double f_id(double x) {
        double r9377052 = 1.0;
        double r9377053 = -10.0;
        double r9377054 = x;
        double r9377055 = r9377053 * r9377054;
        double r9377056 = r9377052 + r9377055;
        double r9377057 = 22.5;
        double r9377058 = r9377054 * r9377054;
        double r9377059 = r9377057 * r9377058;
        double r9377060 = r9377056 + r9377059;
        double r9377061 = -20.0;
        double r9377062 = r9377058 * r9377054;
        double r9377063 = r9377061 * r9377062;
        double r9377064 = r9377060 + r9377063;
        double r9377065 = 8.75;
        double r9377066 = r9377062 * r9377054;
        double r9377067 = r9377065 * r9377066;
        double r9377068 = r9377064 + r9377067;
        double r9377069 = -2.1;
        double r9377070 = r9377066 * r9377054;
        double r9377071 = r9377069 * r9377070;
        double r9377072 = r9377068 + r9377071;
        double r9377073 = 0.291667;
        double r9377074 = r9377070 * r9377054;
        double r9377075 = r9377073 * r9377074;
        double r9377076 = r9377072 + r9377075;
        double r9377077 = -0.02381;
        double r9377078 = r9377074 * r9377054;
        double r9377079 = r9377077 * r9377078;
        double r9377080 = r9377076 + r9377079;
        double r9377081 = 0.001116;
        double r9377082 = r9377078 * r9377054;
        double r9377083 = r9377081 * r9377082;
        double r9377084 = r9377080 + r9377083;
        double r9377085 = -2.8e-05;
        double r9377086 = r9377082 * r9377054;
        double r9377087 = r9377085 * r9377086;
        double r9377088 = r9377084 + r9377087;
        return r9377088;
}


double f_of(float x) {
        float r9377089 = 1.0;
        float r9377090 = -10.0;
        float r9377091 = x;
        float r9377092 = r9377090 * r9377091;
        float r9377093 = r9377089 + r9377092;
        float r9377094 = 22.5;
        float r9377095 = r9377091 * r9377091;
        float r9377096 = r9377094 * r9377095;
        float r9377097 = r9377093 + r9377096;
        float r9377098 = -20.0;
        float r9377099 = r9377095 * r9377091;
        float r9377100 = r9377098 * r9377099;
        float r9377101 = r9377097 + r9377100;
        float r9377102 = 8.75;
        float r9377103 = r9377099 * r9377091;
        float r9377104 = r9377102 * r9377103;
        float r9377105 = r9377101 + r9377104;
        float r9377106 = -2.1;
        float r9377107 = r9377103 * r9377091;
        float r9377108 = r9377106 * r9377107;
        float r9377109 = r9377105 + r9377108;
        float r9377110 = 0.291667;
        float r9377111 = r9377107 * r9377091;
        float r9377112 = r9377110 * r9377111;
        float r9377113 = r9377109 + r9377112;
        float r9377114 = -0.02381;
        float r9377115 = r9377111 * r9377091;
        float r9377116 = r9377114 * r9377115;
        float r9377117 = r9377113 + r9377116;
        float r9377118 = 0.001116;
        float r9377119 = r9377115 * r9377091;
        float r9377120 = r9377118 * r9377119;
        float r9377121 = r9377117 + r9377120;
        float r9377122 = -2.8e-05;
        float r9377123 = r9377119 * r9377091;
        float r9377124 = r9377122 * r9377123;
        float r9377125 = r9377121 + r9377124;
        return r9377125;
}

double f_od(double x) {
        double r9377126 = 1.0;
        double r9377127 = -10.0;
        double r9377128 = x;
        double r9377129 = r9377127 * r9377128;
        double r9377130 = r9377126 + r9377129;
        double r9377131 = 22.5;
        double r9377132 = r9377128 * r9377128;
        double r9377133 = r9377131 * r9377132;
        double r9377134 = r9377130 + r9377133;
        double r9377135 = -20.0;
        double r9377136 = r9377132 * r9377128;
        double r9377137 = r9377135 * r9377136;
        double r9377138 = r9377134 + r9377137;
        double r9377139 = 8.75;
        double r9377140 = r9377136 * r9377128;
        double r9377141 = r9377139 * r9377140;
        double r9377142 = r9377138 + r9377141;
        double r9377143 = -2.1;
        double r9377144 = r9377140 * r9377128;
        double r9377145 = r9377143 * r9377144;
        double r9377146 = r9377142 + r9377145;
        double r9377147 = 0.291667;
        double r9377148 = r9377144 * r9377128;
        double r9377149 = r9377147 * r9377148;
        double r9377150 = r9377146 + r9377149;
        double r9377151 = -0.02381;
        double r9377152 = r9377148 * r9377128;
        double r9377153 = r9377151 * r9377152;
        double r9377154 = r9377150 + r9377153;
        double r9377155 = 0.001116;
        double r9377156 = r9377152 * r9377128;
        double r9377157 = r9377155 * r9377156;
        double r9377158 = r9377154 + r9377157;
        double r9377159 = -2.8e-05;
        double r9377160 = r9377156 * r9377128;
        double r9377161 = r9377159 * r9377160;
        double r9377162 = r9377158 + r9377161;
        return r9377162;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9377163, r9377164, r9377165, r9377166, r9377167, r9377168, r9377169, r9377170, r9377171, r9377172, r9377173, r9377174, r9377175, r9377176, r9377177, r9377178, r9377179, r9377180, r9377181, r9377182, r9377183, r9377184, r9377185, r9377186, r9377187, r9377188, r9377189, r9377190, r9377191, r9377192, r9377193, r9377194, r9377195, r9377196, r9377197, r9377198, r9377199;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9377163, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9377164, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r9377165);
        mpfr_init(r9377166);
        mpfr_init(r9377167);
        mpfr_init_set_str(r9377168, "22.5", 10, MPFR_RNDN);
        mpfr_init(r9377169);
        mpfr_init(r9377170);
        mpfr_init(r9377171);
        mpfr_init_set_str(r9377172, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r9377173);
        mpfr_init(r9377174);
        mpfr_init(r9377175);
        mpfr_init_set_str(r9377176, "8.75", 10, MPFR_RNDN);
        mpfr_init(r9377177);
        mpfr_init(r9377178);
        mpfr_init(r9377179);
        mpfr_init_set_str(r9377180, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r9377181);
        mpfr_init(r9377182);
        mpfr_init(r9377183);
        mpfr_init_set_str(r9377184, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r9377185);
        mpfr_init(r9377186);
        mpfr_init(r9377187);
        mpfr_init_set_str(r9377188, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r9377189);
        mpfr_init(r9377190);
        mpfr_init(r9377191);
        mpfr_init_set_str(r9377192, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r9377193);
        mpfr_init(r9377194);
        mpfr_init(r9377195);
        mpfr_init_set_str(r9377196, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9377197);
        mpfr_init(r9377198);
        mpfr_init(r9377199);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9377165, x, MPFR_RNDN);
        mpfr_mul(r9377166, r9377164, r9377165, MPFR_RNDN);
        mpfr_add(r9377167, r9377163, r9377166, MPFR_RNDN);
        ;
        mpfr_mul(r9377169, r9377165, r9377165, MPFR_RNDN);
        mpfr_mul(r9377170, r9377168, r9377169, MPFR_RNDN);
        mpfr_add(r9377171, r9377167, r9377170, MPFR_RNDN);
        ;
        mpfr_mul(r9377173, r9377169, r9377165, MPFR_RNDN);
        mpfr_mul(r9377174, r9377172, r9377173, MPFR_RNDN);
        mpfr_add(r9377175, r9377171, r9377174, MPFR_RNDN);
        ;
        mpfr_mul(r9377177, r9377173, r9377165, MPFR_RNDN);
        mpfr_mul(r9377178, r9377176, r9377177, MPFR_RNDN);
        mpfr_add(r9377179, r9377175, r9377178, MPFR_RNDN);
        ;
        mpfr_mul(r9377181, r9377177, r9377165, MPFR_RNDN);
        mpfr_mul(r9377182, r9377180, r9377181, MPFR_RNDN);
        mpfr_add(r9377183, r9377179, r9377182, MPFR_RNDN);
        ;
        mpfr_mul(r9377185, r9377181, r9377165, MPFR_RNDN);
        mpfr_mul(r9377186, r9377184, r9377185, MPFR_RNDN);
        mpfr_add(r9377187, r9377183, r9377186, MPFR_RNDN);
        ;
        mpfr_mul(r9377189, r9377185, r9377165, MPFR_RNDN);
        mpfr_mul(r9377190, r9377188, r9377189, MPFR_RNDN);
        mpfr_add(r9377191, r9377187, r9377190, MPFR_RNDN);
        ;
        mpfr_mul(r9377193, r9377189, r9377165, MPFR_RNDN);
        mpfr_mul(r9377194, r9377192, r9377193, MPFR_RNDN);
        mpfr_add(r9377195, r9377191, r9377194, MPFR_RNDN);
        ;
        mpfr_mul(r9377197, r9377193, r9377165, MPFR_RNDN);
        mpfr_mul(r9377198, r9377196, r9377197, MPFR_RNDN);
        mpfr_add(r9377199, r9377195, r9377198, MPFR_RNDN);
        return mpfr_get_d(r9377199, MPFR_RNDN);
}

static mpfr_t r9377200, r9377201, r9377202, r9377203, r9377204, r9377205, r9377206, r9377207, r9377208, r9377209, r9377210, r9377211, r9377212, r9377213, r9377214, r9377215, r9377216, r9377217, r9377218, r9377219, r9377220, r9377221, r9377222, r9377223, r9377224, r9377225, r9377226, r9377227, r9377228, r9377229, r9377230, r9377231, r9377232, r9377233, r9377234, r9377235, r9377236;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9377200, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9377201, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r9377202);
        mpfr_init(r9377203);
        mpfr_init(r9377204);
        mpfr_init_set_str(r9377205, "22.5", 10, MPFR_RNDN);
        mpfr_init(r9377206);
        mpfr_init(r9377207);
        mpfr_init(r9377208);
        mpfr_init_set_str(r9377209, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r9377210);
        mpfr_init(r9377211);
        mpfr_init(r9377212);
        mpfr_init_set_str(r9377213, "8.75", 10, MPFR_RNDN);
        mpfr_init(r9377214);
        mpfr_init(r9377215);
        mpfr_init(r9377216);
        mpfr_init_set_str(r9377217, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r9377218);
        mpfr_init(r9377219);
        mpfr_init(r9377220);
        mpfr_init_set_str(r9377221, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r9377222);
        mpfr_init(r9377223);
        mpfr_init(r9377224);
        mpfr_init_set_str(r9377225, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r9377226);
        mpfr_init(r9377227);
        mpfr_init(r9377228);
        mpfr_init_set_str(r9377229, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r9377230);
        mpfr_init(r9377231);
        mpfr_init(r9377232);
        mpfr_init_set_str(r9377233, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9377234);
        mpfr_init(r9377235);
        mpfr_init(r9377236);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9377202, x, MPFR_RNDN);
        mpfr_mul(r9377203, r9377201, r9377202, MPFR_RNDN);
        mpfr_add(r9377204, r9377200, r9377203, MPFR_RNDN);
        ;
        mpfr_mul(r9377206, r9377202, r9377202, MPFR_RNDN);
        mpfr_mul(r9377207, r9377205, r9377206, MPFR_RNDN);
        mpfr_add(r9377208, r9377204, r9377207, MPFR_RNDN);
        ;
        mpfr_mul(r9377210, r9377206, r9377202, MPFR_RNDN);
        mpfr_mul(r9377211, r9377209, r9377210, MPFR_RNDN);
        mpfr_add(r9377212, r9377208, r9377211, MPFR_RNDN);
        ;
        mpfr_mul(r9377214, r9377210, r9377202, MPFR_RNDN);
        mpfr_mul(r9377215, r9377213, r9377214, MPFR_RNDN);
        mpfr_add(r9377216, r9377212, r9377215, MPFR_RNDN);
        ;
        mpfr_mul(r9377218, r9377214, r9377202, MPFR_RNDN);
        mpfr_mul(r9377219, r9377217, r9377218, MPFR_RNDN);
        mpfr_add(r9377220, r9377216, r9377219, MPFR_RNDN);
        ;
        mpfr_mul(r9377222, r9377218, r9377202, MPFR_RNDN);
        mpfr_mul(r9377223, r9377221, r9377222, MPFR_RNDN);
        mpfr_add(r9377224, r9377220, r9377223, MPFR_RNDN);
        ;
        mpfr_mul(r9377226, r9377222, r9377202, MPFR_RNDN);
        mpfr_mul(r9377227, r9377225, r9377226, MPFR_RNDN);
        mpfr_add(r9377228, r9377224, r9377227, MPFR_RNDN);
        ;
        mpfr_mul(r9377230, r9377226, r9377202, MPFR_RNDN);
        mpfr_mul(r9377231, r9377229, r9377230, MPFR_RNDN);
        mpfr_add(r9377232, r9377228, r9377231, MPFR_RNDN);
        ;
        mpfr_mul(r9377234, r9377230, r9377202, MPFR_RNDN);
        mpfr_mul(r9377235, r9377233, r9377234, MPFR_RNDN);
        mpfr_add(r9377236, r9377232, r9377235, MPFR_RNDN);
        return mpfr_get_d(r9377236, MPFR_RNDN);
}

static mpfr_t r9377237, r9377238, r9377239, r9377240, r9377241, r9377242, r9377243, r9377244, r9377245, r9377246, r9377247, r9377248, r9377249, r9377250, r9377251, r9377252, r9377253, r9377254, r9377255, r9377256, r9377257, r9377258, r9377259, r9377260, r9377261, r9377262, r9377263, r9377264, r9377265, r9377266, r9377267, r9377268, r9377269, r9377270, r9377271, r9377272, r9377273;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9377237, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9377238, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r9377239);
        mpfr_init(r9377240);
        mpfr_init(r9377241);
        mpfr_init_set_str(r9377242, "22.5", 10, MPFR_RNDN);
        mpfr_init(r9377243);
        mpfr_init(r9377244);
        mpfr_init(r9377245);
        mpfr_init_set_str(r9377246, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r9377247);
        mpfr_init(r9377248);
        mpfr_init(r9377249);
        mpfr_init_set_str(r9377250, "8.75", 10, MPFR_RNDN);
        mpfr_init(r9377251);
        mpfr_init(r9377252);
        mpfr_init(r9377253);
        mpfr_init_set_str(r9377254, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r9377255);
        mpfr_init(r9377256);
        mpfr_init(r9377257);
        mpfr_init_set_str(r9377258, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r9377259);
        mpfr_init(r9377260);
        mpfr_init(r9377261);
        mpfr_init_set_str(r9377262, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r9377263);
        mpfr_init(r9377264);
        mpfr_init(r9377265);
        mpfr_init_set_str(r9377266, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r9377267);
        mpfr_init(r9377268);
        mpfr_init(r9377269);
        mpfr_init_set_str(r9377270, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9377271);
        mpfr_init(r9377272);
        mpfr_init(r9377273);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9377239, x, MPFR_RNDN);
        mpfr_mul(r9377240, r9377238, r9377239, MPFR_RNDN);
        mpfr_add(r9377241, r9377237, r9377240, MPFR_RNDN);
        ;
        mpfr_mul(r9377243, r9377239, r9377239, MPFR_RNDN);
        mpfr_mul(r9377244, r9377242, r9377243, MPFR_RNDN);
        mpfr_add(r9377245, r9377241, r9377244, MPFR_RNDN);
        ;
        mpfr_mul(r9377247, r9377243, r9377239, MPFR_RNDN);
        mpfr_mul(r9377248, r9377246, r9377247, MPFR_RNDN);
        mpfr_add(r9377249, r9377245, r9377248, MPFR_RNDN);
        ;
        mpfr_mul(r9377251, r9377247, r9377239, MPFR_RNDN);
        mpfr_mul(r9377252, r9377250, r9377251, MPFR_RNDN);
        mpfr_add(r9377253, r9377249, r9377252, MPFR_RNDN);
        ;
        mpfr_mul(r9377255, r9377251, r9377239, MPFR_RNDN);
        mpfr_mul(r9377256, r9377254, r9377255, MPFR_RNDN);
        mpfr_add(r9377257, r9377253, r9377256, MPFR_RNDN);
        ;
        mpfr_mul(r9377259, r9377255, r9377239, MPFR_RNDN);
        mpfr_mul(r9377260, r9377258, r9377259, MPFR_RNDN);
        mpfr_add(r9377261, r9377257, r9377260, MPFR_RNDN);
        ;
        mpfr_mul(r9377263, r9377259, r9377239, MPFR_RNDN);
        mpfr_mul(r9377264, r9377262, r9377263, MPFR_RNDN);
        mpfr_add(r9377265, r9377261, r9377264, MPFR_RNDN);
        ;
        mpfr_mul(r9377267, r9377263, r9377239, MPFR_RNDN);
        mpfr_mul(r9377268, r9377266, r9377267, MPFR_RNDN);
        mpfr_add(r9377269, r9377265, r9377268, MPFR_RNDN);
        ;
        mpfr_mul(r9377271, r9377267, r9377239, MPFR_RNDN);
        mpfr_mul(r9377272, r9377270, r9377271, MPFR_RNDN);
        mpfr_add(r9377273, r9377269, r9377272, MPFR_RNDN);
        return mpfr_get_d(r9377273, MPFR_RNDN);
}

