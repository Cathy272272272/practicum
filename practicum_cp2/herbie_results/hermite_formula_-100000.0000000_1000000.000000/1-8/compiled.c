#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7638847 = 1680.0;
        float r7638848 = -13440.0;
        float r7638849 = x;
        float r7638850 = r7638849 * r7638849;
        float r7638851 = r7638848 * r7638850;
        float r7638852 = r7638847 + r7638851;
        float r7638853 = 13440.0;
        float r7638854 = r7638850 * r7638849;
        float r7638855 = r7638854 * r7638849;
        float r7638856 = r7638853 * r7638855;
        float r7638857 = r7638852 + r7638856;
        float r7638858 = -3584.0;
        float r7638859 = r7638855 * r7638849;
        float r7638860 = r7638859 * r7638849;
        float r7638861 = r7638858 * r7638860;
        float r7638862 = r7638857 + r7638861;
        float r7638863 = 256.0;
        float r7638864 = r7638860 * r7638849;
        float r7638865 = r7638864 * r7638849;
        float r7638866 = r7638863 * r7638865;
        float r7638867 = r7638862 + r7638866;
        return r7638867;
}

double f_id(double x) {
        double r7638868 = 1680.0;
        double r7638869 = -13440.0;
        double r7638870 = x;
        double r7638871 = r7638870 * r7638870;
        double r7638872 = r7638869 * r7638871;
        double r7638873 = r7638868 + r7638872;
        double r7638874 = 13440.0;
        double r7638875 = r7638871 * r7638870;
        double r7638876 = r7638875 * r7638870;
        double r7638877 = r7638874 * r7638876;
        double r7638878 = r7638873 + r7638877;
        double r7638879 = -3584.0;
        double r7638880 = r7638876 * r7638870;
        double r7638881 = r7638880 * r7638870;
        double r7638882 = r7638879 * r7638881;
        double r7638883 = r7638878 + r7638882;
        double r7638884 = 256.0;
        double r7638885 = r7638881 * r7638870;
        double r7638886 = r7638885 * r7638870;
        double r7638887 = r7638884 * r7638886;
        double r7638888 = r7638883 + r7638887;
        return r7638888;
}


double f_of(float x) {
        float r7638889 = x;
        float r7638890 = 13440.0;
        float r7638891 = r7638889 * r7638890;
        float r7638892 = 3;
        float r7638893 = pow(r7638889, r7638892);
        float r7638894 = r7638891 * r7638893;
        float r7638895 = -13440.0;
        float r7638896 = r7638889 * r7638895;
        float r7638897 = r7638889 * r7638896;
        float r7638898 = r7638894 + r7638897;
        float r7638899 = 1680.0;
        float r7638900 = r7638898 + r7638899;
        float r7638901 = r7638893 * r7638893;
        float r7638902 = -3584.0;
        float r7638903 = 256.0;
        float r7638904 = r7638903 * r7638889;
        float r7638905 = r7638904 * r7638889;
        float r7638906 = r7638902 + r7638905;
        float r7638907 = r7638901 * r7638906;
        float r7638908 = r7638900 + r7638907;
        return r7638908;
}

double f_od(double x) {
        double r7638909 = x;
        double r7638910 = 13440.0;
        double r7638911 = r7638909 * r7638910;
        double r7638912 = 3;
        double r7638913 = pow(r7638909, r7638912);
        double r7638914 = r7638911 * r7638913;
        double r7638915 = -13440.0;
        double r7638916 = r7638909 * r7638915;
        double r7638917 = r7638909 * r7638916;
        double r7638918 = r7638914 + r7638917;
        double r7638919 = 1680.0;
        double r7638920 = r7638918 + r7638919;
        double r7638921 = r7638913 * r7638913;
        double r7638922 = -3584.0;
        double r7638923 = 256.0;
        double r7638924 = r7638923 * r7638909;
        double r7638925 = r7638924 * r7638909;
        double r7638926 = r7638922 + r7638925;
        double r7638927 = r7638921 * r7638926;
        double r7638928 = r7638920 + r7638927;
        return r7638928;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7638929, r7638930, r7638931, r7638932, r7638933, r7638934, r7638935, r7638936, r7638937, r7638938, r7638939, r7638940, r7638941, r7638942, r7638943, r7638944, r7638945, r7638946, r7638947, r7638948, r7638949;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7638929, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7638930, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7638931);
        mpfr_init(r7638932);
        mpfr_init(r7638933);
        mpfr_init(r7638934);
        mpfr_init_set_str(r7638935, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7638936);
        mpfr_init(r7638937);
        mpfr_init(r7638938);
        mpfr_init(r7638939);
        mpfr_init_set_str(r7638940, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7638941);
        mpfr_init(r7638942);
        mpfr_init(r7638943);
        mpfr_init(r7638944);
        mpfr_init_set_str(r7638945, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7638946);
        mpfr_init(r7638947);
        mpfr_init(r7638948);
        mpfr_init(r7638949);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7638931, x, MPFR_RNDN);
        mpfr_mul(r7638932, r7638931, r7638931, MPFR_RNDN);
        mpfr_mul(r7638933, r7638930, r7638932, MPFR_RNDN);
        mpfr_add(r7638934, r7638929, r7638933, MPFR_RNDN);
        ;
        mpfr_mul(r7638936, r7638932, r7638931, MPFR_RNDN);
        mpfr_mul(r7638937, r7638936, r7638931, MPFR_RNDN);
        mpfr_mul(r7638938, r7638935, r7638937, MPFR_RNDN);
        mpfr_add(r7638939, r7638934, r7638938, MPFR_RNDN);
        ;
        mpfr_mul(r7638941, r7638937, r7638931, MPFR_RNDN);
        mpfr_mul(r7638942, r7638941, r7638931, MPFR_RNDN);
        mpfr_mul(r7638943, r7638940, r7638942, MPFR_RNDN);
        mpfr_add(r7638944, r7638939, r7638943, MPFR_RNDN);
        ;
        mpfr_mul(r7638946, r7638942, r7638931, MPFR_RNDN);
        mpfr_mul(r7638947, r7638946, r7638931, MPFR_RNDN);
        mpfr_mul(r7638948, r7638945, r7638947, MPFR_RNDN);
        mpfr_add(r7638949, r7638944, r7638948, MPFR_RNDN);
        return mpfr_get_d(r7638949, MPFR_RNDN);
}

static mpfr_t r7638950, r7638951, r7638952, r7638953, r7638954, r7638955, r7638956, r7638957, r7638958, r7638959, r7638960, r7638961, r7638962, r7638963, r7638964, r7638965, r7638966, r7638967, r7638968, r7638969;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7638950);
        mpfr_init_set_str(r7638951, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7638952);
        mpfr_init_set_str(r7638953, "3", 10, MPFR_RNDN);
        mpfr_init(r7638954);
        mpfr_init(r7638955);
        mpfr_init_set_str(r7638956, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7638957);
        mpfr_init(r7638958);
        mpfr_init(r7638959);
        mpfr_init_set_str(r7638960, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r7638961);
        mpfr_init(r7638962);
        mpfr_init_set_str(r7638963, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7638964, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7638965);
        mpfr_init(r7638966);
        mpfr_init(r7638967);
        mpfr_init(r7638968);
        mpfr_init(r7638969);
}

double f_fm(double x) {
        mpfr_set_d(r7638950, x, MPFR_RNDN);
        ;
        mpfr_mul(r7638952, r7638950, r7638951, MPFR_RNDN);
        ;
        mpfr_pow(r7638954, r7638950, r7638953, MPFR_RNDN);
        mpfr_mul(r7638955, r7638952, r7638954, MPFR_RNDN);
        ;
        mpfr_mul(r7638957, r7638950, r7638956, MPFR_RNDN);
        mpfr_mul(r7638958, r7638950, r7638957, MPFR_RNDN);
        mpfr_add(r7638959, r7638955, r7638958, MPFR_RNDN);
        ;
        mpfr_add(r7638961, r7638959, r7638960, MPFR_RNDN);
        mpfr_mul(r7638962, r7638954, r7638954, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7638965, r7638964, r7638950, MPFR_RNDN);
        mpfr_mul(r7638966, r7638965, r7638950, MPFR_RNDN);
        mpfr_add(r7638967, r7638963, r7638966, MPFR_RNDN);
        mpfr_mul(r7638968, r7638962, r7638967, MPFR_RNDN);
        mpfr_add(r7638969, r7638961, r7638968, MPFR_RNDN);
        return mpfr_get_d(r7638969, MPFR_RNDN);
}

static mpfr_t r7638970, r7638971, r7638972, r7638973, r7638974, r7638975, r7638976, r7638977, r7638978, r7638979, r7638980, r7638981, r7638982, r7638983, r7638984, r7638985, r7638986, r7638987, r7638988, r7638989;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7638970);
        mpfr_init_set_str(r7638971, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7638972);
        mpfr_init_set_str(r7638973, "3", 10, MPFR_RNDN);
        mpfr_init(r7638974);
        mpfr_init(r7638975);
        mpfr_init_set_str(r7638976, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7638977);
        mpfr_init(r7638978);
        mpfr_init(r7638979);
        mpfr_init_set_str(r7638980, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r7638981);
        mpfr_init(r7638982);
        mpfr_init_set_str(r7638983, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7638984, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7638985);
        mpfr_init(r7638986);
        mpfr_init(r7638987);
        mpfr_init(r7638988);
        mpfr_init(r7638989);
}

double f_dm(double x) {
        mpfr_set_d(r7638970, x, MPFR_RNDN);
        ;
        mpfr_mul(r7638972, r7638970, r7638971, MPFR_RNDN);
        ;
        mpfr_pow(r7638974, r7638970, r7638973, MPFR_RNDN);
        mpfr_mul(r7638975, r7638972, r7638974, MPFR_RNDN);
        ;
        mpfr_mul(r7638977, r7638970, r7638976, MPFR_RNDN);
        mpfr_mul(r7638978, r7638970, r7638977, MPFR_RNDN);
        mpfr_add(r7638979, r7638975, r7638978, MPFR_RNDN);
        ;
        mpfr_add(r7638981, r7638979, r7638980, MPFR_RNDN);
        mpfr_mul(r7638982, r7638974, r7638974, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7638985, r7638984, r7638970, MPFR_RNDN);
        mpfr_mul(r7638986, r7638985, r7638970, MPFR_RNDN);
        mpfr_add(r7638987, r7638983, r7638986, MPFR_RNDN);
        mpfr_mul(r7638988, r7638982, r7638987, MPFR_RNDN);
        mpfr_add(r7638989, r7638981, r7638988, MPFR_RNDN);
        return mpfr_get_d(r7638989, MPFR_RNDN);
}

