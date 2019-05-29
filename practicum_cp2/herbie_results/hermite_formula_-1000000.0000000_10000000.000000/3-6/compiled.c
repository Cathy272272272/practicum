#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r8203849 = -120.0;
        float r8203850 = 720.0;
        float r8203851 = x;
        float r8203852 = r8203851 * r8203851;
        float r8203853 = r8203850 * r8203852;
        float r8203854 = r8203849 + r8203853;
        float r8203855 = -480.0;
        float r8203856 = r8203852 * r8203851;
        float r8203857 = r8203856 * r8203851;
        float r8203858 = r8203855 * r8203857;
        float r8203859 = r8203854 + r8203858;
        float r8203860 = 64.0;
        float r8203861 = r8203857 * r8203851;
        float r8203862 = r8203861 * r8203851;
        float r8203863 = r8203860 * r8203862;
        float r8203864 = r8203859 + r8203863;
        return r8203864;
}

double f_id(double x) {
        double r8203865 = -120.0;
        double r8203866 = 720.0;
        double r8203867 = x;
        double r8203868 = r8203867 * r8203867;
        double r8203869 = r8203866 * r8203868;
        double r8203870 = r8203865 + r8203869;
        double r8203871 = -480.0;
        double r8203872 = r8203868 * r8203867;
        double r8203873 = r8203872 * r8203867;
        double r8203874 = r8203871 * r8203873;
        double r8203875 = r8203870 + r8203874;
        double r8203876 = 64.0;
        double r8203877 = r8203873 * r8203867;
        double r8203878 = r8203877 * r8203867;
        double r8203879 = r8203876 * r8203878;
        double r8203880 = r8203875 + r8203879;
        return r8203880;
}


double f_of(float x) {
        float r8203881 = -120.0;
        float r8203882 = 720.0;
        float r8203883 = x;
        float r8203884 = r8203883 * r8203883;
        float r8203885 = r8203882 * r8203884;
        float r8203886 = r8203881 + r8203885;
        float r8203887 = 3;
        float r8203888 = pow(r8203883, r8203887);
        float r8203889 = -480.0;
        float r8203890 = r8203889 * r8203883;
        float r8203891 = r8203888 * r8203890;
        float r8203892 = pow(r8203891, r8203887);
        float r8203893 = cbrt(r8203892);
        float r8203894 = r8203886 + r8203893;
        float r8203895 = 64.0;
        float r8203896 = 1;
        float r8203897 = r8203887 + r8203896;
        float r8203898 = pow(r8203883, r8203897);
        float r8203899 = r8203898 * r8203883;
        float r8203900 = r8203899 * r8203883;
        float r8203901 = r8203895 * r8203900;
        float r8203902 = r8203894 + r8203901;
        return r8203902;
}

double f_od(double x) {
        double r8203903 = -120.0;
        double r8203904 = 720.0;
        double r8203905 = x;
        double r8203906 = r8203905 * r8203905;
        double r8203907 = r8203904 * r8203906;
        double r8203908 = r8203903 + r8203907;
        double r8203909 = 3;
        double r8203910 = pow(r8203905, r8203909);
        double r8203911 = -480.0;
        double r8203912 = r8203911 * r8203905;
        double r8203913 = r8203910 * r8203912;
        double r8203914 = pow(r8203913, r8203909);
        double r8203915 = cbrt(r8203914);
        double r8203916 = r8203908 + r8203915;
        double r8203917 = 64.0;
        double r8203918 = 1;
        double r8203919 = r8203909 + r8203918;
        double r8203920 = pow(r8203905, r8203919);
        double r8203921 = r8203920 * r8203905;
        double r8203922 = r8203921 * r8203905;
        double r8203923 = r8203917 * r8203922;
        double r8203924 = r8203916 + r8203923;
        return r8203924;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8203925, r8203926, r8203927, r8203928, r8203929, r8203930, r8203931, r8203932, r8203933, r8203934, r8203935, r8203936, r8203937, r8203938, r8203939, r8203940;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8203925, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203926, "720.0", 10, MPFR_RNDN);
        mpfr_init(r8203927);
        mpfr_init(r8203928);
        mpfr_init(r8203929);
        mpfr_init(r8203930);
        mpfr_init_set_str(r8203931, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r8203932);
        mpfr_init(r8203933);
        mpfr_init(r8203934);
        mpfr_init(r8203935);
        mpfr_init_set_str(r8203936, "64.0", 10, MPFR_RNDN);
        mpfr_init(r8203937);
        mpfr_init(r8203938);
        mpfr_init(r8203939);
        mpfr_init(r8203940);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8203927, x, MPFR_RNDN);
        mpfr_mul(r8203928, r8203927, r8203927, MPFR_RNDN);
        mpfr_mul(r8203929, r8203926, r8203928, MPFR_RNDN);
        mpfr_add(r8203930, r8203925, r8203929, MPFR_RNDN);
        ;
        mpfr_mul(r8203932, r8203928, r8203927, MPFR_RNDN);
        mpfr_mul(r8203933, r8203932, r8203927, MPFR_RNDN);
        mpfr_mul(r8203934, r8203931, r8203933, MPFR_RNDN);
        mpfr_add(r8203935, r8203930, r8203934, MPFR_RNDN);
        ;
        mpfr_mul(r8203937, r8203933, r8203927, MPFR_RNDN);
        mpfr_mul(r8203938, r8203937, r8203927, MPFR_RNDN);
        mpfr_mul(r8203939, r8203936, r8203938, MPFR_RNDN);
        mpfr_add(r8203940, r8203935, r8203939, MPFR_RNDN);
        return mpfr_get_d(r8203940, MPFR_RNDN);
}

static mpfr_t r8203941, r8203942, r8203943, r8203944, r8203945, r8203946, r8203947, r8203948, r8203949, r8203950, r8203951, r8203952, r8203953, r8203954, r8203955, r8203956, r8203957, r8203958, r8203959, r8203960, r8203961, r8203962;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8203941, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203942, "720.0", 10, MPFR_RNDN);
        mpfr_init(r8203943);
        mpfr_init(r8203944);
        mpfr_init(r8203945);
        mpfr_init(r8203946);
        mpfr_init_set_str(r8203947, "3", 10, MPFR_RNDN);
        mpfr_init(r8203948);
        mpfr_init_set_str(r8203949, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r8203950);
        mpfr_init(r8203951);
        mpfr_init(r8203952);
        mpfr_init(r8203953);
        mpfr_init(r8203954);
        mpfr_init_set_str(r8203955, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203956, "1", 10, MPFR_RNDN);
        mpfr_init(r8203957);
        mpfr_init(r8203958);
        mpfr_init(r8203959);
        mpfr_init(r8203960);
        mpfr_init(r8203961);
        mpfr_init(r8203962);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8203943, x, MPFR_RNDN);
        mpfr_mul(r8203944, r8203943, r8203943, MPFR_RNDN);
        mpfr_mul(r8203945, r8203942, r8203944, MPFR_RNDN);
        mpfr_add(r8203946, r8203941, r8203945, MPFR_RNDN);
        ;
        mpfr_pow(r8203948, r8203943, r8203947, MPFR_RNDN);
        ;
        mpfr_mul(r8203950, r8203949, r8203943, MPFR_RNDN);
        mpfr_mul(r8203951, r8203948, r8203950, MPFR_RNDN);
        mpfr_pow(r8203952, r8203951, r8203947, MPFR_RNDN);
        mpfr_cbrt(r8203953, r8203952, MPFR_RNDN);
        mpfr_add(r8203954, r8203946, r8203953, MPFR_RNDN);
        ;
        ;
        mpfr_add(r8203957, r8203947, r8203956, MPFR_RNDN);
        mpfr_pow(r8203958, r8203943, r8203957, MPFR_RNDN);
        mpfr_mul(r8203959, r8203958, r8203943, MPFR_RNDN);
        mpfr_mul(r8203960, r8203959, r8203943, MPFR_RNDN);
        mpfr_mul(r8203961, r8203955, r8203960, MPFR_RNDN);
        mpfr_add(r8203962, r8203954, r8203961, MPFR_RNDN);
        return mpfr_get_d(r8203962, MPFR_RNDN);
}

static mpfr_t r8203963, r8203964, r8203965, r8203966, r8203967, r8203968, r8203969, r8203970, r8203971, r8203972, r8203973, r8203974, r8203975, r8203976, r8203977, r8203978, r8203979, r8203980, r8203981, r8203982, r8203983, r8203984;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8203963, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203964, "720.0", 10, MPFR_RNDN);
        mpfr_init(r8203965);
        mpfr_init(r8203966);
        mpfr_init(r8203967);
        mpfr_init(r8203968);
        mpfr_init_set_str(r8203969, "3", 10, MPFR_RNDN);
        mpfr_init(r8203970);
        mpfr_init_set_str(r8203971, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r8203972);
        mpfr_init(r8203973);
        mpfr_init(r8203974);
        mpfr_init(r8203975);
        mpfr_init(r8203976);
        mpfr_init_set_str(r8203977, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203978, "1", 10, MPFR_RNDN);
        mpfr_init(r8203979);
        mpfr_init(r8203980);
        mpfr_init(r8203981);
        mpfr_init(r8203982);
        mpfr_init(r8203983);
        mpfr_init(r8203984);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8203965, x, MPFR_RNDN);
        mpfr_mul(r8203966, r8203965, r8203965, MPFR_RNDN);
        mpfr_mul(r8203967, r8203964, r8203966, MPFR_RNDN);
        mpfr_add(r8203968, r8203963, r8203967, MPFR_RNDN);
        ;
        mpfr_pow(r8203970, r8203965, r8203969, MPFR_RNDN);
        ;
        mpfr_mul(r8203972, r8203971, r8203965, MPFR_RNDN);
        mpfr_mul(r8203973, r8203970, r8203972, MPFR_RNDN);
        mpfr_pow(r8203974, r8203973, r8203969, MPFR_RNDN);
        mpfr_cbrt(r8203975, r8203974, MPFR_RNDN);
        mpfr_add(r8203976, r8203968, r8203975, MPFR_RNDN);
        ;
        ;
        mpfr_add(r8203979, r8203969, r8203978, MPFR_RNDN);
        mpfr_pow(r8203980, r8203965, r8203979, MPFR_RNDN);
        mpfr_mul(r8203981, r8203980, r8203965, MPFR_RNDN);
        mpfr_mul(r8203982, r8203981, r8203965, MPFR_RNDN);
        mpfr_mul(r8203983, r8203977, r8203982, MPFR_RNDN);
        mpfr_add(r8203984, r8203976, r8203983, MPFR_RNDN);
        return mpfr_get_d(r8203984, MPFR_RNDN);
}

