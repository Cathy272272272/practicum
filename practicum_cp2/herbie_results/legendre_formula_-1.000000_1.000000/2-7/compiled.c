#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r10035858 = -2.1875;
        float r10035859 = x;
        float r10035860 = r10035858 * r10035859;
        float r10035861 = 19.6875;
        float r10035862 = r10035859 * r10035859;
        float r10035863 = r10035862 * r10035859;
        float r10035864 = r10035861 * r10035863;
        float r10035865 = r10035860 + r10035864;
        float r10035866 = -43.3125;
        float r10035867 = r10035863 * r10035859;
        float r10035868 = r10035867 * r10035859;
        float r10035869 = r10035866 * r10035868;
        float r10035870 = r10035865 + r10035869;
        float r10035871 = 26.8125;
        float r10035872 = r10035868 * r10035859;
        float r10035873 = r10035872 * r10035859;
        float r10035874 = r10035871 * r10035873;
        float r10035875 = r10035870 + r10035874;
        return r10035875;
}

double f_id(double x) {
        double r10035876 = -2.1875;
        double r10035877 = x;
        double r10035878 = r10035876 * r10035877;
        double r10035879 = 19.6875;
        double r10035880 = r10035877 * r10035877;
        double r10035881 = r10035880 * r10035877;
        double r10035882 = r10035879 * r10035881;
        double r10035883 = r10035878 + r10035882;
        double r10035884 = -43.3125;
        double r10035885 = r10035881 * r10035877;
        double r10035886 = r10035885 * r10035877;
        double r10035887 = r10035884 * r10035886;
        double r10035888 = r10035883 + r10035887;
        double r10035889 = 26.8125;
        double r10035890 = r10035886 * r10035877;
        double r10035891 = r10035890 * r10035877;
        double r10035892 = r10035889 * r10035891;
        double r10035893 = r10035888 + r10035892;
        return r10035893;
}


double f_of(float x) {
        float r10035894 = -2.1875;
        float r10035895 = x;
        float r10035896 = r10035894 * r10035895;
        float r10035897 = 19.6875;
        float r10035898 = r10035895 * r10035895;
        float r10035899 = r10035898 * r10035895;
        float r10035900 = r10035897 * r10035899;
        float r10035901 = r10035896 + r10035900;
        float r10035902 = -43.3125;
        float r10035903 = r10035899 * r10035895;
        float r10035904 = r10035903 * r10035895;
        float r10035905 = r10035902 * r10035904;
        float r10035906 = r10035901 + r10035905;
        float r10035907 = 26.8125;
        float r10035908 = r10035904 * r10035895;
        float r10035909 = r10035908 * r10035895;
        float r10035910 = r10035907 * r10035909;
        float r10035911 = r10035906 + r10035910;
        return r10035911;
}

double f_od(double x) {
        double r10035912 = -2.1875;
        double r10035913 = x;
        double r10035914 = r10035912 * r10035913;
        double r10035915 = 19.6875;
        double r10035916 = r10035913 * r10035913;
        double r10035917 = r10035916 * r10035913;
        double r10035918 = r10035915 * r10035917;
        double r10035919 = r10035914 + r10035918;
        double r10035920 = -43.3125;
        double r10035921 = r10035917 * r10035913;
        double r10035922 = r10035921 * r10035913;
        double r10035923 = r10035920 * r10035922;
        double r10035924 = r10035919 + r10035923;
        double r10035925 = 26.8125;
        double r10035926 = r10035922 * r10035913;
        double r10035927 = r10035926 * r10035913;
        double r10035928 = r10035925 * r10035927;
        double r10035929 = r10035924 + r10035928;
        return r10035929;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10035930, r10035931, r10035932, r10035933, r10035934, r10035935, r10035936, r10035937, r10035938, r10035939, r10035940, r10035941, r10035942, r10035943, r10035944, r10035945, r10035946, r10035947;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10035930, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r10035931);
        mpfr_init(r10035932);
        mpfr_init_set_str(r10035933, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r10035934);
        mpfr_init(r10035935);
        mpfr_init(r10035936);
        mpfr_init(r10035937);
        mpfr_init_set_str(r10035938, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r10035939);
        mpfr_init(r10035940);
        mpfr_init(r10035941);
        mpfr_init(r10035942);
        mpfr_init_set_str(r10035943, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r10035944);
        mpfr_init(r10035945);
        mpfr_init(r10035946);
        mpfr_init(r10035947);
}

double f_im(double x) {
        ;
        mpfr_set_d(r10035931, x, MPFR_RNDN);
        mpfr_mul(r10035932, r10035930, r10035931, MPFR_RNDN);
        ;
        mpfr_mul(r10035934, r10035931, r10035931, MPFR_RNDN);
        mpfr_mul(r10035935, r10035934, r10035931, MPFR_RNDN);
        mpfr_mul(r10035936, r10035933, r10035935, MPFR_RNDN);
        mpfr_add(r10035937, r10035932, r10035936, MPFR_RNDN);
        ;
        mpfr_mul(r10035939, r10035935, r10035931, MPFR_RNDN);
        mpfr_mul(r10035940, r10035939, r10035931, MPFR_RNDN);
        mpfr_mul(r10035941, r10035938, r10035940, MPFR_RNDN);
        mpfr_add(r10035942, r10035937, r10035941, MPFR_RNDN);
        ;
        mpfr_mul(r10035944, r10035940, r10035931, MPFR_RNDN);
        mpfr_mul(r10035945, r10035944, r10035931, MPFR_RNDN);
        mpfr_mul(r10035946, r10035943, r10035945, MPFR_RNDN);
        mpfr_add(r10035947, r10035942, r10035946, MPFR_RNDN);
        return mpfr_get_d(r10035947, MPFR_RNDN);
}

static mpfr_t r10035948, r10035949, r10035950, r10035951, r10035952, r10035953, r10035954, r10035955, r10035956, r10035957, r10035958, r10035959, r10035960, r10035961, r10035962, r10035963, r10035964, r10035965;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10035948, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r10035949);
        mpfr_init(r10035950);
        mpfr_init_set_str(r10035951, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r10035952);
        mpfr_init(r10035953);
        mpfr_init(r10035954);
        mpfr_init(r10035955);
        mpfr_init_set_str(r10035956, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r10035957);
        mpfr_init(r10035958);
        mpfr_init(r10035959);
        mpfr_init(r10035960);
        mpfr_init_set_str(r10035961, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r10035962);
        mpfr_init(r10035963);
        mpfr_init(r10035964);
        mpfr_init(r10035965);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10035949, x, MPFR_RNDN);
        mpfr_mul(r10035950, r10035948, r10035949, MPFR_RNDN);
        ;
        mpfr_mul(r10035952, r10035949, r10035949, MPFR_RNDN);
        mpfr_mul(r10035953, r10035952, r10035949, MPFR_RNDN);
        mpfr_mul(r10035954, r10035951, r10035953, MPFR_RNDN);
        mpfr_add(r10035955, r10035950, r10035954, MPFR_RNDN);
        ;
        mpfr_mul(r10035957, r10035953, r10035949, MPFR_RNDN);
        mpfr_mul(r10035958, r10035957, r10035949, MPFR_RNDN);
        mpfr_mul(r10035959, r10035956, r10035958, MPFR_RNDN);
        mpfr_add(r10035960, r10035955, r10035959, MPFR_RNDN);
        ;
        mpfr_mul(r10035962, r10035958, r10035949, MPFR_RNDN);
        mpfr_mul(r10035963, r10035962, r10035949, MPFR_RNDN);
        mpfr_mul(r10035964, r10035961, r10035963, MPFR_RNDN);
        mpfr_add(r10035965, r10035960, r10035964, MPFR_RNDN);
        return mpfr_get_d(r10035965, MPFR_RNDN);
}

static mpfr_t r10035966, r10035967, r10035968, r10035969, r10035970, r10035971, r10035972, r10035973, r10035974, r10035975, r10035976, r10035977, r10035978, r10035979, r10035980, r10035981, r10035982, r10035983;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10035966, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r10035967);
        mpfr_init(r10035968);
        mpfr_init_set_str(r10035969, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r10035970);
        mpfr_init(r10035971);
        mpfr_init(r10035972);
        mpfr_init(r10035973);
        mpfr_init_set_str(r10035974, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r10035975);
        mpfr_init(r10035976);
        mpfr_init(r10035977);
        mpfr_init(r10035978);
        mpfr_init_set_str(r10035979, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r10035980);
        mpfr_init(r10035981);
        mpfr_init(r10035982);
        mpfr_init(r10035983);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10035967, x, MPFR_RNDN);
        mpfr_mul(r10035968, r10035966, r10035967, MPFR_RNDN);
        ;
        mpfr_mul(r10035970, r10035967, r10035967, MPFR_RNDN);
        mpfr_mul(r10035971, r10035970, r10035967, MPFR_RNDN);
        mpfr_mul(r10035972, r10035969, r10035971, MPFR_RNDN);
        mpfr_add(r10035973, r10035968, r10035972, MPFR_RNDN);
        ;
        mpfr_mul(r10035975, r10035971, r10035967, MPFR_RNDN);
        mpfr_mul(r10035976, r10035975, r10035967, MPFR_RNDN);
        mpfr_mul(r10035977, r10035974, r10035976, MPFR_RNDN);
        mpfr_add(r10035978, r10035973, r10035977, MPFR_RNDN);
        ;
        mpfr_mul(r10035980, r10035976, r10035967, MPFR_RNDN);
        mpfr_mul(r10035981, r10035980, r10035967, MPFR_RNDN);
        mpfr_mul(r10035982, r10035979, r10035981, MPFR_RNDN);
        mpfr_add(r10035983, r10035978, r10035982, MPFR_RNDN);
        return mpfr_get_d(r10035983, MPFR_RNDN);
}

