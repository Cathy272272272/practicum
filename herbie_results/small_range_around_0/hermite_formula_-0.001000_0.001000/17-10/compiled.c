#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r3819752 = -30240.0;
        float r3819753 = 302400.0;
        float r3819754 = x;
        float r3819755 = r3819754 * r3819754;
        float r3819756 = r3819753 * r3819755;
        float r3819757 = r3819752 + r3819756;
        float r3819758 = -403200.0;
        float r3819759 = r3819755 * r3819754;
        float r3819760 = r3819759 * r3819754;
        float r3819761 = r3819758 * r3819760;
        float r3819762 = r3819757 + r3819761;
        float r3819763 = 161280.0;
        float r3819764 = r3819760 * r3819754;
        float r3819765 = r3819764 * r3819754;
        float r3819766 = r3819763 * r3819765;
        float r3819767 = r3819762 + r3819766;
        float r3819768 = -23040.0;
        float r3819769 = r3819765 * r3819754;
        float r3819770 = r3819769 * r3819754;
        float r3819771 = r3819768 * r3819770;
        float r3819772 = r3819767 + r3819771;
        float r3819773 = 1024.0;
        float r3819774 = r3819770 * r3819754;
        float r3819775 = r3819774 * r3819754;
        float r3819776 = r3819773 * r3819775;
        float r3819777 = r3819772 + r3819776;
        return r3819777;
}

double f_id(double x) {
        double r3819778 = -30240.0;
        double r3819779 = 302400.0;
        double r3819780 = x;
        double r3819781 = r3819780 * r3819780;
        double r3819782 = r3819779 * r3819781;
        double r3819783 = r3819778 + r3819782;
        double r3819784 = -403200.0;
        double r3819785 = r3819781 * r3819780;
        double r3819786 = r3819785 * r3819780;
        double r3819787 = r3819784 * r3819786;
        double r3819788 = r3819783 + r3819787;
        double r3819789 = 161280.0;
        double r3819790 = r3819786 * r3819780;
        double r3819791 = r3819790 * r3819780;
        double r3819792 = r3819789 * r3819791;
        double r3819793 = r3819788 + r3819792;
        double r3819794 = -23040.0;
        double r3819795 = r3819791 * r3819780;
        double r3819796 = r3819795 * r3819780;
        double r3819797 = r3819794 * r3819796;
        double r3819798 = r3819793 + r3819797;
        double r3819799 = 1024.0;
        double r3819800 = r3819796 * r3819780;
        double r3819801 = r3819800 * r3819780;
        double r3819802 = r3819799 * r3819801;
        double r3819803 = r3819798 + r3819802;
        return r3819803;
}


double f_of(float x) {
        float r3819804 = -30240.0;
        float r3819805 = 302400.0;
        float r3819806 = x;
        float r3819807 = r3819806 * r3819806;
        float r3819808 = r3819805 * r3819807;
        float r3819809 = r3819804 + r3819808;
        float r3819810 = -403200.0;
        float r3819811 = r3819807 * r3819806;
        float r3819812 = r3819811 * r3819806;
        float r3819813 = r3819810 * r3819812;
        float r3819814 = r3819809 + r3819813;
        float r3819815 = 161280.0;
        float r3819816 = r3819812 * r3819806;
        float r3819817 = r3819816 * r3819806;
        float r3819818 = r3819815 * r3819817;
        float r3819819 = r3819814 + r3819818;
        float r3819820 = -23040.0;
        float r3819821 = r3819817 * r3819806;
        float r3819822 = r3819821 * r3819806;
        float r3819823 = r3819820 * r3819822;
        float r3819824 = r3819819 + r3819823;
        float r3819825 = 1024.0;
        float r3819826 = r3819822 * r3819806;
        float r3819827 = r3819826 * r3819806;
        float r3819828 = r3819825 * r3819827;
        float r3819829 = r3819824 + r3819828;
        return r3819829;
}

double f_od(double x) {
        double r3819830 = -30240.0;
        double r3819831 = 302400.0;
        double r3819832 = x;
        double r3819833 = r3819832 * r3819832;
        double r3819834 = r3819831 * r3819833;
        double r3819835 = r3819830 + r3819834;
        double r3819836 = -403200.0;
        double r3819837 = r3819833 * r3819832;
        double r3819838 = r3819837 * r3819832;
        double r3819839 = r3819836 * r3819838;
        double r3819840 = r3819835 + r3819839;
        double r3819841 = 161280.0;
        double r3819842 = r3819838 * r3819832;
        double r3819843 = r3819842 * r3819832;
        double r3819844 = r3819841 * r3819843;
        double r3819845 = r3819840 + r3819844;
        double r3819846 = -23040.0;
        double r3819847 = r3819843 * r3819832;
        double r3819848 = r3819847 * r3819832;
        double r3819849 = r3819846 * r3819848;
        double r3819850 = r3819845 + r3819849;
        double r3819851 = 1024.0;
        double r3819852 = r3819848 * r3819832;
        double r3819853 = r3819852 * r3819832;
        double r3819854 = r3819851 * r3819853;
        double r3819855 = r3819850 + r3819854;
        return r3819855;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3819856, r3819857, r3819858, r3819859, r3819860, r3819861, r3819862, r3819863, r3819864, r3819865, r3819866, r3819867, r3819868, r3819869, r3819870, r3819871, r3819872, r3819873, r3819874, r3819875, r3819876, r3819877, r3819878, r3819879, r3819880, r3819881;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819856, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3819857, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r3819858);
        mpfr_init(r3819859);
        mpfr_init(r3819860);
        mpfr_init(r3819861);
        mpfr_init_set_str(r3819862, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r3819863);
        mpfr_init(r3819864);
        mpfr_init(r3819865);
        mpfr_init(r3819866);
        mpfr_init_set_str(r3819867, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r3819868);
        mpfr_init(r3819869);
        mpfr_init(r3819870);
        mpfr_init(r3819871);
        mpfr_init_set_str(r3819872, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r3819873);
        mpfr_init(r3819874);
        mpfr_init(r3819875);
        mpfr_init(r3819876);
        mpfr_init_set_str(r3819877, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r3819878);
        mpfr_init(r3819879);
        mpfr_init(r3819880);
        mpfr_init(r3819881);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3819858, x, MPFR_RNDN);
        mpfr_mul(r3819859, r3819858, r3819858, MPFR_RNDN);
        mpfr_mul(r3819860, r3819857, r3819859, MPFR_RNDN);
        mpfr_add(r3819861, r3819856, r3819860, MPFR_RNDN);
        ;
        mpfr_mul(r3819863, r3819859, r3819858, MPFR_RNDN);
        mpfr_mul(r3819864, r3819863, r3819858, MPFR_RNDN);
        mpfr_mul(r3819865, r3819862, r3819864, MPFR_RNDN);
        mpfr_add(r3819866, r3819861, r3819865, MPFR_RNDN);
        ;
        mpfr_mul(r3819868, r3819864, r3819858, MPFR_RNDN);
        mpfr_mul(r3819869, r3819868, r3819858, MPFR_RNDN);
        mpfr_mul(r3819870, r3819867, r3819869, MPFR_RNDN);
        mpfr_add(r3819871, r3819866, r3819870, MPFR_RNDN);
        ;
        mpfr_mul(r3819873, r3819869, r3819858, MPFR_RNDN);
        mpfr_mul(r3819874, r3819873, r3819858, MPFR_RNDN);
        mpfr_mul(r3819875, r3819872, r3819874, MPFR_RNDN);
        mpfr_add(r3819876, r3819871, r3819875, MPFR_RNDN);
        ;
        mpfr_mul(r3819878, r3819874, r3819858, MPFR_RNDN);
        mpfr_mul(r3819879, r3819878, r3819858, MPFR_RNDN);
        mpfr_mul(r3819880, r3819877, r3819879, MPFR_RNDN);
        mpfr_add(r3819881, r3819876, r3819880, MPFR_RNDN);
        return mpfr_get_d(r3819881, MPFR_RNDN);
}

static mpfr_t r3819882, r3819883, r3819884, r3819885, r3819886, r3819887, r3819888, r3819889, r3819890, r3819891, r3819892, r3819893, r3819894, r3819895, r3819896, r3819897, r3819898, r3819899, r3819900, r3819901, r3819902, r3819903, r3819904, r3819905, r3819906, r3819907;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819882, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3819883, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r3819884);
        mpfr_init(r3819885);
        mpfr_init(r3819886);
        mpfr_init(r3819887);
        mpfr_init_set_str(r3819888, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r3819889);
        mpfr_init(r3819890);
        mpfr_init(r3819891);
        mpfr_init(r3819892);
        mpfr_init_set_str(r3819893, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r3819894);
        mpfr_init(r3819895);
        mpfr_init(r3819896);
        mpfr_init(r3819897);
        mpfr_init_set_str(r3819898, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r3819899);
        mpfr_init(r3819900);
        mpfr_init(r3819901);
        mpfr_init(r3819902);
        mpfr_init_set_str(r3819903, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r3819904);
        mpfr_init(r3819905);
        mpfr_init(r3819906);
        mpfr_init(r3819907);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3819884, x, MPFR_RNDN);
        mpfr_mul(r3819885, r3819884, r3819884, MPFR_RNDN);
        mpfr_mul(r3819886, r3819883, r3819885, MPFR_RNDN);
        mpfr_add(r3819887, r3819882, r3819886, MPFR_RNDN);
        ;
        mpfr_mul(r3819889, r3819885, r3819884, MPFR_RNDN);
        mpfr_mul(r3819890, r3819889, r3819884, MPFR_RNDN);
        mpfr_mul(r3819891, r3819888, r3819890, MPFR_RNDN);
        mpfr_add(r3819892, r3819887, r3819891, MPFR_RNDN);
        ;
        mpfr_mul(r3819894, r3819890, r3819884, MPFR_RNDN);
        mpfr_mul(r3819895, r3819894, r3819884, MPFR_RNDN);
        mpfr_mul(r3819896, r3819893, r3819895, MPFR_RNDN);
        mpfr_add(r3819897, r3819892, r3819896, MPFR_RNDN);
        ;
        mpfr_mul(r3819899, r3819895, r3819884, MPFR_RNDN);
        mpfr_mul(r3819900, r3819899, r3819884, MPFR_RNDN);
        mpfr_mul(r3819901, r3819898, r3819900, MPFR_RNDN);
        mpfr_add(r3819902, r3819897, r3819901, MPFR_RNDN);
        ;
        mpfr_mul(r3819904, r3819900, r3819884, MPFR_RNDN);
        mpfr_mul(r3819905, r3819904, r3819884, MPFR_RNDN);
        mpfr_mul(r3819906, r3819903, r3819905, MPFR_RNDN);
        mpfr_add(r3819907, r3819902, r3819906, MPFR_RNDN);
        return mpfr_get_d(r3819907, MPFR_RNDN);
}

static mpfr_t r3819908, r3819909, r3819910, r3819911, r3819912, r3819913, r3819914, r3819915, r3819916, r3819917, r3819918, r3819919, r3819920, r3819921, r3819922, r3819923, r3819924, r3819925, r3819926, r3819927, r3819928, r3819929, r3819930, r3819931, r3819932, r3819933;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819908, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3819909, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r3819910);
        mpfr_init(r3819911);
        mpfr_init(r3819912);
        mpfr_init(r3819913);
        mpfr_init_set_str(r3819914, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r3819915);
        mpfr_init(r3819916);
        mpfr_init(r3819917);
        mpfr_init(r3819918);
        mpfr_init_set_str(r3819919, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r3819920);
        mpfr_init(r3819921);
        mpfr_init(r3819922);
        mpfr_init(r3819923);
        mpfr_init_set_str(r3819924, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r3819925);
        mpfr_init(r3819926);
        mpfr_init(r3819927);
        mpfr_init(r3819928);
        mpfr_init_set_str(r3819929, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r3819930);
        mpfr_init(r3819931);
        mpfr_init(r3819932);
        mpfr_init(r3819933);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3819910, x, MPFR_RNDN);
        mpfr_mul(r3819911, r3819910, r3819910, MPFR_RNDN);
        mpfr_mul(r3819912, r3819909, r3819911, MPFR_RNDN);
        mpfr_add(r3819913, r3819908, r3819912, MPFR_RNDN);
        ;
        mpfr_mul(r3819915, r3819911, r3819910, MPFR_RNDN);
        mpfr_mul(r3819916, r3819915, r3819910, MPFR_RNDN);
        mpfr_mul(r3819917, r3819914, r3819916, MPFR_RNDN);
        mpfr_add(r3819918, r3819913, r3819917, MPFR_RNDN);
        ;
        mpfr_mul(r3819920, r3819916, r3819910, MPFR_RNDN);
        mpfr_mul(r3819921, r3819920, r3819910, MPFR_RNDN);
        mpfr_mul(r3819922, r3819919, r3819921, MPFR_RNDN);
        mpfr_add(r3819923, r3819918, r3819922, MPFR_RNDN);
        ;
        mpfr_mul(r3819925, r3819921, r3819910, MPFR_RNDN);
        mpfr_mul(r3819926, r3819925, r3819910, MPFR_RNDN);
        mpfr_mul(r3819927, r3819924, r3819926, MPFR_RNDN);
        mpfr_add(r3819928, r3819923, r3819927, MPFR_RNDN);
        ;
        mpfr_mul(r3819930, r3819926, r3819910, MPFR_RNDN);
        mpfr_mul(r3819931, r3819930, r3819910, MPFR_RNDN);
        mpfr_mul(r3819932, r3819929, r3819931, MPFR_RNDN);
        mpfr_add(r3819933, r3819928, r3819932, MPFR_RNDN);
        return mpfr_get_d(r3819933, MPFR_RNDN);
}

