#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r64040093 = -665280.0;
        float r64040094 = x;
        float r64040095 = r64040093 * r64040094;
        float r64040096 = 2217600.0;
        float r64040097 = r64040094 * r64040094;
        float r64040098 = r64040097 * r64040094;
        float r64040099 = r64040096 * r64040098;
        float r64040100 = r64040095 + r64040099;
        float r64040101 = -1774080.0;
        float r64040102 = r64040098 * r64040094;
        float r64040103 = r64040102 * r64040094;
        float r64040104 = r64040101 * r64040103;
        float r64040105 = r64040100 + r64040104;
        float r64040106 = 506880.0;
        float r64040107 = r64040103 * r64040094;
        float r64040108 = r64040107 * r64040094;
        float r64040109 = r64040106 * r64040108;
        float r64040110 = r64040105 + r64040109;
        float r64040111 = -56320.0;
        float r64040112 = r64040108 * r64040094;
        float r64040113 = r64040112 * r64040094;
        float r64040114 = r64040111 * r64040113;
        float r64040115 = r64040110 + r64040114;
        float r64040116 = 2048.0;
        float r64040117 = r64040113 * r64040094;
        float r64040118 = r64040117 * r64040094;
        float r64040119 = r64040116 * r64040118;
        float r64040120 = r64040115 + r64040119;
        return r64040120;
}

double f_id(double x) {
        double r64040121 = -665280.0;
        double r64040122 = x;
        double r64040123 = r64040121 * r64040122;
        double r64040124 = 2217600.0;
        double r64040125 = r64040122 * r64040122;
        double r64040126 = r64040125 * r64040122;
        double r64040127 = r64040124 * r64040126;
        double r64040128 = r64040123 + r64040127;
        double r64040129 = -1774080.0;
        double r64040130 = r64040126 * r64040122;
        double r64040131 = r64040130 * r64040122;
        double r64040132 = r64040129 * r64040131;
        double r64040133 = r64040128 + r64040132;
        double r64040134 = 506880.0;
        double r64040135 = r64040131 * r64040122;
        double r64040136 = r64040135 * r64040122;
        double r64040137 = r64040134 * r64040136;
        double r64040138 = r64040133 + r64040137;
        double r64040139 = -56320.0;
        double r64040140 = r64040136 * r64040122;
        double r64040141 = r64040140 * r64040122;
        double r64040142 = r64040139 * r64040141;
        double r64040143 = r64040138 + r64040142;
        double r64040144 = 2048.0;
        double r64040145 = r64040141 * r64040122;
        double r64040146 = r64040145 * r64040122;
        double r64040147 = r64040144 * r64040146;
        double r64040148 = r64040143 + r64040147;
        return r64040148;
}


double f_of(float x) {
        float r64040149 = x;
        float r64040150 = r64040149 * r64040149;
        float r64040151 = r64040150 * r64040150;
        float r64040152 = -r64040151;
        float r64040153 = 2217600.0;
        float r64040154 = r64040153 * r64040149;
        float r64040155 = 1774080.0;
        float r64040156 = r64040155 * r64040149;
        float r64040157 = r64040156 * r64040150;
        float r64040158 = r64040154 - r64040157;
        float r64040159 = r64040152 * r64040158;
        float r64040160 = -1774080.0;
        float r64040161 = r64040149 * r64040160;
        float r64040162 = r64040150 * r64040161;
        float r64040163 = r64040154 + r64040162;
        float r64040164 = r64040159 * r64040163;
        float r64040165 = 506880.0;
        float r64040166 = r64040149 * r64040165;
        float r64040167 = r64040150 * r64040166;
        float r64040168 = r64040151 * r64040167;
        float r64040169 = -665280.0;
        float r64040170 = r64040149 * r64040169;
        float r64040171 = r64040168 + r64040170;
        float r64040172 = -56320.0;
        float r64040173 = 2048.0;
        float r64040174 = r64040150 * r64040173;
        float r64040175 = r64040172 + r64040174;
        float r64040176 = 3;
        float r64040177 = pow(r64040149, r64040176);
        float r64040178 = pow(r64040177, r64040176);
        float r64040179 = r64040175 * r64040178;
        float r64040180 = r64040171 + r64040179;
        float r64040181 = r64040180 * r64040180;
        float r64040182 = r64040164 + r64040181;
        float r64040183 = r64040166 * r64040151;
        float r64040184 = r64040154 * r64040154;
        float r64040185 = r64040162 * r64040162;
        float r64040186 = r64040184 - r64040185;
        float r64040187 = r64040154 - r64040162;
        float r64040188 = r64040186 / r64040187;
        float r64040189 = r64040183 - r64040188;
        float r64040190 = r64040189 * r64040150;
        float r64040191 = r64040179 + r64040170;
        float r64040192 = r64040190 + r64040191;
        float r64040193 = r64040182 / r64040192;
        return r64040193;
}

double f_od(double x) {
        double r64040194 = x;
        double r64040195 = r64040194 * r64040194;
        double r64040196 = r64040195 * r64040195;
        double r64040197 = -r64040196;
        double r64040198 = 2217600.0;
        double r64040199 = r64040198 * r64040194;
        double r64040200 = 1774080.0;
        double r64040201 = r64040200 * r64040194;
        double r64040202 = r64040201 * r64040195;
        double r64040203 = r64040199 - r64040202;
        double r64040204 = r64040197 * r64040203;
        double r64040205 = -1774080.0;
        double r64040206 = r64040194 * r64040205;
        double r64040207 = r64040195 * r64040206;
        double r64040208 = r64040199 + r64040207;
        double r64040209 = r64040204 * r64040208;
        double r64040210 = 506880.0;
        double r64040211 = r64040194 * r64040210;
        double r64040212 = r64040195 * r64040211;
        double r64040213 = r64040196 * r64040212;
        double r64040214 = -665280.0;
        double r64040215 = r64040194 * r64040214;
        double r64040216 = r64040213 + r64040215;
        double r64040217 = -56320.0;
        double r64040218 = 2048.0;
        double r64040219 = r64040195 * r64040218;
        double r64040220 = r64040217 + r64040219;
        double r64040221 = 3;
        double r64040222 = pow(r64040194, r64040221);
        double r64040223 = pow(r64040222, r64040221);
        double r64040224 = r64040220 * r64040223;
        double r64040225 = r64040216 + r64040224;
        double r64040226 = r64040225 * r64040225;
        double r64040227 = r64040209 + r64040226;
        double r64040228 = r64040211 * r64040196;
        double r64040229 = r64040199 * r64040199;
        double r64040230 = r64040207 * r64040207;
        double r64040231 = r64040229 - r64040230;
        double r64040232 = r64040199 - r64040207;
        double r64040233 = r64040231 / r64040232;
        double r64040234 = r64040228 - r64040233;
        double r64040235 = r64040234 * r64040195;
        double r64040236 = r64040224 + r64040215;
        double r64040237 = r64040235 + r64040236;
        double r64040238 = r64040227 / r64040237;
        return r64040238;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64040239, r64040240, r64040241, r64040242, r64040243, r64040244, r64040245, r64040246, r64040247, r64040248, r64040249, r64040250, r64040251, r64040252, r64040253, r64040254, r64040255, r64040256, r64040257, r64040258, r64040259, r64040260, r64040261, r64040262, r64040263, r64040264, r64040265, r64040266;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64040239, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r64040240);
        mpfr_init(r64040241);
        mpfr_init_set_str(r64040242, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r64040243);
        mpfr_init(r64040244);
        mpfr_init(r64040245);
        mpfr_init(r64040246);
        mpfr_init_set_str(r64040247, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r64040248);
        mpfr_init(r64040249);
        mpfr_init(r64040250);
        mpfr_init(r64040251);
        mpfr_init_set_str(r64040252, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r64040253);
        mpfr_init(r64040254);
        mpfr_init(r64040255);
        mpfr_init(r64040256);
        mpfr_init_set_str(r64040257, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r64040258);
        mpfr_init(r64040259);
        mpfr_init(r64040260);
        mpfr_init(r64040261);
        mpfr_init_set_str(r64040262, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r64040263);
        mpfr_init(r64040264);
        mpfr_init(r64040265);
        mpfr_init(r64040266);
}

double f_im(double x) {
        ;
        mpfr_set_d(r64040240, x, MPFR_RNDN);
        mpfr_mul(r64040241, r64040239, r64040240, MPFR_RNDN);
        ;
        mpfr_mul(r64040243, r64040240, r64040240, MPFR_RNDN);
        mpfr_mul(r64040244, r64040243, r64040240, MPFR_RNDN);
        mpfr_mul(r64040245, r64040242, r64040244, MPFR_RNDN);
        mpfr_add(r64040246, r64040241, r64040245, MPFR_RNDN);
        ;
        mpfr_mul(r64040248, r64040244, r64040240, MPFR_RNDN);
        mpfr_mul(r64040249, r64040248, r64040240, MPFR_RNDN);
        mpfr_mul(r64040250, r64040247, r64040249, MPFR_RNDN);
        mpfr_add(r64040251, r64040246, r64040250, MPFR_RNDN);
        ;
        mpfr_mul(r64040253, r64040249, r64040240, MPFR_RNDN);
        mpfr_mul(r64040254, r64040253, r64040240, MPFR_RNDN);
        mpfr_mul(r64040255, r64040252, r64040254, MPFR_RNDN);
        mpfr_add(r64040256, r64040251, r64040255, MPFR_RNDN);
        ;
        mpfr_mul(r64040258, r64040254, r64040240, MPFR_RNDN);
        mpfr_mul(r64040259, r64040258, r64040240, MPFR_RNDN);
        mpfr_mul(r64040260, r64040257, r64040259, MPFR_RNDN);
        mpfr_add(r64040261, r64040256, r64040260, MPFR_RNDN);
        ;
        mpfr_mul(r64040263, r64040259, r64040240, MPFR_RNDN);
        mpfr_mul(r64040264, r64040263, r64040240, MPFR_RNDN);
        mpfr_mul(r64040265, r64040262, r64040264, MPFR_RNDN);
        mpfr_add(r64040266, r64040261, r64040265, MPFR_RNDN);
        return mpfr_get_d(r64040266, MPFR_RNDN);
}

static mpfr_t r64040267, r64040268, r64040269, r64040270, r64040271, r64040272, r64040273, r64040274, r64040275, r64040276, r64040277, r64040278, r64040279, r64040280, r64040281, r64040282, r64040283, r64040284, r64040285, r64040286, r64040287, r64040288, r64040289, r64040290, r64040291, r64040292, r64040293, r64040294, r64040295, r64040296, r64040297, r64040298, r64040299, r64040300, r64040301, r64040302, r64040303, r64040304, r64040305, r64040306, r64040307, r64040308, r64040309, r64040310, r64040311;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r64040267);
        mpfr_init(r64040268);
        mpfr_init(r64040269);
        mpfr_init(r64040270);
        mpfr_init_set_str(r64040271, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r64040272);
        mpfr_init_set_str(r64040273, "1774080.0", 10, MPFR_RNDN);
        mpfr_init(r64040274);
        mpfr_init(r64040275);
        mpfr_init(r64040276);
        mpfr_init(r64040277);
        mpfr_init_set_str(r64040278, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r64040279);
        mpfr_init(r64040280);
        mpfr_init(r64040281);
        mpfr_init(r64040282);
        mpfr_init_set_str(r64040283, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r64040284);
        mpfr_init(r64040285);
        mpfr_init(r64040286);
        mpfr_init_set_str(r64040287, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r64040288);
        mpfr_init(r64040289);
        mpfr_init_set_str(r64040290, "-56320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r64040291, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r64040292);
        mpfr_init(r64040293);
        mpfr_init_set_str(r64040294, "3", 10, MPFR_RNDN);
        mpfr_init(r64040295);
        mpfr_init(r64040296);
        mpfr_init(r64040297);
        mpfr_init(r64040298);
        mpfr_init(r64040299);
        mpfr_init(r64040300);
        mpfr_init(r64040301);
        mpfr_init(r64040302);
        mpfr_init(r64040303);
        mpfr_init(r64040304);
        mpfr_init(r64040305);
        mpfr_init(r64040306);
        mpfr_init(r64040307);
        mpfr_init(r64040308);
        mpfr_init(r64040309);
        mpfr_init(r64040310);
        mpfr_init(r64040311);
}

double f_fm(double x) {
        mpfr_set_d(r64040267, x, MPFR_RNDN);
        mpfr_mul(r64040268, r64040267, r64040267, MPFR_RNDN);
        mpfr_mul(r64040269, r64040268, r64040268, MPFR_RNDN);
        mpfr_neg(r64040270, r64040269, MPFR_RNDN);
        ;
        mpfr_mul(r64040272, r64040271, r64040267, MPFR_RNDN);
        ;
        mpfr_mul(r64040274, r64040273, r64040267, MPFR_RNDN);
        mpfr_mul(r64040275, r64040274, r64040268, MPFR_RNDN);
        mpfr_sub(r64040276, r64040272, r64040275, MPFR_RNDN);
        mpfr_mul(r64040277, r64040270, r64040276, MPFR_RNDN);
        ;
        mpfr_mul(r64040279, r64040267, r64040278, MPFR_RNDN);
        mpfr_mul(r64040280, r64040268, r64040279, MPFR_RNDN);
        mpfr_add(r64040281, r64040272, r64040280, MPFR_RNDN);
        mpfr_mul(r64040282, r64040277, r64040281, MPFR_RNDN);
        ;
        mpfr_mul(r64040284, r64040267, r64040283, MPFR_RNDN);
        mpfr_mul(r64040285, r64040268, r64040284, MPFR_RNDN);
        mpfr_mul(r64040286, r64040269, r64040285, MPFR_RNDN);
        ;
        mpfr_mul(r64040288, r64040267, r64040287, MPFR_RNDN);
        mpfr_add(r64040289, r64040286, r64040288, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r64040292, r64040268, r64040291, MPFR_RNDN);
        mpfr_add(r64040293, r64040290, r64040292, MPFR_RNDN);
        ;
        mpfr_pow(r64040295, r64040267, r64040294, MPFR_RNDN);
        mpfr_pow(r64040296, r64040295, r64040294, MPFR_RNDN);
        mpfr_mul(r64040297, r64040293, r64040296, MPFR_RNDN);
        mpfr_add(r64040298, r64040289, r64040297, MPFR_RNDN);
        mpfr_mul(r64040299, r64040298, r64040298, MPFR_RNDN);
        mpfr_add(r64040300, r64040282, r64040299, MPFR_RNDN);
        mpfr_mul(r64040301, r64040284, r64040269, MPFR_RNDN);
        mpfr_mul(r64040302, r64040272, r64040272, MPFR_RNDN);
        mpfr_mul(r64040303, r64040280, r64040280, MPFR_RNDN);
        mpfr_sub(r64040304, r64040302, r64040303, MPFR_RNDN);
        mpfr_sub(r64040305, r64040272, r64040280, MPFR_RNDN);
        mpfr_div(r64040306, r64040304, r64040305, MPFR_RNDN);
        mpfr_sub(r64040307, r64040301, r64040306, MPFR_RNDN);
        mpfr_mul(r64040308, r64040307, r64040268, MPFR_RNDN);
        mpfr_add(r64040309, r64040297, r64040288, MPFR_RNDN);
        mpfr_add(r64040310, r64040308, r64040309, MPFR_RNDN);
        mpfr_div(r64040311, r64040300, r64040310, MPFR_RNDN);
        return mpfr_get_d(r64040311, MPFR_RNDN);
}

static mpfr_t r64040312, r64040313, r64040314, r64040315, r64040316, r64040317, r64040318, r64040319, r64040320, r64040321, r64040322, r64040323, r64040324, r64040325, r64040326, r64040327, r64040328, r64040329, r64040330, r64040331, r64040332, r64040333, r64040334, r64040335, r64040336, r64040337, r64040338, r64040339, r64040340, r64040341, r64040342, r64040343, r64040344, r64040345, r64040346, r64040347, r64040348, r64040349, r64040350, r64040351, r64040352, r64040353, r64040354, r64040355, r64040356;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r64040312);
        mpfr_init(r64040313);
        mpfr_init(r64040314);
        mpfr_init(r64040315);
        mpfr_init_set_str(r64040316, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r64040317);
        mpfr_init_set_str(r64040318, "1774080.0", 10, MPFR_RNDN);
        mpfr_init(r64040319);
        mpfr_init(r64040320);
        mpfr_init(r64040321);
        mpfr_init(r64040322);
        mpfr_init_set_str(r64040323, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r64040324);
        mpfr_init(r64040325);
        mpfr_init(r64040326);
        mpfr_init(r64040327);
        mpfr_init_set_str(r64040328, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r64040329);
        mpfr_init(r64040330);
        mpfr_init(r64040331);
        mpfr_init_set_str(r64040332, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r64040333);
        mpfr_init(r64040334);
        mpfr_init_set_str(r64040335, "-56320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r64040336, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r64040337);
        mpfr_init(r64040338);
        mpfr_init_set_str(r64040339, "3", 10, MPFR_RNDN);
        mpfr_init(r64040340);
        mpfr_init(r64040341);
        mpfr_init(r64040342);
        mpfr_init(r64040343);
        mpfr_init(r64040344);
        mpfr_init(r64040345);
        mpfr_init(r64040346);
        mpfr_init(r64040347);
        mpfr_init(r64040348);
        mpfr_init(r64040349);
        mpfr_init(r64040350);
        mpfr_init(r64040351);
        mpfr_init(r64040352);
        mpfr_init(r64040353);
        mpfr_init(r64040354);
        mpfr_init(r64040355);
        mpfr_init(r64040356);
}

double f_dm(double x) {
        mpfr_set_d(r64040312, x, MPFR_RNDN);
        mpfr_mul(r64040313, r64040312, r64040312, MPFR_RNDN);
        mpfr_mul(r64040314, r64040313, r64040313, MPFR_RNDN);
        mpfr_neg(r64040315, r64040314, MPFR_RNDN);
        ;
        mpfr_mul(r64040317, r64040316, r64040312, MPFR_RNDN);
        ;
        mpfr_mul(r64040319, r64040318, r64040312, MPFR_RNDN);
        mpfr_mul(r64040320, r64040319, r64040313, MPFR_RNDN);
        mpfr_sub(r64040321, r64040317, r64040320, MPFR_RNDN);
        mpfr_mul(r64040322, r64040315, r64040321, MPFR_RNDN);
        ;
        mpfr_mul(r64040324, r64040312, r64040323, MPFR_RNDN);
        mpfr_mul(r64040325, r64040313, r64040324, MPFR_RNDN);
        mpfr_add(r64040326, r64040317, r64040325, MPFR_RNDN);
        mpfr_mul(r64040327, r64040322, r64040326, MPFR_RNDN);
        ;
        mpfr_mul(r64040329, r64040312, r64040328, MPFR_RNDN);
        mpfr_mul(r64040330, r64040313, r64040329, MPFR_RNDN);
        mpfr_mul(r64040331, r64040314, r64040330, MPFR_RNDN);
        ;
        mpfr_mul(r64040333, r64040312, r64040332, MPFR_RNDN);
        mpfr_add(r64040334, r64040331, r64040333, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r64040337, r64040313, r64040336, MPFR_RNDN);
        mpfr_add(r64040338, r64040335, r64040337, MPFR_RNDN);
        ;
        mpfr_pow(r64040340, r64040312, r64040339, MPFR_RNDN);
        mpfr_pow(r64040341, r64040340, r64040339, MPFR_RNDN);
        mpfr_mul(r64040342, r64040338, r64040341, MPFR_RNDN);
        mpfr_add(r64040343, r64040334, r64040342, MPFR_RNDN);
        mpfr_mul(r64040344, r64040343, r64040343, MPFR_RNDN);
        mpfr_add(r64040345, r64040327, r64040344, MPFR_RNDN);
        mpfr_mul(r64040346, r64040329, r64040314, MPFR_RNDN);
        mpfr_mul(r64040347, r64040317, r64040317, MPFR_RNDN);
        mpfr_mul(r64040348, r64040325, r64040325, MPFR_RNDN);
        mpfr_sub(r64040349, r64040347, r64040348, MPFR_RNDN);
        mpfr_sub(r64040350, r64040317, r64040325, MPFR_RNDN);
        mpfr_div(r64040351, r64040349, r64040350, MPFR_RNDN);
        mpfr_sub(r64040352, r64040346, r64040351, MPFR_RNDN);
        mpfr_mul(r64040353, r64040352, r64040313, MPFR_RNDN);
        mpfr_add(r64040354, r64040342, r64040333, MPFR_RNDN);
        mpfr_add(r64040355, r64040353, r64040354, MPFR_RNDN);
        mpfr_div(r64040356, r64040345, r64040355, MPFR_RNDN);
        return mpfr_get_d(r64040356, MPFR_RNDN);
}

