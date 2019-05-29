#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r12289989 = 120.0;
        float r12289990 = x;
        float r12289991 = r12289989 * r12289990;
        float r12289992 = -160.0;
        float r12289993 = r12289990 * r12289990;
        float r12289994 = r12289993 * r12289990;
        float r12289995 = r12289992 * r12289994;
        float r12289996 = r12289991 + r12289995;
        float r12289997 = 32.0;
        float r12289998 = r12289994 * r12289990;
        float r12289999 = r12289998 * r12289990;
        float r12290000 = r12289997 * r12289999;
        float r12290001 = r12289996 + r12290000;
        return r12290001;
}

double f_id(double x) {
        double r12290002 = 120.0;
        double r12290003 = x;
        double r12290004 = r12290002 * r12290003;
        double r12290005 = -160.0;
        double r12290006 = r12290003 * r12290003;
        double r12290007 = r12290006 * r12290003;
        double r12290008 = r12290005 * r12290007;
        double r12290009 = r12290004 + r12290008;
        double r12290010 = 32.0;
        double r12290011 = r12290007 * r12290003;
        double r12290012 = r12290011 * r12290003;
        double r12290013 = r12290010 * r12290012;
        double r12290014 = r12290009 + r12290013;
        return r12290014;
}


double f_of(float x) {
        float r12290015 = 120.0;
        float r12290016 = x;
        float r12290017 = r12290015 * r12290016;
        float r12290018 = -160.0;
        float r12290019 = r12290016 * r12290016;
        float r12290020 = r12290019 * r12290016;
        float r12290021 = r12290018 * r12290020;
        float r12290022 = r12290017 + r12290021;
        float r12290023 = 32.0;
        float r12290024 = r12290020 * r12290016;
        float r12290025 = r12290024 * r12290016;
        float r12290026 = r12290023 * r12290025;
        float r12290027 = r12290022 + r12290026;
        return r12290027;
}

double f_od(double x) {
        double r12290028 = 120.0;
        double r12290029 = x;
        double r12290030 = r12290028 * r12290029;
        double r12290031 = -160.0;
        double r12290032 = r12290029 * r12290029;
        double r12290033 = r12290032 * r12290029;
        double r12290034 = r12290031 * r12290033;
        double r12290035 = r12290030 + r12290034;
        double r12290036 = 32.0;
        double r12290037 = r12290033 * r12290029;
        double r12290038 = r12290037 * r12290029;
        double r12290039 = r12290036 * r12290038;
        double r12290040 = r12290035 + r12290039;
        return r12290040;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12290041, r12290042, r12290043, r12290044, r12290045, r12290046, r12290047, r12290048, r12290049, r12290050, r12290051, r12290052, r12290053;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r12290041, "120.0", 10, MPFR_RNDN);
        mpfr_init(r12290042);
        mpfr_init(r12290043);
        mpfr_init_set_str(r12290044, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r12290045);
        mpfr_init(r12290046);
        mpfr_init(r12290047);
        mpfr_init(r12290048);
        mpfr_init_set_str(r12290049, "32.0", 10, MPFR_RNDN);
        mpfr_init(r12290050);
        mpfr_init(r12290051);
        mpfr_init(r12290052);
        mpfr_init(r12290053);
}

double f_im(double x) {
        ;
        mpfr_set_d(r12290042, x, MPFR_RNDN);
        mpfr_mul(r12290043, r12290041, r12290042, MPFR_RNDN);
        ;
        mpfr_mul(r12290045, r12290042, r12290042, MPFR_RNDN);
        mpfr_mul(r12290046, r12290045, r12290042, MPFR_RNDN);
        mpfr_mul(r12290047, r12290044, r12290046, MPFR_RNDN);
        mpfr_add(r12290048, r12290043, r12290047, MPFR_RNDN);
        ;
        mpfr_mul(r12290050, r12290046, r12290042, MPFR_RNDN);
        mpfr_mul(r12290051, r12290050, r12290042, MPFR_RNDN);
        mpfr_mul(r12290052, r12290049, r12290051, MPFR_RNDN);
        mpfr_add(r12290053, r12290048, r12290052, MPFR_RNDN);
        return mpfr_get_d(r12290053, MPFR_RNDN);
}

static mpfr_t r12290054, r12290055, r12290056, r12290057, r12290058, r12290059, r12290060, r12290061, r12290062, r12290063, r12290064, r12290065, r12290066;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r12290054, "120.0", 10, MPFR_RNDN);
        mpfr_init(r12290055);
        mpfr_init(r12290056);
        mpfr_init_set_str(r12290057, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r12290058);
        mpfr_init(r12290059);
        mpfr_init(r12290060);
        mpfr_init(r12290061);
        mpfr_init_set_str(r12290062, "32.0", 10, MPFR_RNDN);
        mpfr_init(r12290063);
        mpfr_init(r12290064);
        mpfr_init(r12290065);
        mpfr_init(r12290066);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r12290055, x, MPFR_RNDN);
        mpfr_mul(r12290056, r12290054, r12290055, MPFR_RNDN);
        ;
        mpfr_mul(r12290058, r12290055, r12290055, MPFR_RNDN);
        mpfr_mul(r12290059, r12290058, r12290055, MPFR_RNDN);
        mpfr_mul(r12290060, r12290057, r12290059, MPFR_RNDN);
        mpfr_add(r12290061, r12290056, r12290060, MPFR_RNDN);
        ;
        mpfr_mul(r12290063, r12290059, r12290055, MPFR_RNDN);
        mpfr_mul(r12290064, r12290063, r12290055, MPFR_RNDN);
        mpfr_mul(r12290065, r12290062, r12290064, MPFR_RNDN);
        mpfr_add(r12290066, r12290061, r12290065, MPFR_RNDN);
        return mpfr_get_d(r12290066, MPFR_RNDN);
}

static mpfr_t r12290067, r12290068, r12290069, r12290070, r12290071, r12290072, r12290073, r12290074, r12290075, r12290076, r12290077, r12290078, r12290079;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r12290067, "120.0", 10, MPFR_RNDN);
        mpfr_init(r12290068);
        mpfr_init(r12290069);
        mpfr_init_set_str(r12290070, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r12290071);
        mpfr_init(r12290072);
        mpfr_init(r12290073);
        mpfr_init(r12290074);
        mpfr_init_set_str(r12290075, "32.0", 10, MPFR_RNDN);
        mpfr_init(r12290076);
        mpfr_init(r12290077);
        mpfr_init(r12290078);
        mpfr_init(r12290079);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r12290068, x, MPFR_RNDN);
        mpfr_mul(r12290069, r12290067, r12290068, MPFR_RNDN);
        ;
        mpfr_mul(r12290071, r12290068, r12290068, MPFR_RNDN);
        mpfr_mul(r12290072, r12290071, r12290068, MPFR_RNDN);
        mpfr_mul(r12290073, r12290070, r12290072, MPFR_RNDN);
        mpfr_add(r12290074, r12290069, r12290073, MPFR_RNDN);
        ;
        mpfr_mul(r12290076, r12290072, r12290068, MPFR_RNDN);
        mpfr_mul(r12290077, r12290076, r12290068, MPFR_RNDN);
        mpfr_mul(r12290078, r12290075, r12290077, MPFR_RNDN);
        mpfr_add(r12290079, r12290074, r12290078, MPFR_RNDN);
        return mpfr_get_d(r12290079, MPFR_RNDN);
}

