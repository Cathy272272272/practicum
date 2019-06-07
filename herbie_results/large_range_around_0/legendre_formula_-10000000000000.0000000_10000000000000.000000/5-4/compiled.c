#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7514538 = 0.375;
        float r7514539 = -3.75;
        float r7514540 = x;
        float r7514541 = r7514540 * r7514540;
        float r7514542 = r7514539 * r7514541;
        float r7514543 = r7514538 + r7514542;
        float r7514544 = 4.375;
        float r7514545 = r7514541 * r7514540;
        float r7514546 = r7514545 * r7514540;
        float r7514547 = r7514544 * r7514546;
        float r7514548 = r7514543 + r7514547;
        return r7514548;
}

double f_id(double x) {
        double r7514549 = 0.375;
        double r7514550 = -3.75;
        double r7514551 = x;
        double r7514552 = r7514551 * r7514551;
        double r7514553 = r7514550 * r7514552;
        double r7514554 = r7514549 + r7514553;
        double r7514555 = 4.375;
        double r7514556 = r7514552 * r7514551;
        double r7514557 = r7514556 * r7514551;
        double r7514558 = r7514555 * r7514557;
        double r7514559 = r7514554 + r7514558;
        return r7514559;
}


double f_of(float x) {
        float r7514560 = 0.375;
        float r7514561 = -3.75;
        float r7514562 = x;
        float r7514563 = r7514562 * r7514562;
        float r7514564 = r7514561 * r7514563;
        float r7514565 = r7514560 + r7514564;
        float r7514566 = 4.375;
        float r7514567 = r7514566 * r7514562;
        float r7514568 = 3;
        float r7514569 = pow(r7514562, r7514568);
        float r7514570 = r7514567 * r7514569;
        float r7514571 = cbrt(r7514570);
        float r7514572 = r7514571 * r7514571;
        float r7514573 = r7514569 * r7514567;
        float r7514574 = cbrt(r7514573);
        float r7514575 = r7514572 * r7514574;
        float r7514576 = r7514565 + r7514575;
        return r7514576;
}

double f_od(double x) {
        double r7514577 = 0.375;
        double r7514578 = -3.75;
        double r7514579 = x;
        double r7514580 = r7514579 * r7514579;
        double r7514581 = r7514578 * r7514580;
        double r7514582 = r7514577 + r7514581;
        double r7514583 = 4.375;
        double r7514584 = r7514583 * r7514579;
        double r7514585 = 3;
        double r7514586 = pow(r7514579, r7514585);
        double r7514587 = r7514584 * r7514586;
        double r7514588 = cbrt(r7514587);
        double r7514589 = r7514588 * r7514588;
        double r7514590 = r7514586 * r7514584;
        double r7514591 = cbrt(r7514590);
        double r7514592 = r7514589 * r7514591;
        double r7514593 = r7514582 + r7514592;
        return r7514593;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7514594, r7514595, r7514596, r7514597, r7514598, r7514599, r7514600, r7514601, r7514602, r7514603, r7514604;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7514594, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514595, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7514596);
        mpfr_init(r7514597);
        mpfr_init(r7514598);
        mpfr_init(r7514599);
        mpfr_init_set_str(r7514600, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7514601);
        mpfr_init(r7514602);
        mpfr_init(r7514603);
        mpfr_init(r7514604);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7514596, x, MPFR_RNDN);
        mpfr_mul(r7514597, r7514596, r7514596, MPFR_RNDN);
        mpfr_mul(r7514598, r7514595, r7514597, MPFR_RNDN);
        mpfr_add(r7514599, r7514594, r7514598, MPFR_RNDN);
        ;
        mpfr_mul(r7514601, r7514597, r7514596, MPFR_RNDN);
        mpfr_mul(r7514602, r7514601, r7514596, MPFR_RNDN);
        mpfr_mul(r7514603, r7514600, r7514602, MPFR_RNDN);
        mpfr_add(r7514604, r7514599, r7514603, MPFR_RNDN);
        return mpfr_get_d(r7514604, MPFR_RNDN);
}

static mpfr_t r7514605, r7514606, r7514607, r7514608, r7514609, r7514610, r7514611, r7514612, r7514613, r7514614, r7514615, r7514616, r7514617, r7514618, r7514619, r7514620, r7514621;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7514605, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514606, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7514607);
        mpfr_init(r7514608);
        mpfr_init(r7514609);
        mpfr_init(r7514610);
        mpfr_init_set_str(r7514611, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7514612);
        mpfr_init_set_str(r7514613, "3", 10, MPFR_RNDN);
        mpfr_init(r7514614);
        mpfr_init(r7514615);
        mpfr_init(r7514616);
        mpfr_init(r7514617);
        mpfr_init(r7514618);
        mpfr_init(r7514619);
        mpfr_init(r7514620);
        mpfr_init(r7514621);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7514607, x, MPFR_RNDN);
        mpfr_mul(r7514608, r7514607, r7514607, MPFR_RNDN);
        mpfr_mul(r7514609, r7514606, r7514608, MPFR_RNDN);
        mpfr_add(r7514610, r7514605, r7514609, MPFR_RNDN);
        ;
        mpfr_mul(r7514612, r7514611, r7514607, MPFR_RNDN);
        ;
        mpfr_pow(r7514614, r7514607, r7514613, MPFR_RNDN);
        mpfr_mul(r7514615, r7514612, r7514614, MPFR_RNDN);
        mpfr_cbrt(r7514616, r7514615, MPFR_RNDN);
        mpfr_mul(r7514617, r7514616, r7514616, MPFR_RNDN);
        mpfr_mul(r7514618, r7514614, r7514612, MPFR_RNDN);
        mpfr_cbrt(r7514619, r7514618, MPFR_RNDN);
        mpfr_mul(r7514620, r7514617, r7514619, MPFR_RNDN);
        mpfr_add(r7514621, r7514610, r7514620, MPFR_RNDN);
        return mpfr_get_d(r7514621, MPFR_RNDN);
}

static mpfr_t r7514622, r7514623, r7514624, r7514625, r7514626, r7514627, r7514628, r7514629, r7514630, r7514631, r7514632, r7514633, r7514634, r7514635, r7514636, r7514637, r7514638;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7514622, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514623, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7514624);
        mpfr_init(r7514625);
        mpfr_init(r7514626);
        mpfr_init(r7514627);
        mpfr_init_set_str(r7514628, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7514629);
        mpfr_init_set_str(r7514630, "3", 10, MPFR_RNDN);
        mpfr_init(r7514631);
        mpfr_init(r7514632);
        mpfr_init(r7514633);
        mpfr_init(r7514634);
        mpfr_init(r7514635);
        mpfr_init(r7514636);
        mpfr_init(r7514637);
        mpfr_init(r7514638);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7514624, x, MPFR_RNDN);
        mpfr_mul(r7514625, r7514624, r7514624, MPFR_RNDN);
        mpfr_mul(r7514626, r7514623, r7514625, MPFR_RNDN);
        mpfr_add(r7514627, r7514622, r7514626, MPFR_RNDN);
        ;
        mpfr_mul(r7514629, r7514628, r7514624, MPFR_RNDN);
        ;
        mpfr_pow(r7514631, r7514624, r7514630, MPFR_RNDN);
        mpfr_mul(r7514632, r7514629, r7514631, MPFR_RNDN);
        mpfr_cbrt(r7514633, r7514632, MPFR_RNDN);
        mpfr_mul(r7514634, r7514633, r7514633, MPFR_RNDN);
        mpfr_mul(r7514635, r7514631, r7514629, MPFR_RNDN);
        mpfr_cbrt(r7514636, r7514635, MPFR_RNDN);
        mpfr_mul(r7514637, r7514634, r7514636, MPFR_RNDN);
        mpfr_add(r7514638, r7514627, r7514637, MPFR_RNDN);
        return mpfr_get_d(r7514638, MPFR_RNDN);
}

