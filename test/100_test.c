#include "100.h"
#include "ctest.h"
#include <stdlib.h>
#include <stdio.h>

CTEST (Trust, Correct)
{
    int Count = 11;
    int Num = 11;
    Num = trust (Count, Num);
    ASSERT_INTERVAL (1, 10, Num);
}

CTEST (Comp, Correct)
{
    int Count = 100;
    Count = progress_comp (Count);
    ASSERT_INTERVAL (90, 99, Count);
}
