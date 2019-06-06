#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r4601574 = -0.246094;
        float r4601575 = 13.535156;
        float r4601576 = x;
        float r4601577 = r4601576 * r4601576;
        float r4601578 = r4601575 * r4601577;
        float r4601579 = r4601574 + r4601578;
        float r4601580 = -117.304688;
        float r4601581 = r4601577 * r4601576;
        float r4601582 = r4601581 * r4601576;
        float r4601583 = r4601580 * r4601582;
        float r4601584 = r4601579 + r4601583;
        float r4601585 = 351.914062;
        float r4601586 = r4601582 * r4601576;
        float r4601587 = r4601586 * r4601576;
        float r4601588 = r4601585 * r4601587;
        float r4601589 = r4601584 + r4601588;
        float r4601590 = -427.324219;
        float r4601591 = r4601587 * r4601576;
        float r4601592 = r4601591 * r4601576;
        float r4601593 = r4601590 * r4601592;
        float r4601594 = r4601589 + r4601593;
        float r4601595 = 180.425781;
        float r4601596 = r4601592 * r4601576;
        float r4601597 = r4601596 * r4601576;
        float r4601598 = r4601595 * r4601597;
        float r4601599 = r4601594 + r4601598;
        return r4601599;
}

double f_id(double x) {
        double r4601600 = -0.246094;
        double r4601601 = 13.535156;
        double r4601602 = x;
        double r4601603 = r4601602 * r4601602;
        double r4601604 = r4601601 * r4601603;
        double r4601605 = r4601600 + r4601604;
        double r4601606 = -117.304688;
        double r4601607 = r4601603 * r4601602;
        double r4601608 = r4601607 * r4601602;
        double r4601609 = r4601606 * r4601608;
        double r4601610 = r4601605 + r4601609;
        double r4601611 = 351.914062;
        double r4601612 = r4601608 * r4601602;
        double r4601613 = r4601612 * r4601602;
        double r4601614 = r4601611 * r4601613;
        double r4601615 = r4601610 + r4601614;
        double r4601616 = -427.324219;
        double r4601617 = r4601613 * r4601602;
        double r4601618 = r4601617 * r4601602;
        double r4601619 = r4601616 * r4601618;
        double r4601620 = r4601615 + r4601619;
        double r4601621 = 180.425781;
        double r4601622 = r4601618 * r4601602;
        double r4601623 = r4601622 * r4601602;
        double r4601624 = r4601621 * r4601623;
        double r4601625 = r4601620 + r4601624;
        return r4601625;
}


double f_of(float x) {
        float r4601626 = -0.246094;
        float r4601627 = x;
        float r4601628 = 4;
        float r4601629 = pow(r4601627, r4601628);
        float r4601630 = -117.304688;
        float r4601631 = r4601629 * r4601630;
        float r4601632 = 13.535156;
        float r4601633 = r4601627 * r4601632;
        float r4601634 = r4601627 * r4601633;
        float r4601635 = r4601631 + r4601634;
        float r4601636 = r4601626 + r4601635;
        float r4601637 = r4601627 * r4601627;
        float r4601638 = r4601637 * r4601637;
        float r4601639 = r4601638 * r4601638;
        float r4601640 = 180.425781;
        float r4601641 = r4601637 * r4601640;
        float r4601642 = -427.324219;
        float r4601643 = r4601641 + r4601642;
        float r4601644 = r4601639 * r4601643;
        float r4601645 = r4601636 + r4601644;
        float r4601646 = 351.914062;
        float r4601647 = r4601637 * r4601646;
        float r4601648 = r4601638 * r4601647;
        float r4601649 = r4601645 + r4601648;
        return r4601649;
}

double f_od(double x) {
        double r4601650 = -0.246094;
        double r4601651 = x;
        double r4601652 = 4;
        double r4601653 = pow(r4601651, r4601652);
        double r4601654 = -117.304688;
        double r4601655 = r4601653 * r4601654;
        double r4601656 = 13.535156;
        double r4601657 = r4601651 * r4601656;
        double r4601658 = r4601651 * r4601657;
        double r4601659 = r4601655 + r4601658;
        double r4601660 = r4601650 + r4601659;
        double r4601661 = r4601651 * r4601651;
        double r4601662 = r4601661 * r4601661;
        double r4601663 = r4601662 * r4601662;
        double r4601664 = 180.425781;
        double r4601665 = r4601661 * r4601664;
        double r4601666 = -427.324219;
        double r4601667 = r4601665 + r4601666;
        double r4601668 = r4601663 * r4601667;
        double r4601669 = r4601660 + r4601668;
        double r4601670 = 351.914062;
        double r4601671 = r4601661 * r4601670;
        double r4601672 = r4601662 * r4601671;
        double r4601673 = r4601669 + r4601672;
        return r4601673;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4601674, r4601675, r4601676, r4601677, r4601678, r4601679, r4601680, r4601681, r4601682, r4601683, r4601684, r4601685, r4601686, r4601687, r4601688, r4601689, r4601690, r4601691, r4601692, r4601693, r4601694, r4601695, r4601696, r4601697, r4601698, r4601699;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601674, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r4601675, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4601676);
        mpfr_init(r4601677);
        mpfr_init(r4601678);
        mpfr_init(r4601679);
        mpfr_init_set_str(r4601680, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4601681);
        mpfr_init(r4601682);
        mpfr_init(r4601683);
        mpfr_init(r4601684);
        mpfr_init_set_str(r4601685, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4601686);
        mpfr_init(r4601687);
        mpfr_init(r4601688);
        mpfr_init(r4601689);
        mpfr_init_set_str(r4601690, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4601691);
        mpfr_init(r4601692);
        mpfr_init(r4601693);
        mpfr_init(r4601694);
        mpfr_init_set_str(r4601695, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4601696);
        mpfr_init(r4601697);
        mpfr_init(r4601698);
        mpfr_init(r4601699);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4601676, x, MPFR_RNDN);
        mpfr_mul(r4601677, r4601676, r4601676, MPFR_RNDN);
        mpfr_mul(r4601678, r4601675, r4601677, MPFR_RNDN);
        mpfr_add(r4601679, r4601674, r4601678, MPFR_RNDN);
        ;
        mpfr_mul(r4601681, r4601677, r4601676, MPFR_RNDN);
        mpfr_mul(r4601682, r4601681, r4601676, MPFR_RNDN);
        mpfr_mul(r4601683, r4601680, r4601682, MPFR_RNDN);
        mpfr_add(r4601684, r4601679, r4601683, MPFR_RNDN);
        ;
        mpfr_mul(r4601686, r4601682, r4601676, MPFR_RNDN);
        mpfr_mul(r4601687, r4601686, r4601676, MPFR_RNDN);
        mpfr_mul(r4601688, r4601685, r4601687, MPFR_RNDN);
        mpfr_add(r4601689, r4601684, r4601688, MPFR_RNDN);
        ;
        mpfr_mul(r4601691, r4601687, r4601676, MPFR_RNDN);
        mpfr_mul(r4601692, r4601691, r4601676, MPFR_RNDN);
        mpfr_mul(r4601693, r4601690, r4601692, MPFR_RNDN);
        mpfr_add(r4601694, r4601689, r4601693, MPFR_RNDN);
        ;
        mpfr_mul(r4601696, r4601692, r4601676, MPFR_RNDN);
        mpfr_mul(r4601697, r4601696, r4601676, MPFR_RNDN);
        mpfr_mul(r4601698, r4601695, r4601697, MPFR_RNDN);
        mpfr_add(r4601699, r4601694, r4601698, MPFR_RNDN);
        return mpfr_get_d(r4601699, MPFR_RNDN);
}

static mpfr_t r4601700, r4601701, r4601702, r4601703, r4601704, r4601705, r4601706, r4601707, r4601708, r4601709, r4601710, r4601711, r4601712, r4601713, r4601714, r4601715, r4601716, r4601717, r4601718, r4601719, r4601720, r4601721, r4601722, r4601723;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601700, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r4601701);
        mpfr_init_set_str(r4601702, "4", 10, MPFR_RNDN);
        mpfr_init(r4601703);
        mpfr_init_set_str(r4601704, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4601705);
        mpfr_init_set_str(r4601706, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4601707);
        mpfr_init(r4601708);
        mpfr_init(r4601709);
        mpfr_init(r4601710);
        mpfr_init(r4601711);
        mpfr_init(r4601712);
        mpfr_init(r4601713);
        mpfr_init_set_str(r4601714, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4601715);
        mpfr_init_set_str(r4601716, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4601717);
        mpfr_init(r4601718);
        mpfr_init(r4601719);
        mpfr_init_set_str(r4601720, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4601721);
        mpfr_init(r4601722);
        mpfr_init(r4601723);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4601701, x, MPFR_RNDN);
        ;
        mpfr_pow(r4601703, r4601701, r4601702, MPFR_RNDN);
        ;
        mpfr_mul(r4601705, r4601703, r4601704, MPFR_RNDN);
        ;
        mpfr_mul(r4601707, r4601701, r4601706, MPFR_RNDN);
        mpfr_mul(r4601708, r4601701, r4601707, MPFR_RNDN);
        mpfr_add(r4601709, r4601705, r4601708, MPFR_RNDN);
        mpfr_add(r4601710, r4601700, r4601709, MPFR_RNDN);
        mpfr_mul(r4601711, r4601701, r4601701, MPFR_RNDN);
        mpfr_mul(r4601712, r4601711, r4601711, MPFR_RNDN);
        mpfr_mul(r4601713, r4601712, r4601712, MPFR_RNDN);
        ;
        mpfr_mul(r4601715, r4601711, r4601714, MPFR_RNDN);
        ;
        mpfr_add(r4601717, r4601715, r4601716, MPFR_RNDN);
        mpfr_mul(r4601718, r4601713, r4601717, MPFR_RNDN);
        mpfr_add(r4601719, r4601710, r4601718, MPFR_RNDN);
        ;
        mpfr_mul(r4601721, r4601711, r4601720, MPFR_RNDN);
        mpfr_mul(r4601722, r4601712, r4601721, MPFR_RNDN);
        mpfr_add(r4601723, r4601719, r4601722, MPFR_RNDN);
        return mpfr_get_d(r4601723, MPFR_RNDN);
}

static mpfr_t r4601724, r4601725, r4601726, r4601727, r4601728, r4601729, r4601730, r4601731, r4601732, r4601733, r4601734, r4601735, r4601736, r4601737, r4601738, r4601739, r4601740, r4601741, r4601742, r4601743, r4601744, r4601745, r4601746, r4601747;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601724, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r4601725);
        mpfr_init_set_str(r4601726, "4", 10, MPFR_RNDN);
        mpfr_init(r4601727);
        mpfr_init_set_str(r4601728, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4601729);
        mpfr_init_set_str(r4601730, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4601731);
        mpfr_init(r4601732);
        mpfr_init(r4601733);
        mpfr_init(r4601734);
        mpfr_init(r4601735);
        mpfr_init(r4601736);
        mpfr_init(r4601737);
        mpfr_init_set_str(r4601738, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4601739);
        mpfr_init_set_str(r4601740, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4601741);
        mpfr_init(r4601742);
        mpfr_init(r4601743);
        mpfr_init_set_str(r4601744, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4601745);
        mpfr_init(r4601746);
        mpfr_init(r4601747);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4601725, x, MPFR_RNDN);
        ;
        mpfr_pow(r4601727, r4601725, r4601726, MPFR_RNDN);
        ;
        mpfr_mul(r4601729, r4601727, r4601728, MPFR_RNDN);
        ;
        mpfr_mul(r4601731, r4601725, r4601730, MPFR_RNDN);
        mpfr_mul(r4601732, r4601725, r4601731, MPFR_RNDN);
        mpfr_add(r4601733, r4601729, r4601732, MPFR_RNDN);
        mpfr_add(r4601734, r4601724, r4601733, MPFR_RNDN);
        mpfr_mul(r4601735, r4601725, r4601725, MPFR_RNDN);
        mpfr_mul(r4601736, r4601735, r4601735, MPFR_RNDN);
        mpfr_mul(r4601737, r4601736, r4601736, MPFR_RNDN);
        ;
        mpfr_mul(r4601739, r4601735, r4601738, MPFR_RNDN);
        ;
        mpfr_add(r4601741, r4601739, r4601740, MPFR_RNDN);
        mpfr_mul(r4601742, r4601737, r4601741, MPFR_RNDN);
        mpfr_add(r4601743, r4601734, r4601742, MPFR_RNDN);
        ;
        mpfr_mul(r4601745, r4601735, r4601744, MPFR_RNDN);
        mpfr_mul(r4601746, r4601736, r4601745, MPFR_RNDN);
        mpfr_add(r4601747, r4601743, r4601746, MPFR_RNDN);
        return mpfr_get_d(r4601747, MPFR_RNDN);
}

