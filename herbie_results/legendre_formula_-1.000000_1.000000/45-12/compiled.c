#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r10048546 = 0.225586;
        float r10048547 = -17.595703;
        float r10048548 = x;
        float r10048549 = r10048548 * r10048548;
        float r10048550 = r10048547 * r10048549;
        float r10048551 = r10048546 + r10048550;
        float r10048552 = 219.946289;
        float r10048553 = r10048549 * r10048548;
        float r10048554 = r10048553 * r10048548;
        float r10048555 = r10048552 * r10048554;
        float r10048556 = r10048551 + r10048555;
        float r10048557 = -997.089844;
        float r10048558 = r10048554 * r10048548;
        float r10048559 = r10048558 * r10048548;
        float r10048560 = r10048557 * r10048559;
        float r10048561 = r10048556 + r10048560;
        float r10048562 = 2029.790039;
        float r10048563 = r10048559 * r10048548;
        float r10048564 = r10048563 * r10048548;
        float r10048565 = r10048562 * r10048564;
        float r10048566 = r10048561 + r10048565;
        float r10048567 = -1894.470703;
        float r10048568 = r10048564 * r10048548;
        float r10048569 = r10048568 * r10048548;
        float r10048570 = r10048567 * r10048569;
        float r10048571 = r10048566 + r10048570;
        float r10048572 = 660.194336;
        float r10048573 = r10048569 * r10048548;
        float r10048574 = r10048573 * r10048548;
        float r10048575 = r10048572 * r10048574;
        float r10048576 = r10048571 + r10048575;
        return r10048576;
}

double f_id(double x) {
        double r10048577 = 0.225586;
        double r10048578 = -17.595703;
        double r10048579 = x;
        double r10048580 = r10048579 * r10048579;
        double r10048581 = r10048578 * r10048580;
        double r10048582 = r10048577 + r10048581;
        double r10048583 = 219.946289;
        double r10048584 = r10048580 * r10048579;
        double r10048585 = r10048584 * r10048579;
        double r10048586 = r10048583 * r10048585;
        double r10048587 = r10048582 + r10048586;
        double r10048588 = -997.089844;
        double r10048589 = r10048585 * r10048579;
        double r10048590 = r10048589 * r10048579;
        double r10048591 = r10048588 * r10048590;
        double r10048592 = r10048587 + r10048591;
        double r10048593 = 2029.790039;
        double r10048594 = r10048590 * r10048579;
        double r10048595 = r10048594 * r10048579;
        double r10048596 = r10048593 * r10048595;
        double r10048597 = r10048592 + r10048596;
        double r10048598 = -1894.470703;
        double r10048599 = r10048595 * r10048579;
        double r10048600 = r10048599 * r10048579;
        double r10048601 = r10048598 * r10048600;
        double r10048602 = r10048597 + r10048601;
        double r10048603 = 660.194336;
        double r10048604 = r10048600 * r10048579;
        double r10048605 = r10048604 * r10048579;
        double r10048606 = r10048603 * r10048605;
        double r10048607 = r10048602 + r10048606;
        return r10048607;
}


double f_of(float x) {
        float r10048608 = 660.194336;
        float r10048609 = x;
        float r10048610 = r10048608 * r10048609;
        float r10048611 = r10048610 * r10048609;
        float r10048612 = r10048609 * r10048609;
        float r10048613 = r10048612 * r10048612;
        float r10048614 = 3;
        float r10048615 = pow(r10048612, r10048614);
        float r10048616 = r10048613 * r10048615;
        float r10048617 = r10048611 * r10048616;
        float r10048618 = -997.089844;
        float r10048619 = 6;
        float r10048620 = pow(r10048609, r10048619);
        float r10048621 = r10048618 * r10048620;
        float r10048622 = r10048617 + r10048621;
        float r10048623 = 0.225586;
        float r10048624 = pow(r10048609, r10048614);
        float r10048625 = 219.946289;
        float r10048626 = r10048609 * r10048625;
        float r10048627 = r10048624 * r10048626;
        float r10048628 = -17.595703;
        float r10048629 = r10048612 * r10048628;
        float r10048630 = r10048627 + r10048629;
        float r10048631 = r10048623 + r10048630;
        float r10048632 = r10048613 * r10048613;
        float r10048633 = -1894.470703;
        float r10048634 = r10048612 * r10048633;
        float r10048635 = 2029.790039;
        float r10048636 = r10048634 + r10048635;
        float r10048637 = r10048632 * r10048636;
        float r10048638 = r10048631 + r10048637;
        float r10048639 = r10048622 + r10048638;
        return r10048639;
}

double f_od(double x) {
        double r10048640 = 660.194336;
        double r10048641 = x;
        double r10048642 = r10048640 * r10048641;
        double r10048643 = r10048642 * r10048641;
        double r10048644 = r10048641 * r10048641;
        double r10048645 = r10048644 * r10048644;
        double r10048646 = 3;
        double r10048647 = pow(r10048644, r10048646);
        double r10048648 = r10048645 * r10048647;
        double r10048649 = r10048643 * r10048648;
        double r10048650 = -997.089844;
        double r10048651 = 6;
        double r10048652 = pow(r10048641, r10048651);
        double r10048653 = r10048650 * r10048652;
        double r10048654 = r10048649 + r10048653;
        double r10048655 = 0.225586;
        double r10048656 = pow(r10048641, r10048646);
        double r10048657 = 219.946289;
        double r10048658 = r10048641 * r10048657;
        double r10048659 = r10048656 * r10048658;
        double r10048660 = -17.595703;
        double r10048661 = r10048644 * r10048660;
        double r10048662 = r10048659 + r10048661;
        double r10048663 = r10048655 + r10048662;
        double r10048664 = r10048645 * r10048645;
        double r10048665 = -1894.470703;
        double r10048666 = r10048644 * r10048665;
        double r10048667 = 2029.790039;
        double r10048668 = r10048666 + r10048667;
        double r10048669 = r10048664 * r10048668;
        double r10048670 = r10048663 + r10048669;
        double r10048671 = r10048654 + r10048670;
        return r10048671;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10048672, r10048673, r10048674, r10048675, r10048676, r10048677, r10048678, r10048679, r10048680, r10048681, r10048682, r10048683, r10048684, r10048685, r10048686, r10048687, r10048688, r10048689, r10048690, r10048691, r10048692, r10048693, r10048694, r10048695, r10048696, r10048697, r10048698, r10048699, r10048700, r10048701, r10048702;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10048672, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r10048673, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r10048674);
        mpfr_init(r10048675);
        mpfr_init(r10048676);
        mpfr_init(r10048677);
        mpfr_init_set_str(r10048678, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r10048679);
        mpfr_init(r10048680);
        mpfr_init(r10048681);
        mpfr_init(r10048682);
        mpfr_init_set_str(r10048683, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r10048684);
        mpfr_init(r10048685);
        mpfr_init(r10048686);
        mpfr_init(r10048687);
        mpfr_init_set_str(r10048688, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r10048689);
        mpfr_init(r10048690);
        mpfr_init(r10048691);
        mpfr_init(r10048692);
        mpfr_init_set_str(r10048693, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r10048694);
        mpfr_init(r10048695);
        mpfr_init(r10048696);
        mpfr_init(r10048697);
        mpfr_init_set_str(r10048698, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r10048699);
        mpfr_init(r10048700);
        mpfr_init(r10048701);
        mpfr_init(r10048702);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10048674, x, MPFR_RNDN);
        mpfr_mul(r10048675, r10048674, r10048674, MPFR_RNDN);
        mpfr_mul(r10048676, r10048673, r10048675, MPFR_RNDN);
        mpfr_add(r10048677, r10048672, r10048676, MPFR_RNDN);
        ;
        mpfr_mul(r10048679, r10048675, r10048674, MPFR_RNDN);
        mpfr_mul(r10048680, r10048679, r10048674, MPFR_RNDN);
        mpfr_mul(r10048681, r10048678, r10048680, MPFR_RNDN);
        mpfr_add(r10048682, r10048677, r10048681, MPFR_RNDN);
        ;
        mpfr_mul(r10048684, r10048680, r10048674, MPFR_RNDN);
        mpfr_mul(r10048685, r10048684, r10048674, MPFR_RNDN);
        mpfr_mul(r10048686, r10048683, r10048685, MPFR_RNDN);
        mpfr_add(r10048687, r10048682, r10048686, MPFR_RNDN);
        ;
        mpfr_mul(r10048689, r10048685, r10048674, MPFR_RNDN);
        mpfr_mul(r10048690, r10048689, r10048674, MPFR_RNDN);
        mpfr_mul(r10048691, r10048688, r10048690, MPFR_RNDN);
        mpfr_add(r10048692, r10048687, r10048691, MPFR_RNDN);
        ;
        mpfr_mul(r10048694, r10048690, r10048674, MPFR_RNDN);
        mpfr_mul(r10048695, r10048694, r10048674, MPFR_RNDN);
        mpfr_mul(r10048696, r10048693, r10048695, MPFR_RNDN);
        mpfr_add(r10048697, r10048692, r10048696, MPFR_RNDN);
        ;
        mpfr_mul(r10048699, r10048695, r10048674, MPFR_RNDN);
        mpfr_mul(r10048700, r10048699, r10048674, MPFR_RNDN);
        mpfr_mul(r10048701, r10048698, r10048700, MPFR_RNDN);
        mpfr_add(r10048702, r10048697, r10048701, MPFR_RNDN);
        return mpfr_get_d(r10048702, MPFR_RNDN);
}

static mpfr_t r10048703, r10048704, r10048705, r10048706, r10048707, r10048708, r10048709, r10048710, r10048711, r10048712, r10048713, r10048714, r10048715, r10048716, r10048717, r10048718, r10048719, r10048720, r10048721, r10048722, r10048723, r10048724, r10048725, r10048726, r10048727, r10048728, r10048729, r10048730, r10048731, r10048732, r10048733, r10048734;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10048703, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r10048704);
        mpfr_init(r10048705);
        mpfr_init(r10048706);
        mpfr_init(r10048707);
        mpfr_init(r10048708);
        mpfr_init_set_str(r10048709, "3", 10, MPFR_RNDN);
        mpfr_init(r10048710);
        mpfr_init(r10048711);
        mpfr_init(r10048712);
        mpfr_init_set_str(r10048713, "-997.089844", 10, MPFR_RNDN);
        mpfr_init_set_str(r10048714, "6", 10, MPFR_RNDN);
        mpfr_init(r10048715);
        mpfr_init(r10048716);
        mpfr_init(r10048717);
        mpfr_init_set_str(r10048718, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r10048719);
        mpfr_init_set_str(r10048720, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r10048721);
        mpfr_init(r10048722);
        mpfr_init_set_str(r10048723, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r10048724);
        mpfr_init(r10048725);
        mpfr_init(r10048726);
        mpfr_init(r10048727);
        mpfr_init_set_str(r10048728, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r10048729);
        mpfr_init_set_str(r10048730, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r10048731);
        mpfr_init(r10048732);
        mpfr_init(r10048733);
        mpfr_init(r10048734);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10048704, x, MPFR_RNDN);
        mpfr_mul(r10048705, r10048703, r10048704, MPFR_RNDN);
        mpfr_mul(r10048706, r10048705, r10048704, MPFR_RNDN);
        mpfr_mul(r10048707, r10048704, r10048704, MPFR_RNDN);
        mpfr_mul(r10048708, r10048707, r10048707, MPFR_RNDN);
        ;
        mpfr_pow(r10048710, r10048707, r10048709, MPFR_RNDN);
        mpfr_mul(r10048711, r10048708, r10048710, MPFR_RNDN);
        mpfr_mul(r10048712, r10048706, r10048711, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10048715, r10048704, r10048714, MPFR_RNDN);
        mpfr_mul(r10048716, r10048713, r10048715, MPFR_RNDN);
        mpfr_add(r10048717, r10048712, r10048716, MPFR_RNDN);
        ;
        mpfr_pow(r10048719, r10048704, r10048709, MPFR_RNDN);
        ;
        mpfr_mul(r10048721, r10048704, r10048720, MPFR_RNDN);
        mpfr_mul(r10048722, r10048719, r10048721, MPFR_RNDN);
        ;
        mpfr_mul(r10048724, r10048707, r10048723, MPFR_RNDN);
        mpfr_add(r10048725, r10048722, r10048724, MPFR_RNDN);
        mpfr_add(r10048726, r10048718, r10048725, MPFR_RNDN);
        mpfr_mul(r10048727, r10048708, r10048708, MPFR_RNDN);
        ;
        mpfr_mul(r10048729, r10048707, r10048728, MPFR_RNDN);
        ;
        mpfr_add(r10048731, r10048729, r10048730, MPFR_RNDN);
        mpfr_mul(r10048732, r10048727, r10048731, MPFR_RNDN);
        mpfr_add(r10048733, r10048726, r10048732, MPFR_RNDN);
        mpfr_add(r10048734, r10048717, r10048733, MPFR_RNDN);
        return mpfr_get_d(r10048734, MPFR_RNDN);
}

static mpfr_t r10048735, r10048736, r10048737, r10048738, r10048739, r10048740, r10048741, r10048742, r10048743, r10048744, r10048745, r10048746, r10048747, r10048748, r10048749, r10048750, r10048751, r10048752, r10048753, r10048754, r10048755, r10048756, r10048757, r10048758, r10048759, r10048760, r10048761, r10048762, r10048763, r10048764, r10048765, r10048766;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10048735, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r10048736);
        mpfr_init(r10048737);
        mpfr_init(r10048738);
        mpfr_init(r10048739);
        mpfr_init(r10048740);
        mpfr_init_set_str(r10048741, "3", 10, MPFR_RNDN);
        mpfr_init(r10048742);
        mpfr_init(r10048743);
        mpfr_init(r10048744);
        mpfr_init_set_str(r10048745, "-997.089844", 10, MPFR_RNDN);
        mpfr_init_set_str(r10048746, "6", 10, MPFR_RNDN);
        mpfr_init(r10048747);
        mpfr_init(r10048748);
        mpfr_init(r10048749);
        mpfr_init_set_str(r10048750, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r10048751);
        mpfr_init_set_str(r10048752, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r10048753);
        mpfr_init(r10048754);
        mpfr_init_set_str(r10048755, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r10048756);
        mpfr_init(r10048757);
        mpfr_init(r10048758);
        mpfr_init(r10048759);
        mpfr_init_set_str(r10048760, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r10048761);
        mpfr_init_set_str(r10048762, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r10048763);
        mpfr_init(r10048764);
        mpfr_init(r10048765);
        mpfr_init(r10048766);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10048736, x, MPFR_RNDN);
        mpfr_mul(r10048737, r10048735, r10048736, MPFR_RNDN);
        mpfr_mul(r10048738, r10048737, r10048736, MPFR_RNDN);
        mpfr_mul(r10048739, r10048736, r10048736, MPFR_RNDN);
        mpfr_mul(r10048740, r10048739, r10048739, MPFR_RNDN);
        ;
        mpfr_pow(r10048742, r10048739, r10048741, MPFR_RNDN);
        mpfr_mul(r10048743, r10048740, r10048742, MPFR_RNDN);
        mpfr_mul(r10048744, r10048738, r10048743, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10048747, r10048736, r10048746, MPFR_RNDN);
        mpfr_mul(r10048748, r10048745, r10048747, MPFR_RNDN);
        mpfr_add(r10048749, r10048744, r10048748, MPFR_RNDN);
        ;
        mpfr_pow(r10048751, r10048736, r10048741, MPFR_RNDN);
        ;
        mpfr_mul(r10048753, r10048736, r10048752, MPFR_RNDN);
        mpfr_mul(r10048754, r10048751, r10048753, MPFR_RNDN);
        ;
        mpfr_mul(r10048756, r10048739, r10048755, MPFR_RNDN);
        mpfr_add(r10048757, r10048754, r10048756, MPFR_RNDN);
        mpfr_add(r10048758, r10048750, r10048757, MPFR_RNDN);
        mpfr_mul(r10048759, r10048740, r10048740, MPFR_RNDN);
        ;
        mpfr_mul(r10048761, r10048739, r10048760, MPFR_RNDN);
        ;
        mpfr_add(r10048763, r10048761, r10048762, MPFR_RNDN);
        mpfr_mul(r10048764, r10048759, r10048763, MPFR_RNDN);
        mpfr_add(r10048765, r10048758, r10048764, MPFR_RNDN);
        mpfr_add(r10048766, r10048749, r10048765, MPFR_RNDN);
        return mpfr_get_d(r10048766, MPFR_RNDN);
}

