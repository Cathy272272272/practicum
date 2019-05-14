#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r10747550 = 1.0;
        float r10747551 = -10.0;
        float r10747552 = x;
        float r10747553 = r10747551 * r10747552;
        float r10747554 = r10747550 + r10747553;
        float r10747555 = 22.5;
        float r10747556 = r10747552 * r10747552;
        float r10747557 = r10747555 * r10747556;
        float r10747558 = r10747554 + r10747557;
        float r10747559 = -20.0;
        float r10747560 = r10747556 * r10747552;
        float r10747561 = r10747559 * r10747560;
        float r10747562 = r10747558 + r10747561;
        float r10747563 = 8.75;
        float r10747564 = r10747560 * r10747552;
        float r10747565 = r10747563 * r10747564;
        float r10747566 = r10747562 + r10747565;
        float r10747567 = -2.1;
        float r10747568 = r10747564 * r10747552;
        float r10747569 = r10747567 * r10747568;
        float r10747570 = r10747566 + r10747569;
        float r10747571 = 0.291667;
        float r10747572 = r10747568 * r10747552;
        float r10747573 = r10747571 * r10747572;
        float r10747574 = r10747570 + r10747573;
        float r10747575 = -0.02381;
        float r10747576 = r10747572 * r10747552;
        float r10747577 = r10747575 * r10747576;
        float r10747578 = r10747574 + r10747577;
        float r10747579 = 0.001116;
        float r10747580 = r10747576 * r10747552;
        float r10747581 = r10747579 * r10747580;
        float r10747582 = r10747578 + r10747581;
        float r10747583 = -2.8e-05;
        float r10747584 = r10747580 * r10747552;
        float r10747585 = r10747583 * r10747584;
        float r10747586 = r10747582 + r10747585;
        return r10747586;
}

double f_id(double x) {
        double r10747587 = 1.0;
        double r10747588 = -10.0;
        double r10747589 = x;
        double r10747590 = r10747588 * r10747589;
        double r10747591 = r10747587 + r10747590;
        double r10747592 = 22.5;
        double r10747593 = r10747589 * r10747589;
        double r10747594 = r10747592 * r10747593;
        double r10747595 = r10747591 + r10747594;
        double r10747596 = -20.0;
        double r10747597 = r10747593 * r10747589;
        double r10747598 = r10747596 * r10747597;
        double r10747599 = r10747595 + r10747598;
        double r10747600 = 8.75;
        double r10747601 = r10747597 * r10747589;
        double r10747602 = r10747600 * r10747601;
        double r10747603 = r10747599 + r10747602;
        double r10747604 = -2.1;
        double r10747605 = r10747601 * r10747589;
        double r10747606 = r10747604 * r10747605;
        double r10747607 = r10747603 + r10747606;
        double r10747608 = 0.291667;
        double r10747609 = r10747605 * r10747589;
        double r10747610 = r10747608 * r10747609;
        double r10747611 = r10747607 + r10747610;
        double r10747612 = -0.02381;
        double r10747613 = r10747609 * r10747589;
        double r10747614 = r10747612 * r10747613;
        double r10747615 = r10747611 + r10747614;
        double r10747616 = 0.001116;
        double r10747617 = r10747613 * r10747589;
        double r10747618 = r10747616 * r10747617;
        double r10747619 = r10747615 + r10747618;
        double r10747620 = -2.8e-05;
        double r10747621 = r10747617 * r10747589;
        double r10747622 = r10747620 * r10747621;
        double r10747623 = r10747619 + r10747622;
        return r10747623;
}


double f_of(float x) {
        float r10747624 = 1.0;
        float r10747625 = -10.0;
        float r10747626 = x;
        float r10747627 = r10747625 * r10747626;
        float r10747628 = r10747624 + r10747627;
        float r10747629 = 22.5;
        float r10747630 = r10747626 * r10747626;
        float r10747631 = r10747629 * r10747630;
        float r10747632 = cbrt(r10747631);
        float r10747633 = r10747632 * r10747632;
        float r10747634 = r10747633 * r10747632;
        float r10747635 = r10747628 + r10747634;
        float r10747636 = -20.0;
        float r10747637 = r10747630 * r10747626;
        float r10747638 = r10747636 * r10747637;
        float r10747639 = r10747635 + r10747638;
        float r10747640 = 8.75;
        float r10747641 = r10747637 * r10747626;
        float r10747642 = r10747640 * r10747641;
        float r10747643 = r10747639 + r10747642;
        float r10747644 = -2.1;
        float r10747645 = r10747641 * r10747626;
        float r10747646 = r10747644 * r10747645;
        float r10747647 = r10747643 + r10747646;
        float r10747648 = 0.291667;
        float r10747649 = r10747645 * r10747626;
        float r10747650 = r10747648 * r10747649;
        float r10747651 = r10747647 + r10747650;
        float r10747652 = -0.02381;
        float r10747653 = r10747649 * r10747626;
        float r10747654 = r10747652 * r10747653;
        float r10747655 = r10747651 + r10747654;
        float r10747656 = 0.001116;
        float r10747657 = r10747653 * r10747626;
        float r10747658 = r10747656 * r10747657;
        float r10747659 = r10747655 + r10747658;
        float r10747660 = -2.8e-05;
        float r10747661 = r10747657 * r10747626;
        float r10747662 = r10747660 * r10747661;
        float r10747663 = r10747659 + r10747662;
        return r10747663;
}

double f_od(double x) {
        double r10747664 = 1.0;
        double r10747665 = -10.0;
        double r10747666 = x;
        double r10747667 = r10747665 * r10747666;
        double r10747668 = r10747664 + r10747667;
        double r10747669 = 22.5;
        double r10747670 = r10747666 * r10747666;
        double r10747671 = r10747669 * r10747670;
        double r10747672 = cbrt(r10747671);
        double r10747673 = r10747672 * r10747672;
        double r10747674 = r10747673 * r10747672;
        double r10747675 = r10747668 + r10747674;
        double r10747676 = -20.0;
        double r10747677 = r10747670 * r10747666;
        double r10747678 = r10747676 * r10747677;
        double r10747679 = r10747675 + r10747678;
        double r10747680 = 8.75;
        double r10747681 = r10747677 * r10747666;
        double r10747682 = r10747680 * r10747681;
        double r10747683 = r10747679 + r10747682;
        double r10747684 = -2.1;
        double r10747685 = r10747681 * r10747666;
        double r10747686 = r10747684 * r10747685;
        double r10747687 = r10747683 + r10747686;
        double r10747688 = 0.291667;
        double r10747689 = r10747685 * r10747666;
        double r10747690 = r10747688 * r10747689;
        double r10747691 = r10747687 + r10747690;
        double r10747692 = -0.02381;
        double r10747693 = r10747689 * r10747666;
        double r10747694 = r10747692 * r10747693;
        double r10747695 = r10747691 + r10747694;
        double r10747696 = 0.001116;
        double r10747697 = r10747693 * r10747666;
        double r10747698 = r10747696 * r10747697;
        double r10747699 = r10747695 + r10747698;
        double r10747700 = -2.8e-05;
        double r10747701 = r10747697 * r10747666;
        double r10747702 = r10747700 * r10747701;
        double r10747703 = r10747699 + r10747702;
        return r10747703;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10747704, r10747705, r10747706, r10747707, r10747708, r10747709, r10747710, r10747711, r10747712, r10747713, r10747714, r10747715, r10747716, r10747717, r10747718, r10747719, r10747720, r10747721, r10747722, r10747723, r10747724, r10747725, r10747726, r10747727, r10747728, r10747729, r10747730, r10747731, r10747732, r10747733, r10747734, r10747735, r10747736, r10747737, r10747738, r10747739, r10747740;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10747704, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10747705, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10747706);
        mpfr_init(r10747707);
        mpfr_init(r10747708);
        mpfr_init_set_str(r10747709, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10747710);
        mpfr_init(r10747711);
        mpfr_init(r10747712);
        mpfr_init_set_str(r10747713, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10747714);
        mpfr_init(r10747715);
        mpfr_init(r10747716);
        mpfr_init_set_str(r10747717, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10747718);
        mpfr_init(r10747719);
        mpfr_init(r10747720);
        mpfr_init_set_str(r10747721, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10747722);
        mpfr_init(r10747723);
        mpfr_init(r10747724);
        mpfr_init_set_str(r10747725, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10747726);
        mpfr_init(r10747727);
        mpfr_init(r10747728);
        mpfr_init_set_str(r10747729, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10747730);
        mpfr_init(r10747731);
        mpfr_init(r10747732);
        mpfr_init_set_str(r10747733, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10747734);
        mpfr_init(r10747735);
        mpfr_init(r10747736);
        mpfr_init_set_str(r10747737, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10747738);
        mpfr_init(r10747739);
        mpfr_init(r10747740);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10747706, x, MPFR_RNDN);
        mpfr_mul(r10747707, r10747705, r10747706, MPFR_RNDN);
        mpfr_add(r10747708, r10747704, r10747707, MPFR_RNDN);
        ;
        mpfr_mul(r10747710, r10747706, r10747706, MPFR_RNDN);
        mpfr_mul(r10747711, r10747709, r10747710, MPFR_RNDN);
        mpfr_add(r10747712, r10747708, r10747711, MPFR_RNDN);
        ;
        mpfr_mul(r10747714, r10747710, r10747706, MPFR_RNDN);
        mpfr_mul(r10747715, r10747713, r10747714, MPFR_RNDN);
        mpfr_add(r10747716, r10747712, r10747715, MPFR_RNDN);
        ;
        mpfr_mul(r10747718, r10747714, r10747706, MPFR_RNDN);
        mpfr_mul(r10747719, r10747717, r10747718, MPFR_RNDN);
        mpfr_add(r10747720, r10747716, r10747719, MPFR_RNDN);
        ;
        mpfr_mul(r10747722, r10747718, r10747706, MPFR_RNDN);
        mpfr_mul(r10747723, r10747721, r10747722, MPFR_RNDN);
        mpfr_add(r10747724, r10747720, r10747723, MPFR_RNDN);
        ;
        mpfr_mul(r10747726, r10747722, r10747706, MPFR_RNDN);
        mpfr_mul(r10747727, r10747725, r10747726, MPFR_RNDN);
        mpfr_add(r10747728, r10747724, r10747727, MPFR_RNDN);
        ;
        mpfr_mul(r10747730, r10747726, r10747706, MPFR_RNDN);
        mpfr_mul(r10747731, r10747729, r10747730, MPFR_RNDN);
        mpfr_add(r10747732, r10747728, r10747731, MPFR_RNDN);
        ;
        mpfr_mul(r10747734, r10747730, r10747706, MPFR_RNDN);
        mpfr_mul(r10747735, r10747733, r10747734, MPFR_RNDN);
        mpfr_add(r10747736, r10747732, r10747735, MPFR_RNDN);
        ;
        mpfr_mul(r10747738, r10747734, r10747706, MPFR_RNDN);
        mpfr_mul(r10747739, r10747737, r10747738, MPFR_RNDN);
        mpfr_add(r10747740, r10747736, r10747739, MPFR_RNDN);
        return mpfr_get_d(r10747740, MPFR_RNDN);
}

static mpfr_t r10747741, r10747742, r10747743, r10747744, r10747745, r10747746, r10747747, r10747748, r10747749, r10747750, r10747751, r10747752, r10747753, r10747754, r10747755, r10747756, r10747757, r10747758, r10747759, r10747760, r10747761, r10747762, r10747763, r10747764, r10747765, r10747766, r10747767, r10747768, r10747769, r10747770, r10747771, r10747772, r10747773, r10747774, r10747775, r10747776, r10747777, r10747778, r10747779, r10747780;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10747741, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10747742, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10747743);
        mpfr_init(r10747744);
        mpfr_init(r10747745);
        mpfr_init_set_str(r10747746, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10747747);
        mpfr_init(r10747748);
        mpfr_init(r10747749);
        mpfr_init(r10747750);
        mpfr_init(r10747751);
        mpfr_init(r10747752);
        mpfr_init_set_str(r10747753, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10747754);
        mpfr_init(r10747755);
        mpfr_init(r10747756);
        mpfr_init_set_str(r10747757, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10747758);
        mpfr_init(r10747759);
        mpfr_init(r10747760);
        mpfr_init_set_str(r10747761, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10747762);
        mpfr_init(r10747763);
        mpfr_init(r10747764);
        mpfr_init_set_str(r10747765, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10747766);
        mpfr_init(r10747767);
        mpfr_init(r10747768);
        mpfr_init_set_str(r10747769, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10747770);
        mpfr_init(r10747771);
        mpfr_init(r10747772);
        mpfr_init_set_str(r10747773, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10747774);
        mpfr_init(r10747775);
        mpfr_init(r10747776);
        mpfr_init_set_str(r10747777, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10747778);
        mpfr_init(r10747779);
        mpfr_init(r10747780);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10747743, x, MPFR_RNDN);
        mpfr_mul(r10747744, r10747742, r10747743, MPFR_RNDN);
        mpfr_add(r10747745, r10747741, r10747744, MPFR_RNDN);
        ;
        mpfr_mul(r10747747, r10747743, r10747743, MPFR_RNDN);
        mpfr_mul(r10747748, r10747746, r10747747, MPFR_RNDN);
        mpfr_cbrt(r10747749, r10747748, MPFR_RNDN);
        mpfr_mul(r10747750, r10747749, r10747749, MPFR_RNDN);
        mpfr_mul(r10747751, r10747750, r10747749, MPFR_RNDN);
        mpfr_add(r10747752, r10747745, r10747751, MPFR_RNDN);
        ;
        mpfr_mul(r10747754, r10747747, r10747743, MPFR_RNDN);
        mpfr_mul(r10747755, r10747753, r10747754, MPFR_RNDN);
        mpfr_add(r10747756, r10747752, r10747755, MPFR_RNDN);
        ;
        mpfr_mul(r10747758, r10747754, r10747743, MPFR_RNDN);
        mpfr_mul(r10747759, r10747757, r10747758, MPFR_RNDN);
        mpfr_add(r10747760, r10747756, r10747759, MPFR_RNDN);
        ;
        mpfr_mul(r10747762, r10747758, r10747743, MPFR_RNDN);
        mpfr_mul(r10747763, r10747761, r10747762, MPFR_RNDN);
        mpfr_add(r10747764, r10747760, r10747763, MPFR_RNDN);
        ;
        mpfr_mul(r10747766, r10747762, r10747743, MPFR_RNDN);
        mpfr_mul(r10747767, r10747765, r10747766, MPFR_RNDN);
        mpfr_add(r10747768, r10747764, r10747767, MPFR_RNDN);
        ;
        mpfr_mul(r10747770, r10747766, r10747743, MPFR_RNDN);
        mpfr_mul(r10747771, r10747769, r10747770, MPFR_RNDN);
        mpfr_add(r10747772, r10747768, r10747771, MPFR_RNDN);
        ;
        mpfr_mul(r10747774, r10747770, r10747743, MPFR_RNDN);
        mpfr_mul(r10747775, r10747773, r10747774, MPFR_RNDN);
        mpfr_add(r10747776, r10747772, r10747775, MPFR_RNDN);
        ;
        mpfr_mul(r10747778, r10747774, r10747743, MPFR_RNDN);
        mpfr_mul(r10747779, r10747777, r10747778, MPFR_RNDN);
        mpfr_add(r10747780, r10747776, r10747779, MPFR_RNDN);
        return mpfr_get_d(r10747780, MPFR_RNDN);
}

static mpfr_t r10747781, r10747782, r10747783, r10747784, r10747785, r10747786, r10747787, r10747788, r10747789, r10747790, r10747791, r10747792, r10747793, r10747794, r10747795, r10747796, r10747797, r10747798, r10747799, r10747800, r10747801, r10747802, r10747803, r10747804, r10747805, r10747806, r10747807, r10747808, r10747809, r10747810, r10747811, r10747812, r10747813, r10747814, r10747815, r10747816, r10747817, r10747818, r10747819, r10747820;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10747781, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10747782, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10747783);
        mpfr_init(r10747784);
        mpfr_init(r10747785);
        mpfr_init_set_str(r10747786, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10747787);
        mpfr_init(r10747788);
        mpfr_init(r10747789);
        mpfr_init(r10747790);
        mpfr_init(r10747791);
        mpfr_init(r10747792);
        mpfr_init_set_str(r10747793, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10747794);
        mpfr_init(r10747795);
        mpfr_init(r10747796);
        mpfr_init_set_str(r10747797, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10747798);
        mpfr_init(r10747799);
        mpfr_init(r10747800);
        mpfr_init_set_str(r10747801, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10747802);
        mpfr_init(r10747803);
        mpfr_init(r10747804);
        mpfr_init_set_str(r10747805, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10747806);
        mpfr_init(r10747807);
        mpfr_init(r10747808);
        mpfr_init_set_str(r10747809, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10747810);
        mpfr_init(r10747811);
        mpfr_init(r10747812);
        mpfr_init_set_str(r10747813, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10747814);
        mpfr_init(r10747815);
        mpfr_init(r10747816);
        mpfr_init_set_str(r10747817, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10747818);
        mpfr_init(r10747819);
        mpfr_init(r10747820);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10747783, x, MPFR_RNDN);
        mpfr_mul(r10747784, r10747782, r10747783, MPFR_RNDN);
        mpfr_add(r10747785, r10747781, r10747784, MPFR_RNDN);
        ;
        mpfr_mul(r10747787, r10747783, r10747783, MPFR_RNDN);
        mpfr_mul(r10747788, r10747786, r10747787, MPFR_RNDN);
        mpfr_cbrt(r10747789, r10747788, MPFR_RNDN);
        mpfr_mul(r10747790, r10747789, r10747789, MPFR_RNDN);
        mpfr_mul(r10747791, r10747790, r10747789, MPFR_RNDN);
        mpfr_add(r10747792, r10747785, r10747791, MPFR_RNDN);
        ;
        mpfr_mul(r10747794, r10747787, r10747783, MPFR_RNDN);
        mpfr_mul(r10747795, r10747793, r10747794, MPFR_RNDN);
        mpfr_add(r10747796, r10747792, r10747795, MPFR_RNDN);
        ;
        mpfr_mul(r10747798, r10747794, r10747783, MPFR_RNDN);
        mpfr_mul(r10747799, r10747797, r10747798, MPFR_RNDN);
        mpfr_add(r10747800, r10747796, r10747799, MPFR_RNDN);
        ;
        mpfr_mul(r10747802, r10747798, r10747783, MPFR_RNDN);
        mpfr_mul(r10747803, r10747801, r10747802, MPFR_RNDN);
        mpfr_add(r10747804, r10747800, r10747803, MPFR_RNDN);
        ;
        mpfr_mul(r10747806, r10747802, r10747783, MPFR_RNDN);
        mpfr_mul(r10747807, r10747805, r10747806, MPFR_RNDN);
        mpfr_add(r10747808, r10747804, r10747807, MPFR_RNDN);
        ;
        mpfr_mul(r10747810, r10747806, r10747783, MPFR_RNDN);
        mpfr_mul(r10747811, r10747809, r10747810, MPFR_RNDN);
        mpfr_add(r10747812, r10747808, r10747811, MPFR_RNDN);
        ;
        mpfr_mul(r10747814, r10747810, r10747783, MPFR_RNDN);
        mpfr_mul(r10747815, r10747813, r10747814, MPFR_RNDN);
        mpfr_add(r10747816, r10747812, r10747815, MPFR_RNDN);
        ;
        mpfr_mul(r10747818, r10747814, r10747783, MPFR_RNDN);
        mpfr_mul(r10747819, r10747817, r10747818, MPFR_RNDN);
        mpfr_add(r10747820, r10747816, r10747819, MPFR_RNDN);
        return mpfr_get_d(r10747820, MPFR_RNDN);
}

