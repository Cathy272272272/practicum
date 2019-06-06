#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r4487600 = 0.225586;
        float r4487601 = -17.595703;
        float r4487602 = x;
        float r4487603 = r4487602 * r4487602;
        float r4487604 = r4487601 * r4487603;
        float r4487605 = r4487600 + r4487604;
        float r4487606 = 219.946289;
        float r4487607 = r4487603 * r4487602;
        float r4487608 = r4487607 * r4487602;
        float r4487609 = r4487606 * r4487608;
        float r4487610 = r4487605 + r4487609;
        float r4487611 = -997.089844;
        float r4487612 = r4487608 * r4487602;
        float r4487613 = r4487612 * r4487602;
        float r4487614 = r4487611 * r4487613;
        float r4487615 = r4487610 + r4487614;
        float r4487616 = 2029.790039;
        float r4487617 = r4487613 * r4487602;
        float r4487618 = r4487617 * r4487602;
        float r4487619 = r4487616 * r4487618;
        float r4487620 = r4487615 + r4487619;
        float r4487621 = -1894.470703;
        float r4487622 = r4487618 * r4487602;
        float r4487623 = r4487622 * r4487602;
        float r4487624 = r4487621 * r4487623;
        float r4487625 = r4487620 + r4487624;
        float r4487626 = 660.194336;
        float r4487627 = r4487623 * r4487602;
        float r4487628 = r4487627 * r4487602;
        float r4487629 = r4487626 * r4487628;
        float r4487630 = r4487625 + r4487629;
        return r4487630;
}

double f_id(double x) {
        double r4487631 = 0.225586;
        double r4487632 = -17.595703;
        double r4487633 = x;
        double r4487634 = r4487633 * r4487633;
        double r4487635 = r4487632 * r4487634;
        double r4487636 = r4487631 + r4487635;
        double r4487637 = 219.946289;
        double r4487638 = r4487634 * r4487633;
        double r4487639 = r4487638 * r4487633;
        double r4487640 = r4487637 * r4487639;
        double r4487641 = r4487636 + r4487640;
        double r4487642 = -997.089844;
        double r4487643 = r4487639 * r4487633;
        double r4487644 = r4487643 * r4487633;
        double r4487645 = r4487642 * r4487644;
        double r4487646 = r4487641 + r4487645;
        double r4487647 = 2029.790039;
        double r4487648 = r4487644 * r4487633;
        double r4487649 = r4487648 * r4487633;
        double r4487650 = r4487647 * r4487649;
        double r4487651 = r4487646 + r4487650;
        double r4487652 = -1894.470703;
        double r4487653 = r4487649 * r4487633;
        double r4487654 = r4487653 * r4487633;
        double r4487655 = r4487652 * r4487654;
        double r4487656 = r4487651 + r4487655;
        double r4487657 = 660.194336;
        double r4487658 = r4487654 * r4487633;
        double r4487659 = r4487658 * r4487633;
        double r4487660 = r4487657 * r4487659;
        double r4487661 = r4487656 + r4487660;
        return r4487661;
}


double f_of(float x) {
        float r4487662 = 0.225586;
        float r4487663 = -17.595703;
        float r4487664 = x;
        float r4487665 = r4487664 * r4487664;
        float r4487666 = r4487663 * r4487665;
        float r4487667 = r4487662 + r4487666;
        float r4487668 = 219.946289;
        float r4487669 = r4487665 * r4487664;
        float r4487670 = r4487669 * r4487664;
        float r4487671 = r4487668 * r4487670;
        float r4487672 = r4487667 + r4487671;
        float r4487673 = -997.089844;
        float r4487674 = r4487670 * r4487664;
        float r4487675 = r4487674 * r4487664;
        float r4487676 = r4487673 * r4487675;
        float r4487677 = r4487672 + r4487676;
        float r4487678 = 2029.790039;
        float r4487679 = r4487675 * r4487664;
        float r4487680 = r4487679 * r4487664;
        float r4487681 = r4487678 * r4487680;
        float r4487682 = r4487677 + r4487681;
        float r4487683 = -1894.470703;
        float r4487684 = r4487680 * r4487664;
        float r4487685 = r4487684 * r4487664;
        float r4487686 = r4487683 * r4487685;
        float r4487687 = r4487682 + r4487686;
        float r4487688 = 660.194336;
        float r4487689 = r4487685 * r4487664;
        float r4487690 = r4487689 * r4487664;
        float r4487691 = r4487688 * r4487690;
        float r4487692 = r4487687 + r4487691;
        return r4487692;
}

double f_od(double x) {
        double r4487693 = 0.225586;
        double r4487694 = -17.595703;
        double r4487695 = x;
        double r4487696 = r4487695 * r4487695;
        double r4487697 = r4487694 * r4487696;
        double r4487698 = r4487693 + r4487697;
        double r4487699 = 219.946289;
        double r4487700 = r4487696 * r4487695;
        double r4487701 = r4487700 * r4487695;
        double r4487702 = r4487699 * r4487701;
        double r4487703 = r4487698 + r4487702;
        double r4487704 = -997.089844;
        double r4487705 = r4487701 * r4487695;
        double r4487706 = r4487705 * r4487695;
        double r4487707 = r4487704 * r4487706;
        double r4487708 = r4487703 + r4487707;
        double r4487709 = 2029.790039;
        double r4487710 = r4487706 * r4487695;
        double r4487711 = r4487710 * r4487695;
        double r4487712 = r4487709 * r4487711;
        double r4487713 = r4487708 + r4487712;
        double r4487714 = -1894.470703;
        double r4487715 = r4487711 * r4487695;
        double r4487716 = r4487715 * r4487695;
        double r4487717 = r4487714 * r4487716;
        double r4487718 = r4487713 + r4487717;
        double r4487719 = 660.194336;
        double r4487720 = r4487716 * r4487695;
        double r4487721 = r4487720 * r4487695;
        double r4487722 = r4487719 * r4487721;
        double r4487723 = r4487718 + r4487722;
        return r4487723;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4487724, r4487725, r4487726, r4487727, r4487728, r4487729, r4487730, r4487731, r4487732, r4487733, r4487734, r4487735, r4487736, r4487737, r4487738, r4487739, r4487740, r4487741, r4487742, r4487743, r4487744, r4487745, r4487746, r4487747, r4487748, r4487749, r4487750, r4487751, r4487752, r4487753, r4487754;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4487724, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4487725, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4487726);
        mpfr_init(r4487727);
        mpfr_init(r4487728);
        mpfr_init(r4487729);
        mpfr_init_set_str(r4487730, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4487731);
        mpfr_init(r4487732);
        mpfr_init(r4487733);
        mpfr_init(r4487734);
        mpfr_init_set_str(r4487735, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4487736);
        mpfr_init(r4487737);
        mpfr_init(r4487738);
        mpfr_init(r4487739);
        mpfr_init_set_str(r4487740, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4487741);
        mpfr_init(r4487742);
        mpfr_init(r4487743);
        mpfr_init(r4487744);
        mpfr_init_set_str(r4487745, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4487746);
        mpfr_init(r4487747);
        mpfr_init(r4487748);
        mpfr_init(r4487749);
        mpfr_init_set_str(r4487750, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4487751);
        mpfr_init(r4487752);
        mpfr_init(r4487753);
        mpfr_init(r4487754);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4487726, x, MPFR_RNDN);
        mpfr_mul(r4487727, r4487726, r4487726, MPFR_RNDN);
        mpfr_mul(r4487728, r4487725, r4487727, MPFR_RNDN);
        mpfr_add(r4487729, r4487724, r4487728, MPFR_RNDN);
        ;
        mpfr_mul(r4487731, r4487727, r4487726, MPFR_RNDN);
        mpfr_mul(r4487732, r4487731, r4487726, MPFR_RNDN);
        mpfr_mul(r4487733, r4487730, r4487732, MPFR_RNDN);
        mpfr_add(r4487734, r4487729, r4487733, MPFR_RNDN);
        ;
        mpfr_mul(r4487736, r4487732, r4487726, MPFR_RNDN);
        mpfr_mul(r4487737, r4487736, r4487726, MPFR_RNDN);
        mpfr_mul(r4487738, r4487735, r4487737, MPFR_RNDN);
        mpfr_add(r4487739, r4487734, r4487738, MPFR_RNDN);
        ;
        mpfr_mul(r4487741, r4487737, r4487726, MPFR_RNDN);
        mpfr_mul(r4487742, r4487741, r4487726, MPFR_RNDN);
        mpfr_mul(r4487743, r4487740, r4487742, MPFR_RNDN);
        mpfr_add(r4487744, r4487739, r4487743, MPFR_RNDN);
        ;
        mpfr_mul(r4487746, r4487742, r4487726, MPFR_RNDN);
        mpfr_mul(r4487747, r4487746, r4487726, MPFR_RNDN);
        mpfr_mul(r4487748, r4487745, r4487747, MPFR_RNDN);
        mpfr_add(r4487749, r4487744, r4487748, MPFR_RNDN);
        ;
        mpfr_mul(r4487751, r4487747, r4487726, MPFR_RNDN);
        mpfr_mul(r4487752, r4487751, r4487726, MPFR_RNDN);
        mpfr_mul(r4487753, r4487750, r4487752, MPFR_RNDN);
        mpfr_add(r4487754, r4487749, r4487753, MPFR_RNDN);
        return mpfr_get_d(r4487754, MPFR_RNDN);
}

static mpfr_t r4487755, r4487756, r4487757, r4487758, r4487759, r4487760, r4487761, r4487762, r4487763, r4487764, r4487765, r4487766, r4487767, r4487768, r4487769, r4487770, r4487771, r4487772, r4487773, r4487774, r4487775, r4487776, r4487777, r4487778, r4487779, r4487780, r4487781, r4487782, r4487783, r4487784, r4487785;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4487755, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4487756, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4487757);
        mpfr_init(r4487758);
        mpfr_init(r4487759);
        mpfr_init(r4487760);
        mpfr_init_set_str(r4487761, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4487762);
        mpfr_init(r4487763);
        mpfr_init(r4487764);
        mpfr_init(r4487765);
        mpfr_init_set_str(r4487766, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4487767);
        mpfr_init(r4487768);
        mpfr_init(r4487769);
        mpfr_init(r4487770);
        mpfr_init_set_str(r4487771, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4487772);
        mpfr_init(r4487773);
        mpfr_init(r4487774);
        mpfr_init(r4487775);
        mpfr_init_set_str(r4487776, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4487777);
        mpfr_init(r4487778);
        mpfr_init(r4487779);
        mpfr_init(r4487780);
        mpfr_init_set_str(r4487781, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4487782);
        mpfr_init(r4487783);
        mpfr_init(r4487784);
        mpfr_init(r4487785);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4487757, x, MPFR_RNDN);
        mpfr_mul(r4487758, r4487757, r4487757, MPFR_RNDN);
        mpfr_mul(r4487759, r4487756, r4487758, MPFR_RNDN);
        mpfr_add(r4487760, r4487755, r4487759, MPFR_RNDN);
        ;
        mpfr_mul(r4487762, r4487758, r4487757, MPFR_RNDN);
        mpfr_mul(r4487763, r4487762, r4487757, MPFR_RNDN);
        mpfr_mul(r4487764, r4487761, r4487763, MPFR_RNDN);
        mpfr_add(r4487765, r4487760, r4487764, MPFR_RNDN);
        ;
        mpfr_mul(r4487767, r4487763, r4487757, MPFR_RNDN);
        mpfr_mul(r4487768, r4487767, r4487757, MPFR_RNDN);
        mpfr_mul(r4487769, r4487766, r4487768, MPFR_RNDN);
        mpfr_add(r4487770, r4487765, r4487769, MPFR_RNDN);
        ;
        mpfr_mul(r4487772, r4487768, r4487757, MPFR_RNDN);
        mpfr_mul(r4487773, r4487772, r4487757, MPFR_RNDN);
        mpfr_mul(r4487774, r4487771, r4487773, MPFR_RNDN);
        mpfr_add(r4487775, r4487770, r4487774, MPFR_RNDN);
        ;
        mpfr_mul(r4487777, r4487773, r4487757, MPFR_RNDN);
        mpfr_mul(r4487778, r4487777, r4487757, MPFR_RNDN);
        mpfr_mul(r4487779, r4487776, r4487778, MPFR_RNDN);
        mpfr_add(r4487780, r4487775, r4487779, MPFR_RNDN);
        ;
        mpfr_mul(r4487782, r4487778, r4487757, MPFR_RNDN);
        mpfr_mul(r4487783, r4487782, r4487757, MPFR_RNDN);
        mpfr_mul(r4487784, r4487781, r4487783, MPFR_RNDN);
        mpfr_add(r4487785, r4487780, r4487784, MPFR_RNDN);
        return mpfr_get_d(r4487785, MPFR_RNDN);
}

static mpfr_t r4487786, r4487787, r4487788, r4487789, r4487790, r4487791, r4487792, r4487793, r4487794, r4487795, r4487796, r4487797, r4487798, r4487799, r4487800, r4487801, r4487802, r4487803, r4487804, r4487805, r4487806, r4487807, r4487808, r4487809, r4487810, r4487811, r4487812, r4487813, r4487814, r4487815, r4487816;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4487786, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4487787, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4487788);
        mpfr_init(r4487789);
        mpfr_init(r4487790);
        mpfr_init(r4487791);
        mpfr_init_set_str(r4487792, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4487793);
        mpfr_init(r4487794);
        mpfr_init(r4487795);
        mpfr_init(r4487796);
        mpfr_init_set_str(r4487797, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4487798);
        mpfr_init(r4487799);
        mpfr_init(r4487800);
        mpfr_init(r4487801);
        mpfr_init_set_str(r4487802, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4487803);
        mpfr_init(r4487804);
        mpfr_init(r4487805);
        mpfr_init(r4487806);
        mpfr_init_set_str(r4487807, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4487808);
        mpfr_init(r4487809);
        mpfr_init(r4487810);
        mpfr_init(r4487811);
        mpfr_init_set_str(r4487812, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4487813);
        mpfr_init(r4487814);
        mpfr_init(r4487815);
        mpfr_init(r4487816);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4487788, x, MPFR_RNDN);
        mpfr_mul(r4487789, r4487788, r4487788, MPFR_RNDN);
        mpfr_mul(r4487790, r4487787, r4487789, MPFR_RNDN);
        mpfr_add(r4487791, r4487786, r4487790, MPFR_RNDN);
        ;
        mpfr_mul(r4487793, r4487789, r4487788, MPFR_RNDN);
        mpfr_mul(r4487794, r4487793, r4487788, MPFR_RNDN);
        mpfr_mul(r4487795, r4487792, r4487794, MPFR_RNDN);
        mpfr_add(r4487796, r4487791, r4487795, MPFR_RNDN);
        ;
        mpfr_mul(r4487798, r4487794, r4487788, MPFR_RNDN);
        mpfr_mul(r4487799, r4487798, r4487788, MPFR_RNDN);
        mpfr_mul(r4487800, r4487797, r4487799, MPFR_RNDN);
        mpfr_add(r4487801, r4487796, r4487800, MPFR_RNDN);
        ;
        mpfr_mul(r4487803, r4487799, r4487788, MPFR_RNDN);
        mpfr_mul(r4487804, r4487803, r4487788, MPFR_RNDN);
        mpfr_mul(r4487805, r4487802, r4487804, MPFR_RNDN);
        mpfr_add(r4487806, r4487801, r4487805, MPFR_RNDN);
        ;
        mpfr_mul(r4487808, r4487804, r4487788, MPFR_RNDN);
        mpfr_mul(r4487809, r4487808, r4487788, MPFR_RNDN);
        mpfr_mul(r4487810, r4487807, r4487809, MPFR_RNDN);
        mpfr_add(r4487811, r4487806, r4487810, MPFR_RNDN);
        ;
        mpfr_mul(r4487813, r4487809, r4487788, MPFR_RNDN);
        mpfr_mul(r4487814, r4487813, r4487788, MPFR_RNDN);
        mpfr_mul(r4487815, r4487812, r4487814, MPFR_RNDN);
        mpfr_add(r4487816, r4487811, r4487815, MPFR_RNDN);
        return mpfr_get_d(r4487816, MPFR_RNDN);
}

