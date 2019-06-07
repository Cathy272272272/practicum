#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r20867146 = 1.0;
        float r20867147 = -4.0;
        float r20867148 = x;
        float r20867149 = r20867147 * r20867148;
        float r20867150 = r20867146 + r20867149;
        float r20867151 = 3.0;
        float r20867152 = r20867148 * r20867148;
        float r20867153 = r20867151 * r20867152;
        float r20867154 = r20867150 + r20867153;
        float r20867155 = -0.666667;
        float r20867156 = r20867152 * r20867148;
        float r20867157 = r20867155 * r20867156;
        float r20867158 = r20867154 + r20867157;
        float r20867159 = 0.041667;
        float r20867160 = r20867156 * r20867148;
        float r20867161 = r20867159 * r20867160;
        float r20867162 = r20867158 + r20867161;
        return r20867162;
}

double f_id(double x) {
        double r20867163 = 1.0;
        double r20867164 = -4.0;
        double r20867165 = x;
        double r20867166 = r20867164 * r20867165;
        double r20867167 = r20867163 + r20867166;
        double r20867168 = 3.0;
        double r20867169 = r20867165 * r20867165;
        double r20867170 = r20867168 * r20867169;
        double r20867171 = r20867167 + r20867170;
        double r20867172 = -0.666667;
        double r20867173 = r20867169 * r20867165;
        double r20867174 = r20867172 * r20867173;
        double r20867175 = r20867171 + r20867174;
        double r20867176 = 0.041667;
        double r20867177 = r20867173 * r20867165;
        double r20867178 = r20867176 * r20867177;
        double r20867179 = r20867175 + r20867178;
        return r20867179;
}


double f_of(float x) {
        float r20867180 = x;
        float r20867181 = r20867180 * r20867180;
        float r20867182 = 0.041667;
        float r20867183 = r20867182 * r20867180;
        float r20867184 = r20867181 * r20867183;
        float r20867185 = -4.0;
        float r20867186 = 3.0;
        float r20867187 = r20867180 * r20867186;
        float r20867188 = r20867185 + r20867187;
        float r20867189 = r20867184 + r20867188;
        float r20867190 = r20867189 * r20867180;
        float r20867191 = -0.666667;
        float r20867192 = 1;
        float r20867193 = r20867192 / r20867180;
        float r20867194 = -3;
        float r20867195 = pow(r20867193, r20867194);
        float r20867196 = r20867191 * r20867195;
        float r20867197 = 1.0;
        float r20867198 = r20867196 + r20867197;
        float r20867199 = r20867190 + r20867198;
        return r20867199;
}

double f_od(double x) {
        double r20867200 = x;
        double r20867201 = r20867200 * r20867200;
        double r20867202 = 0.041667;
        double r20867203 = r20867202 * r20867200;
        double r20867204 = r20867201 * r20867203;
        double r20867205 = -4.0;
        double r20867206 = 3.0;
        double r20867207 = r20867200 * r20867206;
        double r20867208 = r20867205 + r20867207;
        double r20867209 = r20867204 + r20867208;
        double r20867210 = r20867209 * r20867200;
        double r20867211 = -0.666667;
        double r20867212 = 1;
        double r20867213 = r20867212 / r20867200;
        double r20867214 = -3;
        double r20867215 = pow(r20867213, r20867214);
        double r20867216 = r20867211 * r20867215;
        double r20867217 = 1.0;
        double r20867218 = r20867216 + r20867217;
        double r20867219 = r20867210 + r20867218;
        return r20867219;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20867220, r20867221, r20867222, r20867223, r20867224, r20867225, r20867226, r20867227, r20867228, r20867229, r20867230, r20867231, r20867232, r20867233, r20867234, r20867235, r20867236;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20867220, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20867221, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r20867222);
        mpfr_init(r20867223);
        mpfr_init(r20867224);
        mpfr_init_set_str(r20867225, "3.0", 10, MPFR_RNDN);
        mpfr_init(r20867226);
        mpfr_init(r20867227);
        mpfr_init(r20867228);
        mpfr_init_set_str(r20867229, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r20867230);
        mpfr_init(r20867231);
        mpfr_init(r20867232);
        mpfr_init_set_str(r20867233, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r20867234);
        mpfr_init(r20867235);
        mpfr_init(r20867236);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20867222, x, MPFR_RNDN);
        mpfr_mul(r20867223, r20867221, r20867222, MPFR_RNDN);
        mpfr_add(r20867224, r20867220, r20867223, MPFR_RNDN);
        ;
        mpfr_mul(r20867226, r20867222, r20867222, MPFR_RNDN);
        mpfr_mul(r20867227, r20867225, r20867226, MPFR_RNDN);
        mpfr_add(r20867228, r20867224, r20867227, MPFR_RNDN);
        ;
        mpfr_mul(r20867230, r20867226, r20867222, MPFR_RNDN);
        mpfr_mul(r20867231, r20867229, r20867230, MPFR_RNDN);
        mpfr_add(r20867232, r20867228, r20867231, MPFR_RNDN);
        ;
        mpfr_mul(r20867234, r20867230, r20867222, MPFR_RNDN);
        mpfr_mul(r20867235, r20867233, r20867234, MPFR_RNDN);
        mpfr_add(r20867236, r20867232, r20867235, MPFR_RNDN);
        return mpfr_get_d(r20867236, MPFR_RNDN);
}

static mpfr_t r20867237, r20867238, r20867239, r20867240, r20867241, r20867242, r20867243, r20867244, r20867245, r20867246, r20867247, r20867248, r20867249, r20867250, r20867251, r20867252, r20867253, r20867254, r20867255, r20867256;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20867237);
        mpfr_init(r20867238);
        mpfr_init_set_str(r20867239, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r20867240);
        mpfr_init(r20867241);
        mpfr_init_set_str(r20867242, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20867243, "3.0", 10, MPFR_RNDN);
        mpfr_init(r20867244);
        mpfr_init(r20867245);
        mpfr_init(r20867246);
        mpfr_init(r20867247);
        mpfr_init_set_str(r20867248, "-0.666667", 10, MPFR_RNDN);
        mpfr_init_set_str(r20867249, "1", 10, MPFR_RNDN);
        mpfr_init(r20867250);
        mpfr_init_set_str(r20867251, "-3", 10, MPFR_RNDN);
        mpfr_init(r20867252);
        mpfr_init(r20867253);
        mpfr_init_set_str(r20867254, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20867255);
        mpfr_init(r20867256);
}

double f_fm(double x) {
        mpfr_set_d(r20867237, x, MPFR_RNDN);
        mpfr_mul(r20867238, r20867237, r20867237, MPFR_RNDN);
        ;
        mpfr_mul(r20867240, r20867239, r20867237, MPFR_RNDN);
        mpfr_mul(r20867241, r20867238, r20867240, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20867244, r20867237, r20867243, MPFR_RNDN);
        mpfr_add(r20867245, r20867242, r20867244, MPFR_RNDN);
        mpfr_add(r20867246, r20867241, r20867245, MPFR_RNDN);
        mpfr_mul(r20867247, r20867246, r20867237, MPFR_RNDN);
        ;
        ;
        mpfr_div(r20867250, r20867249, r20867237, MPFR_RNDN);
        ;
        mpfr_pow(r20867252, r20867250, r20867251, MPFR_RNDN);
        mpfr_mul(r20867253, r20867248, r20867252, MPFR_RNDN);
        ;
        mpfr_add(r20867255, r20867253, r20867254, MPFR_RNDN);
        mpfr_add(r20867256, r20867247, r20867255, MPFR_RNDN);
        return mpfr_get_d(r20867256, MPFR_RNDN);
}

static mpfr_t r20867257, r20867258, r20867259, r20867260, r20867261, r20867262, r20867263, r20867264, r20867265, r20867266, r20867267, r20867268, r20867269, r20867270, r20867271, r20867272, r20867273, r20867274, r20867275, r20867276;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20867257);
        mpfr_init(r20867258);
        mpfr_init_set_str(r20867259, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r20867260);
        mpfr_init(r20867261);
        mpfr_init_set_str(r20867262, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20867263, "3.0", 10, MPFR_RNDN);
        mpfr_init(r20867264);
        mpfr_init(r20867265);
        mpfr_init(r20867266);
        mpfr_init(r20867267);
        mpfr_init_set_str(r20867268, "-0.666667", 10, MPFR_RNDN);
        mpfr_init_set_str(r20867269, "1", 10, MPFR_RNDN);
        mpfr_init(r20867270);
        mpfr_init_set_str(r20867271, "-3", 10, MPFR_RNDN);
        mpfr_init(r20867272);
        mpfr_init(r20867273);
        mpfr_init_set_str(r20867274, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20867275);
        mpfr_init(r20867276);
}

double f_dm(double x) {
        mpfr_set_d(r20867257, x, MPFR_RNDN);
        mpfr_mul(r20867258, r20867257, r20867257, MPFR_RNDN);
        ;
        mpfr_mul(r20867260, r20867259, r20867257, MPFR_RNDN);
        mpfr_mul(r20867261, r20867258, r20867260, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20867264, r20867257, r20867263, MPFR_RNDN);
        mpfr_add(r20867265, r20867262, r20867264, MPFR_RNDN);
        mpfr_add(r20867266, r20867261, r20867265, MPFR_RNDN);
        mpfr_mul(r20867267, r20867266, r20867257, MPFR_RNDN);
        ;
        ;
        mpfr_div(r20867270, r20867269, r20867257, MPFR_RNDN);
        ;
        mpfr_pow(r20867272, r20867270, r20867271, MPFR_RNDN);
        mpfr_mul(r20867273, r20867268, r20867272, MPFR_RNDN);
        ;
        mpfr_add(r20867275, r20867273, r20867274, MPFR_RNDN);
        mpfr_add(r20867276, r20867267, r20867275, MPFR_RNDN);
        return mpfr_get_d(r20867276, MPFR_RNDN);
}

