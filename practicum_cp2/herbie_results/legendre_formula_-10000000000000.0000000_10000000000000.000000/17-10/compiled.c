#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7516805 = -0.246094;
        float r7516806 = 13.535156;
        float r7516807 = x;
        float r7516808 = r7516807 * r7516807;
        float r7516809 = r7516806 * r7516808;
        float r7516810 = r7516805 + r7516809;
        float r7516811 = -117.304688;
        float r7516812 = r7516808 * r7516807;
        float r7516813 = r7516812 * r7516807;
        float r7516814 = r7516811 * r7516813;
        float r7516815 = r7516810 + r7516814;
        float r7516816 = 351.914062;
        float r7516817 = r7516813 * r7516807;
        float r7516818 = r7516817 * r7516807;
        float r7516819 = r7516816 * r7516818;
        float r7516820 = r7516815 + r7516819;
        float r7516821 = -427.324219;
        float r7516822 = r7516818 * r7516807;
        float r7516823 = r7516822 * r7516807;
        float r7516824 = r7516821 * r7516823;
        float r7516825 = r7516820 + r7516824;
        float r7516826 = 180.425781;
        float r7516827 = r7516823 * r7516807;
        float r7516828 = r7516827 * r7516807;
        float r7516829 = r7516826 * r7516828;
        float r7516830 = r7516825 + r7516829;
        return r7516830;
}

double f_id(double x) {
        double r7516831 = -0.246094;
        double r7516832 = 13.535156;
        double r7516833 = x;
        double r7516834 = r7516833 * r7516833;
        double r7516835 = r7516832 * r7516834;
        double r7516836 = r7516831 + r7516835;
        double r7516837 = -117.304688;
        double r7516838 = r7516834 * r7516833;
        double r7516839 = r7516838 * r7516833;
        double r7516840 = r7516837 * r7516839;
        double r7516841 = r7516836 + r7516840;
        double r7516842 = 351.914062;
        double r7516843 = r7516839 * r7516833;
        double r7516844 = r7516843 * r7516833;
        double r7516845 = r7516842 * r7516844;
        double r7516846 = r7516841 + r7516845;
        double r7516847 = -427.324219;
        double r7516848 = r7516844 * r7516833;
        double r7516849 = r7516848 * r7516833;
        double r7516850 = r7516847 * r7516849;
        double r7516851 = r7516846 + r7516850;
        double r7516852 = 180.425781;
        double r7516853 = r7516849 * r7516833;
        double r7516854 = r7516853 * r7516833;
        double r7516855 = r7516852 * r7516854;
        double r7516856 = r7516851 + r7516855;
        return r7516856;
}


double f_of(float x) {
        float r7516857 = x;
        float r7516858 = 13.535156;
        float r7516859 = r7516858 * r7516857;
        float r7516860 = r7516857 * r7516859;
        float r7516861 = 6;
        float r7516862 = pow(r7516857, r7516861);
        float r7516863 = 351.914062;
        float r7516864 = r7516862 * r7516863;
        float r7516865 = r7516860 + r7516864;
        float r7516866 = 117.304688;
        float r7516867 = 4;
        float r7516868 = pow(r7516857, r7516867);
        float r7516869 = r7516866 * r7516868;
        float r7516870 = -0.246094;
        float r7516871 = r7516869 - r7516870;
        float r7516872 = r7516865 - r7516871;
        float r7516873 = r7516857 * r7516857;
        float r7516874 = 3;
        float r7516875 = 1;
        float r7516876 = r7516874 + r7516875;
        float r7516877 = pow(r7516873, r7516876);
        float r7516878 = 180.425781;
        float r7516879 = r7516878 * r7516857;
        float r7516880 = r7516857 * r7516879;
        float r7516881 = -427.324219;
        float r7516882 = r7516880 + r7516881;
        float r7516883 = r7516877 * r7516882;
        float r7516884 = r7516872 + r7516883;
        return r7516884;
}

double f_od(double x) {
        double r7516885 = x;
        double r7516886 = 13.535156;
        double r7516887 = r7516886 * r7516885;
        double r7516888 = r7516885 * r7516887;
        double r7516889 = 6;
        double r7516890 = pow(r7516885, r7516889);
        double r7516891 = 351.914062;
        double r7516892 = r7516890 * r7516891;
        double r7516893 = r7516888 + r7516892;
        double r7516894 = 117.304688;
        double r7516895 = 4;
        double r7516896 = pow(r7516885, r7516895);
        double r7516897 = r7516894 * r7516896;
        double r7516898 = -0.246094;
        double r7516899 = r7516897 - r7516898;
        double r7516900 = r7516893 - r7516899;
        double r7516901 = r7516885 * r7516885;
        double r7516902 = 3;
        double r7516903 = 1;
        double r7516904 = r7516902 + r7516903;
        double r7516905 = pow(r7516901, r7516904);
        double r7516906 = 180.425781;
        double r7516907 = r7516906 * r7516885;
        double r7516908 = r7516885 * r7516907;
        double r7516909 = -427.324219;
        double r7516910 = r7516908 + r7516909;
        double r7516911 = r7516905 * r7516910;
        double r7516912 = r7516900 + r7516911;
        return r7516912;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7516913, r7516914, r7516915, r7516916, r7516917, r7516918, r7516919, r7516920, r7516921, r7516922, r7516923, r7516924, r7516925, r7516926, r7516927, r7516928, r7516929, r7516930, r7516931, r7516932, r7516933, r7516934, r7516935, r7516936, r7516937, r7516938;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7516913, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516914, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7516915);
        mpfr_init(r7516916);
        mpfr_init(r7516917);
        mpfr_init(r7516918);
        mpfr_init_set_str(r7516919, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r7516920);
        mpfr_init(r7516921);
        mpfr_init(r7516922);
        mpfr_init(r7516923);
        mpfr_init_set_str(r7516924, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7516925);
        mpfr_init(r7516926);
        mpfr_init(r7516927);
        mpfr_init(r7516928);
        mpfr_init_set_str(r7516929, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7516930);
        mpfr_init(r7516931);
        mpfr_init(r7516932);
        mpfr_init(r7516933);
        mpfr_init_set_str(r7516934, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7516935);
        mpfr_init(r7516936);
        mpfr_init(r7516937);
        mpfr_init(r7516938);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7516915, x, MPFR_RNDN);
        mpfr_mul(r7516916, r7516915, r7516915, MPFR_RNDN);
        mpfr_mul(r7516917, r7516914, r7516916, MPFR_RNDN);
        mpfr_add(r7516918, r7516913, r7516917, MPFR_RNDN);
        ;
        mpfr_mul(r7516920, r7516916, r7516915, MPFR_RNDN);
        mpfr_mul(r7516921, r7516920, r7516915, MPFR_RNDN);
        mpfr_mul(r7516922, r7516919, r7516921, MPFR_RNDN);
        mpfr_add(r7516923, r7516918, r7516922, MPFR_RNDN);
        ;
        mpfr_mul(r7516925, r7516921, r7516915, MPFR_RNDN);
        mpfr_mul(r7516926, r7516925, r7516915, MPFR_RNDN);
        mpfr_mul(r7516927, r7516924, r7516926, MPFR_RNDN);
        mpfr_add(r7516928, r7516923, r7516927, MPFR_RNDN);
        ;
        mpfr_mul(r7516930, r7516926, r7516915, MPFR_RNDN);
        mpfr_mul(r7516931, r7516930, r7516915, MPFR_RNDN);
        mpfr_mul(r7516932, r7516929, r7516931, MPFR_RNDN);
        mpfr_add(r7516933, r7516928, r7516932, MPFR_RNDN);
        ;
        mpfr_mul(r7516935, r7516931, r7516915, MPFR_RNDN);
        mpfr_mul(r7516936, r7516935, r7516915, MPFR_RNDN);
        mpfr_mul(r7516937, r7516934, r7516936, MPFR_RNDN);
        mpfr_add(r7516938, r7516933, r7516937, MPFR_RNDN);
        return mpfr_get_d(r7516938, MPFR_RNDN);
}

static mpfr_t r7516939, r7516940, r7516941, r7516942, r7516943, r7516944, r7516945, r7516946, r7516947, r7516948, r7516949, r7516950, r7516951, r7516952, r7516953, r7516954, r7516955, r7516956, r7516957, r7516958, r7516959, r7516960, r7516961, r7516962, r7516963, r7516964, r7516965, r7516966;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7516939);
        mpfr_init_set_str(r7516940, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7516941);
        mpfr_init(r7516942);
        mpfr_init_set_str(r7516943, "6", 10, MPFR_RNDN);
        mpfr_init(r7516944);
        mpfr_init_set_str(r7516945, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7516946);
        mpfr_init(r7516947);
        mpfr_init_set_str(r7516948, "117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516949, "4", 10, MPFR_RNDN);
        mpfr_init(r7516950);
        mpfr_init(r7516951);
        mpfr_init_set_str(r7516952, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r7516953);
        mpfr_init(r7516954);
        mpfr_init(r7516955);
        mpfr_init_set_str(r7516956, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516957, "1", 10, MPFR_RNDN);
        mpfr_init(r7516958);
        mpfr_init(r7516959);
        mpfr_init_set_str(r7516960, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7516961);
        mpfr_init(r7516962);
        mpfr_init_set_str(r7516963, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7516964);
        mpfr_init(r7516965);
        mpfr_init(r7516966);
}

double f_fm(double x) {
        mpfr_set_d(r7516939, x, MPFR_RNDN);
        ;
        mpfr_mul(r7516941, r7516940, r7516939, MPFR_RNDN);
        mpfr_mul(r7516942, r7516939, r7516941, MPFR_RNDN);
        ;
        mpfr_pow(r7516944, r7516939, r7516943, MPFR_RNDN);
        ;
        mpfr_mul(r7516946, r7516944, r7516945, MPFR_RNDN);
        mpfr_add(r7516947, r7516942, r7516946, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7516950, r7516939, r7516949, MPFR_RNDN);
        mpfr_mul(r7516951, r7516948, r7516950, MPFR_RNDN);
        ;
        mpfr_sub(r7516953, r7516951, r7516952, MPFR_RNDN);
        mpfr_sub(r7516954, r7516947, r7516953, MPFR_RNDN);
        mpfr_mul(r7516955, r7516939, r7516939, MPFR_RNDN);
        ;
        ;
        mpfr_add(r7516958, r7516956, r7516957, MPFR_RNDN);
        mpfr_pow(r7516959, r7516955, r7516958, MPFR_RNDN);
        ;
        mpfr_mul(r7516961, r7516960, r7516939, MPFR_RNDN);
        mpfr_mul(r7516962, r7516939, r7516961, MPFR_RNDN);
        ;
        mpfr_add(r7516964, r7516962, r7516963, MPFR_RNDN);
        mpfr_mul(r7516965, r7516959, r7516964, MPFR_RNDN);
        mpfr_add(r7516966, r7516954, r7516965, MPFR_RNDN);
        return mpfr_get_d(r7516966, MPFR_RNDN);
}

static mpfr_t r7516967, r7516968, r7516969, r7516970, r7516971, r7516972, r7516973, r7516974, r7516975, r7516976, r7516977, r7516978, r7516979, r7516980, r7516981, r7516982, r7516983, r7516984, r7516985, r7516986, r7516987, r7516988, r7516989, r7516990, r7516991, r7516992, r7516993, r7516994;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7516967);
        mpfr_init_set_str(r7516968, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7516969);
        mpfr_init(r7516970);
        mpfr_init_set_str(r7516971, "6", 10, MPFR_RNDN);
        mpfr_init(r7516972);
        mpfr_init_set_str(r7516973, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7516974);
        mpfr_init(r7516975);
        mpfr_init_set_str(r7516976, "117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516977, "4", 10, MPFR_RNDN);
        mpfr_init(r7516978);
        mpfr_init(r7516979);
        mpfr_init_set_str(r7516980, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r7516981);
        mpfr_init(r7516982);
        mpfr_init(r7516983);
        mpfr_init_set_str(r7516984, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516985, "1", 10, MPFR_RNDN);
        mpfr_init(r7516986);
        mpfr_init(r7516987);
        mpfr_init_set_str(r7516988, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7516989);
        mpfr_init(r7516990);
        mpfr_init_set_str(r7516991, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7516992);
        mpfr_init(r7516993);
        mpfr_init(r7516994);
}

double f_dm(double x) {
        mpfr_set_d(r7516967, x, MPFR_RNDN);
        ;
        mpfr_mul(r7516969, r7516968, r7516967, MPFR_RNDN);
        mpfr_mul(r7516970, r7516967, r7516969, MPFR_RNDN);
        ;
        mpfr_pow(r7516972, r7516967, r7516971, MPFR_RNDN);
        ;
        mpfr_mul(r7516974, r7516972, r7516973, MPFR_RNDN);
        mpfr_add(r7516975, r7516970, r7516974, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7516978, r7516967, r7516977, MPFR_RNDN);
        mpfr_mul(r7516979, r7516976, r7516978, MPFR_RNDN);
        ;
        mpfr_sub(r7516981, r7516979, r7516980, MPFR_RNDN);
        mpfr_sub(r7516982, r7516975, r7516981, MPFR_RNDN);
        mpfr_mul(r7516983, r7516967, r7516967, MPFR_RNDN);
        ;
        ;
        mpfr_add(r7516986, r7516984, r7516985, MPFR_RNDN);
        mpfr_pow(r7516987, r7516983, r7516986, MPFR_RNDN);
        ;
        mpfr_mul(r7516989, r7516988, r7516967, MPFR_RNDN);
        mpfr_mul(r7516990, r7516967, r7516989, MPFR_RNDN);
        ;
        mpfr_add(r7516992, r7516990, r7516991, MPFR_RNDN);
        mpfr_mul(r7516993, r7516987, r7516992, MPFR_RNDN);
        mpfr_add(r7516994, r7516982, r7516993, MPFR_RNDN);
        return mpfr_get_d(r7516994, MPFR_RNDN);
}

