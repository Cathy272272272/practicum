#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r6862741 = 0.225586;
        float r6862742 = -17.595703;
        float r6862743 = x;
        float r6862744 = r6862743 * r6862743;
        float r6862745 = r6862742 * r6862744;
        float r6862746 = r6862741 + r6862745;
        float r6862747 = 219.946289;
        float r6862748 = r6862744 * r6862743;
        float r6862749 = r6862748 * r6862743;
        float r6862750 = r6862747 * r6862749;
        float r6862751 = r6862746 + r6862750;
        float r6862752 = -997.089844;
        float r6862753 = r6862749 * r6862743;
        float r6862754 = r6862753 * r6862743;
        float r6862755 = r6862752 * r6862754;
        float r6862756 = r6862751 + r6862755;
        float r6862757 = 2029.790039;
        float r6862758 = r6862754 * r6862743;
        float r6862759 = r6862758 * r6862743;
        float r6862760 = r6862757 * r6862759;
        float r6862761 = r6862756 + r6862760;
        float r6862762 = -1894.470703;
        float r6862763 = r6862759 * r6862743;
        float r6862764 = r6862763 * r6862743;
        float r6862765 = r6862762 * r6862764;
        float r6862766 = r6862761 + r6862765;
        float r6862767 = 660.194336;
        float r6862768 = r6862764 * r6862743;
        float r6862769 = r6862768 * r6862743;
        float r6862770 = r6862767 * r6862769;
        float r6862771 = r6862766 + r6862770;
        return r6862771;
}

double f_id(double x) {
        double r6862772 = 0.225586;
        double r6862773 = -17.595703;
        double r6862774 = x;
        double r6862775 = r6862774 * r6862774;
        double r6862776 = r6862773 * r6862775;
        double r6862777 = r6862772 + r6862776;
        double r6862778 = 219.946289;
        double r6862779 = r6862775 * r6862774;
        double r6862780 = r6862779 * r6862774;
        double r6862781 = r6862778 * r6862780;
        double r6862782 = r6862777 + r6862781;
        double r6862783 = -997.089844;
        double r6862784 = r6862780 * r6862774;
        double r6862785 = r6862784 * r6862774;
        double r6862786 = r6862783 * r6862785;
        double r6862787 = r6862782 + r6862786;
        double r6862788 = 2029.790039;
        double r6862789 = r6862785 * r6862774;
        double r6862790 = r6862789 * r6862774;
        double r6862791 = r6862788 * r6862790;
        double r6862792 = r6862787 + r6862791;
        double r6862793 = -1894.470703;
        double r6862794 = r6862790 * r6862774;
        double r6862795 = r6862794 * r6862774;
        double r6862796 = r6862793 * r6862795;
        double r6862797 = r6862792 + r6862796;
        double r6862798 = 660.194336;
        double r6862799 = r6862795 * r6862774;
        double r6862800 = r6862799 * r6862774;
        double r6862801 = r6862798 * r6862800;
        double r6862802 = r6862797 + r6862801;
        return r6862802;
}


double f_of(float x) {
        float r6862803 = 0.225586;
        float r6862804 = -17.595703;
        float r6862805 = x;
        float r6862806 = r6862805 * r6862805;
        float r6862807 = r6862804 * r6862806;
        float r6862808 = r6862803 + r6862807;
        float r6862809 = 219.946289;
        float r6862810 = r6862809 * r6862805;
        float r6862811 = 3;
        float r6862812 = pow(r6862805, r6862811);
        float r6862813 = r6862810 * r6862812;
        float r6862814 = cbrt(r6862813);
        float r6862815 = r6862814 * r6862814;
        float r6862816 = r6862812 * r6862810;
        float r6862817 = cbrt(r6862816);
        float r6862818 = r6862815 * r6862817;
        float r6862819 = r6862808 + r6862818;
        float r6862820 = -997.089844;
        float r6862821 = r6862806 * r6862805;
        float r6862822 = r6862821 * r6862805;
        float r6862823 = r6862822 * r6862805;
        float r6862824 = r6862823 * r6862805;
        float r6862825 = r6862820 * r6862824;
        float r6862826 = r6862819 + r6862825;
        float r6862827 = 2029.790039;
        float r6862828 = r6862824 * r6862805;
        float r6862829 = r6862828 * r6862805;
        float r6862830 = r6862827 * r6862829;
        float r6862831 = r6862826 + r6862830;
        float r6862832 = -1894.470703;
        float r6862833 = r6862829 * r6862805;
        float r6862834 = r6862833 * r6862805;
        float r6862835 = r6862832 * r6862834;
        float r6862836 = r6862831 + r6862835;
        float r6862837 = 660.194336;
        float r6862838 = r6862834 * r6862805;
        float r6862839 = r6862838 * r6862805;
        float r6862840 = r6862837 * r6862839;
        float r6862841 = r6862836 + r6862840;
        return r6862841;
}

double f_od(double x) {
        double r6862842 = 0.225586;
        double r6862843 = -17.595703;
        double r6862844 = x;
        double r6862845 = r6862844 * r6862844;
        double r6862846 = r6862843 * r6862845;
        double r6862847 = r6862842 + r6862846;
        double r6862848 = 219.946289;
        double r6862849 = r6862848 * r6862844;
        double r6862850 = 3;
        double r6862851 = pow(r6862844, r6862850);
        double r6862852 = r6862849 * r6862851;
        double r6862853 = cbrt(r6862852);
        double r6862854 = r6862853 * r6862853;
        double r6862855 = r6862851 * r6862849;
        double r6862856 = cbrt(r6862855);
        double r6862857 = r6862854 * r6862856;
        double r6862858 = r6862847 + r6862857;
        double r6862859 = -997.089844;
        double r6862860 = r6862845 * r6862844;
        double r6862861 = r6862860 * r6862844;
        double r6862862 = r6862861 * r6862844;
        double r6862863 = r6862862 * r6862844;
        double r6862864 = r6862859 * r6862863;
        double r6862865 = r6862858 + r6862864;
        double r6862866 = 2029.790039;
        double r6862867 = r6862863 * r6862844;
        double r6862868 = r6862867 * r6862844;
        double r6862869 = r6862866 * r6862868;
        double r6862870 = r6862865 + r6862869;
        double r6862871 = -1894.470703;
        double r6862872 = r6862868 * r6862844;
        double r6862873 = r6862872 * r6862844;
        double r6862874 = r6862871 * r6862873;
        double r6862875 = r6862870 + r6862874;
        double r6862876 = 660.194336;
        double r6862877 = r6862873 * r6862844;
        double r6862878 = r6862877 * r6862844;
        double r6862879 = r6862876 * r6862878;
        double r6862880 = r6862875 + r6862879;
        return r6862880;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6862881, r6862882, r6862883, r6862884, r6862885, r6862886, r6862887, r6862888, r6862889, r6862890, r6862891, r6862892, r6862893, r6862894, r6862895, r6862896, r6862897, r6862898, r6862899, r6862900, r6862901, r6862902, r6862903, r6862904, r6862905, r6862906, r6862907, r6862908, r6862909, r6862910, r6862911;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862881, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862882, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6862883);
        mpfr_init(r6862884);
        mpfr_init(r6862885);
        mpfr_init(r6862886);
        mpfr_init_set_str(r6862887, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6862888);
        mpfr_init(r6862889);
        mpfr_init(r6862890);
        mpfr_init(r6862891);
        mpfr_init_set_str(r6862892, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6862893);
        mpfr_init(r6862894);
        mpfr_init(r6862895);
        mpfr_init(r6862896);
        mpfr_init_set_str(r6862897, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6862898);
        mpfr_init(r6862899);
        mpfr_init(r6862900);
        mpfr_init(r6862901);
        mpfr_init_set_str(r6862902, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6862903);
        mpfr_init(r6862904);
        mpfr_init(r6862905);
        mpfr_init(r6862906);
        mpfr_init_set_str(r6862907, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6862908);
        mpfr_init(r6862909);
        mpfr_init(r6862910);
        mpfr_init(r6862911);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6862883, x, MPFR_RNDN);
        mpfr_mul(r6862884, r6862883, r6862883, MPFR_RNDN);
        mpfr_mul(r6862885, r6862882, r6862884, MPFR_RNDN);
        mpfr_add(r6862886, r6862881, r6862885, MPFR_RNDN);
        ;
        mpfr_mul(r6862888, r6862884, r6862883, MPFR_RNDN);
        mpfr_mul(r6862889, r6862888, r6862883, MPFR_RNDN);
        mpfr_mul(r6862890, r6862887, r6862889, MPFR_RNDN);
        mpfr_add(r6862891, r6862886, r6862890, MPFR_RNDN);
        ;
        mpfr_mul(r6862893, r6862889, r6862883, MPFR_RNDN);
        mpfr_mul(r6862894, r6862893, r6862883, MPFR_RNDN);
        mpfr_mul(r6862895, r6862892, r6862894, MPFR_RNDN);
        mpfr_add(r6862896, r6862891, r6862895, MPFR_RNDN);
        ;
        mpfr_mul(r6862898, r6862894, r6862883, MPFR_RNDN);
        mpfr_mul(r6862899, r6862898, r6862883, MPFR_RNDN);
        mpfr_mul(r6862900, r6862897, r6862899, MPFR_RNDN);
        mpfr_add(r6862901, r6862896, r6862900, MPFR_RNDN);
        ;
        mpfr_mul(r6862903, r6862899, r6862883, MPFR_RNDN);
        mpfr_mul(r6862904, r6862903, r6862883, MPFR_RNDN);
        mpfr_mul(r6862905, r6862902, r6862904, MPFR_RNDN);
        mpfr_add(r6862906, r6862901, r6862905, MPFR_RNDN);
        ;
        mpfr_mul(r6862908, r6862904, r6862883, MPFR_RNDN);
        mpfr_mul(r6862909, r6862908, r6862883, MPFR_RNDN);
        mpfr_mul(r6862910, r6862907, r6862909, MPFR_RNDN);
        mpfr_add(r6862911, r6862906, r6862910, MPFR_RNDN);
        return mpfr_get_d(r6862911, MPFR_RNDN);
}

static mpfr_t r6862912, r6862913, r6862914, r6862915, r6862916, r6862917, r6862918, r6862919, r6862920, r6862921, r6862922, r6862923, r6862924, r6862925, r6862926, r6862927, r6862928, r6862929, r6862930, r6862931, r6862932, r6862933, r6862934, r6862935, r6862936, r6862937, r6862938, r6862939, r6862940, r6862941, r6862942, r6862943, r6862944, r6862945, r6862946, r6862947, r6862948, r6862949, r6862950;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862912, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862913, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6862914);
        mpfr_init(r6862915);
        mpfr_init(r6862916);
        mpfr_init(r6862917);
        mpfr_init_set_str(r6862918, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6862919);
        mpfr_init_set_str(r6862920, "3", 10, MPFR_RNDN);
        mpfr_init(r6862921);
        mpfr_init(r6862922);
        mpfr_init(r6862923);
        mpfr_init(r6862924);
        mpfr_init(r6862925);
        mpfr_init(r6862926);
        mpfr_init(r6862927);
        mpfr_init(r6862928);
        mpfr_init_set_str(r6862929, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6862930);
        mpfr_init(r6862931);
        mpfr_init(r6862932);
        mpfr_init(r6862933);
        mpfr_init(r6862934);
        mpfr_init(r6862935);
        mpfr_init_set_str(r6862936, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6862937);
        mpfr_init(r6862938);
        mpfr_init(r6862939);
        mpfr_init(r6862940);
        mpfr_init_set_str(r6862941, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6862942);
        mpfr_init(r6862943);
        mpfr_init(r6862944);
        mpfr_init(r6862945);
        mpfr_init_set_str(r6862946, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6862947);
        mpfr_init(r6862948);
        mpfr_init(r6862949);
        mpfr_init(r6862950);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6862914, x, MPFR_RNDN);
        mpfr_mul(r6862915, r6862914, r6862914, MPFR_RNDN);
        mpfr_mul(r6862916, r6862913, r6862915, MPFR_RNDN);
        mpfr_add(r6862917, r6862912, r6862916, MPFR_RNDN);
        ;
        mpfr_mul(r6862919, r6862918, r6862914, MPFR_RNDN);
        ;
        mpfr_pow(r6862921, r6862914, r6862920, MPFR_RNDN);
        mpfr_mul(r6862922, r6862919, r6862921, MPFR_RNDN);
        mpfr_cbrt(r6862923, r6862922, MPFR_RNDN);
        mpfr_mul(r6862924, r6862923, r6862923, MPFR_RNDN);
        mpfr_mul(r6862925, r6862921, r6862919, MPFR_RNDN);
        mpfr_cbrt(r6862926, r6862925, MPFR_RNDN);
        mpfr_mul(r6862927, r6862924, r6862926, MPFR_RNDN);
        mpfr_add(r6862928, r6862917, r6862927, MPFR_RNDN);
        ;
        mpfr_mul(r6862930, r6862915, r6862914, MPFR_RNDN);
        mpfr_mul(r6862931, r6862930, r6862914, MPFR_RNDN);
        mpfr_mul(r6862932, r6862931, r6862914, MPFR_RNDN);
        mpfr_mul(r6862933, r6862932, r6862914, MPFR_RNDN);
        mpfr_mul(r6862934, r6862929, r6862933, MPFR_RNDN);
        mpfr_add(r6862935, r6862928, r6862934, MPFR_RNDN);
        ;
        mpfr_mul(r6862937, r6862933, r6862914, MPFR_RNDN);
        mpfr_mul(r6862938, r6862937, r6862914, MPFR_RNDN);
        mpfr_mul(r6862939, r6862936, r6862938, MPFR_RNDN);
        mpfr_add(r6862940, r6862935, r6862939, MPFR_RNDN);
        ;
        mpfr_mul(r6862942, r6862938, r6862914, MPFR_RNDN);
        mpfr_mul(r6862943, r6862942, r6862914, MPFR_RNDN);
        mpfr_mul(r6862944, r6862941, r6862943, MPFR_RNDN);
        mpfr_add(r6862945, r6862940, r6862944, MPFR_RNDN);
        ;
        mpfr_mul(r6862947, r6862943, r6862914, MPFR_RNDN);
        mpfr_mul(r6862948, r6862947, r6862914, MPFR_RNDN);
        mpfr_mul(r6862949, r6862946, r6862948, MPFR_RNDN);
        mpfr_add(r6862950, r6862945, r6862949, MPFR_RNDN);
        return mpfr_get_d(r6862950, MPFR_RNDN);
}

static mpfr_t r6862951, r6862952, r6862953, r6862954, r6862955, r6862956, r6862957, r6862958, r6862959, r6862960, r6862961, r6862962, r6862963, r6862964, r6862965, r6862966, r6862967, r6862968, r6862969, r6862970, r6862971, r6862972, r6862973, r6862974, r6862975, r6862976, r6862977, r6862978, r6862979, r6862980, r6862981, r6862982, r6862983, r6862984, r6862985, r6862986, r6862987, r6862988, r6862989;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862951, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862952, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6862953);
        mpfr_init(r6862954);
        mpfr_init(r6862955);
        mpfr_init(r6862956);
        mpfr_init_set_str(r6862957, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6862958);
        mpfr_init_set_str(r6862959, "3", 10, MPFR_RNDN);
        mpfr_init(r6862960);
        mpfr_init(r6862961);
        mpfr_init(r6862962);
        mpfr_init(r6862963);
        mpfr_init(r6862964);
        mpfr_init(r6862965);
        mpfr_init(r6862966);
        mpfr_init(r6862967);
        mpfr_init_set_str(r6862968, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6862969);
        mpfr_init(r6862970);
        mpfr_init(r6862971);
        mpfr_init(r6862972);
        mpfr_init(r6862973);
        mpfr_init(r6862974);
        mpfr_init_set_str(r6862975, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6862976);
        mpfr_init(r6862977);
        mpfr_init(r6862978);
        mpfr_init(r6862979);
        mpfr_init_set_str(r6862980, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6862981);
        mpfr_init(r6862982);
        mpfr_init(r6862983);
        mpfr_init(r6862984);
        mpfr_init_set_str(r6862985, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6862986);
        mpfr_init(r6862987);
        mpfr_init(r6862988);
        mpfr_init(r6862989);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6862953, x, MPFR_RNDN);
        mpfr_mul(r6862954, r6862953, r6862953, MPFR_RNDN);
        mpfr_mul(r6862955, r6862952, r6862954, MPFR_RNDN);
        mpfr_add(r6862956, r6862951, r6862955, MPFR_RNDN);
        ;
        mpfr_mul(r6862958, r6862957, r6862953, MPFR_RNDN);
        ;
        mpfr_pow(r6862960, r6862953, r6862959, MPFR_RNDN);
        mpfr_mul(r6862961, r6862958, r6862960, MPFR_RNDN);
        mpfr_cbrt(r6862962, r6862961, MPFR_RNDN);
        mpfr_mul(r6862963, r6862962, r6862962, MPFR_RNDN);
        mpfr_mul(r6862964, r6862960, r6862958, MPFR_RNDN);
        mpfr_cbrt(r6862965, r6862964, MPFR_RNDN);
        mpfr_mul(r6862966, r6862963, r6862965, MPFR_RNDN);
        mpfr_add(r6862967, r6862956, r6862966, MPFR_RNDN);
        ;
        mpfr_mul(r6862969, r6862954, r6862953, MPFR_RNDN);
        mpfr_mul(r6862970, r6862969, r6862953, MPFR_RNDN);
        mpfr_mul(r6862971, r6862970, r6862953, MPFR_RNDN);
        mpfr_mul(r6862972, r6862971, r6862953, MPFR_RNDN);
        mpfr_mul(r6862973, r6862968, r6862972, MPFR_RNDN);
        mpfr_add(r6862974, r6862967, r6862973, MPFR_RNDN);
        ;
        mpfr_mul(r6862976, r6862972, r6862953, MPFR_RNDN);
        mpfr_mul(r6862977, r6862976, r6862953, MPFR_RNDN);
        mpfr_mul(r6862978, r6862975, r6862977, MPFR_RNDN);
        mpfr_add(r6862979, r6862974, r6862978, MPFR_RNDN);
        ;
        mpfr_mul(r6862981, r6862977, r6862953, MPFR_RNDN);
        mpfr_mul(r6862982, r6862981, r6862953, MPFR_RNDN);
        mpfr_mul(r6862983, r6862980, r6862982, MPFR_RNDN);
        mpfr_add(r6862984, r6862979, r6862983, MPFR_RNDN);
        ;
        mpfr_mul(r6862986, r6862982, r6862953, MPFR_RNDN);
        mpfr_mul(r6862987, r6862986, r6862953, MPFR_RNDN);
        mpfr_mul(r6862988, r6862985, r6862987, MPFR_RNDN);
        mpfr_add(r6862989, r6862984, r6862988, MPFR_RNDN);
        return mpfr_get_d(r6862989, MPFR_RNDN);
}

