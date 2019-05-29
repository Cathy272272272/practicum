#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r11628632 = 665280.0;
        float r11628633 = -7983360.0;
        float r11628634 = x;
        float r11628635 = r11628634 * r11628634;
        float r11628636 = r11628633 * r11628635;
        float r11628637 = r11628632 + r11628636;
        float r11628638 = 13305600.0;
        float r11628639 = r11628635 * r11628634;
        float r11628640 = r11628639 * r11628634;
        float r11628641 = r11628638 * r11628640;
        float r11628642 = r11628637 + r11628641;
        float r11628643 = -7096320.0;
        float r11628644 = r11628640 * r11628634;
        float r11628645 = r11628644 * r11628634;
        float r11628646 = r11628643 * r11628645;
        float r11628647 = r11628642 + r11628646;
        float r11628648 = 1520640.0;
        float r11628649 = r11628645 * r11628634;
        float r11628650 = r11628649 * r11628634;
        float r11628651 = r11628648 * r11628650;
        float r11628652 = r11628647 + r11628651;
        float r11628653 = -135168.0;
        float r11628654 = r11628650 * r11628634;
        float r11628655 = r11628654 * r11628634;
        float r11628656 = r11628653 * r11628655;
        float r11628657 = r11628652 + r11628656;
        float r11628658 = 4096.0;
        float r11628659 = r11628655 * r11628634;
        float r11628660 = r11628659 * r11628634;
        float r11628661 = r11628658 * r11628660;
        float r11628662 = r11628657 + r11628661;
        return r11628662;
}

double f_id(double x) {
        double r11628663 = 665280.0;
        double r11628664 = -7983360.0;
        double r11628665 = x;
        double r11628666 = r11628665 * r11628665;
        double r11628667 = r11628664 * r11628666;
        double r11628668 = r11628663 + r11628667;
        double r11628669 = 13305600.0;
        double r11628670 = r11628666 * r11628665;
        double r11628671 = r11628670 * r11628665;
        double r11628672 = r11628669 * r11628671;
        double r11628673 = r11628668 + r11628672;
        double r11628674 = -7096320.0;
        double r11628675 = r11628671 * r11628665;
        double r11628676 = r11628675 * r11628665;
        double r11628677 = r11628674 * r11628676;
        double r11628678 = r11628673 + r11628677;
        double r11628679 = 1520640.0;
        double r11628680 = r11628676 * r11628665;
        double r11628681 = r11628680 * r11628665;
        double r11628682 = r11628679 * r11628681;
        double r11628683 = r11628678 + r11628682;
        double r11628684 = -135168.0;
        double r11628685 = r11628681 * r11628665;
        double r11628686 = r11628685 * r11628665;
        double r11628687 = r11628684 * r11628686;
        double r11628688 = r11628683 + r11628687;
        double r11628689 = 4096.0;
        double r11628690 = r11628686 * r11628665;
        double r11628691 = r11628690 * r11628665;
        double r11628692 = r11628689 * r11628691;
        double r11628693 = r11628688 + r11628692;
        return r11628693;
}


double f_of(float x) {
        float r11628694 = 1520640.0;
        float r11628695 = x;
        float r11628696 = r11628694 * r11628695;
        float r11628697 = r11628696 * r11628695;
        float r11628698 = r11628695 * r11628695;
        float r11628699 = 3;
        float r11628700 = pow(r11628698, r11628699);
        float r11628701 = r11628697 * r11628700;
        float r11628702 = 2;
        float r11628703 = r11628702 * r11628699;
        float r11628704 = pow(r11628695, r11628703);
        float r11628705 = r11628698 * r11628698;
        float r11628706 = r11628704 * r11628705;
        float r11628707 = 4096.0;
        float r11628708 = r11628707 * r11628695;
        float r11628709 = r11628695 * r11628708;
        float r11628710 = -135168.0;
        float r11628711 = r11628709 + r11628710;
        float r11628712 = r11628706 * r11628711;
        float r11628713 = r11628701 + r11628712;
        float r11628714 = -7096320.0;
        float r11628715 = r11628698 * r11628714;
        float r11628716 = 13305600.0;
        float r11628717 = r11628715 + r11628716;
        float r11628718 = r11628705 * r11628717;
        float r11628719 = cbrt(r11628718);
        float r11628720 = r11628719 * r11628719;
        float r11628721 = r11628720 * r11628719;
        float r11628722 = -7983360.0;
        float r11628723 = r11628695 * r11628722;
        float r11628724 = r11628723 * r11628695;
        float r11628725 = 665280.0;
        float r11628726 = r11628724 + r11628725;
        float r11628727 = r11628721 + r11628726;
        float r11628728 = r11628713 + r11628727;
        return r11628728;
}

double f_od(double x) {
        double r11628729 = 1520640.0;
        double r11628730 = x;
        double r11628731 = r11628729 * r11628730;
        double r11628732 = r11628731 * r11628730;
        double r11628733 = r11628730 * r11628730;
        double r11628734 = 3;
        double r11628735 = pow(r11628733, r11628734);
        double r11628736 = r11628732 * r11628735;
        double r11628737 = 2;
        double r11628738 = r11628737 * r11628734;
        double r11628739 = pow(r11628730, r11628738);
        double r11628740 = r11628733 * r11628733;
        double r11628741 = r11628739 * r11628740;
        double r11628742 = 4096.0;
        double r11628743 = r11628742 * r11628730;
        double r11628744 = r11628730 * r11628743;
        double r11628745 = -135168.0;
        double r11628746 = r11628744 + r11628745;
        double r11628747 = r11628741 * r11628746;
        double r11628748 = r11628736 + r11628747;
        double r11628749 = -7096320.0;
        double r11628750 = r11628733 * r11628749;
        double r11628751 = 13305600.0;
        double r11628752 = r11628750 + r11628751;
        double r11628753 = r11628740 * r11628752;
        double r11628754 = cbrt(r11628753);
        double r11628755 = r11628754 * r11628754;
        double r11628756 = r11628755 * r11628754;
        double r11628757 = -7983360.0;
        double r11628758 = r11628730 * r11628757;
        double r11628759 = r11628758 * r11628730;
        double r11628760 = 665280.0;
        double r11628761 = r11628759 + r11628760;
        double r11628762 = r11628756 + r11628761;
        double r11628763 = r11628748 + r11628762;
        return r11628763;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11628764, r11628765, r11628766, r11628767, r11628768, r11628769, r11628770, r11628771, r11628772, r11628773, r11628774, r11628775, r11628776, r11628777, r11628778, r11628779, r11628780, r11628781, r11628782, r11628783, r11628784, r11628785, r11628786, r11628787, r11628788, r11628789, r11628790, r11628791, r11628792, r11628793, r11628794;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11628764, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11628765, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r11628766);
        mpfr_init(r11628767);
        mpfr_init(r11628768);
        mpfr_init(r11628769);
        mpfr_init_set_str(r11628770, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r11628771);
        mpfr_init(r11628772);
        mpfr_init(r11628773);
        mpfr_init(r11628774);
        mpfr_init_set_str(r11628775, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r11628776);
        mpfr_init(r11628777);
        mpfr_init(r11628778);
        mpfr_init(r11628779);
        mpfr_init_set_str(r11628780, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r11628781);
        mpfr_init(r11628782);
        mpfr_init(r11628783);
        mpfr_init(r11628784);
        mpfr_init_set_str(r11628785, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r11628786);
        mpfr_init(r11628787);
        mpfr_init(r11628788);
        mpfr_init(r11628789);
        mpfr_init_set_str(r11628790, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r11628791);
        mpfr_init(r11628792);
        mpfr_init(r11628793);
        mpfr_init(r11628794);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11628766, x, MPFR_RNDN);
        mpfr_mul(r11628767, r11628766, r11628766, MPFR_RNDN);
        mpfr_mul(r11628768, r11628765, r11628767, MPFR_RNDN);
        mpfr_add(r11628769, r11628764, r11628768, MPFR_RNDN);
        ;
        mpfr_mul(r11628771, r11628767, r11628766, MPFR_RNDN);
        mpfr_mul(r11628772, r11628771, r11628766, MPFR_RNDN);
        mpfr_mul(r11628773, r11628770, r11628772, MPFR_RNDN);
        mpfr_add(r11628774, r11628769, r11628773, MPFR_RNDN);
        ;
        mpfr_mul(r11628776, r11628772, r11628766, MPFR_RNDN);
        mpfr_mul(r11628777, r11628776, r11628766, MPFR_RNDN);
        mpfr_mul(r11628778, r11628775, r11628777, MPFR_RNDN);
        mpfr_add(r11628779, r11628774, r11628778, MPFR_RNDN);
        ;
        mpfr_mul(r11628781, r11628777, r11628766, MPFR_RNDN);
        mpfr_mul(r11628782, r11628781, r11628766, MPFR_RNDN);
        mpfr_mul(r11628783, r11628780, r11628782, MPFR_RNDN);
        mpfr_add(r11628784, r11628779, r11628783, MPFR_RNDN);
        ;
        mpfr_mul(r11628786, r11628782, r11628766, MPFR_RNDN);
        mpfr_mul(r11628787, r11628786, r11628766, MPFR_RNDN);
        mpfr_mul(r11628788, r11628785, r11628787, MPFR_RNDN);
        mpfr_add(r11628789, r11628784, r11628788, MPFR_RNDN);
        ;
        mpfr_mul(r11628791, r11628787, r11628766, MPFR_RNDN);
        mpfr_mul(r11628792, r11628791, r11628766, MPFR_RNDN);
        mpfr_mul(r11628793, r11628790, r11628792, MPFR_RNDN);
        mpfr_add(r11628794, r11628789, r11628793, MPFR_RNDN);
        return mpfr_get_d(r11628794, MPFR_RNDN);
}

static mpfr_t r11628795, r11628796, r11628797, r11628798, r11628799, r11628800, r11628801, r11628802, r11628803, r11628804, r11628805, r11628806, r11628807, r11628808, r11628809, r11628810, r11628811, r11628812, r11628813, r11628814, r11628815, r11628816, r11628817, r11628818, r11628819, r11628820, r11628821, r11628822, r11628823, r11628824, r11628825, r11628826, r11628827, r11628828, r11628829;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11628795, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r11628796);
        mpfr_init(r11628797);
        mpfr_init(r11628798);
        mpfr_init(r11628799);
        mpfr_init_set_str(r11628800, "3", 10, MPFR_RNDN);
        mpfr_init(r11628801);
        mpfr_init(r11628802);
        mpfr_init_set_str(r11628803, "2", 10, MPFR_RNDN);
        mpfr_init(r11628804);
        mpfr_init(r11628805);
        mpfr_init(r11628806);
        mpfr_init(r11628807);
        mpfr_init_set_str(r11628808, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r11628809);
        mpfr_init(r11628810);
        mpfr_init_set_str(r11628811, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r11628812);
        mpfr_init(r11628813);
        mpfr_init(r11628814);
        mpfr_init_set_str(r11628815, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r11628816);
        mpfr_init_set_str(r11628817, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r11628818);
        mpfr_init(r11628819);
        mpfr_init(r11628820);
        mpfr_init(r11628821);
        mpfr_init(r11628822);
        mpfr_init_set_str(r11628823, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r11628824);
        mpfr_init(r11628825);
        mpfr_init_set_str(r11628826, "665280.0", 10, MPFR_RNDN);
        mpfr_init(r11628827);
        mpfr_init(r11628828);
        mpfr_init(r11628829);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11628796, x, MPFR_RNDN);
        mpfr_mul(r11628797, r11628795, r11628796, MPFR_RNDN);
        mpfr_mul(r11628798, r11628797, r11628796, MPFR_RNDN);
        mpfr_mul(r11628799, r11628796, r11628796, MPFR_RNDN);
        ;
        mpfr_pow(r11628801, r11628799, r11628800, MPFR_RNDN);
        mpfr_mul(r11628802, r11628798, r11628801, MPFR_RNDN);
        ;
        mpfr_mul(r11628804, r11628803, r11628800, MPFR_RNDN);
        mpfr_pow(r11628805, r11628796, r11628804, MPFR_RNDN);
        mpfr_mul(r11628806, r11628799, r11628799, MPFR_RNDN);
        mpfr_mul(r11628807, r11628805, r11628806, MPFR_RNDN);
        ;
        mpfr_mul(r11628809, r11628808, r11628796, MPFR_RNDN);
        mpfr_mul(r11628810, r11628796, r11628809, MPFR_RNDN);
        ;
        mpfr_add(r11628812, r11628810, r11628811, MPFR_RNDN);
        mpfr_mul(r11628813, r11628807, r11628812, MPFR_RNDN);
        mpfr_add(r11628814, r11628802, r11628813, MPFR_RNDN);
        ;
        mpfr_mul(r11628816, r11628799, r11628815, MPFR_RNDN);
        ;
        mpfr_add(r11628818, r11628816, r11628817, MPFR_RNDN);
        mpfr_mul(r11628819, r11628806, r11628818, MPFR_RNDN);
        mpfr_cbrt(r11628820, r11628819, MPFR_RNDN);
        mpfr_mul(r11628821, r11628820, r11628820, MPFR_RNDN);
        mpfr_mul(r11628822, r11628821, r11628820, MPFR_RNDN);
        ;
        mpfr_mul(r11628824, r11628796, r11628823, MPFR_RNDN);
        mpfr_mul(r11628825, r11628824, r11628796, MPFR_RNDN);
        ;
        mpfr_add(r11628827, r11628825, r11628826, MPFR_RNDN);
        mpfr_add(r11628828, r11628822, r11628827, MPFR_RNDN);
        mpfr_add(r11628829, r11628814, r11628828, MPFR_RNDN);
        return mpfr_get_d(r11628829, MPFR_RNDN);
}

static mpfr_t r11628830, r11628831, r11628832, r11628833, r11628834, r11628835, r11628836, r11628837, r11628838, r11628839, r11628840, r11628841, r11628842, r11628843, r11628844, r11628845, r11628846, r11628847, r11628848, r11628849, r11628850, r11628851, r11628852, r11628853, r11628854, r11628855, r11628856, r11628857, r11628858, r11628859, r11628860, r11628861, r11628862, r11628863, r11628864;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11628830, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r11628831);
        mpfr_init(r11628832);
        mpfr_init(r11628833);
        mpfr_init(r11628834);
        mpfr_init_set_str(r11628835, "3", 10, MPFR_RNDN);
        mpfr_init(r11628836);
        mpfr_init(r11628837);
        mpfr_init_set_str(r11628838, "2", 10, MPFR_RNDN);
        mpfr_init(r11628839);
        mpfr_init(r11628840);
        mpfr_init(r11628841);
        mpfr_init(r11628842);
        mpfr_init_set_str(r11628843, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r11628844);
        mpfr_init(r11628845);
        mpfr_init_set_str(r11628846, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r11628847);
        mpfr_init(r11628848);
        mpfr_init(r11628849);
        mpfr_init_set_str(r11628850, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r11628851);
        mpfr_init_set_str(r11628852, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r11628853);
        mpfr_init(r11628854);
        mpfr_init(r11628855);
        mpfr_init(r11628856);
        mpfr_init(r11628857);
        mpfr_init_set_str(r11628858, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r11628859);
        mpfr_init(r11628860);
        mpfr_init_set_str(r11628861, "665280.0", 10, MPFR_RNDN);
        mpfr_init(r11628862);
        mpfr_init(r11628863);
        mpfr_init(r11628864);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11628831, x, MPFR_RNDN);
        mpfr_mul(r11628832, r11628830, r11628831, MPFR_RNDN);
        mpfr_mul(r11628833, r11628832, r11628831, MPFR_RNDN);
        mpfr_mul(r11628834, r11628831, r11628831, MPFR_RNDN);
        ;
        mpfr_pow(r11628836, r11628834, r11628835, MPFR_RNDN);
        mpfr_mul(r11628837, r11628833, r11628836, MPFR_RNDN);
        ;
        mpfr_mul(r11628839, r11628838, r11628835, MPFR_RNDN);
        mpfr_pow(r11628840, r11628831, r11628839, MPFR_RNDN);
        mpfr_mul(r11628841, r11628834, r11628834, MPFR_RNDN);
        mpfr_mul(r11628842, r11628840, r11628841, MPFR_RNDN);
        ;
        mpfr_mul(r11628844, r11628843, r11628831, MPFR_RNDN);
        mpfr_mul(r11628845, r11628831, r11628844, MPFR_RNDN);
        ;
        mpfr_add(r11628847, r11628845, r11628846, MPFR_RNDN);
        mpfr_mul(r11628848, r11628842, r11628847, MPFR_RNDN);
        mpfr_add(r11628849, r11628837, r11628848, MPFR_RNDN);
        ;
        mpfr_mul(r11628851, r11628834, r11628850, MPFR_RNDN);
        ;
        mpfr_add(r11628853, r11628851, r11628852, MPFR_RNDN);
        mpfr_mul(r11628854, r11628841, r11628853, MPFR_RNDN);
        mpfr_cbrt(r11628855, r11628854, MPFR_RNDN);
        mpfr_mul(r11628856, r11628855, r11628855, MPFR_RNDN);
        mpfr_mul(r11628857, r11628856, r11628855, MPFR_RNDN);
        ;
        mpfr_mul(r11628859, r11628831, r11628858, MPFR_RNDN);
        mpfr_mul(r11628860, r11628859, r11628831, MPFR_RNDN);
        ;
        mpfr_add(r11628862, r11628860, r11628861, MPFR_RNDN);
        mpfr_add(r11628863, r11628857, r11628862, MPFR_RNDN);
        mpfr_add(r11628864, r11628849, r11628863, MPFR_RNDN);
        return mpfr_get_d(r11628864, MPFR_RNDN);
}

