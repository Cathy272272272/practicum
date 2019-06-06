#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r4599558 = -0.185471;
        float r4599559 = 31.715469;
        float r4599560 = x;
        float r4599561 = r4599560 * r4599560;
        float r4599562 = r4599559 * r4599561;
        float r4599563 = r4599558 + r4599562;
        float r4599564 = -888.033142;
        float r4599565 = r4599561 * r4599560;
        float r4599566 = r4599565 * r4599560;
        float r4599567 = r4599564 * r4599566;
        float r4599568 = r4599563 + r4599567;
        float r4599569 = 9531.555725;
        float r4599570 = r4599566 * r4599560;
        float r4599571 = r4599570 * r4599560;
        float r4599572 = r4599569 * r4599571;
        float r4599573 = r4599568 + r4599572;
        float r4599574 = -51061.90567;
        float r4599575 = r4599571 * r4599560;
        float r4599576 = r4599575 * r4599560;
        float r4599577 = r4599574 * r4599576;
        float r4599578 = r4599573 + r4599577;
        float r4599579 = 153185.71701;
        float r4599580 = r4599576 * r4599560;
        float r4599581 = r4599580 * r4599560;
        float r4599582 = r4599579 * r4599581;
        float r4599583 = r4599578 + r4599582;
        float r4599584 = -269235.502625;
        float r4599585 = r4599581 * r4599560;
        float r4599586 = r4599585 * r4599560;
        float r4599587 = r4599584 * r4599586;
        float r4599588 = r4599583 + r4599587;
        float r4599589 = 275152.766418;
        float r4599590 = r4599586 * r4599560;
        float r4599591 = r4599590 * r4599560;
        float r4599592 = r4599589 * r4599591;
        float r4599593 = r4599588 + r4599592;
        float r4599594 = -151334.02153;
        float r4599595 = r4599591 * r4599560;
        float r4599596 = r4599595 * r4599560;
        float r4599597 = r4599594 * r4599596;
        float r4599598 = r4599593 + r4599597;
        float r4599599 = 34618.893814;
        float r4599600 = r4599596 * r4599560;
        float r4599601 = r4599600 * r4599560;
        float r4599602 = r4599599 * r4599601;
        float r4599603 = r4599598 + r4599602;
        return r4599603;
}

double f_id(double x) {
        double r4599604 = -0.185471;
        double r4599605 = 31.715469;
        double r4599606 = x;
        double r4599607 = r4599606 * r4599606;
        double r4599608 = r4599605 * r4599607;
        double r4599609 = r4599604 + r4599608;
        double r4599610 = -888.033142;
        double r4599611 = r4599607 * r4599606;
        double r4599612 = r4599611 * r4599606;
        double r4599613 = r4599610 * r4599612;
        double r4599614 = r4599609 + r4599613;
        double r4599615 = 9531.555725;
        double r4599616 = r4599612 * r4599606;
        double r4599617 = r4599616 * r4599606;
        double r4599618 = r4599615 * r4599617;
        double r4599619 = r4599614 + r4599618;
        double r4599620 = -51061.90567;
        double r4599621 = r4599617 * r4599606;
        double r4599622 = r4599621 * r4599606;
        double r4599623 = r4599620 * r4599622;
        double r4599624 = r4599619 + r4599623;
        double r4599625 = 153185.71701;
        double r4599626 = r4599622 * r4599606;
        double r4599627 = r4599626 * r4599606;
        double r4599628 = r4599625 * r4599627;
        double r4599629 = r4599624 + r4599628;
        double r4599630 = -269235.502625;
        double r4599631 = r4599627 * r4599606;
        double r4599632 = r4599631 * r4599606;
        double r4599633 = r4599630 * r4599632;
        double r4599634 = r4599629 + r4599633;
        double r4599635 = 275152.766418;
        double r4599636 = r4599632 * r4599606;
        double r4599637 = r4599636 * r4599606;
        double r4599638 = r4599635 * r4599637;
        double r4599639 = r4599634 + r4599638;
        double r4599640 = -151334.02153;
        double r4599641 = r4599637 * r4599606;
        double r4599642 = r4599641 * r4599606;
        double r4599643 = r4599640 * r4599642;
        double r4599644 = r4599639 + r4599643;
        double r4599645 = 34618.893814;
        double r4599646 = r4599642 * r4599606;
        double r4599647 = r4599646 * r4599606;
        double r4599648 = r4599645 * r4599647;
        double r4599649 = r4599644 + r4599648;
        return r4599649;
}


double f_of(float x) {
        float r4599650 = x;
        float r4599651 = r4599650 * r4599650;
        float r4599652 = r4599651 * r4599651;
        float r4599653 = r4599652 * r4599652;
        float r4599654 = r4599652 * r4599653;
        float r4599655 = -269235.502625;
        float r4599656 = 275152.766418;
        float r4599657 = r4599656 * r4599651;
        float r4599658 = r4599655 + r4599657;
        float r4599659 = r4599654 * r4599658;
        float r4599660 = -51061.90567;
        float r4599661 = 153185.71701;
        float r4599662 = r4599661 * r4599651;
        float r4599663 = r4599660 + r4599662;
        float r4599664 = r4599653 * r4599663;
        float r4599665 = r4599659 + r4599664;
        float r4599666 = 31.715469;
        float r4599667 = r4599650 * r4599666;
        float r4599668 = r4599667 * r4599650;
        float r4599669 = -0.185471;
        float r4599670 = r4599668 + r4599669;
        float r4599671 = 9531.555725;
        float r4599672 = r4599651 * r4599671;
        float r4599673 = -888.033142;
        float r4599674 = r4599672 + r4599673;
        float r4599675 = r4599652 * r4599674;
        float r4599676 = r4599670 + r4599675;
        float r4599677 = r4599665 + r4599676;
        float r4599678 = r4599654 * r4599652;
        float r4599679 = 34618.893814;
        float r4599680 = r4599679 * r4599651;
        float r4599681 = -151334.02153;
        float r4599682 = r4599680 + r4599681;
        float r4599683 = r4599678 * r4599682;
        float r4599684 = r4599677 + r4599683;
        return r4599684;
}

double f_od(double x) {
        double r4599685 = x;
        double r4599686 = r4599685 * r4599685;
        double r4599687 = r4599686 * r4599686;
        double r4599688 = r4599687 * r4599687;
        double r4599689 = r4599687 * r4599688;
        double r4599690 = -269235.502625;
        double r4599691 = 275152.766418;
        double r4599692 = r4599691 * r4599686;
        double r4599693 = r4599690 + r4599692;
        double r4599694 = r4599689 * r4599693;
        double r4599695 = -51061.90567;
        double r4599696 = 153185.71701;
        double r4599697 = r4599696 * r4599686;
        double r4599698 = r4599695 + r4599697;
        double r4599699 = r4599688 * r4599698;
        double r4599700 = r4599694 + r4599699;
        double r4599701 = 31.715469;
        double r4599702 = r4599685 * r4599701;
        double r4599703 = r4599702 * r4599685;
        double r4599704 = -0.185471;
        double r4599705 = r4599703 + r4599704;
        double r4599706 = 9531.555725;
        double r4599707 = r4599686 * r4599706;
        double r4599708 = -888.033142;
        double r4599709 = r4599707 + r4599708;
        double r4599710 = r4599687 * r4599709;
        double r4599711 = r4599705 + r4599710;
        double r4599712 = r4599700 + r4599711;
        double r4599713 = r4599689 * r4599687;
        double r4599714 = 34618.893814;
        double r4599715 = r4599714 * r4599686;
        double r4599716 = -151334.02153;
        double r4599717 = r4599715 + r4599716;
        double r4599718 = r4599713 * r4599717;
        double r4599719 = r4599712 + r4599718;
        return r4599719;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4599720, r4599721, r4599722, r4599723, r4599724, r4599725, r4599726, r4599727, r4599728, r4599729, r4599730, r4599731, r4599732, r4599733, r4599734, r4599735, r4599736, r4599737, r4599738, r4599739, r4599740, r4599741, r4599742, r4599743, r4599744, r4599745, r4599746, r4599747, r4599748, r4599749, r4599750, r4599751, r4599752, r4599753, r4599754, r4599755, r4599756, r4599757, r4599758, r4599759, r4599760, r4599761, r4599762, r4599763, r4599764, r4599765;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4599720, "-0.185471", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599721, "31.715469", 10, MPFR_RNDN);
        mpfr_init(r4599722);
        mpfr_init(r4599723);
        mpfr_init(r4599724);
        mpfr_init(r4599725);
        mpfr_init_set_str(r4599726, "-888.033142", 10, MPFR_RNDN);
        mpfr_init(r4599727);
        mpfr_init(r4599728);
        mpfr_init(r4599729);
        mpfr_init(r4599730);
        mpfr_init_set_str(r4599731, "9531.555725", 10, MPFR_RNDN);
        mpfr_init(r4599732);
        mpfr_init(r4599733);
        mpfr_init(r4599734);
        mpfr_init(r4599735);
        mpfr_init_set_str(r4599736, "-51061.90567", 10, MPFR_RNDN);
        mpfr_init(r4599737);
        mpfr_init(r4599738);
        mpfr_init(r4599739);
        mpfr_init(r4599740);
        mpfr_init_set_str(r4599741, "153185.71701", 10, MPFR_RNDN);
        mpfr_init(r4599742);
        mpfr_init(r4599743);
        mpfr_init(r4599744);
        mpfr_init(r4599745);
        mpfr_init_set_str(r4599746, "-269235.502625", 10, MPFR_RNDN);
        mpfr_init(r4599747);
        mpfr_init(r4599748);
        mpfr_init(r4599749);
        mpfr_init(r4599750);
        mpfr_init_set_str(r4599751, "275152.766418", 10, MPFR_RNDN);
        mpfr_init(r4599752);
        mpfr_init(r4599753);
        mpfr_init(r4599754);
        mpfr_init(r4599755);
        mpfr_init_set_str(r4599756, "-151334.02153", 10, MPFR_RNDN);
        mpfr_init(r4599757);
        mpfr_init(r4599758);
        mpfr_init(r4599759);
        mpfr_init(r4599760);
        mpfr_init_set_str(r4599761, "34618.893814", 10, MPFR_RNDN);
        mpfr_init(r4599762);
        mpfr_init(r4599763);
        mpfr_init(r4599764);
        mpfr_init(r4599765);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4599722, x, MPFR_RNDN);
        mpfr_mul(r4599723, r4599722, r4599722, MPFR_RNDN);
        mpfr_mul(r4599724, r4599721, r4599723, MPFR_RNDN);
        mpfr_add(r4599725, r4599720, r4599724, MPFR_RNDN);
        ;
        mpfr_mul(r4599727, r4599723, r4599722, MPFR_RNDN);
        mpfr_mul(r4599728, r4599727, r4599722, MPFR_RNDN);
        mpfr_mul(r4599729, r4599726, r4599728, MPFR_RNDN);
        mpfr_add(r4599730, r4599725, r4599729, MPFR_RNDN);
        ;
        mpfr_mul(r4599732, r4599728, r4599722, MPFR_RNDN);
        mpfr_mul(r4599733, r4599732, r4599722, MPFR_RNDN);
        mpfr_mul(r4599734, r4599731, r4599733, MPFR_RNDN);
        mpfr_add(r4599735, r4599730, r4599734, MPFR_RNDN);
        ;
        mpfr_mul(r4599737, r4599733, r4599722, MPFR_RNDN);
        mpfr_mul(r4599738, r4599737, r4599722, MPFR_RNDN);
        mpfr_mul(r4599739, r4599736, r4599738, MPFR_RNDN);
        mpfr_add(r4599740, r4599735, r4599739, MPFR_RNDN);
        ;
        mpfr_mul(r4599742, r4599738, r4599722, MPFR_RNDN);
        mpfr_mul(r4599743, r4599742, r4599722, MPFR_RNDN);
        mpfr_mul(r4599744, r4599741, r4599743, MPFR_RNDN);
        mpfr_add(r4599745, r4599740, r4599744, MPFR_RNDN);
        ;
        mpfr_mul(r4599747, r4599743, r4599722, MPFR_RNDN);
        mpfr_mul(r4599748, r4599747, r4599722, MPFR_RNDN);
        mpfr_mul(r4599749, r4599746, r4599748, MPFR_RNDN);
        mpfr_add(r4599750, r4599745, r4599749, MPFR_RNDN);
        ;
        mpfr_mul(r4599752, r4599748, r4599722, MPFR_RNDN);
        mpfr_mul(r4599753, r4599752, r4599722, MPFR_RNDN);
        mpfr_mul(r4599754, r4599751, r4599753, MPFR_RNDN);
        mpfr_add(r4599755, r4599750, r4599754, MPFR_RNDN);
        ;
        mpfr_mul(r4599757, r4599753, r4599722, MPFR_RNDN);
        mpfr_mul(r4599758, r4599757, r4599722, MPFR_RNDN);
        mpfr_mul(r4599759, r4599756, r4599758, MPFR_RNDN);
        mpfr_add(r4599760, r4599755, r4599759, MPFR_RNDN);
        ;
        mpfr_mul(r4599762, r4599758, r4599722, MPFR_RNDN);
        mpfr_mul(r4599763, r4599762, r4599722, MPFR_RNDN);
        mpfr_mul(r4599764, r4599761, r4599763, MPFR_RNDN);
        mpfr_add(r4599765, r4599760, r4599764, MPFR_RNDN);
        return mpfr_get_d(r4599765, MPFR_RNDN);
}

static mpfr_t r4599766, r4599767, r4599768, r4599769, r4599770, r4599771, r4599772, r4599773, r4599774, r4599775, r4599776, r4599777, r4599778, r4599779, r4599780, r4599781, r4599782, r4599783, r4599784, r4599785, r4599786, r4599787, r4599788, r4599789, r4599790, r4599791, r4599792, r4599793, r4599794, r4599795, r4599796, r4599797, r4599798, r4599799, r4599800;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4599766);
        mpfr_init(r4599767);
        mpfr_init(r4599768);
        mpfr_init(r4599769);
        mpfr_init(r4599770);
        mpfr_init_set_str(r4599771, "-269235.502625", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599772, "275152.766418", 10, MPFR_RNDN);
        mpfr_init(r4599773);
        mpfr_init(r4599774);
        mpfr_init(r4599775);
        mpfr_init_set_str(r4599776, "-51061.90567", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599777, "153185.71701", 10, MPFR_RNDN);
        mpfr_init(r4599778);
        mpfr_init(r4599779);
        mpfr_init(r4599780);
        mpfr_init(r4599781);
        mpfr_init_set_str(r4599782, "31.715469", 10, MPFR_RNDN);
        mpfr_init(r4599783);
        mpfr_init(r4599784);
        mpfr_init_set_str(r4599785, "-0.185471", 10, MPFR_RNDN);
        mpfr_init(r4599786);
        mpfr_init_set_str(r4599787, "9531.555725", 10, MPFR_RNDN);
        mpfr_init(r4599788);
        mpfr_init_set_str(r4599789, "-888.033142", 10, MPFR_RNDN);
        mpfr_init(r4599790);
        mpfr_init(r4599791);
        mpfr_init(r4599792);
        mpfr_init(r4599793);
        mpfr_init(r4599794);
        mpfr_init_set_str(r4599795, "34618.893814", 10, MPFR_RNDN);
        mpfr_init(r4599796);
        mpfr_init_set_str(r4599797, "-151334.02153", 10, MPFR_RNDN);
        mpfr_init(r4599798);
        mpfr_init(r4599799);
        mpfr_init(r4599800);
}

double f_fm(double x) {
        mpfr_set_d(r4599766, x, MPFR_RNDN);
        mpfr_mul(r4599767, r4599766, r4599766, MPFR_RNDN);
        mpfr_mul(r4599768, r4599767, r4599767, MPFR_RNDN);
        mpfr_mul(r4599769, r4599768, r4599768, MPFR_RNDN);
        mpfr_mul(r4599770, r4599768, r4599769, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4599773, r4599772, r4599767, MPFR_RNDN);
        mpfr_add(r4599774, r4599771, r4599773, MPFR_RNDN);
        mpfr_mul(r4599775, r4599770, r4599774, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4599778, r4599777, r4599767, MPFR_RNDN);
        mpfr_add(r4599779, r4599776, r4599778, MPFR_RNDN);
        mpfr_mul(r4599780, r4599769, r4599779, MPFR_RNDN);
        mpfr_add(r4599781, r4599775, r4599780, MPFR_RNDN);
        ;
        mpfr_mul(r4599783, r4599766, r4599782, MPFR_RNDN);
        mpfr_mul(r4599784, r4599783, r4599766, MPFR_RNDN);
        ;
        mpfr_add(r4599786, r4599784, r4599785, MPFR_RNDN);
        ;
        mpfr_mul(r4599788, r4599767, r4599787, MPFR_RNDN);
        ;
        mpfr_add(r4599790, r4599788, r4599789, MPFR_RNDN);
        mpfr_mul(r4599791, r4599768, r4599790, MPFR_RNDN);
        mpfr_add(r4599792, r4599786, r4599791, MPFR_RNDN);
        mpfr_add(r4599793, r4599781, r4599792, MPFR_RNDN);
        mpfr_mul(r4599794, r4599770, r4599768, MPFR_RNDN);
        ;
        mpfr_mul(r4599796, r4599795, r4599767, MPFR_RNDN);
        ;
        mpfr_add(r4599798, r4599796, r4599797, MPFR_RNDN);
        mpfr_mul(r4599799, r4599794, r4599798, MPFR_RNDN);
        mpfr_add(r4599800, r4599793, r4599799, MPFR_RNDN);
        return mpfr_get_d(r4599800, MPFR_RNDN);
}

static mpfr_t r4599801, r4599802, r4599803, r4599804, r4599805, r4599806, r4599807, r4599808, r4599809, r4599810, r4599811, r4599812, r4599813, r4599814, r4599815, r4599816, r4599817, r4599818, r4599819, r4599820, r4599821, r4599822, r4599823, r4599824, r4599825, r4599826, r4599827, r4599828, r4599829, r4599830, r4599831, r4599832, r4599833, r4599834, r4599835;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4599801);
        mpfr_init(r4599802);
        mpfr_init(r4599803);
        mpfr_init(r4599804);
        mpfr_init(r4599805);
        mpfr_init_set_str(r4599806, "-269235.502625", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599807, "275152.766418", 10, MPFR_RNDN);
        mpfr_init(r4599808);
        mpfr_init(r4599809);
        mpfr_init(r4599810);
        mpfr_init_set_str(r4599811, "-51061.90567", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599812, "153185.71701", 10, MPFR_RNDN);
        mpfr_init(r4599813);
        mpfr_init(r4599814);
        mpfr_init(r4599815);
        mpfr_init(r4599816);
        mpfr_init_set_str(r4599817, "31.715469", 10, MPFR_RNDN);
        mpfr_init(r4599818);
        mpfr_init(r4599819);
        mpfr_init_set_str(r4599820, "-0.185471", 10, MPFR_RNDN);
        mpfr_init(r4599821);
        mpfr_init_set_str(r4599822, "9531.555725", 10, MPFR_RNDN);
        mpfr_init(r4599823);
        mpfr_init_set_str(r4599824, "-888.033142", 10, MPFR_RNDN);
        mpfr_init(r4599825);
        mpfr_init(r4599826);
        mpfr_init(r4599827);
        mpfr_init(r4599828);
        mpfr_init(r4599829);
        mpfr_init_set_str(r4599830, "34618.893814", 10, MPFR_RNDN);
        mpfr_init(r4599831);
        mpfr_init_set_str(r4599832, "-151334.02153", 10, MPFR_RNDN);
        mpfr_init(r4599833);
        mpfr_init(r4599834);
        mpfr_init(r4599835);
}

double f_dm(double x) {
        mpfr_set_d(r4599801, x, MPFR_RNDN);
        mpfr_mul(r4599802, r4599801, r4599801, MPFR_RNDN);
        mpfr_mul(r4599803, r4599802, r4599802, MPFR_RNDN);
        mpfr_mul(r4599804, r4599803, r4599803, MPFR_RNDN);
        mpfr_mul(r4599805, r4599803, r4599804, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4599808, r4599807, r4599802, MPFR_RNDN);
        mpfr_add(r4599809, r4599806, r4599808, MPFR_RNDN);
        mpfr_mul(r4599810, r4599805, r4599809, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4599813, r4599812, r4599802, MPFR_RNDN);
        mpfr_add(r4599814, r4599811, r4599813, MPFR_RNDN);
        mpfr_mul(r4599815, r4599804, r4599814, MPFR_RNDN);
        mpfr_add(r4599816, r4599810, r4599815, MPFR_RNDN);
        ;
        mpfr_mul(r4599818, r4599801, r4599817, MPFR_RNDN);
        mpfr_mul(r4599819, r4599818, r4599801, MPFR_RNDN);
        ;
        mpfr_add(r4599821, r4599819, r4599820, MPFR_RNDN);
        ;
        mpfr_mul(r4599823, r4599802, r4599822, MPFR_RNDN);
        ;
        mpfr_add(r4599825, r4599823, r4599824, MPFR_RNDN);
        mpfr_mul(r4599826, r4599803, r4599825, MPFR_RNDN);
        mpfr_add(r4599827, r4599821, r4599826, MPFR_RNDN);
        mpfr_add(r4599828, r4599816, r4599827, MPFR_RNDN);
        mpfr_mul(r4599829, r4599805, r4599803, MPFR_RNDN);
        ;
        mpfr_mul(r4599831, r4599830, r4599802, MPFR_RNDN);
        ;
        mpfr_add(r4599833, r4599831, r4599832, MPFR_RNDN);
        mpfr_mul(r4599834, r4599829, r4599833, MPFR_RNDN);
        mpfr_add(r4599835, r4599828, r4599834, MPFR_RNDN);
        return mpfr_get_d(r4599835, MPFR_RNDN);
}

