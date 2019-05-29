#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r7982573 = 30240.0;
        float r7982574 = x;
        float r7982575 = r7982573 * r7982574;
        float r7982576 = -80640.0;
        float r7982577 = r7982574 * r7982574;
        float r7982578 = r7982577 * r7982574;
        float r7982579 = r7982576 * r7982578;
        float r7982580 = r7982575 + r7982579;
        float r7982581 = 48384.0;
        float r7982582 = r7982578 * r7982574;
        float r7982583 = r7982582 * r7982574;
        float r7982584 = r7982581 * r7982583;
        float r7982585 = r7982580 + r7982584;
        float r7982586 = -9216.0;
        float r7982587 = r7982583 * r7982574;
        float r7982588 = r7982587 * r7982574;
        float r7982589 = r7982586 * r7982588;
        float r7982590 = r7982585 + r7982589;
        float r7982591 = 512.0;
        float r7982592 = r7982588 * r7982574;
        float r7982593 = r7982592 * r7982574;
        float r7982594 = r7982591 * r7982593;
        float r7982595 = r7982590 + r7982594;
        return r7982595;
}

double f_id(double x) {
        double r7982596 = 30240.0;
        double r7982597 = x;
        double r7982598 = r7982596 * r7982597;
        double r7982599 = -80640.0;
        double r7982600 = r7982597 * r7982597;
        double r7982601 = r7982600 * r7982597;
        double r7982602 = r7982599 * r7982601;
        double r7982603 = r7982598 + r7982602;
        double r7982604 = 48384.0;
        double r7982605 = r7982601 * r7982597;
        double r7982606 = r7982605 * r7982597;
        double r7982607 = r7982604 * r7982606;
        double r7982608 = r7982603 + r7982607;
        double r7982609 = -9216.0;
        double r7982610 = r7982606 * r7982597;
        double r7982611 = r7982610 * r7982597;
        double r7982612 = r7982609 * r7982611;
        double r7982613 = r7982608 + r7982612;
        double r7982614 = 512.0;
        double r7982615 = r7982611 * r7982597;
        double r7982616 = r7982615 * r7982597;
        double r7982617 = r7982614 * r7982616;
        double r7982618 = r7982613 + r7982617;
        return r7982618;
}


double f_of(float x) {
        float r7982619 = 30240.0;
        float r7982620 = x;
        float r7982621 = r7982619 * r7982620;
        float r7982622 = -80640.0;
        float r7982623 = r7982620 * r7982620;
        float r7982624 = r7982623 * r7982620;
        float r7982625 = r7982622 * r7982624;
        float r7982626 = r7982621 + r7982625;
        float r7982627 = 48384.0;
        float r7982628 = r7982624 * r7982620;
        float r7982629 = r7982628 * r7982620;
        float r7982630 = r7982627 * r7982629;
        float r7982631 = r7982626 + r7982630;
        float r7982632 = -9216.0;
        float r7982633 = r7982629 * r7982620;
        float r7982634 = r7982633 * r7982620;
        float r7982635 = r7982632 * r7982634;
        float r7982636 = r7982631 + r7982635;
        float r7982637 = 512.0;
        float r7982638 = r7982634 * r7982620;
        float r7982639 = r7982638 * r7982620;
        float r7982640 = r7982637 * r7982639;
        float r7982641 = r7982636 + r7982640;
        return r7982641;
}

double f_od(double x) {
        double r7982642 = 30240.0;
        double r7982643 = x;
        double r7982644 = r7982642 * r7982643;
        double r7982645 = -80640.0;
        double r7982646 = r7982643 * r7982643;
        double r7982647 = r7982646 * r7982643;
        double r7982648 = r7982645 * r7982647;
        double r7982649 = r7982644 + r7982648;
        double r7982650 = 48384.0;
        double r7982651 = r7982647 * r7982643;
        double r7982652 = r7982651 * r7982643;
        double r7982653 = r7982650 * r7982652;
        double r7982654 = r7982649 + r7982653;
        double r7982655 = -9216.0;
        double r7982656 = r7982652 * r7982643;
        double r7982657 = r7982656 * r7982643;
        double r7982658 = r7982655 * r7982657;
        double r7982659 = r7982654 + r7982658;
        double r7982660 = 512.0;
        double r7982661 = r7982657 * r7982643;
        double r7982662 = r7982661 * r7982643;
        double r7982663 = r7982660 * r7982662;
        double r7982664 = r7982659 + r7982663;
        return r7982664;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7982665, r7982666, r7982667, r7982668, r7982669, r7982670, r7982671, r7982672, r7982673, r7982674, r7982675, r7982676, r7982677, r7982678, r7982679, r7982680, r7982681, r7982682, r7982683, r7982684, r7982685, r7982686, r7982687;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7982665, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7982666);
        mpfr_init(r7982667);
        mpfr_init_set_str(r7982668, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7982669);
        mpfr_init(r7982670);
        mpfr_init(r7982671);
        mpfr_init(r7982672);
        mpfr_init_set_str(r7982673, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7982674);
        mpfr_init(r7982675);
        mpfr_init(r7982676);
        mpfr_init(r7982677);
        mpfr_init_set_str(r7982678, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7982679);
        mpfr_init(r7982680);
        mpfr_init(r7982681);
        mpfr_init(r7982682);
        mpfr_init_set_str(r7982683, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7982684);
        mpfr_init(r7982685);
        mpfr_init(r7982686);
        mpfr_init(r7982687);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7982666, x, MPFR_RNDN);
        mpfr_mul(r7982667, r7982665, r7982666, MPFR_RNDN);
        ;
        mpfr_mul(r7982669, r7982666, r7982666, MPFR_RNDN);
        mpfr_mul(r7982670, r7982669, r7982666, MPFR_RNDN);
        mpfr_mul(r7982671, r7982668, r7982670, MPFR_RNDN);
        mpfr_add(r7982672, r7982667, r7982671, MPFR_RNDN);
        ;
        mpfr_mul(r7982674, r7982670, r7982666, MPFR_RNDN);
        mpfr_mul(r7982675, r7982674, r7982666, MPFR_RNDN);
        mpfr_mul(r7982676, r7982673, r7982675, MPFR_RNDN);
        mpfr_add(r7982677, r7982672, r7982676, MPFR_RNDN);
        ;
        mpfr_mul(r7982679, r7982675, r7982666, MPFR_RNDN);
        mpfr_mul(r7982680, r7982679, r7982666, MPFR_RNDN);
        mpfr_mul(r7982681, r7982678, r7982680, MPFR_RNDN);
        mpfr_add(r7982682, r7982677, r7982681, MPFR_RNDN);
        ;
        mpfr_mul(r7982684, r7982680, r7982666, MPFR_RNDN);
        mpfr_mul(r7982685, r7982684, r7982666, MPFR_RNDN);
        mpfr_mul(r7982686, r7982683, r7982685, MPFR_RNDN);
        mpfr_add(r7982687, r7982682, r7982686, MPFR_RNDN);
        return mpfr_get_d(r7982687, MPFR_RNDN);
}

static mpfr_t r7982688, r7982689, r7982690, r7982691, r7982692, r7982693, r7982694, r7982695, r7982696, r7982697, r7982698, r7982699, r7982700, r7982701, r7982702, r7982703, r7982704, r7982705, r7982706, r7982707, r7982708, r7982709, r7982710;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7982688, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7982689);
        mpfr_init(r7982690);
        mpfr_init_set_str(r7982691, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7982692);
        mpfr_init(r7982693);
        mpfr_init(r7982694);
        mpfr_init(r7982695);
        mpfr_init_set_str(r7982696, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7982697);
        mpfr_init(r7982698);
        mpfr_init(r7982699);
        mpfr_init(r7982700);
        mpfr_init_set_str(r7982701, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7982702);
        mpfr_init(r7982703);
        mpfr_init(r7982704);
        mpfr_init(r7982705);
        mpfr_init_set_str(r7982706, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7982707);
        mpfr_init(r7982708);
        mpfr_init(r7982709);
        mpfr_init(r7982710);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7982689, x, MPFR_RNDN);
        mpfr_mul(r7982690, r7982688, r7982689, MPFR_RNDN);
        ;
        mpfr_mul(r7982692, r7982689, r7982689, MPFR_RNDN);
        mpfr_mul(r7982693, r7982692, r7982689, MPFR_RNDN);
        mpfr_mul(r7982694, r7982691, r7982693, MPFR_RNDN);
        mpfr_add(r7982695, r7982690, r7982694, MPFR_RNDN);
        ;
        mpfr_mul(r7982697, r7982693, r7982689, MPFR_RNDN);
        mpfr_mul(r7982698, r7982697, r7982689, MPFR_RNDN);
        mpfr_mul(r7982699, r7982696, r7982698, MPFR_RNDN);
        mpfr_add(r7982700, r7982695, r7982699, MPFR_RNDN);
        ;
        mpfr_mul(r7982702, r7982698, r7982689, MPFR_RNDN);
        mpfr_mul(r7982703, r7982702, r7982689, MPFR_RNDN);
        mpfr_mul(r7982704, r7982701, r7982703, MPFR_RNDN);
        mpfr_add(r7982705, r7982700, r7982704, MPFR_RNDN);
        ;
        mpfr_mul(r7982707, r7982703, r7982689, MPFR_RNDN);
        mpfr_mul(r7982708, r7982707, r7982689, MPFR_RNDN);
        mpfr_mul(r7982709, r7982706, r7982708, MPFR_RNDN);
        mpfr_add(r7982710, r7982705, r7982709, MPFR_RNDN);
        return mpfr_get_d(r7982710, MPFR_RNDN);
}

static mpfr_t r7982711, r7982712, r7982713, r7982714, r7982715, r7982716, r7982717, r7982718, r7982719, r7982720, r7982721, r7982722, r7982723, r7982724, r7982725, r7982726, r7982727, r7982728, r7982729, r7982730, r7982731, r7982732, r7982733;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7982711, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7982712);
        mpfr_init(r7982713);
        mpfr_init_set_str(r7982714, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7982715);
        mpfr_init(r7982716);
        mpfr_init(r7982717);
        mpfr_init(r7982718);
        mpfr_init_set_str(r7982719, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7982720);
        mpfr_init(r7982721);
        mpfr_init(r7982722);
        mpfr_init(r7982723);
        mpfr_init_set_str(r7982724, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7982725);
        mpfr_init(r7982726);
        mpfr_init(r7982727);
        mpfr_init(r7982728);
        mpfr_init_set_str(r7982729, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7982730);
        mpfr_init(r7982731);
        mpfr_init(r7982732);
        mpfr_init(r7982733);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7982712, x, MPFR_RNDN);
        mpfr_mul(r7982713, r7982711, r7982712, MPFR_RNDN);
        ;
        mpfr_mul(r7982715, r7982712, r7982712, MPFR_RNDN);
        mpfr_mul(r7982716, r7982715, r7982712, MPFR_RNDN);
        mpfr_mul(r7982717, r7982714, r7982716, MPFR_RNDN);
        mpfr_add(r7982718, r7982713, r7982717, MPFR_RNDN);
        ;
        mpfr_mul(r7982720, r7982716, r7982712, MPFR_RNDN);
        mpfr_mul(r7982721, r7982720, r7982712, MPFR_RNDN);
        mpfr_mul(r7982722, r7982719, r7982721, MPFR_RNDN);
        mpfr_add(r7982723, r7982718, r7982722, MPFR_RNDN);
        ;
        mpfr_mul(r7982725, r7982721, r7982712, MPFR_RNDN);
        mpfr_mul(r7982726, r7982725, r7982712, MPFR_RNDN);
        mpfr_mul(r7982727, r7982724, r7982726, MPFR_RNDN);
        mpfr_add(r7982728, r7982723, r7982727, MPFR_RNDN);
        ;
        mpfr_mul(r7982730, r7982726, r7982712, MPFR_RNDN);
        mpfr_mul(r7982731, r7982730, r7982712, MPFR_RNDN);
        mpfr_mul(r7982732, r7982729, r7982731, MPFR_RNDN);
        mpfr_add(r7982733, r7982728, r7982732, MPFR_RNDN);
        return mpfr_get_d(r7982733, MPFR_RNDN);
}

