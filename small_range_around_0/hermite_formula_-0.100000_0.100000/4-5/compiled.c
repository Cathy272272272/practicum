#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6326608 = 120.0;
        float r6326609 = x;
        float r6326610 = r6326608 * r6326609;
        float r6326611 = -160.0;
        float r6326612 = r6326609 * r6326609;
        float r6326613 = r6326612 * r6326609;
        float r6326614 = r6326611 * r6326613;
        float r6326615 = r6326610 + r6326614;
        float r6326616 = 32.0;
        float r6326617 = r6326613 * r6326609;
        float r6326618 = r6326617 * r6326609;
        float r6326619 = r6326616 * r6326618;
        float r6326620 = r6326615 + r6326619;
        return r6326620;
}

double f_id(double x) {
        double r6326621 = 120.0;
        double r6326622 = x;
        double r6326623 = r6326621 * r6326622;
        double r6326624 = -160.0;
        double r6326625 = r6326622 * r6326622;
        double r6326626 = r6326625 * r6326622;
        double r6326627 = r6326624 * r6326626;
        double r6326628 = r6326623 + r6326627;
        double r6326629 = 32.0;
        double r6326630 = r6326626 * r6326622;
        double r6326631 = r6326630 * r6326622;
        double r6326632 = r6326629 * r6326631;
        double r6326633 = r6326628 + r6326632;
        return r6326633;
}


double f_of(float x) {
        float r6326634 = 120.0;
        float r6326635 = x;
        float r6326636 = r6326634 * r6326635;
        float r6326637 = -160.0;
        float r6326638 = r6326635 * r6326635;
        float r6326639 = r6326638 * r6326635;
        float r6326640 = r6326637 * r6326639;
        float r6326641 = r6326636 + r6326640;
        float r6326642 = 32.0;
        float r6326643 = r6326639 * r6326635;
        float r6326644 = r6326643 * r6326635;
        float r6326645 = r6326642 * r6326644;
        float r6326646 = r6326641 + r6326645;
        return r6326646;
}

double f_od(double x) {
        double r6326647 = 120.0;
        double r6326648 = x;
        double r6326649 = r6326647 * r6326648;
        double r6326650 = -160.0;
        double r6326651 = r6326648 * r6326648;
        double r6326652 = r6326651 * r6326648;
        double r6326653 = r6326650 * r6326652;
        double r6326654 = r6326649 + r6326653;
        double r6326655 = 32.0;
        double r6326656 = r6326652 * r6326648;
        double r6326657 = r6326656 * r6326648;
        double r6326658 = r6326655 * r6326657;
        double r6326659 = r6326654 + r6326658;
        return r6326659;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6326660, r6326661, r6326662, r6326663, r6326664, r6326665, r6326666, r6326667, r6326668, r6326669, r6326670, r6326671, r6326672;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6326660, "120.0", 10, MPFR_RNDN);
        mpfr_init(r6326661);
        mpfr_init(r6326662);
        mpfr_init_set_str(r6326663, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r6326664);
        mpfr_init(r6326665);
        mpfr_init(r6326666);
        mpfr_init(r6326667);
        mpfr_init_set_str(r6326668, "32.0", 10, MPFR_RNDN);
        mpfr_init(r6326669);
        mpfr_init(r6326670);
        mpfr_init(r6326671);
        mpfr_init(r6326672);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6326661, x, MPFR_RNDN);
        mpfr_mul(r6326662, r6326660, r6326661, MPFR_RNDN);
        ;
        mpfr_mul(r6326664, r6326661, r6326661, MPFR_RNDN);
        mpfr_mul(r6326665, r6326664, r6326661, MPFR_RNDN);
        mpfr_mul(r6326666, r6326663, r6326665, MPFR_RNDN);
        mpfr_add(r6326667, r6326662, r6326666, MPFR_RNDN);
        ;
        mpfr_mul(r6326669, r6326665, r6326661, MPFR_RNDN);
        mpfr_mul(r6326670, r6326669, r6326661, MPFR_RNDN);
        mpfr_mul(r6326671, r6326668, r6326670, MPFR_RNDN);
        mpfr_add(r6326672, r6326667, r6326671, MPFR_RNDN);
        return mpfr_get_d(r6326672, MPFR_RNDN);
}

static mpfr_t r6326673, r6326674, r6326675, r6326676, r6326677, r6326678, r6326679, r6326680, r6326681, r6326682, r6326683, r6326684, r6326685;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6326673, "120.0", 10, MPFR_RNDN);
        mpfr_init(r6326674);
        mpfr_init(r6326675);
        mpfr_init_set_str(r6326676, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r6326677);
        mpfr_init(r6326678);
        mpfr_init(r6326679);
        mpfr_init(r6326680);
        mpfr_init_set_str(r6326681, "32.0", 10, MPFR_RNDN);
        mpfr_init(r6326682);
        mpfr_init(r6326683);
        mpfr_init(r6326684);
        mpfr_init(r6326685);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6326674, x, MPFR_RNDN);
        mpfr_mul(r6326675, r6326673, r6326674, MPFR_RNDN);
        ;
        mpfr_mul(r6326677, r6326674, r6326674, MPFR_RNDN);
        mpfr_mul(r6326678, r6326677, r6326674, MPFR_RNDN);
        mpfr_mul(r6326679, r6326676, r6326678, MPFR_RNDN);
        mpfr_add(r6326680, r6326675, r6326679, MPFR_RNDN);
        ;
        mpfr_mul(r6326682, r6326678, r6326674, MPFR_RNDN);
        mpfr_mul(r6326683, r6326682, r6326674, MPFR_RNDN);
        mpfr_mul(r6326684, r6326681, r6326683, MPFR_RNDN);
        mpfr_add(r6326685, r6326680, r6326684, MPFR_RNDN);
        return mpfr_get_d(r6326685, MPFR_RNDN);
}

static mpfr_t r6326686, r6326687, r6326688, r6326689, r6326690, r6326691, r6326692, r6326693, r6326694, r6326695, r6326696, r6326697, r6326698;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6326686, "120.0", 10, MPFR_RNDN);
        mpfr_init(r6326687);
        mpfr_init(r6326688);
        mpfr_init_set_str(r6326689, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r6326690);
        mpfr_init(r6326691);
        mpfr_init(r6326692);
        mpfr_init(r6326693);
        mpfr_init_set_str(r6326694, "32.0", 10, MPFR_RNDN);
        mpfr_init(r6326695);
        mpfr_init(r6326696);
        mpfr_init(r6326697);
        mpfr_init(r6326698);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6326687, x, MPFR_RNDN);
        mpfr_mul(r6326688, r6326686, r6326687, MPFR_RNDN);
        ;
        mpfr_mul(r6326690, r6326687, r6326687, MPFR_RNDN);
        mpfr_mul(r6326691, r6326690, r6326687, MPFR_RNDN);
        mpfr_mul(r6326692, r6326689, r6326691, MPFR_RNDN);
        mpfr_add(r6326693, r6326688, r6326692, MPFR_RNDN);
        ;
        mpfr_mul(r6326695, r6326691, r6326687, MPFR_RNDN);
        mpfr_mul(r6326696, r6326695, r6326687, MPFR_RNDN);
        mpfr_mul(r6326697, r6326694, r6326696, MPFR_RNDN);
        mpfr_add(r6326698, r6326693, r6326697, MPFR_RNDN);
        return mpfr_get_d(r6326698, MPFR_RNDN);
}

