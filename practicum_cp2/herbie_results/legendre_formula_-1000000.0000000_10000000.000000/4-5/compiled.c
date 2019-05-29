#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6406191 = 1.875;
        float r6406192 = x;
        float r6406193 = r6406191 * r6406192;
        float r6406194 = -8.75;
        float r6406195 = r6406192 * r6406192;
        float r6406196 = r6406195 * r6406192;
        float r6406197 = r6406194 * r6406196;
        float r6406198 = r6406193 + r6406197;
        float r6406199 = 7.875;
        float r6406200 = r6406196 * r6406192;
        float r6406201 = r6406200 * r6406192;
        float r6406202 = r6406199 * r6406201;
        float r6406203 = r6406198 + r6406202;
        return r6406203;
}

double f_id(double x) {
        double r6406204 = 1.875;
        double r6406205 = x;
        double r6406206 = r6406204 * r6406205;
        double r6406207 = -8.75;
        double r6406208 = r6406205 * r6406205;
        double r6406209 = r6406208 * r6406205;
        double r6406210 = r6406207 * r6406209;
        double r6406211 = r6406206 + r6406210;
        double r6406212 = 7.875;
        double r6406213 = r6406209 * r6406205;
        double r6406214 = r6406213 * r6406205;
        double r6406215 = r6406212 * r6406214;
        double r6406216 = r6406211 + r6406215;
        return r6406216;
}


double f_of(float x) {
        float r6406217 = 1.875;
        float r6406218 = x;
        float r6406219 = r6406217 * r6406218;
        float r6406220 = -8.75;
        float r6406221 = r6406218 * r6406218;
        float r6406222 = r6406221 * r6406218;
        float r6406223 = r6406220 * r6406222;
        float r6406224 = r6406219 + r6406223;
        float r6406225 = 3;
        float r6406226 = pow(r6406218, r6406225);
        float r6406227 = 7.875;
        float r6406228 = r6406227 * r6406218;
        float r6406229 = r6406226 * r6406228;
        float r6406230 = r6406229 * r6406218;
        float r6406231 = r6406224 + r6406230;
        return r6406231;
}

double f_od(double x) {
        double r6406232 = 1.875;
        double r6406233 = x;
        double r6406234 = r6406232 * r6406233;
        double r6406235 = -8.75;
        double r6406236 = r6406233 * r6406233;
        double r6406237 = r6406236 * r6406233;
        double r6406238 = r6406235 * r6406237;
        double r6406239 = r6406234 + r6406238;
        double r6406240 = 3;
        double r6406241 = pow(r6406233, r6406240);
        double r6406242 = 7.875;
        double r6406243 = r6406242 * r6406233;
        double r6406244 = r6406241 * r6406243;
        double r6406245 = r6406244 * r6406233;
        double r6406246 = r6406239 + r6406245;
        return r6406246;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6406247, r6406248, r6406249, r6406250, r6406251, r6406252, r6406253, r6406254, r6406255, r6406256, r6406257, r6406258, r6406259;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6406247, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6406248);
        mpfr_init(r6406249);
        mpfr_init_set_str(r6406250, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6406251);
        mpfr_init(r6406252);
        mpfr_init(r6406253);
        mpfr_init(r6406254);
        mpfr_init_set_str(r6406255, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6406256);
        mpfr_init(r6406257);
        mpfr_init(r6406258);
        mpfr_init(r6406259);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6406248, x, MPFR_RNDN);
        mpfr_mul(r6406249, r6406247, r6406248, MPFR_RNDN);
        ;
        mpfr_mul(r6406251, r6406248, r6406248, MPFR_RNDN);
        mpfr_mul(r6406252, r6406251, r6406248, MPFR_RNDN);
        mpfr_mul(r6406253, r6406250, r6406252, MPFR_RNDN);
        mpfr_add(r6406254, r6406249, r6406253, MPFR_RNDN);
        ;
        mpfr_mul(r6406256, r6406252, r6406248, MPFR_RNDN);
        mpfr_mul(r6406257, r6406256, r6406248, MPFR_RNDN);
        mpfr_mul(r6406258, r6406255, r6406257, MPFR_RNDN);
        mpfr_add(r6406259, r6406254, r6406258, MPFR_RNDN);
        return mpfr_get_d(r6406259, MPFR_RNDN);
}

static mpfr_t r6406260, r6406261, r6406262, r6406263, r6406264, r6406265, r6406266, r6406267, r6406268, r6406269, r6406270, r6406271, r6406272, r6406273, r6406274;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6406260, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6406261);
        mpfr_init(r6406262);
        mpfr_init_set_str(r6406263, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6406264);
        mpfr_init(r6406265);
        mpfr_init(r6406266);
        mpfr_init(r6406267);
        mpfr_init_set_str(r6406268, "3", 10, MPFR_RNDN);
        mpfr_init(r6406269);
        mpfr_init_set_str(r6406270, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6406271);
        mpfr_init(r6406272);
        mpfr_init(r6406273);
        mpfr_init(r6406274);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6406261, x, MPFR_RNDN);
        mpfr_mul(r6406262, r6406260, r6406261, MPFR_RNDN);
        ;
        mpfr_mul(r6406264, r6406261, r6406261, MPFR_RNDN);
        mpfr_mul(r6406265, r6406264, r6406261, MPFR_RNDN);
        mpfr_mul(r6406266, r6406263, r6406265, MPFR_RNDN);
        mpfr_add(r6406267, r6406262, r6406266, MPFR_RNDN);
        ;
        mpfr_pow(r6406269, r6406261, r6406268, MPFR_RNDN);
        ;
        mpfr_mul(r6406271, r6406270, r6406261, MPFR_RNDN);
        mpfr_mul(r6406272, r6406269, r6406271, MPFR_RNDN);
        mpfr_mul(r6406273, r6406272, r6406261, MPFR_RNDN);
        mpfr_add(r6406274, r6406267, r6406273, MPFR_RNDN);
        return mpfr_get_d(r6406274, MPFR_RNDN);
}

static mpfr_t r6406275, r6406276, r6406277, r6406278, r6406279, r6406280, r6406281, r6406282, r6406283, r6406284, r6406285, r6406286, r6406287, r6406288, r6406289;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6406275, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6406276);
        mpfr_init(r6406277);
        mpfr_init_set_str(r6406278, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6406279);
        mpfr_init(r6406280);
        mpfr_init(r6406281);
        mpfr_init(r6406282);
        mpfr_init_set_str(r6406283, "3", 10, MPFR_RNDN);
        mpfr_init(r6406284);
        mpfr_init_set_str(r6406285, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6406286);
        mpfr_init(r6406287);
        mpfr_init(r6406288);
        mpfr_init(r6406289);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6406276, x, MPFR_RNDN);
        mpfr_mul(r6406277, r6406275, r6406276, MPFR_RNDN);
        ;
        mpfr_mul(r6406279, r6406276, r6406276, MPFR_RNDN);
        mpfr_mul(r6406280, r6406279, r6406276, MPFR_RNDN);
        mpfr_mul(r6406281, r6406278, r6406280, MPFR_RNDN);
        mpfr_add(r6406282, r6406277, r6406281, MPFR_RNDN);
        ;
        mpfr_pow(r6406284, r6406276, r6406283, MPFR_RNDN);
        ;
        mpfr_mul(r6406286, r6406285, r6406276, MPFR_RNDN);
        mpfr_mul(r6406287, r6406284, r6406286, MPFR_RNDN);
        mpfr_mul(r6406288, r6406287, r6406276, MPFR_RNDN);
        mpfr_add(r6406289, r6406282, r6406288, MPFR_RNDN);
        return mpfr_get_d(r6406289, MPFR_RNDN);
}

