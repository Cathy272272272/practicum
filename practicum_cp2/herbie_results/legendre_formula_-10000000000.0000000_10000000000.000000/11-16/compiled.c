#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r8925597 = 0.196381;
        float r8925598 = -26.707764;
        float r8925599 = x;
        float r8925600 = r8925599 * r8925599;
        float r8925601 = r8925598 * r8925600;
        float r8925602 = r8925597 + r8925601;
        float r8925603 = 592.022095;
        float r8925604 = r8925600 * r8925599;
        float r8925605 = r8925604 * r8925599;
        float r8925606 = r8925603 * r8925605;
        float r8925607 = r8925602 + r8925606;
        float r8925608 = -4972.985596;
        float r8925609 = r8925605 * r8925599;
        float r8925610 = r8925609 * r8925599;
        float r8925611 = r8925608 * r8925610;
        float r8925612 = r8925607 + r8925611;
        float r8925613 = 20424.762268;
        float r8925614 = r8925610 * r8925599;
        float r8925615 = r8925614 * r8925599;
        float r8925616 = r8925613 * r8925615;
        float r8925617 = r8925612 + r8925616;
        float r8925618 = -45388.360596;
        float r8925619 = r8925615 * r8925599;
        float r8925620 = r8925619 * r8925599;
        float r8925621 = r8925618 * r8925620;
        float r8925622 = r8925617 + r8925621;
        float r8925623 = 55703.897095;
        float r8925624 = r8925620 * r8925599;
        float r8925625 = r8925624 * r8925599;
        float r8925626 = r8925623 * r8925625;
        float r8925627 = r8925622 + r8925626;
        float r8925628 = -35503.582764;
        float r8925629 = r8925625 * r8925599;
        float r8925630 = r8925629 * r8925599;
        float r8925631 = r8925628 * r8925630;
        float r8925632 = r8925627 + r8925631;
        float r8925633 = 9171.758881;
        float r8925634 = r8925630 * r8925599;
        float r8925635 = r8925634 * r8925599;
        float r8925636 = r8925633 * r8925635;
        float r8925637 = r8925632 + r8925636;
        return r8925637;
}

double f_id(double x) {
        double r8925638 = 0.196381;
        double r8925639 = -26.707764;
        double r8925640 = x;
        double r8925641 = r8925640 * r8925640;
        double r8925642 = r8925639 * r8925641;
        double r8925643 = r8925638 + r8925642;
        double r8925644 = 592.022095;
        double r8925645 = r8925641 * r8925640;
        double r8925646 = r8925645 * r8925640;
        double r8925647 = r8925644 * r8925646;
        double r8925648 = r8925643 + r8925647;
        double r8925649 = -4972.985596;
        double r8925650 = r8925646 * r8925640;
        double r8925651 = r8925650 * r8925640;
        double r8925652 = r8925649 * r8925651;
        double r8925653 = r8925648 + r8925652;
        double r8925654 = 20424.762268;
        double r8925655 = r8925651 * r8925640;
        double r8925656 = r8925655 * r8925640;
        double r8925657 = r8925654 * r8925656;
        double r8925658 = r8925653 + r8925657;
        double r8925659 = -45388.360596;
        double r8925660 = r8925656 * r8925640;
        double r8925661 = r8925660 * r8925640;
        double r8925662 = r8925659 * r8925661;
        double r8925663 = r8925658 + r8925662;
        double r8925664 = 55703.897095;
        double r8925665 = r8925661 * r8925640;
        double r8925666 = r8925665 * r8925640;
        double r8925667 = r8925664 * r8925666;
        double r8925668 = r8925663 + r8925667;
        double r8925669 = -35503.582764;
        double r8925670 = r8925666 * r8925640;
        double r8925671 = r8925670 * r8925640;
        double r8925672 = r8925669 * r8925671;
        double r8925673 = r8925668 + r8925672;
        double r8925674 = 9171.758881;
        double r8925675 = r8925671 * r8925640;
        double r8925676 = r8925675 * r8925640;
        double r8925677 = r8925674 * r8925676;
        double r8925678 = r8925673 + r8925677;
        return r8925678;
}


double f_of(float x) {
        float r8925679 = 0.196381;
        float r8925680 = -26.707764;
        float r8925681 = x;
        float r8925682 = r8925681 * r8925681;
        float r8925683 = r8925680 * r8925682;
        float r8925684 = r8925679 + r8925683;
        float r8925685 = 592.022095;
        float r8925686 = r8925682 * r8925681;
        float r8925687 = r8925686 * r8925681;
        float r8925688 = r8925685 * r8925687;
        float r8925689 = r8925684 + r8925688;
        float r8925690 = -4972.985596;
        float r8925691 = r8925687 * r8925681;
        float r8925692 = r8925691 * r8925681;
        float r8925693 = r8925690 * r8925692;
        float r8925694 = r8925689 + r8925693;
        float r8925695 = 20424.762268;
        float r8925696 = r8925692 * r8925681;
        float r8925697 = r8925696 * r8925681;
        float r8925698 = r8925695 * r8925697;
        float r8925699 = r8925694 + r8925698;
        float r8925700 = -45388.360596;
        float r8925701 = r8925700 * r8925681;
        float r8925702 = 1;
        float r8925703 = 3;
        float r8925704 = r8925702 + r8925703;
        float r8925705 = pow(r8925682, r8925704);
        float r8925706 = r8925701 * r8925705;
        float r8925707 = r8925706 * r8925681;
        float r8925708 = r8925699 + r8925707;
        float r8925709 = 55703.897095;
        float r8925710 = r8925697 * r8925681;
        float r8925711 = r8925710 * r8925681;
        float r8925712 = r8925711 * r8925681;
        float r8925713 = r8925712 * r8925681;
        float r8925714 = r8925709 * r8925713;
        float r8925715 = r8925708 + r8925714;
        float r8925716 = -35503.582764;
        float r8925717 = r8925713 * r8925681;
        float r8925718 = r8925717 * r8925681;
        float r8925719 = r8925716 * r8925718;
        float r8925720 = r8925715 + r8925719;
        float r8925721 = 9171.758881;
        float r8925722 = r8925718 * r8925681;
        float r8925723 = r8925722 * r8925681;
        float r8925724 = r8925721 * r8925723;
        float r8925725 = r8925720 + r8925724;
        return r8925725;
}

double f_od(double x) {
        double r8925726 = 0.196381;
        double r8925727 = -26.707764;
        double r8925728 = x;
        double r8925729 = r8925728 * r8925728;
        double r8925730 = r8925727 * r8925729;
        double r8925731 = r8925726 + r8925730;
        double r8925732 = 592.022095;
        double r8925733 = r8925729 * r8925728;
        double r8925734 = r8925733 * r8925728;
        double r8925735 = r8925732 * r8925734;
        double r8925736 = r8925731 + r8925735;
        double r8925737 = -4972.985596;
        double r8925738 = r8925734 * r8925728;
        double r8925739 = r8925738 * r8925728;
        double r8925740 = r8925737 * r8925739;
        double r8925741 = r8925736 + r8925740;
        double r8925742 = 20424.762268;
        double r8925743 = r8925739 * r8925728;
        double r8925744 = r8925743 * r8925728;
        double r8925745 = r8925742 * r8925744;
        double r8925746 = r8925741 + r8925745;
        double r8925747 = -45388.360596;
        double r8925748 = r8925747 * r8925728;
        double r8925749 = 1;
        double r8925750 = 3;
        double r8925751 = r8925749 + r8925750;
        double r8925752 = pow(r8925729, r8925751);
        double r8925753 = r8925748 * r8925752;
        double r8925754 = r8925753 * r8925728;
        double r8925755 = r8925746 + r8925754;
        double r8925756 = 55703.897095;
        double r8925757 = r8925744 * r8925728;
        double r8925758 = r8925757 * r8925728;
        double r8925759 = r8925758 * r8925728;
        double r8925760 = r8925759 * r8925728;
        double r8925761 = r8925756 * r8925760;
        double r8925762 = r8925755 + r8925761;
        double r8925763 = -35503.582764;
        double r8925764 = r8925760 * r8925728;
        double r8925765 = r8925764 * r8925728;
        double r8925766 = r8925763 * r8925765;
        double r8925767 = r8925762 + r8925766;
        double r8925768 = 9171.758881;
        double r8925769 = r8925765 * r8925728;
        double r8925770 = r8925769 * r8925728;
        double r8925771 = r8925768 * r8925770;
        double r8925772 = r8925767 + r8925771;
        return r8925772;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8925773, r8925774, r8925775, r8925776, r8925777, r8925778, r8925779, r8925780, r8925781, r8925782, r8925783, r8925784, r8925785, r8925786, r8925787, r8925788, r8925789, r8925790, r8925791, r8925792, r8925793, r8925794, r8925795, r8925796, r8925797, r8925798, r8925799, r8925800, r8925801, r8925802, r8925803, r8925804, r8925805, r8925806, r8925807, r8925808, r8925809, r8925810, r8925811, r8925812, r8925813;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8925773, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r8925774, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r8925775);
        mpfr_init(r8925776);
        mpfr_init(r8925777);
        mpfr_init(r8925778);
        mpfr_init_set_str(r8925779, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r8925780);
        mpfr_init(r8925781);
        mpfr_init(r8925782);
        mpfr_init(r8925783);
        mpfr_init_set_str(r8925784, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r8925785);
        mpfr_init(r8925786);
        mpfr_init(r8925787);
        mpfr_init(r8925788);
        mpfr_init_set_str(r8925789, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r8925790);
        mpfr_init(r8925791);
        mpfr_init(r8925792);
        mpfr_init(r8925793);
        mpfr_init_set_str(r8925794, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r8925795);
        mpfr_init(r8925796);
        mpfr_init(r8925797);
        mpfr_init(r8925798);
        mpfr_init_set_str(r8925799, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r8925800);
        mpfr_init(r8925801);
        mpfr_init(r8925802);
        mpfr_init(r8925803);
        mpfr_init_set_str(r8925804, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r8925805);
        mpfr_init(r8925806);
        mpfr_init(r8925807);
        mpfr_init(r8925808);
        mpfr_init_set_str(r8925809, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r8925810);
        mpfr_init(r8925811);
        mpfr_init(r8925812);
        mpfr_init(r8925813);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8925775, x, MPFR_RNDN);
        mpfr_mul(r8925776, r8925775, r8925775, MPFR_RNDN);
        mpfr_mul(r8925777, r8925774, r8925776, MPFR_RNDN);
        mpfr_add(r8925778, r8925773, r8925777, MPFR_RNDN);
        ;
        mpfr_mul(r8925780, r8925776, r8925775, MPFR_RNDN);
        mpfr_mul(r8925781, r8925780, r8925775, MPFR_RNDN);
        mpfr_mul(r8925782, r8925779, r8925781, MPFR_RNDN);
        mpfr_add(r8925783, r8925778, r8925782, MPFR_RNDN);
        ;
        mpfr_mul(r8925785, r8925781, r8925775, MPFR_RNDN);
        mpfr_mul(r8925786, r8925785, r8925775, MPFR_RNDN);
        mpfr_mul(r8925787, r8925784, r8925786, MPFR_RNDN);
        mpfr_add(r8925788, r8925783, r8925787, MPFR_RNDN);
        ;
        mpfr_mul(r8925790, r8925786, r8925775, MPFR_RNDN);
        mpfr_mul(r8925791, r8925790, r8925775, MPFR_RNDN);
        mpfr_mul(r8925792, r8925789, r8925791, MPFR_RNDN);
        mpfr_add(r8925793, r8925788, r8925792, MPFR_RNDN);
        ;
        mpfr_mul(r8925795, r8925791, r8925775, MPFR_RNDN);
        mpfr_mul(r8925796, r8925795, r8925775, MPFR_RNDN);
        mpfr_mul(r8925797, r8925794, r8925796, MPFR_RNDN);
        mpfr_add(r8925798, r8925793, r8925797, MPFR_RNDN);
        ;
        mpfr_mul(r8925800, r8925796, r8925775, MPFR_RNDN);
        mpfr_mul(r8925801, r8925800, r8925775, MPFR_RNDN);
        mpfr_mul(r8925802, r8925799, r8925801, MPFR_RNDN);
        mpfr_add(r8925803, r8925798, r8925802, MPFR_RNDN);
        ;
        mpfr_mul(r8925805, r8925801, r8925775, MPFR_RNDN);
        mpfr_mul(r8925806, r8925805, r8925775, MPFR_RNDN);
        mpfr_mul(r8925807, r8925804, r8925806, MPFR_RNDN);
        mpfr_add(r8925808, r8925803, r8925807, MPFR_RNDN);
        ;
        mpfr_mul(r8925810, r8925806, r8925775, MPFR_RNDN);
        mpfr_mul(r8925811, r8925810, r8925775, MPFR_RNDN);
        mpfr_mul(r8925812, r8925809, r8925811, MPFR_RNDN);
        mpfr_add(r8925813, r8925808, r8925812, MPFR_RNDN);
        return mpfr_get_d(r8925813, MPFR_RNDN);
}

static mpfr_t r8925814, r8925815, r8925816, r8925817, r8925818, r8925819, r8925820, r8925821, r8925822, r8925823, r8925824, r8925825, r8925826, r8925827, r8925828, r8925829, r8925830, r8925831, r8925832, r8925833, r8925834, r8925835, r8925836, r8925837, r8925838, r8925839, r8925840, r8925841, r8925842, r8925843, r8925844, r8925845, r8925846, r8925847, r8925848, r8925849, r8925850, r8925851, r8925852, r8925853, r8925854, r8925855, r8925856, r8925857, r8925858, r8925859, r8925860;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8925814, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r8925815, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r8925816);
        mpfr_init(r8925817);
        mpfr_init(r8925818);
        mpfr_init(r8925819);
        mpfr_init_set_str(r8925820, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r8925821);
        mpfr_init(r8925822);
        mpfr_init(r8925823);
        mpfr_init(r8925824);
        mpfr_init_set_str(r8925825, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r8925826);
        mpfr_init(r8925827);
        mpfr_init(r8925828);
        mpfr_init(r8925829);
        mpfr_init_set_str(r8925830, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r8925831);
        mpfr_init(r8925832);
        mpfr_init(r8925833);
        mpfr_init(r8925834);
        mpfr_init_set_str(r8925835, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r8925836);
        mpfr_init_set_str(r8925837, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r8925838, "3", 10, MPFR_RNDN);
        mpfr_init(r8925839);
        mpfr_init(r8925840);
        mpfr_init(r8925841);
        mpfr_init(r8925842);
        mpfr_init(r8925843);
        mpfr_init_set_str(r8925844, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r8925845);
        mpfr_init(r8925846);
        mpfr_init(r8925847);
        mpfr_init(r8925848);
        mpfr_init(r8925849);
        mpfr_init(r8925850);
        mpfr_init_set_str(r8925851, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r8925852);
        mpfr_init(r8925853);
        mpfr_init(r8925854);
        mpfr_init(r8925855);
        mpfr_init_set_str(r8925856, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r8925857);
        mpfr_init(r8925858);
        mpfr_init(r8925859);
        mpfr_init(r8925860);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8925816, x, MPFR_RNDN);
        mpfr_mul(r8925817, r8925816, r8925816, MPFR_RNDN);
        mpfr_mul(r8925818, r8925815, r8925817, MPFR_RNDN);
        mpfr_add(r8925819, r8925814, r8925818, MPFR_RNDN);
        ;
        mpfr_mul(r8925821, r8925817, r8925816, MPFR_RNDN);
        mpfr_mul(r8925822, r8925821, r8925816, MPFR_RNDN);
        mpfr_mul(r8925823, r8925820, r8925822, MPFR_RNDN);
        mpfr_add(r8925824, r8925819, r8925823, MPFR_RNDN);
        ;
        mpfr_mul(r8925826, r8925822, r8925816, MPFR_RNDN);
        mpfr_mul(r8925827, r8925826, r8925816, MPFR_RNDN);
        mpfr_mul(r8925828, r8925825, r8925827, MPFR_RNDN);
        mpfr_add(r8925829, r8925824, r8925828, MPFR_RNDN);
        ;
        mpfr_mul(r8925831, r8925827, r8925816, MPFR_RNDN);
        mpfr_mul(r8925832, r8925831, r8925816, MPFR_RNDN);
        mpfr_mul(r8925833, r8925830, r8925832, MPFR_RNDN);
        mpfr_add(r8925834, r8925829, r8925833, MPFR_RNDN);
        ;
        mpfr_mul(r8925836, r8925835, r8925816, MPFR_RNDN);
        ;
        ;
        mpfr_add(r8925839, r8925837, r8925838, MPFR_RNDN);
        mpfr_pow(r8925840, r8925817, r8925839, MPFR_RNDN);
        mpfr_mul(r8925841, r8925836, r8925840, MPFR_RNDN);
        mpfr_mul(r8925842, r8925841, r8925816, MPFR_RNDN);
        mpfr_add(r8925843, r8925834, r8925842, MPFR_RNDN);
        ;
        mpfr_mul(r8925845, r8925832, r8925816, MPFR_RNDN);
        mpfr_mul(r8925846, r8925845, r8925816, MPFR_RNDN);
        mpfr_mul(r8925847, r8925846, r8925816, MPFR_RNDN);
        mpfr_mul(r8925848, r8925847, r8925816, MPFR_RNDN);
        mpfr_mul(r8925849, r8925844, r8925848, MPFR_RNDN);
        mpfr_add(r8925850, r8925843, r8925849, MPFR_RNDN);
        ;
        mpfr_mul(r8925852, r8925848, r8925816, MPFR_RNDN);
        mpfr_mul(r8925853, r8925852, r8925816, MPFR_RNDN);
        mpfr_mul(r8925854, r8925851, r8925853, MPFR_RNDN);
        mpfr_add(r8925855, r8925850, r8925854, MPFR_RNDN);
        ;
        mpfr_mul(r8925857, r8925853, r8925816, MPFR_RNDN);
        mpfr_mul(r8925858, r8925857, r8925816, MPFR_RNDN);
        mpfr_mul(r8925859, r8925856, r8925858, MPFR_RNDN);
        mpfr_add(r8925860, r8925855, r8925859, MPFR_RNDN);
        return mpfr_get_d(r8925860, MPFR_RNDN);
}

static mpfr_t r8925861, r8925862, r8925863, r8925864, r8925865, r8925866, r8925867, r8925868, r8925869, r8925870, r8925871, r8925872, r8925873, r8925874, r8925875, r8925876, r8925877, r8925878, r8925879, r8925880, r8925881, r8925882, r8925883, r8925884, r8925885, r8925886, r8925887, r8925888, r8925889, r8925890, r8925891, r8925892, r8925893, r8925894, r8925895, r8925896, r8925897, r8925898, r8925899, r8925900, r8925901, r8925902, r8925903, r8925904, r8925905, r8925906, r8925907;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8925861, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r8925862, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r8925863);
        mpfr_init(r8925864);
        mpfr_init(r8925865);
        mpfr_init(r8925866);
        mpfr_init_set_str(r8925867, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r8925868);
        mpfr_init(r8925869);
        mpfr_init(r8925870);
        mpfr_init(r8925871);
        mpfr_init_set_str(r8925872, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r8925873);
        mpfr_init(r8925874);
        mpfr_init(r8925875);
        mpfr_init(r8925876);
        mpfr_init_set_str(r8925877, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r8925878);
        mpfr_init(r8925879);
        mpfr_init(r8925880);
        mpfr_init(r8925881);
        mpfr_init_set_str(r8925882, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r8925883);
        mpfr_init_set_str(r8925884, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r8925885, "3", 10, MPFR_RNDN);
        mpfr_init(r8925886);
        mpfr_init(r8925887);
        mpfr_init(r8925888);
        mpfr_init(r8925889);
        mpfr_init(r8925890);
        mpfr_init_set_str(r8925891, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r8925892);
        mpfr_init(r8925893);
        mpfr_init(r8925894);
        mpfr_init(r8925895);
        mpfr_init(r8925896);
        mpfr_init(r8925897);
        mpfr_init_set_str(r8925898, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r8925899);
        mpfr_init(r8925900);
        mpfr_init(r8925901);
        mpfr_init(r8925902);
        mpfr_init_set_str(r8925903, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r8925904);
        mpfr_init(r8925905);
        mpfr_init(r8925906);
        mpfr_init(r8925907);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8925863, x, MPFR_RNDN);
        mpfr_mul(r8925864, r8925863, r8925863, MPFR_RNDN);
        mpfr_mul(r8925865, r8925862, r8925864, MPFR_RNDN);
        mpfr_add(r8925866, r8925861, r8925865, MPFR_RNDN);
        ;
        mpfr_mul(r8925868, r8925864, r8925863, MPFR_RNDN);
        mpfr_mul(r8925869, r8925868, r8925863, MPFR_RNDN);
        mpfr_mul(r8925870, r8925867, r8925869, MPFR_RNDN);
        mpfr_add(r8925871, r8925866, r8925870, MPFR_RNDN);
        ;
        mpfr_mul(r8925873, r8925869, r8925863, MPFR_RNDN);
        mpfr_mul(r8925874, r8925873, r8925863, MPFR_RNDN);
        mpfr_mul(r8925875, r8925872, r8925874, MPFR_RNDN);
        mpfr_add(r8925876, r8925871, r8925875, MPFR_RNDN);
        ;
        mpfr_mul(r8925878, r8925874, r8925863, MPFR_RNDN);
        mpfr_mul(r8925879, r8925878, r8925863, MPFR_RNDN);
        mpfr_mul(r8925880, r8925877, r8925879, MPFR_RNDN);
        mpfr_add(r8925881, r8925876, r8925880, MPFR_RNDN);
        ;
        mpfr_mul(r8925883, r8925882, r8925863, MPFR_RNDN);
        ;
        ;
        mpfr_add(r8925886, r8925884, r8925885, MPFR_RNDN);
        mpfr_pow(r8925887, r8925864, r8925886, MPFR_RNDN);
        mpfr_mul(r8925888, r8925883, r8925887, MPFR_RNDN);
        mpfr_mul(r8925889, r8925888, r8925863, MPFR_RNDN);
        mpfr_add(r8925890, r8925881, r8925889, MPFR_RNDN);
        ;
        mpfr_mul(r8925892, r8925879, r8925863, MPFR_RNDN);
        mpfr_mul(r8925893, r8925892, r8925863, MPFR_RNDN);
        mpfr_mul(r8925894, r8925893, r8925863, MPFR_RNDN);
        mpfr_mul(r8925895, r8925894, r8925863, MPFR_RNDN);
        mpfr_mul(r8925896, r8925891, r8925895, MPFR_RNDN);
        mpfr_add(r8925897, r8925890, r8925896, MPFR_RNDN);
        ;
        mpfr_mul(r8925899, r8925895, r8925863, MPFR_RNDN);
        mpfr_mul(r8925900, r8925899, r8925863, MPFR_RNDN);
        mpfr_mul(r8925901, r8925898, r8925900, MPFR_RNDN);
        mpfr_add(r8925902, r8925897, r8925901, MPFR_RNDN);
        ;
        mpfr_mul(r8925904, r8925900, r8925863, MPFR_RNDN);
        mpfr_mul(r8925905, r8925904, r8925863, MPFR_RNDN);
        mpfr_mul(r8925906, r8925903, r8925905, MPFR_RNDN);
        mpfr_add(r8925907, r8925902, r8925906, MPFR_RNDN);
        return mpfr_get_d(r8925907, MPFR_RNDN);
}
