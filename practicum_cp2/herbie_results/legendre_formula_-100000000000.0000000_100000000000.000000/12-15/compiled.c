#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r6766209 = -3.14209;
        float r6766210 = x;
        float r6766211 = r6766209 * r6766210;
        float r6766212 = 124.63623;
        float r6766213 = r6766210 * r6766210;
        float r6766214 = r6766213 * r6766210;
        float r6766215 = r6766212 * r6766214;
        float r6766216 = r6766211 + r6766215;
        float r6766217 = -1420.853027;
        float r6766218 = r6766214 * r6766210;
        float r6766219 = r6766218 * r6766210;
        float r6766220 = r6766217 * r6766219;
        float r6766221 = r6766216 + r6766220;
        float r6766222 = 7104.265137;
        float r6766223 = r6766219 * r6766210;
        float r6766224 = r6766223 * r6766210;
        float r6766225 = r6766222 * r6766224;
        float r6766226 = r6766221 + r6766225;
        float r6766227 = -18155.344238;
        float r6766228 = r6766224 * r6766210;
        float r6766229 = r6766228 * r6766210;
        float r6766230 = r6766227 * r6766229;
        float r6766231 = r6766226 + r6766230;
        float r6766232 = 24757.287598;
        float r6766233 = r6766229 * r6766210;
        float r6766234 = r6766233 * r6766210;
        float r6766235 = r6766232 * r6766234;
        float r6766236 = r6766231 + r6766235;
        float r6766237 = -17139.660645;
        float r6766238 = r6766234 * r6766210;
        float r6766239 = r6766238 * r6766210;
        float r6766240 = r6766237 * r6766239;
        float r6766241 = r6766236 + r6766240;
        float r6766242 = 4733.811035;
        float r6766243 = r6766239 * r6766210;
        float r6766244 = r6766243 * r6766210;
        float r6766245 = r6766242 * r6766244;
        float r6766246 = r6766241 + r6766245;
        return r6766246;
}

double f_id(double x) {
        double r6766247 = -3.14209;
        double r6766248 = x;
        double r6766249 = r6766247 * r6766248;
        double r6766250 = 124.63623;
        double r6766251 = r6766248 * r6766248;
        double r6766252 = r6766251 * r6766248;
        double r6766253 = r6766250 * r6766252;
        double r6766254 = r6766249 + r6766253;
        double r6766255 = -1420.853027;
        double r6766256 = r6766252 * r6766248;
        double r6766257 = r6766256 * r6766248;
        double r6766258 = r6766255 * r6766257;
        double r6766259 = r6766254 + r6766258;
        double r6766260 = 7104.265137;
        double r6766261 = r6766257 * r6766248;
        double r6766262 = r6766261 * r6766248;
        double r6766263 = r6766260 * r6766262;
        double r6766264 = r6766259 + r6766263;
        double r6766265 = -18155.344238;
        double r6766266 = r6766262 * r6766248;
        double r6766267 = r6766266 * r6766248;
        double r6766268 = r6766265 * r6766267;
        double r6766269 = r6766264 + r6766268;
        double r6766270 = 24757.287598;
        double r6766271 = r6766267 * r6766248;
        double r6766272 = r6766271 * r6766248;
        double r6766273 = r6766270 * r6766272;
        double r6766274 = r6766269 + r6766273;
        double r6766275 = -17139.660645;
        double r6766276 = r6766272 * r6766248;
        double r6766277 = r6766276 * r6766248;
        double r6766278 = r6766275 * r6766277;
        double r6766279 = r6766274 + r6766278;
        double r6766280 = 4733.811035;
        double r6766281 = r6766277 * r6766248;
        double r6766282 = r6766281 * r6766248;
        double r6766283 = r6766280 * r6766282;
        double r6766284 = r6766279 + r6766283;
        return r6766284;
}


double f_of(float x) {
        float r6766285 = x;
        float r6766286 = r6766285 * r6766285;
        float r6766287 = r6766286 * r6766286;
        float r6766288 = 3;
        float r6766289 = pow(r6766285, r6766288);
        float r6766290 = r6766289 * r6766289;
        float r6766291 = r6766289 * r6766290;
        float r6766292 = r6766287 * r6766291;
        float r6766293 = 4733.811035;
        float r6766294 = r6766293 * r6766285;
        float r6766295 = r6766285 * r6766294;
        float r6766296 = -17139.660645;
        float r6766297 = r6766295 + r6766296;
        float r6766298 = r6766292 * r6766297;
        float r6766299 = 7104.265137;
        float r6766300 = r6766299 * r6766285;
        float r6766301 = r6766300 * r6766286;
        float r6766302 = r6766301 * r6766287;
        float r6766303 = -3.14209;
        float r6766304 = r6766303 * r6766285;
        float r6766305 = r6766302 + r6766304;
        float r6766306 = -1420.853027;
        float r6766307 = r6766285 * r6766306;
        float r6766308 = r6766307 * r6766286;
        float r6766309 = 124.63623;
        float r6766310 = r6766309 * r6766285;
        float r6766311 = r6766308 + r6766310;
        float r6766312 = r6766286 * r6766311;
        float r6766313 = r6766305 + r6766312;
        float r6766314 = r6766298 + r6766313;
        float r6766315 = -18155.344238;
        float r6766316 = 24757.287598;
        float r6766317 = r6766285 * r6766316;
        float r6766318 = r6766285 * r6766317;
        float r6766319 = r6766315 + r6766318;
        float r6766320 = r6766291 * r6766319;
        float r6766321 = r6766314 + r6766320;
        return r6766321;
}

double f_od(double x) {
        double r6766322 = x;
        double r6766323 = r6766322 * r6766322;
        double r6766324 = r6766323 * r6766323;
        double r6766325 = 3;
        double r6766326 = pow(r6766322, r6766325);
        double r6766327 = r6766326 * r6766326;
        double r6766328 = r6766326 * r6766327;
        double r6766329 = r6766324 * r6766328;
        double r6766330 = 4733.811035;
        double r6766331 = r6766330 * r6766322;
        double r6766332 = r6766322 * r6766331;
        double r6766333 = -17139.660645;
        double r6766334 = r6766332 + r6766333;
        double r6766335 = r6766329 * r6766334;
        double r6766336 = 7104.265137;
        double r6766337 = r6766336 * r6766322;
        double r6766338 = r6766337 * r6766323;
        double r6766339 = r6766338 * r6766324;
        double r6766340 = -3.14209;
        double r6766341 = r6766340 * r6766322;
        double r6766342 = r6766339 + r6766341;
        double r6766343 = -1420.853027;
        double r6766344 = r6766322 * r6766343;
        double r6766345 = r6766344 * r6766323;
        double r6766346 = 124.63623;
        double r6766347 = r6766346 * r6766322;
        double r6766348 = r6766345 + r6766347;
        double r6766349 = r6766323 * r6766348;
        double r6766350 = r6766342 + r6766349;
        double r6766351 = r6766335 + r6766350;
        double r6766352 = -18155.344238;
        double r6766353 = 24757.287598;
        double r6766354 = r6766322 * r6766353;
        double r6766355 = r6766322 * r6766354;
        double r6766356 = r6766352 + r6766355;
        double r6766357 = r6766328 * r6766356;
        double r6766358 = r6766351 + r6766357;
        return r6766358;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6766359, r6766360, r6766361, r6766362, r6766363, r6766364, r6766365, r6766366, r6766367, r6766368, r6766369, r6766370, r6766371, r6766372, r6766373, r6766374, r6766375, r6766376, r6766377, r6766378, r6766379, r6766380, r6766381, r6766382, r6766383, r6766384, r6766385, r6766386, r6766387, r6766388, r6766389, r6766390, r6766391, r6766392, r6766393, r6766394, r6766395, r6766396;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6766359, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6766360);
        mpfr_init(r6766361);
        mpfr_init_set_str(r6766362, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6766363);
        mpfr_init(r6766364);
        mpfr_init(r6766365);
        mpfr_init(r6766366);
        mpfr_init_set_str(r6766367, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6766368);
        mpfr_init(r6766369);
        mpfr_init(r6766370);
        mpfr_init(r6766371);
        mpfr_init_set_str(r6766372, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6766373);
        mpfr_init(r6766374);
        mpfr_init(r6766375);
        mpfr_init(r6766376);
        mpfr_init_set_str(r6766377, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r6766378);
        mpfr_init(r6766379);
        mpfr_init(r6766380);
        mpfr_init(r6766381);
        mpfr_init_set_str(r6766382, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6766383);
        mpfr_init(r6766384);
        mpfr_init(r6766385);
        mpfr_init(r6766386);
        mpfr_init_set_str(r6766387, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r6766388);
        mpfr_init(r6766389);
        mpfr_init(r6766390);
        mpfr_init(r6766391);
        mpfr_init_set_str(r6766392, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6766393);
        mpfr_init(r6766394);
        mpfr_init(r6766395);
        mpfr_init(r6766396);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6766360, x, MPFR_RNDN);
        mpfr_mul(r6766361, r6766359, r6766360, MPFR_RNDN);
        ;
        mpfr_mul(r6766363, r6766360, r6766360, MPFR_RNDN);
        mpfr_mul(r6766364, r6766363, r6766360, MPFR_RNDN);
        mpfr_mul(r6766365, r6766362, r6766364, MPFR_RNDN);
        mpfr_add(r6766366, r6766361, r6766365, MPFR_RNDN);
        ;
        mpfr_mul(r6766368, r6766364, r6766360, MPFR_RNDN);
        mpfr_mul(r6766369, r6766368, r6766360, MPFR_RNDN);
        mpfr_mul(r6766370, r6766367, r6766369, MPFR_RNDN);
        mpfr_add(r6766371, r6766366, r6766370, MPFR_RNDN);
        ;
        mpfr_mul(r6766373, r6766369, r6766360, MPFR_RNDN);
        mpfr_mul(r6766374, r6766373, r6766360, MPFR_RNDN);
        mpfr_mul(r6766375, r6766372, r6766374, MPFR_RNDN);
        mpfr_add(r6766376, r6766371, r6766375, MPFR_RNDN);
        ;
        mpfr_mul(r6766378, r6766374, r6766360, MPFR_RNDN);
        mpfr_mul(r6766379, r6766378, r6766360, MPFR_RNDN);
        mpfr_mul(r6766380, r6766377, r6766379, MPFR_RNDN);
        mpfr_add(r6766381, r6766376, r6766380, MPFR_RNDN);
        ;
        mpfr_mul(r6766383, r6766379, r6766360, MPFR_RNDN);
        mpfr_mul(r6766384, r6766383, r6766360, MPFR_RNDN);
        mpfr_mul(r6766385, r6766382, r6766384, MPFR_RNDN);
        mpfr_add(r6766386, r6766381, r6766385, MPFR_RNDN);
        ;
        mpfr_mul(r6766388, r6766384, r6766360, MPFR_RNDN);
        mpfr_mul(r6766389, r6766388, r6766360, MPFR_RNDN);
        mpfr_mul(r6766390, r6766387, r6766389, MPFR_RNDN);
        mpfr_add(r6766391, r6766386, r6766390, MPFR_RNDN);
        ;
        mpfr_mul(r6766393, r6766389, r6766360, MPFR_RNDN);
        mpfr_mul(r6766394, r6766393, r6766360, MPFR_RNDN);
        mpfr_mul(r6766395, r6766392, r6766394, MPFR_RNDN);
        mpfr_add(r6766396, r6766391, r6766395, MPFR_RNDN);
        return mpfr_get_d(r6766396, MPFR_RNDN);
}

static mpfr_t r6766397, r6766398, r6766399, r6766400, r6766401, r6766402, r6766403, r6766404, r6766405, r6766406, r6766407, r6766408, r6766409, r6766410, r6766411, r6766412, r6766413, r6766414, r6766415, r6766416, r6766417, r6766418, r6766419, r6766420, r6766421, r6766422, r6766423, r6766424, r6766425, r6766426, r6766427, r6766428, r6766429, r6766430, r6766431, r6766432, r6766433;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6766397);
        mpfr_init(r6766398);
        mpfr_init(r6766399);
        mpfr_init_set_str(r6766400, "3", 10, MPFR_RNDN);
        mpfr_init(r6766401);
        mpfr_init(r6766402);
        mpfr_init(r6766403);
        mpfr_init(r6766404);
        mpfr_init_set_str(r6766405, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6766406);
        mpfr_init(r6766407);
        mpfr_init_set_str(r6766408, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r6766409);
        mpfr_init(r6766410);
        mpfr_init_set_str(r6766411, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6766412);
        mpfr_init(r6766413);
        mpfr_init(r6766414);
        mpfr_init_set_str(r6766415, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6766416);
        mpfr_init(r6766417);
        mpfr_init_set_str(r6766418, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6766419);
        mpfr_init(r6766420);
        mpfr_init_set_str(r6766421, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6766422);
        mpfr_init(r6766423);
        mpfr_init(r6766424);
        mpfr_init(r6766425);
        mpfr_init(r6766426);
        mpfr_init_set_str(r6766427, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766428, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6766429);
        mpfr_init(r6766430);
        mpfr_init(r6766431);
        mpfr_init(r6766432);
        mpfr_init(r6766433);
}

double f_fm(double x) {
        mpfr_set_d(r6766397, x, MPFR_RNDN);
        mpfr_mul(r6766398, r6766397, r6766397, MPFR_RNDN);
        mpfr_mul(r6766399, r6766398, r6766398, MPFR_RNDN);
        ;
        mpfr_pow(r6766401, r6766397, r6766400, MPFR_RNDN);
        mpfr_mul(r6766402, r6766401, r6766401, MPFR_RNDN);
        mpfr_mul(r6766403, r6766401, r6766402, MPFR_RNDN);
        mpfr_mul(r6766404, r6766399, r6766403, MPFR_RNDN);
        ;
        mpfr_mul(r6766406, r6766405, r6766397, MPFR_RNDN);
        mpfr_mul(r6766407, r6766397, r6766406, MPFR_RNDN);
        ;
        mpfr_add(r6766409, r6766407, r6766408, MPFR_RNDN);
        mpfr_mul(r6766410, r6766404, r6766409, MPFR_RNDN);
        ;
        mpfr_mul(r6766412, r6766411, r6766397, MPFR_RNDN);
        mpfr_mul(r6766413, r6766412, r6766398, MPFR_RNDN);
        mpfr_mul(r6766414, r6766413, r6766399, MPFR_RNDN);
        ;
        mpfr_mul(r6766416, r6766415, r6766397, MPFR_RNDN);
        mpfr_add(r6766417, r6766414, r6766416, MPFR_RNDN);
        ;
        mpfr_mul(r6766419, r6766397, r6766418, MPFR_RNDN);
        mpfr_mul(r6766420, r6766419, r6766398, MPFR_RNDN);
        ;
        mpfr_mul(r6766422, r6766421, r6766397, MPFR_RNDN);
        mpfr_add(r6766423, r6766420, r6766422, MPFR_RNDN);
        mpfr_mul(r6766424, r6766398, r6766423, MPFR_RNDN);
        mpfr_add(r6766425, r6766417, r6766424, MPFR_RNDN);
        mpfr_add(r6766426, r6766410, r6766425, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6766429, r6766397, r6766428, MPFR_RNDN);
        mpfr_mul(r6766430, r6766397, r6766429, MPFR_RNDN);
        mpfr_add(r6766431, r6766427, r6766430, MPFR_RNDN);
        mpfr_mul(r6766432, r6766403, r6766431, MPFR_RNDN);
        mpfr_add(r6766433, r6766426, r6766432, MPFR_RNDN);
        return mpfr_get_d(r6766433, MPFR_RNDN);
}

static mpfr_t r6766434, r6766435, r6766436, r6766437, r6766438, r6766439, r6766440, r6766441, r6766442, r6766443, r6766444, r6766445, r6766446, r6766447, r6766448, r6766449, r6766450, r6766451, r6766452, r6766453, r6766454, r6766455, r6766456, r6766457, r6766458, r6766459, r6766460, r6766461, r6766462, r6766463, r6766464, r6766465, r6766466, r6766467, r6766468, r6766469, r6766470;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6766434);
        mpfr_init(r6766435);
        mpfr_init(r6766436);
        mpfr_init_set_str(r6766437, "3", 10, MPFR_RNDN);
        mpfr_init(r6766438);
        mpfr_init(r6766439);
        mpfr_init(r6766440);
        mpfr_init(r6766441);
        mpfr_init_set_str(r6766442, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r6766443);
        mpfr_init(r6766444);
        mpfr_init_set_str(r6766445, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r6766446);
        mpfr_init(r6766447);
        mpfr_init_set_str(r6766448, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6766449);
        mpfr_init(r6766450);
        mpfr_init(r6766451);
        mpfr_init_set_str(r6766452, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r6766453);
        mpfr_init(r6766454);
        mpfr_init_set_str(r6766455, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r6766456);
        mpfr_init(r6766457);
        mpfr_init_set_str(r6766458, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r6766459);
        mpfr_init(r6766460);
        mpfr_init(r6766461);
        mpfr_init(r6766462);
        mpfr_init(r6766463);
        mpfr_init_set_str(r6766464, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766465, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r6766466);
        mpfr_init(r6766467);
        mpfr_init(r6766468);
        mpfr_init(r6766469);
        mpfr_init(r6766470);
}

double f_dm(double x) {
        mpfr_set_d(r6766434, x, MPFR_RNDN);
        mpfr_mul(r6766435, r6766434, r6766434, MPFR_RNDN);
        mpfr_mul(r6766436, r6766435, r6766435, MPFR_RNDN);
        ;
        mpfr_pow(r6766438, r6766434, r6766437, MPFR_RNDN);
        mpfr_mul(r6766439, r6766438, r6766438, MPFR_RNDN);
        mpfr_mul(r6766440, r6766438, r6766439, MPFR_RNDN);
        mpfr_mul(r6766441, r6766436, r6766440, MPFR_RNDN);
        ;
        mpfr_mul(r6766443, r6766442, r6766434, MPFR_RNDN);
        mpfr_mul(r6766444, r6766434, r6766443, MPFR_RNDN);
        ;
        mpfr_add(r6766446, r6766444, r6766445, MPFR_RNDN);
        mpfr_mul(r6766447, r6766441, r6766446, MPFR_RNDN);
        ;
        mpfr_mul(r6766449, r6766448, r6766434, MPFR_RNDN);
        mpfr_mul(r6766450, r6766449, r6766435, MPFR_RNDN);
        mpfr_mul(r6766451, r6766450, r6766436, MPFR_RNDN);
        ;
        mpfr_mul(r6766453, r6766452, r6766434, MPFR_RNDN);
        mpfr_add(r6766454, r6766451, r6766453, MPFR_RNDN);
        ;
        mpfr_mul(r6766456, r6766434, r6766455, MPFR_RNDN);
        mpfr_mul(r6766457, r6766456, r6766435, MPFR_RNDN);
        ;
        mpfr_mul(r6766459, r6766458, r6766434, MPFR_RNDN);
        mpfr_add(r6766460, r6766457, r6766459, MPFR_RNDN);
        mpfr_mul(r6766461, r6766435, r6766460, MPFR_RNDN);
        mpfr_add(r6766462, r6766454, r6766461, MPFR_RNDN);
        mpfr_add(r6766463, r6766447, r6766462, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6766466, r6766434, r6766465, MPFR_RNDN);
        mpfr_mul(r6766467, r6766434, r6766466, MPFR_RNDN);
        mpfr_add(r6766468, r6766464, r6766467, MPFR_RNDN);
        mpfr_mul(r6766469, r6766440, r6766468, MPFR_RNDN);
        mpfr_add(r6766470, r6766463, r6766469, MPFR_RNDN);
        return mpfr_get_d(r6766470, MPFR_RNDN);
}

