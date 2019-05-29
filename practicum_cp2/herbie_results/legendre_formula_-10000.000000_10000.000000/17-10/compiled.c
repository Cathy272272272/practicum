#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6863190 = -0.246094;
        float r6863191 = 13.535156;
        float r6863192 = x;
        float r6863193 = r6863192 * r6863192;
        float r6863194 = r6863191 * r6863193;
        float r6863195 = r6863190 + r6863194;
        float r6863196 = -117.304688;
        float r6863197 = r6863193 * r6863192;
        float r6863198 = r6863197 * r6863192;
        float r6863199 = r6863196 * r6863198;
        float r6863200 = r6863195 + r6863199;
        float r6863201 = 351.914062;
        float r6863202 = r6863198 * r6863192;
        float r6863203 = r6863202 * r6863192;
        float r6863204 = r6863201 * r6863203;
        float r6863205 = r6863200 + r6863204;
        float r6863206 = -427.324219;
        float r6863207 = r6863203 * r6863192;
        float r6863208 = r6863207 * r6863192;
        float r6863209 = r6863206 * r6863208;
        float r6863210 = r6863205 + r6863209;
        float r6863211 = 180.425781;
        float r6863212 = r6863208 * r6863192;
        float r6863213 = r6863212 * r6863192;
        float r6863214 = r6863211 * r6863213;
        float r6863215 = r6863210 + r6863214;
        return r6863215;
}

double f_id(double x) {
        double r6863216 = -0.246094;
        double r6863217 = 13.535156;
        double r6863218 = x;
        double r6863219 = r6863218 * r6863218;
        double r6863220 = r6863217 * r6863219;
        double r6863221 = r6863216 + r6863220;
        double r6863222 = -117.304688;
        double r6863223 = r6863219 * r6863218;
        double r6863224 = r6863223 * r6863218;
        double r6863225 = r6863222 * r6863224;
        double r6863226 = r6863221 + r6863225;
        double r6863227 = 351.914062;
        double r6863228 = r6863224 * r6863218;
        double r6863229 = r6863228 * r6863218;
        double r6863230 = r6863227 * r6863229;
        double r6863231 = r6863226 + r6863230;
        double r6863232 = -427.324219;
        double r6863233 = r6863229 * r6863218;
        double r6863234 = r6863233 * r6863218;
        double r6863235 = r6863232 * r6863234;
        double r6863236 = r6863231 + r6863235;
        double r6863237 = 180.425781;
        double r6863238 = r6863234 * r6863218;
        double r6863239 = r6863238 * r6863218;
        double r6863240 = r6863237 * r6863239;
        double r6863241 = r6863236 + r6863240;
        return r6863241;
}


double f_of(float x) {
        float r6863242 = -0.246094;
        float r6863243 = 13.535156;
        float r6863244 = x;
        float r6863245 = r6863244 * r6863244;
        float r6863246 = r6863243 * r6863245;
        float r6863247 = sqrt(r6863246);
        float r6863248 = r6863247 * r6863247;
        float r6863249 = r6863242 + r6863248;
        float r6863250 = -117.304688;
        float r6863251 = r6863245 * r6863244;
        float r6863252 = r6863251 * r6863244;
        float r6863253 = r6863250 * r6863252;
        float r6863254 = r6863249 + r6863253;
        float r6863255 = 351.914062;
        float r6863256 = r6863252 * r6863244;
        float r6863257 = r6863256 * r6863244;
        float r6863258 = r6863255 * r6863257;
        float r6863259 = r6863254 + r6863258;
        float r6863260 = -427.324219;
        float r6863261 = r6863257 * r6863244;
        float r6863262 = r6863261 * r6863244;
        float r6863263 = r6863260 * r6863262;
        float r6863264 = r6863259 + r6863263;
        float r6863265 = 180.425781;
        float r6863266 = r6863262 * r6863244;
        float r6863267 = r6863266 * r6863244;
        float r6863268 = r6863265 * r6863267;
        float r6863269 = r6863264 + r6863268;
        return r6863269;
}

double f_od(double x) {
        double r6863270 = -0.246094;
        double r6863271 = 13.535156;
        double r6863272 = x;
        double r6863273 = r6863272 * r6863272;
        double r6863274 = r6863271 * r6863273;
        double r6863275 = sqrt(r6863274);
        double r6863276 = r6863275 * r6863275;
        double r6863277 = r6863270 + r6863276;
        double r6863278 = -117.304688;
        double r6863279 = r6863273 * r6863272;
        double r6863280 = r6863279 * r6863272;
        double r6863281 = r6863278 * r6863280;
        double r6863282 = r6863277 + r6863281;
        double r6863283 = 351.914062;
        double r6863284 = r6863280 * r6863272;
        double r6863285 = r6863284 * r6863272;
        double r6863286 = r6863283 * r6863285;
        double r6863287 = r6863282 + r6863286;
        double r6863288 = -427.324219;
        double r6863289 = r6863285 * r6863272;
        double r6863290 = r6863289 * r6863272;
        double r6863291 = r6863288 * r6863290;
        double r6863292 = r6863287 + r6863291;
        double r6863293 = 180.425781;
        double r6863294 = r6863290 * r6863272;
        double r6863295 = r6863294 * r6863272;
        double r6863296 = r6863293 * r6863295;
        double r6863297 = r6863292 + r6863296;
        return r6863297;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6863298, r6863299, r6863300, r6863301, r6863302, r6863303, r6863304, r6863305, r6863306, r6863307, r6863308, r6863309, r6863310, r6863311, r6863312, r6863313, r6863314, r6863315, r6863316, r6863317, r6863318, r6863319, r6863320, r6863321, r6863322, r6863323;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863298, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6863299, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6863300);
        mpfr_init(r6863301);
        mpfr_init(r6863302);
        mpfr_init(r6863303);
        mpfr_init_set_str(r6863304, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6863305);
        mpfr_init(r6863306);
        mpfr_init(r6863307);
        mpfr_init(r6863308);
        mpfr_init_set_str(r6863309, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6863310);
        mpfr_init(r6863311);
        mpfr_init(r6863312);
        mpfr_init(r6863313);
        mpfr_init_set_str(r6863314, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6863315);
        mpfr_init(r6863316);
        mpfr_init(r6863317);
        mpfr_init(r6863318);
        mpfr_init_set_str(r6863319, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6863320);
        mpfr_init(r6863321);
        mpfr_init(r6863322);
        mpfr_init(r6863323);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6863300, x, MPFR_RNDN);
        mpfr_mul(r6863301, r6863300, r6863300, MPFR_RNDN);
        mpfr_mul(r6863302, r6863299, r6863301, MPFR_RNDN);
        mpfr_add(r6863303, r6863298, r6863302, MPFR_RNDN);
        ;
        mpfr_mul(r6863305, r6863301, r6863300, MPFR_RNDN);
        mpfr_mul(r6863306, r6863305, r6863300, MPFR_RNDN);
        mpfr_mul(r6863307, r6863304, r6863306, MPFR_RNDN);
        mpfr_add(r6863308, r6863303, r6863307, MPFR_RNDN);
        ;
        mpfr_mul(r6863310, r6863306, r6863300, MPFR_RNDN);
        mpfr_mul(r6863311, r6863310, r6863300, MPFR_RNDN);
        mpfr_mul(r6863312, r6863309, r6863311, MPFR_RNDN);
        mpfr_add(r6863313, r6863308, r6863312, MPFR_RNDN);
        ;
        mpfr_mul(r6863315, r6863311, r6863300, MPFR_RNDN);
        mpfr_mul(r6863316, r6863315, r6863300, MPFR_RNDN);
        mpfr_mul(r6863317, r6863314, r6863316, MPFR_RNDN);
        mpfr_add(r6863318, r6863313, r6863317, MPFR_RNDN);
        ;
        mpfr_mul(r6863320, r6863316, r6863300, MPFR_RNDN);
        mpfr_mul(r6863321, r6863320, r6863300, MPFR_RNDN);
        mpfr_mul(r6863322, r6863319, r6863321, MPFR_RNDN);
        mpfr_add(r6863323, r6863318, r6863322, MPFR_RNDN);
        return mpfr_get_d(r6863323, MPFR_RNDN);
}

static mpfr_t r6863324, r6863325, r6863326, r6863327, r6863328, r6863329, r6863330, r6863331, r6863332, r6863333, r6863334, r6863335, r6863336, r6863337, r6863338, r6863339, r6863340, r6863341, r6863342, r6863343, r6863344, r6863345, r6863346, r6863347, r6863348, r6863349, r6863350, r6863351;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863324, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6863325, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6863326);
        mpfr_init(r6863327);
        mpfr_init(r6863328);
        mpfr_init(r6863329);
        mpfr_init(r6863330);
        mpfr_init(r6863331);
        mpfr_init_set_str(r6863332, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6863333);
        mpfr_init(r6863334);
        mpfr_init(r6863335);
        mpfr_init(r6863336);
        mpfr_init_set_str(r6863337, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6863338);
        mpfr_init(r6863339);
        mpfr_init(r6863340);
        mpfr_init(r6863341);
        mpfr_init_set_str(r6863342, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6863343);
        mpfr_init(r6863344);
        mpfr_init(r6863345);
        mpfr_init(r6863346);
        mpfr_init_set_str(r6863347, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6863348);
        mpfr_init(r6863349);
        mpfr_init(r6863350);
        mpfr_init(r6863351);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6863326, x, MPFR_RNDN);
        mpfr_mul(r6863327, r6863326, r6863326, MPFR_RNDN);
        mpfr_mul(r6863328, r6863325, r6863327, MPFR_RNDN);
        mpfr_sqrt(r6863329, r6863328, MPFR_RNDN);
        mpfr_mul(r6863330, r6863329, r6863329, MPFR_RNDN);
        mpfr_add(r6863331, r6863324, r6863330, MPFR_RNDN);
        ;
        mpfr_mul(r6863333, r6863327, r6863326, MPFR_RNDN);
        mpfr_mul(r6863334, r6863333, r6863326, MPFR_RNDN);
        mpfr_mul(r6863335, r6863332, r6863334, MPFR_RNDN);
        mpfr_add(r6863336, r6863331, r6863335, MPFR_RNDN);
        ;
        mpfr_mul(r6863338, r6863334, r6863326, MPFR_RNDN);
        mpfr_mul(r6863339, r6863338, r6863326, MPFR_RNDN);
        mpfr_mul(r6863340, r6863337, r6863339, MPFR_RNDN);
        mpfr_add(r6863341, r6863336, r6863340, MPFR_RNDN);
        ;
        mpfr_mul(r6863343, r6863339, r6863326, MPFR_RNDN);
        mpfr_mul(r6863344, r6863343, r6863326, MPFR_RNDN);
        mpfr_mul(r6863345, r6863342, r6863344, MPFR_RNDN);
        mpfr_add(r6863346, r6863341, r6863345, MPFR_RNDN);
        ;
        mpfr_mul(r6863348, r6863344, r6863326, MPFR_RNDN);
        mpfr_mul(r6863349, r6863348, r6863326, MPFR_RNDN);
        mpfr_mul(r6863350, r6863347, r6863349, MPFR_RNDN);
        mpfr_add(r6863351, r6863346, r6863350, MPFR_RNDN);
        return mpfr_get_d(r6863351, MPFR_RNDN);
}

static mpfr_t r6863352, r6863353, r6863354, r6863355, r6863356, r6863357, r6863358, r6863359, r6863360, r6863361, r6863362, r6863363, r6863364, r6863365, r6863366, r6863367, r6863368, r6863369, r6863370, r6863371, r6863372, r6863373, r6863374, r6863375, r6863376, r6863377, r6863378, r6863379;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863352, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6863353, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6863354);
        mpfr_init(r6863355);
        mpfr_init(r6863356);
        mpfr_init(r6863357);
        mpfr_init(r6863358);
        mpfr_init(r6863359);
        mpfr_init_set_str(r6863360, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6863361);
        mpfr_init(r6863362);
        mpfr_init(r6863363);
        mpfr_init(r6863364);
        mpfr_init_set_str(r6863365, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6863366);
        mpfr_init(r6863367);
        mpfr_init(r6863368);
        mpfr_init(r6863369);
        mpfr_init_set_str(r6863370, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6863371);
        mpfr_init(r6863372);
        mpfr_init(r6863373);
        mpfr_init(r6863374);
        mpfr_init_set_str(r6863375, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6863376);
        mpfr_init(r6863377);
        mpfr_init(r6863378);
        mpfr_init(r6863379);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6863354, x, MPFR_RNDN);
        mpfr_mul(r6863355, r6863354, r6863354, MPFR_RNDN);
        mpfr_mul(r6863356, r6863353, r6863355, MPFR_RNDN);
        mpfr_sqrt(r6863357, r6863356, MPFR_RNDN);
        mpfr_mul(r6863358, r6863357, r6863357, MPFR_RNDN);
        mpfr_add(r6863359, r6863352, r6863358, MPFR_RNDN);
        ;
        mpfr_mul(r6863361, r6863355, r6863354, MPFR_RNDN);
        mpfr_mul(r6863362, r6863361, r6863354, MPFR_RNDN);
        mpfr_mul(r6863363, r6863360, r6863362, MPFR_RNDN);
        mpfr_add(r6863364, r6863359, r6863363, MPFR_RNDN);
        ;
        mpfr_mul(r6863366, r6863362, r6863354, MPFR_RNDN);
        mpfr_mul(r6863367, r6863366, r6863354, MPFR_RNDN);
        mpfr_mul(r6863368, r6863365, r6863367, MPFR_RNDN);
        mpfr_add(r6863369, r6863364, r6863368, MPFR_RNDN);
        ;
        mpfr_mul(r6863371, r6863367, r6863354, MPFR_RNDN);
        mpfr_mul(r6863372, r6863371, r6863354, MPFR_RNDN);
        mpfr_mul(r6863373, r6863370, r6863372, MPFR_RNDN);
        mpfr_add(r6863374, r6863369, r6863373, MPFR_RNDN);
        ;
        mpfr_mul(r6863376, r6863372, r6863354, MPFR_RNDN);
        mpfr_mul(r6863377, r6863376, r6863354, MPFR_RNDN);
        mpfr_mul(r6863378, r6863375, r6863377, MPFR_RNDN);
        mpfr_add(r6863379, r6863374, r6863378, MPFR_RNDN);
        return mpfr_get_d(r6863379, MPFR_RNDN);
}

