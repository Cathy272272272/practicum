#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r10216533 = 1.0;
        float r10216534 = -4.0;
        float r10216535 = x;
        float r10216536 = r10216534 * r10216535;
        float r10216537 = r10216533 + r10216536;
        float r10216538 = 3.0;
        float r10216539 = r10216535 * r10216535;
        float r10216540 = r10216538 * r10216539;
        float r10216541 = r10216537 + r10216540;
        float r10216542 = -0.666667;
        float r10216543 = r10216539 * r10216535;
        float r10216544 = r10216542 * r10216543;
        float r10216545 = r10216541 + r10216544;
        float r10216546 = 0.041667;
        float r10216547 = r10216543 * r10216535;
        float r10216548 = r10216546 * r10216547;
        float r10216549 = r10216545 + r10216548;
        return r10216549;
}

double f_id(double x) {
        double r10216550 = 1.0;
        double r10216551 = -4.0;
        double r10216552 = x;
        double r10216553 = r10216551 * r10216552;
        double r10216554 = r10216550 + r10216553;
        double r10216555 = 3.0;
        double r10216556 = r10216552 * r10216552;
        double r10216557 = r10216555 * r10216556;
        double r10216558 = r10216554 + r10216557;
        double r10216559 = -0.666667;
        double r10216560 = r10216556 * r10216552;
        double r10216561 = r10216559 * r10216560;
        double r10216562 = r10216558 + r10216561;
        double r10216563 = 0.041667;
        double r10216564 = r10216560 * r10216552;
        double r10216565 = r10216563 * r10216564;
        double r10216566 = r10216562 + r10216565;
        return r10216566;
}


double f_of(float x) {
        float r10216567 = -4.0;
        float r10216568 = x;
        float r10216569 = r10216567 * r10216568;
        float r10216570 = 1.0;
        float r10216571 = r10216569 + r10216570;
        float r10216572 = 4;
        float r10216573 = pow(r10216568, r10216572);
        float r10216574 = 0.041667;
        float r10216575 = r10216573 * r10216574;
        float r10216576 = r10216571 + r10216575;
        float r10216577 = 0.666667;
        float r10216578 = r10216577 * r10216568;
        float r10216579 = 3.0;
        float r10216580 = r10216578 - r10216579;
        float r10216581 = r10216568 * r10216568;
        float r10216582 = r10216580 * r10216581;
        float r10216583 = r10216576 - r10216582;
        return r10216583;
}

double f_od(double x) {
        double r10216584 = -4.0;
        double r10216585 = x;
        double r10216586 = r10216584 * r10216585;
        double r10216587 = 1.0;
        double r10216588 = r10216586 + r10216587;
        double r10216589 = 4;
        double r10216590 = pow(r10216585, r10216589);
        double r10216591 = 0.041667;
        double r10216592 = r10216590 * r10216591;
        double r10216593 = r10216588 + r10216592;
        double r10216594 = 0.666667;
        double r10216595 = r10216594 * r10216585;
        double r10216596 = 3.0;
        double r10216597 = r10216595 - r10216596;
        double r10216598 = r10216585 * r10216585;
        double r10216599 = r10216597 * r10216598;
        double r10216600 = r10216593 - r10216599;
        return r10216600;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10216601, r10216602, r10216603, r10216604, r10216605, r10216606, r10216607, r10216608, r10216609, r10216610, r10216611, r10216612, r10216613, r10216614, r10216615, r10216616, r10216617;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10216601, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216602, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10216603);
        mpfr_init(r10216604);
        mpfr_init(r10216605);
        mpfr_init_set_str(r10216606, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10216607);
        mpfr_init(r10216608);
        mpfr_init(r10216609);
        mpfr_init_set_str(r10216610, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10216611);
        mpfr_init(r10216612);
        mpfr_init(r10216613);
        mpfr_init_set_str(r10216614, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10216615);
        mpfr_init(r10216616);
        mpfr_init(r10216617);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10216603, x, MPFR_RNDN);
        mpfr_mul(r10216604, r10216602, r10216603, MPFR_RNDN);
        mpfr_add(r10216605, r10216601, r10216604, MPFR_RNDN);
        ;
        mpfr_mul(r10216607, r10216603, r10216603, MPFR_RNDN);
        mpfr_mul(r10216608, r10216606, r10216607, MPFR_RNDN);
        mpfr_add(r10216609, r10216605, r10216608, MPFR_RNDN);
        ;
        mpfr_mul(r10216611, r10216607, r10216603, MPFR_RNDN);
        mpfr_mul(r10216612, r10216610, r10216611, MPFR_RNDN);
        mpfr_add(r10216613, r10216609, r10216612, MPFR_RNDN);
        ;
        mpfr_mul(r10216615, r10216611, r10216603, MPFR_RNDN);
        mpfr_mul(r10216616, r10216614, r10216615, MPFR_RNDN);
        mpfr_add(r10216617, r10216613, r10216616, MPFR_RNDN);
        return mpfr_get_d(r10216617, MPFR_RNDN);
}

static mpfr_t r10216618, r10216619, r10216620, r10216621, r10216622, r10216623, r10216624, r10216625, r10216626, r10216627, r10216628, r10216629, r10216630, r10216631, r10216632, r10216633, r10216634;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10216618, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10216619);
        mpfr_init(r10216620);
        mpfr_init_set_str(r10216621, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216622);
        mpfr_init_set_str(r10216623, "4", 10, MPFR_RNDN);
        mpfr_init(r10216624);
        mpfr_init_set_str(r10216625, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10216626);
        mpfr_init(r10216627);
        mpfr_init_set_str(r10216628, "0.666667", 10, MPFR_RNDN);
        mpfr_init(r10216629);
        mpfr_init_set_str(r10216630, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10216631);
        mpfr_init(r10216632);
        mpfr_init(r10216633);
        mpfr_init(r10216634);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10216619, x, MPFR_RNDN);
        mpfr_mul(r10216620, r10216618, r10216619, MPFR_RNDN);
        ;
        mpfr_add(r10216622, r10216620, r10216621, MPFR_RNDN);
        ;
        mpfr_pow(r10216624, r10216619, r10216623, MPFR_RNDN);
        ;
        mpfr_mul(r10216626, r10216624, r10216625, MPFR_RNDN);
        mpfr_add(r10216627, r10216622, r10216626, MPFR_RNDN);
        ;
        mpfr_mul(r10216629, r10216628, r10216619, MPFR_RNDN);
        ;
        mpfr_sub(r10216631, r10216629, r10216630, MPFR_RNDN);
        mpfr_mul(r10216632, r10216619, r10216619, MPFR_RNDN);
        mpfr_mul(r10216633, r10216631, r10216632, MPFR_RNDN);
        mpfr_sub(r10216634, r10216627, r10216633, MPFR_RNDN);
        return mpfr_get_d(r10216634, MPFR_RNDN);
}

static mpfr_t r10216635, r10216636, r10216637, r10216638, r10216639, r10216640, r10216641, r10216642, r10216643, r10216644, r10216645, r10216646, r10216647, r10216648, r10216649, r10216650, r10216651;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10216635, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10216636);
        mpfr_init(r10216637);
        mpfr_init_set_str(r10216638, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216639);
        mpfr_init_set_str(r10216640, "4", 10, MPFR_RNDN);
        mpfr_init(r10216641);
        mpfr_init_set_str(r10216642, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10216643);
        mpfr_init(r10216644);
        mpfr_init_set_str(r10216645, "0.666667", 10, MPFR_RNDN);
        mpfr_init(r10216646);
        mpfr_init_set_str(r10216647, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10216648);
        mpfr_init(r10216649);
        mpfr_init(r10216650);
        mpfr_init(r10216651);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10216636, x, MPFR_RNDN);
        mpfr_mul(r10216637, r10216635, r10216636, MPFR_RNDN);
        ;
        mpfr_add(r10216639, r10216637, r10216638, MPFR_RNDN);
        ;
        mpfr_pow(r10216641, r10216636, r10216640, MPFR_RNDN);
        ;
        mpfr_mul(r10216643, r10216641, r10216642, MPFR_RNDN);
        mpfr_add(r10216644, r10216639, r10216643, MPFR_RNDN);
        ;
        mpfr_mul(r10216646, r10216645, r10216636, MPFR_RNDN);
        ;
        mpfr_sub(r10216648, r10216646, r10216647, MPFR_RNDN);
        mpfr_mul(r10216649, r10216636, r10216636, MPFR_RNDN);
        mpfr_mul(r10216650, r10216648, r10216649, MPFR_RNDN);
        mpfr_sub(r10216651, r10216644, r10216650, MPFR_RNDN);
        return mpfr_get_d(r10216651, MPFR_RNDN);
}

