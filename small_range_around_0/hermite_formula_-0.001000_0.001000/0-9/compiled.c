#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r3816564 = 30240.0;
        float r3816565 = x;
        float r3816566 = r3816564 * r3816565;
        float r3816567 = -80640.0;
        float r3816568 = r3816565 * r3816565;
        float r3816569 = r3816568 * r3816565;
        float r3816570 = r3816567 * r3816569;
        float r3816571 = r3816566 + r3816570;
        float r3816572 = 48384.0;
        float r3816573 = r3816569 * r3816565;
        float r3816574 = r3816573 * r3816565;
        float r3816575 = r3816572 * r3816574;
        float r3816576 = r3816571 + r3816575;
        float r3816577 = -9216.0;
        float r3816578 = r3816574 * r3816565;
        float r3816579 = r3816578 * r3816565;
        float r3816580 = r3816577 * r3816579;
        float r3816581 = r3816576 + r3816580;
        float r3816582 = 512.0;
        float r3816583 = r3816579 * r3816565;
        float r3816584 = r3816583 * r3816565;
        float r3816585 = r3816582 * r3816584;
        float r3816586 = r3816581 + r3816585;
        return r3816586;
}

double f_id(double x) {
        double r3816587 = 30240.0;
        double r3816588 = x;
        double r3816589 = r3816587 * r3816588;
        double r3816590 = -80640.0;
        double r3816591 = r3816588 * r3816588;
        double r3816592 = r3816591 * r3816588;
        double r3816593 = r3816590 * r3816592;
        double r3816594 = r3816589 + r3816593;
        double r3816595 = 48384.0;
        double r3816596 = r3816592 * r3816588;
        double r3816597 = r3816596 * r3816588;
        double r3816598 = r3816595 * r3816597;
        double r3816599 = r3816594 + r3816598;
        double r3816600 = -9216.0;
        double r3816601 = r3816597 * r3816588;
        double r3816602 = r3816601 * r3816588;
        double r3816603 = r3816600 * r3816602;
        double r3816604 = r3816599 + r3816603;
        double r3816605 = 512.0;
        double r3816606 = r3816602 * r3816588;
        double r3816607 = r3816606 * r3816588;
        double r3816608 = r3816605 * r3816607;
        double r3816609 = r3816604 + r3816608;
        return r3816609;
}


double f_of(float x) {
        float r3816610 = 30240.0;
        float r3816611 = x;
        float r3816612 = r3816610 * r3816611;
        float r3816613 = -80640.0;
        float r3816614 = r3816611 * r3816611;
        float r3816615 = r3816614 * r3816611;
        float r3816616 = r3816613 * r3816615;
        float r3816617 = r3816612 + r3816616;
        float r3816618 = 48384.0;
        float r3816619 = r3816615 * r3816611;
        float r3816620 = r3816619 * r3816611;
        float r3816621 = r3816618 * r3816620;
        float r3816622 = r3816617 + r3816621;
        float r3816623 = -9216.0;
        float r3816624 = r3816620 * r3816611;
        float r3816625 = r3816624 * r3816611;
        float r3816626 = r3816623 * r3816625;
        float r3816627 = r3816622 + r3816626;
        float r3816628 = 512.0;
        float r3816629 = r3816625 * r3816611;
        float r3816630 = r3816629 * r3816611;
        float r3816631 = r3816628 * r3816630;
        float r3816632 = r3816627 + r3816631;
        return r3816632;
}

double f_od(double x) {
        double r3816633 = 30240.0;
        double r3816634 = x;
        double r3816635 = r3816633 * r3816634;
        double r3816636 = -80640.0;
        double r3816637 = r3816634 * r3816634;
        double r3816638 = r3816637 * r3816634;
        double r3816639 = r3816636 * r3816638;
        double r3816640 = r3816635 + r3816639;
        double r3816641 = 48384.0;
        double r3816642 = r3816638 * r3816634;
        double r3816643 = r3816642 * r3816634;
        double r3816644 = r3816641 * r3816643;
        double r3816645 = r3816640 + r3816644;
        double r3816646 = -9216.0;
        double r3816647 = r3816643 * r3816634;
        double r3816648 = r3816647 * r3816634;
        double r3816649 = r3816646 * r3816648;
        double r3816650 = r3816645 + r3816649;
        double r3816651 = 512.0;
        double r3816652 = r3816648 * r3816634;
        double r3816653 = r3816652 * r3816634;
        double r3816654 = r3816651 * r3816653;
        double r3816655 = r3816650 + r3816654;
        return r3816655;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3816656, r3816657, r3816658, r3816659, r3816660, r3816661, r3816662, r3816663, r3816664, r3816665, r3816666, r3816667, r3816668, r3816669, r3816670, r3816671, r3816672, r3816673, r3816674, r3816675, r3816676, r3816677, r3816678;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3816656, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r3816657);
        mpfr_init(r3816658);
        mpfr_init_set_str(r3816659, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r3816660);
        mpfr_init(r3816661);
        mpfr_init(r3816662);
        mpfr_init(r3816663);
        mpfr_init_set_str(r3816664, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r3816665);
        mpfr_init(r3816666);
        mpfr_init(r3816667);
        mpfr_init(r3816668);
        mpfr_init_set_str(r3816669, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r3816670);
        mpfr_init(r3816671);
        mpfr_init(r3816672);
        mpfr_init(r3816673);
        mpfr_init_set_str(r3816674, "512.0", 10, MPFR_RNDN);
        mpfr_init(r3816675);
        mpfr_init(r3816676);
        mpfr_init(r3816677);
        mpfr_init(r3816678);
}

double f_im(double x) {
        ;
        mpfr_set_d(r3816657, x, MPFR_RNDN);
        mpfr_mul(r3816658, r3816656, r3816657, MPFR_RNDN);
        ;
        mpfr_mul(r3816660, r3816657, r3816657, MPFR_RNDN);
        mpfr_mul(r3816661, r3816660, r3816657, MPFR_RNDN);
        mpfr_mul(r3816662, r3816659, r3816661, MPFR_RNDN);
        mpfr_add(r3816663, r3816658, r3816662, MPFR_RNDN);
        ;
        mpfr_mul(r3816665, r3816661, r3816657, MPFR_RNDN);
        mpfr_mul(r3816666, r3816665, r3816657, MPFR_RNDN);
        mpfr_mul(r3816667, r3816664, r3816666, MPFR_RNDN);
        mpfr_add(r3816668, r3816663, r3816667, MPFR_RNDN);
        ;
        mpfr_mul(r3816670, r3816666, r3816657, MPFR_RNDN);
        mpfr_mul(r3816671, r3816670, r3816657, MPFR_RNDN);
        mpfr_mul(r3816672, r3816669, r3816671, MPFR_RNDN);
        mpfr_add(r3816673, r3816668, r3816672, MPFR_RNDN);
        ;
        mpfr_mul(r3816675, r3816671, r3816657, MPFR_RNDN);
        mpfr_mul(r3816676, r3816675, r3816657, MPFR_RNDN);
        mpfr_mul(r3816677, r3816674, r3816676, MPFR_RNDN);
        mpfr_add(r3816678, r3816673, r3816677, MPFR_RNDN);
        return mpfr_get_d(r3816678, MPFR_RNDN);
}

static mpfr_t r3816679, r3816680, r3816681, r3816682, r3816683, r3816684, r3816685, r3816686, r3816687, r3816688, r3816689, r3816690, r3816691, r3816692, r3816693, r3816694, r3816695, r3816696, r3816697, r3816698, r3816699, r3816700, r3816701;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3816679, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r3816680);
        mpfr_init(r3816681);
        mpfr_init_set_str(r3816682, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r3816683);
        mpfr_init(r3816684);
        mpfr_init(r3816685);
        mpfr_init(r3816686);
        mpfr_init_set_str(r3816687, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r3816688);
        mpfr_init(r3816689);
        mpfr_init(r3816690);
        mpfr_init(r3816691);
        mpfr_init_set_str(r3816692, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r3816693);
        mpfr_init(r3816694);
        mpfr_init(r3816695);
        mpfr_init(r3816696);
        mpfr_init_set_str(r3816697, "512.0", 10, MPFR_RNDN);
        mpfr_init(r3816698);
        mpfr_init(r3816699);
        mpfr_init(r3816700);
        mpfr_init(r3816701);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r3816680, x, MPFR_RNDN);
        mpfr_mul(r3816681, r3816679, r3816680, MPFR_RNDN);
        ;
        mpfr_mul(r3816683, r3816680, r3816680, MPFR_RNDN);
        mpfr_mul(r3816684, r3816683, r3816680, MPFR_RNDN);
        mpfr_mul(r3816685, r3816682, r3816684, MPFR_RNDN);
        mpfr_add(r3816686, r3816681, r3816685, MPFR_RNDN);
        ;
        mpfr_mul(r3816688, r3816684, r3816680, MPFR_RNDN);
        mpfr_mul(r3816689, r3816688, r3816680, MPFR_RNDN);
        mpfr_mul(r3816690, r3816687, r3816689, MPFR_RNDN);
        mpfr_add(r3816691, r3816686, r3816690, MPFR_RNDN);
        ;
        mpfr_mul(r3816693, r3816689, r3816680, MPFR_RNDN);
        mpfr_mul(r3816694, r3816693, r3816680, MPFR_RNDN);
        mpfr_mul(r3816695, r3816692, r3816694, MPFR_RNDN);
        mpfr_add(r3816696, r3816691, r3816695, MPFR_RNDN);
        ;
        mpfr_mul(r3816698, r3816694, r3816680, MPFR_RNDN);
        mpfr_mul(r3816699, r3816698, r3816680, MPFR_RNDN);
        mpfr_mul(r3816700, r3816697, r3816699, MPFR_RNDN);
        mpfr_add(r3816701, r3816696, r3816700, MPFR_RNDN);
        return mpfr_get_d(r3816701, MPFR_RNDN);
}

static mpfr_t r3816702, r3816703, r3816704, r3816705, r3816706, r3816707, r3816708, r3816709, r3816710, r3816711, r3816712, r3816713, r3816714, r3816715, r3816716, r3816717, r3816718, r3816719, r3816720, r3816721, r3816722, r3816723, r3816724;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3816702, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r3816703);
        mpfr_init(r3816704);
        mpfr_init_set_str(r3816705, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r3816706);
        mpfr_init(r3816707);
        mpfr_init(r3816708);
        mpfr_init(r3816709);
        mpfr_init_set_str(r3816710, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r3816711);
        mpfr_init(r3816712);
        mpfr_init(r3816713);
        mpfr_init(r3816714);
        mpfr_init_set_str(r3816715, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r3816716);
        mpfr_init(r3816717);
        mpfr_init(r3816718);
        mpfr_init(r3816719);
        mpfr_init_set_str(r3816720, "512.0", 10, MPFR_RNDN);
        mpfr_init(r3816721);
        mpfr_init(r3816722);
        mpfr_init(r3816723);
        mpfr_init(r3816724);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r3816703, x, MPFR_RNDN);
        mpfr_mul(r3816704, r3816702, r3816703, MPFR_RNDN);
        ;
        mpfr_mul(r3816706, r3816703, r3816703, MPFR_RNDN);
        mpfr_mul(r3816707, r3816706, r3816703, MPFR_RNDN);
        mpfr_mul(r3816708, r3816705, r3816707, MPFR_RNDN);
        mpfr_add(r3816709, r3816704, r3816708, MPFR_RNDN);
        ;
        mpfr_mul(r3816711, r3816707, r3816703, MPFR_RNDN);
        mpfr_mul(r3816712, r3816711, r3816703, MPFR_RNDN);
        mpfr_mul(r3816713, r3816710, r3816712, MPFR_RNDN);
        mpfr_add(r3816714, r3816709, r3816713, MPFR_RNDN);
        ;
        mpfr_mul(r3816716, r3816712, r3816703, MPFR_RNDN);
        mpfr_mul(r3816717, r3816716, r3816703, MPFR_RNDN);
        mpfr_mul(r3816718, r3816715, r3816717, MPFR_RNDN);
        mpfr_add(r3816719, r3816714, r3816718, MPFR_RNDN);
        ;
        mpfr_mul(r3816721, r3816717, r3816703, MPFR_RNDN);
        mpfr_mul(r3816722, r3816721, r3816703, MPFR_RNDN);
        mpfr_mul(r3816723, r3816720, r3816722, MPFR_RNDN);
        mpfr_add(r3816724, r3816719, r3816723, MPFR_RNDN);
        return mpfr_get_d(r3816724, MPFR_RNDN);
}

