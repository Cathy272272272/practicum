#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r60543181 = -120.0;
        float r60543182 = 720.0;
        float r60543183 = x;
        float r60543184 = r60543183 * r60543183;
        float r60543185 = r60543182 * r60543184;
        float r60543186 = r60543181 + r60543185;
        float r60543187 = -480.0;
        float r60543188 = r60543184 * r60543183;
        float r60543189 = r60543188 * r60543183;
        float r60543190 = r60543187 * r60543189;
        float r60543191 = r60543186 + r60543190;
        float r60543192 = 64.0;
        float r60543193 = r60543189 * r60543183;
        float r60543194 = r60543193 * r60543183;
        float r60543195 = r60543192 * r60543194;
        float r60543196 = r60543191 + r60543195;
        return r60543196;
}

double f_id(double x) {
        double r60543197 = -120.0;
        double r60543198 = 720.0;
        double r60543199 = x;
        double r60543200 = r60543199 * r60543199;
        double r60543201 = r60543198 * r60543200;
        double r60543202 = r60543197 + r60543201;
        double r60543203 = -480.0;
        double r60543204 = r60543200 * r60543199;
        double r60543205 = r60543204 * r60543199;
        double r60543206 = r60543203 * r60543205;
        double r60543207 = r60543202 + r60543206;
        double r60543208 = 64.0;
        double r60543209 = r60543205 * r60543199;
        double r60543210 = r60543209 * r60543199;
        double r60543211 = r60543208 * r60543210;
        double r60543212 = r60543207 + r60543211;
        return r60543212;
}


double f_of(float x) {
        float r60543213 = -120.0;
        float r60543214 = 720.0;
        float r60543215 = x;
        float r60543216 = r60543215 * r60543215;
        float r60543217 = r60543214 * r60543216;
        float r60543218 = r60543213 + r60543217;
        float r60543219 = -480.0;
        float r60543220 = fabs(r60543216);
        float r60543221 = r60543220 * r60543220;
        float r60543222 = r60543219 * r60543221;
        float r60543223 = r60543218 + r60543222;
        float r60543224 = 64.0;
        float r60543225 = cbrt(r60543221);
        float r60543226 = r60543225 * r60543225;
        float r60543227 = r60543226 * r60543225;
        float r60543228 = r60543227 * r60543215;
        float r60543229 = r60543228 * r60543215;
        float r60543230 = r60543224 * r60543229;
        float r60543231 = r60543223 + r60543230;
        return r60543231;
}

double f_od(double x) {
        double r60543232 = -120.0;
        double r60543233 = 720.0;
        double r60543234 = x;
        double r60543235 = r60543234 * r60543234;
        double r60543236 = r60543233 * r60543235;
        double r60543237 = r60543232 + r60543236;
        double r60543238 = -480.0;
        double r60543239 = fabs(r60543235);
        double r60543240 = r60543239 * r60543239;
        double r60543241 = r60543238 * r60543240;
        double r60543242 = r60543237 + r60543241;
        double r60543243 = 64.0;
        double r60543244 = cbrt(r60543240);
        double r60543245 = r60543244 * r60543244;
        double r60543246 = r60543245 * r60543244;
        double r60543247 = r60543246 * r60543234;
        double r60543248 = r60543247 * r60543234;
        double r60543249 = r60543243 * r60543248;
        double r60543250 = r60543242 + r60543249;
        return r60543250;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60543251, r60543252, r60543253, r60543254, r60543255, r60543256, r60543257, r60543258, r60543259, r60543260, r60543261, r60543262, r60543263, r60543264, r60543265, r60543266;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543251, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60543252, "720.0", 10, MPFR_RNDN);
        mpfr_init(r60543253);
        mpfr_init(r60543254);
        mpfr_init(r60543255);
        mpfr_init(r60543256);
        mpfr_init_set_str(r60543257, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r60543258);
        mpfr_init(r60543259);
        mpfr_init(r60543260);
        mpfr_init(r60543261);
        mpfr_init_set_str(r60543262, "64.0", 10, MPFR_RNDN);
        mpfr_init(r60543263);
        mpfr_init(r60543264);
        mpfr_init(r60543265);
        mpfr_init(r60543266);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60543253, x, MPFR_RNDN);
        mpfr_mul(r60543254, r60543253, r60543253, MPFR_RNDN);
        mpfr_mul(r60543255, r60543252, r60543254, MPFR_RNDN);
        mpfr_add(r60543256, r60543251, r60543255, MPFR_RNDN);
        ;
        mpfr_mul(r60543258, r60543254, r60543253, MPFR_RNDN);
        mpfr_mul(r60543259, r60543258, r60543253, MPFR_RNDN);
        mpfr_mul(r60543260, r60543257, r60543259, MPFR_RNDN);
        mpfr_add(r60543261, r60543256, r60543260, MPFR_RNDN);
        ;
        mpfr_mul(r60543263, r60543259, r60543253, MPFR_RNDN);
        mpfr_mul(r60543264, r60543263, r60543253, MPFR_RNDN);
        mpfr_mul(r60543265, r60543262, r60543264, MPFR_RNDN);
        mpfr_add(r60543266, r60543261, r60543265, MPFR_RNDN);
        return mpfr_get_d(r60543266, MPFR_RNDN);
}

static mpfr_t r60543267, r60543268, r60543269, r60543270, r60543271, r60543272, r60543273, r60543274, r60543275, r60543276, r60543277, r60543278, r60543279, r60543280, r60543281, r60543282, r60543283, r60543284, r60543285;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543267, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60543268, "720.0", 10, MPFR_RNDN);
        mpfr_init(r60543269);
        mpfr_init(r60543270);
        mpfr_init(r60543271);
        mpfr_init(r60543272);
        mpfr_init_set_str(r60543273, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r60543274);
        mpfr_init(r60543275);
        mpfr_init(r60543276);
        mpfr_init(r60543277);
        mpfr_init_set_str(r60543278, "64.0", 10, MPFR_RNDN);
        mpfr_init(r60543279);
        mpfr_init(r60543280);
        mpfr_init(r60543281);
        mpfr_init(r60543282);
        mpfr_init(r60543283);
        mpfr_init(r60543284);
        mpfr_init(r60543285);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r60543269, x, MPFR_RNDN);
        mpfr_mul(r60543270, r60543269, r60543269, MPFR_RNDN);
        mpfr_mul(r60543271, r60543268, r60543270, MPFR_RNDN);
        mpfr_add(r60543272, r60543267, r60543271, MPFR_RNDN);
        ;
        mpfr_abs(r60543274, r60543270, MPFR_RNDN);
        mpfr_mul(r60543275, r60543274, r60543274, MPFR_RNDN);
        mpfr_mul(r60543276, r60543273, r60543275, MPFR_RNDN);
        mpfr_add(r60543277, r60543272, r60543276, MPFR_RNDN);
        ;
        mpfr_cbrt(r60543279, r60543275, MPFR_RNDN);
        mpfr_mul(r60543280, r60543279, r60543279, MPFR_RNDN);
        mpfr_mul(r60543281, r60543280, r60543279, MPFR_RNDN);
        mpfr_mul(r60543282, r60543281, r60543269, MPFR_RNDN);
        mpfr_mul(r60543283, r60543282, r60543269, MPFR_RNDN);
        mpfr_mul(r60543284, r60543278, r60543283, MPFR_RNDN);
        mpfr_add(r60543285, r60543277, r60543284, MPFR_RNDN);
        return mpfr_get_d(r60543285, MPFR_RNDN);
}

static mpfr_t r60543286, r60543287, r60543288, r60543289, r60543290, r60543291, r60543292, r60543293, r60543294, r60543295, r60543296, r60543297, r60543298, r60543299, r60543300, r60543301, r60543302, r60543303, r60543304;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543286, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60543287, "720.0", 10, MPFR_RNDN);
        mpfr_init(r60543288);
        mpfr_init(r60543289);
        mpfr_init(r60543290);
        mpfr_init(r60543291);
        mpfr_init_set_str(r60543292, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r60543293);
        mpfr_init(r60543294);
        mpfr_init(r60543295);
        mpfr_init(r60543296);
        mpfr_init_set_str(r60543297, "64.0", 10, MPFR_RNDN);
        mpfr_init(r60543298);
        mpfr_init(r60543299);
        mpfr_init(r60543300);
        mpfr_init(r60543301);
        mpfr_init(r60543302);
        mpfr_init(r60543303);
        mpfr_init(r60543304);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r60543288, x, MPFR_RNDN);
        mpfr_mul(r60543289, r60543288, r60543288, MPFR_RNDN);
        mpfr_mul(r60543290, r60543287, r60543289, MPFR_RNDN);
        mpfr_add(r60543291, r60543286, r60543290, MPFR_RNDN);
        ;
        mpfr_abs(r60543293, r60543289, MPFR_RNDN);
        mpfr_mul(r60543294, r60543293, r60543293, MPFR_RNDN);
        mpfr_mul(r60543295, r60543292, r60543294, MPFR_RNDN);
        mpfr_add(r60543296, r60543291, r60543295, MPFR_RNDN);
        ;
        mpfr_cbrt(r60543298, r60543294, MPFR_RNDN);
        mpfr_mul(r60543299, r60543298, r60543298, MPFR_RNDN);
        mpfr_mul(r60543300, r60543299, r60543298, MPFR_RNDN);
        mpfr_mul(r60543301, r60543300, r60543288, MPFR_RNDN);
        mpfr_mul(r60543302, r60543301, r60543288, MPFR_RNDN);
        mpfr_mul(r60543303, r60543297, r60543302, MPFR_RNDN);
        mpfr_add(r60543304, r60543296, r60543303, MPFR_RNDN);
        return mpfr_get_d(r60543304, MPFR_RNDN);
}

