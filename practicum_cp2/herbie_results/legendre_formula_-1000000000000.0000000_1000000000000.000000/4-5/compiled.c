#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7167594 = 1.875;
        float r7167595 = x;
        float r7167596 = r7167594 * r7167595;
        float r7167597 = -8.75;
        float r7167598 = r7167595 * r7167595;
        float r7167599 = r7167598 * r7167595;
        float r7167600 = r7167597 * r7167599;
        float r7167601 = r7167596 + r7167600;
        float r7167602 = 7.875;
        float r7167603 = r7167599 * r7167595;
        float r7167604 = r7167603 * r7167595;
        float r7167605 = r7167602 * r7167604;
        float r7167606 = r7167601 + r7167605;
        return r7167606;
}

double f_id(double x) {
        double r7167607 = 1.875;
        double r7167608 = x;
        double r7167609 = r7167607 * r7167608;
        double r7167610 = -8.75;
        double r7167611 = r7167608 * r7167608;
        double r7167612 = r7167611 * r7167608;
        double r7167613 = r7167610 * r7167612;
        double r7167614 = r7167609 + r7167613;
        double r7167615 = 7.875;
        double r7167616 = r7167612 * r7167608;
        double r7167617 = r7167616 * r7167608;
        double r7167618 = r7167615 * r7167617;
        double r7167619 = r7167614 + r7167618;
        return r7167619;
}


double f_of(float x) {
        float r7167620 = 1.875;
        float r7167621 = x;
        float r7167622 = r7167620 * r7167621;
        float r7167623 = -8.75;
        float r7167624 = r7167621 * r7167621;
        float r7167625 = r7167624 * r7167621;
        float r7167626 = r7167623 * r7167625;
        float r7167627 = r7167622 + r7167626;
        float r7167628 = 7.875;
        float r7167629 = 3;
        float r7167630 = pow(r7167621, r7167629);
        float r7167631 = r7167630 * r7167621;
        float r7167632 = r7167631 * r7167621;
        float r7167633 = r7167628 * r7167632;
        float r7167634 = r7167627 + r7167633;
        return r7167634;
}

double f_od(double x) {
        double r7167635 = 1.875;
        double r7167636 = x;
        double r7167637 = r7167635 * r7167636;
        double r7167638 = -8.75;
        double r7167639 = r7167636 * r7167636;
        double r7167640 = r7167639 * r7167636;
        double r7167641 = r7167638 * r7167640;
        double r7167642 = r7167637 + r7167641;
        double r7167643 = 7.875;
        double r7167644 = 3;
        double r7167645 = pow(r7167636, r7167644);
        double r7167646 = r7167645 * r7167636;
        double r7167647 = r7167646 * r7167636;
        double r7167648 = r7167643 * r7167647;
        double r7167649 = r7167642 + r7167648;
        return r7167649;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7167650, r7167651, r7167652, r7167653, r7167654, r7167655, r7167656, r7167657, r7167658, r7167659, r7167660, r7167661, r7167662;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7167650, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7167651);
        mpfr_init(r7167652);
        mpfr_init_set_str(r7167653, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7167654);
        mpfr_init(r7167655);
        mpfr_init(r7167656);
        mpfr_init(r7167657);
        mpfr_init_set_str(r7167658, "7.875", 10, MPFR_RNDN);
        mpfr_init(r7167659);
        mpfr_init(r7167660);
        mpfr_init(r7167661);
        mpfr_init(r7167662);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7167651, x, MPFR_RNDN);
        mpfr_mul(r7167652, r7167650, r7167651, MPFR_RNDN);
        ;
        mpfr_mul(r7167654, r7167651, r7167651, MPFR_RNDN);
        mpfr_mul(r7167655, r7167654, r7167651, MPFR_RNDN);
        mpfr_mul(r7167656, r7167653, r7167655, MPFR_RNDN);
        mpfr_add(r7167657, r7167652, r7167656, MPFR_RNDN);
        ;
        mpfr_mul(r7167659, r7167655, r7167651, MPFR_RNDN);
        mpfr_mul(r7167660, r7167659, r7167651, MPFR_RNDN);
        mpfr_mul(r7167661, r7167658, r7167660, MPFR_RNDN);
        mpfr_add(r7167662, r7167657, r7167661, MPFR_RNDN);
        return mpfr_get_d(r7167662, MPFR_RNDN);
}

static mpfr_t r7167663, r7167664, r7167665, r7167666, r7167667, r7167668, r7167669, r7167670, r7167671, r7167672, r7167673, r7167674, r7167675, r7167676, r7167677;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7167663, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7167664);
        mpfr_init(r7167665);
        mpfr_init_set_str(r7167666, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7167667);
        mpfr_init(r7167668);
        mpfr_init(r7167669);
        mpfr_init(r7167670);
        mpfr_init_set_str(r7167671, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167672, "3", 10, MPFR_RNDN);
        mpfr_init(r7167673);
        mpfr_init(r7167674);
        mpfr_init(r7167675);
        mpfr_init(r7167676);
        mpfr_init(r7167677);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7167664, x, MPFR_RNDN);
        mpfr_mul(r7167665, r7167663, r7167664, MPFR_RNDN);
        ;
        mpfr_mul(r7167667, r7167664, r7167664, MPFR_RNDN);
        mpfr_mul(r7167668, r7167667, r7167664, MPFR_RNDN);
        mpfr_mul(r7167669, r7167666, r7167668, MPFR_RNDN);
        mpfr_add(r7167670, r7167665, r7167669, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7167673, r7167664, r7167672, MPFR_RNDN);
        mpfr_mul(r7167674, r7167673, r7167664, MPFR_RNDN);
        mpfr_mul(r7167675, r7167674, r7167664, MPFR_RNDN);
        mpfr_mul(r7167676, r7167671, r7167675, MPFR_RNDN);
        mpfr_add(r7167677, r7167670, r7167676, MPFR_RNDN);
        return mpfr_get_d(r7167677, MPFR_RNDN);
}

static mpfr_t r7167678, r7167679, r7167680, r7167681, r7167682, r7167683, r7167684, r7167685, r7167686, r7167687, r7167688, r7167689, r7167690, r7167691, r7167692;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7167678, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7167679);
        mpfr_init(r7167680);
        mpfr_init_set_str(r7167681, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7167682);
        mpfr_init(r7167683);
        mpfr_init(r7167684);
        mpfr_init(r7167685);
        mpfr_init_set_str(r7167686, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167687, "3", 10, MPFR_RNDN);
        mpfr_init(r7167688);
        mpfr_init(r7167689);
        mpfr_init(r7167690);
        mpfr_init(r7167691);
        mpfr_init(r7167692);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7167679, x, MPFR_RNDN);
        mpfr_mul(r7167680, r7167678, r7167679, MPFR_RNDN);
        ;
        mpfr_mul(r7167682, r7167679, r7167679, MPFR_RNDN);
        mpfr_mul(r7167683, r7167682, r7167679, MPFR_RNDN);
        mpfr_mul(r7167684, r7167681, r7167683, MPFR_RNDN);
        mpfr_add(r7167685, r7167680, r7167684, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7167688, r7167679, r7167687, MPFR_RNDN);
        mpfr_mul(r7167689, r7167688, r7167679, MPFR_RNDN);
        mpfr_mul(r7167690, r7167689, r7167679, MPFR_RNDN);
        mpfr_mul(r7167691, r7167686, r7167690, MPFR_RNDN);
        mpfr_add(r7167692, r7167685, r7167691, MPFR_RNDN);
        return mpfr_get_d(r7167692, MPFR_RNDN);
}

