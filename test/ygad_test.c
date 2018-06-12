#include "ygad.h"
#include "ctest.h"
#include <stdlib.h>
#include <stdio.h>

CTEST(power_suite, stupen) 
{
    //GIVEN
    int a = 4;
    
    //WHEN
    int rezult = power(a); 
    
    //THEN
    int expected = 16;

    ASSERT_EQUAL(expected, rezult);
}
