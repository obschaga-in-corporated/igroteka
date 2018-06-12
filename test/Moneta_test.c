#include "Moneta.h"
#include "ctest.h"
#include <stdio.h>
#include <stdlib.h>

CTEST (Kolich, Correct) {
    int kol = Kolichestvo();
    ASSERT_INTERVAL (1,100, kol);
}
