#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7402497 = -2.1875;
        float r7402498 = x;
        float r7402499 = r7402497 * r7402498;
        float r7402500 = 19.6875;
        float r7402501 = r7402498 * r7402498;
        float r7402502 = r7402501 * r7402498;
        float r7402503 = r7402500 * r7402502;
        float r7402504 = r7402499 + r7402503;
        float r7402505 = -43.3125;
        float r7402506 = r7402502 * r7402498;
        float r7402507 = r7402506 * r7402498;
        float r7402508 = r7402505 * r7402507;
        float r7402509 = r7402504 + r7402508;
        float r7402510 = 26.8125;
        float r7402511 = r7402507 * r7402498;
        float r7402512 = r7402511 * r7402498;
        float r7402513 = r7402510 * r7402512;
        float r7402514 = r7402509 + r7402513;
        return r7402514;
}

double f_id(double x) {
        double r7402515 = -2.1875;
        double r7402516 = x;
        double r7402517 = r7402515 * r7402516;
        double r7402518 = 19.6875;
        double r7402519 = r7402516 * r7402516;
        double r7402520 = r7402519 * r7402516;
        double r7402521 = r7402518 * r7402520;
        double r7402522 = r7402517 + r7402521;
        double r7402523 = -43.3125;
        double r7402524 = r7402520 * r7402516;
        double r7402525 = r7402524 * r7402516;
        double r7402526 = r7402523 * r7402525;
        double r7402527 = r7402522 + r7402526;
        double r7402528 = 26.8125;
        double r7402529 = r7402525 * r7402516;
        double r7402530 = r7402529 * r7402516;
        double r7402531 = r7402528 * r7402530;
        double r7402532 = r7402527 + r7402531;
        return r7402532;
}


double f_of(float x) {
        float r7402533 = -2.1875;
        float r7402534 = x;
        float r7402535 = r7402533 * r7402534;
        float r7402536 = 19.6875;
        float r7402537 = r7402534 * r7402534;
        float r7402538 = r7402537 * r7402534;
        float r7402539 = r7402536 * r7402538;
        float r7402540 = r7402535 + r7402539;
        float r7402541 = -43.3125;
        float r7402542 = r7402538 * r7402534;
        float r7402543 = r7402542 * r7402534;
        float r7402544 = r7402541 * r7402543;
        float r7402545 = r7402540 + r7402544;
        float r7402546 = 26.8125;
        float r7402547 = r7402543 * r7402534;
        float r7402548 = r7402547 * r7402534;
        float r7402549 = r7402546 * r7402548;
        float r7402550 = r7402545 + r7402549;
        return r7402550;
}

double f_od(double x) {
        double r7402551 = -2.1875;
        double r7402552 = x;
        double r7402553 = r7402551 * r7402552;
        double r7402554 = 19.6875;
        double r7402555 = r7402552 * r7402552;
        double r7402556 = r7402555 * r7402552;
        double r7402557 = r7402554 * r7402556;
        double r7402558 = r7402553 + r7402557;
        double r7402559 = -43.3125;
        double r7402560 = r7402556 * r7402552;
        double r7402561 = r7402560 * r7402552;
        double r7402562 = r7402559 * r7402561;
        double r7402563 = r7402558 + r7402562;
        double r7402564 = 26.8125;
        double r7402565 = r7402561 * r7402552;
        double r7402566 = r7402565 * r7402552;
        double r7402567 = r7402564 * r7402566;
        double r7402568 = r7402563 + r7402567;
        return r7402568;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7402569, r7402570, r7402571, r7402572, r7402573, r7402574, r7402575, r7402576, r7402577, r7402578, r7402579, r7402580, r7402581, r7402582, r7402583, r7402584, r7402585, r7402586;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7402569, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7402570);
        mpfr_init(r7402571);
        mpfr_init_set_str(r7402572, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7402573);
        mpfr_init(r7402574);
        mpfr_init(r7402575);
        mpfr_init(r7402576);
        mpfr_init_set_str(r7402577, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7402578);
        mpfr_init(r7402579);
        mpfr_init(r7402580);
        mpfr_init(r7402581);
        mpfr_init_set_str(r7402582, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7402583);
        mpfr_init(r7402584);
        mpfr_init(r7402585);
        mpfr_init(r7402586);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7402570, x, MPFR_RNDN);
        mpfr_mul(r7402571, r7402569, r7402570, MPFR_RNDN);
        ;
        mpfr_mul(r7402573, r7402570, r7402570, MPFR_RNDN);
        mpfr_mul(r7402574, r7402573, r7402570, MPFR_RNDN);
        mpfr_mul(r7402575, r7402572, r7402574, MPFR_RNDN);
        mpfr_add(r7402576, r7402571, r7402575, MPFR_RNDN);
        ;
        mpfr_mul(r7402578, r7402574, r7402570, MPFR_RNDN);
        mpfr_mul(r7402579, r7402578, r7402570, MPFR_RNDN);
        mpfr_mul(r7402580, r7402577, r7402579, MPFR_RNDN);
        mpfr_add(r7402581, r7402576, r7402580, MPFR_RNDN);
        ;
        mpfr_mul(r7402583, r7402579, r7402570, MPFR_RNDN);
        mpfr_mul(r7402584, r7402583, r7402570, MPFR_RNDN);
        mpfr_mul(r7402585, r7402582, r7402584, MPFR_RNDN);
        mpfr_add(r7402586, r7402581, r7402585, MPFR_RNDN);
        return mpfr_get_d(r7402586, MPFR_RNDN);
}

static mpfr_t r7402587, r7402588, r7402589, r7402590, r7402591, r7402592, r7402593, r7402594, r7402595, r7402596, r7402597, r7402598, r7402599, r7402600, r7402601, r7402602, r7402603, r7402604;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7402587, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7402588);
        mpfr_init(r7402589);
        mpfr_init_set_str(r7402590, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7402591);
        mpfr_init(r7402592);
        mpfr_init(r7402593);
        mpfr_init(r7402594);
        mpfr_init_set_str(r7402595, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7402596);
        mpfr_init(r7402597);
        mpfr_init(r7402598);
        mpfr_init(r7402599);
        mpfr_init_set_str(r7402600, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7402601);
        mpfr_init(r7402602);
        mpfr_init(r7402603);
        mpfr_init(r7402604);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7402588, x, MPFR_RNDN);
        mpfr_mul(r7402589, r7402587, r7402588, MPFR_RNDN);
        ;
        mpfr_mul(r7402591, r7402588, r7402588, MPFR_RNDN);
        mpfr_mul(r7402592, r7402591, r7402588, MPFR_RNDN);
        mpfr_mul(r7402593, r7402590, r7402592, MPFR_RNDN);
        mpfr_add(r7402594, r7402589, r7402593, MPFR_RNDN);
        ;
        mpfr_mul(r7402596, r7402592, r7402588, MPFR_RNDN);
        mpfr_mul(r7402597, r7402596, r7402588, MPFR_RNDN);
        mpfr_mul(r7402598, r7402595, r7402597, MPFR_RNDN);
        mpfr_add(r7402599, r7402594, r7402598, MPFR_RNDN);
        ;
        mpfr_mul(r7402601, r7402597, r7402588, MPFR_RNDN);
        mpfr_mul(r7402602, r7402601, r7402588, MPFR_RNDN);
        mpfr_mul(r7402603, r7402600, r7402602, MPFR_RNDN);
        mpfr_add(r7402604, r7402599, r7402603, MPFR_RNDN);
        return mpfr_get_d(r7402604, MPFR_RNDN);
}

static mpfr_t r7402605, r7402606, r7402607, r7402608, r7402609, r7402610, r7402611, r7402612, r7402613, r7402614, r7402615, r7402616, r7402617, r7402618, r7402619, r7402620, r7402621, r7402622;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7402605, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7402606);
        mpfr_init(r7402607);
        mpfr_init_set_str(r7402608, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7402609);
        mpfr_init(r7402610);
        mpfr_init(r7402611);
        mpfr_init(r7402612);
        mpfr_init_set_str(r7402613, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7402614);
        mpfr_init(r7402615);
        mpfr_init(r7402616);
        mpfr_init(r7402617);
        mpfr_init_set_str(r7402618, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7402619);
        mpfr_init(r7402620);
        mpfr_init(r7402621);
        mpfr_init(r7402622);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7402606, x, MPFR_RNDN);
        mpfr_mul(r7402607, r7402605, r7402606, MPFR_RNDN);
        ;
        mpfr_mul(r7402609, r7402606, r7402606, MPFR_RNDN);
        mpfr_mul(r7402610, r7402609, r7402606, MPFR_RNDN);
        mpfr_mul(r7402611, r7402608, r7402610, MPFR_RNDN);
        mpfr_add(r7402612, r7402607, r7402611, MPFR_RNDN);
        ;
        mpfr_mul(r7402614, r7402610, r7402606, MPFR_RNDN);
        mpfr_mul(r7402615, r7402614, r7402606, MPFR_RNDN);
        mpfr_mul(r7402616, r7402613, r7402615, MPFR_RNDN);
        mpfr_add(r7402617, r7402612, r7402616, MPFR_RNDN);
        ;
        mpfr_mul(r7402619, r7402615, r7402606, MPFR_RNDN);
        mpfr_mul(r7402620, r7402619, r7402606, MPFR_RNDN);
        mpfr_mul(r7402621, r7402618, r7402620, MPFR_RNDN);
        mpfr_add(r7402622, r7402617, r7402621, MPFR_RNDN);
        return mpfr_get_d(r7402622, MPFR_RNDN);
}

