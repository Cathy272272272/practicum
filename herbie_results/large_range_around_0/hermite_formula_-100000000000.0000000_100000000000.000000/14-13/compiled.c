#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r11055791 = 17297280.0;
        float r11055792 = x;
        float r11055793 = r11055791 * r11055792;
        float r11055794 = -69189120.0;
        float r11055795 = r11055792 * r11055792;
        float r11055796 = r11055795 * r11055792;
        float r11055797 = r11055794 * r11055796;
        float r11055798 = r11055793 + r11055797;
        float r11055799 = 69189120.0;
        float r11055800 = r11055796 * r11055792;
        float r11055801 = r11055800 * r11055792;
        float r11055802 = r11055799 * r11055801;
        float r11055803 = r11055798 + r11055802;
        float r11055804 = -26357760.0;
        float r11055805 = r11055801 * r11055792;
        float r11055806 = r11055805 * r11055792;
        float r11055807 = r11055804 * r11055806;
        float r11055808 = r11055803 + r11055807;
        float r11055809 = 4392960.0;
        float r11055810 = r11055806 * r11055792;
        float r11055811 = r11055810 * r11055792;
        float r11055812 = r11055809 * r11055811;
        float r11055813 = r11055808 + r11055812;
        float r11055814 = -319488.0;
        float r11055815 = r11055811 * r11055792;
        float r11055816 = r11055815 * r11055792;
        float r11055817 = r11055814 * r11055816;
        float r11055818 = r11055813 + r11055817;
        float r11055819 = 8192.0;
        float r11055820 = r11055816 * r11055792;
        float r11055821 = r11055820 * r11055792;
        float r11055822 = r11055819 * r11055821;
        float r11055823 = r11055818 + r11055822;
        return r11055823;
}

double f_id(double x) {
        double r11055824 = 17297280.0;
        double r11055825 = x;
        double r11055826 = r11055824 * r11055825;
        double r11055827 = -69189120.0;
        double r11055828 = r11055825 * r11055825;
        double r11055829 = r11055828 * r11055825;
        double r11055830 = r11055827 * r11055829;
        double r11055831 = r11055826 + r11055830;
        double r11055832 = 69189120.0;
        double r11055833 = r11055829 * r11055825;
        double r11055834 = r11055833 * r11055825;
        double r11055835 = r11055832 * r11055834;
        double r11055836 = r11055831 + r11055835;
        double r11055837 = -26357760.0;
        double r11055838 = r11055834 * r11055825;
        double r11055839 = r11055838 * r11055825;
        double r11055840 = r11055837 * r11055839;
        double r11055841 = r11055836 + r11055840;
        double r11055842 = 4392960.0;
        double r11055843 = r11055839 * r11055825;
        double r11055844 = r11055843 * r11055825;
        double r11055845 = r11055842 * r11055844;
        double r11055846 = r11055841 + r11055845;
        double r11055847 = -319488.0;
        double r11055848 = r11055844 * r11055825;
        double r11055849 = r11055848 * r11055825;
        double r11055850 = r11055847 * r11055849;
        double r11055851 = r11055846 + r11055850;
        double r11055852 = 8192.0;
        double r11055853 = r11055849 * r11055825;
        double r11055854 = r11055853 * r11055825;
        double r11055855 = r11055852 * r11055854;
        double r11055856 = r11055851 + r11055855;
        return r11055856;
}


double f_of(float x) {
        float r11055857 = 4392960.0;
        float r11055858 = x;
        float r11055859 = r11055857 * r11055858;
        float r11055860 = r11055858 * r11055858;
        float r11055861 = r11055859 * r11055860;
        float r11055862 = 3;
        float r11055863 = pow(r11055858, r11055862);
        float r11055864 = r11055863 * r11055863;
        float r11055865 = r11055861 * r11055864;
        float r11055866 = 7;
        float r11055867 = pow(r11055858, r11055866);
        float r11055868 = -26357760.0;
        float r11055869 = r11055867 * r11055868;
        float r11055870 = 17297280.0;
        float r11055871 = r11055870 * r11055858;
        float r11055872 = r11055869 + r11055871;
        float r11055873 = r11055865 + r11055872;
        float r11055874 = -69189120.0;
        float r11055875 = r11055874 * r11055858;
        float r11055876 = 69189120.0;
        float r11055877 = r11055858 * r11055876;
        float r11055878 = r11055877 * r11055860;
        float r11055879 = r11055875 + r11055878;
        float r11055880 = r11055860 * r11055879;
        float r11055881 = r11055873 + r11055880;
        float r11055882 = r11055860 * r11055860;
        float r11055883 = r11055882 * r11055882;
        float r11055884 = r11055883 * r11055863;
        float r11055885 = -319488.0;
        float r11055886 = 8192.0;
        float r11055887 = r11055886 * r11055860;
        float r11055888 = r11055885 + r11055887;
        float r11055889 = r11055884 * r11055888;
        float r11055890 = r11055881 + r11055889;
        return r11055890;
}

double f_od(double x) {
        double r11055891 = 4392960.0;
        double r11055892 = x;
        double r11055893 = r11055891 * r11055892;
        double r11055894 = r11055892 * r11055892;
        double r11055895 = r11055893 * r11055894;
        double r11055896 = 3;
        double r11055897 = pow(r11055892, r11055896);
        double r11055898 = r11055897 * r11055897;
        double r11055899 = r11055895 * r11055898;
        double r11055900 = 7;
        double r11055901 = pow(r11055892, r11055900);
        double r11055902 = -26357760.0;
        double r11055903 = r11055901 * r11055902;
        double r11055904 = 17297280.0;
        double r11055905 = r11055904 * r11055892;
        double r11055906 = r11055903 + r11055905;
        double r11055907 = r11055899 + r11055906;
        double r11055908 = -69189120.0;
        double r11055909 = r11055908 * r11055892;
        double r11055910 = 69189120.0;
        double r11055911 = r11055892 * r11055910;
        double r11055912 = r11055911 * r11055894;
        double r11055913 = r11055909 + r11055912;
        double r11055914 = r11055894 * r11055913;
        double r11055915 = r11055907 + r11055914;
        double r11055916 = r11055894 * r11055894;
        double r11055917 = r11055916 * r11055916;
        double r11055918 = r11055917 * r11055897;
        double r11055919 = -319488.0;
        double r11055920 = 8192.0;
        double r11055921 = r11055920 * r11055894;
        double r11055922 = r11055919 + r11055921;
        double r11055923 = r11055918 * r11055922;
        double r11055924 = r11055915 + r11055923;
        return r11055924;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11055925, r11055926, r11055927, r11055928, r11055929, r11055930, r11055931, r11055932, r11055933, r11055934, r11055935, r11055936, r11055937, r11055938, r11055939, r11055940, r11055941, r11055942, r11055943, r11055944, r11055945, r11055946, r11055947, r11055948, r11055949, r11055950, r11055951, r11055952, r11055953, r11055954, r11055955, r11055956, r11055957;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11055925, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r11055926);
        mpfr_init(r11055927);
        mpfr_init_set_str(r11055928, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r11055929);
        mpfr_init(r11055930);
        mpfr_init(r11055931);
        mpfr_init(r11055932);
        mpfr_init_set_str(r11055933, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r11055934);
        mpfr_init(r11055935);
        mpfr_init(r11055936);
        mpfr_init(r11055937);
        mpfr_init_set_str(r11055938, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r11055939);
        mpfr_init(r11055940);
        mpfr_init(r11055941);
        mpfr_init(r11055942);
        mpfr_init_set_str(r11055943, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r11055944);
        mpfr_init(r11055945);
        mpfr_init(r11055946);
        mpfr_init(r11055947);
        mpfr_init_set_str(r11055948, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r11055949);
        mpfr_init(r11055950);
        mpfr_init(r11055951);
        mpfr_init(r11055952);
        mpfr_init_set_str(r11055953, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r11055954);
        mpfr_init(r11055955);
        mpfr_init(r11055956);
        mpfr_init(r11055957);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11055926, x, MPFR_RNDN);
        mpfr_mul(r11055927, r11055925, r11055926, MPFR_RNDN);
        ;
        mpfr_mul(r11055929, r11055926, r11055926, MPFR_RNDN);
        mpfr_mul(r11055930, r11055929, r11055926, MPFR_RNDN);
        mpfr_mul(r11055931, r11055928, r11055930, MPFR_RNDN);
        mpfr_add(r11055932, r11055927, r11055931, MPFR_RNDN);
        ;
        mpfr_mul(r11055934, r11055930, r11055926, MPFR_RNDN);
        mpfr_mul(r11055935, r11055934, r11055926, MPFR_RNDN);
        mpfr_mul(r11055936, r11055933, r11055935, MPFR_RNDN);
        mpfr_add(r11055937, r11055932, r11055936, MPFR_RNDN);
        ;
        mpfr_mul(r11055939, r11055935, r11055926, MPFR_RNDN);
        mpfr_mul(r11055940, r11055939, r11055926, MPFR_RNDN);
        mpfr_mul(r11055941, r11055938, r11055940, MPFR_RNDN);
        mpfr_add(r11055942, r11055937, r11055941, MPFR_RNDN);
        ;
        mpfr_mul(r11055944, r11055940, r11055926, MPFR_RNDN);
        mpfr_mul(r11055945, r11055944, r11055926, MPFR_RNDN);
        mpfr_mul(r11055946, r11055943, r11055945, MPFR_RNDN);
        mpfr_add(r11055947, r11055942, r11055946, MPFR_RNDN);
        ;
        mpfr_mul(r11055949, r11055945, r11055926, MPFR_RNDN);
        mpfr_mul(r11055950, r11055949, r11055926, MPFR_RNDN);
        mpfr_mul(r11055951, r11055948, r11055950, MPFR_RNDN);
        mpfr_add(r11055952, r11055947, r11055951, MPFR_RNDN);
        ;
        mpfr_mul(r11055954, r11055950, r11055926, MPFR_RNDN);
        mpfr_mul(r11055955, r11055954, r11055926, MPFR_RNDN);
        mpfr_mul(r11055956, r11055953, r11055955, MPFR_RNDN);
        mpfr_add(r11055957, r11055952, r11055956, MPFR_RNDN);
        return mpfr_get_d(r11055957, MPFR_RNDN);
}

static mpfr_t r11055958, r11055959, r11055960, r11055961, r11055962, r11055963, r11055964, r11055965, r11055966, r11055967, r11055968, r11055969, r11055970, r11055971, r11055972, r11055973, r11055974, r11055975, r11055976, r11055977, r11055978, r11055979, r11055980, r11055981, r11055982, r11055983, r11055984, r11055985, r11055986, r11055987, r11055988, r11055989, r11055990, r11055991;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11055958, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r11055959);
        mpfr_init(r11055960);
        mpfr_init(r11055961);
        mpfr_init(r11055962);
        mpfr_init_set_str(r11055963, "3", 10, MPFR_RNDN);
        mpfr_init(r11055964);
        mpfr_init(r11055965);
        mpfr_init(r11055966);
        mpfr_init_set_str(r11055967, "7", 10, MPFR_RNDN);
        mpfr_init(r11055968);
        mpfr_init_set_str(r11055969, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r11055970);
        mpfr_init_set_str(r11055971, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r11055972);
        mpfr_init(r11055973);
        mpfr_init(r11055974);
        mpfr_init_set_str(r11055975, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r11055976);
        mpfr_init_set_str(r11055977, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r11055978);
        mpfr_init(r11055979);
        mpfr_init(r11055980);
        mpfr_init(r11055981);
        mpfr_init(r11055982);
        mpfr_init(r11055983);
        mpfr_init(r11055984);
        mpfr_init(r11055985);
        mpfr_init_set_str(r11055986, "-319488.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055987, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r11055988);
        mpfr_init(r11055989);
        mpfr_init(r11055990);
        mpfr_init(r11055991);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11055959, x, MPFR_RNDN);
        mpfr_mul(r11055960, r11055958, r11055959, MPFR_RNDN);
        mpfr_mul(r11055961, r11055959, r11055959, MPFR_RNDN);
        mpfr_mul(r11055962, r11055960, r11055961, MPFR_RNDN);
        ;
        mpfr_pow(r11055964, r11055959, r11055963, MPFR_RNDN);
        mpfr_mul(r11055965, r11055964, r11055964, MPFR_RNDN);
        mpfr_mul(r11055966, r11055962, r11055965, MPFR_RNDN);
        ;
        mpfr_pow(r11055968, r11055959, r11055967, MPFR_RNDN);
        ;
        mpfr_mul(r11055970, r11055968, r11055969, MPFR_RNDN);
        ;
        mpfr_mul(r11055972, r11055971, r11055959, MPFR_RNDN);
        mpfr_add(r11055973, r11055970, r11055972, MPFR_RNDN);
        mpfr_add(r11055974, r11055966, r11055973, MPFR_RNDN);
        ;
        mpfr_mul(r11055976, r11055975, r11055959, MPFR_RNDN);
        ;
        mpfr_mul(r11055978, r11055959, r11055977, MPFR_RNDN);
        mpfr_mul(r11055979, r11055978, r11055961, MPFR_RNDN);
        mpfr_add(r11055980, r11055976, r11055979, MPFR_RNDN);
        mpfr_mul(r11055981, r11055961, r11055980, MPFR_RNDN);
        mpfr_add(r11055982, r11055974, r11055981, MPFR_RNDN);
        mpfr_mul(r11055983, r11055961, r11055961, MPFR_RNDN);
        mpfr_mul(r11055984, r11055983, r11055983, MPFR_RNDN);
        mpfr_mul(r11055985, r11055984, r11055964, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055988, r11055987, r11055961, MPFR_RNDN);
        mpfr_add(r11055989, r11055986, r11055988, MPFR_RNDN);
        mpfr_mul(r11055990, r11055985, r11055989, MPFR_RNDN);
        mpfr_add(r11055991, r11055982, r11055990, MPFR_RNDN);
        return mpfr_get_d(r11055991, MPFR_RNDN);
}

static mpfr_t r11055992, r11055993, r11055994, r11055995, r11055996, r11055997, r11055998, r11055999, r11056000, r11056001, r11056002, r11056003, r11056004, r11056005, r11056006, r11056007, r11056008, r11056009, r11056010, r11056011, r11056012, r11056013, r11056014, r11056015, r11056016, r11056017, r11056018, r11056019, r11056020, r11056021, r11056022, r11056023, r11056024, r11056025;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11055992, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r11055993);
        mpfr_init(r11055994);
        mpfr_init(r11055995);
        mpfr_init(r11055996);
        mpfr_init_set_str(r11055997, "3", 10, MPFR_RNDN);
        mpfr_init(r11055998);
        mpfr_init(r11055999);
        mpfr_init(r11056000);
        mpfr_init_set_str(r11056001, "7", 10, MPFR_RNDN);
        mpfr_init(r11056002);
        mpfr_init_set_str(r11056003, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r11056004);
        mpfr_init_set_str(r11056005, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r11056006);
        mpfr_init(r11056007);
        mpfr_init(r11056008);
        mpfr_init_set_str(r11056009, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r11056010);
        mpfr_init_set_str(r11056011, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r11056012);
        mpfr_init(r11056013);
        mpfr_init(r11056014);
        mpfr_init(r11056015);
        mpfr_init(r11056016);
        mpfr_init(r11056017);
        mpfr_init(r11056018);
        mpfr_init(r11056019);
        mpfr_init_set_str(r11056020, "-319488.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11056021, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r11056022);
        mpfr_init(r11056023);
        mpfr_init(r11056024);
        mpfr_init(r11056025);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11055993, x, MPFR_RNDN);
        mpfr_mul(r11055994, r11055992, r11055993, MPFR_RNDN);
        mpfr_mul(r11055995, r11055993, r11055993, MPFR_RNDN);
        mpfr_mul(r11055996, r11055994, r11055995, MPFR_RNDN);
        ;
        mpfr_pow(r11055998, r11055993, r11055997, MPFR_RNDN);
        mpfr_mul(r11055999, r11055998, r11055998, MPFR_RNDN);
        mpfr_mul(r11056000, r11055996, r11055999, MPFR_RNDN);
        ;
        mpfr_pow(r11056002, r11055993, r11056001, MPFR_RNDN);
        ;
        mpfr_mul(r11056004, r11056002, r11056003, MPFR_RNDN);
        ;
        mpfr_mul(r11056006, r11056005, r11055993, MPFR_RNDN);
        mpfr_add(r11056007, r11056004, r11056006, MPFR_RNDN);
        mpfr_add(r11056008, r11056000, r11056007, MPFR_RNDN);
        ;
        mpfr_mul(r11056010, r11056009, r11055993, MPFR_RNDN);
        ;
        mpfr_mul(r11056012, r11055993, r11056011, MPFR_RNDN);
        mpfr_mul(r11056013, r11056012, r11055995, MPFR_RNDN);
        mpfr_add(r11056014, r11056010, r11056013, MPFR_RNDN);
        mpfr_mul(r11056015, r11055995, r11056014, MPFR_RNDN);
        mpfr_add(r11056016, r11056008, r11056015, MPFR_RNDN);
        mpfr_mul(r11056017, r11055995, r11055995, MPFR_RNDN);
        mpfr_mul(r11056018, r11056017, r11056017, MPFR_RNDN);
        mpfr_mul(r11056019, r11056018, r11055998, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11056022, r11056021, r11055995, MPFR_RNDN);
        mpfr_add(r11056023, r11056020, r11056022, MPFR_RNDN);
        mpfr_mul(r11056024, r11056019, r11056023, MPFR_RNDN);
        mpfr_add(r11056025, r11056016, r11056024, MPFR_RNDN);
        return mpfr_get_d(r11056025, MPFR_RNDN);
}

