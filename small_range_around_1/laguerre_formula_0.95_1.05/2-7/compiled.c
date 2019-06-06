#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r83942820 = 1.0;
        float r83942821 = -7.0;
        float r83942822 = x;
        float r83942823 = r83942821 * r83942822;
        float r83942824 = r83942820 + r83942823;
        float r83942825 = 10.5;
        float r83942826 = r83942822 * r83942822;
        float r83942827 = r83942825 * r83942826;
        float r83942828 = r83942824 + r83942827;
        float r83942829 = -5.833333;
        float r83942830 = r83942826 * r83942822;
        float r83942831 = r83942829 * r83942830;
        float r83942832 = r83942828 + r83942831;
        float r83942833 = 1.458333;
        float r83942834 = r83942830 * r83942822;
        float r83942835 = r83942833 * r83942834;
        float r83942836 = r83942832 + r83942835;
        float r83942837 = -0.175;
        float r83942838 = r83942834 * r83942822;
        float r83942839 = r83942837 * r83942838;
        float r83942840 = r83942836 + r83942839;
        float r83942841 = 0.009722;
        float r83942842 = r83942838 * r83942822;
        float r83942843 = r83942841 * r83942842;
        float r83942844 = r83942840 + r83942843;
        float r83942845 = -0.000198;
        float r83942846 = r83942842 * r83942822;
        float r83942847 = r83942845 * r83942846;
        float r83942848 = r83942844 + r83942847;
        return r83942848;
}

double f_id(double x) {
        double r83942849 = 1.0;
        double r83942850 = -7.0;
        double r83942851 = x;
        double r83942852 = r83942850 * r83942851;
        double r83942853 = r83942849 + r83942852;
        double r83942854 = 10.5;
        double r83942855 = r83942851 * r83942851;
        double r83942856 = r83942854 * r83942855;
        double r83942857 = r83942853 + r83942856;
        double r83942858 = -5.833333;
        double r83942859 = r83942855 * r83942851;
        double r83942860 = r83942858 * r83942859;
        double r83942861 = r83942857 + r83942860;
        double r83942862 = 1.458333;
        double r83942863 = r83942859 * r83942851;
        double r83942864 = r83942862 * r83942863;
        double r83942865 = r83942861 + r83942864;
        double r83942866 = -0.175;
        double r83942867 = r83942863 * r83942851;
        double r83942868 = r83942866 * r83942867;
        double r83942869 = r83942865 + r83942868;
        double r83942870 = 0.009722;
        double r83942871 = r83942867 * r83942851;
        double r83942872 = r83942870 * r83942871;
        double r83942873 = r83942869 + r83942872;
        double r83942874 = -0.000198;
        double r83942875 = r83942871 * r83942851;
        double r83942876 = r83942874 * r83942875;
        double r83942877 = r83942873 + r83942876;
        return r83942877;
}


double f_of(float x) {
        float r83942878 = x;
        float r83942879 = -7.0;
        float r83942880 = r83942878 * r83942879;
        float r83942881 = 1.0;
        float r83942882 = r83942880 + r83942881;
        float r83942883 = exp(r83942882);
        float r83942884 = r83942878 * r83942878;
        float r83942885 = 3;
        float r83942886 = pow(r83942884, r83942885);
        float r83942887 = -0.000198;
        float r83942888 = r83942878 * r83942887;
        float r83942889 = 0.009722;
        float r83942890 = r83942888 + r83942889;
        float r83942891 = r83942886 * r83942890;
        float r83942892 = exp(r83942891);
        float r83942893 = r83942883 * r83942892;
        float r83942894 = exp(r83942884);
        float r83942895 = -5.833333;
        float r83942896 = r83942895 * r83942878;
        float r83942897 = 10.5;
        float r83942898 = r83942896 + r83942897;
        float r83942899 = pow(r83942894, r83942898);
        float r83942900 = -0.175;
        float r83942901 = r83942878 * r83942900;
        float r83942902 = 1.458333;
        float r83942903 = r83942901 + r83942902;
        float r83942904 = exp(r83942903);
        float r83942905 = pow(r83942878, r83942885);
        float r83942906 = 1;
        float r83942907 = r83942906 + r83942885;
        float r83942908 = pow(r83942905, r83942907);
        float r83942909 = cbrt(r83942908);
        float r83942910 = pow(r83942904, r83942909);
        float r83942911 = r83942899 * r83942910;
        float r83942912 = r83942893 * r83942911;
        float r83942913 = log(r83942912);
        return r83942913;
}

double f_od(double x) {
        double r83942914 = x;
        double r83942915 = -7.0;
        double r83942916 = r83942914 * r83942915;
        double r83942917 = 1.0;
        double r83942918 = r83942916 + r83942917;
        double r83942919 = exp(r83942918);
        double r83942920 = r83942914 * r83942914;
        double r83942921 = 3;
        double r83942922 = pow(r83942920, r83942921);
        double r83942923 = -0.000198;
        double r83942924 = r83942914 * r83942923;
        double r83942925 = 0.009722;
        double r83942926 = r83942924 + r83942925;
        double r83942927 = r83942922 * r83942926;
        double r83942928 = exp(r83942927);
        double r83942929 = r83942919 * r83942928;
        double r83942930 = exp(r83942920);
        double r83942931 = -5.833333;
        double r83942932 = r83942931 * r83942914;
        double r83942933 = 10.5;
        double r83942934 = r83942932 + r83942933;
        double r83942935 = pow(r83942930, r83942934);
        double r83942936 = -0.175;
        double r83942937 = r83942914 * r83942936;
        double r83942938 = 1.458333;
        double r83942939 = r83942937 + r83942938;
        double r83942940 = exp(r83942939);
        double r83942941 = pow(r83942914, r83942921);
        double r83942942 = 1;
        double r83942943 = r83942942 + r83942921;
        double r83942944 = pow(r83942941, r83942943);
        double r83942945 = cbrt(r83942944);
        double r83942946 = pow(r83942940, r83942945);
        double r83942947 = r83942935 * r83942946;
        double r83942948 = r83942929 * r83942947;
        double r83942949 = log(r83942948);
        return r83942949;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83942950, r83942951, r83942952, r83942953, r83942954, r83942955, r83942956, r83942957, r83942958, r83942959, r83942960, r83942961, r83942962, r83942963, r83942964, r83942965, r83942966, r83942967, r83942968, r83942969, r83942970, r83942971, r83942972, r83942973, r83942974, r83942975, r83942976, r83942977, r83942978;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83942950, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83942951, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r83942952);
        mpfr_init(r83942953);
        mpfr_init(r83942954);
        mpfr_init_set_str(r83942955, "10.5", 10, MPFR_RNDN);
        mpfr_init(r83942956);
        mpfr_init(r83942957);
        mpfr_init(r83942958);
        mpfr_init_set_str(r83942959, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r83942960);
        mpfr_init(r83942961);
        mpfr_init(r83942962);
        mpfr_init_set_str(r83942963, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r83942964);
        mpfr_init(r83942965);
        mpfr_init(r83942966);
        mpfr_init_set_str(r83942967, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r83942968);
        mpfr_init(r83942969);
        mpfr_init(r83942970);
        mpfr_init_set_str(r83942971, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r83942972);
        mpfr_init(r83942973);
        mpfr_init(r83942974);
        mpfr_init_set_str(r83942975, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r83942976);
        mpfr_init(r83942977);
        mpfr_init(r83942978);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83942952, x, MPFR_RNDN);
        mpfr_mul(r83942953, r83942951, r83942952, MPFR_RNDN);
        mpfr_add(r83942954, r83942950, r83942953, MPFR_RNDN);
        ;
        mpfr_mul(r83942956, r83942952, r83942952, MPFR_RNDN);
        mpfr_mul(r83942957, r83942955, r83942956, MPFR_RNDN);
        mpfr_add(r83942958, r83942954, r83942957, MPFR_RNDN);
        ;
        mpfr_mul(r83942960, r83942956, r83942952, MPFR_RNDN);
        mpfr_mul(r83942961, r83942959, r83942960, MPFR_RNDN);
        mpfr_add(r83942962, r83942958, r83942961, MPFR_RNDN);
        ;
        mpfr_mul(r83942964, r83942960, r83942952, MPFR_RNDN);
        mpfr_mul(r83942965, r83942963, r83942964, MPFR_RNDN);
        mpfr_add(r83942966, r83942962, r83942965, MPFR_RNDN);
        ;
        mpfr_mul(r83942968, r83942964, r83942952, MPFR_RNDN);
        mpfr_mul(r83942969, r83942967, r83942968, MPFR_RNDN);
        mpfr_add(r83942970, r83942966, r83942969, MPFR_RNDN);
        ;
        mpfr_mul(r83942972, r83942968, r83942952, MPFR_RNDN);
        mpfr_mul(r83942973, r83942971, r83942972, MPFR_RNDN);
        mpfr_add(r83942974, r83942970, r83942973, MPFR_RNDN);
        ;
        mpfr_mul(r83942976, r83942972, r83942952, MPFR_RNDN);
        mpfr_mul(r83942977, r83942975, r83942976, MPFR_RNDN);
        mpfr_add(r83942978, r83942974, r83942977, MPFR_RNDN);
        return mpfr_get_d(r83942978, MPFR_RNDN);
}

static mpfr_t r83942979, r83942980, r83942981, r83942982, r83942983, r83942984, r83942985, r83942986, r83942987, r83942988, r83942989, r83942990, r83942991, r83942992, r83942993, r83942994, r83942995, r83942996, r83942997, r83942998, r83942999, r83943000, r83943001, r83943002, r83943003, r83943004, r83943005, r83943006, r83943007, r83943008, r83943009, r83943010, r83943011, r83943012, r83943013, r83943014;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83942979);
        mpfr_init_set_str(r83942980, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r83942981);
        mpfr_init_set_str(r83942982, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83942983);
        mpfr_init(r83942984);
        mpfr_init(r83942985);
        mpfr_init_set_str(r83942986, "3", 10, MPFR_RNDN);
        mpfr_init(r83942987);
        mpfr_init_set_str(r83942988, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r83942989);
        mpfr_init_set_str(r83942990, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r83942991);
        mpfr_init(r83942992);
        mpfr_init(r83942993);
        mpfr_init(r83942994);
        mpfr_init(r83942995);
        mpfr_init_set_str(r83942996, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r83942997);
        mpfr_init_set_str(r83942998, "10.5", 10, MPFR_RNDN);
        mpfr_init(r83942999);
        mpfr_init(r83943000);
        mpfr_init_set_str(r83943001, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r83943002);
        mpfr_init_set_str(r83943003, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r83943004);
        mpfr_init(r83943005);
        mpfr_init(r83943006);
        mpfr_init_set_str(r83943007, "1", 10, MPFR_RNDN);
        mpfr_init(r83943008);
        mpfr_init(r83943009);
        mpfr_init(r83943010);
        mpfr_init(r83943011);
        mpfr_init(r83943012);
        mpfr_init(r83943013);
        mpfr_init(r83943014);
}

double f_fm(double x) {
        mpfr_set_d(r83942979, x, MPFR_RNDN);
        ;
        mpfr_mul(r83942981, r83942979, r83942980, MPFR_RNDN);
        ;
        mpfr_add(r83942983, r83942981, r83942982, MPFR_RNDN);
        mpfr_exp(r83942984, r83942983, MPFR_RNDN);
        mpfr_mul(r83942985, r83942979, r83942979, MPFR_RNDN);
        ;
        mpfr_pow(r83942987, r83942985, r83942986, MPFR_RNDN);
        ;
        mpfr_mul(r83942989, r83942979, r83942988, MPFR_RNDN);
        ;
        mpfr_add(r83942991, r83942989, r83942990, MPFR_RNDN);
        mpfr_mul(r83942992, r83942987, r83942991, MPFR_RNDN);
        mpfr_exp(r83942993, r83942992, MPFR_RNDN);
        mpfr_mul(r83942994, r83942984, r83942993, MPFR_RNDN);
        mpfr_exp(r83942995, r83942985, MPFR_RNDN);
        ;
        mpfr_mul(r83942997, r83942996, r83942979, MPFR_RNDN);
        ;
        mpfr_add(r83942999, r83942997, r83942998, MPFR_RNDN);
        mpfr_pow(r83943000, r83942995, r83942999, MPFR_RNDN);
        ;
        mpfr_mul(r83943002, r83942979, r83943001, MPFR_RNDN);
        ;
        mpfr_add(r83943004, r83943002, r83943003, MPFR_RNDN);
        mpfr_exp(r83943005, r83943004, MPFR_RNDN);
        mpfr_pow(r83943006, r83942979, r83942986, MPFR_RNDN);
        ;
        mpfr_add(r83943008, r83943007, r83942986, MPFR_RNDN);
        mpfr_pow(r83943009, r83943006, r83943008, MPFR_RNDN);
        mpfr_cbrt(r83943010, r83943009, MPFR_RNDN);
        mpfr_pow(r83943011, r83943005, r83943010, MPFR_RNDN);
        mpfr_mul(r83943012, r83943000, r83943011, MPFR_RNDN);
        mpfr_mul(r83943013, r83942994, r83943012, MPFR_RNDN);
        mpfr_log(r83943014, r83943013, MPFR_RNDN);
        return mpfr_get_d(r83943014, MPFR_RNDN);
}

static mpfr_t r83943015, r83943016, r83943017, r83943018, r83943019, r83943020, r83943021, r83943022, r83943023, r83943024, r83943025, r83943026, r83943027, r83943028, r83943029, r83943030, r83943031, r83943032, r83943033, r83943034, r83943035, r83943036, r83943037, r83943038, r83943039, r83943040, r83943041, r83943042, r83943043, r83943044, r83943045, r83943046, r83943047, r83943048, r83943049, r83943050;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83943015);
        mpfr_init_set_str(r83943016, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r83943017);
        mpfr_init_set_str(r83943018, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83943019);
        mpfr_init(r83943020);
        mpfr_init(r83943021);
        mpfr_init_set_str(r83943022, "3", 10, MPFR_RNDN);
        mpfr_init(r83943023);
        mpfr_init_set_str(r83943024, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r83943025);
        mpfr_init_set_str(r83943026, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r83943027);
        mpfr_init(r83943028);
        mpfr_init(r83943029);
        mpfr_init(r83943030);
        mpfr_init(r83943031);
        mpfr_init_set_str(r83943032, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r83943033);
        mpfr_init_set_str(r83943034, "10.5", 10, MPFR_RNDN);
        mpfr_init(r83943035);
        mpfr_init(r83943036);
        mpfr_init_set_str(r83943037, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r83943038);
        mpfr_init_set_str(r83943039, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r83943040);
        mpfr_init(r83943041);
        mpfr_init(r83943042);
        mpfr_init_set_str(r83943043, "1", 10, MPFR_RNDN);
        mpfr_init(r83943044);
        mpfr_init(r83943045);
        mpfr_init(r83943046);
        mpfr_init(r83943047);
        mpfr_init(r83943048);
        mpfr_init(r83943049);
        mpfr_init(r83943050);
}

double f_dm(double x) {
        mpfr_set_d(r83943015, x, MPFR_RNDN);
        ;
        mpfr_mul(r83943017, r83943015, r83943016, MPFR_RNDN);
        ;
        mpfr_add(r83943019, r83943017, r83943018, MPFR_RNDN);
        mpfr_exp(r83943020, r83943019, MPFR_RNDN);
        mpfr_mul(r83943021, r83943015, r83943015, MPFR_RNDN);
        ;
        mpfr_pow(r83943023, r83943021, r83943022, MPFR_RNDN);
        ;
        mpfr_mul(r83943025, r83943015, r83943024, MPFR_RNDN);
        ;
        mpfr_add(r83943027, r83943025, r83943026, MPFR_RNDN);
        mpfr_mul(r83943028, r83943023, r83943027, MPFR_RNDN);
        mpfr_exp(r83943029, r83943028, MPFR_RNDN);
        mpfr_mul(r83943030, r83943020, r83943029, MPFR_RNDN);
        mpfr_exp(r83943031, r83943021, MPFR_RNDN);
        ;
        mpfr_mul(r83943033, r83943032, r83943015, MPFR_RNDN);
        ;
        mpfr_add(r83943035, r83943033, r83943034, MPFR_RNDN);
        mpfr_pow(r83943036, r83943031, r83943035, MPFR_RNDN);
        ;
        mpfr_mul(r83943038, r83943015, r83943037, MPFR_RNDN);
        ;
        mpfr_add(r83943040, r83943038, r83943039, MPFR_RNDN);
        mpfr_exp(r83943041, r83943040, MPFR_RNDN);
        mpfr_pow(r83943042, r83943015, r83943022, MPFR_RNDN);
        ;
        mpfr_add(r83943044, r83943043, r83943022, MPFR_RNDN);
        mpfr_pow(r83943045, r83943042, r83943044, MPFR_RNDN);
        mpfr_cbrt(r83943046, r83943045, MPFR_RNDN);
        mpfr_pow(r83943047, r83943041, r83943046, MPFR_RNDN);
        mpfr_mul(r83943048, r83943036, r83943047, MPFR_RNDN);
        mpfr_mul(r83943049, r83943030, r83943048, MPFR_RNDN);
        mpfr_log(r83943050, r83943049, MPFR_RNDN);
        return mpfr_get_d(r83943050, MPFR_RNDN);
}

