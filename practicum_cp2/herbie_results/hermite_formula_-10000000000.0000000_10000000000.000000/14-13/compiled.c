#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r9404726 = 17297280.0;
        float r9404727 = x;
        float r9404728 = r9404726 * r9404727;
        float r9404729 = -69189120.0;
        float r9404730 = r9404727 * r9404727;
        float r9404731 = r9404730 * r9404727;
        float r9404732 = r9404729 * r9404731;
        float r9404733 = r9404728 + r9404732;
        float r9404734 = 69189120.0;
        float r9404735 = r9404731 * r9404727;
        float r9404736 = r9404735 * r9404727;
        float r9404737 = r9404734 * r9404736;
        float r9404738 = r9404733 + r9404737;
        float r9404739 = -26357760.0;
        float r9404740 = r9404736 * r9404727;
        float r9404741 = r9404740 * r9404727;
        float r9404742 = r9404739 * r9404741;
        float r9404743 = r9404738 + r9404742;
        float r9404744 = 4392960.0;
        float r9404745 = r9404741 * r9404727;
        float r9404746 = r9404745 * r9404727;
        float r9404747 = r9404744 * r9404746;
        float r9404748 = r9404743 + r9404747;
        float r9404749 = -319488.0;
        float r9404750 = r9404746 * r9404727;
        float r9404751 = r9404750 * r9404727;
        float r9404752 = r9404749 * r9404751;
        float r9404753 = r9404748 + r9404752;
        float r9404754 = 8192.0;
        float r9404755 = r9404751 * r9404727;
        float r9404756 = r9404755 * r9404727;
        float r9404757 = r9404754 * r9404756;
        float r9404758 = r9404753 + r9404757;
        return r9404758;
}

double f_id(double x) {
        double r9404759 = 17297280.0;
        double r9404760 = x;
        double r9404761 = r9404759 * r9404760;
        double r9404762 = -69189120.0;
        double r9404763 = r9404760 * r9404760;
        double r9404764 = r9404763 * r9404760;
        double r9404765 = r9404762 * r9404764;
        double r9404766 = r9404761 + r9404765;
        double r9404767 = 69189120.0;
        double r9404768 = r9404764 * r9404760;
        double r9404769 = r9404768 * r9404760;
        double r9404770 = r9404767 * r9404769;
        double r9404771 = r9404766 + r9404770;
        double r9404772 = -26357760.0;
        double r9404773 = r9404769 * r9404760;
        double r9404774 = r9404773 * r9404760;
        double r9404775 = r9404772 * r9404774;
        double r9404776 = r9404771 + r9404775;
        double r9404777 = 4392960.0;
        double r9404778 = r9404774 * r9404760;
        double r9404779 = r9404778 * r9404760;
        double r9404780 = r9404777 * r9404779;
        double r9404781 = r9404776 + r9404780;
        double r9404782 = -319488.0;
        double r9404783 = r9404779 * r9404760;
        double r9404784 = r9404783 * r9404760;
        double r9404785 = r9404782 * r9404784;
        double r9404786 = r9404781 + r9404785;
        double r9404787 = 8192.0;
        double r9404788 = r9404784 * r9404760;
        double r9404789 = r9404788 * r9404760;
        double r9404790 = r9404787 * r9404789;
        double r9404791 = r9404786 + r9404790;
        return r9404791;
}


double f_of(float x) {
        float r9404792 = x;
        float r9404793 = r9404792 * r9404792;
        float r9404794 = 3;
        float r9404795 = pow(r9404792, r9404794);
        float r9404796 = r9404795 * r9404795;
        float r9404797 = r9404795 * r9404796;
        float r9404798 = r9404793 * r9404797;
        float r9404799 = 8192.0;
        float r9404800 = r9404793 * r9404799;
        float r9404801 = cbrt(r9404800);
        float r9404802 = r9404801 * r9404801;
        float r9404803 = r9404802 * r9404801;
        float r9404804 = -319488.0;
        float r9404805 = r9404803 + r9404804;
        float r9404806 = r9404798 * r9404805;
        float r9404807 = 69189120.0;
        float r9404808 = r9404792 * r9404807;
        float r9404809 = r9404808 * r9404793;
        float r9404810 = r9404793 * r9404809;
        float r9404811 = 17297280.0;
        float r9404812 = r9404811 * r9404792;
        float r9404813 = -69189120.0;
        float r9404814 = r9404813 * r9404792;
        float r9404815 = r9404793 * r9404814;
        float r9404816 = r9404812 + r9404815;
        float r9404817 = r9404810 + r9404816;
        float r9404818 = r9404796 * r9404792;
        float r9404819 = -26357760.0;
        float r9404820 = 4392960.0;
        float r9404821 = r9404820 * r9404792;
        float r9404822 = r9404792 * r9404821;
        float r9404823 = r9404819 + r9404822;
        float r9404824 = r9404818 * r9404823;
        float r9404825 = r9404817 + r9404824;
        float r9404826 = r9404806 + r9404825;
        return r9404826;
}

double f_od(double x) {
        double r9404827 = x;
        double r9404828 = r9404827 * r9404827;
        double r9404829 = 3;
        double r9404830 = pow(r9404827, r9404829);
        double r9404831 = r9404830 * r9404830;
        double r9404832 = r9404830 * r9404831;
        double r9404833 = r9404828 * r9404832;
        double r9404834 = 8192.0;
        double r9404835 = r9404828 * r9404834;
        double r9404836 = cbrt(r9404835);
        double r9404837 = r9404836 * r9404836;
        double r9404838 = r9404837 * r9404836;
        double r9404839 = -319488.0;
        double r9404840 = r9404838 + r9404839;
        double r9404841 = r9404833 * r9404840;
        double r9404842 = 69189120.0;
        double r9404843 = r9404827 * r9404842;
        double r9404844 = r9404843 * r9404828;
        double r9404845 = r9404828 * r9404844;
        double r9404846 = 17297280.0;
        double r9404847 = r9404846 * r9404827;
        double r9404848 = -69189120.0;
        double r9404849 = r9404848 * r9404827;
        double r9404850 = r9404828 * r9404849;
        double r9404851 = r9404847 + r9404850;
        double r9404852 = r9404845 + r9404851;
        double r9404853 = r9404831 * r9404827;
        double r9404854 = -26357760.0;
        double r9404855 = 4392960.0;
        double r9404856 = r9404855 * r9404827;
        double r9404857 = r9404827 * r9404856;
        double r9404858 = r9404854 + r9404857;
        double r9404859 = r9404853 * r9404858;
        double r9404860 = r9404852 + r9404859;
        double r9404861 = r9404841 + r9404860;
        return r9404861;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9404862, r9404863, r9404864, r9404865, r9404866, r9404867, r9404868, r9404869, r9404870, r9404871, r9404872, r9404873, r9404874, r9404875, r9404876, r9404877, r9404878, r9404879, r9404880, r9404881, r9404882, r9404883, r9404884, r9404885, r9404886, r9404887, r9404888, r9404889, r9404890, r9404891, r9404892, r9404893, r9404894;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9404862, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9404863);
        mpfr_init(r9404864);
        mpfr_init_set_str(r9404865, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9404866);
        mpfr_init(r9404867);
        mpfr_init(r9404868);
        mpfr_init(r9404869);
        mpfr_init_set_str(r9404870, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9404871);
        mpfr_init(r9404872);
        mpfr_init(r9404873);
        mpfr_init(r9404874);
        mpfr_init_set_str(r9404875, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r9404876);
        mpfr_init(r9404877);
        mpfr_init(r9404878);
        mpfr_init(r9404879);
        mpfr_init_set_str(r9404880, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9404881);
        mpfr_init(r9404882);
        mpfr_init(r9404883);
        mpfr_init(r9404884);
        mpfr_init_set_str(r9404885, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9404886);
        mpfr_init(r9404887);
        mpfr_init(r9404888);
        mpfr_init(r9404889);
        mpfr_init_set_str(r9404890, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9404891);
        mpfr_init(r9404892);
        mpfr_init(r9404893);
        mpfr_init(r9404894);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9404863, x, MPFR_RNDN);
        mpfr_mul(r9404864, r9404862, r9404863, MPFR_RNDN);
        ;
        mpfr_mul(r9404866, r9404863, r9404863, MPFR_RNDN);
        mpfr_mul(r9404867, r9404866, r9404863, MPFR_RNDN);
        mpfr_mul(r9404868, r9404865, r9404867, MPFR_RNDN);
        mpfr_add(r9404869, r9404864, r9404868, MPFR_RNDN);
        ;
        mpfr_mul(r9404871, r9404867, r9404863, MPFR_RNDN);
        mpfr_mul(r9404872, r9404871, r9404863, MPFR_RNDN);
        mpfr_mul(r9404873, r9404870, r9404872, MPFR_RNDN);
        mpfr_add(r9404874, r9404869, r9404873, MPFR_RNDN);
        ;
        mpfr_mul(r9404876, r9404872, r9404863, MPFR_RNDN);
        mpfr_mul(r9404877, r9404876, r9404863, MPFR_RNDN);
        mpfr_mul(r9404878, r9404875, r9404877, MPFR_RNDN);
        mpfr_add(r9404879, r9404874, r9404878, MPFR_RNDN);
        ;
        mpfr_mul(r9404881, r9404877, r9404863, MPFR_RNDN);
        mpfr_mul(r9404882, r9404881, r9404863, MPFR_RNDN);
        mpfr_mul(r9404883, r9404880, r9404882, MPFR_RNDN);
        mpfr_add(r9404884, r9404879, r9404883, MPFR_RNDN);
        ;
        mpfr_mul(r9404886, r9404882, r9404863, MPFR_RNDN);
        mpfr_mul(r9404887, r9404886, r9404863, MPFR_RNDN);
        mpfr_mul(r9404888, r9404885, r9404887, MPFR_RNDN);
        mpfr_add(r9404889, r9404884, r9404888, MPFR_RNDN);
        ;
        mpfr_mul(r9404891, r9404887, r9404863, MPFR_RNDN);
        mpfr_mul(r9404892, r9404891, r9404863, MPFR_RNDN);
        mpfr_mul(r9404893, r9404890, r9404892, MPFR_RNDN);
        mpfr_add(r9404894, r9404889, r9404893, MPFR_RNDN);
        return mpfr_get_d(r9404894, MPFR_RNDN);
}

static mpfr_t r9404895, r9404896, r9404897, r9404898, r9404899, r9404900, r9404901, r9404902, r9404903, r9404904, r9404905, r9404906, r9404907, r9404908, r9404909, r9404910, r9404911, r9404912, r9404913, r9404914, r9404915, r9404916, r9404917, r9404918, r9404919, r9404920, r9404921, r9404922, r9404923, r9404924, r9404925, r9404926, r9404927, r9404928, r9404929;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9404895);
        mpfr_init(r9404896);
        mpfr_init_set_str(r9404897, "3", 10, MPFR_RNDN);
        mpfr_init(r9404898);
        mpfr_init(r9404899);
        mpfr_init(r9404900);
        mpfr_init(r9404901);
        mpfr_init_set_str(r9404902, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9404903);
        mpfr_init(r9404904);
        mpfr_init(r9404905);
        mpfr_init(r9404906);
        mpfr_init_set_str(r9404907, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9404908);
        mpfr_init(r9404909);
        mpfr_init_set_str(r9404910, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9404911);
        mpfr_init(r9404912);
        mpfr_init(r9404913);
        mpfr_init_set_str(r9404914, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9404915);
        mpfr_init_set_str(r9404916, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9404917);
        mpfr_init(r9404918);
        mpfr_init(r9404919);
        mpfr_init(r9404920);
        mpfr_init(r9404921);
        mpfr_init_set_str(r9404922, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9404923, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9404924);
        mpfr_init(r9404925);
        mpfr_init(r9404926);
        mpfr_init(r9404927);
        mpfr_init(r9404928);
        mpfr_init(r9404929);
}

double f_fm(double x) {
        mpfr_set_d(r9404895, x, MPFR_RNDN);
        mpfr_mul(r9404896, r9404895, r9404895, MPFR_RNDN);
        ;
        mpfr_pow(r9404898, r9404895, r9404897, MPFR_RNDN);
        mpfr_mul(r9404899, r9404898, r9404898, MPFR_RNDN);
        mpfr_mul(r9404900, r9404898, r9404899, MPFR_RNDN);
        mpfr_mul(r9404901, r9404896, r9404900, MPFR_RNDN);
        ;
        mpfr_mul(r9404903, r9404896, r9404902, MPFR_RNDN);
        mpfr_cbrt(r9404904, r9404903, MPFR_RNDN);
        mpfr_mul(r9404905, r9404904, r9404904, MPFR_RNDN);
        mpfr_mul(r9404906, r9404905, r9404904, MPFR_RNDN);
        ;
        mpfr_add(r9404908, r9404906, r9404907, MPFR_RNDN);
        mpfr_mul(r9404909, r9404901, r9404908, MPFR_RNDN);
        ;
        mpfr_mul(r9404911, r9404895, r9404910, MPFR_RNDN);
        mpfr_mul(r9404912, r9404911, r9404896, MPFR_RNDN);
        mpfr_mul(r9404913, r9404896, r9404912, MPFR_RNDN);
        ;
        mpfr_mul(r9404915, r9404914, r9404895, MPFR_RNDN);
        ;
        mpfr_mul(r9404917, r9404916, r9404895, MPFR_RNDN);
        mpfr_mul(r9404918, r9404896, r9404917, MPFR_RNDN);
        mpfr_add(r9404919, r9404915, r9404918, MPFR_RNDN);
        mpfr_add(r9404920, r9404913, r9404919, MPFR_RNDN);
        mpfr_mul(r9404921, r9404899, r9404895, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9404924, r9404923, r9404895, MPFR_RNDN);
        mpfr_mul(r9404925, r9404895, r9404924, MPFR_RNDN);
        mpfr_add(r9404926, r9404922, r9404925, MPFR_RNDN);
        mpfr_mul(r9404927, r9404921, r9404926, MPFR_RNDN);
        mpfr_add(r9404928, r9404920, r9404927, MPFR_RNDN);
        mpfr_add(r9404929, r9404909, r9404928, MPFR_RNDN);
        return mpfr_get_d(r9404929, MPFR_RNDN);
}

static mpfr_t r9404930, r9404931, r9404932, r9404933, r9404934, r9404935, r9404936, r9404937, r9404938, r9404939, r9404940, r9404941, r9404942, r9404943, r9404944, r9404945, r9404946, r9404947, r9404948, r9404949, r9404950, r9404951, r9404952, r9404953, r9404954, r9404955, r9404956, r9404957, r9404958, r9404959, r9404960, r9404961, r9404962, r9404963, r9404964;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9404930);
        mpfr_init(r9404931);
        mpfr_init_set_str(r9404932, "3", 10, MPFR_RNDN);
        mpfr_init(r9404933);
        mpfr_init(r9404934);
        mpfr_init(r9404935);
        mpfr_init(r9404936);
        mpfr_init_set_str(r9404937, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9404938);
        mpfr_init(r9404939);
        mpfr_init(r9404940);
        mpfr_init(r9404941);
        mpfr_init_set_str(r9404942, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9404943);
        mpfr_init(r9404944);
        mpfr_init_set_str(r9404945, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9404946);
        mpfr_init(r9404947);
        mpfr_init(r9404948);
        mpfr_init_set_str(r9404949, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9404950);
        mpfr_init_set_str(r9404951, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9404952);
        mpfr_init(r9404953);
        mpfr_init(r9404954);
        mpfr_init(r9404955);
        mpfr_init(r9404956);
        mpfr_init_set_str(r9404957, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9404958, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9404959);
        mpfr_init(r9404960);
        mpfr_init(r9404961);
        mpfr_init(r9404962);
        mpfr_init(r9404963);
        mpfr_init(r9404964);
}

double f_dm(double x) {
        mpfr_set_d(r9404930, x, MPFR_RNDN);
        mpfr_mul(r9404931, r9404930, r9404930, MPFR_RNDN);
        ;
        mpfr_pow(r9404933, r9404930, r9404932, MPFR_RNDN);
        mpfr_mul(r9404934, r9404933, r9404933, MPFR_RNDN);
        mpfr_mul(r9404935, r9404933, r9404934, MPFR_RNDN);
        mpfr_mul(r9404936, r9404931, r9404935, MPFR_RNDN);
        ;
        mpfr_mul(r9404938, r9404931, r9404937, MPFR_RNDN);
        mpfr_cbrt(r9404939, r9404938, MPFR_RNDN);
        mpfr_mul(r9404940, r9404939, r9404939, MPFR_RNDN);
        mpfr_mul(r9404941, r9404940, r9404939, MPFR_RNDN);
        ;
        mpfr_add(r9404943, r9404941, r9404942, MPFR_RNDN);
        mpfr_mul(r9404944, r9404936, r9404943, MPFR_RNDN);
        ;
        mpfr_mul(r9404946, r9404930, r9404945, MPFR_RNDN);
        mpfr_mul(r9404947, r9404946, r9404931, MPFR_RNDN);
        mpfr_mul(r9404948, r9404931, r9404947, MPFR_RNDN);
        ;
        mpfr_mul(r9404950, r9404949, r9404930, MPFR_RNDN);
        ;
        mpfr_mul(r9404952, r9404951, r9404930, MPFR_RNDN);
        mpfr_mul(r9404953, r9404931, r9404952, MPFR_RNDN);
        mpfr_add(r9404954, r9404950, r9404953, MPFR_RNDN);
        mpfr_add(r9404955, r9404948, r9404954, MPFR_RNDN);
        mpfr_mul(r9404956, r9404934, r9404930, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9404959, r9404958, r9404930, MPFR_RNDN);
        mpfr_mul(r9404960, r9404930, r9404959, MPFR_RNDN);
        mpfr_add(r9404961, r9404957, r9404960, MPFR_RNDN);
        mpfr_mul(r9404962, r9404956, r9404961, MPFR_RNDN);
        mpfr_add(r9404963, r9404955, r9404962, MPFR_RNDN);
        mpfr_add(r9404964, r9404944, r9404963, MPFR_RNDN);
        return mpfr_get_d(r9404964, MPFR_RNDN);
}

