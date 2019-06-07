#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r49138806 = 2.460938;
        float r49138807 = x;
        float r49138808 = r49138806 * r49138807;
        float r49138809 = -36.09375;
        float r49138810 = r49138807 * r49138807;
        float r49138811 = r49138810 * r49138807;
        float r49138812 = r49138809 * r49138811;
        float r49138813 = r49138808 + r49138812;
        float r49138814 = 140.765625;
        float r49138815 = r49138811 * r49138807;
        float r49138816 = r49138815 * r49138807;
        float r49138817 = r49138814 * r49138816;
        float r49138818 = r49138813 + r49138817;
        float r49138819 = -201.09375;
        float r49138820 = r49138816 * r49138807;
        float r49138821 = r49138820 * r49138807;
        float r49138822 = r49138819 * r49138821;
        float r49138823 = r49138818 + r49138822;
        float r49138824 = 94.960938;
        float r49138825 = r49138821 * r49138807;
        float r49138826 = r49138825 * r49138807;
        float r49138827 = r49138824 * r49138826;
        float r49138828 = r49138823 + r49138827;
        return r49138828;
}

double f_id(double x) {
        double r49138829 = 2.460938;
        double r49138830 = x;
        double r49138831 = r49138829 * r49138830;
        double r49138832 = -36.09375;
        double r49138833 = r49138830 * r49138830;
        double r49138834 = r49138833 * r49138830;
        double r49138835 = r49138832 * r49138834;
        double r49138836 = r49138831 + r49138835;
        double r49138837 = 140.765625;
        double r49138838 = r49138834 * r49138830;
        double r49138839 = r49138838 * r49138830;
        double r49138840 = r49138837 * r49138839;
        double r49138841 = r49138836 + r49138840;
        double r49138842 = -201.09375;
        double r49138843 = r49138839 * r49138830;
        double r49138844 = r49138843 * r49138830;
        double r49138845 = r49138842 * r49138844;
        double r49138846 = r49138841 + r49138845;
        double r49138847 = 94.960938;
        double r49138848 = r49138844 * r49138830;
        double r49138849 = r49138848 * r49138830;
        double r49138850 = r49138847 * r49138849;
        double r49138851 = r49138846 + r49138850;
        return r49138851;
}


double f_of(float x) {
        float r49138852 = x;
        float r49138853 = 3;
        float r49138854 = pow(r49138852, r49138853);
        float r49138855 = r49138852 * r49138852;
        float r49138856 = r49138854 * r49138855;
        float r49138857 = 140.765625;
        float r49138858 = -201.09375;
        float r49138859 = r49138855 * r49138858;
        float r49138860 = r49138857 + r49138859;
        float r49138861 = r49138856 * r49138860;
        float r49138862 = 2.460938;
        float r49138863 = r49138852 * r49138862;
        float r49138864 = exp(r49138863);
        float r49138865 = -36.09375;
        float r49138866 = exp(r49138865);
        float r49138867 = pow(r49138866, r49138855);
        float r49138868 = pow(r49138867, r49138852);
        float r49138869 = r49138864 * r49138868;
        float r49138870 = 94.960938;
        float r49138871 = r49138852 * r49138870;
        float r49138872 = exp(r49138871);
        float r49138873 = 1;
        float r49138874 = r49138873 + r49138853;
        float r49138875 = pow(r49138855, r49138874);
        float r49138876 = pow(r49138872, r49138875);
        float r49138877 = r49138869 * r49138876;
        float r49138878 = log(r49138877);
        float r49138879 = r49138861 + r49138878;
        return r49138879;
}

double f_od(double x) {
        double r49138880 = x;
        double r49138881 = 3;
        double r49138882 = pow(r49138880, r49138881);
        double r49138883 = r49138880 * r49138880;
        double r49138884 = r49138882 * r49138883;
        double r49138885 = 140.765625;
        double r49138886 = -201.09375;
        double r49138887 = r49138883 * r49138886;
        double r49138888 = r49138885 + r49138887;
        double r49138889 = r49138884 * r49138888;
        double r49138890 = 2.460938;
        double r49138891 = r49138880 * r49138890;
        double r49138892 = exp(r49138891);
        double r49138893 = -36.09375;
        double r49138894 = exp(r49138893);
        double r49138895 = pow(r49138894, r49138883);
        double r49138896 = pow(r49138895, r49138880);
        double r49138897 = r49138892 * r49138896;
        double r49138898 = 94.960938;
        double r49138899 = r49138880 * r49138898;
        double r49138900 = exp(r49138899);
        double r49138901 = 1;
        double r49138902 = r49138901 + r49138881;
        double r49138903 = pow(r49138883, r49138902);
        double r49138904 = pow(r49138900, r49138903);
        double r49138905 = r49138897 * r49138904;
        double r49138906 = log(r49138905);
        double r49138907 = r49138889 + r49138906;
        return r49138907;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49138908, r49138909, r49138910, r49138911, r49138912, r49138913, r49138914, r49138915, r49138916, r49138917, r49138918, r49138919, r49138920, r49138921, r49138922, r49138923, r49138924, r49138925, r49138926, r49138927, r49138928, r49138929, r49138930;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49138908, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r49138909);
        mpfr_init(r49138910);
        mpfr_init_set_str(r49138911, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r49138912);
        mpfr_init(r49138913);
        mpfr_init(r49138914);
        mpfr_init(r49138915);
        mpfr_init_set_str(r49138916, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r49138917);
        mpfr_init(r49138918);
        mpfr_init(r49138919);
        mpfr_init(r49138920);
        mpfr_init_set_str(r49138921, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r49138922);
        mpfr_init(r49138923);
        mpfr_init(r49138924);
        mpfr_init(r49138925);
        mpfr_init_set_str(r49138926, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r49138927);
        mpfr_init(r49138928);
        mpfr_init(r49138929);
        mpfr_init(r49138930);
}

double f_im(double x) {
        ;
        mpfr_set_d(r49138909, x, MPFR_RNDN);
        mpfr_mul(r49138910, r49138908, r49138909, MPFR_RNDN);
        ;
        mpfr_mul(r49138912, r49138909, r49138909, MPFR_RNDN);
        mpfr_mul(r49138913, r49138912, r49138909, MPFR_RNDN);
        mpfr_mul(r49138914, r49138911, r49138913, MPFR_RNDN);
        mpfr_add(r49138915, r49138910, r49138914, MPFR_RNDN);
        ;
        mpfr_mul(r49138917, r49138913, r49138909, MPFR_RNDN);
        mpfr_mul(r49138918, r49138917, r49138909, MPFR_RNDN);
        mpfr_mul(r49138919, r49138916, r49138918, MPFR_RNDN);
        mpfr_add(r49138920, r49138915, r49138919, MPFR_RNDN);
        ;
        mpfr_mul(r49138922, r49138918, r49138909, MPFR_RNDN);
        mpfr_mul(r49138923, r49138922, r49138909, MPFR_RNDN);
        mpfr_mul(r49138924, r49138921, r49138923, MPFR_RNDN);
        mpfr_add(r49138925, r49138920, r49138924, MPFR_RNDN);
        ;
        mpfr_mul(r49138927, r49138923, r49138909, MPFR_RNDN);
        mpfr_mul(r49138928, r49138927, r49138909, MPFR_RNDN);
        mpfr_mul(r49138929, r49138926, r49138928, MPFR_RNDN);
        mpfr_add(r49138930, r49138925, r49138929, MPFR_RNDN);
        return mpfr_get_d(r49138930, MPFR_RNDN);
}

static mpfr_t r49138931, r49138932, r49138933, r49138934, r49138935, r49138936, r49138937, r49138938, r49138939, r49138940, r49138941, r49138942, r49138943, r49138944, r49138945, r49138946, r49138947, r49138948, r49138949, r49138950, r49138951, r49138952, r49138953, r49138954, r49138955, r49138956, r49138957, r49138958;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49138931);
        mpfr_init_set_str(r49138932, "3", 10, MPFR_RNDN);
        mpfr_init(r49138933);
        mpfr_init(r49138934);
        mpfr_init(r49138935);
        mpfr_init_set_str(r49138936, "140.765625", 10, MPFR_RNDN);
        mpfr_init_set_str(r49138937, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r49138938);
        mpfr_init(r49138939);
        mpfr_init(r49138940);
        mpfr_init_set_str(r49138941, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r49138942);
        mpfr_init(r49138943);
        mpfr_init_set_str(r49138944, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r49138945);
        mpfr_init(r49138946);
        mpfr_init(r49138947);
        mpfr_init(r49138948);
        mpfr_init_set_str(r49138949, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r49138950);
        mpfr_init(r49138951);
        mpfr_init_set_str(r49138952, "1", 10, MPFR_RNDN);
        mpfr_init(r49138953);
        mpfr_init(r49138954);
        mpfr_init(r49138955);
        mpfr_init(r49138956);
        mpfr_init(r49138957);
        mpfr_init(r49138958);
}

double f_fm(double x) {
        mpfr_set_d(r49138931, x, MPFR_RNDN);
        ;
        mpfr_pow(r49138933, r49138931, r49138932, MPFR_RNDN);
        mpfr_mul(r49138934, r49138931, r49138931, MPFR_RNDN);
        mpfr_mul(r49138935, r49138933, r49138934, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r49138938, r49138934, r49138937, MPFR_RNDN);
        mpfr_add(r49138939, r49138936, r49138938, MPFR_RNDN);
        mpfr_mul(r49138940, r49138935, r49138939, MPFR_RNDN);
        ;
        mpfr_mul(r49138942, r49138931, r49138941, MPFR_RNDN);
        mpfr_exp(r49138943, r49138942, MPFR_RNDN);
        ;
        mpfr_exp(r49138945, r49138944, MPFR_RNDN);
        mpfr_pow(r49138946, r49138945, r49138934, MPFR_RNDN);
        mpfr_pow(r49138947, r49138946, r49138931, MPFR_RNDN);
        mpfr_mul(r49138948, r49138943, r49138947, MPFR_RNDN);
        ;
        mpfr_mul(r49138950, r49138931, r49138949, MPFR_RNDN);
        mpfr_exp(r49138951, r49138950, MPFR_RNDN);
        ;
        mpfr_add(r49138953, r49138952, r49138932, MPFR_RNDN);
        mpfr_pow(r49138954, r49138934, r49138953, MPFR_RNDN);
        mpfr_pow(r49138955, r49138951, r49138954, MPFR_RNDN);
        mpfr_mul(r49138956, r49138948, r49138955, MPFR_RNDN);
        mpfr_log(r49138957, r49138956, MPFR_RNDN);
        mpfr_add(r49138958, r49138940, r49138957, MPFR_RNDN);
        return mpfr_get_d(r49138958, MPFR_RNDN);
}

static mpfr_t r49138959, r49138960, r49138961, r49138962, r49138963, r49138964, r49138965, r49138966, r49138967, r49138968, r49138969, r49138970, r49138971, r49138972, r49138973, r49138974, r49138975, r49138976, r49138977, r49138978, r49138979, r49138980, r49138981, r49138982, r49138983, r49138984, r49138985, r49138986;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49138959);
        mpfr_init_set_str(r49138960, "3", 10, MPFR_RNDN);
        mpfr_init(r49138961);
        mpfr_init(r49138962);
        mpfr_init(r49138963);
        mpfr_init_set_str(r49138964, "140.765625", 10, MPFR_RNDN);
        mpfr_init_set_str(r49138965, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r49138966);
        mpfr_init(r49138967);
        mpfr_init(r49138968);
        mpfr_init_set_str(r49138969, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r49138970);
        mpfr_init(r49138971);
        mpfr_init_set_str(r49138972, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r49138973);
        mpfr_init(r49138974);
        mpfr_init(r49138975);
        mpfr_init(r49138976);
        mpfr_init_set_str(r49138977, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r49138978);
        mpfr_init(r49138979);
        mpfr_init_set_str(r49138980, "1", 10, MPFR_RNDN);
        mpfr_init(r49138981);
        mpfr_init(r49138982);
        mpfr_init(r49138983);
        mpfr_init(r49138984);
        mpfr_init(r49138985);
        mpfr_init(r49138986);
}

double f_dm(double x) {
        mpfr_set_d(r49138959, x, MPFR_RNDN);
        ;
        mpfr_pow(r49138961, r49138959, r49138960, MPFR_RNDN);
        mpfr_mul(r49138962, r49138959, r49138959, MPFR_RNDN);
        mpfr_mul(r49138963, r49138961, r49138962, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r49138966, r49138962, r49138965, MPFR_RNDN);
        mpfr_add(r49138967, r49138964, r49138966, MPFR_RNDN);
        mpfr_mul(r49138968, r49138963, r49138967, MPFR_RNDN);
        ;
        mpfr_mul(r49138970, r49138959, r49138969, MPFR_RNDN);
        mpfr_exp(r49138971, r49138970, MPFR_RNDN);
        ;
        mpfr_exp(r49138973, r49138972, MPFR_RNDN);
        mpfr_pow(r49138974, r49138973, r49138962, MPFR_RNDN);
        mpfr_pow(r49138975, r49138974, r49138959, MPFR_RNDN);
        mpfr_mul(r49138976, r49138971, r49138975, MPFR_RNDN);
        ;
        mpfr_mul(r49138978, r49138959, r49138977, MPFR_RNDN);
        mpfr_exp(r49138979, r49138978, MPFR_RNDN);
        ;
        mpfr_add(r49138981, r49138980, r49138960, MPFR_RNDN);
        mpfr_pow(r49138982, r49138962, r49138981, MPFR_RNDN);
        mpfr_pow(r49138983, r49138979, r49138982, MPFR_RNDN);
        mpfr_mul(r49138984, r49138976, r49138983, MPFR_RNDN);
        mpfr_log(r49138985, r49138984, MPFR_RNDN);
        mpfr_add(r49138986, r49138968, r49138985, MPFR_RNDN);
        return mpfr_get_d(r49138986, MPFR_RNDN);
}

