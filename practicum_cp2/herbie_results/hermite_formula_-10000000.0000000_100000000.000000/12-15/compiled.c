#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r9884769 = -518918400.0;
        float r9884770 = x;
        float r9884771 = r9884769 * r9884770;
        float r9884772 = 2421619200.0;
        float r9884773 = r9884770 * r9884770;
        float r9884774 = r9884773 * r9884770;
        float r9884775 = r9884772 * r9884774;
        float r9884776 = r9884771 + r9884775;
        float r9884777 = -2905943040.0;
        float r9884778 = r9884774 * r9884770;
        float r9884779 = r9884778 * r9884770;
        float r9884780 = r9884777 * r9884779;
        float r9884781 = r9884776 + r9884780;
        float r9884782 = 1383782400.0;
        float r9884783 = r9884779 * r9884770;
        float r9884784 = r9884783 * r9884770;
        float r9884785 = r9884782 * r9884784;
        float r9884786 = r9884781 + r9884785;
        float r9884787 = -307507200.0;
        float r9884788 = r9884784 * r9884770;
        float r9884789 = r9884788 * r9884770;
        float r9884790 = r9884787 * r9884789;
        float r9884791 = r9884786 + r9884790;
        float r9884792 = 33546240.0;
        float r9884793 = r9884789 * r9884770;
        float r9884794 = r9884793 * r9884770;
        float r9884795 = r9884792 * r9884794;
        float r9884796 = r9884791 + r9884795;
        float r9884797 = -1720320.0;
        float r9884798 = r9884794 * r9884770;
        float r9884799 = r9884798 * r9884770;
        float r9884800 = r9884797 * r9884799;
        float r9884801 = r9884796 + r9884800;
        float r9884802 = 32768.0;
        float r9884803 = r9884799 * r9884770;
        float r9884804 = r9884803 * r9884770;
        float r9884805 = r9884802 * r9884804;
        float r9884806 = r9884801 + r9884805;
        return r9884806;
}

double f_id(double x) {
        double r9884807 = -518918400.0;
        double r9884808 = x;
        double r9884809 = r9884807 * r9884808;
        double r9884810 = 2421619200.0;
        double r9884811 = r9884808 * r9884808;
        double r9884812 = r9884811 * r9884808;
        double r9884813 = r9884810 * r9884812;
        double r9884814 = r9884809 + r9884813;
        double r9884815 = -2905943040.0;
        double r9884816 = r9884812 * r9884808;
        double r9884817 = r9884816 * r9884808;
        double r9884818 = r9884815 * r9884817;
        double r9884819 = r9884814 + r9884818;
        double r9884820 = 1383782400.0;
        double r9884821 = r9884817 * r9884808;
        double r9884822 = r9884821 * r9884808;
        double r9884823 = r9884820 * r9884822;
        double r9884824 = r9884819 + r9884823;
        double r9884825 = -307507200.0;
        double r9884826 = r9884822 * r9884808;
        double r9884827 = r9884826 * r9884808;
        double r9884828 = r9884825 * r9884827;
        double r9884829 = r9884824 + r9884828;
        double r9884830 = 33546240.0;
        double r9884831 = r9884827 * r9884808;
        double r9884832 = r9884831 * r9884808;
        double r9884833 = r9884830 * r9884832;
        double r9884834 = r9884829 + r9884833;
        double r9884835 = -1720320.0;
        double r9884836 = r9884832 * r9884808;
        double r9884837 = r9884836 * r9884808;
        double r9884838 = r9884835 * r9884837;
        double r9884839 = r9884834 + r9884838;
        double r9884840 = 32768.0;
        double r9884841 = r9884837 * r9884808;
        double r9884842 = r9884841 * r9884808;
        double r9884843 = r9884840 * r9884842;
        double r9884844 = r9884839 + r9884843;
        return r9884844;
}


double f_of(float x) {
        float r9884845 = -518918400.0;
        float r9884846 = x;
        float r9884847 = r9884845 * r9884846;
        float r9884848 = 2421619200.0;
        float r9884849 = r9884846 * r9884846;
        float r9884850 = r9884849 * r9884846;
        float r9884851 = r9884848 * r9884850;
        float r9884852 = r9884847 + r9884851;
        float r9884853 = -2905943040.0;
        float r9884854 = r9884850 * r9884846;
        float r9884855 = r9884854 * r9884846;
        float r9884856 = r9884853 * r9884855;
        float r9884857 = r9884852 + r9884856;
        float r9884858 = 1383782400.0;
        float r9884859 = r9884855 * r9884846;
        float r9884860 = r9884859 * r9884846;
        float r9884861 = r9884858 * r9884860;
        float r9884862 = r9884857 + r9884861;
        float r9884863 = -307507200.0;
        float r9884864 = r9884860 * r9884846;
        float r9884865 = r9884864 * r9884846;
        float r9884866 = r9884863 * r9884865;
        float r9884867 = r9884862 + r9884866;
        float r9884868 = 33546240.0;
        float r9884869 = r9884865 * r9884846;
        float r9884870 = r9884869 * r9884846;
        float r9884871 = r9884868 * r9884870;
        float r9884872 = r9884867 + r9884871;
        float r9884873 = -1720320.0;
        float r9884874 = r9884870 * r9884846;
        float r9884875 = r9884874 * r9884846;
        float r9884876 = r9884873 * r9884875;
        float r9884877 = r9884872 + r9884876;
        float r9884878 = 32768.0;
        float r9884879 = r9884875 * r9884846;
        float r9884880 = r9884879 * r9884846;
        float r9884881 = r9884878 * r9884880;
        float r9884882 = r9884877 + r9884881;
        return r9884882;
}

double f_od(double x) {
        double r9884883 = -518918400.0;
        double r9884884 = x;
        double r9884885 = r9884883 * r9884884;
        double r9884886 = 2421619200.0;
        double r9884887 = r9884884 * r9884884;
        double r9884888 = r9884887 * r9884884;
        double r9884889 = r9884886 * r9884888;
        double r9884890 = r9884885 + r9884889;
        double r9884891 = -2905943040.0;
        double r9884892 = r9884888 * r9884884;
        double r9884893 = r9884892 * r9884884;
        double r9884894 = r9884891 * r9884893;
        double r9884895 = r9884890 + r9884894;
        double r9884896 = 1383782400.0;
        double r9884897 = r9884893 * r9884884;
        double r9884898 = r9884897 * r9884884;
        double r9884899 = r9884896 * r9884898;
        double r9884900 = r9884895 + r9884899;
        double r9884901 = -307507200.0;
        double r9884902 = r9884898 * r9884884;
        double r9884903 = r9884902 * r9884884;
        double r9884904 = r9884901 * r9884903;
        double r9884905 = r9884900 + r9884904;
        double r9884906 = 33546240.0;
        double r9884907 = r9884903 * r9884884;
        double r9884908 = r9884907 * r9884884;
        double r9884909 = r9884906 * r9884908;
        double r9884910 = r9884905 + r9884909;
        double r9884911 = -1720320.0;
        double r9884912 = r9884908 * r9884884;
        double r9884913 = r9884912 * r9884884;
        double r9884914 = r9884911 * r9884913;
        double r9884915 = r9884910 + r9884914;
        double r9884916 = 32768.0;
        double r9884917 = r9884913 * r9884884;
        double r9884918 = r9884917 * r9884884;
        double r9884919 = r9884916 * r9884918;
        double r9884920 = r9884915 + r9884919;
        return r9884920;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9884921, r9884922, r9884923, r9884924, r9884925, r9884926, r9884927, r9884928, r9884929, r9884930, r9884931, r9884932, r9884933, r9884934, r9884935, r9884936, r9884937, r9884938, r9884939, r9884940, r9884941, r9884942, r9884943, r9884944, r9884945, r9884946, r9884947, r9884948, r9884949, r9884950, r9884951, r9884952, r9884953, r9884954, r9884955, r9884956, r9884957, r9884958;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9884921, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r9884922);
        mpfr_init(r9884923);
        mpfr_init_set_str(r9884924, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r9884925);
        mpfr_init(r9884926);
        mpfr_init(r9884927);
        mpfr_init(r9884928);
        mpfr_init_set_str(r9884929, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r9884930);
        mpfr_init(r9884931);
        mpfr_init(r9884932);
        mpfr_init(r9884933);
        mpfr_init_set_str(r9884934, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r9884935);
        mpfr_init(r9884936);
        mpfr_init(r9884937);
        mpfr_init(r9884938);
        mpfr_init_set_str(r9884939, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r9884940);
        mpfr_init(r9884941);
        mpfr_init(r9884942);
        mpfr_init(r9884943);
        mpfr_init_set_str(r9884944, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r9884945);
        mpfr_init(r9884946);
        mpfr_init(r9884947);
        mpfr_init(r9884948);
        mpfr_init_set_str(r9884949, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r9884950);
        mpfr_init(r9884951);
        mpfr_init(r9884952);
        mpfr_init(r9884953);
        mpfr_init_set_str(r9884954, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r9884955);
        mpfr_init(r9884956);
        mpfr_init(r9884957);
        mpfr_init(r9884958);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9884922, x, MPFR_RNDN);
        mpfr_mul(r9884923, r9884921, r9884922, MPFR_RNDN);
        ;
        mpfr_mul(r9884925, r9884922, r9884922, MPFR_RNDN);
        mpfr_mul(r9884926, r9884925, r9884922, MPFR_RNDN);
        mpfr_mul(r9884927, r9884924, r9884926, MPFR_RNDN);
        mpfr_add(r9884928, r9884923, r9884927, MPFR_RNDN);
        ;
        mpfr_mul(r9884930, r9884926, r9884922, MPFR_RNDN);
        mpfr_mul(r9884931, r9884930, r9884922, MPFR_RNDN);
        mpfr_mul(r9884932, r9884929, r9884931, MPFR_RNDN);
        mpfr_add(r9884933, r9884928, r9884932, MPFR_RNDN);
        ;
        mpfr_mul(r9884935, r9884931, r9884922, MPFR_RNDN);
        mpfr_mul(r9884936, r9884935, r9884922, MPFR_RNDN);
        mpfr_mul(r9884937, r9884934, r9884936, MPFR_RNDN);
        mpfr_add(r9884938, r9884933, r9884937, MPFR_RNDN);
        ;
        mpfr_mul(r9884940, r9884936, r9884922, MPFR_RNDN);
        mpfr_mul(r9884941, r9884940, r9884922, MPFR_RNDN);
        mpfr_mul(r9884942, r9884939, r9884941, MPFR_RNDN);
        mpfr_add(r9884943, r9884938, r9884942, MPFR_RNDN);
        ;
        mpfr_mul(r9884945, r9884941, r9884922, MPFR_RNDN);
        mpfr_mul(r9884946, r9884945, r9884922, MPFR_RNDN);
        mpfr_mul(r9884947, r9884944, r9884946, MPFR_RNDN);
        mpfr_add(r9884948, r9884943, r9884947, MPFR_RNDN);
        ;
        mpfr_mul(r9884950, r9884946, r9884922, MPFR_RNDN);
        mpfr_mul(r9884951, r9884950, r9884922, MPFR_RNDN);
        mpfr_mul(r9884952, r9884949, r9884951, MPFR_RNDN);
        mpfr_add(r9884953, r9884948, r9884952, MPFR_RNDN);
        ;
        mpfr_mul(r9884955, r9884951, r9884922, MPFR_RNDN);
        mpfr_mul(r9884956, r9884955, r9884922, MPFR_RNDN);
        mpfr_mul(r9884957, r9884954, r9884956, MPFR_RNDN);
        mpfr_add(r9884958, r9884953, r9884957, MPFR_RNDN);
        return mpfr_get_d(r9884958, MPFR_RNDN);
}

static mpfr_t r9884959, r9884960, r9884961, r9884962, r9884963, r9884964, r9884965, r9884966, r9884967, r9884968, r9884969, r9884970, r9884971, r9884972, r9884973, r9884974, r9884975, r9884976, r9884977, r9884978, r9884979, r9884980, r9884981, r9884982, r9884983, r9884984, r9884985, r9884986, r9884987, r9884988, r9884989, r9884990, r9884991, r9884992, r9884993, r9884994, r9884995, r9884996;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9884959, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r9884960);
        mpfr_init(r9884961);
        mpfr_init_set_str(r9884962, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r9884963);
        mpfr_init(r9884964);
        mpfr_init(r9884965);
        mpfr_init(r9884966);
        mpfr_init_set_str(r9884967, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r9884968);
        mpfr_init(r9884969);
        mpfr_init(r9884970);
        mpfr_init(r9884971);
        mpfr_init_set_str(r9884972, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r9884973);
        mpfr_init(r9884974);
        mpfr_init(r9884975);
        mpfr_init(r9884976);
        mpfr_init_set_str(r9884977, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r9884978);
        mpfr_init(r9884979);
        mpfr_init(r9884980);
        mpfr_init(r9884981);
        mpfr_init_set_str(r9884982, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r9884983);
        mpfr_init(r9884984);
        mpfr_init(r9884985);
        mpfr_init(r9884986);
        mpfr_init_set_str(r9884987, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r9884988);
        mpfr_init(r9884989);
        mpfr_init(r9884990);
        mpfr_init(r9884991);
        mpfr_init_set_str(r9884992, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r9884993);
        mpfr_init(r9884994);
        mpfr_init(r9884995);
        mpfr_init(r9884996);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9884960, x, MPFR_RNDN);
        mpfr_mul(r9884961, r9884959, r9884960, MPFR_RNDN);
        ;
        mpfr_mul(r9884963, r9884960, r9884960, MPFR_RNDN);
        mpfr_mul(r9884964, r9884963, r9884960, MPFR_RNDN);
        mpfr_mul(r9884965, r9884962, r9884964, MPFR_RNDN);
        mpfr_add(r9884966, r9884961, r9884965, MPFR_RNDN);
        ;
        mpfr_mul(r9884968, r9884964, r9884960, MPFR_RNDN);
        mpfr_mul(r9884969, r9884968, r9884960, MPFR_RNDN);
        mpfr_mul(r9884970, r9884967, r9884969, MPFR_RNDN);
        mpfr_add(r9884971, r9884966, r9884970, MPFR_RNDN);
        ;
        mpfr_mul(r9884973, r9884969, r9884960, MPFR_RNDN);
        mpfr_mul(r9884974, r9884973, r9884960, MPFR_RNDN);
        mpfr_mul(r9884975, r9884972, r9884974, MPFR_RNDN);
        mpfr_add(r9884976, r9884971, r9884975, MPFR_RNDN);
        ;
        mpfr_mul(r9884978, r9884974, r9884960, MPFR_RNDN);
        mpfr_mul(r9884979, r9884978, r9884960, MPFR_RNDN);
        mpfr_mul(r9884980, r9884977, r9884979, MPFR_RNDN);
        mpfr_add(r9884981, r9884976, r9884980, MPFR_RNDN);
        ;
        mpfr_mul(r9884983, r9884979, r9884960, MPFR_RNDN);
        mpfr_mul(r9884984, r9884983, r9884960, MPFR_RNDN);
        mpfr_mul(r9884985, r9884982, r9884984, MPFR_RNDN);
        mpfr_add(r9884986, r9884981, r9884985, MPFR_RNDN);
        ;
        mpfr_mul(r9884988, r9884984, r9884960, MPFR_RNDN);
        mpfr_mul(r9884989, r9884988, r9884960, MPFR_RNDN);
        mpfr_mul(r9884990, r9884987, r9884989, MPFR_RNDN);
        mpfr_add(r9884991, r9884986, r9884990, MPFR_RNDN);
        ;
        mpfr_mul(r9884993, r9884989, r9884960, MPFR_RNDN);
        mpfr_mul(r9884994, r9884993, r9884960, MPFR_RNDN);
        mpfr_mul(r9884995, r9884992, r9884994, MPFR_RNDN);
        mpfr_add(r9884996, r9884991, r9884995, MPFR_RNDN);
        return mpfr_get_d(r9884996, MPFR_RNDN);
}

static mpfr_t r9884997, r9884998, r9884999, r9885000, r9885001, r9885002, r9885003, r9885004, r9885005, r9885006, r9885007, r9885008, r9885009, r9885010, r9885011, r9885012, r9885013, r9885014, r9885015, r9885016, r9885017, r9885018, r9885019, r9885020, r9885021, r9885022, r9885023, r9885024, r9885025, r9885026, r9885027, r9885028, r9885029, r9885030, r9885031, r9885032, r9885033, r9885034;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9884997, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r9884998);
        mpfr_init(r9884999);
        mpfr_init_set_str(r9885000, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r9885001);
        mpfr_init(r9885002);
        mpfr_init(r9885003);
        mpfr_init(r9885004);
        mpfr_init_set_str(r9885005, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r9885006);
        mpfr_init(r9885007);
        mpfr_init(r9885008);
        mpfr_init(r9885009);
        mpfr_init_set_str(r9885010, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r9885011);
        mpfr_init(r9885012);
        mpfr_init(r9885013);
        mpfr_init(r9885014);
        mpfr_init_set_str(r9885015, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r9885016);
        mpfr_init(r9885017);
        mpfr_init(r9885018);
        mpfr_init(r9885019);
        mpfr_init_set_str(r9885020, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r9885021);
        mpfr_init(r9885022);
        mpfr_init(r9885023);
        mpfr_init(r9885024);
        mpfr_init_set_str(r9885025, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r9885026);
        mpfr_init(r9885027);
        mpfr_init(r9885028);
        mpfr_init(r9885029);
        mpfr_init_set_str(r9885030, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r9885031);
        mpfr_init(r9885032);
        mpfr_init(r9885033);
        mpfr_init(r9885034);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9884998, x, MPFR_RNDN);
        mpfr_mul(r9884999, r9884997, r9884998, MPFR_RNDN);
        ;
        mpfr_mul(r9885001, r9884998, r9884998, MPFR_RNDN);
        mpfr_mul(r9885002, r9885001, r9884998, MPFR_RNDN);
        mpfr_mul(r9885003, r9885000, r9885002, MPFR_RNDN);
        mpfr_add(r9885004, r9884999, r9885003, MPFR_RNDN);
        ;
        mpfr_mul(r9885006, r9885002, r9884998, MPFR_RNDN);
        mpfr_mul(r9885007, r9885006, r9884998, MPFR_RNDN);
        mpfr_mul(r9885008, r9885005, r9885007, MPFR_RNDN);
        mpfr_add(r9885009, r9885004, r9885008, MPFR_RNDN);
        ;
        mpfr_mul(r9885011, r9885007, r9884998, MPFR_RNDN);
        mpfr_mul(r9885012, r9885011, r9884998, MPFR_RNDN);
        mpfr_mul(r9885013, r9885010, r9885012, MPFR_RNDN);
        mpfr_add(r9885014, r9885009, r9885013, MPFR_RNDN);
        ;
        mpfr_mul(r9885016, r9885012, r9884998, MPFR_RNDN);
        mpfr_mul(r9885017, r9885016, r9884998, MPFR_RNDN);
        mpfr_mul(r9885018, r9885015, r9885017, MPFR_RNDN);
        mpfr_add(r9885019, r9885014, r9885018, MPFR_RNDN);
        ;
        mpfr_mul(r9885021, r9885017, r9884998, MPFR_RNDN);
        mpfr_mul(r9885022, r9885021, r9884998, MPFR_RNDN);
        mpfr_mul(r9885023, r9885020, r9885022, MPFR_RNDN);
        mpfr_add(r9885024, r9885019, r9885023, MPFR_RNDN);
        ;
        mpfr_mul(r9885026, r9885022, r9884998, MPFR_RNDN);
        mpfr_mul(r9885027, r9885026, r9884998, MPFR_RNDN);
        mpfr_mul(r9885028, r9885025, r9885027, MPFR_RNDN);
        mpfr_add(r9885029, r9885024, r9885028, MPFR_RNDN);
        ;
        mpfr_mul(r9885031, r9885027, r9884998, MPFR_RNDN);
        mpfr_mul(r9885032, r9885031, r9884998, MPFR_RNDN);
        mpfr_mul(r9885033, r9885030, r9885032, MPFR_RNDN);
        mpfr_add(r9885034, r9885029, r9885033, MPFR_RNDN);
        return mpfr_get_d(r9885034, MPFR_RNDN);
}

