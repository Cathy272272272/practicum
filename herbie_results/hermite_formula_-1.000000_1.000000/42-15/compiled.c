#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r7997582 = -518918400.0;
        float r7997583 = x;
        float r7997584 = r7997582 * r7997583;
        float r7997585 = 2421619200.0;
        float r7997586 = r7997583 * r7997583;
        float r7997587 = r7997586 * r7997583;
        float r7997588 = r7997585 * r7997587;
        float r7997589 = r7997584 + r7997588;
        float r7997590 = -2905943040.0;
        float r7997591 = r7997587 * r7997583;
        float r7997592 = r7997591 * r7997583;
        float r7997593 = r7997590 * r7997592;
        float r7997594 = r7997589 + r7997593;
        float r7997595 = 1383782400.0;
        float r7997596 = r7997592 * r7997583;
        float r7997597 = r7997596 * r7997583;
        float r7997598 = r7997595 * r7997597;
        float r7997599 = r7997594 + r7997598;
        float r7997600 = -307507200.0;
        float r7997601 = r7997597 * r7997583;
        float r7997602 = r7997601 * r7997583;
        float r7997603 = r7997600 * r7997602;
        float r7997604 = r7997599 + r7997603;
        float r7997605 = 33546240.0;
        float r7997606 = r7997602 * r7997583;
        float r7997607 = r7997606 * r7997583;
        float r7997608 = r7997605 * r7997607;
        float r7997609 = r7997604 + r7997608;
        float r7997610 = -1720320.0;
        float r7997611 = r7997607 * r7997583;
        float r7997612 = r7997611 * r7997583;
        float r7997613 = r7997610 * r7997612;
        float r7997614 = r7997609 + r7997613;
        float r7997615 = 32768.0;
        float r7997616 = r7997612 * r7997583;
        float r7997617 = r7997616 * r7997583;
        float r7997618 = r7997615 * r7997617;
        float r7997619 = r7997614 + r7997618;
        return r7997619;
}

double f_id(double x) {
        double r7997620 = -518918400.0;
        double r7997621 = x;
        double r7997622 = r7997620 * r7997621;
        double r7997623 = 2421619200.0;
        double r7997624 = r7997621 * r7997621;
        double r7997625 = r7997624 * r7997621;
        double r7997626 = r7997623 * r7997625;
        double r7997627 = r7997622 + r7997626;
        double r7997628 = -2905943040.0;
        double r7997629 = r7997625 * r7997621;
        double r7997630 = r7997629 * r7997621;
        double r7997631 = r7997628 * r7997630;
        double r7997632 = r7997627 + r7997631;
        double r7997633 = 1383782400.0;
        double r7997634 = r7997630 * r7997621;
        double r7997635 = r7997634 * r7997621;
        double r7997636 = r7997633 * r7997635;
        double r7997637 = r7997632 + r7997636;
        double r7997638 = -307507200.0;
        double r7997639 = r7997635 * r7997621;
        double r7997640 = r7997639 * r7997621;
        double r7997641 = r7997638 * r7997640;
        double r7997642 = r7997637 + r7997641;
        double r7997643 = 33546240.0;
        double r7997644 = r7997640 * r7997621;
        double r7997645 = r7997644 * r7997621;
        double r7997646 = r7997643 * r7997645;
        double r7997647 = r7997642 + r7997646;
        double r7997648 = -1720320.0;
        double r7997649 = r7997645 * r7997621;
        double r7997650 = r7997649 * r7997621;
        double r7997651 = r7997648 * r7997650;
        double r7997652 = r7997647 + r7997651;
        double r7997653 = 32768.0;
        double r7997654 = r7997650 * r7997621;
        double r7997655 = r7997654 * r7997621;
        double r7997656 = r7997653 * r7997655;
        double r7997657 = r7997652 + r7997656;
        return r7997657;
}


double f_of(float x) {
        float r7997658 = x;
        float r7997659 = r7997658 * r7997658;
        float r7997660 = r7997659 * r7997659;
        float r7997661 = 3;
        float r7997662 = pow(r7997658, r7997661);
        float r7997663 = r7997662 * r7997662;
        float r7997664 = r7997662 * r7997663;
        float r7997665 = r7997660 * r7997664;
        float r7997666 = 32768.0;
        float r7997667 = r7997666 * r7997658;
        float r7997668 = r7997658 * r7997667;
        float r7997669 = -1720320.0;
        float r7997670 = r7997668 + r7997669;
        float r7997671 = r7997665 * r7997670;
        float r7997672 = 1383782400.0;
        float r7997673 = r7997672 * r7997658;
        float r7997674 = r7997673 * r7997659;
        float r7997675 = r7997674 * r7997660;
        float r7997676 = -518918400.0;
        float r7997677 = r7997676 * r7997658;
        float r7997678 = r7997675 + r7997677;
        float r7997679 = -2905943040.0;
        float r7997680 = r7997658 * r7997679;
        float r7997681 = r7997680 * r7997659;
        float r7997682 = 2421619200.0;
        float r7997683 = r7997682 * r7997658;
        float r7997684 = r7997681 + r7997683;
        float r7997685 = r7997659 * r7997684;
        float r7997686 = r7997678 + r7997685;
        float r7997687 = r7997671 + r7997686;
        float r7997688 = -307507200.0;
        float r7997689 = 33546240.0;
        float r7997690 = r7997658 * r7997689;
        float r7997691 = r7997658 * r7997690;
        float r7997692 = r7997688 + r7997691;
        float r7997693 = r7997664 * r7997692;
        float r7997694 = r7997687 + r7997693;
        return r7997694;
}

double f_od(double x) {
        double r7997695 = x;
        double r7997696 = r7997695 * r7997695;
        double r7997697 = r7997696 * r7997696;
        double r7997698 = 3;
        double r7997699 = pow(r7997695, r7997698);
        double r7997700 = r7997699 * r7997699;
        double r7997701 = r7997699 * r7997700;
        double r7997702 = r7997697 * r7997701;
        double r7997703 = 32768.0;
        double r7997704 = r7997703 * r7997695;
        double r7997705 = r7997695 * r7997704;
        double r7997706 = -1720320.0;
        double r7997707 = r7997705 + r7997706;
        double r7997708 = r7997702 * r7997707;
        double r7997709 = 1383782400.0;
        double r7997710 = r7997709 * r7997695;
        double r7997711 = r7997710 * r7997696;
        double r7997712 = r7997711 * r7997697;
        double r7997713 = -518918400.0;
        double r7997714 = r7997713 * r7997695;
        double r7997715 = r7997712 + r7997714;
        double r7997716 = -2905943040.0;
        double r7997717 = r7997695 * r7997716;
        double r7997718 = r7997717 * r7997696;
        double r7997719 = 2421619200.0;
        double r7997720 = r7997719 * r7997695;
        double r7997721 = r7997718 + r7997720;
        double r7997722 = r7997696 * r7997721;
        double r7997723 = r7997715 + r7997722;
        double r7997724 = r7997708 + r7997723;
        double r7997725 = -307507200.0;
        double r7997726 = 33546240.0;
        double r7997727 = r7997695 * r7997726;
        double r7997728 = r7997695 * r7997727;
        double r7997729 = r7997725 + r7997728;
        double r7997730 = r7997701 * r7997729;
        double r7997731 = r7997724 + r7997730;
        return r7997731;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7997732, r7997733, r7997734, r7997735, r7997736, r7997737, r7997738, r7997739, r7997740, r7997741, r7997742, r7997743, r7997744, r7997745, r7997746, r7997747, r7997748, r7997749, r7997750, r7997751, r7997752, r7997753, r7997754, r7997755, r7997756, r7997757, r7997758, r7997759, r7997760, r7997761, r7997762, r7997763, r7997764, r7997765, r7997766, r7997767, r7997768, r7997769;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7997732, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7997733);
        mpfr_init(r7997734);
        mpfr_init_set_str(r7997735, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7997736);
        mpfr_init(r7997737);
        mpfr_init(r7997738);
        mpfr_init(r7997739);
        mpfr_init_set_str(r7997740, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7997741);
        mpfr_init(r7997742);
        mpfr_init(r7997743);
        mpfr_init(r7997744);
        mpfr_init_set_str(r7997745, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7997746);
        mpfr_init(r7997747);
        mpfr_init(r7997748);
        mpfr_init(r7997749);
        mpfr_init_set_str(r7997750, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r7997751);
        mpfr_init(r7997752);
        mpfr_init(r7997753);
        mpfr_init(r7997754);
        mpfr_init_set_str(r7997755, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7997756);
        mpfr_init(r7997757);
        mpfr_init(r7997758);
        mpfr_init(r7997759);
        mpfr_init_set_str(r7997760, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7997761);
        mpfr_init(r7997762);
        mpfr_init(r7997763);
        mpfr_init(r7997764);
        mpfr_init_set_str(r7997765, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7997766);
        mpfr_init(r7997767);
        mpfr_init(r7997768);
        mpfr_init(r7997769);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7997733, x, MPFR_RNDN);
        mpfr_mul(r7997734, r7997732, r7997733, MPFR_RNDN);
        ;
        mpfr_mul(r7997736, r7997733, r7997733, MPFR_RNDN);
        mpfr_mul(r7997737, r7997736, r7997733, MPFR_RNDN);
        mpfr_mul(r7997738, r7997735, r7997737, MPFR_RNDN);
        mpfr_add(r7997739, r7997734, r7997738, MPFR_RNDN);
        ;
        mpfr_mul(r7997741, r7997737, r7997733, MPFR_RNDN);
        mpfr_mul(r7997742, r7997741, r7997733, MPFR_RNDN);
        mpfr_mul(r7997743, r7997740, r7997742, MPFR_RNDN);
        mpfr_add(r7997744, r7997739, r7997743, MPFR_RNDN);
        ;
        mpfr_mul(r7997746, r7997742, r7997733, MPFR_RNDN);
        mpfr_mul(r7997747, r7997746, r7997733, MPFR_RNDN);
        mpfr_mul(r7997748, r7997745, r7997747, MPFR_RNDN);
        mpfr_add(r7997749, r7997744, r7997748, MPFR_RNDN);
        ;
        mpfr_mul(r7997751, r7997747, r7997733, MPFR_RNDN);
        mpfr_mul(r7997752, r7997751, r7997733, MPFR_RNDN);
        mpfr_mul(r7997753, r7997750, r7997752, MPFR_RNDN);
        mpfr_add(r7997754, r7997749, r7997753, MPFR_RNDN);
        ;
        mpfr_mul(r7997756, r7997752, r7997733, MPFR_RNDN);
        mpfr_mul(r7997757, r7997756, r7997733, MPFR_RNDN);
        mpfr_mul(r7997758, r7997755, r7997757, MPFR_RNDN);
        mpfr_add(r7997759, r7997754, r7997758, MPFR_RNDN);
        ;
        mpfr_mul(r7997761, r7997757, r7997733, MPFR_RNDN);
        mpfr_mul(r7997762, r7997761, r7997733, MPFR_RNDN);
        mpfr_mul(r7997763, r7997760, r7997762, MPFR_RNDN);
        mpfr_add(r7997764, r7997759, r7997763, MPFR_RNDN);
        ;
        mpfr_mul(r7997766, r7997762, r7997733, MPFR_RNDN);
        mpfr_mul(r7997767, r7997766, r7997733, MPFR_RNDN);
        mpfr_mul(r7997768, r7997765, r7997767, MPFR_RNDN);
        mpfr_add(r7997769, r7997764, r7997768, MPFR_RNDN);
        return mpfr_get_d(r7997769, MPFR_RNDN);
}

static mpfr_t r7997770, r7997771, r7997772, r7997773, r7997774, r7997775, r7997776, r7997777, r7997778, r7997779, r7997780, r7997781, r7997782, r7997783, r7997784, r7997785, r7997786, r7997787, r7997788, r7997789, r7997790, r7997791, r7997792, r7997793, r7997794, r7997795, r7997796, r7997797, r7997798, r7997799, r7997800, r7997801, r7997802, r7997803, r7997804, r7997805, r7997806;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7997770);
        mpfr_init(r7997771);
        mpfr_init(r7997772);
        mpfr_init_set_str(r7997773, "3", 10, MPFR_RNDN);
        mpfr_init(r7997774);
        mpfr_init(r7997775);
        mpfr_init(r7997776);
        mpfr_init(r7997777);
        mpfr_init_set_str(r7997778, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7997779);
        mpfr_init(r7997780);
        mpfr_init_set_str(r7997781, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7997782);
        mpfr_init(r7997783);
        mpfr_init_set_str(r7997784, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7997785);
        mpfr_init(r7997786);
        mpfr_init(r7997787);
        mpfr_init_set_str(r7997788, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7997789);
        mpfr_init(r7997790);
        mpfr_init_set_str(r7997791, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7997792);
        mpfr_init(r7997793);
        mpfr_init_set_str(r7997794, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7997795);
        mpfr_init(r7997796);
        mpfr_init(r7997797);
        mpfr_init(r7997798);
        mpfr_init(r7997799);
        mpfr_init_set_str(r7997800, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997801, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7997802);
        mpfr_init(r7997803);
        mpfr_init(r7997804);
        mpfr_init(r7997805);
        mpfr_init(r7997806);
}

double f_fm(double x) {
        mpfr_set_d(r7997770, x, MPFR_RNDN);
        mpfr_mul(r7997771, r7997770, r7997770, MPFR_RNDN);
        mpfr_mul(r7997772, r7997771, r7997771, MPFR_RNDN);
        ;
        mpfr_pow(r7997774, r7997770, r7997773, MPFR_RNDN);
        mpfr_mul(r7997775, r7997774, r7997774, MPFR_RNDN);
        mpfr_mul(r7997776, r7997774, r7997775, MPFR_RNDN);
        mpfr_mul(r7997777, r7997772, r7997776, MPFR_RNDN);
        ;
        mpfr_mul(r7997779, r7997778, r7997770, MPFR_RNDN);
        mpfr_mul(r7997780, r7997770, r7997779, MPFR_RNDN);
        ;
        mpfr_add(r7997782, r7997780, r7997781, MPFR_RNDN);
        mpfr_mul(r7997783, r7997777, r7997782, MPFR_RNDN);
        ;
        mpfr_mul(r7997785, r7997784, r7997770, MPFR_RNDN);
        mpfr_mul(r7997786, r7997785, r7997771, MPFR_RNDN);
        mpfr_mul(r7997787, r7997786, r7997772, MPFR_RNDN);
        ;
        mpfr_mul(r7997789, r7997788, r7997770, MPFR_RNDN);
        mpfr_add(r7997790, r7997787, r7997789, MPFR_RNDN);
        ;
        mpfr_mul(r7997792, r7997770, r7997791, MPFR_RNDN);
        mpfr_mul(r7997793, r7997792, r7997771, MPFR_RNDN);
        ;
        mpfr_mul(r7997795, r7997794, r7997770, MPFR_RNDN);
        mpfr_add(r7997796, r7997793, r7997795, MPFR_RNDN);
        mpfr_mul(r7997797, r7997771, r7997796, MPFR_RNDN);
        mpfr_add(r7997798, r7997790, r7997797, MPFR_RNDN);
        mpfr_add(r7997799, r7997783, r7997798, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7997802, r7997770, r7997801, MPFR_RNDN);
        mpfr_mul(r7997803, r7997770, r7997802, MPFR_RNDN);
        mpfr_add(r7997804, r7997800, r7997803, MPFR_RNDN);
        mpfr_mul(r7997805, r7997776, r7997804, MPFR_RNDN);
        mpfr_add(r7997806, r7997799, r7997805, MPFR_RNDN);
        return mpfr_get_d(r7997806, MPFR_RNDN);
}

static mpfr_t r7997807, r7997808, r7997809, r7997810, r7997811, r7997812, r7997813, r7997814, r7997815, r7997816, r7997817, r7997818, r7997819, r7997820, r7997821, r7997822, r7997823, r7997824, r7997825, r7997826, r7997827, r7997828, r7997829, r7997830, r7997831, r7997832, r7997833, r7997834, r7997835, r7997836, r7997837, r7997838, r7997839, r7997840, r7997841, r7997842, r7997843;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7997807);
        mpfr_init(r7997808);
        mpfr_init(r7997809);
        mpfr_init_set_str(r7997810, "3", 10, MPFR_RNDN);
        mpfr_init(r7997811);
        mpfr_init(r7997812);
        mpfr_init(r7997813);
        mpfr_init(r7997814);
        mpfr_init_set_str(r7997815, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7997816);
        mpfr_init(r7997817);
        mpfr_init_set_str(r7997818, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7997819);
        mpfr_init(r7997820);
        mpfr_init_set_str(r7997821, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7997822);
        mpfr_init(r7997823);
        mpfr_init(r7997824);
        mpfr_init_set_str(r7997825, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7997826);
        mpfr_init(r7997827);
        mpfr_init_set_str(r7997828, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7997829);
        mpfr_init(r7997830);
        mpfr_init_set_str(r7997831, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7997832);
        mpfr_init(r7997833);
        mpfr_init(r7997834);
        mpfr_init(r7997835);
        mpfr_init(r7997836);
        mpfr_init_set_str(r7997837, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997838, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7997839);
        mpfr_init(r7997840);
        mpfr_init(r7997841);
        mpfr_init(r7997842);
        mpfr_init(r7997843);
}

double f_dm(double x) {
        mpfr_set_d(r7997807, x, MPFR_RNDN);
        mpfr_mul(r7997808, r7997807, r7997807, MPFR_RNDN);
        mpfr_mul(r7997809, r7997808, r7997808, MPFR_RNDN);
        ;
        mpfr_pow(r7997811, r7997807, r7997810, MPFR_RNDN);
        mpfr_mul(r7997812, r7997811, r7997811, MPFR_RNDN);
        mpfr_mul(r7997813, r7997811, r7997812, MPFR_RNDN);
        mpfr_mul(r7997814, r7997809, r7997813, MPFR_RNDN);
        ;
        mpfr_mul(r7997816, r7997815, r7997807, MPFR_RNDN);
        mpfr_mul(r7997817, r7997807, r7997816, MPFR_RNDN);
        ;
        mpfr_add(r7997819, r7997817, r7997818, MPFR_RNDN);
        mpfr_mul(r7997820, r7997814, r7997819, MPFR_RNDN);
        ;
        mpfr_mul(r7997822, r7997821, r7997807, MPFR_RNDN);
        mpfr_mul(r7997823, r7997822, r7997808, MPFR_RNDN);
        mpfr_mul(r7997824, r7997823, r7997809, MPFR_RNDN);
        ;
        mpfr_mul(r7997826, r7997825, r7997807, MPFR_RNDN);
        mpfr_add(r7997827, r7997824, r7997826, MPFR_RNDN);
        ;
        mpfr_mul(r7997829, r7997807, r7997828, MPFR_RNDN);
        mpfr_mul(r7997830, r7997829, r7997808, MPFR_RNDN);
        ;
        mpfr_mul(r7997832, r7997831, r7997807, MPFR_RNDN);
        mpfr_add(r7997833, r7997830, r7997832, MPFR_RNDN);
        mpfr_mul(r7997834, r7997808, r7997833, MPFR_RNDN);
        mpfr_add(r7997835, r7997827, r7997834, MPFR_RNDN);
        mpfr_add(r7997836, r7997820, r7997835, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7997839, r7997807, r7997838, MPFR_RNDN);
        mpfr_mul(r7997840, r7997807, r7997839, MPFR_RNDN);
        mpfr_add(r7997841, r7997837, r7997840, MPFR_RNDN);
        mpfr_mul(r7997842, r7997813, r7997841, MPFR_RNDN);
        mpfr_add(r7997843, r7997836, r7997842, MPFR_RNDN);
        return mpfr_get_d(r7997843, MPFR_RNDN);
}

