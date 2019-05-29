#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r9402524 = -120.0;
        float r9402525 = 720.0;
        float r9402526 = x;
        float r9402527 = r9402526 * r9402526;
        float r9402528 = r9402525 * r9402527;
        float r9402529 = r9402524 + r9402528;
        float r9402530 = -480.0;
        float r9402531 = r9402527 * r9402526;
        float r9402532 = r9402531 * r9402526;
        float r9402533 = r9402530 * r9402532;
        float r9402534 = r9402529 + r9402533;
        float r9402535 = 64.0;
        float r9402536 = r9402532 * r9402526;
        float r9402537 = r9402536 * r9402526;
        float r9402538 = r9402535 * r9402537;
        float r9402539 = r9402534 + r9402538;
        return r9402539;
}

double f_id(double x) {
        double r9402540 = -120.0;
        double r9402541 = 720.0;
        double r9402542 = x;
        double r9402543 = r9402542 * r9402542;
        double r9402544 = r9402541 * r9402543;
        double r9402545 = r9402540 + r9402544;
        double r9402546 = -480.0;
        double r9402547 = r9402543 * r9402542;
        double r9402548 = r9402547 * r9402542;
        double r9402549 = r9402546 * r9402548;
        double r9402550 = r9402545 + r9402549;
        double r9402551 = 64.0;
        double r9402552 = r9402548 * r9402542;
        double r9402553 = r9402552 * r9402542;
        double r9402554 = r9402551 * r9402553;
        double r9402555 = r9402550 + r9402554;
        return r9402555;
}


double f_of(float x) {
        float r9402556 = -120.0;
        float r9402557 = 720.0;
        float r9402558 = x;
        float r9402559 = r9402558 * r9402558;
        float r9402560 = r9402557 * r9402559;
        float r9402561 = r9402556 + r9402560;
        float r9402562 = -480.0;
        float r9402563 = r9402559 * r9402558;
        float r9402564 = r9402563 * r9402558;
        float r9402565 = r9402562 * r9402564;
        float r9402566 = r9402561 + r9402565;
        float r9402567 = 64.0;
        float r9402568 = 3;
        float r9402569 = pow(r9402558, r9402568);
        float r9402570 = r9402569 * r9402558;
        float r9402571 = r9402570 * r9402558;
        float r9402572 = r9402571 * r9402558;
        float r9402573 = r9402567 * r9402572;
        float r9402574 = r9402566 + r9402573;
        return r9402574;
}

double f_od(double x) {
        double r9402575 = -120.0;
        double r9402576 = 720.0;
        double r9402577 = x;
        double r9402578 = r9402577 * r9402577;
        double r9402579 = r9402576 * r9402578;
        double r9402580 = r9402575 + r9402579;
        double r9402581 = -480.0;
        double r9402582 = r9402578 * r9402577;
        double r9402583 = r9402582 * r9402577;
        double r9402584 = r9402581 * r9402583;
        double r9402585 = r9402580 + r9402584;
        double r9402586 = 64.0;
        double r9402587 = 3;
        double r9402588 = pow(r9402577, r9402587);
        double r9402589 = r9402588 * r9402577;
        double r9402590 = r9402589 * r9402577;
        double r9402591 = r9402590 * r9402577;
        double r9402592 = r9402586 * r9402591;
        double r9402593 = r9402585 + r9402592;
        return r9402593;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9402594, r9402595, r9402596, r9402597, r9402598, r9402599, r9402600, r9402601, r9402602, r9402603, r9402604, r9402605, r9402606, r9402607, r9402608, r9402609;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402594, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402595, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9402596);
        mpfr_init(r9402597);
        mpfr_init(r9402598);
        mpfr_init(r9402599);
        mpfr_init_set_str(r9402600, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r9402601);
        mpfr_init(r9402602);
        mpfr_init(r9402603);
        mpfr_init(r9402604);
        mpfr_init_set_str(r9402605, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9402606);
        mpfr_init(r9402607);
        mpfr_init(r9402608);
        mpfr_init(r9402609);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9402596, x, MPFR_RNDN);
        mpfr_mul(r9402597, r9402596, r9402596, MPFR_RNDN);
        mpfr_mul(r9402598, r9402595, r9402597, MPFR_RNDN);
        mpfr_add(r9402599, r9402594, r9402598, MPFR_RNDN);
        ;
        mpfr_mul(r9402601, r9402597, r9402596, MPFR_RNDN);
        mpfr_mul(r9402602, r9402601, r9402596, MPFR_RNDN);
        mpfr_mul(r9402603, r9402600, r9402602, MPFR_RNDN);
        mpfr_add(r9402604, r9402599, r9402603, MPFR_RNDN);
        ;
        mpfr_mul(r9402606, r9402602, r9402596, MPFR_RNDN);
        mpfr_mul(r9402607, r9402606, r9402596, MPFR_RNDN);
        mpfr_mul(r9402608, r9402605, r9402607, MPFR_RNDN);
        mpfr_add(r9402609, r9402604, r9402608, MPFR_RNDN);
        return mpfr_get_d(r9402609, MPFR_RNDN);
}

static mpfr_t r9402610, r9402611, r9402612, r9402613, r9402614, r9402615, r9402616, r9402617, r9402618, r9402619, r9402620, r9402621, r9402622, r9402623, r9402624, r9402625, r9402626, r9402627, r9402628;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402610, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402611, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9402612);
        mpfr_init(r9402613);
        mpfr_init(r9402614);
        mpfr_init(r9402615);
        mpfr_init_set_str(r9402616, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r9402617);
        mpfr_init(r9402618);
        mpfr_init(r9402619);
        mpfr_init(r9402620);
        mpfr_init_set_str(r9402621, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402622, "3", 10, MPFR_RNDN);
        mpfr_init(r9402623);
        mpfr_init(r9402624);
        mpfr_init(r9402625);
        mpfr_init(r9402626);
        mpfr_init(r9402627);
        mpfr_init(r9402628);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9402612, x, MPFR_RNDN);
        mpfr_mul(r9402613, r9402612, r9402612, MPFR_RNDN);
        mpfr_mul(r9402614, r9402611, r9402613, MPFR_RNDN);
        mpfr_add(r9402615, r9402610, r9402614, MPFR_RNDN);
        ;
        mpfr_mul(r9402617, r9402613, r9402612, MPFR_RNDN);
        mpfr_mul(r9402618, r9402617, r9402612, MPFR_RNDN);
        mpfr_mul(r9402619, r9402616, r9402618, MPFR_RNDN);
        mpfr_add(r9402620, r9402615, r9402619, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9402623, r9402612, r9402622, MPFR_RNDN);
        mpfr_mul(r9402624, r9402623, r9402612, MPFR_RNDN);
        mpfr_mul(r9402625, r9402624, r9402612, MPFR_RNDN);
        mpfr_mul(r9402626, r9402625, r9402612, MPFR_RNDN);
        mpfr_mul(r9402627, r9402621, r9402626, MPFR_RNDN);
        mpfr_add(r9402628, r9402620, r9402627, MPFR_RNDN);
        return mpfr_get_d(r9402628, MPFR_RNDN);
}

static mpfr_t r9402629, r9402630, r9402631, r9402632, r9402633, r9402634, r9402635, r9402636, r9402637, r9402638, r9402639, r9402640, r9402641, r9402642, r9402643, r9402644, r9402645, r9402646, r9402647;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402629, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402630, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9402631);
        mpfr_init(r9402632);
        mpfr_init(r9402633);
        mpfr_init(r9402634);
        mpfr_init_set_str(r9402635, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r9402636);
        mpfr_init(r9402637);
        mpfr_init(r9402638);
        mpfr_init(r9402639);
        mpfr_init_set_str(r9402640, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402641, "3", 10, MPFR_RNDN);
        mpfr_init(r9402642);
        mpfr_init(r9402643);
        mpfr_init(r9402644);
        mpfr_init(r9402645);
        mpfr_init(r9402646);
        mpfr_init(r9402647);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9402631, x, MPFR_RNDN);
        mpfr_mul(r9402632, r9402631, r9402631, MPFR_RNDN);
        mpfr_mul(r9402633, r9402630, r9402632, MPFR_RNDN);
        mpfr_add(r9402634, r9402629, r9402633, MPFR_RNDN);
        ;
        mpfr_mul(r9402636, r9402632, r9402631, MPFR_RNDN);
        mpfr_mul(r9402637, r9402636, r9402631, MPFR_RNDN);
        mpfr_mul(r9402638, r9402635, r9402637, MPFR_RNDN);
        mpfr_add(r9402639, r9402634, r9402638, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9402642, r9402631, r9402641, MPFR_RNDN);
        mpfr_mul(r9402643, r9402642, r9402631, MPFR_RNDN);
        mpfr_mul(r9402644, r9402643, r9402631, MPFR_RNDN);
        mpfr_mul(r9402645, r9402644, r9402631, MPFR_RNDN);
        mpfr_mul(r9402646, r9402640, r9402645, MPFR_RNDN);
        mpfr_add(r9402647, r9402639, r9402646, MPFR_RNDN);
        return mpfr_get_d(r9402647, MPFR_RNDN);
}

