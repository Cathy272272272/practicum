#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r6897786 = -17297280.0;
        float r6897787 = 242161920.0;
        float r6897788 = x;
        float r6897789 = r6897788 * r6897788;
        float r6897790 = r6897787 * r6897789;
        float r6897791 = r6897786 + r6897790;
        float r6897792 = -484323840.0;
        float r6897793 = r6897789 * r6897788;
        float r6897794 = r6897793 * r6897788;
        float r6897795 = r6897792 * r6897794;
        float r6897796 = r6897791 + r6897795;
        float r6897797 = 322882560.0;
        float r6897798 = r6897794 * r6897788;
        float r6897799 = r6897798 * r6897788;
        float r6897800 = r6897797 * r6897799;
        float r6897801 = r6897796 + r6897800;
        float r6897802 = -92252160.0;
        float r6897803 = r6897799 * r6897788;
        float r6897804 = r6897803 * r6897788;
        float r6897805 = r6897802 * r6897804;
        float r6897806 = r6897801 + r6897805;
        float r6897807 = 12300288.0;
        float r6897808 = r6897804 * r6897788;
        float r6897809 = r6897808 * r6897788;
        float r6897810 = r6897807 * r6897809;
        float r6897811 = r6897806 + r6897810;
        float r6897812 = -745472.0;
        float r6897813 = r6897809 * r6897788;
        float r6897814 = r6897813 * r6897788;
        float r6897815 = r6897812 * r6897814;
        float r6897816 = r6897811 + r6897815;
        float r6897817 = 16384.0;
        float r6897818 = r6897814 * r6897788;
        float r6897819 = r6897818 * r6897788;
        float r6897820 = r6897817 * r6897819;
        float r6897821 = r6897816 + r6897820;
        return r6897821;
}

double f_id(double x) {
        double r6897822 = -17297280.0;
        double r6897823 = 242161920.0;
        double r6897824 = x;
        double r6897825 = r6897824 * r6897824;
        double r6897826 = r6897823 * r6897825;
        double r6897827 = r6897822 + r6897826;
        double r6897828 = -484323840.0;
        double r6897829 = r6897825 * r6897824;
        double r6897830 = r6897829 * r6897824;
        double r6897831 = r6897828 * r6897830;
        double r6897832 = r6897827 + r6897831;
        double r6897833 = 322882560.0;
        double r6897834 = r6897830 * r6897824;
        double r6897835 = r6897834 * r6897824;
        double r6897836 = r6897833 * r6897835;
        double r6897837 = r6897832 + r6897836;
        double r6897838 = -92252160.0;
        double r6897839 = r6897835 * r6897824;
        double r6897840 = r6897839 * r6897824;
        double r6897841 = r6897838 * r6897840;
        double r6897842 = r6897837 + r6897841;
        double r6897843 = 12300288.0;
        double r6897844 = r6897840 * r6897824;
        double r6897845 = r6897844 * r6897824;
        double r6897846 = r6897843 * r6897845;
        double r6897847 = r6897842 + r6897846;
        double r6897848 = -745472.0;
        double r6897849 = r6897845 * r6897824;
        double r6897850 = r6897849 * r6897824;
        double r6897851 = r6897848 * r6897850;
        double r6897852 = r6897847 + r6897851;
        double r6897853 = 16384.0;
        double r6897854 = r6897850 * r6897824;
        double r6897855 = r6897854 * r6897824;
        double r6897856 = r6897853 * r6897855;
        double r6897857 = r6897852 + r6897856;
        return r6897857;
}


double f_of(float x) {
        float r6897858 = x;
        float r6897859 = 14;
        float r6897860 = pow(r6897858, r6897859);
        float r6897861 = 16384.0;
        float r6897862 = r6897860 * r6897861;
        float r6897863 = 745472.0;
        float r6897864 = 12;
        float r6897865 = pow(r6897858, r6897864);
        float r6897866 = r6897863 * r6897865;
        float r6897867 = r6897862 - r6897866;
        float r6897868 = 6;
        float r6897869 = pow(r6897858, r6897868);
        float r6897870 = 322882560.0;
        float r6897871 = r6897869 * r6897870;
        float r6897872 = r6897867 + r6897871;
        float r6897873 = 242161920.0;
        float r6897874 = r6897873 * r6897858;
        float r6897875 = r6897874 * r6897858;
        float r6897876 = -484323840.0;
        float r6897877 = r6897858 * r6897876;
        float r6897878 = 3;
        float r6897879 = pow(r6897858, r6897878);
        float r6897880 = r6897877 * r6897879;
        float r6897881 = r6897875 + r6897880;
        float r6897882 = -17297280.0;
        float r6897883 = r6897881 + r6897882;
        float r6897884 = r6897858 * r6897858;
        float r6897885 = 1;
        float r6897886 = r6897885 + r6897878;
        float r6897887 = pow(r6897884, r6897886);
        float r6897888 = -92252160.0;
        float r6897889 = 12300288.0;
        float r6897890 = r6897889 * r6897858;
        float r6897891 = r6897858 * r6897890;
        float r6897892 = r6897888 + r6897891;
        float r6897893 = r6897887 * r6897892;
        float r6897894 = r6897883 + r6897893;
        float r6897895 = r6897872 + r6897894;
        return r6897895;
}

double f_od(double x) {
        double r6897896 = x;
        double r6897897 = 14;
        double r6897898 = pow(r6897896, r6897897);
        double r6897899 = 16384.0;
        double r6897900 = r6897898 * r6897899;
        double r6897901 = 745472.0;
        double r6897902 = 12;
        double r6897903 = pow(r6897896, r6897902);
        double r6897904 = r6897901 * r6897903;
        double r6897905 = r6897900 - r6897904;
        double r6897906 = 6;
        double r6897907 = pow(r6897896, r6897906);
        double r6897908 = 322882560.0;
        double r6897909 = r6897907 * r6897908;
        double r6897910 = r6897905 + r6897909;
        double r6897911 = 242161920.0;
        double r6897912 = r6897911 * r6897896;
        double r6897913 = r6897912 * r6897896;
        double r6897914 = -484323840.0;
        double r6897915 = r6897896 * r6897914;
        double r6897916 = 3;
        double r6897917 = pow(r6897896, r6897916);
        double r6897918 = r6897915 * r6897917;
        double r6897919 = r6897913 + r6897918;
        double r6897920 = -17297280.0;
        double r6897921 = r6897919 + r6897920;
        double r6897922 = r6897896 * r6897896;
        double r6897923 = 1;
        double r6897924 = r6897923 + r6897916;
        double r6897925 = pow(r6897922, r6897924);
        double r6897926 = -92252160.0;
        double r6897927 = 12300288.0;
        double r6897928 = r6897927 * r6897896;
        double r6897929 = r6897896 * r6897928;
        double r6897930 = r6897926 + r6897929;
        double r6897931 = r6897925 * r6897930;
        double r6897932 = r6897921 + r6897931;
        double r6897933 = r6897910 + r6897932;
        return r6897933;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6897934, r6897935, r6897936, r6897937, r6897938, r6897939, r6897940, r6897941, r6897942, r6897943, r6897944, r6897945, r6897946, r6897947, r6897948, r6897949, r6897950, r6897951, r6897952, r6897953, r6897954, r6897955, r6897956, r6897957, r6897958, r6897959, r6897960, r6897961, r6897962, r6897963, r6897964, r6897965, r6897966, r6897967, r6897968, r6897969;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6897934, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6897935, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r6897936);
        mpfr_init(r6897937);
        mpfr_init(r6897938);
        mpfr_init(r6897939);
        mpfr_init_set_str(r6897940, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r6897941);
        mpfr_init(r6897942);
        mpfr_init(r6897943);
        mpfr_init(r6897944);
        mpfr_init_set_str(r6897945, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r6897946);
        mpfr_init(r6897947);
        mpfr_init(r6897948);
        mpfr_init(r6897949);
        mpfr_init_set_str(r6897950, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r6897951);
        mpfr_init(r6897952);
        mpfr_init(r6897953);
        mpfr_init(r6897954);
        mpfr_init_set_str(r6897955, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r6897956);
        mpfr_init(r6897957);
        mpfr_init(r6897958);
        mpfr_init(r6897959);
        mpfr_init_set_str(r6897960, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r6897961);
        mpfr_init(r6897962);
        mpfr_init(r6897963);
        mpfr_init(r6897964);
        mpfr_init_set_str(r6897965, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r6897966);
        mpfr_init(r6897967);
        mpfr_init(r6897968);
        mpfr_init(r6897969);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6897936, x, MPFR_RNDN);
        mpfr_mul(r6897937, r6897936, r6897936, MPFR_RNDN);
        mpfr_mul(r6897938, r6897935, r6897937, MPFR_RNDN);
        mpfr_add(r6897939, r6897934, r6897938, MPFR_RNDN);
        ;
        mpfr_mul(r6897941, r6897937, r6897936, MPFR_RNDN);
        mpfr_mul(r6897942, r6897941, r6897936, MPFR_RNDN);
        mpfr_mul(r6897943, r6897940, r6897942, MPFR_RNDN);
        mpfr_add(r6897944, r6897939, r6897943, MPFR_RNDN);
        ;
        mpfr_mul(r6897946, r6897942, r6897936, MPFR_RNDN);
        mpfr_mul(r6897947, r6897946, r6897936, MPFR_RNDN);
        mpfr_mul(r6897948, r6897945, r6897947, MPFR_RNDN);
        mpfr_add(r6897949, r6897944, r6897948, MPFR_RNDN);
        ;
        mpfr_mul(r6897951, r6897947, r6897936, MPFR_RNDN);
        mpfr_mul(r6897952, r6897951, r6897936, MPFR_RNDN);
        mpfr_mul(r6897953, r6897950, r6897952, MPFR_RNDN);
        mpfr_add(r6897954, r6897949, r6897953, MPFR_RNDN);
        ;
        mpfr_mul(r6897956, r6897952, r6897936, MPFR_RNDN);
        mpfr_mul(r6897957, r6897956, r6897936, MPFR_RNDN);
        mpfr_mul(r6897958, r6897955, r6897957, MPFR_RNDN);
        mpfr_add(r6897959, r6897954, r6897958, MPFR_RNDN);
        ;
        mpfr_mul(r6897961, r6897957, r6897936, MPFR_RNDN);
        mpfr_mul(r6897962, r6897961, r6897936, MPFR_RNDN);
        mpfr_mul(r6897963, r6897960, r6897962, MPFR_RNDN);
        mpfr_add(r6897964, r6897959, r6897963, MPFR_RNDN);
        ;
        mpfr_mul(r6897966, r6897962, r6897936, MPFR_RNDN);
        mpfr_mul(r6897967, r6897966, r6897936, MPFR_RNDN);
        mpfr_mul(r6897968, r6897965, r6897967, MPFR_RNDN);
        mpfr_add(r6897969, r6897964, r6897968, MPFR_RNDN);
        return mpfr_get_d(r6897969, MPFR_RNDN);
}

static mpfr_t r6897970, r6897971, r6897972, r6897973, r6897974, r6897975, r6897976, r6897977, r6897978, r6897979, r6897980, r6897981, r6897982, r6897983, r6897984, r6897985, r6897986, r6897987, r6897988, r6897989, r6897990, r6897991, r6897992, r6897993, r6897994, r6897995, r6897996, r6897997, r6897998, r6897999, r6898000, r6898001, r6898002, r6898003, r6898004, r6898005, r6898006, r6898007;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6897970);
        mpfr_init_set_str(r6897971, "14", 10, MPFR_RNDN);
        mpfr_init(r6897972);
        mpfr_init_set_str(r6897973, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r6897974);
        mpfr_init_set_str(r6897975, "745472.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6897976, "12", 10, MPFR_RNDN);
        mpfr_init(r6897977);
        mpfr_init(r6897978);
        mpfr_init(r6897979);
        mpfr_init_set_str(r6897980, "6", 10, MPFR_RNDN);
        mpfr_init(r6897981);
        mpfr_init_set_str(r6897982, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r6897983);
        mpfr_init(r6897984);
        mpfr_init_set_str(r6897985, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r6897986);
        mpfr_init(r6897987);
        mpfr_init_set_str(r6897988, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r6897989);
        mpfr_init_set_str(r6897990, "3", 10, MPFR_RNDN);
        mpfr_init(r6897991);
        mpfr_init(r6897992);
        mpfr_init(r6897993);
        mpfr_init_set_str(r6897994, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r6897995);
        mpfr_init(r6897996);
        mpfr_init_set_str(r6897997, "1", 10, MPFR_RNDN);
        mpfr_init(r6897998);
        mpfr_init(r6897999);
        mpfr_init_set_str(r6898000, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6898001, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r6898002);
        mpfr_init(r6898003);
        mpfr_init(r6898004);
        mpfr_init(r6898005);
        mpfr_init(r6898006);
        mpfr_init(r6898007);
}

double f_fm(double x) {
        mpfr_set_d(r6897970, x, MPFR_RNDN);
        ;
        mpfr_pow(r6897972, r6897970, r6897971, MPFR_RNDN);
        ;
        mpfr_mul(r6897974, r6897972, r6897973, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6897977, r6897970, r6897976, MPFR_RNDN);
        mpfr_mul(r6897978, r6897975, r6897977, MPFR_RNDN);
        mpfr_sub(r6897979, r6897974, r6897978, MPFR_RNDN);
        ;
        mpfr_pow(r6897981, r6897970, r6897980, MPFR_RNDN);
        ;
        mpfr_mul(r6897983, r6897981, r6897982, MPFR_RNDN);
        mpfr_add(r6897984, r6897979, r6897983, MPFR_RNDN);
        ;
        mpfr_mul(r6897986, r6897985, r6897970, MPFR_RNDN);
        mpfr_mul(r6897987, r6897986, r6897970, MPFR_RNDN);
        ;
        mpfr_mul(r6897989, r6897970, r6897988, MPFR_RNDN);
        ;
        mpfr_pow(r6897991, r6897970, r6897990, MPFR_RNDN);
        mpfr_mul(r6897992, r6897989, r6897991, MPFR_RNDN);
        mpfr_add(r6897993, r6897987, r6897992, MPFR_RNDN);
        ;
        mpfr_add(r6897995, r6897993, r6897994, MPFR_RNDN);
        mpfr_mul(r6897996, r6897970, r6897970, MPFR_RNDN);
        ;
        mpfr_add(r6897998, r6897997, r6897990, MPFR_RNDN);
        mpfr_pow(r6897999, r6897996, r6897998, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6898002, r6898001, r6897970, MPFR_RNDN);
        mpfr_mul(r6898003, r6897970, r6898002, MPFR_RNDN);
        mpfr_add(r6898004, r6898000, r6898003, MPFR_RNDN);
        mpfr_mul(r6898005, r6897999, r6898004, MPFR_RNDN);
        mpfr_add(r6898006, r6897995, r6898005, MPFR_RNDN);
        mpfr_add(r6898007, r6897984, r6898006, MPFR_RNDN);
        return mpfr_get_d(r6898007, MPFR_RNDN);
}

static mpfr_t r6898008, r6898009, r6898010, r6898011, r6898012, r6898013, r6898014, r6898015, r6898016, r6898017, r6898018, r6898019, r6898020, r6898021, r6898022, r6898023, r6898024, r6898025, r6898026, r6898027, r6898028, r6898029, r6898030, r6898031, r6898032, r6898033, r6898034, r6898035, r6898036, r6898037, r6898038, r6898039, r6898040, r6898041, r6898042, r6898043, r6898044, r6898045;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6898008);
        mpfr_init_set_str(r6898009, "14", 10, MPFR_RNDN);
        mpfr_init(r6898010);
        mpfr_init_set_str(r6898011, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r6898012);
        mpfr_init_set_str(r6898013, "745472.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6898014, "12", 10, MPFR_RNDN);
        mpfr_init(r6898015);
        mpfr_init(r6898016);
        mpfr_init(r6898017);
        mpfr_init_set_str(r6898018, "6", 10, MPFR_RNDN);
        mpfr_init(r6898019);
        mpfr_init_set_str(r6898020, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r6898021);
        mpfr_init(r6898022);
        mpfr_init_set_str(r6898023, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r6898024);
        mpfr_init(r6898025);
        mpfr_init_set_str(r6898026, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r6898027);
        mpfr_init_set_str(r6898028, "3", 10, MPFR_RNDN);
        mpfr_init(r6898029);
        mpfr_init(r6898030);
        mpfr_init(r6898031);
        mpfr_init_set_str(r6898032, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r6898033);
        mpfr_init(r6898034);
        mpfr_init_set_str(r6898035, "1", 10, MPFR_RNDN);
        mpfr_init(r6898036);
        mpfr_init(r6898037);
        mpfr_init_set_str(r6898038, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6898039, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r6898040);
        mpfr_init(r6898041);
        mpfr_init(r6898042);
        mpfr_init(r6898043);
        mpfr_init(r6898044);
        mpfr_init(r6898045);
}

double f_dm(double x) {
        mpfr_set_d(r6898008, x, MPFR_RNDN);
        ;
        mpfr_pow(r6898010, r6898008, r6898009, MPFR_RNDN);
        ;
        mpfr_mul(r6898012, r6898010, r6898011, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6898015, r6898008, r6898014, MPFR_RNDN);
        mpfr_mul(r6898016, r6898013, r6898015, MPFR_RNDN);
        mpfr_sub(r6898017, r6898012, r6898016, MPFR_RNDN);
        ;
        mpfr_pow(r6898019, r6898008, r6898018, MPFR_RNDN);
        ;
        mpfr_mul(r6898021, r6898019, r6898020, MPFR_RNDN);
        mpfr_add(r6898022, r6898017, r6898021, MPFR_RNDN);
        ;
        mpfr_mul(r6898024, r6898023, r6898008, MPFR_RNDN);
        mpfr_mul(r6898025, r6898024, r6898008, MPFR_RNDN);
        ;
        mpfr_mul(r6898027, r6898008, r6898026, MPFR_RNDN);
        ;
        mpfr_pow(r6898029, r6898008, r6898028, MPFR_RNDN);
        mpfr_mul(r6898030, r6898027, r6898029, MPFR_RNDN);
        mpfr_add(r6898031, r6898025, r6898030, MPFR_RNDN);
        ;
        mpfr_add(r6898033, r6898031, r6898032, MPFR_RNDN);
        mpfr_mul(r6898034, r6898008, r6898008, MPFR_RNDN);
        ;
        mpfr_add(r6898036, r6898035, r6898028, MPFR_RNDN);
        mpfr_pow(r6898037, r6898034, r6898036, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6898040, r6898039, r6898008, MPFR_RNDN);
        mpfr_mul(r6898041, r6898008, r6898040, MPFR_RNDN);
        mpfr_add(r6898042, r6898038, r6898041, MPFR_RNDN);
        mpfr_mul(r6898043, r6898037, r6898042, MPFR_RNDN);
        mpfr_add(r6898044, r6898033, r6898043, MPFR_RNDN);
        mpfr_add(r6898045, r6898022, r6898044, MPFR_RNDN);
        return mpfr_get_d(r6898045, MPFR_RNDN);
}

