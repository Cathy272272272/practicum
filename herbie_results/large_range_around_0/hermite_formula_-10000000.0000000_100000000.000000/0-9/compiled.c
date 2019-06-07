#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r9882695 = 30240.0;
        float r9882696 = x;
        float r9882697 = r9882695 * r9882696;
        float r9882698 = -80640.0;
        float r9882699 = r9882696 * r9882696;
        float r9882700 = r9882699 * r9882696;
        float r9882701 = r9882698 * r9882700;
        float r9882702 = r9882697 + r9882701;
        float r9882703 = 48384.0;
        float r9882704 = r9882700 * r9882696;
        float r9882705 = r9882704 * r9882696;
        float r9882706 = r9882703 * r9882705;
        float r9882707 = r9882702 + r9882706;
        float r9882708 = -9216.0;
        float r9882709 = r9882705 * r9882696;
        float r9882710 = r9882709 * r9882696;
        float r9882711 = r9882708 * r9882710;
        float r9882712 = r9882707 + r9882711;
        float r9882713 = 512.0;
        float r9882714 = r9882710 * r9882696;
        float r9882715 = r9882714 * r9882696;
        float r9882716 = r9882713 * r9882715;
        float r9882717 = r9882712 + r9882716;
        return r9882717;
}

double f_id(double x) {
        double r9882718 = 30240.0;
        double r9882719 = x;
        double r9882720 = r9882718 * r9882719;
        double r9882721 = -80640.0;
        double r9882722 = r9882719 * r9882719;
        double r9882723 = r9882722 * r9882719;
        double r9882724 = r9882721 * r9882723;
        double r9882725 = r9882720 + r9882724;
        double r9882726 = 48384.0;
        double r9882727 = r9882723 * r9882719;
        double r9882728 = r9882727 * r9882719;
        double r9882729 = r9882726 * r9882728;
        double r9882730 = r9882725 + r9882729;
        double r9882731 = -9216.0;
        double r9882732 = r9882728 * r9882719;
        double r9882733 = r9882732 * r9882719;
        double r9882734 = r9882731 * r9882733;
        double r9882735 = r9882730 + r9882734;
        double r9882736 = 512.0;
        double r9882737 = r9882733 * r9882719;
        double r9882738 = r9882737 * r9882719;
        double r9882739 = r9882736 * r9882738;
        double r9882740 = r9882735 + r9882739;
        return r9882740;
}


double f_of(float x) {
        float r9882741 = x;
        float r9882742 = r9882741 * r9882741;
        float r9882743 = -80640.0;
        float r9882744 = r9882743 * r9882741;
        float r9882745 = 48384.0;
        float r9882746 = r9882741 * r9882745;
        float r9882747 = r9882742 * r9882746;
        float r9882748 = r9882744 + r9882747;
        float r9882749 = r9882742 * r9882748;
        float r9882750 = 7;
        float r9882751 = pow(r9882741, r9882750);
        float r9882752 = -9216.0;
        float r9882753 = r9882751 * r9882752;
        float r9882754 = 30240.0;
        float r9882755 = r9882754 * r9882741;
        float r9882756 = r9882753 + r9882755;
        float r9882757 = 512.0;
        float r9882758 = r9882757 * r9882741;
        float r9882759 = 1;
        float r9882760 = 3;
        float r9882761 = r9882759 + r9882760;
        float r9882762 = pow(r9882742, r9882761);
        float r9882763 = r9882758 * r9882762;
        float r9882764 = r9882756 + r9882763;
        float r9882765 = r9882749 + r9882764;
        return r9882765;
}

double f_od(double x) {
        double r9882766 = x;
        double r9882767 = r9882766 * r9882766;
        double r9882768 = -80640.0;
        double r9882769 = r9882768 * r9882766;
        double r9882770 = 48384.0;
        double r9882771 = r9882766 * r9882770;
        double r9882772 = r9882767 * r9882771;
        double r9882773 = r9882769 + r9882772;
        double r9882774 = r9882767 * r9882773;
        double r9882775 = 7;
        double r9882776 = pow(r9882766, r9882775);
        double r9882777 = -9216.0;
        double r9882778 = r9882776 * r9882777;
        double r9882779 = 30240.0;
        double r9882780 = r9882779 * r9882766;
        double r9882781 = r9882778 + r9882780;
        double r9882782 = 512.0;
        double r9882783 = r9882782 * r9882766;
        double r9882784 = 1;
        double r9882785 = 3;
        double r9882786 = r9882784 + r9882785;
        double r9882787 = pow(r9882767, r9882786);
        double r9882788 = r9882783 * r9882787;
        double r9882789 = r9882781 + r9882788;
        double r9882790 = r9882774 + r9882789;
        return r9882790;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9882791, r9882792, r9882793, r9882794, r9882795, r9882796, r9882797, r9882798, r9882799, r9882800, r9882801, r9882802, r9882803, r9882804, r9882805, r9882806, r9882807, r9882808, r9882809, r9882810, r9882811, r9882812, r9882813;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9882791, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9882792);
        mpfr_init(r9882793);
        mpfr_init_set_str(r9882794, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9882795);
        mpfr_init(r9882796);
        mpfr_init(r9882797);
        mpfr_init(r9882798);
        mpfr_init_set_str(r9882799, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9882800);
        mpfr_init(r9882801);
        mpfr_init(r9882802);
        mpfr_init(r9882803);
        mpfr_init_set_str(r9882804, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9882805);
        mpfr_init(r9882806);
        mpfr_init(r9882807);
        mpfr_init(r9882808);
        mpfr_init_set_str(r9882809, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9882810);
        mpfr_init(r9882811);
        mpfr_init(r9882812);
        mpfr_init(r9882813);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9882792, x, MPFR_RNDN);
        mpfr_mul(r9882793, r9882791, r9882792, MPFR_RNDN);
        ;
        mpfr_mul(r9882795, r9882792, r9882792, MPFR_RNDN);
        mpfr_mul(r9882796, r9882795, r9882792, MPFR_RNDN);
        mpfr_mul(r9882797, r9882794, r9882796, MPFR_RNDN);
        mpfr_add(r9882798, r9882793, r9882797, MPFR_RNDN);
        ;
        mpfr_mul(r9882800, r9882796, r9882792, MPFR_RNDN);
        mpfr_mul(r9882801, r9882800, r9882792, MPFR_RNDN);
        mpfr_mul(r9882802, r9882799, r9882801, MPFR_RNDN);
        mpfr_add(r9882803, r9882798, r9882802, MPFR_RNDN);
        ;
        mpfr_mul(r9882805, r9882801, r9882792, MPFR_RNDN);
        mpfr_mul(r9882806, r9882805, r9882792, MPFR_RNDN);
        mpfr_mul(r9882807, r9882804, r9882806, MPFR_RNDN);
        mpfr_add(r9882808, r9882803, r9882807, MPFR_RNDN);
        ;
        mpfr_mul(r9882810, r9882806, r9882792, MPFR_RNDN);
        mpfr_mul(r9882811, r9882810, r9882792, MPFR_RNDN);
        mpfr_mul(r9882812, r9882809, r9882811, MPFR_RNDN);
        mpfr_add(r9882813, r9882808, r9882812, MPFR_RNDN);
        return mpfr_get_d(r9882813, MPFR_RNDN);
}

static mpfr_t r9882814, r9882815, r9882816, r9882817, r9882818, r9882819, r9882820, r9882821, r9882822, r9882823, r9882824, r9882825, r9882826, r9882827, r9882828, r9882829, r9882830, r9882831, r9882832, r9882833, r9882834, r9882835, r9882836, r9882837, r9882838;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9882814);
        mpfr_init(r9882815);
        mpfr_init_set_str(r9882816, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9882817);
        mpfr_init_set_str(r9882818, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9882819);
        mpfr_init(r9882820);
        mpfr_init(r9882821);
        mpfr_init(r9882822);
        mpfr_init_set_str(r9882823, "7", 10, MPFR_RNDN);
        mpfr_init(r9882824);
        mpfr_init_set_str(r9882825, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9882826);
        mpfr_init_set_str(r9882827, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9882828);
        mpfr_init(r9882829);
        mpfr_init_set_str(r9882830, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9882831);
        mpfr_init_set_str(r9882832, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r9882833, "3", 10, MPFR_RNDN);
        mpfr_init(r9882834);
        mpfr_init(r9882835);
        mpfr_init(r9882836);
        mpfr_init(r9882837);
        mpfr_init(r9882838);
}

double f_fm(double x) {
        mpfr_set_d(r9882814, x, MPFR_RNDN);
        mpfr_mul(r9882815, r9882814, r9882814, MPFR_RNDN);
        ;
        mpfr_mul(r9882817, r9882816, r9882814, MPFR_RNDN);
        ;
        mpfr_mul(r9882819, r9882814, r9882818, MPFR_RNDN);
        mpfr_mul(r9882820, r9882815, r9882819, MPFR_RNDN);
        mpfr_add(r9882821, r9882817, r9882820, MPFR_RNDN);
        mpfr_mul(r9882822, r9882815, r9882821, MPFR_RNDN);
        ;
        mpfr_pow(r9882824, r9882814, r9882823, MPFR_RNDN);
        ;
        mpfr_mul(r9882826, r9882824, r9882825, MPFR_RNDN);
        ;
        mpfr_mul(r9882828, r9882827, r9882814, MPFR_RNDN);
        mpfr_add(r9882829, r9882826, r9882828, MPFR_RNDN);
        ;
        mpfr_mul(r9882831, r9882830, r9882814, MPFR_RNDN);
        ;
        ;
        mpfr_add(r9882834, r9882832, r9882833, MPFR_RNDN);
        mpfr_pow(r9882835, r9882815, r9882834, MPFR_RNDN);
        mpfr_mul(r9882836, r9882831, r9882835, MPFR_RNDN);
        mpfr_add(r9882837, r9882829, r9882836, MPFR_RNDN);
        mpfr_add(r9882838, r9882822, r9882837, MPFR_RNDN);
        return mpfr_get_d(r9882838, MPFR_RNDN);
}

static mpfr_t r9882839, r9882840, r9882841, r9882842, r9882843, r9882844, r9882845, r9882846, r9882847, r9882848, r9882849, r9882850, r9882851, r9882852, r9882853, r9882854, r9882855, r9882856, r9882857, r9882858, r9882859, r9882860, r9882861, r9882862, r9882863;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9882839);
        mpfr_init(r9882840);
        mpfr_init_set_str(r9882841, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9882842);
        mpfr_init_set_str(r9882843, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9882844);
        mpfr_init(r9882845);
        mpfr_init(r9882846);
        mpfr_init(r9882847);
        mpfr_init_set_str(r9882848, "7", 10, MPFR_RNDN);
        mpfr_init(r9882849);
        mpfr_init_set_str(r9882850, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9882851);
        mpfr_init_set_str(r9882852, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9882853);
        mpfr_init(r9882854);
        mpfr_init_set_str(r9882855, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9882856);
        mpfr_init_set_str(r9882857, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r9882858, "3", 10, MPFR_RNDN);
        mpfr_init(r9882859);
        mpfr_init(r9882860);
        mpfr_init(r9882861);
        mpfr_init(r9882862);
        mpfr_init(r9882863);
}

double f_dm(double x) {
        mpfr_set_d(r9882839, x, MPFR_RNDN);
        mpfr_mul(r9882840, r9882839, r9882839, MPFR_RNDN);
        ;
        mpfr_mul(r9882842, r9882841, r9882839, MPFR_RNDN);
        ;
        mpfr_mul(r9882844, r9882839, r9882843, MPFR_RNDN);
        mpfr_mul(r9882845, r9882840, r9882844, MPFR_RNDN);
        mpfr_add(r9882846, r9882842, r9882845, MPFR_RNDN);
        mpfr_mul(r9882847, r9882840, r9882846, MPFR_RNDN);
        ;
        mpfr_pow(r9882849, r9882839, r9882848, MPFR_RNDN);
        ;
        mpfr_mul(r9882851, r9882849, r9882850, MPFR_RNDN);
        ;
        mpfr_mul(r9882853, r9882852, r9882839, MPFR_RNDN);
        mpfr_add(r9882854, r9882851, r9882853, MPFR_RNDN);
        ;
        mpfr_mul(r9882856, r9882855, r9882839, MPFR_RNDN);
        ;
        ;
        mpfr_add(r9882859, r9882857, r9882858, MPFR_RNDN);
        mpfr_pow(r9882860, r9882840, r9882859, MPFR_RNDN);
        mpfr_mul(r9882861, r9882856, r9882860, MPFR_RNDN);
        mpfr_add(r9882862, r9882854, r9882861, MPFR_RNDN);
        mpfr_add(r9882863, r9882847, r9882862, MPFR_RNDN);
        return mpfr_get_d(r9882863, MPFR_RNDN);
}

