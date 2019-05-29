#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r7031761 = 518918400.0;
        float r7031762 = -8302694400.0;
        float r7031763 = x;
        float r7031764 = r7031763 * r7031763;
        float r7031765 = r7031762 * r7031764;
        float r7031766 = r7031761 + r7031765;
        float r7031767 = 19372953600.0;
        float r7031768 = r7031764 * r7031763;
        float r7031769 = r7031768 * r7031763;
        float r7031770 = r7031767 * r7031769;
        float r7031771 = r7031766 + r7031770;
        float r7031772 = -15498362880.0;
        float r7031773 = r7031769 * r7031763;
        float r7031774 = r7031773 * r7031763;
        float r7031775 = r7031772 * r7031774;
        float r7031776 = r7031771 + r7031775;
        float r7031777 = 5535129600.0;
        float r7031778 = r7031774 * r7031763;
        float r7031779 = r7031778 * r7031763;
        float r7031780 = r7031777 * r7031779;
        float r7031781 = r7031776 + r7031780;
        float r7031782 = -984023040.0;
        float r7031783 = r7031779 * r7031763;
        float r7031784 = r7031783 * r7031763;
        float r7031785 = r7031782 * r7031784;
        float r7031786 = r7031781 + r7031785;
        float r7031787 = 89456640.0;
        float r7031788 = r7031784 * r7031763;
        float r7031789 = r7031788 * r7031763;
        float r7031790 = r7031787 * r7031789;
        float r7031791 = r7031786 + r7031790;
        float r7031792 = -3932160.0;
        float r7031793 = r7031789 * r7031763;
        float r7031794 = r7031793 * r7031763;
        float r7031795 = r7031792 * r7031794;
        float r7031796 = r7031791 + r7031795;
        float r7031797 = 65536.0;
        float r7031798 = r7031794 * r7031763;
        float r7031799 = r7031798 * r7031763;
        float r7031800 = r7031797 * r7031799;
        float r7031801 = r7031796 + r7031800;
        return r7031801;
}

double f_id(double x) {
        double r7031802 = 518918400.0;
        double r7031803 = -8302694400.0;
        double r7031804 = x;
        double r7031805 = r7031804 * r7031804;
        double r7031806 = r7031803 * r7031805;
        double r7031807 = r7031802 + r7031806;
        double r7031808 = 19372953600.0;
        double r7031809 = r7031805 * r7031804;
        double r7031810 = r7031809 * r7031804;
        double r7031811 = r7031808 * r7031810;
        double r7031812 = r7031807 + r7031811;
        double r7031813 = -15498362880.0;
        double r7031814 = r7031810 * r7031804;
        double r7031815 = r7031814 * r7031804;
        double r7031816 = r7031813 * r7031815;
        double r7031817 = r7031812 + r7031816;
        double r7031818 = 5535129600.0;
        double r7031819 = r7031815 * r7031804;
        double r7031820 = r7031819 * r7031804;
        double r7031821 = r7031818 * r7031820;
        double r7031822 = r7031817 + r7031821;
        double r7031823 = -984023040.0;
        double r7031824 = r7031820 * r7031804;
        double r7031825 = r7031824 * r7031804;
        double r7031826 = r7031823 * r7031825;
        double r7031827 = r7031822 + r7031826;
        double r7031828 = 89456640.0;
        double r7031829 = r7031825 * r7031804;
        double r7031830 = r7031829 * r7031804;
        double r7031831 = r7031828 * r7031830;
        double r7031832 = r7031827 + r7031831;
        double r7031833 = -3932160.0;
        double r7031834 = r7031830 * r7031804;
        double r7031835 = r7031834 * r7031804;
        double r7031836 = r7031833 * r7031835;
        double r7031837 = r7031832 + r7031836;
        double r7031838 = 65536.0;
        double r7031839 = r7031835 * r7031804;
        double r7031840 = r7031839 * r7031804;
        double r7031841 = r7031838 * r7031840;
        double r7031842 = r7031837 + r7031841;
        return r7031842;
}


double f_of(float x) {
        float r7031843 = 19372953600.0;
        float r7031844 = x;
        float r7031845 = r7031843 * r7031844;
        float r7031846 = 3;
        float r7031847 = pow(r7031844, r7031846);
        float r7031848 = r7031845 * r7031847;
        float r7031849 = r7031844 * r7031844;
        float r7031850 = r7031849 * r7031849;
        float r7031851 = -15498362880.0;
        float r7031852 = r7031851 * r7031844;
        float r7031853 = r7031844 * r7031852;
        float r7031854 = r7031850 * r7031853;
        float r7031855 = r7031848 + r7031854;
        float r7031856 = -8302694400.0;
        float r7031857 = r7031849 * r7031856;
        float r7031858 = 518918400.0;
        float r7031859 = r7031857 + r7031858;
        float r7031860 = 5535129600.0;
        float r7031861 = r7031849 * r7031860;
        float r7031862 = pow(r7031849, r7031846);
        float r7031863 = r7031861 * r7031862;
        float r7031864 = r7031859 + r7031863;
        float r7031865 = r7031855 + r7031864;
        float r7031866 = r7031862 * r7031850;
        float r7031867 = -984023040.0;
        float r7031868 = 89456640.0;
        float r7031869 = r7031868 * r7031844;
        float r7031870 = r7031844 * r7031869;
        float r7031871 = r7031867 + r7031870;
        float r7031872 = r7031866 * r7031871;
        float r7031873 = r7031866 * r7031850;
        float r7031874 = -3932160.0;
        float r7031875 = 65536.0;
        float r7031876 = r7031849 * r7031875;
        float r7031877 = r7031874 + r7031876;
        float r7031878 = r7031873 * r7031877;
        float r7031879 = r7031872 + r7031878;
        float r7031880 = r7031865 + r7031879;
        return r7031880;
}

double f_od(double x) {
        double r7031881 = 19372953600.0;
        double r7031882 = x;
        double r7031883 = r7031881 * r7031882;
        double r7031884 = 3;
        double r7031885 = pow(r7031882, r7031884);
        double r7031886 = r7031883 * r7031885;
        double r7031887 = r7031882 * r7031882;
        double r7031888 = r7031887 * r7031887;
        double r7031889 = -15498362880.0;
        double r7031890 = r7031889 * r7031882;
        double r7031891 = r7031882 * r7031890;
        double r7031892 = r7031888 * r7031891;
        double r7031893 = r7031886 + r7031892;
        double r7031894 = -8302694400.0;
        double r7031895 = r7031887 * r7031894;
        double r7031896 = 518918400.0;
        double r7031897 = r7031895 + r7031896;
        double r7031898 = 5535129600.0;
        double r7031899 = r7031887 * r7031898;
        double r7031900 = pow(r7031887, r7031884);
        double r7031901 = r7031899 * r7031900;
        double r7031902 = r7031897 + r7031901;
        double r7031903 = r7031893 + r7031902;
        double r7031904 = r7031900 * r7031888;
        double r7031905 = -984023040.0;
        double r7031906 = 89456640.0;
        double r7031907 = r7031906 * r7031882;
        double r7031908 = r7031882 * r7031907;
        double r7031909 = r7031905 + r7031908;
        double r7031910 = r7031904 * r7031909;
        double r7031911 = r7031904 * r7031888;
        double r7031912 = -3932160.0;
        double r7031913 = 65536.0;
        double r7031914 = r7031887 * r7031913;
        double r7031915 = r7031912 + r7031914;
        double r7031916 = r7031911 * r7031915;
        double r7031917 = r7031910 + r7031916;
        double r7031918 = r7031903 + r7031917;
        return r7031918;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7031919, r7031920, r7031921, r7031922, r7031923, r7031924, r7031925, r7031926, r7031927, r7031928, r7031929, r7031930, r7031931, r7031932, r7031933, r7031934, r7031935, r7031936, r7031937, r7031938, r7031939, r7031940, r7031941, r7031942, r7031943, r7031944, r7031945, r7031946, r7031947, r7031948, r7031949, r7031950, r7031951, r7031952, r7031953, r7031954, r7031955, r7031956, r7031957, r7031958, r7031959;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7031919, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7031920, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7031921);
        mpfr_init(r7031922);
        mpfr_init(r7031923);
        mpfr_init(r7031924);
        mpfr_init_set_str(r7031925, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r7031926);
        mpfr_init(r7031927);
        mpfr_init(r7031928);
        mpfr_init(r7031929);
        mpfr_init_set_str(r7031930, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7031931);
        mpfr_init(r7031932);
        mpfr_init(r7031933);
        mpfr_init(r7031934);
        mpfr_init_set_str(r7031935, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r7031936);
        mpfr_init(r7031937);
        mpfr_init(r7031938);
        mpfr_init(r7031939);
        mpfr_init_set_str(r7031940, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r7031941);
        mpfr_init(r7031942);
        mpfr_init(r7031943);
        mpfr_init(r7031944);
        mpfr_init_set_str(r7031945, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7031946);
        mpfr_init(r7031947);
        mpfr_init(r7031948);
        mpfr_init(r7031949);
        mpfr_init_set_str(r7031950, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r7031951);
        mpfr_init(r7031952);
        mpfr_init(r7031953);
        mpfr_init(r7031954);
        mpfr_init_set_str(r7031955, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7031956);
        mpfr_init(r7031957);
        mpfr_init(r7031958);
        mpfr_init(r7031959);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7031921, x, MPFR_RNDN);
        mpfr_mul(r7031922, r7031921, r7031921, MPFR_RNDN);
        mpfr_mul(r7031923, r7031920, r7031922, MPFR_RNDN);
        mpfr_add(r7031924, r7031919, r7031923, MPFR_RNDN);
        ;
        mpfr_mul(r7031926, r7031922, r7031921, MPFR_RNDN);
        mpfr_mul(r7031927, r7031926, r7031921, MPFR_RNDN);
        mpfr_mul(r7031928, r7031925, r7031927, MPFR_RNDN);
        mpfr_add(r7031929, r7031924, r7031928, MPFR_RNDN);
        ;
        mpfr_mul(r7031931, r7031927, r7031921, MPFR_RNDN);
        mpfr_mul(r7031932, r7031931, r7031921, MPFR_RNDN);
        mpfr_mul(r7031933, r7031930, r7031932, MPFR_RNDN);
        mpfr_add(r7031934, r7031929, r7031933, MPFR_RNDN);
        ;
        mpfr_mul(r7031936, r7031932, r7031921, MPFR_RNDN);
        mpfr_mul(r7031937, r7031936, r7031921, MPFR_RNDN);
        mpfr_mul(r7031938, r7031935, r7031937, MPFR_RNDN);
        mpfr_add(r7031939, r7031934, r7031938, MPFR_RNDN);
        ;
        mpfr_mul(r7031941, r7031937, r7031921, MPFR_RNDN);
        mpfr_mul(r7031942, r7031941, r7031921, MPFR_RNDN);
        mpfr_mul(r7031943, r7031940, r7031942, MPFR_RNDN);
        mpfr_add(r7031944, r7031939, r7031943, MPFR_RNDN);
        ;
        mpfr_mul(r7031946, r7031942, r7031921, MPFR_RNDN);
        mpfr_mul(r7031947, r7031946, r7031921, MPFR_RNDN);
        mpfr_mul(r7031948, r7031945, r7031947, MPFR_RNDN);
        mpfr_add(r7031949, r7031944, r7031948, MPFR_RNDN);
        ;
        mpfr_mul(r7031951, r7031947, r7031921, MPFR_RNDN);
        mpfr_mul(r7031952, r7031951, r7031921, MPFR_RNDN);
        mpfr_mul(r7031953, r7031950, r7031952, MPFR_RNDN);
        mpfr_add(r7031954, r7031949, r7031953, MPFR_RNDN);
        ;
        mpfr_mul(r7031956, r7031952, r7031921, MPFR_RNDN);
        mpfr_mul(r7031957, r7031956, r7031921, MPFR_RNDN);
        mpfr_mul(r7031958, r7031955, r7031957, MPFR_RNDN);
        mpfr_add(r7031959, r7031954, r7031958, MPFR_RNDN);
        return mpfr_get_d(r7031959, MPFR_RNDN);
}

static mpfr_t r7031960, r7031961, r7031962, r7031963, r7031964, r7031965, r7031966, r7031967, r7031968, r7031969, r7031970, r7031971, r7031972, r7031973, r7031974, r7031975, r7031976, r7031977, r7031978, r7031979, r7031980, r7031981, r7031982, r7031983, r7031984, r7031985, r7031986, r7031987, r7031988, r7031989, r7031990, r7031991, r7031992, r7031993, r7031994, r7031995, r7031996, r7031997;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7031960, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r7031961);
        mpfr_init(r7031962);
        mpfr_init_set_str(r7031963, "3", 10, MPFR_RNDN);
        mpfr_init(r7031964);
        mpfr_init(r7031965);
        mpfr_init(r7031966);
        mpfr_init(r7031967);
        mpfr_init_set_str(r7031968, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7031969);
        mpfr_init(r7031970);
        mpfr_init(r7031971);
        mpfr_init(r7031972);
        mpfr_init_set_str(r7031973, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7031974);
        mpfr_init_set_str(r7031975, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7031976);
        mpfr_init_set_str(r7031977, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r7031978);
        mpfr_init(r7031979);
        mpfr_init(r7031980);
        mpfr_init(r7031981);
        mpfr_init(r7031982);
        mpfr_init(r7031983);
        mpfr_init_set_str(r7031984, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7031985, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7031986);
        mpfr_init(r7031987);
        mpfr_init(r7031988);
        mpfr_init(r7031989);
        mpfr_init(r7031990);
        mpfr_init_set_str(r7031991, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7031992, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7031993);
        mpfr_init(r7031994);
        mpfr_init(r7031995);
        mpfr_init(r7031996);
        mpfr_init(r7031997);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7031961, x, MPFR_RNDN);
        mpfr_mul(r7031962, r7031960, r7031961, MPFR_RNDN);
        ;
        mpfr_pow(r7031964, r7031961, r7031963, MPFR_RNDN);
        mpfr_mul(r7031965, r7031962, r7031964, MPFR_RNDN);
        mpfr_mul(r7031966, r7031961, r7031961, MPFR_RNDN);
        mpfr_mul(r7031967, r7031966, r7031966, MPFR_RNDN);
        ;
        mpfr_mul(r7031969, r7031968, r7031961, MPFR_RNDN);
        mpfr_mul(r7031970, r7031961, r7031969, MPFR_RNDN);
        mpfr_mul(r7031971, r7031967, r7031970, MPFR_RNDN);
        mpfr_add(r7031972, r7031965, r7031971, MPFR_RNDN);
        ;
        mpfr_mul(r7031974, r7031966, r7031973, MPFR_RNDN);
        ;
        mpfr_add(r7031976, r7031974, r7031975, MPFR_RNDN);
        ;
        mpfr_mul(r7031978, r7031966, r7031977, MPFR_RNDN);
        mpfr_pow(r7031979, r7031966, r7031963, MPFR_RNDN);
        mpfr_mul(r7031980, r7031978, r7031979, MPFR_RNDN);
        mpfr_add(r7031981, r7031976, r7031980, MPFR_RNDN);
        mpfr_add(r7031982, r7031972, r7031981, MPFR_RNDN);
        mpfr_mul(r7031983, r7031979, r7031967, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7031986, r7031985, r7031961, MPFR_RNDN);
        mpfr_mul(r7031987, r7031961, r7031986, MPFR_RNDN);
        mpfr_add(r7031988, r7031984, r7031987, MPFR_RNDN);
        mpfr_mul(r7031989, r7031983, r7031988, MPFR_RNDN);
        mpfr_mul(r7031990, r7031983, r7031967, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7031993, r7031966, r7031992, MPFR_RNDN);
        mpfr_add(r7031994, r7031991, r7031993, MPFR_RNDN);
        mpfr_mul(r7031995, r7031990, r7031994, MPFR_RNDN);
        mpfr_add(r7031996, r7031989, r7031995, MPFR_RNDN);
        mpfr_add(r7031997, r7031982, r7031996, MPFR_RNDN);
        return mpfr_get_d(r7031997, MPFR_RNDN);
}

static mpfr_t r7031998, r7031999, r7032000, r7032001, r7032002, r7032003, r7032004, r7032005, r7032006, r7032007, r7032008, r7032009, r7032010, r7032011, r7032012, r7032013, r7032014, r7032015, r7032016, r7032017, r7032018, r7032019, r7032020, r7032021, r7032022, r7032023, r7032024, r7032025, r7032026, r7032027, r7032028, r7032029, r7032030, r7032031, r7032032, r7032033, r7032034, r7032035;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7031998, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r7031999);
        mpfr_init(r7032000);
        mpfr_init_set_str(r7032001, "3", 10, MPFR_RNDN);
        mpfr_init(r7032002);
        mpfr_init(r7032003);
        mpfr_init(r7032004);
        mpfr_init(r7032005);
        mpfr_init_set_str(r7032006, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7032007);
        mpfr_init(r7032008);
        mpfr_init(r7032009);
        mpfr_init(r7032010);
        mpfr_init_set_str(r7032011, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7032012);
        mpfr_init_set_str(r7032013, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7032014);
        mpfr_init_set_str(r7032015, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r7032016);
        mpfr_init(r7032017);
        mpfr_init(r7032018);
        mpfr_init(r7032019);
        mpfr_init(r7032020);
        mpfr_init(r7032021);
        mpfr_init_set_str(r7032022, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7032023, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7032024);
        mpfr_init(r7032025);
        mpfr_init(r7032026);
        mpfr_init(r7032027);
        mpfr_init(r7032028);
        mpfr_init_set_str(r7032029, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7032030, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7032031);
        mpfr_init(r7032032);
        mpfr_init(r7032033);
        mpfr_init(r7032034);
        mpfr_init(r7032035);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7031999, x, MPFR_RNDN);
        mpfr_mul(r7032000, r7031998, r7031999, MPFR_RNDN);
        ;
        mpfr_pow(r7032002, r7031999, r7032001, MPFR_RNDN);
        mpfr_mul(r7032003, r7032000, r7032002, MPFR_RNDN);
        mpfr_mul(r7032004, r7031999, r7031999, MPFR_RNDN);
        mpfr_mul(r7032005, r7032004, r7032004, MPFR_RNDN);
        ;
        mpfr_mul(r7032007, r7032006, r7031999, MPFR_RNDN);
        mpfr_mul(r7032008, r7031999, r7032007, MPFR_RNDN);
        mpfr_mul(r7032009, r7032005, r7032008, MPFR_RNDN);
        mpfr_add(r7032010, r7032003, r7032009, MPFR_RNDN);
        ;
        mpfr_mul(r7032012, r7032004, r7032011, MPFR_RNDN);
        ;
        mpfr_add(r7032014, r7032012, r7032013, MPFR_RNDN);
        ;
        mpfr_mul(r7032016, r7032004, r7032015, MPFR_RNDN);
        mpfr_pow(r7032017, r7032004, r7032001, MPFR_RNDN);
        mpfr_mul(r7032018, r7032016, r7032017, MPFR_RNDN);
        mpfr_add(r7032019, r7032014, r7032018, MPFR_RNDN);
        mpfr_add(r7032020, r7032010, r7032019, MPFR_RNDN);
        mpfr_mul(r7032021, r7032017, r7032005, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7032024, r7032023, r7031999, MPFR_RNDN);
        mpfr_mul(r7032025, r7031999, r7032024, MPFR_RNDN);
        mpfr_add(r7032026, r7032022, r7032025, MPFR_RNDN);
        mpfr_mul(r7032027, r7032021, r7032026, MPFR_RNDN);
        mpfr_mul(r7032028, r7032021, r7032005, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7032031, r7032004, r7032030, MPFR_RNDN);
        mpfr_add(r7032032, r7032029, r7032031, MPFR_RNDN);
        mpfr_mul(r7032033, r7032028, r7032032, MPFR_RNDN);
        mpfr_add(r7032034, r7032027, r7032033, MPFR_RNDN);
        mpfr_add(r7032035, r7032020, r7032034, MPFR_RNDN);
        return mpfr_get_d(r7032035, MPFR_RNDN);
}

