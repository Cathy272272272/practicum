#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r7404573 = -0.209473;
        float r7404574 = 21.994629;
        float r7404575 = x;
        float r7404576 = r7404575 * r7404575;
        float r7404577 = r7404574 * r7404576;
        float r7404578 = r7404573 + r7404577;
        float r7404579 = -373.908691;
        float r7404580 = r7404576 * r7404575;
        float r7404581 = r7404580 * r7404575;
        float r7404582 = r7404579 * r7404581;
        float r7404583 = r7404578 + r7404582;
        float r7404584 = 2368.088379;
        float r7404585 = r7404581 * r7404575;
        float r7404586 = r7404585 * r7404575;
        float r7404587 = r7404584 * r7404586;
        float r7404588 = r7404583 + r7404587;
        float r7404589 = -7104.265137;
        float r7404590 = r7404586 * r7404575;
        float r7404591 = r7404590 * r7404575;
        float r7404592 = r7404589 * r7404591;
        float r7404593 = r7404588 + r7404592;
        float r7404594 = 10893.206543;
        float r7404595 = r7404591 * r7404575;
        float r7404596 = r7404595 * r7404575;
        float r7404597 = r7404594 * r7404596;
        float r7404598 = r7404593 + r7404597;
        float r7404599 = -8252.429199;
        float r7404600 = r7404596 * r7404575;
        float r7404601 = r7404600 * r7404575;
        float r7404602 = r7404599 * r7404601;
        float r7404603 = r7404598 + r7404602;
        float r7404604 = 2448.522949;
        float r7404605 = r7404601 * r7404575;
        float r7404606 = r7404605 * r7404575;
        float r7404607 = r7404604 * r7404606;
        float r7404608 = r7404603 + r7404607;
        return r7404608;
}

double f_id(double x) {
        double r7404609 = -0.209473;
        double r7404610 = 21.994629;
        double r7404611 = x;
        double r7404612 = r7404611 * r7404611;
        double r7404613 = r7404610 * r7404612;
        double r7404614 = r7404609 + r7404613;
        double r7404615 = -373.908691;
        double r7404616 = r7404612 * r7404611;
        double r7404617 = r7404616 * r7404611;
        double r7404618 = r7404615 * r7404617;
        double r7404619 = r7404614 + r7404618;
        double r7404620 = 2368.088379;
        double r7404621 = r7404617 * r7404611;
        double r7404622 = r7404621 * r7404611;
        double r7404623 = r7404620 * r7404622;
        double r7404624 = r7404619 + r7404623;
        double r7404625 = -7104.265137;
        double r7404626 = r7404622 * r7404611;
        double r7404627 = r7404626 * r7404611;
        double r7404628 = r7404625 * r7404627;
        double r7404629 = r7404624 + r7404628;
        double r7404630 = 10893.206543;
        double r7404631 = r7404627 * r7404611;
        double r7404632 = r7404631 * r7404611;
        double r7404633 = r7404630 * r7404632;
        double r7404634 = r7404629 + r7404633;
        double r7404635 = -8252.429199;
        double r7404636 = r7404632 * r7404611;
        double r7404637 = r7404636 * r7404611;
        double r7404638 = r7404635 * r7404637;
        double r7404639 = r7404634 + r7404638;
        double r7404640 = 2448.522949;
        double r7404641 = r7404637 * r7404611;
        double r7404642 = r7404641 * r7404611;
        double r7404643 = r7404640 * r7404642;
        double r7404644 = r7404639 + r7404643;
        return r7404644;
}


double f_of(float x) {
        float r7404645 = -8252.429199;
        float r7404646 = x;
        float r7404647 = 2448.522949;
        float r7404648 = r7404647 * r7404646;
        float r7404649 = r7404646 * r7404648;
        float r7404650 = r7404645 + r7404649;
        float r7404651 = 3;
        float r7404652 = pow(r7404646, r7404651);
        float r7404653 = 1;
        float r7404654 = r7404651 + r7404653;
        float r7404655 = pow(r7404652, r7404654);
        float r7404656 = r7404650 * r7404655;
        float r7404657 = r7404646 * r7404646;
        float r7404658 = -1;
        float r7404659 = r7404658 / r7404646;
        float r7404660 = 2;
        float r7404661 = -r7404660;
        float r7404662 = pow(r7404659, r7404661);
        float r7404663 = r7404657 * r7404662;
        float r7404664 = 2368.088379;
        float r7404665 = r7404646 * r7404664;
        float r7404666 = r7404646 * r7404665;
        float r7404667 = -373.908691;
        float r7404668 = r7404666 + r7404667;
        float r7404669 = r7404663 * r7404668;
        float r7404670 = r7404656 + r7404669;
        float r7404671 = -0.209473;
        float r7404672 = 21.994629;
        float r7404673 = r7404657 * r7404672;
        float r7404674 = r7404671 + r7404673;
        float r7404675 = 10893.206543;
        float r7404676 = r7404675 * r7404657;
        float r7404677 = pow(r7404657, r7404654);
        float r7404678 = r7404676 * r7404677;
        float r7404679 = -7104.265137;
        float r7404680 = r7404677 * r7404679;
        float r7404681 = r7404678 + r7404680;
        float r7404682 = r7404674 + r7404681;
        float r7404683 = r7404670 + r7404682;
        return r7404683;
}

double f_od(double x) {
        double r7404684 = -8252.429199;
        double r7404685 = x;
        double r7404686 = 2448.522949;
        double r7404687 = r7404686 * r7404685;
        double r7404688 = r7404685 * r7404687;
        double r7404689 = r7404684 + r7404688;
        double r7404690 = 3;
        double r7404691 = pow(r7404685, r7404690);
        double r7404692 = 1;
        double r7404693 = r7404690 + r7404692;
        double r7404694 = pow(r7404691, r7404693);
        double r7404695 = r7404689 * r7404694;
        double r7404696 = r7404685 * r7404685;
        double r7404697 = -1;
        double r7404698 = r7404697 / r7404685;
        double r7404699 = 2;
        double r7404700 = -r7404699;
        double r7404701 = pow(r7404698, r7404700);
        double r7404702 = r7404696 * r7404701;
        double r7404703 = 2368.088379;
        double r7404704 = r7404685 * r7404703;
        double r7404705 = r7404685 * r7404704;
        double r7404706 = -373.908691;
        double r7404707 = r7404705 + r7404706;
        double r7404708 = r7404702 * r7404707;
        double r7404709 = r7404695 + r7404708;
        double r7404710 = -0.209473;
        double r7404711 = 21.994629;
        double r7404712 = r7404696 * r7404711;
        double r7404713 = r7404710 + r7404712;
        double r7404714 = 10893.206543;
        double r7404715 = r7404714 * r7404696;
        double r7404716 = pow(r7404696, r7404693);
        double r7404717 = r7404715 * r7404716;
        double r7404718 = -7104.265137;
        double r7404719 = r7404716 * r7404718;
        double r7404720 = r7404717 + r7404719;
        double r7404721 = r7404713 + r7404720;
        double r7404722 = r7404709 + r7404721;
        return r7404722;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7404723, r7404724, r7404725, r7404726, r7404727, r7404728, r7404729, r7404730, r7404731, r7404732, r7404733, r7404734, r7404735, r7404736, r7404737, r7404738, r7404739, r7404740, r7404741, r7404742, r7404743, r7404744, r7404745, r7404746, r7404747, r7404748, r7404749, r7404750, r7404751, r7404752, r7404753, r7404754, r7404755, r7404756, r7404757, r7404758;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7404723, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404724, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7404725);
        mpfr_init(r7404726);
        mpfr_init(r7404727);
        mpfr_init(r7404728);
        mpfr_init_set_str(r7404729, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r7404730);
        mpfr_init(r7404731);
        mpfr_init(r7404732);
        mpfr_init(r7404733);
        mpfr_init_set_str(r7404734, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7404735);
        mpfr_init(r7404736);
        mpfr_init(r7404737);
        mpfr_init(r7404738);
        mpfr_init_set_str(r7404739, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7404740);
        mpfr_init(r7404741);
        mpfr_init(r7404742);
        mpfr_init(r7404743);
        mpfr_init_set_str(r7404744, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7404745);
        mpfr_init(r7404746);
        mpfr_init(r7404747);
        mpfr_init(r7404748);
        mpfr_init_set_str(r7404749, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r7404750);
        mpfr_init(r7404751);
        mpfr_init(r7404752);
        mpfr_init(r7404753);
        mpfr_init_set_str(r7404754, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7404755);
        mpfr_init(r7404756);
        mpfr_init(r7404757);
        mpfr_init(r7404758);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7404725, x, MPFR_RNDN);
        mpfr_mul(r7404726, r7404725, r7404725, MPFR_RNDN);
        mpfr_mul(r7404727, r7404724, r7404726, MPFR_RNDN);
        mpfr_add(r7404728, r7404723, r7404727, MPFR_RNDN);
        ;
        mpfr_mul(r7404730, r7404726, r7404725, MPFR_RNDN);
        mpfr_mul(r7404731, r7404730, r7404725, MPFR_RNDN);
        mpfr_mul(r7404732, r7404729, r7404731, MPFR_RNDN);
        mpfr_add(r7404733, r7404728, r7404732, MPFR_RNDN);
        ;
        mpfr_mul(r7404735, r7404731, r7404725, MPFR_RNDN);
        mpfr_mul(r7404736, r7404735, r7404725, MPFR_RNDN);
        mpfr_mul(r7404737, r7404734, r7404736, MPFR_RNDN);
        mpfr_add(r7404738, r7404733, r7404737, MPFR_RNDN);
        ;
        mpfr_mul(r7404740, r7404736, r7404725, MPFR_RNDN);
        mpfr_mul(r7404741, r7404740, r7404725, MPFR_RNDN);
        mpfr_mul(r7404742, r7404739, r7404741, MPFR_RNDN);
        mpfr_add(r7404743, r7404738, r7404742, MPFR_RNDN);
        ;
        mpfr_mul(r7404745, r7404741, r7404725, MPFR_RNDN);
        mpfr_mul(r7404746, r7404745, r7404725, MPFR_RNDN);
        mpfr_mul(r7404747, r7404744, r7404746, MPFR_RNDN);
        mpfr_add(r7404748, r7404743, r7404747, MPFR_RNDN);
        ;
        mpfr_mul(r7404750, r7404746, r7404725, MPFR_RNDN);
        mpfr_mul(r7404751, r7404750, r7404725, MPFR_RNDN);
        mpfr_mul(r7404752, r7404749, r7404751, MPFR_RNDN);
        mpfr_add(r7404753, r7404748, r7404752, MPFR_RNDN);
        ;
        mpfr_mul(r7404755, r7404751, r7404725, MPFR_RNDN);
        mpfr_mul(r7404756, r7404755, r7404725, MPFR_RNDN);
        mpfr_mul(r7404757, r7404754, r7404756, MPFR_RNDN);
        mpfr_add(r7404758, r7404753, r7404757, MPFR_RNDN);
        return mpfr_get_d(r7404758, MPFR_RNDN);
}

static mpfr_t r7404759, r7404760, r7404761, r7404762, r7404763, r7404764, r7404765, r7404766, r7404767, r7404768, r7404769, r7404770, r7404771, r7404772, r7404773, r7404774, r7404775, r7404776, r7404777, r7404778, r7404779, r7404780, r7404781, r7404782, r7404783, r7404784, r7404785, r7404786, r7404787, r7404788, r7404789, r7404790, r7404791, r7404792, r7404793, r7404794, r7404795, r7404796, r7404797;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7404759, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r7404760);
        mpfr_init_set_str(r7404761, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7404762);
        mpfr_init(r7404763);
        mpfr_init(r7404764);
        mpfr_init_set_str(r7404765, "3", 10, MPFR_RNDN);
        mpfr_init(r7404766);
        mpfr_init_set_str(r7404767, "1", 10, MPFR_RNDN);
        mpfr_init(r7404768);
        mpfr_init(r7404769);
        mpfr_init(r7404770);
        mpfr_init(r7404771);
        mpfr_init_set_str(r7404772, "-1", 10, MPFR_RNDN);
        mpfr_init(r7404773);
        mpfr_init_set_str(r7404774, "2", 10, MPFR_RNDN);
        mpfr_init(r7404775);
        mpfr_init(r7404776);
        mpfr_init(r7404777);
        mpfr_init_set_str(r7404778, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7404779);
        mpfr_init(r7404780);
        mpfr_init_set_str(r7404781, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r7404782);
        mpfr_init(r7404783);
        mpfr_init(r7404784);
        mpfr_init_set_str(r7404785, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404786, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7404787);
        mpfr_init(r7404788);
        mpfr_init_set_str(r7404789, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7404790);
        mpfr_init(r7404791);
        mpfr_init(r7404792);
        mpfr_init_set_str(r7404793, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7404794);
        mpfr_init(r7404795);
        mpfr_init(r7404796);
        mpfr_init(r7404797);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7404760, x, MPFR_RNDN);
        ;
        mpfr_mul(r7404762, r7404761, r7404760, MPFR_RNDN);
        mpfr_mul(r7404763, r7404760, r7404762, MPFR_RNDN);
        mpfr_add(r7404764, r7404759, r7404763, MPFR_RNDN);
        ;
        mpfr_pow(r7404766, r7404760, r7404765, MPFR_RNDN);
        ;
        mpfr_add(r7404768, r7404765, r7404767, MPFR_RNDN);
        mpfr_pow(r7404769, r7404766, r7404768, MPFR_RNDN);
        mpfr_mul(r7404770, r7404764, r7404769, MPFR_RNDN);
        mpfr_mul(r7404771, r7404760, r7404760, MPFR_RNDN);
        ;
        mpfr_div(r7404773, r7404772, r7404760, MPFR_RNDN);
        ;
        mpfr_neg(r7404775, r7404774, MPFR_RNDN);
        mpfr_pow(r7404776, r7404773, r7404775, MPFR_RNDN);
        mpfr_mul(r7404777, r7404771, r7404776, MPFR_RNDN);
        ;
        mpfr_mul(r7404779, r7404760, r7404778, MPFR_RNDN);
        mpfr_mul(r7404780, r7404760, r7404779, MPFR_RNDN);
        ;
        mpfr_add(r7404782, r7404780, r7404781, MPFR_RNDN);
        mpfr_mul(r7404783, r7404777, r7404782, MPFR_RNDN);
        mpfr_add(r7404784, r7404770, r7404783, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7404787, r7404771, r7404786, MPFR_RNDN);
        mpfr_add(r7404788, r7404785, r7404787, MPFR_RNDN);
        ;
        mpfr_mul(r7404790, r7404789, r7404771, MPFR_RNDN);
        mpfr_pow(r7404791, r7404771, r7404768, MPFR_RNDN);
        mpfr_mul(r7404792, r7404790, r7404791, MPFR_RNDN);
        ;
        mpfr_mul(r7404794, r7404791, r7404793, MPFR_RNDN);
        mpfr_add(r7404795, r7404792, r7404794, MPFR_RNDN);
        mpfr_add(r7404796, r7404788, r7404795, MPFR_RNDN);
        mpfr_add(r7404797, r7404784, r7404796, MPFR_RNDN);
        return mpfr_get_d(r7404797, MPFR_RNDN);
}

static mpfr_t r7404798, r7404799, r7404800, r7404801, r7404802, r7404803, r7404804, r7404805, r7404806, r7404807, r7404808, r7404809, r7404810, r7404811, r7404812, r7404813, r7404814, r7404815, r7404816, r7404817, r7404818, r7404819, r7404820, r7404821, r7404822, r7404823, r7404824, r7404825, r7404826, r7404827, r7404828, r7404829, r7404830, r7404831, r7404832, r7404833, r7404834, r7404835, r7404836;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7404798, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r7404799);
        mpfr_init_set_str(r7404800, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7404801);
        mpfr_init(r7404802);
        mpfr_init(r7404803);
        mpfr_init_set_str(r7404804, "3", 10, MPFR_RNDN);
        mpfr_init(r7404805);
        mpfr_init_set_str(r7404806, "1", 10, MPFR_RNDN);
        mpfr_init(r7404807);
        mpfr_init(r7404808);
        mpfr_init(r7404809);
        mpfr_init(r7404810);
        mpfr_init_set_str(r7404811, "-1", 10, MPFR_RNDN);
        mpfr_init(r7404812);
        mpfr_init_set_str(r7404813, "2", 10, MPFR_RNDN);
        mpfr_init(r7404814);
        mpfr_init(r7404815);
        mpfr_init(r7404816);
        mpfr_init_set_str(r7404817, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7404818);
        mpfr_init(r7404819);
        mpfr_init_set_str(r7404820, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r7404821);
        mpfr_init(r7404822);
        mpfr_init(r7404823);
        mpfr_init_set_str(r7404824, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r7404825, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7404826);
        mpfr_init(r7404827);
        mpfr_init_set_str(r7404828, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7404829);
        mpfr_init(r7404830);
        mpfr_init(r7404831);
        mpfr_init_set_str(r7404832, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7404833);
        mpfr_init(r7404834);
        mpfr_init(r7404835);
        mpfr_init(r7404836);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7404799, x, MPFR_RNDN);
        ;
        mpfr_mul(r7404801, r7404800, r7404799, MPFR_RNDN);
        mpfr_mul(r7404802, r7404799, r7404801, MPFR_RNDN);
        mpfr_add(r7404803, r7404798, r7404802, MPFR_RNDN);
        ;
        mpfr_pow(r7404805, r7404799, r7404804, MPFR_RNDN);
        ;
        mpfr_add(r7404807, r7404804, r7404806, MPFR_RNDN);
        mpfr_pow(r7404808, r7404805, r7404807, MPFR_RNDN);
        mpfr_mul(r7404809, r7404803, r7404808, MPFR_RNDN);
        mpfr_mul(r7404810, r7404799, r7404799, MPFR_RNDN);
        ;
        mpfr_div(r7404812, r7404811, r7404799, MPFR_RNDN);
        ;
        mpfr_neg(r7404814, r7404813, MPFR_RNDN);
        mpfr_pow(r7404815, r7404812, r7404814, MPFR_RNDN);
        mpfr_mul(r7404816, r7404810, r7404815, MPFR_RNDN);
        ;
        mpfr_mul(r7404818, r7404799, r7404817, MPFR_RNDN);
        mpfr_mul(r7404819, r7404799, r7404818, MPFR_RNDN);
        ;
        mpfr_add(r7404821, r7404819, r7404820, MPFR_RNDN);
        mpfr_mul(r7404822, r7404816, r7404821, MPFR_RNDN);
        mpfr_add(r7404823, r7404809, r7404822, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7404826, r7404810, r7404825, MPFR_RNDN);
        mpfr_add(r7404827, r7404824, r7404826, MPFR_RNDN);
        ;
        mpfr_mul(r7404829, r7404828, r7404810, MPFR_RNDN);
        mpfr_pow(r7404830, r7404810, r7404807, MPFR_RNDN);
        mpfr_mul(r7404831, r7404829, r7404830, MPFR_RNDN);
        ;
        mpfr_mul(r7404833, r7404830, r7404832, MPFR_RNDN);
        mpfr_add(r7404834, r7404831, r7404833, MPFR_RNDN);
        mpfr_add(r7404835, r7404827, r7404834, MPFR_RNDN);
        mpfr_add(r7404836, r7404823, r7404835, MPFR_RNDN);
        return mpfr_get_d(r7404836, MPFR_RNDN);
}

