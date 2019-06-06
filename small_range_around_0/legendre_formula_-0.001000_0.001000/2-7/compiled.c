#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r4435998 = -2.1875;
        float r4435999 = x;
        float r4436000 = r4435998 * r4435999;
        float r4436001 = 19.6875;
        float r4436002 = r4435999 * r4435999;
        float r4436003 = r4436002 * r4435999;
        float r4436004 = r4436001 * r4436003;
        float r4436005 = r4436000 + r4436004;
        float r4436006 = -43.3125;
        float r4436007 = r4436003 * r4435999;
        float r4436008 = r4436007 * r4435999;
        float r4436009 = r4436006 * r4436008;
        float r4436010 = r4436005 + r4436009;
        float r4436011 = 26.8125;
        float r4436012 = r4436008 * r4435999;
        float r4436013 = r4436012 * r4435999;
        float r4436014 = r4436011 * r4436013;
        float r4436015 = r4436010 + r4436014;
        return r4436015;
}

double f_id(double x) {
        double r4436016 = -2.1875;
        double r4436017 = x;
        double r4436018 = r4436016 * r4436017;
        double r4436019 = 19.6875;
        double r4436020 = r4436017 * r4436017;
        double r4436021 = r4436020 * r4436017;
        double r4436022 = r4436019 * r4436021;
        double r4436023 = r4436018 + r4436022;
        double r4436024 = -43.3125;
        double r4436025 = r4436021 * r4436017;
        double r4436026 = r4436025 * r4436017;
        double r4436027 = r4436024 * r4436026;
        double r4436028 = r4436023 + r4436027;
        double r4436029 = 26.8125;
        double r4436030 = r4436026 * r4436017;
        double r4436031 = r4436030 * r4436017;
        double r4436032 = r4436029 * r4436031;
        double r4436033 = r4436028 + r4436032;
        return r4436033;
}


double f_of(float x) {
        float r4436034 = x;
        float r4436035 = r4436034 * r4436034;
        float r4436036 = r4436035 * r4436035;
        float r4436037 = 26.8125;
        float r4436038 = r4436037 * r4436034;
        float r4436039 = r4436035 * r4436038;
        float r4436040 = -43.3125;
        float r4436041 = r4436034 * r4436040;
        float r4436042 = r4436039 + r4436041;
        float r4436043 = r4436036 * r4436042;
        float r4436044 = 19.6875;
        float r4436045 = r4436044 * r4436034;
        float r4436046 = r4436045 * r4436034;
        float r4436047 = exp(r4436046);
        float r4436048 = log(r4436047);
        float r4436049 = -2.1875;
        float r4436050 = r4436048 + r4436049;
        float r4436051 = r4436034 * r4436050;
        float r4436052 = r4436043 + r4436051;
        return r4436052;
}

double f_od(double x) {
        double r4436053 = x;
        double r4436054 = r4436053 * r4436053;
        double r4436055 = r4436054 * r4436054;
        double r4436056 = 26.8125;
        double r4436057 = r4436056 * r4436053;
        double r4436058 = r4436054 * r4436057;
        double r4436059 = -43.3125;
        double r4436060 = r4436053 * r4436059;
        double r4436061 = r4436058 + r4436060;
        double r4436062 = r4436055 * r4436061;
        double r4436063 = 19.6875;
        double r4436064 = r4436063 * r4436053;
        double r4436065 = r4436064 * r4436053;
        double r4436066 = exp(r4436065);
        double r4436067 = log(r4436066);
        double r4436068 = -2.1875;
        double r4436069 = r4436067 + r4436068;
        double r4436070 = r4436053 * r4436069;
        double r4436071 = r4436062 + r4436070;
        return r4436071;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4436072, r4436073, r4436074, r4436075, r4436076, r4436077, r4436078, r4436079, r4436080, r4436081, r4436082, r4436083, r4436084, r4436085, r4436086, r4436087, r4436088, r4436089;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4436072, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4436073);
        mpfr_init(r4436074);
        mpfr_init_set_str(r4436075, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4436076);
        mpfr_init(r4436077);
        mpfr_init(r4436078);
        mpfr_init(r4436079);
        mpfr_init_set_str(r4436080, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4436081);
        mpfr_init(r4436082);
        mpfr_init(r4436083);
        mpfr_init(r4436084);
        mpfr_init_set_str(r4436085, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4436086);
        mpfr_init(r4436087);
        mpfr_init(r4436088);
        mpfr_init(r4436089);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4436073, x, MPFR_RNDN);
        mpfr_mul(r4436074, r4436072, r4436073, MPFR_RNDN);
        ;
        mpfr_mul(r4436076, r4436073, r4436073, MPFR_RNDN);
        mpfr_mul(r4436077, r4436076, r4436073, MPFR_RNDN);
        mpfr_mul(r4436078, r4436075, r4436077, MPFR_RNDN);
        mpfr_add(r4436079, r4436074, r4436078, MPFR_RNDN);
        ;
        mpfr_mul(r4436081, r4436077, r4436073, MPFR_RNDN);
        mpfr_mul(r4436082, r4436081, r4436073, MPFR_RNDN);
        mpfr_mul(r4436083, r4436080, r4436082, MPFR_RNDN);
        mpfr_add(r4436084, r4436079, r4436083, MPFR_RNDN);
        ;
        mpfr_mul(r4436086, r4436082, r4436073, MPFR_RNDN);
        mpfr_mul(r4436087, r4436086, r4436073, MPFR_RNDN);
        mpfr_mul(r4436088, r4436085, r4436087, MPFR_RNDN);
        mpfr_add(r4436089, r4436084, r4436088, MPFR_RNDN);
        return mpfr_get_d(r4436089, MPFR_RNDN);
}

static mpfr_t r4436090, r4436091, r4436092, r4436093, r4436094, r4436095, r4436096, r4436097, r4436098, r4436099, r4436100, r4436101, r4436102, r4436103, r4436104, r4436105, r4436106, r4436107, r4436108;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r4436090);
        mpfr_init(r4436091);
        mpfr_init(r4436092);
        mpfr_init_set_str(r4436093, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4436094);
        mpfr_init(r4436095);
        mpfr_init_set_str(r4436096, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4436097);
        mpfr_init(r4436098);
        mpfr_init(r4436099);
        mpfr_init_set_str(r4436100, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4436101);
        mpfr_init(r4436102);
        mpfr_init(r4436103);
        mpfr_init(r4436104);
        mpfr_init_set_str(r4436105, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4436106);
        mpfr_init(r4436107);
        mpfr_init(r4436108);
}

double f_fm(double x) {
        mpfr_set_d(r4436090, x, MPFR_RNDN);
        mpfr_mul(r4436091, r4436090, r4436090, MPFR_RNDN);
        mpfr_mul(r4436092, r4436091, r4436091, MPFR_RNDN);
        ;
        mpfr_mul(r4436094, r4436093, r4436090, MPFR_RNDN);
        mpfr_mul(r4436095, r4436091, r4436094, MPFR_RNDN);
        ;
        mpfr_mul(r4436097, r4436090, r4436096, MPFR_RNDN);
        mpfr_add(r4436098, r4436095, r4436097, MPFR_RNDN);
        mpfr_mul(r4436099, r4436092, r4436098, MPFR_RNDN);
        ;
        mpfr_mul(r4436101, r4436100, r4436090, MPFR_RNDN);
        mpfr_mul(r4436102, r4436101, r4436090, MPFR_RNDN);
        mpfr_exp(r4436103, r4436102, MPFR_RNDN);
        mpfr_log(r4436104, r4436103, MPFR_RNDN);
        ;
        mpfr_add(r4436106, r4436104, r4436105, MPFR_RNDN);
        mpfr_mul(r4436107, r4436090, r4436106, MPFR_RNDN);
        mpfr_add(r4436108, r4436099, r4436107, MPFR_RNDN);
        return mpfr_get_d(r4436108, MPFR_RNDN);
}

static mpfr_t r4436109, r4436110, r4436111, r4436112, r4436113, r4436114, r4436115, r4436116, r4436117, r4436118, r4436119, r4436120, r4436121, r4436122, r4436123, r4436124, r4436125, r4436126, r4436127;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r4436109);
        mpfr_init(r4436110);
        mpfr_init(r4436111);
        mpfr_init_set_str(r4436112, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4436113);
        mpfr_init(r4436114);
        mpfr_init_set_str(r4436115, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4436116);
        mpfr_init(r4436117);
        mpfr_init(r4436118);
        mpfr_init_set_str(r4436119, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4436120);
        mpfr_init(r4436121);
        mpfr_init(r4436122);
        mpfr_init(r4436123);
        mpfr_init_set_str(r4436124, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4436125);
        mpfr_init(r4436126);
        mpfr_init(r4436127);
}

double f_dm(double x) {
        mpfr_set_d(r4436109, x, MPFR_RNDN);
        mpfr_mul(r4436110, r4436109, r4436109, MPFR_RNDN);
        mpfr_mul(r4436111, r4436110, r4436110, MPFR_RNDN);
        ;
        mpfr_mul(r4436113, r4436112, r4436109, MPFR_RNDN);
        mpfr_mul(r4436114, r4436110, r4436113, MPFR_RNDN);
        ;
        mpfr_mul(r4436116, r4436109, r4436115, MPFR_RNDN);
        mpfr_add(r4436117, r4436114, r4436116, MPFR_RNDN);
        mpfr_mul(r4436118, r4436111, r4436117, MPFR_RNDN);
        ;
        mpfr_mul(r4436120, r4436119, r4436109, MPFR_RNDN);
        mpfr_mul(r4436121, r4436120, r4436109, MPFR_RNDN);
        mpfr_exp(r4436122, r4436121, MPFR_RNDN);
        mpfr_log(r4436123, r4436122, MPFR_RNDN);
        ;
        mpfr_add(r4436125, r4436123, r4436124, MPFR_RNDN);
        mpfr_mul(r4436126, r4436109, r4436125, MPFR_RNDN);
        mpfr_add(r4436127, r4436118, r4436126, MPFR_RNDN);
        return mpfr_get_d(r4436127, MPFR_RNDN);
}

