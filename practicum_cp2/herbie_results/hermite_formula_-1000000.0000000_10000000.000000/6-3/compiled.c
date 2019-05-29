#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r8204169 = -12.0;
        float r8204170 = x;
        float r8204171 = r8204169 * r8204170;
        float r8204172 = 8.0;
        float r8204173 = r8204170 * r8204170;
        float r8204174 = r8204173 * r8204170;
        float r8204175 = r8204172 * r8204174;
        float r8204176 = r8204171 + r8204175;
        return r8204176;
}

double f_id(double x) {
        double r8204177 = -12.0;
        double r8204178 = x;
        double r8204179 = r8204177 * r8204178;
        double r8204180 = 8.0;
        double r8204181 = r8204178 * r8204178;
        double r8204182 = r8204181 * r8204178;
        double r8204183 = r8204180 * r8204182;
        double r8204184 = r8204179 + r8204183;
        return r8204184;
}


double f_of(float x) {
        float r8204185 = -12.0;
        float r8204186 = x;
        float r8204187 = r8204185 * r8204186;
        float r8204188 = 8.0;
        float r8204189 = 3;
        float r8204190 = pow(r8204186, r8204189);
        float r8204191 = r8204188 * r8204190;
        float r8204192 = r8204187 + r8204191;
        return r8204192;
}

double f_od(double x) {
        double r8204193 = -12.0;
        double r8204194 = x;
        double r8204195 = r8204193 * r8204194;
        double r8204196 = 8.0;
        double r8204197 = 3;
        double r8204198 = pow(r8204194, r8204197);
        double r8204199 = r8204196 * r8204198;
        double r8204200 = r8204195 + r8204199;
        return r8204200;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8204201, r8204202, r8204203, r8204204, r8204205, r8204206, r8204207, r8204208;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8204201, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r8204202);
        mpfr_init(r8204203);
        mpfr_init_set_str(r8204204, "8.0", 10, MPFR_RNDN);
        mpfr_init(r8204205);
        mpfr_init(r8204206);
        mpfr_init(r8204207);
        mpfr_init(r8204208);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8204202, x, MPFR_RNDN);
        mpfr_mul(r8204203, r8204201, r8204202, MPFR_RNDN);
        ;
        mpfr_mul(r8204205, r8204202, r8204202, MPFR_RNDN);
        mpfr_mul(r8204206, r8204205, r8204202, MPFR_RNDN);
        mpfr_mul(r8204207, r8204204, r8204206, MPFR_RNDN);
        mpfr_add(r8204208, r8204203, r8204207, MPFR_RNDN);
        return mpfr_get_d(r8204208, MPFR_RNDN);
}

static mpfr_t r8204209, r8204210, r8204211, r8204212, r8204213, r8204214, r8204215, r8204216;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8204209, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r8204210);
        mpfr_init(r8204211);
        mpfr_init_set_str(r8204212, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204213, "3", 10, MPFR_RNDN);
        mpfr_init(r8204214);
        mpfr_init(r8204215);
        mpfr_init(r8204216);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8204210, x, MPFR_RNDN);
        mpfr_mul(r8204211, r8204209, r8204210, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8204214, r8204210, r8204213, MPFR_RNDN);
        mpfr_mul(r8204215, r8204212, r8204214, MPFR_RNDN);
        mpfr_add(r8204216, r8204211, r8204215, MPFR_RNDN);
        return mpfr_get_d(r8204216, MPFR_RNDN);
}

static mpfr_t r8204217, r8204218, r8204219, r8204220, r8204221, r8204222, r8204223, r8204224;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8204217, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r8204218);
        mpfr_init(r8204219);
        mpfr_init_set_str(r8204220, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204221, "3", 10, MPFR_RNDN);
        mpfr_init(r8204222);
        mpfr_init(r8204223);
        mpfr_init(r8204224);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8204218, x, MPFR_RNDN);
        mpfr_mul(r8204219, r8204217, r8204218, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8204222, r8204218, r8204221, MPFR_RNDN);
        mpfr_mul(r8204223, r8204220, r8204222, MPFR_RNDN);
        mpfr_add(r8204224, r8204219, r8204223, MPFR_RNDN);
        return mpfr_get_d(r8204224, MPFR_RNDN);
}

