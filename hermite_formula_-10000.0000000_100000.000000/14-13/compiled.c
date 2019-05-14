#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r4212104 = 17297280.0;
        float r4212105 = x;
        float r4212106 = r4212104 * r4212105;
        float r4212107 = -69189120.0;
        float r4212108 = r4212105 * r4212105;
        float r4212109 = r4212108 * r4212105;
        float r4212110 = r4212107 * r4212109;
        float r4212111 = r4212106 + r4212110;
        float r4212112 = 69189120.0;
        float r4212113 = r4212109 * r4212105;
        float r4212114 = r4212113 * r4212105;
        float r4212115 = r4212112 * r4212114;
        float r4212116 = r4212111 + r4212115;
        float r4212117 = -26357760.0;
        float r4212118 = r4212114 * r4212105;
        float r4212119 = r4212118 * r4212105;
        float r4212120 = r4212117 * r4212119;
        float r4212121 = r4212116 + r4212120;
        float r4212122 = 4392960.0;
        float r4212123 = r4212119 * r4212105;
        float r4212124 = r4212123 * r4212105;
        float r4212125 = r4212122 * r4212124;
        float r4212126 = r4212121 + r4212125;
        float r4212127 = -319488.0;
        float r4212128 = r4212124 * r4212105;
        float r4212129 = r4212128 * r4212105;
        float r4212130 = r4212127 * r4212129;
        float r4212131 = r4212126 + r4212130;
        float r4212132 = 8192.0;
        float r4212133 = r4212129 * r4212105;
        float r4212134 = r4212133 * r4212105;
        float r4212135 = r4212132 * r4212134;
        float r4212136 = r4212131 + r4212135;
        return r4212136;
}

double f_id(double x) {
        double r4212137 = 17297280.0;
        double r4212138 = x;
        double r4212139 = r4212137 * r4212138;
        double r4212140 = -69189120.0;
        double r4212141 = r4212138 * r4212138;
        double r4212142 = r4212141 * r4212138;
        double r4212143 = r4212140 * r4212142;
        double r4212144 = r4212139 + r4212143;
        double r4212145 = 69189120.0;
        double r4212146 = r4212142 * r4212138;
        double r4212147 = r4212146 * r4212138;
        double r4212148 = r4212145 * r4212147;
        double r4212149 = r4212144 + r4212148;
        double r4212150 = -26357760.0;
        double r4212151 = r4212147 * r4212138;
        double r4212152 = r4212151 * r4212138;
        double r4212153 = r4212150 * r4212152;
        double r4212154 = r4212149 + r4212153;
        double r4212155 = 4392960.0;
        double r4212156 = r4212152 * r4212138;
        double r4212157 = r4212156 * r4212138;
        double r4212158 = r4212155 * r4212157;
        double r4212159 = r4212154 + r4212158;
        double r4212160 = -319488.0;
        double r4212161 = r4212157 * r4212138;
        double r4212162 = r4212161 * r4212138;
        double r4212163 = r4212160 * r4212162;
        double r4212164 = r4212159 + r4212163;
        double r4212165 = 8192.0;
        double r4212166 = r4212162 * r4212138;
        double r4212167 = r4212166 * r4212138;
        double r4212168 = r4212165 * r4212167;
        double r4212169 = r4212164 + r4212168;
        return r4212169;
}


double f_of(float x) {
        float r4212170 = x;
        float r4212171 = r4212170 * r4212170;
        float r4212172 = 3;
        float r4212173 = pow(r4212170, r4212172);
        float r4212174 = r4212172 + r4212172;
        float r4212175 = pow(r4212170, r4212174);
        float r4212176 = r4212173 * r4212175;
        float r4212177 = r4212171 * r4212176;
        float r4212178 = 8192.0;
        float r4212179 = r4212171 * r4212178;
        float r4212180 = -319488.0;
        float r4212181 = r4212179 + r4212180;
        float r4212182 = r4212177 * r4212181;
        float r4212183 = 69189120.0;
        float r4212184 = r4212170 * r4212183;
        float r4212185 = r4212184 * r4212171;
        float r4212186 = r4212171 * r4212185;
        float r4212187 = 17297280.0;
        float r4212188 = r4212187 * r4212170;
        float r4212189 = -69189120.0;
        float r4212190 = r4212189 * r4212170;
        float r4212191 = r4212171 * r4212190;
        float r4212192 = r4212188 + r4212191;
        float r4212193 = r4212186 + r4212192;
        float r4212194 = r4212173 * r4212173;
        float r4212195 = r4212194 * r4212170;
        float r4212196 = -26357760.0;
        float r4212197 = 4392960.0;
        float r4212198 = r4212197 * r4212170;
        float r4212199 = r4212170 * r4212198;
        float r4212200 = r4212196 + r4212199;
        float r4212201 = r4212195 * r4212200;
        float r4212202 = r4212193 + r4212201;
        float r4212203 = r4212182 + r4212202;
        return r4212203;
}

double f_od(double x) {
        double r4212204 = x;
        double r4212205 = r4212204 * r4212204;
        double r4212206 = 3;
        double r4212207 = pow(r4212204, r4212206);
        double r4212208 = r4212206 + r4212206;
        double r4212209 = pow(r4212204, r4212208);
        double r4212210 = r4212207 * r4212209;
        double r4212211 = r4212205 * r4212210;
        double r4212212 = 8192.0;
        double r4212213 = r4212205 * r4212212;
        double r4212214 = -319488.0;
        double r4212215 = r4212213 + r4212214;
        double r4212216 = r4212211 * r4212215;
        double r4212217 = 69189120.0;
        double r4212218 = r4212204 * r4212217;
        double r4212219 = r4212218 * r4212205;
        double r4212220 = r4212205 * r4212219;
        double r4212221 = 17297280.0;
        double r4212222 = r4212221 * r4212204;
        double r4212223 = -69189120.0;
        double r4212224 = r4212223 * r4212204;
        double r4212225 = r4212205 * r4212224;
        double r4212226 = r4212222 + r4212225;
        double r4212227 = r4212220 + r4212226;
        double r4212228 = r4212207 * r4212207;
        double r4212229 = r4212228 * r4212204;
        double r4212230 = -26357760.0;
        double r4212231 = 4392960.0;
        double r4212232 = r4212231 * r4212204;
        double r4212233 = r4212204 * r4212232;
        double r4212234 = r4212230 + r4212233;
        double r4212235 = r4212229 * r4212234;
        double r4212236 = r4212227 + r4212235;
        double r4212237 = r4212216 + r4212236;
        return r4212237;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4212238, r4212239, r4212240, r4212241, r4212242, r4212243, r4212244, r4212245, r4212246, r4212247, r4212248, r4212249, r4212250, r4212251, r4212252, r4212253, r4212254, r4212255, r4212256, r4212257, r4212258, r4212259, r4212260, r4212261, r4212262, r4212263, r4212264, r4212265, r4212266, r4212267, r4212268, r4212269, r4212270;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4212238, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r4212239);
        mpfr_init(r4212240);
        mpfr_init_set_str(r4212241, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r4212242);
        mpfr_init(r4212243);
        mpfr_init(r4212244);
        mpfr_init(r4212245);
        mpfr_init_set_str(r4212246, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r4212247);
        mpfr_init(r4212248);
        mpfr_init(r4212249);
        mpfr_init(r4212250);
        mpfr_init_set_str(r4212251, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r4212252);
        mpfr_init(r4212253);
        mpfr_init(r4212254);
        mpfr_init(r4212255);
        mpfr_init_set_str(r4212256, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r4212257);
        mpfr_init(r4212258);
        mpfr_init(r4212259);
        mpfr_init(r4212260);
        mpfr_init_set_str(r4212261, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r4212262);
        mpfr_init(r4212263);
        mpfr_init(r4212264);
        mpfr_init(r4212265);
        mpfr_init_set_str(r4212266, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r4212267);
        mpfr_init(r4212268);
        mpfr_init(r4212269);
        mpfr_init(r4212270);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4212239, x, MPFR_RNDN);
        mpfr_mul(r4212240, r4212238, r4212239, MPFR_RNDN);
        ;
        mpfr_mul(r4212242, r4212239, r4212239, MPFR_RNDN);
        mpfr_mul(r4212243, r4212242, r4212239, MPFR_RNDN);
        mpfr_mul(r4212244, r4212241, r4212243, MPFR_RNDN);
        mpfr_add(r4212245, r4212240, r4212244, MPFR_RNDN);
        ;
        mpfr_mul(r4212247, r4212243, r4212239, MPFR_RNDN);
        mpfr_mul(r4212248, r4212247, r4212239, MPFR_RNDN);
        mpfr_mul(r4212249, r4212246, r4212248, MPFR_RNDN);
        mpfr_add(r4212250, r4212245, r4212249, MPFR_RNDN);
        ;
        mpfr_mul(r4212252, r4212248, r4212239, MPFR_RNDN);
        mpfr_mul(r4212253, r4212252, r4212239, MPFR_RNDN);
        mpfr_mul(r4212254, r4212251, r4212253, MPFR_RNDN);
        mpfr_add(r4212255, r4212250, r4212254, MPFR_RNDN);
        ;
        mpfr_mul(r4212257, r4212253, r4212239, MPFR_RNDN);
        mpfr_mul(r4212258, r4212257, r4212239, MPFR_RNDN);
        mpfr_mul(r4212259, r4212256, r4212258, MPFR_RNDN);
        mpfr_add(r4212260, r4212255, r4212259, MPFR_RNDN);
        ;
        mpfr_mul(r4212262, r4212258, r4212239, MPFR_RNDN);
        mpfr_mul(r4212263, r4212262, r4212239, MPFR_RNDN);
        mpfr_mul(r4212264, r4212261, r4212263, MPFR_RNDN);
        mpfr_add(r4212265, r4212260, r4212264, MPFR_RNDN);
        ;
        mpfr_mul(r4212267, r4212263, r4212239, MPFR_RNDN);
        mpfr_mul(r4212268, r4212267, r4212239, MPFR_RNDN);
        mpfr_mul(r4212269, r4212266, r4212268, MPFR_RNDN);
        mpfr_add(r4212270, r4212265, r4212269, MPFR_RNDN);
        return mpfr_get_d(r4212270, MPFR_RNDN);
}

static mpfr_t r4212271, r4212272, r4212273, r4212274, r4212275, r4212276, r4212277, r4212278, r4212279, r4212280, r4212281, r4212282, r4212283, r4212284, r4212285, r4212286, r4212287, r4212288, r4212289, r4212290, r4212291, r4212292, r4212293, r4212294, r4212295, r4212296, r4212297, r4212298, r4212299, r4212300, r4212301, r4212302, r4212303, r4212304;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4212271);
        mpfr_init(r4212272);
        mpfr_init_set_str(r4212273, "3", 10, MPFR_RNDN);
        mpfr_init(r4212274);
        mpfr_init(r4212275);
        mpfr_init(r4212276);
        mpfr_init(r4212277);
        mpfr_init(r4212278);
        mpfr_init_set_str(r4212279, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r4212280);
        mpfr_init_set_str(r4212281, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r4212282);
        mpfr_init(r4212283);
        mpfr_init_set_str(r4212284, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r4212285);
        mpfr_init(r4212286);
        mpfr_init(r4212287);
        mpfr_init_set_str(r4212288, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r4212289);
        mpfr_init_set_str(r4212290, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r4212291);
        mpfr_init(r4212292);
        mpfr_init(r4212293);
        mpfr_init(r4212294);
        mpfr_init(r4212295);
        mpfr_init(r4212296);
        mpfr_init_set_str(r4212297, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4212298, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r4212299);
        mpfr_init(r4212300);
        mpfr_init(r4212301);
        mpfr_init(r4212302);
        mpfr_init(r4212303);
        mpfr_init(r4212304);
}

double f_fm(double x) {
        mpfr_set_d(r4212271, x, MPFR_RNDN);
        mpfr_mul(r4212272, r4212271, r4212271, MPFR_RNDN);
        ;
        mpfr_pow(r4212274, r4212271, r4212273, MPFR_RNDN);
        mpfr_add(r4212275, r4212273, r4212273, MPFR_RNDN);
        mpfr_pow(r4212276, r4212271, r4212275, MPFR_RNDN);
        mpfr_mul(r4212277, r4212274, r4212276, MPFR_RNDN);
        mpfr_mul(r4212278, r4212272, r4212277, MPFR_RNDN);
        ;
        mpfr_mul(r4212280, r4212272, r4212279, MPFR_RNDN);
        ;
        mpfr_add(r4212282, r4212280, r4212281, MPFR_RNDN);
        mpfr_mul(r4212283, r4212278, r4212282, MPFR_RNDN);
        ;
        mpfr_mul(r4212285, r4212271, r4212284, MPFR_RNDN);
        mpfr_mul(r4212286, r4212285, r4212272, MPFR_RNDN);
        mpfr_mul(r4212287, r4212272, r4212286, MPFR_RNDN);
        ;
        mpfr_mul(r4212289, r4212288, r4212271, MPFR_RNDN);
        ;
        mpfr_mul(r4212291, r4212290, r4212271, MPFR_RNDN);
        mpfr_mul(r4212292, r4212272, r4212291, MPFR_RNDN);
        mpfr_add(r4212293, r4212289, r4212292, MPFR_RNDN);
        mpfr_add(r4212294, r4212287, r4212293, MPFR_RNDN);
        mpfr_mul(r4212295, r4212274, r4212274, MPFR_RNDN);
        mpfr_mul(r4212296, r4212295, r4212271, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4212299, r4212298, r4212271, MPFR_RNDN);
        mpfr_mul(r4212300, r4212271, r4212299, MPFR_RNDN);
        mpfr_add(r4212301, r4212297, r4212300, MPFR_RNDN);
        mpfr_mul(r4212302, r4212296, r4212301, MPFR_RNDN);
        mpfr_add(r4212303, r4212294, r4212302, MPFR_RNDN);
        mpfr_add(r4212304, r4212283, r4212303, MPFR_RNDN);
        return mpfr_get_d(r4212304, MPFR_RNDN);
}

static mpfr_t r4212305, r4212306, r4212307, r4212308, r4212309, r4212310, r4212311, r4212312, r4212313, r4212314, r4212315, r4212316, r4212317, r4212318, r4212319, r4212320, r4212321, r4212322, r4212323, r4212324, r4212325, r4212326, r4212327, r4212328, r4212329, r4212330, r4212331, r4212332, r4212333, r4212334, r4212335, r4212336, r4212337, r4212338;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4212305);
        mpfr_init(r4212306);
        mpfr_init_set_str(r4212307, "3", 10, MPFR_RNDN);
        mpfr_init(r4212308);
        mpfr_init(r4212309);
        mpfr_init(r4212310);
        mpfr_init(r4212311);
        mpfr_init(r4212312);
        mpfr_init_set_str(r4212313, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r4212314);
        mpfr_init_set_str(r4212315, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r4212316);
        mpfr_init(r4212317);
        mpfr_init_set_str(r4212318, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r4212319);
        mpfr_init(r4212320);
        mpfr_init(r4212321);
        mpfr_init_set_str(r4212322, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r4212323);
        mpfr_init_set_str(r4212324, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r4212325);
        mpfr_init(r4212326);
        mpfr_init(r4212327);
        mpfr_init(r4212328);
        mpfr_init(r4212329);
        mpfr_init(r4212330);
        mpfr_init_set_str(r4212331, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4212332, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r4212333);
        mpfr_init(r4212334);
        mpfr_init(r4212335);
        mpfr_init(r4212336);
        mpfr_init(r4212337);
        mpfr_init(r4212338);
}

double f_dm(double x) {
        mpfr_set_d(r4212305, x, MPFR_RNDN);
        mpfr_mul(r4212306, r4212305, r4212305, MPFR_RNDN);
        ;
        mpfr_pow(r4212308, r4212305, r4212307, MPFR_RNDN);
        mpfr_add(r4212309, r4212307, r4212307, MPFR_RNDN);
        mpfr_pow(r4212310, r4212305, r4212309, MPFR_RNDN);
        mpfr_mul(r4212311, r4212308, r4212310, MPFR_RNDN);
        mpfr_mul(r4212312, r4212306, r4212311, MPFR_RNDN);
        ;
        mpfr_mul(r4212314, r4212306, r4212313, MPFR_RNDN);
        ;
        mpfr_add(r4212316, r4212314, r4212315, MPFR_RNDN);
        mpfr_mul(r4212317, r4212312, r4212316, MPFR_RNDN);
        ;
        mpfr_mul(r4212319, r4212305, r4212318, MPFR_RNDN);
        mpfr_mul(r4212320, r4212319, r4212306, MPFR_RNDN);
        mpfr_mul(r4212321, r4212306, r4212320, MPFR_RNDN);
        ;
        mpfr_mul(r4212323, r4212322, r4212305, MPFR_RNDN);
        ;
        mpfr_mul(r4212325, r4212324, r4212305, MPFR_RNDN);
        mpfr_mul(r4212326, r4212306, r4212325, MPFR_RNDN);
        mpfr_add(r4212327, r4212323, r4212326, MPFR_RNDN);
        mpfr_add(r4212328, r4212321, r4212327, MPFR_RNDN);
        mpfr_mul(r4212329, r4212308, r4212308, MPFR_RNDN);
        mpfr_mul(r4212330, r4212329, r4212305, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4212333, r4212332, r4212305, MPFR_RNDN);
        mpfr_mul(r4212334, r4212305, r4212333, MPFR_RNDN);
        mpfr_add(r4212335, r4212331, r4212334, MPFR_RNDN);
        mpfr_mul(r4212336, r4212330, r4212335, MPFR_RNDN);
        mpfr_add(r4212337, r4212328, r4212336, MPFR_RNDN);
        mpfr_add(r4212338, r4212317, r4212337, MPFR_RNDN);
        return mpfr_get_d(r4212338, MPFR_RNDN);
}

