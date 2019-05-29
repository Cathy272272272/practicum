#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7603146 = 1680.0;
        float r7603147 = -13440.0;
        float r7603148 = x;
        float r7603149 = r7603148 * r7603148;
        float r7603150 = r7603147 * r7603149;
        float r7603151 = r7603146 + r7603150;
        float r7603152 = 13440.0;
        float r7603153 = r7603149 * r7603148;
        float r7603154 = r7603153 * r7603148;
        float r7603155 = r7603152 * r7603154;
        float r7603156 = r7603151 + r7603155;
        float r7603157 = -3584.0;
        float r7603158 = r7603154 * r7603148;
        float r7603159 = r7603158 * r7603148;
        float r7603160 = r7603157 * r7603159;
        float r7603161 = r7603156 + r7603160;
        float r7603162 = 256.0;
        float r7603163 = r7603159 * r7603148;
        float r7603164 = r7603163 * r7603148;
        float r7603165 = r7603162 * r7603164;
        float r7603166 = r7603161 + r7603165;
        return r7603166;
}

double f_id(double x) {
        double r7603167 = 1680.0;
        double r7603168 = -13440.0;
        double r7603169 = x;
        double r7603170 = r7603169 * r7603169;
        double r7603171 = r7603168 * r7603170;
        double r7603172 = r7603167 + r7603171;
        double r7603173 = 13440.0;
        double r7603174 = r7603170 * r7603169;
        double r7603175 = r7603174 * r7603169;
        double r7603176 = r7603173 * r7603175;
        double r7603177 = r7603172 + r7603176;
        double r7603178 = -3584.0;
        double r7603179 = r7603175 * r7603169;
        double r7603180 = r7603179 * r7603169;
        double r7603181 = r7603178 * r7603180;
        double r7603182 = r7603177 + r7603181;
        double r7603183 = 256.0;
        double r7603184 = r7603180 * r7603169;
        double r7603185 = r7603184 * r7603169;
        double r7603186 = r7603183 * r7603185;
        double r7603187 = r7603182 + r7603186;
        return r7603187;
}


double f_of(float x) {
        float r7603188 = 1680.0;
        float r7603189 = -13440.0;
        float r7603190 = x;
        float r7603191 = r7603190 * r7603190;
        float r7603192 = r7603189 * r7603191;
        float r7603193 = r7603188 + r7603192;
        float r7603194 = 13440.0;
        float r7603195 = r7603191 * r7603190;
        float r7603196 = r7603195 * r7603190;
        float r7603197 = r7603194 * r7603196;
        float r7603198 = r7603193 + r7603197;
        float r7603199 = -3584.0;
        float r7603200 = r7603196 * r7603190;
        float r7603201 = r7603200 * r7603190;
        float r7603202 = r7603199 * r7603201;
        float r7603203 = r7603198 + r7603202;
        float r7603204 = 256.0;
        float r7603205 = r7603201 * r7603190;
        float r7603206 = r7603205 * r7603190;
        float r7603207 = r7603204 * r7603206;
        float r7603208 = r7603203 + r7603207;
        return r7603208;
}

double f_od(double x) {
        double r7603209 = 1680.0;
        double r7603210 = -13440.0;
        double r7603211 = x;
        double r7603212 = r7603211 * r7603211;
        double r7603213 = r7603210 * r7603212;
        double r7603214 = r7603209 + r7603213;
        double r7603215 = 13440.0;
        double r7603216 = r7603212 * r7603211;
        double r7603217 = r7603216 * r7603211;
        double r7603218 = r7603215 * r7603217;
        double r7603219 = r7603214 + r7603218;
        double r7603220 = -3584.0;
        double r7603221 = r7603217 * r7603211;
        double r7603222 = r7603221 * r7603211;
        double r7603223 = r7603220 * r7603222;
        double r7603224 = r7603219 + r7603223;
        double r7603225 = 256.0;
        double r7603226 = r7603222 * r7603211;
        double r7603227 = r7603226 * r7603211;
        double r7603228 = r7603225 * r7603227;
        double r7603229 = r7603224 + r7603228;
        return r7603229;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7603230, r7603231, r7603232, r7603233, r7603234, r7603235, r7603236, r7603237, r7603238, r7603239, r7603240, r7603241, r7603242, r7603243, r7603244, r7603245, r7603246, r7603247, r7603248, r7603249, r7603250;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603230, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603231, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7603232);
        mpfr_init(r7603233);
        mpfr_init(r7603234);
        mpfr_init(r7603235);
        mpfr_init_set_str(r7603236, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7603237);
        mpfr_init(r7603238);
        mpfr_init(r7603239);
        mpfr_init(r7603240);
        mpfr_init_set_str(r7603241, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7603242);
        mpfr_init(r7603243);
        mpfr_init(r7603244);
        mpfr_init(r7603245);
        mpfr_init_set_str(r7603246, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7603247);
        mpfr_init(r7603248);
        mpfr_init(r7603249);
        mpfr_init(r7603250);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7603232, x, MPFR_RNDN);
        mpfr_mul(r7603233, r7603232, r7603232, MPFR_RNDN);
        mpfr_mul(r7603234, r7603231, r7603233, MPFR_RNDN);
        mpfr_add(r7603235, r7603230, r7603234, MPFR_RNDN);
        ;
        mpfr_mul(r7603237, r7603233, r7603232, MPFR_RNDN);
        mpfr_mul(r7603238, r7603237, r7603232, MPFR_RNDN);
        mpfr_mul(r7603239, r7603236, r7603238, MPFR_RNDN);
        mpfr_add(r7603240, r7603235, r7603239, MPFR_RNDN);
        ;
        mpfr_mul(r7603242, r7603238, r7603232, MPFR_RNDN);
        mpfr_mul(r7603243, r7603242, r7603232, MPFR_RNDN);
        mpfr_mul(r7603244, r7603241, r7603243, MPFR_RNDN);
        mpfr_add(r7603245, r7603240, r7603244, MPFR_RNDN);
        ;
        mpfr_mul(r7603247, r7603243, r7603232, MPFR_RNDN);
        mpfr_mul(r7603248, r7603247, r7603232, MPFR_RNDN);
        mpfr_mul(r7603249, r7603246, r7603248, MPFR_RNDN);
        mpfr_add(r7603250, r7603245, r7603249, MPFR_RNDN);
        return mpfr_get_d(r7603250, MPFR_RNDN);
}

static mpfr_t r7603251, r7603252, r7603253, r7603254, r7603255, r7603256, r7603257, r7603258, r7603259, r7603260, r7603261, r7603262, r7603263, r7603264, r7603265, r7603266, r7603267, r7603268, r7603269, r7603270, r7603271;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603251, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603252, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7603253);
        mpfr_init(r7603254);
        mpfr_init(r7603255);
        mpfr_init(r7603256);
        mpfr_init_set_str(r7603257, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7603258);
        mpfr_init(r7603259);
        mpfr_init(r7603260);
        mpfr_init(r7603261);
        mpfr_init_set_str(r7603262, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7603263);
        mpfr_init(r7603264);
        mpfr_init(r7603265);
        mpfr_init(r7603266);
        mpfr_init_set_str(r7603267, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7603268);
        mpfr_init(r7603269);
        mpfr_init(r7603270);
        mpfr_init(r7603271);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7603253, x, MPFR_RNDN);
        mpfr_mul(r7603254, r7603253, r7603253, MPFR_RNDN);
        mpfr_mul(r7603255, r7603252, r7603254, MPFR_RNDN);
        mpfr_add(r7603256, r7603251, r7603255, MPFR_RNDN);
        ;
        mpfr_mul(r7603258, r7603254, r7603253, MPFR_RNDN);
        mpfr_mul(r7603259, r7603258, r7603253, MPFR_RNDN);
        mpfr_mul(r7603260, r7603257, r7603259, MPFR_RNDN);
        mpfr_add(r7603261, r7603256, r7603260, MPFR_RNDN);
        ;
        mpfr_mul(r7603263, r7603259, r7603253, MPFR_RNDN);
        mpfr_mul(r7603264, r7603263, r7603253, MPFR_RNDN);
        mpfr_mul(r7603265, r7603262, r7603264, MPFR_RNDN);
        mpfr_add(r7603266, r7603261, r7603265, MPFR_RNDN);
        ;
        mpfr_mul(r7603268, r7603264, r7603253, MPFR_RNDN);
        mpfr_mul(r7603269, r7603268, r7603253, MPFR_RNDN);
        mpfr_mul(r7603270, r7603267, r7603269, MPFR_RNDN);
        mpfr_add(r7603271, r7603266, r7603270, MPFR_RNDN);
        return mpfr_get_d(r7603271, MPFR_RNDN);
}

static mpfr_t r7603272, r7603273, r7603274, r7603275, r7603276, r7603277, r7603278, r7603279, r7603280, r7603281, r7603282, r7603283, r7603284, r7603285, r7603286, r7603287, r7603288, r7603289, r7603290, r7603291, r7603292;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603272, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603273, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7603274);
        mpfr_init(r7603275);
        mpfr_init(r7603276);
        mpfr_init(r7603277);
        mpfr_init_set_str(r7603278, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7603279);
        mpfr_init(r7603280);
        mpfr_init(r7603281);
        mpfr_init(r7603282);
        mpfr_init_set_str(r7603283, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7603284);
        mpfr_init(r7603285);
        mpfr_init(r7603286);
        mpfr_init(r7603287);
        mpfr_init_set_str(r7603288, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7603289);
        mpfr_init(r7603290);
        mpfr_init(r7603291);
        mpfr_init(r7603292);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7603274, x, MPFR_RNDN);
        mpfr_mul(r7603275, r7603274, r7603274, MPFR_RNDN);
        mpfr_mul(r7603276, r7603273, r7603275, MPFR_RNDN);
        mpfr_add(r7603277, r7603272, r7603276, MPFR_RNDN);
        ;
        mpfr_mul(r7603279, r7603275, r7603274, MPFR_RNDN);
        mpfr_mul(r7603280, r7603279, r7603274, MPFR_RNDN);
        mpfr_mul(r7603281, r7603278, r7603280, MPFR_RNDN);
        mpfr_add(r7603282, r7603277, r7603281, MPFR_RNDN);
        ;
        mpfr_mul(r7603284, r7603280, r7603274, MPFR_RNDN);
        mpfr_mul(r7603285, r7603284, r7603274, MPFR_RNDN);
        mpfr_mul(r7603286, r7603283, r7603285, MPFR_RNDN);
        mpfr_add(r7603287, r7603282, r7603286, MPFR_RNDN);
        ;
        mpfr_mul(r7603289, r7603285, r7603274, MPFR_RNDN);
        mpfr_mul(r7603290, r7603289, r7603274, MPFR_RNDN);
        mpfr_mul(r7603291, r7603288, r7603290, MPFR_RNDN);
        mpfr_add(r7603292, r7603287, r7603291, MPFR_RNDN);
        return mpfr_get_d(r7603292, MPFR_RNDN);
}

