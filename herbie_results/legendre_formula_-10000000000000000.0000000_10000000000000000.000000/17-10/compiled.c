#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6906638 = -0.246094;
        float r6906639 = 13.535156;
        float r6906640 = x;
        float r6906641 = r6906640 * r6906640;
        float r6906642 = r6906639 * r6906641;
        float r6906643 = r6906638 + r6906642;
        float r6906644 = -117.304688;
        float r6906645 = r6906641 * r6906640;
        float r6906646 = r6906645 * r6906640;
        float r6906647 = r6906644 * r6906646;
        float r6906648 = r6906643 + r6906647;
        float r6906649 = 351.914062;
        float r6906650 = r6906646 * r6906640;
        float r6906651 = r6906650 * r6906640;
        float r6906652 = r6906649 * r6906651;
        float r6906653 = r6906648 + r6906652;
        float r6906654 = -427.324219;
        float r6906655 = r6906651 * r6906640;
        float r6906656 = r6906655 * r6906640;
        float r6906657 = r6906654 * r6906656;
        float r6906658 = r6906653 + r6906657;
        float r6906659 = 180.425781;
        float r6906660 = r6906656 * r6906640;
        float r6906661 = r6906660 * r6906640;
        float r6906662 = r6906659 * r6906661;
        float r6906663 = r6906658 + r6906662;
        return r6906663;
}

double f_id(double x) {
        double r6906664 = -0.246094;
        double r6906665 = 13.535156;
        double r6906666 = x;
        double r6906667 = r6906666 * r6906666;
        double r6906668 = r6906665 * r6906667;
        double r6906669 = r6906664 + r6906668;
        double r6906670 = -117.304688;
        double r6906671 = r6906667 * r6906666;
        double r6906672 = r6906671 * r6906666;
        double r6906673 = r6906670 * r6906672;
        double r6906674 = r6906669 + r6906673;
        double r6906675 = 351.914062;
        double r6906676 = r6906672 * r6906666;
        double r6906677 = r6906676 * r6906666;
        double r6906678 = r6906675 * r6906677;
        double r6906679 = r6906674 + r6906678;
        double r6906680 = -427.324219;
        double r6906681 = r6906677 * r6906666;
        double r6906682 = r6906681 * r6906666;
        double r6906683 = r6906680 * r6906682;
        double r6906684 = r6906679 + r6906683;
        double r6906685 = 180.425781;
        double r6906686 = r6906682 * r6906666;
        double r6906687 = r6906686 * r6906666;
        double r6906688 = r6906685 * r6906687;
        double r6906689 = r6906684 + r6906688;
        return r6906689;
}


double f_of(float x) {
        float r6906690 = x;
        float r6906691 = r6906690 * r6906690;
        float r6906692 = r6906691 * r6906691;
        float r6906693 = 2;
        float r6906694 = r6906693 + r6906693;
        float r6906695 = pow(r6906690, r6906694);
        float r6906696 = r6906692 * r6906695;
        float r6906697 = -427.324219;
        float r6906698 = 180.425781;
        float r6906699 = r6906698 * r6906690;
        float r6906700 = r6906690 * r6906699;
        float r6906701 = r6906697 + r6906700;
        float r6906702 = r6906696 * r6906701;
        float r6906703 = -117.304688;
        float r6906704 = 351.914062;
        float r6906705 = r6906691 * r6906704;
        float r6906706 = r6906703 + r6906705;
        float r6906707 = r6906692 * r6906706;
        float r6906708 = -0.246094;
        float r6906709 = 13.535156;
        float r6906710 = r6906690 * r6906709;
        float r6906711 = r6906690 * r6906710;
        float r6906712 = r6906708 + r6906711;
        float r6906713 = r6906707 + r6906712;
        float r6906714 = r6906702 + r6906713;
        return r6906714;
}

double f_od(double x) {
        double r6906715 = x;
        double r6906716 = r6906715 * r6906715;
        double r6906717 = r6906716 * r6906716;
        double r6906718 = 2;
        double r6906719 = r6906718 + r6906718;
        double r6906720 = pow(r6906715, r6906719);
        double r6906721 = r6906717 * r6906720;
        double r6906722 = -427.324219;
        double r6906723 = 180.425781;
        double r6906724 = r6906723 * r6906715;
        double r6906725 = r6906715 * r6906724;
        double r6906726 = r6906722 + r6906725;
        double r6906727 = r6906721 * r6906726;
        double r6906728 = -117.304688;
        double r6906729 = 351.914062;
        double r6906730 = r6906716 * r6906729;
        double r6906731 = r6906728 + r6906730;
        double r6906732 = r6906717 * r6906731;
        double r6906733 = -0.246094;
        double r6906734 = 13.535156;
        double r6906735 = r6906715 * r6906734;
        double r6906736 = r6906715 * r6906735;
        double r6906737 = r6906733 + r6906736;
        double r6906738 = r6906732 + r6906737;
        double r6906739 = r6906727 + r6906738;
        return r6906739;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6906740, r6906741, r6906742, r6906743, r6906744, r6906745, r6906746, r6906747, r6906748, r6906749, r6906750, r6906751, r6906752, r6906753, r6906754, r6906755, r6906756, r6906757, r6906758, r6906759, r6906760, r6906761, r6906762, r6906763, r6906764, r6906765;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6906740, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6906741, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6906742);
        mpfr_init(r6906743);
        mpfr_init(r6906744);
        mpfr_init(r6906745);
        mpfr_init_set_str(r6906746, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6906747);
        mpfr_init(r6906748);
        mpfr_init(r6906749);
        mpfr_init(r6906750);
        mpfr_init_set_str(r6906751, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6906752);
        mpfr_init(r6906753);
        mpfr_init(r6906754);
        mpfr_init(r6906755);
        mpfr_init_set_str(r6906756, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6906757);
        mpfr_init(r6906758);
        mpfr_init(r6906759);
        mpfr_init(r6906760);
        mpfr_init_set_str(r6906761, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6906762);
        mpfr_init(r6906763);
        mpfr_init(r6906764);
        mpfr_init(r6906765);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6906742, x, MPFR_RNDN);
        mpfr_mul(r6906743, r6906742, r6906742, MPFR_RNDN);
        mpfr_mul(r6906744, r6906741, r6906743, MPFR_RNDN);
        mpfr_add(r6906745, r6906740, r6906744, MPFR_RNDN);
        ;
        mpfr_mul(r6906747, r6906743, r6906742, MPFR_RNDN);
        mpfr_mul(r6906748, r6906747, r6906742, MPFR_RNDN);
        mpfr_mul(r6906749, r6906746, r6906748, MPFR_RNDN);
        mpfr_add(r6906750, r6906745, r6906749, MPFR_RNDN);
        ;
        mpfr_mul(r6906752, r6906748, r6906742, MPFR_RNDN);
        mpfr_mul(r6906753, r6906752, r6906742, MPFR_RNDN);
        mpfr_mul(r6906754, r6906751, r6906753, MPFR_RNDN);
        mpfr_add(r6906755, r6906750, r6906754, MPFR_RNDN);
        ;
        mpfr_mul(r6906757, r6906753, r6906742, MPFR_RNDN);
        mpfr_mul(r6906758, r6906757, r6906742, MPFR_RNDN);
        mpfr_mul(r6906759, r6906756, r6906758, MPFR_RNDN);
        mpfr_add(r6906760, r6906755, r6906759, MPFR_RNDN);
        ;
        mpfr_mul(r6906762, r6906758, r6906742, MPFR_RNDN);
        mpfr_mul(r6906763, r6906762, r6906742, MPFR_RNDN);
        mpfr_mul(r6906764, r6906761, r6906763, MPFR_RNDN);
        mpfr_add(r6906765, r6906760, r6906764, MPFR_RNDN);
        return mpfr_get_d(r6906765, MPFR_RNDN);
}

static mpfr_t r6906766, r6906767, r6906768, r6906769, r6906770, r6906771, r6906772, r6906773, r6906774, r6906775, r6906776, r6906777, r6906778, r6906779, r6906780, r6906781, r6906782, r6906783, r6906784, r6906785, r6906786, r6906787, r6906788, r6906789, r6906790;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6906766);
        mpfr_init(r6906767);
        mpfr_init(r6906768);
        mpfr_init_set_str(r6906769, "2", 10, MPFR_RNDN);
        mpfr_init(r6906770);
        mpfr_init(r6906771);
        mpfr_init(r6906772);
        mpfr_init_set_str(r6906773, "-427.324219", 10, MPFR_RNDN);
        mpfr_init_set_str(r6906774, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6906775);
        mpfr_init(r6906776);
        mpfr_init(r6906777);
        mpfr_init(r6906778);
        mpfr_init_set_str(r6906779, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r6906780, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6906781);
        mpfr_init(r6906782);
        mpfr_init(r6906783);
        mpfr_init_set_str(r6906784, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6906785, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6906786);
        mpfr_init(r6906787);
        mpfr_init(r6906788);
        mpfr_init(r6906789);
        mpfr_init(r6906790);
}

double f_fm(double x) {
        mpfr_set_d(r6906766, x, MPFR_RNDN);
        mpfr_mul(r6906767, r6906766, r6906766, MPFR_RNDN);
        mpfr_mul(r6906768, r6906767, r6906767, MPFR_RNDN);
        ;
        mpfr_add(r6906770, r6906769, r6906769, MPFR_RNDN);
        mpfr_pow(r6906771, r6906766, r6906770, MPFR_RNDN);
        mpfr_mul(r6906772, r6906768, r6906771, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6906775, r6906774, r6906766, MPFR_RNDN);
        mpfr_mul(r6906776, r6906766, r6906775, MPFR_RNDN);
        mpfr_add(r6906777, r6906773, r6906776, MPFR_RNDN);
        mpfr_mul(r6906778, r6906772, r6906777, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6906781, r6906767, r6906780, MPFR_RNDN);
        mpfr_add(r6906782, r6906779, r6906781, MPFR_RNDN);
        mpfr_mul(r6906783, r6906768, r6906782, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6906786, r6906766, r6906785, MPFR_RNDN);
        mpfr_mul(r6906787, r6906766, r6906786, MPFR_RNDN);
        mpfr_add(r6906788, r6906784, r6906787, MPFR_RNDN);
        mpfr_add(r6906789, r6906783, r6906788, MPFR_RNDN);
        mpfr_add(r6906790, r6906778, r6906789, MPFR_RNDN);
        return mpfr_get_d(r6906790, MPFR_RNDN);
}

static mpfr_t r6906791, r6906792, r6906793, r6906794, r6906795, r6906796, r6906797, r6906798, r6906799, r6906800, r6906801, r6906802, r6906803, r6906804, r6906805, r6906806, r6906807, r6906808, r6906809, r6906810, r6906811, r6906812, r6906813, r6906814, r6906815;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6906791);
        mpfr_init(r6906792);
        mpfr_init(r6906793);
        mpfr_init_set_str(r6906794, "2", 10, MPFR_RNDN);
        mpfr_init(r6906795);
        mpfr_init(r6906796);
        mpfr_init(r6906797);
        mpfr_init_set_str(r6906798, "-427.324219", 10, MPFR_RNDN);
        mpfr_init_set_str(r6906799, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6906800);
        mpfr_init(r6906801);
        mpfr_init(r6906802);
        mpfr_init(r6906803);
        mpfr_init_set_str(r6906804, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r6906805, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6906806);
        mpfr_init(r6906807);
        mpfr_init(r6906808);
        mpfr_init_set_str(r6906809, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6906810, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6906811);
        mpfr_init(r6906812);
        mpfr_init(r6906813);
        mpfr_init(r6906814);
        mpfr_init(r6906815);
}

double f_dm(double x) {
        mpfr_set_d(r6906791, x, MPFR_RNDN);
        mpfr_mul(r6906792, r6906791, r6906791, MPFR_RNDN);
        mpfr_mul(r6906793, r6906792, r6906792, MPFR_RNDN);
        ;
        mpfr_add(r6906795, r6906794, r6906794, MPFR_RNDN);
        mpfr_pow(r6906796, r6906791, r6906795, MPFR_RNDN);
        mpfr_mul(r6906797, r6906793, r6906796, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6906800, r6906799, r6906791, MPFR_RNDN);
        mpfr_mul(r6906801, r6906791, r6906800, MPFR_RNDN);
        mpfr_add(r6906802, r6906798, r6906801, MPFR_RNDN);
        mpfr_mul(r6906803, r6906797, r6906802, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6906806, r6906792, r6906805, MPFR_RNDN);
        mpfr_add(r6906807, r6906804, r6906806, MPFR_RNDN);
        mpfr_mul(r6906808, r6906793, r6906807, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6906811, r6906791, r6906810, MPFR_RNDN);
        mpfr_mul(r6906812, r6906791, r6906811, MPFR_RNDN);
        mpfr_add(r6906813, r6906809, r6906812, MPFR_RNDN);
        mpfr_add(r6906814, r6906808, r6906813, MPFR_RNDN);
        mpfr_add(r6906815, r6906803, r6906814, MPFR_RNDN);
        return mpfr_get_d(r6906815, MPFR_RNDN);
}

