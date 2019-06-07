#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r9882864 = 1680.0;
        float r9882865 = -13440.0;
        float r9882866 = x;
        float r9882867 = r9882866 * r9882866;
        float r9882868 = r9882865 * r9882867;
        float r9882869 = r9882864 + r9882868;
        float r9882870 = 13440.0;
        float r9882871 = r9882867 * r9882866;
        float r9882872 = r9882871 * r9882866;
        float r9882873 = r9882870 * r9882872;
        float r9882874 = r9882869 + r9882873;
        float r9882875 = -3584.0;
        float r9882876 = r9882872 * r9882866;
        float r9882877 = r9882876 * r9882866;
        float r9882878 = r9882875 * r9882877;
        float r9882879 = r9882874 + r9882878;
        float r9882880 = 256.0;
        float r9882881 = r9882877 * r9882866;
        float r9882882 = r9882881 * r9882866;
        float r9882883 = r9882880 * r9882882;
        float r9882884 = r9882879 + r9882883;
        return r9882884;
}

double f_id(double x) {
        double r9882885 = 1680.0;
        double r9882886 = -13440.0;
        double r9882887 = x;
        double r9882888 = r9882887 * r9882887;
        double r9882889 = r9882886 * r9882888;
        double r9882890 = r9882885 + r9882889;
        double r9882891 = 13440.0;
        double r9882892 = r9882888 * r9882887;
        double r9882893 = r9882892 * r9882887;
        double r9882894 = r9882891 * r9882893;
        double r9882895 = r9882890 + r9882894;
        double r9882896 = -3584.0;
        double r9882897 = r9882893 * r9882887;
        double r9882898 = r9882897 * r9882887;
        double r9882899 = r9882896 * r9882898;
        double r9882900 = r9882895 + r9882899;
        double r9882901 = 256.0;
        double r9882902 = r9882898 * r9882887;
        double r9882903 = r9882902 * r9882887;
        double r9882904 = r9882901 * r9882903;
        double r9882905 = r9882900 + r9882904;
        return r9882905;
}


double f_of(float x) {
        float r9882906 = 1680.0;
        float r9882907 = -13440.0;
        float r9882908 = x;
        float r9882909 = r9882908 * r9882908;
        float r9882910 = r9882907 * r9882909;
        float r9882911 = r9882906 + r9882910;
        float r9882912 = 13440.0;
        float r9882913 = r9882909 * r9882908;
        float r9882914 = r9882913 * r9882908;
        float r9882915 = r9882912 * r9882914;
        float r9882916 = r9882911 + r9882915;
        float r9882917 = -3584.0;
        float r9882918 = r9882914 * r9882908;
        float r9882919 = r9882918 * r9882908;
        float r9882920 = r9882917 * r9882919;
        float r9882921 = r9882916 + r9882920;
        float r9882922 = 256.0;
        float r9882923 = r9882919 * r9882908;
        float r9882924 = r9882923 * r9882908;
        float r9882925 = r9882922 * r9882924;
        float r9882926 = r9882921 + r9882925;
        return r9882926;
}

double f_od(double x) {
        double r9882927 = 1680.0;
        double r9882928 = -13440.0;
        double r9882929 = x;
        double r9882930 = r9882929 * r9882929;
        double r9882931 = r9882928 * r9882930;
        double r9882932 = r9882927 + r9882931;
        double r9882933 = 13440.0;
        double r9882934 = r9882930 * r9882929;
        double r9882935 = r9882934 * r9882929;
        double r9882936 = r9882933 * r9882935;
        double r9882937 = r9882932 + r9882936;
        double r9882938 = -3584.0;
        double r9882939 = r9882935 * r9882929;
        double r9882940 = r9882939 * r9882929;
        double r9882941 = r9882938 * r9882940;
        double r9882942 = r9882937 + r9882941;
        double r9882943 = 256.0;
        double r9882944 = r9882940 * r9882929;
        double r9882945 = r9882944 * r9882929;
        double r9882946 = r9882943 * r9882945;
        double r9882947 = r9882942 + r9882946;
        return r9882947;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9882948, r9882949, r9882950, r9882951, r9882952, r9882953, r9882954, r9882955, r9882956, r9882957, r9882958, r9882959, r9882960, r9882961, r9882962, r9882963, r9882964, r9882965, r9882966, r9882967, r9882968;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9882948, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9882949, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9882950);
        mpfr_init(r9882951);
        mpfr_init(r9882952);
        mpfr_init(r9882953);
        mpfr_init_set_str(r9882954, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9882955);
        mpfr_init(r9882956);
        mpfr_init(r9882957);
        mpfr_init(r9882958);
        mpfr_init_set_str(r9882959, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r9882960);
        mpfr_init(r9882961);
        mpfr_init(r9882962);
        mpfr_init(r9882963);
        mpfr_init_set_str(r9882964, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9882965);
        mpfr_init(r9882966);
        mpfr_init(r9882967);
        mpfr_init(r9882968);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9882950, x, MPFR_RNDN);
        mpfr_mul(r9882951, r9882950, r9882950, MPFR_RNDN);
        mpfr_mul(r9882952, r9882949, r9882951, MPFR_RNDN);
        mpfr_add(r9882953, r9882948, r9882952, MPFR_RNDN);
        ;
        mpfr_mul(r9882955, r9882951, r9882950, MPFR_RNDN);
        mpfr_mul(r9882956, r9882955, r9882950, MPFR_RNDN);
        mpfr_mul(r9882957, r9882954, r9882956, MPFR_RNDN);
        mpfr_add(r9882958, r9882953, r9882957, MPFR_RNDN);
        ;
        mpfr_mul(r9882960, r9882956, r9882950, MPFR_RNDN);
        mpfr_mul(r9882961, r9882960, r9882950, MPFR_RNDN);
        mpfr_mul(r9882962, r9882959, r9882961, MPFR_RNDN);
        mpfr_add(r9882963, r9882958, r9882962, MPFR_RNDN);
        ;
        mpfr_mul(r9882965, r9882961, r9882950, MPFR_RNDN);
        mpfr_mul(r9882966, r9882965, r9882950, MPFR_RNDN);
        mpfr_mul(r9882967, r9882964, r9882966, MPFR_RNDN);
        mpfr_add(r9882968, r9882963, r9882967, MPFR_RNDN);
        return mpfr_get_d(r9882968, MPFR_RNDN);
}

static mpfr_t r9882969, r9882970, r9882971, r9882972, r9882973, r9882974, r9882975, r9882976, r9882977, r9882978, r9882979, r9882980, r9882981, r9882982, r9882983, r9882984, r9882985, r9882986, r9882987, r9882988, r9882989;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9882969, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9882970, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9882971);
        mpfr_init(r9882972);
        mpfr_init(r9882973);
        mpfr_init(r9882974);
        mpfr_init_set_str(r9882975, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9882976);
        mpfr_init(r9882977);
        mpfr_init(r9882978);
        mpfr_init(r9882979);
        mpfr_init_set_str(r9882980, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r9882981);
        mpfr_init(r9882982);
        mpfr_init(r9882983);
        mpfr_init(r9882984);
        mpfr_init_set_str(r9882985, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9882986);
        mpfr_init(r9882987);
        mpfr_init(r9882988);
        mpfr_init(r9882989);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9882971, x, MPFR_RNDN);
        mpfr_mul(r9882972, r9882971, r9882971, MPFR_RNDN);
        mpfr_mul(r9882973, r9882970, r9882972, MPFR_RNDN);
        mpfr_add(r9882974, r9882969, r9882973, MPFR_RNDN);
        ;
        mpfr_mul(r9882976, r9882972, r9882971, MPFR_RNDN);
        mpfr_mul(r9882977, r9882976, r9882971, MPFR_RNDN);
        mpfr_mul(r9882978, r9882975, r9882977, MPFR_RNDN);
        mpfr_add(r9882979, r9882974, r9882978, MPFR_RNDN);
        ;
        mpfr_mul(r9882981, r9882977, r9882971, MPFR_RNDN);
        mpfr_mul(r9882982, r9882981, r9882971, MPFR_RNDN);
        mpfr_mul(r9882983, r9882980, r9882982, MPFR_RNDN);
        mpfr_add(r9882984, r9882979, r9882983, MPFR_RNDN);
        ;
        mpfr_mul(r9882986, r9882982, r9882971, MPFR_RNDN);
        mpfr_mul(r9882987, r9882986, r9882971, MPFR_RNDN);
        mpfr_mul(r9882988, r9882985, r9882987, MPFR_RNDN);
        mpfr_add(r9882989, r9882984, r9882988, MPFR_RNDN);
        return mpfr_get_d(r9882989, MPFR_RNDN);
}

static mpfr_t r9882990, r9882991, r9882992, r9882993, r9882994, r9882995, r9882996, r9882997, r9882998, r9882999, r9883000, r9883001, r9883002, r9883003, r9883004, r9883005, r9883006, r9883007, r9883008, r9883009, r9883010;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9882990, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9882991, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9882992);
        mpfr_init(r9882993);
        mpfr_init(r9882994);
        mpfr_init(r9882995);
        mpfr_init_set_str(r9882996, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9882997);
        mpfr_init(r9882998);
        mpfr_init(r9882999);
        mpfr_init(r9883000);
        mpfr_init_set_str(r9883001, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r9883002);
        mpfr_init(r9883003);
        mpfr_init(r9883004);
        mpfr_init(r9883005);
        mpfr_init_set_str(r9883006, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9883007);
        mpfr_init(r9883008);
        mpfr_init(r9883009);
        mpfr_init(r9883010);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9882992, x, MPFR_RNDN);
        mpfr_mul(r9882993, r9882992, r9882992, MPFR_RNDN);
        mpfr_mul(r9882994, r9882991, r9882993, MPFR_RNDN);
        mpfr_add(r9882995, r9882990, r9882994, MPFR_RNDN);
        ;
        mpfr_mul(r9882997, r9882993, r9882992, MPFR_RNDN);
        mpfr_mul(r9882998, r9882997, r9882992, MPFR_RNDN);
        mpfr_mul(r9882999, r9882996, r9882998, MPFR_RNDN);
        mpfr_add(r9883000, r9882995, r9882999, MPFR_RNDN);
        ;
        mpfr_mul(r9883002, r9882998, r9882992, MPFR_RNDN);
        mpfr_mul(r9883003, r9883002, r9882992, MPFR_RNDN);
        mpfr_mul(r9883004, r9883001, r9883003, MPFR_RNDN);
        mpfr_add(r9883005, r9883000, r9883004, MPFR_RNDN);
        ;
        mpfr_mul(r9883007, r9883003, r9882992, MPFR_RNDN);
        mpfr_mul(r9883008, r9883007, r9882992, MPFR_RNDN);
        mpfr_mul(r9883009, r9883006, r9883008, MPFR_RNDN);
        mpfr_add(r9883010, r9883005, r9883009, MPFR_RNDN);
        return mpfr_get_d(r9883010, MPFR_RNDN);
}

