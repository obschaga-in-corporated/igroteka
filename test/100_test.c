#include "100.h"
#include "ctest.h"
#include <stdlib.h>
#include <stdio.h>
CTEST(quit_suite, quit)
{
    int rezult = quit();
    ASSERT_INTERVAL(-1, 1, rezult);
}
