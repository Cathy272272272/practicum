#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r8596154 = 1.0;
        float r8596155 = -3.0;
        float r8596156 = x;
        float r8596157 = r8596155 * r8596156;
        float r8596158 = r8596154 + r8596157;
        float r8596159 = 1.5;
        float r8596160 = r8596156 * r8596156;
        float r8596161 = r8596159 * r8596160;
        float r8596162 = r8596158 + r8596161;
        float r8596163 = -0.166667;
        float r8596164 = r8596160 * r8596156;
        float r8596165 = r8596163 * r8596164;
        float r8596166 = r8596162 + r8596165;
        return r8596166;
}

double f_id(double x) {
        double r8596167 = 1.0;
        double r8596168 = -3.0;
        double r8596169 = x;
        double r8596170 = r8596168 * r8596169;
        double r8596171 = r8596167 + r8596170;
        double r8596172 = 1.5;
        double r8596173 = r8596169 * r8596169;
        double r8596174 = r8596172 * r8596173;
        double r8596175 = r8596171 + r8596174;
        double r8596176 = -0.166667;
        double r8596177 = r8596173 * r8596169;
        double r8596178 = r8596176 * r8596177;
        double r8596179 = r8596175 + r8596178;
        return r8596179;
}


double f_of(float x) {
        float r8596180 = x;
        float r8596181 = -3.0;
        float r8596182 = r8596180 * r8596181;
        float r8596183 = 1.0;
        float r8596184 = r8596182 + r8596183;
        float r8596185 = 1.5;
        float r8596186 = -0.166667;
        float r8596187 = r8596186 * r8596180;
        float r8596188 = r8596185 + r8596187;
        float r8596189 = r8596180 * r8596180;
        float r8596190 = r8596188 * r8596189;
        float r8596191 = r8596184 + r8596190;
        return r8596191;
}

double f_od(double x) {
        double r8596192 = x;
        double r8596193 = -3.0;
        double r8596194 = r8596192 * r8596193;
        double r8596195 = 1.0;
        double r8596196 = r8596194 + r8596195;
        double r8596197 = 1.5;
        double r8596198 = -0.166667;
        double r8596199 = r8596198 * r8596192;
        double r8596200 = r8596197 + r8596199;
        double r8596201 = r8596192 * r8596192;
        double r8596202 = r8596200 * r8596201;
        double r8596203 = r8596196 + r8596202;
        return r8596203;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8596204, r8596205, r8596206, r8596207, r8596208, r8596209, r8596210, r8596211, r8596212, r8596213, r8596214, r8596215, r8596216;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8596204, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596205, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r8596206);
        mpfr_init(r8596207);
        mpfr_init(r8596208);
        mpfr_init_set_str(r8596209, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8596210);
        mpfr_init(r8596211);
        mpfr_init(r8596212);
        mpfr_init_set_str(r8596213, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r8596214);
        mpfr_init(r8596215);
        mpfr_init(r8596216);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8596206, x, MPFR_RNDN);
        mpfr_mul(r8596207, r8596205, r8596206, MPFR_RNDN);
        mpfr_add(r8596208, r8596204, r8596207, MPFR_RNDN);
        ;
        mpfr_mul(r8596210, r8596206, r8596206, MPFR_RNDN);
        mpfr_mul(r8596211, r8596209, r8596210, MPFR_RNDN);
        mpfr_add(r8596212, r8596208, r8596211, MPFR_RNDN);
        ;
        mpfr_mul(r8596214, r8596210, r8596206, MPFR_RNDN);
        mpfr_mul(r8596215, r8596213, r8596214, MPFR_RNDN);
        mpfr_add(r8596216, r8596212, r8596215, MPFR_RNDN);
        return mpfr_get_d(r8596216, MPFR_RNDN);
}

static mpfr_t r8596217, r8596218, r8596219, r8596220, r8596221, r8596222, r8596223, r8596224, r8596225, r8596226, r8596227, r8596228;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8596217);
        mpfr_init_set_str(r8596218, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r8596219);
        mpfr_init_set_str(r8596220, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8596221);
        mpfr_init_set_str(r8596222, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596223, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r8596224);
        mpfr_init(r8596225);
        mpfr_init(r8596226);
        mpfr_init(r8596227);
        mpfr_init(r8596228);
}

double f_fm(double x) {
        mpfr_set_d(r8596217, x, MPFR_RNDN);
        ;
        mpfr_mul(r8596219, r8596217, r8596218, MPFR_RNDN);
        ;
        mpfr_add(r8596221, r8596219, r8596220, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8596224, r8596223, r8596217, MPFR_RNDN);
        mpfr_add(r8596225, r8596222, r8596224, MPFR_RNDN);
        mpfr_mul(r8596226, r8596217, r8596217, MPFR_RNDN);
        mpfr_mul(r8596227, r8596225, r8596226, MPFR_RNDN);
        mpfr_add(r8596228, r8596221, r8596227, MPFR_RNDN);
        return mpfr_get_d(r8596228, MPFR_RNDN);
}

static mpfr_t r8596229, r8596230, r8596231, r8596232, r8596233, r8596234, r8596235, r8596236, r8596237, r8596238, r8596239, r8596240;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8596229);
        mpfr_init_set_str(r8596230, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r8596231);
        mpfr_init_set_str(r8596232, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8596233);
        mpfr_init_set_str(r8596234, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596235, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r8596236);
        mpfr_init(r8596237);
        mpfr_init(r8596238);
        mpfr_init(r8596239);
        mpfr_init(r8596240);
}

double f_dm(double x) {
        mpfr_set_d(r8596229, x, MPFR_RNDN);
        ;
        mpfr_mul(r8596231, r8596229, r8596230, MPFR_RNDN);
        ;
        mpfr_add(r8596233, r8596231, r8596232, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8596236, r8596235, r8596229, MPFR_RNDN);
        mpfr_add(r8596237, r8596234, r8596236, MPFR_RNDN);
        mpfr_mul(r8596238, r8596229, r8596229, MPFR_RNDN);
        mpfr_mul(r8596239, r8596237, r8596238, MPFR_RNDN);
        mpfr_add(r8596240, r8596233, r8596239, MPFR_RNDN);
        return mpfr_get_d(r8596240, MPFR_RNDN);
}

