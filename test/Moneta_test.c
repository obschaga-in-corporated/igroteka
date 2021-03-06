#include "Moneta.h"
#include "ctest.h"
#include <stdio.h>
#include <stdlib.h>


CTEST (Moneta, Correct) {
    int kol = 5;
    int *moneta = NULL;
    moneta = Moneta(kol, moneta);
    ASSERT_INTERVAL (-100, 100, *moneta);
}
CTEST (Mass, Correct) {
    int kol = 5;
    int *b = NULL;
    b = mass (kol, b);
    for (int i = 0; i < kol; i++) {
        ASSERT_EQUAL (0, b[i]);
    }
}

CTEST (Sumyou, Correct) {
    int num = 1;
    int *moneta = NULL;
    moneta = Moneta (2, moneta);
    int sumyou = 0;
    sumyou = yousum (num, moneta, sumyou);
    ASSERT_INTERVAL (-100, 100, sumyou);
}
CTEST (Hodcomp, Correct) {
    int b[4]={1, 1, 1, 0};
    int kol = 4;
    int num;
    num = comphod (kol, b);
    ASSERT_EQUAL (4, num);
}
CTEST (Hodcomp1, Correct) {
    int b[4]={0, 0, 0, 0};
    int kol = 4;
    int num;
    num = comphod (kol, b);
    ASSERT_INTERVAL (1, 4, num);
}
CTEST (Sumcomp, Correct) {
    int num = 1;
    int *moneta=NULL;
    int sumcomp = 0;
    moneta=Moneta(2, moneta);
    sumcomp = compsum (num, moneta, sumcomp);
    ASSERT_INTERVAL (-100, 100, sumcomp);
}
