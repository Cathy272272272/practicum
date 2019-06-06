#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r3817193 = 12.0;
        float r3817194 = -48.0;
        float r3817195 = x;
        float r3817196 = r3817195 * r3817195;
        float r3817197 = r3817194 * r3817196;
        float r3817198 = r3817193 + r3817197;
        float r3817199 = 16.0;
        float r3817200 = r3817196 * r3817195;
        float r3817201 = r3817200 * r3817195;
        float r3817202 = r3817199 * r3817201;
        float r3817203 = r3817198 + r3817202;
        return r3817203;
}

double f_id(double x) {
        double r3817204 = 12.0;
        double r3817205 = -48.0;
        double r3817206 = x;
        double r3817207 = r3817206 * r3817206;
        double r3817208 = r3817205 * r3817207;
        double r3817209 = r3817204 + r3817208;
        double r3817210 = 16.0;
        double r3817211 = r3817207 * r3817206;
        double r3817212 = r3817211 * r3817206;
        double r3817213 = r3817210 * r3817212;
        double r3817214 = r3817209 + r3817213;
        return r3817214;
}


double f_of(float x) {
        float r3817215 = 12.0;
        float r3817216 = x;
        float r3817217 = 16.0;
        float r3817218 = r3817216 * r3817217;
        float r3817219 = 3;
        float r3817220 = pow(r3817216, r3817219);
        float r3817221 = r3817218 * r3817220;
        float r3817222 = -48.0;
        float r3817223 = r3817216 * r3817222;
        float r3817224 = r3817223 * r3817216;
        float r3817225 = r3817221 + r3817224;
        float r3817226 = r3817215 + r3817225;
        return r3817226;
}

double f_od(double x) {
        double r3817227 = 12.0;
        double r3817228 = x;
        double r3817229 = 16.0;
        double r3817230 = r3817228 * r3817229;
        double r3817231 = 3;
        double r3817232 = pow(r3817228, r3817231);
        double r3817233 = r3817230 * r3817232;
        double r3817234 = -48.0;
        double r3817235 = r3817228 * r3817234;
        double r3817236 = r3817235 * r3817228;
        double r3817237 = r3817233 + r3817236;
        double r3817238 = r3817227 + r3817237;
        return r3817238;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3817239, r3817240, r3817241, r3817242, r3817243, r3817244, r3817245, r3817246, r3817247, r3817248, r3817249;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817239, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3817240, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r3817241);
        mpfr_init(r3817242);
        mpfr_init(r3817243);
        mpfr_init(r3817244);
        mpfr_init_set_str(r3817245, "16.0", 10, MPFR_RNDN);
        mpfr_init(r3817246);
        mpfr_init(r3817247);
        mpfr_init(r3817248);
        mpfr_init(r3817249);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3817241, x, MPFR_RNDN);
        mpfr_mul(r3817242, r3817241, r3817241, MPFR_RNDN);
        mpfr_mul(r3817243, r3817240, r3817242, MPFR_RNDN);
        mpfr_add(r3817244, r3817239, r3817243, MPFR_RNDN);
        ;
        mpfr_mul(r3817246, r3817242, r3817241, MPFR_RNDN);
        mpfr_mul(r3817247, r3817246, r3817241, MPFR_RNDN);
        mpfr_mul(r3817248, r3817245, r3817247, MPFR_RNDN);
        mpfr_add(r3817249, r3817244, r3817248, MPFR_RNDN);
        return mpfr_get_d(r3817249, MPFR_RNDN);
}

static mpfr_t r3817250, r3817251, r3817252, r3817253, r3817254, r3817255, r3817256, r3817257, r3817258, r3817259, r3817260, r3817261;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817250, "12.0", 10, MPFR_RNDN);
        mpfr_init(r3817251);
        mpfr_init_set_str(r3817252, "16.0", 10, MPFR_RNDN);
        mpfr_init(r3817253);
        mpfr_init_set_str(r3817254, "3", 10, MPFR_RNDN);
        mpfr_init(r3817255);
        mpfr_init(r3817256);
        mpfr_init_set_str(r3817257, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r3817258);
        mpfr_init(r3817259);
        mpfr_init(r3817260);
        mpfr_init(r3817261);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r3817251, x, MPFR_RNDN);
        ;
        mpfr_mul(r3817253, r3817251, r3817252, MPFR_RNDN);
        ;
        mpfr_pow(r3817255, r3817251, r3817254, MPFR_RNDN);
        mpfr_mul(r3817256, r3817253, r3817255, MPFR_RNDN);
        ;
        mpfr_mul(r3817258, r3817251, r3817257, MPFR_RNDN);
        mpfr_mul(r3817259, r3817258, r3817251, MPFR_RNDN);
        mpfr_add(r3817260, r3817256, r3817259, MPFR_RNDN);
        mpfr_add(r3817261, r3817250, r3817260, MPFR_RNDN);
        return mpfr_get_d(r3817261, MPFR_RNDN);
}

static mpfr_t r3817262, r3817263, r3817264, r3817265, r3817266, r3817267, r3817268, r3817269, r3817270, r3817271, r3817272, r3817273;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817262, "12.0", 10, MPFR_RNDN);
        mpfr_init(r3817263);
        mpfr_init_set_str(r3817264, "16.0", 10, MPFR_RNDN);
        mpfr_init(r3817265);
        mpfr_init_set_str(r3817266, "3", 10, MPFR_RNDN);
        mpfr_init(r3817267);
        mpfr_init(r3817268);
        mpfr_init_set_str(r3817269, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r3817270);
        mpfr_init(r3817271);
        mpfr_init(r3817272);
        mpfr_init(r3817273);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r3817263, x, MPFR_RNDN);
        ;
        mpfr_mul(r3817265, r3817263, r3817264, MPFR_RNDN);
        ;
        mpfr_pow(r3817267, r3817263, r3817266, MPFR_RNDN);
        mpfr_mul(r3817268, r3817265, r3817267, MPFR_RNDN);
        ;
        mpfr_mul(r3817270, r3817263, r3817269, MPFR_RNDN);
        mpfr_mul(r3817271, r3817270, r3817263, MPFR_RNDN);
        mpfr_add(r3817272, r3817268, r3817271, MPFR_RNDN);
        mpfr_add(r3817273, r3817262, r3817272, MPFR_RNDN);
        return mpfr_get_d(r3817273, MPFR_RNDN);
}

