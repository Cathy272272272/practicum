#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r5315925 = 1680.0;
        float r5315926 = -13440.0;
        float r5315927 = x;
        float r5315928 = r5315927 * r5315927;
        float r5315929 = r5315926 * r5315928;
        float r5315930 = r5315925 + r5315929;
        float r5315931 = 13440.0;
        float r5315932 = r5315928 * r5315927;
        float r5315933 = r5315932 * r5315927;
        float r5315934 = r5315931 * r5315933;
        float r5315935 = r5315930 + r5315934;
        float r5315936 = -3584.0;
        float r5315937 = r5315933 * r5315927;
        float r5315938 = r5315937 * r5315927;
        float r5315939 = r5315936 * r5315938;
        float r5315940 = r5315935 + r5315939;
        float r5315941 = 256.0;
        float r5315942 = r5315938 * r5315927;
        float r5315943 = r5315942 * r5315927;
        float r5315944 = r5315941 * r5315943;
        float r5315945 = r5315940 + r5315944;
        return r5315945;
}

double f_id(double x) {
        double r5315946 = 1680.0;
        double r5315947 = -13440.0;
        double r5315948 = x;
        double r5315949 = r5315948 * r5315948;
        double r5315950 = r5315947 * r5315949;
        double r5315951 = r5315946 + r5315950;
        double r5315952 = 13440.0;
        double r5315953 = r5315949 * r5315948;
        double r5315954 = r5315953 * r5315948;
        double r5315955 = r5315952 * r5315954;
        double r5315956 = r5315951 + r5315955;
        double r5315957 = -3584.0;
        double r5315958 = r5315954 * r5315948;
        double r5315959 = r5315958 * r5315948;
        double r5315960 = r5315957 * r5315959;
        double r5315961 = r5315956 + r5315960;
        double r5315962 = 256.0;
        double r5315963 = r5315959 * r5315948;
        double r5315964 = r5315963 * r5315948;
        double r5315965 = r5315962 * r5315964;
        double r5315966 = r5315961 + r5315965;
        return r5315966;
}


double f_of(float x) {
        float r5315967 = x;
        float r5315968 = 13440.0;
        float r5315969 = r5315967 * r5315968;
        float r5315970 = 3;
        float r5315971 = pow(r5315967, r5315970);
        float r5315972 = r5315969 * r5315971;
        float r5315973 = -13440.0;
        float r5315974 = r5315967 * r5315973;
        float r5315975 = r5315967 * r5315974;
        float r5315976 = r5315972 + r5315975;
        float r5315977 = 1680.0;
        float r5315978 = r5315976 + r5315977;
        float r5315979 = r5315970 + r5315970;
        float r5315980 = pow(r5315967, r5315979);
        float r5315981 = -3584.0;
        float r5315982 = 256.0;
        float r5315983 = r5315982 * r5315967;
        float r5315984 = r5315983 * r5315967;
        float r5315985 = r5315981 + r5315984;
        float r5315986 = r5315980 * r5315985;
        float r5315987 = r5315978 + r5315986;
        return r5315987;
}

double f_od(double x) {
        double r5315988 = x;
        double r5315989 = 13440.0;
        double r5315990 = r5315988 * r5315989;
        double r5315991 = 3;
        double r5315992 = pow(r5315988, r5315991);
        double r5315993 = r5315990 * r5315992;
        double r5315994 = -13440.0;
        double r5315995 = r5315988 * r5315994;
        double r5315996 = r5315988 * r5315995;
        double r5315997 = r5315993 + r5315996;
        double r5315998 = 1680.0;
        double r5315999 = r5315997 + r5315998;
        double r5316000 = r5315991 + r5315991;
        double r5316001 = pow(r5315988, r5316000);
        double r5316002 = -3584.0;
        double r5316003 = 256.0;
        double r5316004 = r5316003 * r5315988;
        double r5316005 = r5316004 * r5315988;
        double r5316006 = r5316002 + r5316005;
        double r5316007 = r5316001 * r5316006;
        double r5316008 = r5315999 + r5316007;
        return r5316008;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5316009, r5316010, r5316011, r5316012, r5316013, r5316014, r5316015, r5316016, r5316017, r5316018, r5316019, r5316020, r5316021, r5316022, r5316023, r5316024, r5316025, r5316026, r5316027, r5316028, r5316029;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5316009, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316010, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r5316011);
        mpfr_init(r5316012);
        mpfr_init(r5316013);
        mpfr_init(r5316014);
        mpfr_init_set_str(r5316015, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r5316016);
        mpfr_init(r5316017);
        mpfr_init(r5316018);
        mpfr_init(r5316019);
        mpfr_init_set_str(r5316020, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r5316021);
        mpfr_init(r5316022);
        mpfr_init(r5316023);
        mpfr_init(r5316024);
        mpfr_init_set_str(r5316025, "256.0", 10, MPFR_RNDN);
        mpfr_init(r5316026);
        mpfr_init(r5316027);
        mpfr_init(r5316028);
        mpfr_init(r5316029);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5316011, x, MPFR_RNDN);
        mpfr_mul(r5316012, r5316011, r5316011, MPFR_RNDN);
        mpfr_mul(r5316013, r5316010, r5316012, MPFR_RNDN);
        mpfr_add(r5316014, r5316009, r5316013, MPFR_RNDN);
        ;
        mpfr_mul(r5316016, r5316012, r5316011, MPFR_RNDN);
        mpfr_mul(r5316017, r5316016, r5316011, MPFR_RNDN);
        mpfr_mul(r5316018, r5316015, r5316017, MPFR_RNDN);
        mpfr_add(r5316019, r5316014, r5316018, MPFR_RNDN);
        ;
        mpfr_mul(r5316021, r5316017, r5316011, MPFR_RNDN);
        mpfr_mul(r5316022, r5316021, r5316011, MPFR_RNDN);
        mpfr_mul(r5316023, r5316020, r5316022, MPFR_RNDN);
        mpfr_add(r5316024, r5316019, r5316023, MPFR_RNDN);
        ;
        mpfr_mul(r5316026, r5316022, r5316011, MPFR_RNDN);
        mpfr_mul(r5316027, r5316026, r5316011, MPFR_RNDN);
        mpfr_mul(r5316028, r5316025, r5316027, MPFR_RNDN);
        mpfr_add(r5316029, r5316024, r5316028, MPFR_RNDN);
        return mpfr_get_d(r5316029, MPFR_RNDN);
}

static mpfr_t r5316030, r5316031, r5316032, r5316033, r5316034, r5316035, r5316036, r5316037, r5316038, r5316039, r5316040, r5316041, r5316042, r5316043, r5316044, r5316045, r5316046, r5316047, r5316048, r5316049, r5316050;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5316030);
        mpfr_init_set_str(r5316031, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r5316032);
        mpfr_init_set_str(r5316033, "3", 10, MPFR_RNDN);
        mpfr_init(r5316034);
        mpfr_init(r5316035);
        mpfr_init_set_str(r5316036, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r5316037);
        mpfr_init(r5316038);
        mpfr_init(r5316039);
        mpfr_init_set_str(r5316040, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r5316041);
        mpfr_init(r5316042);
        mpfr_init(r5316043);
        mpfr_init_set_str(r5316044, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316045, "256.0", 10, MPFR_RNDN);
        mpfr_init(r5316046);
        mpfr_init(r5316047);
        mpfr_init(r5316048);
        mpfr_init(r5316049);
        mpfr_init(r5316050);
}

double f_fm(double x) {
        mpfr_set_d(r5316030, x, MPFR_RNDN);
        ;
        mpfr_mul(r5316032, r5316030, r5316031, MPFR_RNDN);
        ;
        mpfr_pow(r5316034, r5316030, r5316033, MPFR_RNDN);
        mpfr_mul(r5316035, r5316032, r5316034, MPFR_RNDN);
        ;
        mpfr_mul(r5316037, r5316030, r5316036, MPFR_RNDN);
        mpfr_mul(r5316038, r5316030, r5316037, MPFR_RNDN);
        mpfr_add(r5316039, r5316035, r5316038, MPFR_RNDN);
        ;
        mpfr_add(r5316041, r5316039, r5316040, MPFR_RNDN);
        mpfr_add(r5316042, r5316033, r5316033, MPFR_RNDN);
        mpfr_pow(r5316043, r5316030, r5316042, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5316046, r5316045, r5316030, MPFR_RNDN);
        mpfr_mul(r5316047, r5316046, r5316030, MPFR_RNDN);
        mpfr_add(r5316048, r5316044, r5316047, MPFR_RNDN);
        mpfr_mul(r5316049, r5316043, r5316048, MPFR_RNDN);
        mpfr_add(r5316050, r5316041, r5316049, MPFR_RNDN);
        return mpfr_get_d(r5316050, MPFR_RNDN);
}

static mpfr_t r5316051, r5316052, r5316053, r5316054, r5316055, r5316056, r5316057, r5316058, r5316059, r5316060, r5316061, r5316062, r5316063, r5316064, r5316065, r5316066, r5316067, r5316068, r5316069, r5316070, r5316071;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5316051);
        mpfr_init_set_str(r5316052, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r5316053);
        mpfr_init_set_str(r5316054, "3", 10, MPFR_RNDN);
        mpfr_init(r5316055);
        mpfr_init(r5316056);
        mpfr_init_set_str(r5316057, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r5316058);
        mpfr_init(r5316059);
        mpfr_init(r5316060);
        mpfr_init_set_str(r5316061, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r5316062);
        mpfr_init(r5316063);
        mpfr_init(r5316064);
        mpfr_init_set_str(r5316065, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316066, "256.0", 10, MPFR_RNDN);
        mpfr_init(r5316067);
        mpfr_init(r5316068);
        mpfr_init(r5316069);
        mpfr_init(r5316070);
        mpfr_init(r5316071);
}

double f_dm(double x) {
        mpfr_set_d(r5316051, x, MPFR_RNDN);
        ;
        mpfr_mul(r5316053, r5316051, r5316052, MPFR_RNDN);
        ;
        mpfr_pow(r5316055, r5316051, r5316054, MPFR_RNDN);
        mpfr_mul(r5316056, r5316053, r5316055, MPFR_RNDN);
        ;
        mpfr_mul(r5316058, r5316051, r5316057, MPFR_RNDN);
        mpfr_mul(r5316059, r5316051, r5316058, MPFR_RNDN);
        mpfr_add(r5316060, r5316056, r5316059, MPFR_RNDN);
        ;
        mpfr_add(r5316062, r5316060, r5316061, MPFR_RNDN);
        mpfr_add(r5316063, r5316054, r5316054, MPFR_RNDN);
        mpfr_pow(r5316064, r5316051, r5316063, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5316067, r5316066, r5316051, MPFR_RNDN);
        mpfr_mul(r5316068, r5316067, r5316051, MPFR_RNDN);
        mpfr_add(r5316069, r5316065, r5316068, MPFR_RNDN);
        mpfr_mul(r5316070, r5316064, r5316069, MPFR_RNDN);
        mpfr_add(r5316071, r5316062, r5316070, MPFR_RNDN);
        return mpfr_get_d(r5316071, MPFR_RNDN);
}

