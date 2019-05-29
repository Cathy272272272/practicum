#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r8206603 = -665280.0;
        float r8206604 = x;
        float r8206605 = r8206603 * r8206604;
        float r8206606 = 2217600.0;
        float r8206607 = r8206604 * r8206604;
        float r8206608 = r8206607 * r8206604;
        float r8206609 = r8206606 * r8206608;
        float r8206610 = r8206605 + r8206609;
        float r8206611 = -1774080.0;
        float r8206612 = r8206608 * r8206604;
        float r8206613 = r8206612 * r8206604;
        float r8206614 = r8206611 * r8206613;
        float r8206615 = r8206610 + r8206614;
        float r8206616 = 506880.0;
        float r8206617 = r8206613 * r8206604;
        float r8206618 = r8206617 * r8206604;
        float r8206619 = r8206616 * r8206618;
        float r8206620 = r8206615 + r8206619;
        float r8206621 = -56320.0;
        float r8206622 = r8206618 * r8206604;
        float r8206623 = r8206622 * r8206604;
        float r8206624 = r8206621 * r8206623;
        float r8206625 = r8206620 + r8206624;
        float r8206626 = 2048.0;
        float r8206627 = r8206623 * r8206604;
        float r8206628 = r8206627 * r8206604;
        float r8206629 = r8206626 * r8206628;
        float r8206630 = r8206625 + r8206629;
        return r8206630;
}

double f_id(double x) {
        double r8206631 = -665280.0;
        double r8206632 = x;
        double r8206633 = r8206631 * r8206632;
        double r8206634 = 2217600.0;
        double r8206635 = r8206632 * r8206632;
        double r8206636 = r8206635 * r8206632;
        double r8206637 = r8206634 * r8206636;
        double r8206638 = r8206633 + r8206637;
        double r8206639 = -1774080.0;
        double r8206640 = r8206636 * r8206632;
        double r8206641 = r8206640 * r8206632;
        double r8206642 = r8206639 * r8206641;
        double r8206643 = r8206638 + r8206642;
        double r8206644 = 506880.0;
        double r8206645 = r8206641 * r8206632;
        double r8206646 = r8206645 * r8206632;
        double r8206647 = r8206644 * r8206646;
        double r8206648 = r8206643 + r8206647;
        double r8206649 = -56320.0;
        double r8206650 = r8206646 * r8206632;
        double r8206651 = r8206650 * r8206632;
        double r8206652 = r8206649 * r8206651;
        double r8206653 = r8206648 + r8206652;
        double r8206654 = 2048.0;
        double r8206655 = r8206651 * r8206632;
        double r8206656 = r8206655 * r8206632;
        double r8206657 = r8206654 * r8206656;
        double r8206658 = r8206653 + r8206657;
        return r8206658;
}


double f_of(float x) {
        float r8206659 = x;
        float r8206660 = 3;
        float r8206661 = pow(r8206659, r8206660);
        float r8206662 = r8206661 * r8206661;
        float r8206663 = r8206662 * r8206661;
        float r8206664 = -56320.0;
        float r8206665 = 2048.0;
        float r8206666 = r8206659 * r8206659;
        float r8206667 = r8206665 * r8206666;
        float r8206668 = r8206664 + r8206667;
        float r8206669 = r8206663 * r8206668;
        float r8206670 = -665280.0;
        float r8206671 = r8206670 * r8206659;
        float r8206672 = r8206669 + r8206671;
        float r8206673 = 2217600.0;
        float r8206674 = r8206673 * r8206659;
        float r8206675 = -1774080.0;
        float r8206676 = r8206659 * r8206675;
        float r8206677 = r8206676 * r8206666;
        float r8206678 = r8206674 + r8206677;
        float r8206679 = r8206666 * r8206678;
        float r8206680 = 506880.0;
        float r8206681 = r8206659 * r8206680;
        float r8206682 = r8206681 * r8206666;
        float r8206683 = r8206666 * r8206666;
        float r8206684 = r8206682 * r8206683;
        float r8206685 = r8206679 + r8206684;
        float r8206686 = r8206672 + r8206685;
        return r8206686;
}

double f_od(double x) {
        double r8206687 = x;
        double r8206688 = 3;
        double r8206689 = pow(r8206687, r8206688);
        double r8206690 = r8206689 * r8206689;
        double r8206691 = r8206690 * r8206689;
        double r8206692 = -56320.0;
        double r8206693 = 2048.0;
        double r8206694 = r8206687 * r8206687;
        double r8206695 = r8206693 * r8206694;
        double r8206696 = r8206692 + r8206695;
        double r8206697 = r8206691 * r8206696;
        double r8206698 = -665280.0;
        double r8206699 = r8206698 * r8206687;
        double r8206700 = r8206697 + r8206699;
        double r8206701 = 2217600.0;
        double r8206702 = r8206701 * r8206687;
        double r8206703 = -1774080.0;
        double r8206704 = r8206687 * r8206703;
        double r8206705 = r8206704 * r8206694;
        double r8206706 = r8206702 + r8206705;
        double r8206707 = r8206694 * r8206706;
        double r8206708 = 506880.0;
        double r8206709 = r8206687 * r8206708;
        double r8206710 = r8206709 * r8206694;
        double r8206711 = r8206694 * r8206694;
        double r8206712 = r8206710 * r8206711;
        double r8206713 = r8206707 + r8206712;
        double r8206714 = r8206700 + r8206713;
        return r8206714;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8206715, r8206716, r8206717, r8206718, r8206719, r8206720, r8206721, r8206722, r8206723, r8206724, r8206725, r8206726, r8206727, r8206728, r8206729, r8206730, r8206731, r8206732, r8206733, r8206734, r8206735, r8206736, r8206737, r8206738, r8206739, r8206740, r8206741, r8206742;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8206715, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r8206716);
        mpfr_init(r8206717);
        mpfr_init_set_str(r8206718, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r8206719);
        mpfr_init(r8206720);
        mpfr_init(r8206721);
        mpfr_init(r8206722);
        mpfr_init_set_str(r8206723, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r8206724);
        mpfr_init(r8206725);
        mpfr_init(r8206726);
        mpfr_init(r8206727);
        mpfr_init_set_str(r8206728, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r8206729);
        mpfr_init(r8206730);
        mpfr_init(r8206731);
        mpfr_init(r8206732);
        mpfr_init_set_str(r8206733, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r8206734);
        mpfr_init(r8206735);
        mpfr_init(r8206736);
        mpfr_init(r8206737);
        mpfr_init_set_str(r8206738, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r8206739);
        mpfr_init(r8206740);
        mpfr_init(r8206741);
        mpfr_init(r8206742);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8206716, x, MPFR_RNDN);
        mpfr_mul(r8206717, r8206715, r8206716, MPFR_RNDN);
        ;
        mpfr_mul(r8206719, r8206716, r8206716, MPFR_RNDN);
        mpfr_mul(r8206720, r8206719, r8206716, MPFR_RNDN);
        mpfr_mul(r8206721, r8206718, r8206720, MPFR_RNDN);
        mpfr_add(r8206722, r8206717, r8206721, MPFR_RNDN);
        ;
        mpfr_mul(r8206724, r8206720, r8206716, MPFR_RNDN);
        mpfr_mul(r8206725, r8206724, r8206716, MPFR_RNDN);
        mpfr_mul(r8206726, r8206723, r8206725, MPFR_RNDN);
        mpfr_add(r8206727, r8206722, r8206726, MPFR_RNDN);
        ;
        mpfr_mul(r8206729, r8206725, r8206716, MPFR_RNDN);
        mpfr_mul(r8206730, r8206729, r8206716, MPFR_RNDN);
        mpfr_mul(r8206731, r8206728, r8206730, MPFR_RNDN);
        mpfr_add(r8206732, r8206727, r8206731, MPFR_RNDN);
        ;
        mpfr_mul(r8206734, r8206730, r8206716, MPFR_RNDN);
        mpfr_mul(r8206735, r8206734, r8206716, MPFR_RNDN);
        mpfr_mul(r8206736, r8206733, r8206735, MPFR_RNDN);
        mpfr_add(r8206737, r8206732, r8206736, MPFR_RNDN);
        ;
        mpfr_mul(r8206739, r8206735, r8206716, MPFR_RNDN);
        mpfr_mul(r8206740, r8206739, r8206716, MPFR_RNDN);
        mpfr_mul(r8206741, r8206738, r8206740, MPFR_RNDN);
        mpfr_add(r8206742, r8206737, r8206741, MPFR_RNDN);
        return mpfr_get_d(r8206742, MPFR_RNDN);
}

static mpfr_t r8206743, r8206744, r8206745, r8206746, r8206747, r8206748, r8206749, r8206750, r8206751, r8206752, r8206753, r8206754, r8206755, r8206756, r8206757, r8206758, r8206759, r8206760, r8206761, r8206762, r8206763, r8206764, r8206765, r8206766, r8206767, r8206768, r8206769, r8206770;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8206743);
        mpfr_init_set_str(r8206744, "3", 10, MPFR_RNDN);
        mpfr_init(r8206745);
        mpfr_init(r8206746);
        mpfr_init(r8206747);
        mpfr_init_set_str(r8206748, "-56320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8206749, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r8206750);
        mpfr_init(r8206751);
        mpfr_init(r8206752);
        mpfr_init(r8206753);
        mpfr_init_set_str(r8206754, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r8206755);
        mpfr_init(r8206756);
        mpfr_init_set_str(r8206757, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r8206758);
        mpfr_init_set_str(r8206759, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r8206760);
        mpfr_init(r8206761);
        mpfr_init(r8206762);
        mpfr_init(r8206763);
        mpfr_init_set_str(r8206764, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r8206765);
        mpfr_init(r8206766);
        mpfr_init(r8206767);
        mpfr_init(r8206768);
        mpfr_init(r8206769);
        mpfr_init(r8206770);
}

double f_fm(double x) {
        mpfr_set_d(r8206743, x, MPFR_RNDN);
        ;
        mpfr_pow(r8206745, r8206743, r8206744, MPFR_RNDN);
        mpfr_mul(r8206746, r8206745, r8206745, MPFR_RNDN);
        mpfr_mul(r8206747, r8206746, r8206745, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8206750, r8206743, r8206743, MPFR_RNDN);
        mpfr_mul(r8206751, r8206749, r8206750, MPFR_RNDN);
        mpfr_add(r8206752, r8206748, r8206751, MPFR_RNDN);
        mpfr_mul(r8206753, r8206747, r8206752, MPFR_RNDN);
        ;
        mpfr_mul(r8206755, r8206754, r8206743, MPFR_RNDN);
        mpfr_add(r8206756, r8206753, r8206755, MPFR_RNDN);
        ;
        mpfr_mul(r8206758, r8206757, r8206743, MPFR_RNDN);
        ;
        mpfr_mul(r8206760, r8206743, r8206759, MPFR_RNDN);
        mpfr_mul(r8206761, r8206760, r8206750, MPFR_RNDN);
        mpfr_add(r8206762, r8206758, r8206761, MPFR_RNDN);
        mpfr_mul(r8206763, r8206750, r8206762, MPFR_RNDN);
        ;
        mpfr_mul(r8206765, r8206743, r8206764, MPFR_RNDN);
        mpfr_mul(r8206766, r8206765, r8206750, MPFR_RNDN);
        mpfr_mul(r8206767, r8206750, r8206750, MPFR_RNDN);
        mpfr_mul(r8206768, r8206766, r8206767, MPFR_RNDN);
        mpfr_add(r8206769, r8206763, r8206768, MPFR_RNDN);
        mpfr_add(r8206770, r8206756, r8206769, MPFR_RNDN);
        return mpfr_get_d(r8206770, MPFR_RNDN);
}

static mpfr_t r8206771, r8206772, r8206773, r8206774, r8206775, r8206776, r8206777, r8206778, r8206779, r8206780, r8206781, r8206782, r8206783, r8206784, r8206785, r8206786, r8206787, r8206788, r8206789, r8206790, r8206791, r8206792, r8206793, r8206794, r8206795, r8206796, r8206797, r8206798;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8206771);
        mpfr_init_set_str(r8206772, "3", 10, MPFR_RNDN);
        mpfr_init(r8206773);
        mpfr_init(r8206774);
        mpfr_init(r8206775);
        mpfr_init_set_str(r8206776, "-56320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8206777, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r8206778);
        mpfr_init(r8206779);
        mpfr_init(r8206780);
        mpfr_init(r8206781);
        mpfr_init_set_str(r8206782, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r8206783);
        mpfr_init(r8206784);
        mpfr_init_set_str(r8206785, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r8206786);
        mpfr_init_set_str(r8206787, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r8206788);
        mpfr_init(r8206789);
        mpfr_init(r8206790);
        mpfr_init(r8206791);
        mpfr_init_set_str(r8206792, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r8206793);
        mpfr_init(r8206794);
        mpfr_init(r8206795);
        mpfr_init(r8206796);
        mpfr_init(r8206797);
        mpfr_init(r8206798);
}

double f_dm(double x) {
        mpfr_set_d(r8206771, x, MPFR_RNDN);
        ;
        mpfr_pow(r8206773, r8206771, r8206772, MPFR_RNDN);
        mpfr_mul(r8206774, r8206773, r8206773, MPFR_RNDN);
        mpfr_mul(r8206775, r8206774, r8206773, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8206778, r8206771, r8206771, MPFR_RNDN);
        mpfr_mul(r8206779, r8206777, r8206778, MPFR_RNDN);
        mpfr_add(r8206780, r8206776, r8206779, MPFR_RNDN);
        mpfr_mul(r8206781, r8206775, r8206780, MPFR_RNDN);
        ;
        mpfr_mul(r8206783, r8206782, r8206771, MPFR_RNDN);
        mpfr_add(r8206784, r8206781, r8206783, MPFR_RNDN);
        ;
        mpfr_mul(r8206786, r8206785, r8206771, MPFR_RNDN);
        ;
        mpfr_mul(r8206788, r8206771, r8206787, MPFR_RNDN);
        mpfr_mul(r8206789, r8206788, r8206778, MPFR_RNDN);
        mpfr_add(r8206790, r8206786, r8206789, MPFR_RNDN);
        mpfr_mul(r8206791, r8206778, r8206790, MPFR_RNDN);
        ;
        mpfr_mul(r8206793, r8206771, r8206792, MPFR_RNDN);
        mpfr_mul(r8206794, r8206793, r8206778, MPFR_RNDN);
        mpfr_mul(r8206795, r8206778, r8206778, MPFR_RNDN);
        mpfr_mul(r8206796, r8206794, r8206795, MPFR_RNDN);
        mpfr_add(r8206797, r8206791, r8206796, MPFR_RNDN);
        mpfr_add(r8206798, r8206784, r8206797, MPFR_RNDN);
        return mpfr_get_d(r8206798, MPFR_RNDN);
}

