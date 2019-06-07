#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r6408229 = 2.932617;
        float r6408230 = x;
        float r6408231 = r6408229 * r6408230;
        float r6408232 = -87.978516;
        float r6408233 = r6408230 * r6408230;
        float r6408234 = r6408233 * r6408230;
        float r6408235 = r6408232 * r6408234;
        float r6408236 = r6408231 + r6408235;
        float r6408237 = 747.817383;
        float r6408238 = r6408234 * r6408230;
        float r6408239 = r6408238 * r6408230;
        float r6408240 = r6408237 * r6408239;
        float r6408241 = r6408236 + r6408240;
        float r6408242 = -2706.386719;
        float r6408243 = r6408239 * r6408230;
        float r6408244 = r6408243 * r6408230;
        float r6408245 = r6408242 * r6408244;
        float r6408246 = r6408241 + r6408245;
        float r6408247 = 4736.176758;
        float r6408248 = r6408244 * r6408230;
        float r6408249 = r6408248 * r6408230;
        float r6408250 = r6408247 * r6408249;
        float r6408251 = r6408246 + r6408250;
        float r6408252 = -3961.166016;
        float r6408253 = r6408249 * r6408230;
        float r6408254 = r6408253 * r6408230;
        float r6408255 = r6408252 * r6408254;
        float r6408256 = r6408251 + r6408255;
        float r6408257 = 1269.604492;
        float r6408258 = r6408254 * r6408230;
        float r6408259 = r6408258 * r6408230;
        float r6408260 = r6408257 * r6408259;
        float r6408261 = r6408256 + r6408260;
        return r6408261;
}

double f_id(double x) {
        double r6408262 = 2.932617;
        double r6408263 = x;
        double r6408264 = r6408262 * r6408263;
        double r6408265 = -87.978516;
        double r6408266 = r6408263 * r6408263;
        double r6408267 = r6408266 * r6408263;
        double r6408268 = r6408265 * r6408267;
        double r6408269 = r6408264 + r6408268;
        double r6408270 = 747.817383;
        double r6408271 = r6408267 * r6408263;
        double r6408272 = r6408271 * r6408263;
        double r6408273 = r6408270 * r6408272;
        double r6408274 = r6408269 + r6408273;
        double r6408275 = -2706.386719;
        double r6408276 = r6408272 * r6408263;
        double r6408277 = r6408276 * r6408263;
        double r6408278 = r6408275 * r6408277;
        double r6408279 = r6408274 + r6408278;
        double r6408280 = 4736.176758;
        double r6408281 = r6408277 * r6408263;
        double r6408282 = r6408281 * r6408263;
        double r6408283 = r6408280 * r6408282;
        double r6408284 = r6408279 + r6408283;
        double r6408285 = -3961.166016;
        double r6408286 = r6408282 * r6408263;
        double r6408287 = r6408286 * r6408263;
        double r6408288 = r6408285 * r6408287;
        double r6408289 = r6408284 + r6408288;
        double r6408290 = 1269.604492;
        double r6408291 = r6408287 * r6408263;
        double r6408292 = r6408291 * r6408263;
        double r6408293 = r6408290 * r6408292;
        double r6408294 = r6408289 + r6408293;
        return r6408294;
}


double f_of(float x) {
        float r6408295 = x;
        float r6408296 = r6408295 * r6408295;
        float r6408297 = 3;
        float r6408298 = pow(r6408295, r6408297);
        float r6408299 = r6408298 * r6408298;
        float r6408300 = r6408298 * r6408299;
        float r6408301 = r6408296 * r6408300;
        float r6408302 = 1269.604492;
        float r6408303 = r6408296 * r6408302;
        float r6408304 = -3961.166016;
        float r6408305 = r6408303 + r6408304;
        float r6408306 = r6408301 * r6408305;
        float r6408307 = 747.817383;
        float r6408308 = r6408295 * r6408307;
        float r6408309 = r6408308 * r6408296;
        float r6408310 = r6408296 * r6408309;
        float r6408311 = 2.932617;
        float r6408312 = r6408311 * r6408295;
        float r6408313 = -87.978516;
        float r6408314 = r6408313 * r6408295;
        float r6408315 = r6408296 * r6408314;
        float r6408316 = r6408312 + r6408315;
        float r6408317 = r6408310 + r6408316;
        float r6408318 = r6408299 * r6408295;
        float r6408319 = -2706.386719;
        float r6408320 = 4736.176758;
        float r6408321 = r6408320 * r6408295;
        float r6408322 = r6408295 * r6408321;
        float r6408323 = r6408319 + r6408322;
        float r6408324 = r6408318 * r6408323;
        float r6408325 = r6408317 + r6408324;
        float r6408326 = r6408306 + r6408325;
        return r6408326;
}

double f_od(double x) {
        double r6408327 = x;
        double r6408328 = r6408327 * r6408327;
        double r6408329 = 3;
        double r6408330 = pow(r6408327, r6408329);
        double r6408331 = r6408330 * r6408330;
        double r6408332 = r6408330 * r6408331;
        double r6408333 = r6408328 * r6408332;
        double r6408334 = 1269.604492;
        double r6408335 = r6408328 * r6408334;
        double r6408336 = -3961.166016;
        double r6408337 = r6408335 + r6408336;
        double r6408338 = r6408333 * r6408337;
        double r6408339 = 747.817383;
        double r6408340 = r6408327 * r6408339;
        double r6408341 = r6408340 * r6408328;
        double r6408342 = r6408328 * r6408341;
        double r6408343 = 2.932617;
        double r6408344 = r6408343 * r6408327;
        double r6408345 = -87.978516;
        double r6408346 = r6408345 * r6408327;
        double r6408347 = r6408328 * r6408346;
        double r6408348 = r6408344 + r6408347;
        double r6408349 = r6408342 + r6408348;
        double r6408350 = r6408331 * r6408327;
        double r6408351 = -2706.386719;
        double r6408352 = 4736.176758;
        double r6408353 = r6408352 * r6408327;
        double r6408354 = r6408327 * r6408353;
        double r6408355 = r6408351 + r6408354;
        double r6408356 = r6408350 * r6408355;
        double r6408357 = r6408349 + r6408356;
        double r6408358 = r6408338 + r6408357;
        return r6408358;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6408359, r6408360, r6408361, r6408362, r6408363, r6408364, r6408365, r6408366, r6408367, r6408368, r6408369, r6408370, r6408371, r6408372, r6408373, r6408374, r6408375, r6408376, r6408377, r6408378, r6408379, r6408380, r6408381, r6408382, r6408383, r6408384, r6408385, r6408386, r6408387, r6408388, r6408389, r6408390, r6408391;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6408359, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6408360);
        mpfr_init(r6408361);
        mpfr_init_set_str(r6408362, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6408363);
        mpfr_init(r6408364);
        mpfr_init(r6408365);
        mpfr_init(r6408366);
        mpfr_init_set_str(r6408367, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6408368);
        mpfr_init(r6408369);
        mpfr_init(r6408370);
        mpfr_init(r6408371);
        mpfr_init_set_str(r6408372, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r6408373);
        mpfr_init(r6408374);
        mpfr_init(r6408375);
        mpfr_init(r6408376);
        mpfr_init_set_str(r6408377, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6408378);
        mpfr_init(r6408379);
        mpfr_init(r6408380);
        mpfr_init(r6408381);
        mpfr_init_set_str(r6408382, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r6408383);
        mpfr_init(r6408384);
        mpfr_init(r6408385);
        mpfr_init(r6408386);
        mpfr_init_set_str(r6408387, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6408388);
        mpfr_init(r6408389);
        mpfr_init(r6408390);
        mpfr_init(r6408391);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6408360, x, MPFR_RNDN);
        mpfr_mul(r6408361, r6408359, r6408360, MPFR_RNDN);
        ;
        mpfr_mul(r6408363, r6408360, r6408360, MPFR_RNDN);
        mpfr_mul(r6408364, r6408363, r6408360, MPFR_RNDN);
        mpfr_mul(r6408365, r6408362, r6408364, MPFR_RNDN);
        mpfr_add(r6408366, r6408361, r6408365, MPFR_RNDN);
        ;
        mpfr_mul(r6408368, r6408364, r6408360, MPFR_RNDN);
        mpfr_mul(r6408369, r6408368, r6408360, MPFR_RNDN);
        mpfr_mul(r6408370, r6408367, r6408369, MPFR_RNDN);
        mpfr_add(r6408371, r6408366, r6408370, MPFR_RNDN);
        ;
        mpfr_mul(r6408373, r6408369, r6408360, MPFR_RNDN);
        mpfr_mul(r6408374, r6408373, r6408360, MPFR_RNDN);
        mpfr_mul(r6408375, r6408372, r6408374, MPFR_RNDN);
        mpfr_add(r6408376, r6408371, r6408375, MPFR_RNDN);
        ;
        mpfr_mul(r6408378, r6408374, r6408360, MPFR_RNDN);
        mpfr_mul(r6408379, r6408378, r6408360, MPFR_RNDN);
        mpfr_mul(r6408380, r6408377, r6408379, MPFR_RNDN);
        mpfr_add(r6408381, r6408376, r6408380, MPFR_RNDN);
        ;
        mpfr_mul(r6408383, r6408379, r6408360, MPFR_RNDN);
        mpfr_mul(r6408384, r6408383, r6408360, MPFR_RNDN);
        mpfr_mul(r6408385, r6408382, r6408384, MPFR_RNDN);
        mpfr_add(r6408386, r6408381, r6408385, MPFR_RNDN);
        ;
        mpfr_mul(r6408388, r6408384, r6408360, MPFR_RNDN);
        mpfr_mul(r6408389, r6408388, r6408360, MPFR_RNDN);
        mpfr_mul(r6408390, r6408387, r6408389, MPFR_RNDN);
        mpfr_add(r6408391, r6408386, r6408390, MPFR_RNDN);
        return mpfr_get_d(r6408391, MPFR_RNDN);
}

static mpfr_t r6408392, r6408393, r6408394, r6408395, r6408396, r6408397, r6408398, r6408399, r6408400, r6408401, r6408402, r6408403, r6408404, r6408405, r6408406, r6408407, r6408408, r6408409, r6408410, r6408411, r6408412, r6408413, r6408414, r6408415, r6408416, r6408417, r6408418, r6408419, r6408420, r6408421, r6408422, r6408423;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6408392);
        mpfr_init(r6408393);
        mpfr_init_set_str(r6408394, "3", 10, MPFR_RNDN);
        mpfr_init(r6408395);
        mpfr_init(r6408396);
        mpfr_init(r6408397);
        mpfr_init(r6408398);
        mpfr_init_set_str(r6408399, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6408400);
        mpfr_init_set_str(r6408401, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r6408402);
        mpfr_init(r6408403);
        mpfr_init_set_str(r6408404, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6408405);
        mpfr_init(r6408406);
        mpfr_init(r6408407);
        mpfr_init_set_str(r6408408, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6408409);
        mpfr_init_set_str(r6408410, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6408411);
        mpfr_init(r6408412);
        mpfr_init(r6408413);
        mpfr_init(r6408414);
        mpfr_init(r6408415);
        mpfr_init_set_str(r6408416, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r6408417, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6408418);
        mpfr_init(r6408419);
        mpfr_init(r6408420);
        mpfr_init(r6408421);
        mpfr_init(r6408422);
        mpfr_init(r6408423);
}

double f_fm(double x) {
        mpfr_set_d(r6408392, x, MPFR_RNDN);
        mpfr_mul(r6408393, r6408392, r6408392, MPFR_RNDN);
        ;
        mpfr_pow(r6408395, r6408392, r6408394, MPFR_RNDN);
        mpfr_mul(r6408396, r6408395, r6408395, MPFR_RNDN);
        mpfr_mul(r6408397, r6408395, r6408396, MPFR_RNDN);
        mpfr_mul(r6408398, r6408393, r6408397, MPFR_RNDN);
        ;
        mpfr_mul(r6408400, r6408393, r6408399, MPFR_RNDN);
        ;
        mpfr_add(r6408402, r6408400, r6408401, MPFR_RNDN);
        mpfr_mul(r6408403, r6408398, r6408402, MPFR_RNDN);
        ;
        mpfr_mul(r6408405, r6408392, r6408404, MPFR_RNDN);
        mpfr_mul(r6408406, r6408405, r6408393, MPFR_RNDN);
        mpfr_mul(r6408407, r6408393, r6408406, MPFR_RNDN);
        ;
        mpfr_mul(r6408409, r6408408, r6408392, MPFR_RNDN);
        ;
        mpfr_mul(r6408411, r6408410, r6408392, MPFR_RNDN);
        mpfr_mul(r6408412, r6408393, r6408411, MPFR_RNDN);
        mpfr_add(r6408413, r6408409, r6408412, MPFR_RNDN);
        mpfr_add(r6408414, r6408407, r6408413, MPFR_RNDN);
        mpfr_mul(r6408415, r6408396, r6408392, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6408418, r6408417, r6408392, MPFR_RNDN);
        mpfr_mul(r6408419, r6408392, r6408418, MPFR_RNDN);
        mpfr_add(r6408420, r6408416, r6408419, MPFR_RNDN);
        mpfr_mul(r6408421, r6408415, r6408420, MPFR_RNDN);
        mpfr_add(r6408422, r6408414, r6408421, MPFR_RNDN);
        mpfr_add(r6408423, r6408403, r6408422, MPFR_RNDN);
        return mpfr_get_d(r6408423, MPFR_RNDN);
}

static mpfr_t r6408424, r6408425, r6408426, r6408427, r6408428, r6408429, r6408430, r6408431, r6408432, r6408433, r6408434, r6408435, r6408436, r6408437, r6408438, r6408439, r6408440, r6408441, r6408442, r6408443, r6408444, r6408445, r6408446, r6408447, r6408448, r6408449, r6408450, r6408451, r6408452, r6408453, r6408454, r6408455;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6408424);
        mpfr_init(r6408425);
        mpfr_init_set_str(r6408426, "3", 10, MPFR_RNDN);
        mpfr_init(r6408427);
        mpfr_init(r6408428);
        mpfr_init(r6408429);
        mpfr_init(r6408430);
        mpfr_init_set_str(r6408431, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6408432);
        mpfr_init_set_str(r6408433, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r6408434);
        mpfr_init(r6408435);
        mpfr_init_set_str(r6408436, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6408437);
        mpfr_init(r6408438);
        mpfr_init(r6408439);
        mpfr_init_set_str(r6408440, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6408441);
        mpfr_init_set_str(r6408442, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6408443);
        mpfr_init(r6408444);
        mpfr_init(r6408445);
        mpfr_init(r6408446);
        mpfr_init(r6408447);
        mpfr_init_set_str(r6408448, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r6408449, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6408450);
        mpfr_init(r6408451);
        mpfr_init(r6408452);
        mpfr_init(r6408453);
        mpfr_init(r6408454);
        mpfr_init(r6408455);
}

double f_dm(double x) {
        mpfr_set_d(r6408424, x, MPFR_RNDN);
        mpfr_mul(r6408425, r6408424, r6408424, MPFR_RNDN);
        ;
        mpfr_pow(r6408427, r6408424, r6408426, MPFR_RNDN);
        mpfr_mul(r6408428, r6408427, r6408427, MPFR_RNDN);
        mpfr_mul(r6408429, r6408427, r6408428, MPFR_RNDN);
        mpfr_mul(r6408430, r6408425, r6408429, MPFR_RNDN);
        ;
        mpfr_mul(r6408432, r6408425, r6408431, MPFR_RNDN);
        ;
        mpfr_add(r6408434, r6408432, r6408433, MPFR_RNDN);
        mpfr_mul(r6408435, r6408430, r6408434, MPFR_RNDN);
        ;
        mpfr_mul(r6408437, r6408424, r6408436, MPFR_RNDN);
        mpfr_mul(r6408438, r6408437, r6408425, MPFR_RNDN);
        mpfr_mul(r6408439, r6408425, r6408438, MPFR_RNDN);
        ;
        mpfr_mul(r6408441, r6408440, r6408424, MPFR_RNDN);
        ;
        mpfr_mul(r6408443, r6408442, r6408424, MPFR_RNDN);
        mpfr_mul(r6408444, r6408425, r6408443, MPFR_RNDN);
        mpfr_add(r6408445, r6408441, r6408444, MPFR_RNDN);
        mpfr_add(r6408446, r6408439, r6408445, MPFR_RNDN);
        mpfr_mul(r6408447, r6408428, r6408424, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6408450, r6408449, r6408424, MPFR_RNDN);
        mpfr_mul(r6408451, r6408424, r6408450, MPFR_RNDN);
        mpfr_add(r6408452, r6408448, r6408451, MPFR_RNDN);
        mpfr_mul(r6408453, r6408447, r6408452, MPFR_RNDN);
        mpfr_add(r6408454, r6408446, r6408453, MPFR_RNDN);
        mpfr_add(r6408455, r6408435, r6408454, MPFR_RNDN);
        return mpfr_get_d(r6408455, MPFR_RNDN);
}

