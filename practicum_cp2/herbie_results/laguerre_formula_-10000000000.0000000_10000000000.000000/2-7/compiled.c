#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r9373142 = 1.0;
        float r9373143 = -7.0;
        float r9373144 = x;
        float r9373145 = r9373143 * r9373144;
        float r9373146 = r9373142 + r9373145;
        float r9373147 = 10.5;
        float r9373148 = r9373144 * r9373144;
        float r9373149 = r9373147 * r9373148;
        float r9373150 = r9373146 + r9373149;
        float r9373151 = -5.833333;
        float r9373152 = r9373148 * r9373144;
        float r9373153 = r9373151 * r9373152;
        float r9373154 = r9373150 + r9373153;
        float r9373155 = 1.458333;
        float r9373156 = r9373152 * r9373144;
        float r9373157 = r9373155 * r9373156;
        float r9373158 = r9373154 + r9373157;
        float r9373159 = -0.175;
        float r9373160 = r9373156 * r9373144;
        float r9373161 = r9373159 * r9373160;
        float r9373162 = r9373158 + r9373161;
        float r9373163 = 0.009722;
        float r9373164 = r9373160 * r9373144;
        float r9373165 = r9373163 * r9373164;
        float r9373166 = r9373162 + r9373165;
        float r9373167 = -0.000198;
        float r9373168 = r9373164 * r9373144;
        float r9373169 = r9373167 * r9373168;
        float r9373170 = r9373166 + r9373169;
        return r9373170;
}

double f_id(double x) {
        double r9373171 = 1.0;
        double r9373172 = -7.0;
        double r9373173 = x;
        double r9373174 = r9373172 * r9373173;
        double r9373175 = r9373171 + r9373174;
        double r9373176 = 10.5;
        double r9373177 = r9373173 * r9373173;
        double r9373178 = r9373176 * r9373177;
        double r9373179 = r9373175 + r9373178;
        double r9373180 = -5.833333;
        double r9373181 = r9373177 * r9373173;
        double r9373182 = r9373180 * r9373181;
        double r9373183 = r9373179 + r9373182;
        double r9373184 = 1.458333;
        double r9373185 = r9373181 * r9373173;
        double r9373186 = r9373184 * r9373185;
        double r9373187 = r9373183 + r9373186;
        double r9373188 = -0.175;
        double r9373189 = r9373185 * r9373173;
        double r9373190 = r9373188 * r9373189;
        double r9373191 = r9373187 + r9373190;
        double r9373192 = 0.009722;
        double r9373193 = r9373189 * r9373173;
        double r9373194 = r9373192 * r9373193;
        double r9373195 = r9373191 + r9373194;
        double r9373196 = -0.000198;
        double r9373197 = r9373193 * r9373173;
        double r9373198 = r9373196 * r9373197;
        double r9373199 = r9373195 + r9373198;
        return r9373199;
}


double f_of(float x) {
        float r9373200 = 10.5;
        float r9373201 = x;
        float r9373202 = 2;
        float r9373203 = pow(r9373201, r9373202);
        float r9373204 = r9373200 * r9373203;
        float r9373205 = 0.5401233950617297;
        float r9373206 = 4;
        float r9373207 = pow(r9373201, r9373206);
        float r9373208 = r9373205 * r9373207;
        float r9373209 = r9373204 + r9373208;
        float r9373210 = 59.548604305555735;
        float r9373211 = pow(r9373200, r9373202);
        float r9373212 = r9373207 / r9373211;
        float r9373213 = r9373210 * r9373212;
        float r9373214 = 5.833332999999999;
        float r9373215 = 3;
        float r9373216 = pow(r9373201, r9373215);
        float r9373217 = r9373214 * r9373216;
        float r9373218 = r9373213 + r9373217;
        float r9373219 = r9373209 - r9373218;
        float r9373220 = -7.0;
        float r9373221 = r9373201 * r9373220;
        float r9373222 = 1.0;
        float r9373223 = r9373221 + r9373222;
        float r9373224 = r9373219 + r9373223;
        float r9373225 = r9373201 * r9373201;
        float r9373226 = r9373225 * r9373225;
        float r9373227 = 1.458333;
        float r9373228 = -0.175;
        float r9373229 = r9373228 * r9373201;
        float r9373230 = r9373227 + r9373229;
        float r9373231 = r9373226 * r9373230;
        float r9373232 = r9373216 * r9373216;
        float r9373233 = -0.000198;
        float r9373234 = r9373233 * r9373201;
        float r9373235 = 0.009722;
        float r9373236 = r9373234 + r9373235;
        float r9373237 = r9373232 * r9373236;
        float r9373238 = r9373231 + r9373237;
        float r9373239 = r9373224 + r9373238;
        return r9373239;
}

double f_od(double x) {
        double r9373240 = 10.5;
        double r9373241 = x;
        double r9373242 = 2;
        double r9373243 = pow(r9373241, r9373242);
        double r9373244 = r9373240 * r9373243;
        double r9373245 = 0.5401233950617297;
        double r9373246 = 4;
        double r9373247 = pow(r9373241, r9373246);
        double r9373248 = r9373245 * r9373247;
        double r9373249 = r9373244 + r9373248;
        double r9373250 = 59.548604305555735;
        double r9373251 = pow(r9373240, r9373242);
        double r9373252 = r9373247 / r9373251;
        double r9373253 = r9373250 * r9373252;
        double r9373254 = 5.833332999999999;
        double r9373255 = 3;
        double r9373256 = pow(r9373241, r9373255);
        double r9373257 = r9373254 * r9373256;
        double r9373258 = r9373253 + r9373257;
        double r9373259 = r9373249 - r9373258;
        double r9373260 = -7.0;
        double r9373261 = r9373241 * r9373260;
        double r9373262 = 1.0;
        double r9373263 = r9373261 + r9373262;
        double r9373264 = r9373259 + r9373263;
        double r9373265 = r9373241 * r9373241;
        double r9373266 = r9373265 * r9373265;
        double r9373267 = 1.458333;
        double r9373268 = -0.175;
        double r9373269 = r9373268 * r9373241;
        double r9373270 = r9373267 + r9373269;
        double r9373271 = r9373266 * r9373270;
        double r9373272 = r9373256 * r9373256;
        double r9373273 = -0.000198;
        double r9373274 = r9373273 * r9373241;
        double r9373275 = 0.009722;
        double r9373276 = r9373274 + r9373275;
        double r9373277 = r9373272 * r9373276;
        double r9373278 = r9373271 + r9373277;
        double r9373279 = r9373264 + r9373278;
        return r9373279;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9373280, r9373281, r9373282, r9373283, r9373284, r9373285, r9373286, r9373287, r9373288, r9373289, r9373290, r9373291, r9373292, r9373293, r9373294, r9373295, r9373296, r9373297, r9373298, r9373299, r9373300, r9373301, r9373302, r9373303, r9373304, r9373305, r9373306, r9373307, r9373308;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373280, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373281, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9373282);
        mpfr_init(r9373283);
        mpfr_init(r9373284);
        mpfr_init_set_str(r9373285, "10.5", 10, MPFR_RNDN);
        mpfr_init(r9373286);
        mpfr_init(r9373287);
        mpfr_init(r9373288);
        mpfr_init_set_str(r9373289, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r9373290);
        mpfr_init(r9373291);
        mpfr_init(r9373292);
        mpfr_init_set_str(r9373293, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r9373294);
        mpfr_init(r9373295);
        mpfr_init(r9373296);
        mpfr_init_set_str(r9373297, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9373298);
        mpfr_init(r9373299);
        mpfr_init(r9373300);
        mpfr_init_set_str(r9373301, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9373302);
        mpfr_init(r9373303);
        mpfr_init(r9373304);
        mpfr_init_set_str(r9373305, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9373306);
        mpfr_init(r9373307);
        mpfr_init(r9373308);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9373282, x, MPFR_RNDN);
        mpfr_mul(r9373283, r9373281, r9373282, MPFR_RNDN);
        mpfr_add(r9373284, r9373280, r9373283, MPFR_RNDN);
        ;
        mpfr_mul(r9373286, r9373282, r9373282, MPFR_RNDN);
        mpfr_mul(r9373287, r9373285, r9373286, MPFR_RNDN);
        mpfr_add(r9373288, r9373284, r9373287, MPFR_RNDN);
        ;
        mpfr_mul(r9373290, r9373286, r9373282, MPFR_RNDN);
        mpfr_mul(r9373291, r9373289, r9373290, MPFR_RNDN);
        mpfr_add(r9373292, r9373288, r9373291, MPFR_RNDN);
        ;
        mpfr_mul(r9373294, r9373290, r9373282, MPFR_RNDN);
        mpfr_mul(r9373295, r9373293, r9373294, MPFR_RNDN);
        mpfr_add(r9373296, r9373292, r9373295, MPFR_RNDN);
        ;
        mpfr_mul(r9373298, r9373294, r9373282, MPFR_RNDN);
        mpfr_mul(r9373299, r9373297, r9373298, MPFR_RNDN);
        mpfr_add(r9373300, r9373296, r9373299, MPFR_RNDN);
        ;
        mpfr_mul(r9373302, r9373298, r9373282, MPFR_RNDN);
        mpfr_mul(r9373303, r9373301, r9373302, MPFR_RNDN);
        mpfr_add(r9373304, r9373300, r9373303, MPFR_RNDN);
        ;
        mpfr_mul(r9373306, r9373302, r9373282, MPFR_RNDN);
        mpfr_mul(r9373307, r9373305, r9373306, MPFR_RNDN);
        mpfr_add(r9373308, r9373304, r9373307, MPFR_RNDN);
        return mpfr_get_d(r9373308, MPFR_RNDN);
}

static mpfr_t r9373309, r9373310, r9373311, r9373312, r9373313, r9373314, r9373315, r9373316, r9373317, r9373318, r9373319, r9373320, r9373321, r9373322, r9373323, r9373324, r9373325, r9373326, r9373327, r9373328, r9373329, r9373330, r9373331, r9373332, r9373333, r9373334, r9373335, r9373336, r9373337, r9373338, r9373339, r9373340, r9373341, r9373342, r9373343, r9373344, r9373345, r9373346, r9373347, r9373348;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373309, "10.5", 10, MPFR_RNDN);
        mpfr_init(r9373310);
        mpfr_init_set_str(r9373311, "2", 10, MPFR_RNDN);
        mpfr_init(r9373312);
        mpfr_init(r9373313);
        mpfr_init_set_str(r9373314, "0.5401233950617297", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373315, "4", 10, MPFR_RNDN);
        mpfr_init(r9373316);
        mpfr_init(r9373317);
        mpfr_init(r9373318);
        mpfr_init_set_str(r9373319, "59.548604305555735", 10, MPFR_RNDN);
        mpfr_init(r9373320);
        mpfr_init(r9373321);
        mpfr_init(r9373322);
        mpfr_init_set_str(r9373323, "5.833332999999999", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373324, "3", 10, MPFR_RNDN);
        mpfr_init(r9373325);
        mpfr_init(r9373326);
        mpfr_init(r9373327);
        mpfr_init(r9373328);
        mpfr_init_set_str(r9373329, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9373330);
        mpfr_init_set_str(r9373331, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9373332);
        mpfr_init(r9373333);
        mpfr_init(r9373334);
        mpfr_init(r9373335);
        mpfr_init_set_str(r9373336, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373337, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9373338);
        mpfr_init(r9373339);
        mpfr_init(r9373340);
        mpfr_init(r9373341);
        mpfr_init_set_str(r9373342, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9373343);
        mpfr_init_set_str(r9373344, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9373345);
        mpfr_init(r9373346);
        mpfr_init(r9373347);
        mpfr_init(r9373348);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9373310, x, MPFR_RNDN);
        ;
        mpfr_pow(r9373312, r9373310, r9373311, MPFR_RNDN);
        mpfr_mul(r9373313, r9373309, r9373312, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9373316, r9373310, r9373315, MPFR_RNDN);
        mpfr_mul(r9373317, r9373314, r9373316, MPFR_RNDN);
        mpfr_add(r9373318, r9373313, r9373317, MPFR_RNDN);
        ;
        mpfr_pow(r9373320, r9373309, r9373311, MPFR_RNDN);
        mpfr_div(r9373321, r9373316, r9373320, MPFR_RNDN);
        mpfr_mul(r9373322, r9373319, r9373321, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9373325, r9373310, r9373324, MPFR_RNDN);
        mpfr_mul(r9373326, r9373323, r9373325, MPFR_RNDN);
        mpfr_add(r9373327, r9373322, r9373326, MPFR_RNDN);
        mpfr_sub(r9373328, r9373318, r9373327, MPFR_RNDN);
        ;
        mpfr_mul(r9373330, r9373310, r9373329, MPFR_RNDN);
        ;
        mpfr_add(r9373332, r9373330, r9373331, MPFR_RNDN);
        mpfr_add(r9373333, r9373328, r9373332, MPFR_RNDN);
        mpfr_mul(r9373334, r9373310, r9373310, MPFR_RNDN);
        mpfr_mul(r9373335, r9373334, r9373334, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9373338, r9373337, r9373310, MPFR_RNDN);
        mpfr_add(r9373339, r9373336, r9373338, MPFR_RNDN);
        mpfr_mul(r9373340, r9373335, r9373339, MPFR_RNDN);
        mpfr_mul(r9373341, r9373325, r9373325, MPFR_RNDN);
        ;
        mpfr_mul(r9373343, r9373342, r9373310, MPFR_RNDN);
        ;
        mpfr_add(r9373345, r9373343, r9373344, MPFR_RNDN);
        mpfr_mul(r9373346, r9373341, r9373345, MPFR_RNDN);
        mpfr_add(r9373347, r9373340, r9373346, MPFR_RNDN);
        mpfr_add(r9373348, r9373333, r9373347, MPFR_RNDN);
        return mpfr_get_d(r9373348, MPFR_RNDN);
}

static mpfr_t r9373349, r9373350, r9373351, r9373352, r9373353, r9373354, r9373355, r9373356, r9373357, r9373358, r9373359, r9373360, r9373361, r9373362, r9373363, r9373364, r9373365, r9373366, r9373367, r9373368, r9373369, r9373370, r9373371, r9373372, r9373373, r9373374, r9373375, r9373376, r9373377, r9373378, r9373379, r9373380, r9373381, r9373382, r9373383, r9373384, r9373385, r9373386, r9373387, r9373388;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373349, "10.5", 10, MPFR_RNDN);
        mpfr_init(r9373350);
        mpfr_init_set_str(r9373351, "2", 10, MPFR_RNDN);
        mpfr_init(r9373352);
        mpfr_init(r9373353);
        mpfr_init_set_str(r9373354, "0.5401233950617297", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373355, "4", 10, MPFR_RNDN);
        mpfr_init(r9373356);
        mpfr_init(r9373357);
        mpfr_init(r9373358);
        mpfr_init_set_str(r9373359, "59.548604305555735", 10, MPFR_RNDN);
        mpfr_init(r9373360);
        mpfr_init(r9373361);
        mpfr_init(r9373362);
        mpfr_init_set_str(r9373363, "5.833332999999999", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373364, "3", 10, MPFR_RNDN);
        mpfr_init(r9373365);
        mpfr_init(r9373366);
        mpfr_init(r9373367);
        mpfr_init(r9373368);
        mpfr_init_set_str(r9373369, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9373370);
        mpfr_init_set_str(r9373371, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9373372);
        mpfr_init(r9373373);
        mpfr_init(r9373374);
        mpfr_init(r9373375);
        mpfr_init_set_str(r9373376, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373377, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9373378);
        mpfr_init(r9373379);
        mpfr_init(r9373380);
        mpfr_init(r9373381);
        mpfr_init_set_str(r9373382, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9373383);
        mpfr_init_set_str(r9373384, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9373385);
        mpfr_init(r9373386);
        mpfr_init(r9373387);
        mpfr_init(r9373388);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9373350, x, MPFR_RNDN);
        ;
        mpfr_pow(r9373352, r9373350, r9373351, MPFR_RNDN);
        mpfr_mul(r9373353, r9373349, r9373352, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9373356, r9373350, r9373355, MPFR_RNDN);
        mpfr_mul(r9373357, r9373354, r9373356, MPFR_RNDN);
        mpfr_add(r9373358, r9373353, r9373357, MPFR_RNDN);
        ;
        mpfr_pow(r9373360, r9373349, r9373351, MPFR_RNDN);
        mpfr_div(r9373361, r9373356, r9373360, MPFR_RNDN);
        mpfr_mul(r9373362, r9373359, r9373361, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9373365, r9373350, r9373364, MPFR_RNDN);
        mpfr_mul(r9373366, r9373363, r9373365, MPFR_RNDN);
        mpfr_add(r9373367, r9373362, r9373366, MPFR_RNDN);
        mpfr_sub(r9373368, r9373358, r9373367, MPFR_RNDN);
        ;
        mpfr_mul(r9373370, r9373350, r9373369, MPFR_RNDN);
        ;
        mpfr_add(r9373372, r9373370, r9373371, MPFR_RNDN);
        mpfr_add(r9373373, r9373368, r9373372, MPFR_RNDN);
        mpfr_mul(r9373374, r9373350, r9373350, MPFR_RNDN);
        mpfr_mul(r9373375, r9373374, r9373374, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9373378, r9373377, r9373350, MPFR_RNDN);
        mpfr_add(r9373379, r9373376, r9373378, MPFR_RNDN);
        mpfr_mul(r9373380, r9373375, r9373379, MPFR_RNDN);
        mpfr_mul(r9373381, r9373365, r9373365, MPFR_RNDN);
        ;
        mpfr_mul(r9373383, r9373382, r9373350, MPFR_RNDN);
        ;
        mpfr_add(r9373385, r9373383, r9373384, MPFR_RNDN);
        mpfr_mul(r9373386, r9373381, r9373385, MPFR_RNDN);
        mpfr_add(r9373387, r9373380, r9373386, MPFR_RNDN);
        mpfr_add(r9373388, r9373373, r9373387, MPFR_RNDN);
        return mpfr_get_d(r9373388, MPFR_RNDN);
}

