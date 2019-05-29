#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r4210636 = 1680.0;
        float r4210637 = -13440.0;
        float r4210638 = x;
        float r4210639 = r4210638 * r4210638;
        float r4210640 = r4210637 * r4210639;
        float r4210641 = r4210636 + r4210640;
        float r4210642 = 13440.0;
        float r4210643 = r4210639 * r4210638;
        float r4210644 = r4210643 * r4210638;
        float r4210645 = r4210642 * r4210644;
        float r4210646 = r4210641 + r4210645;
        float r4210647 = -3584.0;
        float r4210648 = r4210644 * r4210638;
        float r4210649 = r4210648 * r4210638;
        float r4210650 = r4210647 * r4210649;
        float r4210651 = r4210646 + r4210650;
        float r4210652 = 256.0;
        float r4210653 = r4210649 * r4210638;
        float r4210654 = r4210653 * r4210638;
        float r4210655 = r4210652 * r4210654;
        float r4210656 = r4210651 + r4210655;
        return r4210656;
}

double f_id(double x) {
        double r4210657 = 1680.0;
        double r4210658 = -13440.0;
        double r4210659 = x;
        double r4210660 = r4210659 * r4210659;
        double r4210661 = r4210658 * r4210660;
        double r4210662 = r4210657 + r4210661;
        double r4210663 = 13440.0;
        double r4210664 = r4210660 * r4210659;
        double r4210665 = r4210664 * r4210659;
        double r4210666 = r4210663 * r4210665;
        double r4210667 = r4210662 + r4210666;
        double r4210668 = -3584.0;
        double r4210669 = r4210665 * r4210659;
        double r4210670 = r4210669 * r4210659;
        double r4210671 = r4210668 * r4210670;
        double r4210672 = r4210667 + r4210671;
        double r4210673 = 256.0;
        double r4210674 = r4210670 * r4210659;
        double r4210675 = r4210674 * r4210659;
        double r4210676 = r4210673 * r4210675;
        double r4210677 = r4210672 + r4210676;
        return r4210677;
}


double f_of(float x) {
        float r4210678 = 1680.0;
        float r4210679 = -13440.0;
        float r4210680 = x;
        float r4210681 = r4210680 * r4210680;
        float r4210682 = r4210679 * r4210681;
        float r4210683 = r4210678 + r4210682;
        float r4210684 = 13440.0;
        float r4210685 = r4210681 * r4210680;
        float r4210686 = r4210685 * r4210680;
        float r4210687 = r4210684 * r4210686;
        float r4210688 = r4210683 + r4210687;
        float r4210689 = -3584.0;
        float r4210690 = r4210686 * r4210680;
        float r4210691 = r4210690 * r4210680;
        float r4210692 = r4210689 * r4210691;
        float r4210693 = r4210688 + r4210692;
        float r4210694 = 256.0;
        float r4210695 = r4210691 * r4210680;
        float r4210696 = r4210695 * r4210680;
        float r4210697 = r4210694 * r4210696;
        float r4210698 = r4210693 + r4210697;
        return r4210698;
}

double f_od(double x) {
        double r4210699 = 1680.0;
        double r4210700 = -13440.0;
        double r4210701 = x;
        double r4210702 = r4210701 * r4210701;
        double r4210703 = r4210700 * r4210702;
        double r4210704 = r4210699 + r4210703;
        double r4210705 = 13440.0;
        double r4210706 = r4210702 * r4210701;
        double r4210707 = r4210706 * r4210701;
        double r4210708 = r4210705 * r4210707;
        double r4210709 = r4210704 + r4210708;
        double r4210710 = -3584.0;
        double r4210711 = r4210707 * r4210701;
        double r4210712 = r4210711 * r4210701;
        double r4210713 = r4210710 * r4210712;
        double r4210714 = r4210709 + r4210713;
        double r4210715 = 256.0;
        double r4210716 = r4210712 * r4210701;
        double r4210717 = r4210716 * r4210701;
        double r4210718 = r4210715 * r4210717;
        double r4210719 = r4210714 + r4210718;
        return r4210719;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4210720, r4210721, r4210722, r4210723, r4210724, r4210725, r4210726, r4210727, r4210728, r4210729, r4210730, r4210731, r4210732, r4210733, r4210734, r4210735, r4210736, r4210737, r4210738, r4210739, r4210740;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4210720, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4210721, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r4210722);
        mpfr_init(r4210723);
        mpfr_init(r4210724);
        mpfr_init(r4210725);
        mpfr_init_set_str(r4210726, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r4210727);
        mpfr_init(r4210728);
        mpfr_init(r4210729);
        mpfr_init(r4210730);
        mpfr_init_set_str(r4210731, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r4210732);
        mpfr_init(r4210733);
        mpfr_init(r4210734);
        mpfr_init(r4210735);
        mpfr_init_set_str(r4210736, "256.0", 10, MPFR_RNDN);
        mpfr_init(r4210737);
        mpfr_init(r4210738);
        mpfr_init(r4210739);
        mpfr_init(r4210740);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4210722, x, MPFR_RNDN);
        mpfr_mul(r4210723, r4210722, r4210722, MPFR_RNDN);
        mpfr_mul(r4210724, r4210721, r4210723, MPFR_RNDN);
        mpfr_add(r4210725, r4210720, r4210724, MPFR_RNDN);
        ;
        mpfr_mul(r4210727, r4210723, r4210722, MPFR_RNDN);
        mpfr_mul(r4210728, r4210727, r4210722, MPFR_RNDN);
        mpfr_mul(r4210729, r4210726, r4210728, MPFR_RNDN);
        mpfr_add(r4210730, r4210725, r4210729, MPFR_RNDN);
        ;
        mpfr_mul(r4210732, r4210728, r4210722, MPFR_RNDN);
        mpfr_mul(r4210733, r4210732, r4210722, MPFR_RNDN);
        mpfr_mul(r4210734, r4210731, r4210733, MPFR_RNDN);
        mpfr_add(r4210735, r4210730, r4210734, MPFR_RNDN);
        ;
        mpfr_mul(r4210737, r4210733, r4210722, MPFR_RNDN);
        mpfr_mul(r4210738, r4210737, r4210722, MPFR_RNDN);
        mpfr_mul(r4210739, r4210736, r4210738, MPFR_RNDN);
        mpfr_add(r4210740, r4210735, r4210739, MPFR_RNDN);
        return mpfr_get_d(r4210740, MPFR_RNDN);
}

static mpfr_t r4210741, r4210742, r4210743, r4210744, r4210745, r4210746, r4210747, r4210748, r4210749, r4210750, r4210751, r4210752, r4210753, r4210754, r4210755, r4210756, r4210757, r4210758, r4210759, r4210760, r4210761;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4210741, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4210742, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r4210743);
        mpfr_init(r4210744);
        mpfr_init(r4210745);
        mpfr_init(r4210746);
        mpfr_init_set_str(r4210747, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r4210748);
        mpfr_init(r4210749);
        mpfr_init(r4210750);
        mpfr_init(r4210751);
        mpfr_init_set_str(r4210752, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r4210753);
        mpfr_init(r4210754);
        mpfr_init(r4210755);
        mpfr_init(r4210756);
        mpfr_init_set_str(r4210757, "256.0", 10, MPFR_RNDN);
        mpfr_init(r4210758);
        mpfr_init(r4210759);
        mpfr_init(r4210760);
        mpfr_init(r4210761);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4210743, x, MPFR_RNDN);
        mpfr_mul(r4210744, r4210743, r4210743, MPFR_RNDN);
        mpfr_mul(r4210745, r4210742, r4210744, MPFR_RNDN);
        mpfr_add(r4210746, r4210741, r4210745, MPFR_RNDN);
        ;
        mpfr_mul(r4210748, r4210744, r4210743, MPFR_RNDN);
        mpfr_mul(r4210749, r4210748, r4210743, MPFR_RNDN);
        mpfr_mul(r4210750, r4210747, r4210749, MPFR_RNDN);
        mpfr_add(r4210751, r4210746, r4210750, MPFR_RNDN);
        ;
        mpfr_mul(r4210753, r4210749, r4210743, MPFR_RNDN);
        mpfr_mul(r4210754, r4210753, r4210743, MPFR_RNDN);
        mpfr_mul(r4210755, r4210752, r4210754, MPFR_RNDN);
        mpfr_add(r4210756, r4210751, r4210755, MPFR_RNDN);
        ;
        mpfr_mul(r4210758, r4210754, r4210743, MPFR_RNDN);
        mpfr_mul(r4210759, r4210758, r4210743, MPFR_RNDN);
        mpfr_mul(r4210760, r4210757, r4210759, MPFR_RNDN);
        mpfr_add(r4210761, r4210756, r4210760, MPFR_RNDN);
        return mpfr_get_d(r4210761, MPFR_RNDN);
}

static mpfr_t r4210762, r4210763, r4210764, r4210765, r4210766, r4210767, r4210768, r4210769, r4210770, r4210771, r4210772, r4210773, r4210774, r4210775, r4210776, r4210777, r4210778, r4210779, r4210780, r4210781, r4210782;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4210762, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4210763, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r4210764);
        mpfr_init(r4210765);
        mpfr_init(r4210766);
        mpfr_init(r4210767);
        mpfr_init_set_str(r4210768, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r4210769);
        mpfr_init(r4210770);
        mpfr_init(r4210771);
        mpfr_init(r4210772);
        mpfr_init_set_str(r4210773, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r4210774);
        mpfr_init(r4210775);
        mpfr_init(r4210776);
        mpfr_init(r4210777);
        mpfr_init_set_str(r4210778, "256.0", 10, MPFR_RNDN);
        mpfr_init(r4210779);
        mpfr_init(r4210780);
        mpfr_init(r4210781);
        mpfr_init(r4210782);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4210764, x, MPFR_RNDN);
        mpfr_mul(r4210765, r4210764, r4210764, MPFR_RNDN);
        mpfr_mul(r4210766, r4210763, r4210765, MPFR_RNDN);
        mpfr_add(r4210767, r4210762, r4210766, MPFR_RNDN);
        ;
        mpfr_mul(r4210769, r4210765, r4210764, MPFR_RNDN);
        mpfr_mul(r4210770, r4210769, r4210764, MPFR_RNDN);
        mpfr_mul(r4210771, r4210768, r4210770, MPFR_RNDN);
        mpfr_add(r4210772, r4210767, r4210771, MPFR_RNDN);
        ;
        mpfr_mul(r4210774, r4210770, r4210764, MPFR_RNDN);
        mpfr_mul(r4210775, r4210774, r4210764, MPFR_RNDN);
        mpfr_mul(r4210776, r4210773, r4210775, MPFR_RNDN);
        mpfr_add(r4210777, r4210772, r4210776, MPFR_RNDN);
        ;
        mpfr_mul(r4210779, r4210775, r4210764, MPFR_RNDN);
        mpfr_mul(r4210780, r4210779, r4210764, MPFR_RNDN);
        mpfr_mul(r4210781, r4210778, r4210780, MPFR_RNDN);
        mpfr_add(r4210782, r4210777, r4210781, MPFR_RNDN);
        return mpfr_get_d(r4210782, MPFR_RNDN);
}

