#include "Moneta.h"
#include "ctest.h"
#include <stdio.h>
#include <stdlib.h>

CTEST (Kolich, Correct) {
    int kol = Kolichestvo();
    ASSERT_INTERVAL (1, 100, kol);
}
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
CTEST (Hodyou, Correct) {
    int kol = 5;
    int b[5] = {1, 1, 0, 1, 1};
    int num = youhod (kol, b);
    ASSERT_EQUAL (3, num);
}
CTEST (Hodyou1, Correct) {
    int kol = 5;
    int b[5] = {0, 0, 0, 0, 0};
    int num = youhod (kol, b);
    ASSERT_INTERVAL (-1, 5, num);
}
CTEST (Sumyou, Correct) {
    int num = 1;
    int *moneta = NULL;
    moneta = Moneta (2, moneta);
    int sumyou = 0;
    sumyou = yousum (num, moneta, sumyou);
    ASSERT_INTERVAL (-100, 100, sumyou);
}
