#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r20713175 = 1.0;
        float r20713176 = -3.0;
        float r20713177 = x;
        float r20713178 = r20713176 * r20713177;
        float r20713179 = r20713175 + r20713178;
        float r20713180 = 1.5;
        float r20713181 = r20713177 * r20713177;
        float r20713182 = r20713180 * r20713181;
        float r20713183 = r20713179 + r20713182;
        float r20713184 = -0.166667;
        float r20713185 = r20713181 * r20713177;
        float r20713186 = r20713184 * r20713185;
        float r20713187 = r20713183 + r20713186;
        return r20713187;
}

double f_id(double x) {
        double r20713188 = 1.0;
        double r20713189 = -3.0;
        double r20713190 = x;
        double r20713191 = r20713189 * r20713190;
        double r20713192 = r20713188 + r20713191;
        double r20713193 = 1.5;
        double r20713194 = r20713190 * r20713190;
        double r20713195 = r20713193 * r20713194;
        double r20713196 = r20713192 + r20713195;
        double r20713197 = -0.166667;
        double r20713198 = r20713194 * r20713190;
        double r20713199 = r20713197 * r20713198;
        double r20713200 = r20713196 + r20713199;
        return r20713200;
}


double f_of(float x) {
        float r20713201 = x;
        float r20713202 = -3.0;
        float r20713203 = r20713201 * r20713202;
        float r20713204 = 1.0;
        float r20713205 = r20713203 + r20713204;
        float r20713206 = 1.5;
        float r20713207 = -0.166667;
        float r20713208 = r20713207 * r20713201;
        float r20713209 = r20713206 + r20713208;
        float r20713210 = r20713209 * r20713201;
        float r20713211 = r20713210 * r20713201;
        float r20713212 = r20713205 + r20713211;
        return r20713212;
}

double f_od(double x) {
        double r20713213 = x;
        double r20713214 = -3.0;
        double r20713215 = r20713213 * r20713214;
        double r20713216 = 1.0;
        double r20713217 = r20713215 + r20713216;
        double r20713218 = 1.5;
        double r20713219 = -0.166667;
        double r20713220 = r20713219 * r20713213;
        double r20713221 = r20713218 + r20713220;
        double r20713222 = r20713221 * r20713213;
        double r20713223 = r20713222 * r20713213;
        double r20713224 = r20713217 + r20713223;
        return r20713224;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20713225, r20713226, r20713227, r20713228, r20713229, r20713230, r20713231, r20713232, r20713233, r20713234, r20713235, r20713236, r20713237;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20713225, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713226, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r20713227);
        mpfr_init(r20713228);
        mpfr_init(r20713229);
        mpfr_init_set_str(r20713230, "1.5", 10, MPFR_RNDN);
        mpfr_init(r20713231);
        mpfr_init(r20713232);
        mpfr_init(r20713233);
        mpfr_init_set_str(r20713234, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r20713235);
        mpfr_init(r20713236);
        mpfr_init(r20713237);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20713227, x, MPFR_RNDN);
        mpfr_mul(r20713228, r20713226, r20713227, MPFR_RNDN);
        mpfr_add(r20713229, r20713225, r20713228, MPFR_RNDN);
        ;
        mpfr_mul(r20713231, r20713227, r20713227, MPFR_RNDN);
        mpfr_mul(r20713232, r20713230, r20713231, MPFR_RNDN);
        mpfr_add(r20713233, r20713229, r20713232, MPFR_RNDN);
        ;
        mpfr_mul(r20713235, r20713231, r20713227, MPFR_RNDN);
        mpfr_mul(r20713236, r20713234, r20713235, MPFR_RNDN);
        mpfr_add(r20713237, r20713233, r20713236, MPFR_RNDN);
        return mpfr_get_d(r20713237, MPFR_RNDN);
}

static mpfr_t r20713238, r20713239, r20713240, r20713241, r20713242, r20713243, r20713244, r20713245, r20713246, r20713247, r20713248, r20713249;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20713238);
        mpfr_init_set_str(r20713239, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r20713240);
        mpfr_init_set_str(r20713241, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20713242);
        mpfr_init_set_str(r20713243, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713244, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r20713245);
        mpfr_init(r20713246);
        mpfr_init(r20713247);
        mpfr_init(r20713248);
        mpfr_init(r20713249);
}

double f_fm(double x) {
        mpfr_set_d(r20713238, x, MPFR_RNDN);
        ;
        mpfr_mul(r20713240, r20713238, r20713239, MPFR_RNDN);
        ;
        mpfr_add(r20713242, r20713240, r20713241, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20713245, r20713244, r20713238, MPFR_RNDN);
        mpfr_add(r20713246, r20713243, r20713245, MPFR_RNDN);
        mpfr_mul(r20713247, r20713246, r20713238, MPFR_RNDN);
        mpfr_mul(r20713248, r20713247, r20713238, MPFR_RNDN);
        mpfr_add(r20713249, r20713242, r20713248, MPFR_RNDN);
        return mpfr_get_d(r20713249, MPFR_RNDN);
}

static mpfr_t r20713250, r20713251, r20713252, r20713253, r20713254, r20713255, r20713256, r20713257, r20713258, r20713259, r20713260, r20713261;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20713250);
        mpfr_init_set_str(r20713251, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r20713252);
        mpfr_init_set_str(r20713253, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20713254);
        mpfr_init_set_str(r20713255, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r20713256, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r20713257);
        mpfr_init(r20713258);
        mpfr_init(r20713259);
        mpfr_init(r20713260);
        mpfr_init(r20713261);
}

double f_dm(double x) {
        mpfr_set_d(r20713250, x, MPFR_RNDN);
        ;
        mpfr_mul(r20713252, r20713250, r20713251, MPFR_RNDN);
        ;
        mpfr_add(r20713254, r20713252, r20713253, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20713257, r20713256, r20713250, MPFR_RNDN);
        mpfr_add(r20713258, r20713255, r20713257, MPFR_RNDN);
        mpfr_mul(r20713259, r20713258, r20713250, MPFR_RNDN);
        mpfr_mul(r20713260, r20713259, r20713250, MPFR_RNDN);
        mpfr_add(r20713261, r20713254, r20713260, MPFR_RNDN);
        return mpfr_get_d(r20713261, MPFR_RNDN);
}

