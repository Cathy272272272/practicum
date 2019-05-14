#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6181690 = -0.246094;
        float r6181691 = 13.535156;
        float r6181692 = x;
        float r6181693 = r6181692 * r6181692;
        float r6181694 = r6181691 * r6181693;
        float r6181695 = r6181690 + r6181694;
        float r6181696 = -117.304688;
        float r6181697 = r6181693 * r6181692;
        float r6181698 = r6181697 * r6181692;
        float r6181699 = r6181696 * r6181698;
        float r6181700 = r6181695 + r6181699;
        float r6181701 = 351.914062;
        float r6181702 = r6181698 * r6181692;
        float r6181703 = r6181702 * r6181692;
        float r6181704 = r6181701 * r6181703;
        float r6181705 = r6181700 + r6181704;
        float r6181706 = -427.324219;
        float r6181707 = r6181703 * r6181692;
        float r6181708 = r6181707 * r6181692;
        float r6181709 = r6181706 * r6181708;
        float r6181710 = r6181705 + r6181709;
        float r6181711 = 180.425781;
        float r6181712 = r6181708 * r6181692;
        float r6181713 = r6181712 * r6181692;
        float r6181714 = r6181711 * r6181713;
        float r6181715 = r6181710 + r6181714;
        return r6181715;
}

double f_id(double x) {
        double r6181716 = -0.246094;
        double r6181717 = 13.535156;
        double r6181718 = x;
        double r6181719 = r6181718 * r6181718;
        double r6181720 = r6181717 * r6181719;
        double r6181721 = r6181716 + r6181720;
        double r6181722 = -117.304688;
        double r6181723 = r6181719 * r6181718;
        double r6181724 = r6181723 * r6181718;
        double r6181725 = r6181722 * r6181724;
        double r6181726 = r6181721 + r6181725;
        double r6181727 = 351.914062;
        double r6181728 = r6181724 * r6181718;
        double r6181729 = r6181728 * r6181718;
        double r6181730 = r6181727 * r6181729;
        double r6181731 = r6181726 + r6181730;
        double r6181732 = -427.324219;
        double r6181733 = r6181729 * r6181718;
        double r6181734 = r6181733 * r6181718;
        double r6181735 = r6181732 * r6181734;
        double r6181736 = r6181731 + r6181735;
        double r6181737 = 180.425781;
        double r6181738 = r6181734 * r6181718;
        double r6181739 = r6181738 * r6181718;
        double r6181740 = r6181737 * r6181739;
        double r6181741 = r6181736 + r6181740;
        return r6181741;
}


double f_of(float x) {
        float r6181742 = x;
        float r6181743 = r6181742 * r6181742;
        float r6181744 = r6181743 * r6181743;
        float r6181745 = -117.304688;
        float r6181746 = 351.914062;
        float r6181747 = r6181746 * r6181742;
        float r6181748 = r6181742 * r6181747;
        float r6181749 = r6181745 + r6181748;
        float r6181750 = r6181744 * r6181749;
        float r6181751 = r6181744 * r6181744;
        float r6181752 = 180.425781;
        float r6181753 = r6181752 * r6181743;
        float r6181754 = -427.324219;
        float r6181755 = r6181753 + r6181754;
        float r6181756 = r6181751 * r6181755;
        float r6181757 = r6181750 + r6181756;
        float r6181758 = 13.535156;
        float r6181759 = r6181742 * r6181758;
        float r6181760 = r6181742 * r6181759;
        float r6181761 = cbrt(r6181760);
        float r6181762 = r6181761 * r6181761;
        float r6181763 = r6181762 * r6181761;
        float r6181764 = -0.246094;
        float r6181765 = r6181763 + r6181764;
        float r6181766 = r6181757 + r6181765;
        return r6181766;
}

double f_od(double x) {
        double r6181767 = x;
        double r6181768 = r6181767 * r6181767;
        double r6181769 = r6181768 * r6181768;
        double r6181770 = -117.304688;
        double r6181771 = 351.914062;
        double r6181772 = r6181771 * r6181767;
        double r6181773 = r6181767 * r6181772;
        double r6181774 = r6181770 + r6181773;
        double r6181775 = r6181769 * r6181774;
        double r6181776 = r6181769 * r6181769;
        double r6181777 = 180.425781;
        double r6181778 = r6181777 * r6181768;
        double r6181779 = -427.324219;
        double r6181780 = r6181778 + r6181779;
        double r6181781 = r6181776 * r6181780;
        double r6181782 = r6181775 + r6181781;
        double r6181783 = 13.535156;
        double r6181784 = r6181767 * r6181783;
        double r6181785 = r6181767 * r6181784;
        double r6181786 = cbrt(r6181785);
        double r6181787 = r6181786 * r6181786;
        double r6181788 = r6181787 * r6181786;
        double r6181789 = -0.246094;
        double r6181790 = r6181788 + r6181789;
        double r6181791 = r6181782 + r6181790;
        return r6181791;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6181792, r6181793, r6181794, r6181795, r6181796, r6181797, r6181798, r6181799, r6181800, r6181801, r6181802, r6181803, r6181804, r6181805, r6181806, r6181807, r6181808, r6181809, r6181810, r6181811, r6181812, r6181813, r6181814, r6181815, r6181816, r6181817;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6181792, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181793, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6181794);
        mpfr_init(r6181795);
        mpfr_init(r6181796);
        mpfr_init(r6181797);
        mpfr_init_set_str(r6181798, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6181799);
        mpfr_init(r6181800);
        mpfr_init(r6181801);
        mpfr_init(r6181802);
        mpfr_init_set_str(r6181803, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6181804);
        mpfr_init(r6181805);
        mpfr_init(r6181806);
        mpfr_init(r6181807);
        mpfr_init_set_str(r6181808, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6181809);
        mpfr_init(r6181810);
        mpfr_init(r6181811);
        mpfr_init(r6181812);
        mpfr_init_set_str(r6181813, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6181814);
        mpfr_init(r6181815);
        mpfr_init(r6181816);
        mpfr_init(r6181817);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6181794, x, MPFR_RNDN);
        mpfr_mul(r6181795, r6181794, r6181794, MPFR_RNDN);
        mpfr_mul(r6181796, r6181793, r6181795, MPFR_RNDN);
        mpfr_add(r6181797, r6181792, r6181796, MPFR_RNDN);
        ;
        mpfr_mul(r6181799, r6181795, r6181794, MPFR_RNDN);
        mpfr_mul(r6181800, r6181799, r6181794, MPFR_RNDN);
        mpfr_mul(r6181801, r6181798, r6181800, MPFR_RNDN);
        mpfr_add(r6181802, r6181797, r6181801, MPFR_RNDN);
        ;
        mpfr_mul(r6181804, r6181800, r6181794, MPFR_RNDN);
        mpfr_mul(r6181805, r6181804, r6181794, MPFR_RNDN);
        mpfr_mul(r6181806, r6181803, r6181805, MPFR_RNDN);
        mpfr_add(r6181807, r6181802, r6181806, MPFR_RNDN);
        ;
        mpfr_mul(r6181809, r6181805, r6181794, MPFR_RNDN);
        mpfr_mul(r6181810, r6181809, r6181794, MPFR_RNDN);
        mpfr_mul(r6181811, r6181808, r6181810, MPFR_RNDN);
        mpfr_add(r6181812, r6181807, r6181811, MPFR_RNDN);
        ;
        mpfr_mul(r6181814, r6181810, r6181794, MPFR_RNDN);
        mpfr_mul(r6181815, r6181814, r6181794, MPFR_RNDN);
        mpfr_mul(r6181816, r6181813, r6181815, MPFR_RNDN);
        mpfr_add(r6181817, r6181812, r6181816, MPFR_RNDN);
        return mpfr_get_d(r6181817, MPFR_RNDN);
}

static mpfr_t r6181818, r6181819, r6181820, r6181821, r6181822, r6181823, r6181824, r6181825, r6181826, r6181827, r6181828, r6181829, r6181830, r6181831, r6181832, r6181833, r6181834, r6181835, r6181836, r6181837, r6181838, r6181839, r6181840, r6181841, r6181842;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6181818);
        mpfr_init(r6181819);
        mpfr_init(r6181820);
        mpfr_init_set_str(r6181821, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181822, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6181823);
        mpfr_init(r6181824);
        mpfr_init(r6181825);
        mpfr_init(r6181826);
        mpfr_init(r6181827);
        mpfr_init_set_str(r6181828, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6181829);
        mpfr_init_set_str(r6181830, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6181831);
        mpfr_init(r6181832);
        mpfr_init(r6181833);
        mpfr_init_set_str(r6181834, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6181835);
        mpfr_init(r6181836);
        mpfr_init(r6181837);
        mpfr_init(r6181838);
        mpfr_init(r6181839);
        mpfr_init_set_str(r6181840, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r6181841);
        mpfr_init(r6181842);
}

double f_fm(double x) {
        mpfr_set_d(r6181818, x, MPFR_RNDN);
        mpfr_mul(r6181819, r6181818, r6181818, MPFR_RNDN);
        mpfr_mul(r6181820, r6181819, r6181819, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6181823, r6181822, r6181818, MPFR_RNDN);
        mpfr_mul(r6181824, r6181818, r6181823, MPFR_RNDN);
        mpfr_add(r6181825, r6181821, r6181824, MPFR_RNDN);
        mpfr_mul(r6181826, r6181820, r6181825, MPFR_RNDN);
        mpfr_mul(r6181827, r6181820, r6181820, MPFR_RNDN);
        ;
        mpfr_mul(r6181829, r6181828, r6181819, MPFR_RNDN);
        ;
        mpfr_add(r6181831, r6181829, r6181830, MPFR_RNDN);
        mpfr_mul(r6181832, r6181827, r6181831, MPFR_RNDN);
        mpfr_add(r6181833, r6181826, r6181832, MPFR_RNDN);
        ;
        mpfr_mul(r6181835, r6181818, r6181834, MPFR_RNDN);
        mpfr_mul(r6181836, r6181818, r6181835, MPFR_RNDN);
        mpfr_cbrt(r6181837, r6181836, MPFR_RNDN);
        mpfr_mul(r6181838, r6181837, r6181837, MPFR_RNDN);
        mpfr_mul(r6181839, r6181838, r6181837, MPFR_RNDN);
        ;
        mpfr_add(r6181841, r6181839, r6181840, MPFR_RNDN);
        mpfr_add(r6181842, r6181833, r6181841, MPFR_RNDN);
        return mpfr_get_d(r6181842, MPFR_RNDN);
}

static mpfr_t r6181843, r6181844, r6181845, r6181846, r6181847, r6181848, r6181849, r6181850, r6181851, r6181852, r6181853, r6181854, r6181855, r6181856, r6181857, r6181858, r6181859, r6181860, r6181861, r6181862, r6181863, r6181864, r6181865, r6181866, r6181867;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6181843);
        mpfr_init(r6181844);
        mpfr_init(r6181845);
        mpfr_init_set_str(r6181846, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181847, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6181848);
        mpfr_init(r6181849);
        mpfr_init(r6181850);
        mpfr_init(r6181851);
        mpfr_init(r6181852);
        mpfr_init_set_str(r6181853, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6181854);
        mpfr_init_set_str(r6181855, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6181856);
        mpfr_init(r6181857);
        mpfr_init(r6181858);
        mpfr_init_set_str(r6181859, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6181860);
        mpfr_init(r6181861);
        mpfr_init(r6181862);
        mpfr_init(r6181863);
        mpfr_init(r6181864);
        mpfr_init_set_str(r6181865, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r6181866);
        mpfr_init(r6181867);
}

double f_dm(double x) {
        mpfr_set_d(r6181843, x, MPFR_RNDN);
        mpfr_mul(r6181844, r6181843, r6181843, MPFR_RNDN);
        mpfr_mul(r6181845, r6181844, r6181844, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6181848, r6181847, r6181843, MPFR_RNDN);
        mpfr_mul(r6181849, r6181843, r6181848, MPFR_RNDN);
        mpfr_add(r6181850, r6181846, r6181849, MPFR_RNDN);
        mpfr_mul(r6181851, r6181845, r6181850, MPFR_RNDN);
        mpfr_mul(r6181852, r6181845, r6181845, MPFR_RNDN);
        ;
        mpfr_mul(r6181854, r6181853, r6181844, MPFR_RNDN);
        ;
        mpfr_add(r6181856, r6181854, r6181855, MPFR_RNDN);
        mpfr_mul(r6181857, r6181852, r6181856, MPFR_RNDN);
        mpfr_add(r6181858, r6181851, r6181857, MPFR_RNDN);
        ;
        mpfr_mul(r6181860, r6181843, r6181859, MPFR_RNDN);
        mpfr_mul(r6181861, r6181843, r6181860, MPFR_RNDN);
        mpfr_cbrt(r6181862, r6181861, MPFR_RNDN);
        mpfr_mul(r6181863, r6181862, r6181862, MPFR_RNDN);
        mpfr_mul(r6181864, r6181863, r6181862, MPFR_RNDN);
        ;
        mpfr_add(r6181866, r6181864, r6181865, MPFR_RNDN);
        mpfr_add(r6181867, r6181858, r6181866, MPFR_RNDN);
        return mpfr_get_d(r6181867, MPFR_RNDN);
}

