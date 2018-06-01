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

int stroke_user(int answer_user, int num)
{
    if (answer_user > num)
        printf("У вас перелет \n");
    else
        printf("У вас недолет \n");
    printf ("Введите новое число: \n");
    scanf("%d", &answer_user);
      
    return answer_user;
}

void games ()
{
    int answer_user, num = number (), game, answer_comp= 50, tryCount = 0;    
    printf("Введите число: \n");
    scanf("%d", &answer_user);

    while (answer_user != num && answer_comp != num && tryCount < 5)
    {
        tryCount ++;
        printf ("Количество оставшихся попыток = %d\n", 6-tryCount);
        answer_user = stroke_user(answer_user, num);
    }
}
