#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r7638682 = 30240.0;
        float r7638683 = x;
        float r7638684 = r7638682 * r7638683;
        float r7638685 = -80640.0;
        float r7638686 = r7638683 * r7638683;
        float r7638687 = r7638686 * r7638683;
        float r7638688 = r7638685 * r7638687;
        float r7638689 = r7638684 + r7638688;
        float r7638690 = 48384.0;
        float r7638691 = r7638687 * r7638683;
        float r7638692 = r7638691 * r7638683;
        float r7638693 = r7638690 * r7638692;
        float r7638694 = r7638689 + r7638693;
        float r7638695 = -9216.0;
        float r7638696 = r7638692 * r7638683;
        float r7638697 = r7638696 * r7638683;
        float r7638698 = r7638695 * r7638697;
        float r7638699 = r7638694 + r7638698;
        float r7638700 = 512.0;
        float r7638701 = r7638697 * r7638683;
        float r7638702 = r7638701 * r7638683;
        float r7638703 = r7638700 * r7638702;
        float r7638704 = r7638699 + r7638703;
        return r7638704;
}

double f_id(double x) {
        double r7638705 = 30240.0;
        double r7638706 = x;
        double r7638707 = r7638705 * r7638706;
        double r7638708 = -80640.0;
        double r7638709 = r7638706 * r7638706;
        double r7638710 = r7638709 * r7638706;
        double r7638711 = r7638708 * r7638710;
        double r7638712 = r7638707 + r7638711;
        double r7638713 = 48384.0;
        double r7638714 = r7638710 * r7638706;
        double r7638715 = r7638714 * r7638706;
        double r7638716 = r7638713 * r7638715;
        double r7638717 = r7638712 + r7638716;
        double r7638718 = -9216.0;
        double r7638719 = r7638715 * r7638706;
        double r7638720 = r7638719 * r7638706;
        double r7638721 = r7638718 * r7638720;
        double r7638722 = r7638717 + r7638721;
        double r7638723 = 512.0;
        double r7638724 = r7638720 * r7638706;
        double r7638725 = r7638724 * r7638706;
        double r7638726 = r7638723 * r7638725;
        double r7638727 = r7638722 + r7638726;
        return r7638727;
}


double f_of(float x) {
        float r7638728 = x;
        float r7638729 = r7638728 * r7638728;
        float r7638730 = 48384.0;
        float r7638731 = r7638728 * r7638730;
        float r7638732 = r7638729 * r7638731;
        float r7638733 = r7638729 * r7638732;
        float r7638734 = 30240.0;
        float r7638735 = r7638734 * r7638728;
        float r7638736 = -80640.0;
        float r7638737 = r7638736 * r7638728;
        float r7638738 = r7638737 * r7638729;
        float r7638739 = r7638735 + r7638738;
        float r7638740 = r7638733 + r7638739;
        float r7638741 = 3;
        float r7638742 = pow(r7638728, r7638741);
        float r7638743 = r7638742 * r7638742;
        float r7638744 = r7638743 * r7638728;
        float r7638745 = -9216.0;
        float r7638746 = 512.0;
        float r7638747 = r7638746 * r7638728;
        float r7638748 = r7638728 * r7638747;
        float r7638749 = r7638745 + r7638748;
        float r7638750 = r7638744 * r7638749;
        float r7638751 = r7638740 + r7638750;
        return r7638751;
}

double f_od(double x) {
        double r7638752 = x;
        double r7638753 = r7638752 * r7638752;
        double r7638754 = 48384.0;
        double r7638755 = r7638752 * r7638754;
        double r7638756 = r7638753 * r7638755;
        double r7638757 = r7638753 * r7638756;
        double r7638758 = 30240.0;
        double r7638759 = r7638758 * r7638752;
        double r7638760 = -80640.0;
        double r7638761 = r7638760 * r7638752;
        double r7638762 = r7638761 * r7638753;
        double r7638763 = r7638759 + r7638762;
        double r7638764 = r7638757 + r7638763;
        double r7638765 = 3;
        double r7638766 = pow(r7638752, r7638765);
        double r7638767 = r7638766 * r7638766;
        double r7638768 = r7638767 * r7638752;
        double r7638769 = -9216.0;
        double r7638770 = 512.0;
        double r7638771 = r7638770 * r7638752;
        double r7638772 = r7638752 * r7638771;
        double r7638773 = r7638769 + r7638772;
        double r7638774 = r7638768 * r7638773;
        double r7638775 = r7638764 + r7638774;
        return r7638775;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7638776, r7638777, r7638778, r7638779, r7638780, r7638781, r7638782, r7638783, r7638784, r7638785, r7638786, r7638787, r7638788, r7638789, r7638790, r7638791, r7638792, r7638793, r7638794, r7638795, r7638796, r7638797, r7638798;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7638776, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7638777);
        mpfr_init(r7638778);
        mpfr_init_set_str(r7638779, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7638780);
        mpfr_init(r7638781);
        mpfr_init(r7638782);
        mpfr_init(r7638783);
        mpfr_init_set_str(r7638784, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7638785);
        mpfr_init(r7638786);
        mpfr_init(r7638787);
        mpfr_init(r7638788);
        mpfr_init_set_str(r7638789, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7638790);
        mpfr_init(r7638791);
        mpfr_init(r7638792);
        mpfr_init(r7638793);
        mpfr_init_set_str(r7638794, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7638795);
        mpfr_init(r7638796);
        mpfr_init(r7638797);
        mpfr_init(r7638798);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7638777, x, MPFR_RNDN);
        mpfr_mul(r7638778, r7638776, r7638777, MPFR_RNDN);
        ;
        mpfr_mul(r7638780, r7638777, r7638777, MPFR_RNDN);
        mpfr_mul(r7638781, r7638780, r7638777, MPFR_RNDN);
        mpfr_mul(r7638782, r7638779, r7638781, MPFR_RNDN);
        mpfr_add(r7638783, r7638778, r7638782, MPFR_RNDN);
        ;
        mpfr_mul(r7638785, r7638781, r7638777, MPFR_RNDN);
        mpfr_mul(r7638786, r7638785, r7638777, MPFR_RNDN);
        mpfr_mul(r7638787, r7638784, r7638786, MPFR_RNDN);
        mpfr_add(r7638788, r7638783, r7638787, MPFR_RNDN);
        ;
        mpfr_mul(r7638790, r7638786, r7638777, MPFR_RNDN);
        mpfr_mul(r7638791, r7638790, r7638777, MPFR_RNDN);
        mpfr_mul(r7638792, r7638789, r7638791, MPFR_RNDN);
        mpfr_add(r7638793, r7638788, r7638792, MPFR_RNDN);
        ;
        mpfr_mul(r7638795, r7638791, r7638777, MPFR_RNDN);
        mpfr_mul(r7638796, r7638795, r7638777, MPFR_RNDN);
        mpfr_mul(r7638797, r7638794, r7638796, MPFR_RNDN);
        mpfr_add(r7638798, r7638793, r7638797, MPFR_RNDN);
        return mpfr_get_d(r7638798, MPFR_RNDN);
}

static mpfr_t r7638799, r7638800, r7638801, r7638802, r7638803, r7638804, r7638805, r7638806, r7638807, r7638808, r7638809, r7638810, r7638811, r7638812, r7638813, r7638814, r7638815, r7638816, r7638817, r7638818, r7638819, r7638820, r7638821, r7638822;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7638799);
        mpfr_init(r7638800);
        mpfr_init_set_str(r7638801, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7638802);
        mpfr_init(r7638803);
        mpfr_init(r7638804);
        mpfr_init_set_str(r7638805, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7638806);
        mpfr_init_set_str(r7638807, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7638808);
        mpfr_init(r7638809);
        mpfr_init(r7638810);
        mpfr_init(r7638811);
        mpfr_init_set_str(r7638812, "3", 10, MPFR_RNDN);
        mpfr_init(r7638813);
        mpfr_init(r7638814);
        mpfr_init(r7638815);
        mpfr_init_set_str(r7638816, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7638817, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7638818);
        mpfr_init(r7638819);
        mpfr_init(r7638820);
        mpfr_init(r7638821);
        mpfr_init(r7638822);
}

double f_fm(double x) {
        mpfr_set_d(r7638799, x, MPFR_RNDN);
        mpfr_mul(r7638800, r7638799, r7638799, MPFR_RNDN);
        ;
        mpfr_mul(r7638802, r7638799, r7638801, MPFR_RNDN);
        mpfr_mul(r7638803, r7638800, r7638802, MPFR_RNDN);
        mpfr_mul(r7638804, r7638800, r7638803, MPFR_RNDN);
        ;
        mpfr_mul(r7638806, r7638805, r7638799, MPFR_RNDN);
        ;
        mpfr_mul(r7638808, r7638807, r7638799, MPFR_RNDN);
        mpfr_mul(r7638809, r7638808, r7638800, MPFR_RNDN);
        mpfr_add(r7638810, r7638806, r7638809, MPFR_RNDN);
        mpfr_add(r7638811, r7638804, r7638810, MPFR_RNDN);
        ;
        mpfr_pow(r7638813, r7638799, r7638812, MPFR_RNDN);
        mpfr_mul(r7638814, r7638813, r7638813, MPFR_RNDN);
        mpfr_mul(r7638815, r7638814, r7638799, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7638818, r7638817, r7638799, MPFR_RNDN);
        mpfr_mul(r7638819, r7638799, r7638818, MPFR_RNDN);
        mpfr_add(r7638820, r7638816, r7638819, MPFR_RNDN);
        mpfr_mul(r7638821, r7638815, r7638820, MPFR_RNDN);
        mpfr_add(r7638822, r7638811, r7638821, MPFR_RNDN);
        return mpfr_get_d(r7638822, MPFR_RNDN);
}

static mpfr_t r7638823, r7638824, r7638825, r7638826, r7638827, r7638828, r7638829, r7638830, r7638831, r7638832, r7638833, r7638834, r7638835, r7638836, r7638837, r7638838, r7638839, r7638840, r7638841, r7638842, r7638843, r7638844, r7638845, r7638846;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7638823);
        mpfr_init(r7638824);
        mpfr_init_set_str(r7638825, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7638826);
        mpfr_init(r7638827);
        mpfr_init(r7638828);
        mpfr_init_set_str(r7638829, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7638830);
        mpfr_init_set_str(r7638831, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7638832);
        mpfr_init(r7638833);
        mpfr_init(r7638834);
        mpfr_init(r7638835);
        mpfr_init_set_str(r7638836, "3", 10, MPFR_RNDN);
        mpfr_init(r7638837);
        mpfr_init(r7638838);
        mpfr_init(r7638839);
        mpfr_init_set_str(r7638840, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7638841, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7638842);
        mpfr_init(r7638843);
        mpfr_init(r7638844);
        mpfr_init(r7638845);
        mpfr_init(r7638846);
}

double f_dm(double x) {
        mpfr_set_d(r7638823, x, MPFR_RNDN);
        mpfr_mul(r7638824, r7638823, r7638823, MPFR_RNDN);
        ;
        mpfr_mul(r7638826, r7638823, r7638825, MPFR_RNDN);
        mpfr_mul(r7638827, r7638824, r7638826, MPFR_RNDN);
        mpfr_mul(r7638828, r7638824, r7638827, MPFR_RNDN);
        ;
        mpfr_mul(r7638830, r7638829, r7638823, MPFR_RNDN);
        ;
        mpfr_mul(r7638832, r7638831, r7638823, MPFR_RNDN);
        mpfr_mul(r7638833, r7638832, r7638824, MPFR_RNDN);
        mpfr_add(r7638834, r7638830, r7638833, MPFR_RNDN);
        mpfr_add(r7638835, r7638828, r7638834, MPFR_RNDN);
        ;
        mpfr_pow(r7638837, r7638823, r7638836, MPFR_RNDN);
        mpfr_mul(r7638838, r7638837, r7638837, MPFR_RNDN);
        mpfr_mul(r7638839, r7638838, r7638823, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7638842, r7638841, r7638823, MPFR_RNDN);
        mpfr_mul(r7638843, r7638823, r7638842, MPFR_RNDN);
        mpfr_add(r7638844, r7638840, r7638843, MPFR_RNDN);
        mpfr_mul(r7638845, r7638839, r7638844, MPFR_RNDN);
        mpfr_add(r7638846, r7638835, r7638845, MPFR_RNDN);
        return mpfr_get_d(r7638846, MPFR_RNDN);
}

