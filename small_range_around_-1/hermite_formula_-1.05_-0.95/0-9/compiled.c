#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r60542615 = 30240.0;
        float r60542616 = x;
        float r60542617 = r60542615 * r60542616;
        float r60542618 = -80640.0;
        float r60542619 = r60542616 * r60542616;
        float r60542620 = r60542619 * r60542616;
        float r60542621 = r60542618 * r60542620;
        float r60542622 = r60542617 + r60542621;
        float r60542623 = 48384.0;
        float r60542624 = r60542620 * r60542616;
        float r60542625 = r60542624 * r60542616;
        float r60542626 = r60542623 * r60542625;
        float r60542627 = r60542622 + r60542626;
        float r60542628 = -9216.0;
        float r60542629 = r60542625 * r60542616;
        float r60542630 = r60542629 * r60542616;
        float r60542631 = r60542628 * r60542630;
        float r60542632 = r60542627 + r60542631;
        float r60542633 = 512.0;
        float r60542634 = r60542630 * r60542616;
        float r60542635 = r60542634 * r60542616;
        float r60542636 = r60542633 * r60542635;
        float r60542637 = r60542632 + r60542636;
        return r60542637;
}

double f_id(double x) {
        double r60542638 = 30240.0;
        double r60542639 = x;
        double r60542640 = r60542638 * r60542639;
        double r60542641 = -80640.0;
        double r60542642 = r60542639 * r60542639;
        double r60542643 = r60542642 * r60542639;
        double r60542644 = r60542641 * r60542643;
        double r60542645 = r60542640 + r60542644;
        double r60542646 = 48384.0;
        double r60542647 = r60542643 * r60542639;
        double r60542648 = r60542647 * r60542639;
        double r60542649 = r60542646 * r60542648;
        double r60542650 = r60542645 + r60542649;
        double r60542651 = -9216.0;
        double r60542652 = r60542648 * r60542639;
        double r60542653 = r60542652 * r60542639;
        double r60542654 = r60542651 * r60542653;
        double r60542655 = r60542650 + r60542654;
        double r60542656 = 512.0;
        double r60542657 = r60542653 * r60542639;
        double r60542658 = r60542657 * r60542639;
        double r60542659 = r60542656 * r60542658;
        double r60542660 = r60542655 + r60542659;
        return r60542660;
}


double f_of(float x) {
        float r60542661 = x;
        float r60542662 = r60542661 * r60542661;
        float r60542663 = -80640.0;
        float r60542664 = r60542663 * r60542661;
        float r60542665 = 48384.0;
        float r60542666 = r60542661 * r60542665;
        float r60542667 = r60542662 * r60542666;
        float r60542668 = r60542664 + r60542667;
        float r60542669 = r60542662 * r60542668;
        float r60542670 = 7;
        float r60542671 = pow(r60542661, r60542670);
        float r60542672 = -9216.0;
        float r60542673 = r60542671 * r60542672;
        float r60542674 = 30240.0;
        float r60542675 = r60542674 * r60542661;
        float r60542676 = r60542673 + r60542675;
        float r60542677 = r60542669 + r60542676;
        float r60542678 = cbrt(r60542677);
        float r60542679 = r60542678 * r60542678;
        float r60542680 = r60542679 * r60542678;
        float r60542681 = 512.0;
        float r60542682 = r60542681 * r60542661;
        float r60542683 = 1;
        float r60542684 = 3;
        float r60542685 = r60542683 + r60542684;
        float r60542686 = pow(r60542662, r60542685);
        float r60542687 = r60542682 * r60542686;
        float r60542688 = r60542680 + r60542687;
        return r60542688;
}

double f_od(double x) {
        double r60542689 = x;
        double r60542690 = r60542689 * r60542689;
        double r60542691 = -80640.0;
        double r60542692 = r60542691 * r60542689;
        double r60542693 = 48384.0;
        double r60542694 = r60542689 * r60542693;
        double r60542695 = r60542690 * r60542694;
        double r60542696 = r60542692 + r60542695;
        double r60542697 = r60542690 * r60542696;
        double r60542698 = 7;
        double r60542699 = pow(r60542689, r60542698);
        double r60542700 = -9216.0;
        double r60542701 = r60542699 * r60542700;
        double r60542702 = 30240.0;
        double r60542703 = r60542702 * r60542689;
        double r60542704 = r60542701 + r60542703;
        double r60542705 = r60542697 + r60542704;
        double r60542706 = cbrt(r60542705);
        double r60542707 = r60542706 * r60542706;
        double r60542708 = r60542707 * r60542706;
        double r60542709 = 512.0;
        double r60542710 = r60542709 * r60542689;
        double r60542711 = 1;
        double r60542712 = 3;
        double r60542713 = r60542711 + r60542712;
        double r60542714 = pow(r60542690, r60542713);
        double r60542715 = r60542710 * r60542714;
        double r60542716 = r60542708 + r60542715;
        return r60542716;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60542717, r60542718, r60542719, r60542720, r60542721, r60542722, r60542723, r60542724, r60542725, r60542726, r60542727, r60542728, r60542729, r60542730, r60542731, r60542732, r60542733, r60542734, r60542735, r60542736, r60542737, r60542738, r60542739;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60542717, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r60542718);
        mpfr_init(r60542719);
        mpfr_init_set_str(r60542720, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r60542721);
        mpfr_init(r60542722);
        mpfr_init(r60542723);
        mpfr_init(r60542724);
        mpfr_init_set_str(r60542725, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r60542726);
        mpfr_init(r60542727);
        mpfr_init(r60542728);
        mpfr_init(r60542729);
        mpfr_init_set_str(r60542730, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r60542731);
        mpfr_init(r60542732);
        mpfr_init(r60542733);
        mpfr_init(r60542734);
        mpfr_init_set_str(r60542735, "512.0", 10, MPFR_RNDN);
        mpfr_init(r60542736);
        mpfr_init(r60542737);
        mpfr_init(r60542738);
        mpfr_init(r60542739);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60542718, x, MPFR_RNDN);
        mpfr_mul(r60542719, r60542717, r60542718, MPFR_RNDN);
        ;
        mpfr_mul(r60542721, r60542718, r60542718, MPFR_RNDN);
        mpfr_mul(r60542722, r60542721, r60542718, MPFR_RNDN);
        mpfr_mul(r60542723, r60542720, r60542722, MPFR_RNDN);
        mpfr_add(r60542724, r60542719, r60542723, MPFR_RNDN);
        ;
        mpfr_mul(r60542726, r60542722, r60542718, MPFR_RNDN);
        mpfr_mul(r60542727, r60542726, r60542718, MPFR_RNDN);
        mpfr_mul(r60542728, r60542725, r60542727, MPFR_RNDN);
        mpfr_add(r60542729, r60542724, r60542728, MPFR_RNDN);
        ;
        mpfr_mul(r60542731, r60542727, r60542718, MPFR_RNDN);
        mpfr_mul(r60542732, r60542731, r60542718, MPFR_RNDN);
        mpfr_mul(r60542733, r60542730, r60542732, MPFR_RNDN);
        mpfr_add(r60542734, r60542729, r60542733, MPFR_RNDN);
        ;
        mpfr_mul(r60542736, r60542732, r60542718, MPFR_RNDN);
        mpfr_mul(r60542737, r60542736, r60542718, MPFR_RNDN);
        mpfr_mul(r60542738, r60542735, r60542737, MPFR_RNDN);
        mpfr_add(r60542739, r60542734, r60542738, MPFR_RNDN);
        return mpfr_get_d(r60542739, MPFR_RNDN);
}

static mpfr_t r60542740, r60542741, r60542742, r60542743, r60542744, r60542745, r60542746, r60542747, r60542748, r60542749, r60542750, r60542751, r60542752, r60542753, r60542754, r60542755, r60542756, r60542757, r60542758, r60542759, r60542760, r60542761, r60542762, r60542763, r60542764, r60542765, r60542766, r60542767;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60542740);
        mpfr_init(r60542741);
        mpfr_init_set_str(r60542742, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r60542743);
        mpfr_init_set_str(r60542744, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r60542745);
        mpfr_init(r60542746);
        mpfr_init(r60542747);
        mpfr_init(r60542748);
        mpfr_init_set_str(r60542749, "7", 10, MPFR_RNDN);
        mpfr_init(r60542750);
        mpfr_init_set_str(r60542751, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r60542752);
        mpfr_init_set_str(r60542753, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r60542754);
        mpfr_init(r60542755);
        mpfr_init(r60542756);
        mpfr_init(r60542757);
        mpfr_init(r60542758);
        mpfr_init(r60542759);
        mpfr_init_set_str(r60542760, "512.0", 10, MPFR_RNDN);
        mpfr_init(r60542761);
        mpfr_init_set_str(r60542762, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r60542763, "3", 10, MPFR_RNDN);
        mpfr_init(r60542764);
        mpfr_init(r60542765);
        mpfr_init(r60542766);
        mpfr_init(r60542767);
}

double f_fm(double x) {
        mpfr_set_d(r60542740, x, MPFR_RNDN);
        mpfr_mul(r60542741, r60542740, r60542740, MPFR_RNDN);
        ;
        mpfr_mul(r60542743, r60542742, r60542740, MPFR_RNDN);
        ;
        mpfr_mul(r60542745, r60542740, r60542744, MPFR_RNDN);
        mpfr_mul(r60542746, r60542741, r60542745, MPFR_RNDN);
        mpfr_add(r60542747, r60542743, r60542746, MPFR_RNDN);
        mpfr_mul(r60542748, r60542741, r60542747, MPFR_RNDN);
        ;
        mpfr_pow(r60542750, r60542740, r60542749, MPFR_RNDN);
        ;
        mpfr_mul(r60542752, r60542750, r60542751, MPFR_RNDN);
        ;
        mpfr_mul(r60542754, r60542753, r60542740, MPFR_RNDN);
        mpfr_add(r60542755, r60542752, r60542754, MPFR_RNDN);
        mpfr_add(r60542756, r60542748, r60542755, MPFR_RNDN);
        mpfr_cbrt(r60542757, r60542756, MPFR_RNDN);
        mpfr_mul(r60542758, r60542757, r60542757, MPFR_RNDN);
        mpfr_mul(r60542759, r60542758, r60542757, MPFR_RNDN);
        ;
        mpfr_mul(r60542761, r60542760, r60542740, MPFR_RNDN);
        ;
        ;
        mpfr_add(r60542764, r60542762, r60542763, MPFR_RNDN);
        mpfr_pow(r60542765, r60542741, r60542764, MPFR_RNDN);
        mpfr_mul(r60542766, r60542761, r60542765, MPFR_RNDN);
        mpfr_add(r60542767, r60542759, r60542766, MPFR_RNDN);
        return mpfr_get_d(r60542767, MPFR_RNDN);
}

static mpfr_t r60542768, r60542769, r60542770, r60542771, r60542772, r60542773, r60542774, r60542775, r60542776, r60542777, r60542778, r60542779, r60542780, r60542781, r60542782, r60542783, r60542784, r60542785, r60542786, r60542787, r60542788, r60542789, r60542790, r60542791, r60542792, r60542793, r60542794, r60542795;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60542768);
        mpfr_init(r60542769);
        mpfr_init_set_str(r60542770, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r60542771);
        mpfr_init_set_str(r60542772, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r60542773);
        mpfr_init(r60542774);
        mpfr_init(r60542775);
        mpfr_init(r60542776);
        mpfr_init_set_str(r60542777, "7", 10, MPFR_RNDN);
        mpfr_init(r60542778);
        mpfr_init_set_str(r60542779, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r60542780);
        mpfr_init_set_str(r60542781, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r60542782);
        mpfr_init(r60542783);
        mpfr_init(r60542784);
        mpfr_init(r60542785);
        mpfr_init(r60542786);
        mpfr_init(r60542787);
        mpfr_init_set_str(r60542788, "512.0", 10, MPFR_RNDN);
        mpfr_init(r60542789);
        mpfr_init_set_str(r60542790, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r60542791, "3", 10, MPFR_RNDN);
        mpfr_init(r60542792);
        mpfr_init(r60542793);
        mpfr_init(r60542794);
        mpfr_init(r60542795);
}

double f_dm(double x) {
        mpfr_set_d(r60542768, x, MPFR_RNDN);
        mpfr_mul(r60542769, r60542768, r60542768, MPFR_RNDN);
        ;
        mpfr_mul(r60542771, r60542770, r60542768, MPFR_RNDN);
        ;
        mpfr_mul(r60542773, r60542768, r60542772, MPFR_RNDN);
        mpfr_mul(r60542774, r60542769, r60542773, MPFR_RNDN);
        mpfr_add(r60542775, r60542771, r60542774, MPFR_RNDN);
        mpfr_mul(r60542776, r60542769, r60542775, MPFR_RNDN);
        ;
        mpfr_pow(r60542778, r60542768, r60542777, MPFR_RNDN);
        ;
        mpfr_mul(r60542780, r60542778, r60542779, MPFR_RNDN);
        ;
        mpfr_mul(r60542782, r60542781, r60542768, MPFR_RNDN);
        mpfr_add(r60542783, r60542780, r60542782, MPFR_RNDN);
        mpfr_add(r60542784, r60542776, r60542783, MPFR_RNDN);
        mpfr_cbrt(r60542785, r60542784, MPFR_RNDN);
        mpfr_mul(r60542786, r60542785, r60542785, MPFR_RNDN);
        mpfr_mul(r60542787, r60542786, r60542785, MPFR_RNDN);
        ;
        mpfr_mul(r60542789, r60542788, r60542768, MPFR_RNDN);
        ;
        ;
        mpfr_add(r60542792, r60542790, r60542791, MPFR_RNDN);
        mpfr_pow(r60542793, r60542769, r60542792, MPFR_RNDN);
        mpfr_mul(r60542794, r60542789, r60542793, MPFR_RNDN);
        mpfr_add(r60542795, r60542787, r60542794, MPFR_RNDN);
        return mpfr_get_d(r60542795, MPFR_RNDN);
}

