#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7402763 = 1.875;
        float r7402764 = x;
        float r7402765 = r7402763 * r7402764;
        float r7402766 = -8.75;
        float r7402767 = r7402764 * r7402764;
        float r7402768 = r7402767 * r7402764;
        float r7402769 = r7402766 * r7402768;
        float r7402770 = r7402765 + r7402769;
        float r7402771 = 7.875;
        float r7402772 = r7402768 * r7402764;
        float r7402773 = r7402772 * r7402764;
        float r7402774 = r7402771 * r7402773;
        float r7402775 = r7402770 + r7402774;
        return r7402775;
}

double f_id(double x) {
        double r7402776 = 1.875;
        double r7402777 = x;
        double r7402778 = r7402776 * r7402777;
        double r7402779 = -8.75;
        double r7402780 = r7402777 * r7402777;
        double r7402781 = r7402780 * r7402777;
        double r7402782 = r7402779 * r7402781;
        double r7402783 = r7402778 + r7402782;
        double r7402784 = 7.875;
        double r7402785 = r7402781 * r7402777;
        double r7402786 = r7402785 * r7402777;
        double r7402787 = r7402784 * r7402786;
        double r7402788 = r7402783 + r7402787;
        return r7402788;
}


double f_of(float x) {
        float r7402789 = 1.875;
        float r7402790 = x;
        float r7402791 = r7402789 * r7402790;
        float r7402792 = -8.75;
        float r7402793 = r7402790 * r7402790;
        float r7402794 = r7402793 * r7402790;
        float r7402795 = r7402792 * r7402794;
        float r7402796 = r7402791 + r7402795;
        float r7402797 = 7.875;
        float r7402798 = 1;
        float r7402799 = r7402798 / r7402790;
        float r7402800 = -3;
        float r7402801 = pow(r7402799, r7402800);
        float r7402802 = r7402801 * r7402790;
        float r7402803 = r7402802 * r7402790;
        float r7402804 = r7402797 * r7402803;
        float r7402805 = r7402796 + r7402804;
        return r7402805;
}

double f_od(double x) {
        double r7402806 = 1.875;
        double r7402807 = x;
        double r7402808 = r7402806 * r7402807;
        double r7402809 = -8.75;
        double r7402810 = r7402807 * r7402807;
        double r7402811 = r7402810 * r7402807;
        double r7402812 = r7402809 * r7402811;
        double r7402813 = r7402808 + r7402812;
        double r7402814 = 7.875;
        double r7402815 = 1;
        double r7402816 = r7402815 / r7402807;
        double r7402817 = -3;
        double r7402818 = pow(r7402816, r7402817);
        double r7402819 = r7402818 * r7402807;
        double r7402820 = r7402819 * r7402807;
        double r7402821 = r7402814 * r7402820;
        double r7402822 = r7402813 + r7402821;
        return r7402822;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7402823, r7402824, r7402825, r7402826, r7402827, r7402828, r7402829, r7402830, r7402831, r7402832, r7402833, r7402834, r7402835;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7402823, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7402824);
        mpfr_init(r7402825);
        mpfr_init_set_str(r7402826, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7402827);
        mpfr_init(r7402828);
        mpfr_init(r7402829);
        mpfr_init(r7402830);
        mpfr_init_set_str(r7402831, "7.875", 10, MPFR_RNDN);
        mpfr_init(r7402832);
        mpfr_init(r7402833);
        mpfr_init(r7402834);
        mpfr_init(r7402835);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7402824, x, MPFR_RNDN);
        mpfr_mul(r7402825, r7402823, r7402824, MPFR_RNDN);
        ;
        mpfr_mul(r7402827, r7402824, r7402824, MPFR_RNDN);
        mpfr_mul(r7402828, r7402827, r7402824, MPFR_RNDN);
        mpfr_mul(r7402829, r7402826, r7402828, MPFR_RNDN);
        mpfr_add(r7402830, r7402825, r7402829, MPFR_RNDN);
        ;
        mpfr_mul(r7402832, r7402828, r7402824, MPFR_RNDN);
        mpfr_mul(r7402833, r7402832, r7402824, MPFR_RNDN);
        mpfr_mul(r7402834, r7402831, r7402833, MPFR_RNDN);
        mpfr_add(r7402835, r7402830, r7402834, MPFR_RNDN);
        return mpfr_get_d(r7402835, MPFR_RNDN);
}

static mpfr_t r7402836, r7402837, r7402838, r7402839, r7402840, r7402841, r7402842, r7402843, r7402844, r7402845, r7402846, r7402847, r7402848, r7402849, r7402850, r7402851, r7402852;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7402836, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7402837);
        mpfr_init(r7402838);
        mpfr_init_set_str(r7402839, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7402840);
        mpfr_init(r7402841);
        mpfr_init(r7402842);
        mpfr_init(r7402843);
        mpfr_init_set_str(r7402844, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402845, "1", 10, MPFR_RNDN);
        mpfr_init(r7402846);
        mpfr_init_set_str(r7402847, "-3", 10, MPFR_RNDN);
        mpfr_init(r7402848);
        mpfr_init(r7402849);
        mpfr_init(r7402850);
        mpfr_init(r7402851);
        mpfr_init(r7402852);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7402837, x, MPFR_RNDN);
        mpfr_mul(r7402838, r7402836, r7402837, MPFR_RNDN);
        ;
        mpfr_mul(r7402840, r7402837, r7402837, MPFR_RNDN);
        mpfr_mul(r7402841, r7402840, r7402837, MPFR_RNDN);
        mpfr_mul(r7402842, r7402839, r7402841, MPFR_RNDN);
        mpfr_add(r7402843, r7402838, r7402842, MPFR_RNDN);
        ;
        ;
        mpfr_div(r7402846, r7402845, r7402837, MPFR_RNDN);
        ;
        mpfr_pow(r7402848, r7402846, r7402847, MPFR_RNDN);
        mpfr_mul(r7402849, r7402848, r7402837, MPFR_RNDN);
        mpfr_mul(r7402850, r7402849, r7402837, MPFR_RNDN);
        mpfr_mul(r7402851, r7402844, r7402850, MPFR_RNDN);
        mpfr_add(r7402852, r7402843, r7402851, MPFR_RNDN);
        return mpfr_get_d(r7402852, MPFR_RNDN);
}

static mpfr_t r7402853, r7402854, r7402855, r7402856, r7402857, r7402858, r7402859, r7402860, r7402861, r7402862, r7402863, r7402864, r7402865, r7402866, r7402867, r7402868, r7402869;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7402853, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7402854);
        mpfr_init(r7402855);
        mpfr_init_set_str(r7402856, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7402857);
        mpfr_init(r7402858);
        mpfr_init(r7402859);
        mpfr_init(r7402860);
        mpfr_init_set_str(r7402861, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402862, "1", 10, MPFR_RNDN);
        mpfr_init(r7402863);
        mpfr_init_set_str(r7402864, "-3", 10, MPFR_RNDN);
        mpfr_init(r7402865);
        mpfr_init(r7402866);
        mpfr_init(r7402867);
        mpfr_init(r7402868);
        mpfr_init(r7402869);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7402854, x, MPFR_RNDN);
        mpfr_mul(r7402855, r7402853, r7402854, MPFR_RNDN);
        ;
        mpfr_mul(r7402857, r7402854, r7402854, MPFR_RNDN);
        mpfr_mul(r7402858, r7402857, r7402854, MPFR_RNDN);
        mpfr_mul(r7402859, r7402856, r7402858, MPFR_RNDN);
        mpfr_add(r7402860, r7402855, r7402859, MPFR_RNDN);
        ;
        ;
        mpfr_div(r7402863, r7402862, r7402854, MPFR_RNDN);
        ;
        mpfr_pow(r7402865, r7402863, r7402864, MPFR_RNDN);
        mpfr_mul(r7402866, r7402865, r7402854, MPFR_RNDN);
        mpfr_mul(r7402867, r7402866, r7402854, MPFR_RNDN);
        mpfr_mul(r7402868, r7402861, r7402867, MPFR_RNDN);
        mpfr_add(r7402869, r7402860, r7402868, MPFR_RNDN);
        return mpfr_get_d(r7402869, MPFR_RNDN);
}

