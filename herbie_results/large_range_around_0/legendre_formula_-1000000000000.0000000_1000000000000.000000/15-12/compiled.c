#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r7169573 = 0.225586;
        float r7169574 = -17.595703;
        float r7169575 = x;
        float r7169576 = r7169575 * r7169575;
        float r7169577 = r7169574 * r7169576;
        float r7169578 = r7169573 + r7169577;
        float r7169579 = 219.946289;
        float r7169580 = r7169576 * r7169575;
        float r7169581 = r7169580 * r7169575;
        float r7169582 = r7169579 * r7169581;
        float r7169583 = r7169578 + r7169582;
        float r7169584 = -997.089844;
        float r7169585 = r7169581 * r7169575;
        float r7169586 = r7169585 * r7169575;
        float r7169587 = r7169584 * r7169586;
        float r7169588 = r7169583 + r7169587;
        float r7169589 = 2029.790039;
        float r7169590 = r7169586 * r7169575;
        float r7169591 = r7169590 * r7169575;
        float r7169592 = r7169589 * r7169591;
        float r7169593 = r7169588 + r7169592;
        float r7169594 = -1894.470703;
        float r7169595 = r7169591 * r7169575;
        float r7169596 = r7169595 * r7169575;
        float r7169597 = r7169594 * r7169596;
        float r7169598 = r7169593 + r7169597;
        float r7169599 = 660.194336;
        float r7169600 = r7169596 * r7169575;
        float r7169601 = r7169600 * r7169575;
        float r7169602 = r7169599 * r7169601;
        float r7169603 = r7169598 + r7169602;
        return r7169603;
}

double f_id(double x) {
        double r7169604 = 0.225586;
        double r7169605 = -17.595703;
        double r7169606 = x;
        double r7169607 = r7169606 * r7169606;
        double r7169608 = r7169605 * r7169607;
        double r7169609 = r7169604 + r7169608;
        double r7169610 = 219.946289;
        double r7169611 = r7169607 * r7169606;
        double r7169612 = r7169611 * r7169606;
        double r7169613 = r7169610 * r7169612;
        double r7169614 = r7169609 + r7169613;
        double r7169615 = -997.089844;
        double r7169616 = r7169612 * r7169606;
        double r7169617 = r7169616 * r7169606;
        double r7169618 = r7169615 * r7169617;
        double r7169619 = r7169614 + r7169618;
        double r7169620 = 2029.790039;
        double r7169621 = r7169617 * r7169606;
        double r7169622 = r7169621 * r7169606;
        double r7169623 = r7169620 * r7169622;
        double r7169624 = r7169619 + r7169623;
        double r7169625 = -1894.470703;
        double r7169626 = r7169622 * r7169606;
        double r7169627 = r7169626 * r7169606;
        double r7169628 = r7169625 * r7169627;
        double r7169629 = r7169624 + r7169628;
        double r7169630 = 660.194336;
        double r7169631 = r7169627 * r7169606;
        double r7169632 = r7169631 * r7169606;
        double r7169633 = r7169630 * r7169632;
        double r7169634 = r7169629 + r7169633;
        return r7169634;
}


double f_of(float x) {
        float r7169635 = x;
        float r7169636 = r7169635 * r7169635;
        float r7169637 = 3;
        float r7169638 = 1;
        float r7169639 = r7169637 + r7169638;
        float r7169640 = pow(r7169636, r7169639);
        float r7169641 = -1894.470703;
        float r7169642 = r7169641 * r7169635;
        float r7169643 = r7169642 * r7169635;
        float r7169644 = r7169640 * r7169643;
        float r7169645 = 660.194336;
        float r7169646 = r7169635 * r7169645;
        float r7169647 = r7169636 * r7169646;
        float r7169648 = pow(r7169635, r7169637);
        float r7169649 = pow(r7169648, r7169637);
        float r7169650 = r7169647 * r7169649;
        float r7169651 = r7169644 + r7169650;
        float r7169652 = pow(r7169636, r7169637);
        float r7169653 = 2029.790039;
        float r7169654 = r7169653 * r7169636;
        float r7169655 = -997.089844;
        float r7169656 = r7169654 + r7169655;
        float r7169657 = r7169652 * r7169656;
        float r7169658 = 0.225586;
        float r7169659 = 4;
        float r7169660 = pow(r7169635, r7169659);
        float r7169661 = 219.946289;
        float r7169662 = r7169660 * r7169661;
        float r7169663 = -17.595703;
        float r7169664 = r7169636 * r7169663;
        float r7169665 = r7169662 + r7169664;
        float r7169666 = r7169658 + r7169665;
        float r7169667 = r7169657 + r7169666;
        float r7169668 = r7169651 + r7169667;
        return r7169668;
}

double f_od(double x) {
        double r7169669 = x;
        double r7169670 = r7169669 * r7169669;
        double r7169671 = 3;
        double r7169672 = 1;
        double r7169673 = r7169671 + r7169672;
        double r7169674 = pow(r7169670, r7169673);
        double r7169675 = -1894.470703;
        double r7169676 = r7169675 * r7169669;
        double r7169677 = r7169676 * r7169669;
        double r7169678 = r7169674 * r7169677;
        double r7169679 = 660.194336;
        double r7169680 = r7169669 * r7169679;
        double r7169681 = r7169670 * r7169680;
        double r7169682 = pow(r7169669, r7169671);
        double r7169683 = pow(r7169682, r7169671);
        double r7169684 = r7169681 * r7169683;
        double r7169685 = r7169678 + r7169684;
        double r7169686 = pow(r7169670, r7169671);
        double r7169687 = 2029.790039;
        double r7169688 = r7169687 * r7169670;
        double r7169689 = -997.089844;
        double r7169690 = r7169688 + r7169689;
        double r7169691 = r7169686 * r7169690;
        double r7169692 = 0.225586;
        double r7169693 = 4;
        double r7169694 = pow(r7169669, r7169693);
        double r7169695 = 219.946289;
        double r7169696 = r7169694 * r7169695;
        double r7169697 = -17.595703;
        double r7169698 = r7169670 * r7169697;
        double r7169699 = r7169696 + r7169698;
        double r7169700 = r7169692 + r7169699;
        double r7169701 = r7169691 + r7169700;
        double r7169702 = r7169685 + r7169701;
        return r7169702;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7169703, r7169704, r7169705, r7169706, r7169707, r7169708, r7169709, r7169710, r7169711, r7169712, r7169713, r7169714, r7169715, r7169716, r7169717, r7169718, r7169719, r7169720, r7169721, r7169722, r7169723, r7169724, r7169725, r7169726, r7169727, r7169728, r7169729, r7169730, r7169731, r7169732, r7169733;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7169703, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169704, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7169705);
        mpfr_init(r7169706);
        mpfr_init(r7169707);
        mpfr_init(r7169708);
        mpfr_init_set_str(r7169709, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7169710);
        mpfr_init(r7169711);
        mpfr_init(r7169712);
        mpfr_init(r7169713);
        mpfr_init_set_str(r7169714, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7169715);
        mpfr_init(r7169716);
        mpfr_init(r7169717);
        mpfr_init(r7169718);
        mpfr_init_set_str(r7169719, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7169720);
        mpfr_init(r7169721);
        mpfr_init(r7169722);
        mpfr_init(r7169723);
        mpfr_init_set_str(r7169724, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7169725);
        mpfr_init(r7169726);
        mpfr_init(r7169727);
        mpfr_init(r7169728);
        mpfr_init_set_str(r7169729, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7169730);
        mpfr_init(r7169731);
        mpfr_init(r7169732);
        mpfr_init(r7169733);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7169705, x, MPFR_RNDN);
        mpfr_mul(r7169706, r7169705, r7169705, MPFR_RNDN);
        mpfr_mul(r7169707, r7169704, r7169706, MPFR_RNDN);
        mpfr_add(r7169708, r7169703, r7169707, MPFR_RNDN);
        ;
        mpfr_mul(r7169710, r7169706, r7169705, MPFR_RNDN);
        mpfr_mul(r7169711, r7169710, r7169705, MPFR_RNDN);
        mpfr_mul(r7169712, r7169709, r7169711, MPFR_RNDN);
        mpfr_add(r7169713, r7169708, r7169712, MPFR_RNDN);
        ;
        mpfr_mul(r7169715, r7169711, r7169705, MPFR_RNDN);
        mpfr_mul(r7169716, r7169715, r7169705, MPFR_RNDN);
        mpfr_mul(r7169717, r7169714, r7169716, MPFR_RNDN);
        mpfr_add(r7169718, r7169713, r7169717, MPFR_RNDN);
        ;
        mpfr_mul(r7169720, r7169716, r7169705, MPFR_RNDN);
        mpfr_mul(r7169721, r7169720, r7169705, MPFR_RNDN);
        mpfr_mul(r7169722, r7169719, r7169721, MPFR_RNDN);
        mpfr_add(r7169723, r7169718, r7169722, MPFR_RNDN);
        ;
        mpfr_mul(r7169725, r7169721, r7169705, MPFR_RNDN);
        mpfr_mul(r7169726, r7169725, r7169705, MPFR_RNDN);
        mpfr_mul(r7169727, r7169724, r7169726, MPFR_RNDN);
        mpfr_add(r7169728, r7169723, r7169727, MPFR_RNDN);
        ;
        mpfr_mul(r7169730, r7169726, r7169705, MPFR_RNDN);
        mpfr_mul(r7169731, r7169730, r7169705, MPFR_RNDN);
        mpfr_mul(r7169732, r7169729, r7169731, MPFR_RNDN);
        mpfr_add(r7169733, r7169728, r7169732, MPFR_RNDN);
        return mpfr_get_d(r7169733, MPFR_RNDN);
}

static mpfr_t r7169734, r7169735, r7169736, r7169737, r7169738, r7169739, r7169740, r7169741, r7169742, r7169743, r7169744, r7169745, r7169746, r7169747, r7169748, r7169749, r7169750, r7169751, r7169752, r7169753, r7169754, r7169755, r7169756, r7169757, r7169758, r7169759, r7169760, r7169761, r7169762, r7169763, r7169764, r7169765, r7169766, r7169767;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7169734);
        mpfr_init(r7169735);
        mpfr_init_set_str(r7169736, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169737, "1", 10, MPFR_RNDN);
        mpfr_init(r7169738);
        mpfr_init(r7169739);
        mpfr_init_set_str(r7169740, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7169741);
        mpfr_init(r7169742);
        mpfr_init(r7169743);
        mpfr_init_set_str(r7169744, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7169745);
        mpfr_init(r7169746);
        mpfr_init(r7169747);
        mpfr_init(r7169748);
        mpfr_init(r7169749);
        mpfr_init(r7169750);
        mpfr_init(r7169751);
        mpfr_init_set_str(r7169752, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7169753);
        mpfr_init_set_str(r7169754, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7169755);
        mpfr_init(r7169756);
        mpfr_init_set_str(r7169757, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169758, "4", 10, MPFR_RNDN);
        mpfr_init(r7169759);
        mpfr_init_set_str(r7169760, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7169761);
        mpfr_init_set_str(r7169762, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7169763);
        mpfr_init(r7169764);
        mpfr_init(r7169765);
        mpfr_init(r7169766);
        mpfr_init(r7169767);
}

double f_fm(double x) {
        mpfr_set_d(r7169734, x, MPFR_RNDN);
        mpfr_mul(r7169735, r7169734, r7169734, MPFR_RNDN);
        ;
        ;
        mpfr_add(r7169738, r7169736, r7169737, MPFR_RNDN);
        mpfr_pow(r7169739, r7169735, r7169738, MPFR_RNDN);
        ;
        mpfr_mul(r7169741, r7169740, r7169734, MPFR_RNDN);
        mpfr_mul(r7169742, r7169741, r7169734, MPFR_RNDN);
        mpfr_mul(r7169743, r7169739, r7169742, MPFR_RNDN);
        ;
        mpfr_mul(r7169745, r7169734, r7169744, MPFR_RNDN);
        mpfr_mul(r7169746, r7169735, r7169745, MPFR_RNDN);
        mpfr_pow(r7169747, r7169734, r7169736, MPFR_RNDN);
        mpfr_pow(r7169748, r7169747, r7169736, MPFR_RNDN);
        mpfr_mul(r7169749, r7169746, r7169748, MPFR_RNDN);
        mpfr_add(r7169750, r7169743, r7169749, MPFR_RNDN);
        mpfr_pow(r7169751, r7169735, r7169736, MPFR_RNDN);
        ;
        mpfr_mul(r7169753, r7169752, r7169735, MPFR_RNDN);
        ;
        mpfr_add(r7169755, r7169753, r7169754, MPFR_RNDN);
        mpfr_mul(r7169756, r7169751, r7169755, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7169759, r7169734, r7169758, MPFR_RNDN);
        ;
        mpfr_mul(r7169761, r7169759, r7169760, MPFR_RNDN);
        ;
        mpfr_mul(r7169763, r7169735, r7169762, MPFR_RNDN);
        mpfr_add(r7169764, r7169761, r7169763, MPFR_RNDN);
        mpfr_add(r7169765, r7169757, r7169764, MPFR_RNDN);
        mpfr_add(r7169766, r7169756, r7169765, MPFR_RNDN);
        mpfr_add(r7169767, r7169750, r7169766, MPFR_RNDN);
        return mpfr_get_d(r7169767, MPFR_RNDN);
}

static mpfr_t r7169768, r7169769, r7169770, r7169771, r7169772, r7169773, r7169774, r7169775, r7169776, r7169777, r7169778, r7169779, r7169780, r7169781, r7169782, r7169783, r7169784, r7169785, r7169786, r7169787, r7169788, r7169789, r7169790, r7169791, r7169792, r7169793, r7169794, r7169795, r7169796, r7169797, r7169798, r7169799, r7169800, r7169801;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7169768);
        mpfr_init(r7169769);
        mpfr_init_set_str(r7169770, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169771, "1", 10, MPFR_RNDN);
        mpfr_init(r7169772);
        mpfr_init(r7169773);
        mpfr_init_set_str(r7169774, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7169775);
        mpfr_init(r7169776);
        mpfr_init(r7169777);
        mpfr_init_set_str(r7169778, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7169779);
        mpfr_init(r7169780);
        mpfr_init(r7169781);
        mpfr_init(r7169782);
        mpfr_init(r7169783);
        mpfr_init(r7169784);
        mpfr_init(r7169785);
        mpfr_init_set_str(r7169786, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7169787);
        mpfr_init_set_str(r7169788, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7169789);
        mpfr_init(r7169790);
        mpfr_init_set_str(r7169791, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169792, "4", 10, MPFR_RNDN);
        mpfr_init(r7169793);
        mpfr_init_set_str(r7169794, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7169795);
        mpfr_init_set_str(r7169796, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7169797);
        mpfr_init(r7169798);
        mpfr_init(r7169799);
        mpfr_init(r7169800);
        mpfr_init(r7169801);
}

double f_dm(double x) {
        mpfr_set_d(r7169768, x, MPFR_RNDN);
        mpfr_mul(r7169769, r7169768, r7169768, MPFR_RNDN);
        ;
        ;
        mpfr_add(r7169772, r7169770, r7169771, MPFR_RNDN);
        mpfr_pow(r7169773, r7169769, r7169772, MPFR_RNDN);
        ;
        mpfr_mul(r7169775, r7169774, r7169768, MPFR_RNDN);
        mpfr_mul(r7169776, r7169775, r7169768, MPFR_RNDN);
        mpfr_mul(r7169777, r7169773, r7169776, MPFR_RNDN);
        ;
        mpfr_mul(r7169779, r7169768, r7169778, MPFR_RNDN);
        mpfr_mul(r7169780, r7169769, r7169779, MPFR_RNDN);
        mpfr_pow(r7169781, r7169768, r7169770, MPFR_RNDN);
        mpfr_pow(r7169782, r7169781, r7169770, MPFR_RNDN);
        mpfr_mul(r7169783, r7169780, r7169782, MPFR_RNDN);
        mpfr_add(r7169784, r7169777, r7169783, MPFR_RNDN);
        mpfr_pow(r7169785, r7169769, r7169770, MPFR_RNDN);
        ;
        mpfr_mul(r7169787, r7169786, r7169769, MPFR_RNDN);
        ;
        mpfr_add(r7169789, r7169787, r7169788, MPFR_RNDN);
        mpfr_mul(r7169790, r7169785, r7169789, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7169793, r7169768, r7169792, MPFR_RNDN);
        ;
        mpfr_mul(r7169795, r7169793, r7169794, MPFR_RNDN);
        ;
        mpfr_mul(r7169797, r7169769, r7169796, MPFR_RNDN);
        mpfr_add(r7169798, r7169795, r7169797, MPFR_RNDN);
        mpfr_add(r7169799, r7169791, r7169798, MPFR_RNDN);
        mpfr_add(r7169800, r7169790, r7169799, MPFR_RNDN);
        mpfr_add(r7169801, r7169784, r7169800, MPFR_RNDN);
        return mpfr_get_d(r7169801, MPFR_RNDN);
}

