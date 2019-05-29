#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r9831642 = -30240.0;
        float r9831643 = 302400.0;
        float r9831644 = x;
        float r9831645 = r9831644 * r9831644;
        float r9831646 = r9831643 * r9831645;
        float r9831647 = r9831642 + r9831646;
        float r9831648 = -403200.0;
        float r9831649 = r9831645 * r9831644;
        float r9831650 = r9831649 * r9831644;
        float r9831651 = r9831648 * r9831650;
        float r9831652 = r9831647 + r9831651;
        float r9831653 = 161280.0;
        float r9831654 = r9831650 * r9831644;
        float r9831655 = r9831654 * r9831644;
        float r9831656 = r9831653 * r9831655;
        float r9831657 = r9831652 + r9831656;
        float r9831658 = -23040.0;
        float r9831659 = r9831655 * r9831644;
        float r9831660 = r9831659 * r9831644;
        float r9831661 = r9831658 * r9831660;
        float r9831662 = r9831657 + r9831661;
        float r9831663 = 1024.0;
        float r9831664 = r9831660 * r9831644;
        float r9831665 = r9831664 * r9831644;
        float r9831666 = r9831663 * r9831665;
        float r9831667 = r9831662 + r9831666;
        return r9831667;
}

double f_id(double x) {
        double r9831668 = -30240.0;
        double r9831669 = 302400.0;
        double r9831670 = x;
        double r9831671 = r9831670 * r9831670;
        double r9831672 = r9831669 * r9831671;
        double r9831673 = r9831668 + r9831672;
        double r9831674 = -403200.0;
        double r9831675 = r9831671 * r9831670;
        double r9831676 = r9831675 * r9831670;
        double r9831677 = r9831674 * r9831676;
        double r9831678 = r9831673 + r9831677;
        double r9831679 = 161280.0;
        double r9831680 = r9831676 * r9831670;
        double r9831681 = r9831680 * r9831670;
        double r9831682 = r9831679 * r9831681;
        double r9831683 = r9831678 + r9831682;
        double r9831684 = -23040.0;
        double r9831685 = r9831681 * r9831670;
        double r9831686 = r9831685 * r9831670;
        double r9831687 = r9831684 * r9831686;
        double r9831688 = r9831683 + r9831687;
        double r9831689 = 1024.0;
        double r9831690 = r9831686 * r9831670;
        double r9831691 = r9831690 * r9831670;
        double r9831692 = r9831689 * r9831691;
        double r9831693 = r9831688 + r9831692;
        return r9831693;
}


double f_of(float x) {
        float r9831694 = -30240.0;
        float r9831695 = 302400.0;
        float r9831696 = x;
        float r9831697 = r9831696 * r9831696;
        float r9831698 = r9831695 * r9831697;
        float r9831699 = r9831694 + r9831698;
        float r9831700 = -403200.0;
        float r9831701 = r9831700 * r9831696;
        float r9831702 = 3;
        float r9831703 = pow(r9831696, r9831702);
        float r9831704 = r9831701 * r9831703;
        float r9831705 = cbrt(r9831704);
        float r9831706 = r9831705 * r9831705;
        float r9831707 = r9831703 * r9831701;
        float r9831708 = cbrt(r9831707);
        float r9831709 = r9831706 * r9831708;
        float r9831710 = r9831699 + r9831709;
        float r9831711 = 161280.0;
        float r9831712 = r9831697 * r9831696;
        float r9831713 = r9831712 * r9831696;
        float r9831714 = r9831713 * r9831696;
        float r9831715 = r9831714 * r9831696;
        float r9831716 = r9831711 * r9831715;
        float r9831717 = r9831710 + r9831716;
        float r9831718 = -23040.0;
        float r9831719 = r9831715 * r9831696;
        float r9831720 = r9831719 * r9831696;
        float r9831721 = r9831718 * r9831720;
        float r9831722 = r9831717 + r9831721;
        float r9831723 = 1024.0;
        float r9831724 = r9831720 * r9831696;
        float r9831725 = r9831724 * r9831696;
        float r9831726 = r9831723 * r9831725;
        float r9831727 = r9831722 + r9831726;
        return r9831727;
}

double f_od(double x) {
        double r9831728 = -30240.0;
        double r9831729 = 302400.0;
        double r9831730 = x;
        double r9831731 = r9831730 * r9831730;
        double r9831732 = r9831729 * r9831731;
        double r9831733 = r9831728 + r9831732;
        double r9831734 = -403200.0;
        double r9831735 = r9831734 * r9831730;
        double r9831736 = 3;
        double r9831737 = pow(r9831730, r9831736);
        double r9831738 = r9831735 * r9831737;
        double r9831739 = cbrt(r9831738);
        double r9831740 = r9831739 * r9831739;
        double r9831741 = r9831737 * r9831735;
        double r9831742 = cbrt(r9831741);
        double r9831743 = r9831740 * r9831742;
        double r9831744 = r9831733 + r9831743;
        double r9831745 = 161280.0;
        double r9831746 = r9831731 * r9831730;
        double r9831747 = r9831746 * r9831730;
        double r9831748 = r9831747 * r9831730;
        double r9831749 = r9831748 * r9831730;
        double r9831750 = r9831745 * r9831749;
        double r9831751 = r9831744 + r9831750;
        double r9831752 = -23040.0;
        double r9831753 = r9831749 * r9831730;
        double r9831754 = r9831753 * r9831730;
        double r9831755 = r9831752 * r9831754;
        double r9831756 = r9831751 + r9831755;
        double r9831757 = 1024.0;
        double r9831758 = r9831754 * r9831730;
        double r9831759 = r9831758 * r9831730;
        double r9831760 = r9831757 * r9831759;
        double r9831761 = r9831756 + r9831760;
        return r9831761;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9831762, r9831763, r9831764, r9831765, r9831766, r9831767, r9831768, r9831769, r9831770, r9831771, r9831772, r9831773, r9831774, r9831775, r9831776, r9831777, r9831778, r9831779, r9831780, r9831781, r9831782, r9831783, r9831784, r9831785, r9831786, r9831787;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831762, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831763, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9831764);
        mpfr_init(r9831765);
        mpfr_init(r9831766);
        mpfr_init(r9831767);
        mpfr_init_set_str(r9831768, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9831769);
        mpfr_init(r9831770);
        mpfr_init(r9831771);
        mpfr_init(r9831772);
        mpfr_init_set_str(r9831773, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9831774);
        mpfr_init(r9831775);
        mpfr_init(r9831776);
        mpfr_init(r9831777);
        mpfr_init_set_str(r9831778, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9831779);
        mpfr_init(r9831780);
        mpfr_init(r9831781);
        mpfr_init(r9831782);
        mpfr_init_set_str(r9831783, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9831784);
        mpfr_init(r9831785);
        mpfr_init(r9831786);
        mpfr_init(r9831787);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9831764, x, MPFR_RNDN);
        mpfr_mul(r9831765, r9831764, r9831764, MPFR_RNDN);
        mpfr_mul(r9831766, r9831763, r9831765, MPFR_RNDN);
        mpfr_add(r9831767, r9831762, r9831766, MPFR_RNDN);
        ;
        mpfr_mul(r9831769, r9831765, r9831764, MPFR_RNDN);
        mpfr_mul(r9831770, r9831769, r9831764, MPFR_RNDN);
        mpfr_mul(r9831771, r9831768, r9831770, MPFR_RNDN);
        mpfr_add(r9831772, r9831767, r9831771, MPFR_RNDN);
        ;
        mpfr_mul(r9831774, r9831770, r9831764, MPFR_RNDN);
        mpfr_mul(r9831775, r9831774, r9831764, MPFR_RNDN);
        mpfr_mul(r9831776, r9831773, r9831775, MPFR_RNDN);
        mpfr_add(r9831777, r9831772, r9831776, MPFR_RNDN);
        ;
        mpfr_mul(r9831779, r9831775, r9831764, MPFR_RNDN);
        mpfr_mul(r9831780, r9831779, r9831764, MPFR_RNDN);
        mpfr_mul(r9831781, r9831778, r9831780, MPFR_RNDN);
        mpfr_add(r9831782, r9831777, r9831781, MPFR_RNDN);
        ;
        mpfr_mul(r9831784, r9831780, r9831764, MPFR_RNDN);
        mpfr_mul(r9831785, r9831784, r9831764, MPFR_RNDN);
        mpfr_mul(r9831786, r9831783, r9831785, MPFR_RNDN);
        mpfr_add(r9831787, r9831782, r9831786, MPFR_RNDN);
        return mpfr_get_d(r9831787, MPFR_RNDN);
}

static mpfr_t r9831788, r9831789, r9831790, r9831791, r9831792, r9831793, r9831794, r9831795, r9831796, r9831797, r9831798, r9831799, r9831800, r9831801, r9831802, r9831803, r9831804, r9831805, r9831806, r9831807, r9831808, r9831809, r9831810, r9831811, r9831812, r9831813, r9831814, r9831815, r9831816, r9831817, r9831818, r9831819, r9831820, r9831821;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831788, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831789, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9831790);
        mpfr_init(r9831791);
        mpfr_init(r9831792);
        mpfr_init(r9831793);
        mpfr_init_set_str(r9831794, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9831795);
        mpfr_init_set_str(r9831796, "3", 10, MPFR_RNDN);
        mpfr_init(r9831797);
        mpfr_init(r9831798);
        mpfr_init(r9831799);
        mpfr_init(r9831800);
        mpfr_init(r9831801);
        mpfr_init(r9831802);
        mpfr_init(r9831803);
        mpfr_init(r9831804);
        mpfr_init_set_str(r9831805, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9831806);
        mpfr_init(r9831807);
        mpfr_init(r9831808);
        mpfr_init(r9831809);
        mpfr_init(r9831810);
        mpfr_init(r9831811);
        mpfr_init_set_str(r9831812, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9831813);
        mpfr_init(r9831814);
        mpfr_init(r9831815);
        mpfr_init(r9831816);
        mpfr_init_set_str(r9831817, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9831818);
        mpfr_init(r9831819);
        mpfr_init(r9831820);
        mpfr_init(r9831821);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9831790, x, MPFR_RNDN);
        mpfr_mul(r9831791, r9831790, r9831790, MPFR_RNDN);
        mpfr_mul(r9831792, r9831789, r9831791, MPFR_RNDN);
        mpfr_add(r9831793, r9831788, r9831792, MPFR_RNDN);
        ;
        mpfr_mul(r9831795, r9831794, r9831790, MPFR_RNDN);
        ;
        mpfr_pow(r9831797, r9831790, r9831796, MPFR_RNDN);
        mpfr_mul(r9831798, r9831795, r9831797, MPFR_RNDN);
        mpfr_cbrt(r9831799, r9831798, MPFR_RNDN);
        mpfr_mul(r9831800, r9831799, r9831799, MPFR_RNDN);
        mpfr_mul(r9831801, r9831797, r9831795, MPFR_RNDN);
        mpfr_cbrt(r9831802, r9831801, MPFR_RNDN);
        mpfr_mul(r9831803, r9831800, r9831802, MPFR_RNDN);
        mpfr_add(r9831804, r9831793, r9831803, MPFR_RNDN);
        ;
        mpfr_mul(r9831806, r9831791, r9831790, MPFR_RNDN);
        mpfr_mul(r9831807, r9831806, r9831790, MPFR_RNDN);
        mpfr_mul(r9831808, r9831807, r9831790, MPFR_RNDN);
        mpfr_mul(r9831809, r9831808, r9831790, MPFR_RNDN);
        mpfr_mul(r9831810, r9831805, r9831809, MPFR_RNDN);
        mpfr_add(r9831811, r9831804, r9831810, MPFR_RNDN);
        ;
        mpfr_mul(r9831813, r9831809, r9831790, MPFR_RNDN);
        mpfr_mul(r9831814, r9831813, r9831790, MPFR_RNDN);
        mpfr_mul(r9831815, r9831812, r9831814, MPFR_RNDN);
        mpfr_add(r9831816, r9831811, r9831815, MPFR_RNDN);
        ;
        mpfr_mul(r9831818, r9831814, r9831790, MPFR_RNDN);
        mpfr_mul(r9831819, r9831818, r9831790, MPFR_RNDN);
        mpfr_mul(r9831820, r9831817, r9831819, MPFR_RNDN);
        mpfr_add(r9831821, r9831816, r9831820, MPFR_RNDN);
        return mpfr_get_d(r9831821, MPFR_RNDN);
}

static mpfr_t r9831822, r9831823, r9831824, r9831825, r9831826, r9831827, r9831828, r9831829, r9831830, r9831831, r9831832, r9831833, r9831834, r9831835, r9831836, r9831837, r9831838, r9831839, r9831840, r9831841, r9831842, r9831843, r9831844, r9831845, r9831846, r9831847, r9831848, r9831849, r9831850, r9831851, r9831852, r9831853, r9831854, r9831855;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831822, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831823, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9831824);
        mpfr_init(r9831825);
        mpfr_init(r9831826);
        mpfr_init(r9831827);
        mpfr_init_set_str(r9831828, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9831829);
        mpfr_init_set_str(r9831830, "3", 10, MPFR_RNDN);
        mpfr_init(r9831831);
        mpfr_init(r9831832);
        mpfr_init(r9831833);
        mpfr_init(r9831834);
        mpfr_init(r9831835);
        mpfr_init(r9831836);
        mpfr_init(r9831837);
        mpfr_init(r9831838);
        mpfr_init_set_str(r9831839, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9831840);
        mpfr_init(r9831841);
        mpfr_init(r9831842);
        mpfr_init(r9831843);
        mpfr_init(r9831844);
        mpfr_init(r9831845);
        mpfr_init_set_str(r9831846, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9831847);
        mpfr_init(r9831848);
        mpfr_init(r9831849);
        mpfr_init(r9831850);
        mpfr_init_set_str(r9831851, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9831852);
        mpfr_init(r9831853);
        mpfr_init(r9831854);
        mpfr_init(r9831855);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9831824, x, MPFR_RNDN);
        mpfr_mul(r9831825, r9831824, r9831824, MPFR_RNDN);
        mpfr_mul(r9831826, r9831823, r9831825, MPFR_RNDN);
        mpfr_add(r9831827, r9831822, r9831826, MPFR_RNDN);
        ;
        mpfr_mul(r9831829, r9831828, r9831824, MPFR_RNDN);
        ;
        mpfr_pow(r9831831, r9831824, r9831830, MPFR_RNDN);
        mpfr_mul(r9831832, r9831829, r9831831, MPFR_RNDN);
        mpfr_cbrt(r9831833, r9831832, MPFR_RNDN);
        mpfr_mul(r9831834, r9831833, r9831833, MPFR_RNDN);
        mpfr_mul(r9831835, r9831831, r9831829, MPFR_RNDN);
        mpfr_cbrt(r9831836, r9831835, MPFR_RNDN);
        mpfr_mul(r9831837, r9831834, r9831836, MPFR_RNDN);
        mpfr_add(r9831838, r9831827, r9831837, MPFR_RNDN);
        ;
        mpfr_mul(r9831840, r9831825, r9831824, MPFR_RNDN);
        mpfr_mul(r9831841, r9831840, r9831824, MPFR_RNDN);
        mpfr_mul(r9831842, r9831841, r9831824, MPFR_RNDN);
        mpfr_mul(r9831843, r9831842, r9831824, MPFR_RNDN);
        mpfr_mul(r9831844, r9831839, r9831843, MPFR_RNDN);
        mpfr_add(r9831845, r9831838, r9831844, MPFR_RNDN);
        ;
        mpfr_mul(r9831847, r9831843, r9831824, MPFR_RNDN);
        mpfr_mul(r9831848, r9831847, r9831824, MPFR_RNDN);
        mpfr_mul(r9831849, r9831846, r9831848, MPFR_RNDN);
        mpfr_add(r9831850, r9831845, r9831849, MPFR_RNDN);
        ;
        mpfr_mul(r9831852, r9831848, r9831824, MPFR_RNDN);
        mpfr_mul(r9831853, r9831852, r9831824, MPFR_RNDN);
        mpfr_mul(r9831854, r9831851, r9831853, MPFR_RNDN);
        mpfr_add(r9831855, r9831850, r9831854, MPFR_RNDN);
        return mpfr_get_d(r9831855, MPFR_RNDN);
}

