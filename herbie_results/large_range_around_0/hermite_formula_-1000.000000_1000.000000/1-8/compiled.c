#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r12289604 = 1680.0;
        float r12289605 = -13440.0;
        float r12289606 = x;
        float r12289607 = r12289606 * r12289606;
        float r12289608 = r12289605 * r12289607;
        float r12289609 = r12289604 + r12289608;
        float r12289610 = 13440.0;
        float r12289611 = r12289607 * r12289606;
        float r12289612 = r12289611 * r12289606;
        float r12289613 = r12289610 * r12289612;
        float r12289614 = r12289609 + r12289613;
        float r12289615 = -3584.0;
        float r12289616 = r12289612 * r12289606;
        float r12289617 = r12289616 * r12289606;
        float r12289618 = r12289615 * r12289617;
        float r12289619 = r12289614 + r12289618;
        float r12289620 = 256.0;
        float r12289621 = r12289617 * r12289606;
        float r12289622 = r12289621 * r12289606;
        float r12289623 = r12289620 * r12289622;
        float r12289624 = r12289619 + r12289623;
        return r12289624;
}

double f_id(double x) {
        double r12289625 = 1680.0;
        double r12289626 = -13440.0;
        double r12289627 = x;
        double r12289628 = r12289627 * r12289627;
        double r12289629 = r12289626 * r12289628;
        double r12289630 = r12289625 + r12289629;
        double r12289631 = 13440.0;
        double r12289632 = r12289628 * r12289627;
        double r12289633 = r12289632 * r12289627;
        double r12289634 = r12289631 * r12289633;
        double r12289635 = r12289630 + r12289634;
        double r12289636 = -3584.0;
        double r12289637 = r12289633 * r12289627;
        double r12289638 = r12289637 * r12289627;
        double r12289639 = r12289636 * r12289638;
        double r12289640 = r12289635 + r12289639;
        double r12289641 = 256.0;
        double r12289642 = r12289638 * r12289627;
        double r12289643 = r12289642 * r12289627;
        double r12289644 = r12289641 * r12289643;
        double r12289645 = r12289640 + r12289644;
        return r12289645;
}


double f_of(float x) {
        float r12289646 = x;
        float r12289647 = 13440.0;
        float r12289648 = r12289646 * r12289647;
        float r12289649 = 3;
        float r12289650 = pow(r12289646, r12289649);
        float r12289651 = r12289648 * r12289650;
        float r12289652 = -13440.0;
        float r12289653 = r12289646 * r12289652;
        float r12289654 = r12289646 * r12289653;
        float r12289655 = r12289651 + r12289654;
        float r12289656 = 1680.0;
        float r12289657 = r12289655 + r12289656;
        float r12289658 = r12289650 * r12289650;
        float r12289659 = -3584.0;
        float r12289660 = 256.0;
        float r12289661 = r12289660 * r12289646;
        float r12289662 = r12289661 * r12289646;
        float r12289663 = r12289659 + r12289662;
        float r12289664 = r12289658 * r12289663;
        float r12289665 = r12289657 + r12289664;
        return r12289665;
}

double f_od(double x) {
        double r12289666 = x;
        double r12289667 = 13440.0;
        double r12289668 = r12289666 * r12289667;
        double r12289669 = 3;
        double r12289670 = pow(r12289666, r12289669);
        double r12289671 = r12289668 * r12289670;
        double r12289672 = -13440.0;
        double r12289673 = r12289666 * r12289672;
        double r12289674 = r12289666 * r12289673;
        double r12289675 = r12289671 + r12289674;
        double r12289676 = 1680.0;
        double r12289677 = r12289675 + r12289676;
        double r12289678 = r12289670 * r12289670;
        double r12289679 = -3584.0;
        double r12289680 = 256.0;
        double r12289681 = r12289680 * r12289666;
        double r12289682 = r12289681 * r12289666;
        double r12289683 = r12289679 + r12289682;
        double r12289684 = r12289678 * r12289683;
        double r12289685 = r12289677 + r12289684;
        return r12289685;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12289686, r12289687, r12289688, r12289689, r12289690, r12289691, r12289692, r12289693, r12289694, r12289695, r12289696, r12289697, r12289698, r12289699, r12289700, r12289701, r12289702, r12289703, r12289704, r12289705, r12289706;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12289686, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289687, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r12289688);
        mpfr_init(r12289689);
        mpfr_init(r12289690);
        mpfr_init(r12289691);
        mpfr_init_set_str(r12289692, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r12289693);
        mpfr_init(r12289694);
        mpfr_init(r12289695);
        mpfr_init(r12289696);
        mpfr_init_set_str(r12289697, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r12289698);
        mpfr_init(r12289699);
        mpfr_init(r12289700);
        mpfr_init(r12289701);
        mpfr_init_set_str(r12289702, "256.0", 10, MPFR_RNDN);
        mpfr_init(r12289703);
        mpfr_init(r12289704);
        mpfr_init(r12289705);
        mpfr_init(r12289706);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r12289688, x, MPFR_RNDN);
        mpfr_mul(r12289689, r12289688, r12289688, MPFR_RNDN);
        mpfr_mul(r12289690, r12289687, r12289689, MPFR_RNDN);
        mpfr_add(r12289691, r12289686, r12289690, MPFR_RNDN);
        ;
        mpfr_mul(r12289693, r12289689, r12289688, MPFR_RNDN);
        mpfr_mul(r12289694, r12289693, r12289688, MPFR_RNDN);
        mpfr_mul(r12289695, r12289692, r12289694, MPFR_RNDN);
        mpfr_add(r12289696, r12289691, r12289695, MPFR_RNDN);
        ;
        mpfr_mul(r12289698, r12289694, r12289688, MPFR_RNDN);
        mpfr_mul(r12289699, r12289698, r12289688, MPFR_RNDN);
        mpfr_mul(r12289700, r12289697, r12289699, MPFR_RNDN);
        mpfr_add(r12289701, r12289696, r12289700, MPFR_RNDN);
        ;
        mpfr_mul(r12289703, r12289699, r12289688, MPFR_RNDN);
        mpfr_mul(r12289704, r12289703, r12289688, MPFR_RNDN);
        mpfr_mul(r12289705, r12289702, r12289704, MPFR_RNDN);
        mpfr_add(r12289706, r12289701, r12289705, MPFR_RNDN);
        return mpfr_get_d(r12289706, MPFR_RNDN);
}

static mpfr_t r12289707, r12289708, r12289709, r12289710, r12289711, r12289712, r12289713, r12289714, r12289715, r12289716, r12289717, r12289718, r12289719, r12289720, r12289721, r12289722, r12289723, r12289724, r12289725, r12289726;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r12289707);
        mpfr_init_set_str(r12289708, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r12289709);
        mpfr_init_set_str(r12289710, "3", 10, MPFR_RNDN);
        mpfr_init(r12289711);
        mpfr_init(r12289712);
        mpfr_init_set_str(r12289713, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r12289714);
        mpfr_init(r12289715);
        mpfr_init(r12289716);
        mpfr_init_set_str(r12289717, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r12289718);
        mpfr_init(r12289719);
        mpfr_init_set_str(r12289720, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289721, "256.0", 10, MPFR_RNDN);
        mpfr_init(r12289722);
        mpfr_init(r12289723);
        mpfr_init(r12289724);
        mpfr_init(r12289725);
        mpfr_init(r12289726);
}

double f_fm(double x) {
        mpfr_set_d(r12289707, x, MPFR_RNDN);
        ;
        mpfr_mul(r12289709, r12289707, r12289708, MPFR_RNDN);
        ;
        mpfr_pow(r12289711, r12289707, r12289710, MPFR_RNDN);
        mpfr_mul(r12289712, r12289709, r12289711, MPFR_RNDN);
        ;
        mpfr_mul(r12289714, r12289707, r12289713, MPFR_RNDN);
        mpfr_mul(r12289715, r12289707, r12289714, MPFR_RNDN);
        mpfr_add(r12289716, r12289712, r12289715, MPFR_RNDN);
        ;
        mpfr_add(r12289718, r12289716, r12289717, MPFR_RNDN);
        mpfr_mul(r12289719, r12289711, r12289711, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r12289722, r12289721, r12289707, MPFR_RNDN);
        mpfr_mul(r12289723, r12289722, r12289707, MPFR_RNDN);
        mpfr_add(r12289724, r12289720, r12289723, MPFR_RNDN);
        mpfr_mul(r12289725, r12289719, r12289724, MPFR_RNDN);
        mpfr_add(r12289726, r12289718, r12289725, MPFR_RNDN);
        return mpfr_get_d(r12289726, MPFR_RNDN);
}

static mpfr_t r12289727, r12289728, r12289729, r12289730, r12289731, r12289732, r12289733, r12289734, r12289735, r12289736, r12289737, r12289738, r12289739, r12289740, r12289741, r12289742, r12289743, r12289744, r12289745, r12289746;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r12289727);
        mpfr_init_set_str(r12289728, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r12289729);
        mpfr_init_set_str(r12289730, "3", 10, MPFR_RNDN);
        mpfr_init(r12289731);
        mpfr_init(r12289732);
        mpfr_init_set_str(r12289733, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r12289734);
        mpfr_init(r12289735);
        mpfr_init(r12289736);
        mpfr_init_set_str(r12289737, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r12289738);
        mpfr_init(r12289739);
        mpfr_init_set_str(r12289740, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289741, "256.0", 10, MPFR_RNDN);
        mpfr_init(r12289742);
        mpfr_init(r12289743);
        mpfr_init(r12289744);
        mpfr_init(r12289745);
        mpfr_init(r12289746);
}

double f_dm(double x) {
        mpfr_set_d(r12289727, x, MPFR_RNDN);
        ;
        mpfr_mul(r12289729, r12289727, r12289728, MPFR_RNDN);
        ;
        mpfr_pow(r12289731, r12289727, r12289730, MPFR_RNDN);
        mpfr_mul(r12289732, r12289729, r12289731, MPFR_RNDN);
        ;
        mpfr_mul(r12289734, r12289727, r12289733, MPFR_RNDN);
        mpfr_mul(r12289735, r12289727, r12289734, MPFR_RNDN);
        mpfr_add(r12289736, r12289732, r12289735, MPFR_RNDN);
        ;
        mpfr_add(r12289738, r12289736, r12289737, MPFR_RNDN);
        mpfr_mul(r12289739, r12289731, r12289731, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r12289742, r12289741, r12289727, MPFR_RNDN);
        mpfr_mul(r12289743, r12289742, r12289727, MPFR_RNDN);
        mpfr_add(r12289744, r12289740, r12289743, MPFR_RNDN);
        mpfr_mul(r12289745, r12289739, r12289744, MPFR_RNDN);
        mpfr_add(r12289746, r12289738, r12289745, MPFR_RNDN);
        return mpfr_get_d(r12289746, MPFR_RNDN);
}

