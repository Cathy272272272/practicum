#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r4601145 = 0.225586;
        float r4601146 = -17.595703;
        float r4601147 = x;
        float r4601148 = r4601147 * r4601147;
        float r4601149 = r4601146 * r4601148;
        float r4601150 = r4601145 + r4601149;
        float r4601151 = 219.946289;
        float r4601152 = r4601148 * r4601147;
        float r4601153 = r4601152 * r4601147;
        float r4601154 = r4601151 * r4601153;
        float r4601155 = r4601150 + r4601154;
        float r4601156 = -997.089844;
        float r4601157 = r4601153 * r4601147;
        float r4601158 = r4601157 * r4601147;
        float r4601159 = r4601156 * r4601158;
        float r4601160 = r4601155 + r4601159;
        float r4601161 = 2029.790039;
        float r4601162 = r4601158 * r4601147;
        float r4601163 = r4601162 * r4601147;
        float r4601164 = r4601161 * r4601163;
        float r4601165 = r4601160 + r4601164;
        float r4601166 = -1894.470703;
        float r4601167 = r4601163 * r4601147;
        float r4601168 = r4601167 * r4601147;
        float r4601169 = r4601166 * r4601168;
        float r4601170 = r4601165 + r4601169;
        float r4601171 = 660.194336;
        float r4601172 = r4601168 * r4601147;
        float r4601173 = r4601172 * r4601147;
        float r4601174 = r4601171 * r4601173;
        float r4601175 = r4601170 + r4601174;
        return r4601175;
}

double f_id(double x) {
        double r4601176 = 0.225586;
        double r4601177 = -17.595703;
        double r4601178 = x;
        double r4601179 = r4601178 * r4601178;
        double r4601180 = r4601177 * r4601179;
        double r4601181 = r4601176 + r4601180;
        double r4601182 = 219.946289;
        double r4601183 = r4601179 * r4601178;
        double r4601184 = r4601183 * r4601178;
        double r4601185 = r4601182 * r4601184;
        double r4601186 = r4601181 + r4601185;
        double r4601187 = -997.089844;
        double r4601188 = r4601184 * r4601178;
        double r4601189 = r4601188 * r4601178;
        double r4601190 = r4601187 * r4601189;
        double r4601191 = r4601186 + r4601190;
        double r4601192 = 2029.790039;
        double r4601193 = r4601189 * r4601178;
        double r4601194 = r4601193 * r4601178;
        double r4601195 = r4601192 * r4601194;
        double r4601196 = r4601191 + r4601195;
        double r4601197 = -1894.470703;
        double r4601198 = r4601194 * r4601178;
        double r4601199 = r4601198 * r4601178;
        double r4601200 = r4601197 * r4601199;
        double r4601201 = r4601196 + r4601200;
        double r4601202 = 660.194336;
        double r4601203 = r4601199 * r4601178;
        double r4601204 = r4601203 * r4601178;
        double r4601205 = r4601202 * r4601204;
        double r4601206 = r4601201 + r4601205;
        return r4601206;
}


double f_of(float x) {
        float r4601207 = 0.225586;
        float r4601208 = -17.595703;
        float r4601209 = x;
        float r4601210 = r4601209 * r4601209;
        float r4601211 = r4601208 * r4601210;
        float r4601212 = r4601207 + r4601211;
        float r4601213 = 219.946289;
        float r4601214 = r4601210 * r4601209;
        float r4601215 = r4601214 * r4601209;
        float r4601216 = r4601213 * r4601215;
        float r4601217 = r4601212 + r4601216;
        float r4601218 = -997.089844;
        float r4601219 = r4601215 * r4601209;
        float r4601220 = r4601219 * r4601209;
        float r4601221 = r4601218 * r4601220;
        float r4601222 = r4601217 + r4601221;
        float r4601223 = 2029.790039;
        float r4601224 = r4601220 * r4601209;
        float r4601225 = r4601224 * r4601209;
        float r4601226 = r4601223 * r4601225;
        float r4601227 = r4601222 + r4601226;
        float r4601228 = -1894.470703;
        float r4601229 = r4601225 * r4601209;
        float r4601230 = r4601229 * r4601209;
        float r4601231 = r4601228 * r4601230;
        float r4601232 = r4601227 + r4601231;
        float r4601233 = 660.194336;
        float r4601234 = r4601230 * r4601209;
        float r4601235 = r4601234 * r4601209;
        float r4601236 = r4601233 * r4601235;
        float r4601237 = r4601232 + r4601236;
        return r4601237;
}

double f_od(double x) {
        double r4601238 = 0.225586;
        double r4601239 = -17.595703;
        double r4601240 = x;
        double r4601241 = r4601240 * r4601240;
        double r4601242 = r4601239 * r4601241;
        double r4601243 = r4601238 + r4601242;
        double r4601244 = 219.946289;
        double r4601245 = r4601241 * r4601240;
        double r4601246 = r4601245 * r4601240;
        double r4601247 = r4601244 * r4601246;
        double r4601248 = r4601243 + r4601247;
        double r4601249 = -997.089844;
        double r4601250 = r4601246 * r4601240;
        double r4601251 = r4601250 * r4601240;
        double r4601252 = r4601249 * r4601251;
        double r4601253 = r4601248 + r4601252;
        double r4601254 = 2029.790039;
        double r4601255 = r4601251 * r4601240;
        double r4601256 = r4601255 * r4601240;
        double r4601257 = r4601254 * r4601256;
        double r4601258 = r4601253 + r4601257;
        double r4601259 = -1894.470703;
        double r4601260 = r4601256 * r4601240;
        double r4601261 = r4601260 * r4601240;
        double r4601262 = r4601259 * r4601261;
        double r4601263 = r4601258 + r4601262;
        double r4601264 = 660.194336;
        double r4601265 = r4601261 * r4601240;
        double r4601266 = r4601265 * r4601240;
        double r4601267 = r4601264 * r4601266;
        double r4601268 = r4601263 + r4601267;
        return r4601268;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4601269, r4601270, r4601271, r4601272, r4601273, r4601274, r4601275, r4601276, r4601277, r4601278, r4601279, r4601280, r4601281, r4601282, r4601283, r4601284, r4601285, r4601286, r4601287, r4601288, r4601289, r4601290, r4601291, r4601292, r4601293, r4601294, r4601295, r4601296, r4601297, r4601298, r4601299;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4601269, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4601270, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4601271);
        mpfr_init(r4601272);
        mpfr_init(r4601273);
        mpfr_init(r4601274);
        mpfr_init_set_str(r4601275, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4601276);
        mpfr_init(r4601277);
        mpfr_init(r4601278);
        mpfr_init(r4601279);
        mpfr_init_set_str(r4601280, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4601281);
        mpfr_init(r4601282);
        mpfr_init(r4601283);
        mpfr_init(r4601284);
        mpfr_init_set_str(r4601285, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4601286);
        mpfr_init(r4601287);
        mpfr_init(r4601288);
        mpfr_init(r4601289);
        mpfr_init_set_str(r4601290, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4601291);
        mpfr_init(r4601292);
        mpfr_init(r4601293);
        mpfr_init(r4601294);
        mpfr_init_set_str(r4601295, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4601296);
        mpfr_init(r4601297);
        mpfr_init(r4601298);
        mpfr_init(r4601299);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4601271, x, MPFR_RNDN);
        mpfr_mul(r4601272, r4601271, r4601271, MPFR_RNDN);
        mpfr_mul(r4601273, r4601270, r4601272, MPFR_RNDN);
        mpfr_add(r4601274, r4601269, r4601273, MPFR_RNDN);
        ;
        mpfr_mul(r4601276, r4601272, r4601271, MPFR_RNDN);
        mpfr_mul(r4601277, r4601276, r4601271, MPFR_RNDN);
        mpfr_mul(r4601278, r4601275, r4601277, MPFR_RNDN);
        mpfr_add(r4601279, r4601274, r4601278, MPFR_RNDN);
        ;
        mpfr_mul(r4601281, r4601277, r4601271, MPFR_RNDN);
        mpfr_mul(r4601282, r4601281, r4601271, MPFR_RNDN);
        mpfr_mul(r4601283, r4601280, r4601282, MPFR_RNDN);
        mpfr_add(r4601284, r4601279, r4601283, MPFR_RNDN);
        ;
        mpfr_mul(r4601286, r4601282, r4601271, MPFR_RNDN);
        mpfr_mul(r4601287, r4601286, r4601271, MPFR_RNDN);
        mpfr_mul(r4601288, r4601285, r4601287, MPFR_RNDN);
        mpfr_add(r4601289, r4601284, r4601288, MPFR_RNDN);
        ;
        mpfr_mul(r4601291, r4601287, r4601271, MPFR_RNDN);
        mpfr_mul(r4601292, r4601291, r4601271, MPFR_RNDN);
        mpfr_mul(r4601293, r4601290, r4601292, MPFR_RNDN);
        mpfr_add(r4601294, r4601289, r4601293, MPFR_RNDN);
        ;
        mpfr_mul(r4601296, r4601292, r4601271, MPFR_RNDN);
        mpfr_mul(r4601297, r4601296, r4601271, MPFR_RNDN);
        mpfr_mul(r4601298, r4601295, r4601297, MPFR_RNDN);
        mpfr_add(r4601299, r4601294, r4601298, MPFR_RNDN);
        return mpfr_get_d(r4601299, MPFR_RNDN);
}

static mpfr_t r4601300, r4601301, r4601302, r4601303, r4601304, r4601305, r4601306, r4601307, r4601308, r4601309, r4601310, r4601311, r4601312, r4601313, r4601314, r4601315, r4601316, r4601317, r4601318, r4601319, r4601320, r4601321, r4601322, r4601323, r4601324, r4601325, r4601326, r4601327, r4601328, r4601329, r4601330;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4601300, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4601301, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4601302);
        mpfr_init(r4601303);
        mpfr_init(r4601304);
        mpfr_init(r4601305);
        mpfr_init_set_str(r4601306, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4601307);
        mpfr_init(r4601308);
        mpfr_init(r4601309);
        mpfr_init(r4601310);
        mpfr_init_set_str(r4601311, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4601312);
        mpfr_init(r4601313);
        mpfr_init(r4601314);
        mpfr_init(r4601315);
        mpfr_init_set_str(r4601316, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4601317);
        mpfr_init(r4601318);
        mpfr_init(r4601319);
        mpfr_init(r4601320);
        mpfr_init_set_str(r4601321, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4601322);
        mpfr_init(r4601323);
        mpfr_init(r4601324);
        mpfr_init(r4601325);
        mpfr_init_set_str(r4601326, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4601327);
        mpfr_init(r4601328);
        mpfr_init(r4601329);
        mpfr_init(r4601330);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4601302, x, MPFR_RNDN);
        mpfr_mul(r4601303, r4601302, r4601302, MPFR_RNDN);
        mpfr_mul(r4601304, r4601301, r4601303, MPFR_RNDN);
        mpfr_add(r4601305, r4601300, r4601304, MPFR_RNDN);
        ;
        mpfr_mul(r4601307, r4601303, r4601302, MPFR_RNDN);
        mpfr_mul(r4601308, r4601307, r4601302, MPFR_RNDN);
        mpfr_mul(r4601309, r4601306, r4601308, MPFR_RNDN);
        mpfr_add(r4601310, r4601305, r4601309, MPFR_RNDN);
        ;
        mpfr_mul(r4601312, r4601308, r4601302, MPFR_RNDN);
        mpfr_mul(r4601313, r4601312, r4601302, MPFR_RNDN);
        mpfr_mul(r4601314, r4601311, r4601313, MPFR_RNDN);
        mpfr_add(r4601315, r4601310, r4601314, MPFR_RNDN);
        ;
        mpfr_mul(r4601317, r4601313, r4601302, MPFR_RNDN);
        mpfr_mul(r4601318, r4601317, r4601302, MPFR_RNDN);
        mpfr_mul(r4601319, r4601316, r4601318, MPFR_RNDN);
        mpfr_add(r4601320, r4601315, r4601319, MPFR_RNDN);
        ;
        mpfr_mul(r4601322, r4601318, r4601302, MPFR_RNDN);
        mpfr_mul(r4601323, r4601322, r4601302, MPFR_RNDN);
        mpfr_mul(r4601324, r4601321, r4601323, MPFR_RNDN);
        mpfr_add(r4601325, r4601320, r4601324, MPFR_RNDN);
        ;
        mpfr_mul(r4601327, r4601323, r4601302, MPFR_RNDN);
        mpfr_mul(r4601328, r4601327, r4601302, MPFR_RNDN);
        mpfr_mul(r4601329, r4601326, r4601328, MPFR_RNDN);
        mpfr_add(r4601330, r4601325, r4601329, MPFR_RNDN);
        return mpfr_get_d(r4601330, MPFR_RNDN);
}

static mpfr_t r4601331, r4601332, r4601333, r4601334, r4601335, r4601336, r4601337, r4601338, r4601339, r4601340, r4601341, r4601342, r4601343, r4601344, r4601345, r4601346, r4601347, r4601348, r4601349, r4601350, r4601351, r4601352, r4601353, r4601354, r4601355, r4601356, r4601357, r4601358, r4601359, r4601360, r4601361;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4601331, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4601332, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4601333);
        mpfr_init(r4601334);
        mpfr_init(r4601335);
        mpfr_init(r4601336);
        mpfr_init_set_str(r4601337, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4601338);
        mpfr_init(r4601339);
        mpfr_init(r4601340);
        mpfr_init(r4601341);
        mpfr_init_set_str(r4601342, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4601343);
        mpfr_init(r4601344);
        mpfr_init(r4601345);
        mpfr_init(r4601346);
        mpfr_init_set_str(r4601347, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4601348);
        mpfr_init(r4601349);
        mpfr_init(r4601350);
        mpfr_init(r4601351);
        mpfr_init_set_str(r4601352, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4601353);
        mpfr_init(r4601354);
        mpfr_init(r4601355);
        mpfr_init(r4601356);
        mpfr_init_set_str(r4601357, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4601358);
        mpfr_init(r4601359);
        mpfr_init(r4601360);
        mpfr_init(r4601361);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4601333, x, MPFR_RNDN);
        mpfr_mul(r4601334, r4601333, r4601333, MPFR_RNDN);
        mpfr_mul(r4601335, r4601332, r4601334, MPFR_RNDN);
        mpfr_add(r4601336, r4601331, r4601335, MPFR_RNDN);
        ;
        mpfr_mul(r4601338, r4601334, r4601333, MPFR_RNDN);
        mpfr_mul(r4601339, r4601338, r4601333, MPFR_RNDN);
        mpfr_mul(r4601340, r4601337, r4601339, MPFR_RNDN);
        mpfr_add(r4601341, r4601336, r4601340, MPFR_RNDN);
        ;
        mpfr_mul(r4601343, r4601339, r4601333, MPFR_RNDN);
        mpfr_mul(r4601344, r4601343, r4601333, MPFR_RNDN);
        mpfr_mul(r4601345, r4601342, r4601344, MPFR_RNDN);
        mpfr_add(r4601346, r4601341, r4601345, MPFR_RNDN);
        ;
        mpfr_mul(r4601348, r4601344, r4601333, MPFR_RNDN);
        mpfr_mul(r4601349, r4601348, r4601333, MPFR_RNDN);
        mpfr_mul(r4601350, r4601347, r4601349, MPFR_RNDN);
        mpfr_add(r4601351, r4601346, r4601350, MPFR_RNDN);
        ;
        mpfr_mul(r4601353, r4601349, r4601333, MPFR_RNDN);
        mpfr_mul(r4601354, r4601353, r4601333, MPFR_RNDN);
        mpfr_mul(r4601355, r4601352, r4601354, MPFR_RNDN);
        mpfr_add(r4601356, r4601351, r4601355, MPFR_RNDN);
        ;
        mpfr_mul(r4601358, r4601354, r4601333, MPFR_RNDN);
        mpfr_mul(r4601359, r4601358, r4601333, MPFR_RNDN);
        mpfr_mul(r4601360, r4601357, r4601359, MPFR_RNDN);
        mpfr_add(r4601361, r4601356, r4601360, MPFR_RNDN);
        return mpfr_get_d(r4601361, MPFR_RNDN);
}

