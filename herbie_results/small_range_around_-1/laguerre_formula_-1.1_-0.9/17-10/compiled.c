#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r20716552 = 1.0;
        float r20716553 = -10.0;
        float r20716554 = x;
        float r20716555 = r20716553 * r20716554;
        float r20716556 = r20716552 + r20716555;
        float r20716557 = 22.5;
        float r20716558 = r20716554 * r20716554;
        float r20716559 = r20716557 * r20716558;
        float r20716560 = r20716556 + r20716559;
        float r20716561 = -20.0;
        float r20716562 = r20716558 * r20716554;
        float r20716563 = r20716561 * r20716562;
        float r20716564 = r20716560 + r20716563;
        float r20716565 = 8.75;
        float r20716566 = r20716562 * r20716554;
        float r20716567 = r20716565 * r20716566;
        float r20716568 = r20716564 + r20716567;
        float r20716569 = -2.1;
        float r20716570 = r20716566 * r20716554;
        float r20716571 = r20716569 * r20716570;
        float r20716572 = r20716568 + r20716571;
        float r20716573 = 0.291667;
        float r20716574 = r20716570 * r20716554;
        float r20716575 = r20716573 * r20716574;
        float r20716576 = r20716572 + r20716575;
        float r20716577 = -0.02381;
        float r20716578 = r20716574 * r20716554;
        float r20716579 = r20716577 * r20716578;
        float r20716580 = r20716576 + r20716579;
        float r20716581 = 0.001116;
        float r20716582 = r20716578 * r20716554;
        float r20716583 = r20716581 * r20716582;
        float r20716584 = r20716580 + r20716583;
        float r20716585 = -2.8e-05;
        float r20716586 = r20716582 * r20716554;
        float r20716587 = r20716585 * r20716586;
        float r20716588 = r20716584 + r20716587;
        return r20716588;
}

double f_id(double x) {
        double r20716589 = 1.0;
        double r20716590 = -10.0;
        double r20716591 = x;
        double r20716592 = r20716590 * r20716591;
        double r20716593 = r20716589 + r20716592;
        double r20716594 = 22.5;
        double r20716595 = r20716591 * r20716591;
        double r20716596 = r20716594 * r20716595;
        double r20716597 = r20716593 + r20716596;
        double r20716598 = -20.0;
        double r20716599 = r20716595 * r20716591;
        double r20716600 = r20716598 * r20716599;
        double r20716601 = r20716597 + r20716600;
        double r20716602 = 8.75;
        double r20716603 = r20716599 * r20716591;
        double r20716604 = r20716602 * r20716603;
        double r20716605 = r20716601 + r20716604;
        double r20716606 = -2.1;
        double r20716607 = r20716603 * r20716591;
        double r20716608 = r20716606 * r20716607;
        double r20716609 = r20716605 + r20716608;
        double r20716610 = 0.291667;
        double r20716611 = r20716607 * r20716591;
        double r20716612 = r20716610 * r20716611;
        double r20716613 = r20716609 + r20716612;
        double r20716614 = -0.02381;
        double r20716615 = r20716611 * r20716591;
        double r20716616 = r20716614 * r20716615;
        double r20716617 = r20716613 + r20716616;
        double r20716618 = 0.001116;
        double r20716619 = r20716615 * r20716591;
        double r20716620 = r20716618 * r20716619;
        double r20716621 = r20716617 + r20716620;
        double r20716622 = -2.8e-05;
        double r20716623 = r20716619 * r20716591;
        double r20716624 = r20716622 * r20716623;
        double r20716625 = r20716621 + r20716624;
        return r20716625;
}


double f_of(float x) {
        float r20716626 = x;
        float r20716627 = -2.8e-05;
        float r20716628 = r20716626 * r20716627;
        float r20716629 = 0.001116;
        float r20716630 = r20716628 + r20716629;
        float r20716631 = r20716626 * r20716626;
        float r20716632 = r20716631 * r20716631;
        float r20716633 = r20716630 * r20716632;
        float r20716634 = 4;
        float r20716635 = pow(r20716626, r20716634);
        float r20716636 = r20716633 * r20716635;
        float r20716637 = 22.5;
        float r20716638 = -20.0;
        float r20716639 = r20716638 * r20716626;
        float r20716640 = r20716637 + r20716639;
        float r20716641 = r20716631 * r20716640;
        float r20716642 = 1.0;
        float r20716643 = -10.0;
        float r20716644 = r20716643 * r20716626;
        float r20716645 = r20716642 + r20716644;
        float r20716646 = r20716641 + r20716645;
        float r20716647 = r20716636 + r20716646;
        float r20716648 = 0.291667;
        float r20716649 = -0.02381;
        float r20716650 = r20716626 * r20716649;
        float r20716651 = r20716648 - r20716650;
        float r20716652 = r20716648 * r20716651;
        float r20716653 = r20716650 * r20716650;
        float r20716654 = r20716652 + r20716653;
        float r20716655 = 8.75;
        float r20716656 = 3;
        float r20716657 = pow(r20716655, r20716656);
        float r20716658 = -2.1;
        float r20716659 = r20716658 * r20716626;
        float r20716660 = pow(r20716659, r20716656);
        float r20716661 = r20716657 + r20716660;
        float r20716662 = r20716654 * r20716661;
        float r20716663 = r20716659 * r20716659;
        float r20716664 = r20716655 - r20716659;
        float r20716665 = r20716664 * r20716655;
        float r20716666 = r20716663 + r20716665;
        float r20716667 = pow(r20716648, r20716656);
        float r20716668 = pow(r20716650, r20716656);
        float r20716669 = r20716667 + r20716668;
        float r20716670 = r20716631 * r20716669;
        float r20716671 = r20716666 * r20716670;
        float r20716672 = r20716662 + r20716671;
        float r20716673 = cbrt(r20716672);
        float r20716674 = 2;
        float r20716675 = r20716674 + r20716674;
        float r20716676 = pow(r20716626, r20716675);
        float r20716677 = r20716626 * r20716648;
        float r20716678 = r20716677 * r20716626;
        float r20716679 = r20716655 + r20716659;
        float r20716680 = r20716678 + r20716679;
        float r20716681 = r20716680 * r20716680;
        float r20716682 = r20716631 * r20716650;
        float r20716683 = r20716682 * r20716682;
        float r20716684 = r20716681 - r20716683;
        float r20716685 = cbrt(r20716684);
        float r20716686 = r20716650 + r20716648;
        float r20716687 = r20716686 * r20716631;
        float r20716688 = r20716687 + r20716679;
        float r20716689 = r20716687 - r20716679;
        float r20716690 = r20716688 * r20716689;
        float r20716691 = cbrt(r20716690);
        float r20716692 = r20716685 * r20716691;
        float r20716693 = r20716676 * r20716692;
        float r20716694 = r20716673 * r20716693;
        float r20716695 = r20716649 * r20716626;
        float r20716696 = r20716648 + r20716695;
        float r20716697 = r20716696 * r20716631;
        float r20716698 = r20716697 - r20716679;
        float r20716699 = cbrt(r20716698);
        float r20716700 = r20716648 - r20716695;
        float r20716701 = r20716631 * r20716700;
        float r20716702 = r20716701 + r20716679;
        float r20716703 = cbrt(r20716702);
        float r20716704 = r20716699 * r20716703;
        float r20716705 = r20716665 + r20716663;
        float r20716706 = r20716695 * r20716695;
        float r20716707 = r20716700 * r20716648;
        float r20716708 = r20716706 + r20716707;
        float r20716709 = r20716705 * r20716708;
        float r20716710 = cbrt(r20716709);
        float r20716711 = r20716704 * r20716710;
        float r20716712 = r20716694 / r20716711;
        float r20716713 = r20716647 + r20716712;
        return r20716713;
}

double f_od(double x) {
        double r20716714 = x;
        double r20716715 = -2.8e-05;
        double r20716716 = r20716714 * r20716715;
        double r20716717 = 0.001116;
        double r20716718 = r20716716 + r20716717;
        double r20716719 = r20716714 * r20716714;
        double r20716720 = r20716719 * r20716719;
        double r20716721 = r20716718 * r20716720;
        double r20716722 = 4;
        double r20716723 = pow(r20716714, r20716722);
        double r20716724 = r20716721 * r20716723;
        double r20716725 = 22.5;
        double r20716726 = -20.0;
        double r20716727 = r20716726 * r20716714;
        double r20716728 = r20716725 + r20716727;
        double r20716729 = r20716719 * r20716728;
        double r20716730 = 1.0;
        double r20716731 = -10.0;
        double r20716732 = r20716731 * r20716714;
        double r20716733 = r20716730 + r20716732;
        double r20716734 = r20716729 + r20716733;
        double r20716735 = r20716724 + r20716734;
        double r20716736 = 0.291667;
        double r20716737 = -0.02381;
        double r20716738 = r20716714 * r20716737;
        double r20716739 = r20716736 - r20716738;
        double r20716740 = r20716736 * r20716739;
        double r20716741 = r20716738 * r20716738;
        double r20716742 = r20716740 + r20716741;
        double r20716743 = 8.75;
        double r20716744 = 3;
        double r20716745 = pow(r20716743, r20716744);
        double r20716746 = -2.1;
        double r20716747 = r20716746 * r20716714;
        double r20716748 = pow(r20716747, r20716744);
        double r20716749 = r20716745 + r20716748;
        double r20716750 = r20716742 * r20716749;
        double r20716751 = r20716747 * r20716747;
        double r20716752 = r20716743 - r20716747;
        double r20716753 = r20716752 * r20716743;
        double r20716754 = r20716751 + r20716753;
        double r20716755 = pow(r20716736, r20716744);
        double r20716756 = pow(r20716738, r20716744);
        double r20716757 = r20716755 + r20716756;
        double r20716758 = r20716719 * r20716757;
        double r20716759 = r20716754 * r20716758;
        double r20716760 = r20716750 + r20716759;
        double r20716761 = cbrt(r20716760);
        double r20716762 = 2;
        double r20716763 = r20716762 + r20716762;
        double r20716764 = pow(r20716714, r20716763);
        double r20716765 = r20716714 * r20716736;
        double r20716766 = r20716765 * r20716714;
        double r20716767 = r20716743 + r20716747;
        double r20716768 = r20716766 + r20716767;
        double r20716769 = r20716768 * r20716768;
        double r20716770 = r20716719 * r20716738;
        double r20716771 = r20716770 * r20716770;
        double r20716772 = r20716769 - r20716771;
        double r20716773 = cbrt(r20716772);
        double r20716774 = r20716738 + r20716736;
        double r20716775 = r20716774 * r20716719;
        double r20716776 = r20716775 + r20716767;
        double r20716777 = r20716775 - r20716767;
        double r20716778 = r20716776 * r20716777;
        double r20716779 = cbrt(r20716778);
        double r20716780 = r20716773 * r20716779;
        double r20716781 = r20716764 * r20716780;
        double r20716782 = r20716761 * r20716781;
        double r20716783 = r20716737 * r20716714;
        double r20716784 = r20716736 + r20716783;
        double r20716785 = r20716784 * r20716719;
        double r20716786 = r20716785 - r20716767;
        double r20716787 = cbrt(r20716786);
        double r20716788 = r20716736 - r20716783;
        double r20716789 = r20716719 * r20716788;
        double r20716790 = r20716789 + r20716767;
        double r20716791 = cbrt(r20716790);
        double r20716792 = r20716787 * r20716791;
        double r20716793 = r20716753 + r20716751;
        double r20716794 = r20716783 * r20716783;
        double r20716795 = r20716788 * r20716736;
        double r20716796 = r20716794 + r20716795;
        double r20716797 = r20716793 * r20716796;
        double r20716798 = cbrt(r20716797);
        double r20716799 = r20716792 * r20716798;
        double r20716800 = r20716782 / r20716799;
        double r20716801 = r20716735 + r20716800;
        return r20716801;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20716802, r20716803, r20716804, r20716805, r20716806, r20716807, r20716808, r20716809, r20716810, r20716811, r20716812, r20716813, r20716814, r20716815, r20716816, r20716817, r20716818, r20716819, r20716820, r20716821, r20716822, r20716823, r20716824, r20716825, r20716826, r20716827, r20716828, r20716829, r20716830, r20716831, r20716832, r20716833, r20716834, r20716835, r20716836, r20716837, r20716838;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20716802, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716803, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r20716804);
        mpfr_init(r20716805);
        mpfr_init(r20716806);
        mpfr_init_set_str(r20716807, "22.5", 10, MPFR_RNDN);
        mpfr_init(r20716808);
        mpfr_init(r20716809);
        mpfr_init(r20716810);
        mpfr_init_set_str(r20716811, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r20716812);
        mpfr_init(r20716813);
        mpfr_init(r20716814);
        mpfr_init_set_str(r20716815, "8.75", 10, MPFR_RNDN);
        mpfr_init(r20716816);
        mpfr_init(r20716817);
        mpfr_init(r20716818);
        mpfr_init_set_str(r20716819, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r20716820);
        mpfr_init(r20716821);
        mpfr_init(r20716822);
        mpfr_init_set_str(r20716823, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r20716824);
        mpfr_init(r20716825);
        mpfr_init(r20716826);
        mpfr_init_set_str(r20716827, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r20716828);
        mpfr_init(r20716829);
        mpfr_init(r20716830);
        mpfr_init_set_str(r20716831, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r20716832);
        mpfr_init(r20716833);
        mpfr_init(r20716834);
        mpfr_init_set_str(r20716835, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r20716836);
        mpfr_init(r20716837);
        mpfr_init(r20716838);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20716804, x, MPFR_RNDN);
        mpfr_mul(r20716805, r20716803, r20716804, MPFR_RNDN);
        mpfr_add(r20716806, r20716802, r20716805, MPFR_RNDN);
        ;
        mpfr_mul(r20716808, r20716804, r20716804, MPFR_RNDN);
        mpfr_mul(r20716809, r20716807, r20716808, MPFR_RNDN);
        mpfr_add(r20716810, r20716806, r20716809, MPFR_RNDN);
        ;
        mpfr_mul(r20716812, r20716808, r20716804, MPFR_RNDN);
        mpfr_mul(r20716813, r20716811, r20716812, MPFR_RNDN);
        mpfr_add(r20716814, r20716810, r20716813, MPFR_RNDN);
        ;
        mpfr_mul(r20716816, r20716812, r20716804, MPFR_RNDN);
        mpfr_mul(r20716817, r20716815, r20716816, MPFR_RNDN);
        mpfr_add(r20716818, r20716814, r20716817, MPFR_RNDN);
        ;
        mpfr_mul(r20716820, r20716816, r20716804, MPFR_RNDN);
        mpfr_mul(r20716821, r20716819, r20716820, MPFR_RNDN);
        mpfr_add(r20716822, r20716818, r20716821, MPFR_RNDN);
        ;
        mpfr_mul(r20716824, r20716820, r20716804, MPFR_RNDN);
        mpfr_mul(r20716825, r20716823, r20716824, MPFR_RNDN);
        mpfr_add(r20716826, r20716822, r20716825, MPFR_RNDN);
        ;
        mpfr_mul(r20716828, r20716824, r20716804, MPFR_RNDN);
        mpfr_mul(r20716829, r20716827, r20716828, MPFR_RNDN);
        mpfr_add(r20716830, r20716826, r20716829, MPFR_RNDN);
        ;
        mpfr_mul(r20716832, r20716828, r20716804, MPFR_RNDN);
        mpfr_mul(r20716833, r20716831, r20716832, MPFR_RNDN);
        mpfr_add(r20716834, r20716830, r20716833, MPFR_RNDN);
        ;
        mpfr_mul(r20716836, r20716832, r20716804, MPFR_RNDN);
        mpfr_mul(r20716837, r20716835, r20716836, MPFR_RNDN);
        mpfr_add(r20716838, r20716834, r20716837, MPFR_RNDN);
        return mpfr_get_d(r20716838, MPFR_RNDN);
}

static mpfr_t r20716839, r20716840, r20716841, r20716842, r20716843, r20716844, r20716845, r20716846, r20716847, r20716848, r20716849, r20716850, r20716851, r20716852, r20716853, r20716854, r20716855, r20716856, r20716857, r20716858, r20716859, r20716860, r20716861, r20716862, r20716863, r20716864, r20716865, r20716866, r20716867, r20716868, r20716869, r20716870, r20716871, r20716872, r20716873, r20716874, r20716875, r20716876, r20716877, r20716878, r20716879, r20716880, r20716881, r20716882, r20716883, r20716884, r20716885, r20716886, r20716887, r20716888, r20716889, r20716890, r20716891, r20716892, r20716893, r20716894, r20716895, r20716896, r20716897, r20716898, r20716899, r20716900, r20716901, r20716902, r20716903, r20716904, r20716905, r20716906, r20716907, r20716908, r20716909, r20716910, r20716911, r20716912, r20716913, r20716914, r20716915, r20716916, r20716917, r20716918, r20716919, r20716920, r20716921, r20716922, r20716923, r20716924, r20716925, r20716926;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r20716839);
        mpfr_init_set_str(r20716840, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r20716841);
        mpfr_init_set_str(r20716842, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r20716843);
        mpfr_init(r20716844);
        mpfr_init(r20716845);
        mpfr_init(r20716846);
        mpfr_init_set_str(r20716847, "4", 10, MPFR_RNDN);
        mpfr_init(r20716848);
        mpfr_init(r20716849);
        mpfr_init_set_str(r20716850, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716851, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r20716852);
        mpfr_init(r20716853);
        mpfr_init(r20716854);
        mpfr_init_set_str(r20716855, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716856, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r20716857);
        mpfr_init(r20716858);
        mpfr_init(r20716859);
        mpfr_init(r20716860);
        mpfr_init_set_str(r20716861, "0.291667", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716862, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r20716863);
        mpfr_init(r20716864);
        mpfr_init(r20716865);
        mpfr_init(r20716866);
        mpfr_init(r20716867);
        mpfr_init_set_str(r20716868, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716869, "3", 10, MPFR_RNDN);
        mpfr_init(r20716870);
        mpfr_init_set_str(r20716871, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r20716872);
        mpfr_init(r20716873);
        mpfr_init(r20716874);
        mpfr_init(r20716875);
        mpfr_init(r20716876);
        mpfr_init(r20716877);
        mpfr_init(r20716878);
        mpfr_init(r20716879);
        mpfr_init(r20716880);
        mpfr_init(r20716881);
        mpfr_init(r20716882);
        mpfr_init(r20716883);
        mpfr_init(r20716884);
        mpfr_init(r20716885);
        mpfr_init(r20716886);
        mpfr_init_set_str(r20716887, "2", 10, MPFR_RNDN);
        mpfr_init(r20716888);
        mpfr_init(r20716889);
        mpfr_init(r20716890);
        mpfr_init(r20716891);
        mpfr_init(r20716892);
        mpfr_init(r20716893);
        mpfr_init(r20716894);
        mpfr_init(r20716895);
        mpfr_init(r20716896);
        mpfr_init(r20716897);
        mpfr_init(r20716898);
        mpfr_init(r20716899);
        mpfr_init(r20716900);
        mpfr_init(r20716901);
        mpfr_init(r20716902);
        mpfr_init(r20716903);
        mpfr_init(r20716904);
        mpfr_init(r20716905);
        mpfr_init(r20716906);
        mpfr_init(r20716907);
        mpfr_init(r20716908);
        mpfr_init(r20716909);
        mpfr_init(r20716910);
        mpfr_init(r20716911);
        mpfr_init(r20716912);
        mpfr_init(r20716913);
        mpfr_init(r20716914);
        mpfr_init(r20716915);
        mpfr_init(r20716916);
        mpfr_init(r20716917);
        mpfr_init(r20716918);
        mpfr_init(r20716919);
        mpfr_init(r20716920);
        mpfr_init(r20716921);
        mpfr_init(r20716922);
        mpfr_init(r20716923);
        mpfr_init(r20716924);
        mpfr_init(r20716925);
        mpfr_init(r20716926);
}

double f_fm(double x) {
        mpfr_set_d(r20716839, x, MPFR_RNDN);
        ;
        mpfr_mul(r20716841, r20716839, r20716840, MPFR_RNDN);
        ;
        mpfr_add(r20716843, r20716841, r20716842, MPFR_RNDN);
        mpfr_mul(r20716844, r20716839, r20716839, MPFR_RNDN);
        mpfr_mul(r20716845, r20716844, r20716844, MPFR_RNDN);
        mpfr_mul(r20716846, r20716843, r20716845, MPFR_RNDN);
        ;
        mpfr_pow(r20716848, r20716839, r20716847, MPFR_RNDN);
        mpfr_mul(r20716849, r20716846, r20716848, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20716852, r20716851, r20716839, MPFR_RNDN);
        mpfr_add(r20716853, r20716850, r20716852, MPFR_RNDN);
        mpfr_mul(r20716854, r20716844, r20716853, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20716857, r20716856, r20716839, MPFR_RNDN);
        mpfr_add(r20716858, r20716855, r20716857, MPFR_RNDN);
        mpfr_add(r20716859, r20716854, r20716858, MPFR_RNDN);
        mpfr_add(r20716860, r20716849, r20716859, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20716863, r20716839, r20716862, MPFR_RNDN);
        mpfr_sub(r20716864, r20716861, r20716863, MPFR_RNDN);
        mpfr_mul(r20716865, r20716861, r20716864, MPFR_RNDN);
        mpfr_mul(r20716866, r20716863, r20716863, MPFR_RNDN);
        mpfr_add(r20716867, r20716865, r20716866, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r20716870, r20716868, r20716869, MPFR_RNDN);
        ;
        mpfr_mul(r20716872, r20716871, r20716839, MPFR_RNDN);
        mpfr_pow(r20716873, r20716872, r20716869, MPFR_RNDN);
        mpfr_add(r20716874, r20716870, r20716873, MPFR_RNDN);
        mpfr_mul(r20716875, r20716867, r20716874, MPFR_RNDN);
        mpfr_mul(r20716876, r20716872, r20716872, MPFR_RNDN);
        mpfr_sub(r20716877, r20716868, r20716872, MPFR_RNDN);
        mpfr_mul(r20716878, r20716877, r20716868, MPFR_RNDN);
        mpfr_add(r20716879, r20716876, r20716878, MPFR_RNDN);
        mpfr_pow(r20716880, r20716861, r20716869, MPFR_RNDN);
        mpfr_pow(r20716881, r20716863, r20716869, MPFR_RNDN);
        mpfr_add(r20716882, r20716880, r20716881, MPFR_RNDN);
        mpfr_mul(r20716883, r20716844, r20716882, MPFR_RNDN);
        mpfr_mul(r20716884, r20716879, r20716883, MPFR_RNDN);
        mpfr_add(r20716885, r20716875, r20716884, MPFR_RNDN);
        mpfr_cbrt(r20716886, r20716885, MPFR_RNDN);
        ;
        mpfr_add(r20716888, r20716887, r20716887, MPFR_RNDN);
        mpfr_pow(r20716889, r20716839, r20716888, MPFR_RNDN);
        mpfr_mul(r20716890, r20716839, r20716861, MPFR_RNDN);
        mpfr_mul(r20716891, r20716890, r20716839, MPFR_RNDN);
        mpfr_add(r20716892, r20716868, r20716872, MPFR_RNDN);
        mpfr_add(r20716893, r20716891, r20716892, MPFR_RNDN);
        mpfr_mul(r20716894, r20716893, r20716893, MPFR_RNDN);
        mpfr_mul(r20716895, r20716844, r20716863, MPFR_RNDN);
        mpfr_mul(r20716896, r20716895, r20716895, MPFR_RNDN);
        mpfr_sub(r20716897, r20716894, r20716896, MPFR_RNDN);
        mpfr_cbrt(r20716898, r20716897, MPFR_RNDN);
        mpfr_add(r20716899, r20716863, r20716861, MPFR_RNDN);
        mpfr_mul(r20716900, r20716899, r20716844, MPFR_RNDN);
        mpfr_add(r20716901, r20716900, r20716892, MPFR_RNDN);
        mpfr_sub(r20716902, r20716900, r20716892, MPFR_RNDN);
        mpfr_mul(r20716903, r20716901, r20716902, MPFR_RNDN);
        mpfr_cbrt(r20716904, r20716903, MPFR_RNDN);
        mpfr_mul(r20716905, r20716898, r20716904, MPFR_RNDN);
        mpfr_mul(r20716906, r20716889, r20716905, MPFR_RNDN);
        mpfr_mul(r20716907, r20716886, r20716906, MPFR_RNDN);
        mpfr_mul(r20716908, r20716862, r20716839, MPFR_RNDN);
        mpfr_add(r20716909, r20716861, r20716908, MPFR_RNDN);
        mpfr_mul(r20716910, r20716909, r20716844, MPFR_RNDN);
        mpfr_sub(r20716911, r20716910, r20716892, MPFR_RNDN);
        mpfr_cbrt(r20716912, r20716911, MPFR_RNDN);
        mpfr_sub(r20716913, r20716861, r20716908, MPFR_RNDN);
        mpfr_mul(r20716914, r20716844, r20716913, MPFR_RNDN);
        mpfr_add(r20716915, r20716914, r20716892, MPFR_RNDN);
        mpfr_cbrt(r20716916, r20716915, MPFR_RNDN);
        mpfr_mul(r20716917, r20716912, r20716916, MPFR_RNDN);
        mpfr_add(r20716918, r20716878, r20716876, MPFR_RNDN);
        mpfr_mul(r20716919, r20716908, r20716908, MPFR_RNDN);
        mpfr_mul(r20716920, r20716913, r20716861, MPFR_RNDN);
        mpfr_add(r20716921, r20716919, r20716920, MPFR_RNDN);
        mpfr_mul(r20716922, r20716918, r20716921, MPFR_RNDN);
        mpfr_cbrt(r20716923, r20716922, MPFR_RNDN);
        mpfr_mul(r20716924, r20716917, r20716923, MPFR_RNDN);
        mpfr_div(r20716925, r20716907, r20716924, MPFR_RNDN);
        mpfr_add(r20716926, r20716860, r20716925, MPFR_RNDN);
        return mpfr_get_d(r20716926, MPFR_RNDN);
}

static mpfr_t r20716927, r20716928, r20716929, r20716930, r20716931, r20716932, r20716933, r20716934, r20716935, r20716936, r20716937, r20716938, r20716939, r20716940, r20716941, r20716942, r20716943, r20716944, r20716945, r20716946, r20716947, r20716948, r20716949, r20716950, r20716951, r20716952, r20716953, r20716954, r20716955, r20716956, r20716957, r20716958, r20716959, r20716960, r20716961, r20716962, r20716963, r20716964, r20716965, r20716966, r20716967, r20716968, r20716969, r20716970, r20716971, r20716972, r20716973, r20716974, r20716975, r20716976, r20716977, r20716978, r20716979, r20716980, r20716981, r20716982, r20716983, r20716984, r20716985, r20716986, r20716987, r20716988, r20716989, r20716990, r20716991, r20716992, r20716993, r20716994, r20716995, r20716996, r20716997, r20716998, r20716999, r20717000, r20717001, r20717002, r20717003, r20717004, r20717005, r20717006, r20717007, r20717008, r20717009, r20717010, r20717011, r20717012, r20717013, r20717014;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r20716927);
        mpfr_init_set_str(r20716928, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r20716929);
        mpfr_init_set_str(r20716930, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r20716931);
        mpfr_init(r20716932);
        mpfr_init(r20716933);
        mpfr_init(r20716934);
        mpfr_init_set_str(r20716935, "4", 10, MPFR_RNDN);
        mpfr_init(r20716936);
        mpfr_init(r20716937);
        mpfr_init_set_str(r20716938, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716939, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r20716940);
        mpfr_init(r20716941);
        mpfr_init(r20716942);
        mpfr_init_set_str(r20716943, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716944, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r20716945);
        mpfr_init(r20716946);
        mpfr_init(r20716947);
        mpfr_init(r20716948);
        mpfr_init_set_str(r20716949, "0.291667", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716950, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r20716951);
        mpfr_init(r20716952);
        mpfr_init(r20716953);
        mpfr_init(r20716954);
        mpfr_init(r20716955);
        mpfr_init_set_str(r20716956, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r20716957, "3", 10, MPFR_RNDN);
        mpfr_init(r20716958);
        mpfr_init_set_str(r20716959, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r20716960);
        mpfr_init(r20716961);
        mpfr_init(r20716962);
        mpfr_init(r20716963);
        mpfr_init(r20716964);
        mpfr_init(r20716965);
        mpfr_init(r20716966);
        mpfr_init(r20716967);
        mpfr_init(r20716968);
        mpfr_init(r20716969);
        mpfr_init(r20716970);
        mpfr_init(r20716971);
        mpfr_init(r20716972);
        mpfr_init(r20716973);
        mpfr_init(r20716974);
        mpfr_init_set_str(r20716975, "2", 10, MPFR_RNDN);
        mpfr_init(r20716976);
        mpfr_init(r20716977);
        mpfr_init(r20716978);
        mpfr_init(r20716979);
        mpfr_init(r20716980);
        mpfr_init(r20716981);
        mpfr_init(r20716982);
        mpfr_init(r20716983);
        mpfr_init(r20716984);
        mpfr_init(r20716985);
        mpfr_init(r20716986);
        mpfr_init(r20716987);
        mpfr_init(r20716988);
        mpfr_init(r20716989);
        mpfr_init(r20716990);
        mpfr_init(r20716991);
        mpfr_init(r20716992);
        mpfr_init(r20716993);
        mpfr_init(r20716994);
        mpfr_init(r20716995);
        mpfr_init(r20716996);
        mpfr_init(r20716997);
        mpfr_init(r20716998);
        mpfr_init(r20716999);
        mpfr_init(r20717000);
        mpfr_init(r20717001);
        mpfr_init(r20717002);
        mpfr_init(r20717003);
        mpfr_init(r20717004);
        mpfr_init(r20717005);
        mpfr_init(r20717006);
        mpfr_init(r20717007);
        mpfr_init(r20717008);
        mpfr_init(r20717009);
        mpfr_init(r20717010);
        mpfr_init(r20717011);
        mpfr_init(r20717012);
        mpfr_init(r20717013);
        mpfr_init(r20717014);
}

double f_dm(double x) {
        mpfr_set_d(r20716927, x, MPFR_RNDN);
        ;
        mpfr_mul(r20716929, r20716927, r20716928, MPFR_RNDN);
        ;
        mpfr_add(r20716931, r20716929, r20716930, MPFR_RNDN);
        mpfr_mul(r20716932, r20716927, r20716927, MPFR_RNDN);
        mpfr_mul(r20716933, r20716932, r20716932, MPFR_RNDN);
        mpfr_mul(r20716934, r20716931, r20716933, MPFR_RNDN);
        ;
        mpfr_pow(r20716936, r20716927, r20716935, MPFR_RNDN);
        mpfr_mul(r20716937, r20716934, r20716936, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20716940, r20716939, r20716927, MPFR_RNDN);
        mpfr_add(r20716941, r20716938, r20716940, MPFR_RNDN);
        mpfr_mul(r20716942, r20716932, r20716941, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20716945, r20716944, r20716927, MPFR_RNDN);
        mpfr_add(r20716946, r20716943, r20716945, MPFR_RNDN);
        mpfr_add(r20716947, r20716942, r20716946, MPFR_RNDN);
        mpfr_add(r20716948, r20716937, r20716947, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20716951, r20716927, r20716950, MPFR_RNDN);
        mpfr_sub(r20716952, r20716949, r20716951, MPFR_RNDN);
        mpfr_mul(r20716953, r20716949, r20716952, MPFR_RNDN);
        mpfr_mul(r20716954, r20716951, r20716951, MPFR_RNDN);
        mpfr_add(r20716955, r20716953, r20716954, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r20716958, r20716956, r20716957, MPFR_RNDN);
        ;
        mpfr_mul(r20716960, r20716959, r20716927, MPFR_RNDN);
        mpfr_pow(r20716961, r20716960, r20716957, MPFR_RNDN);
        mpfr_add(r20716962, r20716958, r20716961, MPFR_RNDN);
        mpfr_mul(r20716963, r20716955, r20716962, MPFR_RNDN);
        mpfr_mul(r20716964, r20716960, r20716960, MPFR_RNDN);
        mpfr_sub(r20716965, r20716956, r20716960, MPFR_RNDN);
        mpfr_mul(r20716966, r20716965, r20716956, MPFR_RNDN);
        mpfr_add(r20716967, r20716964, r20716966, MPFR_RNDN);
        mpfr_pow(r20716968, r20716949, r20716957, MPFR_RNDN);
        mpfr_pow(r20716969, r20716951, r20716957, MPFR_RNDN);
        mpfr_add(r20716970, r20716968, r20716969, MPFR_RNDN);
        mpfr_mul(r20716971, r20716932, r20716970, MPFR_RNDN);
        mpfr_mul(r20716972, r20716967, r20716971, MPFR_RNDN);
        mpfr_add(r20716973, r20716963, r20716972, MPFR_RNDN);
        mpfr_cbrt(r20716974, r20716973, MPFR_RNDN);
        ;
        mpfr_add(r20716976, r20716975, r20716975, MPFR_RNDN);
        mpfr_pow(r20716977, r20716927, r20716976, MPFR_RNDN);
        mpfr_mul(r20716978, r20716927, r20716949, MPFR_RNDN);
        mpfr_mul(r20716979, r20716978, r20716927, MPFR_RNDN);
        mpfr_add(r20716980, r20716956, r20716960, MPFR_RNDN);
        mpfr_add(r20716981, r20716979, r20716980, MPFR_RNDN);
        mpfr_mul(r20716982, r20716981, r20716981, MPFR_RNDN);
        mpfr_mul(r20716983, r20716932, r20716951, MPFR_RNDN);
        mpfr_mul(r20716984, r20716983, r20716983, MPFR_RNDN);
        mpfr_sub(r20716985, r20716982, r20716984, MPFR_RNDN);
        mpfr_cbrt(r20716986, r20716985, MPFR_RNDN);
        mpfr_add(r20716987, r20716951, r20716949, MPFR_RNDN);
        mpfr_mul(r20716988, r20716987, r20716932, MPFR_RNDN);
        mpfr_add(r20716989, r20716988, r20716980, MPFR_RNDN);
        mpfr_sub(r20716990, r20716988, r20716980, MPFR_RNDN);
        mpfr_mul(r20716991, r20716989, r20716990, MPFR_RNDN);
        mpfr_cbrt(r20716992, r20716991, MPFR_RNDN);
        mpfr_mul(r20716993, r20716986, r20716992, MPFR_RNDN);
        mpfr_mul(r20716994, r20716977, r20716993, MPFR_RNDN);
        mpfr_mul(r20716995, r20716974, r20716994, MPFR_RNDN);
        mpfr_mul(r20716996, r20716950, r20716927, MPFR_RNDN);
        mpfr_add(r20716997, r20716949, r20716996, MPFR_RNDN);
        mpfr_mul(r20716998, r20716997, r20716932, MPFR_RNDN);
        mpfr_sub(r20716999, r20716998, r20716980, MPFR_RNDN);
        mpfr_cbrt(r20717000, r20716999, MPFR_RNDN);
        mpfr_sub(r20717001, r20716949, r20716996, MPFR_RNDN);
        mpfr_mul(r20717002, r20716932, r20717001, MPFR_RNDN);
        mpfr_add(r20717003, r20717002, r20716980, MPFR_RNDN);
        mpfr_cbrt(r20717004, r20717003, MPFR_RNDN);
        mpfr_mul(r20717005, r20717000, r20717004, MPFR_RNDN);
        mpfr_add(r20717006, r20716966, r20716964, MPFR_RNDN);
        mpfr_mul(r20717007, r20716996, r20716996, MPFR_RNDN);
        mpfr_mul(r20717008, r20717001, r20716949, MPFR_RNDN);
        mpfr_add(r20717009, r20717007, r20717008, MPFR_RNDN);
        mpfr_mul(r20717010, r20717006, r20717009, MPFR_RNDN);
        mpfr_cbrt(r20717011, r20717010, MPFR_RNDN);
        mpfr_mul(r20717012, r20717005, r20717011, MPFR_RNDN);
        mpfr_div(r20717013, r20716995, r20717012, MPFR_RNDN);
        mpfr_add(r20717014, r20716948, r20717013, MPFR_RNDN);
        return mpfr_get_d(r20717014, MPFR_RNDN);
}

