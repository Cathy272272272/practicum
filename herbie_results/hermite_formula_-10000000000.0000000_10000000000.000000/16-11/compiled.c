#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r9405170 = -665280.0;
        float r9405171 = x;
        float r9405172 = r9405170 * r9405171;
        float r9405173 = 2217600.0;
        float r9405174 = r9405171 * r9405171;
        float r9405175 = r9405174 * r9405171;
        float r9405176 = r9405173 * r9405175;
        float r9405177 = r9405172 + r9405176;
        float r9405178 = -1774080.0;
        float r9405179 = r9405175 * r9405171;
        float r9405180 = r9405179 * r9405171;
        float r9405181 = r9405178 * r9405180;
        float r9405182 = r9405177 + r9405181;
        float r9405183 = 506880.0;
        float r9405184 = r9405180 * r9405171;
        float r9405185 = r9405184 * r9405171;
        float r9405186 = r9405183 * r9405185;
        float r9405187 = r9405182 + r9405186;
        float r9405188 = -56320.0;
        float r9405189 = r9405185 * r9405171;
        float r9405190 = r9405189 * r9405171;
        float r9405191 = r9405188 * r9405190;
        float r9405192 = r9405187 + r9405191;
        float r9405193 = 2048.0;
        float r9405194 = r9405190 * r9405171;
        float r9405195 = r9405194 * r9405171;
        float r9405196 = r9405193 * r9405195;
        float r9405197 = r9405192 + r9405196;
        return r9405197;
}

double f_id(double x) {
        double r9405198 = -665280.0;
        double r9405199 = x;
        double r9405200 = r9405198 * r9405199;
        double r9405201 = 2217600.0;
        double r9405202 = r9405199 * r9405199;
        double r9405203 = r9405202 * r9405199;
        double r9405204 = r9405201 * r9405203;
        double r9405205 = r9405200 + r9405204;
        double r9405206 = -1774080.0;
        double r9405207 = r9405203 * r9405199;
        double r9405208 = r9405207 * r9405199;
        double r9405209 = r9405206 * r9405208;
        double r9405210 = r9405205 + r9405209;
        double r9405211 = 506880.0;
        double r9405212 = r9405208 * r9405199;
        double r9405213 = r9405212 * r9405199;
        double r9405214 = r9405211 * r9405213;
        double r9405215 = r9405210 + r9405214;
        double r9405216 = -56320.0;
        double r9405217 = r9405213 * r9405199;
        double r9405218 = r9405217 * r9405199;
        double r9405219 = r9405216 * r9405218;
        double r9405220 = r9405215 + r9405219;
        double r9405221 = 2048.0;
        double r9405222 = r9405218 * r9405199;
        double r9405223 = r9405222 * r9405199;
        double r9405224 = r9405221 * r9405223;
        double r9405225 = r9405220 + r9405224;
        return r9405225;
}


double f_of(float x) {
        float r9405226 = x;
        float r9405227 = 3;
        float r9405228 = pow(r9405226, r9405227);
        float r9405229 = r9405228 * r9405228;
        float r9405230 = r9405228 * r9405229;
        float r9405231 = 2048.0;
        float r9405232 = r9405226 * r9405231;
        float r9405233 = r9405226 * r9405232;
        float r9405234 = -56320.0;
        float r9405235 = r9405233 + r9405234;
        float r9405236 = r9405230 * r9405235;
        float r9405237 = 506880.0;
        float r9405238 = r9405237 * r9405226;
        float r9405239 = r9405226 * r9405226;
        float r9405240 = r9405238 * r9405239;
        float r9405241 = cbrt(r9405240);
        float r9405242 = r9405241 * r9405241;
        float r9405243 = r9405242 * r9405241;
        float r9405244 = r9405239 * r9405239;
        float r9405245 = r9405243 * r9405244;
        float r9405246 = -665280.0;
        float r9405247 = r9405246 * r9405226;
        float r9405248 = r9405245 + r9405247;
        float r9405249 = r9405236 + r9405248;
        float r9405250 = 2217600.0;
        float r9405251 = r9405250 * r9405226;
        float r9405252 = -1774080.0;
        float r9405253 = r9405226 * r9405252;
        float r9405254 = r9405253 * r9405239;
        float r9405255 = r9405251 + r9405254;
        float r9405256 = r9405239 * r9405255;
        float r9405257 = r9405249 + r9405256;
        return r9405257;
}

double f_od(double x) {
        double r9405258 = x;
        double r9405259 = 3;
        double r9405260 = pow(r9405258, r9405259);
        double r9405261 = r9405260 * r9405260;
        double r9405262 = r9405260 * r9405261;
        double r9405263 = 2048.0;
        double r9405264 = r9405258 * r9405263;
        double r9405265 = r9405258 * r9405264;
        double r9405266 = -56320.0;
        double r9405267 = r9405265 + r9405266;
        double r9405268 = r9405262 * r9405267;
        double r9405269 = 506880.0;
        double r9405270 = r9405269 * r9405258;
        double r9405271 = r9405258 * r9405258;
        double r9405272 = r9405270 * r9405271;
        double r9405273 = cbrt(r9405272);
        double r9405274 = r9405273 * r9405273;
        double r9405275 = r9405274 * r9405273;
        double r9405276 = r9405271 * r9405271;
        double r9405277 = r9405275 * r9405276;
        double r9405278 = -665280.0;
        double r9405279 = r9405278 * r9405258;
        double r9405280 = r9405277 + r9405279;
        double r9405281 = r9405268 + r9405280;
        double r9405282 = 2217600.0;
        double r9405283 = r9405282 * r9405258;
        double r9405284 = -1774080.0;
        double r9405285 = r9405258 * r9405284;
        double r9405286 = r9405285 * r9405271;
        double r9405287 = r9405283 + r9405286;
        double r9405288 = r9405271 * r9405287;
        double r9405289 = r9405281 + r9405288;
        return r9405289;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9405290, r9405291, r9405292, r9405293, r9405294, r9405295, r9405296, r9405297, r9405298, r9405299, r9405300, r9405301, r9405302, r9405303, r9405304, r9405305, r9405306, r9405307, r9405308, r9405309, r9405310, r9405311, r9405312, r9405313, r9405314, r9405315, r9405316, r9405317;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9405290, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r9405291);
        mpfr_init(r9405292);
        mpfr_init_set_str(r9405293, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r9405294);
        mpfr_init(r9405295);
        mpfr_init(r9405296);
        mpfr_init(r9405297);
        mpfr_init_set_str(r9405298, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r9405299);
        mpfr_init(r9405300);
        mpfr_init(r9405301);
        mpfr_init(r9405302);
        mpfr_init_set_str(r9405303, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r9405304);
        mpfr_init(r9405305);
        mpfr_init(r9405306);
        mpfr_init(r9405307);
        mpfr_init_set_str(r9405308, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r9405309);
        mpfr_init(r9405310);
        mpfr_init(r9405311);
        mpfr_init(r9405312);
        mpfr_init_set_str(r9405313, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r9405314);
        mpfr_init(r9405315);
        mpfr_init(r9405316);
        mpfr_init(r9405317);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9405291, x, MPFR_RNDN);
        mpfr_mul(r9405292, r9405290, r9405291, MPFR_RNDN);
        ;
        mpfr_mul(r9405294, r9405291, r9405291, MPFR_RNDN);
        mpfr_mul(r9405295, r9405294, r9405291, MPFR_RNDN);
        mpfr_mul(r9405296, r9405293, r9405295, MPFR_RNDN);
        mpfr_add(r9405297, r9405292, r9405296, MPFR_RNDN);
        ;
        mpfr_mul(r9405299, r9405295, r9405291, MPFR_RNDN);
        mpfr_mul(r9405300, r9405299, r9405291, MPFR_RNDN);
        mpfr_mul(r9405301, r9405298, r9405300, MPFR_RNDN);
        mpfr_add(r9405302, r9405297, r9405301, MPFR_RNDN);
        ;
        mpfr_mul(r9405304, r9405300, r9405291, MPFR_RNDN);
        mpfr_mul(r9405305, r9405304, r9405291, MPFR_RNDN);
        mpfr_mul(r9405306, r9405303, r9405305, MPFR_RNDN);
        mpfr_add(r9405307, r9405302, r9405306, MPFR_RNDN);
        ;
        mpfr_mul(r9405309, r9405305, r9405291, MPFR_RNDN);
        mpfr_mul(r9405310, r9405309, r9405291, MPFR_RNDN);
        mpfr_mul(r9405311, r9405308, r9405310, MPFR_RNDN);
        mpfr_add(r9405312, r9405307, r9405311, MPFR_RNDN);
        ;
        mpfr_mul(r9405314, r9405310, r9405291, MPFR_RNDN);
        mpfr_mul(r9405315, r9405314, r9405291, MPFR_RNDN);
        mpfr_mul(r9405316, r9405313, r9405315, MPFR_RNDN);
        mpfr_add(r9405317, r9405312, r9405316, MPFR_RNDN);
        return mpfr_get_d(r9405317, MPFR_RNDN);
}

static mpfr_t r9405318, r9405319, r9405320, r9405321, r9405322, r9405323, r9405324, r9405325, r9405326, r9405327, r9405328, r9405329, r9405330, r9405331, r9405332, r9405333, r9405334, r9405335, r9405336, r9405337, r9405338, r9405339, r9405340, r9405341, r9405342, r9405343, r9405344, r9405345, r9405346, r9405347, r9405348, r9405349;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9405318);
        mpfr_init_set_str(r9405319, "3", 10, MPFR_RNDN);
        mpfr_init(r9405320);
        mpfr_init(r9405321);
        mpfr_init(r9405322);
        mpfr_init_set_str(r9405323, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r9405324);
        mpfr_init(r9405325);
        mpfr_init_set_str(r9405326, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r9405327);
        mpfr_init(r9405328);
        mpfr_init_set_str(r9405329, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r9405330);
        mpfr_init(r9405331);
        mpfr_init(r9405332);
        mpfr_init(r9405333);
        mpfr_init(r9405334);
        mpfr_init(r9405335);
        mpfr_init(r9405336);
        mpfr_init(r9405337);
        mpfr_init_set_str(r9405338, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r9405339);
        mpfr_init(r9405340);
        mpfr_init(r9405341);
        mpfr_init_set_str(r9405342, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r9405343);
        mpfr_init_set_str(r9405344, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r9405345);
        mpfr_init(r9405346);
        mpfr_init(r9405347);
        mpfr_init(r9405348);
        mpfr_init(r9405349);
}

double f_fm(double x) {
        mpfr_set_d(r9405318, x, MPFR_RNDN);
        ;
        mpfr_pow(r9405320, r9405318, r9405319, MPFR_RNDN);
        mpfr_mul(r9405321, r9405320, r9405320, MPFR_RNDN);
        mpfr_mul(r9405322, r9405320, r9405321, MPFR_RNDN);
        ;
        mpfr_mul(r9405324, r9405318, r9405323, MPFR_RNDN);
        mpfr_mul(r9405325, r9405318, r9405324, MPFR_RNDN);
        ;
        mpfr_add(r9405327, r9405325, r9405326, MPFR_RNDN);
        mpfr_mul(r9405328, r9405322, r9405327, MPFR_RNDN);
        ;
        mpfr_mul(r9405330, r9405329, r9405318, MPFR_RNDN);
        mpfr_mul(r9405331, r9405318, r9405318, MPFR_RNDN);
        mpfr_mul(r9405332, r9405330, r9405331, MPFR_RNDN);
        mpfr_cbrt(r9405333, r9405332, MPFR_RNDN);
        mpfr_mul(r9405334, r9405333, r9405333, MPFR_RNDN);
        mpfr_mul(r9405335, r9405334, r9405333, MPFR_RNDN);
        mpfr_mul(r9405336, r9405331, r9405331, MPFR_RNDN);
        mpfr_mul(r9405337, r9405335, r9405336, MPFR_RNDN);
        ;
        mpfr_mul(r9405339, r9405338, r9405318, MPFR_RNDN);
        mpfr_add(r9405340, r9405337, r9405339, MPFR_RNDN);
        mpfr_add(r9405341, r9405328, r9405340, MPFR_RNDN);
        ;
        mpfr_mul(r9405343, r9405342, r9405318, MPFR_RNDN);
        ;
        mpfr_mul(r9405345, r9405318, r9405344, MPFR_RNDN);
        mpfr_mul(r9405346, r9405345, r9405331, MPFR_RNDN);
        mpfr_add(r9405347, r9405343, r9405346, MPFR_RNDN);
        mpfr_mul(r9405348, r9405331, r9405347, MPFR_RNDN);
        mpfr_add(r9405349, r9405341, r9405348, MPFR_RNDN);
        return mpfr_get_d(r9405349, MPFR_RNDN);
}

static mpfr_t r9405350, r9405351, r9405352, r9405353, r9405354, r9405355, r9405356, r9405357, r9405358, r9405359, r9405360, r9405361, r9405362, r9405363, r9405364, r9405365, r9405366, r9405367, r9405368, r9405369, r9405370, r9405371, r9405372, r9405373, r9405374, r9405375, r9405376, r9405377, r9405378, r9405379, r9405380, r9405381;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9405350);
        mpfr_init_set_str(r9405351, "3", 10, MPFR_RNDN);
        mpfr_init(r9405352);
        mpfr_init(r9405353);
        mpfr_init(r9405354);
        mpfr_init_set_str(r9405355, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r9405356);
        mpfr_init(r9405357);
        mpfr_init_set_str(r9405358, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r9405359);
        mpfr_init(r9405360);
        mpfr_init_set_str(r9405361, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r9405362);
        mpfr_init(r9405363);
        mpfr_init(r9405364);
        mpfr_init(r9405365);
        mpfr_init(r9405366);
        mpfr_init(r9405367);
        mpfr_init(r9405368);
        mpfr_init(r9405369);
        mpfr_init_set_str(r9405370, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r9405371);
        mpfr_init(r9405372);
        mpfr_init(r9405373);
        mpfr_init_set_str(r9405374, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r9405375);
        mpfr_init_set_str(r9405376, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r9405377);
        mpfr_init(r9405378);
        mpfr_init(r9405379);
        mpfr_init(r9405380);
        mpfr_init(r9405381);
}

double f_dm(double x) {
        mpfr_set_d(r9405350, x, MPFR_RNDN);
        ;
        mpfr_pow(r9405352, r9405350, r9405351, MPFR_RNDN);
        mpfr_mul(r9405353, r9405352, r9405352, MPFR_RNDN);
        mpfr_mul(r9405354, r9405352, r9405353, MPFR_RNDN);
        ;
        mpfr_mul(r9405356, r9405350, r9405355, MPFR_RNDN);
        mpfr_mul(r9405357, r9405350, r9405356, MPFR_RNDN);
        ;
        mpfr_add(r9405359, r9405357, r9405358, MPFR_RNDN);
        mpfr_mul(r9405360, r9405354, r9405359, MPFR_RNDN);
        ;
        mpfr_mul(r9405362, r9405361, r9405350, MPFR_RNDN);
        mpfr_mul(r9405363, r9405350, r9405350, MPFR_RNDN);
        mpfr_mul(r9405364, r9405362, r9405363, MPFR_RNDN);
        mpfr_cbrt(r9405365, r9405364, MPFR_RNDN);
        mpfr_mul(r9405366, r9405365, r9405365, MPFR_RNDN);
        mpfr_mul(r9405367, r9405366, r9405365, MPFR_RNDN);
        mpfr_mul(r9405368, r9405363, r9405363, MPFR_RNDN);
        mpfr_mul(r9405369, r9405367, r9405368, MPFR_RNDN);
        ;
        mpfr_mul(r9405371, r9405370, r9405350, MPFR_RNDN);
        mpfr_add(r9405372, r9405369, r9405371, MPFR_RNDN);
        mpfr_add(r9405373, r9405360, r9405372, MPFR_RNDN);
        ;
        mpfr_mul(r9405375, r9405374, r9405350, MPFR_RNDN);
        ;
        mpfr_mul(r9405377, r9405350, r9405376, MPFR_RNDN);
        mpfr_mul(r9405378, r9405377, r9405363, MPFR_RNDN);
        mpfr_add(r9405379, r9405375, r9405378, MPFR_RNDN);
        mpfr_mul(r9405380, r9405363, r9405379, MPFR_RNDN);
        mpfr_add(r9405381, r9405373, r9405380, MPFR_RNDN);
        return mpfr_get_d(r9405381, MPFR_RNDN);
}

