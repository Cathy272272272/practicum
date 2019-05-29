#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6293602 = 1.0;
        float r6293603 = -5.0;
        float r6293604 = x;
        float r6293605 = r6293603 * r6293604;
        float r6293606 = r6293602 + r6293605;
        float r6293607 = 5.0;
        float r6293608 = r6293604 * r6293604;
        float r6293609 = r6293607 * r6293608;
        float r6293610 = r6293606 + r6293609;
        float r6293611 = -1.666667;
        float r6293612 = r6293608 * r6293604;
        float r6293613 = r6293611 * r6293612;
        float r6293614 = r6293610 + r6293613;
        float r6293615 = 0.208333;
        float r6293616 = r6293612 * r6293604;
        float r6293617 = r6293615 * r6293616;
        float r6293618 = r6293614 + r6293617;
        float r6293619 = -0.008333;
        float r6293620 = r6293616 * r6293604;
        float r6293621 = r6293619 * r6293620;
        float r6293622 = r6293618 + r6293621;
        return r6293622;
}

double f_id(double x) {
        double r6293623 = 1.0;
        double r6293624 = -5.0;
        double r6293625 = x;
        double r6293626 = r6293624 * r6293625;
        double r6293627 = r6293623 + r6293626;
        double r6293628 = 5.0;
        double r6293629 = r6293625 * r6293625;
        double r6293630 = r6293628 * r6293629;
        double r6293631 = r6293627 + r6293630;
        double r6293632 = -1.666667;
        double r6293633 = r6293629 * r6293625;
        double r6293634 = r6293632 * r6293633;
        double r6293635 = r6293631 + r6293634;
        double r6293636 = 0.208333;
        double r6293637 = r6293633 * r6293625;
        double r6293638 = r6293636 * r6293637;
        double r6293639 = r6293635 + r6293638;
        double r6293640 = -0.008333;
        double r6293641 = r6293637 * r6293625;
        double r6293642 = r6293640 * r6293641;
        double r6293643 = r6293639 + r6293642;
        return r6293643;
}


double f_of(float x) {
        float r6293644 = 1.0;
        float r6293645 = -5.0;
        float r6293646 = x;
        float r6293647 = r6293645 * r6293646;
        float r6293648 = r6293644 + r6293647;
        float r6293649 = 5.0;
        float r6293650 = r6293646 * r6293646;
        float r6293651 = r6293649 * r6293650;
        float r6293652 = r6293648 + r6293651;
        float r6293653 = -1.666667;
        float r6293654 = r6293650 * r6293646;
        float r6293655 = r6293653 * r6293654;
        float r6293656 = r6293652 + r6293655;
        float r6293657 = 0.208333;
        float r6293658 = r6293654 * r6293646;
        float r6293659 = r6293657 * r6293658;
        float r6293660 = r6293656 + r6293659;
        float r6293661 = -0.008333;
        float r6293662 = r6293658 * r6293646;
        float r6293663 = r6293661 * r6293662;
        float r6293664 = r6293660 + r6293663;
        return r6293664;
}

double f_od(double x) {
        double r6293665 = 1.0;
        double r6293666 = -5.0;
        double r6293667 = x;
        double r6293668 = r6293666 * r6293667;
        double r6293669 = r6293665 + r6293668;
        double r6293670 = 5.0;
        double r6293671 = r6293667 * r6293667;
        double r6293672 = r6293670 * r6293671;
        double r6293673 = r6293669 + r6293672;
        double r6293674 = -1.666667;
        double r6293675 = r6293671 * r6293667;
        double r6293676 = r6293674 * r6293675;
        double r6293677 = r6293673 + r6293676;
        double r6293678 = 0.208333;
        double r6293679 = r6293675 * r6293667;
        double r6293680 = r6293678 * r6293679;
        double r6293681 = r6293677 + r6293680;
        double r6293682 = -0.008333;
        double r6293683 = r6293679 * r6293667;
        double r6293684 = r6293682 * r6293683;
        double r6293685 = r6293681 + r6293684;
        return r6293685;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6293686, r6293687, r6293688, r6293689, r6293690, r6293691, r6293692, r6293693, r6293694, r6293695, r6293696, r6293697, r6293698, r6293699, r6293700, r6293701, r6293702, r6293703, r6293704, r6293705, r6293706;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293686, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293687, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r6293688);
        mpfr_init(r6293689);
        mpfr_init(r6293690);
        mpfr_init_set_str(r6293691, "5.0", 10, MPFR_RNDN);
        mpfr_init(r6293692);
        mpfr_init(r6293693);
        mpfr_init(r6293694);
        mpfr_init_set_str(r6293695, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r6293696);
        mpfr_init(r6293697);
        mpfr_init(r6293698);
        mpfr_init_set_str(r6293699, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r6293700);
        mpfr_init(r6293701);
        mpfr_init(r6293702);
        mpfr_init_set_str(r6293703, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r6293704);
        mpfr_init(r6293705);
        mpfr_init(r6293706);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6293688, x, MPFR_RNDN);
        mpfr_mul(r6293689, r6293687, r6293688, MPFR_RNDN);
        mpfr_add(r6293690, r6293686, r6293689, MPFR_RNDN);
        ;
        mpfr_mul(r6293692, r6293688, r6293688, MPFR_RNDN);
        mpfr_mul(r6293693, r6293691, r6293692, MPFR_RNDN);
        mpfr_add(r6293694, r6293690, r6293693, MPFR_RNDN);
        ;
        mpfr_mul(r6293696, r6293692, r6293688, MPFR_RNDN);
        mpfr_mul(r6293697, r6293695, r6293696, MPFR_RNDN);
        mpfr_add(r6293698, r6293694, r6293697, MPFR_RNDN);
        ;
        mpfr_mul(r6293700, r6293696, r6293688, MPFR_RNDN);
        mpfr_mul(r6293701, r6293699, r6293700, MPFR_RNDN);
        mpfr_add(r6293702, r6293698, r6293701, MPFR_RNDN);
        ;
        mpfr_mul(r6293704, r6293700, r6293688, MPFR_RNDN);
        mpfr_mul(r6293705, r6293703, r6293704, MPFR_RNDN);
        mpfr_add(r6293706, r6293702, r6293705, MPFR_RNDN);
        return mpfr_get_d(r6293706, MPFR_RNDN);
}

static mpfr_t r6293707, r6293708, r6293709, r6293710, r6293711, r6293712, r6293713, r6293714, r6293715, r6293716, r6293717, r6293718, r6293719, r6293720, r6293721, r6293722, r6293723, r6293724, r6293725, r6293726, r6293727;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293707, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293708, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r6293709);
        mpfr_init(r6293710);
        mpfr_init(r6293711);
        mpfr_init_set_str(r6293712, "5.0", 10, MPFR_RNDN);
        mpfr_init(r6293713);
        mpfr_init(r6293714);
        mpfr_init(r6293715);
        mpfr_init_set_str(r6293716, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r6293717);
        mpfr_init(r6293718);
        mpfr_init(r6293719);
        mpfr_init_set_str(r6293720, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r6293721);
        mpfr_init(r6293722);
        mpfr_init(r6293723);
        mpfr_init_set_str(r6293724, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r6293725);
        mpfr_init(r6293726);
        mpfr_init(r6293727);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6293709, x, MPFR_RNDN);
        mpfr_mul(r6293710, r6293708, r6293709, MPFR_RNDN);
        mpfr_add(r6293711, r6293707, r6293710, MPFR_RNDN);
        ;
        mpfr_mul(r6293713, r6293709, r6293709, MPFR_RNDN);
        mpfr_mul(r6293714, r6293712, r6293713, MPFR_RNDN);
        mpfr_add(r6293715, r6293711, r6293714, MPFR_RNDN);
        ;
        mpfr_mul(r6293717, r6293713, r6293709, MPFR_RNDN);
        mpfr_mul(r6293718, r6293716, r6293717, MPFR_RNDN);
        mpfr_add(r6293719, r6293715, r6293718, MPFR_RNDN);
        ;
        mpfr_mul(r6293721, r6293717, r6293709, MPFR_RNDN);
        mpfr_mul(r6293722, r6293720, r6293721, MPFR_RNDN);
        mpfr_add(r6293723, r6293719, r6293722, MPFR_RNDN);
        ;
        mpfr_mul(r6293725, r6293721, r6293709, MPFR_RNDN);
        mpfr_mul(r6293726, r6293724, r6293725, MPFR_RNDN);
        mpfr_add(r6293727, r6293723, r6293726, MPFR_RNDN);
        return mpfr_get_d(r6293727, MPFR_RNDN);
}

static mpfr_t r6293728, r6293729, r6293730, r6293731, r6293732, r6293733, r6293734, r6293735, r6293736, r6293737, r6293738, r6293739, r6293740, r6293741, r6293742, r6293743, r6293744, r6293745, r6293746, r6293747, r6293748;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293728, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293729, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r6293730);
        mpfr_init(r6293731);
        mpfr_init(r6293732);
        mpfr_init_set_str(r6293733, "5.0", 10, MPFR_RNDN);
        mpfr_init(r6293734);
        mpfr_init(r6293735);
        mpfr_init(r6293736);
        mpfr_init_set_str(r6293737, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r6293738);
        mpfr_init(r6293739);
        mpfr_init(r6293740);
        mpfr_init_set_str(r6293741, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r6293742);
        mpfr_init(r6293743);
        mpfr_init(r6293744);
        mpfr_init_set_str(r6293745, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r6293746);
        mpfr_init(r6293747);
        mpfr_init(r6293748);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6293730, x, MPFR_RNDN);
        mpfr_mul(r6293731, r6293729, r6293730, MPFR_RNDN);
        mpfr_add(r6293732, r6293728, r6293731, MPFR_RNDN);
        ;
        mpfr_mul(r6293734, r6293730, r6293730, MPFR_RNDN);
        mpfr_mul(r6293735, r6293733, r6293734, MPFR_RNDN);
        mpfr_add(r6293736, r6293732, r6293735, MPFR_RNDN);
        ;
        mpfr_mul(r6293738, r6293734, r6293730, MPFR_RNDN);
        mpfr_mul(r6293739, r6293737, r6293738, MPFR_RNDN);
        mpfr_add(r6293740, r6293736, r6293739, MPFR_RNDN);
        ;
        mpfr_mul(r6293742, r6293738, r6293730, MPFR_RNDN);
        mpfr_mul(r6293743, r6293741, r6293742, MPFR_RNDN);
        mpfr_add(r6293744, r6293740, r6293743, MPFR_RNDN);
        ;
        mpfr_mul(r6293746, r6293742, r6293730, MPFR_RNDN);
        mpfr_mul(r6293747, r6293745, r6293746, MPFR_RNDN);
        mpfr_add(r6293748, r6293744, r6293747, MPFR_RNDN);
        return mpfr_get_d(r6293748, MPFR_RNDN);
}

