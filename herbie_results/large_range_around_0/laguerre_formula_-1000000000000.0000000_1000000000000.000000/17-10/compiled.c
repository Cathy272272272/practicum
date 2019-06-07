#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r9585573 = 1.0;
        float r9585574 = -10.0;
        float r9585575 = x;
        float r9585576 = r9585574 * r9585575;
        float r9585577 = r9585573 + r9585576;
        float r9585578 = 22.5;
        float r9585579 = r9585575 * r9585575;
        float r9585580 = r9585578 * r9585579;
        float r9585581 = r9585577 + r9585580;
        float r9585582 = -20.0;
        float r9585583 = r9585579 * r9585575;
        float r9585584 = r9585582 * r9585583;
        float r9585585 = r9585581 + r9585584;
        float r9585586 = 8.75;
        float r9585587 = r9585583 * r9585575;
        float r9585588 = r9585586 * r9585587;
        float r9585589 = r9585585 + r9585588;
        float r9585590 = -2.1;
        float r9585591 = r9585587 * r9585575;
        float r9585592 = r9585590 * r9585591;
        float r9585593 = r9585589 + r9585592;
        float r9585594 = 0.291667;
        float r9585595 = r9585591 * r9585575;
        float r9585596 = r9585594 * r9585595;
        float r9585597 = r9585593 + r9585596;
        float r9585598 = -0.02381;
        float r9585599 = r9585595 * r9585575;
        float r9585600 = r9585598 * r9585599;
        float r9585601 = r9585597 + r9585600;
        float r9585602 = 0.001116;
        float r9585603 = r9585599 * r9585575;
        float r9585604 = r9585602 * r9585603;
        float r9585605 = r9585601 + r9585604;
        float r9585606 = -2.8e-05;
        float r9585607 = r9585603 * r9585575;
        float r9585608 = r9585606 * r9585607;
        float r9585609 = r9585605 + r9585608;
        return r9585609;
}

double f_id(double x) {
        double r9585610 = 1.0;
        double r9585611 = -10.0;
        double r9585612 = x;
        double r9585613 = r9585611 * r9585612;
        double r9585614 = r9585610 + r9585613;
        double r9585615 = 22.5;
        double r9585616 = r9585612 * r9585612;
        double r9585617 = r9585615 * r9585616;
        double r9585618 = r9585614 + r9585617;
        double r9585619 = -20.0;
        double r9585620 = r9585616 * r9585612;
        double r9585621 = r9585619 * r9585620;
        double r9585622 = r9585618 + r9585621;
        double r9585623 = 8.75;
        double r9585624 = r9585620 * r9585612;
        double r9585625 = r9585623 * r9585624;
        double r9585626 = r9585622 + r9585625;
        double r9585627 = -2.1;
        double r9585628 = r9585624 * r9585612;
        double r9585629 = r9585627 * r9585628;
        double r9585630 = r9585626 + r9585629;
        double r9585631 = 0.291667;
        double r9585632 = r9585628 * r9585612;
        double r9585633 = r9585631 * r9585632;
        double r9585634 = r9585630 + r9585633;
        double r9585635 = -0.02381;
        double r9585636 = r9585632 * r9585612;
        double r9585637 = r9585635 * r9585636;
        double r9585638 = r9585634 + r9585637;
        double r9585639 = 0.001116;
        double r9585640 = r9585636 * r9585612;
        double r9585641 = r9585639 * r9585640;
        double r9585642 = r9585638 + r9585641;
        double r9585643 = -2.8e-05;
        double r9585644 = r9585640 * r9585612;
        double r9585645 = r9585643 * r9585644;
        double r9585646 = r9585642 + r9585645;
        return r9585646;
}


double f_of(float x) {
        float r9585647 = 1.0;
        float r9585648 = -10.0;
        float r9585649 = x;
        float r9585650 = r9585648 * r9585649;
        float r9585651 = r9585647 + r9585650;
        float r9585652 = 22.5;
        float r9585653 = r9585649 * r9585649;
        float r9585654 = r9585652 * r9585653;
        float r9585655 = sqrt(r9585654);
        float r9585656 = r9585655 * r9585655;
        float r9585657 = r9585651 + r9585656;
        float r9585658 = -20.0;
        float r9585659 = r9585653 * r9585649;
        float r9585660 = r9585658 * r9585659;
        float r9585661 = r9585657 + r9585660;
        float r9585662 = 8.75;
        float r9585663 = r9585659 * r9585649;
        float r9585664 = r9585662 * r9585663;
        float r9585665 = r9585661 + r9585664;
        float r9585666 = -2.1;
        float r9585667 = r9585663 * r9585649;
        float r9585668 = r9585666 * r9585667;
        float r9585669 = r9585665 + r9585668;
        float r9585670 = 0.291667;
        float r9585671 = r9585667 * r9585649;
        float r9585672 = r9585670 * r9585671;
        float r9585673 = r9585669 + r9585672;
        float r9585674 = -0.02381;
        float r9585675 = r9585671 * r9585649;
        float r9585676 = r9585674 * r9585675;
        float r9585677 = r9585673 + r9585676;
        float r9585678 = 0.001116;
        float r9585679 = r9585675 * r9585649;
        float r9585680 = r9585678 * r9585679;
        float r9585681 = r9585677 + r9585680;
        float r9585682 = -2.8e-05;
        float r9585683 = r9585679 * r9585649;
        float r9585684 = r9585682 * r9585683;
        float r9585685 = r9585681 + r9585684;
        return r9585685;
}

double f_od(double x) {
        double r9585686 = 1.0;
        double r9585687 = -10.0;
        double r9585688 = x;
        double r9585689 = r9585687 * r9585688;
        double r9585690 = r9585686 + r9585689;
        double r9585691 = 22.5;
        double r9585692 = r9585688 * r9585688;
        double r9585693 = r9585691 * r9585692;
        double r9585694 = sqrt(r9585693);
        double r9585695 = r9585694 * r9585694;
        double r9585696 = r9585690 + r9585695;
        double r9585697 = -20.0;
        double r9585698 = r9585692 * r9585688;
        double r9585699 = r9585697 * r9585698;
        double r9585700 = r9585696 + r9585699;
        double r9585701 = 8.75;
        double r9585702 = r9585698 * r9585688;
        double r9585703 = r9585701 * r9585702;
        double r9585704 = r9585700 + r9585703;
        double r9585705 = -2.1;
        double r9585706 = r9585702 * r9585688;
        double r9585707 = r9585705 * r9585706;
        double r9585708 = r9585704 + r9585707;
        double r9585709 = 0.291667;
        double r9585710 = r9585706 * r9585688;
        double r9585711 = r9585709 * r9585710;
        double r9585712 = r9585708 + r9585711;
        double r9585713 = -0.02381;
        double r9585714 = r9585710 * r9585688;
        double r9585715 = r9585713 * r9585714;
        double r9585716 = r9585712 + r9585715;
        double r9585717 = 0.001116;
        double r9585718 = r9585714 * r9585688;
        double r9585719 = r9585717 * r9585718;
        double r9585720 = r9585716 + r9585719;
        double r9585721 = -2.8e-05;
        double r9585722 = r9585718 * r9585688;
        double r9585723 = r9585721 * r9585722;
        double r9585724 = r9585720 + r9585723;
        return r9585724;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9585725, r9585726, r9585727, r9585728, r9585729, r9585730, r9585731, r9585732, r9585733, r9585734, r9585735, r9585736, r9585737, r9585738, r9585739, r9585740, r9585741, r9585742, r9585743, r9585744, r9585745, r9585746, r9585747, r9585748, r9585749, r9585750, r9585751, r9585752, r9585753, r9585754, r9585755, r9585756, r9585757, r9585758, r9585759, r9585760, r9585761;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9585725, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585726, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r9585727);
        mpfr_init(r9585728);
        mpfr_init(r9585729);
        mpfr_init_set_str(r9585730, "22.5", 10, MPFR_RNDN);
        mpfr_init(r9585731);
        mpfr_init(r9585732);
        mpfr_init(r9585733);
        mpfr_init_set_str(r9585734, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r9585735);
        mpfr_init(r9585736);
        mpfr_init(r9585737);
        mpfr_init_set_str(r9585738, "8.75", 10, MPFR_RNDN);
        mpfr_init(r9585739);
        mpfr_init(r9585740);
        mpfr_init(r9585741);
        mpfr_init_set_str(r9585742, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r9585743);
        mpfr_init(r9585744);
        mpfr_init(r9585745);
        mpfr_init_set_str(r9585746, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r9585747);
        mpfr_init(r9585748);
        mpfr_init(r9585749);
        mpfr_init_set_str(r9585750, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r9585751);
        mpfr_init(r9585752);
        mpfr_init(r9585753);
        mpfr_init_set_str(r9585754, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r9585755);
        mpfr_init(r9585756);
        mpfr_init(r9585757);
        mpfr_init_set_str(r9585758, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9585759);
        mpfr_init(r9585760);
        mpfr_init(r9585761);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9585727, x, MPFR_RNDN);
        mpfr_mul(r9585728, r9585726, r9585727, MPFR_RNDN);
        mpfr_add(r9585729, r9585725, r9585728, MPFR_RNDN);
        ;
        mpfr_mul(r9585731, r9585727, r9585727, MPFR_RNDN);
        mpfr_mul(r9585732, r9585730, r9585731, MPFR_RNDN);
        mpfr_add(r9585733, r9585729, r9585732, MPFR_RNDN);
        ;
        mpfr_mul(r9585735, r9585731, r9585727, MPFR_RNDN);
        mpfr_mul(r9585736, r9585734, r9585735, MPFR_RNDN);
        mpfr_add(r9585737, r9585733, r9585736, MPFR_RNDN);
        ;
        mpfr_mul(r9585739, r9585735, r9585727, MPFR_RNDN);
        mpfr_mul(r9585740, r9585738, r9585739, MPFR_RNDN);
        mpfr_add(r9585741, r9585737, r9585740, MPFR_RNDN);
        ;
        mpfr_mul(r9585743, r9585739, r9585727, MPFR_RNDN);
        mpfr_mul(r9585744, r9585742, r9585743, MPFR_RNDN);
        mpfr_add(r9585745, r9585741, r9585744, MPFR_RNDN);
        ;
        mpfr_mul(r9585747, r9585743, r9585727, MPFR_RNDN);
        mpfr_mul(r9585748, r9585746, r9585747, MPFR_RNDN);
        mpfr_add(r9585749, r9585745, r9585748, MPFR_RNDN);
        ;
        mpfr_mul(r9585751, r9585747, r9585727, MPFR_RNDN);
        mpfr_mul(r9585752, r9585750, r9585751, MPFR_RNDN);
        mpfr_add(r9585753, r9585749, r9585752, MPFR_RNDN);
        ;
        mpfr_mul(r9585755, r9585751, r9585727, MPFR_RNDN);
        mpfr_mul(r9585756, r9585754, r9585755, MPFR_RNDN);
        mpfr_add(r9585757, r9585753, r9585756, MPFR_RNDN);
        ;
        mpfr_mul(r9585759, r9585755, r9585727, MPFR_RNDN);
        mpfr_mul(r9585760, r9585758, r9585759, MPFR_RNDN);
        mpfr_add(r9585761, r9585757, r9585760, MPFR_RNDN);
        return mpfr_get_d(r9585761, MPFR_RNDN);
}

static mpfr_t r9585762, r9585763, r9585764, r9585765, r9585766, r9585767, r9585768, r9585769, r9585770, r9585771, r9585772, r9585773, r9585774, r9585775, r9585776, r9585777, r9585778, r9585779, r9585780, r9585781, r9585782, r9585783, r9585784, r9585785, r9585786, r9585787, r9585788, r9585789, r9585790, r9585791, r9585792, r9585793, r9585794, r9585795, r9585796, r9585797, r9585798, r9585799, r9585800;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9585762, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585763, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r9585764);
        mpfr_init(r9585765);
        mpfr_init(r9585766);
        mpfr_init_set_str(r9585767, "22.5", 10, MPFR_RNDN);
        mpfr_init(r9585768);
        mpfr_init(r9585769);
        mpfr_init(r9585770);
        mpfr_init(r9585771);
        mpfr_init(r9585772);
        mpfr_init_set_str(r9585773, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r9585774);
        mpfr_init(r9585775);
        mpfr_init(r9585776);
        mpfr_init_set_str(r9585777, "8.75", 10, MPFR_RNDN);
        mpfr_init(r9585778);
        mpfr_init(r9585779);
        mpfr_init(r9585780);
        mpfr_init_set_str(r9585781, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r9585782);
        mpfr_init(r9585783);
        mpfr_init(r9585784);
        mpfr_init_set_str(r9585785, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r9585786);
        mpfr_init(r9585787);
        mpfr_init(r9585788);
        mpfr_init_set_str(r9585789, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r9585790);
        mpfr_init(r9585791);
        mpfr_init(r9585792);
        mpfr_init_set_str(r9585793, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r9585794);
        mpfr_init(r9585795);
        mpfr_init(r9585796);
        mpfr_init_set_str(r9585797, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9585798);
        mpfr_init(r9585799);
        mpfr_init(r9585800);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9585764, x, MPFR_RNDN);
        mpfr_mul(r9585765, r9585763, r9585764, MPFR_RNDN);
        mpfr_add(r9585766, r9585762, r9585765, MPFR_RNDN);
        ;
        mpfr_mul(r9585768, r9585764, r9585764, MPFR_RNDN);
        mpfr_mul(r9585769, r9585767, r9585768, MPFR_RNDN);
        mpfr_sqrt(r9585770, r9585769, MPFR_RNDN);
        mpfr_mul(r9585771, r9585770, r9585770, MPFR_RNDN);
        mpfr_add(r9585772, r9585766, r9585771, MPFR_RNDN);
        ;
        mpfr_mul(r9585774, r9585768, r9585764, MPFR_RNDN);
        mpfr_mul(r9585775, r9585773, r9585774, MPFR_RNDN);
        mpfr_add(r9585776, r9585772, r9585775, MPFR_RNDN);
        ;
        mpfr_mul(r9585778, r9585774, r9585764, MPFR_RNDN);
        mpfr_mul(r9585779, r9585777, r9585778, MPFR_RNDN);
        mpfr_add(r9585780, r9585776, r9585779, MPFR_RNDN);
        ;
        mpfr_mul(r9585782, r9585778, r9585764, MPFR_RNDN);
        mpfr_mul(r9585783, r9585781, r9585782, MPFR_RNDN);
        mpfr_add(r9585784, r9585780, r9585783, MPFR_RNDN);
        ;
        mpfr_mul(r9585786, r9585782, r9585764, MPFR_RNDN);
        mpfr_mul(r9585787, r9585785, r9585786, MPFR_RNDN);
        mpfr_add(r9585788, r9585784, r9585787, MPFR_RNDN);
        ;
        mpfr_mul(r9585790, r9585786, r9585764, MPFR_RNDN);
        mpfr_mul(r9585791, r9585789, r9585790, MPFR_RNDN);
        mpfr_add(r9585792, r9585788, r9585791, MPFR_RNDN);
        ;
        mpfr_mul(r9585794, r9585790, r9585764, MPFR_RNDN);
        mpfr_mul(r9585795, r9585793, r9585794, MPFR_RNDN);
        mpfr_add(r9585796, r9585792, r9585795, MPFR_RNDN);
        ;
        mpfr_mul(r9585798, r9585794, r9585764, MPFR_RNDN);
        mpfr_mul(r9585799, r9585797, r9585798, MPFR_RNDN);
        mpfr_add(r9585800, r9585796, r9585799, MPFR_RNDN);
        return mpfr_get_d(r9585800, MPFR_RNDN);
}

static mpfr_t r9585801, r9585802, r9585803, r9585804, r9585805, r9585806, r9585807, r9585808, r9585809, r9585810, r9585811, r9585812, r9585813, r9585814, r9585815, r9585816, r9585817, r9585818, r9585819, r9585820, r9585821, r9585822, r9585823, r9585824, r9585825, r9585826, r9585827, r9585828, r9585829, r9585830, r9585831, r9585832, r9585833, r9585834, r9585835, r9585836, r9585837, r9585838, r9585839;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9585801, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585802, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r9585803);
        mpfr_init(r9585804);
        mpfr_init(r9585805);
        mpfr_init_set_str(r9585806, "22.5", 10, MPFR_RNDN);
        mpfr_init(r9585807);
        mpfr_init(r9585808);
        mpfr_init(r9585809);
        mpfr_init(r9585810);
        mpfr_init(r9585811);
        mpfr_init_set_str(r9585812, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r9585813);
        mpfr_init(r9585814);
        mpfr_init(r9585815);
        mpfr_init_set_str(r9585816, "8.75", 10, MPFR_RNDN);
        mpfr_init(r9585817);
        mpfr_init(r9585818);
        mpfr_init(r9585819);
        mpfr_init_set_str(r9585820, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r9585821);
        mpfr_init(r9585822);
        mpfr_init(r9585823);
        mpfr_init_set_str(r9585824, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r9585825);
        mpfr_init(r9585826);
        mpfr_init(r9585827);
        mpfr_init_set_str(r9585828, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r9585829);
        mpfr_init(r9585830);
        mpfr_init(r9585831);
        mpfr_init_set_str(r9585832, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r9585833);
        mpfr_init(r9585834);
        mpfr_init(r9585835);
        mpfr_init_set_str(r9585836, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9585837);
        mpfr_init(r9585838);
        mpfr_init(r9585839);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9585803, x, MPFR_RNDN);
        mpfr_mul(r9585804, r9585802, r9585803, MPFR_RNDN);
        mpfr_add(r9585805, r9585801, r9585804, MPFR_RNDN);
        ;
        mpfr_mul(r9585807, r9585803, r9585803, MPFR_RNDN);
        mpfr_mul(r9585808, r9585806, r9585807, MPFR_RNDN);
        mpfr_sqrt(r9585809, r9585808, MPFR_RNDN);
        mpfr_mul(r9585810, r9585809, r9585809, MPFR_RNDN);
        mpfr_add(r9585811, r9585805, r9585810, MPFR_RNDN);
        ;
        mpfr_mul(r9585813, r9585807, r9585803, MPFR_RNDN);
        mpfr_mul(r9585814, r9585812, r9585813, MPFR_RNDN);
        mpfr_add(r9585815, r9585811, r9585814, MPFR_RNDN);
        ;
        mpfr_mul(r9585817, r9585813, r9585803, MPFR_RNDN);
        mpfr_mul(r9585818, r9585816, r9585817, MPFR_RNDN);
        mpfr_add(r9585819, r9585815, r9585818, MPFR_RNDN);
        ;
        mpfr_mul(r9585821, r9585817, r9585803, MPFR_RNDN);
        mpfr_mul(r9585822, r9585820, r9585821, MPFR_RNDN);
        mpfr_add(r9585823, r9585819, r9585822, MPFR_RNDN);
        ;
        mpfr_mul(r9585825, r9585821, r9585803, MPFR_RNDN);
        mpfr_mul(r9585826, r9585824, r9585825, MPFR_RNDN);
        mpfr_add(r9585827, r9585823, r9585826, MPFR_RNDN);
        ;
        mpfr_mul(r9585829, r9585825, r9585803, MPFR_RNDN);
        mpfr_mul(r9585830, r9585828, r9585829, MPFR_RNDN);
        mpfr_add(r9585831, r9585827, r9585830, MPFR_RNDN);
        ;
        mpfr_mul(r9585833, r9585829, r9585803, MPFR_RNDN);
        mpfr_mul(r9585834, r9585832, r9585833, MPFR_RNDN);
        mpfr_add(r9585835, r9585831, r9585834, MPFR_RNDN);
        ;
        mpfr_mul(r9585837, r9585833, r9585803, MPFR_RNDN);
        mpfr_mul(r9585838, r9585836, r9585837, MPFR_RNDN);
        mpfr_add(r9585839, r9585835, r9585838, MPFR_RNDN);
        return mpfr_get_d(r9585839, MPFR_RNDN);
}

