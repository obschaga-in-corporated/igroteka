#include "100.h"
#include "ctest.h"
#include <stdlib.h>
#include <stdio.h>

CTEST (Trust, Correct)
{
    int Count = 9;
    int Num = 9;
    Num = trust (Count, Num);
    ASSERT_INTERVAL (1, 10, Num);
}

CTEST (Comp, Correct)
{
    int Count = 100;
    Count = progress_comp (Count);
    ASSERT_INTERVAL (90, 99, Count);
}
