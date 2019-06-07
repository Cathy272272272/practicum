#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r8206799 = -30240.0;
        float r8206800 = 302400.0;
        float r8206801 = x;
        float r8206802 = r8206801 * r8206801;
        float r8206803 = r8206800 * r8206802;
        float r8206804 = r8206799 + r8206803;
        float r8206805 = -403200.0;
        float r8206806 = r8206802 * r8206801;
        float r8206807 = r8206806 * r8206801;
        float r8206808 = r8206805 * r8206807;
        float r8206809 = r8206804 + r8206808;
        float r8206810 = 161280.0;
        float r8206811 = r8206807 * r8206801;
        float r8206812 = r8206811 * r8206801;
        float r8206813 = r8206810 * r8206812;
        float r8206814 = r8206809 + r8206813;
        float r8206815 = -23040.0;
        float r8206816 = r8206812 * r8206801;
        float r8206817 = r8206816 * r8206801;
        float r8206818 = r8206815 * r8206817;
        float r8206819 = r8206814 + r8206818;
        float r8206820 = 1024.0;
        float r8206821 = r8206817 * r8206801;
        float r8206822 = r8206821 * r8206801;
        float r8206823 = r8206820 * r8206822;
        float r8206824 = r8206819 + r8206823;
        return r8206824;
}

double f_id(double x) {
        double r8206825 = -30240.0;
        double r8206826 = 302400.0;
        double r8206827 = x;
        double r8206828 = r8206827 * r8206827;
        double r8206829 = r8206826 * r8206828;
        double r8206830 = r8206825 + r8206829;
        double r8206831 = -403200.0;
        double r8206832 = r8206828 * r8206827;
        double r8206833 = r8206832 * r8206827;
        double r8206834 = r8206831 * r8206833;
        double r8206835 = r8206830 + r8206834;
        double r8206836 = 161280.0;
        double r8206837 = r8206833 * r8206827;
        double r8206838 = r8206837 * r8206827;
        double r8206839 = r8206836 * r8206838;
        double r8206840 = r8206835 + r8206839;
        double r8206841 = -23040.0;
        double r8206842 = r8206838 * r8206827;
        double r8206843 = r8206842 * r8206827;
        double r8206844 = r8206841 * r8206843;
        double r8206845 = r8206840 + r8206844;
        double r8206846 = 1024.0;
        double r8206847 = r8206843 * r8206827;
        double r8206848 = r8206847 * r8206827;
        double r8206849 = r8206846 * r8206848;
        double r8206850 = r8206845 + r8206849;
        return r8206850;
}


double f_of(float x) {
        float r8206851 = -30240.0;
        float r8206852 = 302400.0;
        float r8206853 = x;
        float r8206854 = r8206853 * r8206853;
        float r8206855 = r8206852 * r8206854;
        float r8206856 = cbrt(r8206855);
        float r8206857 = r8206856 * r8206856;
        float r8206858 = r8206857 * r8206856;
        float r8206859 = r8206851 + r8206858;
        float r8206860 = -403200.0;
        float r8206861 = r8206854 * r8206853;
        float r8206862 = r8206861 * r8206853;
        float r8206863 = r8206860 * r8206862;
        float r8206864 = r8206859 + r8206863;
        float r8206865 = 161280.0;
        float r8206866 = r8206862 * r8206853;
        float r8206867 = r8206866 * r8206853;
        float r8206868 = r8206865 * r8206867;
        float r8206869 = r8206864 + r8206868;
        float r8206870 = -23040.0;
        float r8206871 = r8206867 * r8206853;
        float r8206872 = r8206871 * r8206853;
        float r8206873 = r8206870 * r8206872;
        float r8206874 = r8206869 + r8206873;
        float r8206875 = 1024.0;
        float r8206876 = r8206872 * r8206853;
        float r8206877 = r8206876 * r8206853;
        float r8206878 = r8206875 * r8206877;
        float r8206879 = r8206874 + r8206878;
        return r8206879;
}

double f_od(double x) {
        double r8206880 = -30240.0;
        double r8206881 = 302400.0;
        double r8206882 = x;
        double r8206883 = r8206882 * r8206882;
        double r8206884 = r8206881 * r8206883;
        double r8206885 = cbrt(r8206884);
        double r8206886 = r8206885 * r8206885;
        double r8206887 = r8206886 * r8206885;
        double r8206888 = r8206880 + r8206887;
        double r8206889 = -403200.0;
        double r8206890 = r8206883 * r8206882;
        double r8206891 = r8206890 * r8206882;
        double r8206892 = r8206889 * r8206891;
        double r8206893 = r8206888 + r8206892;
        double r8206894 = 161280.0;
        double r8206895 = r8206891 * r8206882;
        double r8206896 = r8206895 * r8206882;
        double r8206897 = r8206894 * r8206896;
        double r8206898 = r8206893 + r8206897;
        double r8206899 = -23040.0;
        double r8206900 = r8206896 * r8206882;
        double r8206901 = r8206900 * r8206882;
        double r8206902 = r8206899 * r8206901;
        double r8206903 = r8206898 + r8206902;
        double r8206904 = 1024.0;
        double r8206905 = r8206901 * r8206882;
        double r8206906 = r8206905 * r8206882;
        double r8206907 = r8206904 * r8206906;
        double r8206908 = r8206903 + r8206907;
        return r8206908;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8206909, r8206910, r8206911, r8206912, r8206913, r8206914, r8206915, r8206916, r8206917, r8206918, r8206919, r8206920, r8206921, r8206922, r8206923, r8206924, r8206925, r8206926, r8206927, r8206928, r8206929, r8206930, r8206931, r8206932, r8206933, r8206934;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8206909, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8206910, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r8206911);
        mpfr_init(r8206912);
        mpfr_init(r8206913);
        mpfr_init(r8206914);
        mpfr_init_set_str(r8206915, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r8206916);
        mpfr_init(r8206917);
        mpfr_init(r8206918);
        mpfr_init(r8206919);
        mpfr_init_set_str(r8206920, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r8206921);
        mpfr_init(r8206922);
        mpfr_init(r8206923);
        mpfr_init(r8206924);
        mpfr_init_set_str(r8206925, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r8206926);
        mpfr_init(r8206927);
        mpfr_init(r8206928);
        mpfr_init(r8206929);
        mpfr_init_set_str(r8206930, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r8206931);
        mpfr_init(r8206932);
        mpfr_init(r8206933);
        mpfr_init(r8206934);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8206911, x, MPFR_RNDN);
        mpfr_mul(r8206912, r8206911, r8206911, MPFR_RNDN);
        mpfr_mul(r8206913, r8206910, r8206912, MPFR_RNDN);
        mpfr_add(r8206914, r8206909, r8206913, MPFR_RNDN);
        ;
        mpfr_mul(r8206916, r8206912, r8206911, MPFR_RNDN);
        mpfr_mul(r8206917, r8206916, r8206911, MPFR_RNDN);
        mpfr_mul(r8206918, r8206915, r8206917, MPFR_RNDN);
        mpfr_add(r8206919, r8206914, r8206918, MPFR_RNDN);
        ;
        mpfr_mul(r8206921, r8206917, r8206911, MPFR_RNDN);
        mpfr_mul(r8206922, r8206921, r8206911, MPFR_RNDN);
        mpfr_mul(r8206923, r8206920, r8206922, MPFR_RNDN);
        mpfr_add(r8206924, r8206919, r8206923, MPFR_RNDN);
        ;
        mpfr_mul(r8206926, r8206922, r8206911, MPFR_RNDN);
        mpfr_mul(r8206927, r8206926, r8206911, MPFR_RNDN);
        mpfr_mul(r8206928, r8206925, r8206927, MPFR_RNDN);
        mpfr_add(r8206929, r8206924, r8206928, MPFR_RNDN);
        ;
        mpfr_mul(r8206931, r8206927, r8206911, MPFR_RNDN);
        mpfr_mul(r8206932, r8206931, r8206911, MPFR_RNDN);
        mpfr_mul(r8206933, r8206930, r8206932, MPFR_RNDN);
        mpfr_add(r8206934, r8206929, r8206933, MPFR_RNDN);
        return mpfr_get_d(r8206934, MPFR_RNDN);
}

static mpfr_t r8206935, r8206936, r8206937, r8206938, r8206939, r8206940, r8206941, r8206942, r8206943, r8206944, r8206945, r8206946, r8206947, r8206948, r8206949, r8206950, r8206951, r8206952, r8206953, r8206954, r8206955, r8206956, r8206957, r8206958, r8206959, r8206960, r8206961, r8206962, r8206963;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8206935, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8206936, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r8206937);
        mpfr_init(r8206938);
        mpfr_init(r8206939);
        mpfr_init(r8206940);
        mpfr_init(r8206941);
        mpfr_init(r8206942);
        mpfr_init(r8206943);
        mpfr_init_set_str(r8206944, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r8206945);
        mpfr_init(r8206946);
        mpfr_init(r8206947);
        mpfr_init(r8206948);
        mpfr_init_set_str(r8206949, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r8206950);
        mpfr_init(r8206951);
        mpfr_init(r8206952);
        mpfr_init(r8206953);
        mpfr_init_set_str(r8206954, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r8206955);
        mpfr_init(r8206956);
        mpfr_init(r8206957);
        mpfr_init(r8206958);
        mpfr_init_set_str(r8206959, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r8206960);
        mpfr_init(r8206961);
        mpfr_init(r8206962);
        mpfr_init(r8206963);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8206937, x, MPFR_RNDN);
        mpfr_mul(r8206938, r8206937, r8206937, MPFR_RNDN);
        mpfr_mul(r8206939, r8206936, r8206938, MPFR_RNDN);
        mpfr_cbrt(r8206940, r8206939, MPFR_RNDN);
        mpfr_mul(r8206941, r8206940, r8206940, MPFR_RNDN);
        mpfr_mul(r8206942, r8206941, r8206940, MPFR_RNDN);
        mpfr_add(r8206943, r8206935, r8206942, MPFR_RNDN);
        ;
        mpfr_mul(r8206945, r8206938, r8206937, MPFR_RNDN);
        mpfr_mul(r8206946, r8206945, r8206937, MPFR_RNDN);
        mpfr_mul(r8206947, r8206944, r8206946, MPFR_RNDN);
        mpfr_add(r8206948, r8206943, r8206947, MPFR_RNDN);
        ;
        mpfr_mul(r8206950, r8206946, r8206937, MPFR_RNDN);
        mpfr_mul(r8206951, r8206950, r8206937, MPFR_RNDN);
        mpfr_mul(r8206952, r8206949, r8206951, MPFR_RNDN);
        mpfr_add(r8206953, r8206948, r8206952, MPFR_RNDN);
        ;
        mpfr_mul(r8206955, r8206951, r8206937, MPFR_RNDN);
        mpfr_mul(r8206956, r8206955, r8206937, MPFR_RNDN);
        mpfr_mul(r8206957, r8206954, r8206956, MPFR_RNDN);
        mpfr_add(r8206958, r8206953, r8206957, MPFR_RNDN);
        ;
        mpfr_mul(r8206960, r8206956, r8206937, MPFR_RNDN);
        mpfr_mul(r8206961, r8206960, r8206937, MPFR_RNDN);
        mpfr_mul(r8206962, r8206959, r8206961, MPFR_RNDN);
        mpfr_add(r8206963, r8206958, r8206962, MPFR_RNDN);
        return mpfr_get_d(r8206963, MPFR_RNDN);
}

static mpfr_t r8206964, r8206965, r8206966, r8206967, r8206968, r8206969, r8206970, r8206971, r8206972, r8206973, r8206974, r8206975, r8206976, r8206977, r8206978, r8206979, r8206980, r8206981, r8206982, r8206983, r8206984, r8206985, r8206986, r8206987, r8206988, r8206989, r8206990, r8206991, r8206992;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8206964, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8206965, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r8206966);
        mpfr_init(r8206967);
        mpfr_init(r8206968);
        mpfr_init(r8206969);
        mpfr_init(r8206970);
        mpfr_init(r8206971);
        mpfr_init(r8206972);
        mpfr_init_set_str(r8206973, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r8206974);
        mpfr_init(r8206975);
        mpfr_init(r8206976);
        mpfr_init(r8206977);
        mpfr_init_set_str(r8206978, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r8206979);
        mpfr_init(r8206980);
        mpfr_init(r8206981);
        mpfr_init(r8206982);
        mpfr_init_set_str(r8206983, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r8206984);
        mpfr_init(r8206985);
        mpfr_init(r8206986);
        mpfr_init(r8206987);
        mpfr_init_set_str(r8206988, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r8206989);
        mpfr_init(r8206990);
        mpfr_init(r8206991);
        mpfr_init(r8206992);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8206966, x, MPFR_RNDN);
        mpfr_mul(r8206967, r8206966, r8206966, MPFR_RNDN);
        mpfr_mul(r8206968, r8206965, r8206967, MPFR_RNDN);
        mpfr_cbrt(r8206969, r8206968, MPFR_RNDN);
        mpfr_mul(r8206970, r8206969, r8206969, MPFR_RNDN);
        mpfr_mul(r8206971, r8206970, r8206969, MPFR_RNDN);
        mpfr_add(r8206972, r8206964, r8206971, MPFR_RNDN);
        ;
        mpfr_mul(r8206974, r8206967, r8206966, MPFR_RNDN);
        mpfr_mul(r8206975, r8206974, r8206966, MPFR_RNDN);
        mpfr_mul(r8206976, r8206973, r8206975, MPFR_RNDN);
        mpfr_add(r8206977, r8206972, r8206976, MPFR_RNDN);
        ;
        mpfr_mul(r8206979, r8206975, r8206966, MPFR_RNDN);
        mpfr_mul(r8206980, r8206979, r8206966, MPFR_RNDN);
        mpfr_mul(r8206981, r8206978, r8206980, MPFR_RNDN);
        mpfr_add(r8206982, r8206977, r8206981, MPFR_RNDN);
        ;
        mpfr_mul(r8206984, r8206980, r8206966, MPFR_RNDN);
        mpfr_mul(r8206985, r8206984, r8206966, MPFR_RNDN);
        mpfr_mul(r8206986, r8206983, r8206985, MPFR_RNDN);
        mpfr_add(r8206987, r8206982, r8206986, MPFR_RNDN);
        ;
        mpfr_mul(r8206989, r8206985, r8206966, MPFR_RNDN);
        mpfr_mul(r8206990, r8206989, r8206966, MPFR_RNDN);
        mpfr_mul(r8206991, r8206988, r8206990, MPFR_RNDN);
        mpfr_add(r8206992, r8206987, r8206991, MPFR_RNDN);
        return mpfr_get_d(r8206992, MPFR_RNDN);
}

