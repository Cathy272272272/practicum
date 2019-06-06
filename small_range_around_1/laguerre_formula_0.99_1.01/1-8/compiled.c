#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r83190656 = 1.0;
        float r83190657 = -8.0;
        float r83190658 = x;
        float r83190659 = r83190657 * r83190658;
        float r83190660 = r83190656 + r83190659;
        float r83190661 = 14.0;
        float r83190662 = r83190658 * r83190658;
        float r83190663 = r83190661 * r83190662;
        float r83190664 = r83190660 + r83190663;
        float r83190665 = -9.333333;
        float r83190666 = r83190662 * r83190658;
        float r83190667 = r83190665 * r83190666;
        float r83190668 = r83190664 + r83190667;
        float r83190669 = 2.916667;
        float r83190670 = r83190666 * r83190658;
        float r83190671 = r83190669 * r83190670;
        float r83190672 = r83190668 + r83190671;
        float r83190673 = -0.466667;
        float r83190674 = r83190670 * r83190658;
        float r83190675 = r83190673 * r83190674;
        float r83190676 = r83190672 + r83190675;
        float r83190677 = 0.038889;
        float r83190678 = r83190674 * r83190658;
        float r83190679 = r83190677 * r83190678;
        float r83190680 = r83190676 + r83190679;
        float r83190681 = -0.001587;
        float r83190682 = r83190678 * r83190658;
        float r83190683 = r83190681 * r83190682;
        float r83190684 = r83190680 + r83190683;
        float r83190685 = 2.5e-05;
        float r83190686 = r83190682 * r83190658;
        float r83190687 = r83190685 * r83190686;
        float r83190688 = r83190684 + r83190687;
        return r83190688;
}

double f_id(double x) {
        double r83190689 = 1.0;
        double r83190690 = -8.0;
        double r83190691 = x;
        double r83190692 = r83190690 * r83190691;
        double r83190693 = r83190689 + r83190692;
        double r83190694 = 14.0;
        double r83190695 = r83190691 * r83190691;
        double r83190696 = r83190694 * r83190695;
        double r83190697 = r83190693 + r83190696;
        double r83190698 = -9.333333;
        double r83190699 = r83190695 * r83190691;
        double r83190700 = r83190698 * r83190699;
        double r83190701 = r83190697 + r83190700;
        double r83190702 = 2.916667;
        double r83190703 = r83190699 * r83190691;
        double r83190704 = r83190702 * r83190703;
        double r83190705 = r83190701 + r83190704;
        double r83190706 = -0.466667;
        double r83190707 = r83190703 * r83190691;
        double r83190708 = r83190706 * r83190707;
        double r83190709 = r83190705 + r83190708;
        double r83190710 = 0.038889;
        double r83190711 = r83190707 * r83190691;
        double r83190712 = r83190710 * r83190711;
        double r83190713 = r83190709 + r83190712;
        double r83190714 = -0.001587;
        double r83190715 = r83190711 * r83190691;
        double r83190716 = r83190714 * r83190715;
        double r83190717 = r83190713 + r83190716;
        double r83190718 = 2.5e-05;
        double r83190719 = r83190715 * r83190691;
        double r83190720 = r83190718 * r83190719;
        double r83190721 = r83190717 + r83190720;
        return r83190721;
}


double f_of(float x) {
        float r83190722 = x;
        float r83190723 = r83190722 * r83190722;
        float r83190724 = 3;
        float r83190725 = pow(r83190723, r83190724);
        float r83190726 = 2.5e-05;
        float r83190727 = r83190726 * r83190723;
        float r83190728 = r83190725 * r83190727;
        float r83190729 = -0.001587;
        float r83190730 = r83190729 * r83190722;
        float r83190731 = 0.038889;
        float r83190732 = r83190730 + r83190731;
        float r83190733 = r83190725 * r83190732;
        float r83190734 = r83190728 + r83190733;
        float r83190735 = exp(r83190722);
        float r83190736 = pow(r83190722, r83190724);
        float r83190737 = pow(r83190735, r83190736);
        float r83190738 = -0.466667;
        float r83190739 = r83190722 * r83190738;
        float r83190740 = 2.916667;
        float r83190741 = r83190739 + r83190740;
        float r83190742 = pow(r83190737, r83190741);
        float r83190743 = log(r83190742);
        float r83190744 = -9.333333;
        float r83190745 = r83190744 * r83190722;
        float r83190746 = 14.0;
        float r83190747 = r83190745 + r83190746;
        float r83190748 = r83190747 * r83190723;
        float r83190749 = 1.0;
        float r83190750 = -8.0;
        float r83190751 = r83190722 * r83190750;
        float r83190752 = r83190749 + r83190751;
        float r83190753 = r83190748 + r83190752;
        float r83190754 = r83190743 + r83190753;
        float r83190755 = log(r83190754);
        float r83190756 = cbrt(r83190755);
        float r83190757 = r83190756 * r83190756;
        float r83190758 = exp(r83190757);
        float r83190759 = pow(r83190758, r83190756);
        float r83190760 = r83190734 + r83190759;
        return r83190760;
}

double f_od(double x) {
        double r83190761 = x;
        double r83190762 = r83190761 * r83190761;
        double r83190763 = 3;
        double r83190764 = pow(r83190762, r83190763);
        double r83190765 = 2.5e-05;
        double r83190766 = r83190765 * r83190762;
        double r83190767 = r83190764 * r83190766;
        double r83190768 = -0.001587;
        double r83190769 = r83190768 * r83190761;
        double r83190770 = 0.038889;
        double r83190771 = r83190769 + r83190770;
        double r83190772 = r83190764 * r83190771;
        double r83190773 = r83190767 + r83190772;
        double r83190774 = exp(r83190761);
        double r83190775 = pow(r83190761, r83190763);
        double r83190776 = pow(r83190774, r83190775);
        double r83190777 = -0.466667;
        double r83190778 = r83190761 * r83190777;
        double r83190779 = 2.916667;
        double r83190780 = r83190778 + r83190779;
        double r83190781 = pow(r83190776, r83190780);
        double r83190782 = log(r83190781);
        double r83190783 = -9.333333;
        double r83190784 = r83190783 * r83190761;
        double r83190785 = 14.0;
        double r83190786 = r83190784 + r83190785;
        double r83190787 = r83190786 * r83190762;
        double r83190788 = 1.0;
        double r83190789 = -8.0;
        double r83190790 = r83190761 * r83190789;
        double r83190791 = r83190788 + r83190790;
        double r83190792 = r83190787 + r83190791;
        double r83190793 = r83190782 + r83190792;
        double r83190794 = log(r83190793);
        double r83190795 = cbrt(r83190794);
        double r83190796 = r83190795 * r83190795;
        double r83190797 = exp(r83190796);
        double r83190798 = pow(r83190797, r83190795);
        double r83190799 = r83190773 + r83190798;
        return r83190799;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83190800, r83190801, r83190802, r83190803, r83190804, r83190805, r83190806, r83190807, r83190808, r83190809, r83190810, r83190811, r83190812, r83190813, r83190814, r83190815, r83190816, r83190817, r83190818, r83190819, r83190820, r83190821, r83190822, r83190823, r83190824, r83190825, r83190826, r83190827, r83190828, r83190829, r83190830, r83190831, r83190832;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83190800, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83190801, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r83190802);
        mpfr_init(r83190803);
        mpfr_init(r83190804);
        mpfr_init_set_str(r83190805, "14.0", 10, MPFR_RNDN);
        mpfr_init(r83190806);
        mpfr_init(r83190807);
        mpfr_init(r83190808);
        mpfr_init_set_str(r83190809, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r83190810);
        mpfr_init(r83190811);
        mpfr_init(r83190812);
        mpfr_init_set_str(r83190813, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r83190814);
        mpfr_init(r83190815);
        mpfr_init(r83190816);
        mpfr_init_set_str(r83190817, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r83190818);
        mpfr_init(r83190819);
        mpfr_init(r83190820);
        mpfr_init_set_str(r83190821, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r83190822);
        mpfr_init(r83190823);
        mpfr_init(r83190824);
        mpfr_init_set_str(r83190825, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r83190826);
        mpfr_init(r83190827);
        mpfr_init(r83190828);
        mpfr_init_set_str(r83190829, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r83190830);
        mpfr_init(r83190831);
        mpfr_init(r83190832);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83190802, x, MPFR_RNDN);
        mpfr_mul(r83190803, r83190801, r83190802, MPFR_RNDN);
        mpfr_add(r83190804, r83190800, r83190803, MPFR_RNDN);
        ;
        mpfr_mul(r83190806, r83190802, r83190802, MPFR_RNDN);
        mpfr_mul(r83190807, r83190805, r83190806, MPFR_RNDN);
        mpfr_add(r83190808, r83190804, r83190807, MPFR_RNDN);
        ;
        mpfr_mul(r83190810, r83190806, r83190802, MPFR_RNDN);
        mpfr_mul(r83190811, r83190809, r83190810, MPFR_RNDN);
        mpfr_add(r83190812, r83190808, r83190811, MPFR_RNDN);
        ;
        mpfr_mul(r83190814, r83190810, r83190802, MPFR_RNDN);
        mpfr_mul(r83190815, r83190813, r83190814, MPFR_RNDN);
        mpfr_add(r83190816, r83190812, r83190815, MPFR_RNDN);
        ;
        mpfr_mul(r83190818, r83190814, r83190802, MPFR_RNDN);
        mpfr_mul(r83190819, r83190817, r83190818, MPFR_RNDN);
        mpfr_add(r83190820, r83190816, r83190819, MPFR_RNDN);
        ;
        mpfr_mul(r83190822, r83190818, r83190802, MPFR_RNDN);
        mpfr_mul(r83190823, r83190821, r83190822, MPFR_RNDN);
        mpfr_add(r83190824, r83190820, r83190823, MPFR_RNDN);
        ;
        mpfr_mul(r83190826, r83190822, r83190802, MPFR_RNDN);
        mpfr_mul(r83190827, r83190825, r83190826, MPFR_RNDN);
        mpfr_add(r83190828, r83190824, r83190827, MPFR_RNDN);
        ;
        mpfr_mul(r83190830, r83190826, r83190802, MPFR_RNDN);
        mpfr_mul(r83190831, r83190829, r83190830, MPFR_RNDN);
        mpfr_add(r83190832, r83190828, r83190831, MPFR_RNDN);
        return mpfr_get_d(r83190832, MPFR_RNDN);
}

static mpfr_t r83190833, r83190834, r83190835, r83190836, r83190837, r83190838, r83190839, r83190840, r83190841, r83190842, r83190843, r83190844, r83190845, r83190846, r83190847, r83190848, r83190849, r83190850, r83190851, r83190852, r83190853, r83190854, r83190855, r83190856, r83190857, r83190858, r83190859, r83190860, r83190861, r83190862, r83190863, r83190864, r83190865, r83190866, r83190867, r83190868, r83190869, r83190870, r83190871;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83190833);
        mpfr_init(r83190834);
        mpfr_init_set_str(r83190835, "3", 10, MPFR_RNDN);
        mpfr_init(r83190836);
        mpfr_init_set_str(r83190837, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r83190838);
        mpfr_init(r83190839);
        mpfr_init_set_str(r83190840, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r83190841);
        mpfr_init_set_str(r83190842, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r83190843);
        mpfr_init(r83190844);
        mpfr_init(r83190845);
        mpfr_init(r83190846);
        mpfr_init(r83190847);
        mpfr_init(r83190848);
        mpfr_init_set_str(r83190849, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r83190850);
        mpfr_init_set_str(r83190851, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r83190852);
        mpfr_init(r83190853);
        mpfr_init(r83190854);
        mpfr_init_set_str(r83190855, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r83190856);
        mpfr_init_set_str(r83190857, "14.0", 10, MPFR_RNDN);
        mpfr_init(r83190858);
        mpfr_init(r83190859);
        mpfr_init_set_str(r83190860, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83190861, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r83190862);
        mpfr_init(r83190863);
        mpfr_init(r83190864);
        mpfr_init(r83190865);
        mpfr_init(r83190866);
        mpfr_init(r83190867);
        mpfr_init(r83190868);
        mpfr_init(r83190869);
        mpfr_init(r83190870);
        mpfr_init(r83190871);
}

double f_fm(double x) {
        mpfr_set_d(r83190833, x, MPFR_RNDN);
        mpfr_mul(r83190834, r83190833, r83190833, MPFR_RNDN);
        ;
        mpfr_pow(r83190836, r83190834, r83190835, MPFR_RNDN);
        ;
        mpfr_mul(r83190838, r83190837, r83190834, MPFR_RNDN);
        mpfr_mul(r83190839, r83190836, r83190838, MPFR_RNDN);
        ;
        mpfr_mul(r83190841, r83190840, r83190833, MPFR_RNDN);
        ;
        mpfr_add(r83190843, r83190841, r83190842, MPFR_RNDN);
        mpfr_mul(r83190844, r83190836, r83190843, MPFR_RNDN);
        mpfr_add(r83190845, r83190839, r83190844, MPFR_RNDN);
        mpfr_exp(r83190846, r83190833, MPFR_RNDN);
        mpfr_pow(r83190847, r83190833, r83190835, MPFR_RNDN);
        mpfr_pow(r83190848, r83190846, r83190847, MPFR_RNDN);
        ;
        mpfr_mul(r83190850, r83190833, r83190849, MPFR_RNDN);
        ;
        mpfr_add(r83190852, r83190850, r83190851, MPFR_RNDN);
        mpfr_pow(r83190853, r83190848, r83190852, MPFR_RNDN);
        mpfr_log(r83190854, r83190853, MPFR_RNDN);
        ;
        mpfr_mul(r83190856, r83190855, r83190833, MPFR_RNDN);
        ;
        mpfr_add(r83190858, r83190856, r83190857, MPFR_RNDN);
        mpfr_mul(r83190859, r83190858, r83190834, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83190862, r83190833, r83190861, MPFR_RNDN);
        mpfr_add(r83190863, r83190860, r83190862, MPFR_RNDN);
        mpfr_add(r83190864, r83190859, r83190863, MPFR_RNDN);
        mpfr_add(r83190865, r83190854, r83190864, MPFR_RNDN);
        mpfr_log(r83190866, r83190865, MPFR_RNDN);
        mpfr_cbrt(r83190867, r83190866, MPFR_RNDN);
        mpfr_mul(r83190868, r83190867, r83190867, MPFR_RNDN);
        mpfr_exp(r83190869, r83190868, MPFR_RNDN);
        mpfr_pow(r83190870, r83190869, r83190867, MPFR_RNDN);
        mpfr_add(r83190871, r83190845, r83190870, MPFR_RNDN);
        return mpfr_get_d(r83190871, MPFR_RNDN);
}

static mpfr_t r83190872, r83190873, r83190874, r83190875, r83190876, r83190877, r83190878, r83190879, r83190880, r83190881, r83190882, r83190883, r83190884, r83190885, r83190886, r83190887, r83190888, r83190889, r83190890, r83190891, r83190892, r83190893, r83190894, r83190895, r83190896, r83190897, r83190898, r83190899, r83190900, r83190901, r83190902, r83190903, r83190904, r83190905, r83190906, r83190907, r83190908, r83190909, r83190910;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r83190872);
        mpfr_init(r83190873);
        mpfr_init_set_str(r83190874, "3", 10, MPFR_RNDN);
        mpfr_init(r83190875);
        mpfr_init_set_str(r83190876, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r83190877);
        mpfr_init(r83190878);
        mpfr_init_set_str(r83190879, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r83190880);
        mpfr_init_set_str(r83190881, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r83190882);
        mpfr_init(r83190883);
        mpfr_init(r83190884);
        mpfr_init(r83190885);
        mpfr_init(r83190886);
        mpfr_init(r83190887);
        mpfr_init_set_str(r83190888, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r83190889);
        mpfr_init_set_str(r83190890, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r83190891);
        mpfr_init(r83190892);
        mpfr_init(r83190893);
        mpfr_init_set_str(r83190894, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r83190895);
        mpfr_init_set_str(r83190896, "14.0", 10, MPFR_RNDN);
        mpfr_init(r83190897);
        mpfr_init(r83190898);
        mpfr_init_set_str(r83190899, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83190900, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r83190901);
        mpfr_init(r83190902);
        mpfr_init(r83190903);
        mpfr_init(r83190904);
        mpfr_init(r83190905);
        mpfr_init(r83190906);
        mpfr_init(r83190907);
        mpfr_init(r83190908);
        mpfr_init(r83190909);
        mpfr_init(r83190910);
}

double f_dm(double x) {
        mpfr_set_d(r83190872, x, MPFR_RNDN);
        mpfr_mul(r83190873, r83190872, r83190872, MPFR_RNDN);
        ;
        mpfr_pow(r83190875, r83190873, r83190874, MPFR_RNDN);
        ;
        mpfr_mul(r83190877, r83190876, r83190873, MPFR_RNDN);
        mpfr_mul(r83190878, r83190875, r83190877, MPFR_RNDN);
        ;
        mpfr_mul(r83190880, r83190879, r83190872, MPFR_RNDN);
        ;
        mpfr_add(r83190882, r83190880, r83190881, MPFR_RNDN);
        mpfr_mul(r83190883, r83190875, r83190882, MPFR_RNDN);
        mpfr_add(r83190884, r83190878, r83190883, MPFR_RNDN);
        mpfr_exp(r83190885, r83190872, MPFR_RNDN);
        mpfr_pow(r83190886, r83190872, r83190874, MPFR_RNDN);
        mpfr_pow(r83190887, r83190885, r83190886, MPFR_RNDN);
        ;
        mpfr_mul(r83190889, r83190872, r83190888, MPFR_RNDN);
        ;
        mpfr_add(r83190891, r83190889, r83190890, MPFR_RNDN);
        mpfr_pow(r83190892, r83190887, r83190891, MPFR_RNDN);
        mpfr_log(r83190893, r83190892, MPFR_RNDN);
        ;
        mpfr_mul(r83190895, r83190894, r83190872, MPFR_RNDN);
        ;
        mpfr_add(r83190897, r83190895, r83190896, MPFR_RNDN);
        mpfr_mul(r83190898, r83190897, r83190873, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r83190901, r83190872, r83190900, MPFR_RNDN);
        mpfr_add(r83190902, r83190899, r83190901, MPFR_RNDN);
        mpfr_add(r83190903, r83190898, r83190902, MPFR_RNDN);
        mpfr_add(r83190904, r83190893, r83190903, MPFR_RNDN);
        mpfr_log(r83190905, r83190904, MPFR_RNDN);
        mpfr_cbrt(r83190906, r83190905, MPFR_RNDN);
        mpfr_mul(r83190907, r83190906, r83190906, MPFR_RNDN);
        mpfr_exp(r83190908, r83190907, MPFR_RNDN);
        mpfr_pow(r83190909, r83190908, r83190906, MPFR_RNDN);
        mpfr_add(r83190910, r83190884, r83190909, MPFR_RNDN);
        return mpfr_get_d(r83190910, MPFR_RNDN);
}

