#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "19";

double f_if(float x) {
        float r9960176 = -670442572800.0;
        float r9960177 = x;
        float r9960178 = r9960176 * r9960177;
        float r9960179 = 4022655436800.0;
        float r9960180 = r9960177 * r9960177;
        float r9960181 = r9960180 * r9960177;
        float r9960182 = r9960179 * r9960181;
        float r9960183 = r9960178 + r9960182;
        float r9960184 = -6436248698880.0;
        float r9960185 = r9960181 * r9960177;
        float r9960186 = r9960185 * r9960177;
        float r9960187 = r9960184 * r9960186;
        float r9960188 = r9960183 + r9960187;
        float r9960189 = 4290832465920.0;
        float r9960190 = r9960186 * r9960177;
        float r9960191 = r9960190 * r9960177;
        float r9960192 = r9960189 * r9960191;
        float r9960193 = r9960188 + r9960192;
        float r9960194 = -1430277488640.0;
        float r9960195 = r9960191 * r9960177;
        float r9960196 = r9960195 * r9960177;
        float r9960197 = r9960194 * r9960196;
        float r9960198 = r9960193 + r9960197;
        float r9960199 = 260050452480.0;
        float r9960200 = r9960196 * r9960177;
        float r9960201 = r9960200 * r9960177;
        float r9960202 = r9960199 * r9960201;
        float r9960203 = r9960198 + r9960202;
        float r9960204 = -26671841280.0;
        float r9960205 = r9960201 * r9960177;
        float r9960206 = r9960205 * r9960177;
        float r9960207 = r9960204 * r9960206;
        float r9960208 = r9960203 + r9960207;
        float r9960209 = 1524105216.0;
        float r9960210 = r9960206 * r9960177;
        float r9960211 = r9960210 * r9960177;
        float r9960212 = r9960209 * r9960211;
        float r9960213 = r9960208 + r9960212;
        float r9960214 = -44826624.0;
        float r9960215 = r9960211 * r9960177;
        float r9960216 = r9960215 * r9960177;
        float r9960217 = r9960214 * r9960216;
        float r9960218 = r9960213 + r9960217;
        float r9960219 = 524288.0;
        float r9960220 = r9960216 * r9960177;
        float r9960221 = r9960220 * r9960177;
        float r9960222 = r9960219 * r9960221;
        float r9960223 = r9960218 + r9960222;
        return r9960223;
}

double f_id(double x) {
        double r9960224 = -670442572800.0;
        double r9960225 = x;
        double r9960226 = r9960224 * r9960225;
        double r9960227 = 4022655436800.0;
        double r9960228 = r9960225 * r9960225;
        double r9960229 = r9960228 * r9960225;
        double r9960230 = r9960227 * r9960229;
        double r9960231 = r9960226 + r9960230;
        double r9960232 = -6436248698880.0;
        double r9960233 = r9960229 * r9960225;
        double r9960234 = r9960233 * r9960225;
        double r9960235 = r9960232 * r9960234;
        double r9960236 = r9960231 + r9960235;
        double r9960237 = 4290832465920.0;
        double r9960238 = r9960234 * r9960225;
        double r9960239 = r9960238 * r9960225;
        double r9960240 = r9960237 * r9960239;
        double r9960241 = r9960236 + r9960240;
        double r9960242 = -1430277488640.0;
        double r9960243 = r9960239 * r9960225;
        double r9960244 = r9960243 * r9960225;
        double r9960245 = r9960242 * r9960244;
        double r9960246 = r9960241 + r9960245;
        double r9960247 = 260050452480.0;
        double r9960248 = r9960244 * r9960225;
        double r9960249 = r9960248 * r9960225;
        double r9960250 = r9960247 * r9960249;
        double r9960251 = r9960246 + r9960250;
        double r9960252 = -26671841280.0;
        double r9960253 = r9960249 * r9960225;
        double r9960254 = r9960253 * r9960225;
        double r9960255 = r9960252 * r9960254;
        double r9960256 = r9960251 + r9960255;
        double r9960257 = 1524105216.0;
        double r9960258 = r9960254 * r9960225;
        double r9960259 = r9960258 * r9960225;
        double r9960260 = r9960257 * r9960259;
        double r9960261 = r9960256 + r9960260;
        double r9960262 = -44826624.0;
        double r9960263 = r9960259 * r9960225;
        double r9960264 = r9960263 * r9960225;
        double r9960265 = r9960262 * r9960264;
        double r9960266 = r9960261 + r9960265;
        double r9960267 = 524288.0;
        double r9960268 = r9960264 * r9960225;
        double r9960269 = r9960268 * r9960225;
        double r9960270 = r9960267 * r9960269;
        double r9960271 = r9960266 + r9960270;
        return r9960271;
}


double f_of(float x) {
        float r9960272 = x;
        float r9960273 = r9960272 * r9960272;
        float r9960274 = r9960273 * r9960273;
        float r9960275 = 3;
        float r9960276 = pow(r9960272, r9960275);
        float r9960277 = r9960276 * r9960276;
        float r9960278 = r9960276 * r9960277;
        float r9960279 = r9960274 * r9960278;
        float r9960280 = 1524105216.0;
        float r9960281 = r9960280 * r9960272;
        float r9960282 = r9960272 * r9960281;
        float r9960283 = -26671841280.0;
        float r9960284 = r9960282 + r9960283;
        float r9960285 = r9960279 * r9960284;
        float r9960286 = r9960277 * r9960274;
        float r9960287 = r9960286 * r9960274;
        float r9960288 = r9960276 * r9960287;
        float r9960289 = 524288.0;
        float r9960290 = r9960289 * r9960272;
        float r9960291 = r9960272 * r9960290;
        float r9960292 = -44826624.0;
        float r9960293 = r9960291 + r9960292;
        float r9960294 = r9960288 * r9960293;
        float r9960295 = r9960285 + r9960294;
        float r9960296 = 260050452480.0;
        float r9960297 = r9960296 * r9960273;
        float r9960298 = -1430277488640.0;
        float r9960299 = r9960297 + r9960298;
        float r9960300 = r9960278 * r9960299;
        float r9960301 = -670442572800.0;
        float r9960302 = r9960301 * r9960272;
        float r9960303 = r9960300 + r9960302;
        float r9960304 = -6436248698880.0;
        float r9960305 = r9960272 * r9960304;
        float r9960306 = r9960305 * r9960273;
        float r9960307 = 4022655436800.0;
        float r9960308 = r9960307 * r9960272;
        float r9960309 = r9960306 + r9960308;
        float r9960310 = r9960273 * r9960309;
        float r9960311 = 4290832465920.0;
        float r9960312 = r9960311 * r9960272;
        float r9960313 = r9960312 * r9960273;
        float r9960314 = r9960313 * r9960274;
        float r9960315 = r9960310 + r9960314;
        float r9960316 = r9960303 + r9960315;
        float r9960317 = r9960295 + r9960316;
        return r9960317;
}

double f_od(double x) {
        double r9960318 = x;
        double r9960319 = r9960318 * r9960318;
        double r9960320 = r9960319 * r9960319;
        double r9960321 = 3;
        double r9960322 = pow(r9960318, r9960321);
        double r9960323 = r9960322 * r9960322;
        double r9960324 = r9960322 * r9960323;
        double r9960325 = r9960320 * r9960324;
        double r9960326 = 1524105216.0;
        double r9960327 = r9960326 * r9960318;
        double r9960328 = r9960318 * r9960327;
        double r9960329 = -26671841280.0;
        double r9960330 = r9960328 + r9960329;
        double r9960331 = r9960325 * r9960330;
        double r9960332 = r9960323 * r9960320;
        double r9960333 = r9960332 * r9960320;
        double r9960334 = r9960322 * r9960333;
        double r9960335 = 524288.0;
        double r9960336 = r9960335 * r9960318;
        double r9960337 = r9960318 * r9960336;
        double r9960338 = -44826624.0;
        double r9960339 = r9960337 + r9960338;
        double r9960340 = r9960334 * r9960339;
        double r9960341 = r9960331 + r9960340;
        double r9960342 = 260050452480.0;
        double r9960343 = r9960342 * r9960319;
        double r9960344 = -1430277488640.0;
        double r9960345 = r9960343 + r9960344;
        double r9960346 = r9960324 * r9960345;
        double r9960347 = -670442572800.0;
        double r9960348 = r9960347 * r9960318;
        double r9960349 = r9960346 + r9960348;
        double r9960350 = -6436248698880.0;
        double r9960351 = r9960318 * r9960350;
        double r9960352 = r9960351 * r9960319;
        double r9960353 = 4022655436800.0;
        double r9960354 = r9960353 * r9960318;
        double r9960355 = r9960352 + r9960354;
        double r9960356 = r9960319 * r9960355;
        double r9960357 = 4290832465920.0;
        double r9960358 = r9960357 * r9960318;
        double r9960359 = r9960358 * r9960319;
        double r9960360 = r9960359 * r9960320;
        double r9960361 = r9960356 + r9960360;
        double r9960362 = r9960349 + r9960361;
        double r9960363 = r9960341 + r9960362;
        return r9960363;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9960364, r9960365, r9960366, r9960367, r9960368, r9960369, r9960370, r9960371, r9960372, r9960373, r9960374, r9960375, r9960376, r9960377, r9960378, r9960379, r9960380, r9960381, r9960382, r9960383, r9960384, r9960385, r9960386, r9960387, r9960388, r9960389, r9960390, r9960391, r9960392, r9960393, r9960394, r9960395, r9960396, r9960397, r9960398, r9960399, r9960400, r9960401, r9960402, r9960403, r9960404, r9960405, r9960406, r9960407, r9960408, r9960409, r9960410, r9960411;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9960364, "-670442572800.0", 10, MPFR_RNDN);
        mpfr_init(r9960365);
        mpfr_init(r9960366);
        mpfr_init_set_str(r9960367, "4022655436800.0", 10, MPFR_RNDN);
        mpfr_init(r9960368);
        mpfr_init(r9960369);
        mpfr_init(r9960370);
        mpfr_init(r9960371);
        mpfr_init_set_str(r9960372, "-6436248698880.0", 10, MPFR_RNDN);
        mpfr_init(r9960373);
        mpfr_init(r9960374);
        mpfr_init(r9960375);
        mpfr_init(r9960376);
        mpfr_init_set_str(r9960377, "4290832465920.0", 10, MPFR_RNDN);
        mpfr_init(r9960378);
        mpfr_init(r9960379);
        mpfr_init(r9960380);
        mpfr_init(r9960381);
        mpfr_init_set_str(r9960382, "-1430277488640.0", 10, MPFR_RNDN);
        mpfr_init(r9960383);
        mpfr_init(r9960384);
        mpfr_init(r9960385);
        mpfr_init(r9960386);
        mpfr_init_set_str(r9960387, "260050452480.0", 10, MPFR_RNDN);
        mpfr_init(r9960388);
        mpfr_init(r9960389);
        mpfr_init(r9960390);
        mpfr_init(r9960391);
        mpfr_init_set_str(r9960392, "-26671841280.0", 10, MPFR_RNDN);
        mpfr_init(r9960393);
        mpfr_init(r9960394);
        mpfr_init(r9960395);
        mpfr_init(r9960396);
        mpfr_init_set_str(r9960397, "1524105216.0", 10, MPFR_RNDN);
        mpfr_init(r9960398);
        mpfr_init(r9960399);
        mpfr_init(r9960400);
        mpfr_init(r9960401);
        mpfr_init_set_str(r9960402, "-44826624.0", 10, MPFR_RNDN);
        mpfr_init(r9960403);
        mpfr_init(r9960404);
        mpfr_init(r9960405);
        mpfr_init(r9960406);
        mpfr_init_set_str(r9960407, "524288.0", 10, MPFR_RNDN);
        mpfr_init(r9960408);
        mpfr_init(r9960409);
        mpfr_init(r9960410);
        mpfr_init(r9960411);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9960365, x, MPFR_RNDN);
        mpfr_mul(r9960366, r9960364, r9960365, MPFR_RNDN);
        ;
        mpfr_mul(r9960368, r9960365, r9960365, MPFR_RNDN);
        mpfr_mul(r9960369, r9960368, r9960365, MPFR_RNDN);
        mpfr_mul(r9960370, r9960367, r9960369, MPFR_RNDN);
        mpfr_add(r9960371, r9960366, r9960370, MPFR_RNDN);
        ;
        mpfr_mul(r9960373, r9960369, r9960365, MPFR_RNDN);
        mpfr_mul(r9960374, r9960373, r9960365, MPFR_RNDN);
        mpfr_mul(r9960375, r9960372, r9960374, MPFR_RNDN);
        mpfr_add(r9960376, r9960371, r9960375, MPFR_RNDN);
        ;
        mpfr_mul(r9960378, r9960374, r9960365, MPFR_RNDN);
        mpfr_mul(r9960379, r9960378, r9960365, MPFR_RNDN);
        mpfr_mul(r9960380, r9960377, r9960379, MPFR_RNDN);
        mpfr_add(r9960381, r9960376, r9960380, MPFR_RNDN);
        ;
        mpfr_mul(r9960383, r9960379, r9960365, MPFR_RNDN);
        mpfr_mul(r9960384, r9960383, r9960365, MPFR_RNDN);
        mpfr_mul(r9960385, r9960382, r9960384, MPFR_RNDN);
        mpfr_add(r9960386, r9960381, r9960385, MPFR_RNDN);
        ;
        mpfr_mul(r9960388, r9960384, r9960365, MPFR_RNDN);
        mpfr_mul(r9960389, r9960388, r9960365, MPFR_RNDN);
        mpfr_mul(r9960390, r9960387, r9960389, MPFR_RNDN);
        mpfr_add(r9960391, r9960386, r9960390, MPFR_RNDN);
        ;
        mpfr_mul(r9960393, r9960389, r9960365, MPFR_RNDN);
        mpfr_mul(r9960394, r9960393, r9960365, MPFR_RNDN);
        mpfr_mul(r9960395, r9960392, r9960394, MPFR_RNDN);
        mpfr_add(r9960396, r9960391, r9960395, MPFR_RNDN);
        ;
        mpfr_mul(r9960398, r9960394, r9960365, MPFR_RNDN);
        mpfr_mul(r9960399, r9960398, r9960365, MPFR_RNDN);
        mpfr_mul(r9960400, r9960397, r9960399, MPFR_RNDN);
        mpfr_add(r9960401, r9960396, r9960400, MPFR_RNDN);
        ;
        mpfr_mul(r9960403, r9960399, r9960365, MPFR_RNDN);
        mpfr_mul(r9960404, r9960403, r9960365, MPFR_RNDN);
        mpfr_mul(r9960405, r9960402, r9960404, MPFR_RNDN);
        mpfr_add(r9960406, r9960401, r9960405, MPFR_RNDN);
        ;
        mpfr_mul(r9960408, r9960404, r9960365, MPFR_RNDN);
        mpfr_mul(r9960409, r9960408, r9960365, MPFR_RNDN);
        mpfr_mul(r9960410, r9960407, r9960409, MPFR_RNDN);
        mpfr_add(r9960411, r9960406, r9960410, MPFR_RNDN);
        return mpfr_get_d(r9960411, MPFR_RNDN);
}

static mpfr_t r9960412, r9960413, r9960414, r9960415, r9960416, r9960417, r9960418, r9960419, r9960420, r9960421, r9960422, r9960423, r9960424, r9960425, r9960426, r9960427, r9960428, r9960429, r9960430, r9960431, r9960432, r9960433, r9960434, r9960435, r9960436, r9960437, r9960438, r9960439, r9960440, r9960441, r9960442, r9960443, r9960444, r9960445, r9960446, r9960447, r9960448, r9960449, r9960450, r9960451, r9960452, r9960453, r9960454, r9960455, r9960456, r9960457;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9960412);
        mpfr_init(r9960413);
        mpfr_init(r9960414);
        mpfr_init_set_str(r9960415, "3", 10, MPFR_RNDN);
        mpfr_init(r9960416);
        mpfr_init(r9960417);
        mpfr_init(r9960418);
        mpfr_init(r9960419);
        mpfr_init_set_str(r9960420, "1524105216.0", 10, MPFR_RNDN);
        mpfr_init(r9960421);
        mpfr_init(r9960422);
        mpfr_init_set_str(r9960423, "-26671841280.0", 10, MPFR_RNDN);
        mpfr_init(r9960424);
        mpfr_init(r9960425);
        mpfr_init(r9960426);
        mpfr_init(r9960427);
        mpfr_init(r9960428);
        mpfr_init_set_str(r9960429, "524288.0", 10, MPFR_RNDN);
        mpfr_init(r9960430);
        mpfr_init(r9960431);
        mpfr_init_set_str(r9960432, "-44826624.0", 10, MPFR_RNDN);
        mpfr_init(r9960433);
        mpfr_init(r9960434);
        mpfr_init(r9960435);
        mpfr_init_set_str(r9960436, "260050452480.0", 10, MPFR_RNDN);
        mpfr_init(r9960437);
        mpfr_init_set_str(r9960438, "-1430277488640.0", 10, MPFR_RNDN);
        mpfr_init(r9960439);
        mpfr_init(r9960440);
        mpfr_init_set_str(r9960441, "-670442572800.0", 10, MPFR_RNDN);
        mpfr_init(r9960442);
        mpfr_init(r9960443);
        mpfr_init_set_str(r9960444, "-6436248698880.0", 10, MPFR_RNDN);
        mpfr_init(r9960445);
        mpfr_init(r9960446);
        mpfr_init_set_str(r9960447, "4022655436800.0", 10, MPFR_RNDN);
        mpfr_init(r9960448);
        mpfr_init(r9960449);
        mpfr_init(r9960450);
        mpfr_init_set_str(r9960451, "4290832465920.0", 10, MPFR_RNDN);
        mpfr_init(r9960452);
        mpfr_init(r9960453);
        mpfr_init(r9960454);
        mpfr_init(r9960455);
        mpfr_init(r9960456);
        mpfr_init(r9960457);
}

double f_fm(double x) {
        mpfr_set_d(r9960412, x, MPFR_RNDN);
        mpfr_mul(r9960413, r9960412, r9960412, MPFR_RNDN);
        mpfr_mul(r9960414, r9960413, r9960413, MPFR_RNDN);
        ;
        mpfr_pow(r9960416, r9960412, r9960415, MPFR_RNDN);
        mpfr_mul(r9960417, r9960416, r9960416, MPFR_RNDN);
        mpfr_mul(r9960418, r9960416, r9960417, MPFR_RNDN);
        mpfr_mul(r9960419, r9960414, r9960418, MPFR_RNDN);
        ;
        mpfr_mul(r9960421, r9960420, r9960412, MPFR_RNDN);
        mpfr_mul(r9960422, r9960412, r9960421, MPFR_RNDN);
        ;
        mpfr_add(r9960424, r9960422, r9960423, MPFR_RNDN);
        mpfr_mul(r9960425, r9960419, r9960424, MPFR_RNDN);
        mpfr_mul(r9960426, r9960417, r9960414, MPFR_RNDN);
        mpfr_mul(r9960427, r9960426, r9960414, MPFR_RNDN);
        mpfr_mul(r9960428, r9960416, r9960427, MPFR_RNDN);
        ;
        mpfr_mul(r9960430, r9960429, r9960412, MPFR_RNDN);
        mpfr_mul(r9960431, r9960412, r9960430, MPFR_RNDN);
        ;
        mpfr_add(r9960433, r9960431, r9960432, MPFR_RNDN);
        mpfr_mul(r9960434, r9960428, r9960433, MPFR_RNDN);
        mpfr_add(r9960435, r9960425, r9960434, MPFR_RNDN);
        ;
        mpfr_mul(r9960437, r9960436, r9960413, MPFR_RNDN);
        ;
        mpfr_add(r9960439, r9960437, r9960438, MPFR_RNDN);
        mpfr_mul(r9960440, r9960418, r9960439, MPFR_RNDN);
        ;
        mpfr_mul(r9960442, r9960441, r9960412, MPFR_RNDN);
        mpfr_add(r9960443, r9960440, r9960442, MPFR_RNDN);
        ;
        mpfr_mul(r9960445, r9960412, r9960444, MPFR_RNDN);
        mpfr_mul(r9960446, r9960445, r9960413, MPFR_RNDN);
        ;
        mpfr_mul(r9960448, r9960447, r9960412, MPFR_RNDN);
        mpfr_add(r9960449, r9960446, r9960448, MPFR_RNDN);
        mpfr_mul(r9960450, r9960413, r9960449, MPFR_RNDN);
        ;
        mpfr_mul(r9960452, r9960451, r9960412, MPFR_RNDN);
        mpfr_mul(r9960453, r9960452, r9960413, MPFR_RNDN);
        mpfr_mul(r9960454, r9960453, r9960414, MPFR_RNDN);
        mpfr_add(r9960455, r9960450, r9960454, MPFR_RNDN);
        mpfr_add(r9960456, r9960443, r9960455, MPFR_RNDN);
        mpfr_add(r9960457, r9960435, r9960456, MPFR_RNDN);
        return mpfr_get_d(r9960457, MPFR_RNDN);
}

static mpfr_t r9960458, r9960459, r9960460, r9960461, r9960462, r9960463, r9960464, r9960465, r9960466, r9960467, r9960468, r9960469, r9960470, r9960471, r9960472, r9960473, r9960474, r9960475, r9960476, r9960477, r9960478, r9960479, r9960480, r9960481, r9960482, r9960483, r9960484, r9960485, r9960486, r9960487, r9960488, r9960489, r9960490, r9960491, r9960492, r9960493, r9960494, r9960495, r9960496, r9960497, r9960498, r9960499, r9960500, r9960501, r9960502, r9960503;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9960458);
        mpfr_init(r9960459);
        mpfr_init(r9960460);
        mpfr_init_set_str(r9960461, "3", 10, MPFR_RNDN);
        mpfr_init(r9960462);
        mpfr_init(r9960463);
        mpfr_init(r9960464);
        mpfr_init(r9960465);
        mpfr_init_set_str(r9960466, "1524105216.0", 10, MPFR_RNDN);
        mpfr_init(r9960467);
        mpfr_init(r9960468);
        mpfr_init_set_str(r9960469, "-26671841280.0", 10, MPFR_RNDN);
        mpfr_init(r9960470);
        mpfr_init(r9960471);
        mpfr_init(r9960472);
        mpfr_init(r9960473);
        mpfr_init(r9960474);
        mpfr_init_set_str(r9960475, "524288.0", 10, MPFR_RNDN);
        mpfr_init(r9960476);
        mpfr_init(r9960477);
        mpfr_init_set_str(r9960478, "-44826624.0", 10, MPFR_RNDN);
        mpfr_init(r9960479);
        mpfr_init(r9960480);
        mpfr_init(r9960481);
        mpfr_init_set_str(r9960482, "260050452480.0", 10, MPFR_RNDN);
        mpfr_init(r9960483);
        mpfr_init_set_str(r9960484, "-1430277488640.0", 10, MPFR_RNDN);
        mpfr_init(r9960485);
        mpfr_init(r9960486);
        mpfr_init_set_str(r9960487, "-670442572800.0", 10, MPFR_RNDN);
        mpfr_init(r9960488);
        mpfr_init(r9960489);
        mpfr_init_set_str(r9960490, "-6436248698880.0", 10, MPFR_RNDN);
        mpfr_init(r9960491);
        mpfr_init(r9960492);
        mpfr_init_set_str(r9960493, "4022655436800.0", 10, MPFR_RNDN);
        mpfr_init(r9960494);
        mpfr_init(r9960495);
        mpfr_init(r9960496);
        mpfr_init_set_str(r9960497, "4290832465920.0", 10, MPFR_RNDN);
        mpfr_init(r9960498);
        mpfr_init(r9960499);
        mpfr_init(r9960500);
        mpfr_init(r9960501);
        mpfr_init(r9960502);
        mpfr_init(r9960503);
}

double f_dm(double x) {
        mpfr_set_d(r9960458, x, MPFR_RNDN);
        mpfr_mul(r9960459, r9960458, r9960458, MPFR_RNDN);
        mpfr_mul(r9960460, r9960459, r9960459, MPFR_RNDN);
        ;
        mpfr_pow(r9960462, r9960458, r9960461, MPFR_RNDN);
        mpfr_mul(r9960463, r9960462, r9960462, MPFR_RNDN);
        mpfr_mul(r9960464, r9960462, r9960463, MPFR_RNDN);
        mpfr_mul(r9960465, r9960460, r9960464, MPFR_RNDN);
        ;
        mpfr_mul(r9960467, r9960466, r9960458, MPFR_RNDN);
        mpfr_mul(r9960468, r9960458, r9960467, MPFR_RNDN);
        ;
        mpfr_add(r9960470, r9960468, r9960469, MPFR_RNDN);
        mpfr_mul(r9960471, r9960465, r9960470, MPFR_RNDN);
        mpfr_mul(r9960472, r9960463, r9960460, MPFR_RNDN);
        mpfr_mul(r9960473, r9960472, r9960460, MPFR_RNDN);
        mpfr_mul(r9960474, r9960462, r9960473, MPFR_RNDN);
        ;
        mpfr_mul(r9960476, r9960475, r9960458, MPFR_RNDN);
        mpfr_mul(r9960477, r9960458, r9960476, MPFR_RNDN);
        ;
        mpfr_add(r9960479, r9960477, r9960478, MPFR_RNDN);
        mpfr_mul(r9960480, r9960474, r9960479, MPFR_RNDN);
        mpfr_add(r9960481, r9960471, r9960480, MPFR_RNDN);
        ;
        mpfr_mul(r9960483, r9960482, r9960459, MPFR_RNDN);
        ;
        mpfr_add(r9960485, r9960483, r9960484, MPFR_RNDN);
        mpfr_mul(r9960486, r9960464, r9960485, MPFR_RNDN);
        ;
        mpfr_mul(r9960488, r9960487, r9960458, MPFR_RNDN);
        mpfr_add(r9960489, r9960486, r9960488, MPFR_RNDN);
        ;
        mpfr_mul(r9960491, r9960458, r9960490, MPFR_RNDN);
        mpfr_mul(r9960492, r9960491, r9960459, MPFR_RNDN);
        ;
        mpfr_mul(r9960494, r9960493, r9960458, MPFR_RNDN);
        mpfr_add(r9960495, r9960492, r9960494, MPFR_RNDN);
        mpfr_mul(r9960496, r9960459, r9960495, MPFR_RNDN);
        ;
        mpfr_mul(r9960498, r9960497, r9960458, MPFR_RNDN);
        mpfr_mul(r9960499, r9960498, r9960459, MPFR_RNDN);
        mpfr_mul(r9960500, r9960499, r9960460, MPFR_RNDN);
        mpfr_add(r9960501, r9960496, r9960500, MPFR_RNDN);
        mpfr_add(r9960502, r9960489, r9960501, MPFR_RNDN);
        mpfr_add(r9960503, r9960481, r9960502, MPFR_RNDN);
        return mpfr_get_d(r9960503, MPFR_RNDN);
}
