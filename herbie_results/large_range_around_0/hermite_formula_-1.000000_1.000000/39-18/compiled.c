#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r7996740 = -17643225600.0;
        float r7996741 = 317578060800.0;
        float r7996742 = x;
        float r7996743 = r7996742 * r7996742;
        float r7996744 = r7996741 * r7996743;
        float r7996745 = r7996740 + r7996744;
        float r7996746 = -846874828800.0;
        float r7996747 = r7996743 * r7996742;
        float r7996748 = r7996747 * r7996742;
        float r7996749 = r7996746 * r7996748;
        float r7996750 = r7996745 + r7996749;
        float r7996751 = 790416506880.0;
        float r7996752 = r7996748 * r7996742;
        float r7996753 = r7996752 * r7996742;
        float r7996754 = r7996751 * r7996753;
        float r7996755 = r7996750 + r7996754;
        float r7996756 = -338749931520.0;
        float r7996757 = r7996753 * r7996742;
        float r7996758 = r7996757 * r7996742;
        float r7996759 = r7996756 * r7996758;
        float r7996760 = r7996755 + r7996759;
        float r7996761 = 75277762560.0;
        float r7996762 = r7996758 * r7996742;
        float r7996763 = r7996762 * r7996742;
        float r7996764 = r7996761 * r7996763;
        float r7996765 = r7996760 + r7996764;
        float r7996766 = -9124577280.0;
        float r7996767 = r7996763 * r7996742;
        float r7996768 = r7996767 * r7996742;
        float r7996769 = r7996766 * r7996768;
        float r7996770 = r7996765 + r7996769;
        float r7996771 = 601620480.0;
        float r7996772 = r7996768 * r7996742;
        float r7996773 = r7996772 * r7996742;
        float r7996774 = r7996771 * r7996773;
        float r7996775 = r7996770 + r7996774;
        float r7996776 = -20054016.0;
        float r7996777 = r7996773 * r7996742;
        float r7996778 = r7996777 * r7996742;
        float r7996779 = r7996776 * r7996778;
        float r7996780 = r7996775 + r7996779;
        float r7996781 = 262144.0;
        float r7996782 = r7996778 * r7996742;
        float r7996783 = r7996782 * r7996742;
        float r7996784 = r7996781 * r7996783;
        float r7996785 = r7996780 + r7996784;
        return r7996785;
}

double f_id(double x) {
        double r7996786 = -17643225600.0;
        double r7996787 = 317578060800.0;
        double r7996788 = x;
        double r7996789 = r7996788 * r7996788;
        double r7996790 = r7996787 * r7996789;
        double r7996791 = r7996786 + r7996790;
        double r7996792 = -846874828800.0;
        double r7996793 = r7996789 * r7996788;
        double r7996794 = r7996793 * r7996788;
        double r7996795 = r7996792 * r7996794;
        double r7996796 = r7996791 + r7996795;
        double r7996797 = 790416506880.0;
        double r7996798 = r7996794 * r7996788;
        double r7996799 = r7996798 * r7996788;
        double r7996800 = r7996797 * r7996799;
        double r7996801 = r7996796 + r7996800;
        double r7996802 = -338749931520.0;
        double r7996803 = r7996799 * r7996788;
        double r7996804 = r7996803 * r7996788;
        double r7996805 = r7996802 * r7996804;
        double r7996806 = r7996801 + r7996805;
        double r7996807 = 75277762560.0;
        double r7996808 = r7996804 * r7996788;
        double r7996809 = r7996808 * r7996788;
        double r7996810 = r7996807 * r7996809;
        double r7996811 = r7996806 + r7996810;
        double r7996812 = -9124577280.0;
        double r7996813 = r7996809 * r7996788;
        double r7996814 = r7996813 * r7996788;
        double r7996815 = r7996812 * r7996814;
        double r7996816 = r7996811 + r7996815;
        double r7996817 = 601620480.0;
        double r7996818 = r7996814 * r7996788;
        double r7996819 = r7996818 * r7996788;
        double r7996820 = r7996817 * r7996819;
        double r7996821 = r7996816 + r7996820;
        double r7996822 = -20054016.0;
        double r7996823 = r7996819 * r7996788;
        double r7996824 = r7996823 * r7996788;
        double r7996825 = r7996822 * r7996824;
        double r7996826 = r7996821 + r7996825;
        double r7996827 = 262144.0;
        double r7996828 = r7996824 * r7996788;
        double r7996829 = r7996828 * r7996788;
        double r7996830 = r7996827 * r7996829;
        double r7996831 = r7996826 + r7996830;
        return r7996831;
}


double f_of(float x) {
        float r7996832 = x;
        float r7996833 = r7996832 * r7996832;
        float r7996834 = r7996833 * r7996833;
        float r7996835 = r7996834 * r7996834;
        float r7996836 = r7996834 * r7996835;
        float r7996837 = -9124577280.0;
        float r7996838 = 601620480.0;
        float r7996839 = r7996838 * r7996833;
        float r7996840 = r7996837 + r7996839;
        float r7996841 = r7996836 * r7996840;
        float r7996842 = -338749931520.0;
        float r7996843 = 75277762560.0;
        float r7996844 = r7996843 * r7996833;
        float r7996845 = r7996842 + r7996844;
        float r7996846 = r7996835 * r7996845;
        float r7996847 = r7996841 + r7996846;
        float r7996848 = 317578060800.0;
        float r7996849 = r7996832 * r7996848;
        float r7996850 = r7996849 * r7996832;
        float r7996851 = -17643225600.0;
        float r7996852 = r7996850 + r7996851;
        float r7996853 = 790416506880.0;
        float r7996854 = r7996833 * r7996853;
        float r7996855 = -846874828800.0;
        float r7996856 = r7996854 + r7996855;
        float r7996857 = r7996834 * r7996856;
        float r7996858 = r7996852 + r7996857;
        float r7996859 = r7996847 + r7996858;
        float r7996860 = r7996836 * r7996834;
        float r7996861 = 262144.0;
        float r7996862 = r7996861 * r7996833;
        float r7996863 = -20054016.0;
        float r7996864 = r7996862 + r7996863;
        float r7996865 = r7996860 * r7996864;
        float r7996866 = r7996859 + r7996865;
        return r7996866;
}

double f_od(double x) {
        double r7996867 = x;
        double r7996868 = r7996867 * r7996867;
        double r7996869 = r7996868 * r7996868;
        double r7996870 = r7996869 * r7996869;
        double r7996871 = r7996869 * r7996870;
        double r7996872 = -9124577280.0;
        double r7996873 = 601620480.0;
        double r7996874 = r7996873 * r7996868;
        double r7996875 = r7996872 + r7996874;
        double r7996876 = r7996871 * r7996875;
        double r7996877 = -338749931520.0;
        double r7996878 = 75277762560.0;
        double r7996879 = r7996878 * r7996868;
        double r7996880 = r7996877 + r7996879;
        double r7996881 = r7996870 * r7996880;
        double r7996882 = r7996876 + r7996881;
        double r7996883 = 317578060800.0;
        double r7996884 = r7996867 * r7996883;
        double r7996885 = r7996884 * r7996867;
        double r7996886 = -17643225600.0;
        double r7996887 = r7996885 + r7996886;
        double r7996888 = 790416506880.0;
        double r7996889 = r7996868 * r7996888;
        double r7996890 = -846874828800.0;
        double r7996891 = r7996889 + r7996890;
        double r7996892 = r7996869 * r7996891;
        double r7996893 = r7996887 + r7996892;
        double r7996894 = r7996882 + r7996893;
        double r7996895 = r7996871 * r7996869;
        double r7996896 = 262144.0;
        double r7996897 = r7996896 * r7996868;
        double r7996898 = -20054016.0;
        double r7996899 = r7996897 + r7996898;
        double r7996900 = r7996895 * r7996899;
        double r7996901 = r7996894 + r7996900;
        return r7996901;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7996902, r7996903, r7996904, r7996905, r7996906, r7996907, r7996908, r7996909, r7996910, r7996911, r7996912, r7996913, r7996914, r7996915, r7996916, r7996917, r7996918, r7996919, r7996920, r7996921, r7996922, r7996923, r7996924, r7996925, r7996926, r7996927, r7996928, r7996929, r7996930, r7996931, r7996932, r7996933, r7996934, r7996935, r7996936, r7996937, r7996938, r7996939, r7996940, r7996941, r7996942, r7996943, r7996944, r7996945, r7996946, r7996947;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7996902, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7996903, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r7996904);
        mpfr_init(r7996905);
        mpfr_init(r7996906);
        mpfr_init(r7996907);
        mpfr_init_set_str(r7996908, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r7996909);
        mpfr_init(r7996910);
        mpfr_init(r7996911);
        mpfr_init(r7996912);
        mpfr_init_set_str(r7996913, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r7996914);
        mpfr_init(r7996915);
        mpfr_init(r7996916);
        mpfr_init(r7996917);
        mpfr_init_set_str(r7996918, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r7996919);
        mpfr_init(r7996920);
        mpfr_init(r7996921);
        mpfr_init(r7996922);
        mpfr_init_set_str(r7996923, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r7996924);
        mpfr_init(r7996925);
        mpfr_init(r7996926);
        mpfr_init(r7996927);
        mpfr_init_set_str(r7996928, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init(r7996929);
        mpfr_init(r7996930);
        mpfr_init(r7996931);
        mpfr_init(r7996932);
        mpfr_init_set_str(r7996933, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r7996934);
        mpfr_init(r7996935);
        mpfr_init(r7996936);
        mpfr_init(r7996937);
        mpfr_init_set_str(r7996938, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r7996939);
        mpfr_init(r7996940);
        mpfr_init(r7996941);
        mpfr_init(r7996942);
        mpfr_init_set_str(r7996943, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r7996944);
        mpfr_init(r7996945);
        mpfr_init(r7996946);
        mpfr_init(r7996947);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7996904, x, MPFR_RNDN);
        mpfr_mul(r7996905, r7996904, r7996904, MPFR_RNDN);
        mpfr_mul(r7996906, r7996903, r7996905, MPFR_RNDN);
        mpfr_add(r7996907, r7996902, r7996906, MPFR_RNDN);
        ;
        mpfr_mul(r7996909, r7996905, r7996904, MPFR_RNDN);
        mpfr_mul(r7996910, r7996909, r7996904, MPFR_RNDN);
        mpfr_mul(r7996911, r7996908, r7996910, MPFR_RNDN);
        mpfr_add(r7996912, r7996907, r7996911, MPFR_RNDN);
        ;
        mpfr_mul(r7996914, r7996910, r7996904, MPFR_RNDN);
        mpfr_mul(r7996915, r7996914, r7996904, MPFR_RNDN);
        mpfr_mul(r7996916, r7996913, r7996915, MPFR_RNDN);
        mpfr_add(r7996917, r7996912, r7996916, MPFR_RNDN);
        ;
        mpfr_mul(r7996919, r7996915, r7996904, MPFR_RNDN);
        mpfr_mul(r7996920, r7996919, r7996904, MPFR_RNDN);
        mpfr_mul(r7996921, r7996918, r7996920, MPFR_RNDN);
        mpfr_add(r7996922, r7996917, r7996921, MPFR_RNDN);
        ;
        mpfr_mul(r7996924, r7996920, r7996904, MPFR_RNDN);
        mpfr_mul(r7996925, r7996924, r7996904, MPFR_RNDN);
        mpfr_mul(r7996926, r7996923, r7996925, MPFR_RNDN);
        mpfr_add(r7996927, r7996922, r7996926, MPFR_RNDN);
        ;
        mpfr_mul(r7996929, r7996925, r7996904, MPFR_RNDN);
        mpfr_mul(r7996930, r7996929, r7996904, MPFR_RNDN);
        mpfr_mul(r7996931, r7996928, r7996930, MPFR_RNDN);
        mpfr_add(r7996932, r7996927, r7996931, MPFR_RNDN);
        ;
        mpfr_mul(r7996934, r7996930, r7996904, MPFR_RNDN);
        mpfr_mul(r7996935, r7996934, r7996904, MPFR_RNDN);
        mpfr_mul(r7996936, r7996933, r7996935, MPFR_RNDN);
        mpfr_add(r7996937, r7996932, r7996936, MPFR_RNDN);
        ;
        mpfr_mul(r7996939, r7996935, r7996904, MPFR_RNDN);
        mpfr_mul(r7996940, r7996939, r7996904, MPFR_RNDN);
        mpfr_mul(r7996941, r7996938, r7996940, MPFR_RNDN);
        mpfr_add(r7996942, r7996937, r7996941, MPFR_RNDN);
        ;
        mpfr_mul(r7996944, r7996940, r7996904, MPFR_RNDN);
        mpfr_mul(r7996945, r7996944, r7996904, MPFR_RNDN);
        mpfr_mul(r7996946, r7996943, r7996945, MPFR_RNDN);
        mpfr_add(r7996947, r7996942, r7996946, MPFR_RNDN);
        return mpfr_get_d(r7996947, MPFR_RNDN);
}

static mpfr_t r7996948, r7996949, r7996950, r7996951, r7996952, r7996953, r7996954, r7996955, r7996956, r7996957, r7996958, r7996959, r7996960, r7996961, r7996962, r7996963, r7996964, r7996965, r7996966, r7996967, r7996968, r7996969, r7996970, r7996971, r7996972, r7996973, r7996974, r7996975, r7996976, r7996977, r7996978, r7996979, r7996980, r7996981, r7996982;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7996948);
        mpfr_init(r7996949);
        mpfr_init(r7996950);
        mpfr_init(r7996951);
        mpfr_init(r7996952);
        mpfr_init_set_str(r7996953, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7996954, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r7996955);
        mpfr_init(r7996956);
        mpfr_init(r7996957);
        mpfr_init_set_str(r7996958, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7996959, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r7996960);
        mpfr_init(r7996961);
        mpfr_init(r7996962);
        mpfr_init(r7996963);
        mpfr_init_set_str(r7996964, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r7996965);
        mpfr_init(r7996966);
        mpfr_init_set_str(r7996967, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init(r7996968);
        mpfr_init_set_str(r7996969, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r7996970);
        mpfr_init_set_str(r7996971, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r7996972);
        mpfr_init(r7996973);
        mpfr_init(r7996974);
        mpfr_init(r7996975);
        mpfr_init(r7996976);
        mpfr_init_set_str(r7996977, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r7996978);
        mpfr_init_set_str(r7996979, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r7996980);
        mpfr_init(r7996981);
        mpfr_init(r7996982);
}

double f_fm(double x) {
        mpfr_set_d(r7996948, x, MPFR_RNDN);
        mpfr_mul(r7996949, r7996948, r7996948, MPFR_RNDN);
        mpfr_mul(r7996950, r7996949, r7996949, MPFR_RNDN);
        mpfr_mul(r7996951, r7996950, r7996950, MPFR_RNDN);
        mpfr_mul(r7996952, r7996950, r7996951, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7996955, r7996954, r7996949, MPFR_RNDN);
        mpfr_add(r7996956, r7996953, r7996955, MPFR_RNDN);
        mpfr_mul(r7996957, r7996952, r7996956, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7996960, r7996959, r7996949, MPFR_RNDN);
        mpfr_add(r7996961, r7996958, r7996960, MPFR_RNDN);
        mpfr_mul(r7996962, r7996951, r7996961, MPFR_RNDN);
        mpfr_add(r7996963, r7996957, r7996962, MPFR_RNDN);
        ;
        mpfr_mul(r7996965, r7996948, r7996964, MPFR_RNDN);
        mpfr_mul(r7996966, r7996965, r7996948, MPFR_RNDN);
        ;
        mpfr_add(r7996968, r7996966, r7996967, MPFR_RNDN);
        ;
        mpfr_mul(r7996970, r7996949, r7996969, MPFR_RNDN);
        ;
        mpfr_add(r7996972, r7996970, r7996971, MPFR_RNDN);
        mpfr_mul(r7996973, r7996950, r7996972, MPFR_RNDN);
        mpfr_add(r7996974, r7996968, r7996973, MPFR_RNDN);
        mpfr_add(r7996975, r7996963, r7996974, MPFR_RNDN);
        mpfr_mul(r7996976, r7996952, r7996950, MPFR_RNDN);
        ;
        mpfr_mul(r7996978, r7996977, r7996949, MPFR_RNDN);
        ;
        mpfr_add(r7996980, r7996978, r7996979, MPFR_RNDN);
        mpfr_mul(r7996981, r7996976, r7996980, MPFR_RNDN);
        mpfr_add(r7996982, r7996975, r7996981, MPFR_RNDN);
        return mpfr_get_d(r7996982, MPFR_RNDN);
}

static mpfr_t r7996983, r7996984, r7996985, r7996986, r7996987, r7996988, r7996989, r7996990, r7996991, r7996992, r7996993, r7996994, r7996995, r7996996, r7996997, r7996998, r7996999, r7997000, r7997001, r7997002, r7997003, r7997004, r7997005, r7997006, r7997007, r7997008, r7997009, r7997010, r7997011, r7997012, r7997013, r7997014, r7997015, r7997016, r7997017;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7996983);
        mpfr_init(r7996984);
        mpfr_init(r7996985);
        mpfr_init(r7996986);
        mpfr_init(r7996987);
        mpfr_init_set_str(r7996988, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7996989, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r7996990);
        mpfr_init(r7996991);
        mpfr_init(r7996992);
        mpfr_init_set_str(r7996993, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7996994, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r7996995);
        mpfr_init(r7996996);
        mpfr_init(r7996997);
        mpfr_init(r7996998);
        mpfr_init_set_str(r7996999, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r7997000);
        mpfr_init(r7997001);
        mpfr_init_set_str(r7997002, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init(r7997003);
        mpfr_init_set_str(r7997004, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r7997005);
        mpfr_init_set_str(r7997006, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r7997007);
        mpfr_init(r7997008);
        mpfr_init(r7997009);
        mpfr_init(r7997010);
        mpfr_init(r7997011);
        mpfr_init_set_str(r7997012, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r7997013);
        mpfr_init_set_str(r7997014, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r7997015);
        mpfr_init(r7997016);
        mpfr_init(r7997017);
}

double f_dm(double x) {
        mpfr_set_d(r7996983, x, MPFR_RNDN);
        mpfr_mul(r7996984, r7996983, r7996983, MPFR_RNDN);
        mpfr_mul(r7996985, r7996984, r7996984, MPFR_RNDN);
        mpfr_mul(r7996986, r7996985, r7996985, MPFR_RNDN);
        mpfr_mul(r7996987, r7996985, r7996986, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7996990, r7996989, r7996984, MPFR_RNDN);
        mpfr_add(r7996991, r7996988, r7996990, MPFR_RNDN);
        mpfr_mul(r7996992, r7996987, r7996991, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7996995, r7996994, r7996984, MPFR_RNDN);
        mpfr_add(r7996996, r7996993, r7996995, MPFR_RNDN);
        mpfr_mul(r7996997, r7996986, r7996996, MPFR_RNDN);
        mpfr_add(r7996998, r7996992, r7996997, MPFR_RNDN);
        ;
        mpfr_mul(r7997000, r7996983, r7996999, MPFR_RNDN);
        mpfr_mul(r7997001, r7997000, r7996983, MPFR_RNDN);
        ;
        mpfr_add(r7997003, r7997001, r7997002, MPFR_RNDN);
        ;
        mpfr_mul(r7997005, r7996984, r7997004, MPFR_RNDN);
        ;
        mpfr_add(r7997007, r7997005, r7997006, MPFR_RNDN);
        mpfr_mul(r7997008, r7996985, r7997007, MPFR_RNDN);
        mpfr_add(r7997009, r7997003, r7997008, MPFR_RNDN);
        mpfr_add(r7997010, r7996998, r7997009, MPFR_RNDN);
        mpfr_mul(r7997011, r7996987, r7996985, MPFR_RNDN);
        ;
        mpfr_mul(r7997013, r7997012, r7996984, MPFR_RNDN);
        ;
        mpfr_add(r7997015, r7997013, r7997014, MPFR_RNDN);
        mpfr_mul(r7997016, r7997011, r7997015, MPFR_RNDN);
        mpfr_add(r7997017, r7997010, r7997016, MPFR_RNDN);
        return mpfr_get_d(r7997017, MPFR_RNDN);
}

