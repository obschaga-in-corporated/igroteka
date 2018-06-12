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
CTEST(progress_user_prog_suite, progress)
{
    int answer = 56;
    int rezult = progress_user(answer);
    ASSERT_INTERVAL(-46,55, rezult);
}
CTEST (Trust, Correct)
{
    int Count = 11;
    int Num = 11;
    Num = trust (Count, Num);
    ASSERT_INTERVAL (1, 10, Num);
}
