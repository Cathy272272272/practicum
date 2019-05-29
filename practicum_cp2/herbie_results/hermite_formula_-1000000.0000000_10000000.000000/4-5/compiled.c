#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r8203985 = 120.0;
        float r8203986 = x;
        float r8203987 = r8203985 * r8203986;
        float r8203988 = -160.0;
        float r8203989 = r8203986 * r8203986;
        float r8203990 = r8203989 * r8203986;
        float r8203991 = r8203988 * r8203990;
        float r8203992 = r8203987 + r8203991;
        float r8203993 = 32.0;
        float r8203994 = r8203990 * r8203986;
        float r8203995 = r8203994 * r8203986;
        float r8203996 = r8203993 * r8203995;
        float r8203997 = r8203992 + r8203996;
        return r8203997;
}

double f_id(double x) {
        double r8203998 = 120.0;
        double r8203999 = x;
        double r8204000 = r8203998 * r8203999;
        double r8204001 = -160.0;
        double r8204002 = r8203999 * r8203999;
        double r8204003 = r8204002 * r8203999;
        double r8204004 = r8204001 * r8204003;
        double r8204005 = r8204000 + r8204004;
        double r8204006 = 32.0;
        double r8204007 = r8204003 * r8203999;
        double r8204008 = r8204007 * r8203999;
        double r8204009 = r8204006 * r8204008;
        double r8204010 = r8204005 + r8204009;
        return r8204010;
}


double f_of(float x) {
        float r8204011 = 120.0;
        float r8204012 = x;
        float r8204013 = r8204011 * r8204012;
        float r8204014 = -160.0;
        float r8204015 = r8204012 * r8204012;
        float r8204016 = r8204015 * r8204012;
        float r8204017 = r8204014 * r8204016;
        float r8204018 = r8204013 + r8204017;
        float r8204019 = 32.0;
        float r8204020 = 3;
        float r8204021 = 1;
        float r8204022 = r8204020 + r8204021;
        float r8204023 = r8204022 + r8204021;
        float r8204024 = pow(r8204012, r8204023);
        float r8204025 = r8204019 * r8204024;
        float r8204026 = r8204018 + r8204025;
        return r8204026;
}

double f_od(double x) {
        double r8204027 = 120.0;
        double r8204028 = x;
        double r8204029 = r8204027 * r8204028;
        double r8204030 = -160.0;
        double r8204031 = r8204028 * r8204028;
        double r8204032 = r8204031 * r8204028;
        double r8204033 = r8204030 * r8204032;
        double r8204034 = r8204029 + r8204033;
        double r8204035 = 32.0;
        double r8204036 = 3;
        double r8204037 = 1;
        double r8204038 = r8204036 + r8204037;
        double r8204039 = r8204038 + r8204037;
        double r8204040 = pow(r8204028, r8204039);
        double r8204041 = r8204035 * r8204040;
        double r8204042 = r8204034 + r8204041;
        return r8204042;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8204043, r8204044, r8204045, r8204046, r8204047, r8204048, r8204049, r8204050, r8204051, r8204052, r8204053, r8204054, r8204055;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8204043, "120.0", 10, MPFR_RNDN);
        mpfr_init(r8204044);
        mpfr_init(r8204045);
        mpfr_init_set_str(r8204046, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r8204047);
        mpfr_init(r8204048);
        mpfr_init(r8204049);
        mpfr_init(r8204050);
        mpfr_init_set_str(r8204051, "32.0", 10, MPFR_RNDN);
        mpfr_init(r8204052);
        mpfr_init(r8204053);
        mpfr_init(r8204054);
        mpfr_init(r8204055);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8204044, x, MPFR_RNDN);
        mpfr_mul(r8204045, r8204043, r8204044, MPFR_RNDN);
        ;
        mpfr_mul(r8204047, r8204044, r8204044, MPFR_RNDN);
        mpfr_mul(r8204048, r8204047, r8204044, MPFR_RNDN);
        mpfr_mul(r8204049, r8204046, r8204048, MPFR_RNDN);
        mpfr_add(r8204050, r8204045, r8204049, MPFR_RNDN);
        ;
        mpfr_mul(r8204052, r8204048, r8204044, MPFR_RNDN);
        mpfr_mul(r8204053, r8204052, r8204044, MPFR_RNDN);
        mpfr_mul(r8204054, r8204051, r8204053, MPFR_RNDN);
        mpfr_add(r8204055, r8204050, r8204054, MPFR_RNDN);
        return mpfr_get_d(r8204055, MPFR_RNDN);
}

static mpfr_t r8204056, r8204057, r8204058, r8204059, r8204060, r8204061, r8204062, r8204063, r8204064, r8204065, r8204066, r8204067, r8204068, r8204069, r8204070, r8204071;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8204056, "120.0", 10, MPFR_RNDN);
        mpfr_init(r8204057);
        mpfr_init(r8204058);
        mpfr_init_set_str(r8204059, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r8204060);
        mpfr_init(r8204061);
        mpfr_init(r8204062);
        mpfr_init(r8204063);
        mpfr_init_set_str(r8204064, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204065, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204066, "1", 10, MPFR_RNDN);
        mpfr_init(r8204067);
        mpfr_init(r8204068);
        mpfr_init(r8204069);
        mpfr_init(r8204070);
        mpfr_init(r8204071);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8204057, x, MPFR_RNDN);
        mpfr_mul(r8204058, r8204056, r8204057, MPFR_RNDN);
        ;
        mpfr_mul(r8204060, r8204057, r8204057, MPFR_RNDN);
        mpfr_mul(r8204061, r8204060, r8204057, MPFR_RNDN);
        mpfr_mul(r8204062, r8204059, r8204061, MPFR_RNDN);
        mpfr_add(r8204063, r8204058, r8204062, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8204067, r8204065, r8204066, MPFR_RNDN);
        mpfr_add(r8204068, r8204067, r8204066, MPFR_RNDN);
        mpfr_pow(r8204069, r8204057, r8204068, MPFR_RNDN);
        mpfr_mul(r8204070, r8204064, r8204069, MPFR_RNDN);
        mpfr_add(r8204071, r8204063, r8204070, MPFR_RNDN);
        return mpfr_get_d(r8204071, MPFR_RNDN);
}

static mpfr_t r8204072, r8204073, r8204074, r8204075, r8204076, r8204077, r8204078, r8204079, r8204080, r8204081, r8204082, r8204083, r8204084, r8204085, r8204086, r8204087;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8204072, "120.0", 10, MPFR_RNDN);
        mpfr_init(r8204073);
        mpfr_init(r8204074);
        mpfr_init_set_str(r8204075, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r8204076);
        mpfr_init(r8204077);
        mpfr_init(r8204078);
        mpfr_init(r8204079);
        mpfr_init_set_str(r8204080, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204081, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204082, "1", 10, MPFR_RNDN);
        mpfr_init(r8204083);
        mpfr_init(r8204084);
        mpfr_init(r8204085);
        mpfr_init(r8204086);
        mpfr_init(r8204087);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8204073, x, MPFR_RNDN);
        mpfr_mul(r8204074, r8204072, r8204073, MPFR_RNDN);
        ;
        mpfr_mul(r8204076, r8204073, r8204073, MPFR_RNDN);
        mpfr_mul(r8204077, r8204076, r8204073, MPFR_RNDN);
        mpfr_mul(r8204078, r8204075, r8204077, MPFR_RNDN);
        mpfr_add(r8204079, r8204074, r8204078, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8204083, r8204081, r8204082, MPFR_RNDN);
        mpfr_add(r8204084, r8204083, r8204082, MPFR_RNDN);
        mpfr_pow(r8204085, r8204073, r8204084, MPFR_RNDN);
        mpfr_mul(r8204086, r8204080, r8204085, MPFR_RNDN);
        mpfr_add(r8204087, r8204079, r8204086, MPFR_RNDN);
        return mpfr_get_d(r8204087, MPFR_RNDN);
}

