#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r9830722 = -17297280.0;
        float r9830723 = 242161920.0;
        float r9830724 = x;
        float r9830725 = r9830724 * r9830724;
        float r9830726 = r9830723 * r9830725;
        float r9830727 = r9830722 + r9830726;
        float r9830728 = -484323840.0;
        float r9830729 = r9830725 * r9830724;
        float r9830730 = r9830729 * r9830724;
        float r9830731 = r9830728 * r9830730;
        float r9830732 = r9830727 + r9830731;
        float r9830733 = 322882560.0;
        float r9830734 = r9830730 * r9830724;
        float r9830735 = r9830734 * r9830724;
        float r9830736 = r9830733 * r9830735;
        float r9830737 = r9830732 + r9830736;
        float r9830738 = -92252160.0;
        float r9830739 = r9830735 * r9830724;
        float r9830740 = r9830739 * r9830724;
        float r9830741 = r9830738 * r9830740;
        float r9830742 = r9830737 + r9830741;
        float r9830743 = 12300288.0;
        float r9830744 = r9830740 * r9830724;
        float r9830745 = r9830744 * r9830724;
        float r9830746 = r9830743 * r9830745;
        float r9830747 = r9830742 + r9830746;
        float r9830748 = -745472.0;
        float r9830749 = r9830745 * r9830724;
        float r9830750 = r9830749 * r9830724;
        float r9830751 = r9830748 * r9830750;
        float r9830752 = r9830747 + r9830751;
        float r9830753 = 16384.0;
        float r9830754 = r9830750 * r9830724;
        float r9830755 = r9830754 * r9830724;
        float r9830756 = r9830753 * r9830755;
        float r9830757 = r9830752 + r9830756;
        return r9830757;
}

double f_id(double x) {
        double r9830758 = -17297280.0;
        double r9830759 = 242161920.0;
        double r9830760 = x;
        double r9830761 = r9830760 * r9830760;
        double r9830762 = r9830759 * r9830761;
        double r9830763 = r9830758 + r9830762;
        double r9830764 = -484323840.0;
        double r9830765 = r9830761 * r9830760;
        double r9830766 = r9830765 * r9830760;
        double r9830767 = r9830764 * r9830766;
        double r9830768 = r9830763 + r9830767;
        double r9830769 = 322882560.0;
        double r9830770 = r9830766 * r9830760;
        double r9830771 = r9830770 * r9830760;
        double r9830772 = r9830769 * r9830771;
        double r9830773 = r9830768 + r9830772;
        double r9830774 = -92252160.0;
        double r9830775 = r9830771 * r9830760;
        double r9830776 = r9830775 * r9830760;
        double r9830777 = r9830774 * r9830776;
        double r9830778 = r9830773 + r9830777;
        double r9830779 = 12300288.0;
        double r9830780 = r9830776 * r9830760;
        double r9830781 = r9830780 * r9830760;
        double r9830782 = r9830779 * r9830781;
        double r9830783 = r9830778 + r9830782;
        double r9830784 = -745472.0;
        double r9830785 = r9830781 * r9830760;
        double r9830786 = r9830785 * r9830760;
        double r9830787 = r9830784 * r9830786;
        double r9830788 = r9830783 + r9830787;
        double r9830789 = 16384.0;
        double r9830790 = r9830786 * r9830760;
        double r9830791 = r9830790 * r9830760;
        double r9830792 = r9830789 * r9830791;
        double r9830793 = r9830788 + r9830792;
        return r9830793;
}


double f_of(float x) {
        float r9830794 = x;
        float r9830795 = r9830794 * r9830794;
        float r9830796 = r9830795 * r9830795;
        float r9830797 = r9830796 * r9830796;
        float r9830798 = r9830796 * r9830797;
        float r9830799 = 16384.0;
        float r9830800 = r9830794 * r9830799;
        float r9830801 = r9830794 * r9830800;
        float r9830802 = -745472.0;
        float r9830803 = r9830801 + r9830802;
        float r9830804 = r9830798 * r9830803;
        float r9830805 = 242161920.0;
        float r9830806 = r9830794 * r9830805;
        float r9830807 = r9830806 * r9830794;
        float r9830808 = -17297280.0;
        float r9830809 = r9830807 + r9830808;
        float r9830810 = -484323840.0;
        float r9830811 = 322882560.0;
        float r9830812 = r9830811 * r9830794;
        float r9830813 = r9830794 * r9830812;
        float r9830814 = r9830810 + r9830813;
        float r9830815 = r9830796 * r9830814;
        float r9830816 = r9830809 + r9830815;
        float r9830817 = r9830804 + r9830816;
        float r9830818 = 12300288.0;
        float r9830819 = r9830818 * r9830795;
        float r9830820 = -92252160.0;
        float r9830821 = r9830819 + r9830820;
        float r9830822 = cbrt(r9830821);
        float r9830823 = r9830822 * r9830822;
        float r9830824 = r9830797 * r9830823;
        float r9830825 = r9830824 * r9830822;
        float r9830826 = r9830817 + r9830825;
        return r9830826;
}

double f_od(double x) {
        double r9830827 = x;
        double r9830828 = r9830827 * r9830827;
        double r9830829 = r9830828 * r9830828;
        double r9830830 = r9830829 * r9830829;
        double r9830831 = r9830829 * r9830830;
        double r9830832 = 16384.0;
        double r9830833 = r9830827 * r9830832;
        double r9830834 = r9830827 * r9830833;
        double r9830835 = -745472.0;
        double r9830836 = r9830834 + r9830835;
        double r9830837 = r9830831 * r9830836;
        double r9830838 = 242161920.0;
        double r9830839 = r9830827 * r9830838;
        double r9830840 = r9830839 * r9830827;
        double r9830841 = -17297280.0;
        double r9830842 = r9830840 + r9830841;
        double r9830843 = -484323840.0;
        double r9830844 = 322882560.0;
        double r9830845 = r9830844 * r9830827;
        double r9830846 = r9830827 * r9830845;
        double r9830847 = r9830843 + r9830846;
        double r9830848 = r9830829 * r9830847;
        double r9830849 = r9830842 + r9830848;
        double r9830850 = r9830837 + r9830849;
        double r9830851 = 12300288.0;
        double r9830852 = r9830851 * r9830828;
        double r9830853 = -92252160.0;
        double r9830854 = r9830852 + r9830853;
        double r9830855 = cbrt(r9830854);
        double r9830856 = r9830855 * r9830855;
        double r9830857 = r9830830 * r9830856;
        double r9830858 = r9830857 * r9830855;
        double r9830859 = r9830850 + r9830858;
        return r9830859;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9830860, r9830861, r9830862, r9830863, r9830864, r9830865, r9830866, r9830867, r9830868, r9830869, r9830870, r9830871, r9830872, r9830873, r9830874, r9830875, r9830876, r9830877, r9830878, r9830879, r9830880, r9830881, r9830882, r9830883, r9830884, r9830885, r9830886, r9830887, r9830888, r9830889, r9830890, r9830891, r9830892, r9830893, r9830894, r9830895;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9830860, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9830861, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r9830862);
        mpfr_init(r9830863);
        mpfr_init(r9830864);
        mpfr_init(r9830865);
        mpfr_init_set_str(r9830866, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r9830867);
        mpfr_init(r9830868);
        mpfr_init(r9830869);
        mpfr_init(r9830870);
        mpfr_init_set_str(r9830871, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r9830872);
        mpfr_init(r9830873);
        mpfr_init(r9830874);
        mpfr_init(r9830875);
        mpfr_init_set_str(r9830876, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r9830877);
        mpfr_init(r9830878);
        mpfr_init(r9830879);
        mpfr_init(r9830880);
        mpfr_init_set_str(r9830881, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r9830882);
        mpfr_init(r9830883);
        mpfr_init(r9830884);
        mpfr_init(r9830885);
        mpfr_init_set_str(r9830886, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r9830887);
        mpfr_init(r9830888);
        mpfr_init(r9830889);
        mpfr_init(r9830890);
        mpfr_init_set_str(r9830891, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r9830892);
        mpfr_init(r9830893);
        mpfr_init(r9830894);
        mpfr_init(r9830895);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9830862, x, MPFR_RNDN);
        mpfr_mul(r9830863, r9830862, r9830862, MPFR_RNDN);
        mpfr_mul(r9830864, r9830861, r9830863, MPFR_RNDN);
        mpfr_add(r9830865, r9830860, r9830864, MPFR_RNDN);
        ;
        mpfr_mul(r9830867, r9830863, r9830862, MPFR_RNDN);
        mpfr_mul(r9830868, r9830867, r9830862, MPFR_RNDN);
        mpfr_mul(r9830869, r9830866, r9830868, MPFR_RNDN);
        mpfr_add(r9830870, r9830865, r9830869, MPFR_RNDN);
        ;
        mpfr_mul(r9830872, r9830868, r9830862, MPFR_RNDN);
        mpfr_mul(r9830873, r9830872, r9830862, MPFR_RNDN);
        mpfr_mul(r9830874, r9830871, r9830873, MPFR_RNDN);
        mpfr_add(r9830875, r9830870, r9830874, MPFR_RNDN);
        ;
        mpfr_mul(r9830877, r9830873, r9830862, MPFR_RNDN);
        mpfr_mul(r9830878, r9830877, r9830862, MPFR_RNDN);
        mpfr_mul(r9830879, r9830876, r9830878, MPFR_RNDN);
        mpfr_add(r9830880, r9830875, r9830879, MPFR_RNDN);
        ;
        mpfr_mul(r9830882, r9830878, r9830862, MPFR_RNDN);
        mpfr_mul(r9830883, r9830882, r9830862, MPFR_RNDN);
        mpfr_mul(r9830884, r9830881, r9830883, MPFR_RNDN);
        mpfr_add(r9830885, r9830880, r9830884, MPFR_RNDN);
        ;
        mpfr_mul(r9830887, r9830883, r9830862, MPFR_RNDN);
        mpfr_mul(r9830888, r9830887, r9830862, MPFR_RNDN);
        mpfr_mul(r9830889, r9830886, r9830888, MPFR_RNDN);
        mpfr_add(r9830890, r9830885, r9830889, MPFR_RNDN);
        ;
        mpfr_mul(r9830892, r9830888, r9830862, MPFR_RNDN);
        mpfr_mul(r9830893, r9830892, r9830862, MPFR_RNDN);
        mpfr_mul(r9830894, r9830891, r9830893, MPFR_RNDN);
        mpfr_add(r9830895, r9830890, r9830894, MPFR_RNDN);
        return mpfr_get_d(r9830895, MPFR_RNDN);
}

static mpfr_t r9830896, r9830897, r9830898, r9830899, r9830900, r9830901, r9830902, r9830903, r9830904, r9830905, r9830906, r9830907, r9830908, r9830909, r9830910, r9830911, r9830912, r9830913, r9830914, r9830915, r9830916, r9830917, r9830918, r9830919, r9830920, r9830921, r9830922, r9830923, r9830924, r9830925, r9830926, r9830927, r9830928;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9830896);
        mpfr_init(r9830897);
        mpfr_init(r9830898);
        mpfr_init(r9830899);
        mpfr_init(r9830900);
        mpfr_init_set_str(r9830901, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r9830902);
        mpfr_init(r9830903);
        mpfr_init_set_str(r9830904, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r9830905);
        mpfr_init(r9830906);
        mpfr_init_set_str(r9830907, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r9830908);
        mpfr_init(r9830909);
        mpfr_init_set_str(r9830910, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9830911);
        mpfr_init_set_str(r9830912, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9830913, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r9830914);
        mpfr_init(r9830915);
        mpfr_init(r9830916);
        mpfr_init(r9830917);
        mpfr_init(r9830918);
        mpfr_init(r9830919);
        mpfr_init_set_str(r9830920, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r9830921);
        mpfr_init_set_str(r9830922, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r9830923);
        mpfr_init(r9830924);
        mpfr_init(r9830925);
        mpfr_init(r9830926);
        mpfr_init(r9830927);
        mpfr_init(r9830928);
}

double f_fm(double x) {
        mpfr_set_d(r9830896, x, MPFR_RNDN);
        mpfr_mul(r9830897, r9830896, r9830896, MPFR_RNDN);
        mpfr_mul(r9830898, r9830897, r9830897, MPFR_RNDN);
        mpfr_mul(r9830899, r9830898, r9830898, MPFR_RNDN);
        mpfr_mul(r9830900, r9830898, r9830899, MPFR_RNDN);
        ;
        mpfr_mul(r9830902, r9830896, r9830901, MPFR_RNDN);
        mpfr_mul(r9830903, r9830896, r9830902, MPFR_RNDN);
        ;
        mpfr_add(r9830905, r9830903, r9830904, MPFR_RNDN);
        mpfr_mul(r9830906, r9830900, r9830905, MPFR_RNDN);
        ;
        mpfr_mul(r9830908, r9830896, r9830907, MPFR_RNDN);
        mpfr_mul(r9830909, r9830908, r9830896, MPFR_RNDN);
        ;
        mpfr_add(r9830911, r9830909, r9830910, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9830914, r9830913, r9830896, MPFR_RNDN);
        mpfr_mul(r9830915, r9830896, r9830914, MPFR_RNDN);
        mpfr_add(r9830916, r9830912, r9830915, MPFR_RNDN);
        mpfr_mul(r9830917, r9830898, r9830916, MPFR_RNDN);
        mpfr_add(r9830918, r9830911, r9830917, MPFR_RNDN);
        mpfr_add(r9830919, r9830906, r9830918, MPFR_RNDN);
        ;
        mpfr_mul(r9830921, r9830920, r9830897, MPFR_RNDN);
        ;
        mpfr_add(r9830923, r9830921, r9830922, MPFR_RNDN);
        mpfr_cbrt(r9830924, r9830923, MPFR_RNDN);
        mpfr_mul(r9830925, r9830924, r9830924, MPFR_RNDN);
        mpfr_mul(r9830926, r9830899, r9830925, MPFR_RNDN);
        mpfr_mul(r9830927, r9830926, r9830924, MPFR_RNDN);
        mpfr_add(r9830928, r9830919, r9830927, MPFR_RNDN);
        return mpfr_get_d(r9830928, MPFR_RNDN);
}

static mpfr_t r9830929, r9830930, r9830931, r9830932, r9830933, r9830934, r9830935, r9830936, r9830937, r9830938, r9830939, r9830940, r9830941, r9830942, r9830943, r9830944, r9830945, r9830946, r9830947, r9830948, r9830949, r9830950, r9830951, r9830952, r9830953, r9830954, r9830955, r9830956, r9830957, r9830958, r9830959, r9830960, r9830961;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9830929);
        mpfr_init(r9830930);
        mpfr_init(r9830931);
        mpfr_init(r9830932);
        mpfr_init(r9830933);
        mpfr_init_set_str(r9830934, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r9830935);
        mpfr_init(r9830936);
        mpfr_init_set_str(r9830937, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r9830938);
        mpfr_init(r9830939);
        mpfr_init_set_str(r9830940, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r9830941);
        mpfr_init(r9830942);
        mpfr_init_set_str(r9830943, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9830944);
        mpfr_init_set_str(r9830945, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9830946, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r9830947);
        mpfr_init(r9830948);
        mpfr_init(r9830949);
        mpfr_init(r9830950);
        mpfr_init(r9830951);
        mpfr_init(r9830952);
        mpfr_init_set_str(r9830953, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r9830954);
        mpfr_init_set_str(r9830955, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r9830956);
        mpfr_init(r9830957);
        mpfr_init(r9830958);
        mpfr_init(r9830959);
        mpfr_init(r9830960);
        mpfr_init(r9830961);
}

double f_dm(double x) {
        mpfr_set_d(r9830929, x, MPFR_RNDN);
        mpfr_mul(r9830930, r9830929, r9830929, MPFR_RNDN);
        mpfr_mul(r9830931, r9830930, r9830930, MPFR_RNDN);
        mpfr_mul(r9830932, r9830931, r9830931, MPFR_RNDN);
        mpfr_mul(r9830933, r9830931, r9830932, MPFR_RNDN);
        ;
        mpfr_mul(r9830935, r9830929, r9830934, MPFR_RNDN);
        mpfr_mul(r9830936, r9830929, r9830935, MPFR_RNDN);
        ;
        mpfr_add(r9830938, r9830936, r9830937, MPFR_RNDN);
        mpfr_mul(r9830939, r9830933, r9830938, MPFR_RNDN);
        ;
        mpfr_mul(r9830941, r9830929, r9830940, MPFR_RNDN);
        mpfr_mul(r9830942, r9830941, r9830929, MPFR_RNDN);
        ;
        mpfr_add(r9830944, r9830942, r9830943, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9830947, r9830946, r9830929, MPFR_RNDN);
        mpfr_mul(r9830948, r9830929, r9830947, MPFR_RNDN);
        mpfr_add(r9830949, r9830945, r9830948, MPFR_RNDN);
        mpfr_mul(r9830950, r9830931, r9830949, MPFR_RNDN);
        mpfr_add(r9830951, r9830944, r9830950, MPFR_RNDN);
        mpfr_add(r9830952, r9830939, r9830951, MPFR_RNDN);
        ;
        mpfr_mul(r9830954, r9830953, r9830930, MPFR_RNDN);
        ;
        mpfr_add(r9830956, r9830954, r9830955, MPFR_RNDN);
        mpfr_cbrt(r9830957, r9830956, MPFR_RNDN);
        mpfr_mul(r9830958, r9830957, r9830957, MPFR_RNDN);
        mpfr_mul(r9830959, r9830932, r9830958, MPFR_RNDN);
        mpfr_mul(r9830960, r9830959, r9830957, MPFR_RNDN);
        mpfr_add(r9830961, r9830952, r9830960, MPFR_RNDN);
        return mpfr_get_d(r9830961, MPFR_RNDN);
}

