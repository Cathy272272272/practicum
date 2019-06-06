#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r11544969 = 1.0;
        float r11544970 = -3.0;
        float r11544971 = x;
        float r11544972 = r11544970 * r11544971;
        float r11544973 = r11544969 + r11544972;
        float r11544974 = 1.5;
        float r11544975 = r11544971 * r11544971;
        float r11544976 = r11544974 * r11544975;
        float r11544977 = r11544973 + r11544976;
        float r11544978 = -0.166667;
        float r11544979 = r11544975 * r11544971;
        float r11544980 = r11544978 * r11544979;
        float r11544981 = r11544977 + r11544980;
        return r11544981;
}

double f_id(double x) {
        double r11544982 = 1.0;
        double r11544983 = -3.0;
        double r11544984 = x;
        double r11544985 = r11544983 * r11544984;
        double r11544986 = r11544982 + r11544985;
        double r11544987 = 1.5;
        double r11544988 = r11544984 * r11544984;
        double r11544989 = r11544987 * r11544988;
        double r11544990 = r11544986 + r11544989;
        double r11544991 = -0.166667;
        double r11544992 = r11544988 * r11544984;
        double r11544993 = r11544991 * r11544992;
        double r11544994 = r11544990 + r11544993;
        return r11544994;
}


double f_of(float x) {
        float r11544995 = x;
        float r11544996 = -3.0;
        float r11544997 = r11544995 * r11544996;
        float r11544998 = 1.0;
        float r11544999 = r11544997 + r11544998;
        float r11545000 = 1.5;
        float r11545001 = -0.166667;
        float r11545002 = r11545001 * r11544995;
        float r11545003 = r11545000 + r11545002;
        float r11545004 = r11544995 * r11544995;
        float r11545005 = r11545003 * r11545004;
        float r11545006 = sqrt(r11545005);
        float r11545007 = r11545006 * r11545006;
        float r11545008 = r11544999 + r11545007;
        return r11545008;
}

double f_od(double x) {
        double r11545009 = x;
        double r11545010 = -3.0;
        double r11545011 = r11545009 * r11545010;
        double r11545012 = 1.0;
        double r11545013 = r11545011 + r11545012;
        double r11545014 = 1.5;
        double r11545015 = -0.166667;
        double r11545016 = r11545015 * r11545009;
        double r11545017 = r11545014 + r11545016;
        double r11545018 = r11545009 * r11545009;
        double r11545019 = r11545017 * r11545018;
        double r11545020 = sqrt(r11545019);
        double r11545021 = r11545020 * r11545020;
        double r11545022 = r11545013 + r11545021;
        return r11545022;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11545023, r11545024, r11545025, r11545026, r11545027, r11545028, r11545029, r11545030, r11545031, r11545032, r11545033, r11545034, r11545035;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11545023, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11545024, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11545025);
        mpfr_init(r11545026);
        mpfr_init(r11545027);
        mpfr_init_set_str(r11545028, "1.5", 10, MPFR_RNDN);
        mpfr_init(r11545029);
        mpfr_init(r11545030);
        mpfr_init(r11545031);
        mpfr_init_set_str(r11545032, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11545033);
        mpfr_init(r11545034);
        mpfr_init(r11545035);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11545025, x, MPFR_RNDN);
        mpfr_mul(r11545026, r11545024, r11545025, MPFR_RNDN);
        mpfr_add(r11545027, r11545023, r11545026, MPFR_RNDN);
        ;
        mpfr_mul(r11545029, r11545025, r11545025, MPFR_RNDN);
        mpfr_mul(r11545030, r11545028, r11545029, MPFR_RNDN);
        mpfr_add(r11545031, r11545027, r11545030, MPFR_RNDN);
        ;
        mpfr_mul(r11545033, r11545029, r11545025, MPFR_RNDN);
        mpfr_mul(r11545034, r11545032, r11545033, MPFR_RNDN);
        mpfr_add(r11545035, r11545031, r11545034, MPFR_RNDN);
        return mpfr_get_d(r11545035, MPFR_RNDN);
}

static mpfr_t r11545036, r11545037, r11545038, r11545039, r11545040, r11545041, r11545042, r11545043, r11545044, r11545045, r11545046, r11545047, r11545048, r11545049;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11545036);
        mpfr_init_set_str(r11545037, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11545038);
        mpfr_init_set_str(r11545039, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11545040);
        mpfr_init_set_str(r11545041, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r11545042, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11545043);
        mpfr_init(r11545044);
        mpfr_init(r11545045);
        mpfr_init(r11545046);
        mpfr_init(r11545047);
        mpfr_init(r11545048);
        mpfr_init(r11545049);
}

double f_fm(double x) {
        mpfr_set_d(r11545036, x, MPFR_RNDN);
        ;
        mpfr_mul(r11545038, r11545036, r11545037, MPFR_RNDN);
        ;
        mpfr_add(r11545040, r11545038, r11545039, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11545043, r11545042, r11545036, MPFR_RNDN);
        mpfr_add(r11545044, r11545041, r11545043, MPFR_RNDN);
        mpfr_mul(r11545045, r11545036, r11545036, MPFR_RNDN);
        mpfr_mul(r11545046, r11545044, r11545045, MPFR_RNDN);
        mpfr_sqrt(r11545047, r11545046, MPFR_RNDN);
        mpfr_mul(r11545048, r11545047, r11545047, MPFR_RNDN);
        mpfr_add(r11545049, r11545040, r11545048, MPFR_RNDN);
        return mpfr_get_d(r11545049, MPFR_RNDN);
}

static mpfr_t r11545050, r11545051, r11545052, r11545053, r11545054, r11545055, r11545056, r11545057, r11545058, r11545059, r11545060, r11545061, r11545062, r11545063;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11545050);
        mpfr_init_set_str(r11545051, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r11545052);
        mpfr_init_set_str(r11545053, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11545054);
        mpfr_init_set_str(r11545055, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r11545056, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r11545057);
        mpfr_init(r11545058);
        mpfr_init(r11545059);
        mpfr_init(r11545060);
        mpfr_init(r11545061);
        mpfr_init(r11545062);
        mpfr_init(r11545063);
}

double f_dm(double x) {
        mpfr_set_d(r11545050, x, MPFR_RNDN);
        ;
        mpfr_mul(r11545052, r11545050, r11545051, MPFR_RNDN);
        ;
        mpfr_add(r11545054, r11545052, r11545053, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11545057, r11545056, r11545050, MPFR_RNDN);
        mpfr_add(r11545058, r11545055, r11545057, MPFR_RNDN);
        mpfr_mul(r11545059, r11545050, r11545050, MPFR_RNDN);
        mpfr_mul(r11545060, r11545058, r11545059, MPFR_RNDN);
        mpfr_sqrt(r11545061, r11545060, MPFR_RNDN);
        mpfr_mul(r11545062, r11545061, r11545061, MPFR_RNDN);
        mpfr_add(r11545063, r11545054, r11545062, MPFR_RNDN);
        return mpfr_get_d(r11545063, MPFR_RNDN);
}

