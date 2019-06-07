#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r4212744 = -30240.0;
        float r4212745 = 302400.0;
        float r4212746 = x;
        float r4212747 = r4212746 * r4212746;
        float r4212748 = r4212745 * r4212747;
        float r4212749 = r4212744 + r4212748;
        float r4212750 = -403200.0;
        float r4212751 = r4212747 * r4212746;
        float r4212752 = r4212751 * r4212746;
        float r4212753 = r4212750 * r4212752;
        float r4212754 = r4212749 + r4212753;
        float r4212755 = 161280.0;
        float r4212756 = r4212752 * r4212746;
        float r4212757 = r4212756 * r4212746;
        float r4212758 = r4212755 * r4212757;
        float r4212759 = r4212754 + r4212758;
        float r4212760 = -23040.0;
        float r4212761 = r4212757 * r4212746;
        float r4212762 = r4212761 * r4212746;
        float r4212763 = r4212760 * r4212762;
        float r4212764 = r4212759 + r4212763;
        float r4212765 = 1024.0;
        float r4212766 = r4212762 * r4212746;
        float r4212767 = r4212766 * r4212746;
        float r4212768 = r4212765 * r4212767;
        float r4212769 = r4212764 + r4212768;
        return r4212769;
}

double f_id(double x) {
        double r4212770 = -30240.0;
        double r4212771 = 302400.0;
        double r4212772 = x;
        double r4212773 = r4212772 * r4212772;
        double r4212774 = r4212771 * r4212773;
        double r4212775 = r4212770 + r4212774;
        double r4212776 = -403200.0;
        double r4212777 = r4212773 * r4212772;
        double r4212778 = r4212777 * r4212772;
        double r4212779 = r4212776 * r4212778;
        double r4212780 = r4212775 + r4212779;
        double r4212781 = 161280.0;
        double r4212782 = r4212778 * r4212772;
        double r4212783 = r4212782 * r4212772;
        double r4212784 = r4212781 * r4212783;
        double r4212785 = r4212780 + r4212784;
        double r4212786 = -23040.0;
        double r4212787 = r4212783 * r4212772;
        double r4212788 = r4212787 * r4212772;
        double r4212789 = r4212786 * r4212788;
        double r4212790 = r4212785 + r4212789;
        double r4212791 = 1024.0;
        double r4212792 = r4212788 * r4212772;
        double r4212793 = r4212792 * r4212772;
        double r4212794 = r4212791 * r4212793;
        double r4212795 = r4212790 + r4212794;
        return r4212795;
}


double f_of(float x) {
        float r4212796 = x;
        float r4212797 = r4212796 * r4212796;
        float r4212798 = r4212797 * r4212797;
        float r4212799 = -403200.0;
        float r4212800 = 161280.0;
        float r4212801 = r4212800 * r4212796;
        float r4212802 = r4212796 * r4212801;
        float r4212803 = r4212799 + r4212802;
        float r4212804 = r4212798 * r4212803;
        float r4212805 = 3;
        float r4212806 = pow(r4212796, r4212805);
        float r4212807 = r4212806 * r4212806;
        float r4212808 = 1024.0;
        float r4212809 = r4212796 * r4212808;
        float r4212810 = r4212809 * r4212806;
        float r4212811 = r4212807 * r4212810;
        float r4212812 = 1;
        float r4212813 = r4212812 + r4212805;
        float r4212814 = pow(r4212797, r4212813);
        float r4212815 = -23040.0;
        float r4212816 = r4212814 * r4212815;
        float r4212817 = r4212811 + r4212816;
        float r4212818 = r4212804 + r4212817;
        float r4212819 = 302400.0;
        float r4212820 = r4212796 * r4212819;
        float r4212821 = r4212796 * r4212820;
        float r4212822 = -30240.0;
        float r4212823 = r4212821 + r4212822;
        float r4212824 = r4212818 + r4212823;
        return r4212824;
}

double f_od(double x) {
        double r4212825 = x;
        double r4212826 = r4212825 * r4212825;
        double r4212827 = r4212826 * r4212826;
        double r4212828 = -403200.0;
        double r4212829 = 161280.0;
        double r4212830 = r4212829 * r4212825;
        double r4212831 = r4212825 * r4212830;
        double r4212832 = r4212828 + r4212831;
        double r4212833 = r4212827 * r4212832;
        double r4212834 = 3;
        double r4212835 = pow(r4212825, r4212834);
        double r4212836 = r4212835 * r4212835;
        double r4212837 = 1024.0;
        double r4212838 = r4212825 * r4212837;
        double r4212839 = r4212838 * r4212835;
        double r4212840 = r4212836 * r4212839;
        double r4212841 = 1;
        double r4212842 = r4212841 + r4212834;
        double r4212843 = pow(r4212826, r4212842);
        double r4212844 = -23040.0;
        double r4212845 = r4212843 * r4212844;
        double r4212846 = r4212840 + r4212845;
        double r4212847 = r4212833 + r4212846;
        double r4212848 = 302400.0;
        double r4212849 = r4212825 * r4212848;
        double r4212850 = r4212825 * r4212849;
        double r4212851 = -30240.0;
        double r4212852 = r4212850 + r4212851;
        double r4212853 = r4212847 + r4212852;
        return r4212853;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4212854, r4212855, r4212856, r4212857, r4212858, r4212859, r4212860, r4212861, r4212862, r4212863, r4212864, r4212865, r4212866, r4212867, r4212868, r4212869, r4212870, r4212871, r4212872, r4212873, r4212874, r4212875, r4212876, r4212877, r4212878, r4212879;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4212854, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4212855, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r4212856);
        mpfr_init(r4212857);
        mpfr_init(r4212858);
        mpfr_init(r4212859);
        mpfr_init_set_str(r4212860, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r4212861);
        mpfr_init(r4212862);
        mpfr_init(r4212863);
        mpfr_init(r4212864);
        mpfr_init_set_str(r4212865, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r4212866);
        mpfr_init(r4212867);
        mpfr_init(r4212868);
        mpfr_init(r4212869);
        mpfr_init_set_str(r4212870, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r4212871);
        mpfr_init(r4212872);
        mpfr_init(r4212873);
        mpfr_init(r4212874);
        mpfr_init_set_str(r4212875, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r4212876);
        mpfr_init(r4212877);
        mpfr_init(r4212878);
        mpfr_init(r4212879);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4212856, x, MPFR_RNDN);
        mpfr_mul(r4212857, r4212856, r4212856, MPFR_RNDN);
        mpfr_mul(r4212858, r4212855, r4212857, MPFR_RNDN);
        mpfr_add(r4212859, r4212854, r4212858, MPFR_RNDN);
        ;
        mpfr_mul(r4212861, r4212857, r4212856, MPFR_RNDN);
        mpfr_mul(r4212862, r4212861, r4212856, MPFR_RNDN);
        mpfr_mul(r4212863, r4212860, r4212862, MPFR_RNDN);
        mpfr_add(r4212864, r4212859, r4212863, MPFR_RNDN);
        ;
        mpfr_mul(r4212866, r4212862, r4212856, MPFR_RNDN);
        mpfr_mul(r4212867, r4212866, r4212856, MPFR_RNDN);
        mpfr_mul(r4212868, r4212865, r4212867, MPFR_RNDN);
        mpfr_add(r4212869, r4212864, r4212868, MPFR_RNDN);
        ;
        mpfr_mul(r4212871, r4212867, r4212856, MPFR_RNDN);
        mpfr_mul(r4212872, r4212871, r4212856, MPFR_RNDN);
        mpfr_mul(r4212873, r4212870, r4212872, MPFR_RNDN);
        mpfr_add(r4212874, r4212869, r4212873, MPFR_RNDN);
        ;
        mpfr_mul(r4212876, r4212872, r4212856, MPFR_RNDN);
        mpfr_mul(r4212877, r4212876, r4212856, MPFR_RNDN);
        mpfr_mul(r4212878, r4212875, r4212877, MPFR_RNDN);
        mpfr_add(r4212879, r4212874, r4212878, MPFR_RNDN);
        return mpfr_get_d(r4212879, MPFR_RNDN);
}

static mpfr_t r4212880, r4212881, r4212882, r4212883, r4212884, r4212885, r4212886, r4212887, r4212888, r4212889, r4212890, r4212891, r4212892, r4212893, r4212894, r4212895, r4212896, r4212897, r4212898, r4212899, r4212900, r4212901, r4212902, r4212903, r4212904, r4212905, r4212906, r4212907, r4212908;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4212880);
        mpfr_init(r4212881);
        mpfr_init(r4212882);
        mpfr_init_set_str(r4212883, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4212884, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r4212885);
        mpfr_init(r4212886);
        mpfr_init(r4212887);
        mpfr_init(r4212888);
        mpfr_init_set_str(r4212889, "3", 10, MPFR_RNDN);
        mpfr_init(r4212890);
        mpfr_init(r4212891);
        mpfr_init_set_str(r4212892, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r4212893);
        mpfr_init(r4212894);
        mpfr_init(r4212895);
        mpfr_init_set_str(r4212896, "1", 10, MPFR_RNDN);
        mpfr_init(r4212897);
        mpfr_init(r4212898);
        mpfr_init_set_str(r4212899, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r4212900);
        mpfr_init(r4212901);
        mpfr_init(r4212902);
        mpfr_init_set_str(r4212903, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r4212904);
        mpfr_init(r4212905);
        mpfr_init_set_str(r4212906, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r4212907);
        mpfr_init(r4212908);
}

double f_fm(double x) {
        mpfr_set_d(r4212880, x, MPFR_RNDN);
        mpfr_mul(r4212881, r4212880, r4212880, MPFR_RNDN);
        mpfr_mul(r4212882, r4212881, r4212881, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4212885, r4212884, r4212880, MPFR_RNDN);
        mpfr_mul(r4212886, r4212880, r4212885, MPFR_RNDN);
        mpfr_add(r4212887, r4212883, r4212886, MPFR_RNDN);
        mpfr_mul(r4212888, r4212882, r4212887, MPFR_RNDN);
        ;
        mpfr_pow(r4212890, r4212880, r4212889, MPFR_RNDN);
        mpfr_mul(r4212891, r4212890, r4212890, MPFR_RNDN);
        ;
        mpfr_mul(r4212893, r4212880, r4212892, MPFR_RNDN);
        mpfr_mul(r4212894, r4212893, r4212890, MPFR_RNDN);
        mpfr_mul(r4212895, r4212891, r4212894, MPFR_RNDN);
        ;
        mpfr_add(r4212897, r4212896, r4212889, MPFR_RNDN);
        mpfr_pow(r4212898, r4212881, r4212897, MPFR_RNDN);
        ;
        mpfr_mul(r4212900, r4212898, r4212899, MPFR_RNDN);
        mpfr_add(r4212901, r4212895, r4212900, MPFR_RNDN);
        mpfr_add(r4212902, r4212888, r4212901, MPFR_RNDN);
        ;
        mpfr_mul(r4212904, r4212880, r4212903, MPFR_RNDN);
        mpfr_mul(r4212905, r4212880, r4212904, MPFR_RNDN);
        ;
        mpfr_add(r4212907, r4212905, r4212906, MPFR_RNDN);
        mpfr_add(r4212908, r4212902, r4212907, MPFR_RNDN);
        return mpfr_get_d(r4212908, MPFR_RNDN);
}

static mpfr_t r4212909, r4212910, r4212911, r4212912, r4212913, r4212914, r4212915, r4212916, r4212917, r4212918, r4212919, r4212920, r4212921, r4212922, r4212923, r4212924, r4212925, r4212926, r4212927, r4212928, r4212929, r4212930, r4212931, r4212932, r4212933, r4212934, r4212935, r4212936, r4212937;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4212909);
        mpfr_init(r4212910);
        mpfr_init(r4212911);
        mpfr_init_set_str(r4212912, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4212913, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r4212914);
        mpfr_init(r4212915);
        mpfr_init(r4212916);
        mpfr_init(r4212917);
        mpfr_init_set_str(r4212918, "3", 10, MPFR_RNDN);
        mpfr_init(r4212919);
        mpfr_init(r4212920);
        mpfr_init_set_str(r4212921, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r4212922);
        mpfr_init(r4212923);
        mpfr_init(r4212924);
        mpfr_init_set_str(r4212925, "1", 10, MPFR_RNDN);
        mpfr_init(r4212926);
        mpfr_init(r4212927);
        mpfr_init_set_str(r4212928, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r4212929);
        mpfr_init(r4212930);
        mpfr_init(r4212931);
        mpfr_init_set_str(r4212932, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r4212933);
        mpfr_init(r4212934);
        mpfr_init_set_str(r4212935, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r4212936);
        mpfr_init(r4212937);
}

double f_dm(double x) {
        mpfr_set_d(r4212909, x, MPFR_RNDN);
        mpfr_mul(r4212910, r4212909, r4212909, MPFR_RNDN);
        mpfr_mul(r4212911, r4212910, r4212910, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4212914, r4212913, r4212909, MPFR_RNDN);
        mpfr_mul(r4212915, r4212909, r4212914, MPFR_RNDN);
        mpfr_add(r4212916, r4212912, r4212915, MPFR_RNDN);
        mpfr_mul(r4212917, r4212911, r4212916, MPFR_RNDN);
        ;
        mpfr_pow(r4212919, r4212909, r4212918, MPFR_RNDN);
        mpfr_mul(r4212920, r4212919, r4212919, MPFR_RNDN);
        ;
        mpfr_mul(r4212922, r4212909, r4212921, MPFR_RNDN);
        mpfr_mul(r4212923, r4212922, r4212919, MPFR_RNDN);
        mpfr_mul(r4212924, r4212920, r4212923, MPFR_RNDN);
        ;
        mpfr_add(r4212926, r4212925, r4212918, MPFR_RNDN);
        mpfr_pow(r4212927, r4212910, r4212926, MPFR_RNDN);
        ;
        mpfr_mul(r4212929, r4212927, r4212928, MPFR_RNDN);
        mpfr_add(r4212930, r4212924, r4212929, MPFR_RNDN);
        mpfr_add(r4212931, r4212917, r4212930, MPFR_RNDN);
        ;
        mpfr_mul(r4212933, r4212909, r4212932, MPFR_RNDN);
        mpfr_mul(r4212934, r4212909, r4212933, MPFR_RNDN);
        ;
        mpfr_add(r4212936, r4212934, r4212935, MPFR_RNDN);
        mpfr_add(r4212937, r4212931, r4212936, MPFR_RNDN);
        return mpfr_get_d(r4212937, MPFR_RNDN);
}

