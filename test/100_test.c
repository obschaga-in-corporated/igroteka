#include "100.h"
#include "ctest.h"
#include <stdlib.h>
#include <stdio.h>
CTEST(quit_suite, quit)
{
    int rezult = quit();
    ASSERT_INTERVAL(-1, 1, rezult);
}
CTEST(progress_user_suite, progress)
{
    int answer = 100;
    int rezult = progress_user(answer);
    ASSERT_INTERVAL(90, 99, rezult);
}
