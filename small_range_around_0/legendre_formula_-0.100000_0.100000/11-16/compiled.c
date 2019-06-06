#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r4600137 = 0.196381;
        float r4600138 = -26.707764;
        float r4600139 = x;
        float r4600140 = r4600139 * r4600139;
        float r4600141 = r4600138 * r4600140;
        float r4600142 = r4600137 + r4600141;
        float r4600143 = 592.022095;
        float r4600144 = r4600140 * r4600139;
        float r4600145 = r4600144 * r4600139;
        float r4600146 = r4600143 * r4600145;
        float r4600147 = r4600142 + r4600146;
        float r4600148 = -4972.985596;
        float r4600149 = r4600145 * r4600139;
        float r4600150 = r4600149 * r4600139;
        float r4600151 = r4600148 * r4600150;
        float r4600152 = r4600147 + r4600151;
        float r4600153 = 20424.762268;
        float r4600154 = r4600150 * r4600139;
        float r4600155 = r4600154 * r4600139;
        float r4600156 = r4600153 * r4600155;
        float r4600157 = r4600152 + r4600156;
        float r4600158 = -45388.360596;
        float r4600159 = r4600155 * r4600139;
        float r4600160 = r4600159 * r4600139;
        float r4600161 = r4600158 * r4600160;
        float r4600162 = r4600157 + r4600161;
        float r4600163 = 55703.897095;
        float r4600164 = r4600160 * r4600139;
        float r4600165 = r4600164 * r4600139;
        float r4600166 = r4600163 * r4600165;
        float r4600167 = r4600162 + r4600166;
        float r4600168 = -35503.582764;
        float r4600169 = r4600165 * r4600139;
        float r4600170 = r4600169 * r4600139;
        float r4600171 = r4600168 * r4600170;
        float r4600172 = r4600167 + r4600171;
        float r4600173 = 9171.758881;
        float r4600174 = r4600170 * r4600139;
        float r4600175 = r4600174 * r4600139;
        float r4600176 = r4600173 * r4600175;
        float r4600177 = r4600172 + r4600176;
        return r4600177;
}

double f_id(double x) {
        double r4600178 = 0.196381;
        double r4600179 = -26.707764;
        double r4600180 = x;
        double r4600181 = r4600180 * r4600180;
        double r4600182 = r4600179 * r4600181;
        double r4600183 = r4600178 + r4600182;
        double r4600184 = 592.022095;
        double r4600185 = r4600181 * r4600180;
        double r4600186 = r4600185 * r4600180;
        double r4600187 = r4600184 * r4600186;
        double r4600188 = r4600183 + r4600187;
        double r4600189 = -4972.985596;
        double r4600190 = r4600186 * r4600180;
        double r4600191 = r4600190 * r4600180;
        double r4600192 = r4600189 * r4600191;
        double r4600193 = r4600188 + r4600192;
        double r4600194 = 20424.762268;
        double r4600195 = r4600191 * r4600180;
        double r4600196 = r4600195 * r4600180;
        double r4600197 = r4600194 * r4600196;
        double r4600198 = r4600193 + r4600197;
        double r4600199 = -45388.360596;
        double r4600200 = r4600196 * r4600180;
        double r4600201 = r4600200 * r4600180;
        double r4600202 = r4600199 * r4600201;
        double r4600203 = r4600198 + r4600202;
        double r4600204 = 55703.897095;
        double r4600205 = r4600201 * r4600180;
        double r4600206 = r4600205 * r4600180;
        double r4600207 = r4600204 * r4600206;
        double r4600208 = r4600203 + r4600207;
        double r4600209 = -35503.582764;
        double r4600210 = r4600206 * r4600180;
        double r4600211 = r4600210 * r4600180;
        double r4600212 = r4600209 * r4600211;
        double r4600213 = r4600208 + r4600212;
        double r4600214 = 9171.758881;
        double r4600215 = r4600211 * r4600180;
        double r4600216 = r4600215 * r4600180;
        double r4600217 = r4600214 * r4600216;
        double r4600218 = r4600213 + r4600217;
        return r4600218;
}


double f_of(float x) {
        float r4600219 = 0.196381;
        float r4600220 = -26.707764;
        float r4600221 = x;
        float r4600222 = r4600221 * r4600221;
        float r4600223 = r4600220 * r4600222;
        float r4600224 = r4600219 + r4600223;
        float r4600225 = 592.022095;
        float r4600226 = r4600222 * r4600221;
        float r4600227 = r4600226 * r4600221;
        float r4600228 = r4600225 * r4600227;
        float r4600229 = r4600224 + r4600228;
        float r4600230 = -4972.985596;
        float r4600231 = r4600227 * r4600221;
        float r4600232 = r4600231 * r4600221;
        float r4600233 = r4600230 * r4600232;
        float r4600234 = r4600229 + r4600233;
        float r4600235 = 20424.762268;
        float r4600236 = r4600232 * r4600221;
        float r4600237 = r4600236 * r4600221;
        float r4600238 = r4600235 * r4600237;
        float r4600239 = r4600234 + r4600238;
        float r4600240 = -45388.360596;
        float r4600241 = r4600237 * r4600221;
        float r4600242 = r4600241 * r4600221;
        float r4600243 = r4600240 * r4600242;
        float r4600244 = r4600239 + r4600243;
        float r4600245 = 55703.897095;
        float r4600246 = r4600242 * r4600221;
        float r4600247 = r4600246 * r4600221;
        float r4600248 = r4600245 * r4600247;
        float r4600249 = r4600244 + r4600248;
        float r4600250 = -35503.582764;
        float r4600251 = r4600247 * r4600221;
        float r4600252 = r4600251 * r4600221;
        float r4600253 = r4600250 * r4600252;
        float r4600254 = r4600249 + r4600253;
        float r4600255 = 9171.758881;
        float r4600256 = r4600252 * r4600221;
        float r4600257 = r4600256 * r4600221;
        float r4600258 = r4600255 * r4600257;
        float r4600259 = r4600254 + r4600258;
        return r4600259;
}

double f_od(double x) {
        double r4600260 = 0.196381;
        double r4600261 = -26.707764;
        double r4600262 = x;
        double r4600263 = r4600262 * r4600262;
        double r4600264 = r4600261 * r4600263;
        double r4600265 = r4600260 + r4600264;
        double r4600266 = 592.022095;
        double r4600267 = r4600263 * r4600262;
        double r4600268 = r4600267 * r4600262;
        double r4600269 = r4600266 * r4600268;
        double r4600270 = r4600265 + r4600269;
        double r4600271 = -4972.985596;
        double r4600272 = r4600268 * r4600262;
        double r4600273 = r4600272 * r4600262;
        double r4600274 = r4600271 * r4600273;
        double r4600275 = r4600270 + r4600274;
        double r4600276 = 20424.762268;
        double r4600277 = r4600273 * r4600262;
        double r4600278 = r4600277 * r4600262;
        double r4600279 = r4600276 * r4600278;
        double r4600280 = r4600275 + r4600279;
        double r4600281 = -45388.360596;
        double r4600282 = r4600278 * r4600262;
        double r4600283 = r4600282 * r4600262;
        double r4600284 = r4600281 * r4600283;
        double r4600285 = r4600280 + r4600284;
        double r4600286 = 55703.897095;
        double r4600287 = r4600283 * r4600262;
        double r4600288 = r4600287 * r4600262;
        double r4600289 = r4600286 * r4600288;
        double r4600290 = r4600285 + r4600289;
        double r4600291 = -35503.582764;
        double r4600292 = r4600288 * r4600262;
        double r4600293 = r4600292 * r4600262;
        double r4600294 = r4600291 * r4600293;
        double r4600295 = r4600290 + r4600294;
        double r4600296 = 9171.758881;
        double r4600297 = r4600293 * r4600262;
        double r4600298 = r4600297 * r4600262;
        double r4600299 = r4600296 * r4600298;
        double r4600300 = r4600295 + r4600299;
        return r4600300;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4600301, r4600302, r4600303, r4600304, r4600305, r4600306, r4600307, r4600308, r4600309, r4600310, r4600311, r4600312, r4600313, r4600314, r4600315, r4600316, r4600317, r4600318, r4600319, r4600320, r4600321, r4600322, r4600323, r4600324, r4600325, r4600326, r4600327, r4600328, r4600329, r4600330, r4600331, r4600332, r4600333, r4600334, r4600335, r4600336, r4600337, r4600338, r4600339, r4600340, r4600341;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4600301, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r4600302, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r4600303);
        mpfr_init(r4600304);
        mpfr_init(r4600305);
        mpfr_init(r4600306);
        mpfr_init_set_str(r4600307, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r4600308);
        mpfr_init(r4600309);
        mpfr_init(r4600310);
        mpfr_init(r4600311);
        mpfr_init_set_str(r4600312, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r4600313);
        mpfr_init(r4600314);
        mpfr_init(r4600315);
        mpfr_init(r4600316);
        mpfr_init_set_str(r4600317, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r4600318);
        mpfr_init(r4600319);
        mpfr_init(r4600320);
        mpfr_init(r4600321);
        mpfr_init_set_str(r4600322, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r4600323);
        mpfr_init(r4600324);
        mpfr_init(r4600325);
        mpfr_init(r4600326);
        mpfr_init_set_str(r4600327, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r4600328);
        mpfr_init(r4600329);
        mpfr_init(r4600330);
        mpfr_init(r4600331);
        mpfr_init_set_str(r4600332, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r4600333);
        mpfr_init(r4600334);
        mpfr_init(r4600335);
        mpfr_init(r4600336);
        mpfr_init_set_str(r4600337, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r4600338);
        mpfr_init(r4600339);
        mpfr_init(r4600340);
        mpfr_init(r4600341);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4600303, x, MPFR_RNDN);
        mpfr_mul(r4600304, r4600303, r4600303, MPFR_RNDN);
        mpfr_mul(r4600305, r4600302, r4600304, MPFR_RNDN);
        mpfr_add(r4600306, r4600301, r4600305, MPFR_RNDN);
        ;
        mpfr_mul(r4600308, r4600304, r4600303, MPFR_RNDN);
        mpfr_mul(r4600309, r4600308, r4600303, MPFR_RNDN);
        mpfr_mul(r4600310, r4600307, r4600309, MPFR_RNDN);
        mpfr_add(r4600311, r4600306, r4600310, MPFR_RNDN);
        ;
        mpfr_mul(r4600313, r4600309, r4600303, MPFR_RNDN);
        mpfr_mul(r4600314, r4600313, r4600303, MPFR_RNDN);
        mpfr_mul(r4600315, r4600312, r4600314, MPFR_RNDN);
        mpfr_add(r4600316, r4600311, r4600315, MPFR_RNDN);
        ;
        mpfr_mul(r4600318, r4600314, r4600303, MPFR_RNDN);
        mpfr_mul(r4600319, r4600318, r4600303, MPFR_RNDN);
        mpfr_mul(r4600320, r4600317, r4600319, MPFR_RNDN);
        mpfr_add(r4600321, r4600316, r4600320, MPFR_RNDN);
        ;
        mpfr_mul(r4600323, r4600319, r4600303, MPFR_RNDN);
        mpfr_mul(r4600324, r4600323, r4600303, MPFR_RNDN);
        mpfr_mul(r4600325, r4600322, r4600324, MPFR_RNDN);
        mpfr_add(r4600326, r4600321, r4600325, MPFR_RNDN);
        ;
        mpfr_mul(r4600328, r4600324, r4600303, MPFR_RNDN);
        mpfr_mul(r4600329, r4600328, r4600303, MPFR_RNDN);
        mpfr_mul(r4600330, r4600327, r4600329, MPFR_RNDN);
        mpfr_add(r4600331, r4600326, r4600330, MPFR_RNDN);
        ;
        mpfr_mul(r4600333, r4600329, r4600303, MPFR_RNDN);
        mpfr_mul(r4600334, r4600333, r4600303, MPFR_RNDN);
        mpfr_mul(r4600335, r4600332, r4600334, MPFR_RNDN);
        mpfr_add(r4600336, r4600331, r4600335, MPFR_RNDN);
        ;
        mpfr_mul(r4600338, r4600334, r4600303, MPFR_RNDN);
        mpfr_mul(r4600339, r4600338, r4600303, MPFR_RNDN);
        mpfr_mul(r4600340, r4600337, r4600339, MPFR_RNDN);
        mpfr_add(r4600341, r4600336, r4600340, MPFR_RNDN);
        return mpfr_get_d(r4600341, MPFR_RNDN);
}

static mpfr_t r4600342, r4600343, r4600344, r4600345, r4600346, r4600347, r4600348, r4600349, r4600350, r4600351, r4600352, r4600353, r4600354, r4600355, r4600356, r4600357, r4600358, r4600359, r4600360, r4600361, r4600362, r4600363, r4600364, r4600365, r4600366, r4600367, r4600368, r4600369, r4600370, r4600371, r4600372, r4600373, r4600374, r4600375, r4600376, r4600377, r4600378, r4600379, r4600380, r4600381, r4600382;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4600342, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r4600343, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r4600344);
        mpfr_init(r4600345);
        mpfr_init(r4600346);
        mpfr_init(r4600347);
        mpfr_init_set_str(r4600348, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r4600349);
        mpfr_init(r4600350);
        mpfr_init(r4600351);
        mpfr_init(r4600352);
        mpfr_init_set_str(r4600353, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r4600354);
        mpfr_init(r4600355);
        mpfr_init(r4600356);
        mpfr_init(r4600357);
        mpfr_init_set_str(r4600358, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r4600359);
        mpfr_init(r4600360);
        mpfr_init(r4600361);
        mpfr_init(r4600362);
        mpfr_init_set_str(r4600363, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r4600364);
        mpfr_init(r4600365);
        mpfr_init(r4600366);
        mpfr_init(r4600367);
        mpfr_init_set_str(r4600368, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r4600369);
        mpfr_init(r4600370);
        mpfr_init(r4600371);
        mpfr_init(r4600372);
        mpfr_init_set_str(r4600373, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r4600374);
        mpfr_init(r4600375);
        mpfr_init(r4600376);
        mpfr_init(r4600377);
        mpfr_init_set_str(r4600378, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r4600379);
        mpfr_init(r4600380);
        mpfr_init(r4600381);
        mpfr_init(r4600382);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4600344, x, MPFR_RNDN);
        mpfr_mul(r4600345, r4600344, r4600344, MPFR_RNDN);
        mpfr_mul(r4600346, r4600343, r4600345, MPFR_RNDN);
        mpfr_add(r4600347, r4600342, r4600346, MPFR_RNDN);
        ;
        mpfr_mul(r4600349, r4600345, r4600344, MPFR_RNDN);
        mpfr_mul(r4600350, r4600349, r4600344, MPFR_RNDN);
        mpfr_mul(r4600351, r4600348, r4600350, MPFR_RNDN);
        mpfr_add(r4600352, r4600347, r4600351, MPFR_RNDN);
        ;
        mpfr_mul(r4600354, r4600350, r4600344, MPFR_RNDN);
        mpfr_mul(r4600355, r4600354, r4600344, MPFR_RNDN);
        mpfr_mul(r4600356, r4600353, r4600355, MPFR_RNDN);
        mpfr_add(r4600357, r4600352, r4600356, MPFR_RNDN);
        ;
        mpfr_mul(r4600359, r4600355, r4600344, MPFR_RNDN);
        mpfr_mul(r4600360, r4600359, r4600344, MPFR_RNDN);
        mpfr_mul(r4600361, r4600358, r4600360, MPFR_RNDN);
        mpfr_add(r4600362, r4600357, r4600361, MPFR_RNDN);
        ;
        mpfr_mul(r4600364, r4600360, r4600344, MPFR_RNDN);
        mpfr_mul(r4600365, r4600364, r4600344, MPFR_RNDN);
        mpfr_mul(r4600366, r4600363, r4600365, MPFR_RNDN);
        mpfr_add(r4600367, r4600362, r4600366, MPFR_RNDN);
        ;
        mpfr_mul(r4600369, r4600365, r4600344, MPFR_RNDN);
        mpfr_mul(r4600370, r4600369, r4600344, MPFR_RNDN);
        mpfr_mul(r4600371, r4600368, r4600370, MPFR_RNDN);
        mpfr_add(r4600372, r4600367, r4600371, MPFR_RNDN);
        ;
        mpfr_mul(r4600374, r4600370, r4600344, MPFR_RNDN);
        mpfr_mul(r4600375, r4600374, r4600344, MPFR_RNDN);
        mpfr_mul(r4600376, r4600373, r4600375, MPFR_RNDN);
        mpfr_add(r4600377, r4600372, r4600376, MPFR_RNDN);
        ;
        mpfr_mul(r4600379, r4600375, r4600344, MPFR_RNDN);
        mpfr_mul(r4600380, r4600379, r4600344, MPFR_RNDN);
        mpfr_mul(r4600381, r4600378, r4600380, MPFR_RNDN);
        mpfr_add(r4600382, r4600377, r4600381, MPFR_RNDN);
        return mpfr_get_d(r4600382, MPFR_RNDN);
}

static mpfr_t r4600383, r4600384, r4600385, r4600386, r4600387, r4600388, r4600389, r4600390, r4600391, r4600392, r4600393, r4600394, r4600395, r4600396, r4600397, r4600398, r4600399, r4600400, r4600401, r4600402, r4600403, r4600404, r4600405, r4600406, r4600407, r4600408, r4600409, r4600410, r4600411, r4600412, r4600413, r4600414, r4600415, r4600416, r4600417, r4600418, r4600419, r4600420, r4600421, r4600422, r4600423;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4600383, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r4600384, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r4600385);
        mpfr_init(r4600386);
        mpfr_init(r4600387);
        mpfr_init(r4600388);
        mpfr_init_set_str(r4600389, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r4600390);
        mpfr_init(r4600391);
        mpfr_init(r4600392);
        mpfr_init(r4600393);
        mpfr_init_set_str(r4600394, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r4600395);
        mpfr_init(r4600396);
        mpfr_init(r4600397);
        mpfr_init(r4600398);
        mpfr_init_set_str(r4600399, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r4600400);
        mpfr_init(r4600401);
        mpfr_init(r4600402);
        mpfr_init(r4600403);
        mpfr_init_set_str(r4600404, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r4600405);
        mpfr_init(r4600406);
        mpfr_init(r4600407);
        mpfr_init(r4600408);
        mpfr_init_set_str(r4600409, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r4600410);
        mpfr_init(r4600411);
        mpfr_init(r4600412);
        mpfr_init(r4600413);
        mpfr_init_set_str(r4600414, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r4600415);
        mpfr_init(r4600416);
        mpfr_init(r4600417);
        mpfr_init(r4600418);
        mpfr_init_set_str(r4600419, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r4600420);
        mpfr_init(r4600421);
        mpfr_init(r4600422);
        mpfr_init(r4600423);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4600385, x, MPFR_RNDN);
        mpfr_mul(r4600386, r4600385, r4600385, MPFR_RNDN);
        mpfr_mul(r4600387, r4600384, r4600386, MPFR_RNDN);
        mpfr_add(r4600388, r4600383, r4600387, MPFR_RNDN);
        ;
        mpfr_mul(r4600390, r4600386, r4600385, MPFR_RNDN);
        mpfr_mul(r4600391, r4600390, r4600385, MPFR_RNDN);
        mpfr_mul(r4600392, r4600389, r4600391, MPFR_RNDN);
        mpfr_add(r4600393, r4600388, r4600392, MPFR_RNDN);
        ;
        mpfr_mul(r4600395, r4600391, r4600385, MPFR_RNDN);
        mpfr_mul(r4600396, r4600395, r4600385, MPFR_RNDN);
        mpfr_mul(r4600397, r4600394, r4600396, MPFR_RNDN);
        mpfr_add(r4600398, r4600393, r4600397, MPFR_RNDN);
        ;
        mpfr_mul(r4600400, r4600396, r4600385, MPFR_RNDN);
        mpfr_mul(r4600401, r4600400, r4600385, MPFR_RNDN);
        mpfr_mul(r4600402, r4600399, r4600401, MPFR_RNDN);
        mpfr_add(r4600403, r4600398, r4600402, MPFR_RNDN);
        ;
        mpfr_mul(r4600405, r4600401, r4600385, MPFR_RNDN);
        mpfr_mul(r4600406, r4600405, r4600385, MPFR_RNDN);
        mpfr_mul(r4600407, r4600404, r4600406, MPFR_RNDN);
        mpfr_add(r4600408, r4600403, r4600407, MPFR_RNDN);
        ;
        mpfr_mul(r4600410, r4600406, r4600385, MPFR_RNDN);
        mpfr_mul(r4600411, r4600410, r4600385, MPFR_RNDN);
        mpfr_mul(r4600412, r4600409, r4600411, MPFR_RNDN);
        mpfr_add(r4600413, r4600408, r4600412, MPFR_RNDN);
        ;
        mpfr_mul(r4600415, r4600411, r4600385, MPFR_RNDN);
        mpfr_mul(r4600416, r4600415, r4600385, MPFR_RNDN);
        mpfr_mul(r4600417, r4600414, r4600416, MPFR_RNDN);
        mpfr_add(r4600418, r4600413, r4600417, MPFR_RNDN);
        ;
        mpfr_mul(r4600420, r4600416, r4600385, MPFR_RNDN);
        mpfr_mul(r4600421, r4600420, r4600385, MPFR_RNDN);
        mpfr_mul(r4600422, r4600419, r4600421, MPFR_RNDN);
        mpfr_add(r4600423, r4600418, r4600422, MPFR_RNDN);
        return mpfr_get_d(r4600423, MPFR_RNDN);
}
