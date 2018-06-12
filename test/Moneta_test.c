#include "Moneta.h"
#include "ctest.h"
#include <stdio.h>
#include <stdlib.h>

CTEST (Kolich, Correct) {
    int kol = Kolichestvo();
    ASSERT_INTERVAL (1,100, kol);
}
CTEST (Moneta, Correct) {
    int kol = 5;
    int *moneta=NULL;
    moneta = Moneta(kol, moneta);
    ASSERT_INTERVAL (-100, 100, *moneta);
}
