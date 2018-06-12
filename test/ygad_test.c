#include "ygad.h"
#include "ctest.h"
#include <stdlib.h>
#include <stdio.h>

CTEST(number_suite, numb) 
{
    
    //WHEN
    int rezult = number(); 

    ASSERT_INTERVAL(1, 100, rezult);
}

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

CTEST(output_suite, out) 
{

    //WHEN
    int rezult = output(); 

    ASSERT_INTERVAL(-1, 1, rezult);
}

CTEST(proverka_suite, trust) 
{
    //GIVEN
    int a = 58;
    
    //WHEN
    int rezult = proverka(a); 
    
    //THEN
    int expected = 58;

    ASSERT_EQUAL(expected, rezult);
}

CTEST(proverka_suite, otr_value) 
{
    //GIVEN
    int answer = -16;
    
    //WHEN
    int rezult = proverka(answer); 

    ASSERT_INTERVAL(1, 100, rezult);
}

CTEST(proverka_suite, big_value) 
{
    //GIVEN
    int answer = 456;
    
    //WHEN
    int rezult = proverka(answer); 

    ASSERT_INTERVAL(1, 100, rezult);
}

CTEST(user_hod_suite, hod_user) 
{
 
    //WHEN
    int rezult = user_hod(); 

    ASSERT_INTERVAL(1, 100, rezult);
}

CTEST(stroke_comp_suite, comp) 
{
    //GIVEN
    int answer_comp=75;
    int num=79;
    int try=3;
    
    //WHEN
    int rezult = stroke_comp(answer_comp,num,try); 
    
    //THEN
    int expected = 81;

    ASSERT_EQUAL(expected, rezult);
}

CTEST(stroke_comp_suite, comp_5try) 
{
    //GIVEN
    int answer_comp=16;
    int num=17;
    int try=5;
    
    //WHEN
    int rezult = stroke_comp(answer_comp,num,try); 

    ASSERT_INTERVAL(17,18, rezult);
}

