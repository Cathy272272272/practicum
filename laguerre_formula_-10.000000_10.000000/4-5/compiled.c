#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r10584639 = 1.0;
        float r10584640 = -5.0;
        float r10584641 = x;
        float r10584642 = r10584640 * r10584641;
        float r10584643 = r10584639 + r10584642;
        float r10584644 = 5.0;
        float r10584645 = r10584641 * r10584641;
        float r10584646 = r10584644 * r10584645;
        float r10584647 = r10584643 + r10584646;
        float r10584648 = -1.666667;
        float r10584649 = r10584645 * r10584641;
        float r10584650 = r10584648 * r10584649;
        float r10584651 = r10584647 + r10584650;
        float r10584652 = 0.208333;
        float r10584653 = r10584649 * r10584641;
        float r10584654 = r10584652 * r10584653;
        float r10584655 = r10584651 + r10584654;
        float r10584656 = -0.008333;
        float r10584657 = r10584653 * r10584641;
        float r10584658 = r10584656 * r10584657;
        float r10584659 = r10584655 + r10584658;
        return r10584659;
}

double f_id(double x) {
        double r10584660 = 1.0;
        double r10584661 = -5.0;
        double r10584662 = x;
        double r10584663 = r10584661 * r10584662;
        double r10584664 = r10584660 + r10584663;
        double r10584665 = 5.0;
        double r10584666 = r10584662 * r10584662;
        double r10584667 = r10584665 * r10584666;
        double r10584668 = r10584664 + r10584667;
        double r10584669 = -1.666667;
        double r10584670 = r10584666 * r10584662;
        double r10584671 = r10584669 * r10584670;
        double r10584672 = r10584668 + r10584671;
        double r10584673 = 0.208333;
        double r10584674 = r10584670 * r10584662;
        double r10584675 = r10584673 * r10584674;
        double r10584676 = r10584672 + r10584675;
        double r10584677 = -0.008333;
        double r10584678 = r10584674 * r10584662;
        double r10584679 = r10584677 * r10584678;
        double r10584680 = r10584676 + r10584679;
        return r10584680;
}


double f_of(float x) {
        float r10584681 = 1.0;
        float r10584682 = -5.0;
        float r10584683 = x;
        float r10584684 = r10584682 * r10584683;
        float r10584685 = r10584681 + r10584684;
        float r10584686 = 5.0;
        float r10584687 = r10584683 * r10584683;
        float r10584688 = r10584686 * r10584687;
        float r10584689 = exp(r10584688);
        float r10584690 = log(r10584689);
        float r10584691 = r10584685 + r10584690;
        float r10584692 = -1.666667;
        float r10584693 = r10584687 * r10584683;
        float r10584694 = r10584692 * r10584693;
        float r10584695 = r10584691 + r10584694;
        float r10584696 = 0.208333;
        float r10584697 = r10584693 * r10584683;
        float r10584698 = r10584696 * r10584697;
        float r10584699 = r10584695 + r10584698;
        float r10584700 = -0.008333;
        float r10584701 = r10584697 * r10584683;
        float r10584702 = r10584700 * r10584701;
        float r10584703 = r10584699 + r10584702;
        return r10584703;
}

double f_od(double x) {
        double r10584704 = 1.0;
        double r10584705 = -5.0;
        double r10584706 = x;
        double r10584707 = r10584705 * r10584706;
        double r10584708 = r10584704 + r10584707;
        double r10584709 = 5.0;
        double r10584710 = r10584706 * r10584706;
        double r10584711 = r10584709 * r10584710;
        double r10584712 = exp(r10584711);
        double r10584713 = log(r10584712);
        double r10584714 = r10584708 + r10584713;
        double r10584715 = -1.666667;
        double r10584716 = r10584710 * r10584706;
        double r10584717 = r10584715 * r10584716;
        double r10584718 = r10584714 + r10584717;
        double r10584719 = 0.208333;
        double r10584720 = r10584716 * r10584706;
        double r10584721 = r10584719 * r10584720;
        double r10584722 = r10584718 + r10584721;
        double r10584723 = -0.008333;
        double r10584724 = r10584720 * r10584706;
        double r10584725 = r10584723 * r10584724;
        double r10584726 = r10584722 + r10584725;
        return r10584726;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10584727, r10584728, r10584729, r10584730, r10584731, r10584732, r10584733, r10584734, r10584735, r10584736, r10584737, r10584738, r10584739, r10584740, r10584741, r10584742, r10584743, r10584744, r10584745, r10584746, r10584747;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10584727, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584728, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10584729);
        mpfr_init(r10584730);
        mpfr_init(r10584731);
        mpfr_init_set_str(r10584732, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10584733);
        mpfr_init(r10584734);
        mpfr_init(r10584735);
        mpfr_init_set_str(r10584736, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10584737);
        mpfr_init(r10584738);
        mpfr_init(r10584739);
        mpfr_init_set_str(r10584740, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10584741);
        mpfr_init(r10584742);
        mpfr_init(r10584743);
        mpfr_init_set_str(r10584744, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10584745);
        mpfr_init(r10584746);
        mpfr_init(r10584747);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10584729, x, MPFR_RNDN);
        mpfr_mul(r10584730, r10584728, r10584729, MPFR_RNDN);
        mpfr_add(r10584731, r10584727, r10584730, MPFR_RNDN);
        ;
        mpfr_mul(r10584733, r10584729, r10584729, MPFR_RNDN);
        mpfr_mul(r10584734, r10584732, r10584733, MPFR_RNDN);
        mpfr_add(r10584735, r10584731, r10584734, MPFR_RNDN);
        ;
        mpfr_mul(r10584737, r10584733, r10584729, MPFR_RNDN);
        mpfr_mul(r10584738, r10584736, r10584737, MPFR_RNDN);
        mpfr_add(r10584739, r10584735, r10584738, MPFR_RNDN);
        ;
        mpfr_mul(r10584741, r10584737, r10584729, MPFR_RNDN);
        mpfr_mul(r10584742, r10584740, r10584741, MPFR_RNDN);
        mpfr_add(r10584743, r10584739, r10584742, MPFR_RNDN);
        ;
        mpfr_mul(r10584745, r10584741, r10584729, MPFR_RNDN);
        mpfr_mul(r10584746, r10584744, r10584745, MPFR_RNDN);
        mpfr_add(r10584747, r10584743, r10584746, MPFR_RNDN);
        return mpfr_get_d(r10584747, MPFR_RNDN);
}

static mpfr_t r10584748, r10584749, r10584750, r10584751, r10584752, r10584753, r10584754, r10584755, r10584756, r10584757, r10584758, r10584759, r10584760, r10584761, r10584762, r10584763, r10584764, r10584765, r10584766, r10584767, r10584768, r10584769, r10584770;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10584748, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584749, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10584750);
        mpfr_init(r10584751);
        mpfr_init(r10584752);
        mpfr_init_set_str(r10584753, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10584754);
        mpfr_init(r10584755);
        mpfr_init(r10584756);
        mpfr_init(r10584757);
        mpfr_init(r10584758);
        mpfr_init_set_str(r10584759, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10584760);
        mpfr_init(r10584761);
        mpfr_init(r10584762);
        mpfr_init_set_str(r10584763, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10584764);
        mpfr_init(r10584765);
        mpfr_init(r10584766);
        mpfr_init_set_str(r10584767, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10584768);
        mpfr_init(r10584769);
        mpfr_init(r10584770);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10584750, x, MPFR_RNDN);
        mpfr_mul(r10584751, r10584749, r10584750, MPFR_RNDN);
        mpfr_add(r10584752, r10584748, r10584751, MPFR_RNDN);
        ;
        mpfr_mul(r10584754, r10584750, r10584750, MPFR_RNDN);
        mpfr_mul(r10584755, r10584753, r10584754, MPFR_RNDN);
        mpfr_exp(r10584756, r10584755, MPFR_RNDN);
        mpfr_log(r10584757, r10584756, MPFR_RNDN);
        mpfr_add(r10584758, r10584752, r10584757, MPFR_RNDN);
        ;
        mpfr_mul(r10584760, r10584754, r10584750, MPFR_RNDN);
        mpfr_mul(r10584761, r10584759, r10584760, MPFR_RNDN);
        mpfr_add(r10584762, r10584758, r10584761, MPFR_RNDN);
        ;
        mpfr_mul(r10584764, r10584760, r10584750, MPFR_RNDN);
        mpfr_mul(r10584765, r10584763, r10584764, MPFR_RNDN);
        mpfr_add(r10584766, r10584762, r10584765, MPFR_RNDN);
        ;
        mpfr_mul(r10584768, r10584764, r10584750, MPFR_RNDN);
        mpfr_mul(r10584769, r10584767, r10584768, MPFR_RNDN);
        mpfr_add(r10584770, r10584766, r10584769, MPFR_RNDN);
        return mpfr_get_d(r10584770, MPFR_RNDN);
}

static mpfr_t r10584771, r10584772, r10584773, r10584774, r10584775, r10584776, r10584777, r10584778, r10584779, r10584780, r10584781, r10584782, r10584783, r10584784, r10584785, r10584786, r10584787, r10584788, r10584789, r10584790, r10584791, r10584792, r10584793;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10584771, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584772, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10584773);
        mpfr_init(r10584774);
        mpfr_init(r10584775);
        mpfr_init_set_str(r10584776, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10584777);
        mpfr_init(r10584778);
        mpfr_init(r10584779);
        mpfr_init(r10584780);
        mpfr_init(r10584781);
        mpfr_init_set_str(r10584782, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10584783);
        mpfr_init(r10584784);
        mpfr_init(r10584785);
        mpfr_init_set_str(r10584786, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10584787);
        mpfr_init(r10584788);
        mpfr_init(r10584789);
        mpfr_init_set_str(r10584790, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10584791);
        mpfr_init(r10584792);
        mpfr_init(r10584793);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10584773, x, MPFR_RNDN);
        mpfr_mul(r10584774, r10584772, r10584773, MPFR_RNDN);
        mpfr_add(r10584775, r10584771, r10584774, MPFR_RNDN);
        ;
        mpfr_mul(r10584777, r10584773, r10584773, MPFR_RNDN);
        mpfr_mul(r10584778, r10584776, r10584777, MPFR_RNDN);
        mpfr_exp(r10584779, r10584778, MPFR_RNDN);
        mpfr_log(r10584780, r10584779, MPFR_RNDN);
        mpfr_add(r10584781, r10584775, r10584780, MPFR_RNDN);
        ;
        mpfr_mul(r10584783, r10584777, r10584773, MPFR_RNDN);
        mpfr_mul(r10584784, r10584782, r10584783, MPFR_RNDN);
        mpfr_add(r10584785, r10584781, r10584784, MPFR_RNDN);
        ;
        mpfr_mul(r10584787, r10584783, r10584773, MPFR_RNDN);
        mpfr_mul(r10584788, r10584786, r10584787, MPFR_RNDN);
        mpfr_add(r10584789, r10584785, r10584788, MPFR_RNDN);
        ;
        mpfr_mul(r10584791, r10584787, r10584773, MPFR_RNDN);
        mpfr_mul(r10584792, r10584790, r10584791, MPFR_RNDN);
        mpfr_add(r10584793, r10584789, r10584792, MPFR_RNDN);
        return mpfr_get_d(r10584793, MPFR_RNDN);
}

