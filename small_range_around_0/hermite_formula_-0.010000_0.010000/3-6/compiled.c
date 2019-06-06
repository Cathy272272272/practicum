#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r4112169 = -120.0;
        float r4112170 = 720.0;
        float r4112171 = x;
        float r4112172 = r4112171 * r4112171;
        float r4112173 = r4112170 * r4112172;
        float r4112174 = r4112169 + r4112173;
        float r4112175 = -480.0;
        float r4112176 = r4112172 * r4112171;
        float r4112177 = r4112176 * r4112171;
        float r4112178 = r4112175 * r4112177;
        float r4112179 = r4112174 + r4112178;
        float r4112180 = 64.0;
        float r4112181 = r4112177 * r4112171;
        float r4112182 = r4112181 * r4112171;
        float r4112183 = r4112180 * r4112182;
        float r4112184 = r4112179 + r4112183;
        return r4112184;
}

double f_id(double x) {
        double r4112185 = -120.0;
        double r4112186 = 720.0;
        double r4112187 = x;
        double r4112188 = r4112187 * r4112187;
        double r4112189 = r4112186 * r4112188;
        double r4112190 = r4112185 + r4112189;
        double r4112191 = -480.0;
        double r4112192 = r4112188 * r4112187;
        double r4112193 = r4112192 * r4112187;
        double r4112194 = r4112191 * r4112193;
        double r4112195 = r4112190 + r4112194;
        double r4112196 = 64.0;
        double r4112197 = r4112193 * r4112187;
        double r4112198 = r4112197 * r4112187;
        double r4112199 = r4112196 * r4112198;
        double r4112200 = r4112195 + r4112199;
        return r4112200;
}


double f_of(float x) {
        float r4112201 = -120.0;
        float r4112202 = 720.0;
        float r4112203 = x;
        float r4112204 = r4112203 * r4112203;
        float r4112205 = r4112202 * r4112204;
        float r4112206 = r4112201 + r4112205;
        float r4112207 = -480.0;
        float r4112208 = r4112204 * r4112203;
        float r4112209 = r4112208 * r4112203;
        float r4112210 = r4112207 * r4112209;
        float r4112211 = r4112206 + r4112210;
        float r4112212 = 64.0;
        float r4112213 = r4112209 * r4112203;
        float r4112214 = r4112213 * r4112203;
        float r4112215 = r4112212 * r4112214;
        float r4112216 = r4112211 + r4112215;
        return r4112216;
}

double f_od(double x) {
        double r4112217 = -120.0;
        double r4112218 = 720.0;
        double r4112219 = x;
        double r4112220 = r4112219 * r4112219;
        double r4112221 = r4112218 * r4112220;
        double r4112222 = r4112217 + r4112221;
        double r4112223 = -480.0;
        double r4112224 = r4112220 * r4112219;
        double r4112225 = r4112224 * r4112219;
        double r4112226 = r4112223 * r4112225;
        double r4112227 = r4112222 + r4112226;
        double r4112228 = 64.0;
        double r4112229 = r4112225 * r4112219;
        double r4112230 = r4112229 * r4112219;
        double r4112231 = r4112228 * r4112230;
        double r4112232 = r4112227 + r4112231;
        return r4112232;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4112233, r4112234, r4112235, r4112236, r4112237, r4112238, r4112239, r4112240, r4112241, r4112242, r4112243, r4112244, r4112245, r4112246, r4112247, r4112248;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112233, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112234, "720.0", 10, MPFR_RNDN);
        mpfr_init(r4112235);
        mpfr_init(r4112236);
        mpfr_init(r4112237);
        mpfr_init(r4112238);
        mpfr_init_set_str(r4112239, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r4112240);
        mpfr_init(r4112241);
        mpfr_init(r4112242);
        mpfr_init(r4112243);
        mpfr_init_set_str(r4112244, "64.0", 10, MPFR_RNDN);
        mpfr_init(r4112245);
        mpfr_init(r4112246);
        mpfr_init(r4112247);
        mpfr_init(r4112248);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4112235, x, MPFR_RNDN);
        mpfr_mul(r4112236, r4112235, r4112235, MPFR_RNDN);
        mpfr_mul(r4112237, r4112234, r4112236, MPFR_RNDN);
        mpfr_add(r4112238, r4112233, r4112237, MPFR_RNDN);
        ;
        mpfr_mul(r4112240, r4112236, r4112235, MPFR_RNDN);
        mpfr_mul(r4112241, r4112240, r4112235, MPFR_RNDN);
        mpfr_mul(r4112242, r4112239, r4112241, MPFR_RNDN);
        mpfr_add(r4112243, r4112238, r4112242, MPFR_RNDN);
        ;
        mpfr_mul(r4112245, r4112241, r4112235, MPFR_RNDN);
        mpfr_mul(r4112246, r4112245, r4112235, MPFR_RNDN);
        mpfr_mul(r4112247, r4112244, r4112246, MPFR_RNDN);
        mpfr_add(r4112248, r4112243, r4112247, MPFR_RNDN);
        return mpfr_get_d(r4112248, MPFR_RNDN);
}

static mpfr_t r4112249, r4112250, r4112251, r4112252, r4112253, r4112254, r4112255, r4112256, r4112257, r4112258, r4112259, r4112260, r4112261, r4112262, r4112263, r4112264;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112249, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112250, "720.0", 10, MPFR_RNDN);
        mpfr_init(r4112251);
        mpfr_init(r4112252);
        mpfr_init(r4112253);
        mpfr_init(r4112254);
        mpfr_init_set_str(r4112255, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r4112256);
        mpfr_init(r4112257);
        mpfr_init(r4112258);
        mpfr_init(r4112259);
        mpfr_init_set_str(r4112260, "64.0", 10, MPFR_RNDN);
        mpfr_init(r4112261);
        mpfr_init(r4112262);
        mpfr_init(r4112263);
        mpfr_init(r4112264);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4112251, x, MPFR_RNDN);
        mpfr_mul(r4112252, r4112251, r4112251, MPFR_RNDN);
        mpfr_mul(r4112253, r4112250, r4112252, MPFR_RNDN);
        mpfr_add(r4112254, r4112249, r4112253, MPFR_RNDN);
        ;
        mpfr_mul(r4112256, r4112252, r4112251, MPFR_RNDN);
        mpfr_mul(r4112257, r4112256, r4112251, MPFR_RNDN);
        mpfr_mul(r4112258, r4112255, r4112257, MPFR_RNDN);
        mpfr_add(r4112259, r4112254, r4112258, MPFR_RNDN);
        ;
        mpfr_mul(r4112261, r4112257, r4112251, MPFR_RNDN);
        mpfr_mul(r4112262, r4112261, r4112251, MPFR_RNDN);
        mpfr_mul(r4112263, r4112260, r4112262, MPFR_RNDN);
        mpfr_add(r4112264, r4112259, r4112263, MPFR_RNDN);
        return mpfr_get_d(r4112264, MPFR_RNDN);
}

static mpfr_t r4112265, r4112266, r4112267, r4112268, r4112269, r4112270, r4112271, r4112272, r4112273, r4112274, r4112275, r4112276, r4112277, r4112278, r4112279, r4112280;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112265, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112266, "720.0", 10, MPFR_RNDN);
        mpfr_init(r4112267);
        mpfr_init(r4112268);
        mpfr_init(r4112269);
        mpfr_init(r4112270);
        mpfr_init_set_str(r4112271, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r4112272);
        mpfr_init(r4112273);
        mpfr_init(r4112274);
        mpfr_init(r4112275);
        mpfr_init_set_str(r4112276, "64.0", 10, MPFR_RNDN);
        mpfr_init(r4112277);
        mpfr_init(r4112278);
        mpfr_init(r4112279);
        mpfr_init(r4112280);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4112267, x, MPFR_RNDN);
        mpfr_mul(r4112268, r4112267, r4112267, MPFR_RNDN);
        mpfr_mul(r4112269, r4112266, r4112268, MPFR_RNDN);
        mpfr_add(r4112270, r4112265, r4112269, MPFR_RNDN);
        ;
        mpfr_mul(r4112272, r4112268, r4112267, MPFR_RNDN);
        mpfr_mul(r4112273, r4112272, r4112267, MPFR_RNDN);
        mpfr_mul(r4112274, r4112271, r4112273, MPFR_RNDN);
        mpfr_add(r4112275, r4112270, r4112274, MPFR_RNDN);
        ;
        mpfr_mul(r4112277, r4112273, r4112267, MPFR_RNDN);
        mpfr_mul(r4112278, r4112277, r4112267, MPFR_RNDN);
        mpfr_mul(r4112279, r4112276, r4112278, MPFR_RNDN);
        mpfr_add(r4112280, r4112275, r4112279, MPFR_RNDN);
        return mpfr_get_d(r4112280, MPFR_RNDN);
}

