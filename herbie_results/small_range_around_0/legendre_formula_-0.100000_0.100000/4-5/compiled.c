#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r4598960 = 1.875;
        float r4598961 = x;
        float r4598962 = r4598960 * r4598961;
        float r4598963 = -8.75;
        float r4598964 = r4598961 * r4598961;
        float r4598965 = r4598964 * r4598961;
        float r4598966 = r4598963 * r4598965;
        float r4598967 = r4598962 + r4598966;
        float r4598968 = 7.875;
        float r4598969 = r4598965 * r4598961;
        float r4598970 = r4598969 * r4598961;
        float r4598971 = r4598968 * r4598970;
        float r4598972 = r4598967 + r4598971;
        return r4598972;
}

double f_id(double x) {
        double r4598973 = 1.875;
        double r4598974 = x;
        double r4598975 = r4598973 * r4598974;
        double r4598976 = -8.75;
        double r4598977 = r4598974 * r4598974;
        double r4598978 = r4598977 * r4598974;
        double r4598979 = r4598976 * r4598978;
        double r4598980 = r4598975 + r4598979;
        double r4598981 = 7.875;
        double r4598982 = r4598978 * r4598974;
        double r4598983 = r4598982 * r4598974;
        double r4598984 = r4598981 * r4598983;
        double r4598985 = r4598980 + r4598984;
        return r4598985;
}


double f_of(float x) {
        float r4598986 = 1.875;
        float r4598987 = x;
        float r4598988 = r4598986 * r4598987;
        float r4598989 = -8.75;
        float r4598990 = r4598987 * r4598987;
        float r4598991 = r4598990 * r4598987;
        float r4598992 = r4598989 * r4598991;
        float r4598993 = r4598988 + r4598992;
        float r4598994 = 7.875;
        float r4598995 = r4598991 * r4598987;
        float r4598996 = r4598995 * r4598987;
        float r4598997 = r4598994 * r4598996;
        float r4598998 = r4598993 + r4598997;
        return r4598998;
}

double f_od(double x) {
        double r4598999 = 1.875;
        double r4599000 = x;
        double r4599001 = r4598999 * r4599000;
        double r4599002 = -8.75;
        double r4599003 = r4599000 * r4599000;
        double r4599004 = r4599003 * r4599000;
        double r4599005 = r4599002 * r4599004;
        double r4599006 = r4599001 + r4599005;
        double r4599007 = 7.875;
        double r4599008 = r4599004 * r4599000;
        double r4599009 = r4599008 * r4599000;
        double r4599010 = r4599007 * r4599009;
        double r4599011 = r4599006 + r4599010;
        return r4599011;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4599012, r4599013, r4599014, r4599015, r4599016, r4599017, r4599018, r4599019, r4599020, r4599021, r4599022, r4599023, r4599024;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4599012, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4599013);
        mpfr_init(r4599014);
        mpfr_init_set_str(r4599015, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4599016);
        mpfr_init(r4599017);
        mpfr_init(r4599018);
        mpfr_init(r4599019);
        mpfr_init_set_str(r4599020, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4599021);
        mpfr_init(r4599022);
        mpfr_init(r4599023);
        mpfr_init(r4599024);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4599013, x, MPFR_RNDN);
        mpfr_mul(r4599014, r4599012, r4599013, MPFR_RNDN);
        ;
        mpfr_mul(r4599016, r4599013, r4599013, MPFR_RNDN);
        mpfr_mul(r4599017, r4599016, r4599013, MPFR_RNDN);
        mpfr_mul(r4599018, r4599015, r4599017, MPFR_RNDN);
        mpfr_add(r4599019, r4599014, r4599018, MPFR_RNDN);
        ;
        mpfr_mul(r4599021, r4599017, r4599013, MPFR_RNDN);
        mpfr_mul(r4599022, r4599021, r4599013, MPFR_RNDN);
        mpfr_mul(r4599023, r4599020, r4599022, MPFR_RNDN);
        mpfr_add(r4599024, r4599019, r4599023, MPFR_RNDN);
        return mpfr_get_d(r4599024, MPFR_RNDN);
}

static mpfr_t r4599025, r4599026, r4599027, r4599028, r4599029, r4599030, r4599031, r4599032, r4599033, r4599034, r4599035, r4599036, r4599037;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4599025, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4599026);
        mpfr_init(r4599027);
        mpfr_init_set_str(r4599028, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4599029);
        mpfr_init(r4599030);
        mpfr_init(r4599031);
        mpfr_init(r4599032);
        mpfr_init_set_str(r4599033, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4599034);
        mpfr_init(r4599035);
        mpfr_init(r4599036);
        mpfr_init(r4599037);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4599026, x, MPFR_RNDN);
        mpfr_mul(r4599027, r4599025, r4599026, MPFR_RNDN);
        ;
        mpfr_mul(r4599029, r4599026, r4599026, MPFR_RNDN);
        mpfr_mul(r4599030, r4599029, r4599026, MPFR_RNDN);
        mpfr_mul(r4599031, r4599028, r4599030, MPFR_RNDN);
        mpfr_add(r4599032, r4599027, r4599031, MPFR_RNDN);
        ;
        mpfr_mul(r4599034, r4599030, r4599026, MPFR_RNDN);
        mpfr_mul(r4599035, r4599034, r4599026, MPFR_RNDN);
        mpfr_mul(r4599036, r4599033, r4599035, MPFR_RNDN);
        mpfr_add(r4599037, r4599032, r4599036, MPFR_RNDN);
        return mpfr_get_d(r4599037, MPFR_RNDN);
}

static mpfr_t r4599038, r4599039, r4599040, r4599041, r4599042, r4599043, r4599044, r4599045, r4599046, r4599047, r4599048, r4599049, r4599050;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4599038, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4599039);
        mpfr_init(r4599040);
        mpfr_init_set_str(r4599041, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4599042);
        mpfr_init(r4599043);
        mpfr_init(r4599044);
        mpfr_init(r4599045);
        mpfr_init_set_str(r4599046, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4599047);
        mpfr_init(r4599048);
        mpfr_init(r4599049);
        mpfr_init(r4599050);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4599039, x, MPFR_RNDN);
        mpfr_mul(r4599040, r4599038, r4599039, MPFR_RNDN);
        ;
        mpfr_mul(r4599042, r4599039, r4599039, MPFR_RNDN);
        mpfr_mul(r4599043, r4599042, r4599039, MPFR_RNDN);
        mpfr_mul(r4599044, r4599041, r4599043, MPFR_RNDN);
        mpfr_add(r4599045, r4599040, r4599044, MPFR_RNDN);
        ;
        mpfr_mul(r4599047, r4599043, r4599039, MPFR_RNDN);
        mpfr_mul(r4599048, r4599047, r4599039, MPFR_RNDN);
        mpfr_mul(r4599049, r4599046, r4599048, MPFR_RNDN);
        mpfr_add(r4599050, r4599045, r4599049, MPFR_RNDN);
        return mpfr_get_d(r4599050, MPFR_RNDN);
}

