#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r10924562 = 1.0;
        float r10924563 = -10.0;
        float r10924564 = x;
        float r10924565 = r10924563 * r10924564;
        float r10924566 = r10924562 + r10924565;
        float r10924567 = 22.5;
        float r10924568 = r10924564 * r10924564;
        float r10924569 = r10924567 * r10924568;
        float r10924570 = r10924566 + r10924569;
        float r10924571 = -20.0;
        float r10924572 = r10924568 * r10924564;
        float r10924573 = r10924571 * r10924572;
        float r10924574 = r10924570 + r10924573;
        float r10924575 = 8.75;
        float r10924576 = r10924572 * r10924564;
        float r10924577 = r10924575 * r10924576;
        float r10924578 = r10924574 + r10924577;
        float r10924579 = -2.1;
        float r10924580 = r10924576 * r10924564;
        float r10924581 = r10924579 * r10924580;
        float r10924582 = r10924578 + r10924581;
        float r10924583 = 0.291667;
        float r10924584 = r10924580 * r10924564;
        float r10924585 = r10924583 * r10924584;
        float r10924586 = r10924582 + r10924585;
        float r10924587 = -0.02381;
        float r10924588 = r10924584 * r10924564;
        float r10924589 = r10924587 * r10924588;
        float r10924590 = r10924586 + r10924589;
        float r10924591 = 0.001116;
        float r10924592 = r10924588 * r10924564;
        float r10924593 = r10924591 * r10924592;
        float r10924594 = r10924590 + r10924593;
        float r10924595 = -2.8e-05;
        float r10924596 = r10924592 * r10924564;
        float r10924597 = r10924595 * r10924596;
        float r10924598 = r10924594 + r10924597;
        return r10924598;
}

double f_id(double x) {
        double r10924599 = 1.0;
        double r10924600 = -10.0;
        double r10924601 = x;
        double r10924602 = r10924600 * r10924601;
        double r10924603 = r10924599 + r10924602;
        double r10924604 = 22.5;
        double r10924605 = r10924601 * r10924601;
        double r10924606 = r10924604 * r10924605;
        double r10924607 = r10924603 + r10924606;
        double r10924608 = -20.0;
        double r10924609 = r10924605 * r10924601;
        double r10924610 = r10924608 * r10924609;
        double r10924611 = r10924607 + r10924610;
        double r10924612 = 8.75;
        double r10924613 = r10924609 * r10924601;
        double r10924614 = r10924612 * r10924613;
        double r10924615 = r10924611 + r10924614;
        double r10924616 = -2.1;
        double r10924617 = r10924613 * r10924601;
        double r10924618 = r10924616 * r10924617;
        double r10924619 = r10924615 + r10924618;
        double r10924620 = 0.291667;
        double r10924621 = r10924617 * r10924601;
        double r10924622 = r10924620 * r10924621;
        double r10924623 = r10924619 + r10924622;
        double r10924624 = -0.02381;
        double r10924625 = r10924621 * r10924601;
        double r10924626 = r10924624 * r10924625;
        double r10924627 = r10924623 + r10924626;
        double r10924628 = 0.001116;
        double r10924629 = r10924625 * r10924601;
        double r10924630 = r10924628 * r10924629;
        double r10924631 = r10924627 + r10924630;
        double r10924632 = -2.8e-05;
        double r10924633 = r10924629 * r10924601;
        double r10924634 = r10924632 * r10924633;
        double r10924635 = r10924631 + r10924634;
        return r10924635;
}


double f_of(float x) {
        float r10924636 = x;
        float r10924637 = 3;
        float r10924638 = r10924637 + r10924637;
        float r10924639 = pow(r10924636, r10924638);
        float r10924640 = -0.02381;
        float r10924641 = r10924640 * r10924636;
        float r10924642 = 0.291667;
        float r10924643 = r10924641 + r10924642;
        float r10924644 = r10924639 * r10924643;
        float r10924645 = -2.8e-05;
        float r10924646 = r10924636 * r10924645;
        float r10924647 = r10924636 * r10924636;
        float r10924648 = r10924646 * r10924647;
        float r10924649 = pow(r10924636, r10924637);
        float r10924650 = r10924649 * r10924649;
        float r10924651 = r10924648 * r10924650;
        float r10924652 = 0.001116;
        float r10924653 = 4;
        float r10924654 = pow(r10924636, r10924653);
        float r10924655 = r10924652 * r10924654;
        float r10924656 = r10924647 * r10924647;
        float r10924657 = r10924655 * r10924656;
        float r10924658 = r10924651 + r10924657;
        float r10924659 = r10924644 + r10924658;
        float r10924660 = -10.0;
        float r10924661 = r10924636 * r10924660;
        float r10924662 = 1.0;
        float r10924663 = r10924661 + r10924662;
        float r10924664 = -20.0;
        float r10924665 = r10924664 * r10924636;
        float r10924666 = 22.5;
        float r10924667 = r10924665 + r10924666;
        float r10924668 = r10924647 * r10924667;
        float r10924669 = -2.1;
        float r10924670 = r10924669 * r10924636;
        float r10924671 = 8.75;
        float r10924672 = r10924670 + r10924671;
        float r10924673 = r10924656 * r10924672;
        float r10924674 = r10924668 + r10924673;
        float r10924675 = r10924663 + r10924674;
        float r10924676 = r10924659 + r10924675;
        return r10924676;
}

double f_od(double x) {
        double r10924677 = x;
        double r10924678 = 3;
        double r10924679 = r10924678 + r10924678;
        double r10924680 = pow(r10924677, r10924679);
        double r10924681 = -0.02381;
        double r10924682 = r10924681 * r10924677;
        double r10924683 = 0.291667;
        double r10924684 = r10924682 + r10924683;
        double r10924685 = r10924680 * r10924684;
        double r10924686 = -2.8e-05;
        double r10924687 = r10924677 * r10924686;
        double r10924688 = r10924677 * r10924677;
        double r10924689 = r10924687 * r10924688;
        double r10924690 = pow(r10924677, r10924678);
        double r10924691 = r10924690 * r10924690;
        double r10924692 = r10924689 * r10924691;
        double r10924693 = 0.001116;
        double r10924694 = 4;
        double r10924695 = pow(r10924677, r10924694);
        double r10924696 = r10924693 * r10924695;
        double r10924697 = r10924688 * r10924688;
        double r10924698 = r10924696 * r10924697;
        double r10924699 = r10924692 + r10924698;
        double r10924700 = r10924685 + r10924699;
        double r10924701 = -10.0;
        double r10924702 = r10924677 * r10924701;
        double r10924703 = 1.0;
        double r10924704 = r10924702 + r10924703;
        double r10924705 = -20.0;
        double r10924706 = r10924705 * r10924677;
        double r10924707 = 22.5;
        double r10924708 = r10924706 + r10924707;
        double r10924709 = r10924688 * r10924708;
        double r10924710 = -2.1;
        double r10924711 = r10924710 * r10924677;
        double r10924712 = 8.75;
        double r10924713 = r10924711 + r10924712;
        double r10924714 = r10924697 * r10924713;
        double r10924715 = r10924709 + r10924714;
        double r10924716 = r10924704 + r10924715;
        double r10924717 = r10924700 + r10924716;
        return r10924717;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10924718, r10924719, r10924720, r10924721, r10924722, r10924723, r10924724, r10924725, r10924726, r10924727, r10924728, r10924729, r10924730, r10924731, r10924732, r10924733, r10924734, r10924735, r10924736, r10924737, r10924738, r10924739, r10924740, r10924741, r10924742, r10924743, r10924744, r10924745, r10924746, r10924747, r10924748, r10924749, r10924750, r10924751, r10924752, r10924753, r10924754;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10924718, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924719, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10924720);
        mpfr_init(r10924721);
        mpfr_init(r10924722);
        mpfr_init_set_str(r10924723, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10924724);
        mpfr_init(r10924725);
        mpfr_init(r10924726);
        mpfr_init_set_str(r10924727, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10924728);
        mpfr_init(r10924729);
        mpfr_init(r10924730);
        mpfr_init_set_str(r10924731, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10924732);
        mpfr_init(r10924733);
        mpfr_init(r10924734);
        mpfr_init_set_str(r10924735, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10924736);
        mpfr_init(r10924737);
        mpfr_init(r10924738);
        mpfr_init_set_str(r10924739, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10924740);
        mpfr_init(r10924741);
        mpfr_init(r10924742);
        mpfr_init_set_str(r10924743, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10924744);
        mpfr_init(r10924745);
        mpfr_init(r10924746);
        mpfr_init_set_str(r10924747, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10924748);
        mpfr_init(r10924749);
        mpfr_init(r10924750);
        mpfr_init_set_str(r10924751, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10924752);
        mpfr_init(r10924753);
        mpfr_init(r10924754);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10924720, x, MPFR_RNDN);
        mpfr_mul(r10924721, r10924719, r10924720, MPFR_RNDN);
        mpfr_add(r10924722, r10924718, r10924721, MPFR_RNDN);
        ;
        mpfr_mul(r10924724, r10924720, r10924720, MPFR_RNDN);
        mpfr_mul(r10924725, r10924723, r10924724, MPFR_RNDN);
        mpfr_add(r10924726, r10924722, r10924725, MPFR_RNDN);
        ;
        mpfr_mul(r10924728, r10924724, r10924720, MPFR_RNDN);
        mpfr_mul(r10924729, r10924727, r10924728, MPFR_RNDN);
        mpfr_add(r10924730, r10924726, r10924729, MPFR_RNDN);
        ;
        mpfr_mul(r10924732, r10924728, r10924720, MPFR_RNDN);
        mpfr_mul(r10924733, r10924731, r10924732, MPFR_RNDN);
        mpfr_add(r10924734, r10924730, r10924733, MPFR_RNDN);
        ;
        mpfr_mul(r10924736, r10924732, r10924720, MPFR_RNDN);
        mpfr_mul(r10924737, r10924735, r10924736, MPFR_RNDN);
        mpfr_add(r10924738, r10924734, r10924737, MPFR_RNDN);
        ;
        mpfr_mul(r10924740, r10924736, r10924720, MPFR_RNDN);
        mpfr_mul(r10924741, r10924739, r10924740, MPFR_RNDN);
        mpfr_add(r10924742, r10924738, r10924741, MPFR_RNDN);
        ;
        mpfr_mul(r10924744, r10924740, r10924720, MPFR_RNDN);
        mpfr_mul(r10924745, r10924743, r10924744, MPFR_RNDN);
        mpfr_add(r10924746, r10924742, r10924745, MPFR_RNDN);
        ;
        mpfr_mul(r10924748, r10924744, r10924720, MPFR_RNDN);
        mpfr_mul(r10924749, r10924747, r10924748, MPFR_RNDN);
        mpfr_add(r10924750, r10924746, r10924749, MPFR_RNDN);
        ;
        mpfr_mul(r10924752, r10924748, r10924720, MPFR_RNDN);
        mpfr_mul(r10924753, r10924751, r10924752, MPFR_RNDN);
        mpfr_add(r10924754, r10924750, r10924753, MPFR_RNDN);
        return mpfr_get_d(r10924754, MPFR_RNDN);
}

static mpfr_t r10924755, r10924756, r10924757, r10924758, r10924759, r10924760, r10924761, r10924762, r10924763, r10924764, r10924765, r10924766, r10924767, r10924768, r10924769, r10924770, r10924771, r10924772, r10924773, r10924774, r10924775, r10924776, r10924777, r10924778, r10924779, r10924780, r10924781, r10924782, r10924783, r10924784, r10924785, r10924786, r10924787, r10924788, r10924789, r10924790, r10924791, r10924792, r10924793, r10924794, r10924795;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10924755);
        mpfr_init_set_str(r10924756, "3", 10, MPFR_RNDN);
        mpfr_init(r10924757);
        mpfr_init(r10924758);
        mpfr_init_set_str(r10924759, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10924760);
        mpfr_init_set_str(r10924761, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10924762);
        mpfr_init(r10924763);
        mpfr_init_set_str(r10924764, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10924765);
        mpfr_init(r10924766);
        mpfr_init(r10924767);
        mpfr_init(r10924768);
        mpfr_init(r10924769);
        mpfr_init(r10924770);
        mpfr_init_set_str(r10924771, "0.001116", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924772, "4", 10, MPFR_RNDN);
        mpfr_init(r10924773);
        mpfr_init(r10924774);
        mpfr_init(r10924775);
        mpfr_init(r10924776);
        mpfr_init(r10924777);
        mpfr_init(r10924778);
        mpfr_init_set_str(r10924779, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10924780);
        mpfr_init_set_str(r10924781, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10924782);
        mpfr_init_set_str(r10924783, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10924784);
        mpfr_init_set_str(r10924785, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10924786);
        mpfr_init(r10924787);
        mpfr_init_set_str(r10924788, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10924789);
        mpfr_init_set_str(r10924790, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10924791);
        mpfr_init(r10924792);
        mpfr_init(r10924793);
        mpfr_init(r10924794);
        mpfr_init(r10924795);
}

double f_fm(double x) {
        mpfr_set_d(r10924755, x, MPFR_RNDN);
        ;
        mpfr_add(r10924757, r10924756, r10924756, MPFR_RNDN);
        mpfr_pow(r10924758, r10924755, r10924757, MPFR_RNDN);
        ;
        mpfr_mul(r10924760, r10924759, r10924755, MPFR_RNDN);
        ;
        mpfr_add(r10924762, r10924760, r10924761, MPFR_RNDN);
        mpfr_mul(r10924763, r10924758, r10924762, MPFR_RNDN);
        ;
        mpfr_mul(r10924765, r10924755, r10924764, MPFR_RNDN);
        mpfr_mul(r10924766, r10924755, r10924755, MPFR_RNDN);
        mpfr_mul(r10924767, r10924765, r10924766, MPFR_RNDN);
        mpfr_pow(r10924768, r10924755, r10924756, MPFR_RNDN);
        mpfr_mul(r10924769, r10924768, r10924768, MPFR_RNDN);
        mpfr_mul(r10924770, r10924767, r10924769, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10924773, r10924755, r10924772, MPFR_RNDN);
        mpfr_mul(r10924774, r10924771, r10924773, MPFR_RNDN);
        mpfr_mul(r10924775, r10924766, r10924766, MPFR_RNDN);
        mpfr_mul(r10924776, r10924774, r10924775, MPFR_RNDN);
        mpfr_add(r10924777, r10924770, r10924776, MPFR_RNDN);
        mpfr_add(r10924778, r10924763, r10924777, MPFR_RNDN);
        ;
        mpfr_mul(r10924780, r10924755, r10924779, MPFR_RNDN);
        ;
        mpfr_add(r10924782, r10924780, r10924781, MPFR_RNDN);
        ;
        mpfr_mul(r10924784, r10924783, r10924755, MPFR_RNDN);
        ;
        mpfr_add(r10924786, r10924784, r10924785, MPFR_RNDN);
        mpfr_mul(r10924787, r10924766, r10924786, MPFR_RNDN);
        ;
        mpfr_mul(r10924789, r10924788, r10924755, MPFR_RNDN);
        ;
        mpfr_add(r10924791, r10924789, r10924790, MPFR_RNDN);
        mpfr_mul(r10924792, r10924775, r10924791, MPFR_RNDN);
        mpfr_add(r10924793, r10924787, r10924792, MPFR_RNDN);
        mpfr_add(r10924794, r10924782, r10924793, MPFR_RNDN);
        mpfr_add(r10924795, r10924778, r10924794, MPFR_RNDN);
        return mpfr_get_d(r10924795, MPFR_RNDN);
}

static mpfr_t r10924796, r10924797, r10924798, r10924799, r10924800, r10924801, r10924802, r10924803, r10924804, r10924805, r10924806, r10924807, r10924808, r10924809, r10924810, r10924811, r10924812, r10924813, r10924814, r10924815, r10924816, r10924817, r10924818, r10924819, r10924820, r10924821, r10924822, r10924823, r10924824, r10924825, r10924826, r10924827, r10924828, r10924829, r10924830, r10924831, r10924832, r10924833, r10924834, r10924835, r10924836;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10924796);
        mpfr_init_set_str(r10924797, "3", 10, MPFR_RNDN);
        mpfr_init(r10924798);
        mpfr_init(r10924799);
        mpfr_init_set_str(r10924800, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10924801);
        mpfr_init_set_str(r10924802, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10924803);
        mpfr_init(r10924804);
        mpfr_init_set_str(r10924805, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10924806);
        mpfr_init(r10924807);
        mpfr_init(r10924808);
        mpfr_init(r10924809);
        mpfr_init(r10924810);
        mpfr_init(r10924811);
        mpfr_init_set_str(r10924812, "0.001116", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924813, "4", 10, MPFR_RNDN);
        mpfr_init(r10924814);
        mpfr_init(r10924815);
        mpfr_init(r10924816);
        mpfr_init(r10924817);
        mpfr_init(r10924818);
        mpfr_init(r10924819);
        mpfr_init_set_str(r10924820, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10924821);
        mpfr_init_set_str(r10924822, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10924823);
        mpfr_init_set_str(r10924824, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10924825);
        mpfr_init_set_str(r10924826, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10924827);
        mpfr_init(r10924828);
        mpfr_init_set_str(r10924829, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10924830);
        mpfr_init_set_str(r10924831, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10924832);
        mpfr_init(r10924833);
        mpfr_init(r10924834);
        mpfr_init(r10924835);
        mpfr_init(r10924836);
}

double f_dm(double x) {
        mpfr_set_d(r10924796, x, MPFR_RNDN);
        ;
        mpfr_add(r10924798, r10924797, r10924797, MPFR_RNDN);
        mpfr_pow(r10924799, r10924796, r10924798, MPFR_RNDN);
        ;
        mpfr_mul(r10924801, r10924800, r10924796, MPFR_RNDN);
        ;
        mpfr_add(r10924803, r10924801, r10924802, MPFR_RNDN);
        mpfr_mul(r10924804, r10924799, r10924803, MPFR_RNDN);
        ;
        mpfr_mul(r10924806, r10924796, r10924805, MPFR_RNDN);
        mpfr_mul(r10924807, r10924796, r10924796, MPFR_RNDN);
        mpfr_mul(r10924808, r10924806, r10924807, MPFR_RNDN);
        mpfr_pow(r10924809, r10924796, r10924797, MPFR_RNDN);
        mpfr_mul(r10924810, r10924809, r10924809, MPFR_RNDN);
        mpfr_mul(r10924811, r10924808, r10924810, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10924814, r10924796, r10924813, MPFR_RNDN);
        mpfr_mul(r10924815, r10924812, r10924814, MPFR_RNDN);
        mpfr_mul(r10924816, r10924807, r10924807, MPFR_RNDN);
        mpfr_mul(r10924817, r10924815, r10924816, MPFR_RNDN);
        mpfr_add(r10924818, r10924811, r10924817, MPFR_RNDN);
        mpfr_add(r10924819, r10924804, r10924818, MPFR_RNDN);
        ;
        mpfr_mul(r10924821, r10924796, r10924820, MPFR_RNDN);
        ;
        mpfr_add(r10924823, r10924821, r10924822, MPFR_RNDN);
        ;
        mpfr_mul(r10924825, r10924824, r10924796, MPFR_RNDN);
        ;
        mpfr_add(r10924827, r10924825, r10924826, MPFR_RNDN);
        mpfr_mul(r10924828, r10924807, r10924827, MPFR_RNDN);
        ;
        mpfr_mul(r10924830, r10924829, r10924796, MPFR_RNDN);
        ;
        mpfr_add(r10924832, r10924830, r10924831, MPFR_RNDN);
        mpfr_mul(r10924833, r10924816, r10924832, MPFR_RNDN);
        mpfr_add(r10924834, r10924828, r10924833, MPFR_RNDN);
        mpfr_add(r10924835, r10924823, r10924834, MPFR_RNDN);
        mpfr_add(r10924836, r10924819, r10924835, MPFR_RNDN);
        return mpfr_get_d(r10924836, MPFR_RNDN);
}

