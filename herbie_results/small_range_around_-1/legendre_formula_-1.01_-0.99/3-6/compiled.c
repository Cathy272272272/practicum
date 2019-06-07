#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r48608562 = -0.3125;
        float r48608563 = 6.5625;
        float r48608564 = x;
        float r48608565 = r48608564 * r48608564;
        float r48608566 = r48608563 * r48608565;
        float r48608567 = r48608562 + r48608566;
        float r48608568 = -19.6875;
        float r48608569 = r48608565 * r48608564;
        float r48608570 = r48608569 * r48608564;
        float r48608571 = r48608568 * r48608570;
        float r48608572 = r48608567 + r48608571;
        float r48608573 = 14.4375;
        float r48608574 = r48608570 * r48608564;
        float r48608575 = r48608574 * r48608564;
        float r48608576 = r48608573 * r48608575;
        float r48608577 = r48608572 + r48608576;
        return r48608577;
}

double f_id(double x) {
        double r48608578 = -0.3125;
        double r48608579 = 6.5625;
        double r48608580 = x;
        double r48608581 = r48608580 * r48608580;
        double r48608582 = r48608579 * r48608581;
        double r48608583 = r48608578 + r48608582;
        double r48608584 = -19.6875;
        double r48608585 = r48608581 * r48608580;
        double r48608586 = r48608585 * r48608580;
        double r48608587 = r48608584 * r48608586;
        double r48608588 = r48608583 + r48608587;
        double r48608589 = 14.4375;
        double r48608590 = r48608586 * r48608580;
        double r48608591 = r48608590 * r48608580;
        double r48608592 = r48608589 * r48608591;
        double r48608593 = r48608588 + r48608592;
        return r48608593;
}


double f_of(float x) {
        float r48608594 = x;
        float r48608595 = 6.5625;
        float r48608596 = r48608594 * r48608595;
        float r48608597 = r48608596 * r48608594;
        float r48608598 = -0.3125;
        float r48608599 = r48608597 + r48608598;
        float r48608600 = 3;
        float r48608601 = pow(r48608599, r48608600);
        float r48608602 = r48608594 * r48608594;
        float r48608603 = -19.6875;
        float r48608604 = 14.4375;
        float r48608605 = r48608602 * r48608604;
        float r48608606 = r48608603 + r48608605;
        float r48608607 = r48608602 * r48608606;
        float r48608608 = r48608602 * r48608607;
        float r48608609 = pow(r48608608, r48608600);
        float r48608610 = r48608601 + r48608609;
        float r48608611 = sqrt(r48608610);
        float r48608612 = r48608604 * r48608602;
        float r48608613 = r48608612 + r48608603;
        float r48608614 = r48608602 * r48608602;
        float r48608615 = r48608613 * r48608614;
        float r48608616 = r48608615 * r48608615;
        float r48608617 = r48608604 * r48608594;
        float r48608618 = r48608594 * r48608617;
        float r48608619 = r48608618 + r48608603;
        float r48608620 = r48608619 * r48608614;
        float r48608621 = r48608616 * r48608620;
        float r48608622 = r48608601 + r48608621;
        float r48608623 = sqrt(r48608622);
        float r48608624 = r48608611 * r48608623;
        float r48608625 = r48608617 * r48608594;
        float r48608626 = r48608603 + r48608625;
        float r48608627 = r48608614 * r48608626;
        float r48608628 = r48608627 * r48608627;
        float r48608629 = r48608594 * r48608596;
        float r48608630 = r48608629 + r48608598;
        float r48608631 = r48608627 - r48608630;
        float r48608632 = r48608630 * r48608631;
        float r48608633 = r48608628 - r48608632;
        float r48608634 = r48608624 / r48608633;
        return r48608634;
}

double f_od(double x) {
        double r48608635 = x;
        double r48608636 = 6.5625;
        double r48608637 = r48608635 * r48608636;
        double r48608638 = r48608637 * r48608635;
        double r48608639 = -0.3125;
        double r48608640 = r48608638 + r48608639;
        double r48608641 = 3;
        double r48608642 = pow(r48608640, r48608641);
        double r48608643 = r48608635 * r48608635;
        double r48608644 = -19.6875;
        double r48608645 = 14.4375;
        double r48608646 = r48608643 * r48608645;
        double r48608647 = r48608644 + r48608646;
        double r48608648 = r48608643 * r48608647;
        double r48608649 = r48608643 * r48608648;
        double r48608650 = pow(r48608649, r48608641);
        double r48608651 = r48608642 + r48608650;
        double r48608652 = sqrt(r48608651);
        double r48608653 = r48608645 * r48608643;
        double r48608654 = r48608653 + r48608644;
        double r48608655 = r48608643 * r48608643;
        double r48608656 = r48608654 * r48608655;
        double r48608657 = r48608656 * r48608656;
        double r48608658 = r48608645 * r48608635;
        double r48608659 = r48608635 * r48608658;
        double r48608660 = r48608659 + r48608644;
        double r48608661 = r48608660 * r48608655;
        double r48608662 = r48608657 * r48608661;
        double r48608663 = r48608642 + r48608662;
        double r48608664 = sqrt(r48608663);
        double r48608665 = r48608652 * r48608664;
        double r48608666 = r48608658 * r48608635;
        double r48608667 = r48608644 + r48608666;
        double r48608668 = r48608655 * r48608667;
        double r48608669 = r48608668 * r48608668;
        double r48608670 = r48608635 * r48608637;
        double r48608671 = r48608670 + r48608639;
        double r48608672 = r48608668 - r48608671;
        double r48608673 = r48608671 * r48608672;
        double r48608674 = r48608669 - r48608673;
        double r48608675 = r48608665 / r48608674;
        return r48608675;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48608676, r48608677, r48608678, r48608679, r48608680, r48608681, r48608682, r48608683, r48608684, r48608685, r48608686, r48608687, r48608688, r48608689, r48608690, r48608691;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608676, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608677, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r48608678);
        mpfr_init(r48608679);
        mpfr_init(r48608680);
        mpfr_init(r48608681);
        mpfr_init_set_str(r48608682, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r48608683);
        mpfr_init(r48608684);
        mpfr_init(r48608685);
        mpfr_init(r48608686);
        mpfr_init_set_str(r48608687, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r48608688);
        mpfr_init(r48608689);
        mpfr_init(r48608690);
        mpfr_init(r48608691);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r48608678, x, MPFR_RNDN);
        mpfr_mul(r48608679, r48608678, r48608678, MPFR_RNDN);
        mpfr_mul(r48608680, r48608677, r48608679, MPFR_RNDN);
        mpfr_add(r48608681, r48608676, r48608680, MPFR_RNDN);
        ;
        mpfr_mul(r48608683, r48608679, r48608678, MPFR_RNDN);
        mpfr_mul(r48608684, r48608683, r48608678, MPFR_RNDN);
        mpfr_mul(r48608685, r48608682, r48608684, MPFR_RNDN);
        mpfr_add(r48608686, r48608681, r48608685, MPFR_RNDN);
        ;
        mpfr_mul(r48608688, r48608684, r48608678, MPFR_RNDN);
        mpfr_mul(r48608689, r48608688, r48608678, MPFR_RNDN);
        mpfr_mul(r48608690, r48608687, r48608689, MPFR_RNDN);
        mpfr_add(r48608691, r48608686, r48608690, MPFR_RNDN);
        return mpfr_get_d(r48608691, MPFR_RNDN);
}

static mpfr_t r48608692, r48608693, r48608694, r48608695, r48608696, r48608697, r48608698, r48608699, r48608700, r48608701, r48608702, r48608703, r48608704, r48608705, r48608706, r48608707, r48608708, r48608709, r48608710, r48608711, r48608712, r48608713, r48608714, r48608715, r48608716, r48608717, r48608718, r48608719, r48608720, r48608721, r48608722, r48608723, r48608724, r48608725, r48608726, r48608727, r48608728, r48608729, r48608730, r48608731, r48608732;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r48608692);
        mpfr_init_set_str(r48608693, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r48608694);
        mpfr_init(r48608695);
        mpfr_init_set_str(r48608696, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r48608697);
        mpfr_init_set_str(r48608698, "3", 10, MPFR_RNDN);
        mpfr_init(r48608699);
        mpfr_init(r48608700);
        mpfr_init_set_str(r48608701, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608702, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r48608703);
        mpfr_init(r48608704);
        mpfr_init(r48608705);
        mpfr_init(r48608706);
        mpfr_init(r48608707);
        mpfr_init(r48608708);
        mpfr_init(r48608709);
        mpfr_init(r48608710);
        mpfr_init(r48608711);
        mpfr_init(r48608712);
        mpfr_init(r48608713);
        mpfr_init(r48608714);
        mpfr_init(r48608715);
        mpfr_init(r48608716);
        mpfr_init(r48608717);
        mpfr_init(r48608718);
        mpfr_init(r48608719);
        mpfr_init(r48608720);
        mpfr_init(r48608721);
        mpfr_init(r48608722);
        mpfr_init(r48608723);
        mpfr_init(r48608724);
        mpfr_init(r48608725);
        mpfr_init(r48608726);
        mpfr_init(r48608727);
        mpfr_init(r48608728);
        mpfr_init(r48608729);
        mpfr_init(r48608730);
        mpfr_init(r48608731);
        mpfr_init(r48608732);
}

double f_fm(double x) {
        mpfr_set_d(r48608692, x, MPFR_RNDN);
        ;
        mpfr_mul(r48608694, r48608692, r48608693, MPFR_RNDN);
        mpfr_mul(r48608695, r48608694, r48608692, MPFR_RNDN);
        ;
        mpfr_add(r48608697, r48608695, r48608696, MPFR_RNDN);
        ;
        mpfr_pow(r48608699, r48608697, r48608698, MPFR_RNDN);
        mpfr_mul(r48608700, r48608692, r48608692, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r48608703, r48608700, r48608702, MPFR_RNDN);
        mpfr_add(r48608704, r48608701, r48608703, MPFR_RNDN);
        mpfr_mul(r48608705, r48608700, r48608704, MPFR_RNDN);
        mpfr_mul(r48608706, r48608700, r48608705, MPFR_RNDN);
        mpfr_pow(r48608707, r48608706, r48608698, MPFR_RNDN);
        mpfr_add(r48608708, r48608699, r48608707, MPFR_RNDN);
        mpfr_sqrt(r48608709, r48608708, MPFR_RNDN);
        mpfr_mul(r48608710, r48608702, r48608700, MPFR_RNDN);
        mpfr_add(r48608711, r48608710, r48608701, MPFR_RNDN);
        mpfr_mul(r48608712, r48608700, r48608700, MPFR_RNDN);
        mpfr_mul(r48608713, r48608711, r48608712, MPFR_RNDN);
        mpfr_mul(r48608714, r48608713, r48608713, MPFR_RNDN);
        mpfr_mul(r48608715, r48608702, r48608692, MPFR_RNDN);
        mpfr_mul(r48608716, r48608692, r48608715, MPFR_RNDN);
        mpfr_add(r48608717, r48608716, r48608701, MPFR_RNDN);
        mpfr_mul(r48608718, r48608717, r48608712, MPFR_RNDN);
        mpfr_mul(r48608719, r48608714, r48608718, MPFR_RNDN);
        mpfr_add(r48608720, r48608699, r48608719, MPFR_RNDN);
        mpfr_sqrt(r48608721, r48608720, MPFR_RNDN);
        mpfr_mul(r48608722, r48608709, r48608721, MPFR_RNDN);
        mpfr_mul(r48608723, r48608715, r48608692, MPFR_RNDN);
        mpfr_add(r48608724, r48608701, r48608723, MPFR_RNDN);
        mpfr_mul(r48608725, r48608712, r48608724, MPFR_RNDN);
        mpfr_mul(r48608726, r48608725, r48608725, MPFR_RNDN);
        mpfr_mul(r48608727, r48608692, r48608694, MPFR_RNDN);
        mpfr_add(r48608728, r48608727, r48608696, MPFR_RNDN);
        mpfr_sub(r48608729, r48608725, r48608728, MPFR_RNDN);
        mpfr_mul(r48608730, r48608728, r48608729, MPFR_RNDN);
        mpfr_sub(r48608731, r48608726, r48608730, MPFR_RNDN);
        mpfr_div(r48608732, r48608722, r48608731, MPFR_RNDN);
        return mpfr_get_d(r48608732, MPFR_RNDN);
}

static mpfr_t r48608733, r48608734, r48608735, r48608736, r48608737, r48608738, r48608739, r48608740, r48608741, r48608742, r48608743, r48608744, r48608745, r48608746, r48608747, r48608748, r48608749, r48608750, r48608751, r48608752, r48608753, r48608754, r48608755, r48608756, r48608757, r48608758, r48608759, r48608760, r48608761, r48608762, r48608763, r48608764, r48608765, r48608766, r48608767, r48608768, r48608769, r48608770, r48608771, r48608772, r48608773;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r48608733);
        mpfr_init_set_str(r48608734, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r48608735);
        mpfr_init(r48608736);
        mpfr_init_set_str(r48608737, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r48608738);
        mpfr_init_set_str(r48608739, "3", 10, MPFR_RNDN);
        mpfr_init(r48608740);
        mpfr_init(r48608741);
        mpfr_init_set_str(r48608742, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608743, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r48608744);
        mpfr_init(r48608745);
        mpfr_init(r48608746);
        mpfr_init(r48608747);
        mpfr_init(r48608748);
        mpfr_init(r48608749);
        mpfr_init(r48608750);
        mpfr_init(r48608751);
        mpfr_init(r48608752);
        mpfr_init(r48608753);
        mpfr_init(r48608754);
        mpfr_init(r48608755);
        mpfr_init(r48608756);
        mpfr_init(r48608757);
        mpfr_init(r48608758);
        mpfr_init(r48608759);
        mpfr_init(r48608760);
        mpfr_init(r48608761);
        mpfr_init(r48608762);
        mpfr_init(r48608763);
        mpfr_init(r48608764);
        mpfr_init(r48608765);
        mpfr_init(r48608766);
        mpfr_init(r48608767);
        mpfr_init(r48608768);
        mpfr_init(r48608769);
        mpfr_init(r48608770);
        mpfr_init(r48608771);
        mpfr_init(r48608772);
        mpfr_init(r48608773);
}

double f_dm(double x) {
        mpfr_set_d(r48608733, x, MPFR_RNDN);
        ;
        mpfr_mul(r48608735, r48608733, r48608734, MPFR_RNDN);
        mpfr_mul(r48608736, r48608735, r48608733, MPFR_RNDN);
        ;
        mpfr_add(r48608738, r48608736, r48608737, MPFR_RNDN);
        ;
        mpfr_pow(r48608740, r48608738, r48608739, MPFR_RNDN);
        mpfr_mul(r48608741, r48608733, r48608733, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r48608744, r48608741, r48608743, MPFR_RNDN);
        mpfr_add(r48608745, r48608742, r48608744, MPFR_RNDN);
        mpfr_mul(r48608746, r48608741, r48608745, MPFR_RNDN);
        mpfr_mul(r48608747, r48608741, r48608746, MPFR_RNDN);
        mpfr_pow(r48608748, r48608747, r48608739, MPFR_RNDN);
        mpfr_add(r48608749, r48608740, r48608748, MPFR_RNDN);
        mpfr_sqrt(r48608750, r48608749, MPFR_RNDN);
        mpfr_mul(r48608751, r48608743, r48608741, MPFR_RNDN);
        mpfr_add(r48608752, r48608751, r48608742, MPFR_RNDN);
        mpfr_mul(r48608753, r48608741, r48608741, MPFR_RNDN);
        mpfr_mul(r48608754, r48608752, r48608753, MPFR_RNDN);
        mpfr_mul(r48608755, r48608754, r48608754, MPFR_RNDN);
        mpfr_mul(r48608756, r48608743, r48608733, MPFR_RNDN);
        mpfr_mul(r48608757, r48608733, r48608756, MPFR_RNDN);
        mpfr_add(r48608758, r48608757, r48608742, MPFR_RNDN);
        mpfr_mul(r48608759, r48608758, r48608753, MPFR_RNDN);
        mpfr_mul(r48608760, r48608755, r48608759, MPFR_RNDN);
        mpfr_add(r48608761, r48608740, r48608760, MPFR_RNDN);
        mpfr_sqrt(r48608762, r48608761, MPFR_RNDN);
        mpfr_mul(r48608763, r48608750, r48608762, MPFR_RNDN);
        mpfr_mul(r48608764, r48608756, r48608733, MPFR_RNDN);
        mpfr_add(r48608765, r48608742, r48608764, MPFR_RNDN);
        mpfr_mul(r48608766, r48608753, r48608765, MPFR_RNDN);
        mpfr_mul(r48608767, r48608766, r48608766, MPFR_RNDN);
        mpfr_mul(r48608768, r48608733, r48608735, MPFR_RNDN);
        mpfr_add(r48608769, r48608768, r48608737, MPFR_RNDN);
        mpfr_sub(r48608770, r48608766, r48608769, MPFR_RNDN);
        mpfr_mul(r48608771, r48608769, r48608770, MPFR_RNDN);
        mpfr_sub(r48608772, r48608767, r48608771, MPFR_RNDN);
        mpfr_div(r48608773, r48608763, r48608772, MPFR_RNDN);
        return mpfr_get_d(r48608773, MPFR_RNDN);
}

