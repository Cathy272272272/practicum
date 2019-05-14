#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r6516165 = 1.0;
        float r6516166 = -12.0;
        float r6516167 = x;
        float r6516168 = r6516166 * r6516167;
        float r6516169 = r6516165 + r6516168;
        float r6516170 = 33.0;
        float r6516171 = r6516167 * r6516167;
        float r6516172 = r6516170 * r6516171;
        float r6516173 = r6516169 + r6516172;
        float r6516174 = -36.666667;
        float r6516175 = r6516171 * r6516167;
        float r6516176 = r6516174 * r6516175;
        float r6516177 = r6516173 + r6516176;
        float r6516178 = 20.625;
        float r6516179 = r6516175 * r6516167;
        float r6516180 = r6516178 * r6516179;
        float r6516181 = r6516177 + r6516180;
        float r6516182 = -6.6;
        float r6516183 = r6516179 * r6516167;
        float r6516184 = r6516182 * r6516183;
        float r6516185 = r6516181 + r6516184;
        float r6516186 = 1.283333;
        float r6516187 = r6516183 * r6516167;
        float r6516188 = r6516186 * r6516187;
        float r6516189 = r6516185 + r6516188;
        float r6516190 = -0.157143;
        float r6516191 = r6516187 * r6516167;
        float r6516192 = r6516190 * r6516191;
        float r6516193 = r6516189 + r6516192;
        float r6516194 = 0.012277;
        float r6516195 = r6516191 * r6516167;
        float r6516196 = r6516194 * r6516195;
        float r6516197 = r6516193 + r6516196;
        float r6516198 = -0.000606;
        float r6516199 = r6516195 * r6516167;
        float r6516200 = r6516198 * r6516199;
        float r6516201 = r6516197 + r6516200;
        float r6516202 = 1.8e-05;
        float r6516203 = r6516199 * r6516167;
        float r6516204 = r6516202 * r6516203;
        float r6516205 = r6516201 + r6516204;
        return r6516205;
}

double f_id(double x) {
        double r6516206 = 1.0;
        double r6516207 = -12.0;
        double r6516208 = x;
        double r6516209 = r6516207 * r6516208;
        double r6516210 = r6516206 + r6516209;
        double r6516211 = 33.0;
        double r6516212 = r6516208 * r6516208;
        double r6516213 = r6516211 * r6516212;
        double r6516214 = r6516210 + r6516213;
        double r6516215 = -36.666667;
        double r6516216 = r6516212 * r6516208;
        double r6516217 = r6516215 * r6516216;
        double r6516218 = r6516214 + r6516217;
        double r6516219 = 20.625;
        double r6516220 = r6516216 * r6516208;
        double r6516221 = r6516219 * r6516220;
        double r6516222 = r6516218 + r6516221;
        double r6516223 = -6.6;
        double r6516224 = r6516220 * r6516208;
        double r6516225 = r6516223 * r6516224;
        double r6516226 = r6516222 + r6516225;
        double r6516227 = 1.283333;
        double r6516228 = r6516224 * r6516208;
        double r6516229 = r6516227 * r6516228;
        double r6516230 = r6516226 + r6516229;
        double r6516231 = -0.157143;
        double r6516232 = r6516228 * r6516208;
        double r6516233 = r6516231 * r6516232;
        double r6516234 = r6516230 + r6516233;
        double r6516235 = 0.012277;
        double r6516236 = r6516232 * r6516208;
        double r6516237 = r6516235 * r6516236;
        double r6516238 = r6516234 + r6516237;
        double r6516239 = -0.000606;
        double r6516240 = r6516236 * r6516208;
        double r6516241 = r6516239 * r6516240;
        double r6516242 = r6516238 + r6516241;
        double r6516243 = 1.8e-05;
        double r6516244 = r6516240 * r6516208;
        double r6516245 = r6516243 * r6516244;
        double r6516246 = r6516242 + r6516245;
        return r6516246;
}


double f_of(float x) {
        float r6516247 = x;
        float r6516248 = r6516247 * r6516247;
        float r6516249 = -36.666667;
        float r6516250 = r6516249 * r6516247;
        float r6516251 = 33.0;
        float r6516252 = r6516250 + r6516251;
        float r6516253 = r6516248 * r6516252;
        float r6516254 = -12.0;
        float r6516255 = r6516247 * r6516254;
        float r6516256 = 1.0;
        float r6516257 = r6516255 + r6516256;
        float r6516258 = r6516253 + r6516257;
        float r6516259 = 3;
        float r6516260 = pow(r6516247, r6516259);
        float r6516261 = r6516260 * r6516260;
        float r6516262 = 1.283333;
        float r6516263 = -0.157143;
        float r6516264 = r6516263 * r6516247;
        float r6516265 = r6516262 + r6516264;
        float r6516266 = r6516261 * r6516265;
        float r6516267 = r6516248 * r6516248;
        float r6516268 = 20.625;
        float r6516269 = -6.6;
        float r6516270 = r6516269 * r6516247;
        float r6516271 = r6516268 + r6516270;
        float r6516272 = r6516267 * r6516271;
        float r6516273 = r6516266 + r6516272;
        float r6516274 = r6516258 + r6516273;
        float r6516275 = r6516267 * r6516267;
        float r6516276 = 1.8e-05;
        float r6516277 = r6516276 * r6516248;
        float r6516278 = r6516275 * r6516277;
        float r6516279 = 2;
        float r6516280 = r6516279 + r6516279;
        float r6516281 = pow(r6516247, r6516280);
        float r6516282 = r6516267 * r6516281;
        float r6516283 = -0.000606;
        float r6516284 = r6516283 * r6516247;
        float r6516285 = 0.012277;
        float r6516286 = r6516284 + r6516285;
        float r6516287 = r6516282 * r6516286;
        float r6516288 = r6516278 + r6516287;
        float r6516289 = r6516274 + r6516288;
        return r6516289;
}

double f_od(double x) {
        double r6516290 = x;
        double r6516291 = r6516290 * r6516290;
        double r6516292 = -36.666667;
        double r6516293 = r6516292 * r6516290;
        double r6516294 = 33.0;
        double r6516295 = r6516293 + r6516294;
        double r6516296 = r6516291 * r6516295;
        double r6516297 = -12.0;
        double r6516298 = r6516290 * r6516297;
        double r6516299 = 1.0;
        double r6516300 = r6516298 + r6516299;
        double r6516301 = r6516296 + r6516300;
        double r6516302 = 3;
        double r6516303 = pow(r6516290, r6516302);
        double r6516304 = r6516303 * r6516303;
        double r6516305 = 1.283333;
        double r6516306 = -0.157143;
        double r6516307 = r6516306 * r6516290;
        double r6516308 = r6516305 + r6516307;
        double r6516309 = r6516304 * r6516308;
        double r6516310 = r6516291 * r6516291;
        double r6516311 = 20.625;
        double r6516312 = -6.6;
        double r6516313 = r6516312 * r6516290;
        double r6516314 = r6516311 + r6516313;
        double r6516315 = r6516310 * r6516314;
        double r6516316 = r6516309 + r6516315;
        double r6516317 = r6516301 + r6516316;
        double r6516318 = r6516310 * r6516310;
        double r6516319 = 1.8e-05;
        double r6516320 = r6516319 * r6516291;
        double r6516321 = r6516318 * r6516320;
        double r6516322 = 2;
        double r6516323 = r6516322 + r6516322;
        double r6516324 = pow(r6516290, r6516323);
        double r6516325 = r6516310 * r6516324;
        double r6516326 = -0.000606;
        double r6516327 = r6516326 * r6516290;
        double r6516328 = 0.012277;
        double r6516329 = r6516327 + r6516328;
        double r6516330 = r6516325 * r6516329;
        double r6516331 = r6516321 + r6516330;
        double r6516332 = r6516317 + r6516331;
        return r6516332;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6516333, r6516334, r6516335, r6516336, r6516337, r6516338, r6516339, r6516340, r6516341, r6516342, r6516343, r6516344, r6516345, r6516346, r6516347, r6516348, r6516349, r6516350, r6516351, r6516352, r6516353, r6516354, r6516355, r6516356, r6516357, r6516358, r6516359, r6516360, r6516361, r6516362, r6516363, r6516364, r6516365, r6516366, r6516367, r6516368, r6516369, r6516370, r6516371, r6516372, r6516373;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6516333, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516334, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6516335);
        mpfr_init(r6516336);
        mpfr_init(r6516337);
        mpfr_init_set_str(r6516338, "33.0", 10, MPFR_RNDN);
        mpfr_init(r6516339);
        mpfr_init(r6516340);
        mpfr_init(r6516341);
        mpfr_init_set_str(r6516342, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r6516343);
        mpfr_init(r6516344);
        mpfr_init(r6516345);
        mpfr_init_set_str(r6516346, "20.625", 10, MPFR_RNDN);
        mpfr_init(r6516347);
        mpfr_init(r6516348);
        mpfr_init(r6516349);
        mpfr_init_set_str(r6516350, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r6516351);
        mpfr_init(r6516352);
        mpfr_init(r6516353);
        mpfr_init_set_str(r6516354, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r6516355);
        mpfr_init(r6516356);
        mpfr_init(r6516357);
        mpfr_init_set_str(r6516358, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r6516359);
        mpfr_init(r6516360);
        mpfr_init(r6516361);
        mpfr_init_set_str(r6516362, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r6516363);
        mpfr_init(r6516364);
        mpfr_init(r6516365);
        mpfr_init_set_str(r6516366, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r6516367);
        mpfr_init(r6516368);
        mpfr_init(r6516369);
        mpfr_init_set_str(r6516370, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r6516371);
        mpfr_init(r6516372);
        mpfr_init(r6516373);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6516335, x, MPFR_RNDN);
        mpfr_mul(r6516336, r6516334, r6516335, MPFR_RNDN);
        mpfr_add(r6516337, r6516333, r6516336, MPFR_RNDN);
        ;
        mpfr_mul(r6516339, r6516335, r6516335, MPFR_RNDN);
        mpfr_mul(r6516340, r6516338, r6516339, MPFR_RNDN);
        mpfr_add(r6516341, r6516337, r6516340, MPFR_RNDN);
        ;
        mpfr_mul(r6516343, r6516339, r6516335, MPFR_RNDN);
        mpfr_mul(r6516344, r6516342, r6516343, MPFR_RNDN);
        mpfr_add(r6516345, r6516341, r6516344, MPFR_RNDN);
        ;
        mpfr_mul(r6516347, r6516343, r6516335, MPFR_RNDN);
        mpfr_mul(r6516348, r6516346, r6516347, MPFR_RNDN);
        mpfr_add(r6516349, r6516345, r6516348, MPFR_RNDN);
        ;
        mpfr_mul(r6516351, r6516347, r6516335, MPFR_RNDN);
        mpfr_mul(r6516352, r6516350, r6516351, MPFR_RNDN);
        mpfr_add(r6516353, r6516349, r6516352, MPFR_RNDN);
        ;
        mpfr_mul(r6516355, r6516351, r6516335, MPFR_RNDN);
        mpfr_mul(r6516356, r6516354, r6516355, MPFR_RNDN);
        mpfr_add(r6516357, r6516353, r6516356, MPFR_RNDN);
        ;
        mpfr_mul(r6516359, r6516355, r6516335, MPFR_RNDN);
        mpfr_mul(r6516360, r6516358, r6516359, MPFR_RNDN);
        mpfr_add(r6516361, r6516357, r6516360, MPFR_RNDN);
        ;
        mpfr_mul(r6516363, r6516359, r6516335, MPFR_RNDN);
        mpfr_mul(r6516364, r6516362, r6516363, MPFR_RNDN);
        mpfr_add(r6516365, r6516361, r6516364, MPFR_RNDN);
        ;
        mpfr_mul(r6516367, r6516363, r6516335, MPFR_RNDN);
        mpfr_mul(r6516368, r6516366, r6516367, MPFR_RNDN);
        mpfr_add(r6516369, r6516365, r6516368, MPFR_RNDN);
        ;
        mpfr_mul(r6516371, r6516367, r6516335, MPFR_RNDN);
        mpfr_mul(r6516372, r6516370, r6516371, MPFR_RNDN);
        mpfr_add(r6516373, r6516369, r6516372, MPFR_RNDN);
        return mpfr_get_d(r6516373, MPFR_RNDN);
}

static mpfr_t r6516374, r6516375, r6516376, r6516377, r6516378, r6516379, r6516380, r6516381, r6516382, r6516383, r6516384, r6516385, r6516386, r6516387, r6516388, r6516389, r6516390, r6516391, r6516392, r6516393, r6516394, r6516395, r6516396, r6516397, r6516398, r6516399, r6516400, r6516401, r6516402, r6516403, r6516404, r6516405, r6516406, r6516407, r6516408, r6516409, r6516410, r6516411, r6516412, r6516413, r6516414, r6516415, r6516416;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6516374);
        mpfr_init(r6516375);
        mpfr_init_set_str(r6516376, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r6516377);
        mpfr_init_set_str(r6516378, "33.0", 10, MPFR_RNDN);
        mpfr_init(r6516379);
        mpfr_init(r6516380);
        mpfr_init_set_str(r6516381, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6516382);
        mpfr_init_set_str(r6516383, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6516384);
        mpfr_init(r6516385);
        mpfr_init_set_str(r6516386, "3", 10, MPFR_RNDN);
        mpfr_init(r6516387);
        mpfr_init(r6516388);
        mpfr_init_set_str(r6516389, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516390, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r6516391);
        mpfr_init(r6516392);
        mpfr_init(r6516393);
        mpfr_init(r6516394);
        mpfr_init_set_str(r6516395, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516396, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r6516397);
        mpfr_init(r6516398);
        mpfr_init(r6516399);
        mpfr_init(r6516400);
        mpfr_init(r6516401);
        mpfr_init(r6516402);
        mpfr_init_set_str(r6516403, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r6516404);
        mpfr_init(r6516405);
        mpfr_init_set_str(r6516406, "2", 10, MPFR_RNDN);
        mpfr_init(r6516407);
        mpfr_init(r6516408);
        mpfr_init(r6516409);
        mpfr_init_set_str(r6516410, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r6516411);
        mpfr_init_set_str(r6516412, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r6516413);
        mpfr_init(r6516414);
        mpfr_init(r6516415);
        mpfr_init(r6516416);
}

double f_fm(double x) {
        mpfr_set_d(r6516374, x, MPFR_RNDN);
        mpfr_mul(r6516375, r6516374, r6516374, MPFR_RNDN);
        ;
        mpfr_mul(r6516377, r6516376, r6516374, MPFR_RNDN);
        ;
        mpfr_add(r6516379, r6516377, r6516378, MPFR_RNDN);
        mpfr_mul(r6516380, r6516375, r6516379, MPFR_RNDN);
        ;
        mpfr_mul(r6516382, r6516374, r6516381, MPFR_RNDN);
        ;
        mpfr_add(r6516384, r6516382, r6516383, MPFR_RNDN);
        mpfr_add(r6516385, r6516380, r6516384, MPFR_RNDN);
        ;
        mpfr_pow(r6516387, r6516374, r6516386, MPFR_RNDN);
        mpfr_mul(r6516388, r6516387, r6516387, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516391, r6516390, r6516374, MPFR_RNDN);
        mpfr_add(r6516392, r6516389, r6516391, MPFR_RNDN);
        mpfr_mul(r6516393, r6516388, r6516392, MPFR_RNDN);
        mpfr_mul(r6516394, r6516375, r6516375, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516397, r6516396, r6516374, MPFR_RNDN);
        mpfr_add(r6516398, r6516395, r6516397, MPFR_RNDN);
        mpfr_mul(r6516399, r6516394, r6516398, MPFR_RNDN);
        mpfr_add(r6516400, r6516393, r6516399, MPFR_RNDN);
        mpfr_add(r6516401, r6516385, r6516400, MPFR_RNDN);
        mpfr_mul(r6516402, r6516394, r6516394, MPFR_RNDN);
        ;
        mpfr_mul(r6516404, r6516403, r6516375, MPFR_RNDN);
        mpfr_mul(r6516405, r6516402, r6516404, MPFR_RNDN);
        ;
        mpfr_add(r6516407, r6516406, r6516406, MPFR_RNDN);
        mpfr_pow(r6516408, r6516374, r6516407, MPFR_RNDN);
        mpfr_mul(r6516409, r6516394, r6516408, MPFR_RNDN);
        ;
        mpfr_mul(r6516411, r6516410, r6516374, MPFR_RNDN);
        ;
        mpfr_add(r6516413, r6516411, r6516412, MPFR_RNDN);
        mpfr_mul(r6516414, r6516409, r6516413, MPFR_RNDN);
        mpfr_add(r6516415, r6516405, r6516414, MPFR_RNDN);
        mpfr_add(r6516416, r6516401, r6516415, MPFR_RNDN);
        return mpfr_get_d(r6516416, MPFR_RNDN);
}

static mpfr_t r6516417, r6516418, r6516419, r6516420, r6516421, r6516422, r6516423, r6516424, r6516425, r6516426, r6516427, r6516428, r6516429, r6516430, r6516431, r6516432, r6516433, r6516434, r6516435, r6516436, r6516437, r6516438, r6516439, r6516440, r6516441, r6516442, r6516443, r6516444, r6516445, r6516446, r6516447, r6516448, r6516449, r6516450, r6516451, r6516452, r6516453, r6516454, r6516455, r6516456, r6516457, r6516458, r6516459;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6516417);
        mpfr_init(r6516418);
        mpfr_init_set_str(r6516419, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r6516420);
        mpfr_init_set_str(r6516421, "33.0", 10, MPFR_RNDN);
        mpfr_init(r6516422);
        mpfr_init(r6516423);
        mpfr_init_set_str(r6516424, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6516425);
        mpfr_init_set_str(r6516426, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6516427);
        mpfr_init(r6516428);
        mpfr_init_set_str(r6516429, "3", 10, MPFR_RNDN);
        mpfr_init(r6516430);
        mpfr_init(r6516431);
        mpfr_init_set_str(r6516432, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516433, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r6516434);
        mpfr_init(r6516435);
        mpfr_init(r6516436);
        mpfr_init(r6516437);
        mpfr_init_set_str(r6516438, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516439, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r6516440);
        mpfr_init(r6516441);
        mpfr_init(r6516442);
        mpfr_init(r6516443);
        mpfr_init(r6516444);
        mpfr_init(r6516445);
        mpfr_init_set_str(r6516446, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r6516447);
        mpfr_init(r6516448);
        mpfr_init_set_str(r6516449, "2", 10, MPFR_RNDN);
        mpfr_init(r6516450);
        mpfr_init(r6516451);
        mpfr_init(r6516452);
        mpfr_init_set_str(r6516453, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r6516454);
        mpfr_init_set_str(r6516455, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r6516456);
        mpfr_init(r6516457);
        mpfr_init(r6516458);
        mpfr_init(r6516459);
}

double f_dm(double x) {
        mpfr_set_d(r6516417, x, MPFR_RNDN);
        mpfr_mul(r6516418, r6516417, r6516417, MPFR_RNDN);
        ;
        mpfr_mul(r6516420, r6516419, r6516417, MPFR_RNDN);
        ;
        mpfr_add(r6516422, r6516420, r6516421, MPFR_RNDN);
        mpfr_mul(r6516423, r6516418, r6516422, MPFR_RNDN);
        ;
        mpfr_mul(r6516425, r6516417, r6516424, MPFR_RNDN);
        ;
        mpfr_add(r6516427, r6516425, r6516426, MPFR_RNDN);
        mpfr_add(r6516428, r6516423, r6516427, MPFR_RNDN);
        ;
        mpfr_pow(r6516430, r6516417, r6516429, MPFR_RNDN);
        mpfr_mul(r6516431, r6516430, r6516430, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516434, r6516433, r6516417, MPFR_RNDN);
        mpfr_add(r6516435, r6516432, r6516434, MPFR_RNDN);
        mpfr_mul(r6516436, r6516431, r6516435, MPFR_RNDN);
        mpfr_mul(r6516437, r6516418, r6516418, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516440, r6516439, r6516417, MPFR_RNDN);
        mpfr_add(r6516441, r6516438, r6516440, MPFR_RNDN);
        mpfr_mul(r6516442, r6516437, r6516441, MPFR_RNDN);
        mpfr_add(r6516443, r6516436, r6516442, MPFR_RNDN);
        mpfr_add(r6516444, r6516428, r6516443, MPFR_RNDN);
        mpfr_mul(r6516445, r6516437, r6516437, MPFR_RNDN);
        ;
        mpfr_mul(r6516447, r6516446, r6516418, MPFR_RNDN);
        mpfr_mul(r6516448, r6516445, r6516447, MPFR_RNDN);
        ;
        mpfr_add(r6516450, r6516449, r6516449, MPFR_RNDN);
        mpfr_pow(r6516451, r6516417, r6516450, MPFR_RNDN);
        mpfr_mul(r6516452, r6516437, r6516451, MPFR_RNDN);
        ;
        mpfr_mul(r6516454, r6516453, r6516417, MPFR_RNDN);
        ;
        mpfr_add(r6516456, r6516454, r6516455, MPFR_RNDN);
        mpfr_mul(r6516457, r6516452, r6516456, MPFR_RNDN);
        mpfr_add(r6516458, r6516448, r6516457, MPFR_RNDN);
        mpfr_add(r6516459, r6516444, r6516458, MPFR_RNDN);
        return mpfr_get_d(r6516459, MPFR_RNDN);
}
