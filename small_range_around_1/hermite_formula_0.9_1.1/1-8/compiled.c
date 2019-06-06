#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r46348642 = 1680.0;
        float r46348643 = -13440.0;
        float r46348644 = x;
        float r46348645 = r46348644 * r46348644;
        float r46348646 = r46348643 * r46348645;
        float r46348647 = r46348642 + r46348646;
        float r46348648 = 13440.0;
        float r46348649 = r46348645 * r46348644;
        float r46348650 = r46348649 * r46348644;
        float r46348651 = r46348648 * r46348650;
        float r46348652 = r46348647 + r46348651;
        float r46348653 = -3584.0;
        float r46348654 = r46348650 * r46348644;
        float r46348655 = r46348654 * r46348644;
        float r46348656 = r46348653 * r46348655;
        float r46348657 = r46348652 + r46348656;
        float r46348658 = 256.0;
        float r46348659 = r46348655 * r46348644;
        float r46348660 = r46348659 * r46348644;
        float r46348661 = r46348658 * r46348660;
        float r46348662 = r46348657 + r46348661;
        return r46348662;
}

double f_id(double x) {
        double r46348663 = 1680.0;
        double r46348664 = -13440.0;
        double r46348665 = x;
        double r46348666 = r46348665 * r46348665;
        double r46348667 = r46348664 * r46348666;
        double r46348668 = r46348663 + r46348667;
        double r46348669 = 13440.0;
        double r46348670 = r46348666 * r46348665;
        double r46348671 = r46348670 * r46348665;
        double r46348672 = r46348669 * r46348671;
        double r46348673 = r46348668 + r46348672;
        double r46348674 = -3584.0;
        double r46348675 = r46348671 * r46348665;
        double r46348676 = r46348675 * r46348665;
        double r46348677 = r46348674 * r46348676;
        double r46348678 = r46348673 + r46348677;
        double r46348679 = 256.0;
        double r46348680 = r46348676 * r46348665;
        double r46348681 = r46348680 * r46348665;
        double r46348682 = r46348679 * r46348681;
        double r46348683 = r46348678 + r46348682;
        return r46348683;
}


double f_of(float x) {
        float r46348684 = x;
        float r46348685 = 3;
        float r46348686 = pow(r46348684, r46348685);
        float r46348687 = r46348686 * r46348686;
        float r46348688 = 256.0;
        float r46348689 = r46348684 * r46348684;
        float r46348690 = r46348688 * r46348689;
        float r46348691 = r46348687 * r46348690;
        float r46348692 = 3584.0;
        float r46348693 = -r46348692;
        float r46348694 = r46348687 * r46348693;
        float r46348695 = pow(r46348686, r46348685);
        float r46348696 = r46348695 - r46348686;
        float r46348697 = r46348686 * r46348684;
        float r46348698 = r46348689 + r46348697;
        float r46348699 = r46348687 + r46348698;
        float r46348700 = r46348696 / r46348699;
        float r46348701 = 13440.0;
        float r46348702 = r46348701 * r46348684;
        float r46348703 = r46348700 * r46348702;
        float r46348704 = 1680.0;
        float r46348705 = r46348703 + r46348704;
        float r46348706 = r46348694 + r46348705;
        float r46348707 = r46348691 + r46348706;
        return r46348707;
}

double f_od(double x) {
        double r46348708 = x;
        double r46348709 = 3;
        double r46348710 = pow(r46348708, r46348709);
        double r46348711 = r46348710 * r46348710;
        double r46348712 = 256.0;
        double r46348713 = r46348708 * r46348708;
        double r46348714 = r46348712 * r46348713;
        double r46348715 = r46348711 * r46348714;
        double r46348716 = 3584.0;
        double r46348717 = -r46348716;
        double r46348718 = r46348711 * r46348717;
        double r46348719 = pow(r46348710, r46348709);
        double r46348720 = r46348719 - r46348710;
        double r46348721 = r46348710 * r46348708;
        double r46348722 = r46348713 + r46348721;
        double r46348723 = r46348711 + r46348722;
        double r46348724 = r46348720 / r46348723;
        double r46348725 = 13440.0;
        double r46348726 = r46348725 * r46348708;
        double r46348727 = r46348724 * r46348726;
        double r46348728 = 1680.0;
        double r46348729 = r46348727 + r46348728;
        double r46348730 = r46348718 + r46348729;
        double r46348731 = r46348715 + r46348730;
        return r46348731;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46348732, r46348733, r46348734, r46348735, r46348736, r46348737, r46348738, r46348739, r46348740, r46348741, r46348742, r46348743, r46348744, r46348745, r46348746, r46348747, r46348748, r46348749, r46348750, r46348751, r46348752;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46348732, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r46348733, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r46348734);
        mpfr_init(r46348735);
        mpfr_init(r46348736);
        mpfr_init(r46348737);
        mpfr_init_set_str(r46348738, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r46348739);
        mpfr_init(r46348740);
        mpfr_init(r46348741);
        mpfr_init(r46348742);
        mpfr_init_set_str(r46348743, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r46348744);
        mpfr_init(r46348745);
        mpfr_init(r46348746);
        mpfr_init(r46348747);
        mpfr_init_set_str(r46348748, "256.0", 10, MPFR_RNDN);
        mpfr_init(r46348749);
        mpfr_init(r46348750);
        mpfr_init(r46348751);
        mpfr_init(r46348752);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r46348734, x, MPFR_RNDN);
        mpfr_mul(r46348735, r46348734, r46348734, MPFR_RNDN);
        mpfr_mul(r46348736, r46348733, r46348735, MPFR_RNDN);
        mpfr_add(r46348737, r46348732, r46348736, MPFR_RNDN);
        ;
        mpfr_mul(r46348739, r46348735, r46348734, MPFR_RNDN);
        mpfr_mul(r46348740, r46348739, r46348734, MPFR_RNDN);
        mpfr_mul(r46348741, r46348738, r46348740, MPFR_RNDN);
        mpfr_add(r46348742, r46348737, r46348741, MPFR_RNDN);
        ;
        mpfr_mul(r46348744, r46348740, r46348734, MPFR_RNDN);
        mpfr_mul(r46348745, r46348744, r46348734, MPFR_RNDN);
        mpfr_mul(r46348746, r46348743, r46348745, MPFR_RNDN);
        mpfr_add(r46348747, r46348742, r46348746, MPFR_RNDN);
        ;
        mpfr_mul(r46348749, r46348745, r46348734, MPFR_RNDN);
        mpfr_mul(r46348750, r46348749, r46348734, MPFR_RNDN);
        mpfr_mul(r46348751, r46348748, r46348750, MPFR_RNDN);
        mpfr_add(r46348752, r46348747, r46348751, MPFR_RNDN);
        return mpfr_get_d(r46348752, MPFR_RNDN);
}

static mpfr_t r46348753, r46348754, r46348755, r46348756, r46348757, r46348758, r46348759, r46348760, r46348761, r46348762, r46348763, r46348764, r46348765, r46348766, r46348767, r46348768, r46348769, r46348770, r46348771, r46348772, r46348773, r46348774, r46348775, r46348776;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r46348753);
        mpfr_init_set_str(r46348754, "3", 10, MPFR_RNDN);
        mpfr_init(r46348755);
        mpfr_init(r46348756);
        mpfr_init_set_str(r46348757, "256.0", 10, MPFR_RNDN);
        mpfr_init(r46348758);
        mpfr_init(r46348759);
        mpfr_init(r46348760);
        mpfr_init_set_str(r46348761, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r46348762);
        mpfr_init(r46348763);
        mpfr_init(r46348764);
        mpfr_init(r46348765);
        mpfr_init(r46348766);
        mpfr_init(r46348767);
        mpfr_init(r46348768);
        mpfr_init(r46348769);
        mpfr_init_set_str(r46348770, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r46348771);
        mpfr_init(r46348772);
        mpfr_init_set_str(r46348773, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r46348774);
        mpfr_init(r46348775);
        mpfr_init(r46348776);
}

double f_fm(double x) {
        mpfr_set_d(r46348753, x, MPFR_RNDN);
        ;
        mpfr_pow(r46348755, r46348753, r46348754, MPFR_RNDN);
        mpfr_mul(r46348756, r46348755, r46348755, MPFR_RNDN);
        ;
        mpfr_mul(r46348758, r46348753, r46348753, MPFR_RNDN);
        mpfr_mul(r46348759, r46348757, r46348758, MPFR_RNDN);
        mpfr_mul(r46348760, r46348756, r46348759, MPFR_RNDN);
        ;
        mpfr_neg(r46348762, r46348761, MPFR_RNDN);
        mpfr_mul(r46348763, r46348756, r46348762, MPFR_RNDN);
        mpfr_pow(r46348764, r46348755, r46348754, MPFR_RNDN);
        mpfr_sub(r46348765, r46348764, r46348755, MPFR_RNDN);
        mpfr_mul(r46348766, r46348755, r46348753, MPFR_RNDN);
        mpfr_add(r46348767, r46348758, r46348766, MPFR_RNDN);
        mpfr_add(r46348768, r46348756, r46348767, MPFR_RNDN);
        mpfr_div(r46348769, r46348765, r46348768, MPFR_RNDN);
        ;
        mpfr_mul(r46348771, r46348770, r46348753, MPFR_RNDN);
        mpfr_mul(r46348772, r46348769, r46348771, MPFR_RNDN);
        ;
        mpfr_add(r46348774, r46348772, r46348773, MPFR_RNDN);
        mpfr_add(r46348775, r46348763, r46348774, MPFR_RNDN);
        mpfr_add(r46348776, r46348760, r46348775, MPFR_RNDN);
        return mpfr_get_d(r46348776, MPFR_RNDN);
}

static mpfr_t r46348777, r46348778, r46348779, r46348780, r46348781, r46348782, r46348783, r46348784, r46348785, r46348786, r46348787, r46348788, r46348789, r46348790, r46348791, r46348792, r46348793, r46348794, r46348795, r46348796, r46348797, r46348798, r46348799, r46348800;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r46348777);
        mpfr_init_set_str(r46348778, "3", 10, MPFR_RNDN);
        mpfr_init(r46348779);
        mpfr_init(r46348780);
        mpfr_init_set_str(r46348781, "256.0", 10, MPFR_RNDN);
        mpfr_init(r46348782);
        mpfr_init(r46348783);
        mpfr_init(r46348784);
        mpfr_init_set_str(r46348785, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r46348786);
        mpfr_init(r46348787);
        mpfr_init(r46348788);
        mpfr_init(r46348789);
        mpfr_init(r46348790);
        mpfr_init(r46348791);
        mpfr_init(r46348792);
        mpfr_init(r46348793);
        mpfr_init_set_str(r46348794, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r46348795);
        mpfr_init(r46348796);
        mpfr_init_set_str(r46348797, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r46348798);
        mpfr_init(r46348799);
        mpfr_init(r46348800);
}

double f_dm(double x) {
        mpfr_set_d(r46348777, x, MPFR_RNDN);
        ;
        mpfr_pow(r46348779, r46348777, r46348778, MPFR_RNDN);
        mpfr_mul(r46348780, r46348779, r46348779, MPFR_RNDN);
        ;
        mpfr_mul(r46348782, r46348777, r46348777, MPFR_RNDN);
        mpfr_mul(r46348783, r46348781, r46348782, MPFR_RNDN);
        mpfr_mul(r46348784, r46348780, r46348783, MPFR_RNDN);
        ;
        mpfr_neg(r46348786, r46348785, MPFR_RNDN);
        mpfr_mul(r46348787, r46348780, r46348786, MPFR_RNDN);
        mpfr_pow(r46348788, r46348779, r46348778, MPFR_RNDN);
        mpfr_sub(r46348789, r46348788, r46348779, MPFR_RNDN);
        mpfr_mul(r46348790, r46348779, r46348777, MPFR_RNDN);
        mpfr_add(r46348791, r46348782, r46348790, MPFR_RNDN);
        mpfr_add(r46348792, r46348780, r46348791, MPFR_RNDN);
        mpfr_div(r46348793, r46348789, r46348792, MPFR_RNDN);
        ;
        mpfr_mul(r46348795, r46348794, r46348777, MPFR_RNDN);
        mpfr_mul(r46348796, r46348793, r46348795, MPFR_RNDN);
        ;
        mpfr_add(r46348798, r46348796, r46348797, MPFR_RNDN);
        mpfr_add(r46348799, r46348787, r46348798, MPFR_RNDN);
        mpfr_add(r46348800, r46348784, r46348799, MPFR_RNDN);
        return mpfr_get_d(r46348800, MPFR_RNDN);
}

