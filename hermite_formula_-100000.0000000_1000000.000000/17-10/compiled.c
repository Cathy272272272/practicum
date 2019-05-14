#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7641688 = -30240.0;
        float r7641689 = 302400.0;
        float r7641690 = x;
        float r7641691 = r7641690 * r7641690;
        float r7641692 = r7641689 * r7641691;
        float r7641693 = r7641688 + r7641692;
        float r7641694 = -403200.0;
        float r7641695 = r7641691 * r7641690;
        float r7641696 = r7641695 * r7641690;
        float r7641697 = r7641694 * r7641696;
        float r7641698 = r7641693 + r7641697;
        float r7641699 = 161280.0;
        float r7641700 = r7641696 * r7641690;
        float r7641701 = r7641700 * r7641690;
        float r7641702 = r7641699 * r7641701;
        float r7641703 = r7641698 + r7641702;
        float r7641704 = -23040.0;
        float r7641705 = r7641701 * r7641690;
        float r7641706 = r7641705 * r7641690;
        float r7641707 = r7641704 * r7641706;
        float r7641708 = r7641703 + r7641707;
        float r7641709 = 1024.0;
        float r7641710 = r7641706 * r7641690;
        float r7641711 = r7641710 * r7641690;
        float r7641712 = r7641709 * r7641711;
        float r7641713 = r7641708 + r7641712;
        return r7641713;
}

double f_id(double x) {
        double r7641714 = -30240.0;
        double r7641715 = 302400.0;
        double r7641716 = x;
        double r7641717 = r7641716 * r7641716;
        double r7641718 = r7641715 * r7641717;
        double r7641719 = r7641714 + r7641718;
        double r7641720 = -403200.0;
        double r7641721 = r7641717 * r7641716;
        double r7641722 = r7641721 * r7641716;
        double r7641723 = r7641720 * r7641722;
        double r7641724 = r7641719 + r7641723;
        double r7641725 = 161280.0;
        double r7641726 = r7641722 * r7641716;
        double r7641727 = r7641726 * r7641716;
        double r7641728 = r7641725 * r7641727;
        double r7641729 = r7641724 + r7641728;
        double r7641730 = -23040.0;
        double r7641731 = r7641727 * r7641716;
        double r7641732 = r7641731 * r7641716;
        double r7641733 = r7641730 * r7641732;
        double r7641734 = r7641729 + r7641733;
        double r7641735 = 1024.0;
        double r7641736 = r7641732 * r7641716;
        double r7641737 = r7641736 * r7641716;
        double r7641738 = r7641735 * r7641737;
        double r7641739 = r7641734 + r7641738;
        return r7641739;
}


double f_of(float x) {
        float r7641740 = x;
        float r7641741 = r7641740 * r7641740;
        float r7641742 = r7641741 * r7641741;
        float r7641743 = 161280.0;
        float r7641744 = r7641743 * r7641740;
        float r7641745 = r7641744 * r7641740;
        float r7641746 = r7641742 * r7641745;
        float r7641747 = -23040.0;
        float r7641748 = 8;
        float r7641749 = pow(r7641740, r7641748);
        float r7641750 = r7641747 * r7641749;
        float r7641751 = -403200.0;
        float r7641752 = r7641740 * r7641751;
        float r7641753 = 3;
        float r7641754 = pow(r7641740, r7641753);
        float r7641755 = r7641752 * r7641754;
        float r7641756 = r7641750 + r7641755;
        float r7641757 = r7641746 + r7641756;
        float r7641758 = 1024.0;
        float r7641759 = r7641758 * r7641740;
        float r7641760 = r7641759 * r7641754;
        float r7641761 = r7641754 * r7641754;
        float r7641762 = r7641760 * r7641761;
        float r7641763 = 302400.0;
        float r7641764 = r7641741 * r7641763;
        float r7641765 = -30240.0;
        float r7641766 = r7641764 + r7641765;
        float r7641767 = r7641762 + r7641766;
        float r7641768 = r7641757 + r7641767;
        return r7641768;
}

double f_od(double x) {
        double r7641769 = x;
        double r7641770 = r7641769 * r7641769;
        double r7641771 = r7641770 * r7641770;
        double r7641772 = 161280.0;
        double r7641773 = r7641772 * r7641769;
        double r7641774 = r7641773 * r7641769;
        double r7641775 = r7641771 * r7641774;
        double r7641776 = -23040.0;
        double r7641777 = 8;
        double r7641778 = pow(r7641769, r7641777);
        double r7641779 = r7641776 * r7641778;
        double r7641780 = -403200.0;
        double r7641781 = r7641769 * r7641780;
        double r7641782 = 3;
        double r7641783 = pow(r7641769, r7641782);
        double r7641784 = r7641781 * r7641783;
        double r7641785 = r7641779 + r7641784;
        double r7641786 = r7641775 + r7641785;
        double r7641787 = 1024.0;
        double r7641788 = r7641787 * r7641769;
        double r7641789 = r7641788 * r7641783;
        double r7641790 = r7641783 * r7641783;
        double r7641791 = r7641789 * r7641790;
        double r7641792 = 302400.0;
        double r7641793 = r7641770 * r7641792;
        double r7641794 = -30240.0;
        double r7641795 = r7641793 + r7641794;
        double r7641796 = r7641791 + r7641795;
        double r7641797 = r7641786 + r7641796;
        return r7641797;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7641798, r7641799, r7641800, r7641801, r7641802, r7641803, r7641804, r7641805, r7641806, r7641807, r7641808, r7641809, r7641810, r7641811, r7641812, r7641813, r7641814, r7641815, r7641816, r7641817, r7641818, r7641819, r7641820, r7641821, r7641822, r7641823;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7641798, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7641799, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7641800);
        mpfr_init(r7641801);
        mpfr_init(r7641802);
        mpfr_init(r7641803);
        mpfr_init_set_str(r7641804, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7641805);
        mpfr_init(r7641806);
        mpfr_init(r7641807);
        mpfr_init(r7641808);
        mpfr_init_set_str(r7641809, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7641810);
        mpfr_init(r7641811);
        mpfr_init(r7641812);
        mpfr_init(r7641813);
        mpfr_init_set_str(r7641814, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7641815);
        mpfr_init(r7641816);
        mpfr_init(r7641817);
        mpfr_init(r7641818);
        mpfr_init_set_str(r7641819, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7641820);
        mpfr_init(r7641821);
        mpfr_init(r7641822);
        mpfr_init(r7641823);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7641800, x, MPFR_RNDN);
        mpfr_mul(r7641801, r7641800, r7641800, MPFR_RNDN);
        mpfr_mul(r7641802, r7641799, r7641801, MPFR_RNDN);
        mpfr_add(r7641803, r7641798, r7641802, MPFR_RNDN);
        ;
        mpfr_mul(r7641805, r7641801, r7641800, MPFR_RNDN);
        mpfr_mul(r7641806, r7641805, r7641800, MPFR_RNDN);
        mpfr_mul(r7641807, r7641804, r7641806, MPFR_RNDN);
        mpfr_add(r7641808, r7641803, r7641807, MPFR_RNDN);
        ;
        mpfr_mul(r7641810, r7641806, r7641800, MPFR_RNDN);
        mpfr_mul(r7641811, r7641810, r7641800, MPFR_RNDN);
        mpfr_mul(r7641812, r7641809, r7641811, MPFR_RNDN);
        mpfr_add(r7641813, r7641808, r7641812, MPFR_RNDN);
        ;
        mpfr_mul(r7641815, r7641811, r7641800, MPFR_RNDN);
        mpfr_mul(r7641816, r7641815, r7641800, MPFR_RNDN);
        mpfr_mul(r7641817, r7641814, r7641816, MPFR_RNDN);
        mpfr_add(r7641818, r7641813, r7641817, MPFR_RNDN);
        ;
        mpfr_mul(r7641820, r7641816, r7641800, MPFR_RNDN);
        mpfr_mul(r7641821, r7641820, r7641800, MPFR_RNDN);
        mpfr_mul(r7641822, r7641819, r7641821, MPFR_RNDN);
        mpfr_add(r7641823, r7641818, r7641822, MPFR_RNDN);
        return mpfr_get_d(r7641823, MPFR_RNDN);
}

static mpfr_t r7641824, r7641825, r7641826, r7641827, r7641828, r7641829, r7641830, r7641831, r7641832, r7641833, r7641834, r7641835, r7641836, r7641837, r7641838, r7641839, r7641840, r7641841, r7641842, r7641843, r7641844, r7641845, r7641846, r7641847, r7641848, r7641849, r7641850, r7641851, r7641852;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7641824);
        mpfr_init(r7641825);
        mpfr_init(r7641826);
        mpfr_init_set_str(r7641827, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7641828);
        mpfr_init(r7641829);
        mpfr_init(r7641830);
        mpfr_init_set_str(r7641831, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7641832, "8", 10, MPFR_RNDN);
        mpfr_init(r7641833);
        mpfr_init(r7641834);
        mpfr_init_set_str(r7641835, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7641836);
        mpfr_init_set_str(r7641837, "3", 10, MPFR_RNDN);
        mpfr_init(r7641838);
        mpfr_init(r7641839);
        mpfr_init(r7641840);
        mpfr_init(r7641841);
        mpfr_init_set_str(r7641842, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7641843);
        mpfr_init(r7641844);
        mpfr_init(r7641845);
        mpfr_init(r7641846);
        mpfr_init_set_str(r7641847, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7641848);
        mpfr_init_set_str(r7641849, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r7641850);
        mpfr_init(r7641851);
        mpfr_init(r7641852);
}

double f_fm(double x) {
        mpfr_set_d(r7641824, x, MPFR_RNDN);
        mpfr_mul(r7641825, r7641824, r7641824, MPFR_RNDN);
        mpfr_mul(r7641826, r7641825, r7641825, MPFR_RNDN);
        ;
        mpfr_mul(r7641828, r7641827, r7641824, MPFR_RNDN);
        mpfr_mul(r7641829, r7641828, r7641824, MPFR_RNDN);
        mpfr_mul(r7641830, r7641826, r7641829, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7641833, r7641824, r7641832, MPFR_RNDN);
        mpfr_mul(r7641834, r7641831, r7641833, MPFR_RNDN);
        ;
        mpfr_mul(r7641836, r7641824, r7641835, MPFR_RNDN);
        ;
        mpfr_pow(r7641838, r7641824, r7641837, MPFR_RNDN);
        mpfr_mul(r7641839, r7641836, r7641838, MPFR_RNDN);
        mpfr_add(r7641840, r7641834, r7641839, MPFR_RNDN);
        mpfr_add(r7641841, r7641830, r7641840, MPFR_RNDN);
        ;
        mpfr_mul(r7641843, r7641842, r7641824, MPFR_RNDN);
        mpfr_mul(r7641844, r7641843, r7641838, MPFR_RNDN);
        mpfr_mul(r7641845, r7641838, r7641838, MPFR_RNDN);
        mpfr_mul(r7641846, r7641844, r7641845, MPFR_RNDN);
        ;
        mpfr_mul(r7641848, r7641825, r7641847, MPFR_RNDN);
        ;
        mpfr_add(r7641850, r7641848, r7641849, MPFR_RNDN);
        mpfr_add(r7641851, r7641846, r7641850, MPFR_RNDN);
        mpfr_add(r7641852, r7641841, r7641851, MPFR_RNDN);
        return mpfr_get_d(r7641852, MPFR_RNDN);
}

static mpfr_t r7641853, r7641854, r7641855, r7641856, r7641857, r7641858, r7641859, r7641860, r7641861, r7641862, r7641863, r7641864, r7641865, r7641866, r7641867, r7641868, r7641869, r7641870, r7641871, r7641872, r7641873, r7641874, r7641875, r7641876, r7641877, r7641878, r7641879, r7641880, r7641881;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7641853);
        mpfr_init(r7641854);
        mpfr_init(r7641855);
        mpfr_init_set_str(r7641856, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7641857);
        mpfr_init(r7641858);
        mpfr_init(r7641859);
        mpfr_init_set_str(r7641860, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7641861, "8", 10, MPFR_RNDN);
        mpfr_init(r7641862);
        mpfr_init(r7641863);
        mpfr_init_set_str(r7641864, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7641865);
        mpfr_init_set_str(r7641866, "3", 10, MPFR_RNDN);
        mpfr_init(r7641867);
        mpfr_init(r7641868);
        mpfr_init(r7641869);
        mpfr_init(r7641870);
        mpfr_init_set_str(r7641871, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7641872);
        mpfr_init(r7641873);
        mpfr_init(r7641874);
        mpfr_init(r7641875);
        mpfr_init_set_str(r7641876, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7641877);
        mpfr_init_set_str(r7641878, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r7641879);
        mpfr_init(r7641880);
        mpfr_init(r7641881);
}

double f_dm(double x) {
        mpfr_set_d(r7641853, x, MPFR_RNDN);
        mpfr_mul(r7641854, r7641853, r7641853, MPFR_RNDN);
        mpfr_mul(r7641855, r7641854, r7641854, MPFR_RNDN);
        ;
        mpfr_mul(r7641857, r7641856, r7641853, MPFR_RNDN);
        mpfr_mul(r7641858, r7641857, r7641853, MPFR_RNDN);
        mpfr_mul(r7641859, r7641855, r7641858, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7641862, r7641853, r7641861, MPFR_RNDN);
        mpfr_mul(r7641863, r7641860, r7641862, MPFR_RNDN);
        ;
        mpfr_mul(r7641865, r7641853, r7641864, MPFR_RNDN);
        ;
        mpfr_pow(r7641867, r7641853, r7641866, MPFR_RNDN);
        mpfr_mul(r7641868, r7641865, r7641867, MPFR_RNDN);
        mpfr_add(r7641869, r7641863, r7641868, MPFR_RNDN);
        mpfr_add(r7641870, r7641859, r7641869, MPFR_RNDN);
        ;
        mpfr_mul(r7641872, r7641871, r7641853, MPFR_RNDN);
        mpfr_mul(r7641873, r7641872, r7641867, MPFR_RNDN);
        mpfr_mul(r7641874, r7641867, r7641867, MPFR_RNDN);
        mpfr_mul(r7641875, r7641873, r7641874, MPFR_RNDN);
        ;
        mpfr_mul(r7641877, r7641854, r7641876, MPFR_RNDN);
        ;
        mpfr_add(r7641879, r7641877, r7641878, MPFR_RNDN);
        mpfr_add(r7641880, r7641875, r7641879, MPFR_RNDN);
        mpfr_add(r7641881, r7641870, r7641880, MPFR_RNDN);
        return mpfr_get_d(r7641881, MPFR_RNDN);
}

