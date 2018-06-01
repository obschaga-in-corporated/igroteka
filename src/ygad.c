#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int number ()
{
    int num;
    srand(time(NULL));
    num =1 + rand() %100;
    return num;
}


void games ()
{
    int answer_user, num = number (), game, answer_comp= 50, tryCount = 0;    
    printf("Введите число: \n");
    scanf("%d", &answer_user);

    while (answer_user != num && answer_comp != num && tryCount < 5)
    {
        tryCount ++;
        printf("%d", answer_comp);
        printf ("Количество оставшихся попыток = %d\n", 6-tryCount);
    }
}
