#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r9828980 = 120.0;
        float r9828981 = x;
        float r9828982 = r9828980 * r9828981;
        float r9828983 = -160.0;
        float r9828984 = r9828981 * r9828981;
        float r9828985 = r9828984 * r9828981;
        float r9828986 = r9828983 * r9828985;
        float r9828987 = r9828982 + r9828986;
        float r9828988 = 32.0;
        float r9828989 = r9828985 * r9828981;
        float r9828990 = r9828989 * r9828981;
        float r9828991 = r9828988 * r9828990;
        float r9828992 = r9828987 + r9828991;
        return r9828992;
}

double f_id(double x) {
        double r9828993 = 120.0;
        double r9828994 = x;
        double r9828995 = r9828993 * r9828994;
        double r9828996 = -160.0;
        double r9828997 = r9828994 * r9828994;
        double r9828998 = r9828997 * r9828994;
        double r9828999 = r9828996 * r9828998;
        double r9829000 = r9828995 + r9828999;
        double r9829001 = 32.0;
        double r9829002 = r9828998 * r9828994;
        double r9829003 = r9829002 * r9828994;
        double r9829004 = r9829001 * r9829003;
        double r9829005 = r9829000 + r9829004;
        return r9829005;
}


double f_of(float x) {
        float r9829006 = 120.0;
        float r9829007 = x;
        float r9829008 = r9829006 * r9829007;
        float r9829009 = -160.0;
        float r9829010 = 3;
        float r9829011 = pow(r9829007, r9829010);
        float r9829012 = r9829009 * r9829011;
        float r9829013 = r9829008 + r9829012;
        float r9829014 = 32.0;
        float r9829015 = r9829007 * r9829007;
        float r9829016 = r9829015 * r9829007;
        float r9829017 = r9829016 * r9829007;
        float r9829018 = r9829017 * r9829007;
        float r9829019 = r9829014 * r9829018;
        float r9829020 = r9829013 + r9829019;
        return r9829020;
}

double f_od(double x) {
        double r9829021 = 120.0;
        double r9829022 = x;
        double r9829023 = r9829021 * r9829022;
        double r9829024 = -160.0;
        double r9829025 = 3;
        double r9829026 = pow(r9829022, r9829025);
        double r9829027 = r9829024 * r9829026;
        double r9829028 = r9829023 + r9829027;
        double r9829029 = 32.0;
        double r9829030 = r9829022 * r9829022;
        double r9829031 = r9829030 * r9829022;
        double r9829032 = r9829031 * r9829022;
        double r9829033 = r9829032 * r9829022;
        double r9829034 = r9829029 * r9829033;
        double r9829035 = r9829028 + r9829034;
        return r9829035;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9829036, r9829037, r9829038, r9829039, r9829040, r9829041, r9829042, r9829043, r9829044, r9829045, r9829046, r9829047, r9829048;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9829036, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9829037);
        mpfr_init(r9829038);
        mpfr_init_set_str(r9829039, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9829040);
        mpfr_init(r9829041);
        mpfr_init(r9829042);
        mpfr_init(r9829043);
        mpfr_init_set_str(r9829044, "32.0", 10, MPFR_RNDN);
        mpfr_init(r9829045);
        mpfr_init(r9829046);
        mpfr_init(r9829047);
        mpfr_init(r9829048);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9829037, x, MPFR_RNDN);
        mpfr_mul(r9829038, r9829036, r9829037, MPFR_RNDN);
        ;
        mpfr_mul(r9829040, r9829037, r9829037, MPFR_RNDN);
        mpfr_mul(r9829041, r9829040, r9829037, MPFR_RNDN);
        mpfr_mul(r9829042, r9829039, r9829041, MPFR_RNDN);
        mpfr_add(r9829043, r9829038, r9829042, MPFR_RNDN);
        ;
        mpfr_mul(r9829045, r9829041, r9829037, MPFR_RNDN);
        mpfr_mul(r9829046, r9829045, r9829037, MPFR_RNDN);
        mpfr_mul(r9829047, r9829044, r9829046, MPFR_RNDN);
        mpfr_add(r9829048, r9829043, r9829047, MPFR_RNDN);
        return mpfr_get_d(r9829048, MPFR_RNDN);
}

static mpfr_t r9829049, r9829050, r9829051, r9829052, r9829053, r9829054, r9829055, r9829056, r9829057, r9829058, r9829059, r9829060, r9829061, r9829062, r9829063;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9829049, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9829050);
        mpfr_init(r9829051);
        mpfr_init_set_str(r9829052, "-160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829053, "3", 10, MPFR_RNDN);
        mpfr_init(r9829054);
        mpfr_init(r9829055);
        mpfr_init(r9829056);
        mpfr_init_set_str(r9829057, "32.0", 10, MPFR_RNDN);
        mpfr_init(r9829058);
        mpfr_init(r9829059);
        mpfr_init(r9829060);
        mpfr_init(r9829061);
        mpfr_init(r9829062);
        mpfr_init(r9829063);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9829050, x, MPFR_RNDN);
        mpfr_mul(r9829051, r9829049, r9829050, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9829054, r9829050, r9829053, MPFR_RNDN);
        mpfr_mul(r9829055, r9829052, r9829054, MPFR_RNDN);
        mpfr_add(r9829056, r9829051, r9829055, MPFR_RNDN);
        ;
        mpfr_mul(r9829058, r9829050, r9829050, MPFR_RNDN);
        mpfr_mul(r9829059, r9829058, r9829050, MPFR_RNDN);
        mpfr_mul(r9829060, r9829059, r9829050, MPFR_RNDN);
        mpfr_mul(r9829061, r9829060, r9829050, MPFR_RNDN);
        mpfr_mul(r9829062, r9829057, r9829061, MPFR_RNDN);
        mpfr_add(r9829063, r9829056, r9829062, MPFR_RNDN);
        return mpfr_get_d(r9829063, MPFR_RNDN);
}

static mpfr_t r9829064, r9829065, r9829066, r9829067, r9829068, r9829069, r9829070, r9829071, r9829072, r9829073, r9829074, r9829075, r9829076, r9829077, r9829078;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9829064, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9829065);
        mpfr_init(r9829066);
        mpfr_init_set_str(r9829067, "-160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829068, "3", 10, MPFR_RNDN);
        mpfr_init(r9829069);
        mpfr_init(r9829070);
        mpfr_init(r9829071);
        mpfr_init_set_str(r9829072, "32.0", 10, MPFR_RNDN);
        mpfr_init(r9829073);
        mpfr_init(r9829074);
        mpfr_init(r9829075);
        mpfr_init(r9829076);
        mpfr_init(r9829077);
        mpfr_init(r9829078);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9829065, x, MPFR_RNDN);
        mpfr_mul(r9829066, r9829064, r9829065, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9829069, r9829065, r9829068, MPFR_RNDN);
        mpfr_mul(r9829070, r9829067, r9829069, MPFR_RNDN);
        mpfr_add(r9829071, r9829066, r9829070, MPFR_RNDN);
        ;
        mpfr_mul(r9829073, r9829065, r9829065, MPFR_RNDN);
        mpfr_mul(r9829074, r9829073, r9829065, MPFR_RNDN);
        mpfr_mul(r9829075, r9829074, r9829065, MPFR_RNDN);
        mpfr_mul(r9829076, r9829075, r9829065, MPFR_RNDN);
        mpfr_mul(r9829077, r9829072, r9829076, MPFR_RNDN);
        mpfr_add(r9829078, r9829071, r9829077, MPFR_RNDN);
        return mpfr_get_d(r9829078, MPFR_RNDN);
}

