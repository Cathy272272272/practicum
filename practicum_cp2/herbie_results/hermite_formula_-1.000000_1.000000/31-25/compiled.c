#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "25";

double f_if(float x) {
        float r7995152 = 6.476475253248e+16;
        float r7995153 = x;
        float r7995154 = r7995152 * r7995153;
        float r7995155 = -5.1811802025984e+17;
        float r7995156 = r7995153 * r7995153;
        float r7995157 = r7995156 * r7995153;
        float r7995158 = r7995155 * r7995157;
        float r7995159 = r7995154 + r7995158;
        float r7995160 = 1.139859644571648e+18;
        float r7995161 = r7995157 * r7995153;
        float r7995162 = r7995161 * r7995153;
        float r7995163 = r7995160 * r7995162;
        float r7995164 = r7995159 + r7995163;
        float r7995165 = -1.08558061387776e+18;
        float r7995166 = r7995162 * r7995153;
        float r7995167 = r7995166 * r7995153;
        float r7995168 = r7995165 * r7995167;
        float r7995169 = r7995164 + r7995168;
        float r7995170 = 5.4279030693888e+17;
        float r7995171 = r7995167 * r7995153;
        float r7995172 = r7995171 * r7995153;
        float r7995173 = r7995170 * r7995172;
        float r7995174 = r7995169 + r7995173;
        float r7995175 = -1.57902634745856e+17;
        float r7995176 = r7995172 * r7995153;
        float r7995177 = r7995176 * r7995153;
        float r7995178 = r7995175 * r7995177;
        float r7995179 = r7995174 + r7995178;
        float r7995180 = 2.8341498544128e+16;
        float r7995181 = r7995177 * r7995153;
        float r7995182 = r7995181 * r7995153;
        float r7995183 = r7995180 * r7995182;
        float r7995184 = r7995179 + r7995183;
        float r7995185 = -3.2390284050432e+15;
        float r7995186 = r7995182 * r7995153;
        float r7995187 = r7995186 * r7995153;
        float r7995188 = r7995185 * r7995187;
        float r7995189 = r7995184 + r7995188;
        float r7995190 = 2.38163853312e+14;
        float r7995191 = r7995187 * r7995153;
        float r7995192 = r7995191 * r7995153;
        float r7995193 = r7995190 * r7995192;
        float r7995194 = r7995189 + r7995193;
        float r7995195 = -11142168576000.0;
        float r7995196 = r7995192 * r7995153;
        float r7995197 = r7995196 * r7995153;
        float r7995198 = r7995195 * r7995197;
        float r7995199 = r7995194 + r7995198;
        float r7995200 = 318347673600.0;
        float r7995201 = r7995197 * r7995153;
        float r7995202 = r7995201 * r7995153;
        float r7995203 = r7995200 * r7995202;
        float r7995204 = r7995199 + r7995203;
        float r7995205 = -5033164800.0;
        float r7995206 = r7995202 * r7995153;
        float r7995207 = r7995206 * r7995153;
        float r7995208 = r7995205 * r7995207;
        float r7995209 = r7995204 + r7995208;
        float r7995210 = 33554432.0;
        float r7995211 = r7995207 * r7995153;
        float r7995212 = r7995211 * r7995153;
        float r7995213 = r7995210 * r7995212;
        float r7995214 = r7995209 + r7995213;
        return r7995214;
}

double f_id(double x) {
        double r7995215 = 6.476475253248e+16;
        double r7995216 = x;
        double r7995217 = r7995215 * r7995216;
        double r7995218 = -5.1811802025984e+17;
        double r7995219 = r7995216 * r7995216;
        double r7995220 = r7995219 * r7995216;
        double r7995221 = r7995218 * r7995220;
        double r7995222 = r7995217 + r7995221;
        double r7995223 = 1.139859644571648e+18;
        double r7995224 = r7995220 * r7995216;
        double r7995225 = r7995224 * r7995216;
        double r7995226 = r7995223 * r7995225;
        double r7995227 = r7995222 + r7995226;
        double r7995228 = -1.08558061387776e+18;
        double r7995229 = r7995225 * r7995216;
        double r7995230 = r7995229 * r7995216;
        double r7995231 = r7995228 * r7995230;
        double r7995232 = r7995227 + r7995231;
        double r7995233 = 5.4279030693888e+17;
        double r7995234 = r7995230 * r7995216;
        double r7995235 = r7995234 * r7995216;
        double r7995236 = r7995233 * r7995235;
        double r7995237 = r7995232 + r7995236;
        double r7995238 = -1.57902634745856e+17;
        double r7995239 = r7995235 * r7995216;
        double r7995240 = r7995239 * r7995216;
        double r7995241 = r7995238 * r7995240;
        double r7995242 = r7995237 + r7995241;
        double r7995243 = 2.8341498544128e+16;
        double r7995244 = r7995240 * r7995216;
        double r7995245 = r7995244 * r7995216;
        double r7995246 = r7995243 * r7995245;
        double r7995247 = r7995242 + r7995246;
        double r7995248 = -3.2390284050432e+15;
        double r7995249 = r7995245 * r7995216;
        double r7995250 = r7995249 * r7995216;
        double r7995251 = r7995248 * r7995250;
        double r7995252 = r7995247 + r7995251;
        double r7995253 = 2.38163853312e+14;
        double r7995254 = r7995250 * r7995216;
        double r7995255 = r7995254 * r7995216;
        double r7995256 = r7995253 * r7995255;
        double r7995257 = r7995252 + r7995256;
        double r7995258 = -11142168576000.0;
        double r7995259 = r7995255 * r7995216;
        double r7995260 = r7995259 * r7995216;
        double r7995261 = r7995258 * r7995260;
        double r7995262 = r7995257 + r7995261;
        double r7995263 = 318347673600.0;
        double r7995264 = r7995260 * r7995216;
        double r7995265 = r7995264 * r7995216;
        double r7995266 = r7995263 * r7995265;
        double r7995267 = r7995262 + r7995266;
        double r7995268 = -5033164800.0;
        double r7995269 = r7995265 * r7995216;
        double r7995270 = r7995269 * r7995216;
        double r7995271 = r7995268 * r7995270;
        double r7995272 = r7995267 + r7995271;
        double r7995273 = 33554432.0;
        double r7995274 = r7995270 * r7995216;
        double r7995275 = r7995274 * r7995216;
        double r7995276 = r7995273 * r7995275;
        double r7995277 = r7995272 + r7995276;
        return r7995277;
}


double f_of(float x) {
        float r7995278 = 6.476475253248e+16;
        float r7995279 = x;
        float r7995280 = r7995278 * r7995279;
        float r7995281 = -5.1811802025984e+17;
        float r7995282 = r7995279 * r7995279;
        float r7995283 = r7995282 * r7995279;
        float r7995284 = r7995281 * r7995283;
        float r7995285 = r7995280 + r7995284;
        float r7995286 = 1.139859644571648e+18;
        float r7995287 = r7995283 * r7995279;
        float r7995288 = r7995287 * r7995279;
        float r7995289 = r7995286 * r7995288;
        float r7995290 = r7995285 + r7995289;
        float r7995291 = -1.08558061387776e+18;
        float r7995292 = r7995288 * r7995279;
        float r7995293 = r7995292 * r7995279;
        float r7995294 = r7995291 * r7995293;
        float r7995295 = r7995290 + r7995294;
        float r7995296 = 5.4279030693888e+17;
        float r7995297 = r7995293 * r7995279;
        float r7995298 = r7995297 * r7995279;
        float r7995299 = r7995296 * r7995298;
        float r7995300 = r7995295 + r7995299;
        float r7995301 = -1.57902634745856e+17;
        float r7995302 = r7995298 * r7995279;
        float r7995303 = r7995302 * r7995279;
        float r7995304 = r7995301 * r7995303;
        float r7995305 = r7995300 + r7995304;
        float r7995306 = 2.8341498544128e+16;
        float r7995307 = r7995303 * r7995279;
        float r7995308 = r7995307 * r7995279;
        float r7995309 = r7995306 * r7995308;
        float r7995310 = r7995305 + r7995309;
        float r7995311 = -3.2390284050432e+15;
        float r7995312 = r7995308 * r7995279;
        float r7995313 = r7995312 * r7995279;
        float r7995314 = r7995311 * r7995313;
        float r7995315 = r7995310 + r7995314;
        float r7995316 = 2.38163853312e+14;
        float r7995317 = r7995313 * r7995279;
        float r7995318 = r7995317 * r7995279;
        float r7995319 = r7995316 * r7995318;
        float r7995320 = r7995315 + r7995319;
        float r7995321 = -11142168576000.0;
        float r7995322 = r7995318 * r7995279;
        float r7995323 = r7995322 * r7995279;
        float r7995324 = r7995321 * r7995323;
        float r7995325 = r7995320 + r7995324;
        float r7995326 = 318347673600.0;
        float r7995327 = r7995323 * r7995279;
        float r7995328 = r7995327 * r7995279;
        float r7995329 = r7995326 * r7995328;
        float r7995330 = r7995325 + r7995329;
        float r7995331 = -5033164800.0;
        float r7995332 = r7995328 * r7995279;
        float r7995333 = r7995332 * r7995279;
        float r7995334 = r7995331 * r7995333;
        float r7995335 = r7995330 + r7995334;
        float r7995336 = 33554432.0;
        float r7995337 = r7995333 * r7995279;
        float r7995338 = r7995337 * r7995279;
        float r7995339 = r7995336 * r7995338;
        float r7995340 = r7995335 + r7995339;
        return r7995340;
}

double f_od(double x) {
        double r7995341 = 6.476475253248e+16;
        double r7995342 = x;
        double r7995343 = r7995341 * r7995342;
        double r7995344 = -5.1811802025984e+17;
        double r7995345 = r7995342 * r7995342;
        double r7995346 = r7995345 * r7995342;
        double r7995347 = r7995344 * r7995346;
        double r7995348 = r7995343 + r7995347;
        double r7995349 = 1.139859644571648e+18;
        double r7995350 = r7995346 * r7995342;
        double r7995351 = r7995350 * r7995342;
        double r7995352 = r7995349 * r7995351;
        double r7995353 = r7995348 + r7995352;
        double r7995354 = -1.08558061387776e+18;
        double r7995355 = r7995351 * r7995342;
        double r7995356 = r7995355 * r7995342;
        double r7995357 = r7995354 * r7995356;
        double r7995358 = r7995353 + r7995357;
        double r7995359 = 5.4279030693888e+17;
        double r7995360 = r7995356 * r7995342;
        double r7995361 = r7995360 * r7995342;
        double r7995362 = r7995359 * r7995361;
        double r7995363 = r7995358 + r7995362;
        double r7995364 = -1.57902634745856e+17;
        double r7995365 = r7995361 * r7995342;
        double r7995366 = r7995365 * r7995342;
        double r7995367 = r7995364 * r7995366;
        double r7995368 = r7995363 + r7995367;
        double r7995369 = 2.8341498544128e+16;
        double r7995370 = r7995366 * r7995342;
        double r7995371 = r7995370 * r7995342;
        double r7995372 = r7995369 * r7995371;
        double r7995373 = r7995368 + r7995372;
        double r7995374 = -3.2390284050432e+15;
        double r7995375 = r7995371 * r7995342;
        double r7995376 = r7995375 * r7995342;
        double r7995377 = r7995374 * r7995376;
        double r7995378 = r7995373 + r7995377;
        double r7995379 = 2.38163853312e+14;
        double r7995380 = r7995376 * r7995342;
        double r7995381 = r7995380 * r7995342;
        double r7995382 = r7995379 * r7995381;
        double r7995383 = r7995378 + r7995382;
        double r7995384 = -11142168576000.0;
        double r7995385 = r7995381 * r7995342;
        double r7995386 = r7995385 * r7995342;
        double r7995387 = r7995384 * r7995386;
        double r7995388 = r7995383 + r7995387;
        double r7995389 = 318347673600.0;
        double r7995390 = r7995386 * r7995342;
        double r7995391 = r7995390 * r7995342;
        double r7995392 = r7995389 * r7995391;
        double r7995393 = r7995388 + r7995392;
        double r7995394 = -5033164800.0;
        double r7995395 = r7995391 * r7995342;
        double r7995396 = r7995395 * r7995342;
        double r7995397 = r7995394 * r7995396;
        double r7995398 = r7995393 + r7995397;
        double r7995399 = 33554432.0;
        double r7995400 = r7995396 * r7995342;
        double r7995401 = r7995400 * r7995342;
        double r7995402 = r7995399 * r7995401;
        double r7995403 = r7995398 + r7995402;
        return r7995403;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7995404, r7995405, r7995406, r7995407, r7995408, r7995409, r7995410, r7995411, r7995412, r7995413, r7995414, r7995415, r7995416, r7995417, r7995418, r7995419, r7995420, r7995421, r7995422, r7995423, r7995424, r7995425, r7995426, r7995427, r7995428, r7995429, r7995430, r7995431, r7995432, r7995433, r7995434, r7995435, r7995436, r7995437, r7995438, r7995439, r7995440, r7995441, r7995442, r7995443, r7995444, r7995445, r7995446, r7995447, r7995448, r7995449, r7995450, r7995451, r7995452, r7995453, r7995454, r7995455, r7995456, r7995457, r7995458, r7995459, r7995460, r7995461, r7995462, r7995463, r7995464, r7995465, r7995466;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7995404, "6.476475253248e+16", 10, MPFR_RNDN);
        mpfr_init(r7995405);
        mpfr_init(r7995406);
        mpfr_init_set_str(r7995407, "-5.1811802025984e+17", 10, MPFR_RNDN);
        mpfr_init(r7995408);
        mpfr_init(r7995409);
        mpfr_init(r7995410);
        mpfr_init(r7995411);
        mpfr_init_set_str(r7995412, "1.139859644571648e+18", 10, MPFR_RNDN);
        mpfr_init(r7995413);
        mpfr_init(r7995414);
        mpfr_init(r7995415);
        mpfr_init(r7995416);
        mpfr_init_set_str(r7995417, "-1.08558061387776e+18", 10, MPFR_RNDN);
        mpfr_init(r7995418);
        mpfr_init(r7995419);
        mpfr_init(r7995420);
        mpfr_init(r7995421);
        mpfr_init_set_str(r7995422, "5.4279030693888e+17", 10, MPFR_RNDN);
        mpfr_init(r7995423);
        mpfr_init(r7995424);
        mpfr_init(r7995425);
        mpfr_init(r7995426);
        mpfr_init_set_str(r7995427, "-1.57902634745856e+17", 10, MPFR_RNDN);
        mpfr_init(r7995428);
        mpfr_init(r7995429);
        mpfr_init(r7995430);
        mpfr_init(r7995431);
        mpfr_init_set_str(r7995432, "2.8341498544128e+16", 10, MPFR_RNDN);
        mpfr_init(r7995433);
        mpfr_init(r7995434);
        mpfr_init(r7995435);
        mpfr_init(r7995436);
        mpfr_init_set_str(r7995437, "-3.2390284050432e+15", 10, MPFR_RNDN);
        mpfr_init(r7995438);
        mpfr_init(r7995439);
        mpfr_init(r7995440);
        mpfr_init(r7995441);
        mpfr_init_set_str(r7995442, "2.38163853312e+14", 10, MPFR_RNDN);
        mpfr_init(r7995443);
        mpfr_init(r7995444);
        mpfr_init(r7995445);
        mpfr_init(r7995446);
        mpfr_init_set_str(r7995447, "-11142168576000.0", 10, MPFR_RNDN);
        mpfr_init(r7995448);
        mpfr_init(r7995449);
        mpfr_init(r7995450);
        mpfr_init(r7995451);
        mpfr_init_set_str(r7995452, "318347673600.0", 10, MPFR_RNDN);
        mpfr_init(r7995453);
        mpfr_init(r7995454);
        mpfr_init(r7995455);
        mpfr_init(r7995456);
        mpfr_init_set_str(r7995457, "-5033164800.0", 10, MPFR_RNDN);
        mpfr_init(r7995458);
        mpfr_init(r7995459);
        mpfr_init(r7995460);
        mpfr_init(r7995461);
        mpfr_init_set_str(r7995462, "33554432.0", 10, MPFR_RNDN);
        mpfr_init(r7995463);
        mpfr_init(r7995464);
        mpfr_init(r7995465);
        mpfr_init(r7995466);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7995405, x, MPFR_RNDN);
        mpfr_mul(r7995406, r7995404, r7995405, MPFR_RNDN);
        ;
        mpfr_mul(r7995408, r7995405, r7995405, MPFR_RNDN);
        mpfr_mul(r7995409, r7995408, r7995405, MPFR_RNDN);
        mpfr_mul(r7995410, r7995407, r7995409, MPFR_RNDN);
        mpfr_add(r7995411, r7995406, r7995410, MPFR_RNDN);
        ;
        mpfr_mul(r7995413, r7995409, r7995405, MPFR_RNDN);
        mpfr_mul(r7995414, r7995413, r7995405, MPFR_RNDN);
        mpfr_mul(r7995415, r7995412, r7995414, MPFR_RNDN);
        mpfr_add(r7995416, r7995411, r7995415, MPFR_RNDN);
        ;
        mpfr_mul(r7995418, r7995414, r7995405, MPFR_RNDN);
        mpfr_mul(r7995419, r7995418, r7995405, MPFR_RNDN);
        mpfr_mul(r7995420, r7995417, r7995419, MPFR_RNDN);
        mpfr_add(r7995421, r7995416, r7995420, MPFR_RNDN);
        ;
        mpfr_mul(r7995423, r7995419, r7995405, MPFR_RNDN);
        mpfr_mul(r7995424, r7995423, r7995405, MPFR_RNDN);
        mpfr_mul(r7995425, r7995422, r7995424, MPFR_RNDN);
        mpfr_add(r7995426, r7995421, r7995425, MPFR_RNDN);
        ;
        mpfr_mul(r7995428, r7995424, r7995405, MPFR_RNDN);
        mpfr_mul(r7995429, r7995428, r7995405, MPFR_RNDN);
        mpfr_mul(r7995430, r7995427, r7995429, MPFR_RNDN);
        mpfr_add(r7995431, r7995426, r7995430, MPFR_RNDN);
        ;
        mpfr_mul(r7995433, r7995429, r7995405, MPFR_RNDN);
        mpfr_mul(r7995434, r7995433, r7995405, MPFR_RNDN);
        mpfr_mul(r7995435, r7995432, r7995434, MPFR_RNDN);
        mpfr_add(r7995436, r7995431, r7995435, MPFR_RNDN);
        ;
        mpfr_mul(r7995438, r7995434, r7995405, MPFR_RNDN);
        mpfr_mul(r7995439, r7995438, r7995405, MPFR_RNDN);
        mpfr_mul(r7995440, r7995437, r7995439, MPFR_RNDN);
        mpfr_add(r7995441, r7995436, r7995440, MPFR_RNDN);
        ;
        mpfr_mul(r7995443, r7995439, r7995405, MPFR_RNDN);
        mpfr_mul(r7995444, r7995443, r7995405, MPFR_RNDN);
        mpfr_mul(r7995445, r7995442, r7995444, MPFR_RNDN);
        mpfr_add(r7995446, r7995441, r7995445, MPFR_RNDN);
        ;
        mpfr_mul(r7995448, r7995444, r7995405, MPFR_RNDN);
        mpfr_mul(r7995449, r7995448, r7995405, MPFR_RNDN);
        mpfr_mul(r7995450, r7995447, r7995449, MPFR_RNDN);
        mpfr_add(r7995451, r7995446, r7995450, MPFR_RNDN);
        ;
        mpfr_mul(r7995453, r7995449, r7995405, MPFR_RNDN);
        mpfr_mul(r7995454, r7995453, r7995405, MPFR_RNDN);
        mpfr_mul(r7995455, r7995452, r7995454, MPFR_RNDN);
        mpfr_add(r7995456, r7995451, r7995455, MPFR_RNDN);
        ;
        mpfr_mul(r7995458, r7995454, r7995405, MPFR_RNDN);
        mpfr_mul(r7995459, r7995458, r7995405, MPFR_RNDN);
        mpfr_mul(r7995460, r7995457, r7995459, MPFR_RNDN);
        mpfr_add(r7995461, r7995456, r7995460, MPFR_RNDN);
        ;
        mpfr_mul(r7995463, r7995459, r7995405, MPFR_RNDN);
        mpfr_mul(r7995464, r7995463, r7995405, MPFR_RNDN);
        mpfr_mul(r7995465, r7995462, r7995464, MPFR_RNDN);
        mpfr_add(r7995466, r7995461, r7995465, MPFR_RNDN);
        return mpfr_get_d(r7995466, MPFR_RNDN);
}

static mpfr_t r7995467, r7995468, r7995469, r7995470, r7995471, r7995472, r7995473, r7995474, r7995475, r7995476, r7995477, r7995478, r7995479, r7995480, r7995481, r7995482, r7995483, r7995484, r7995485, r7995486, r7995487, r7995488, r7995489, r7995490, r7995491, r7995492, r7995493, r7995494, r7995495, r7995496, r7995497, r7995498, r7995499, r7995500, r7995501, r7995502, r7995503, r7995504, r7995505, r7995506, r7995507, r7995508, r7995509, r7995510, r7995511, r7995512, r7995513, r7995514, r7995515, r7995516, r7995517, r7995518, r7995519, r7995520, r7995521, r7995522, r7995523, r7995524, r7995525, r7995526, r7995527, r7995528, r7995529;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7995467, "6.476475253248e+16", 10, MPFR_RNDN);
        mpfr_init(r7995468);
        mpfr_init(r7995469);
        mpfr_init_set_str(r7995470, "-5.1811802025984e+17", 10, MPFR_RNDN);
        mpfr_init(r7995471);
        mpfr_init(r7995472);
        mpfr_init(r7995473);
        mpfr_init(r7995474);
        mpfr_init_set_str(r7995475, "1.139859644571648e+18", 10, MPFR_RNDN);
        mpfr_init(r7995476);
        mpfr_init(r7995477);
        mpfr_init(r7995478);
        mpfr_init(r7995479);
        mpfr_init_set_str(r7995480, "-1.08558061387776e+18", 10, MPFR_RNDN);
        mpfr_init(r7995481);
        mpfr_init(r7995482);
        mpfr_init(r7995483);
        mpfr_init(r7995484);
        mpfr_init_set_str(r7995485, "5.4279030693888e+17", 10, MPFR_RNDN);
        mpfr_init(r7995486);
        mpfr_init(r7995487);
        mpfr_init(r7995488);
        mpfr_init(r7995489);
        mpfr_init_set_str(r7995490, "-1.57902634745856e+17", 10, MPFR_RNDN);
        mpfr_init(r7995491);
        mpfr_init(r7995492);
        mpfr_init(r7995493);
        mpfr_init(r7995494);
        mpfr_init_set_str(r7995495, "2.8341498544128e+16", 10, MPFR_RNDN);
        mpfr_init(r7995496);
        mpfr_init(r7995497);
        mpfr_init(r7995498);
        mpfr_init(r7995499);
        mpfr_init_set_str(r7995500, "-3.2390284050432e+15", 10, MPFR_RNDN);
        mpfr_init(r7995501);
        mpfr_init(r7995502);
        mpfr_init(r7995503);
        mpfr_init(r7995504);
        mpfr_init_set_str(r7995505, "2.38163853312e+14", 10, MPFR_RNDN);
        mpfr_init(r7995506);
        mpfr_init(r7995507);
        mpfr_init(r7995508);
        mpfr_init(r7995509);
        mpfr_init_set_str(r7995510, "-11142168576000.0", 10, MPFR_RNDN);
        mpfr_init(r7995511);
        mpfr_init(r7995512);
        mpfr_init(r7995513);
        mpfr_init(r7995514);
        mpfr_init_set_str(r7995515, "318347673600.0", 10, MPFR_RNDN);
        mpfr_init(r7995516);
        mpfr_init(r7995517);
        mpfr_init(r7995518);
        mpfr_init(r7995519);
        mpfr_init_set_str(r7995520, "-5033164800.0", 10, MPFR_RNDN);
        mpfr_init(r7995521);
        mpfr_init(r7995522);
        mpfr_init(r7995523);
        mpfr_init(r7995524);
        mpfr_init_set_str(r7995525, "33554432.0", 10, MPFR_RNDN);
        mpfr_init(r7995526);
        mpfr_init(r7995527);
        mpfr_init(r7995528);
        mpfr_init(r7995529);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7995468, x, MPFR_RNDN);
        mpfr_mul(r7995469, r7995467, r7995468, MPFR_RNDN);
        ;
        mpfr_mul(r7995471, r7995468, r7995468, MPFR_RNDN);
        mpfr_mul(r7995472, r7995471, r7995468, MPFR_RNDN);
        mpfr_mul(r7995473, r7995470, r7995472, MPFR_RNDN);
        mpfr_add(r7995474, r7995469, r7995473, MPFR_RNDN);
        ;
        mpfr_mul(r7995476, r7995472, r7995468, MPFR_RNDN);
        mpfr_mul(r7995477, r7995476, r7995468, MPFR_RNDN);
        mpfr_mul(r7995478, r7995475, r7995477, MPFR_RNDN);
        mpfr_add(r7995479, r7995474, r7995478, MPFR_RNDN);
        ;
        mpfr_mul(r7995481, r7995477, r7995468, MPFR_RNDN);
        mpfr_mul(r7995482, r7995481, r7995468, MPFR_RNDN);
        mpfr_mul(r7995483, r7995480, r7995482, MPFR_RNDN);
        mpfr_add(r7995484, r7995479, r7995483, MPFR_RNDN);
        ;
        mpfr_mul(r7995486, r7995482, r7995468, MPFR_RNDN);
        mpfr_mul(r7995487, r7995486, r7995468, MPFR_RNDN);
        mpfr_mul(r7995488, r7995485, r7995487, MPFR_RNDN);
        mpfr_add(r7995489, r7995484, r7995488, MPFR_RNDN);
        ;
        mpfr_mul(r7995491, r7995487, r7995468, MPFR_RNDN);
        mpfr_mul(r7995492, r7995491, r7995468, MPFR_RNDN);
        mpfr_mul(r7995493, r7995490, r7995492, MPFR_RNDN);
        mpfr_add(r7995494, r7995489, r7995493, MPFR_RNDN);
        ;
        mpfr_mul(r7995496, r7995492, r7995468, MPFR_RNDN);
        mpfr_mul(r7995497, r7995496, r7995468, MPFR_RNDN);
        mpfr_mul(r7995498, r7995495, r7995497, MPFR_RNDN);
        mpfr_add(r7995499, r7995494, r7995498, MPFR_RNDN);
        ;
        mpfr_mul(r7995501, r7995497, r7995468, MPFR_RNDN);
        mpfr_mul(r7995502, r7995501, r7995468, MPFR_RNDN);
        mpfr_mul(r7995503, r7995500, r7995502, MPFR_RNDN);
        mpfr_add(r7995504, r7995499, r7995503, MPFR_RNDN);
        ;
        mpfr_mul(r7995506, r7995502, r7995468, MPFR_RNDN);
        mpfr_mul(r7995507, r7995506, r7995468, MPFR_RNDN);
        mpfr_mul(r7995508, r7995505, r7995507, MPFR_RNDN);
        mpfr_add(r7995509, r7995504, r7995508, MPFR_RNDN);
        ;
        mpfr_mul(r7995511, r7995507, r7995468, MPFR_RNDN);
        mpfr_mul(r7995512, r7995511, r7995468, MPFR_RNDN);
        mpfr_mul(r7995513, r7995510, r7995512, MPFR_RNDN);
        mpfr_add(r7995514, r7995509, r7995513, MPFR_RNDN);
        ;
        mpfr_mul(r7995516, r7995512, r7995468, MPFR_RNDN);
        mpfr_mul(r7995517, r7995516, r7995468, MPFR_RNDN);
        mpfr_mul(r7995518, r7995515, r7995517, MPFR_RNDN);
        mpfr_add(r7995519, r7995514, r7995518, MPFR_RNDN);
        ;
        mpfr_mul(r7995521, r7995517, r7995468, MPFR_RNDN);
        mpfr_mul(r7995522, r7995521, r7995468, MPFR_RNDN);
        mpfr_mul(r7995523, r7995520, r7995522, MPFR_RNDN);
        mpfr_add(r7995524, r7995519, r7995523, MPFR_RNDN);
        ;
        mpfr_mul(r7995526, r7995522, r7995468, MPFR_RNDN);
        mpfr_mul(r7995527, r7995526, r7995468, MPFR_RNDN);
        mpfr_mul(r7995528, r7995525, r7995527, MPFR_RNDN);
        mpfr_add(r7995529, r7995524, r7995528, MPFR_RNDN);
        return mpfr_get_d(r7995529, MPFR_RNDN);
}

static mpfr_t r7995530, r7995531, r7995532, r7995533, r7995534, r7995535, r7995536, r7995537, r7995538, r7995539, r7995540, r7995541, r7995542, r7995543, r7995544, r7995545, r7995546, r7995547, r7995548, r7995549, r7995550, r7995551, r7995552, r7995553, r7995554, r7995555, r7995556, r7995557, r7995558, r7995559, r7995560, r7995561, r7995562, r7995563, r7995564, r7995565, r7995566, r7995567, r7995568, r7995569, r7995570, r7995571, r7995572, r7995573, r7995574, r7995575, r7995576, r7995577, r7995578, r7995579, r7995580, r7995581, r7995582, r7995583, r7995584, r7995585, r7995586, r7995587, r7995588, r7995589, r7995590, r7995591, r7995592;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7995530, "6.476475253248e+16", 10, MPFR_RNDN);
        mpfr_init(r7995531);
        mpfr_init(r7995532);
        mpfr_init_set_str(r7995533, "-5.1811802025984e+17", 10, MPFR_RNDN);
        mpfr_init(r7995534);
        mpfr_init(r7995535);
        mpfr_init(r7995536);
        mpfr_init(r7995537);
        mpfr_init_set_str(r7995538, "1.139859644571648e+18", 10, MPFR_RNDN);
        mpfr_init(r7995539);
        mpfr_init(r7995540);
        mpfr_init(r7995541);
        mpfr_init(r7995542);
        mpfr_init_set_str(r7995543, "-1.08558061387776e+18", 10, MPFR_RNDN);
        mpfr_init(r7995544);
        mpfr_init(r7995545);
        mpfr_init(r7995546);
        mpfr_init(r7995547);
        mpfr_init_set_str(r7995548, "5.4279030693888e+17", 10, MPFR_RNDN);
        mpfr_init(r7995549);
        mpfr_init(r7995550);
        mpfr_init(r7995551);
        mpfr_init(r7995552);
        mpfr_init_set_str(r7995553, "-1.57902634745856e+17", 10, MPFR_RNDN);
        mpfr_init(r7995554);
        mpfr_init(r7995555);
        mpfr_init(r7995556);
        mpfr_init(r7995557);
        mpfr_init_set_str(r7995558, "2.8341498544128e+16", 10, MPFR_RNDN);
        mpfr_init(r7995559);
        mpfr_init(r7995560);
        mpfr_init(r7995561);
        mpfr_init(r7995562);
        mpfr_init_set_str(r7995563, "-3.2390284050432e+15", 10, MPFR_RNDN);
        mpfr_init(r7995564);
        mpfr_init(r7995565);
        mpfr_init(r7995566);
        mpfr_init(r7995567);
        mpfr_init_set_str(r7995568, "2.38163853312e+14", 10, MPFR_RNDN);
        mpfr_init(r7995569);
        mpfr_init(r7995570);
        mpfr_init(r7995571);
        mpfr_init(r7995572);
        mpfr_init_set_str(r7995573, "-11142168576000.0", 10, MPFR_RNDN);
        mpfr_init(r7995574);
        mpfr_init(r7995575);
        mpfr_init(r7995576);
        mpfr_init(r7995577);
        mpfr_init_set_str(r7995578, "318347673600.0", 10, MPFR_RNDN);
        mpfr_init(r7995579);
        mpfr_init(r7995580);
        mpfr_init(r7995581);
        mpfr_init(r7995582);
        mpfr_init_set_str(r7995583, "-5033164800.0", 10, MPFR_RNDN);
        mpfr_init(r7995584);
        mpfr_init(r7995585);
        mpfr_init(r7995586);
        mpfr_init(r7995587);
        mpfr_init_set_str(r7995588, "33554432.0", 10, MPFR_RNDN);
        mpfr_init(r7995589);
        mpfr_init(r7995590);
        mpfr_init(r7995591);
        mpfr_init(r7995592);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7995531, x, MPFR_RNDN);
        mpfr_mul(r7995532, r7995530, r7995531, MPFR_RNDN);
        ;
        mpfr_mul(r7995534, r7995531, r7995531, MPFR_RNDN);
        mpfr_mul(r7995535, r7995534, r7995531, MPFR_RNDN);
        mpfr_mul(r7995536, r7995533, r7995535, MPFR_RNDN);
        mpfr_add(r7995537, r7995532, r7995536, MPFR_RNDN);
        ;
        mpfr_mul(r7995539, r7995535, r7995531, MPFR_RNDN);
        mpfr_mul(r7995540, r7995539, r7995531, MPFR_RNDN);
        mpfr_mul(r7995541, r7995538, r7995540, MPFR_RNDN);
        mpfr_add(r7995542, r7995537, r7995541, MPFR_RNDN);
        ;
        mpfr_mul(r7995544, r7995540, r7995531, MPFR_RNDN);
        mpfr_mul(r7995545, r7995544, r7995531, MPFR_RNDN);
        mpfr_mul(r7995546, r7995543, r7995545, MPFR_RNDN);
        mpfr_add(r7995547, r7995542, r7995546, MPFR_RNDN);
        ;
        mpfr_mul(r7995549, r7995545, r7995531, MPFR_RNDN);
        mpfr_mul(r7995550, r7995549, r7995531, MPFR_RNDN);
        mpfr_mul(r7995551, r7995548, r7995550, MPFR_RNDN);
        mpfr_add(r7995552, r7995547, r7995551, MPFR_RNDN);
        ;
        mpfr_mul(r7995554, r7995550, r7995531, MPFR_RNDN);
        mpfr_mul(r7995555, r7995554, r7995531, MPFR_RNDN);
        mpfr_mul(r7995556, r7995553, r7995555, MPFR_RNDN);
        mpfr_add(r7995557, r7995552, r7995556, MPFR_RNDN);
        ;
        mpfr_mul(r7995559, r7995555, r7995531, MPFR_RNDN);
        mpfr_mul(r7995560, r7995559, r7995531, MPFR_RNDN);
        mpfr_mul(r7995561, r7995558, r7995560, MPFR_RNDN);
        mpfr_add(r7995562, r7995557, r7995561, MPFR_RNDN);
        ;
        mpfr_mul(r7995564, r7995560, r7995531, MPFR_RNDN);
        mpfr_mul(r7995565, r7995564, r7995531, MPFR_RNDN);
        mpfr_mul(r7995566, r7995563, r7995565, MPFR_RNDN);
        mpfr_add(r7995567, r7995562, r7995566, MPFR_RNDN);
        ;
        mpfr_mul(r7995569, r7995565, r7995531, MPFR_RNDN);
        mpfr_mul(r7995570, r7995569, r7995531, MPFR_RNDN);
        mpfr_mul(r7995571, r7995568, r7995570, MPFR_RNDN);
        mpfr_add(r7995572, r7995567, r7995571, MPFR_RNDN);
        ;
        mpfr_mul(r7995574, r7995570, r7995531, MPFR_RNDN);
        mpfr_mul(r7995575, r7995574, r7995531, MPFR_RNDN);
        mpfr_mul(r7995576, r7995573, r7995575, MPFR_RNDN);
        mpfr_add(r7995577, r7995572, r7995576, MPFR_RNDN);
        ;
        mpfr_mul(r7995579, r7995575, r7995531, MPFR_RNDN);
        mpfr_mul(r7995580, r7995579, r7995531, MPFR_RNDN);
        mpfr_mul(r7995581, r7995578, r7995580, MPFR_RNDN);
        mpfr_add(r7995582, r7995577, r7995581, MPFR_RNDN);
        ;
        mpfr_mul(r7995584, r7995580, r7995531, MPFR_RNDN);
        mpfr_mul(r7995585, r7995584, r7995531, MPFR_RNDN);
        mpfr_mul(r7995586, r7995583, r7995585, MPFR_RNDN);
        mpfr_add(r7995587, r7995582, r7995586, MPFR_RNDN);
        ;
        mpfr_mul(r7995589, r7995585, r7995531, MPFR_RNDN);
        mpfr_mul(r7995590, r7995589, r7995531, MPFR_RNDN);
        mpfr_mul(r7995591, r7995588, r7995590, MPFR_RNDN);
        mpfr_add(r7995592, r7995587, r7995591, MPFR_RNDN);
        return mpfr_get_d(r7995592, MPFR_RNDN);
}
