#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r11591123 = 1.0;
        float r11591124 = -10.0;
        float r11591125 = x;
        float r11591126 = r11591124 * r11591125;
        float r11591127 = r11591123 + r11591126;
        float r11591128 = 22.5;
        float r11591129 = r11591125 * r11591125;
        float r11591130 = r11591128 * r11591129;
        float r11591131 = r11591127 + r11591130;
        float r11591132 = -20.0;
        float r11591133 = r11591129 * r11591125;
        float r11591134 = r11591132 * r11591133;
        float r11591135 = r11591131 + r11591134;
        float r11591136 = 8.75;
        float r11591137 = r11591133 * r11591125;
        float r11591138 = r11591136 * r11591137;
        float r11591139 = r11591135 + r11591138;
        float r11591140 = -2.1;
        float r11591141 = r11591137 * r11591125;
        float r11591142 = r11591140 * r11591141;
        float r11591143 = r11591139 + r11591142;
        float r11591144 = 0.291667;
        float r11591145 = r11591141 * r11591125;
        float r11591146 = r11591144 * r11591145;
        float r11591147 = r11591143 + r11591146;
        float r11591148 = -0.02381;
        float r11591149 = r11591145 * r11591125;
        float r11591150 = r11591148 * r11591149;
        float r11591151 = r11591147 + r11591150;
        float r11591152 = 0.001116;
        float r11591153 = r11591149 * r11591125;
        float r11591154 = r11591152 * r11591153;
        float r11591155 = r11591151 + r11591154;
        float r11591156 = -2.8e-05;
        float r11591157 = r11591153 * r11591125;
        float r11591158 = r11591156 * r11591157;
        float r11591159 = r11591155 + r11591158;
        return r11591159;
}

double f_id(double x) {
        double r11591160 = 1.0;
        double r11591161 = -10.0;
        double r11591162 = x;
        double r11591163 = r11591161 * r11591162;
        double r11591164 = r11591160 + r11591163;
        double r11591165 = 22.5;
        double r11591166 = r11591162 * r11591162;
        double r11591167 = r11591165 * r11591166;
        double r11591168 = r11591164 + r11591167;
        double r11591169 = -20.0;
        double r11591170 = r11591166 * r11591162;
        double r11591171 = r11591169 * r11591170;
        double r11591172 = r11591168 + r11591171;
        double r11591173 = 8.75;
        double r11591174 = r11591170 * r11591162;
        double r11591175 = r11591173 * r11591174;
        double r11591176 = r11591172 + r11591175;
        double r11591177 = -2.1;
        double r11591178 = r11591174 * r11591162;
        double r11591179 = r11591177 * r11591178;
        double r11591180 = r11591176 + r11591179;
        double r11591181 = 0.291667;
        double r11591182 = r11591178 * r11591162;
        double r11591183 = r11591181 * r11591182;
        double r11591184 = r11591180 + r11591183;
        double r11591185 = -0.02381;
        double r11591186 = r11591182 * r11591162;
        double r11591187 = r11591185 * r11591186;
        double r11591188 = r11591184 + r11591187;
        double r11591189 = 0.001116;
        double r11591190 = r11591186 * r11591162;
        double r11591191 = r11591189 * r11591190;
        double r11591192 = r11591188 + r11591191;
        double r11591193 = -2.8e-05;
        double r11591194 = r11591190 * r11591162;
        double r11591195 = r11591193 * r11591194;
        double r11591196 = r11591192 + r11591195;
        return r11591196;
}


double f_of(float x) {
        float r11591197 = x;
        float r11591198 = r11591197 * r11591197;
        float r11591199 = 22.5;
        float r11591200 = r11591198 * r11591199;
        float r11591201 = 20.0;
        float r11591202 = -r11591201;
        float r11591203 = 3;
        float r11591204 = pow(r11591197, r11591203);
        float r11591205 = r11591202 * r11591204;
        float r11591206 = r11591200 + r11591205;
        float r11591207 = -10.0;
        float r11591208 = r11591207 * r11591197;
        float r11591209 = r11591206 + r11591208;
        float r11591210 = 1.0;
        float r11591211 = 1;
        float r11591212 = r11591203 + r11591211;
        float r11591213 = pow(r11591198, r11591212);
        float r11591214 = -2.8e-05;
        float r11591215 = r11591197 * r11591214;
        float r11591216 = 0.001116;
        float r11591217 = r11591215 + r11591216;
        float r11591218 = r11591213 * r11591217;
        float r11591219 = r11591210 + r11591218;
        float r11591220 = r11591209 + r11591219;
        float r11591221 = r11591198 * r11591198;
        float r11591222 = 0.291667;
        float r11591223 = r11591197 * r11591222;
        float r11591224 = r11591223 * r11591197;
        float r11591225 = 8.75;
        float r11591226 = -2.1;
        float r11591227 = r11591197 * r11591226;
        float r11591228 = r11591225 + r11591227;
        float r11591229 = r11591224 + r11591228;
        float r11591230 = -0.02381;
        float r11591231 = r11591230 * r11591197;
        float r11591232 = r11591198 * r11591231;
        float r11591233 = r11591229 + r11591232;
        float r11591234 = r11591221 * r11591233;
        float r11591235 = r11591220 + r11591234;
        return r11591235;
}

double f_od(double x) {
        double r11591236 = x;
        double r11591237 = r11591236 * r11591236;
        double r11591238 = 22.5;
        double r11591239 = r11591237 * r11591238;
        double r11591240 = 20.0;
        double r11591241 = -r11591240;
        double r11591242 = 3;
        double r11591243 = pow(r11591236, r11591242);
        double r11591244 = r11591241 * r11591243;
        double r11591245 = r11591239 + r11591244;
        double r11591246 = -10.0;
        double r11591247 = r11591246 * r11591236;
        double r11591248 = r11591245 + r11591247;
        double r11591249 = 1.0;
        double r11591250 = 1;
        double r11591251 = r11591242 + r11591250;
        double r11591252 = pow(r11591237, r11591251);
        double r11591253 = -2.8e-05;
        double r11591254 = r11591236 * r11591253;
        double r11591255 = 0.001116;
        double r11591256 = r11591254 + r11591255;
        double r11591257 = r11591252 * r11591256;
        double r11591258 = r11591249 + r11591257;
        double r11591259 = r11591248 + r11591258;
        double r11591260 = r11591237 * r11591237;
        double r11591261 = 0.291667;
        double r11591262 = r11591236 * r11591261;
        double r11591263 = r11591262 * r11591236;
        double r11591264 = 8.75;
        double r11591265 = -2.1;
        double r11591266 = r11591236 * r11591265;
        double r11591267 = r11591264 + r11591266;
        double r11591268 = r11591263 + r11591267;
        double r11591269 = -0.02381;
        double r11591270 = r11591269 * r11591236;
        double r11591271 = r11591237 * r11591270;
        double r11591272 = r11591268 + r11591271;
        double r11591273 = r11591260 * r11591272;
        double r11591274 = r11591259 + r11591273;
        return r11591274;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11591275, r11591276, r11591277, r11591278, r11591279, r11591280, r11591281, r11591282, r11591283, r11591284, r11591285, r11591286, r11591287, r11591288, r11591289, r11591290, r11591291, r11591292, r11591293, r11591294, r11591295, r11591296, r11591297, r11591298, r11591299, r11591300, r11591301, r11591302, r11591303, r11591304, r11591305, r11591306, r11591307, r11591308, r11591309, r11591310, r11591311;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11591275, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591276, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r11591277);
        mpfr_init(r11591278);
        mpfr_init(r11591279);
        mpfr_init_set_str(r11591280, "22.5", 10, MPFR_RNDN);
        mpfr_init(r11591281);
        mpfr_init(r11591282);
        mpfr_init(r11591283);
        mpfr_init_set_str(r11591284, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r11591285);
        mpfr_init(r11591286);
        mpfr_init(r11591287);
        mpfr_init_set_str(r11591288, "8.75", 10, MPFR_RNDN);
        mpfr_init(r11591289);
        mpfr_init(r11591290);
        mpfr_init(r11591291);
        mpfr_init_set_str(r11591292, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r11591293);
        mpfr_init(r11591294);
        mpfr_init(r11591295);
        mpfr_init_set_str(r11591296, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r11591297);
        mpfr_init(r11591298);
        mpfr_init(r11591299);
        mpfr_init_set_str(r11591300, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r11591301);
        mpfr_init(r11591302);
        mpfr_init(r11591303);
        mpfr_init_set_str(r11591304, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r11591305);
        mpfr_init(r11591306);
        mpfr_init(r11591307);
        mpfr_init_set_str(r11591308, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r11591309);
        mpfr_init(r11591310);
        mpfr_init(r11591311);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11591277, x, MPFR_RNDN);
        mpfr_mul(r11591278, r11591276, r11591277, MPFR_RNDN);
        mpfr_add(r11591279, r11591275, r11591278, MPFR_RNDN);
        ;
        mpfr_mul(r11591281, r11591277, r11591277, MPFR_RNDN);
        mpfr_mul(r11591282, r11591280, r11591281, MPFR_RNDN);
        mpfr_add(r11591283, r11591279, r11591282, MPFR_RNDN);
        ;
        mpfr_mul(r11591285, r11591281, r11591277, MPFR_RNDN);
        mpfr_mul(r11591286, r11591284, r11591285, MPFR_RNDN);
        mpfr_add(r11591287, r11591283, r11591286, MPFR_RNDN);
        ;
        mpfr_mul(r11591289, r11591285, r11591277, MPFR_RNDN);
        mpfr_mul(r11591290, r11591288, r11591289, MPFR_RNDN);
        mpfr_add(r11591291, r11591287, r11591290, MPFR_RNDN);
        ;
        mpfr_mul(r11591293, r11591289, r11591277, MPFR_RNDN);
        mpfr_mul(r11591294, r11591292, r11591293, MPFR_RNDN);
        mpfr_add(r11591295, r11591291, r11591294, MPFR_RNDN);
        ;
        mpfr_mul(r11591297, r11591293, r11591277, MPFR_RNDN);
        mpfr_mul(r11591298, r11591296, r11591297, MPFR_RNDN);
        mpfr_add(r11591299, r11591295, r11591298, MPFR_RNDN);
        ;
        mpfr_mul(r11591301, r11591297, r11591277, MPFR_RNDN);
        mpfr_mul(r11591302, r11591300, r11591301, MPFR_RNDN);
        mpfr_add(r11591303, r11591299, r11591302, MPFR_RNDN);
        ;
        mpfr_mul(r11591305, r11591301, r11591277, MPFR_RNDN);
        mpfr_mul(r11591306, r11591304, r11591305, MPFR_RNDN);
        mpfr_add(r11591307, r11591303, r11591306, MPFR_RNDN);
        ;
        mpfr_mul(r11591309, r11591305, r11591277, MPFR_RNDN);
        mpfr_mul(r11591310, r11591308, r11591309, MPFR_RNDN);
        mpfr_add(r11591311, r11591307, r11591310, MPFR_RNDN);
        return mpfr_get_d(r11591311, MPFR_RNDN);
}

static mpfr_t r11591312, r11591313, r11591314, r11591315, r11591316, r11591317, r11591318, r11591319, r11591320, r11591321, r11591322, r11591323, r11591324, r11591325, r11591326, r11591327, r11591328, r11591329, r11591330, r11591331, r11591332, r11591333, r11591334, r11591335, r11591336, r11591337, r11591338, r11591339, r11591340, r11591341, r11591342, r11591343, r11591344, r11591345, r11591346, r11591347, r11591348, r11591349, r11591350;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11591312);
        mpfr_init(r11591313);
        mpfr_init_set_str(r11591314, "22.5", 10, MPFR_RNDN);
        mpfr_init(r11591315);
        mpfr_init_set_str(r11591316, "20.0", 10, MPFR_RNDN);
        mpfr_init(r11591317);
        mpfr_init_set_str(r11591318, "3", 10, MPFR_RNDN);
        mpfr_init(r11591319);
        mpfr_init(r11591320);
        mpfr_init(r11591321);
        mpfr_init_set_str(r11591322, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r11591323);
        mpfr_init(r11591324);
        mpfr_init_set_str(r11591325, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591326, "1", 10, MPFR_RNDN);
        mpfr_init(r11591327);
        mpfr_init(r11591328);
        mpfr_init_set_str(r11591329, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r11591330);
        mpfr_init_set_str(r11591331, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r11591332);
        mpfr_init(r11591333);
        mpfr_init(r11591334);
        mpfr_init(r11591335);
        mpfr_init(r11591336);
        mpfr_init_set_str(r11591337, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r11591338);
        mpfr_init(r11591339);
        mpfr_init_set_str(r11591340, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591341, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r11591342);
        mpfr_init(r11591343);
        mpfr_init(r11591344);
        mpfr_init_set_str(r11591345, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r11591346);
        mpfr_init(r11591347);
        mpfr_init(r11591348);
        mpfr_init(r11591349);
        mpfr_init(r11591350);
}

double f_fm(double x) {
        mpfr_set_d(r11591312, x, MPFR_RNDN);
        mpfr_mul(r11591313, r11591312, r11591312, MPFR_RNDN);
        ;
        mpfr_mul(r11591315, r11591313, r11591314, MPFR_RNDN);
        ;
        mpfr_neg(r11591317, r11591316, MPFR_RNDN);
        ;
        mpfr_pow(r11591319, r11591312, r11591318, MPFR_RNDN);
        mpfr_mul(r11591320, r11591317, r11591319, MPFR_RNDN);
        mpfr_add(r11591321, r11591315, r11591320, MPFR_RNDN);
        ;
        mpfr_mul(r11591323, r11591322, r11591312, MPFR_RNDN);
        mpfr_add(r11591324, r11591321, r11591323, MPFR_RNDN);
        ;
        ;
        mpfr_add(r11591327, r11591318, r11591326, MPFR_RNDN);
        mpfr_pow(r11591328, r11591313, r11591327, MPFR_RNDN);
        ;
        mpfr_mul(r11591330, r11591312, r11591329, MPFR_RNDN);
        ;
        mpfr_add(r11591332, r11591330, r11591331, MPFR_RNDN);
        mpfr_mul(r11591333, r11591328, r11591332, MPFR_RNDN);
        mpfr_add(r11591334, r11591325, r11591333, MPFR_RNDN);
        mpfr_add(r11591335, r11591324, r11591334, MPFR_RNDN);
        mpfr_mul(r11591336, r11591313, r11591313, MPFR_RNDN);
        ;
        mpfr_mul(r11591338, r11591312, r11591337, MPFR_RNDN);
        mpfr_mul(r11591339, r11591338, r11591312, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11591342, r11591312, r11591341, MPFR_RNDN);
        mpfr_add(r11591343, r11591340, r11591342, MPFR_RNDN);
        mpfr_add(r11591344, r11591339, r11591343, MPFR_RNDN);
        ;
        mpfr_mul(r11591346, r11591345, r11591312, MPFR_RNDN);
        mpfr_mul(r11591347, r11591313, r11591346, MPFR_RNDN);
        mpfr_add(r11591348, r11591344, r11591347, MPFR_RNDN);
        mpfr_mul(r11591349, r11591336, r11591348, MPFR_RNDN);
        mpfr_add(r11591350, r11591335, r11591349, MPFR_RNDN);
        return mpfr_get_d(r11591350, MPFR_RNDN);
}

static mpfr_t r11591351, r11591352, r11591353, r11591354, r11591355, r11591356, r11591357, r11591358, r11591359, r11591360, r11591361, r11591362, r11591363, r11591364, r11591365, r11591366, r11591367, r11591368, r11591369, r11591370, r11591371, r11591372, r11591373, r11591374, r11591375, r11591376, r11591377, r11591378, r11591379, r11591380, r11591381, r11591382, r11591383, r11591384, r11591385, r11591386, r11591387, r11591388, r11591389;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11591351);
        mpfr_init(r11591352);
        mpfr_init_set_str(r11591353, "22.5", 10, MPFR_RNDN);
        mpfr_init(r11591354);
        mpfr_init_set_str(r11591355, "20.0", 10, MPFR_RNDN);
        mpfr_init(r11591356);
        mpfr_init_set_str(r11591357, "3", 10, MPFR_RNDN);
        mpfr_init(r11591358);
        mpfr_init(r11591359);
        mpfr_init(r11591360);
        mpfr_init_set_str(r11591361, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r11591362);
        mpfr_init(r11591363);
        mpfr_init_set_str(r11591364, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591365, "1", 10, MPFR_RNDN);
        mpfr_init(r11591366);
        mpfr_init(r11591367);
        mpfr_init_set_str(r11591368, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r11591369);
        mpfr_init_set_str(r11591370, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r11591371);
        mpfr_init(r11591372);
        mpfr_init(r11591373);
        mpfr_init(r11591374);
        mpfr_init(r11591375);
        mpfr_init_set_str(r11591376, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r11591377);
        mpfr_init(r11591378);
        mpfr_init_set_str(r11591379, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591380, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r11591381);
        mpfr_init(r11591382);
        mpfr_init(r11591383);
        mpfr_init_set_str(r11591384, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r11591385);
        mpfr_init(r11591386);
        mpfr_init(r11591387);
        mpfr_init(r11591388);
        mpfr_init(r11591389);
}

double f_dm(double x) {
        mpfr_set_d(r11591351, x, MPFR_RNDN);
        mpfr_mul(r11591352, r11591351, r11591351, MPFR_RNDN);
        ;
        mpfr_mul(r11591354, r11591352, r11591353, MPFR_RNDN);
        ;
        mpfr_neg(r11591356, r11591355, MPFR_RNDN);
        ;
        mpfr_pow(r11591358, r11591351, r11591357, MPFR_RNDN);
        mpfr_mul(r11591359, r11591356, r11591358, MPFR_RNDN);
        mpfr_add(r11591360, r11591354, r11591359, MPFR_RNDN);
        ;
        mpfr_mul(r11591362, r11591361, r11591351, MPFR_RNDN);
        mpfr_add(r11591363, r11591360, r11591362, MPFR_RNDN);
        ;
        ;
        mpfr_add(r11591366, r11591357, r11591365, MPFR_RNDN);
        mpfr_pow(r11591367, r11591352, r11591366, MPFR_RNDN);
        ;
        mpfr_mul(r11591369, r11591351, r11591368, MPFR_RNDN);
        ;
        mpfr_add(r11591371, r11591369, r11591370, MPFR_RNDN);
        mpfr_mul(r11591372, r11591367, r11591371, MPFR_RNDN);
        mpfr_add(r11591373, r11591364, r11591372, MPFR_RNDN);
        mpfr_add(r11591374, r11591363, r11591373, MPFR_RNDN);
        mpfr_mul(r11591375, r11591352, r11591352, MPFR_RNDN);
        ;
        mpfr_mul(r11591377, r11591351, r11591376, MPFR_RNDN);
        mpfr_mul(r11591378, r11591377, r11591351, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11591381, r11591351, r11591380, MPFR_RNDN);
        mpfr_add(r11591382, r11591379, r11591381, MPFR_RNDN);
        mpfr_add(r11591383, r11591378, r11591382, MPFR_RNDN);
        ;
        mpfr_mul(r11591385, r11591384, r11591351, MPFR_RNDN);
        mpfr_mul(r11591386, r11591352, r11591385, MPFR_RNDN);
        mpfr_add(r11591387, r11591383, r11591386, MPFR_RNDN);
        mpfr_mul(r11591388, r11591375, r11591387, MPFR_RNDN);
        mpfr_add(r11591389, r11591374, r11591388, MPFR_RNDN);
        return mpfr_get_d(r11591389, MPFR_RNDN);
}

