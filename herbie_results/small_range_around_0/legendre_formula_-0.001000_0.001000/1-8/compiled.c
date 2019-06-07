#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r4435855 = 0.273438;
        float r4435856 = -9.84375;
        float r4435857 = x;
        float r4435858 = r4435857 * r4435857;
        float r4435859 = r4435856 * r4435858;
        float r4435860 = r4435855 + r4435859;
        float r4435861 = 54.140625;
        float r4435862 = r4435858 * r4435857;
        float r4435863 = r4435862 * r4435857;
        float r4435864 = r4435861 * r4435863;
        float r4435865 = r4435860 + r4435864;
        float r4435866 = -93.84375;
        float r4435867 = r4435863 * r4435857;
        float r4435868 = r4435867 * r4435857;
        float r4435869 = r4435866 * r4435868;
        float r4435870 = r4435865 + r4435869;
        float r4435871 = 50.273438;
        float r4435872 = r4435868 * r4435857;
        float r4435873 = r4435872 * r4435857;
        float r4435874 = r4435871 * r4435873;
        float r4435875 = r4435870 + r4435874;
        return r4435875;
}

double f_id(double x) {
        double r4435876 = 0.273438;
        double r4435877 = -9.84375;
        double r4435878 = x;
        double r4435879 = r4435878 * r4435878;
        double r4435880 = r4435877 * r4435879;
        double r4435881 = r4435876 + r4435880;
        double r4435882 = 54.140625;
        double r4435883 = r4435879 * r4435878;
        double r4435884 = r4435883 * r4435878;
        double r4435885 = r4435882 * r4435884;
        double r4435886 = r4435881 + r4435885;
        double r4435887 = -93.84375;
        double r4435888 = r4435884 * r4435878;
        double r4435889 = r4435888 * r4435878;
        double r4435890 = r4435887 * r4435889;
        double r4435891 = r4435886 + r4435890;
        double r4435892 = 50.273438;
        double r4435893 = r4435889 * r4435878;
        double r4435894 = r4435893 * r4435878;
        double r4435895 = r4435892 * r4435894;
        double r4435896 = r4435891 + r4435895;
        return r4435896;
}


double f_of(float x) {
        float r4435897 = x;
        float r4435898 = 54.140625;
        float r4435899 = r4435897 * r4435898;
        float r4435900 = 3;
        float r4435901 = pow(r4435897, r4435900);
        float r4435902 = r4435899 * r4435901;
        float r4435903 = -9.84375;
        float r4435904 = r4435897 * r4435903;
        float r4435905 = r4435897 * r4435904;
        float r4435906 = r4435902 + r4435905;
        float r4435907 = 0.273438;
        float r4435908 = r4435906 + r4435907;
        float r4435909 = r4435901 * r4435901;
        float r4435910 = -93.84375;
        float r4435911 = 50.273438;
        float r4435912 = r4435911 * r4435897;
        float r4435913 = r4435912 * r4435897;
        float r4435914 = r4435910 + r4435913;
        float r4435915 = r4435909 * r4435914;
        float r4435916 = r4435908 + r4435915;
        return r4435916;
}

double f_od(double x) {
        double r4435917 = x;
        double r4435918 = 54.140625;
        double r4435919 = r4435917 * r4435918;
        double r4435920 = 3;
        double r4435921 = pow(r4435917, r4435920);
        double r4435922 = r4435919 * r4435921;
        double r4435923 = -9.84375;
        double r4435924 = r4435917 * r4435923;
        double r4435925 = r4435917 * r4435924;
        double r4435926 = r4435922 + r4435925;
        double r4435927 = 0.273438;
        double r4435928 = r4435926 + r4435927;
        double r4435929 = r4435921 * r4435921;
        double r4435930 = -93.84375;
        double r4435931 = 50.273438;
        double r4435932 = r4435931 * r4435917;
        double r4435933 = r4435932 * r4435917;
        double r4435934 = r4435930 + r4435933;
        double r4435935 = r4435929 * r4435934;
        double r4435936 = r4435928 + r4435935;
        return r4435936;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4435937, r4435938, r4435939, r4435940, r4435941, r4435942, r4435943, r4435944, r4435945, r4435946, r4435947, r4435948, r4435949, r4435950, r4435951, r4435952, r4435953, r4435954, r4435955, r4435956, r4435957;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4435937, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r4435938, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4435939);
        mpfr_init(r4435940);
        mpfr_init(r4435941);
        mpfr_init(r4435942);
        mpfr_init_set_str(r4435943, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4435944);
        mpfr_init(r4435945);
        mpfr_init(r4435946);
        mpfr_init(r4435947);
        mpfr_init_set_str(r4435948, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r4435949);
        mpfr_init(r4435950);
        mpfr_init(r4435951);
        mpfr_init(r4435952);
        mpfr_init_set_str(r4435953, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4435954);
        mpfr_init(r4435955);
        mpfr_init(r4435956);
        mpfr_init(r4435957);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4435939, x, MPFR_RNDN);
        mpfr_mul(r4435940, r4435939, r4435939, MPFR_RNDN);
        mpfr_mul(r4435941, r4435938, r4435940, MPFR_RNDN);
        mpfr_add(r4435942, r4435937, r4435941, MPFR_RNDN);
        ;
        mpfr_mul(r4435944, r4435940, r4435939, MPFR_RNDN);
        mpfr_mul(r4435945, r4435944, r4435939, MPFR_RNDN);
        mpfr_mul(r4435946, r4435943, r4435945, MPFR_RNDN);
        mpfr_add(r4435947, r4435942, r4435946, MPFR_RNDN);
        ;
        mpfr_mul(r4435949, r4435945, r4435939, MPFR_RNDN);
        mpfr_mul(r4435950, r4435949, r4435939, MPFR_RNDN);
        mpfr_mul(r4435951, r4435948, r4435950, MPFR_RNDN);
        mpfr_add(r4435952, r4435947, r4435951, MPFR_RNDN);
        ;
        mpfr_mul(r4435954, r4435950, r4435939, MPFR_RNDN);
        mpfr_mul(r4435955, r4435954, r4435939, MPFR_RNDN);
        mpfr_mul(r4435956, r4435953, r4435955, MPFR_RNDN);
        mpfr_add(r4435957, r4435952, r4435956, MPFR_RNDN);
        return mpfr_get_d(r4435957, MPFR_RNDN);
}

static mpfr_t r4435958, r4435959, r4435960, r4435961, r4435962, r4435963, r4435964, r4435965, r4435966, r4435967, r4435968, r4435969, r4435970, r4435971, r4435972, r4435973, r4435974, r4435975, r4435976, r4435977;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4435958);
        mpfr_init_set_str(r4435959, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4435960);
        mpfr_init_set_str(r4435961, "3", 10, MPFR_RNDN);
        mpfr_init(r4435962);
        mpfr_init(r4435963);
        mpfr_init_set_str(r4435964, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4435965);
        mpfr_init(r4435966);
        mpfr_init(r4435967);
        mpfr_init_set_str(r4435968, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r4435969);
        mpfr_init(r4435970);
        mpfr_init_set_str(r4435971, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r4435972, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4435973);
        mpfr_init(r4435974);
        mpfr_init(r4435975);
        mpfr_init(r4435976);
        mpfr_init(r4435977);
}

double f_fm(double x) {
        mpfr_set_d(r4435958, x, MPFR_RNDN);
        ;
        mpfr_mul(r4435960, r4435958, r4435959, MPFR_RNDN);
        ;
        mpfr_pow(r4435962, r4435958, r4435961, MPFR_RNDN);
        mpfr_mul(r4435963, r4435960, r4435962, MPFR_RNDN);
        ;
        mpfr_mul(r4435965, r4435958, r4435964, MPFR_RNDN);
        mpfr_mul(r4435966, r4435958, r4435965, MPFR_RNDN);
        mpfr_add(r4435967, r4435963, r4435966, MPFR_RNDN);
        ;
        mpfr_add(r4435969, r4435967, r4435968, MPFR_RNDN);
        mpfr_mul(r4435970, r4435962, r4435962, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4435973, r4435972, r4435958, MPFR_RNDN);
        mpfr_mul(r4435974, r4435973, r4435958, MPFR_RNDN);
        mpfr_add(r4435975, r4435971, r4435974, MPFR_RNDN);
        mpfr_mul(r4435976, r4435970, r4435975, MPFR_RNDN);
        mpfr_add(r4435977, r4435969, r4435976, MPFR_RNDN);
        return mpfr_get_d(r4435977, MPFR_RNDN);
}

static mpfr_t r4435978, r4435979, r4435980, r4435981, r4435982, r4435983, r4435984, r4435985, r4435986, r4435987, r4435988, r4435989, r4435990, r4435991, r4435992, r4435993, r4435994, r4435995, r4435996, r4435997;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4435978);
        mpfr_init_set_str(r4435979, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4435980);
        mpfr_init_set_str(r4435981, "3", 10, MPFR_RNDN);
        mpfr_init(r4435982);
        mpfr_init(r4435983);
        mpfr_init_set_str(r4435984, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4435985);
        mpfr_init(r4435986);
        mpfr_init(r4435987);
        mpfr_init_set_str(r4435988, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r4435989);
        mpfr_init(r4435990);
        mpfr_init_set_str(r4435991, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r4435992, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4435993);
        mpfr_init(r4435994);
        mpfr_init(r4435995);
        mpfr_init(r4435996);
        mpfr_init(r4435997);
}

double f_dm(double x) {
        mpfr_set_d(r4435978, x, MPFR_RNDN);
        ;
        mpfr_mul(r4435980, r4435978, r4435979, MPFR_RNDN);
        ;
        mpfr_pow(r4435982, r4435978, r4435981, MPFR_RNDN);
        mpfr_mul(r4435983, r4435980, r4435982, MPFR_RNDN);
        ;
        mpfr_mul(r4435985, r4435978, r4435984, MPFR_RNDN);
        mpfr_mul(r4435986, r4435978, r4435985, MPFR_RNDN);
        mpfr_add(r4435987, r4435983, r4435986, MPFR_RNDN);
        ;
        mpfr_add(r4435989, r4435987, r4435988, MPFR_RNDN);
        mpfr_mul(r4435990, r4435982, r4435982, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4435993, r4435992, r4435978, MPFR_RNDN);
        mpfr_mul(r4435994, r4435993, r4435978, MPFR_RNDN);
        mpfr_add(r4435995, r4435991, r4435994, MPFR_RNDN);
        mpfr_mul(r4435996, r4435990, r4435995, MPFR_RNDN);
        mpfr_add(r4435997, r4435989, r4435996, MPFR_RNDN);
        return mpfr_get_d(r4435997, MPFR_RNDN);
}

