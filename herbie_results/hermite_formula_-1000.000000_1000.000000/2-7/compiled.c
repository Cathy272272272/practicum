#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r12289747 = -1680.0;
        float r12289748 = x;
        float r12289749 = r12289747 * r12289748;
        float r12289750 = 3360.0;
        float r12289751 = r12289748 * r12289748;
        float r12289752 = r12289751 * r12289748;
        float r12289753 = r12289750 * r12289752;
        float r12289754 = r12289749 + r12289753;
        float r12289755 = -1344.0;
        float r12289756 = r12289752 * r12289748;
        float r12289757 = r12289756 * r12289748;
        float r12289758 = r12289755 * r12289757;
        float r12289759 = r12289754 + r12289758;
        float r12289760 = 128.0;
        float r12289761 = r12289757 * r12289748;
        float r12289762 = r12289761 * r12289748;
        float r12289763 = r12289760 * r12289762;
        float r12289764 = r12289759 + r12289763;
        return r12289764;
}

double f_id(double x) {
        double r12289765 = -1680.0;
        double r12289766 = x;
        double r12289767 = r12289765 * r12289766;
        double r12289768 = 3360.0;
        double r12289769 = r12289766 * r12289766;
        double r12289770 = r12289769 * r12289766;
        double r12289771 = r12289768 * r12289770;
        double r12289772 = r12289767 + r12289771;
        double r12289773 = -1344.0;
        double r12289774 = r12289770 * r12289766;
        double r12289775 = r12289774 * r12289766;
        double r12289776 = r12289773 * r12289775;
        double r12289777 = r12289772 + r12289776;
        double r12289778 = 128.0;
        double r12289779 = r12289775 * r12289766;
        double r12289780 = r12289779 * r12289766;
        double r12289781 = r12289778 * r12289780;
        double r12289782 = r12289777 + r12289781;
        return r12289782;
}


double f_of(float x) {
        float r12289783 = x;
        float r12289784 = r12289783 * r12289783;
        float r12289785 = r12289784 * r12289784;
        float r12289786 = 128.0;
        float r12289787 = r12289786 * r12289783;
        float r12289788 = r12289784 * r12289787;
        float r12289789 = -1344.0;
        float r12289790 = r12289783 * r12289789;
        float r12289791 = r12289788 + r12289790;
        float r12289792 = r12289785 * r12289791;
        float r12289793 = -1680.0;
        float r12289794 = r12289793 * r12289783;
        float r12289795 = 3360.0;
        float r12289796 = 3;
        float r12289797 = pow(r12289783, r12289796);
        float r12289798 = r12289795 * r12289797;
        float r12289799 = r12289794 + r12289798;
        float r12289800 = r12289792 + r12289799;
        return r12289800;
}

double f_od(double x) {
        double r12289801 = x;
        double r12289802 = r12289801 * r12289801;
        double r12289803 = r12289802 * r12289802;
        double r12289804 = 128.0;
        double r12289805 = r12289804 * r12289801;
        double r12289806 = r12289802 * r12289805;
        double r12289807 = -1344.0;
        double r12289808 = r12289801 * r12289807;
        double r12289809 = r12289806 + r12289808;
        double r12289810 = r12289803 * r12289809;
        double r12289811 = -1680.0;
        double r12289812 = r12289811 * r12289801;
        double r12289813 = 3360.0;
        double r12289814 = 3;
        double r12289815 = pow(r12289801, r12289814);
        double r12289816 = r12289813 * r12289815;
        double r12289817 = r12289812 + r12289816;
        double r12289818 = r12289810 + r12289817;
        return r12289818;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12289819, r12289820, r12289821, r12289822, r12289823, r12289824, r12289825, r12289826, r12289827, r12289828, r12289829, r12289830, r12289831, r12289832, r12289833, r12289834, r12289835, r12289836;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r12289819, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r12289820);
        mpfr_init(r12289821);
        mpfr_init_set_str(r12289822, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r12289823);
        mpfr_init(r12289824);
        mpfr_init(r12289825);
        mpfr_init(r12289826);
        mpfr_init_set_str(r12289827, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r12289828);
        mpfr_init(r12289829);
        mpfr_init(r12289830);
        mpfr_init(r12289831);
        mpfr_init_set_str(r12289832, "128.0", 10, MPFR_RNDN);
        mpfr_init(r12289833);
        mpfr_init(r12289834);
        mpfr_init(r12289835);
        mpfr_init(r12289836);
}

double f_im(double x) {
        ;
        mpfr_set_d(r12289820, x, MPFR_RNDN);
        mpfr_mul(r12289821, r12289819, r12289820, MPFR_RNDN);
        ;
        mpfr_mul(r12289823, r12289820, r12289820, MPFR_RNDN);
        mpfr_mul(r12289824, r12289823, r12289820, MPFR_RNDN);
        mpfr_mul(r12289825, r12289822, r12289824, MPFR_RNDN);
        mpfr_add(r12289826, r12289821, r12289825, MPFR_RNDN);
        ;
        mpfr_mul(r12289828, r12289824, r12289820, MPFR_RNDN);
        mpfr_mul(r12289829, r12289828, r12289820, MPFR_RNDN);
        mpfr_mul(r12289830, r12289827, r12289829, MPFR_RNDN);
        mpfr_add(r12289831, r12289826, r12289830, MPFR_RNDN);
        ;
        mpfr_mul(r12289833, r12289829, r12289820, MPFR_RNDN);
        mpfr_mul(r12289834, r12289833, r12289820, MPFR_RNDN);
        mpfr_mul(r12289835, r12289832, r12289834, MPFR_RNDN);
        mpfr_add(r12289836, r12289831, r12289835, MPFR_RNDN);
        return mpfr_get_d(r12289836, MPFR_RNDN);
}

static mpfr_t r12289837, r12289838, r12289839, r12289840, r12289841, r12289842, r12289843, r12289844, r12289845, r12289846, r12289847, r12289848, r12289849, r12289850, r12289851, r12289852, r12289853, r12289854;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r12289837);
        mpfr_init(r12289838);
        mpfr_init(r12289839);
        mpfr_init_set_str(r12289840, "128.0", 10, MPFR_RNDN);
        mpfr_init(r12289841);
        mpfr_init(r12289842);
        mpfr_init_set_str(r12289843, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r12289844);
        mpfr_init(r12289845);
        mpfr_init(r12289846);
        mpfr_init_set_str(r12289847, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r12289848);
        mpfr_init_set_str(r12289849, "3360.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289850, "3", 10, MPFR_RNDN);
        mpfr_init(r12289851);
        mpfr_init(r12289852);
        mpfr_init(r12289853);
        mpfr_init(r12289854);
}

double f_fm(double x) {
        mpfr_set_d(r12289837, x, MPFR_RNDN);
        mpfr_mul(r12289838, r12289837, r12289837, MPFR_RNDN);
        mpfr_mul(r12289839, r12289838, r12289838, MPFR_RNDN);
        ;
        mpfr_mul(r12289841, r12289840, r12289837, MPFR_RNDN);
        mpfr_mul(r12289842, r12289838, r12289841, MPFR_RNDN);
        ;
        mpfr_mul(r12289844, r12289837, r12289843, MPFR_RNDN);
        mpfr_add(r12289845, r12289842, r12289844, MPFR_RNDN);
        mpfr_mul(r12289846, r12289839, r12289845, MPFR_RNDN);
        ;
        mpfr_mul(r12289848, r12289847, r12289837, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r12289851, r12289837, r12289850, MPFR_RNDN);
        mpfr_mul(r12289852, r12289849, r12289851, MPFR_RNDN);
        mpfr_add(r12289853, r12289848, r12289852, MPFR_RNDN);
        mpfr_add(r12289854, r12289846, r12289853, MPFR_RNDN);
        return mpfr_get_d(r12289854, MPFR_RNDN);
}

static mpfr_t r12289855, r12289856, r12289857, r12289858, r12289859, r12289860, r12289861, r12289862, r12289863, r12289864, r12289865, r12289866, r12289867, r12289868, r12289869, r12289870, r12289871, r12289872;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r12289855);
        mpfr_init(r12289856);
        mpfr_init(r12289857);
        mpfr_init_set_str(r12289858, "128.0", 10, MPFR_RNDN);
        mpfr_init(r12289859);
        mpfr_init(r12289860);
        mpfr_init_set_str(r12289861, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r12289862);
        mpfr_init(r12289863);
        mpfr_init(r12289864);
        mpfr_init_set_str(r12289865, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r12289866);
        mpfr_init_set_str(r12289867, "3360.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289868, "3", 10, MPFR_RNDN);
        mpfr_init(r12289869);
        mpfr_init(r12289870);
        mpfr_init(r12289871);
        mpfr_init(r12289872);
}

double f_dm(double x) {
        mpfr_set_d(r12289855, x, MPFR_RNDN);
        mpfr_mul(r12289856, r12289855, r12289855, MPFR_RNDN);
        mpfr_mul(r12289857, r12289856, r12289856, MPFR_RNDN);
        ;
        mpfr_mul(r12289859, r12289858, r12289855, MPFR_RNDN);
        mpfr_mul(r12289860, r12289856, r12289859, MPFR_RNDN);
        ;
        mpfr_mul(r12289862, r12289855, r12289861, MPFR_RNDN);
        mpfr_add(r12289863, r12289860, r12289862, MPFR_RNDN);
        mpfr_mul(r12289864, r12289857, r12289863, MPFR_RNDN);
        ;
        mpfr_mul(r12289866, r12289865, r12289855, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r12289869, r12289855, r12289868, MPFR_RNDN);
        mpfr_mul(r12289870, r12289867, r12289869, MPFR_RNDN);
        mpfr_add(r12289871, r12289866, r12289870, MPFR_RNDN);
        mpfr_add(r12289872, r12289864, r12289871, MPFR_RNDN);
        return mpfr_get_d(r12289872, MPFR_RNDN);
}

