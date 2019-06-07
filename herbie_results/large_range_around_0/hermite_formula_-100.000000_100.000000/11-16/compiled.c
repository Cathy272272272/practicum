#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r7080896 = 518918400.0;
        float r7080897 = -8302694400.0;
        float r7080898 = x;
        float r7080899 = r7080898 * r7080898;
        float r7080900 = r7080897 * r7080899;
        float r7080901 = r7080896 + r7080900;
        float r7080902 = 19372953600.0;
        float r7080903 = r7080899 * r7080898;
        float r7080904 = r7080903 * r7080898;
        float r7080905 = r7080902 * r7080904;
        float r7080906 = r7080901 + r7080905;
        float r7080907 = -15498362880.0;
        float r7080908 = r7080904 * r7080898;
        float r7080909 = r7080908 * r7080898;
        float r7080910 = r7080907 * r7080909;
        float r7080911 = r7080906 + r7080910;
        float r7080912 = 5535129600.0;
        float r7080913 = r7080909 * r7080898;
        float r7080914 = r7080913 * r7080898;
        float r7080915 = r7080912 * r7080914;
        float r7080916 = r7080911 + r7080915;
        float r7080917 = -984023040.0;
        float r7080918 = r7080914 * r7080898;
        float r7080919 = r7080918 * r7080898;
        float r7080920 = r7080917 * r7080919;
        float r7080921 = r7080916 + r7080920;
        float r7080922 = 89456640.0;
        float r7080923 = r7080919 * r7080898;
        float r7080924 = r7080923 * r7080898;
        float r7080925 = r7080922 * r7080924;
        float r7080926 = r7080921 + r7080925;
        float r7080927 = -3932160.0;
        float r7080928 = r7080924 * r7080898;
        float r7080929 = r7080928 * r7080898;
        float r7080930 = r7080927 * r7080929;
        float r7080931 = r7080926 + r7080930;
        float r7080932 = 65536.0;
        float r7080933 = r7080929 * r7080898;
        float r7080934 = r7080933 * r7080898;
        float r7080935 = r7080932 * r7080934;
        float r7080936 = r7080931 + r7080935;
        return r7080936;
}

double f_id(double x) {
        double r7080937 = 518918400.0;
        double r7080938 = -8302694400.0;
        double r7080939 = x;
        double r7080940 = r7080939 * r7080939;
        double r7080941 = r7080938 * r7080940;
        double r7080942 = r7080937 + r7080941;
        double r7080943 = 19372953600.0;
        double r7080944 = r7080940 * r7080939;
        double r7080945 = r7080944 * r7080939;
        double r7080946 = r7080943 * r7080945;
        double r7080947 = r7080942 + r7080946;
        double r7080948 = -15498362880.0;
        double r7080949 = r7080945 * r7080939;
        double r7080950 = r7080949 * r7080939;
        double r7080951 = r7080948 * r7080950;
        double r7080952 = r7080947 + r7080951;
        double r7080953 = 5535129600.0;
        double r7080954 = r7080950 * r7080939;
        double r7080955 = r7080954 * r7080939;
        double r7080956 = r7080953 * r7080955;
        double r7080957 = r7080952 + r7080956;
        double r7080958 = -984023040.0;
        double r7080959 = r7080955 * r7080939;
        double r7080960 = r7080959 * r7080939;
        double r7080961 = r7080958 * r7080960;
        double r7080962 = r7080957 + r7080961;
        double r7080963 = 89456640.0;
        double r7080964 = r7080960 * r7080939;
        double r7080965 = r7080964 * r7080939;
        double r7080966 = r7080963 * r7080965;
        double r7080967 = r7080962 + r7080966;
        double r7080968 = -3932160.0;
        double r7080969 = r7080965 * r7080939;
        double r7080970 = r7080969 * r7080939;
        double r7080971 = r7080968 * r7080970;
        double r7080972 = r7080967 + r7080971;
        double r7080973 = 65536.0;
        double r7080974 = r7080970 * r7080939;
        double r7080975 = r7080974 * r7080939;
        double r7080976 = r7080973 * r7080975;
        double r7080977 = r7080972 + r7080976;
        return r7080977;
}


double f_of(float x) {
        float r7080978 = x;
        float r7080979 = r7080978 * r7080978;
        float r7080980 = 3;
        float r7080981 = pow(r7080979, r7080980);
        float r7080982 = r7080979 * r7080979;
        float r7080983 = r7080981 * r7080982;
        float r7080984 = r7080983 * r7080982;
        float r7080985 = -3932160.0;
        float r7080986 = 65536.0;
        float r7080987 = r7080978 * r7080986;
        float r7080988 = r7080978 * r7080987;
        float r7080989 = r7080985 + r7080988;
        float r7080990 = r7080984 * r7080989;
        float r7080991 = -8302694400.0;
        float r7080992 = r7080978 * r7080991;
        float r7080993 = r7080992 * r7080978;
        float r7080994 = 518918400.0;
        float r7080995 = r7080993 + r7080994;
        float r7080996 = -15498362880.0;
        float r7080997 = r7080996 * r7080978;
        float r7080998 = r7080978 * r7080997;
        float r7080999 = 19372953600.0;
        float r7081000 = r7080998 + r7080999;
        float r7081001 = r7080982 * r7081000;
        float r7081002 = r7080995 + r7081001;
        float r7081003 = r7080990 + r7081002;
        float r7081004 = r7080982 * r7080982;
        float r7081005 = 5535129600.0;
        float r7081006 = -984023040.0;
        float r7081007 = r7081006 * r7080979;
        float r7081008 = r7081005 + r7081007;
        float r7081009 = r7081004 * r7081008;
        float r7081010 = 12;
        float r7081011 = pow(r7080978, r7081010);
        float r7081012 = 89456640.0;
        float r7081013 = r7081011 * r7081012;
        float r7081014 = r7081009 + r7081013;
        float r7081015 = r7081003 + r7081014;
        return r7081015;
}

double f_od(double x) {
        double r7081016 = x;
        double r7081017 = r7081016 * r7081016;
        double r7081018 = 3;
        double r7081019 = pow(r7081017, r7081018);
        double r7081020 = r7081017 * r7081017;
        double r7081021 = r7081019 * r7081020;
        double r7081022 = r7081021 * r7081020;
        double r7081023 = -3932160.0;
        double r7081024 = 65536.0;
        double r7081025 = r7081016 * r7081024;
        double r7081026 = r7081016 * r7081025;
        double r7081027 = r7081023 + r7081026;
        double r7081028 = r7081022 * r7081027;
        double r7081029 = -8302694400.0;
        double r7081030 = r7081016 * r7081029;
        double r7081031 = r7081030 * r7081016;
        double r7081032 = 518918400.0;
        double r7081033 = r7081031 + r7081032;
        double r7081034 = -15498362880.0;
        double r7081035 = r7081034 * r7081016;
        double r7081036 = r7081016 * r7081035;
        double r7081037 = 19372953600.0;
        double r7081038 = r7081036 + r7081037;
        double r7081039 = r7081020 * r7081038;
        double r7081040 = r7081033 + r7081039;
        double r7081041 = r7081028 + r7081040;
        double r7081042 = r7081020 * r7081020;
        double r7081043 = 5535129600.0;
        double r7081044 = -984023040.0;
        double r7081045 = r7081044 * r7081017;
        double r7081046 = r7081043 + r7081045;
        double r7081047 = r7081042 * r7081046;
        double r7081048 = 12;
        double r7081049 = pow(r7081016, r7081048);
        double r7081050 = 89456640.0;
        double r7081051 = r7081049 * r7081050;
        double r7081052 = r7081047 + r7081051;
        double r7081053 = r7081041 + r7081052;
        return r7081053;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7081054, r7081055, r7081056, r7081057, r7081058, r7081059, r7081060, r7081061, r7081062, r7081063, r7081064, r7081065, r7081066, r7081067, r7081068, r7081069, r7081070, r7081071, r7081072, r7081073, r7081074, r7081075, r7081076, r7081077, r7081078, r7081079, r7081080, r7081081, r7081082, r7081083, r7081084, r7081085, r7081086, r7081087, r7081088, r7081089, r7081090, r7081091, r7081092, r7081093, r7081094;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7081054, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7081055, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7081056);
        mpfr_init(r7081057);
        mpfr_init(r7081058);
        mpfr_init(r7081059);
        mpfr_init_set_str(r7081060, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r7081061);
        mpfr_init(r7081062);
        mpfr_init(r7081063);
        mpfr_init(r7081064);
        mpfr_init_set_str(r7081065, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7081066);
        mpfr_init(r7081067);
        mpfr_init(r7081068);
        mpfr_init(r7081069);
        mpfr_init_set_str(r7081070, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r7081071);
        mpfr_init(r7081072);
        mpfr_init(r7081073);
        mpfr_init(r7081074);
        mpfr_init_set_str(r7081075, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r7081076);
        mpfr_init(r7081077);
        mpfr_init(r7081078);
        mpfr_init(r7081079);
        mpfr_init_set_str(r7081080, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7081081);
        mpfr_init(r7081082);
        mpfr_init(r7081083);
        mpfr_init(r7081084);
        mpfr_init_set_str(r7081085, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r7081086);
        mpfr_init(r7081087);
        mpfr_init(r7081088);
        mpfr_init(r7081089);
        mpfr_init_set_str(r7081090, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7081091);
        mpfr_init(r7081092);
        mpfr_init(r7081093);
        mpfr_init(r7081094);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7081056, x, MPFR_RNDN);
        mpfr_mul(r7081057, r7081056, r7081056, MPFR_RNDN);
        mpfr_mul(r7081058, r7081055, r7081057, MPFR_RNDN);
        mpfr_add(r7081059, r7081054, r7081058, MPFR_RNDN);
        ;
        mpfr_mul(r7081061, r7081057, r7081056, MPFR_RNDN);
        mpfr_mul(r7081062, r7081061, r7081056, MPFR_RNDN);
        mpfr_mul(r7081063, r7081060, r7081062, MPFR_RNDN);
        mpfr_add(r7081064, r7081059, r7081063, MPFR_RNDN);
        ;
        mpfr_mul(r7081066, r7081062, r7081056, MPFR_RNDN);
        mpfr_mul(r7081067, r7081066, r7081056, MPFR_RNDN);
        mpfr_mul(r7081068, r7081065, r7081067, MPFR_RNDN);
        mpfr_add(r7081069, r7081064, r7081068, MPFR_RNDN);
        ;
        mpfr_mul(r7081071, r7081067, r7081056, MPFR_RNDN);
        mpfr_mul(r7081072, r7081071, r7081056, MPFR_RNDN);
        mpfr_mul(r7081073, r7081070, r7081072, MPFR_RNDN);
        mpfr_add(r7081074, r7081069, r7081073, MPFR_RNDN);
        ;
        mpfr_mul(r7081076, r7081072, r7081056, MPFR_RNDN);
        mpfr_mul(r7081077, r7081076, r7081056, MPFR_RNDN);
        mpfr_mul(r7081078, r7081075, r7081077, MPFR_RNDN);
        mpfr_add(r7081079, r7081074, r7081078, MPFR_RNDN);
        ;
        mpfr_mul(r7081081, r7081077, r7081056, MPFR_RNDN);
        mpfr_mul(r7081082, r7081081, r7081056, MPFR_RNDN);
        mpfr_mul(r7081083, r7081080, r7081082, MPFR_RNDN);
        mpfr_add(r7081084, r7081079, r7081083, MPFR_RNDN);
        ;
        mpfr_mul(r7081086, r7081082, r7081056, MPFR_RNDN);
        mpfr_mul(r7081087, r7081086, r7081056, MPFR_RNDN);
        mpfr_mul(r7081088, r7081085, r7081087, MPFR_RNDN);
        mpfr_add(r7081089, r7081084, r7081088, MPFR_RNDN);
        ;
        mpfr_mul(r7081091, r7081087, r7081056, MPFR_RNDN);
        mpfr_mul(r7081092, r7081091, r7081056, MPFR_RNDN);
        mpfr_mul(r7081093, r7081090, r7081092, MPFR_RNDN);
        mpfr_add(r7081094, r7081089, r7081093, MPFR_RNDN);
        return mpfr_get_d(r7081094, MPFR_RNDN);
}

static mpfr_t r7081095, r7081096, r7081097, r7081098, r7081099, r7081100, r7081101, r7081102, r7081103, r7081104, r7081105, r7081106, r7081107, r7081108, r7081109, r7081110, r7081111, r7081112, r7081113, r7081114, r7081115, r7081116, r7081117, r7081118, r7081119, r7081120, r7081121, r7081122, r7081123, r7081124, r7081125, r7081126, r7081127, r7081128, r7081129, r7081130, r7081131, r7081132;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7081095);
        mpfr_init(r7081096);
        mpfr_init_set_str(r7081097, "3", 10, MPFR_RNDN);
        mpfr_init(r7081098);
        mpfr_init(r7081099);
        mpfr_init(r7081100);
        mpfr_init(r7081101);
        mpfr_init_set_str(r7081102, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7081103, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7081104);
        mpfr_init(r7081105);
        mpfr_init(r7081106);
        mpfr_init(r7081107);
        mpfr_init_set_str(r7081108, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7081109);
        mpfr_init(r7081110);
        mpfr_init_set_str(r7081111, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7081112);
        mpfr_init_set_str(r7081113, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7081114);
        mpfr_init(r7081115);
        mpfr_init_set_str(r7081116, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r7081117);
        mpfr_init(r7081118);
        mpfr_init(r7081119);
        mpfr_init(r7081120);
        mpfr_init(r7081121);
        mpfr_init_set_str(r7081122, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7081123, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r7081124);
        mpfr_init(r7081125);
        mpfr_init(r7081126);
        mpfr_init_set_str(r7081127, "12", 10, MPFR_RNDN);
        mpfr_init(r7081128);
        mpfr_init_set_str(r7081129, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7081130);
        mpfr_init(r7081131);
        mpfr_init(r7081132);
}

double f_fm(double x) {
        mpfr_set_d(r7081095, x, MPFR_RNDN);
        mpfr_mul(r7081096, r7081095, r7081095, MPFR_RNDN);
        ;
        mpfr_pow(r7081098, r7081096, r7081097, MPFR_RNDN);
        mpfr_mul(r7081099, r7081096, r7081096, MPFR_RNDN);
        mpfr_mul(r7081100, r7081098, r7081099, MPFR_RNDN);
        mpfr_mul(r7081101, r7081100, r7081099, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7081104, r7081095, r7081103, MPFR_RNDN);
        mpfr_mul(r7081105, r7081095, r7081104, MPFR_RNDN);
        mpfr_add(r7081106, r7081102, r7081105, MPFR_RNDN);
        mpfr_mul(r7081107, r7081101, r7081106, MPFR_RNDN);
        ;
        mpfr_mul(r7081109, r7081095, r7081108, MPFR_RNDN);
        mpfr_mul(r7081110, r7081109, r7081095, MPFR_RNDN);
        ;
        mpfr_add(r7081112, r7081110, r7081111, MPFR_RNDN);
        ;
        mpfr_mul(r7081114, r7081113, r7081095, MPFR_RNDN);
        mpfr_mul(r7081115, r7081095, r7081114, MPFR_RNDN);
        ;
        mpfr_add(r7081117, r7081115, r7081116, MPFR_RNDN);
        mpfr_mul(r7081118, r7081099, r7081117, MPFR_RNDN);
        mpfr_add(r7081119, r7081112, r7081118, MPFR_RNDN);
        mpfr_add(r7081120, r7081107, r7081119, MPFR_RNDN);
        mpfr_mul(r7081121, r7081099, r7081099, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7081124, r7081123, r7081096, MPFR_RNDN);
        mpfr_add(r7081125, r7081122, r7081124, MPFR_RNDN);
        mpfr_mul(r7081126, r7081121, r7081125, MPFR_RNDN);
        ;
        mpfr_pow(r7081128, r7081095, r7081127, MPFR_RNDN);
        ;
        mpfr_mul(r7081130, r7081128, r7081129, MPFR_RNDN);
        mpfr_add(r7081131, r7081126, r7081130, MPFR_RNDN);
        mpfr_add(r7081132, r7081120, r7081131, MPFR_RNDN);
        return mpfr_get_d(r7081132, MPFR_RNDN);
}

static mpfr_t r7081133, r7081134, r7081135, r7081136, r7081137, r7081138, r7081139, r7081140, r7081141, r7081142, r7081143, r7081144, r7081145, r7081146, r7081147, r7081148, r7081149, r7081150, r7081151, r7081152, r7081153, r7081154, r7081155, r7081156, r7081157, r7081158, r7081159, r7081160, r7081161, r7081162, r7081163, r7081164, r7081165, r7081166, r7081167, r7081168, r7081169, r7081170;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7081133);
        mpfr_init(r7081134);
        mpfr_init_set_str(r7081135, "3", 10, MPFR_RNDN);
        mpfr_init(r7081136);
        mpfr_init(r7081137);
        mpfr_init(r7081138);
        mpfr_init(r7081139);
        mpfr_init_set_str(r7081140, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7081141, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r7081142);
        mpfr_init(r7081143);
        mpfr_init(r7081144);
        mpfr_init(r7081145);
        mpfr_init_set_str(r7081146, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r7081147);
        mpfr_init(r7081148);
        mpfr_init_set_str(r7081149, "518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7081150);
        mpfr_init_set_str(r7081151, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r7081152);
        mpfr_init(r7081153);
        mpfr_init_set_str(r7081154, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r7081155);
        mpfr_init(r7081156);
        mpfr_init(r7081157);
        mpfr_init(r7081158);
        mpfr_init(r7081159);
        mpfr_init_set_str(r7081160, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7081161, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r7081162);
        mpfr_init(r7081163);
        mpfr_init(r7081164);
        mpfr_init_set_str(r7081165, "12", 10, MPFR_RNDN);
        mpfr_init(r7081166);
        mpfr_init_set_str(r7081167, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r7081168);
        mpfr_init(r7081169);
        mpfr_init(r7081170);
}

double f_dm(double x) {
        mpfr_set_d(r7081133, x, MPFR_RNDN);
        mpfr_mul(r7081134, r7081133, r7081133, MPFR_RNDN);
        ;
        mpfr_pow(r7081136, r7081134, r7081135, MPFR_RNDN);
        mpfr_mul(r7081137, r7081134, r7081134, MPFR_RNDN);
        mpfr_mul(r7081138, r7081136, r7081137, MPFR_RNDN);
        mpfr_mul(r7081139, r7081138, r7081137, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7081142, r7081133, r7081141, MPFR_RNDN);
        mpfr_mul(r7081143, r7081133, r7081142, MPFR_RNDN);
        mpfr_add(r7081144, r7081140, r7081143, MPFR_RNDN);
        mpfr_mul(r7081145, r7081139, r7081144, MPFR_RNDN);
        ;
        mpfr_mul(r7081147, r7081133, r7081146, MPFR_RNDN);
        mpfr_mul(r7081148, r7081147, r7081133, MPFR_RNDN);
        ;
        mpfr_add(r7081150, r7081148, r7081149, MPFR_RNDN);
        ;
        mpfr_mul(r7081152, r7081151, r7081133, MPFR_RNDN);
        mpfr_mul(r7081153, r7081133, r7081152, MPFR_RNDN);
        ;
        mpfr_add(r7081155, r7081153, r7081154, MPFR_RNDN);
        mpfr_mul(r7081156, r7081137, r7081155, MPFR_RNDN);
        mpfr_add(r7081157, r7081150, r7081156, MPFR_RNDN);
        mpfr_add(r7081158, r7081145, r7081157, MPFR_RNDN);
        mpfr_mul(r7081159, r7081137, r7081137, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7081162, r7081161, r7081134, MPFR_RNDN);
        mpfr_add(r7081163, r7081160, r7081162, MPFR_RNDN);
        mpfr_mul(r7081164, r7081159, r7081163, MPFR_RNDN);
        ;
        mpfr_pow(r7081166, r7081133, r7081165, MPFR_RNDN);
        ;
        mpfr_mul(r7081168, r7081166, r7081167, MPFR_RNDN);
        mpfr_add(r7081169, r7081164, r7081168, MPFR_RNDN);
        mpfr_add(r7081170, r7081158, r7081169, MPFR_RNDN);
        return mpfr_get_d(r7081170, MPFR_RNDN);
}

