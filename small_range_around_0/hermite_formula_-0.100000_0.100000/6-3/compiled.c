#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6326780 = -12.0;
        float r6326781 = x;
        float r6326782 = r6326780 * r6326781;
        float r6326783 = 8.0;
        float r6326784 = r6326781 * r6326781;
        float r6326785 = r6326784 * r6326781;
        float r6326786 = r6326783 * r6326785;
        float r6326787 = r6326782 + r6326786;
        return r6326787;
}

double f_id(double x) {
        double r6326788 = -12.0;
        double r6326789 = x;
        double r6326790 = r6326788 * r6326789;
        double r6326791 = 8.0;
        double r6326792 = r6326789 * r6326789;
        double r6326793 = r6326792 * r6326789;
        double r6326794 = r6326791 * r6326793;
        double r6326795 = r6326790 + r6326794;
        return r6326795;
}


double f_of(float x) {
        float r6326796 = -12.0;
        float r6326797 = x;
        float r6326798 = r6326796 * r6326797;
        float r6326799 = 8.0;
        float r6326800 = r6326797 * r6326797;
        float r6326801 = r6326800 * r6326797;
        float r6326802 = r6326799 * r6326801;
        float r6326803 = r6326798 + r6326802;
        return r6326803;
}

double f_od(double x) {
        double r6326804 = -12.0;
        double r6326805 = x;
        double r6326806 = r6326804 * r6326805;
        double r6326807 = 8.0;
        double r6326808 = r6326805 * r6326805;
        double r6326809 = r6326808 * r6326805;
        double r6326810 = r6326807 * r6326809;
        double r6326811 = r6326806 + r6326810;
        return r6326811;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6326812, r6326813, r6326814, r6326815, r6326816, r6326817, r6326818, r6326819;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6326812, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6326813);
        mpfr_init(r6326814);
        mpfr_init_set_str(r6326815, "8.0", 10, MPFR_RNDN);
        mpfr_init(r6326816);
        mpfr_init(r6326817);
        mpfr_init(r6326818);
        mpfr_init(r6326819);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6326813, x, MPFR_RNDN);
        mpfr_mul(r6326814, r6326812, r6326813, MPFR_RNDN);
        ;
        mpfr_mul(r6326816, r6326813, r6326813, MPFR_RNDN);
        mpfr_mul(r6326817, r6326816, r6326813, MPFR_RNDN);
        mpfr_mul(r6326818, r6326815, r6326817, MPFR_RNDN);
        mpfr_add(r6326819, r6326814, r6326818, MPFR_RNDN);
        return mpfr_get_d(r6326819, MPFR_RNDN);
}

static mpfr_t r6326820, r6326821, r6326822, r6326823, r6326824, r6326825, r6326826, r6326827;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6326820, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6326821);
        mpfr_init(r6326822);
        mpfr_init_set_str(r6326823, "8.0", 10, MPFR_RNDN);
        mpfr_init(r6326824);
        mpfr_init(r6326825);
        mpfr_init(r6326826);
        mpfr_init(r6326827);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6326821, x, MPFR_RNDN);
        mpfr_mul(r6326822, r6326820, r6326821, MPFR_RNDN);
        ;
        mpfr_mul(r6326824, r6326821, r6326821, MPFR_RNDN);
        mpfr_mul(r6326825, r6326824, r6326821, MPFR_RNDN);
        mpfr_mul(r6326826, r6326823, r6326825, MPFR_RNDN);
        mpfr_add(r6326827, r6326822, r6326826, MPFR_RNDN);
        return mpfr_get_d(r6326827, MPFR_RNDN);
}

static mpfr_t r6326828, r6326829, r6326830, r6326831, r6326832, r6326833, r6326834, r6326835;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6326828, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r6326829);
        mpfr_init(r6326830);
        mpfr_init_set_str(r6326831, "8.0", 10, MPFR_RNDN);
        mpfr_init(r6326832);
        mpfr_init(r6326833);
        mpfr_init(r6326834);
        mpfr_init(r6326835);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6326829, x, MPFR_RNDN);
        mpfr_mul(r6326830, r6326828, r6326829, MPFR_RNDN);
        ;
        mpfr_mul(r6326832, r6326829, r6326829, MPFR_RNDN);
        mpfr_mul(r6326833, r6326832, r6326829, MPFR_RNDN);
        mpfr_mul(r6326834, r6326831, r6326833, MPFR_RNDN);
        mpfr_add(r6326835, r6326830, r6326834, MPFR_RNDN);
        return mpfr_get_d(r6326835, MPFR_RNDN);
}

