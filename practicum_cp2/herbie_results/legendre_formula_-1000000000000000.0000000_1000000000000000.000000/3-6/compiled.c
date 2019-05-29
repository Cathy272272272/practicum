#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r8031851 = -0.3125;
        float r8031852 = 6.5625;
        float r8031853 = x;
        float r8031854 = r8031853 * r8031853;
        float r8031855 = r8031852 * r8031854;
        float r8031856 = r8031851 + r8031855;
        float r8031857 = -19.6875;
        float r8031858 = r8031854 * r8031853;
        float r8031859 = r8031858 * r8031853;
        float r8031860 = r8031857 * r8031859;
        float r8031861 = r8031856 + r8031860;
        float r8031862 = 14.4375;
        float r8031863 = r8031859 * r8031853;
        float r8031864 = r8031863 * r8031853;
        float r8031865 = r8031862 * r8031864;
        float r8031866 = r8031861 + r8031865;
        return r8031866;
}

double f_id(double x) {
        double r8031867 = -0.3125;
        double r8031868 = 6.5625;
        double r8031869 = x;
        double r8031870 = r8031869 * r8031869;
        double r8031871 = r8031868 * r8031870;
        double r8031872 = r8031867 + r8031871;
        double r8031873 = -19.6875;
        double r8031874 = r8031870 * r8031869;
        double r8031875 = r8031874 * r8031869;
        double r8031876 = r8031873 * r8031875;
        double r8031877 = r8031872 + r8031876;
        double r8031878 = 14.4375;
        double r8031879 = r8031875 * r8031869;
        double r8031880 = r8031879 * r8031869;
        double r8031881 = r8031878 * r8031880;
        double r8031882 = r8031877 + r8031881;
        return r8031882;
}


double f_of(float x) {
        float r8031883 = -0.3125;
        float r8031884 = 6.5625;
        float r8031885 = x;
        float r8031886 = r8031885 * r8031885;
        float r8031887 = r8031884 * r8031886;
        float r8031888 = r8031883 + r8031887;
        float r8031889 = -19.6875;
        float r8031890 = r8031886 * r8031885;
        float r8031891 = r8031890 * r8031885;
        float r8031892 = r8031889 * r8031891;
        float r8031893 = r8031888 + r8031892;
        float r8031894 = 14.4375;
        float r8031895 = 3;
        float r8031896 = pow(r8031885, r8031895);
        float r8031897 = r8031896 * r8031885;
        float r8031898 = r8031897 * r8031885;
        float r8031899 = r8031894 * r8031898;
        float r8031900 = r8031899 * r8031885;
        float r8031901 = r8031893 + r8031900;
        return r8031901;
}

double f_od(double x) {
        double r8031902 = -0.3125;
        double r8031903 = 6.5625;
        double r8031904 = x;
        double r8031905 = r8031904 * r8031904;
        double r8031906 = r8031903 * r8031905;
        double r8031907 = r8031902 + r8031906;
        double r8031908 = -19.6875;
        double r8031909 = r8031905 * r8031904;
        double r8031910 = r8031909 * r8031904;
        double r8031911 = r8031908 * r8031910;
        double r8031912 = r8031907 + r8031911;
        double r8031913 = 14.4375;
        double r8031914 = 3;
        double r8031915 = pow(r8031904, r8031914);
        double r8031916 = r8031915 * r8031904;
        double r8031917 = r8031916 * r8031904;
        double r8031918 = r8031913 * r8031917;
        double r8031919 = r8031918 * r8031904;
        double r8031920 = r8031912 + r8031919;
        return r8031920;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8031921, r8031922, r8031923, r8031924, r8031925, r8031926, r8031927, r8031928, r8031929, r8031930, r8031931, r8031932, r8031933, r8031934, r8031935, r8031936;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8031921, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r8031922, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8031923);
        mpfr_init(r8031924);
        mpfr_init(r8031925);
        mpfr_init(r8031926);
        mpfr_init_set_str(r8031927, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r8031928);
        mpfr_init(r8031929);
        mpfr_init(r8031930);
        mpfr_init(r8031931);
        mpfr_init_set_str(r8031932, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r8031933);
        mpfr_init(r8031934);
        mpfr_init(r8031935);
        mpfr_init(r8031936);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8031923, x, MPFR_RNDN);
        mpfr_mul(r8031924, r8031923, r8031923, MPFR_RNDN);
        mpfr_mul(r8031925, r8031922, r8031924, MPFR_RNDN);
        mpfr_add(r8031926, r8031921, r8031925, MPFR_RNDN);
        ;
        mpfr_mul(r8031928, r8031924, r8031923, MPFR_RNDN);
        mpfr_mul(r8031929, r8031928, r8031923, MPFR_RNDN);
        mpfr_mul(r8031930, r8031927, r8031929, MPFR_RNDN);
        mpfr_add(r8031931, r8031926, r8031930, MPFR_RNDN);
        ;
        mpfr_mul(r8031933, r8031929, r8031923, MPFR_RNDN);
        mpfr_mul(r8031934, r8031933, r8031923, MPFR_RNDN);
        mpfr_mul(r8031935, r8031932, r8031934, MPFR_RNDN);
        mpfr_add(r8031936, r8031931, r8031935, MPFR_RNDN);
        return mpfr_get_d(r8031936, MPFR_RNDN);
}

static mpfr_t r8031937, r8031938, r8031939, r8031940, r8031941, r8031942, r8031943, r8031944, r8031945, r8031946, r8031947, r8031948, r8031949, r8031950, r8031951, r8031952, r8031953, r8031954, r8031955;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8031937, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r8031938, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8031939);
        mpfr_init(r8031940);
        mpfr_init(r8031941);
        mpfr_init(r8031942);
        mpfr_init_set_str(r8031943, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r8031944);
        mpfr_init(r8031945);
        mpfr_init(r8031946);
        mpfr_init(r8031947);
        mpfr_init_set_str(r8031948, "14.4375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8031949, "3", 10, MPFR_RNDN);
        mpfr_init(r8031950);
        mpfr_init(r8031951);
        mpfr_init(r8031952);
        mpfr_init(r8031953);
        mpfr_init(r8031954);
        mpfr_init(r8031955);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8031939, x, MPFR_RNDN);
        mpfr_mul(r8031940, r8031939, r8031939, MPFR_RNDN);
        mpfr_mul(r8031941, r8031938, r8031940, MPFR_RNDN);
        mpfr_add(r8031942, r8031937, r8031941, MPFR_RNDN);
        ;
        mpfr_mul(r8031944, r8031940, r8031939, MPFR_RNDN);
        mpfr_mul(r8031945, r8031944, r8031939, MPFR_RNDN);
        mpfr_mul(r8031946, r8031943, r8031945, MPFR_RNDN);
        mpfr_add(r8031947, r8031942, r8031946, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8031950, r8031939, r8031949, MPFR_RNDN);
        mpfr_mul(r8031951, r8031950, r8031939, MPFR_RNDN);
        mpfr_mul(r8031952, r8031951, r8031939, MPFR_RNDN);
        mpfr_mul(r8031953, r8031948, r8031952, MPFR_RNDN);
        mpfr_mul(r8031954, r8031953, r8031939, MPFR_RNDN);
        mpfr_add(r8031955, r8031947, r8031954, MPFR_RNDN);
        return mpfr_get_d(r8031955, MPFR_RNDN);
}

static mpfr_t r8031956, r8031957, r8031958, r8031959, r8031960, r8031961, r8031962, r8031963, r8031964, r8031965, r8031966, r8031967, r8031968, r8031969, r8031970, r8031971, r8031972, r8031973, r8031974;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8031956, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r8031957, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8031958);
        mpfr_init(r8031959);
        mpfr_init(r8031960);
        mpfr_init(r8031961);
        mpfr_init_set_str(r8031962, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r8031963);
        mpfr_init(r8031964);
        mpfr_init(r8031965);
        mpfr_init(r8031966);
        mpfr_init_set_str(r8031967, "14.4375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8031968, "3", 10, MPFR_RNDN);
        mpfr_init(r8031969);
        mpfr_init(r8031970);
        mpfr_init(r8031971);
        mpfr_init(r8031972);
        mpfr_init(r8031973);
        mpfr_init(r8031974);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8031958, x, MPFR_RNDN);
        mpfr_mul(r8031959, r8031958, r8031958, MPFR_RNDN);
        mpfr_mul(r8031960, r8031957, r8031959, MPFR_RNDN);
        mpfr_add(r8031961, r8031956, r8031960, MPFR_RNDN);
        ;
        mpfr_mul(r8031963, r8031959, r8031958, MPFR_RNDN);
        mpfr_mul(r8031964, r8031963, r8031958, MPFR_RNDN);
        mpfr_mul(r8031965, r8031962, r8031964, MPFR_RNDN);
        mpfr_add(r8031966, r8031961, r8031965, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8031969, r8031958, r8031968, MPFR_RNDN);
        mpfr_mul(r8031970, r8031969, r8031958, MPFR_RNDN);
        mpfr_mul(r8031971, r8031970, r8031958, MPFR_RNDN);
        mpfr_mul(r8031972, r8031967, r8031971, MPFR_RNDN);
        mpfr_mul(r8031973, r8031972, r8031958, MPFR_RNDN);
        mpfr_add(r8031974, r8031966, r8031973, MPFR_RNDN);
        return mpfr_get_d(r8031974, MPFR_RNDN);
}

