#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r5022815 = -0.246094;
        float r5022816 = 13.535156;
        float r5022817 = x;
        float r5022818 = r5022817 * r5022817;
        float r5022819 = r5022816 * r5022818;
        float r5022820 = r5022815 + r5022819;
        float r5022821 = -117.304688;
        float r5022822 = r5022818 * r5022817;
        float r5022823 = r5022822 * r5022817;
        float r5022824 = r5022821 * r5022823;
        float r5022825 = r5022820 + r5022824;
        float r5022826 = 351.914062;
        float r5022827 = r5022823 * r5022817;
        float r5022828 = r5022827 * r5022817;
        float r5022829 = r5022826 * r5022828;
        float r5022830 = r5022825 + r5022829;
        float r5022831 = -427.324219;
        float r5022832 = r5022828 * r5022817;
        float r5022833 = r5022832 * r5022817;
        float r5022834 = r5022831 * r5022833;
        float r5022835 = r5022830 + r5022834;
        float r5022836 = 180.425781;
        float r5022837 = r5022833 * r5022817;
        float r5022838 = r5022837 * r5022817;
        float r5022839 = r5022836 * r5022838;
        float r5022840 = r5022835 + r5022839;
        return r5022840;
}

double f_id(double x) {
        double r5022841 = -0.246094;
        double r5022842 = 13.535156;
        double r5022843 = x;
        double r5022844 = r5022843 * r5022843;
        double r5022845 = r5022842 * r5022844;
        double r5022846 = r5022841 + r5022845;
        double r5022847 = -117.304688;
        double r5022848 = r5022844 * r5022843;
        double r5022849 = r5022848 * r5022843;
        double r5022850 = r5022847 * r5022849;
        double r5022851 = r5022846 + r5022850;
        double r5022852 = 351.914062;
        double r5022853 = r5022849 * r5022843;
        double r5022854 = r5022853 * r5022843;
        double r5022855 = r5022852 * r5022854;
        double r5022856 = r5022851 + r5022855;
        double r5022857 = -427.324219;
        double r5022858 = r5022854 * r5022843;
        double r5022859 = r5022858 * r5022843;
        double r5022860 = r5022857 * r5022859;
        double r5022861 = r5022856 + r5022860;
        double r5022862 = 180.425781;
        double r5022863 = r5022859 * r5022843;
        double r5022864 = r5022863 * r5022843;
        double r5022865 = r5022862 * r5022864;
        double r5022866 = r5022861 + r5022865;
        return r5022866;
}


double f_of(float x) {
        float r5022867 = -0.246094;
        float r5022868 = 13.535156;
        float r5022869 = x;
        float r5022870 = r5022869 * r5022869;
        float r5022871 = r5022868 * r5022870;
        float r5022872 = r5022867 + r5022871;
        float r5022873 = -117.304688;
        float r5022874 = r5022870 * r5022869;
        float r5022875 = r5022874 * r5022869;
        float r5022876 = r5022873 * r5022875;
        float r5022877 = r5022872 + r5022876;
        float r5022878 = 351.914062;
        float r5022879 = r5022875 * r5022869;
        float r5022880 = r5022879 * r5022869;
        float r5022881 = r5022878 * r5022880;
        float r5022882 = r5022877 + r5022881;
        float r5022883 = -427.324219;
        float r5022884 = r5022880 * r5022869;
        float r5022885 = r5022884 * r5022869;
        float r5022886 = r5022883 * r5022885;
        float r5022887 = r5022882 + r5022886;
        float r5022888 = 180.425781;
        float r5022889 = r5022885 * r5022869;
        float r5022890 = r5022889 * r5022869;
        float r5022891 = r5022888 * r5022890;
        float r5022892 = r5022887 + r5022891;
        return r5022892;
}

double f_od(double x) {
        double r5022893 = -0.246094;
        double r5022894 = 13.535156;
        double r5022895 = x;
        double r5022896 = r5022895 * r5022895;
        double r5022897 = r5022894 * r5022896;
        double r5022898 = r5022893 + r5022897;
        double r5022899 = -117.304688;
        double r5022900 = r5022896 * r5022895;
        double r5022901 = r5022900 * r5022895;
        double r5022902 = r5022899 * r5022901;
        double r5022903 = r5022898 + r5022902;
        double r5022904 = 351.914062;
        double r5022905 = r5022901 * r5022895;
        double r5022906 = r5022905 * r5022895;
        double r5022907 = r5022904 * r5022906;
        double r5022908 = r5022903 + r5022907;
        double r5022909 = -427.324219;
        double r5022910 = r5022906 * r5022895;
        double r5022911 = r5022910 * r5022895;
        double r5022912 = r5022909 * r5022911;
        double r5022913 = r5022908 + r5022912;
        double r5022914 = 180.425781;
        double r5022915 = r5022911 * r5022895;
        double r5022916 = r5022915 * r5022895;
        double r5022917 = r5022914 * r5022916;
        double r5022918 = r5022913 + r5022917;
        return r5022918;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5022919, r5022920, r5022921, r5022922, r5022923, r5022924, r5022925, r5022926, r5022927, r5022928, r5022929, r5022930, r5022931, r5022932, r5022933, r5022934, r5022935, r5022936, r5022937, r5022938, r5022939, r5022940, r5022941, r5022942, r5022943, r5022944;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5022919, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r5022920, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r5022921);
        mpfr_init(r5022922);
        mpfr_init(r5022923);
        mpfr_init(r5022924);
        mpfr_init_set_str(r5022925, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r5022926);
        mpfr_init(r5022927);
        mpfr_init(r5022928);
        mpfr_init(r5022929);
        mpfr_init_set_str(r5022930, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r5022931);
        mpfr_init(r5022932);
        mpfr_init(r5022933);
        mpfr_init(r5022934);
        mpfr_init_set_str(r5022935, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r5022936);
        mpfr_init(r5022937);
        mpfr_init(r5022938);
        mpfr_init(r5022939);
        mpfr_init_set_str(r5022940, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r5022941);
        mpfr_init(r5022942);
        mpfr_init(r5022943);
        mpfr_init(r5022944);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5022921, x, MPFR_RNDN);
        mpfr_mul(r5022922, r5022921, r5022921, MPFR_RNDN);
        mpfr_mul(r5022923, r5022920, r5022922, MPFR_RNDN);
        mpfr_add(r5022924, r5022919, r5022923, MPFR_RNDN);
        ;
        mpfr_mul(r5022926, r5022922, r5022921, MPFR_RNDN);
        mpfr_mul(r5022927, r5022926, r5022921, MPFR_RNDN);
        mpfr_mul(r5022928, r5022925, r5022927, MPFR_RNDN);
        mpfr_add(r5022929, r5022924, r5022928, MPFR_RNDN);
        ;
        mpfr_mul(r5022931, r5022927, r5022921, MPFR_RNDN);
        mpfr_mul(r5022932, r5022931, r5022921, MPFR_RNDN);
        mpfr_mul(r5022933, r5022930, r5022932, MPFR_RNDN);
        mpfr_add(r5022934, r5022929, r5022933, MPFR_RNDN);
        ;
        mpfr_mul(r5022936, r5022932, r5022921, MPFR_RNDN);
        mpfr_mul(r5022937, r5022936, r5022921, MPFR_RNDN);
        mpfr_mul(r5022938, r5022935, r5022937, MPFR_RNDN);
        mpfr_add(r5022939, r5022934, r5022938, MPFR_RNDN);
        ;
        mpfr_mul(r5022941, r5022937, r5022921, MPFR_RNDN);
        mpfr_mul(r5022942, r5022941, r5022921, MPFR_RNDN);
        mpfr_mul(r5022943, r5022940, r5022942, MPFR_RNDN);
        mpfr_add(r5022944, r5022939, r5022943, MPFR_RNDN);
        return mpfr_get_d(r5022944, MPFR_RNDN);
}

static mpfr_t r5022945, r5022946, r5022947, r5022948, r5022949, r5022950, r5022951, r5022952, r5022953, r5022954, r5022955, r5022956, r5022957, r5022958, r5022959, r5022960, r5022961, r5022962, r5022963, r5022964, r5022965, r5022966, r5022967, r5022968, r5022969, r5022970;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5022945, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r5022946, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r5022947);
        mpfr_init(r5022948);
        mpfr_init(r5022949);
        mpfr_init(r5022950);
        mpfr_init_set_str(r5022951, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r5022952);
        mpfr_init(r5022953);
        mpfr_init(r5022954);
        mpfr_init(r5022955);
        mpfr_init_set_str(r5022956, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r5022957);
        mpfr_init(r5022958);
        mpfr_init(r5022959);
        mpfr_init(r5022960);
        mpfr_init_set_str(r5022961, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r5022962);
        mpfr_init(r5022963);
        mpfr_init(r5022964);
        mpfr_init(r5022965);
        mpfr_init_set_str(r5022966, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r5022967);
        mpfr_init(r5022968);
        mpfr_init(r5022969);
        mpfr_init(r5022970);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5022947, x, MPFR_RNDN);
        mpfr_mul(r5022948, r5022947, r5022947, MPFR_RNDN);
        mpfr_mul(r5022949, r5022946, r5022948, MPFR_RNDN);
        mpfr_add(r5022950, r5022945, r5022949, MPFR_RNDN);
        ;
        mpfr_mul(r5022952, r5022948, r5022947, MPFR_RNDN);
        mpfr_mul(r5022953, r5022952, r5022947, MPFR_RNDN);
        mpfr_mul(r5022954, r5022951, r5022953, MPFR_RNDN);
        mpfr_add(r5022955, r5022950, r5022954, MPFR_RNDN);
        ;
        mpfr_mul(r5022957, r5022953, r5022947, MPFR_RNDN);
        mpfr_mul(r5022958, r5022957, r5022947, MPFR_RNDN);
        mpfr_mul(r5022959, r5022956, r5022958, MPFR_RNDN);
        mpfr_add(r5022960, r5022955, r5022959, MPFR_RNDN);
        ;
        mpfr_mul(r5022962, r5022958, r5022947, MPFR_RNDN);
        mpfr_mul(r5022963, r5022962, r5022947, MPFR_RNDN);
        mpfr_mul(r5022964, r5022961, r5022963, MPFR_RNDN);
        mpfr_add(r5022965, r5022960, r5022964, MPFR_RNDN);
        ;
        mpfr_mul(r5022967, r5022963, r5022947, MPFR_RNDN);
        mpfr_mul(r5022968, r5022967, r5022947, MPFR_RNDN);
        mpfr_mul(r5022969, r5022966, r5022968, MPFR_RNDN);
        mpfr_add(r5022970, r5022965, r5022969, MPFR_RNDN);
        return mpfr_get_d(r5022970, MPFR_RNDN);
}

static mpfr_t r5022971, r5022972, r5022973, r5022974, r5022975, r5022976, r5022977, r5022978, r5022979, r5022980, r5022981, r5022982, r5022983, r5022984, r5022985, r5022986, r5022987, r5022988, r5022989, r5022990, r5022991, r5022992, r5022993, r5022994, r5022995, r5022996;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5022971, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r5022972, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r5022973);
        mpfr_init(r5022974);
        mpfr_init(r5022975);
        mpfr_init(r5022976);
        mpfr_init_set_str(r5022977, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r5022978);
        mpfr_init(r5022979);
        mpfr_init(r5022980);
        mpfr_init(r5022981);
        mpfr_init_set_str(r5022982, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r5022983);
        mpfr_init(r5022984);
        mpfr_init(r5022985);
        mpfr_init(r5022986);
        mpfr_init_set_str(r5022987, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r5022988);
        mpfr_init(r5022989);
        mpfr_init(r5022990);
        mpfr_init(r5022991);
        mpfr_init_set_str(r5022992, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r5022993);
        mpfr_init(r5022994);
        mpfr_init(r5022995);
        mpfr_init(r5022996);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5022973, x, MPFR_RNDN);
        mpfr_mul(r5022974, r5022973, r5022973, MPFR_RNDN);
        mpfr_mul(r5022975, r5022972, r5022974, MPFR_RNDN);
        mpfr_add(r5022976, r5022971, r5022975, MPFR_RNDN);
        ;
        mpfr_mul(r5022978, r5022974, r5022973, MPFR_RNDN);
        mpfr_mul(r5022979, r5022978, r5022973, MPFR_RNDN);
        mpfr_mul(r5022980, r5022977, r5022979, MPFR_RNDN);
        mpfr_add(r5022981, r5022976, r5022980, MPFR_RNDN);
        ;
        mpfr_mul(r5022983, r5022979, r5022973, MPFR_RNDN);
        mpfr_mul(r5022984, r5022983, r5022973, MPFR_RNDN);
        mpfr_mul(r5022985, r5022982, r5022984, MPFR_RNDN);
        mpfr_add(r5022986, r5022981, r5022985, MPFR_RNDN);
        ;
        mpfr_mul(r5022988, r5022984, r5022973, MPFR_RNDN);
        mpfr_mul(r5022989, r5022988, r5022973, MPFR_RNDN);
        mpfr_mul(r5022990, r5022987, r5022989, MPFR_RNDN);
        mpfr_add(r5022991, r5022986, r5022990, MPFR_RNDN);
        ;
        mpfr_mul(r5022993, r5022989, r5022973, MPFR_RNDN);
        mpfr_mul(r5022994, r5022993, r5022973, MPFR_RNDN);
        mpfr_mul(r5022995, r5022992, r5022994, MPFR_RNDN);
        mpfr_add(r5022996, r5022991, r5022995, MPFR_RNDN);
        return mpfr_get_d(r5022996, MPFR_RNDN);
}

