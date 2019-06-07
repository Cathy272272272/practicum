#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r4678179 = 1.0;
        float r4678180 = -3.0;
        float r4678181 = x;
        float r4678182 = r4678180 * r4678181;
        float r4678183 = r4678179 + r4678182;
        float r4678184 = 1.5;
        float r4678185 = r4678181 * r4678181;
        float r4678186 = r4678184 * r4678185;
        float r4678187 = r4678183 + r4678186;
        float r4678188 = -0.166667;
        float r4678189 = r4678185 * r4678181;
        float r4678190 = r4678188 * r4678189;
        float r4678191 = r4678187 + r4678190;
        return r4678191;
}

double f_id(double x) {
        double r4678192 = 1.0;
        double r4678193 = -3.0;
        double r4678194 = x;
        double r4678195 = r4678193 * r4678194;
        double r4678196 = r4678192 + r4678195;
        double r4678197 = 1.5;
        double r4678198 = r4678194 * r4678194;
        double r4678199 = r4678197 * r4678198;
        double r4678200 = r4678196 + r4678199;
        double r4678201 = -0.166667;
        double r4678202 = r4678198 * r4678194;
        double r4678203 = r4678201 * r4678202;
        double r4678204 = r4678200 + r4678203;
        return r4678204;
}


double f_of(float x) {
        float r4678205 = 1.0;
        float r4678206 = -3.0;
        float r4678207 = 1.5;
        float r4678208 = x;
        float r4678209 = r4678207 * r4678208;
        float r4678210 = r4678206 + r4678209;
        float r4678211 = r4678210 * r4678208;
        float r4678212 = r4678205 + r4678211;
        float r4678213 = -0.166667;
        float r4678214 = r4678208 * r4678208;
        float r4678215 = r4678214 * r4678208;
        float r4678216 = r4678213 * r4678215;
        float r4678217 = r4678212 + r4678216;
        return r4678217;
}

double f_od(double x) {
        double r4678218 = 1.0;
        double r4678219 = -3.0;
        double r4678220 = 1.5;
        double r4678221 = x;
        double r4678222 = r4678220 * r4678221;
        double r4678223 = r4678219 + r4678222;
        double r4678224 = r4678223 * r4678221;
        double r4678225 = r4678218 + r4678224;
        double r4678226 = -0.166667;
        double r4678227 = r4678221 * r4678221;
        double r4678228 = r4678227 * r4678221;
        double r4678229 = r4678226 * r4678228;
        double r4678230 = r4678225 + r4678229;
        return r4678230;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4678231, r4678232, r4678233, r4678234, r4678235, r4678236, r4678237, r4678238, r4678239, r4678240, r4678241, r4678242, r4678243;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4678231, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678232, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r4678233);
        mpfr_init(r4678234);
        mpfr_init(r4678235);
        mpfr_init_set_str(r4678236, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4678237);
        mpfr_init(r4678238);
        mpfr_init(r4678239);
        mpfr_init_set_str(r4678240, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r4678241);
        mpfr_init(r4678242);
        mpfr_init(r4678243);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4678233, x, MPFR_RNDN);
        mpfr_mul(r4678234, r4678232, r4678233, MPFR_RNDN);
        mpfr_add(r4678235, r4678231, r4678234, MPFR_RNDN);
        ;
        mpfr_mul(r4678237, r4678233, r4678233, MPFR_RNDN);
        mpfr_mul(r4678238, r4678236, r4678237, MPFR_RNDN);
        mpfr_add(r4678239, r4678235, r4678238, MPFR_RNDN);
        ;
        mpfr_mul(r4678241, r4678237, r4678233, MPFR_RNDN);
        mpfr_mul(r4678242, r4678240, r4678241, MPFR_RNDN);
        mpfr_add(r4678243, r4678239, r4678242, MPFR_RNDN);
        return mpfr_get_d(r4678243, MPFR_RNDN);
}

static mpfr_t r4678244, r4678245, r4678246, r4678247, r4678248, r4678249, r4678250, r4678251, r4678252, r4678253, r4678254, r4678255, r4678256;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4678244, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678245, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678246, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4678247);
        mpfr_init(r4678248);
        mpfr_init(r4678249);
        mpfr_init(r4678250);
        mpfr_init(r4678251);
        mpfr_init_set_str(r4678252, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r4678253);
        mpfr_init(r4678254);
        mpfr_init(r4678255);
        mpfr_init(r4678256);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r4678247, x, MPFR_RNDN);
        mpfr_mul(r4678248, r4678246, r4678247, MPFR_RNDN);
        mpfr_add(r4678249, r4678245, r4678248, MPFR_RNDN);
        mpfr_mul(r4678250, r4678249, r4678247, MPFR_RNDN);
        mpfr_add(r4678251, r4678244, r4678250, MPFR_RNDN);
        ;
        mpfr_mul(r4678253, r4678247, r4678247, MPFR_RNDN);
        mpfr_mul(r4678254, r4678253, r4678247, MPFR_RNDN);
        mpfr_mul(r4678255, r4678252, r4678254, MPFR_RNDN);
        mpfr_add(r4678256, r4678251, r4678255, MPFR_RNDN);
        return mpfr_get_d(r4678256, MPFR_RNDN);
}

static mpfr_t r4678257, r4678258, r4678259, r4678260, r4678261, r4678262, r4678263, r4678264, r4678265, r4678266, r4678267, r4678268, r4678269;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4678257, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678258, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678259, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4678260);
        mpfr_init(r4678261);
        mpfr_init(r4678262);
        mpfr_init(r4678263);
        mpfr_init(r4678264);
        mpfr_init_set_str(r4678265, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r4678266);
        mpfr_init(r4678267);
        mpfr_init(r4678268);
        mpfr_init(r4678269);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r4678260, x, MPFR_RNDN);
        mpfr_mul(r4678261, r4678259, r4678260, MPFR_RNDN);
        mpfr_add(r4678262, r4678258, r4678261, MPFR_RNDN);
        mpfr_mul(r4678263, r4678262, r4678260, MPFR_RNDN);
        mpfr_add(r4678264, r4678257, r4678263, MPFR_RNDN);
        ;
        mpfr_mul(r4678266, r4678260, r4678260, MPFR_RNDN);
        mpfr_mul(r4678267, r4678266, r4678260, MPFR_RNDN);
        mpfr_mul(r4678268, r4678265, r4678267, MPFR_RNDN);
        mpfr_add(r4678269, r4678264, r4678268, MPFR_RNDN);
        return mpfr_get_d(r4678269, MPFR_RNDN);
}

