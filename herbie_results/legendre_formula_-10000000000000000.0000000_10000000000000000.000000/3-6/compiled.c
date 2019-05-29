#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6903776 = -0.3125;
        float r6903777 = 6.5625;
        float r6903778 = x;
        float r6903779 = r6903778 * r6903778;
        float r6903780 = r6903777 * r6903779;
        float r6903781 = r6903776 + r6903780;
        float r6903782 = -19.6875;
        float r6903783 = r6903779 * r6903778;
        float r6903784 = r6903783 * r6903778;
        float r6903785 = r6903782 * r6903784;
        float r6903786 = r6903781 + r6903785;
        float r6903787 = 14.4375;
        float r6903788 = r6903784 * r6903778;
        float r6903789 = r6903788 * r6903778;
        float r6903790 = r6903787 * r6903789;
        float r6903791 = r6903786 + r6903790;
        return r6903791;
}

double f_id(double x) {
        double r6903792 = -0.3125;
        double r6903793 = 6.5625;
        double r6903794 = x;
        double r6903795 = r6903794 * r6903794;
        double r6903796 = r6903793 * r6903795;
        double r6903797 = r6903792 + r6903796;
        double r6903798 = -19.6875;
        double r6903799 = r6903795 * r6903794;
        double r6903800 = r6903799 * r6903794;
        double r6903801 = r6903798 * r6903800;
        double r6903802 = r6903797 + r6903801;
        double r6903803 = 14.4375;
        double r6903804 = r6903800 * r6903794;
        double r6903805 = r6903804 * r6903794;
        double r6903806 = r6903803 * r6903805;
        double r6903807 = r6903802 + r6903806;
        return r6903807;
}


double f_of(float x) {
        float r6903808 = x;
        float r6903809 = 6.5625;
        float r6903810 = r6903808 * r6903809;
        float r6903811 = r6903810 * r6903808;
        float r6903812 = -0.3125;
        float r6903813 = r6903811 + r6903812;
        float r6903814 = 2;
        float r6903815 = r6903814 + r6903814;
        float r6903816 = pow(r6903808, r6903815);
        float r6903817 = -19.6875;
        float r6903818 = r6903808 * r6903808;
        float r6903819 = 14.4375;
        float r6903820 = r6903818 * r6903819;
        float r6903821 = r6903817 + r6903820;
        float r6903822 = r6903816 * r6903821;
        float r6903823 = r6903813 + r6903822;
        return r6903823;
}

double f_od(double x) {
        double r6903824 = x;
        double r6903825 = 6.5625;
        double r6903826 = r6903824 * r6903825;
        double r6903827 = r6903826 * r6903824;
        double r6903828 = -0.3125;
        double r6903829 = r6903827 + r6903828;
        double r6903830 = 2;
        double r6903831 = r6903830 + r6903830;
        double r6903832 = pow(r6903824, r6903831);
        double r6903833 = -19.6875;
        double r6903834 = r6903824 * r6903824;
        double r6903835 = 14.4375;
        double r6903836 = r6903834 * r6903835;
        double r6903837 = r6903833 + r6903836;
        double r6903838 = r6903832 * r6903837;
        double r6903839 = r6903829 + r6903838;
        return r6903839;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6903840, r6903841, r6903842, r6903843, r6903844, r6903845, r6903846, r6903847, r6903848, r6903849, r6903850, r6903851, r6903852, r6903853, r6903854, r6903855;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6903840, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6903841, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6903842);
        mpfr_init(r6903843);
        mpfr_init(r6903844);
        mpfr_init(r6903845);
        mpfr_init_set_str(r6903846, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6903847);
        mpfr_init(r6903848);
        mpfr_init(r6903849);
        mpfr_init(r6903850);
        mpfr_init_set_str(r6903851, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6903852);
        mpfr_init(r6903853);
        mpfr_init(r6903854);
        mpfr_init(r6903855);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6903842, x, MPFR_RNDN);
        mpfr_mul(r6903843, r6903842, r6903842, MPFR_RNDN);
        mpfr_mul(r6903844, r6903841, r6903843, MPFR_RNDN);
        mpfr_add(r6903845, r6903840, r6903844, MPFR_RNDN);
        ;
        mpfr_mul(r6903847, r6903843, r6903842, MPFR_RNDN);
        mpfr_mul(r6903848, r6903847, r6903842, MPFR_RNDN);
        mpfr_mul(r6903849, r6903846, r6903848, MPFR_RNDN);
        mpfr_add(r6903850, r6903845, r6903849, MPFR_RNDN);
        ;
        mpfr_mul(r6903852, r6903848, r6903842, MPFR_RNDN);
        mpfr_mul(r6903853, r6903852, r6903842, MPFR_RNDN);
        mpfr_mul(r6903854, r6903851, r6903853, MPFR_RNDN);
        mpfr_add(r6903855, r6903850, r6903854, MPFR_RNDN);
        return mpfr_get_d(r6903855, MPFR_RNDN);
}

static mpfr_t r6903856, r6903857, r6903858, r6903859, r6903860, r6903861, r6903862, r6903863, r6903864, r6903865, r6903866, r6903867, r6903868, r6903869, r6903870, r6903871;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6903856);
        mpfr_init_set_str(r6903857, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6903858);
        mpfr_init(r6903859);
        mpfr_init_set_str(r6903860, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6903861);
        mpfr_init_set_str(r6903862, "2", 10, MPFR_RNDN);
        mpfr_init(r6903863);
        mpfr_init(r6903864);
        mpfr_init_set_str(r6903865, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6903866);
        mpfr_init_set_str(r6903867, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6903868);
        mpfr_init(r6903869);
        mpfr_init(r6903870);
        mpfr_init(r6903871);
}

double f_fm(double x) {
        mpfr_set_d(r6903856, x, MPFR_RNDN);
        ;
        mpfr_mul(r6903858, r6903856, r6903857, MPFR_RNDN);
        mpfr_mul(r6903859, r6903858, r6903856, MPFR_RNDN);
        ;
        mpfr_add(r6903861, r6903859, r6903860, MPFR_RNDN);
        ;
        mpfr_add(r6903863, r6903862, r6903862, MPFR_RNDN);
        mpfr_pow(r6903864, r6903856, r6903863, MPFR_RNDN);
        ;
        mpfr_mul(r6903866, r6903856, r6903856, MPFR_RNDN);
        ;
        mpfr_mul(r6903868, r6903866, r6903867, MPFR_RNDN);
        mpfr_add(r6903869, r6903865, r6903868, MPFR_RNDN);
        mpfr_mul(r6903870, r6903864, r6903869, MPFR_RNDN);
        mpfr_add(r6903871, r6903861, r6903870, MPFR_RNDN);
        return mpfr_get_d(r6903871, MPFR_RNDN);
}

static mpfr_t r6903872, r6903873, r6903874, r6903875, r6903876, r6903877, r6903878, r6903879, r6903880, r6903881, r6903882, r6903883, r6903884, r6903885, r6903886, r6903887;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6903872);
        mpfr_init_set_str(r6903873, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6903874);
        mpfr_init(r6903875);
        mpfr_init_set_str(r6903876, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6903877);
        mpfr_init_set_str(r6903878, "2", 10, MPFR_RNDN);
        mpfr_init(r6903879);
        mpfr_init(r6903880);
        mpfr_init_set_str(r6903881, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6903882);
        mpfr_init_set_str(r6903883, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6903884);
        mpfr_init(r6903885);
        mpfr_init(r6903886);
        mpfr_init(r6903887);
}

double f_dm(double x) {
        mpfr_set_d(r6903872, x, MPFR_RNDN);
        ;
        mpfr_mul(r6903874, r6903872, r6903873, MPFR_RNDN);
        mpfr_mul(r6903875, r6903874, r6903872, MPFR_RNDN);
        ;
        mpfr_add(r6903877, r6903875, r6903876, MPFR_RNDN);
        ;
        mpfr_add(r6903879, r6903878, r6903878, MPFR_RNDN);
        mpfr_pow(r6903880, r6903872, r6903879, MPFR_RNDN);
        ;
        mpfr_mul(r6903882, r6903872, r6903872, MPFR_RNDN);
        ;
        mpfr_mul(r6903884, r6903882, r6903883, MPFR_RNDN);
        mpfr_add(r6903885, r6903881, r6903884, MPFR_RNDN);
        mpfr_mul(r6903886, r6903880, r6903885, MPFR_RNDN);
        mpfr_add(r6903887, r6903877, r6903886, MPFR_RNDN);
        return mpfr_get_d(r6903887, MPFR_RNDN);
}

